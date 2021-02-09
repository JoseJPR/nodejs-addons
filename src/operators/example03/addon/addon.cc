#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void Handler(const FunctionCallbackInfo<Value>& args) {
   float firstFloat = 12.52;
   float secondFloat = 3.59;
   float result = 0;

   result = firstFloat / secondFloat;

   cout << "Result -> " << result << endl;

   cout.precision(2);

   cout << "Result -> " << result << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
