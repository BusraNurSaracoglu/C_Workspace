#include <stdio.h>


int main(int argc, char**argv){
	
	//MANTIKSAL ÝLÝÞKÝSEL OPERATÖRLER
	
	int sayi1= 15, sayi2 = 25;
	
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,sayi1>sayi2);
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,sayi1<sayi2);
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,sayi1==sayi2);
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,sayi1!=sayi2);
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,sayi1>=sayi2);
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,sayi1<=sayi2);
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,!(sayi1==sayi2));
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,((sayi1!=sayi2) && (sayi1<sayi2)));
	printf("Ilk sayi:%d, ikinci sayi : %d, sorgu sonucu(0 veya 1): %d \n",sayi1,sayi2,(sayi1==sayi2 || sayi1>sayi2));

	
	// BIT DUZEYÝNDEKÝ MANTIKSAL OPERATORLER
	
	int bitDuzeyi  = 10; // 0100 0000
	int bitDuzeyi2 = 13; // 0010 0000	
	
	printf("Ve operatoru sonuc : %d\n", bitDuzeyi & bitDuzeyi2);
	printf("Veya operatoru sonuc : %d\n", bitDuzeyi | bitDuzeyi2);
	
	
	/*
	veya operatörü :
	64 = 0100 0000
	32 = 0010 0000
	s  = 0110 0000 // 64+32 = 96
	bu yüzden bit düzeyinde veya iþlemi 96 sonucunu vermektedir.
	
	ve operatörü:
	64 = 0100 0000
	32 = 0010 0000
	s  = 0000 0000 // 0 olur.
	bu yüzden bit düzeyinde ve iþlemi 96 sonucunu vermektedir.
	
	*/
	
	
	


	
	return 0;
	
}
