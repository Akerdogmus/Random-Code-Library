#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int gelir();
int kisi();

int normal,ogrenci,yasli,toplam,normalg,ogrencig,yaslig,toplamg;

int main()
{
	printf("Normal yolcu sayisini girin:\n");
	scanf("%d",&normal);
	printf("Ogrenci yolcu sayisini girin:\n");
	scanf("%d",&ogrenci);
	printf("Yasli yolcu sayisini girin:\n");
	scanf("%d",&yasli);

	toplam=kisi();
	toplamg=gelir();

	printf("Tam %d kisi Ogrenci %d kisi Yasli %d kisi Toplam %d kisi\n",normal,ogrenci,yasli,toplam);
	printf("__________________________________________________________\n");
	printf("Tam=%d Ogrenci=%d Yasli=%d Toplam=%d\n",normalg,ogrencig,yaslig,toplamg);

	system("pause");
}

int kisi()
{
	toplam=normal+ogrenci+yasli;
	return toplam;
}

int gelir()

{
	normalg=normal*10;
	yaslig=yasli*5;
	ogrencig=ogrenci*7;
	toplamg=normalg+yaslig+ogrencig;
    return toplamg;
}
