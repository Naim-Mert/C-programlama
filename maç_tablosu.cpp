#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){
	
	int galibiyet=0,maglubiyet=0,beraberlik=0;
	int devamKontrolu=1;
	int atilanGolSayisi=0,yenilenGolSayisi=0;

while(devamKontrolu == 1){
	
	printf("atilan gol sayisini giriniz:");
	scanf("%d",&atilanGolSayisi); 	printf("\n");
	
	printf("yenilen gol sayisini giriniz:");
	scanf("%d",&yenilenGolSayisi); 	printf("\n");
	
	if(atilanGolSayisi>yenilenGolSayisi){
		galibiyet++;
	}
	else if(atilanGolSayisi<yenilenGolSayisi){
		maglubiyet++;
	}
	else if(atilanGolSayisi == yenilenGolSayisi){
		beraberlik++;
	}
	else {
		printf("Beklenmedik bir sorun olustu...");
	}
	
	printf("devam etmek istiyor musunuz:");
	scanf("%d",&devamKontrolu);		printf("\n");
	
	
}

printf("toplam puaniniz: %d\n",((galibiyet*3)+beraberlik));
printf("galibiyet sayiniz: %d\n",galibiyet);
printf("beraberlik sayiniz: %d\n",beraberlik);
printf("maglubiyet sayiniz: %d\n",maglubiyet);

	
}
