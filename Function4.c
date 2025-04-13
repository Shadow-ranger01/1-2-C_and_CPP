// odd even using funcion
#include <stdio.h>
#include <stdlib.h>

int dis (int a){
    if(a%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int n;

    printf("Enter the number to cheak: ");
    scanf("%d",&n);

    if(dis(n)){
        printf("%d number is odd",n);
    }
    else{
        printf("%d number is even",n);
    }

    return 0;
}
