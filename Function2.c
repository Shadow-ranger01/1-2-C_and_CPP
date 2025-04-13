//Write a function to print the sum and average of first n odd numbers 
//where n is passed to the function as argument.

#include<stdio.h>

int odd(int x){
    int sum=0;
    float avg;

    printf("First %d odd numbers are : ",x);
    for (int i = 0; i < x; i++)
    {
        int odd = 2*i+1;
        printf("%d ,",odd);
        sum += odd;
    }
    
    avg=sum/x;

    printf("\nSum of first %d odd numbers is: %d \n", x, sum);
    printf("Average is: %.2f\n", avg);    

}

int main(){

    int n;
    
    printf("Enter the n th odd number you want to calculate: ");
    scanf("%d",&n);
    
    odd(n);

    return 0;
}
