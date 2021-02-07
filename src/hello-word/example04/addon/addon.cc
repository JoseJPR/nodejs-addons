#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void HelloWorld(const FunctionCallbackInfo<Value>& args) {
   // Return number of params
   args.GetReturnValue().Set(args.Length());
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "helloWorld", HelloWorld);
}

NODE_MODULE(addon, Initialize);
