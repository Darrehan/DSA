/*calculating cosine values using math.h header file*/
#include <stdio.h>
#include <math.h>
#define max 360 // preprosser directive compiler is a powerfull statement it remains constant through out the program
#define pi 3.1415
int main()
{
	int x, angle;
	float y;
	angle = 0;
	printf("Cosine values\n");
	while (angle < max)
	{
		x = (pi / max) * angle;
		y = cos(x);
		printf("\n cosine value %d is %f", angle, y);
		angle = angle + 10;
	}
	return 0;
}