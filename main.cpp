#include <iostream>
#include "Stack.h"
#include "utilites.h"
//#include "Exception.h"


using namespace std;

int main() {
    system("chcp 65001");

    Stack<int> stack;
    //PrintEmpty(stack);

    stack.Push(5);

    stack.Push(7);
    stack.Push(9);
    stack.Push(107);

    //PrintEmpty(stack);

    stack.ForEach(Print);
   cout << "------" << stack.Pop() << "-------" <<endl;
    stack.ForEach(Print);



    return 0;
}

