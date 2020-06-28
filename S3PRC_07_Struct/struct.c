#include "struct.h"
#include <stdlib.h>
#include <stdio.h>

void Mem_init(Mem * m){
    m->count=0;
    m->values=NULL;
}

void Mem_append(Mem *m, int new_value){
    if (m->count==0){
        m->count+=1;
        int newsize=(int)sizeof(int)*(int)m->count;
        m->values=(int *)malloc((size_t)newsize);
        m->values[m->count-1]=new_value;
    }
    else{
        m->count+=1;
        int newsize = (int)sizeof(int)*m->count;
        m->values=(int *)realloc(m->values,(size_t)newsize);
        m->values[m->count-1]=new_value;
    }
}

void Mem_show(Mem *m){
    printf("\n");
    for(int i=0;i<m->count ;i++){
        
        printf("index : %d and value : %d\n", i, m->values[i]);
    }
}

void Mem_destroy(Mem *m){
    free(m->values);
    Mem_init(m);
}

void Mem_free(Mem *m){
    free(m->values);
}