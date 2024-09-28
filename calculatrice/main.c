#include <stdlib.h>
#include <stdio.h>

int main()
{
 int premier_nombre;
 int second_nombre;
 char signe;
 printf("Bienvenue dans la mini calculatrice !\n");
 printf("Choisissez un opérateur (+, -, *, /, %%) :\n");
 while (signe != '+' && signe != '-' && signe != '*' && signe != '/' && signe != '%')
 {
  scanf("%c", &signe);
 }
 printf("Choisissez un premier nombre :\n");
 scanf("%d", &premier_nombre);
 printf("Entrez un second nombre :\n");
 scanf("%d", &second_nombre);;
 return 0;
}
