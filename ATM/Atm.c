#include <stdio.h>
int main(){
	int sifre;
	printf("Lutfen 4 haneli sifrenizi giriniz.\n");
	scanf("%d",&sifre);
	if (sifre == 1905){
	printf("Sifreniz dogru yonlendiriliyorsunuz.\n");
	
	int islem;
	int bakiye = 5000;
	int tutar;
	
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
	printf("Lutfen bir islem seciniz.\n");
	scanf("%d",&islem);
	switch(islem){
	case 1:
			printf("Bakiyeniz = %d\n",bakiye);
			printf("Lutfen cekmek istediginiz tutari giriniz.\n");
			scanf("%d",&tutar);
			if(tutar> bakiye){
				printf("Yetersiz bakiye!!\n Lutfen bakiyenize gore islem gerceklestirin.\n");
			}
			else
			{
				printf("Isleminiz gerceklestiriliyor.\n");
				bakiye -= tutar;
			printf("Yeni bakiyeniz = %d\n",bakiye);
			}
		
			break;
	
	case 2:
			printf("Bakiyeniz = %d\n",bakiye);
			printf("Lutfen yatýrmak istediginiz tutari giriniz ve ardindan paranizi yerlestiriniz.\n");
			scanf("%d",&tutar);
				printf("Isleminiz gerceklestiriliyor.\n");			
			bakiye += tutar;
			printf("Yeni bakiyeniz = %d\n",bakiye);
			break;
			
			
	case 3:
			printf("Bakiyeniz = %d\n",bakiye);
			printf("Lutfen havale yapmak istediginiz tutari giriniz.\n");
			scanf("%d",&tutar);
			if(tutar> bakiye){
				printf("Yetersiz bakiye!!\n Lutfen bakiyenize gore islem gerceklestirin.\n");
			}else{
				printf("Isleminiz gerceklestiriliyor.\n");
					bakiye -= tutar;
			printf("Yeni bakiyeniz = %d\n",bakiye);
			}
			
			break;
			
			
	case 4:
			printf("Bakiyeniz = %d\n",bakiye);
			break;	


    case 5:	
          printf("Kart Iade Edildi..\nGorusmek uzere :)\n");
          break;
          
    default :
    	   printf("---------------------------------------------------------------------------------\n");
	        int i ;
	        islem;
	       
	       while(islem = 'false' && i>0){
	       
	 printf("Tekrar Hosgeldiniz\n");      	
			   	
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
	printf("Lutfen bir islem seciniz.\n"); 
	scanf("%d",&islem);
	switch(islem){
	printf("Yanlis bir islem gerceklestirdiniz.Tekrar ana menuye donduruluyorsunuz.\n");
	case 1:
	        
			printf("Bakiyeniz = %d\n",bakiye);
			printf("Lutfen cekmek istediginiz tutari giriniz.\n");
			scanf("%d",&tutar);
			if(tutar> bakiye){
				printf("Yetersiz bakiye!!\n Lutfen bakiyenize gore islem gerceklestirin.\n");
				printf("************************************************************\n");
			}
			else
			{
				printf("Isleminiz gerceklestiriliyor.\n");
				bakiye -= tutar;
			printf("Yeni bakiyeniz = %d\n",bakiye);
			printf("************************************************************\n");
			}
		
			break;
	
	case 2:
			printf("Bakiyeniz = %d\n",bakiye);
			printf("Lutfen yatýrmak istediginiz tutari giriniz ve ardindan paranizi yerlestiriniz.\n");
			scanf("%d",&tutar);
				printf("Isleminiz gerceklestiriliyor.\n");			
			bakiye += tutar;
			printf("Yeni bakiyeniz = %d\n",bakiye);
			printf("************************************************************\n");
			break;
			
			
	case 3:
			printf("Bakiyeniz = %d\n",bakiye);
			printf("Lutfen havale yapmak istediginiz tutari giriniz.\n");
			scanf("%d",&tutar);
			if(tutar> bakiye){
				printf("Yetersiz bakiye!!\n Lutfen bakiyenize gore islem gerceklestirin.\n");
				printf("************************************************************\n");
			}else{
				printf("Isleminiz gerceklestiriliyor.\n");
				bakiye -= tutar;
			printf("Yeni bakiyeniz = %d\n",bakiye);
			printf("************************************************************\n");
				
			}
		
			break;
			
			
	case 4:
			printf("Bakiyeniz = %d\n",bakiye);
			printf("************************************************************\n");
			break;	


    case 5:	
          printf("Kart Iade Edildi..\nGorusmek uzere :)\n");
         printf("************************************************************\n");
		  break;
          
        
         
		   }
		  
	
if (islem == 5){
	      printf("Gule gule\n");
	      break;
	}
   
}


break;
i++;
}
}
	else {
	printf("Yanlis sifre girdiniz.\nLutfen tekrar deneyiniz.");
}

		
	return 0;

}

