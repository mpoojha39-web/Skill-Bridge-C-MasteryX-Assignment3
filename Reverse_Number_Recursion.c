#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;

    rev = rev * 10 + (num % 10);

    return reverseNumber(num / 10, rev);
}

int main() {
    int num, reverse;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    reverse = reverseNumber(num, 0);

    printf("Reverse of %d is %d.\n", num, reverse);

    return 0;
}