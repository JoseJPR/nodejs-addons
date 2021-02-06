#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

void HelloWorld(const FunctionCallbackInfo<Value>& args) {
   cout << RED << "Hello, world RED!" << endl;
   cout << GREEN << "Hello, world GREEN!" << endl;
   cout << RED << "Hello, world RED!" << GREEN << "Hello, world GREEN!" << RESET << "Hello, world RESET!" << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "helloWorld", HelloWorld);
}

NODE_MODULE(addon, Initialize);
