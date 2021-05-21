#include<stdio.h>
#include<stdlib.h>

//bir grupta girilen yaslardan en kucuk olaný tutucaz ve kac tane enkucuk yastan kisi var onu ekrana yansýtýcaz

int main(){
	
	int enKucuk=999,enKucukYasSayisi=0,yas;
	int devamKontrolu=1;
	
	while(devamKontrolu== 1){
		printf("Lutfen yasinizi giriniz:");
		scanf("%d",&yas);	printf("\n");
		
		if(yas<0){
			printf("hatali bir Tuslama yaptiniz...");
			
			} else{
				if(enKucuk>yas){
					enKucukYasSayisi = 0;
					enKucuk = yas;
					enKucukYasSayisi++;
				}
		else if(yas=enKucuk){
			enKucukYasSayisi++;
		}
			}
		
		
		
		printf("devam etmek istiyor musunuz(evet=1):");
		scanf("%d",&devamKontrolu);	printf("\n");
		
	
	}
	 printf("en kucuk kisinin yasi %d dir\n",enKucuk);
	 printf("en kucuk yasa sahip kisi sayisi %d dir\n",enKucukYasSayisi);
	
	
		return 0;
	
	
}
