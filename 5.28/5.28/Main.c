#include <stdio.h>
#include <ctype.h>  // for toupper(), tolower()

char changeCase(char c) {
    if (isupper(c))      // if uppercase, convert to lowercase
        return tolower(c);
    else if (islower(c)) // if lowercase, convert to uppercase
        return toupper(c);
    else                 // not an alphabet, return as is
        return c;
}

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf_s(" %c", &ch);

    printf("Changed case: %c\n", changeCase(ch));

    return 0;
}
