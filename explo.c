#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

  int decisionJoueur = 0;

  printf ("Ou voulez vous aller ?\n (1) Toulouse (2) Montpellier.\n");
  		scanf("%d",&decisionJoueur);

// Decision du lieu par numéro
  if(decisionJoueur == 1){
			printf("\nVous allez a Toulouse \n");
        }

		if (decisionJoueur == 2){
			printf("Vous allez a Montpellier\n");
		}

return 0;

}
