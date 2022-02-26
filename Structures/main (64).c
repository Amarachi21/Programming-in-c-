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
  printf("\nplease enter firstname of athlete %d",index + 1);
  scanf("%s",players[index].firstname);
  printf("\nplease enter surname of athlete %d",index + 1);
  scanf("%s",players[index].surname);
  printf("\nplease enter day of date_of_birth of athlete %d",index + 1);
  scanf("%d",&players[index].dob.day);
  printf("\nplease enter day of month_of_birth of athlete %d",index + 1);
  scanf("%d",&players[index].dob.month);
  printf("\nplease enter day of year_of_birth of athlete %d",index + 1);
  scanf("%d",&players[index].dob.year);
  printf("\nplease enter nationality of athlete %d",index + 1);
  scanf("%s",players[index].nationality);
  printf("\nplease enter event of athlete %d",index + 1);
  scanf("%s",players[index].event);
  printf("\nplease enter weight of athlete %d",index + 1);
  scanf("%f",&players[index].weight);
  index++;
}
index = 0;

while(index < 2){
  printf("\nfirstname of athlete %d is %s",index + 1, players[index].firstname);
  printf("\nsurname of athlete %d is %s",index + 1, players[index].surname);
  printf("\ndob of athlete %d is %d/%d/%d",index + 1, players[index].dob.day,players[index].dob.month,players[index].dob.year);
  printf("\nnationality of athlete %d is %s",index + 1, players[index].nationality);
  printf("\nevent of athlete %d is %s",index + 1, players[index].event);
  printf("\nweight of athlete %d is %f",index + 1, players[index].weight);
  index++;
}
    return 0;
}
