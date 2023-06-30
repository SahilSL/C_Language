// initializes with 0
// do not multiply

 #include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter n: "); 
    scanf("%d",&n);
    
    //memory allocate at run time
    ptr = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
}