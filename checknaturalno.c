#include <Stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    if (n>=1){
        printf("Natural number");
    }
    else{
        printf("Not a natural number");
    }
    return 0;
}