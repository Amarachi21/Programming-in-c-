#include <stdio.h>
struct date_of_birth {
    int day;
    int month;
    int year;
}
struct athlete{
    char surname[10];
    char fristname[10];
    struct date_of_birth dob;
    char nationality[10];
    char event[10];
    float weight;
};

int main()
{
   struct athlete athletes[2];
   int index = 0;
   while(index < 2){
        printf("please enter the surname of athlete %d", index + 1);
        scanf("%s",athlete[index].surname);
        printf("please enter your fristname");
        scanf("%s",athlete[index].firstname);
        printf("please enter your day of your date of birth");
        scanf("%d",&athlete[index].dob.day);
        printf("please enter your month of your date of birth");
        scanf("%d",&athlete[index].dob.month);
        printf("please enter your year of your date of birth");
        scanf("%d",&athlete[index].dob.year);
        printf("please enter your nationality");
        scanf("%s",athlete[index].nationality);
        printf("please enter your event);
        scanf("%s",athlete[index].event);
        printf("please enter your weight);
        scanf("%f",&athlete[index].weight);
   }
   
   
    return 0;
}
