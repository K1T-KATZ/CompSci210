#include "lab19functs.h"

void replStr(char str[MAX_STR_LEN], char aChar, char bChar) {
    size_t strLen = strlen(str);
    for (int i = 0; i < strLen; ++i) {
        if (str[i] == aChar)
            str[i] = bChar;
    }
    printf("%s\n", str);
}


void replMultiChar(char str[MAX_STR_LEN], char searchChars[MAX_STR_LEN], char rChar) {
    size_t strLenSearch = strlen(searchChars);
    int b;
    for (b = 0; b < strLenSearch; ++b) {
        size_t strLenString = strlen(str) - 1;
        for (int i = 0; i < strLenString; ++i) {
            if (str[i] == searchChars[b])
                str[i] = rChar;
        }
    }
    printf("%s", str);
}

int findLocations(char str[MAX_STR_LEN], int locations[MAX_STR_LEN], char searchChar) {
    int count = 0;
    size_t strLen = strlen(str);
    for (int i = 0; i < strLen; ++i) {
        if (str[i] == searchChar) {
            ++count;
            locations[i] = i;
        }
    }
    return count;
}
