#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

string InternalMethod(string text) {
   return "Hi from InternalMethod + " + text;
}

void HandlerA(const FunctionCallbackInfo<Value>& args) {
   cout << InternalMethod("Called from handlerA") << endl;
}

void HandlerB(const FunctionCallbackInfo<Value>& args) {
   cout << InternalMethod("Called from handlerB") << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handlerA", HandlerA);
   NODE_SET_METHOD(exports, "handlerB", HandlerB);
}

NODE_MODULE(addon, Initialize);
