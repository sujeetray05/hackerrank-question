#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char lowerChar;
    char upperChar;
    
    scanf("%c", &lowerChar);

    upperChar = lowerChar - 32;

    printf("The uppercase of %c is %c\n", lowerChar, upperChar);

    return 0;
}
