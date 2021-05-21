#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int sayi,tahmin,sayac=0,fark;
	srand(time(NULL));
	sayi=rand()%100+1;
	printf("aklindan bir sayi tut [100,1] arasinda tuttum bakalim 5 denemede bulabilecek misin\n");
	while(1){
		printf("%d.tahmin:",sayac+1);
		scanf("%d",&tahmin);
		sayac++;
		if(sayi<=tahmin){
			fark = tahmin-sayi;
			
		}
	else
		fark = sayi-tahmin;
	if(fark == 0){
		printf("tebrikler dogru bildiniz\n");
		break;
	}
	else if(fark<=5){
		printf("Cok Yaklastiniz!!!\n");
	}
	else if(fark>5 && fark<=10){
		printf("Yaklastiniz!!!\n");
	}
	else if(fark>10 && fark<=30){
		printf("Uzaksiniz!!!\n");
	}
	else 
	printf("Cok Uzaksiniz!!!\n");
	
	if(sayac == 8){
		printf("Malesef 8 denemede bilemediniz cevap %d idi\n",sayi);
		break;
	}
	}
	
	
}
