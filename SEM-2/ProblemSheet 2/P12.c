#include<stdio.h>
int xstrlen(char *);
int xstrrev(char *);

int main(){
//	int cnt;
	char str1[50];
	printf("Enter 1 String values : ");
	scanf( " %[^\n]s" , str1);

	xstrrev(str1);
	printf("\nReverce string is : %s",str1);
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
int xstrrev(char *ptr){
	int flag = 0 , l;
	char *start , *end;
	start = ptr;
	end = ptr;
	l = xstrlen(ptr);
	end += l - 1;
	for(int i = 0 ; i < l / 2 ; i++){
		int temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
	return flag;
}

