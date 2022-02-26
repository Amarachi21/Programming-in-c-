#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char array1[20];  // declaration of char array  
   char array2[20];  // declaration of char array  
  
   printf("Enter the first string : ");  
   scanf("%s",array1);  
   printf("Enter the second string : ");  
   scanf("%s",array2);  
  
    if (array1 == array2){ 
    printf("strings are same"); 
    
    }
   else{
   printf("strings are not same"); 
   }
   
   return 0;  
}  