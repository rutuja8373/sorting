#include<stdio.h>
void selection(int a[],int n)
{
	int i,j,min,pos,t;
	for(i=0;i<n;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		t=a[i];
		a[i]=a[pos];
		a[pos]=t;
	}
}
void display(int a[],int n)
{
	int i;
	printf("\nSORTED NOS=");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
}
int main()
{
	int i,n,a[40];
	printf("enter limit:");
	scanf("%d",&n);
	printf("\n enter n no:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    selection(a,n);
    display(a,n);
}
