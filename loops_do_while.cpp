#include <stdio.h>



int main(){
	
/*
	while(kosul){
	
	}	
	
*/
	// WHILE DONGUSU
	
	int i=0;
	while(1){
		i++;
		if(i==10){
			break; // break g�r�ld��� zaman d�ng� sonlan�r.
		}
		
		if(i%2 ==0){
			continue; // alt sat�rlar tamamen atlan�r. D�ng� ba�a d�ner.
			// o iterasyon sonland�r�l�yor
		}
		printf("i sayisi:%d\n",i);
	}
	
	
	
	
	
	// DO-WHILE DONGUSU
	// do-while d�ng�s�nde d�ng� 1 defa �al���yor kesinlikle !!!
	// aralar�ndaki tek fark bu.
	// do k�sm�na yap�lacaklar� yazaca��z.
/*
	{
		printf("i sayisi: %d",i);
		i++;
		do
	}while(i<0);
	
*/

	
	
	int sayi, geciciSayi,basamakSayisi;
	
	printf("lutfen bir sayi degeri giriniz:\n");
	scanf("%d",&sayi);
	
	geciciSayi = sayi;
	while(geciciSayi!=0){
		printf("%d", geciciSayi%10);
		geciciSayi/=10;
		basamakSayisi++;
	}
	printf("\n%d sayisi %d basamaklidir", sayi, basamakSayisi);
	
	
	
	

	
	return 0 ;
}
