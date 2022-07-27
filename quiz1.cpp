#include <stdio.h>

// Kullanıcıdan a,b,c değerleri alarak delta hesaplaması ve deltanın 0'dan büyük mü yoksa küşçük mü olduğunu sorgulayan programı yazınız.


int main(int argc, char **argv){
	
	int a,b,c;
	int delta;
	
	printf("lutfen sirayla a,b,c degerlerini giriniz:");
	scanf("%d %d %d",&a,&b,&c); 
	
	delta = b*b - 4*a*c;
	printf("delta  : %d \n",delta);
	
	printf("delta sifirdan buyukse 1 kucukse 0 yazdir : %d", (delta >= 0));
	
	
	
	return 0;
	
}
