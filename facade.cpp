#include <nan.h>
#include <stdio.h>
#include "Blockchain.h"

using namespace v8;


void Initialize(Local<Object> exports, Local<Object> module) {
    
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize);