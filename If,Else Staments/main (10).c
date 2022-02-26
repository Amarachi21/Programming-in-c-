#include <stdio.h>
int main()
{
    int x;
    printf("please eneter the value of x\n");
    scanf("%d", &x);
    if(x > 5 && x < 10){ // between 5 and 10
        printf("hello");
    }else{
        printf("bye");
    }
    
    return 0;
}



