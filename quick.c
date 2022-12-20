#include <stdio.h>
void quick (int a[100], int first, int last)
{
	int pivot,temp,i,j;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while (i<j)
		{
			while(a[i]<=a[pivot] && i<last)
				i++;
			while(a[j]>a[pivot])
				j--;
			if(i<j)
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quick(a,first,j-1);
		quick(a,j+1,last);
	}
}
int main()
{
	int a[100],n,i;
	printf("ent no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);
	printf("Sorted Array : \n");
	printf("%d \t",a[i]);
	return 0;
}
