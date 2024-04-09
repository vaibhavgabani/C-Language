#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[20];
    char address[20];
    int age;
    char email[20];
};

struct university{
    char degree[20];
};

struct bank{
    int acc_number;
    char acc_type[20];
    int acc_bal;
};
struct detail{
    char name[20];
    char address[20];
    int age;
    char email[20];
    char degree[20];
    int acc_number;
    char acc_type[20];
    int acc_bal;
};
void student_input();
void university_input();
void bank_input();
void student_print();
void university_print();
void bank_print();
void detail_merge();
void detail_print();
int main(){    
    student_input();
    university_input();
    bank_input();
    detail_merge();
    printf("Mearge Detail : \n");
    detail_print();
    // student_print();
    // bank_print();
    // university_print();
    return 0;
}

void bank_input(){
    FILE *fptr;
    fptr = fopen("bank.txt","a");
    if(fptr == NULL){
        printf("file not found");
        return;
    }
    struct bank s;
    printf("Enter bank detail:\n");
    printf("Enter Account number : ");
    scanf(" %d",&s.acc_number);
    printf("Enter Account type : ");
    scanf(" %[^\n]",s.acc_type);
    printf("Enter Account balance : ");
    scanf(" %d",&s.acc_bal);
    fwrite(&s,sizeof(struct bank),1,fptr);
    fclose(fptr);
}
void student_input(){
    FILE *fptr;
    fptr = fopen("student.txt","a");
    if(fptr == NULL){
        printf("file not found");
        return;
    }
    struct student s;
    printf("Enter student detail:\n");
    printf("Enter Student Name : ");
    scanf(" %[^\n]",s.name);
    printf("Enter Student Address : ");
    scanf(" %[^\n]",s.address);
    printf("Enter Student age : ");
    scanf(" %d",&s.age);
    printf("Enter Student Email : ");
    scanf(" %[^\n]",s.email);
    fwrite(&s,sizeof(struct student),1,fptr);
    fclose(fptr);
    return;   
}

void university_input(){
    FILE *fptr;
    fptr = fopen("university.txt","a");
    if(fptr == NULL){
        printf("file not found");
        return;
    }
    struct university s;
    printf("Enter university detail:\n");
    printf("Enter Student course name : ");
    scanf(" %[^\n]",s.degree);
    fwrite(&s,sizeof(struct university),1,fptr);
    fclose(fptr);
    return;   
}

void student_print(){
    FILE *fptr;
    fptr = fopen("student.txt","rb");
    if(fptr == NULL){
        printf("file not found");
        return;
    }
    struct student s;
    while(fread(&s,sizeof(struct student),1,fptr)){
        printf("%s | %s | %d | %s |\n",s.name,s.address,s.age,s.email);
    }
    fclose(fptr);
    return;   
}

void university_print(){
    FILE *fptr;
    fptr = fopen("university.txt","r"); // Open in text mode
    if(fptr == NULL){
        printf("file not found");
        return;
    }
    struct university s;
    while(fscanf(fptr, "%s", s.degree) != EOF){
        printf("%s\n",s.degree);
    }
    fclose(fptr);
    return;   
}
void bank_print(){
    FILE *fptr;
    fptr = fopen("bank.txt","rb");
    if(fptr == NULL){
        printf("file not found");
        return;
    }
    struct bank s;
    while(fread(&s,sizeof(struct bank),1,fptr)){
        printf("%d | %s | %d |\n",s.acc_number,s.acc_type,s.acc_bal);
    }
    fclose(fptr);
    return;   
}
void detail_merge(){
    FILE *fptr_student, *fptr_university, *fptr_detail , *fptr_bank;
    fptr_student = fopen("student.txt","r");
    fptr_university = fopen("university.txt","r");
    fptr_bank = fopen("bank.txt","r");
    fptr_detail = fopen("detail.txt","w");
    
    if(fptr_student == NULL || fptr_university == NULL || fptr_detail == NULL || fptr_bank == NULL){
        printf("File not found from mearge");
        return;
    }

    struct student s;
    struct university u;
    struct bank b;
    struct detail d;
    
    while(fread(&s,sizeof(struct student),1,fptr_student) && fread(&u,sizeof(struct university),1,fptr_university) && fread(&b,sizeof(struct bank),1,fptr_bank)){
        strcpy(d.name, s.name);
        strcpy(d.address, s.address);
        d.age = s.age;
        strcpy(d.email, s.email);
        strcpy(d.degree, u.degree);
        d.acc_number = b.acc_number;
        strcpy(d.acc_type, b.acc_type);
        d.acc_bal = b.acc_bal;
                
    }
    fwrite(&d,sizeof(struct detail),1,fptr_detail);
    fclose(fptr_student);
    fclose(fptr_university);
    fclose(fptr_detail);
    
    return;
}

void detail_print(){
    FILE *fptr;
    fptr = fopen("detail.txt","r");
    if(fptr == NULL){
        printf("file not found from print");
        return;
    }
    struct detail s;
    while(fread(&s,sizeof(struct detail),1,fptr)){
        printf("%s | %s | %d | %s | %s | %d | %s | %d |\n",s.name,s.address,s.age,s.email,s.degree,s.acc_number,s.acc_type,s.acc_bal);
    }
    fclose(fptr);
    return;   
}
