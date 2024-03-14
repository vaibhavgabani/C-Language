#include<stdio.h>
int xstrlen(char *);
void xstrcpy(char *,char *);
int main(){
	char str1[50],str2[50];
	printf("Enter 1 String values : ");
	scanf( " %[^\n]s" , str1);

	xstrcpy(str2,str1);
	printf("value in main sting : %s \n",str1);
	printf("value in copy sting : %s \n",str2);
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

void xstrcpy(char *ptr1,char *ptr2){
	while(*ptr2 != '\0'){
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
	return;
}

