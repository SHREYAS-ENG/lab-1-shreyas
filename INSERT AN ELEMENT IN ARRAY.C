#include <stdio.h>
#include<stdlib.h>
int main()
{
  int Array[100], Position, i, Number, Value;

  printf(" Enter Number of elements in an array\n");
  scanf("%d", &Number);

  printf("\n Enter %d elements of an Array \n", Number);
  for (i = 0; i < Number; i++)
   {
     scanf("%d", &Array[i]);
   }

  printf("\n Enter the position of the insertion element\n");
  scanf("%d", &Position);

  printf("\n Enter the value of an Array Emenent to insert\n");
  scanf("%d", &Value);

  for (i = Number - 1; i >= Position - 1; i--)
   {
	     Array[i+1] = Array[i];
   }
  Array[Position-1] = Value;

 printf("\n Final Array after Inserting an  Elemnt is:\n");
 for (i = 0; i <= Number; i++)
  {
 	printf("%d\t", Array[i]);
  }

 return 0;
}
