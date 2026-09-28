#include<stdio.h>
int main()
{
	int i,size,large;
	printf("Enter Size:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	//large
	large=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("Biggest:%d\n",large);
}
