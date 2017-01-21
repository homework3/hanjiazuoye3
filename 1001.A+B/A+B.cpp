#include<stdio.h>
#include<math.h>
int main()
{
	long a,b;
	int c[8],s=1,i,j;
	scanf("%ld %ld",&a,&b);
	a+=b;
	if(a<0) s=0;
	a=abs(a);
	for(i=1;a>=pow(10,i);i++);
	if(i<=3)i=1;
	else if(i<=6)i=2;
	else if(i>=7)i=3;
	for(j=0;j<i;j++)
	{
		c[j]=a%1000;
		a=(a-c[j])/1000;
	}
	for(j=i-1;j>-1;j--)
	{
		if(s==0)
		{
			s=1;
			printf("-");
		}
		if(j==i-1)printf("%d",c[j]);
		else printf("%03d",c[j]);
		if((i-j)!=i)
			printf(",");
	}
	return 0;
}

