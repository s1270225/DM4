#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c=0,d=0;
  char e[8];
  
  printf("Who are you ?");
  scanf("%s",e);
  printf("hello %s\n",e);
  
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
    printf("%s won\n",e);
  }else{
    printf("%s lost\n",e);
  }
  
  return 0;
}
