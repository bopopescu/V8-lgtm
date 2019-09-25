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

TNode<JSArray> HandleSimpleArgumentsSlice_38(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSArgumentsObjectWithLength> p_args, TNode<Smi> p_start, TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    TNode<NativeContext> tmp0;
    TNode<JSArgumentsObjectWithLength> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 11);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, FixedArray::kMaxRegularLength);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    TNode<NativeContext> tmp6;
    TNode<JSArgumentsObjectWithLength> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<NativeContext> tmp10;
    TNode<JSArgumentsObjectWithLength> tmp11;
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 13);
    TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp12}, TNode<Smi>{tmp13});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 15);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp15);
    TNode<FixedArrayBase>tmp16 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp15});
    TNode<FixedArray> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp16}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16);
    }
  }

  if (block6.is_used()) {
    TNode<NativeContext> tmp18;
    TNode<JSArgumentsObjectWithLength> tmp19;
    TNode<Smi> tmp20;
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    TNode<FixedArrayBase> tmp23;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<NativeContext> tmp24;
    TNode<JSArgumentsObjectWithLength> tmp25;
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    TNode<Smi> tmp28;
    TNode<FixedArrayBase> tmp29;
    TNode<FixedArray> tmp30;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 14);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 16);
    TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp31);
    TNode<Smi>tmp32 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp30, tmp31});
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).SmiAbove(TNode<Smi>{tmp28}, TNode<Smi>{tmp32});
    ca_.Branch(tmp33, &block7, &block8, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block7.is_used()) {
    TNode<NativeContext> tmp34;
    TNode<JSArgumentsObjectWithLength> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<Smi> tmp38;
    TNode<FixedArray> tmp39;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    TNode<NativeContext> tmp40;
    TNode<JSArgumentsObjectWithLength> tmp41;
    TNode<Smi> tmp42;
    TNode<Smi> tmp43;
    TNode<Smi> tmp44;
    TNode<FixedArray> tmp45;
    ca_.Bind(&block8, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 18);
    TNode<Map> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, TNode<NativeContext>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 20);
    TNode<JSArray> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, TNode<Map>{tmp46}, TNode<Smi>{tmp43}, TNode<Smi>{tmp43});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 19);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 22);
    TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp48);
    TNode<FixedArrayBase>tmp49 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp47, tmp48});
    TNode<FixedArray> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp49}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49);
    }
  }

  if (block10.is_used()) {
    TNode<NativeContext> tmp51;
    TNode<JSArgumentsObjectWithLength> tmp52;
    TNode<Smi> tmp53;
    TNode<Smi> tmp54;
    TNode<Smi> tmp55;
    TNode<FixedArray> tmp56;
    TNode<Map> tmp57;
    TNode<JSArray> tmp58;
    TNode<FixedArrayBase> tmp59;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    TNode<NativeContext> tmp60;
    TNode<JSArgumentsObjectWithLength> tmp61;
    TNode<Smi> tmp62;
    TNode<Smi> tmp63;
    TNode<Smi> tmp64;
    TNode<FixedArray> tmp65;
    TNode<Map> tmp66;
    TNode<JSArray> tmp67;
    TNode<FixedArrayBase> tmp68;
    TNode<FixedArray> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 24);
    TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp62});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 25);
    TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp63});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 23);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, TNode<FixedArrayBase>{tmp69}, TNode<IntPtrT>{tmp72}, TNode<FixedArrayBase>{tmp65}, TNode<IntPtrT>{tmp70}, TNode<IntPtrT>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 26);
    ca_.Goto(&block2, tmp60, tmp61, tmp62, tmp63, tmp67);
  }

  if (block2.is_used()) {
    TNode<NativeContext> tmp73;
    TNode<JSArgumentsObjectWithLength> tmp74;
    TNode<Smi> tmp75;
    TNode<Smi> tmp76;
    TNode<JSArray> tmp77;
    ca_.Bind(&block2, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 6);
    ca_.Goto(&block11, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    TNode<NativeContext> tmp78;
    TNode<JSArgumentsObjectWithLength> tmp79;
    TNode<Smi> tmp80;
    TNode<Smi> tmp81;
    TNode<JSArray> tmp82;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
  return TNode<JSArray>{tmp82};
}

TNode<JSArray> HandleFastAliasedSloppyArgumentsSlice_39(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSArgumentsObjectWithLength> p_args, TNode<Smi> p_start, TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    TNode<NativeContext> tmp0;
    TNode<JSArgumentsObjectWithLength> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 34);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, FixedArray::kMaxRegularLength);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    TNode<NativeContext> tmp6;
    TNode<JSArgumentsObjectWithLength> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<NativeContext> tmp10;
    TNode<JSArgumentsObjectWithLength> tmp11;
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 37);
    TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp14);
    TNode<FixedArrayBase>tmp15 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp14});
    TNode<FixedArray> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast25ATSloppyArgumentsElements_105(state_, TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15);
    }
  }

  if (block6.is_used()) {
    TNode<NativeContext> tmp17;
    TNode<JSArgumentsObjectWithLength> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    TNode<FixedArrayBase> tmp21;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<NativeContext> tmp22;
    TNode<JSArgumentsObjectWithLength> tmp23;
    TNode<Smi> tmp24;
    TNode<Smi> tmp25;
    TNode<FixedArrayBase> tmp26;
    TNode<FixedArray> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 36);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 38);
    TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp28);
    TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp27, tmp28});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 40);
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, SloppyArgumentsElements::kParameterMapStart);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp29}, TNode<Smi>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 39);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 44);
    TNode<Smi> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp24}, TNode<Smi>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 46);
    TNode<IntPtrT> tmp33 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp33);
    TNode<IntPtrT> tmp34 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp34);
    TNode<Smi>tmp35 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp27, tmp34});
    TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = Convert8ATintptr17ATconstexpr_int31_1438(state_, SloppyArgumentsElements::kArgumentsIndex);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp38;
    USE(tmp38);
    tmp38 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp37});
    TNode<UintPtrT> tmp39;
    USE(tmp39);
    tmp39 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp36});
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp38}, TNode<UintPtrT>{tmp39});
    ca_.Branch(tmp40, &block11, &block12, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp31, tmp32, tmp27, tmp33, tmp36, tmp37, tmp27, tmp33, tmp36, tmp37, tmp37);
  }

  if (block11.is_used()) {
    TNode<NativeContext> tmp41;
    TNode<JSArgumentsObjectWithLength> tmp42;
    TNode<Smi> tmp43;
    TNode<Smi> tmp44;
    TNode<FixedArray> tmp45;
    TNode<Smi> tmp46;
    TNode<Smi> tmp47;
    TNode<Smi> tmp48;
    TNode<FixedArray> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<HeapObject> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    ca_.Bind(&block11, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp58;
    USE(tmp58);
    tmp58 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp57}, TNode<IntPtrT>{tmp58});
    TNode<IntPtrT> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp54}, TNode<IntPtrT>{tmp59});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp61;
    USE(tmp61);
    TNode<IntPtrT> tmp62;
    USE(tmp62);
    std::tie(tmp61, tmp62) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp53}, TNode<IntPtrT>{tmp60}).Flatten();
    ca_.Goto(&block10, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp61, tmp62);
  }

  if (block12.is_used()) {
    TNode<NativeContext> tmp63;
    TNode<JSArgumentsObjectWithLength> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    TNode<FixedArray> tmp67;
    TNode<Smi> tmp68;
    TNode<Smi> tmp69;
    TNode<Smi> tmp70;
    TNode<FixedArray> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<IntPtrT> tmp73;
    TNode<IntPtrT> tmp74;
    TNode<HeapObject> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    TNode<IntPtrT> tmp79;
    ca_.Bind(&block12, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block9, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block10.is_used()) {
    TNode<NativeContext> tmp80;
    TNode<JSArgumentsObjectWithLength> tmp81;
    TNode<Smi> tmp82;
    TNode<Smi> tmp83;
    TNode<FixedArray> tmp84;
    TNode<Smi> tmp85;
    TNode<Smi> tmp86;
    TNode<Smi> tmp87;
    TNode<FixedArray> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<IntPtrT> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<HeapObject> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<IntPtrT> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<HeapObject> tmp97;
    TNode<IntPtrT> tmp98;
    ca_.Bind(&block10, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block8, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp97, tmp98);
  }

  if (block9.is_used()) {
    TNode<NativeContext> tmp99;
    TNode<JSArgumentsObjectWithLength> tmp100;
    TNode<Smi> tmp101;
    TNode<Smi> tmp102;
    TNode<FixedArray> tmp103;
    TNode<Smi> tmp104;
    TNode<Smi> tmp105;
    TNode<Smi> tmp106;
    TNode<FixedArray> tmp107;
    TNode<IntPtrT> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<IntPtrT> tmp110;
    ca_.Bind(&block9, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block8.is_used()) {
    TNode<NativeContext> tmp111;
    TNode<JSArgumentsObjectWithLength> tmp112;
    TNode<Smi> tmp113;
    TNode<Smi> tmp114;
    TNode<FixedArray> tmp115;
    TNode<Smi> tmp116;
    TNode<Smi> tmp117;
    TNode<Smi> tmp118;
    TNode<FixedArray> tmp119;
    TNode<IntPtrT> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<HeapObject> tmp123;
    TNode<IntPtrT> tmp124;
    ca_.Bind(&block8, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.Goto(&block7, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp123, tmp124);
  }

  if (block7.is_used()) {
    TNode<NativeContext> tmp125;
    TNode<JSArgumentsObjectWithLength> tmp126;
    TNode<Smi> tmp127;
    TNode<Smi> tmp128;
    TNode<FixedArray> tmp129;
    TNode<Smi> tmp130;
    TNode<Smi> tmp131;
    TNode<Smi> tmp132;
    TNode<FixedArray> tmp133;
    TNode<IntPtrT> tmp134;
    TNode<IntPtrT> tmp135;
    TNode<HeapObject> tmp136;
    TNode<IntPtrT> tmp137;
    ca_.Bind(&block7, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 46);
    TNode<Object>tmp138 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp136, tmp137});
    TNode<FixedArray> tmp139;
    USE(tmp139);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp139 = Cast10FixedArray_1456(state_, TNode<Context>{tmp125}, TNode<Object>{tmp138}, &label0);
    ca_.Goto(&block14, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp138, tmp139);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp138);
    }
  }

  if (block15.is_used()) {
    TNode<NativeContext> tmp140;
    TNode<JSArgumentsObjectWithLength> tmp141;
    TNode<Smi> tmp142;
    TNode<Smi> tmp143;
    TNode<FixedArray> tmp144;
    TNode<Smi> tmp145;
    TNode<Smi> tmp146;
    TNode<Smi> tmp147;
    TNode<Object> tmp148;
    ca_.Bind(&block15, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    TNode<NativeContext> tmp149;
    TNode<JSArgumentsObjectWithLength> tmp150;
    TNode<Smi> tmp151;
    TNode<Smi> tmp152;
    TNode<FixedArray> tmp153;
    TNode<Smi> tmp154;
    TNode<Smi> tmp155;
    TNode<Smi> tmp156;
    TNode<Object> tmp157;
    TNode<FixedArray> tmp158;
    ca_.Bind(&block14, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 48);
    TNode<IntPtrT> tmp159 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp159);
    TNode<Smi>tmp160 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp158, tmp159});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 49);
    TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).SmiAbove(TNode<Smi>{tmp156}, TNode<Smi>{tmp160});
    ca_.Branch(tmp161, &block16, &block17, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp158, tmp160);
  }

  if (block16.is_used()) {
    TNode<NativeContext> tmp162;
    TNode<JSArgumentsObjectWithLength> tmp163;
    TNode<Smi> tmp164;
    TNode<Smi> tmp165;
    TNode<FixedArray> tmp166;
    TNode<Smi> tmp167;
    TNode<Smi> tmp168;
    TNode<Smi> tmp169;
    TNode<FixedArray> tmp170;
    TNode<Smi> tmp171;
    ca_.Bind(&block16, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.Goto(&block1);
  }

  if (block17.is_used()) {
    TNode<NativeContext> tmp172;
    TNode<JSArgumentsObjectWithLength> tmp173;
    TNode<Smi> tmp174;
    TNode<Smi> tmp175;
    TNode<FixedArray> tmp176;
    TNode<Smi> tmp177;
    TNode<Smi> tmp178;
    TNode<Smi> tmp179;
    TNode<FixedArray> tmp180;
    TNode<Smi> tmp181;
    ca_.Bind(&block17, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 52);
    TNode<IntPtrT> tmp182 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp182);
    TNode<IntPtrT> tmp183 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp183);
    TNode<Smi>tmp184 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp176, tmp183});
    TNode<IntPtrT> tmp185;
    USE(tmp185);
    tmp185 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp184});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp186;
    USE(tmp186);
    tmp186 = Convert8ATintptr17ATconstexpr_int31_1438(state_, SloppyArgumentsElements::kContextIndex);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp187;
    USE(tmp187);
    tmp187 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp186});
    TNode<UintPtrT> tmp188;
    USE(tmp188);
    tmp188 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp185});
    TNode<BoolT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp187}, TNode<UintPtrT>{tmp188});
    ca_.Branch(tmp189, &block22, &block23, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp176, tmp182, tmp185, tmp186, tmp176, tmp182, tmp185, tmp186, tmp186);
  }

  if (block22.is_used()) {
    TNode<NativeContext> tmp190;
    TNode<JSArgumentsObjectWithLength> tmp191;
    TNode<Smi> tmp192;
    TNode<Smi> tmp193;
    TNode<FixedArray> tmp194;
    TNode<Smi> tmp195;
    TNode<Smi> tmp196;
    TNode<Smi> tmp197;
    TNode<FixedArray> tmp198;
    TNode<Smi> tmp199;
    TNode<FixedArray> tmp200;
    TNode<IntPtrT> tmp201;
    TNode<IntPtrT> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<HeapObject> tmp204;
    TNode<IntPtrT> tmp205;
    TNode<IntPtrT> tmp206;
    TNode<IntPtrT> tmp207;
    TNode<IntPtrT> tmp208;
    ca_.Bind(&block22, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp209;
    USE(tmp209);
    tmp209 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp210;
    USE(tmp210);
    tmp210 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp208}, TNode<IntPtrT>{tmp209});
    TNode<IntPtrT> tmp211;
    USE(tmp211);
    tmp211 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp205}, TNode<IntPtrT>{tmp210});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp212;
    USE(tmp212);
    TNode<IntPtrT> tmp213;
    USE(tmp213);
    std::tie(tmp212, tmp213) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp204}, TNode<IntPtrT>{tmp211}).Flatten();
    ca_.Goto(&block21, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp212, tmp213);
  }

  if (block23.is_used()) {
    TNode<NativeContext> tmp214;
    TNode<JSArgumentsObjectWithLength> tmp215;
    TNode<Smi> tmp216;
    TNode<Smi> tmp217;
    TNode<FixedArray> tmp218;
    TNode<Smi> tmp219;
    TNode<Smi> tmp220;
    TNode<Smi> tmp221;
    TNode<FixedArray> tmp222;
    TNode<Smi> tmp223;
    TNode<FixedArray> tmp224;
    TNode<IntPtrT> tmp225;
    TNode<IntPtrT> tmp226;
    TNode<IntPtrT> tmp227;
    TNode<HeapObject> tmp228;
    TNode<IntPtrT> tmp229;
    TNode<IntPtrT> tmp230;
    TNode<IntPtrT> tmp231;
    TNode<IntPtrT> tmp232;
    ca_.Bind(&block23, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block20, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block21.is_used()) {
    TNode<NativeContext> tmp233;
    TNode<JSArgumentsObjectWithLength> tmp234;
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    TNode<FixedArray> tmp237;
    TNode<Smi> tmp238;
    TNode<Smi> tmp239;
    TNode<Smi> tmp240;
    TNode<FixedArray> tmp241;
    TNode<Smi> tmp242;
    TNode<FixedArray> tmp243;
    TNode<IntPtrT> tmp244;
    TNode<IntPtrT> tmp245;
    TNode<IntPtrT> tmp246;
    TNode<HeapObject> tmp247;
    TNode<IntPtrT> tmp248;
    TNode<IntPtrT> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<IntPtrT> tmp251;
    TNode<HeapObject> tmp252;
    TNode<IntPtrT> tmp253;
    ca_.Bind(&block21, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block19, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp252, tmp253);
  }

  if (block20.is_used()) {
    TNode<NativeContext> tmp254;
    TNode<JSArgumentsObjectWithLength> tmp255;
    TNode<Smi> tmp256;
    TNode<Smi> tmp257;
    TNode<FixedArray> tmp258;
    TNode<Smi> tmp259;
    TNode<Smi> tmp260;
    TNode<Smi> tmp261;
    TNode<FixedArray> tmp262;
    TNode<Smi> tmp263;
    TNode<FixedArray> tmp264;
    TNode<IntPtrT> tmp265;
    TNode<IntPtrT> tmp266;
    TNode<IntPtrT> tmp267;
    ca_.Bind(&block20, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block19.is_used()) {
    TNode<NativeContext> tmp268;
    TNode<JSArgumentsObjectWithLength> tmp269;
    TNode<Smi> tmp270;
    TNode<Smi> tmp271;
    TNode<FixedArray> tmp272;
    TNode<Smi> tmp273;
    TNode<Smi> tmp274;
    TNode<Smi> tmp275;
    TNode<FixedArray> tmp276;
    TNode<Smi> tmp277;
    TNode<FixedArray> tmp278;
    TNode<IntPtrT> tmp279;
    TNode<IntPtrT> tmp280;
    TNode<IntPtrT> tmp281;
    TNode<HeapObject> tmp282;
    TNode<IntPtrT> tmp283;
    ca_.Bind(&block19, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283);
    ca_.Goto(&block18, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp282, tmp283);
  }

  if (block18.is_used()) {
    TNode<NativeContext> tmp284;
    TNode<JSArgumentsObjectWithLength> tmp285;
    TNode<Smi> tmp286;
    TNode<Smi> tmp287;
    TNode<FixedArray> tmp288;
    TNode<Smi> tmp289;
    TNode<Smi> tmp290;
    TNode<Smi> tmp291;
    TNode<FixedArray> tmp292;
    TNode<Smi> tmp293;
    TNode<FixedArray> tmp294;
    TNode<IntPtrT> tmp295;
    TNode<IntPtrT> tmp296;
    TNode<HeapObject> tmp297;
    TNode<IntPtrT> tmp298;
    ca_.Bind(&block18, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 52);
    TNode<Object>tmp299 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp297, tmp298});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 51);
    TNode<Context> tmp300;
    USE(tmp300);
    tmp300 = UnsafeCast7Context_1457(state_, TNode<Context>{tmp284}, TNode<Object>{tmp299});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 54);
    TNode<Map> tmp301;
    USE(tmp301);
    tmp301 = CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, TNode<NativeContext>{tmp284});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 56);
    TNode<JSArray> tmp302;
    USE(tmp302);
    tmp302 = CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, TNode<Map>{tmp301}, TNode<Smi>{tmp287}, TNode<Smi>{tmp287});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 55);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 58);
    TNode<Smi> tmp303;
    USE(tmp303);
    tmp303 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 59);
    TNode<IntPtrT> tmp304 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp304);
    TNode<FixedArrayBase>tmp305 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp302, tmp304});
    TNode<FixedArray> tmp306;
    USE(tmp306);
    tmp306 = UnsafeCast10FixedArray_1432(state_, TNode<Context>{tmp284}, TNode<Object>{tmp305});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 60);
    TNode<Smi> tmp307;
    USE(tmp307);
    tmp307 = CodeStubAssembler(state_).SmiMin(TNode<Smi>{tmp290}, TNode<Smi>{tmp291});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 63);
    ca_.Goto(&block27, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp300, tmp301, tmp302, tmp303, tmp306, tmp307, tmp286);
  }

  if (block27.is_used()) {
    TNode<NativeContext> tmp308;
    TNode<JSArgumentsObjectWithLength> tmp309;
    TNode<Smi> tmp310;
    TNode<Smi> tmp311;
    TNode<FixedArray> tmp312;
    TNode<Smi> tmp313;
    TNode<Smi> tmp314;
    TNode<Smi> tmp315;
    TNode<FixedArray> tmp316;
    TNode<Smi> tmp317;
    TNode<Context> tmp318;
    TNode<Map> tmp319;
    TNode<JSArray> tmp320;
    TNode<Smi> tmp321;
    TNode<FixedArray> tmp322;
    TNode<Smi> tmp323;
    TNode<Smi> tmp324;
    ca_.Bind(&block27, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324);
    TNode<BoolT> tmp325;
    USE(tmp325);
    tmp325 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp324}, TNode<Smi>{tmp323});
    ca_.Branch(tmp325, &block25, &block26, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324);
  }

  if (block25.is_used()) {
    TNode<NativeContext> tmp326;
    TNode<JSArgumentsObjectWithLength> tmp327;
    TNode<Smi> tmp328;
    TNode<Smi> tmp329;
    TNode<FixedArray> tmp330;
    TNode<Smi> tmp331;
    TNode<Smi> tmp332;
    TNode<Smi> tmp333;
    TNode<FixedArray> tmp334;
    TNode<Smi> tmp335;
    TNode<Context> tmp336;
    TNode<Map> tmp337;
    TNode<JSArray> tmp338;
    TNode<Smi> tmp339;
    TNode<FixedArray> tmp340;
    TNode<Smi> tmp341;
    TNode<Smi> tmp342;
    ca_.Bind(&block25, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 65);
    TNode<IntPtrT> tmp343 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp343);
    TNode<IntPtrT> tmp344 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp344);
    TNode<Smi>tmp345 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp330, tmp344});
    TNode<IntPtrT> tmp346;
    USE(tmp346);
    tmp346 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp345});
    TNode<Smi> tmp347;
    USE(tmp347);
    tmp347 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, SloppyArgumentsElements::kParameterMapStart);
    TNode<Smi> tmp348;
    USE(tmp348);
    tmp348 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp342}, TNode<Smi>{tmp347});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp349;
    USE(tmp349);
    tmp349 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp348});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp350;
    USE(tmp350);
    tmp350 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp349});
    TNode<UintPtrT> tmp351;
    USE(tmp351);
    tmp351 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp346});
    TNode<BoolT> tmp352;
    USE(tmp352);
    tmp352 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp350}, TNode<UintPtrT>{tmp351});
    ca_.Branch(tmp352, &block33, &block34, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp330, tmp343, tmp346, tmp348, tmp348, tmp349, tmp330, tmp343, tmp346, tmp349, tmp349);
  }

  if (block33.is_used()) {
    TNode<NativeContext> tmp353;
    TNode<JSArgumentsObjectWithLength> tmp354;
    TNode<Smi> tmp355;
    TNode<Smi> tmp356;
    TNode<FixedArray> tmp357;
    TNode<Smi> tmp358;
    TNode<Smi> tmp359;
    TNode<Smi> tmp360;
    TNode<FixedArray> tmp361;
    TNode<Smi> tmp362;
    TNode<Context> tmp363;
    TNode<Map> tmp364;
    TNode<JSArray> tmp365;
    TNode<Smi> tmp366;
    TNode<FixedArray> tmp367;
    TNode<Smi> tmp368;
    TNode<Smi> tmp369;
    TNode<FixedArray> tmp370;
    TNode<IntPtrT> tmp371;
    TNode<IntPtrT> tmp372;
    TNode<Smi> tmp373;
    TNode<Smi> tmp374;
    TNode<IntPtrT> tmp375;
    TNode<HeapObject> tmp376;
    TNode<IntPtrT> tmp377;
    TNode<IntPtrT> tmp378;
    TNode<IntPtrT> tmp379;
    TNode<IntPtrT> tmp380;
    ca_.Bind(&block33, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp381;
    USE(tmp381);
    tmp381 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp382;
    USE(tmp382);
    tmp382 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp380}, TNode<IntPtrT>{tmp381});
    TNode<IntPtrT> tmp383;
    USE(tmp383);
    tmp383 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp377}, TNode<IntPtrT>{tmp382});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp384;
    USE(tmp384);
    TNode<IntPtrT> tmp385;
    USE(tmp385);
    std::tie(tmp384, tmp385) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp376}, TNode<IntPtrT>{tmp383}).Flatten();
    ca_.Goto(&block32, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp384, tmp385);
  }

  if (block34.is_used()) {
    TNode<NativeContext> tmp386;
    TNode<JSArgumentsObjectWithLength> tmp387;
    TNode<Smi> tmp388;
    TNode<Smi> tmp389;
    TNode<FixedArray> tmp390;
    TNode<Smi> tmp391;
    TNode<Smi> tmp392;
    TNode<Smi> tmp393;
    TNode<FixedArray> tmp394;
    TNode<Smi> tmp395;
    TNode<Context> tmp396;
    TNode<Map> tmp397;
    TNode<JSArray> tmp398;
    TNode<Smi> tmp399;
    TNode<FixedArray> tmp400;
    TNode<Smi> tmp401;
    TNode<Smi> tmp402;
    TNode<FixedArray> tmp403;
    TNode<IntPtrT> tmp404;
    TNode<IntPtrT> tmp405;
    TNode<Smi> tmp406;
    TNode<Smi> tmp407;
    TNode<IntPtrT> tmp408;
    TNode<HeapObject> tmp409;
    TNode<IntPtrT> tmp410;
    TNode<IntPtrT> tmp411;
    TNode<IntPtrT> tmp412;
    TNode<IntPtrT> tmp413;
    ca_.Bind(&block34, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block31, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408);
  }

  if (block32.is_used()) {
    TNode<NativeContext> tmp414;
    TNode<JSArgumentsObjectWithLength> tmp415;
    TNode<Smi> tmp416;
    TNode<Smi> tmp417;
    TNode<FixedArray> tmp418;
    TNode<Smi> tmp419;
    TNode<Smi> tmp420;
    TNode<Smi> tmp421;
    TNode<FixedArray> tmp422;
    TNode<Smi> tmp423;
    TNode<Context> tmp424;
    TNode<Map> tmp425;
    TNode<JSArray> tmp426;
    TNode<Smi> tmp427;
    TNode<FixedArray> tmp428;
    TNode<Smi> tmp429;
    TNode<Smi> tmp430;
    TNode<FixedArray> tmp431;
    TNode<IntPtrT> tmp432;
    TNode<IntPtrT> tmp433;
    TNode<Smi> tmp434;
    TNode<Smi> tmp435;
    TNode<IntPtrT> tmp436;
    TNode<HeapObject> tmp437;
    TNode<IntPtrT> tmp438;
    TNode<IntPtrT> tmp439;
    TNode<IntPtrT> tmp440;
    TNode<IntPtrT> tmp441;
    TNode<HeapObject> tmp442;
    TNode<IntPtrT> tmp443;
    ca_.Bind(&block32, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block30, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp442, tmp443);
  }

  if (block31.is_used()) {
    TNode<NativeContext> tmp444;
    TNode<JSArgumentsObjectWithLength> tmp445;
    TNode<Smi> tmp446;
    TNode<Smi> tmp447;
    TNode<FixedArray> tmp448;
    TNode<Smi> tmp449;
    TNode<Smi> tmp450;
    TNode<Smi> tmp451;
    TNode<FixedArray> tmp452;
    TNode<Smi> tmp453;
    TNode<Context> tmp454;
    TNode<Map> tmp455;
    TNode<JSArray> tmp456;
    TNode<Smi> tmp457;
    TNode<FixedArray> tmp458;
    TNode<Smi> tmp459;
    TNode<Smi> tmp460;
    TNode<FixedArray> tmp461;
    TNode<IntPtrT> tmp462;
    TNode<IntPtrT> tmp463;
    TNode<Smi> tmp464;
    TNode<Smi> tmp465;
    TNode<IntPtrT> tmp466;
    ca_.Bind(&block31, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block30.is_used()) {
    TNode<NativeContext> tmp467;
    TNode<JSArgumentsObjectWithLength> tmp468;
    TNode<Smi> tmp469;
    TNode<Smi> tmp470;
    TNode<FixedArray> tmp471;
    TNode<Smi> tmp472;
    TNode<Smi> tmp473;
    TNode<Smi> tmp474;
    TNode<FixedArray> tmp475;
    TNode<Smi> tmp476;
    TNode<Context> tmp477;
    TNode<Map> tmp478;
    TNode<JSArray> tmp479;
    TNode<Smi> tmp480;
    TNode<FixedArray> tmp481;
    TNode<Smi> tmp482;
    TNode<Smi> tmp483;
    TNode<FixedArray> tmp484;
    TNode<IntPtrT> tmp485;
    TNode<IntPtrT> tmp486;
    TNode<Smi> tmp487;
    TNode<Smi> tmp488;
    TNode<IntPtrT> tmp489;
    TNode<HeapObject> tmp490;
    TNode<IntPtrT> tmp491;
    ca_.Bind(&block30, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.Goto(&block29, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp490, tmp491);
  }

  if (block29.is_used()) {
    TNode<NativeContext> tmp492;
    TNode<JSArgumentsObjectWithLength> tmp493;
    TNode<Smi> tmp494;
    TNode<Smi> tmp495;
    TNode<FixedArray> tmp496;
    TNode<Smi> tmp497;
    TNode<Smi> tmp498;
    TNode<Smi> tmp499;
    TNode<FixedArray> tmp500;
    TNode<Smi> tmp501;
    TNode<Context> tmp502;
    TNode<Map> tmp503;
    TNode<JSArray> tmp504;
    TNode<Smi> tmp505;
    TNode<FixedArray> tmp506;
    TNode<Smi> tmp507;
    TNode<Smi> tmp508;
    TNode<FixedArray> tmp509;
    TNode<IntPtrT> tmp510;
    TNode<IntPtrT> tmp511;
    TNode<Smi> tmp512;
    TNode<Smi> tmp513;
    TNode<HeapObject> tmp514;
    TNode<IntPtrT> tmp515;
    ca_.Bind(&block29, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 65);
    TNode<Object>tmp516 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp514, tmp515});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 64);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 67);
    TNode<Oddball> tmp517;
    USE(tmp517);
    tmp517 = TheHole_62(state_);
    TNode<BoolT> tmp518;
    USE(tmp518);
    tmp518 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp516}, TNode<HeapObject>{tmp517});
    ca_.Branch(tmp518, &block36, &block37, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp516);
  }

  if (block36.is_used()) {
    TNode<NativeContext> tmp519;
    TNode<JSArgumentsObjectWithLength> tmp520;
    TNode<Smi> tmp521;
    TNode<Smi> tmp522;
    TNode<FixedArray> tmp523;
    TNode<Smi> tmp524;
    TNode<Smi> tmp525;
    TNode<Smi> tmp526;
    TNode<FixedArray> tmp527;
    TNode<Smi> tmp528;
    TNode<Context> tmp529;
    TNode<Map> tmp530;
    TNode<JSArray> tmp531;
    TNode<Smi> tmp532;
    TNode<FixedArray> tmp533;
    TNode<Smi> tmp534;
    TNode<Smi> tmp535;
    TNode<Object> tmp536;
    ca_.Bind(&block36, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536);
    TNode<Smi> tmp537;
    USE(tmp537);
    tmp537 = UnsafeCast5ATSmi_1433(state_, TNode<Context>{tmp519}, TNode<Object>{tmp536});
    TNode<Object> tmp538;
    USE(tmp538);
    tmp538 = CodeStubAssembler(state_).LoadContextElement(TNode<Context>{tmp529}, TNode<Smi>{tmp537});
    ca_.Goto(&block39, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp538);
  }

  if (block37.is_used()) {
    TNode<NativeContext> tmp539;
    TNode<JSArgumentsObjectWithLength> tmp540;
    TNode<Smi> tmp541;
    TNode<Smi> tmp542;
    TNode<FixedArray> tmp543;
    TNode<Smi> tmp544;
    TNode<Smi> tmp545;
    TNode<Smi> tmp546;
    TNode<FixedArray> tmp547;
    TNode<Smi> tmp548;
    TNode<Context> tmp549;
    TNode<Map> tmp550;
    TNode<JSArray> tmp551;
    TNode<Smi> tmp552;
    TNode<FixedArray> tmp553;
    TNode<Smi> tmp554;
    TNode<Smi> tmp555;
    TNode<Object> tmp556;
    ca_.Bind(&block37, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 68);
    TNode<IntPtrT> tmp557 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp557);
    TNode<IntPtrT> tmp558 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp558);
    TNode<Smi>tmp559 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp547, tmp558});
    TNode<IntPtrT> tmp560;
    USE(tmp560);
    tmp560 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp559});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp561;
    USE(tmp561);
    tmp561 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp555});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp562;
    USE(tmp562);
    tmp562 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp561});
    TNode<UintPtrT> tmp563;
    USE(tmp563);
    tmp563 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp560});
    TNode<BoolT> tmp564;
    USE(tmp564);
    tmp564 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp562}, TNode<UintPtrT>{tmp563});
    ca_.Branch(tmp564, &block44, &block45, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp547, tmp557, tmp560, tmp555, tmp555, tmp561, tmp547, tmp557, tmp560, tmp561, tmp561);
  }

  if (block44.is_used()) {
    TNode<NativeContext> tmp565;
    TNode<JSArgumentsObjectWithLength> tmp566;
    TNode<Smi> tmp567;
    TNode<Smi> tmp568;
    TNode<FixedArray> tmp569;
    TNode<Smi> tmp570;
    TNode<Smi> tmp571;
    TNode<Smi> tmp572;
    TNode<FixedArray> tmp573;
    TNode<Smi> tmp574;
    TNode<Context> tmp575;
    TNode<Map> tmp576;
    TNode<JSArray> tmp577;
    TNode<Smi> tmp578;
    TNode<FixedArray> tmp579;
    TNode<Smi> tmp580;
    TNode<Smi> tmp581;
    TNode<Object> tmp582;
    TNode<FixedArray> tmp583;
    TNode<IntPtrT> tmp584;
    TNode<IntPtrT> tmp585;
    TNode<Smi> tmp586;
    TNode<Smi> tmp587;
    TNode<IntPtrT> tmp588;
    TNode<HeapObject> tmp589;
    TNode<IntPtrT> tmp590;
    TNode<IntPtrT> tmp591;
    TNode<IntPtrT> tmp592;
    TNode<IntPtrT> tmp593;
    ca_.Bind(&block44, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp594;
    USE(tmp594);
    tmp594 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp595;
    USE(tmp595);
    tmp595 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp593}, TNode<IntPtrT>{tmp594});
    TNode<IntPtrT> tmp596;
    USE(tmp596);
    tmp596 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp590}, TNode<IntPtrT>{tmp595});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp597;
    USE(tmp597);
    TNode<IntPtrT> tmp598;
    USE(tmp598);
    std::tie(tmp597, tmp598) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp589}, TNode<IntPtrT>{tmp596}).Flatten();
    ca_.Goto(&block43, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588, tmp589, tmp590, tmp591, tmp592, tmp593, tmp597, tmp598);
  }

  if (block45.is_used()) {
    TNode<NativeContext> tmp599;
    TNode<JSArgumentsObjectWithLength> tmp600;
    TNode<Smi> tmp601;
    TNode<Smi> tmp602;
    TNode<FixedArray> tmp603;
    TNode<Smi> tmp604;
    TNode<Smi> tmp605;
    TNode<Smi> tmp606;
    TNode<FixedArray> tmp607;
    TNode<Smi> tmp608;
    TNode<Context> tmp609;
    TNode<Map> tmp610;
    TNode<JSArray> tmp611;
    TNode<Smi> tmp612;
    TNode<FixedArray> tmp613;
    TNode<Smi> tmp614;
    TNode<Smi> tmp615;
    TNode<Object> tmp616;
    TNode<FixedArray> tmp617;
    TNode<IntPtrT> tmp618;
    TNode<IntPtrT> tmp619;
    TNode<Smi> tmp620;
    TNode<Smi> tmp621;
    TNode<IntPtrT> tmp622;
    TNode<HeapObject> tmp623;
    TNode<IntPtrT> tmp624;
    TNode<IntPtrT> tmp625;
    TNode<IntPtrT> tmp626;
    TNode<IntPtrT> tmp627;
    ca_.Bind(&block45, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block42, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622);
  }

  if (block43.is_used()) {
    TNode<NativeContext> tmp628;
    TNode<JSArgumentsObjectWithLength> tmp629;
    TNode<Smi> tmp630;
    TNode<Smi> tmp631;
    TNode<FixedArray> tmp632;
    TNode<Smi> tmp633;
    TNode<Smi> tmp634;
    TNode<Smi> tmp635;
    TNode<FixedArray> tmp636;
    TNode<Smi> tmp637;
    TNode<Context> tmp638;
    TNode<Map> tmp639;
    TNode<JSArray> tmp640;
    TNode<Smi> tmp641;
    TNode<FixedArray> tmp642;
    TNode<Smi> tmp643;
    TNode<Smi> tmp644;
    TNode<Object> tmp645;
    TNode<FixedArray> tmp646;
    TNode<IntPtrT> tmp647;
    TNode<IntPtrT> tmp648;
    TNode<Smi> tmp649;
    TNode<Smi> tmp650;
    TNode<IntPtrT> tmp651;
    TNode<HeapObject> tmp652;
    TNode<IntPtrT> tmp653;
    TNode<IntPtrT> tmp654;
    TNode<IntPtrT> tmp655;
    TNode<IntPtrT> tmp656;
    TNode<HeapObject> tmp657;
    TNode<IntPtrT> tmp658;
    ca_.Bind(&block43, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block41, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp657, tmp658);
  }

  if (block42.is_used()) {
    TNode<NativeContext> tmp659;
    TNode<JSArgumentsObjectWithLength> tmp660;
    TNode<Smi> tmp661;
    TNode<Smi> tmp662;
    TNode<FixedArray> tmp663;
    TNode<Smi> tmp664;
    TNode<Smi> tmp665;
    TNode<Smi> tmp666;
    TNode<FixedArray> tmp667;
    TNode<Smi> tmp668;
    TNode<Context> tmp669;
    TNode<Map> tmp670;
    TNode<JSArray> tmp671;
    TNode<Smi> tmp672;
    TNode<FixedArray> tmp673;
    TNode<Smi> tmp674;
    TNode<Smi> tmp675;
    TNode<Object> tmp676;
    TNode<FixedArray> tmp677;
    TNode<IntPtrT> tmp678;
    TNode<IntPtrT> tmp679;
    TNode<Smi> tmp680;
    TNode<Smi> tmp681;
    TNode<IntPtrT> tmp682;
    ca_.Bind(&block42, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block41.is_used()) {
    TNode<NativeContext> tmp683;
    TNode<JSArgumentsObjectWithLength> tmp684;
    TNode<Smi> tmp685;
    TNode<Smi> tmp686;
    TNode<FixedArray> tmp687;
    TNode<Smi> tmp688;
    TNode<Smi> tmp689;
    TNode<Smi> tmp690;
    TNode<FixedArray> tmp691;
    TNode<Smi> tmp692;
    TNode<Context> tmp693;
    TNode<Map> tmp694;
    TNode<JSArray> tmp695;
    TNode<Smi> tmp696;
    TNode<FixedArray> tmp697;
    TNode<Smi> tmp698;
    TNode<Smi> tmp699;
    TNode<Object> tmp700;
    TNode<FixedArray> tmp701;
    TNode<IntPtrT> tmp702;
    TNode<IntPtrT> tmp703;
    TNode<Smi> tmp704;
    TNode<Smi> tmp705;
    TNode<IntPtrT> tmp706;
    TNode<HeapObject> tmp707;
    TNode<IntPtrT> tmp708;
    ca_.Bind(&block41, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707, &tmp708);
    ca_.Goto(&block40, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704, tmp705, tmp707, tmp708);
  }

  if (block40.is_used()) {
    TNode<NativeContext> tmp709;
    TNode<JSArgumentsObjectWithLength> tmp710;
    TNode<Smi> tmp711;
    TNode<Smi> tmp712;
    TNode<FixedArray> tmp713;
    TNode<Smi> tmp714;
    TNode<Smi> tmp715;
    TNode<Smi> tmp716;
    TNode<FixedArray> tmp717;
    TNode<Smi> tmp718;
    TNode<Context> tmp719;
    TNode<Map> tmp720;
    TNode<JSArray> tmp721;
    TNode<Smi> tmp722;
    TNode<FixedArray> tmp723;
    TNode<Smi> tmp724;
    TNode<Smi> tmp725;
    TNode<Object> tmp726;
    TNode<FixedArray> tmp727;
    TNode<IntPtrT> tmp728;
    TNode<IntPtrT> tmp729;
    TNode<Smi> tmp730;
    TNode<Smi> tmp731;
    TNode<HeapObject> tmp732;
    TNode<IntPtrT> tmp733;
    ca_.Bind(&block40, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 68);
    TNode<Object>tmp734 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp732, tmp733});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 67);
    ca_.Goto(&block38, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723, tmp724, tmp725, tmp726, tmp734);
  }

  if (block39.is_used()) {
    TNode<NativeContext> tmp735;
    TNode<JSArgumentsObjectWithLength> tmp736;
    TNode<Smi> tmp737;
    TNode<Smi> tmp738;
    TNode<FixedArray> tmp739;
    TNode<Smi> tmp740;
    TNode<Smi> tmp741;
    TNode<Smi> tmp742;
    TNode<FixedArray> tmp743;
    TNode<Smi> tmp744;
    TNode<Context> tmp745;
    TNode<Map> tmp746;
    TNode<JSArray> tmp747;
    TNode<Smi> tmp748;
    TNode<FixedArray> tmp749;
    TNode<Smi> tmp750;
    TNode<Smi> tmp751;
    TNode<Object> tmp752;
    TNode<Object> tmp753;
    ca_.Bind(&block39, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753);
    ca_.Goto(&block38, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753);
  }

  if (block38.is_used()) {
    TNode<NativeContext> tmp754;
    TNode<JSArgumentsObjectWithLength> tmp755;
    TNode<Smi> tmp756;
    TNode<Smi> tmp757;
    TNode<FixedArray> tmp758;
    TNode<Smi> tmp759;
    TNode<Smi> tmp760;
    TNode<Smi> tmp761;
    TNode<FixedArray> tmp762;
    TNode<Smi> tmp763;
    TNode<Context> tmp764;
    TNode<Map> tmp765;
    TNode<JSArray> tmp766;
    TNode<Smi> tmp767;
    TNode<FixedArray> tmp768;
    TNode<Smi> tmp769;
    TNode<Smi> tmp770;
    TNode<Object> tmp771;
    TNode<Object> tmp772;
    ca_.Bind(&block38, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 66);
    TNode<Object> tmp773;
    USE(tmp773);
    tmp773 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1435(state_, TNode<Context>{tmp754}, TNode<Object>{tmp772});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 74);
    TNode<Smi> tmp774;
    USE(tmp774);
    tmp774 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp775;
    USE(tmp775);
    tmp775 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp767}, TNode<Smi>{tmp774});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 73);
    CodeStubAssembler(state_).StoreFixedArrayElement(TNode<FixedArray>{tmp768}, TNode<Smi>{tmp767}, TNode<Object>{tmp773}, UNSAFE_SKIP_WRITE_BARRIER);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 63);
    ca_.Goto(&block28, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp775, tmp768, tmp769, tmp770);
  }

  if (block28.is_used()) {
    TNode<NativeContext> tmp776;
    TNode<JSArgumentsObjectWithLength> tmp777;
    TNode<Smi> tmp778;
    TNode<Smi> tmp779;
    TNode<FixedArray> tmp780;
    TNode<Smi> tmp781;
    TNode<Smi> tmp782;
    TNode<Smi> tmp783;
    TNode<FixedArray> tmp784;
    TNode<Smi> tmp785;
    TNode<Context> tmp786;
    TNode<Map> tmp787;
    TNode<JSArray> tmp788;
    TNode<Smi> tmp789;
    TNode<FixedArray> tmp790;
    TNode<Smi> tmp791;
    TNode<Smi> tmp792;
    ca_.Bind(&block28, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792);
    TNode<Smi> tmp793;
    USE(tmp793);
    tmp793 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp794;
    USE(tmp794);
    tmp794 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp792}, TNode<Smi>{tmp793});
    ca_.Goto(&block27, tmp776, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp794);
  }

  if (block26.is_used()) {
    TNode<NativeContext> tmp795;
    TNode<JSArgumentsObjectWithLength> tmp796;
    TNode<Smi> tmp797;
    TNode<Smi> tmp798;
    TNode<FixedArray> tmp799;
    TNode<Smi> tmp800;
    TNode<Smi> tmp801;
    TNode<Smi> tmp802;
    TNode<FixedArray> tmp803;
    TNode<Smi> tmp804;
    TNode<Context> tmp805;
    TNode<Map> tmp806;
    TNode<JSArray> tmp807;
    TNode<Smi> tmp808;
    TNode<FixedArray> tmp809;
    TNode<Smi> tmp810;
    TNode<Smi> tmp811;
    ca_.Bind(&block26, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 79);
    TNode<Smi> tmp812;
    USE(tmp812);
    tmp812 = CodeStubAssembler(state_).SmiMax(TNode<Smi>{tmp801}, TNode<Smi>{tmp797});
    TNode<Smi> tmp813;
    USE(tmp813);
    tmp813 = CodeStubAssembler(state_).SmiMin(TNode<Smi>{tmp812}, TNode<Smi>{tmp802});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 80);
    TNode<Smi> tmp814;
    USE(tmp814);
    tmp814 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp802}, TNode<Smi>{tmp813});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 82);
    TNode<IntPtrT> tmp815;
    USE(tmp815);
    tmp815 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp808});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 83);
    TNode<IntPtrT> tmp816;
    USE(tmp816);
    tmp816 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp813});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 84);
    TNode<IntPtrT> tmp817;
    USE(tmp817);
    tmp817 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp814});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 81);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, TNode<FixedArrayBase>{tmp809}, TNode<IntPtrT>{tmp815}, TNode<FixedArrayBase>{tmp803}, TNode<IntPtrT>{tmp816}, TNode<IntPtrT>{tmp817});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 85);
    ca_.Goto(&block2, tmp795, tmp796, tmp797, tmp798, tmp807);
  }

  if (block2.is_used()) {
    TNode<NativeContext> tmp818;
    TNode<JSArgumentsObjectWithLength> tmp819;
    TNode<Smi> tmp820;
    TNode<Smi> tmp821;
    TNode<JSArray> tmp822;
    ca_.Bind(&block2, &tmp818, &tmp819, &tmp820, &tmp821, &tmp822);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 29);
    ca_.Goto(&block47, tmp818, tmp819, tmp820, tmp821, tmp822);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    TNode<NativeContext> tmp823;
    TNode<JSArgumentsObjectWithLength> tmp824;
    TNode<Smi> tmp825;
    TNode<Smi> tmp826;
    TNode<JSArray> tmp827;
    ca_.Bind(&block47, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827);
  return TNode<JSArray>{tmp827};
}

TNode<JSArray> HandleFastSlice_40(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p_o, TNode<Number> p_startNumber, TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object, JSArgumentsObjectWithLength> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, BoolT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, BoolT, BoolT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, JSArray> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_startNumber, p_countNumber);

  if (block0.is_used()) {
    TNode<NativeContext> tmp0;
    TNode<Object> tmp1;
    TNode<Number> tmp2;
    TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 92);
    TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast5ATSmi_83(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<NativeContext> tmp5;
    TNode<Object> tmp6;
    TNode<Number> tmp7;
    TNode<Number> tmp8;
    TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<NativeContext> tmp10;
    TNode<Object> tmp11;
    TNode<Number> tmp12;
    TNode<Number> tmp13;
    TNode<Number> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 93);
    TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast5ATSmi_83(state_, TNode<Object>{tmp13}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13);
    }
  }

  if (block6.is_used()) {
    TNode<NativeContext> tmp17;
    TNode<Object> tmp18;
    TNode<Number> tmp19;
    TNode<Number> tmp20;
    TNode<Smi> tmp21;
    TNode<Number> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<NativeContext> tmp23;
    TNode<Object> tmp24;
    TNode<Number> tmp25;
    TNode<Number> tmp26;
    TNode<Smi> tmp27;
    TNode<Number> tmp28;
    TNode<Smi> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 96);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 97);
    TNode<JSArray> tmp30;
    USE(tmp30);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp30 = Cast20ATFastJSArrayForCopy_1458(state_, TNode<Context>{tmp23}, TNode<Object>{tmp24}, &label0);
    ca_.Goto(&block9, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24, tmp30);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24);
    }
  }

  if (block10.is_used()) {
    TNode<NativeContext> tmp31;
    TNode<Object> tmp32;
    TNode<Number> tmp33;
    TNode<Number> tmp34;
    TNode<Smi> tmp35;
    TNode<Smi> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    ca_.Bind(&block10, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    TNode<NativeContext> tmp39;
    TNode<Object> tmp40;
    TNode<Number> tmp41;
    TNode<Number> tmp42;
    TNode<Smi> tmp43;
    TNode<Smi> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<JSArray> tmp47;
    ca_.Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 104);
    TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp43}, TNode<Smi>{tmp44});
    TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp47});
    TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).SmiAbove(TNode<Smi>{tmp48}, TNode<Smi>{tmp49});
    ca_.Branch(tmp50, &block11, &block12, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp47);
  }

  if (block11.is_used()) {
    TNode<NativeContext> tmp51;
    TNode<Object> tmp52;
    TNode<Number> tmp53;
    TNode<Number> tmp54;
    TNode<Smi> tmp55;
    TNode<Smi> tmp56;
    TNode<Object> tmp57;
    TNode<JSArray> tmp58;
    ca_.Bind(&block11, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    TNode<NativeContext> tmp59;
    TNode<Object> tmp60;
    TNode<Number> tmp61;
    TNode<Number> tmp62;
    TNode<Smi> tmp63;
    TNode<Smi> tmp64;
    TNode<Object> tmp65;
    TNode<JSArray> tmp66;
    ca_.Bind(&block12, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 105);
    TNode<JSArray> tmp67;
    tmp67 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp59, tmp66, tmp63, tmp64));
    USE(tmp67);
    ca_.Goto(&block2, tmp59, tmp60, tmp61, tmp62, tmp67);
  }

  if (block8.is_used()) {
    TNode<NativeContext> tmp68;
    TNode<Object> tmp69;
    TNode<Number> tmp70;
    TNode<Number> tmp71;
    TNode<Smi> tmp72;
    TNode<Smi> tmp73;
    TNode<Object> tmp74;
    ca_.Bind(&block8, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    TNode<JSArgumentsObjectWithLength> tmp75;
    USE(tmp75);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp75 = Cast27JSArgumentsObjectWithLength_1459(state_, TNode<Context>{tmp68}, TNode<Object>{ca_.UncheckedCast<Object>(tmp74)}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74), tmp75);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74));
    }
  }

  if (block16.is_used()) {
    TNode<NativeContext> tmp76;
    TNode<Object> tmp77;
    TNode<Number> tmp78;
    TNode<Number> tmp79;
    TNode<Smi> tmp80;
    TNode<Smi> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block15.is_used()) {
    TNode<NativeContext> tmp84;
    TNode<Object> tmp85;
    TNode<Number> tmp86;
    TNode<Number> tmp87;
    TNode<Smi> tmp88;
    TNode<Smi> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<JSArgumentsObjectWithLength> tmp92;
    ca_.Bind(&block15, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 108);
    TNode<IntPtrT> tmp93 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp93);
    TNode<Map>tmp94 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp92, tmp93});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 109);
    TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = CodeStubAssembler(state_).IsFastAliasedArgumentsMap(TNode<Context>{tmp84}, TNode<Map>{tmp94});
    ca_.Branch(tmp95, &block17, &block18, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp92, tmp94);
  }

  if (block17.is_used()) {
    TNode<NativeContext> tmp96;
    TNode<Object> tmp97;
    TNode<Number> tmp98;
    TNode<Number> tmp99;
    TNode<Smi> tmp100;
    TNode<Smi> tmp101;
    TNode<Object> tmp102;
    TNode<JSArgumentsObjectWithLength> tmp103;
    TNode<Map> tmp104;
    ca_.Bind(&block17, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 110);
    TNode<JSArray> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = HandleFastAliasedSloppyArgumentsSlice_39(state_, TNode<NativeContext>{tmp96}, TNode<JSArgumentsObjectWithLength>{tmp103}, TNode<Smi>{tmp100}, TNode<Smi>{tmp101}, &label0);
    ca_.Goto(&block20, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp96, tmp103, tmp100, tmp101, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp96, tmp103, tmp100, tmp101);
    }
  }

  if (block21.is_used()) {
    TNode<NativeContext> tmp106;
    TNode<Object> tmp107;
    TNode<Number> tmp108;
    TNode<Number> tmp109;
    TNode<Smi> tmp110;
    TNode<Smi> tmp111;
    TNode<Object> tmp112;
    TNode<JSArgumentsObjectWithLength> tmp113;
    TNode<Map> tmp114;
    TNode<NativeContext> tmp115;
    TNode<JSArgumentsObjectWithLength> tmp116;
    TNode<Smi> tmp117;
    TNode<Smi> tmp118;
    ca_.Bind(&block21, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    TNode<NativeContext> tmp119;
    TNode<Object> tmp120;
    TNode<Number> tmp121;
    TNode<Number> tmp122;
    TNode<Smi> tmp123;
    TNode<Smi> tmp124;
    TNode<Object> tmp125;
    TNode<JSArgumentsObjectWithLength> tmp126;
    TNode<Map> tmp127;
    TNode<NativeContext> tmp128;
    TNode<JSArgumentsObjectWithLength> tmp129;
    TNode<Smi> tmp130;
    TNode<Smi> tmp131;
    TNode<JSArray> tmp132;
    ca_.Bind(&block20, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.Goto(&block2, tmp119, tmp120, tmp121, tmp122, tmp132);
  }

  if (block18.is_used()) {
    TNode<NativeContext> tmp133;
    TNode<Object> tmp134;
    TNode<Number> tmp135;
    TNode<Number> tmp136;
    TNode<Smi> tmp137;
    TNode<Smi> tmp138;
    TNode<Object> tmp139;
    TNode<JSArgumentsObjectWithLength> tmp140;
    TNode<Map> tmp141;
    ca_.Bind(&block18, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 112);
    TNode<BoolT> tmp142;
    USE(tmp142);
    tmp142 = CodeStubAssembler(state_).IsStrictArgumentsMap(TNode<Context>{tmp133}, TNode<Map>{tmp141});
    ca_.Branch(tmp142, &block24, &block25, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
  }

  if (block24.is_used()) {
    TNode<NativeContext> tmp143;
    TNode<Object> tmp144;
    TNode<Number> tmp145;
    TNode<Number> tmp146;
    TNode<Smi> tmp147;
    TNode<Smi> tmp148;
    TNode<Object> tmp149;
    TNode<JSArgumentsObjectWithLength> tmp150;
    TNode<Map> tmp151;
    TNode<BoolT> tmp152;
    ca_.Bind(&block24, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    TNode<BoolT> tmp153;
    USE(tmp153);
    tmp153 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block26, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153);
  }

  if (block25.is_used()) {
    TNode<NativeContext> tmp154;
    TNode<Object> tmp155;
    TNode<Number> tmp156;
    TNode<Number> tmp157;
    TNode<Smi> tmp158;
    TNode<Smi> tmp159;
    TNode<Object> tmp160;
    TNode<JSArgumentsObjectWithLength> tmp161;
    TNode<Map> tmp162;
    TNode<BoolT> tmp163;
    ca_.Bind(&block25, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).IsSloppyArgumentsMap(TNode<Context>{tmp154}, TNode<Map>{tmp162});
    ca_.Goto(&block26, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164);
  }

  if (block26.is_used()) {
    TNode<NativeContext> tmp165;
    TNode<Object> tmp166;
    TNode<Number> tmp167;
    TNode<Number> tmp168;
    TNode<Smi> tmp169;
    TNode<Smi> tmp170;
    TNode<Object> tmp171;
    TNode<JSArgumentsObjectWithLength> tmp172;
    TNode<Map> tmp173;
    TNode<BoolT> tmp174;
    TNode<BoolT> tmp175;
    ca_.Bind(&block26, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.Branch(tmp175, &block22, &block23, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block22.is_used()) {
    TNode<NativeContext> tmp176;
    TNode<Object> tmp177;
    TNode<Number> tmp178;
    TNode<Number> tmp179;
    TNode<Smi> tmp180;
    TNode<Smi> tmp181;
    TNode<Object> tmp182;
    TNode<JSArgumentsObjectWithLength> tmp183;
    TNode<Map> tmp184;
    ca_.Bind(&block22, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 113);
    TNode<JSArray> tmp185;
    USE(tmp185);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp185 = HandleSimpleArgumentsSlice_38(state_, TNode<NativeContext>{tmp176}, TNode<JSArgumentsObjectWithLength>{tmp183}, TNode<Smi>{tmp180}, TNode<Smi>{tmp181}, &label0);
    ca_.Goto(&block27, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp176, tmp183, tmp180, tmp181, tmp185);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block28, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp176, tmp183, tmp180, tmp181);
    }
  }

  if (block28.is_used()) {
    TNode<NativeContext> tmp186;
    TNode<Object> tmp187;
    TNode<Number> tmp188;
    TNode<Number> tmp189;
    TNode<Smi> tmp190;
    TNode<Smi> tmp191;
    TNode<Object> tmp192;
    TNode<JSArgumentsObjectWithLength> tmp193;
    TNode<Map> tmp194;
    TNode<NativeContext> tmp195;
    TNode<JSArgumentsObjectWithLength> tmp196;
    TNode<Smi> tmp197;
    TNode<Smi> tmp198;
    ca_.Bind(&block28, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.Goto(&block1);
  }

  if (block27.is_used()) {
    TNode<NativeContext> tmp199;
    TNode<Object> tmp200;
    TNode<Number> tmp201;
    TNode<Number> tmp202;
    TNode<Smi> tmp203;
    TNode<Smi> tmp204;
    TNode<Object> tmp205;
    TNode<JSArgumentsObjectWithLength> tmp206;
    TNode<Map> tmp207;
    TNode<NativeContext> tmp208;
    TNode<JSArgumentsObjectWithLength> tmp209;
    TNode<Smi> tmp210;
    TNode<Smi> tmp211;
    TNode<JSArray> tmp212;
    ca_.Bind(&block27, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block2, tmp199, tmp200, tmp201, tmp202, tmp212);
  }

  if (block23.is_used()) {
    TNode<NativeContext> tmp213;
    TNode<Object> tmp214;
    TNode<Number> tmp215;
    TNode<Number> tmp216;
    TNode<Smi> tmp217;
    TNode<Smi> tmp218;
    TNode<Object> tmp219;
    TNode<JSArgumentsObjectWithLength> tmp220;
    TNode<Map> tmp221;
    ca_.Bind(&block23, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 109);
    ca_.Goto(&block19, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221);
  }

  if (block19.is_used()) {
    TNode<NativeContext> tmp222;
    TNode<Object> tmp223;
    TNode<Number> tmp224;
    TNode<Number> tmp225;
    TNode<Smi> tmp226;
    TNode<Smi> tmp227;
    TNode<Object> tmp228;
    TNode<JSArgumentsObjectWithLength> tmp229;
    TNode<Map> tmp230;
    ca_.Bind(&block19, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    ca_.Goto(&block13, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228);
  }

  if (block14.is_used()) {
    TNode<NativeContext> tmp231;
    TNode<Object> tmp232;
    TNode<Number> tmp233;
    TNode<Number> tmp234;
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    TNode<Object> tmp237;
    ca_.Bind(&block14, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 117);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    ca_.Goto(&block13, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237);
  }

  if (block13.is_used()) {
    TNode<NativeContext> tmp238;
    TNode<Object> tmp239;
    TNode<Number> tmp240;
    TNode<Number> tmp241;
    TNode<Smi> tmp242;
    TNode<Smi> tmp243;
    TNode<Object> tmp244;
    ca_.Bind(&block13, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 97);
    ca_.Goto(&block7, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244);
  }

  if (block7.is_used()) {
    TNode<NativeContext> tmp245;
    TNode<Object> tmp246;
    TNode<Number> tmp247;
    TNode<Number> tmp248;
    TNode<Smi> tmp249;
    TNode<Smi> tmp250;
    TNode<Object> tmp251;
    ca_.Bind(&block7, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 96);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 120);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    TNode<NativeContext> tmp252;
    TNode<Object> tmp253;
    TNode<Number> tmp254;
    TNode<Number> tmp255;
    TNode<JSArray> tmp256;
    ca_.Bind(&block2, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 88);
    ca_.Goto(&block29, tmp252, tmp253, tmp254, tmp255, tmp256);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    TNode<NativeContext> tmp257;
    TNode<Object> tmp258;
    TNode<Number> tmp259;
    TNode<Number> tmp260;
    TNode<JSArray> tmp261;
    ca_.Bind(&block29, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
  return TNode<JSArray>{tmp261};
}

TF_BUILTIN(ArrayPrototypeSlice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, NativeContext, JSReceiver, Number, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, NativeContext, JSReceiver, Number, Number, JSArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 128);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 129);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 130);
    TNode<JSArray> tmp12;
    USE(tmp12);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp12 = Cast20ATFastJSArrayForCopy_1458(state_, TNode<Context>{tmp10}, TNode<Object>{tmp11}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp11, tmp11, tmp12);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp11, tmp11);
    }
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp13;
    TNode<RawPtrT> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<JSArray> tmp27;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 131);
    TNode<JSArray> tmp28;
    tmp28 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCloneFastJSArray, tmp23, tmp27));
    USE(tmp28);
    arguments.PopAndReturn(tmp28);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 133);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 130);
    ca_.Goto(&block3, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    ca_.Bind(&block3, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 129);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 128);
    ca_.Goto(&block2, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp41;
    TNode<RawPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    ca_.Bind(&block2, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 139);
    TNode<JSReceiver> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{tmp44}, TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 142);
    TNode<Number> tmp47;
    USE(tmp47);
    tmp47 = GetLengthProperty_246(state_, TNode<Context>{tmp44}, TNode<Object>{tmp46});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 145);
    TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp41}, TNode<RawPtrT>{tmp42}, TNode<IntPtrT>{tmp43}}, TNode<IntPtrT>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 146);
    TNode<Number> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp44}, TNode<Object>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 150);
    TNode<Number> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = NumberIsLessThan_75(state_, TNode<Number>{tmp50}, TNode<Number>{tmp51});
    ca_.Branch(tmp52, &block7, &block8, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp53;
    TNode<RawPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<Context> tmp56;
    TNode<Object> tmp57;
    TNode<JSReceiver> tmp58;
    TNode<Number> tmp59;
    TNode<Object> tmp60;
    TNode<Number> tmp61;
    ca_.Bind(&block7, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Number> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp59}, TNode<Number>{tmp61});
    TNode<Number> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp64;
    USE(tmp64);
    tmp64 = Max_81(state_, TNode<Number>{tmp62}, TNode<Number>{tmp63});
    ca_.Goto(&block10, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp64);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<JSReceiver> tmp70;
    TNode<Number> tmp71;
    TNode<Object> tmp72;
    TNode<Number> tmp73;
    ca_.Bind(&block8, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 151);
    TNode<Number> tmp74;
    USE(tmp74);
    tmp74 = Min_80(state_, TNode<Number>{tmp73}, TNode<Number>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 150);
    ca_.Goto(&block9, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp75;
    TNode<RawPtrT> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<Context> tmp78;
    TNode<Object> tmp79;
    TNode<JSReceiver> tmp80;
    TNode<Number> tmp81;
    TNode<Object> tmp82;
    TNode<Number> tmp83;
    TNode<Number> tmp84;
    ca_.Bind(&block10, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block9, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp85;
    TNode<RawPtrT> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<Context> tmp88;
    TNode<Object> tmp89;
    TNode<JSReceiver> tmp90;
    TNode<Number> tmp91;
    TNode<Object> tmp92;
    TNode<Number> tmp93;
    TNode<Number> tmp94;
    ca_.Bind(&block9, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 155);
    TNode<IntPtrT> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp85}, TNode<RawPtrT>{tmp86}, TNode<IntPtrT>{tmp87}}, TNode<IntPtrT>{tmp95});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 157);
    TNode<Oddball> tmp97;
    USE(tmp97);
    tmp97 = Undefined_64(state_);
    TNode<BoolT> tmp98;
    USE(tmp98);
    tmp98 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp96}, TNode<HeapObject>{tmp97});
    ca_.Branch(tmp98, &block11, &block12, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp96);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp99;
    TNode<RawPtrT> tmp100;
    TNode<IntPtrT> tmp101;
    TNode<Context> tmp102;
    TNode<Object> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<Number> tmp105;
    TNode<Object> tmp106;
    TNode<Number> tmp107;
    TNode<Number> tmp108;
    TNode<Object> tmp109;
    ca_.Bind(&block11, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block14, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp105);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp110;
    TNode<RawPtrT> tmp111;
    TNode<IntPtrT> tmp112;
    TNode<Context> tmp113;
    TNode<Object> tmp114;
    TNode<JSReceiver> tmp115;
    TNode<Number> tmp116;
    TNode<Object> tmp117;
    TNode<Number> tmp118;
    TNode<Number> tmp119;
    TNode<Object> tmp120;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    TNode<Number> tmp121;
    USE(tmp121);
    tmp121 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp113}, TNode<Object>{tmp120});
    ca_.Goto(&block13, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp122;
    TNode<RawPtrT> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<Context> tmp125;
    TNode<Object> tmp126;
    TNode<JSReceiver> tmp127;
    TNode<Number> tmp128;
    TNode<Object> tmp129;
    TNode<Number> tmp130;
    TNode<Number> tmp131;
    TNode<Object> tmp132;
    TNode<Number> tmp133;
    ca_.Bind(&block14, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.Goto(&block13, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp134;
    TNode<RawPtrT> tmp135;
    TNode<IntPtrT> tmp136;
    TNode<Context> tmp137;
    TNode<Object> tmp138;
    TNode<JSReceiver> tmp139;
    TNode<Number> tmp140;
    TNode<Object> tmp141;
    TNode<Number> tmp142;
    TNode<Number> tmp143;
    TNode<Object> tmp144;
    TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 156);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 162);
    TNode<Number> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = NumberIsLessThan_75(state_, TNode<Number>{tmp145}, TNode<Number>{tmp146});
    ca_.Branch(tmp147, &block15, &block16, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp148;
    TNode<RawPtrT> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<Context> tmp151;
    TNode<Object> tmp152;
    TNode<JSReceiver> tmp153;
    TNode<Number> tmp154;
    TNode<Object> tmp155;
    TNode<Number> tmp156;
    TNode<Number> tmp157;
    TNode<Object> tmp158;
    TNode<Number> tmp159;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    TNode<Number> tmp160;
    USE(tmp160);
    tmp160 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp154}, TNode<Number>{tmp159});
    TNode<Number> tmp161;
    USE(tmp161);
    tmp161 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp162;
    USE(tmp162);
    tmp162 = Max_81(state_, TNode<Number>{tmp160}, TNode<Number>{tmp161});
    ca_.Goto(&block18, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp162);
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp163;
    TNode<RawPtrT> tmp164;
    TNode<IntPtrT> tmp165;
    TNode<Context> tmp166;
    TNode<Object> tmp167;
    TNode<JSReceiver> tmp168;
    TNode<Number> tmp169;
    TNode<Object> tmp170;
    TNode<Number> tmp171;
    TNode<Number> tmp172;
    TNode<Object> tmp173;
    TNode<Number> tmp174;
    ca_.Bind(&block16, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    TNode<Number> tmp175;
    USE(tmp175);
    tmp175 = Min_80(state_, TNode<Number>{tmp174}, TNode<Number>{tmp169});
    ca_.Goto(&block17, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175);
  }

  if (block18.is_used()) {
    TNode<RawPtrT> tmp176;
    TNode<RawPtrT> tmp177;
    TNode<IntPtrT> tmp178;
    TNode<Context> tmp179;
    TNode<Object> tmp180;
    TNode<JSReceiver> tmp181;
    TNode<Number> tmp182;
    TNode<Object> tmp183;
    TNode<Number> tmp184;
    TNode<Number> tmp185;
    TNode<Object> tmp186;
    TNode<Number> tmp187;
    TNode<Number> tmp188;
    ca_.Bind(&block18, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.Goto(&block17, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188);
  }

  if (block17.is_used()) {
    TNode<RawPtrT> tmp189;
    TNode<RawPtrT> tmp190;
    TNode<IntPtrT> tmp191;
    TNode<Context> tmp192;
    TNode<Object> tmp193;
    TNode<JSReceiver> tmp194;
    TNode<Number> tmp195;
    TNode<Object> tmp196;
    TNode<Number> tmp197;
    TNode<Number> tmp198;
    TNode<Object> tmp199;
    TNode<Number> tmp200;
    TNode<Number> tmp201;
    ca_.Bind(&block17, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 161);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 165);
    TNode<Number> tmp202;
    USE(tmp202);
    tmp202 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp201}, TNode<Number>{tmp198});
    TNode<Number> tmp203;
    USE(tmp203);
    tmp203 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp204;
    USE(tmp204);
    tmp204 = Max_81(state_, TNode<Number>{tmp202}, TNode<Number>{tmp203});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 175);
    TNode<NativeContext> tmp205;
    USE(tmp205);
    tmp205 = UnsafeCast15ATNativeContext_1460(state_, TNode<Context>{tmp192}, TNode<Object>{tmp192});
    TNode<JSArray> tmp206;
    USE(tmp206);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp206 = HandleFastSlice_40(state_, TNode<NativeContext>{tmp205}, TNode<Object>{tmp194}, TNode<Number>{tmp198}, TNode<Number>{tmp204}, &label0);
    ca_.Goto(&block21, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp204, tmp205, tmp194, tmp198, tmp204, tmp206);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp204, tmp205, tmp194, tmp198, tmp204);
    }
  }

  if (block22.is_used()) {
    TNode<RawPtrT> tmp207;
    TNode<RawPtrT> tmp208;
    TNode<IntPtrT> tmp209;
    TNode<Context> tmp210;
    TNode<Object> tmp211;
    TNode<JSReceiver> tmp212;
    TNode<Number> tmp213;
    TNode<Object> tmp214;
    TNode<Number> tmp215;
    TNode<Number> tmp216;
    TNode<Object> tmp217;
    TNode<Number> tmp218;
    TNode<Number> tmp219;
    TNode<Number> tmp220;
    TNode<NativeContext> tmp221;
    TNode<JSReceiver> tmp222;
    TNode<Number> tmp223;
    TNode<Number> tmp224;
    ca_.Bind(&block22, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.Goto(&block20, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
  }

  if (block21.is_used()) {
    TNode<RawPtrT> tmp225;
    TNode<RawPtrT> tmp226;
    TNode<IntPtrT> tmp227;
    TNode<Context> tmp228;
    TNode<Object> tmp229;
    TNode<JSReceiver> tmp230;
    TNode<Number> tmp231;
    TNode<Object> tmp232;
    TNode<Number> tmp233;
    TNode<Number> tmp234;
    TNode<Object> tmp235;
    TNode<Number> tmp236;
    TNode<Number> tmp237;
    TNode<Number> tmp238;
    TNode<NativeContext> tmp239;
    TNode<JSReceiver> tmp240;
    TNode<Number> tmp241;
    TNode<Number> tmp242;
    TNode<JSArray> tmp243;
    ca_.Bind(&block21, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    arguments.PopAndReturn(tmp243);
  }

  if (block20.is_used()) {
    TNode<RawPtrT> tmp244;
    TNode<RawPtrT> tmp245;
    TNode<IntPtrT> tmp246;
    TNode<Context> tmp247;
    TNode<Object> tmp248;
    TNode<JSReceiver> tmp249;
    TNode<Number> tmp250;
    TNode<Object> tmp251;
    TNode<Number> tmp252;
    TNode<Number> tmp253;
    TNode<Object> tmp254;
    TNode<Number> tmp255;
    TNode<Number> tmp256;
    TNode<Number> tmp257;
    ca_.Bind(&block20, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 174);
    ca_.Goto(&block19, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257);
  }

  if (block19.is_used()) {
    TNode<RawPtrT> tmp258;
    TNode<RawPtrT> tmp259;
    TNode<IntPtrT> tmp260;
    TNode<Context> tmp261;
    TNode<Object> tmp262;
    TNode<JSReceiver> tmp263;
    TNode<Number> tmp264;
    TNode<Object> tmp265;
    TNode<Number> tmp266;
    TNode<Number> tmp267;
    TNode<Object> tmp268;
    TNode<Number> tmp269;
    TNode<Number> tmp270;
    TNode<Number> tmp271;
    ca_.Bind(&block19, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 181);
    TNode<JSReceiver> tmp272;
    USE(tmp272);
    tmp272 = CodeStubAssembler(state_).ArraySpeciesCreate(TNode<Context>{tmp261}, TNode<Object>{tmp263}, TNode<Number>{tmp271});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 184);
    TNode<Number> tmp273;
    USE(tmp273);
    tmp273 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 187);
    ca_.Goto(&block25, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273);
  }

  if (block25.is_used()) {
    TNode<RawPtrT> tmp274;
    TNode<RawPtrT> tmp275;
    TNode<IntPtrT> tmp276;
    TNode<Context> tmp277;
    TNode<Object> tmp278;
    TNode<JSReceiver> tmp279;
    TNode<Number> tmp280;
    TNode<Object> tmp281;
    TNode<Number> tmp282;
    TNode<Number> tmp283;
    TNode<Object> tmp284;
    TNode<Number> tmp285;
    TNode<Number> tmp286;
    TNode<Number> tmp287;
    TNode<JSReceiver> tmp288;
    TNode<Number> tmp289;
    ca_.Bind(&block25, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289);
    TNode<BoolT> tmp290;
    USE(tmp290);
    tmp290 = NumberIsLessThan_75(state_, TNode<Number>{tmp283}, TNode<Number>{tmp286});
    ca_.Branch(tmp290, &block23, &block24, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289);
  }

  if (block23.is_used()) {
    TNode<RawPtrT> tmp291;
    TNode<RawPtrT> tmp292;
    TNode<IntPtrT> tmp293;
    TNode<Context> tmp294;
    TNode<Object> tmp295;
    TNode<JSReceiver> tmp296;
    TNode<Number> tmp297;
    TNode<Object> tmp298;
    TNode<Number> tmp299;
    TNode<Number> tmp300;
    TNode<Object> tmp301;
    TNode<Number> tmp302;
    TNode<Number> tmp303;
    TNode<Number> tmp304;
    TNode<JSReceiver> tmp305;
    TNode<Number> tmp306;
    ca_.Bind(&block23, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 189);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 192);
    TNode<Oddball> tmp307;
    tmp307 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp294, tmp296, tmp300));
    USE(tmp307);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 195);
    TNode<Oddball> tmp308;
    USE(tmp308);
    tmp308 = True_65(state_);
    TNode<BoolT> tmp309;
    USE(tmp309);
    tmp309 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp307}, TNode<HeapObject>{tmp308});
    ca_.Branch(tmp309, &block26, &block27, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp300, tmp307);
  }

  if (block26.is_used()) {
    TNode<RawPtrT> tmp310;
    TNode<RawPtrT> tmp311;
    TNode<IntPtrT> tmp312;
    TNode<Context> tmp313;
    TNode<Object> tmp314;
    TNode<JSReceiver> tmp315;
    TNode<Number> tmp316;
    TNode<Object> tmp317;
    TNode<Number> tmp318;
    TNode<Number> tmp319;
    TNode<Object> tmp320;
    TNode<Number> tmp321;
    TNode<Number> tmp322;
    TNode<Number> tmp323;
    TNode<JSReceiver> tmp324;
    TNode<Number> tmp325;
    TNode<Number> tmp326;
    TNode<Oddball> tmp327;
    ca_.Bind(&block26, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 197);
    TNode<Object> tmp328;
    USE(tmp328);
    tmp328 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp313}, TNode<Object>{tmp315}, TNode<Object>{tmp326});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 200);
    TNode<Object> tmp329;
    tmp329 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp313, tmp324, tmp325, tmp328);
    USE(tmp329);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 195);
    ca_.Goto(&block27, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327);
  }

  if (block27.is_used()) {
    TNode<RawPtrT> tmp330;
    TNode<RawPtrT> tmp331;
    TNode<IntPtrT> tmp332;
    TNode<Context> tmp333;
    TNode<Object> tmp334;
    TNode<JSReceiver> tmp335;
    TNode<Number> tmp336;
    TNode<Object> tmp337;
    TNode<Number> tmp338;
    TNode<Number> tmp339;
    TNode<Object> tmp340;
    TNode<Number> tmp341;
    TNode<Number> tmp342;
    TNode<Number> tmp343;
    TNode<JSReceiver> tmp344;
    TNode<Number> tmp345;
    TNode<Number> tmp346;
    TNode<Oddball> tmp347;
    ca_.Bind(&block27, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 204);
    TNode<Number> tmp348;
    USE(tmp348);
    tmp348 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp349;
    USE(tmp349);
    tmp349 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp339}, TNode<Number>{tmp348});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 207);
    TNode<Number> tmp350;
    USE(tmp350);
    tmp350 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp351;
    USE(tmp351);
    tmp351 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp345}, TNode<Number>{tmp350});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 187);
    ca_.Goto(&block25, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp349, tmp340, tmp341, tmp342, tmp343, tmp344, tmp351);
  }

  if (block24.is_used()) {
    TNode<RawPtrT> tmp352;
    TNode<RawPtrT> tmp353;
    TNode<IntPtrT> tmp354;
    TNode<Context> tmp355;
    TNode<Object> tmp356;
    TNode<JSReceiver> tmp357;
    TNode<Number> tmp358;
    TNode<Object> tmp359;
    TNode<Number> tmp360;
    TNode<Number> tmp361;
    TNode<Object> tmp362;
    TNode<Number> tmp363;
    TNode<Number> tmp364;
    TNode<Number> tmp365;
    TNode<JSReceiver> tmp366;
    TNode<Number> tmp367;
    ca_.Bind(&block24, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 211);
    TNode<String> tmp368;
    USE(tmp368);
    tmp368 = kLengthString_68(state_);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp355, tmp366, tmp368, tmp367);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 214);
    arguments.PopAndReturn(tmp366);
  }
}

TNode<FixedArray> Cast10FixedArray_1456(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2068);
    TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<FixedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<HeapObject> tmp16;
    TNode<FixedArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<FixedArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 46);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<FixedArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<FixedArray>{tmp23};
}

TNode<Context> UnsafeCast7Context_1457(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<Context> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Context> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 51);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Context> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<Context>{tmp8};
}

TNode<JSArray> Cast20ATFastJSArrayForCopy_1458(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2068);
    TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast20ATFastJSArrayForCopy_139(state_, TNode<Context>{tmp6}, TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<HeapObject> tmp16;
    TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 97);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSArray>{tmp23};
}

TNode<JSArgumentsObjectWithLength> Cast27JSArgumentsObjectWithLength_1459(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArgumentsObjectWithLength> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2068);
    TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<JSArgumentsObjectWithLength> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast27JSArgumentsObjectWithLength_135(state_, TNode<Context>{tmp6}, TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<HeapObject> tmp16;
    TNode<JSArgumentsObjectWithLength> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSArgumentsObjectWithLength> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSArgumentsObjectWithLength> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSArgumentsObjectWithLength>{tmp23};
}

TNode<NativeContext> UnsafeCast15ATNativeContext_1460(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, NativeContext> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, NativeContext> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<NativeContext> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<NativeContext> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 175);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<NativeContext> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<NativeContext>{tmp8};
}

}  // namespace internal
}  // namespace v8

