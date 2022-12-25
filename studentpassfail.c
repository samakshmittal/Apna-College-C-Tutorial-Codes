#include <stdio.h>
int main(){
    int n;
    printf("Enter marks:");
    scanf("%d", &n);
    //ternary
    n>30 && n<=100 ? printf("Pass") : (n<=30 && n>=0 ? printf("Fail") : printf("Invalid input"));
    return 0;
}