#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float sayi1, sayi2;
	char islem;
	
	printf(" ilk once ilk sayi\n sonra\n\n toplama icin +\n cikarma icin -\n bolme icin   /\n carpma icin  *\n\n sonra\n ikinci sayi giriniz!\n\n");
	scanf("%f %c %f",&sayi1, &islem, &sayi2);
	
	switch (islem){
		case '+': 
			printf("\n%.2f + %.2f = %.2f",sayi1,sayi2,sayi1+sayi2);
			break;
		
		case'-':
			printf("\n%.2f - %2.2f = %.2f",sayi1,sayi2,sayi1-sayi2);
			break;
		
		case '*':
			printf("%.2f * %.2f = %.2f",sayi1,sayi2,sayi1*sayi2);
			break;
		
		case '/':
			printf("%.2f / %.2f = %.2f",sayi1,sayi2,sayi1/sayi2);
			break;
	}
	
	

	return 0;
}
