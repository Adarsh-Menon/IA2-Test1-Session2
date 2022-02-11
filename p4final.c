#include <stdio.h>
int input_array_size()
{
  int length;
  printf("Enter the length of the array: \n");
  scanf("%d", &length);
  return length;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}

int is_composite(int n)
{
  for (int i = 2; i <= n/2; i++)
  {
    if (n%i == 0)
    return 1;
  }
  return 0;
}

int sum_composite(int n, int a[n])
{
  int sum = 0;
  for (int i=0; i<n; i++)
  {
    if (is_composite(a[i]))
    {
      sum += a[i];
    }
  }
  return sum;
}

void output(int s)
{
  printf("sum of composite number is %d \n", s);
}

int main()
{
  int length = input_array_size();
  int a[length];
  input_array(length, a);
  int res = sum_composite(length, a);
  output(res);
  return 0;
}