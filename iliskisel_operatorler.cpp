#include <stdio.h>


int main(int argc, char**argv){
	
	//MANTIKSAL �L��K�SEL OPERAT�RLER
	
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

	
	// BIT DUZEY�NDEK� MANTIKSAL OPERATORLER
	
	int bitDuzeyi  = 10; // 0100 0000
	int bitDuzeyi2 = 13; // 0010 0000	
	
	printf("Ve operatoru sonuc : %d\n", bitDuzeyi & bitDuzeyi2);
	printf("Veya operatoru sonuc : %d\n", bitDuzeyi | bitDuzeyi2);
	
	
	/*
	veya operat�r� :
	64 = 0100 0000
	32 = 0010 0000
	s  = 0110 0000 // 64+32 = 96
	bu y�zden bit d�zeyinde veya i�lemi 96 sonucunu vermektedir.
	
	ve operat�r�:
	64 = 0100 0000
	32 = 0010 0000
	s  = 0000 0000 // 0 olur.
	bu y�zden bit d�zeyinde ve i�lemi 96 sonucunu vermektedir.
	
	*/
	
	
	


	
	return 0;
	
}
