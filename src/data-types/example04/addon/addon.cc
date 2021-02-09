#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   bool _type_bool_1 = true;
   bool _type_bool_2 = false;

   cout << _type_bool_1 << endl;
   cout << _type_bool_2 << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
