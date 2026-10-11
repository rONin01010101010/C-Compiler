#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include "lexer.c"
int test_compiler(int argc, char *argv[]){

    if(argc > 3){
        printf("Too many args");
    }

    char* lex = "---lexer";
    char* par = "---parser";
    char filepath = argv[0];
    char command[1024];
    //regex to check that the first arg is a file path in command 
    regex_t reegex; 
    int value;

    value = regcomp(&reegex, '^/?([^/]+/)*[^/]+/?$',0); 
    value = regexec(&reegex ,  filepath, 0, NULL, 0);

    if(value != 0){
        printf("Arg should be a file path");
    }

    for(int i = 0; i < argc; i++){
      snprintf(command, sizeof(command), "gcc" ,filepath,"-o output"); //preprocessing command for driver to execute
      if(argv[i] == "--lex"){
         lexer(argv[0]);
      } 
    }
}