#include <node.h>
#include <iostream>
#include <string>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   string _type_string_1 = "A";
   string _type_string_2 = "Hello World";

   cout << _type_string_1 << endl;
   cout << _type_string_2 << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
