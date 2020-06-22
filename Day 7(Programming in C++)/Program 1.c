//swapping of 2 numbers


#include <stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b,i,c;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d%d",&a,&b);
        swap(&a,&b);
        printf("%d %d\n",a,b);
    }  
    return 0;
}