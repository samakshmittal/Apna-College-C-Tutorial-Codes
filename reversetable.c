#include <Stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=10; i>=1; --i){
        printf("%d*%d=%d\n", n, i, n*i);
    }
    return 0;
}