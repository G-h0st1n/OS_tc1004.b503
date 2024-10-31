#include <stdio.h>



int main(int argc, char **argv){
    for(int i= 0; i < argc; i++){
        printf("Hello %s\n",argv[i]);
    }
    return 0;
//@G-h0st1n ➜ /workspaces/OS_tc1004.b503 (ghostin/dev) $ gcc -o hola hola.c
//@G-h0st1n ➜ /workspaces/OS_tc1004.b503 (ghostin/dev) $ ./hola
}