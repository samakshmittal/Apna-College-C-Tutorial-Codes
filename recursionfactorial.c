#include <stdio.h>
#include <math.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n){
    if (n>=0){
    if (n==0){
        return 1;
    }
    n=factorial(n-1)*n;
    return n;
    }
    else{
       if (n==-1){
        return -1;
    }
    n=factorial(n+1)*n;
    return n;
    } 
}