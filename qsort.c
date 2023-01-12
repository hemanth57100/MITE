#include <stdio.h>
#include<stdlib.h>
int compare(const void *x,const void *y)
{
    return *(int*)x-*(int*)y;
}
int main()
{
    int arr[]={10,20,30,7,4,2,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,size,sizeof(arr[0]),compare);
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    
    return 0;
}
