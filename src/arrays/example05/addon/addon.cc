#include <node.h>
#include <iostream>
#include <string>

using namespace v8;
using namespace std;

// Return array with undefined size.
string * getArray () {
   static string _array_string[] = {"Hello", "World"};
   return _array_string;
}

void Handler(const FunctionCallbackInfo<Value>& args) {
   string *_array_string;
   _array_string = getArray();
   cout << _array_string[0] << _array_string[1] << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
