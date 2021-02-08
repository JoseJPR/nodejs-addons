#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void HandlerA(const FunctionCallbackInfo<Value>& args) {
   cout << "Hi from handlerA" << endl;
}

void HandlerB(const FunctionCallbackInfo<Value>& args) {
   cout << "Hi from handlerB" << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handlerA", HandlerA);
   NODE_SET_METHOD(exports, "handlerB", HandlerB);
}

NODE_MODULE(addon, Initialize);
