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

typedef struct blok {int val; blok* up; blok* right; blok* down; blok* left; } blok; // liste de cases, 0 = blanc; 1 = wall; 2 = ?
typedef blok* lab;
blok template[] = ;

lab create(){
    lab labyrinthe = malloc(sizeof(blok)*p*q); //flemme de faire une matrice, down = ind + q
    
    return ;    
}

bool is_real(lab ){
    
}

int* compress(lab ){ //chercher des motifs ?
    
}

bool is_multiple_p(int i){
    for(int j=0;j<p,j++){
        if(i*j == p) return true;
    }
    return false;
}

void print_lab(lab labyrinthe){
    for(int i = 0;i<p*q;i++){
        if(labyrinthe[i].val == 0)printf(" ");
        if(labyrinthe[i].val == 1)printf("#");
        if(is_multiple_p(i)) printf("\n");
    }
    fflush(stdout);
}



























