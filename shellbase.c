#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define IN_BUFFER 2048

/*
 * stdin fd0
 * stdout fd1
 * stderr fd2
 */

void prompt(){
    printf("pekysh> ");
}



char *inputread(){
    //read buffer 
    char *read_shell = malloc(sizeof(char)* IN_BUFFER);
    if(read_shell==NULL){
        perror("Failed to allocate memory for input\n");
    }
    fgets(read_shell, IN_BUFFER, stdin);
    return read_shell;
}

int main(int argc, char **argv){
    system("clear");
    char *shellread;
    
    while (1){
        prompt();
        shellread = inputread();

        //exit shell
        if(strncmp(shellread, "exit", 4)==0){
            free(shellread);
            break;
        }

    }
    return 0;
}
