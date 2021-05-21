#include<stdio.h>
#include<stdlib.h>


 int main(){
 	
	float vizeNotu,finalNotu,odevNotu;
	float ortalama = 0;
	
	printf("Lutfen vize notunuzu giriniz : ");
	scanf("%f",&vizeNotu); printf("\n");
	
	printf("Lutfen final notunuzu giriniz : ");
	scanf("%f",&finalNotu); printf("\n");
	
	printf("Lutfen odev notunuzu giriniz : ");
	scanf("%f",&odevNotu); printf("\n");
	
	ortalama = ((vizeNotu/100)*40) + ((finalNotu/100)*50) + ((odevNotu/100)*10);
	
	if(ortalama>=50){
		
		printf("\n\nGectiniz...\n\n");
	}
	
	else if(ortalama>=35 & ortalama<50){
		
		printf("\n\nKosullu Gectiniz...\n\n");
	}
	else if (ortalama<35){
		
		printf("\n\nKaldiniz...\n\n");
	}
	
	printf("ortalama : %f ",ortalama);
	
	return 0;
}
