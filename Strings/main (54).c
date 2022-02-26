#include <stdio.h> 
int main()  
{  
   char array1[10];  
   char array2[10];   
   int index;
   
   printf("Enter the first string : ");  
   scanf("%s",array1);  
   printf("Enter the second string : ");  
   scanf("%s",array2);  
   
   index=strcmp(array1,array2);  
   if(index==0){
   printf("strings are same");
   }
   else  
   printf("strings are not same");  
   return 0;  
}  
