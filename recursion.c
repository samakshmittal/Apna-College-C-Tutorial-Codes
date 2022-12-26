#include <stdio.h>
#include <math.h>
void hello(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    hello(n);
    return 0;
}
void hello(int n){
    if (n==0){
        return;
    }
    printf("Hello World\n");
    hello(n-1);
}