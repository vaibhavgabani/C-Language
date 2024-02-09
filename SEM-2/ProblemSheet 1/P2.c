/*
 * dum.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */


/*
 * P2.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */
#include<stdio.h>
struct player{
	char name[20];
	char team[20];
	float average;
};
struct player input(void);
void print(struct player);
void shor(struct player [],int);
int main(){
	int size = 20;
	struct player p[size];
	//input
	for(int i = 0 ; i < size ; i++){
		printf("\nEnter %d city data:\n",i+1);
		p[i] = input();
	}
	//output
	printf("Enter Data :\n");
	printf("-----------------------------------------------------------------\n");
	printf("|Player Name\t\t|Team Name\t|batting average\t|\n");
	printf("-----------------------------------------------------------------\n");
	for(int i = 0 ; i < size ; i++){
		print(p[i]);
	}
	printf("-----------------------------------------------------------------\n");
	//short team wise
	printf("\nTeam wise player name:\n");
	printf("|Player Name\t\t|Team Name\t|batting average\t|\n");
	printf("-----------------------------------------------------------------\n");
	shor(p,size);
	for(int i = 0 ; i < size ; i++){
		print(p[i]);
	}
	printf("-----------------------------------------------------------------\n");
	return 0;
}
struct player input(void){
	struct player p;
	printf("Enter player Name :");
	scanf("%s",p.name);
	printf("Enter Team Name :");
	scanf("%s",p.team);
	up2:
	printf("Enter Average :");
	scanf("%f",&p.average);
	if(p.average< 0){
		printf("Enter Valid average.\n");
		goto up2;
	}
	return p;
}
void print(struct player p){
	printf("|%s\t\t\t|%s\t\t|%f\t\t|\n",p.name,p.team,p.average);
}

void shor(struct player p[],int size){
	struct player temp;
		for(int i = 0 ; i < size ; i++){
			for(int j = 0 ; j < size ; j++){
				if(p[i].team[0] < p[j].team[0]){
					temp = p[j];
					p[j] = p[i];
					p[i] = temp;
				}
			}
		}
	return;
}
