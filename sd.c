#include<stdio.h>
#include<locale.h>
#include<unistd.h>

int main(void)
{
  setlocale(LC_ALL,"portuguese");
  int an;
  
  for(an=0;an<=0x18;an++)
    {
      printf("Feliz Ano Novo!\a\n");
      printf("С Новым годом!\n\a");
      printf("سال نو مبارک\n\a");
      sleep(1);
      printf("\n");
      printf("\n");
    }
  return 0;
}
