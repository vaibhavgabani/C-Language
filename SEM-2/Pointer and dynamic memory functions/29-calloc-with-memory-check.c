#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int *ptr = (int*) malloc (n * sizeof(int));
    
    //if memory can't be allocated
	if(ptr == NULL)
	{
		printf("\nERROR ! Memory Not Allocated");
		exit(0);
	}
    //input
    for(int i = 0 ; i < n ; i++){
        printf("%d : ",i);
        scanf("%d",&*(ptr+i));
    }
    //print
    printf("Entered data : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}