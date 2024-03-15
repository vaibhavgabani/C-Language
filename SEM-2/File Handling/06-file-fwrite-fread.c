#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    char name[20];
};
void input();
void print();
int main(){
    input();
    print();
    return 0;
}
void input(){
    FILE *fptr;
    struct student s;
    fptr = fopen("06-file.txt","a");
    printf("Enter ID : ");
    scanf("%d",&s.id);
    printf("Enter Name : ");
    scanf("%s",s.name);
    fwrite(&s,sizeof(s),1,fptr);
    fclose(fptr);
    return;
}

void print(){
    FILE *fptr;
    struct student s;
    fptr = fopen("06-file.txt","rb");
    if(fptr == NULL){
        printf("error in opeinig file.\n");
    } else {
        while(fread(&s,sizeof(s),1,fptr)){
        printf("%d\t%s\t\n",s.id,s.name);
        }
    }
   
    fclose(fptr);
    return;
}