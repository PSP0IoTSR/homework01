#include <stdio.h>
int __len = 6;
int __sta = 0;
int sta(int);
int main(){
  int in;
  while(1){
    printf("input: ");
    scanf("%d", &in);
    printf("output: %d\n", sta(in));
  }
}

int sta(int m){
  int a = (__len+(m%__len));
  __sta = (__sta + a)%__len;
  return __sta;
}