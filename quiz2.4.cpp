#include <stdio.h>
#include <stdlib.h>


// Kullan�c� taraf�ndan girilen x,y,z degerleri i�in �cgenin �izilip �izilemeyece�ini yazd�ran bir program yaz�n�z.

int main(){
	
	int x,y,z;
	
	printf("Lutfen hesaplamak istediginiz ucgenin kenarlarini sirasiyla giriniz: \n");
	scanf("%d %d %d", &x,&y,&z);
	printf("Girdiginiz degerler: \nx icin: %d\ny icin: %d\nz icin: %d\n",x,y,z);
	
	fflush(stdin);
	
	//x kenar� i�in
	
	if((x<(y+z)) && (x>abs(y-z))){
		if((y<(x+z)) && (y>abs(x-z))){
			if((z<(x+y)) && (z>abs(x-y))){
				printf("Bu ucgen cizilebilir");
				
			}
			else{
				printf("ASLA CIZILEMEZ 1");
			}
		}
		else{
				printf("ASLA CIZILEMEZ 2");
			}
	}
	else{
		printf("ASLA CIZILEMEZ 3");
		}
	
	
	
	return 0;
}
