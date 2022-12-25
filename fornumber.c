#include <Stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=0; i<=n; ++i){
        printf("%d\n", i);
    }
    return 0;
}