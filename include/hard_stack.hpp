template <typename T>
class Stack {
 public:
  template <typename... Args>
  void push_emplace(Args&&... value);
  void push(T&& value) {
    if (m_head == m_stackSize) {
      T* tmp = new T[m_stackSize * 2];
      if (tmp != nullptr) {
        std::memcpy(tmp, m_memp, m_stackSize * sizeof(T));
        m_stackSize = m_stackSize * 2;
      } else {
        throw "No memory for element";
      }
    }
    m_memp[m_head] = std::move(value);
    m_head += 1;
  };
  const T& head() const { return m_memp[m_head + 1]; };
  T pop() {
    if (m_stackSize == 0){
      throw "Stack is empty";
    }
    return m_mempp[--m_head]; };

 private:
  T* m_memp;        // start
  int m_head;       // index peak of stack
  int m_stackSize;  //
};