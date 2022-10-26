#include<stdio.h>
#include<math.h>
int main(void)
{
	double h=0.001;
	double a;
	double H=(2-h)/(2+h);
	int k;
	int t= 0;
	double x=0;
    printf("Please enter a number to decide a");
    scanf("%lf",&a);
    double final1=a;
	double final2=a*H;
	printf("x          y\n");
	for(k=a;(final1-final2)>0.0001;t++)
	{
	
		x+=h;
		final1=a*pow(H,t);
		final2=a*pow(H,t+1);
		printf("%lf  %.19lf\n",x,final1);
	         
	}
}
