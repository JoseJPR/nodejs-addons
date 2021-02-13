#include <node.h>
#include <iostream>
#include <array>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   string _array_string[] = {"Hello", "World", "from", "NodeJS"};
   cout << _array_string[0] << _array_string[1] << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
