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
    printf("Enter new value:");
    scanf("%d", &arr[n]);
    for(int i=0; i<=n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}