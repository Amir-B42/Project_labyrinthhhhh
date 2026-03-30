typedef struct file {int len; int* data; int len_max;} File;
typedef struct pile {int len; int* data; int len_max;} Pile;

File* init_file(int len_max);
void enfiler(File* file,int e);
int defiler(File* file);

Pile* init_pile(int len_max);
void enpiler(Pile* pile; int e);
int depiler(Pile* pile);
