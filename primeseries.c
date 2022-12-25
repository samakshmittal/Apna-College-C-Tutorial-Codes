#include <Stdio.h>
int main(){
    int n,s=0;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=2; i<=n; ++i){
        for(int j=2; j<=i/2; j++){
            if(i%j==0 && i!=2){
                s=1;
                break;
            }
            else{
                s=0;
            }
        }
        if(s==0){
            printf("%d ", i);
        }
    }
    return 0;
}