#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>



string ari(string s){

printf("THE ENTERED STRING IS: \n%s\n",s);
	long int characters=0,words=1,sentences=0;
	for(int i=0;i<strlen(s);i++){
	   if (isalnum(s[i]))        
	   characters++;
	  }
	
	for(int i=0;i<strlen(s);i++){
	   if(s[i]==' ')                    
	   words+=1;	
	  }
	   
	for(int i=0;i<strlen(s);i++){
	   if(s[i]=='.'||s[i]=='!'||s[i]=='?')  
	   sentences+=1;	
	  }
	
printf("\nthe given string has %li characters, %li words and %li sentences.\n",characters,words,sentences);
	float score=(4.71*characters/words)+(0.5*words/sentences)-21.43;
	int ari=(int)score+1;
	
	printf("THE ARI SCORE IS:%i.\n",ari);
	switch(ari){
	 case 1: printf("The text is suitable for kindergarden.\n");
	 	 break;
	 case 2: printf("The text is suitable for  First/Second Grade.\n");
	 	 break;
	 case 3: printf("The text is suitable for Third Grade.\n");
	 	 break;
	 case 4: printf("The text is suitable for  Fourth Grade.\n");
	 	 break;
	 case 5: printf("The text is suitable for Fifth Grade.\n");
	 	 break;
	 case 6: printf("The text is suitable for Sixth Grade.\n");
	 	 break;
	 case 7: printf("The text is suitable for Seventh Grade.\n");
	 	 break;
	 case 8: printf("The text is suitable for Eighth Grade.\n");
	 	 break;
	 case 9: printf("The text is suitable for Ninth Grade.\n");
	 	 break;
	 case 10: printf("The text is suitable for  Tenth Grade.\n");
	 	  break;
	 case 11: printf("The text is suitable for Eleventh Grade.\n");
	 	  break;
	 case 12: printf("The text is suitable for Twelfth grade.\n");
	 	  break;
	 case 13: printf("The text is suitable for College student.\n");
	 	  break;
	 case 14: printf("The text is suitable for Professor.\n");
	 	  break;
	 default: printf("The text is not suitable for reading.\n");
	 }
	
	
}
	   
	

int main(void){
	string a="Pet ownership is an essential environmental exposure that might influence the health of the owner. This study’s primary objectives were to explore the effects of cat ownership on the gut microbial diversity and composition of owners. Raw data from the American Gut Project were obtained from the SRA database. A total of 214 Caucasian individuals (111 female) with cats and 214 individuals (111 female) without cats were used in the following analysis. OTU number showed significant alteration in the Cat group and Female_cat group, compared with that of the no cat (NC) group and Female_ NC group, respectively. Compared with the NC group, the microbial phylum Proteobacteria was significantly decreased in the Cat group.";
	ari(a);

}
