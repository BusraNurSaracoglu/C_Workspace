#include <stdio.h>



int main(){
	
	
	int i,j,satir = 6;
	
	
	
	for(i=0;i<=satir;i++){
		for(j=0;j<=i;j++){
			
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n----------------------------\n\n");
		
	
	for(i=0;i<=satir;i++){
		for(j=6;j>=i;j--){
			
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n----------------------------\n\n");
	
	int satir2 = 11;
	
	for(i=1; i<= satir2 ;i+=2){
		for(j=11;j>=i;j--){
			
			printf("*");
			
		}
		printf("\n");
	}
		
		
	printf("\n----------------------------\n\n");

		
	int space;
	
	for (i=1; i<=5; i++){
		for(space=0; space < 5-i; ++space)
		printf(" ");
		for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
		}




	return 0;
}
