#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float per;
};
void input();
void count();
int main(){
    input();
    count();
    return 0;
}
void input(){
    FILE *fptr;
    fptr = fopen("student.txt","a");
    int n;
    printf("Enter How many record do you want to enter : ");
    scanf("%d",&n);
    struct student s[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter Rollno : ");
        scanf("%d",&s[i].rollno);
        printf("Enter Name : ");
        scanf("%s",s[i].name);
        printf("Enter persentage : ");
        scanf("%f",&s[i].per);
        fwrite(&s[i],sizeof(struct student),1,fptr);
    }

    // for(int i = 0 ; i < n ; i++){
    //     fwrite(&s[i],sizeof(struct student),1,fptr);
    // }
    fclose(fptr);
    return;
}
void count(){
    FILE *fptr;
    fptr = fopen("student.txt","r");
    int cnt = 0;
    struct student s;
    while(fread(&s,sizeof(s),1,fptr)){
        cnt++;
    }
    fclose(fptr);
    printf("\n%d ",cnt);
}