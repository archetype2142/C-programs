/*==================================================
Name: Ritwick Malhotra
File: Birthday_checker.c
Desc: Write a program to find User's age in days, 
   months and years using functions in time.h 
   header file, without using structures. Also 
   display number of days remaining till next 
   birthday.
feat: The program takes command line arguments in
   the format "dd mm yyyy" (without quotes).
===================================================*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

const char *month_checker(int);
unsigned long birthday_to_seconds(int, int, int);
unsigned long today();
unsigned long age_to_years(int, int, int);  
unsigned long age_to_months(int, int, int);  
unsigned long age_to_days(int, int, int);  
void age_isplay(int, int, int);
void days_till_next(int, int, int);


int main(int argc, char* argv[]) {
	int d, m, y;

	// Asks user for dob if not provided from command line
	if(argc < 4) {
		printf("Input your date of birth(dd/mm/yyyy): ");
		scanf("%d/%d/%d", &d, &m, &y);
	}
	else
		d = atoi(argv[1]), m = atoi(argv[2]), y = atoi(argv[3]);

	// Check if days, months and years don't exceed legal values
	if(d > 31 || m > 12 || y > 2016 || y < 1970) {
		printf("Illegal values, please retry.\n");
		exit(1);
	}

	printf("You were born on %d %s %d\n", d, month_checker(m), y);
	age_isplay(d, m, y);
	days_till_next(d, m, y);

	return 0;
}

// returns name of the month from integer 
const char *month_checker(int x) {
	const char *month[] = {"January", "Feburary", "March", "April", "May",
	"June", "July", "August", "September", "October", "November",
	"December"};

	return month[x - 1];
}

// returns today's date in seconds starting from epoch(1st Jan 1970 00:00:00)
unsigned long today() { 
	return static_cast<int>(time(NULL));
}

unsigned long birthday_to_seconds(int d, int m, int y) {
	return (((y - 1970) * 31556926) + ((m - 1) * 2629743) + (d * 86400));
}

// number of seconds in a year(avg 365.24 days) is given by 31556926
unsigned long age_to_years(int d, int m, int y) {
	return (today() - birthday_to_seconds(d, m, y)) / 31556926;
}

// number of seconds in a month(avg 30.44 days) is given by 2629743
unsigned long age_to_months(int d, int m, int y) {
	return (today() - birthday_to_seconds(d, m, y)) / 2629743;
}

// number of seconds in a day is given by 86400
unsigned long age_to_days(int d, int m, int y) {
	return (today() - birthday_to_seconds(d, m, y)) / 86400;
}

void age_isplay(int d, int m, int y) {
	printf("Time passed since your birth in:\nYears: %lu\nMonths: %lu\nDays: %lu\n", age_to_years(d, m, y), age_to_months(d, m, y), age_to_days(d, m, y));
}

void days_till_next(int d, int m, int y) {

	long int bdayThisYear =  (((2016 - 1970) * 31556926) + ((m - 1) * 2629743) + (d * 86400));
	long int bdayNextYear =  (((2017 - 1970) * 31556926) + ((m - 1) * 2629743) + (d * 86400));
	int bday = 0;

	// check if next birthday is this year, else add a year
	if(bdayThisYear - today() < 0) {
		bday = bdayThisYear - today();
		bday /= 86400;
	}
	else {
		bday = bdayNextYear - today();
		bday /= 86400;
	}

	printf("%i day(s) remaining till your next birthday!\n",  bday);
}
