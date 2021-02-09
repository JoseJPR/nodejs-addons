#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int firstInt = 15;
   int secondInt = 15;
   int increment = 0;
   int decrement = 0;

   increment = ++firstInt;
   decrement = --secondInt;

   cout << "Result INCREMENT -> " << increment << endl;
   cout << "Result DECREMENT -> " << decrement << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
