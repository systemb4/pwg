#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "config.h"
#include "charsets.h"

int main(int argc, char *argv[]) {
    if(argv[1] == NULL) {
        pwlength = 12;
    } else {
        if(atoi(argv[1]) <= 0) {
            printf("password length must be greater 0!\n");
            return 0;
        } else if(atoi(argv[1]) == 1 || atoi(argv[1]) <= 5) {
            printf("a longer password is suggested\n");
            pwlength = atoi(argv[1]) ;
        } else {
            pwlength = atoi(argv[1]) ;
        }
    }

    int begLength = 0;
    int endLength = 62;
    int spaceNum = 0;

    srand(time(0)); 
    for(int numConOne = 0; numConOne < 30; numConOne++) {
        for(int numCon = 0; numCon < pwlength; numCon++) {
            int randomIndex = (rand() % (endLength - begLength));
            printf("%c", charset[randomIndex]);
        }

        if(spaceNum == 4) {
            printf("\n");
            spaceNum = 0;
        } else {
            printf(" ");
            spaceNum++;
        } 
    }
}
