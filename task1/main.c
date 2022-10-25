#include<stdio.h>
int main(){
	double a=1;
	double h=0.001;
	double x=0;
	double y=a;
	double z;
	printf("x        y\n");
	printf("%f %f\n",x,y);
	z=(1-h)*y;
	while(y-z>=0.001*h){
	x=x+h;
	y=z;	
	z=(1-h)*y;	
	printf("%f %f\n",x,y);	
	}
	return 0;
}
