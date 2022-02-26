#include <stdio.h>
#include <string.h>
int main()
{
    char array1[10];//create array with 10 characters 
    char array2[10];//create array with 10 characters
    char array3[25]="First word entered is ";//create array with 25 charater is equal to frist word entered is 
    char *result;//create pointer called result
    int length = 0;// an integer with name ‘lenght’ is created and it’s value is 0
    
    printf("\nplease enetr frist string: ");//print eneter frist string
    scanf("%s",array1);//wait of the user input of the character 
    printf("\nPlese enter second sting: ");//print enter second string 
    scanf("%s",array2);//wait of the user input of the character 
    if(strcmp(array1,array2) ==0){//compare the two string 
        printf("string are equal\n");//print string is equal 
    }
    else{
    printf("string not equal\n");//print is not equal
    }
    result = strcat(array3,array1); // this gives a new array with the concatenated version of the string
    
    printf("concatenated version is %s\n", result);//print the concatenated version
    length = strlen(result);// length is assigned the number of characters in the string inside result 

    
    printf("length of the concatenated version is %d\n", length);//print the lenght of concatenated
    
    return 0;
}

