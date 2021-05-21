#include <stdio.h>
// 1den n e kadar sayýlarýn ekrana yazdýrýlmasý
int main(){
	int s1,s2;
	
	printf("s1:");
	scanf("%d",&s1);
	
	printf("s2:");
	scanf("%d",&s2);
	
	art:
	printf("%d\n",s1);
	
	if(s1<s2){
		
		s1=s1+2;
		goto art;
	}
	
	
	
	
	return 0;

}
