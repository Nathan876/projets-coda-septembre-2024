#include <stdlib.h>
#include <stdio.h>

int main()
{
 // initialisation des variables
 int premier_nombre;
 int second_nombre;
 char signe;
 // affichage de la calculatrice et récupération des valeurs
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

 // Calcul en fonction des variables saisies par l'utilisateur
 if (signe == '+')
 {
  int resultat = premier_nombre + second_nombre;
  printf("%d %c %d = %d\n", premier_nombre, signe, second_nombre, resultat);
 }
 else if (signe == '-')
 {
  int resultat = premier_nombre - second_nombre;
  printf("%d %c %d = %d\n", premier_nombre, signe, second_nombre, resultat);

 }
 else if (signe == '*')
 {
  int resultat = premier_nombre * second_nombre;
  printf("%d %c %d = %d\n", premier_nombre, signe, second_nombre, resultat);
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
   printf("%d %c %d = %.2f\n", premier_nombre, signe, second_nombre, resultat);
   return 0;
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
   printf("%d %c %d = %d\n", premier_nombre, signe, second_nombre, resultat);
  }
 }
 else
 {
  printf("Votre signe n'a pas été reconnu\n");
 }
 return 0;
}
