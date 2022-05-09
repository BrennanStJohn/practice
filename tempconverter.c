// This is practice for upcoming finals
// I got a B on the final woohoo


#include<stdio.h>
#define SIZE 500000

float convertCtoF(float a);

float main(){

	float celsius[SIZE];
	int i = 0;
	int y = 0;
	int count = 0;
	
	printf("%s", "How many temperatures would you like to convert?");
	puts("");
	scanf("%d", &count);
	printf("Please give %d Celsius temperatures between -51.1 and 106.7 to be converted to Farenheit:", count);
	puts("");
	puts("");
	
	
	for(i = 0; i <= count ; i++){	
	scanf("%f", &celsius[i]);
	}
	
	puts("");
	printf("%4s %5s %4s %18s", "", "Celsius", "", "Farenheit");
	puts("");
	printf("%3s %5s %5s %18s", "", "_________", "", "____________");
	puts("");
	puts("");
	
	
	for(int z = 0; z < count; z++){
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

