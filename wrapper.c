#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

// Checking for validate no of inputs

if (argc != 4){

  fprintf(stderr,"Wrong format!\n");
  printf("Usage : <%s>  <method> <n1>  <n2> ",argv[0]);
  return 1;
}

int num1=atoi(argv[2]); //converting argv_2 to integer
int num2=atoi(argv[3]); //converting argv_3 to integer	

// Arithmetic Functions

int add(int a,int b){
    return a+b;
}

int multiply(int a,int b){
    return a*b;
}

int divsion(int a,int b){
    return a/b;
}

int sub(int a,int b){
    return a-b;
}


// Checking and calling respective functions 

if(strcmp(argv[1],"addition")==0){ 

  printf("Result: %d\n",add(num1,num2));

}else if((strcmp(argv[1],"subraction")==0){

  printf("\nResult: %d\n",sub(num1,num2));

}else if((strcmp(argv[1],"multipy")==0){

  printf("\nResult: %d\n",multiply(num1,num2));

}else if((strcmp(argv[1],"divsion")==0){

  printf("\nResult: %d\n",divsion(num1,num2));

}else {

  printf("Wrong method")
}

return 0;
}
