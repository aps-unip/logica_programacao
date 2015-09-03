#include<stdio.h>

int main () {

int num1, num2, num3, menor;

printf("Digite os 3 números com espaços em cada um deles\n");
scanf("%d %d %d", &num1, &num2, &num3);

printf("Você digitou os seguintes numeros %d, %d, %d\n", num1, num2, num3);

if ((num1 < num2) && (num1 < num3)) { 
  menor = num1;
} else {
  if (num2 < num3) {
   menor = num2;
  } else { 
    if ((num1 == num2) && (num1 == num3)) {
      printf("Não tem menor todos os números são iguais\n");
    } else {
      menor = num3;
      printf("O menor numero digitado foi %d\n", menor);
    }
  }
}
return(0);
}
