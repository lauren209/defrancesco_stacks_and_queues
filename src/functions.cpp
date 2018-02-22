#include "../include/functions.h"
//#include "../include/catch.hpp"

#include <string>
#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>

bool balancedSymbols(std::string input){

  std::stack<char, std::deque<char> > symbolStack;


  for(auto it = input.begin(); it != input.end(); it++){

      if(*it == "{"){
        symbolStack.push(*it);
      }

    // if(*it == "[" || "{" || "("){
    //   symbolStack.push(*it);
    // }
    // else{

    //   if(*it == "]" && symbolStack.top() == "["){
    //     symbolStack.pop();
    //   }
    //   else if(*it == "}" && symbolStack.top() == "{"){
    //     symbolStack.pop();
    //   }
    //   else if(*it == ")" && symbolStack.top() == "("){
    //     symbolStack.pop();
    //   }
    // }
  }
  return symbolStack.empty();
}



  // for(int j=0; j<inputSize; j++){
  //   // if(char_array[j] == "[" || char_array[j] == "{" || char_array[j] == "("){
  //   //   symbolStack.push(char_array[i]);
  //   // }

  //   // else{

  //   //   if(char_array[j] == "]" && symbolStack.peak() == "["){
  //   //     symbolStack.pop();
  //   //   }
  //   //   else if(char_array[j] == "}" && symbolStack.peak() == "{"){
  //   //     symbolStack.pop();
  //   //   }
  //   //   else if(char_array[j] == ")" && symbolStack.peak() == "("){
  //   //     symbolStack.pop();
  //   //   }
  //   // }

  // }




