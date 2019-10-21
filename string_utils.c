/*
* Author: Jayden Carlon. Worked with Dalton, Nick, and Parker.
* Had help from LA Dante and Steven.
* This program contains a list of functions that do various things to differntet arrays
* If you read the fucntion title it will explain what they do.
* Date: 10/20/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_utils.h"

void replaceChar(char *s, char oldChar, char newChar){
  if (s == NULL){
    return;
  }
  int i;
  for (i = 0; i < strlen(s); i++) {
    if(s[i] == oldChar){
      s[i] = newChar;
    }
  }
}

char * replaceCharCopy(const char *s, char oldChar, char newChar){
  if (s == NULL){
    return NULL;
  }
  int i;
  char * copy = (char*)malloc(sizeof(char)*(strlen(s) + 1));
  for (i = 0; i < strlen(s); i++){
    copy[i] = s[i];
  }
  copy[strlen(s)] = '\0';

  for(int i = 0; i < strlen(s); i++){
    if (s[i] == oldChar){
      copy[i] = newChar;
    }
  }
  return copy;
}

void removeChar(char *s, char c){
  if (s == NULL){
    return;
  }
  char * copy = (char *)malloc((sizeof(char)) * (strlen(s)) + 1);
  int j = 0;
  for(int i = 0; i < strlen(s); i++){
    if (s[i] != c){
      copy[j] = s[i];
      j++;
    }
  }
  for(int i = 0; i < j; i++){
    s[i] = copy[i];
  }
  s[j] = '\0';
  free(copy);
  return;
}

char * removeCharCopy(const char *s, char c){
  if (s == NULL){
    return NULL;
  }
  int j = 0;
  for (int i = 0;  i < strlen(s); i++){
    if (s[i] != c){
      j++;
    }
  }
  char * copyArr = (char *)malloc((j + 1) * sizeof(char));
  j = 0;
  for (int i = 0; i < strlen(s); i++){
    if(s[i] != c){
      copyArr[j] = s[i];
      j++;
    }
  }
  copyArr[j] = '\0';
  return copyArr;
}



char **lengthSplit(const char *s, int n){
  if (s == NULL){
    return NULL;
  }
int size = strlen(s);
int index = 0;
int arrsize;

if (size % n == 0){
  arrsize = size/n;
}else{
  arrsize = size/n + 1;
}
 char **splitArray = (char **)malloc(sizeof(char*) * arrsize);
 for (int i = 0; i < arrsize; i++){
   splitArray[i] = (char *)malloc(sizeof(char) * n + 1);
 }
 for(int j = 0; j < arrsize; j++){
   strncpy(splitArray[j], &s[index], n);
   index += n;
   splitArray[j][n] = '\0';
 }
return splitArray;
}
