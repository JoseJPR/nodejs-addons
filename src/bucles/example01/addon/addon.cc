#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int i = 0 ;
   int n = 2;
   int sum = 0;
   while (i <= n) {
      sum += i;
      i++;
   }
   cout << "Bucle While Sum = " << sum << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
