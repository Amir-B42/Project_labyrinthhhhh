#include <stdbool.h>

typedef struct file {int len; int* data; int len_max;} File;
typedef struct pile {int len; int* data; int len_max;} Pile;

File* init_file(int len_max);
void enfiler(File* file,int e);
int defiler(File* file);
bool is_full(File* file);
bool is_empty(File* file);

Pile* init_pile(int len_max);
void empiler(Pile* pile; int e);
int depiler(Pile* pile);
bool is_full(Pile* pile);
bool is_empty(Pile* pile);

