#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int sum = 0;
   int limit = 2;
   while (sum <= limit) {
      sum++;
   }
   cout << "Bucle While Sum = " << sum << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
