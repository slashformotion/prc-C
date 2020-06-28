#ifndef MODULE_H
#define MODULE_H
#include <stdbool.h>

typedef struct SPA{
    int count;
    double balance;
    char name[200];
}SPA;

void asso_write(const SPA *spa,const int count,  char *line);

bool asso_extract(SPA *spa, const char *line);

void file_read(const char *filename, SPA *spa);

void file_write(char *filename, const SPA *spa);

void bin_write(const char *line, const int bloc_size,const int bloc_count, const char *filename);
void bin_read(char *line, const int bloc_size,const int bloc_count, const char *filename);

#endif