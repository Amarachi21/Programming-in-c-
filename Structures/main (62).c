#include <stdio.h>
struct date_of_birth{
    int day;
    int month;
    int year;
};

struct athlete{
    char firstname[10];
    char surname[10];
    struct date_of_birth dob;
    char nationality[10];
    char event[10];
    float weight;
};


int main()
{
struct athlete players[2];
int index = 0;
while(index < 2){
  printf("please enter firstname of athlete %d",index + 1);
  scanf("%s",players[index].firstname);
  printf("please enter surname of athlete %d",index + 1);
  scanf("%s",players[index].surname);
  printf("please enter day of date_of_birth of athlete %d",index + 1);
  scanf("%d",&players[index].dob.day);
  printf("please enter day of month_of_birth of athlete %d",index + 1);
  scanf("%d",&players[index].dob.month);
  printf("please enter day of year_of_birth of athlete %d",index + 1);
  scanf("%d",&players[index].dob.year);
  printf("please enter nationality of athlete %d",index + 1);
  scanf("%s",players[index].nationality);
  printf("please enter event of athlete %d",index + 1);
  scanf("%s",players[index].event);
  printf("please enter weight of athlete %d",index + 1);
  scanf("%f",&players[index].weight);
  index++;
}
index = 0;

while(index < 2){
  printf("firstname of athlete %d is %s",index + 1, players[index].firstname);
  printf("surname of athlete %d is %s",index + 1, players[index].surname);
  printf("dob of athlete %d is %d/%d/%d",index + 1, players[index].dob.day,players[index].dob.month,players[index].dob.year);
  printf("nationality of athlete %d is %s",index + 1, player[index].nationality);
  printf("event of athlete %d is %s",index + 1, player[index].event);
  printf("weight of athlete %d is %f",index + 1, player[index].weight);
  index++;
}
    return 0;
}
