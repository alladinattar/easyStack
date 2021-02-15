// Copyright 2020 Rinat Mukaev <rinamuka4@gmail.com>
#include <utility>
#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

template <typename T>
class Stack {
 public:
  Stack():m_memp(new T[16]),m_head(0),m_stackSize(16){}
  Stack(Stack&&){};
  Stack(const Stack&) = delete;

  void push(T&& value){
    if (m_head == m_stackSize){
      T* tmp = new T[m_stackSize*2];
      if (tmp != nullptr){
        // copy old array to new big array
        // m_stackSize = m_stackSize*2
      }
      else{
        //throw no memory
      }
    }
    m_memp[m_head] = std::move(value);
    m_head+=1;
  };
  void push(const T& value){
    if (m_head == m_stackSize){
      T* tmp = new T[m_stackSize*2];
      if (tmp != nullptr){
        // copy old array to new big array
          m_stackSize = m_stackSize*2;
      }
      else{
        //throw no memory
      }
    }
    m_memp[m_head] = value;
    m_head+=1;
  };
  void pop(){
      delete(m_memp+m_head-1);
  };
  const T& head() const{
      return m_memp+m_head;
  };

 private:
  T* m_memp;//start
  int m_head;//index first free position
  int m_stackSize;//
};


#endif  // INCLUDE_HEADER_HPP_
