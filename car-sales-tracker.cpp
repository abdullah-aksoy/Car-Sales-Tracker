#include <stdio.h>



int main()
{
	
	float satisTutar,ucret=0,enCokSatis;
	int aracKodu, renaSatis=0,mazdaSatis=0,hondaSatis=0,fordSatis=0,enCokGelen,renaToplam=0,mazdaToplam=0,hondaToplam=0,fordToplam=0;
	char m1,m2;
	
	printf("Arac kodunu giriniz: '1','2','3','4'\n");
	scanf("%d",&aracKodu);
	
	while(aracKodu!=111){
	    
	    switch(aracKodu){
	        s
	        case 1:
	            printf("Renault arac satis tutarini giriniz: ");
	            scanf("%d",&renaSatis);
	            renaToplam++;
	            ucret+=renaSatis;
	            break;
	       
	       case 2:
	       	    printf("Mazda arac satis tutarini giriniz: ");
	            scanf("%d",&mazdaSatis);
	            mazdaToplam++;
	            ucret+=mazdaSatis;
	            break;
	            
	        case 3:
	            printf("Honda arac satis tutarini giriniz: ");
	            scanf("%d",&hondaSatis);
	            hondaToplam++;
	            ucret+=hondaSatis;
	            break;
	       
	       case 4:
	       	    printf("Ford arac satis tutarini giriniz: ");
	            scanf("%d",&fordSatis);
	            fordToplam++;
	            ucret+=fordSatis;
	            break;
	            
	            
	       default:
	            printf("hatali islem yaptiniz.\n");
	            break;
	        

	        
	        
	        
	    }
	    
	  	    printf("arac kodu giriniz: ");
	        scanf("%d",&aracKodu);
	    
	    
	}
	
	enCokGelen=renaToplam;
	    m1='r';
	    
	    if(enCokGelen<mazdaToplam){
	        
	        enCokGelen=mazdaToplam;
	        m1='m';
	        
	        
	    }
	    
	    if(enCokGelen<hondaToplam){
	        
	        enCokGelen=hondaToplam;
	        m1='h';
	        
	        
	    }

	    if(enCokGelen<fordToplam){
	        
	        enCokGelen=fordToplam;
	        m1='f';
	        
	        
	    } 
        
	    enCokSatis=renaSatis;
	    m2='r';
	    
	 	 if(enCokSatis<mazdaSatis){
	        
	        enCokSatis=mazdaSatis;
	        m2='m';
	        
	        
	    }
	    
	    if(enCokSatis<hondaSatis){
	        
	        enCokSatis=hondaSatis;
	        m2='h';
	        
	        
	    }

	    if(enCokSatis<fordSatis){
	        
	        enCokSatis=fordSatis;
	        m2='f';
	        
	        
	    }   
	
	    printf("en cok gelen arac: %c (%d kez)\n",m1,enCokGelen);
	    printf("en cok kazandiran arac: %c (%.2f tl ile)\n",m2,enCokSatis);
	    
	    
	    
}




