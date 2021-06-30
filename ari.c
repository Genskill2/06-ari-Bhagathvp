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
	string std;
	
	switch(ari){
	 case 1: std="kindergraden";
	 	 break;
	 case 2: std="First/Second Grade";
	 	 break;
	 case 3: std="Third Grade";
	 	 break;
	 case 4: std="Fourth Grade";
	 	 break;
	 case 5: std="Fifth Grade";
	 	 break;
	 case 6: std="Sixth Grade";
	 	 break;
	 case 7: std="Seventh Grade";
	 	 break;
	 case 8: std="Eighth Grade";
	 	 break;
	 case 9: std="Ninth Grade";
	 	 break;
	 case 10: std="Tenth Grade";
	 	  break;
	 case 11: std="Eleventh Grade";
	 	  break;
	 case 12: std="Twelfth Grade";
	 	  break;
	 case 13: std="College student";
	 	  break;
	 case 14: std="Professor";
	 	  break;
	 default: printf("The text is not suitable for reading.\n");
	 }
	 
	 printf("THE ARI SCORE IS:%i.The text is suitable for %s.\n",ari,std);
	 return std;
	
}
