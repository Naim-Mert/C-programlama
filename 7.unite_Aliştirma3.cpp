#include <stdio.h>

// vize ve final notlar� girilisin vize%40 final%60 etkili iken ort hesapla ortalam 50 �st� ise ge�tin 50 alt� ise kald�n yaz�s� ��ks�n

int main(){
	//vize ve final notlar�n� isteyelim
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
