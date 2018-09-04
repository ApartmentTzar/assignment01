#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	double initial_value, final_value, time_total, years, weeks, days;
	
	printf("Initial value: \n");
	scanf("%lf",&initial_value);
	printf("Final value: \n");
	scanf("%lf",&final_value);
	printf("Years: \n");
	scanf("%lf",&years);
	//printf("Weeks: \n");
	//scanf("%lf",&weeks);
	//printf("Days: \n");
	//scanf("%lf",&days);

	//years=years + (weeks/52) + (days/365);

	final_value = ((pow((final_value/initial_value),(1/years)))-1)*100;
	printf("%.3lf%%\n",final_value);
}
