#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int multi(int a,int b){
    return a*b;
}

int div(int a,int b){
    return a/b;
}

int sub(int a,int b){
    return a-b;
}

int n1,n2;

void main(){
    // Add
    printf("====================\n\tAdd\n===================\n");
    printf("Number 1 : ");
    scanf("%d",&n1);
    printf("Number 2 : ");
    scanf("%d",&n2);
    printf("\nResult : %d",add(n1,n2));    

    // Subtract
    printf("\n====================\n\tSubtract\n====================\n");
    printf("Number 1 : ");
    scanf("%d",&n1);
    printf("Number 2 : ");
    scanf("%d",&n2);
    printf("\nResult : %d",sub(n1,n2));

    // Multiply
    printf("\n====================\n\tMultiply\n====================\n");
    printf("Number 1 : ");
    scanf("%d",&n1);
    printf("Number 2 : ");
    scanf("%d",&n2);
    printf("\nResult : %d",multi(n1,n2));

    // Divide
    printf("\n====================\n\tDivide\n====================\n");
    printf("Number 1 : ");
    scanf("%d",&n1);
    printf("Number 2 : ");
    scanf("%d",&n2);
    printf("\nResult : %d",div(n1,n2));
}
