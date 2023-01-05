#include <stdio.h>

int main()
{
    int a[]={10,20,7,9,5,3};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<=size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
