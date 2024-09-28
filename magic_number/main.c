#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
 // initialisation des variables nécessaires à la partie
 srand(time(NULL));
 int random_number = rand() % 100 + 1;
 int user_number;
 int essai = 0; // la variable essai permet de compter le nombre de tentatives
 while (user_number != random_number && essai < 10) // la partie s'arrête si le nombre d'essai est égal à 10 ou si le joueur a trouvé le nombre magique
 {
  essai += 1; // a chaque début de partie le nombre d'essais est incrémenter de 1
  printf("Choisissez un nombre en 1 et 100 :\n");
  scanf("%d", &user_number); // saisi du nombre par l'utilisateur
  // Les conditions ci dessous permettent de comparer le nombre saisi par le joueur avec le nombre magique
  if (user_number == random_number)
  {
   printf("Gagné en %d essai(s)!\n", essai);
   return 0; // si l'utilisateur gagne alors un message s'affiche et le code renvoi 0 pour signaler la fin du programme afin de ne pas afficher le texte pour les perdants
  }
  else if (user_number < random_number)
  {
   printf("C'est plus!\n");
  }
  else
  {
   printf("C'est moins!\n");
  }
 }
 printf("Vous avez perdu le bon nombre était %d\n", random_number); // si le joueur a perdu alors le numéro qu'il fallait deviner lui est montré
 return 0;
}
