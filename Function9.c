#include<stdio.h>

void concat(char d[], char s[]){

    int i=0,j=0;

    while (d[i] != '\0')
    {
        i++;
    }

    while (s[j] != '\0')
    {
        d[i] = s[j];
        i++;
        j++;
    }
    d[i] = '\0';    

}

int main(){

    char str1[1000];
    char str2[1000];

    printf("Enter the sting 1 : ");
    fgets(str1,1000,stdin);
   
    printf("Enter the sting 2 : ");
    fgets(str2,1000,stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }    

    concat(str1,str2);

    printf("The Concatnated string is : \n%s ",str1);

    return 0;
}