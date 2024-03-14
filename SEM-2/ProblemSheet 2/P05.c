#include<stdio.h>

int xstrcmp(char *,char *);
int main(){
	char str1[50],str2[50];
	printf("Enter 1 String values : ");
	scanf( " %[^\n]s" , str1);
	printf("Enter 2 String values : ");
	scanf( " %[^\n]s" , str2);
	int cnt = xstrcmp(str1,str2);
	if(cnt == 0){
		printf("Enter string are same.\n");
	} else {
		printf("Enter string are not same.\n");
	}
	return 0;
}

int xstrcmp(char *ptr1,char *ptr2){
	int flag = 0;
	while(*ptr1 != '\0' || *ptr2!= '\0'){
		if(*ptr1 == *ptr2){
			flag = 0;
		} else {
			flag++;
		}
		ptr1++;
		ptr2++;
	}
	return flag;
}
