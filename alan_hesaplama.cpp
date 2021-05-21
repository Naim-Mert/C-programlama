#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(){
 	
 	
 	int secim,kenar=0,yukseklik=0,taban=0,yaricap=0;
 	
 	printf("--hangi geometrik seklin alanini hesaplamak istersiniz--\n\n");
 	printf("1.kare\n2.ucgen\n3.daire\n\n");
 	scanf("%d",&secim); 	printf("\n\n");
 	
 	switch(secim){
 		case 1:
 			
 			printf("karenin bir kenarini giriniz:");
 			scanf("%d",&kenar); printf("\n");
 			printf("karenin alani: %d",(kenar*kenar));
 	break;
 	
 	case 2:
 		
 		printf("ucgenin tabanini giriniz:");
 		scanf("%d",&taban); printf("\n\n");
 		printf("ucgenin yuksekligini giriniz: ");
 		scanf("%d",&yukseklik);
 		
 		printf("ucgenin alani: %d",((taban*yukseklik)/2));
 		
 	break;
 	
	case 3:
		printf("dairenin yaricapini giriniz: ");
		scanf("%d",&yaricap);  printf("\n\n");
		printf("dairenin alani: %d",(2*3*yaricap));
	 	
	break;
	 
	 default:
	 printf("gecerli bir sayi degeri girilmedi...\n\n");
	 	
	 }
 	
 	return 0 ;
 }
