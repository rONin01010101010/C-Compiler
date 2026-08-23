#include <stdio.h>
#include <regex.h>
#include <stdint.h>
//run test on parse fix how to call it in the main function
int lexer(FILE *file){
  file = fopen("main.c","r");
 
  if(file == NULL){
    return printf("File not found\n");
  }

  char tokens[] = "\\{|\\}|\\(|\\)|;|int|return|[a-zA-Z]\\w*|[0-9]+";

  int ch = fgetc(file);
  uintptr_t val = (uintptr_t)tokens;
  while(ch != EOF){
    if(val == ch){
        return 0;
    }
    return 1;
}
ferror(file);
fclose(file);
}

int main(){
  return 0;
  FILE *file = "../C_Compiler/main.c";
  lexer(file);
}