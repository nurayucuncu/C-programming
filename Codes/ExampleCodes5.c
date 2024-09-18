#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int puan;
    
    printf("Bir puan giriniz: ");
    scanf("%d",&puan);
    
    if(90<=puan && puan<=100)
	printf("Harf notunuz AA");
    else if(85<=puan && puan<=89) 
	printf("Harf notunuz BA");
    else if(80<=puan && puan<=84) 
	printf("Harf notunuz BB");
    else if(70<=puan && puan<=79) 
	printf("Harf notunuz CB");
    else if(60<=puan && puan<=69) 
	printf("Harf notunuz CC");
    else if(50<=puan && puan<=59) 
	printf("Harf notunuz DC");
    else if(45<=puan && puan<=49) 
	printf("Harf notunuz DD");
    else if(35<=puan && puan<=44) 
	printf("Harf notunuz FD");
    else 
	printf("Gecersiz puan girisi");
    

	
	return 0;
}

