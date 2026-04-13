#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "structures_de_données_utiles.h"

/*idées : 
 
*/
typedef int* lab; //matrice classique
//down = ind + q

lab create_mat(int p, int q){
    lab labyrinthe = calloc(p,sizeof(int*));
    return labyrinthe;    
}

lab init_mat(int p, int q){ /*création des cases et des murs*/ 

}

int* voisin_mat(lab laby, int p, int q, int u, int* nb_v){
    /*IN : p,q dimensions du labyrinthe, u l'indice de la case du labyrinthe*/
    *nb_v = 0;
    if(u-1 >= 0) (*nb_v)++;
    if(u+1 <= q) (*nb_v)++;
    if(u+q <= p) (*nb_v)++;
    if(u-q >= 0) (*nb_v)++;
    int* v = malloc(sizeof(int)*(*nb_v));
    int i = 0;
    if(u-1 >= 0) {v[i] = u-1; i++;}
    if(u+1 <= q) {v[i] = u+1; i++;}
    if(u+q <= p) {v[i] = u+q ; i++;}
    if(u-q >= 0) {v[i] = u-q ; i++;}
    return v;
}

bool is_real_mat(lab laby, int p, int q, int start){
    /*Contraintes :
    à partir de start, existe un chemin vers une sortie
    IN : un labyrinthe et un point de départ
    OUT : true s'il existe une solution
    */
   //Tactique de aller à droite ?
   int nb_voisins = 0;
   bool* visited = malloc(sizeof(bool)*p*q);
   int* voisins = voisin_mat(laby,p,q,start, &nb_voisins);
   File f = init_file(p*q);
   enfiler(f,start);
   while(!is_empty(f)){
    int u = defiler(f);
    if(laby[u] == sortie) return true;
    int* voisins = voisin_mat(laby,p,q,u, &nb_voisins);
    for(int i=0;i<nb_voisins;i++){
        if(!visited[voisins[i]]){
            enfiler(f,voisins[i]);
        }
    }
   }
    
}

void point_isolés_mat(){

}

void ens_solutions(){

}
















