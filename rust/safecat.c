#include<stdio.h>
#include<stdlib.h>

long int safewrite(int, char*, int);

int main(int argc, char** argv) {
    if(argc!=1) {
        fprintf(stderr,"Usage: safecat\n\nThis command reads from stdin and takes no arguments.\n");
        exit(1);
    }
    char *line=malloc(1000);
    long unsigned bytes=1000;
    long int ret=0;
    while((ret=getline(&line,&bytes,stdin))) {
        safewrite(1,line,ret);
    }
}
