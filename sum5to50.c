#include <Stdio.h>
int main(){
    int s=0;
    for(int i=5; i<=50; ++i){
        s+=i;
    }
    printf("%d", s);    
    return 0;
}