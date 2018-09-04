#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	double initial_value, final_value, years;
	
	printf("Initial value?: ");
	scanf("%lf",&initial_value);
	printf("Final value?: ");
	scanf("%lf",&final_value);
	printf("Years?: ");
	scanf("%lf",&years);
	
	printf("Initial value: $%.2lf",initial_value);
	printf("Final value:   $%.2lf",final_value);
	printf("Years:           %.2lf",years);

	final_value = ((pow((final_value/initial_value),(1/years)))-1)*100;
	printf("%lf%%\n",final_value);
}
