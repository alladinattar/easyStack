#include "hard_stack.hpp"

int main(){

  HStack stack = HStack<int>();
  for (int i=0;i<31;++i){
    stack.push(std::move(i));
  }
  for (int i=0;i<31;++i){
    std::cout<<stack.pop()<<std::endl;


  }
}