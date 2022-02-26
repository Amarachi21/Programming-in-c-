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
   struct athlete emma;
   printf("please enter your surname");
   scanf("%s",emma.surname);
   printf("please enter your fristname");
   scanf("%s",emma.fristname);
   printf("please enter your day of your date of birth");
   scanf("%d",&emma.dob.day);
    printf("please enter your month of your date of birth");
   scanf("%d",&emma.dob.month);
  printf("please enter your year of your date of birth");
   scanf("%d",&emma.dob.year);
   printf("please enter your nationality");
   scanf("%s",emma.nationality);
   printf("please enter your event);
   scanf("%s",emma.event);
   printf("please enter your weight);
   scanf("%f",&emma.weight);
   
    return 0;
}
