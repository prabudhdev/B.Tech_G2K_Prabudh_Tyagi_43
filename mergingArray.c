#include <stdio.h>
int main(){
    int arr1[10],arr2[10],arr3[10];
    int i,n1,n2,m,index=0;
    printf("Enter the no. of elements in array1 : ");
    scanf("%d",&n1);
    printf("Enter elements for first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Entyer the no. of elements in array2");
    scanf("%d",&n2);
    printf("Enter elements of second array");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2);
    }
    m=n1+n2;
    for(i=0;i<n1;i++){
        arr3[index] = arr1[i];
        index++;
    }
    for(i=0;i<n2;i++){
        arr3[index] = arr2[i];
        index++;
    }
    printf("\nThe merged arry is :");
    for(i=0;i<m;i++){
        printf("Arr[%d]=%d",arr3[i]);
    }
    return 0;
}
