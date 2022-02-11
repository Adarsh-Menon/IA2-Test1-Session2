#include<stdio.h>

int side(){
  int a;
  printf("enter the side of the triangle");
  scanf("%d",&a);
  return a;
}

int check(int a,int b,int c){
  int flag=0;
  if (a!=b&&b!=c&&a!=c){
    printf("%d",flag);
  }
  else{
    flag=1;
    printf("%d",flag);

  }
  printf("%d",flag);
  return flag;
}


void output(){
  int flag;
  if (flag==0){
    printf("they are scalane triangle\n");
  }
  else{
    printf("they are not scalance triangle\n");
  }
}

int main(){
  int a,b,c,flag;
  a=side();
  b=side();
  c=side();
  check(a,b,c);
  output(flag);
  return 0;
}