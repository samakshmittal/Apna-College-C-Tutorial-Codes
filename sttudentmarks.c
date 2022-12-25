#include <stdio.h>
int main(){
    int n;
    printf("Enter marks:");
    scanf("%d", &n);
    if (n<=100 && n>=90){
        printf("A+");
    }
    else if (n<90 && n>=70){
        printf("A");
    }
    else if (n<70 && n>=30){
        printf("B");
    }
    else if (n<30 && n>=0){
        printf("C");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}