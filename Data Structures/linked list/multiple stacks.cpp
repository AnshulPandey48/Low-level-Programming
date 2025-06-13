   #include <iostream>
   #include <stack>

   int main() {
       std::stack<int> stack1;
       std::stack<std::string> stack2;

       stack1.push(10);
       stack2.push("hello");

       std::cout << stack1.top() << std::endl;
       std::cout << stack2.top() << std::endl;

       return 0;
   }