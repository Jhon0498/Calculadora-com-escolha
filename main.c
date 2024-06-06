

#include <stdio.h>

int main(void) {

  int num1, num2, total;
  int operaçao, nMaior, nMenor;

  printf("Digitte o primeiro número: ");
  scanf("%d", &num1);

  printf("Digitte o segundo número: ");
  scanf("%d", &num2);

  printf("Escolha a operação\n");
  printf("1 - Adição\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  scanf("%d", &operaçao);
  
  
  if (num1 > num2 ){
    num1 = nMaior;
    num2 = nMenor;
    printf("Primeiro número é maior");
  }
else if (num2 > num1){
    num2 = nMaior;
    num1 = nMenor;
  
  printf("Segundo número é maior");
      }
  else {
    printf("São iguais");

 switch (operaçao) {
  case 1:
    total= num1 + num2;
   printf("O resultado de é: %d\n", total);
   break;
    case 2:
      total= num1 - num2;
     printf("O resultado de é: %d\n", total);
    break;
  case 3:
    total= num1 * num2;
   printf("O resultado de é: %d\n", total);
  break;
case 4:
  if (num2 != 0)
  total= num1 / num2;
 printf("O resultado de é: %d\n", total);
   
  printf("Resultado é 0\n");
    break;
   default: 
     printf("Opção inválida");
   
 }
    printf("O resultado é: %d\n", total);
    
  return 0;
}
}