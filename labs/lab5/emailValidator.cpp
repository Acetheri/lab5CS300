#include <iostream>
#include <regex>




bool emailValidator(std::string s){

  
  std::regex reg1("[1-0A-Za-z]{1-20}[.][\\[a-zA-Z0-9][@][a-z]{1-20}[.][a-z]{1-3}"); 
  return std::regex_match(s, reg1);


}



int main(){
  if(emailValidator("joe.Mack@gmail.com")){
    std::cout << "True";
  }
  else{
    std::cout << "false";
  }
  return 0;
}
