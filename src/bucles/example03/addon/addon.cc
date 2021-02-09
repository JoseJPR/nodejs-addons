#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int limit = 2;
   int sum = 0;
   do {
      sum ++;
   }
   while(sum <= limit);
   cout << "Bucle For Sum = " << sum << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
