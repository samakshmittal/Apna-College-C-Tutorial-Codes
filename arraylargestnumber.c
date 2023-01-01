#include <stdio.h>
int main(){
    int n, m;
    printf("Enter number of elements in array");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int x=0;
        for(int j=0; j<n; j++){
            if (arr[i]<arr[j]){
                x=1;
            }
        }
        if(x!=1){
            printf("%d is largest", arr[i]);
            break;
        }
    }
    return 0;
}