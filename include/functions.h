
#include <string>
#include <iostream>
#include <stack>

class functions
{
public:
  functions();
  ~functions();


 bool balancedSymbols(std::string input){
  int inputSize = input.length();
  char* char_array = new char[inputSize];
  // symbolArray = new char[inputSize];


  for(int i = 0; i< inputSize; i++){
    char_array[i] = input.at(i);
  }

  for(int j=0; j<inputSize; j++){
    if(char_array[j] == "[" || char_array[j] == "{" || char_array[j] == "("){
      symbolStack.push(char_array[i]);
    }

    else{

      if(char_array[j] == "]" && symbolStack.peak() == "["){
        symbolStack.pop();
      }
      else if(char_array[j] == "}" && symbolStack.peak() == "{"){
        symbolStack.pop();
      }
      else if(char_array[j] == ")" && symbolStack.peak() == "("){
        symbolStack.pop();
      }
    }

  }


 }




 std::string iToP(std::string input);

private:
  // char* symbolArray;
  std::stack<string> symbolStack;
  bool isBalanced;
  std::string postFix;

};
