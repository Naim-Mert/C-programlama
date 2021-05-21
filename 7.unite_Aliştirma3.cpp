#include <stdio.h>

// vize ve final notlarý girilisin vize%40 final%60 etkili iken ort hesapla ortalam 50 üstü ise geçtin 50 altý ise kaldýn yazýsý çýksýn

int main(){
	//vize ve final notlarýný isteyelim
	int vize=0,final=0,ort=0;
	printf("vize ve final notlarinizi giriniz\n");
	scanf("%d",&vize);
	scanf("%d",&final);
	
	ort=(vize*40)/100+(final*60)/100;
	
	 printf("ortalamaniz %d",ort);
	 
	 if(ort>50){
	 	printf("\ngectiniz");
	 }
	
	else{
	 	printf("\nkaldiniz");
	 }
	
return 0;	
}
