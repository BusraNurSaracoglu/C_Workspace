#include <stdio.h>



int main(int argc, char **argv){
	
	
	//1. soru
	// girilen para miktarının içerisinde kaçlık banknot kaç adet bulunmaktadır?
	
	int paraMiktari;
	printf("Lutfen bir para miktari giriniz:");
	scanf("%d", &paraMiktari) ; // değişkenin adresine yaz
	
	printf("%d adet 200 TL bulunmaktadir. \n", paraMiktari/200);
	paraMiktari%=200;
	printf("%d adet 100 TL bulunmaktadir. \n",paraMiktari/100 );
	paraMiktari%=100;
	printf("%d adet 50 TL bulunmaktadir. \n",paraMiktari/50 );
	paraMiktari%=50;
	printf("%d adet 20 TL bulunmaktadir. \n",paraMiktari/20 );
	paraMiktari%=20;
	printf("%d adet 10 TL bulunmaktadir. \n",paraMiktari/10 );
	paraMiktari%=10;	
	printf("%d adet 5 TL bulunmaktadir. \n",paraMiktari/5 );
	paraMiktari%=5;
	printf("%d adet 1 TL bulunmaktadir. \n",paraMiktari/1 );
	paraMiktari%=1;	
	
	/*
	
	1480  = 7 adet 200 TL bulunmaktadır.
	80 TL = 0 adet 100 TL bulunmaltadır.
	80 TL = 1 adet 50 TL  bulunmaktadır.
	30 TL = 1 adet 20 TL  bulunmaktadır.
	10 TL = 1 adet 10 TL  bulunmaktadır.
	0
	*/
	
	
	
	//2. soru
	// sayıyı tersten yazdırınız
	// önce modunu al sonra yazdır
	
	
	int sayi,geciciSayi;
	printf("Lutfen 3 basamakli tersi alinacak sayiyi girin:");
	scanf("%d",&sayi);
	geciciSayi = sayi;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	
	/*
	123
	321
	*/
	
	
	
	return 0;

}
