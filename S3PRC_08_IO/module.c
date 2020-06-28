#include "module.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void asso_write(const SPA *spa,const int count, char *line){
    snprintf(line,(size_t)count, "%lf %d %s", spa->balance, spa->count, spa->name);
}

bool asso_extract(SPA *spa, const char *line){
    return sscanf(line,"%lf %d %s", &spa->balance, &spa->count, spa->name)==3;
    
}

/////////////////////////

void file_read(const char *filename, SPA *spa){
    FILE *flux=fopen(filename, "r");
     if (!flux){
        fprintf(stderr, "error while reading on %s", filename);
     }
     else{
         if (fscanf(flux, "%lf %d %s", &spa->balance, &spa->count, spa->name)!=3){
             fprintf(stderr, "error while reading on %s", filename);
         }
     }
     fclose(flux);
}


void file_write(char *filename, const SPA *spa){
    FILE *flux=fopen(filename, "w");
     if (!flux){
        fprintf(stderr, "error while writing on %s", filename);
     }
     else{
         fprintf(flux, "%lf %d %s", spa->balance, spa->count, spa->name);
     }
     fclose(flux);
}


///////////////////////
void bin_write(const char *line, const int bloc_size,const int bloc_count, const char *filename){
    FILE *flux=fopen(filename, "wb");
    if (!flux){
        fprintf(stderr, "error while opening for writing on %s", filename);
        abort();
    }
    else{
        if ((int)fwrite(line,(size_t) bloc_size,(size_t)bloc_count, flux)!=bloc_count){
            fprintf(stderr, "error while writing on %s", filename);
        }
    }
    fclose(flux);
}

void bin_read(char *line, const int bloc_size,const int bloc_count, const char *filename){
    FILE *flux=fopen(filename, "rb");
    if(!flux){
        fprintf(stderr, "error while openning for reading %s", filename);     
    }
    else{
        if((int)fread(line,(size_t) bloc_size,(size_t)bloc_count, flux)!=bloc_count){
            fprintf(stderr, "error while reading on %ssss", filename);
        }
    }
    fclose(flux);
}
