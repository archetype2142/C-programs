/*====================================================
 	File: cube.c 
	Author: Ritwick Malhotra
  Date: 11 Oct 2016

	Assignment: EPFU Week 2: Circle
  
  Description: Check whether the point (x,y,z) 
    is inside the cube (with boundary) or not. 
    The center of the cube is in point (0,0,0), 
    the side is equal 3. Read the point coordinates
    from standard input (x, then y, then z), the 
    coordinates are separated by space. If the 
    point is inside the cube, output "yes", if not 
    output "no" (without quotas). Do not use "if" 
    command, use conditional operator (?:).
=======================================================*/

#include <stdio.h>
#include <math.h>       

int main() {

	//x, y and z coordinates from the user.
	float x, y, z; 
	scanf("%f%f%f", &x, &y, &z);
	
	//checks if points lie within the cube 
	(x >= -1.5 && x <= 1.5) && (y >= -1.5 && y <= 1.5) && (z >= -1.5 && z <= 1.5) ? printf("yes\n") : printf("no\n");

	return 0;
}