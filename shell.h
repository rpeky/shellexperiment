#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define IN_BUFFER 2048

void prompt();
char *inputread();

#endif
