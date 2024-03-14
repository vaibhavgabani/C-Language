#include<stdio.h>
struct student{
    int id;
    char name[20];
    int age;
};
struct student *input(){
    struct student s,*ptr;
    ptr = &s;
    printf("Enter id : ");
    scanf("%d",&ptr->id);
    printf("Enter name :");
    scanf(" %[^\n]s",(*ptr).name);
    printf("Enter age : ");
    scanf("%d",&ptr->age);
    return ptr;
}
void print(struct student *ptr){
    printf("id is : %d\n",(*ptr).id);
    printf("name is : %s\n",(*ptr).name);
    printf("age is  : %d\n",(*ptr).age);
}
int main(){
    struct student s1, *ptr1;
    ptr1 = &s1;
    ptr1 = input();
    print(ptr1);
    return 0;
}

