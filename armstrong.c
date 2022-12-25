#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int count=0, s=0;
    int og=n, og1=n;
    while(og1!=0){
        og1=og1/10;
        count++;
    }
    for (int i=0; i<=n; i++){
        int re=og%10;
        og=og/10;
        s= (int)(s + (float) (pow(re,count)));
    }
    printf("%d\n", s);
    if (s==n){
        printf("%d is an armstrong number", n);
    }
    else{
        printf("%d is not an armstrong number", n);
    }
    return 0;
}