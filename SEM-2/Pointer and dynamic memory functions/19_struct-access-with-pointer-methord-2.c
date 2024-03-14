#include<stdio.h>
struct student{
    int id;
    char name[20];
    int age;
};
void input(struct student *);
void print(struct student *);
int main(){
    struct student s1,*p;
    p = &s1;
    input(p);
    print(p);
    return 0;
}
void input(struct student *ptr){
    printf("Enter id : ");
    scanf("%d",&ptr->id);
    printf("Enter name : ");
    scanf("%s",ptr->name);
    printf("Enter age :");
    scanf("%d",&ptr->age);
    return;
}
void print(struct student *ptr){
    printf("ID is : %d\n",ptr->id);
    printf("Name is : %s\n",ptr->name);
    printf("Age is : %d\n",ptr->age);
    return;
}

