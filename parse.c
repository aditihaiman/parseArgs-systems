#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** parse_args( char * line ) {
    char * args[5];
    char *s1 = line;
    int idx = 0;
    char *s;
    while(line != NULL){
        args[idx] = strsep( &line, " ");
        idx++;
    }
    printf("0: %s\n", args[0]);
    printf("1: %s\n", args[1]);
    printf("2: %s\n", args[2]);
    return args;
}
int main() {
    char line[100] = "ls -a -l";
    char *s1 = line;
    //char *s2 = strsep( &s1, "-" );
    //printf("[%s]\n", s2);
    //printf("[%s]\n", s1);
    char ** args = parse_args(s1);

    
    return 0;
}
