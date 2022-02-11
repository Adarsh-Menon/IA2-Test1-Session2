#include<stdio.h>

int input(){
  int n;
  printf("enter the a composite number");
  scanf("%d",&n);
  return n;
}

int comp(int n){
  for(int i = 2; i <= n/2; i++){
    if(n%i==0)
       return 1;
  }
  return 0;
  }


void output(int n,int composite){
  if (composite){
    printf("%d is composite number",n);
  }
  else{
    printf("%d is not composite number",n);
  }
}

int main(){
  int n,m;
  n=input();
  m=comp(n);
  output(n,m);
  return 0;
}