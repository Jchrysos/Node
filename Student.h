#pragma once
#include <iostream>
#include <string>

using namespace std;
class Student{
  public:
  string name;
  string getName(){
    return name;
  }
  void setName(string name1){
    name = name1;
  }
};