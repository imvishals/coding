#include<stdio.h>
#include<conio.h>
struct person
{
    int age;
    float weight;
    char first_name[20];
    char last_name[20];
    int lucky_numbers[5];
};
int main()
{
    int i;
    struct person p;
    scanf("%d%f%s%s",&p.age,&p.weight,&p.first_name,&p.last_name);
    for(i=0;i<5;i++)
    {
        scanf("%d",&p.lucky_numbers[i]);
    }
    printf("\n%d %.1f %s %s ",p.age,p.weight,p.first_name,p.last_name);
    for(i=0;i<5;i++)
    {
        printf("%d ",p.lucky_numbers[i]);
    }
}
