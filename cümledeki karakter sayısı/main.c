#include <stdio.h>
#include <stdlib.h>

void cumleuzunlugu(char cumle[10],int *uzunluk)
{	
	int i=0,j=0;  //j bo�luk say�s�  //toplam karkater say�s�
	
	for(;cumle[i]!='\0';i++)
	{
		if(cumle[i] ==' ')
		{
			j++; //her bosluk okunduugnda 1 artar
		}
	}
	
	*uzunluk=i-j; //toplam karakter say�s��ndan bosluk say�s�n� c�kart�r 
	
}




 int main(int argc, char *argv[])
 {
 	char ch[10];
 	int uzunluk=0;
 	
 	printf("cumle gir\n");
 	gets(ch);
 	
 	cumleuzunlugu(ch,&uzunluk);
 	
 	if(uzunluk>=10) // 10. karakter \0 olacag� �c�n oraya karkater koymaya �z�n vermez
 	{
 		printf("fazla karakter kullandiniz\n");
 		return 0;
	}
 	
 	printf("bosluksuz karkater sayisi %d\n",uzunluk);
 	

	return 0;
}
