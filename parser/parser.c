#include "grammar.bnf"
#include "lexer.c"
#include <string.h> 
void parser(char* tokens[]){
  
}

void program(char* tokens){
for(int i = 0; i < str_len(tokens); i++){
    if(tokens[i] == "main"){
        tokens[i];
    }
}
program(tokens);
}

void function(tokens){
for(int *i = 0; i < str_len(tokens); i++){
    if(tokens[i] == "return"){
        tokens[i];
        statement(tokens);
    }

}
}


void statement(tokens){
for(int *i = 0; i < str_len(tokens); i++){
    if(tokens[i] != "return" || tokens[i] != ";"){
        tokens[i];
        exp(tokens);
    }
}
}

void exp(tokens){
for(int *i = 0; i < str_len(tokens); i++){
    if(tokens[i] == "int"){
        tokens[i];
    }
}
}

int main(){
    return 0;
}