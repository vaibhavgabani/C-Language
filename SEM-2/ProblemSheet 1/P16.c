/*
 * P16.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */
#include<stdio.h>
struct date{
	int date,month,year;
};

int valid(struct date a,struct date b);
int date(int d,int m,int y);

int main(){
	struct date d,e;
	int res1,res2;
	printf("Enter Date 1 in (dd/mm/yy) : ");
	scanf("%d %d %d",&d.date,&d.month,&d.year);
	printf("Enter Date 2 in (dd/mm/yy) : ");
	scanf("%d %d %d",&e.date,&e.month,&e.year);

	res1=date(d.date,d.month,d.year);
	res2=date(e.date,e.month,e.year);
	if(res1 == 0 && res2 == 0){
		if(valid(d,e)==0){
			printf("\nBoth date are Same.");
		} else {
			printf("\nBoth Date are Not Same");
		}
	} else {
		printf("\nInvalid Date");
	}
	return 0;
}

int valid(struct date a,struct date b){
	if(a.date==b.date){
		if(a.month==b.month){
			if(a.year==b.year){
				return 0;
			}
		}
	}
	return 1;
}

int date(int d,int m,int y){
	if(y>=999 && y<=9999){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			if(d>=1 && d<=31){
				return 0;
			}
		}

		else if(m==4 || m==6 || m==9 || m==11){
			if(d>=1 && d<=30){
				return 0;
			}
		} else if(m==2){
			if(y%4==0){
				if(d>=1 && d<=29){
					return 0;
				}
			} else {
				if(d>=1 && d<=28){
					return 0;
				}
			}
		}
		return 1;
	}
}




