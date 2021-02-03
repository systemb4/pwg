#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "charsets.h"

int main() {
    int begLength = 0;
    int endLength = 62;
    int spaceNum = 0;

    srand(time(0)); 
    for(int numConOne = 0; numConOne < 30; numConOne++) {
        for(int numCon = 0; numCon < 12; numCon++) {
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
