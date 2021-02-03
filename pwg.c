#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "config.h"

char charset[62] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 
    'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', 
    '6', '7', '8', '9', '0'};

char lowerCaseLetters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char upperCaseLetters[26] =  {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char numerals[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

char symbols[30] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', 
    '-', '_', '=', '+', '|', '{', '}', '[', ']', '"', ';', ':', '/', '?', '.', 
    '<', '>', ','};

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
