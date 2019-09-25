#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_FIND_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_FIND_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

  const char* kBuiltinName_361(compiler::CodeAssemblerState* state_);
TNode<Object> FindAllElements_362(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_FIND_TQ_H_
