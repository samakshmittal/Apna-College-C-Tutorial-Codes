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
    int og=n, r, s=0;
    while(og!=0){
        r=og%10;
        og=og/10;
        s=s+r;
    }
    return s;
}