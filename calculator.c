#include <stdio.h>

float add(float num1, float num2) {	
float result;
result=num1+num2; 
return (result);
}

float sub(float num1, float num2) {
float result; 
result=num1-num2;
return (result); 
} 

float mult(float num1, float num2) {
float result; 
result=num1*num2;
return (result);
}

float divi(float num1, float num2) {
float result; 
result=num1/num2; 
return (result);
}


int main () {

int choice;
float num1, num2;
float result; 

printf ("Welcome to calculon 1.0\n"); 
printf ("Please select function\n"); 
printf ("1 for +, 2 for /, 3 for *, 4 for -\n");
scanf ("%d", &choice); 
printf ("Give me first number\n"); 
scanf ("%f", &num1);
printf ("Give me second number\n");
scanf("%f", &num2); 

	
if (choice==1) {
	result= add(num1,num2); 
		printf("The result is %.2f", result);
}
	
else if (choice==2){
	if (num2==0)
		printf("alert num2 cant be 0\n"); 
	else { 
		result= divi(num1,num2);
		printf("The result is %.2f", result);
	}
}

else if (choice==3){
	result= mult(num1,num2);
		printf("The result is %.2f", result);
}

else if (choice==4){
	result= sub(num1,num2);
		printf("The result is %.2f", result);
}	 

return(0); 

}


