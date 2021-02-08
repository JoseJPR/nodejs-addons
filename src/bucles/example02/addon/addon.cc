#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int n = 2;
   int sum = 0;
   for (int i = 0; i <= n; i++) {
      sum += i;
   }
   cout << "Bucle For Sum = " << sum << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
