#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "config.h"
#include "charsets.h"

int main(int argc, char *argv[]) {
    for(int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-m") == 0) {
            multiple = 0;
        } else if(strcmp(argv[i], "-h") == 0) {
            printf("---pwg---\n");
            printf("command (length of password) (multiple passwords 0, 1)\n");
            printf("example: pwg 15 1\n");
            return 0;
        }  else if(strcmp(argv[i], "-a") == 0) {
            i++;
            passwordAmount = atoi(argv[i]);
        }
    }

    if(multiple == 1) {
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
    } else if(multiple == 0) {
        srand(time(0)); 
        for(int numCon = 0; numCon < pwlength; numCon++) {
            int randomIndex = (rand() % (62 - 0));
            printf("%c", charset[randomIndex]);
        }
        printf("\n");
    }
    return 0;
}
