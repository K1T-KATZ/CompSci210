#include "lab19functs.h"


int main() {
    char str[MAX_STR_LEN];
    char aChar;
    char bChar;
    printf("Gimee a stringgggg\n");
    fgets(str, MAX_STR_LEN, stdin);
    printf("Also give me a character to look for...\n");
    scanf(" %c", &aChar);
    printf("...and one to replace it with.\n");
    scanf(" %c", &bChar);
    replStr(str, aChar, bChar);

    char ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);

    char searchChars[MAX_STR_LEN];
    char rChar;
    printf("Now give me your second string\n");
    fgets(str, MAX_STR_LEN, stdin);
    printf("Now give me your array of things to look for\n");
    fgets(searchChars, MAX_STR_LEN, stdin);
    printf("...and one to replace it with.\n");
    scanf(" %c", &rChar);
    replMultiChar(str, searchChars, rChar);

    int locations[MAX_STR_LEN];
    char searchChar;
    printf("Now give me the charecter you wanna learn about\n");
    scanf("%c", &searchChar);
    printf("the charecter shows up %d times", findLocations(str, locations, searchChar));


    return 0;
}