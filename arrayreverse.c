#include <stdio.h>
void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
}
int main(){
    int n;
    printf("Enter number of elements in array");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value:");
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}