// pwg
// See LICENSE file for copyright and license details.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#include "config.h"
#include "charsets.h"

char *pwgenerator(void) {
    char *password = malloc(pwlength);
    char *buff = password;
    srand(time(0));
    for(int numCon = 0; numCon < pwlength; numCon++) {
        char randchar = charset[rand() % 62];
        *buff++ = randchar;
    }
    return password;
}

char numCounter(char *password) {
    numcount = 0;
    for(int x = 0; x <= pwlength; x++) {
        for(int y = 0; y <= 9; y++) {
            if(numerals[y] == password[x]) {
                numcount++;
            }
        }
    }

    if(numcount >= minNum) {
        printf("%s\n", password);
        exit(0);
    }
}

char helpMessage(void) {
    fprintf(stderr, "pwg options:\n");
    fprintf(stderr, "\t-m  single password output\n");
    fprintf(stderr, "\t-l  length of output password\n");
    fprintf(stderr, "\t-a  amount of passwords to output\n");
    fprintf(stderr, "\t-n  amount of number to check for in single password output\n");
    fprintf(stderr, "\t-h  show available arguments\n");
    fprintf(stderr, "use 'man pwg' for more information\n");
}

int main(int argc, char *argv[]) {
    srand(time(NULL));
    for(int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-m") == 0) {
            passwordAmount = 1;
        } else if(strcmp(argv[i], "-h") == 0) {
            helpMessage();
            return 0;
        } else if(strcmp(argv[i], "-a") == 0) {
            i++;
            passwordAmount = atoi(argv[i]);
        } else if(strcmp(argv[i], "-l") == 0) {
            i++;
            pwlength = atoi(argv[i]);
            if(atoi(argv[i]) < 5) {
                fprintf(stderr, "a longer password is suggested!\n");
            }
            printf("%i", pwlength);
        } else if(strcmp(argv[i], "-n") == 0) {
            i++;
            minNum = atoi(argv[i]);
        }
    }

    if(passwordAmount == 1) {
        while(numcount < minNum) {
            numCounter(pwgenerator());
        }

    } else if(passwordAmount > 1) {
        int spaceNum = 0;
        for(int numConOne = 0; numConOne < passwordAmount; numConOne++) {
            for(int numCon = 0; numCon < pwlength; numCon++) {
                printf("%c", charset[rand() % 62]);
            }

            if(spaceNum == 4) {
                printf("\n");
                spaceNum = 0;
            } else {
                putchar(' ');
                spaceNum++;
            }
        }

        if(passwordAmount % 5 != 0) {
            fprintf(stderr, "\n");
        }
    }

    return 0;
}
