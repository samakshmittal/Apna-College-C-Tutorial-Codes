#include <stdio.h>
int main(){
    int count0=0, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0, count9=0;
    int n;
    printf("Enter number of elements in array");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2){
            count2++;
        }
        else if(arr[i]==3){
            count3++;
        }
        else if(arr[i]==4){
            count4++;
        }
        else if(arr[i]==5){
            count5++;
        }
        else if(arr[i]==6){
            count6++;
        }
        else if(arr[i]==7){
            count7++;
        }
        else if(arr[i]==8){
            count8++;
        }
        else if(arr[i]==9){
            count9++;
        }
    }
    printf("Count of 0 = %d\n", count0);
    printf("Count of 1 = %d\n", count1);
    printf("Count of 2 = %d\n", count2);
    printf("Count of 3 = %d\n", count3);
    printf("Count of 4 = %d\n", count4);
    printf("Count of 5 = %d\n", count5);
    printf("Count of 6 = %d\n", count6);
    printf("Count of 7 = %d\n", count7);
    printf("Count of 8 = %d\n", count8);
    printf("Count of 9 = %d\n", count9);
    return 0;
}