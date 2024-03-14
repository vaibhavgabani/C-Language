#include<stdio.h>
int cnt(char *ptr);
int main(){
	char str1[50];
	printf("Enter 1 String values : ");
	scanf( " %[^\n]s" , str1);

	int tot = cnt(str1);
	printf("Total vowels is : %d\n",tot);
	return 0;
}
int cnt(char *ptr){
	int totvovel;
	while(*ptr != '\0'){
		if(*ptr == 'A' || *ptr == 'a'|| *ptr == 'E'|| *ptr == 'e' || *ptr == 'I' || *ptr == 'i' || *ptr == 'O' || *ptr == 'o' || *ptr == 'U' || *ptr == 'u'){
			totvovel++;
		}
		ptr++;
	}
	return totvovel;
}
