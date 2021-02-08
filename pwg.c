#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#include "config.h"
#include "charsets.h"

int main(int argc, char *argv[]) {
    //printf("%d\n", sizeof(charset[62]) / sizeof(*charset));
    for(int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-m") == 0) {
            multiple = false;
        } else if(strcmp(argv[i], "-h") == 0) {
            printf("pwg options:\nsingle password(-m)\nlength of password(-l)\namount of passwords(-a)\n");
            return 0;
        }  else if(strcmp(argv[i], "-a") == 0) {
            i++;
            passwordAmount = atoi(argv[i]);
        } else if(strcmp(argv[i], "-l") == 0) {
            i++;
            if(atoi(argv[i]) < 5) {
                printf("a longer password is suggested!\n");
            }
            pwlength = atoi(argv[i]);
        }
    }

    if(multiple == true) {
        int spaceNum = 0;
        srand(time(0)); 
        for(int numConOne = 0; numConOne < passwordAmount; numConOne++) {
            for(int numCon = 0; numCon < pwlength; numCon++) {
                int randomIndex = (rand() % (62 - 0));
                printf("%c", charset[randomIndex]);
            }

            if(spaceNum == 4) {
                printf("\n");
                spaceNum = 0;
            } else if(passwordAmount <= spaceNum) {
                printf(" ");
                spaceNum++;
            } else if(passwordAmount >= spaceNum) {
                printf(" ");
                spaceNum++;
            } 
        }
        if(passwordAmount % 5 != 0) {
            printf("\n");
        }
    } else if(multiple == false) {
        srand(time(0)); 
        for(int numCon = 0; numCon < pwlength; numCon++) {
            int randomIndex = (rand() % (62 - 0));
            printf("%c", charset[randomIndex]);
        }
        printf("\n");
    }
    return 0;
}
