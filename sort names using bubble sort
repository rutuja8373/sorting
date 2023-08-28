#include<stdio.h>
#include<string.h>
char a[20][20],t[20];
  	int i,n;
void bubble(char a[20][20] ,int n)
{
	int i,pass;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(a[i],a[i+1])>0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],t);
			}
		}
	}
	printf("\nSorted names are:");
	for(i=0;i<n;i++)
	{
		printf("%s\t",a[i]);
	}
}
int main()
{
  	int i;
  	printf("Enter limit:");
  	scanf("%d",&n);
  	printf("\nEnter n names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
  	bubble(a,n);
}
