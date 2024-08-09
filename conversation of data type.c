#include <stdio.h>

int main() {
    // Convert from int to float
    int int_value = 1;
    float float_value = (float)int_value;

    // Convert from float to int
    float float_to_int_value = 2.8;
    int int_value_from_float = (int)float_to_int_value;

    // Convert from int to complex (using a struct for complex numbers)
    typedef struct {
        int real;
        int imag;
    } Complex;

    Complex complex_value;
    complex_value.real = 1;
    complex_value.imag = 0;

    // Print the results
    printf("Float value: %.2f\n", float_value);
    printf("Int value from float: %d\n", int_value_from_float);
    printf("Complex value: %d + %di\n", complex_value.real, complex_value.imag);

    // Print types (C does not have a built-in type function like Python)
    printf("Type of float_value: float\n");
    printf("Type of int_value_from_float: int\n");
    printf("Type of complex_value: struct Complex\n");

    return 0;
}
