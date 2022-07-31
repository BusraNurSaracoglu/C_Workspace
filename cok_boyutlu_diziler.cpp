#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main(){
	
	
	int ikiBoyutluDizi[10][10];
	int i,j;
	
	printf("%d byte hafizada yer kapliyor\n", sizeof(ikiBoyutluDizi));
/*	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			ikiBoyutluDizi[i][j] = i * j;
		}	
	}
*/	
	/*
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			if(i >= j){
				
				ikiBoyutluDizi[i][j] = 1;
			}
			else{
				ikiBoyutluDizi[i][j] = 0;
			}
			
		}	
	}
	
	*/
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			if(i%2==0){
				
				ikiBoyutluDizi[i][j] = 1;
			}
			else{
				ikiBoyutluDizi[i][j] = 0;
			}
			
		}	
	}
	
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			printf("%d ",ikiBoyutluDizi[i][j]);
		}	
		printf("\n");
	}
	
	
	printf("\n ----------------------------------\n");
	
	

	
	
	
	
	return 0;
}
