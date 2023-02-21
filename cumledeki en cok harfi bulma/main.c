#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char cumle[150];  //kullanýcý tarafýndan girilen cümle burada tutulur.
	int i=0;   //sayac
	int encok; //cümledeki kullanýlan en çok harfi tutar.
	char harf; // en son en cok kullanýlan harfin tutlacaðý yer.
	int kucukharf[26]={0}; //cumledeki harflerin kacar tane kullanýldýgýný tutacak dizi.
	
	printf("hepsi kucuk harf olan cumle giriniz\n");
	gets(cumle);
	
	
	while(cumle[i])
	{
		if(cumle[i]>='a' && cumle[i]<='z')  //cumledeki karakter kucuk harflerden birisi oldugu surece yapýlacak iþlem.
		{
			kucukharf[cumle[i]-'a']++; //hangi harfin kac kere kullanýldýgýný tutan diziye yazdýrma iþlemi.
		}
		i++;
	}
	
	char harfleriTut[26]={0}; //ayný sayýda kullanýlmýs harfler varsa eger onlarýnda ekrana bastýrýlmasý ýcýn tutulacagý dizi.
	int j=0;
	
	encok=kucukharf[0]; //if kontrolunde karsilastirma yaparken baþlangýç için bir ençok secilmesi.
	
	for(i=0;i<26;i++) 
	{
		if(kucukharf[i] !=0)
		{
			if(kucukharf[i]>encok)
			{
				encok=kucukharf[i];
				harf=i +'a';   
			}
			else if(kucukharf[i]==encok) //eger encok kadar kullanýlmýs baska harf var ise.
			{
				encok=kucukharf[i];
				harfleriTut[j]=i+'a';
				j++;
			}
		}
	}
	
	printf("\nen cok kullanilan harf/harfler:\n%c\n",harf);
	
	j=0;
	while(harfleriTut[j])  //baska ayný sayýda kullanýlan harf oldugu surece ekrana yazdýran dongü.
	{
		printf("%c\n",harfleriTut[j]);
		j++;
	}
	return 0;
}
