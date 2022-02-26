#include <stdio.h>
#include <string.h>
int main()
{
    char array1[10];
    char array2[10];
    char array3[25]="First word entered is ";
    char *result;
    int length = 0;
    
    printf("\nplease enetr frist string: ");
    scanf("%s",array1);
    printf("\nPlese enter second sting: ");
    scanf("%s",array2);
    if(strcmp(array1,array2) ==0){
        printf("string are equal\n");
    }
    else{
    printf("string not equal\n");
    }
    result = strcat(array3,array1); // this gives a new array with the concatenated version of the string
    
    printf("concatenated version is %s\n", result);
    length = strlen(result);
    
    printf("length of the concatenated version is %d\n", length);
    
    return 0;
}
