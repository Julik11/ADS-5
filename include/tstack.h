// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
  T data[size];
  int top;

 public:
  TStack() : top(-1) {}

  void push(const T& val) {
    if (top < size - 1) {
      data[++top] = val;
    }
  }

  T pop() {
    if (top >= 0) {
      return data[top--];
    }
    return T();
  }

  T getTop() const {
    if (top >= 0) {
      return data[top];
    }
    return T();
  }

  bool isEmpty() const {
    return top == -1;
  }
};

#endif  // INCLUDE_TSTACK_H_
