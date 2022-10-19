#include <stdio.h>
#define ANO_ATUAL 2022

int main(void)
{
  int idade, ano;
  printf("Hello World\n");

  printf("Qual e sua idade?\n");
  scanf("%d", &idade);

  printf("Voce tem %d anos!!!!!\n", idade);

  ano = ANO_ATUAL - idade;
  printf("Voce nasceu em %d!!!!!\n", ano);
  return 0;
}
