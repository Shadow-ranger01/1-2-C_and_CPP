//Prime number using fucntion
#include<stdio.h>

int prime(int a) {
    if (a <= 1) return 0; 
    
    for (int i = 2; i <= a; i++) {
        if (a % i == 0) return 0;
    }
    return 1; 
}

int main() {
    int a;

    printf("Enter the number: ");
    scanf("%d", &a); 

    if (prime(a)) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }

    return 0;
}
