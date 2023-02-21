#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char cumle[150];  //kullan�c� taraf�ndan girilen c�mle burada tutulur.
	int i=0;   //sayac
	int encok; //c�mledeki kullan�lan en �ok harfi tutar.
	char harf; // en son en cok kullan�lan harfin tutlaca�� yer.
	int kucukharf[26]={0}; //cumledeki harflerin kacar tane kullan�ld�g�n� tutacak dizi.
	
	printf("hepsi kucuk harf olan cumle giriniz\n");
	gets(cumle);
	
	
	while(cumle[i])
	{
		if(cumle[i]>='a' && cumle[i]<='z')  //cumledeki karakter kucuk harflerden birisi oldugu surece yap�lacak i�lem.
		{
			kucukharf[cumle[i]-'a']++; //hangi harfin kac kere kullan�ld�g�n� tutan diziye yazd�rma i�lemi.
		}
		i++;
	}
	
	char harfleriTut[26]={0}; //ayn� say�da kullan�lm�s harfler varsa eger onlar�nda ekrana bast�r�lmas� �c�n tutulacag� dizi.
	int j=0;
	
	encok=kucukharf[0]; //if kontrolunde karsilastirma yaparken ba�lang�� i�in bir en�ok secilmesi.
	
	for(i=0;i<26;i++) 
	{
		if(kucukharf[i] !=0)
		{
			if(kucukharf[i]>encok)
			{
				encok=kucukharf[i];
				harf=i +'a';   
			}
			else if(kucukharf[i]==encok) //eger encok kadar kullan�lm�s baska harf var ise.
			{
				encok=kucukharf[i];
				harfleriTut[j]=i+'a';
				j++;
			}
		}
	}
	
	printf("\nen cok kullanilan harf/harfler:\n%c\n",harf);
	
	j=0;
	while(harfleriTut[j])  //baska ayn� say�da kullan�lan harf oldugu surece ekrana yazd�ran dong�.
	{
		printf("%c\n",harfleriTut[j]);
		j++;
	}
	return 0;
}
