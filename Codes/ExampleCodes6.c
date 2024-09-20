#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int puan;
    
    printf("Bir puan giriniz: ");
    scanf("%d",&puan);
    
    if(60<=puan && puan<=100)
	printf("Statu: Gecer");
	
	else if(45<=puan && puan<=59)
	printf("Statu: Kosullu Gecer");
	
	else if(puan<45)
	printf("Statu: Basarisiz");
	
	else
	printf("Gecersiz puan girisimi");
    
	return 0;
}

