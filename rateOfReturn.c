#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	double initial_value, final_value, years, weeks, days;
	
	printf("Initial value?: ");
	scanf("%lf",&initial_value);
	printf("Final value?: ");
	scanf("%lf",&final_value);
	printf("Years?: ");
	scanf("%lf",&years);
	printf("Weeks?: ");
	scanf("%lf",&weeks);
	printf("Days?: ");
	scanf("%lf",&days);
	years=years + (weeks/52) + (days/365)	
	printf("Initial value: $%.2lf\n",initial_value);
	printf("Final value:   $%.2lf\n",final_value);
	printf("Years:           %lf\n",years);

	final_value = ((pow((final_value/initial_value),(1/years)))-1)*100;
	printf("Annualized rate of return: %lf%%\n",final_value);
}
