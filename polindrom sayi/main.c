#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	
 	char kelime[100]={};
 	
 	printf("kelime giriniz\n");
 	scanf("%s",&kelime);
 	
 	int k=0;
 	while(kelime[k]) //büyük küçük harfe larþý duyarsýz olmasý için bütün harflerin küçük harfe dönüþtürülmesi
 	{
 		kelime[k]=tolower(kelime[k]);
 		k++;
	 }
 	
 	int i,j,toplam=0,kontrol=0;
 	
 	//kelime uzulugu bulma
 	for(i=0;kelime[i]!='\0';i++)
 	{ 
 		toplam++;
 	}
 	
 	printf("kelime uzunlugu: %d\n",toplam);
 	
 	j=toplam-1;
 	
 	for(i=0;i<toplam;i++) //bir sondan ve bir baþtan baþlayarak harflerin ayný olup olmadýgýnýn kontrolu
 	{
 		if(kelime[i]==kelime[j])
 		{
 			kontrol++;
		 }
		 j--;
	}
	
	if(kontrol==toplam)
	{
		printf("polindromdur");
	}
	else
	{
		printf("polindrom degildir");
	}
	return 0;
}
