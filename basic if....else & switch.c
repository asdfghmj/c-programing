// // C If ... Else
if (condition) {
  // block of code to be executed if the condition is true
}

if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}

if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}

variable = (condition) ? expressionTrue : expressionFalse;
#include <stdio.h>

int main() {
  int myNum = 10;
  
  if (myNum > 0) {
    printf("The value is a positive number.");
  } else if (myNum < 0) {
    printf("The value is a negative number.");
  } else {
    printf("The value is 0.");
  }
  
  return 0;
}
#include <stdio.h>

int main() {
  int doorCode = 1337;

  if (doorCode == 1337) {
    printf("Correct code.\nThe door is now open.");
  } else {
    printf("Wrong code.\nThe door remains closed.");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }
  
  return 0;
}

#include <stdio.h>

int main() {
  int myNum = 5;

  if (myNum % 2 == 0) {
    printf("%d is even.\n", myNum);
  } else {
    printf("%d is odd.\n", myNum);
  }

  return 0;
}
// Switch
switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

#include <stdio.h>

int main() {
  int day = 4;
  
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
  }
    
  return 0;
}
