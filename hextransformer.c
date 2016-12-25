/* hextransformer.c */
#include<stdio.h>

unsigned int number;
int rest[256];
int i=0;

void output();

void transformation() {
  while(number>0) {
    rest[i++]=number%16;		//Verbleibender Rest in vorheriger Stelle
    number=number/16;			//Groesse naechste Stelle
  }
  output();
}

void output() {
  for(--i; i>= 0; i--) {
			
      switch(rest[i]) {
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
       default:	printf("%d", rest[i]);
	}
    }
}

int main(void) {
  printf("max. 4294967295\n");
  printf("dez: ");
  scanf("%ui",&number);
  printf("hex: ");
  if(number==0) {
    printf("0");
  }
  else {
    transformation();
  }
  printf("\n");
  return 0;
}