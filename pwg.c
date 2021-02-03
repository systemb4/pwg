#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int begLength = 0;
    int endLength = 62;
    int spaceNum = 0;

    char charset[62] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 
        'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 
        'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', 
        '6', '7', '8', '9', '0'};

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
