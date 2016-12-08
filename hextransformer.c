/* hextransformer_3000.c */
#include<stdio.h>

int number;
int rest[256];
int number2;

int main(void) {
  int i=0;
  int j;
  int control;
  printf("dez: ");
  scanf("%d", &number);
  printf("hex: ");
  
  do {
    number2=number/16;			//Groesse naechste Stelle
    rest[i]=number%16;			//Verbleibender Rest in vorheriger Stelle
    number=number2;
    i++;
  } while(number >=1);  
  i--;
  
  for(j = 255; j >= 0; j--) {
    if((!rest[j]) && (!control)) {	//Vorstehende Stellen mit Null weg
    }
    else {
      control = 1;			//Stellen mit Null werden nicht mehr geloescht
      switch(rest[j]) {
       case 10:	printf("A");		//ggf. als Buchstabe ausgeben
		break;
       case 11:	printf("B");
		break;
       case 12:	printf("C");
		break;
       case 13:	printf("D");
		break;
       case 14:	printf("E");
		break;
       case 15:	printf("F");
		break;
       case 16:	printf("Error");
		break;
       default:	printf("%d", rest[j]);
     }
    }
  }
  printf("\n");
  return 0;
}