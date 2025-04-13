//Power using function
#include<stdio.h>

int power (int x,int y)
{
    int p=1;
    for(int i=0; i<y; i++){
        p*=x;
    }
    return p;
}

int main(){

    int x=0,y=0;
    
    printf("Enter the base and power : ");
    scanf("%d %d",&x,&y);

    int result =  power(x,y);
    printf("The solution : %d",result);    

    return 0;
}
