#include <stdio.h>

// kullanýcýdan deðer isteyelim deðer 0 dan kücük ise soguk 0-15 arasý ýlýk aksi takdirde sýcak yazalým

int main(){
	
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0){
		printf("\nHava SOGUK");
	}
	else if(sayi>0 && sayi<15-){
		printf("\nHava ILIK");
	}
	
	else {
		printf("\nHava SICAK");
	}
	
	return 0;
}
