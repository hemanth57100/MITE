#include <stdio.h>

int main()
{
    int a[]={10,20,7,9,5,3};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            if(i!=min)
            a[i]=(a[i]+a[min])-(a[min]=a[i]);
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
