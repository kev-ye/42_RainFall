/*
 * compile with: gcc -m32 -fno-stack-protector -z execstack source.c -o source
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void p(void) {
    void    *retaddr;
    char    buff[76];
    
    fflush(stdout);
    gets(buff);
    retaddr = __builtin_return_address(0); // returns the return address of the current function, or of one of its callers
    if (((unsigned int)retaddr & 0xb0000000) == 0xb0000000) {
        printf("(%p)\n", retaddr);
        _exit(1);
    }
    puts(buff);
    strdup(buff);
    return;
}

int main(void){
    p();
    return 0;
}