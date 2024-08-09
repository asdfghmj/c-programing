#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;
  
  printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
  return 0;
}
#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d", isFishTasty);         // Returns 0 (false)
  
  return 0;
}
#include <stdio.h>

int main() {
  printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
  
  return 0;
}
#include <stdio.h>

int main() {
  int x = 10;
  int y = 9;
  
  printf("%d", x > y); // Returns 1 (true) because 10 is greater than 9
  return 0;
}
#include <stdio.h>

int main() {
  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
  printf("%d", 5 == 55); // Returns 0 (false) because 5 is not equal to 55
  
  return 0;
}
#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isHamburgerTasty = true;
  bool isPizzaTasty = true;
  printf("%d", isHamburgerTasty == isPizzaTasty);
  
  return 0;
}
