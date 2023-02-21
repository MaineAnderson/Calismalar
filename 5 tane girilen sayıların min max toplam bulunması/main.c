#include <stdio.h>
#include <stdlib.h>

void minMaxToplam(int dizi[6],int *min,int *max,int *toplam)
{
	int i; //sayaç
	
	//minimum maximum sayilar
	*min=dizi[0];
	*max=dizi[0];
	*toplam =0; //girilen sayilarin toplamý
	
	for(i=0;i<5;i++)
	{
		//min bulunmasi
		if(dizi[i]<*min)
		{
			*min=dizi[i];
		}
		//max bulunmasi
		if(dizi[i]>*max)
		{
			*max=dizi[i];
		}
		
		*toplam+=dizi[i];
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int elemanlar[6]={};
	int i=0;  //sayac
	
	printf("5 tamsayi giriniz\n");
	
	//eleman okuma
	while(i<5)
	{
		scanf("%d",&elemanlar[i]);
		i++;
	}
	
	int max,min,toplam;
	minMaxToplam(elemanlar,&min,&max,&toplam);
	
	printf("min: %d\nmax: %d\ntoplam: %d\n",min,max,toplam);
	printf("elemanlar: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",elemanlar[i]);
	}
	
	return 0;
}
