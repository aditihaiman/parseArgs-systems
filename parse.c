#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ) {
    char ** args = malloc(5 * sizeof(char *));
    char *s1 = line;
    int idx = 0;
    char *s;
    while(line != NULL){
        args[idx] = strsep( &line, " ");
        idx++;
    }
    args[idx] = NULL;
    return args;
}
int main() {
    char line[100] = "ls -a -l";
    char *s1 = line;
    char ** args = parse_args(s1);
    execvp("ls", args);
    return 0;
}
