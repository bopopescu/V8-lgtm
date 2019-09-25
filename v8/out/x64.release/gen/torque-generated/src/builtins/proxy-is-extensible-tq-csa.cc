#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/src/builtins/arguments-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/bigint-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-search-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-split-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/intl-objects-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ProxyIsExtensible, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSProxy> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 13);
    CodeStubAssembler(state_).PerformStackCheck(TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 21);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp2);
    TNode<HeapObject>tmp3 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp2});
    TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10JSReceiver_142(state_, TNode<HeapObject>{tmp3}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp3);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp5;
    TNode<JSProxy> tmp6;
    TNode<HeapObject> tmp7;
    ca_.Bind(&block6, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp5, tmp6);
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<JSProxy> tmp9;
    TNode<HeapObject> tmp10;
    TNode<JSReceiver> tmp11;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 24);
    TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp12);
    TNode<HeapObject>tmp13 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp9, tmp12});
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 28);
    TNode<JSReceiver> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = GetMethod_247(state_, TNode<Context>{tmp8}, TNode<Object>{tmp11}, "isExtensible", &label0);
    ca_.Goto(&block9, tmp8, tmp9, tmp11, tmp13, tmp11, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp8, tmp9, tmp11, tmp13, tmp11);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp15;
    TNode<JSProxy> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<HeapObject> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block10, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp18);
  }

  if (block9.is_used()) {
    TNode<Context> tmp20;
    TNode<JSProxy> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<HeapObject> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<JSReceiver> tmp25;
    ca_.Bind(&block9, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block7, tmp20, tmp21, tmp22, tmp23, tmp25);
  }

  if (block8.is_used()) {
    TNode<Context> tmp26;
    TNode<JSProxy> tmp27;
    TNode<JSReceiver> tmp28;
    TNode<HeapObject> tmp29;
    ca_.Bind(&block8, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 29);
    ca_.Goto(&block4, tmp26, tmp27, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<JSProxy> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<HeapObject> tmp33;
    TNode<JSReceiver> tmp34;
    ca_.Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 28);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 33);
    TNode<Object> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).Call(TNode<Context>{tmp30}, TNode<JSReceiver>{tmp34}, TNode<Object>{tmp32}, TNode<Object>{tmp33});
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ToBoolean_242(state_, TNode<Object>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 36);
    TNode<Object> tmp37;
    USE(tmp37);
    tmp37 = ObjectIsExtensible_313(state_, TNode<Context>{tmp30}, TNode<Object>{tmp33});
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = ToBoolean_242(state_, TNode<Object>{tmp37});
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 40);
    TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).Word32NotEqual(TNode<BoolT>{tmp36}, TNode<BoolT>{tmp38});
    ca_.Branch(tmp39, &block11, &block12, tmp30, tmp31, tmp32, tmp33, tmp34, tmp36, tmp38);
  }

  if (block11.is_used()) {
    TNode<Context> tmp40;
    TNode<JSProxy> tmp41;
    TNode<JSReceiver> tmp42;
    TNode<HeapObject> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<BoolT> tmp45;
    TNode<BoolT> tmp46;
    ca_.Bind(&block11, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 43);
    TNode<Oddball> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp46});
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 41);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp40}, MessageTemplate::kProxyIsExtensibleInconsistent, TNode<Object>{tmp47});
  }

  if (block12.is_used()) {
    TNode<Context> tmp48;
    TNode<JSProxy> tmp49;
    TNode<JSReceiver> tmp50;
    TNode<HeapObject> tmp51;
    TNode<JSReceiver> tmp52;
    TNode<BoolT> tmp53;
    TNode<BoolT> tmp54;
    ca_.Bind(&block12, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 46);
    TNode<Oddball> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp53});
    CodeStubAssembler(state_).Return(tmp55);
  }

  if (block4.is_used()) {
    TNode<Context> tmp56;
    TNode<JSProxy> tmp57;
    TNode<Object> tmp58;
    ca_.Bind(&block4, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 50);
    TNode<Object> tmp59;
    USE(tmp59);
    tmp59 = ObjectIsExtensible_313(state_, TNode<Context>{tmp56}, TNode<Object>{tmp58});
    CodeStubAssembler(state_).Return(tmp59);
  }

  if (block2.is_used()) {
    TNode<Context> tmp60;
    TNode<JSProxy> tmp61;
    ca_.Bind(&block2, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/proxy-is-extensible.tq", 53);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp60}, MessageTemplate::kProxyRevoked, "isExtensible");
  }
}

}  // namespace internal
}  // namespace v8

