#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEG_TO_RAD M_PI/180
#define RAD_TO_DEG 180/M_PI
int main (void){
	double theta1, refraction, theta2;
	printf("Angle of incidence with respect to normal?: ");
	scanf("%lf",&theta1);
	printf("Refraction index?: ");
	scanf("%lf",&refraction);
	
	if(theta1>180 || theta1<-180){
		printf("Invalid angle must be -180 to 180: %lf",theta1);
	}else if(refraction<1){
		printf("Refraction index makes no sense!");
	}else{
		theta2=asin((sin(DEG_TO_RAD*theta1)/refraction))*RAD_TO_DEG;
		printf("Angle of incidence: %.3lf degrees\n",theta1);
		printf("Index of refraction: %.3lf\n", refraction);
		printf("Angle of Refraction: %lf degrees\n", theta2);
		
	}
	return 0;
}
