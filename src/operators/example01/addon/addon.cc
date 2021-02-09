#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int firstInt = 15;
   int secondInt = 15;
   int sum = 0;
   int sub = 0;
   int multi = 0;
   int div = 0;

   sum = firstInt + secondInt;
   sub = firstInt - secondInt;
   multi = firstInt * secondInt;
   div = firstInt / secondInt;

   cout << "Result SUM -> " << sum << endl;
   cout << "Result SUB -> " << sub << endl;
   cout << "Result MULTI -> " << multi << endl;
   cout << "Result DIV -> " << div << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
