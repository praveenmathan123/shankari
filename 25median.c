#include <stdio.h>

int main() 
{
	int i,j,n,temp,a[10],mid;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
		
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
		}
	}
	{
	mid=n/2;
   printf("%d",a[mid]);
	}
	return 0;
}


