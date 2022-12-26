#include <stdio.h>
#include <math.h>
int power(int n, int x);
int main(){
    int n,x;
    printf("Enter number");
    scanf("%d", &n);
    printf("Enter power");
    scanf("%d", &x);
    printf("%d",power(n,x));
    return 0;
}
int power(int n, int x){
    if (x==0){
        return 1;
    }
    n=power(n,x-1)*n;
    return n;
}