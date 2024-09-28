#include <stdlib.h>
#include <stdio.h>

int main()
{
 int premier_nombre;
 int second_nombre;
 char signe;
 printf("Bienvenue dans la mini calculatrice !\n");
 while (signe != '+' && signe != '-' && signe != '*' && signe != '/' && signe != '%')
 {
  printf("Choisissez un opérateur (+, -, *, /, %%) :\n"); 
  scanf(" %c", &signe);
 }
 printf("Choisissez un premier nombre :\n");
 scanf("%d", &premier_nombre);
 printf("Entrez un second nombre :\n");
 scanf("%d", &second_nombre);
 if (signe == '+')
 {
  printf("addition\n");
 }
 else if (signe == '-')
 {
  printf("soustraction\n");
 }
 else if (signe == '*')
 {
  printf("multiplication\n");
 }
 else if (signe == '/')
 {
  printf("division\n");
 }
 else if (signe == '%')
 {
  printf("modulo\n");
 }
 else
 {
  printf("Votre signe n'a pas été reconnu\n");
 }
 return 0;
}
