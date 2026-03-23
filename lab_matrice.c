#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

/*idées : 
 
*/
typedef int* lab; //matrice classique
//down = ind + q

lab create(int p, int q){
    lab labyrinthe = calloc(p,sizeof(int*));
    return labyrinthe;    
}

lab init(int p, int q){

}

int* voisin(lab laby, int p, int q, int u){
    int nb_v = 0;
    if(u-1 >= 0) nb_v++;
    if(u+1 <= q) nb_v++;
    if(u+q <= p) nb_v++;
    if(u-q >= 0) nb_v++;
    int* v = malloc(sizeof(int)*nb_v);
    int i = 0;
    if(u-1 >= 0) {v[i] = u-1; i++;}
    if(u+1 <= q) {v[i] = u+1; i++; }
    if(u+q <= p) { ; i++; }
    if(u-q >= 0) { ; i++; }
}

bool is_real(lab laby, int start){
    
}





