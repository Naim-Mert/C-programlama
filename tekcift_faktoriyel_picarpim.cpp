#include<stdio.h>
#include<stdlib.h>

/* kullanýcýnýn girdigi sayinin tek\çift belirlenmesi  faktöriyelinin alýnmasý  ve pi sayisi ile carpýlmasý iþlemini yapýn */

void tekCift(int s1){
	if(s1% 2 == 0){
		printf("sayimiz cifttir");
	} else{
		printf("sayimiz tektir");
	}
	
		
}

int fact(int s1){
	int faktoriyel=1,i;
	
	for(i=1;i<=s1;i++){
		faktoriyel=faktoriyel*i;
	}
	return faktoriyel;
}
 float piSayisiileCarpimi(int s1){
 	return (s1*3.14);
 }




int main(){
	
	int secim, sayi;
	printf("girmek istediginiz sayiyi yaziniz: \n");
	scanf("%d",&sayi);	printf("\n");
	
	printf("1.sayinin tek/cift bulunmsi\n2.sayinin faktoriyelinin bulumasi\n3.sayinin pi sayisi ile carpilmasi\n");
	scanf("%d",&secim);	printf("\n");
	
	switch(secim){
		case 1:
			tekCift(sayi);
			break;
	    case 2:
	    printf("%d",fact(sayi));
	    break;
	    
	    case 3:
	    	printf("%d",piSayisiileCarpimi(sayi));
	    break; 
	    default:
	    	printf("gecersiz bir sayi girisi yapildi...");
	    break;
	}
	
	
	
	return 0;
}
