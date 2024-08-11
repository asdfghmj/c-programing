// while loop
while (condition) {
  // code block to be executed
}
#include<stdio.h>
int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}
// The Do/While Loop
do {
  // code block to be executed
}
while (condition);

#include <stdio.h>

int main() {
  int i = 0;
  
  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 5);
  
  return 0;
}
// examples
#include <stdio.h>

int main() {
  int countdown = 3;

  while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
  }

  printf("Happy New Year!!\n");

  return 0;
}

#include <stdio.h>

int main() {
  int i = 0;
  while (i <= 10) {
    printf("%d\n", i);
    i += 2;
  }
    
  return 0;
}

#include <stdio.h>

int main() {
  // A variable with some specific numbers
  int numbers = 12345;
  
  // A variable to store the reversed number
  int revNumbers = 0;

  // Reverse and reorder the numbers
  while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
  }

  // Output the reversed numbers
  printf("%d", revNumbers);

  return 0;
}

#include <stdio.h>

int main() {
  int dice = 1;
  
  while (dice <= 6) {
    if (dice < 6) {
      printf("No \n");
    } else {
      printf("Yes\n");
    }
    dice = dice + 1;
  }

  return 0;
}
// For Loop
for (expression 1; expression 2; expression 3) {
  // code block to be executed
}
// nested loop
#include <stdio.h>
int i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}
// examples
#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i <= 100; i += 10) {
    printf("%d\n", i);
  }
  
  return 0;
}

#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i <= 10; i = i + 2) {
    printf("%d\n", i);
  }
  
  return 0;
}

#include <stdio.h>

int main() {
  int i;
  
  for (i = 1; i < 10; i = i + 2) {
    printf("%d\n", i);
  }
  
  return 0;
}

#include <stdio.h>

int main() {
  int i;
  
  for (i = 2; i <= 512; i *= 2) {
    printf("%d\n", i);
  }    
  
  return 0;
}

#include <stdio.h>

int main() {
  int number = 2;
  int i;

  // Print the multiplication table for the number 2
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}
// Break and Continue for loop
#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }
   
  return 0;
}

#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
  }   
  
  return 0;
}
// Break and Continue in While Loop
#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 10) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}

include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}
