#include<stdio.h>
// kullan�can say� istensin ve istenilen sayini x=10 a g�re b�y�k k�c�k esit olup olmad���n� inceleyelim
int main(){
	int sayi,x;
	x=10;
	
	// say� isteyelim
	printf("lutfen bir sayi giriniz:",sayi);
	
	//sayi girelim
	scanf("%d",&sayi);
	
	if(sayi>x){
		printf("%d buyuktur x degerinden",sayi);
	}
	else if(sayi<x){
		printf("%d kucuktur x degerinden",sayi);
	}
	else{
		printf("%d esittir x degerine",sayi);
	}
	
	
	
	return 0;
}

