#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	
	/*
	int ilkMatris[5][5],i,j,toplamSatir,toplamSutun;
	srand(time(NULL));
	printf("Matris\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
			
		}
		printf("\n");
	}
		
	
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
			toplamSatir = 0;
			toplamSutun = 0;
			
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					toplamSatir += ilkMatris[i][j];
					toplamSutun += ilkMatris[j][i];
				}
				printf("%d. satir toplami :  %d\n",i+1,toplamSatir);
				printf("%d. sutun toplami :  %d\n",i+1,toplamSutun);
			}
			
			printf("Toplam Satir : %d\n", toplamSatir);
			
}}
	
	*/
	
	/*
	
	int martisa[5][5], martisb[5][5];
	int i,j;
	int topMatris[5][5];
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			martisa[i][j] = rand()%10;
			martisb[i][j] = rand()%10;
		}		
	}
	
	
	
	printf("Birinci Matris:\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",martisa[i][j]);	
		}
		printf("\n");
	}
	printf("\nIkinci Matris:\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",martisb[i][j]);	
		}
		printf("\n");
	}
	printf("\nToplam Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			topMatris[i][j] = martisa[i][j] + martisb[i][j];
			printf("%d\t",topMatris[i][j]);
		}
		printf("\n");
	}
	
	
	*/
	
	
	int ilkMatris[5][5],i,j,transposeMatrisi[5][5];
	srand(time(NULL));
	printf("Ýlk Matris\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
			
		}
		printf("\n");
	}
	printf("\nTR Matris\n");
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			
			printf("%d\t",ilkMatris[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
	return 0;
	
}
