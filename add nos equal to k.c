#include <stdio.h>
int main(void) {
	int n,k,a[10],i,j,sum=0,count=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	for(j=i+1;j<=n;j++)
	{
	sum=a[i]+a[j];
	if(sum==k)
	++count;
            }
	}
	if(count>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
