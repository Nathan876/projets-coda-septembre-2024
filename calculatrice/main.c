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
  int resultat = premier_nombre + second_nombre;
 }
 else if (signe == '-')
 {
  int resultat = premier_nombre - second_nombre;
 }
 else if (signe == '*')
 {
  int resultat = premier_nombre * second_nombre;
 }
 else if (signe == '/')
 {
  if (second_nombre == 0)
  {
   printf("La division par 0 est impossible\n");
   return 0;
  }
  else
  {
   double resultat = (double)premier_nombre / (double)second_nombre;
  }
 } 
 else if (signe == '%')
 {
  if (second_nombre == 0)
  {
   printf("La division par 0 est impossible");
   return 0;
  }
  else
  {
   int resultat = premier_nombre % second_nombre;
   return 0;
  }
 }
 else
 {
  printf("Votre signe n'a pas été reconnu\n");
 }
 return 0;
}
