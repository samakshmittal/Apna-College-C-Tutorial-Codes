#include <Stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }
    return 0;
}