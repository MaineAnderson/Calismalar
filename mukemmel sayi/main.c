#include <stdio.h>
#include <stdlib.h>


	int muksayi_fonk(sayi)
	{
		int bolenler[100]; //sayýnýn bolenlerýnýn tutulacagý dizi
		int i,j=0;
		for(i=1;i<=sayi;i++)
		{
			//mod'u alýndýgýnda kalan 0 ise o sayýya bölen denir.
			if(sayi%i == 0)
			{
				bolenler[j]=i; 
				j++;
			}
		}
		
		int kontrolSayi;
		
		for(i=0;bolenler[i]!= sayi;i++) //sayýnýn kendisi hariç diðer bolenlerýnýn kontrolSayi deðiþkenine eklenmesi.
		{
			kontrolSayi+=bolenler[i];
		}
		
		int sonuc;
		
		if(kontrolSayi==sayi) 
		{
			sonuc=1;
		}
		else
		{
			sonuc=0;
		}
		
		return sonuc;
	}
	
	
	
	int main(int argc, char *argv[]) {

	int sayi;
	printf("Girilen sayinin kendisi haric bölenlerinin toplami kendisine esit ise ona mukemmel sayisi denir.\n");
	printf("\nBir sayi giriniz\n");
	scanf("%d",&sayi);
	
	int sonuc;
	sonuc=muksayi_fonk(sayi);
	
	if(sonuc==1)
	{
		printf("sayi mukemmel sayidir");
	}
	else
	{
		printf("sayi mukemmel degildir");
	}
	
	
	return 0;
}
