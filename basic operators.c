// // // Arithmetic Operators
// // // Operator	  Name	          Description	                            Example	
// // // +	        Addition	      Adds together two values	              x + y	
// // // -	        Subtraction	    Subtracts one value from another	      x - y	
// // // *	        Multiplication	Multiplies two values	                  x * y	
// // // /	        Division	      Divides one value by another	          x / y	
// // // %	        Modulus	        Returns the division remainder	        x % y	
// // // ++	        Increment	      Increases the value of a variable by 1	++x	
// // // --	        Decrement	      Decreases the value of a variable by 1	--x
// // assignment operators
// // Operator	  Example	  Same As	
// // =	          x = 5	     x = 5	
// // +=	        x += 3	   x = x + 3	
// // -=	        x -= 3	   x = x - 3	
// // *=	        x *= 3	   x = x * 3	
// // /=	        x /= 3	   x = x / 3	
// // %=	        x %= 3	   x = x % 3	
// // &=	        x &= 3	   x = x & 3	
// // |=	        x |= 3	   x = x | 3	
// // ^=	        x ^= 3	   x = x ^ 3	
// // >>=	      x >>= 3	   x = x >> 3	
// // <<=	      x <<= 3    x = x << 3
// // comparison operators
// Operator    Name	                      Example  	Description
// ==	        Equal to	                  x == y	  Returns 1 if the values are equal	
// !=	        Not equal                  	x != y	  Returns 1 if the values are not equal	
// >	          Greater than              	x > y	    Returns 1 if the first value is greater than the second value	
// <          	Less than                  	x < y	    Returns 1 if the first value is less than the second value	
// >=           Greater than or equal to	  x >= y	  Returns 1 if the first value is greater than, or equal to, the second value	
// <=	        Less than or equal to	      x <= y	  Returns 1 if the first value is less than, or equal to, the second value
// Logical Operators
// Operator	Name	Example	            Description	
// && 	      AND	  x < 5 &&  x < 10	  Returns 1 if both statements are true	
// || 	      OR	  x < 5 || x < 4	    Returns 1 if one of the statements is true	
// !	        NOT	  !(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1	
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Variables for demonstration
    int x = 5;
    int y = 10;
    
    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("x + y = %d\n", x + y); // Addition
    printf("x - y = %d\n", x - y); // Subtraction
    printf("x * y = %d\n", x * y); // Multiplication
    printf("y / x = %d\n", y / x); // Division
    printf("y %% x = %d\n", y % x); // Modulus
    printf("++x = %d\n", ++x); // Increment
    printf("--y = %d\n", --y); // Decrement
    printf("\n");

    // Assignment Operators
    x = 5; // Reset x for assignment demonstration
    printf("Assignment Operators:\n");
    printf("x = 5: %d\n", x);
    x += 3; // Equivalent to x = x + 3
    printf("x += 3: %d\n", x);
    x -= 2; // Equivalent to x = x - 2
    printf("x -= 2: %d\n", x);
    x *= 2; // Equivalent to x = x * 2
    printf("x *= 2: %d\n", x);
    x /= 2; // Equivalent to x = x / 2
    printf("x /= 2: %d\n", x);
    x %= 3; // Equivalent to x = x % 3
    printf("x %%= 3: %d\n", x);
    printf("\n");

    // Comparison Operators
    printf("Comparison Operators:\n");
    printf("x == y: %d\n", (x == y)); // Equal to
    printf("x != y: %d\n", (x != y)); // Not equal
    printf("x > y: %d\n", (x > y));   // Greater than
    printf("x < y: %d\n", (x < y));   // Less than
    printf("x >= y: %d\n", (x >= y)); // Greater than or equal to
    printf("x <= y: %d\n", (x <= y)); // Less than or equal to
    printf("\n");

    // Logical Operators
    bool condition1 = (x < 5);
    bool condition2 = (y > 5);
    
    printf("Logical Operators:\n");
    printf("condition1 (x < 5) AND condition2 (y > 5): %d\n", (condition1 && condition2)); // AND
    printf("condition1 (x < 5) OR condition2 (y > 5): %d\n", (condition1 || condition2));   // OR
    printf("NOT condition1: %d\n", !condition1); // NOT

    return 0;
}
