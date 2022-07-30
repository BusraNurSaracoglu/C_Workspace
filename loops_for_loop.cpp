#include <stdio.h>
#include <math.h>


int main (int argc,char **argv){
	
/*	
	for(donguye ilk girdiginde yapýlacak islem; dongu sartý; her dongunun sonunda yapýlacak islem){
		
		yapilacak islemler;
		
	}
	
*/

/*
	int i,j; // dongunun sayacý
	for(i=0;i<10;i++){
		
		for(j=0;j<i;j++){
			
			printf("Merhaba ");
		}
	    printf("\n");	
	}
*/
	
/*
	int i,sayi,faktoriyel=1;
	
	printf("Lutfen faktoriyelini hesaplanacagi sayiyi giriniz: \n");
	scanf("%d",&sayi);
	for(i=2;i<=sayi;i++){
		
		faktoriyel = faktoriyel * i;
		
	}
	
	printf("Sonuc: %d ", faktoriyel);

*/


	int i,j;
	for (i=2;i<=10;i++){
		for(j=1;j<=10;j++){
			int sonuc = pow(i,j);
			printf("Sonuc = %d\n", sonuc);
		}
		
	}
	





	return 0;
}
