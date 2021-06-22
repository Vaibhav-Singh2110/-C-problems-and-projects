#include <stdio.h>

int main()
{
  int salary;
  char gender;
  printf("Enter the salary\n");
  scanf("%d", &salary);
  printf("Enter gender of employee\n");
  scanf("%c", &gender);
 int bonus = gender == 'M'?5%(salary): 3%(salary);
  printf("%d", bonus);

    return 0;
}
