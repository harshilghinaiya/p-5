#include<stdio.h>

int main()
{
	
	
	
	int v,a[5];
	
	printf("Enter array elements:\n");
	for(int i= 0;i<5;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
    }
    	printf("Negetive elements:");
    for(v=0;v<=5;v++)
   {
    if(a[v]<0){
    	printf("%d",a[v]);
   }
	}
}