// strings
char greetings[] = "Hello World!";
#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%s", greetings);
 
  return 0;
}
// Access Strings
#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%c", greetings[0]);
 
  return 0;
}
// Modify Strings
#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  greetings[0] = 'J';
  printf("%s", greetings);

  return 0;
}
// Loop Through a String
#include <stdio.h>

int main() {
  char carName[] = "Volvo";
  int i;
  
  for (i = 0; i < 5; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}
#include <stdio.h>

int main() {
  char carName[] = "Volvo";
  int length = sizeof(carName) / sizeof(carName[0]);
  int i;
  
  for (i = 0; i < length; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}
// Another Way Of Creating Strings
#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  
  return 0;
}

#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%lu\n", sizeof(greetings));
  printf("%lu\n", sizeof(greetings2));
  
  return 0;
}

#include <stdio.h>

int main() {
  char message[] = "Good to see you,";
  char fname[] = "John";

  printf("%s %s!", message, fname);
 
  return 0;
}
// Special Characters
// Strings - Special Characters
// Because strings must be written within quotes, C will misunderstand this string, and generate an error:

char txt[] = "We are the so-called "Vikings" from the north.";
// The solution to avoid this problem, is to use the backslash escape character.

// The backslash (\) escape character turns special characters into string characters:

// Escape character	Result	Description
// \'	      '	                Single quote
// \"	      "	                Double quote
// \\	      \	                Backslash
// The sequence \"  inserts a double quote in a string:
#include <stdio.h>

int main() {
  char txt[] = "We are the so-called \"Vikings\" from the north.";
  printf("%s", txt);
 
  return 0;
}
// The sequence \'  inserts a single quote in a string:
#include <stdio.h>

int main() {
  char txt[] = "It\'s alright.";
  printf("%s", txt);
 
  return 0;
}
// The sequence \\  inserts a single backslash in a string:
#include <stdio.h>

int main() {
  char txt[] = "The character \\ is called backslash.";
  printf("%s", txt);
 
  return 0;
}
// Escape Character	Result	
// \n	              New Line	
// \t	              Tab	
// \0	              Null
  // String Functions
#include <string.h>
// examples 
#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d", strlen(alphabet));
  printf("%d", sizeof(alphabet)); 
  return 0;
}

#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d", strlen(alphabet));
  printf("%d", sizeof(alphabet)); 
  return 0;
}
// Concatenate Strings
#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[20] = "Hello ";
  char str2[] = "World!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s", str1);
 
  return 0;
}
// Copy Strings
#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello World!";
  char str2[20];

  // Copy str1 to str2
  strcpy(str2, str1);

  // Print str2
  printf("%s", str2);
  
  return 0;
}
// Compare Strings
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
