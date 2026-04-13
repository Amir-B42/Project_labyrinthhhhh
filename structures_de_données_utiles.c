#include <stdbool.h>

typedef struct file {int len; int* data; int len_max;} File;
typedef struct pile {int len; int* data; int len_max;} Pile;

bool is_empty_F(File* F){
  return F->len == 0;
}

bool is_full_F(File* F){
  return F->len == F->len_max;
}

File* init_file(int len_max){
  /*INitialise une file à zéro*/
  File* file = malloc(sizeof(File));
  file->len = 0;
  file->data = calloc(sizeof(int)*len_max);
  file->len_max = len_max;
  return file;
}

void enfiler(File F, int elt){
  
}

int defiler(File F){
  
}

