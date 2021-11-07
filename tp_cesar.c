#include <stdio.h>
#define N 1000
#include<string.h>
#include<stdlib.h>


 
 struct donnee{
  char l[N];
  float t;
   
};

int main()
{
  struct donnee d[N];	
  int con=0;
  char str[N],exist[N]; 
  char repetee[1];
  char Lettres[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char inverse[N]={'A','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
  char dec[26]={'e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f'};
  int l,i,j,k=0,n=0;
  float occu=0.0,count=0.0,taux[N];
  
  printf("Entrez le text code: "); //entrez le text sans /n 
 
  	gets(str);

	
	l=strlen(str);
	//printf("La longueur: %d",l);
	
	
		for(i=0;i<l;i++){
	
		if((str[i]>='A')&&(str[i]<='Z'))
  			str[i]=str[i]-'A'+'a';
			
	}


  
  for(j=0;j<26;j++)
  	{
  		for(i=0;i<l;i++){
  			if(str[i]==Lettres[j])
  				count++;
  				
		}
		if(count!=0){
			occu=(count*100)/l;
			taux[k]=occu;
			exist[n]=Lettres[j];
			k++;
		//	printf("\n Le taux d'occurance de la lettre %c est :%.2f %%",Lettres[j],occu);
			d[n].l[n]=Lettres[j];
			d[n].t=occu;
			n++;
		} 
		count=0.0;
		occu=0.0; 
		
	}
	
	
	
	
	//tri
	float c;
	char m[26];

	for(j=1;j<=l;j++) // pour faire l'operation N fois
    for(i=0;i<l-1;i++)
        if ( d[i].t < d[i+1].t ) {
                c = d[i].t;
                d[i].t = d[i+1].t;
                d[i+1].t = c;
                m[i]=d[i].l[i];
                d[i].l[i] = d[i+1].l[i+1];
                d[i+1].l[i+1] = m[i]; 
        } 	
		 	  
   int p;
    for(i=0;i<26;i++){
    	if(dec[i]==d[0].l[0]){
    	
    		p=i;
    	//	printf("\n \n \n %d",p);
		}
	}

	
	//decalage
	
	for(i=p;i<25;i++){
		con=con+1;
		
	}
	con=con+1;
	
	

    //le texte chiffré
	printf(" \n  Le texte chiffre est:  ");
	for(i=0;i<l;i++){
		printf("%c",str[i]);
	}

	
	printf("\n \n \n La cle de decalage est : %d.",con);
	
	for(i=0;i<l-1;i++){
	
		for(j=0;j<N;j++){
			if(inverse[j]==str[i]){
			//	printf("\n  la lettre demandee est :%c",inverse[j+con]);
				str[i]=inverse[j+con];
			//	printf("  \n  remplacement: %c",str[i]);
				i++;
				j=0;			
			}
			
    }

	
		
}
	printf("\n\n \n  Le texte dechiffre est :  ");

for(i=0;i<l;i++)
	printf("%c",str[i]);	

		  
  return 0;
}
