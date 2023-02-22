#include <stdio.h>

/* funzione che calcola la potenza fra due interi non negativi */
int potenza(int base, int esponente) {
      // pre: base ed esponente sono interi >=0
      int risultato;                // il risultato

      /* inizializza il risultato ad 1 */
      risultato = 1;

      /* moltiplica esponente volte il risultato per base */
      for(int i=1; i<=esponente; i++)
            risultato *= base;

      /* restituisci il risultato */
      return risultato;
}

/* applicazione per il calcolo della potenza di due numeri interi letti da tastiera */
int main() {
      int numero1, numero2;                 // interi da leggere
      printf("Caro utente, introduci due interi!\n");
      scanf("%d%d", &numero1, &numero2);
      printf("%d elevato a %d fa %d\n", numero1, numero2, potenza(numero1,numero2));
      system("PAUSE");
}
