#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   char _type_char = 'A';
   char _type_char_array[12] = "Hello World";

   cout << _type_char << endl;
   cout << _type_char_array << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
