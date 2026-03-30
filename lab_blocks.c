#define clear() printf("\033[H\033[J")

#include <unistd.h>
#include <poll.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <assert.h>

/*idées : au lieu d'un quintuplet, tt sur 8 bits  
Faut des contraintes -> (pas de 2x2 blanc, solvable ou pas, pas de cases isolées,...)
*/

int p = 10;
int q = 10;

typedef struct blok {int val; blok* up; blok* right; blok* down; blok* left; } blok; // liste de cases, 0 = blanc(libre) ; 1 = wall; 2 = case spéciale ?
typedef blok* lab;
blok template[] = ;

/* valeurs des cases 
sortie->val = 2
mur->val = 1
case_normale->val = 0
*/ 



lab create_blocks(){ //création de la base
    lab labyrinthe = malloc(sizeof(blok)*p*q); //flemme de faire une matrice, down = ind + q
    return labyrinthe ;    
}

lab init_blocks(lab labyrinthe){ //placement des murs, de la/les sortie(s), (cases spéciales ?), 
    
}

bool is_real_blocks(lab labyrinthe){ //idées : backtrack, 
    //est un labyrinthe s'il existe un chemin depuis le spawn jusqu'à la (ou les) sortie(s).
    //entrée : un labyrinthe
    //sortie : true s'il existe un chemin vers la sortie
    

}

int* compress_blocks(lab ){ //chercher des motifs ?
    
}

bool is_multiple_p_blocks(int i){
    for(int j=0;j<p,j++){
        if(i*j == p) return true;
    }
    return false;
}

void print_lab_blocks(lab labyrinthe){ //affichage du labyrinthe
    for(int i = 0;i<p*q;i++){
        if(labyrinthe[i].val == 0)printf(" ");
        if(labyrinthe[i].val == 1)printf("#");
        if(is_multiple_p(i)) printf("\n");
    }
    fflush(stdout);
}





/*SQUELETTE 1 :

  la fonction aux qui effectue le parcours en profondeur recursivement renvoie :
  - true si elle trouve une soluton
  - false sinon
  - la solution est stock'ee dans un objet mutable


let backtrack pb =
  let candidat = ... obj mutables eventuels ... in
  let rec aux noeud_i = 
      if est_solution(candidat, noeud_i) then
          true
      else if impasse(candidat) then
          false
      else begin
          candidat <- option1
          match aux fils_gauche with
          | true -> true
          | false -> begin
               candidat <- efface option1
               candidat <- option2
               match aux fils_droit with
               | true -> true
               | false -> begin
                   candidat <- efface option2
                   false
          end
       end   
  in match aux racine with
  | true -> Some candidat
  | false -> None ;;
  
*/



















