#include<stdio.h>
int xstrlen(char *);
void xstrcon(char *,char *);
int main(){
	char str1[50],str2[50];
	printf("Enter 1 String values : ");
	scanf( " %[^\n]s" , str1);
	printf("Enter 2 String values : ");
	scanf( " %[^\n]s" , str2);

	xstrcon(str1,str2);
	printf("%s ",str1);
	return 0;
}
int xstrlen(char *ptr){
	int cnt = 0;
	while(*ptr != '\0'){
		cnt++;
		ptr++;
	}
	return cnt;
}

void xstrcon(char *ptr1,char *ptr2){
	int l1 = xstrlen(ptr1);
	ptr1 += l1;
	while(*ptr2 != '\0'){
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	return;
}
