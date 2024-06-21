#include <stdio.h>

int main() {
    // Loop through character values from 0 to 255
    for (int i = 0; i <= 255; i++) {
        printf("Character: %c\tASCII Value: %d\n", i, i);
    }

    return 0;
}