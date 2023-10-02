#include "spellCheck.h"
#include <iostream>
#include <string>
#include <regex>



std::string spellCheck(std::string recLetter, std::string studentName){
  std::regex reg1("^bart||^Bart");
  std::string str1 = std::regex_replace(recLetter, reg1, studentName);
  return str1;
}



  
