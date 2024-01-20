#include <stdio.h>
#include <string.h>
int main()
{
  char pass[20];
  const char code[] = "Unlock";
  do
  {
    printf("Enter the Password: ");
    scanf("%s",pass);
  } while (strcmp(pass,code) != 0);
  printf("Access Granted!\n");
  return 0;
}