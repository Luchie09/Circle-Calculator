#include <stdio.h>

int main(){
	float r;
	
		printf("\t\t\t Area and Circumference of Circle Calculator");
		printf("\n\n Enter the Radius of the Circle =");
		scanf("%f", &r);
		
	float Pi = 3.14;
	float A = Pi * r * r;
	float C = Pi * 2 * r;
	
	if (r <= 0){
		printf("Invalid Input");
	}
	else{
		printf("Area = %f\n", A);
		printf("Circumference = %f\n", C);
	}	
		
	return 0;
}
