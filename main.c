/******************************************************************************
Miguel Cardoso Malton   matéria: algoritmos e estrutura de dados 2  data: 08/08/22



*******************************************************************************/
#include <stdio.h>

int main()
{
 float salariomensal, quantidadedehoras, quantidadedesalario;
 printf("Entre com a quantidade do salário: ");
scanf("%f",& quantidadedesalario);
 printf("Entre com a quantidade de hora: ");
scanf("%f",& quantidadedehoras);

salariomensal= quantidadedehoras*quantidadedesalario;

printf("%f", salariomensal);
}
