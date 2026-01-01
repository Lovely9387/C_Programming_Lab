#include<stdio.h>
int main()
{ 
  char c;
  printf("Enter your choice: ");
  scanf("%c", &c);  
  if(c>=48 && c<=57){
    printf("INTEGER VALUE");
  } else if (c>=33 && c<=47){
    printf("SPECIAL CHARACTER");
  } else if(c>=65 && c<=90){
    printf("UPPERCASE CHARACTER");
  } else if(c>=97 && c<=122){
    printf("LOWERCASE CHARACTER");
  } else {
    printf("INVALID CHARACTER");
  }
 return 0;
}