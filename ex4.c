#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c=0,d=0;

  printf("Tossing a coin...\n");

  for (a=0;a<3;a++){
    b=rand();
    if(b%2==0){
      printf("Round %d : Head\n",a+1);
      c++;
    }else{
      printf("Round %d : Tail\n",a+1);
      d++;
    }
  }
  printf("Heads: %d, Tails: %d\n",c,d);
  
  if (c>d){
    printf("You won\n");
  }else{
    printf("You lost\n");
  }
  
  return 0;
}
