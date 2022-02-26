#include <stdio.h> 
int main()  
{  
   char array1[10];  
   char array2[10];   
  
   
   printf("Enter the first string : ");  
   scanf("%s",array1);  
   printf("Enter the second string : ");  
   scanf("%s",array2);  
   
    
   if(array1==array2){
   printf("strings are same");
   }
   else  
   printf("strings are not same");  
   return 0;  
}  
