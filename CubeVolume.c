/* A programme that computes the volume of a cube using a function and a given length, width and height. Jolly good fun as well! */

#include <stdio.h>

float cube_volume(float length, float width, float height);

int main(){
	long volume;
	volume = cube_volume(200, 50, 10);
	printf("\nThe volume of the cube is %ld", volume);
	printf(" L\n");
}

/*********************************************************************
 * cube_volume()
 * Function determines the volume of a cube
 * Argument list --> 	float length:  length of cube
 * 			float width: width of cube
 * 			float height: height of cube
 * Return value -->	float 		volume of cube
 */

float cube_volume(float length, float width, float height){
	return (length * width * height);
}






