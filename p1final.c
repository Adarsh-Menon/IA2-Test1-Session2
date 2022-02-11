#include<stdio.h>

void input(float *base,float *height){
  printf("enter  the base of triangle");
  scanf("%f",base);
  printf("enter the height of the triangle");
  scanf("%f",height);
}


void area(float base,float height,float *area){
     *area=(0.5*base*height);
}

void output(float base, float height,float area){
  printf("the give base is %f and height is %f and the area is %f",base,height,area);
}

int main(){
  float base,height,areaa,total;
  input(&base,&height);
  area(base,height,&areaa);
  output(base,height,areaa);
  return 0;
}