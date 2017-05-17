#include <stdio.h>
int main(){

int numb1, numb2; 

printf("Θα ελέγξω αν καταφέρετε να μου δώσετε μια σειρά από ακέραιους αριθμούς, όπου εναλλάξ θα είναι μονός ή ζυγός. Σε περίπτωση που μου δώσετε δύο ίδιου τύπου (μονός – μονός ή ζυγός – ζυγός) τότε το πρόγραμμα θα τερματιστεί, αλλιώς θα επαναληφθεί η διαδικασία\n" ); 

do {

printf("vale ton prwto akeraio arithmo"); 
scanf("%d", &numb1);

if ((numb1%2)==0)
	printf("Ο πρώτος αριθμός %d που δώσατε είναι zygos αριθμός.", numb1);

else 

	printf("Ο πρώτος αριθμός %d που δώσατε είναι monos αριθμός.", numb1);

printf("vale ton deftero akeraio arithmo");
scanf("%d", &numb2);

if ((numb2%2)==0)
	printf("Ο δεύτερος αριθμός %d που δώσατε είναι zygos αριθμός.", numb2);

else
	printf("Ο δεύτερος αριθμός %d που δώσατε είναι monos αριθμός.", numb2); }

while (((numb1%2)==0) || ((numb2%2)==0)); 
	





return (0); 

}
