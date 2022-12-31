#include <stdio.h>
int main(){
    int n, x=0, m;
    printf("Enter number of elements in array");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (arr[i]<arr[j]){
                x=1;
                return;
            }
            else {
                x=0;
            }
        }
        if(x==0){
            m=arr[i];
        }
    }
    if(x==0){
        printf("%d is largest", m);
    }
    return 0;
}