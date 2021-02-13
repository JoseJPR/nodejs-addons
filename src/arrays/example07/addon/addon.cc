#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

// Return array with undefined size.
int * getArray () {
   static int _array_int[9];
   for (int i = 0; i < 10; i++) {
      _array_int[i] = i;
   }
   return _array_int;
}

void Handler(const FunctionCallbackInfo<Value>& args) {
   int *_array_int;
   _array_int = getArray();
   cout << (sizeof(_array_int)/sizeof(*_array_int)) << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "handler", Handler);
}

NODE_MODULE(addon, Initialize);
