// This is practice for upcoming finals
/* In this challenge, write a program that takes in three arguments, a start temp (in Celsius), and end temperature (in Celsius) and a step size. Print out a table that goes from the start temperature to the end temperature, in steps of the step size; you do not actually need to print the final end temperature if the step size does not exactly match. You should perform input validation: do not accept start temperatures less than a lower limit (which your code should specify as a conastant) or higher than an upper limit ( which your code should also specify). You should not allow a step size greater than the difference in temperatures.
*/


#include<stdio.h>
#define SIZE 500000

float convertCtoF(float a);

float main(){

	float celsius[SIZE];
	int i = 0;
	int y = 0;
	
	printf("%s", "Please give, up to 5, Celsius temperatures between -51.1 and 106.7 to be converted to Farenheit:");
	puts("");
	
	
	for(i = 0; i < 5 ; i++){	
	scanf("%f", &celsius[i]);
	}
	
	puts("");
	printf("%4s %5s %4s %18s", "", "Celsius", "", "Farenheit");
	puts("");
	printf("%3s %5s %5s %18s", "", "_________", "", "____________");
	puts("");
	puts("");
	
	
	for(int z = 0; z <= sizeof celsius[y]; z++){
		if(celsius[z] < 106.7 && celsius[z] > (0-51.1)){
			printf("%4s %.2f %18s %.2f", "", celsius[z], "", convertCtoF(celsius[z]));
			puts("");
		}
		else {
		printf("%4s %s %16s %s", "", "Invalid", "", "Entry");
		puts("");
		}
	}
	
	
	
}

float convertCtoF(float a){
	
	float x;
	
	x = ((a * 1.8) + 32);
	
	return (float) x;

}

