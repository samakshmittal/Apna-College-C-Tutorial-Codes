#include <stdio.h>
int count(int arr[], int n){
    int x=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            x++;
        }
    }
    return x;
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
    printf("%d", count(arr, n));
    return 0;
}