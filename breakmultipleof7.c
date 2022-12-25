#include <Stdio.h>
int main(){
    int n;
    while(1){
        printf("Enter number");
        scanf("%d", &n);
        if(n%7==0){
            break;
        }
    }
    printf("End");
    return 0;
}