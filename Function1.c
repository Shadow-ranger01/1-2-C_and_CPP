#include<stdio.h>

int find(char x){

   if(x >= 'a' && 'z' >= x ){
      printf("%c is a lower case alphabet",x);
   }
   else if(x >= 'A' && 'Z' >= x ){
      printf("%c is a upper case alphabet",x);
   }
   else if(x >= '0' && '9' >= x ){
     printf("%c is a Digit",x);
   } 
   else{
      printf("%c is a specal char",x);
   }
}

int main(){
    
    char a;

    printf("Enter the char you want to identify: "); //Input
    scanf("%c",&a);

    find(a); //function call
    return 0;
}