#include <stdio.h>
#include <stdlib.h>

void cumleuzunlugu(char cumle[10],int *uzunluk)
{	
	int i=0,j=0;  //j boþluk sayýsý  //toplam karkater sayýsý
	
	for(;cumle[i]!='\0';i++)
	{
		if(cumle[i] ==' ')
		{
			j++; //her bosluk okunduugnda 1 artar
		}
	}
	
	*uzunluk=i-j; //toplam karakter sayýsýýndan bosluk sayýsýný cýkartýr 
	
}




 int main(int argc, char *argv[])
 {
 	char ch[10];
 	int uzunluk=0;
 	
 	printf("cumle gir\n");
 	gets(ch);
 	
 	cumleuzunlugu(ch,&uzunluk);
 	
 	if(uzunluk>=10) // 10. karakter \0 olacagý ýcýn oraya karkater koymaya ýzýn vermez
 	{
 		printf("fazla karakter kullandiniz\n");
 		return 0;
	}
 	
 	printf("bosluksuz karkater sayisi %d\n",uzunluk);
 	

	return 0;
}
