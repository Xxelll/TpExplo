#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

  typedef struct Lieu lieu;
  struct Lieu
  {
      char nom[20];
      char description[50];

      int difficulte;
      int destination;
  };

  lieu listeDeLieux [3];

  listeDeLieux[0].nom= "montpellier";
  listeDeLieux[0].description= "Ville du sud";
  listeDeLieux[0].difficulte= 1;
  listeDeLieux[0].destination=1;

  listeDeLieux[1].nom= "toulouse";
  listeDeLieux[1].description= "Ville sympa";
  listeDeLieux[1].difficulte= 5;
  listeDeLieux[1].destination=2;

  listeDeLieux[2].nom= "paris";
  listeDeLieux[2].description= "Ville pas vraiment cool";
  listeDeLieux[2].difficulte= 19;
  listeDeLieux[2].destination=0;


    char reponse[50];
    char toulouse[50] = ("toulouse");
    char montpellier[50] = ("montpellier");
    char paris [50] = ("montpellier");

    printf("Voulez vous allez a montpellier, toulouse ou paris ?\n");

    // scan reponse joueur
    scanf("%s", reponse);

  if (strcmp(reponse,montpellier)==0){
    printf("Vous allez a montpellier");
  }

  if (strcmp(reponse,toulouse)==0){
    printf("Vous allez a toulouse");
  }

  if (strcmp(reponse,paris)==0){
    printf("Vous allez a toulouse");
  }

 // en cas d erreur
  if (strcmp(reponse,toulouse)!=0){
  printf("Error");
  }


    return 0;
}
