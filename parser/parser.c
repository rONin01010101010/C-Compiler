#include "grammar.bnf"
#include "lexer.c"
#include <string.h> 
#include <stddef.h>


//root node in the AST 
void program(char* tokens){
  func(tokens);
}




void func(char* tokens[]){
    size_t length = sizeof(tokens) / sizeof(tokens[0]);
    for(int i = 0; i < length; i++){
        //base case
        if(tokens[i] == "return"){
            statement(tokens);
        }
        
        func(tokens);
    }
}

void statements(char* tokens[]){
     size_t length = sizeof(tokens) / sizeof(tokens[0]);
     for(int i = 0; i < length; i++){
         if(tokens[i] != "return " || tokens[i] != ";"){
            exp(tokens);
         } 
         statements(tokens); 
     }
} 

void exp(char* tokens[]){
    number(tokens);
}

//final stage of main function, less complicated code as program is shorter
void number(){
  2; 
}