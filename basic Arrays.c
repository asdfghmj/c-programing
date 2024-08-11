// array
int myNumbers[] = {25, 50, 75, 100};
// Access the Elements of an Array
#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d", myNumbers[0]);
 
  return 0;
}
// Change an Array Element
#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  myNumbers[0] = 33;

  printf("%d", myNumbers[0]);
 
  return 0;
}
// Loop Through an Array
#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  int i;
  
  for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
  }
 
  return 0;
}
// Set Array Size
#include <stdio.h>

int main() {
  // Declare an array of four integers:
  int myNumbers[4];

  // Add elements to it
  myNumbers[0] = 25;
  myNumbers[1] = 50;
  myNumbers[2] = 75;
  myNumbers[3] = 100;

  printf("%d\n", myNumbers[0]);
 
  return 0;
}
// Array Size
#include <stdio.h>

int main() {
  int myNumbers[] = {10, 25, 50, 75, 100};
  printf("%lu", sizeof(myNumbers));
 
  return 0;
}
// eg
#include <stdio.h>

int main() {
  // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
 
  float avg, sum = 0;
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
    
  // Loop through the elements of the array and accumulate the sum
  for (i = 0; i < length; i++) {
    sum += ages[i];
  }
  
  // Calculate the average by dividing the sum by the length
  avg = sum / length;
  
  // Print the average
  printf("The average age is: %.2f", avg);
  
  return 0;
}

#include <stdio.h>

int main() {
   // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
  
  // Create a 'lowest age' variable and assign the first array element of ages to it
  int lowestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest age
  for (i = 0; i < length; i++) {
  
    // Check if the current age is smaller than current the 'lowest age'
    if (lowestAge > ages[i]) {
    
      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = ages[i];
    }
  }
 
  // Output the value of the lowest age
  printf("The lowest age in the array is: %d", lowestAge);
   
  return 0;
}
// Multidimensional Arrays
// Two-Dimensional Arrays
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
// Access the Elements of a 2D Array
#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d", matrix[0][2]);
 
  return 0;
}
// Change Elements in a 2D Array
#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  matrix[0][0] = 9;
  printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1
 
  return 0;
}
// Loop Through a 2D Array
#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  
  return 0;
}
