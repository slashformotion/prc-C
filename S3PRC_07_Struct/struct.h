#ifndef MEM_H
#define MEM_H

typedef struct Mem
{
    int count;
    int *values;
}Mem;

void Mem_init(Mem * m);

void Mem_append(Mem *m, int new_value);

void Mem_destroy(Mem *m);

void Mem_show(Mem *m);
void Mem_free(Mem *m);


#endif // MEM_H