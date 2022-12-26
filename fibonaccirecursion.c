#include <stdio.h>
#include <math.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int s=fibonacci(n-1)+fibonacci(n-2);
    return s;
}