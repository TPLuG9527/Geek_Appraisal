#include<stdio.h>
#include<math.h>
int main(void)
{
	double h=0.001;
	double a=2;
	double H=(2-h)/(2+h);
	int k;
	int t= 0;
	double x=0;
    printf("Please enter a number to decide a");
    double final1=a;
	double final2=a*H;
	printf("x          y\n");
	while((final1-final2)>=0.0001)
	{
	
		x+=h;
		final1=final1*H;
		final2=final2*H;
		printf("%lf  %.19lf\n",x,final1);
	         
	}
}
