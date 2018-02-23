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

    std::cout << *it << std::endl;

    if(*it == '[' || *it == '(' || *it == '{'){
      symbolStack.push(*it);
    }

    if(*it == ']' && symbolStack.top() == '['){
      symbolStack.pop();
    }
    else if(*it == '}' && symbolStack.top() == '{'){
      symbolStack.pop();
    }
    else if(*it == ')' && symbolStack.top() == '('){
      symbolStack.pop();
    }

  }
  if(symbolStack.size() != 0){
    std::cout << "not balanced" << std::endl;
  }
  else{
    std::cout << "balanced" << std::endl;
  }

  return symbolStack.empty();
  // std::cout << "made it" << std::endl;
}




std::string iToP(std::string input){
  std::stack<char, std::deque<char> > mathSymbols;

  for(auto it = input.begin(); it != input.end(); it++){

    if(*it == '0' || *it =='9' || *it == '8' || *it == '7'
      || *it == '6' || *it == '5' || *it == '4'
      || *it == '3' || *it == '2' || *it == '1'){
      std::cout<< *it <<" ";
  }


}


for(auto it = input.begin(); it != input.end(); it++){


  if(*it == '('){
    mathSymbols.push(*it);
  }
  else if(*it == ')'){
    mathSymbols.push(*it);
    while(*it != '('){
      std::cout << mathSymbols.top() << " ";
      mathSymbols.pop();
    }
  }
  else if((*it == '*' || *it == '/')){
    mathSymbols.push(*it);
    while(mathSymbols.top() != '+' || mathSymbols.top() != '-'){
      std::cout << mathSymbols.top() << " ";
      mathSymbols.pop();

    }
  }
  else if((*it == '+' || *it == '-')){
    mathSymbols.push(*it);
    std::cout << mathSymbols.top() << " ";
    mathSymbols.pop();

  }

}
}











int main(int argc, char** argv){

  // balancedSymbols("[ sahfklb ] [fdas ] (");
  // std::cout << "hit" << std::endl;


  iToP("1+2+3");

}


