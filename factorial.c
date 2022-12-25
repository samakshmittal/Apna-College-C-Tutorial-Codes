#include <Stdio.h>
int main(){
    int n, s=1;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=1; i<=n; ++i){
        s*=i;
    }
    printf("%d", s);
    return 0;
}