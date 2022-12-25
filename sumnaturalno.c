#include <Stdio.h>
int main(){
    int n, s=0;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=0; i<=n; ++i){
        s+=i;
    }
    printf("%d", s);
    return 0;
}