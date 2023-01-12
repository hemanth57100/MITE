#include <stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={1,2,3,5,7,10,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element,ub;
    printf("Enter the value to searched\n");
    scanf("%d",&element);
    for(int lb=0,ub=size-1;lb<=ub;)
    {
        int mid=(lb+ub)/2;
        if(arr[mid]==element){
        printf("Element found at position %d\n",mid);
        exit(0);
        }
        else if(arr[mid]>element)
        ub=mid-1;
        else
        lb=mid+1;
    }
    printf("Not found");
    return 0;
}
