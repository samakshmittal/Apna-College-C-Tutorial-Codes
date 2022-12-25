#include <Stdio.h>
int main(){
    int n,s=0;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=2; i<=n/2; ++i){
        if(n%i==0){
            s=1;
            break;
        }
    }
    if(s==1){
    printf("%d is not prime", n);
    }
    else{
        printf("%d is prime", n);
    }
    return 0;
}