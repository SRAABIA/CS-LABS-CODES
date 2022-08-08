 // Dynamic Memory example
 #include<stdio.h>
 #include<stdlib.h>
 
 int main(){
 	int n1,n2,i, *ptr;
 	
 	printf("enter the size: ");
 	scanf("%d", &n1);
 	
 	ptr = (int*)malloc(n1*sizeof(int));
 	printf("Address of previously allocated memory\n");
 	for(i = 0; i<n1; ++i)
 	printf("%pc\n",ptr + i);
 	
 	printf("Enter the new size: ");
 	scanf("%d",&n2);
 	//reallocatimg th memory
 	ptr = realloc(ptr, n2*sizeof(int));
 	
 	printf("Address of newly allocated memory:\n");
 	for(i = 0; i<n2; ++i) 
 	printf("%pc\n", ptr + i);
 	free(ptr);
 	return 0;
 }
























