#include<stdio.h>
#include<math.h>
int main()
{
	int  i,n;
	double x,t0,t1,R,sum=t0;
	printf("Enter the value of x:");
	scanf("%lf",&x);
	printf("Enter the number of terns to be summed:");
	scanf("%d",&n);
	t0=x;
	sum=t0;
	printf("n\t tn\t sn\n");
	for (i=1; i<n; i++)
	{
		R=-(x*x)/(2*i+1)/(2*i);
		t1=R*t0;
		sum=sum+t1;
		t0=t1;
		printf("\n%d\t %lf\t %lf\n",i+1,t1,sum);
	}
	printf("\nThe sum of series:%lf",sum);
}