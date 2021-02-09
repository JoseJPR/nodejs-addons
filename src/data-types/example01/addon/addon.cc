#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   int _type_int = 15;
   float _type_float = 12.60;
   double _type_double = 16.2345678;

   cout << _type_int << endl;
   cout << _type_float << endl;
   cout << _type_double << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
