#include <stdio.h>

int is_palindrome_floor_division(int number) {
    int reversed_number = 0;
    int original_number = number;

    while (number > 0) {
        int remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10; // Floor division
    }

    return original_number == reversed_number;
}

int main() {
    int number;

    number = 12321;
    if (is_palindrome_floor_division(number)) {
        printf("The number %d is a palindrome.\n", number);
    } else {
        printf("The number %d is not a palindrome.\n", number);
    }

    number = 12;
    if (is_palindrome_floor_division(number)) {
        printf("The number %d is a palindrome.\n", number);
    } else {
        printf("The number %d is not a palindrome.\n", number);
    }

    return 0;
}
