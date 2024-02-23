#include<stdio.h>
int xstrlen(char *);
void xstrcpy(char * , char *);
void xstrcat(char * , char *);
int xstrcmp(char * , char *);
void xstrrev(char *);
void strrev1(char *);
int pal( char *);
int main(){
	char str1[50]="QWER",*ptr;
	ptr = str1;
	printf("address %u  value = %s\n",&str1,str1);
	printf("Enter 1 String :");
	scanf("%s",*ptr);
	printf("address %u  value = %s\n",&str1,str1);
	return 0;
}
int xstrlen(char *str){
	int len = 0;
	while(*str!='\0'){
		len++;
		str++;
	}
	return len;
}
void xstrcpy(char *ptr1 , char *ptr2){
	while(*ptr2 != '\0'){
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
}
void xstrcat(char *ptr1, char *ptr2){
	int l = xstrlen(ptr1);
	ptr1 = ptr1 + l;
	while(*ptr2!='\0'){
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
}
int xstrcmp(char *ptr1 , char *ptr2){
	int flag = 0;
	while(*ptr1 !='\0' && *ptr2 != '\0'){
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
void xstrrev(char *ptr1){
	int l = xstrlen(ptr1);
	printf("%d\n",l);
//	printf("%u - %c\n",ptr1,*ptr1);
	ptr1 += (l-1);
//	printf("%u - %c",ptr1,*ptr1);
	for(int i = l ; i >=0 ; i--){
		printf("%c",*ptr1);
		ptr1--;
	}
}
void strrev1(char *ptr1){
	int l = xstrlen(ptr1);
	char *end,*begin,temp;
	begin = ptr1;
	end = ptr1;
	for(int i = 0 ; i < l-1 ; i++){
		end++;
	}
	for(int i = 0; i < l/2 ; i++){
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
int pal(char *ptr){
	int l = xstrlen(ptr);
	int flag = 0;
	char *start , *end;
	start = ptr;
	end = ptr;
	for(int i = 0 ; i < l - 1 ; i++){
		end++;
	}
	for(int i = 0 ; i < l / 2 ; i++){
		if(*start == *end){
			flag = 0;
		} else {
			flag++;
		}
		start++;
		end--;
	}
	return flag;
}

