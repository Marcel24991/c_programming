#include <stdio.h>

int convert(int, int);

int main(void)
{
	int hours, minutes;
	int next;
	int timestamp;
	int timestamp_departure1;
	int timestamp_departure2;
	int timestamp_departure3;
	int timestamp_departure4;
	int timestamp_departure5;
	int timestamp_departure6;
	int timestamp_departure7;
	int timestamp_departure8;

	// konvertiere in sekunden
	hours = 8; minutes = 0;
	timestamp_departure1 = convert(hours, minutes);

	hours = 9; minutes = 43;
	timestamp_departure2 = convert(hours, minutes);

	hours=11; minutes = 19;
	timestamp_departure3 = convert(hours, minutes);

	hours = 12; minutes = 47;
	timestamp_departure4 = convert(hours, minutes);

	hours = 14; minutes = 0;
	timestamp_departure5 = convert(hours, minutes);

	hours = 15; minutes = 45;
	timestamp_departure6 = convert(hours, minutes);

	hours = 19; minutes = 0;
	timestamp_departure7 = convert(hours, minutes);

	hours = 21; minutes = 45;
	timestamp_departure8 = convert(hours, minutes);

	printf("Enter a 24-hour time : ");
	scanf("%d:%d", &hours, &minutes);

	timestamp = convert(hours, minutes);

	printf("Timestamp : %d\n", timestamp);
	printf("Timestamp - Departure 1: %d\n", timestamp_departure1);
	printf("Timestamp - Departure 2: %d\n", timestamp_departure2);
	printf("Timestamp - Departure 3: %d\n", timestamp_departure3);
	printf("Timestamp - Departure 4: %d\n", timestamp_departure4);
	printf("Timestamp - Departure 5: %d\n", timestamp_departure5);
	printf("Timestamp - Departure 6: %d\n", timestamp_departure6);
	printf("Timestamp - Departure 7: %d\n", timestamp_departure7);
	printf("Timestamp - Departure 8: %d\n", timestamp_departure8);


	printf("Closest departure time is ");

	if(timestamp < timestamp_departure1){
		next = timestamp_departure1;
		printf("8:00 a.m. , arriving at 10.16 a.m.");
	}else if(timestamp > timestamp_departure1
		&& timestamp <= timestamp_departure2){
		next = timestamp_departure2;
		printf("9:43 a.m. , arriving at 11:52 a.m.");
	}else if(timestamp > timestamp_departure2
		&& timestamp <= timestamp_departure3){
		next = timestamp_departure3;
		printf("11:19 a.m. , arriving at 1:31 p.m.");
	}else if(timestamp > timestamp_departure3
		&& timestamp <= timestamp_departure4){
		next = timestamp_departure4;
		printf("12:47 p.m. , arriving at 3:00 p.m.");
	}else if(timestamp > timestamp_departure4
		&& timestamp <= timestamp_departure5){
		next = timestamp_departure5;
		printf("2:00 p.m. , arriving at 4:08 p.m.");
	}else if(timestamp > timestamp_departure5
		&& timestamp <= timestamp_departure6){
		next = timestamp_departure6;
		printf("3:45 p.m. , arriving at 5:55 p.m.");
	}else if(timestamp > timestamp_departure6
		&& timestamp <= timestamp_departure7){
		next = timestamp_departure7;
		printf("7:00 p.m. , arriving at 9:20 p.m.");
	}else if(timestamp < timestamp_departure7
		&& timestamp <= timestamp_departure8){
		next = timestamp_departure8;
		printf("9:45 p.m. , arriving at 11:58 p.m");
	}else{
		next = -1;
		printf("No departure available !!! ");
	}

	printf("\n");


	return 0;
}

int convert(int hours, int minutes)
{
	return hours * 3600 + minutes * 60; 
}
