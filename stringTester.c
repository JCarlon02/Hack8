/*
* Author: Jayden Carlon
* Worked with Dalton, and had help from LA Steven
* This program is a tester program for the funtions made in the
* string_utils.c file.
* Date: 10/21/19
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main(int argc, char const *argv[]) {
  char str1[] = "Playstation", *str2, *str3, **str4;
  replaceChar(&str1[0], 'l', 'q');
  printf("After replacing l with q: %s\n", str1);
  str2 = replaceCharCopy(&str1[0], 'q', 'l');
  printf("After switching back in a new copy: %s\n", str2);
  removeChar(str2, 'P');
  printf("Taking out the P: %s\n", str2);
  str3 = removeCharCopy(str2, 'y');
  printf("Making a copy and then taking it out: %s\n", str3);
  str4 = lengthSplit(str1, 3);
  printf("%s\n", *str4);


  char str5[] = "Nintendo", *str6, *str7, **str8;
  replaceChar(&str5[0], 'n', 'p');
  printf("After replacing n with p: %s\n", str5);
  str6 = replaceCharCopy(&str5[0], 'p', 'n');
  printf("After switching back in a new copy: %s\n", str6);
  removeChar(str6, 'N');
  printf("Taking out the N: %s\n", str6);
  str7 = removeCharCopy(str6, 't');
  printf("Making a copy and then taking out t: %s\n", str7);
  str8 = lengthSplit(str5, 4);
  printf("%s\n", *str8);


  char str9[] = "Controller", *str10, *str11, **str12;
  replaceChar(&str9[0], 'o', 'w');
  printf("After replacing o with w: %s\n", str9);
  str10 = replaceCharCopy(&str9[0], 'w', 'o');
  printf("After switching back in a new copy: %s\n", str10);
  removeChar(str10, 'C');
  printf("Taking out the C: %s\n", str10);
  str11 = removeCharCopy(str10, 't');
  printf("Making a copy and then taking out t: %s\n", str11);
  str12 = lengthSplit(str9, 4);
  printf("%s\n", *str12);
  return 0;
}
