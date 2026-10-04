#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char result[1000];
    int frequency[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (i = 0; i < n; i++) {

        if (frequency[(unsigned char)str[i]] == 0) {
            result[j] = str[i];
            j++;

            frequency[(unsigned char)str[i]] = 1;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}