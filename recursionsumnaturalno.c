#include <stdio.h>
#include <math.h>
int sum(int n);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n){
    if (n==0){
        return 0;
    }
    n=sum(n-1)+n;
    return n;
}