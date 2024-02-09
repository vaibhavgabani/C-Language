/*
 * P1.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
struct city{
	char name[20];
	int pop;
	float lit;
};
struct city input(void);
void print(struct city);
void sort_alpha(struct city [],int);
void sort_lit(struct city [],int);
void sort_pop(struct city [],int);
int length(char []);
int main(){
	int size = 10;
	struct city c[size];
	//input
	for(int i = 0 ; i < size ; i++){
		printf("\nEnter %d city data:\n",i+1);
		c[i] = input();
	}
	//alpha short
	printf("\n Short alphabetically A to Z:\n");
	sort_alpha(c,size);
	printf("---------------------------------------------------------\n");
	printf("|City Name\t\t|population\t|literacy level\t|\n");
	printf("---------------------------------------------------------\n");
	for(int i = 0 ; i < size ; i++){
		print(c[i]);
	}
	printf("---------------------------------------------------------\n");

	//sort the list based on literacy level
	printf("\nsort the list based on literacy level :\n");
	sort_lit(c,size);
	printf("---------------------------------------------------------\n");
	printf("|City Name\t\t|population\t|literacy level\t|\n");
	printf("---------------------------------------------------------\n");
	for(int i = 0 ; i < size ; i++){
			print(c[i]);
		}
	printf("---------------------------------------------------------\n");
	//sort the list based on literacy level
	printf("\nsort the list based on population level :\n");
	sort_pop(c,size);
	printf("---------------------------------------------------------\n");
	printf("|City Name\t\t|population\t|literacy level\t|\n");
	printf("---------------------------------------------------------\n");
	for(int i = 0 ; i < size ; i++){
			print(c[i]);
	}
	printf("---------------------------------------------------------\n");
	return 0;
}
struct city input(void){
	struct city c;
	printf("Enter Name :");
	scanf("%s",c.name);
	up1:
	printf("Enter population :");
	scanf("%d",&c.pop);
	if(c.pop < 0){
		printf("Enter Valid populaction.\n");
		goto up1;
	}
	up2:
	printf("Enter literacy level :");
	scanf("%f",&c.lit);
	if(c.lit< 0){
		printf("Enter Valid literacy level.\n");
		goto up2;
	}
	return c;
}
void print(struct city c){
	printf("|%s\t\t\t|%d\t\t|%f\t|\n",c.name,c.pop,c.lit);
}
void sort_alpha(struct city c1[],int size){
	struct city temp;
	for(int i = 0 ; i < size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(c1[i].name[0] < c1[j].name[0]){
				temp = c1[j];
				c1[j] = c1[i];
				c1[i] = temp;
			}
		}
	}
}
void sort_lit(struct city c1[],int size){
	struct city temp;
	for(int i = 0 ; i < size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(c1[i].lit < c1[j].lit){
				temp = c1[j];
				c1[j] = c1[i];
				c1[i] = temp;
			}
		}
	}
}
void sort_pop(struct city c1[],int size){
	struct city temp;
	for(int i = 0 ; i < size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(c1[i].pop < c1[j].pop){
				temp = c1[j];
				c1[j] = c1[i];
				c1[i] = temp;
			}
		}
	}
}
int length(char str[]){
	int s = 0;
	for(int i = 0 ; str[i]!='\0'; i++){
		s++;
	}
	return s;
}
