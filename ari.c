#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>



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
	printf("THE ARI SCORE IS:%i\n",(int)(score+1));
}
	
