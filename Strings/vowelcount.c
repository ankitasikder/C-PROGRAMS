//wap to count no. of line,word,space,character,vowel,consonant
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 char a[20];
 int i,v=0,sp=0,c=0,l=0,ch=0;
 printf("Enter your Name=");
 gets(a);
 //scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
  ch++;
  switch(a[i])
  {
   case 'a':case 'A':
   case 'e':case 'E':
   case 'i':case 'I':
   case 'o':case 'O':
   case 'u':case 'U': 
        v++;
        break;                                                                                                                                                                                                                                                          
   case ' ':
         sp++;
         break;              
   case '.':case '\n':
         l++;
         break;
   default :
          c++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
  }

 }
  printf("Vowel is = %d",v);
  printf("\nSpace is = %d",sp);
 printf("\nConsonant is = %d",c);
  printf("\n Line is = %d",l);
   printf("\nCharacter is = %d",ch);
 getch();
}
