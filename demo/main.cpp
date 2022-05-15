// Copyright 2022 Your Name <your_email>

#include "client.hpp"
int main() {
  Client cl;
  // {"input":"hel"}
  cl.request();
  std::cout << std::endl;
  std::cout << "RESPONSE: " << std::endl;
  std::cout << std::endl;
  cl.start();
}