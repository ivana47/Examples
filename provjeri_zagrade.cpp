#include <iostream>
#include <vector>
#include <string>

bool provjeri_zagrade (const std::string& str){
  std::vector<char> vec;

  for (int i = 0; i < str.size(); ++i){
    if (str.at(i) == '(' || str.at(i) == '[' || str.at(i) == '{'){
      vec.push_back(str.at(i));
    }
    else if (str.at(i) == ')'){
      if (vec.back() == '('){
        vec.pop_back();
      }
    }
    else if (str.at(i) == ']'){
      if (vec.back() == '['){
        vec.pop_back();
      }
    }
    else if (str.at(i) == '}'){
      if (vec.back() == '{'){
        vec.pop_back();
      }
    }
  }

  if (vec.empty() == true){
    return true;
  }
  else {
    return false;
  }

}

int main(int argc, char *argv[])
{
  std::string str;
  bool x;

  getline (std::cin, str);
  std::cin.ignore(1000, '\n');
  x = provjeri_zagrade(str);

  if (x == true){
    std::cout << "OK" << std::endl;
  }
  else {
    std::cout << "Error" << std::endl;
  }
  
  return 0;
}
