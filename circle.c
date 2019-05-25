/*====================================================
	File: circle.c 
	Author: Ritwick Malhotra
    Date: 11 Oct 2016

	Assignment: EPFU Week 2: Circle
    
    Description: Check whether the point (x,y) is inside
    the circle (with boundary) or not. The center of
    the circle is in point (0,0), the radius is 5. 
    Read the point coordinates from standard input 
    (first x, then y), the coordinates are separated
    by space. If the point is inside the circle, output
    "yes", if not output "no" (without quotas). Do not
    use "if" command, use conditional operator (?:).
=======================================================*/
#include <stdio.h>
#include <math.h>

int main(){
	//declare variables 
	float x, y, radius;
	//take values for x and y vars
	scanf("%f%f", &x, &y);
	//calculate the radius
	radius = sqrt(x * x + y * y);
	radius <= 5 ? printf("yes\n") : printf("no\n");

	return 0;
}
 
