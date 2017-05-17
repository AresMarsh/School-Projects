	#include <stdio.h>
	#include <math.h>

/*Third Grade equation solver*/

	float diak(float a, float b , float c){
	float D;
	D=(b*b)-(4*(a*c));
	return (D);
	}

	float xo1(float b, float a, float D ) {
	float x1, y;
	y=sqrt(D);
	x1=(((-1*b)+y)/(2*a));
	return (x1); 
	}

	float xo2(float b, float a, float D ) {
	float x2,y ;
	y=sqrt(D);
	x2=(((-1*b)-y)/(2*a));
	return (x2); 
	}

	float xo3(float b, float a, float D ) {
	float x3;

	x3=((-1*b)/(2*a));
	return (x3); 
	}



	int main () {

	float a, b, c, D, x1, x2, x3; 


	printf("I will solve (ax^2+bx+c)\n");

	printf("give me a number for a\n");
	scanf("%f",&a);

	printf("give me a number for b\n");
	scanf("%f",&b);

	printf("give me a number for c\n");
	scanf("%f",&c);

	printf ("the equation is (%dx^2+%dx+%d)\n", a,b,c);

	D=diak(a,b,c);
	printf("%d\n", D);
	printf("The Distinctive is %.2f\n", D);

	if (D<0) 
		printf("There is no solution for the equation");

	else if (D==0) { 
		x3=xo3(b,a,D);


	}

	else {	x1=xo1(b,a,D);
			printf("the first solution is %f\n", x1);
		x2=xo2(b,a,D);
			printf("the second solution is %f\n", x2);
		
	
	}

	return (0); 


	}
