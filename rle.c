// welcome to my RLE code (it is very high level and simple for explantion purposes tommorow)
#include <stdio.h>
#include <string.h>

int main() {
    // String we want to compress
    char str[] = "WWWWBB";
    int length = strlen(str);
    int i = 0;

    printf("Original: %s\n", str);
    printf("Compressed: ");

    // Go through the string one character at a time
    while (i < length) {
        char current = str[i];
        int count = 0;

        // Count how many times the same character repeats
        while (i < length && str[i] == current) {
            count++;
            i++;
        }

        // Print the count followed by the character
        printf("%d%c", count, current);
    }

    printf("\n");

    return 0;
}
