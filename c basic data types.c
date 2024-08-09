#include <stdio.h>

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}
#include <stdio.h>
// char
int main() {
  char myGrade = 'A';
  printf("%c", myGrade);
  return 0;
}
#include <stdio.h>
//int
int main() {
  char a = 65, b = 66, c = 67;
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c", c);
  return 0;
}
#include <stdio.h>
// char
int main() {
  char myText = 'Hello';
  printf("%c", myText);
  return 0;
}
#include <stdio.h>
// char
int main() {
  char myText[] = "Hello";
  printf("%s", myText);
  return 0;
}
#include <stdio.h>
// int
int main() {
  int myNum = 1000;
  printf("%d", myNum);
  return 0;
}
#include <stdio.h>
// float
int main() {
  float myNum = 5.75;
  printf("%f", myNum);
  return 0;
}
#include <stdio.h>
// double
int main() {
  double myNum = 19.99;
  printf("%lf", myNum);
  return 0;
}
#include <stdio.h>
// scientifically num
int main() {
  float f1 = 35e3;
  double d1 = 12E4;
  
  printf("%f\n", f1);
  printf("%lf", d1);
  return 0;
}
// set decimal precision
#include <stdio.h>

int main() {
  float myFloatNum = 3.5;
  double myDoubleNum = 19.99;
  
  printf("%f\n", myFloatNum);
  printf("%lf", myDoubleNum);
  return 0;
}
#include <stdio.h>

int main() {
  float myFloatNum = 3.5;

  printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("%.1f\n", myFloatNum); // Only show 1 digit
  printf("%.2f\n", myFloatNum); // Only show 2 digits
  printf("%.4f", myFloatNum);   // Only show 4 digits
  return 0;
}
// C The sizeof Operator
#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("%lu\n", sizeof(myInt));
  printf("%lu\n", sizeof(myFloat));
  printf("%lu\n", sizeof(myDouble));
  printf("%lu\n", sizeof(myChar));
  
  return 0;
}
// eg.
#include <stdio.h>

int main() {
  // Create variables of different data types
  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}
#include <stdio.h>

int main() {
  // Automatic conversion: int to float
  float myFloat = 9;

  printf("%f", myFloat);
  return 0;
}
#include <stdio.h>

int main() {
  // Automatic conversion: float to int
  int myInt = 9.99;

  printf("%d", myInt);
  return 0;
}
#include <stdio.h>

int main() {
  // Manual conversion: int to float
  float sum = (float) 5 / 2;

  printf("%f", sum);
  return 0;
}
// eg
#include <stdio.h>

int main() {
  // Set the maximum possible score to 500
  int maxScore = 500;

  // The actual score of the user
  int userScore = 423;

  // Calculate the percantage of the user's score in relation to the maximum available score
  float percentage = (float) userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f", percentage);

  return 0;
}
// constant
#include <stdio.h>

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}
