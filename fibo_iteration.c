#include<stdio.h>

int main(int argc,char** argv){
  int fib,fno=0,sno=1,i,n;
  n=atoi(argv[1]);
  printf("The fibonacci series is:");
  for(i=0;i<=n;i++){
    if(i<=1){
      fib=i;
    }
    else{  
      fib=fno+sno;
      fno=sno;
      sno=fib;
    }

    printf("\n %d\n",fib);
  }  
}
