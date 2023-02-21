#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi;  
	int toplam;
	//sayinin basamaklari
	int birler;
	int onlar;
	int sonuc;
	int yuzler;
	
	printf("sayinin basamaklarinin karelerinin toplanmasinin sonucu 1 cikarsa mutlu asla 1 e ulasamiyorsa mutsuz sayi olarak adlandirilir.\n\n");
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	
	
	
	while(sayi!=1 && sayi!=4) //ayrýca 4 olup olmadýðýda kontrol edilir çunku sonuc 4 oldugunda hesap döngüye sýkýþýr kalýr.
	{
		
		birler=sayi%10;
		onlar=(sayi/10)%10;
		yuzler=(sayi/100)%10;
		toplam=(birler*birler)+(onlar*onlar)+(yuzler*yuzler);
		sayi=toplam;
		
	}
	
	
	
	
	
	if(sayi==1)
		printf("sayiniz mutlu sayidir.");
	else
		printf("sayiniz mutsuz sayidir :(");
	
	return 0;
}
