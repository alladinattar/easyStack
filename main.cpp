#include "hard_stack.hpp"

int main(){

  Stack stack = Stack<int>();
  for (int i=0;i<31;++i){
    stack.push(std::move(i));
  }
  for (int i=0;i<31;++i){
    std::cout<<stack.pop()<<std::endl;


  }
}