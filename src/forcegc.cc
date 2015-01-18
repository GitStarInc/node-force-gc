#include "node.h"
#include "nan.h"
using namespace v8;
using namespace node;

NAN_METHOD(Full) {
  NanScope();
  Isolate::GetCurrent()->RequestGarbageCollectionForTesting(Isolate::GarbageCollectionType::kFullGarbageCollection);
  NanReturnUndefined();
}

NAN_METHOD(Minor) {
  NanScope();
  Isolate::GetCurrent()->RequestGarbageCollectionForTesting(Isolate::GarbageCollectionType::kMinorGarbageCollection);
  NanReturnUndefined();
}

void init(Handle<Object> exports) {
  NanScope();
  NODE_SET_METHOD(exports, "full", Full);
  NODE_SET_METHOD(exports, "minor", Minor);
}

NODE_MODULE(forcegc, init);
