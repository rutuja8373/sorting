#include<stdio.h>
#include<string.h>
char a[20][20];
int n;
void concure(int start,int mid,int end)
{
	int i,j,k;
	char b[20][20];
	i=start;
	j=mid+1;
	k=start;
	while(i<=mid&&j<=end)
	{
		if(strcmp(a[i],a[j])<0)
			strcpy(b[k++],a[i++]);
		else
			strcpy(b[k++],a[j++]);
	}
	while(i<=mid)
	{
		strcpy(b[k++],a[i++]);
	}
	while(j<=end)
	{
		strcpy(b[k++],a[j++]);
	}
	for(i=start;i<=end;i++)
	   {	
	   	strcpy(a[i],b[i]);
	   }
}
void divide(int start,int end)
{
	int mid;
	if(start!=end)
	{
		mid=(start+end)/2;
		divide(start,mid);
		divide(mid+1,end);
		concure(start,mid,end);
	}
}
int main()
{
	int i;
	printf("enter limit:");
	scanf("%d",&n);
	printf("\nenter n names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	divide(0,n-1);
	printf("\nsorted elements=");
	for(i=0;i<n;i++)
	{
		printf("%s\t",a[i]);
	}
}
