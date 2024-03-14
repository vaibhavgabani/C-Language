#include<stdio.h>
int xstrlen(char *);
int xstrpal(char *);

int main(){
	int cnt;
	char str1[50];
	printf("Enter 1 String values : ");
	scanf( " %[^\n]s" , str1);

	cnt = xstrpal(str1);
	if(cnt == 0){
		printf("Enter string is palindrome.\n");
	} else {
		printf("Enter string is not palindrome.\n");
	}
	xstrpal(str1);
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
int xstrpal(char *ptr){
	int flag = 0 , l;
	char *start , *end;
	start = ptr;
	end = ptr;
	l = xstrlen(ptr);
	end += l - 1;
	for(int i = 0 ; i < l / 2 ; i++){
		if(*start == *end){
			flag = 0;
		} else {
			flag++;
			break;
		}
		start++;
		end--;
	}
	return flag;
}
