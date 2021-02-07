#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void HelloWorld(const FunctionCallbackInfo<Value>& args) {
   cout << args.Length() << endl;
   cout << args[0]->IsNumber() << endl;
   cout << args[0]->IsString() << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "helloWorld", HelloWorld);
}

NODE_MODULE(addon, Initialize);
