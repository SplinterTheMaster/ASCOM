/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class AccessChainOp;
class AddressOfOp;
class AtomicAndOp;
class AtomicCompareExchangeWeakOp;
class AtomicIAddOp;
class AtomicIDecrementOp;
class AtomicIIncrementOp;
class AtomicISubOp;
class AtomicOrOp;
class AtomicSMaxOp;
class AtomicSMinOp;
class AtomicUMaxOp;
class AtomicUMinOp;
class AtomicXorOp;
class BitCountOp;
class BitFieldInsertOp;
class BitFieldSExtractOp;
class BitFieldUExtractOp;
class BitReverseOp;
class BitcastOp;
class BitwiseAndOp;
class BitwiseOrOp;
class BitwiseXorOp;
class BranchConditionalOp;
class BranchOp;
class CompositeConstructOp;
class CompositeExtractOp;
class CompositeInsertOp;
class ConstantOp;
class ControlBarrierOp;
class ConvertFToSOp;
class ConvertFToUOp;
class ConvertSToFOp;
class ConvertUToFOp;
class CooperativeMatrixLengthNVOp;
class CooperativeMatrixLoadNVOp;
class CooperativeMatrixMulAddNVOp;
class CooperativeMatrixStoreNVOp;
class CopyMemoryOp;
class EntryPointOp;
class ExecutionModeOp;
class FAddOp;
class FConvertOp;
class FDivOp;
class FModOp;
class FMulOp;
class FNegateOp;
class FOrdEqualOp;
class FOrdGreaterThanEqualOp;
class FOrdGreaterThanOp;
class FOrdLessThanEqualOp;
class FOrdLessThanOp;
class FOrdNotEqualOp;
class FRemOp;
class FSubOp;
class FUnordEqualOp;
class FUnordGreaterThanEqualOp;
class FUnordGreaterThanOp;
class FUnordLessThanEqualOp;
class FUnordLessThanOp;
class FUnordNotEqualOp;
class FuncOp;
class FunctionCallOp;
class GLSLCeilOp;
class GLSLCosOp;
class GLSLExpOp;
class GLSLFAbsOp;
class GLSLFMaxOp;
class GLSLFMinOp;
class GLSLFSignOp;
class GLSLFloorOp;
class GLSLInverseSqrtOp;
class GLSLLogOp;
class GLSLSAbsOp;
class GLSLSMaxOp;
class GLSLSMinOp;
class GLSLSSignOp;
class GLSLSinOp;
class GLSLSqrtOp;
class GLSLTanOp;
class GLSLTanhOp;
class GlobalVariableOp;
class GroupNonUniformBallotOp;
class GroupNonUniformElectOp;
class GroupNonUniformFAddOp;
class GroupNonUniformFMaxOp;
class GroupNonUniformFMinOp;
class GroupNonUniformFMulOp;
class GroupNonUniformIAddOp;
class GroupNonUniformIMulOp;
class GroupNonUniformSMaxOp;
class GroupNonUniformSMinOp;
class GroupNonUniformUMaxOp;
class GroupNonUniformUMinOp;
class IAddOp;
class IEqualOp;
class IMulOp;
class INotEqualOp;
class ISubOp;
class LoadOp;
class LogicalAndOp;
class LogicalEqualOp;
class LogicalNotEqualOp;
class LogicalNotOp;
class LogicalOrOp;
class LoopOp;
class MatrixTimesMatrixOp;
class MatrixTimesScalarOp;
class MemoryBarrierOp;
class MergeOp;
class ModuleEndOp;
class ModuleOp;
class NotOp;
class ReferenceOfOp;
class ReturnOp;
class ReturnValueOp;
class SConvertOp;
class SDivOp;
class SGreaterThanEqualOp;
class SGreaterThanOp;
class SLessThanEqualOp;
class SLessThanOp;
class SModOp;
class SNegateOp;
class SRemOp;
class SelectOp;
class SelectionOp;
class ShiftLeftLogicalOp;
class ShiftRightArithmeticOp;
class ShiftRightLogicalOp;
class SpecConstantOp;
class StoreOp;
class SubgroupBallotKHROp;
class TransposeOp;
class UConvertOp;
class UDivOp;
class UGreaterThanEqualOp;
class UGreaterThanOp;
class ULessThanEqualOp;
class ULessThanOp;
class UModOp;
class UndefOp;
class UnreachableOp;
class VariableOp;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// spirv::AccessChainOp declarations
//===----------------------------------------------------------------------===//

class AccessChainOpAdaptor {
public:
  AccessChainOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AccessChainOpAdaptor(AccessChainOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value base_ptr();
  ::mlir::ValueRange indices();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AccessChainOp : public ::mlir::Op<AccessChainOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AccessChainOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value base_ptr();
  ::mlir::Operation::operand_range indices();
  ::mlir::MutableOperandRange base_ptrMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value component_ptr();
  static void build(OpBuilder &builder, OperationState &state,
                              Value basePtr, ValueRange indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type component_ptr, ::mlir::Value base_ptr, ::mlir::ValueRange indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value base_ptr, ::mlir::ValueRange indices);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::AddressOfOp declarations
//===----------------------------------------------------------------------===//

class AddressOfOpAdaptor {
public:
  AddressOfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AddressOfOpAdaptor(AddressOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::FlatSymbolRefAttr variable();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AddressOfOp : public ::mlir::Op<AddressOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddressOfOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value pointer();
  ::mlir::FlatSymbolRefAttr variableAttr();
  ::llvm::StringRef variable();
  void variableAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                              spirv::GlobalVariableOp var);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pointer, ::mlir::FlatSymbolRefAttr variable);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::FlatSymbolRefAttr variable);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pointer, ::llvm::StringRef variable);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef variable);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::AtomicAndOp declarations
//===----------------------------------------------------------------------===//

class AtomicAndOpAdaptor {
public:
  AtomicAndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicAndOpAdaptor(AtomicAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicAndOp : public ::mlir::Op<AtomicAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicAndOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicCompareExchangeWeakOp declarations
//===----------------------------------------------------------------------===//

class AtomicCompareExchangeWeakOpAdaptor {
public:
  AtomicCompareExchangeWeakOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicCompareExchangeWeakOpAdaptor(AtomicCompareExchangeWeakOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::Value comparator();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr equal_semantics();
  ::mlir::IntegerAttr unequal_semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicCompareExchangeWeakOp : public ::mlir::Op<AtomicCompareExchangeWeakOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicCompareExchangeWeakOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::Value comparator();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange comparatorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr equal_semanticsAttr();
  ::mlir::spirv::MemorySemantics equal_semantics();
  ::mlir::IntegerAttr unequal_semanticsAttr();
  ::mlir::spirv::MemorySemantics unequal_semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void equal_semanticsAttr(::mlir::IntegerAttr attr);
  void unequal_semanticsAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr equal_semantics, ::mlir::IntegerAttr unequal_semantics, ::mlir::Value value, ::mlir::Value comparator);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr equal_semantics, ::mlir::IntegerAttr unequal_semantics, ::mlir::Value value, ::mlir::Value comparator);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, ::mlir::Value value, ::mlir::Value comparator);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, ::mlir::Value value, ::mlir::Value comparator);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIAddOp declarations
//===----------------------------------------------------------------------===//

class AtomicIAddOpAdaptor {
public:
  AtomicIAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicIAddOpAdaptor(AtomicIAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicIAddOp : public ::mlir::Op<AtomicIAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicIAddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIDecrementOp declarations
//===----------------------------------------------------------------------===//

class AtomicIDecrementOpAdaptor {
public:
  AtomicIDecrementOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicIDecrementOpAdaptor(AtomicIDecrementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicIDecrementOp : public ::mlir::Op<AtomicIDecrementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicIDecrementOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::MutableOperandRange pointerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIIncrementOp declarations
//===----------------------------------------------------------------------===//

class AtomicIIncrementOpAdaptor {
public:
  AtomicIIncrementOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicIIncrementOpAdaptor(AtomicIIncrementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicIIncrementOp : public ::mlir::Op<AtomicIIncrementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicIIncrementOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::MutableOperandRange pointerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicISubOp declarations
//===----------------------------------------------------------------------===//

class AtomicISubOpAdaptor {
public:
  AtomicISubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicISubOpAdaptor(AtomicISubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicISubOp : public ::mlir::Op<AtomicISubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicISubOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicOrOp declarations
//===----------------------------------------------------------------------===//

class AtomicOrOpAdaptor {
public:
  AtomicOrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicOrOpAdaptor(AtomicOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicOrOp : public ::mlir::Op<AtomicOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicOrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicSMaxOp declarations
//===----------------------------------------------------------------------===//

class AtomicSMaxOpAdaptor {
public:
  AtomicSMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicSMaxOpAdaptor(AtomicSMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicSMaxOp : public ::mlir::Op<AtomicSMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicSMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicSMinOp declarations
//===----------------------------------------------------------------------===//

class AtomicSMinOpAdaptor {
public:
  AtomicSMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicSMinOpAdaptor(AtomicSMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicSMinOp : public ::mlir::Op<AtomicSMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicSMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicUMaxOp declarations
//===----------------------------------------------------------------------===//

class AtomicUMaxOpAdaptor {
public:
  AtomicUMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicUMaxOpAdaptor(AtomicUMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicUMaxOp : public ::mlir::Op<AtomicUMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicUMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicUMinOp declarations
//===----------------------------------------------------------------------===//

class AtomicUMinOpAdaptor {
public:
  AtomicUMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicUMinOpAdaptor(AtomicUMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicUMinOp : public ::mlir::Op<AtomicUMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicUMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicXorOp declarations
//===----------------------------------------------------------------------===//

class AtomicXorOpAdaptor {
public:
  AtomicXorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicXorOpAdaptor(AtomicXorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicXorOp : public ::mlir::Op<AtomicXorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicXorOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void semanticsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitCountOp declarations
//===----------------------------------------------------------------------===//

class BitCountOpAdaptor {
public:
  BitCountOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitCountOpAdaptor(BitCountOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitCountOp : public ::mlir::Op<BitCountOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitCountOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldInsertOp declarations
//===----------------------------------------------------------------------===//

class BitFieldInsertOpAdaptor {
public:
  BitFieldInsertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitFieldInsertOpAdaptor(BitFieldInsertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Value insert();
  ::mlir::Value offset();
  ::mlir::Value count();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitFieldInsertOp : public ::mlir::Op<BitFieldInsertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitFieldInsertOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Value insert();
  ::mlir::Value offset();
  ::mlir::Value count();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange insertMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value insert, ::mlir::Value offset, ::mlir::Value count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value base, ::mlir::Value insert, ::mlir::Value offset, ::mlir::Value count);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldSExtractOp declarations
//===----------------------------------------------------------------------===//

class BitFieldSExtractOpAdaptor {
public:
  BitFieldSExtractOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitFieldSExtractOpAdaptor(BitFieldSExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Value offset();
  ::mlir::Value count();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitFieldSExtractOp : public ::mlir::Op<BitFieldSExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitFieldSExtractOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Value offset();
  ::mlir::Value count();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value offset, ::mlir::Value count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value base, ::mlir::Value offset, ::mlir::Value count);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldUExtractOp declarations
//===----------------------------------------------------------------------===//

class BitFieldUExtractOpAdaptor {
public:
  BitFieldUExtractOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitFieldUExtractOpAdaptor(BitFieldUExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Value offset();
  ::mlir::Value count();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitFieldUExtractOp : public ::mlir::Op<BitFieldUExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitFieldUExtractOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Value offset();
  ::mlir::Value count();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value offset, ::mlir::Value count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value base, ::mlir::Value offset, ::mlir::Value count);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitReverseOp declarations
//===----------------------------------------------------------------------===//

class BitReverseOpAdaptor {
public:
  BitReverseOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitReverseOpAdaptor(BitReverseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitReverseOp : public ::mlir::Op<BitReverseOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitReverseOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpAdaptor {
public:
  BitcastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitcastOpAdaptor(BitcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitcastOp : public ::mlir::Op<BitcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitcastOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseAndOp declarations
//===----------------------------------------------------------------------===//

class BitwiseAndOpAdaptor {
public:
  BitwiseAndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitwiseAndOpAdaptor(BitwiseAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitwiseAndOp : public ::mlir::Op<BitwiseAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseAndOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseOrOp declarations
//===----------------------------------------------------------------------===//

class BitwiseOrOpAdaptor {
public:
  BitwiseOrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitwiseOrOpAdaptor(BitwiseOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitwiseOrOp : public ::mlir::Op<BitwiseOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseOrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseXorOp declarations
//===----------------------------------------------------------------------===//

class BitwiseXorOpAdaptor {
public:
  BitwiseXorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitwiseXorOpAdaptor(BitwiseXorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitwiseXorOp : public ::mlir::Op<BitwiseXorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseXorOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BranchConditionalOp declarations
//===----------------------------------------------------------------------===//

class BranchConditionalOpAdaptor {
public:
  BranchConditionalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs);
  BranchConditionalOpAdaptor(BranchConditionalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::ValueRange trueTargetOperands();
  ::mlir::ValueRange falseTargetOperands();
  ::mlir::ArrayAttr branch_weights();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BranchConditionalOp : public ::mlir::Op<BranchConditionalOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::NSuccessors<2>::Impl, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, ::mlir::BranchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BranchConditionalOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::Operation::operand_range trueTargetOperands();
  ::mlir::Operation::operand_range falseTargetOperands();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange trueTargetOperandsMutable();
  ::mlir::MutableOperandRange falseTargetOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *trueTarget();
  ::mlir::Block *falseTarget();
  ::mlir::ArrayAttr branch_weightsAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > branch_weights();
  void branch_weightsAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value condition, Block *trueBlock, ValueRange trueArguments, Block *falseBlock, ValueRange falseArguments, Optional<std::pair<uint32_t, uint32_t>> weights = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value condition, ::mlir::ValueRange trueTargetOperands, ::mlir::ValueRange falseTargetOperands, /*optional*/::mlir::ArrayAttr branch_weights, ::mlir::Block *trueTarget, ::mlir::Block *falseTarget);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value condition, ::mlir::ValueRange trueTargetOperands, ::mlir::ValueRange falseTargetOperands, /*optional*/::mlir::ArrayAttr branch_weights, ::mlir::Block *trueTarget, ::mlir::Block *falseTarget);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Branch indices into the successor list.
    enum { kTrueIndex = 0, kFalseIndex = 1 };

    /// Returns the target block for the true branch.
    Block *getTrueBlock() { return getOperation()->getSuccessor(kTrueIndex); }

    /// Returns the target block for the false branch.
    Block *getFalseBlock() { return getOperation()->getSuccessor(kFalseIndex); }

    /// Returns the number of arguments to the true target block.
    unsigned getNumTrueBlockArguments() {
      return trueTargetOperands().size();
    }

    /// Returns the number of arguments to the false target block.
    unsigned getNumFalseBlockArguments() {
      return falseTargetOperands().size();
    }

    // Iterator and range support for true target block arguments.
    operand_range getTrueBlockArguments() {
      return trueTargetOperands();
    }

    // Iterator and range support for false target block arguments.
    operand_range getFalseBlockArguments() {
      return falseTargetOperands();
    }

  private:
    /// Gets the index of the first true block argument in the operand list.
    unsigned getTrueBlockArgumentIndex() {
      return 1; // Omit the first argument, which is the condition.
    }

    /// Gets the index of the first false block argument in the operand list.
    unsigned getFalseBlockArgumentIndex() {
      return getTrueBlockArgumentIndex() + getNumTrueBlockArguments();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::BranchOp declarations
//===----------------------------------------------------------------------===//

class BranchOpAdaptor {
public:
  BranchOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BranchOpAdaptor(BranchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange targetOperands();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BranchOp : public ::mlir::Op<BranchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::OneSuccessor, OpTrait::VariadicOperands, ::mlir::BranchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BranchOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range targetOperands();
  ::mlir::MutableOperandRange targetOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *target();
  static void build(OpBuilder &, OperationState &state, Block *successor, ValueRange arguments = {});
  ::mlir::LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Returns the branch target block.
    Block *getTarget() { return target(); }

    /// Returns the block arguments.
    operand_range getBlockArguments() { return targetOperands(); }
  
};

//===----------------------------------------------------------------------===//
// spirv::CompositeConstructOp declarations
//===----------------------------------------------------------------------===//

class CompositeConstructOpAdaptor {
public:
  CompositeConstructOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CompositeConstructOpAdaptor(CompositeConstructOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange constituents();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CompositeConstructOp : public ::mlir::Op<CompositeConstructOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompositeConstructOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range constituents();
  ::mlir::MutableOperandRange constituentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange constituents);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CompositeExtractOp declarations
//===----------------------------------------------------------------------===//

class CompositeExtractOpAdaptor {
public:
  CompositeExtractOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CompositeExtractOpAdaptor(CompositeExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value composite();
  ::mlir::ArrayAttr indices();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CompositeExtractOp : public ::mlir::Op<CompositeExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompositeExtractOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value composite();
  ::mlir::MutableOperandRange compositeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value component();
  ::mlir::ArrayAttr indicesAttr();
  ::mlir::ArrayAttr indices();
  void indicesAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                Value composite, ArrayRef<int32_t> indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type component, ::mlir::Value composite, ::mlir::ArrayAttr indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value composite, ::mlir::ArrayAttr indices);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CompositeInsertOp declarations
//===----------------------------------------------------------------------===//

class CompositeInsertOpAdaptor {
public:
  CompositeInsertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CompositeInsertOpAdaptor(CompositeInsertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value object();
  ::mlir::Value composite();
  ::mlir::ArrayAttr indices();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CompositeInsertOp : public ::mlir::Op<CompositeInsertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompositeInsertOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value object();
  ::mlir::Value composite();
  ::mlir::MutableOperandRange objectMutable();
  ::mlir::MutableOperandRange compositeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::ArrayAttr indicesAttr();
  ::mlir::ArrayAttr indices();
  void indicesAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value object, ::mlir::Value composite, ::mlir::ArrayAttr indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value object, ::mlir::Value composite, ::mlir::ArrayAttr indices);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConstantOp declarations
//===----------------------------------------------------------------------===//

class ConstantOpAdaptor {
public:
  ConstantOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ConstantOpAdaptor(ConstantOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Attribute value();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ConstantOp : public ::mlir::Op<ConstantOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstantOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value constant();
  ::mlir::Attribute valueAttr();
  ::mlir::Attribute value();
  void valueAttr(::mlir::Attribute attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type constant, ::mlir::Attribute value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Attribute value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Returns true if a constant can be built for the given `type`.
    static bool isBuildableWith(Type type);

    // Creates a constant zero/one of the given `type` at the current insertion
    // point of `builder` and returns it.
    static spirv::ConstantOp getZero(Type type, Location loc,
                                     OpBuilder &builder);
    static spirv::ConstantOp getOne(Type type, Location loc,
                                    OpBuilder &builder);
  
};

//===----------------------------------------------------------------------===//
// spirv::ControlBarrierOp declarations
//===----------------------------------------------------------------------===//

class ControlBarrierOpAdaptor {
public:
  ControlBarrierOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ControlBarrierOpAdaptor(ControlBarrierOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr memory_semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ControlBarrierOp : public ::mlir::Op<ControlBarrierOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ControlBarrierOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr memory_semanticsAttr();
  ::mlir::spirv::MemorySemantics memory_semantics();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void memory_semanticsAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr memory_semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr memory_semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertFToSOp declarations
//===----------------------------------------------------------------------===//

class ConvertFToSOpAdaptor {
public:
  ConvertFToSOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ConvertFToSOpAdaptor(ConvertFToSOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ConvertFToSOp : public ::mlir::Op<ConvertFToSOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertFToSOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertFToUOp declarations
//===----------------------------------------------------------------------===//

class ConvertFToUOpAdaptor {
public:
  ConvertFToUOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ConvertFToUOpAdaptor(ConvertFToUOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ConvertFToUOp : public ::mlir::Op<ConvertFToUOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertFToUOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertSToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertSToFOpAdaptor {
public:
  ConvertSToFOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ConvertSToFOpAdaptor(ConvertSToFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ConvertSToFOp : public ::mlir::Op<ConvertSToFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertSToFOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertUToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertUToFOpAdaptor {
public:
  ConvertUToFOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ConvertUToFOpAdaptor(ConvertUToFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ConvertUToFOp : public ::mlir::Op<ConvertUToFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertUToFOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixLengthNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixLengthNVOpAdaptor {
public:
  CooperativeMatrixLengthNVOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CooperativeMatrixLengthNVOpAdaptor(CooperativeMatrixLengthNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::TypeAttr type();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CooperativeMatrixLengthNVOp : public ::mlir::Op<CooperativeMatrixLengthNVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixLengthNVOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::TypeAttr typeAttr();
  ::mlir::Type type();
  void typeAttr(::mlir::TypeAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::TypeAttr type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixLoadNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixLoadNVOpAdaptor {
public:
  CooperativeMatrixLoadNVOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CooperativeMatrixLoadNVOpAdaptor(CooperativeMatrixLoadNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value stride();
  ::mlir::Value columnmajor();
  ::mlir::IntegerAttr memory_access();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CooperativeMatrixLoadNVOp : public ::mlir::Op<CooperativeMatrixLoadNVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixLoadNVOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value stride();
  ::mlir::Value columnmajor();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange strideMutable();
  ::mlir::MutableOperandRange columnmajorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr memory_accessAttr();
  ::llvm::Optional<::mlir::spirv::MemoryAccess> memory_access();
  void memory_accessAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value pointer, ::mlir::Value stride, ::mlir::Value columnmajor, /*optional*/::mlir::IntegerAttr memory_access);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::Value stride, ::mlir::Value columnmajor, /*optional*/::mlir::IntegerAttr memory_access);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixMulAddNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixMulAddNVOpAdaptor {
public:
  CooperativeMatrixMulAddNVOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CooperativeMatrixMulAddNVOpAdaptor(CooperativeMatrixMulAddNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::Value c();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CooperativeMatrixMulAddNVOp : public ::mlir::Op<CooperativeMatrixMulAddNVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixMulAddNVOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::Value c();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange cMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixStoreNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixStoreNVOpAdaptor {
public:
  CooperativeMatrixStoreNVOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CooperativeMatrixStoreNVOpAdaptor(CooperativeMatrixStoreNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value object();
  ::mlir::Value stride();
  ::mlir::Value columnmajor();
  ::mlir::IntegerAttr memory_access();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CooperativeMatrixStoreNVOp : public ::mlir::Op<CooperativeMatrixStoreNVOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixStoreNVOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value pointer();
  ::mlir::Value object();
  ::mlir::Value stride();
  ::mlir::Value columnmajor();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange objectMutable();
  ::mlir::MutableOperandRange strideMutable();
  ::mlir::MutableOperandRange columnmajorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr memory_accessAttr();
  ::llvm::Optional<::mlir::spirv::MemoryAccess> memory_access();
  void memory_accessAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value pointer, ::mlir::Value object, ::mlir::Value stride, ::mlir::Value columnmajor, /*optional*/::mlir::IntegerAttr memory_access);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value pointer, ::mlir::Value object, ::mlir::Value stride, ::mlir::Value columnmajor, /*optional*/::mlir::IntegerAttr memory_access);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::CopyMemoryOp declarations
//===----------------------------------------------------------------------===//

class CopyMemoryOpAdaptor {
public:
  CopyMemoryOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CopyMemoryOpAdaptor(CopyMemoryOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value target();
  ::mlir::Value source();
  ::mlir::IntegerAttr memory_access();
  ::mlir::IntegerAttr alignment();
  ::mlir::IntegerAttr source_memory_access();
  ::mlir::IntegerAttr source_alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CopyMemoryOp : public ::mlir::Op<CopyMemoryOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CopyMemoryOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value target();
  ::mlir::Value source();
  ::mlir::MutableOperandRange targetMutable();
  ::mlir::MutableOperandRange sourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr memory_accessAttr();
  ::llvm::Optional<::mlir::spirv::MemoryAccess> memory_access();
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > alignment();
  ::mlir::IntegerAttr source_memory_accessAttr();
  ::llvm::Optional<::mlir::spirv::MemoryAccess> source_memory_access();
  ::mlir::IntegerAttr source_alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > source_alignment();
  void memory_accessAttr(::mlir::IntegerAttr attr);
  void alignmentAttr(::mlir::IntegerAttr attr);
  void source_memory_accessAttr(::mlir::IntegerAttr attr);
  void source_alignmentAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::Value source, /*optional*/::mlir::IntegerAttr memory_access, /*optional*/::mlir::IntegerAttr alignment, /*optional*/::mlir::IntegerAttr source_memory_access, /*optional*/::mlir::IntegerAttr source_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value target, ::mlir::Value source, /*optional*/::mlir::IntegerAttr memory_access, /*optional*/::mlir::IntegerAttr alignment, /*optional*/::mlir::IntegerAttr source_memory_access, /*optional*/::mlir::IntegerAttr source_alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::EntryPointOp declarations
//===----------------------------------------------------------------------===//

class EntryPointOpAdaptor {
public:
  EntryPointOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  EntryPointOpAdaptor(EntryPointOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr execution_model();
  ::mlir::FlatSymbolRefAttr fn();
  ::mlir::ArrayAttr interface();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class EntryPointOp : public ::mlir::Op<EntryPointOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EntryPointOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr execution_modelAttr();
  ::mlir::spirv::ExecutionModel execution_model();
  ::mlir::FlatSymbolRefAttr fnAttr();
  ::llvm::StringRef fn();
  ::mlir::ArrayAttr interfaceAttr();
  ::mlir::ArrayAttr interface();
  void execution_modelAttr(::mlir::IntegerAttr attr);
  void fnAttr(::mlir::FlatSymbolRefAttr attr);
  void interfaceAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                              spirv::ExecutionModel executionModel,
                              spirv::FuncOp function,
                              ArrayRef<Attribute> interfaceVars);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr execution_model, ::mlir::FlatSymbolRefAttr fn, ::mlir::ArrayAttr interface);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_model, ::mlir::FlatSymbolRefAttr fn, ::mlir::ArrayAttr interface);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::spirv::ExecutionModel execution_model, ::llvm::StringRef fn, ::mlir::ArrayAttr interface);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::ExecutionModel execution_model, ::llvm::StringRef fn, ::mlir::ArrayAttr interface);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ExecutionModeOp declarations
//===----------------------------------------------------------------------===//

class ExecutionModeOpAdaptor {
public:
  ExecutionModeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ExecutionModeOpAdaptor(ExecutionModeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::FlatSymbolRefAttr fn();
  ::mlir::IntegerAttr execution_mode();
  ::mlir::ArrayAttr values();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ExecutionModeOp : public ::mlir::Op<ExecutionModeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExecutionModeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::FlatSymbolRefAttr fnAttr();
  ::llvm::StringRef fn();
  ::mlir::IntegerAttr execution_modeAttr();
  ::mlir::spirv::ExecutionMode execution_mode();
  ::mlir::ArrayAttr valuesAttr();
  ::mlir::ArrayAttr values();
  void fnAttr(::mlir::FlatSymbolRefAttr attr);
  void execution_modeAttr(::mlir::IntegerAttr attr);
  void valuesAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                              spirv::FuncOp function,
                              spirv::ExecutionMode executionMode,
                              ArrayRef<int32_t> params);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::FlatSymbolRefAttr fn, ::mlir::IntegerAttr execution_mode, ::mlir::ArrayAttr values);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::FlatSymbolRefAttr fn, ::mlir::IntegerAttr execution_mode, ::mlir::ArrayAttr values);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ::mlir::ArrayAttr values);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ::mlir::ArrayAttr values);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FAddOp declarations
//===----------------------------------------------------------------------===//

class FAddOpAdaptor {
public:
  FAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FAddOpAdaptor(FAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FAddOp : public ::mlir::Op<FAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FAddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FConvertOp declarations
//===----------------------------------------------------------------------===//

class FConvertOpAdaptor {
public:
  FConvertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FConvertOpAdaptor(FConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FConvertOp : public ::mlir::Op<FConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FConvertOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FDivOp declarations
//===----------------------------------------------------------------------===//

class FDivOpAdaptor {
public:
  FDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FDivOpAdaptor(FDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FDivOp : public ::mlir::Op<FDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FDivOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FModOp declarations
//===----------------------------------------------------------------------===//

class FModOpAdaptor {
public:
  FModOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FModOpAdaptor(FModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FModOp : public ::mlir::Op<FModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FModOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FMulOp declarations
//===----------------------------------------------------------------------===//

class FMulOpAdaptor {
public:
  FMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FMulOpAdaptor(FMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FMulOp : public ::mlir::Op<FMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FMulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FNegateOp declarations
//===----------------------------------------------------------------------===//

class FNegateOpAdaptor {
public:
  FNegateOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FNegateOpAdaptor(FNegateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FNegateOp : public ::mlir::Op<FNegateOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FNegateOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdEqualOpAdaptor {
public:
  FOrdEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FOrdEqualOpAdaptor(FOrdEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FOrdEqualOp : public ::mlir::Op<FOrdEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdGreaterThanEqualOpAdaptor {
public:
  FOrdGreaterThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FOrdGreaterThanEqualOpAdaptor(FOrdGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FOrdGreaterThanEqualOp : public ::mlir::Op<FOrdGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdGreaterThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class FOrdGreaterThanOpAdaptor {
public:
  FOrdGreaterThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FOrdGreaterThanOpAdaptor(FOrdGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FOrdGreaterThanOp : public ::mlir::Op<FOrdGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdGreaterThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdLessThanEqualOpAdaptor {
public:
  FOrdLessThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FOrdLessThanEqualOpAdaptor(FOrdLessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FOrdLessThanEqualOp : public ::mlir::Op<FOrdLessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdLessThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanOp declarations
//===----------------------------------------------------------------------===//

class FOrdLessThanOpAdaptor {
public:
  FOrdLessThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FOrdLessThanOpAdaptor(FOrdLessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FOrdLessThanOp : public ::mlir::Op<FOrdLessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdLessThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdNotEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdNotEqualOpAdaptor {
public:
  FOrdNotEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FOrdNotEqualOpAdaptor(FOrdNotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FOrdNotEqualOp : public ::mlir::Op<FOrdNotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdNotEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FRemOp declarations
//===----------------------------------------------------------------------===//

class FRemOpAdaptor {
public:
  FRemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FRemOpAdaptor(FRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FRemOp : public ::mlir::Op<FRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FRemOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FSubOp declarations
//===----------------------------------------------------------------------===//

class FSubOpAdaptor {
public:
  FSubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FSubOpAdaptor(FSubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FSubOp : public ::mlir::Op<FSubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FSubOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordEqualOpAdaptor {
public:
  FUnordEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FUnordEqualOpAdaptor(FUnordEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FUnordEqualOp : public ::mlir::Op<FUnordEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordGreaterThanEqualOpAdaptor {
public:
  FUnordGreaterThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FUnordGreaterThanEqualOpAdaptor(FUnordGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FUnordGreaterThanEqualOp : public ::mlir::Op<FUnordGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordGreaterThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class FUnordGreaterThanOpAdaptor {
public:
  FUnordGreaterThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FUnordGreaterThanOpAdaptor(FUnordGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FUnordGreaterThanOp : public ::mlir::Op<FUnordGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordGreaterThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordLessThanEqualOpAdaptor {
public:
  FUnordLessThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FUnordLessThanEqualOpAdaptor(FUnordLessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FUnordLessThanEqualOp : public ::mlir::Op<FUnordLessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordLessThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanOp declarations
//===----------------------------------------------------------------------===//

class FUnordLessThanOpAdaptor {
public:
  FUnordLessThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FUnordLessThanOpAdaptor(FUnordLessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FUnordLessThanOp : public ::mlir::Op<FUnordLessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordLessThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordNotEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordNotEqualOpAdaptor {
public:
  FUnordNotEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FUnordNotEqualOpAdaptor(FUnordNotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FUnordNotEqualOp : public ::mlir::Op<FUnordNotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordNotEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FuncOp declarations
//===----------------------------------------------------------------------===//

class FuncOpAdaptor {
public:
  FuncOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FuncOpAdaptor(FuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::TypeAttr type();
  ::mlir::StringAttr sym_name();
  ::mlir::IntegerAttr function_control();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FuncOp : public ::mlir::Op<FuncOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::AutomaticAllocationScope, ::mlir::CallableOpInterface::Trait, OpTrait::FunctionLike, OpTrait::IsIsolatedFromAbove, ::mlir::SymbolOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FuncOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &body();
  ::mlir::TypeAttr typeAttr();
  ::mlir::Type type();
  ::mlir::StringAttr sym_nameAttr();
  ::llvm::StringRef sym_name();
  ::mlir::IntegerAttr function_controlAttr();
  ::mlir::spirv::FunctionControl function_control();
  void typeAttr(::mlir::TypeAttr attr);
  void sym_nameAttr(::mlir::StringAttr attr);
  void function_controlAttr(::mlir::IntegerAttr attr);
  static void build(
    OpBuilder &, OperationState &state,
    StringRef name, FunctionType type,
    spirv::FunctionControl control = spirv::FunctionControl::None,
    ArrayRef<NamedAttribute> attrs = {}
  );
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeAttr type, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr function_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr function_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeAttr type, ::llvm::StringRef sym_name, ::mlir::spirv::FunctionControl function_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type, ::llvm::StringRef sym_name, ::mlir::spirv::FunctionControl function_control);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  Region *getCallableRegion();
  ArrayRef<Type> getCallableResults();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

  private:
    // This trait needs access to the hooks defined below.
    friend class OpTrait::FunctionLike<FuncOp>;

    /// Returns the number of arguments. Hook for OpTrait::FunctionLike.
    unsigned getNumFuncArguments() { return getType().getNumInputs(); }

    /// Returns the number of results. Hook for OpTrait::FunctionLike.
    unsigned getNumFuncResults() { return getType().getNumResults(); }

    /// Hook for OpTrait::FunctionLike, called after verifying that the 'type'
    /// attribute is present and checks if it holds a function type. Ensures
    /// getType, getNumFuncArguments, and getNumFuncResults can be called safely
    LogicalResult verifyType();

    /// Hook for OpTrait::FunctionLike, called after verifying the function
    /// type and the presence of the (potentially empty) function body.
    /// Ensures SPIR-V specific semantics.
    LogicalResult verifyBody();
  
};

//===----------------------------------------------------------------------===//
// spirv::FunctionCallOp declarations
//===----------------------------------------------------------------------===//

class FunctionCallOpAdaptor {
public:
  FunctionCallOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FunctionCallOpAdaptor(FunctionCallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange arguments();
  ::mlir::FlatSymbolRefAttr callee();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FunctionCallOp : public ::mlir::Op<FunctionCallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, ::mlir::CallOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FunctionCallOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range arguments();
  ::mlir::MutableOperandRange argumentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::FlatSymbolRefAttr calleeAttr();
  ::llvm::StringRef callee();
  void calleeAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::FlatSymbolRefAttr callee, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::FlatSymbolRefAttr callee, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::llvm::StringRef callee, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef callee, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  CallInterfaceCallable getCallableForCallee();
  Operation::operand_range getArgOperands();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLCeilOp declarations
//===----------------------------------------------------------------------===//

class GLSLCeilOpAdaptor {
public:
  GLSLCeilOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLCeilOpAdaptor(GLSLCeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLCeilOp : public ::mlir::Op<GLSLCeilOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLCeilOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLCosOp declarations
//===----------------------------------------------------------------------===//

class GLSLCosOpAdaptor {
public:
  GLSLCosOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLCosOpAdaptor(GLSLCosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLCosOp : public ::mlir::Op<GLSLCosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLCosOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLExpOp declarations
//===----------------------------------------------------------------------===//

class GLSLExpOpAdaptor {
public:
  GLSLExpOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLExpOpAdaptor(GLSLExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLExpOp : public ::mlir::Op<GLSLExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLExpOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFAbsOp declarations
//===----------------------------------------------------------------------===//

class GLSLFAbsOpAdaptor {
public:
  GLSLFAbsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLFAbsOpAdaptor(GLSLFAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLFAbsOp : public ::mlir::Op<GLSLFAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFAbsOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFMaxOp declarations
//===----------------------------------------------------------------------===//

class GLSLFMaxOpAdaptor {
public:
  GLSLFMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLFMaxOpAdaptor(GLSLFMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLFMaxOp : public ::mlir::Op<GLSLFMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFMinOp declarations
//===----------------------------------------------------------------------===//

class GLSLFMinOpAdaptor {
public:
  GLSLFMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLFMinOpAdaptor(GLSLFMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLFMinOp : public ::mlir::Op<GLSLFMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFSignOp declarations
//===----------------------------------------------------------------------===//

class GLSLFSignOpAdaptor {
public:
  GLSLFSignOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLFSignOpAdaptor(GLSLFSignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLFSignOp : public ::mlir::Op<GLSLFSignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFSignOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFloorOp declarations
//===----------------------------------------------------------------------===//

class GLSLFloorOpAdaptor {
public:
  GLSLFloorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLFloorOpAdaptor(GLSLFloorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLFloorOp : public ::mlir::Op<GLSLFloorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFloorOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLInverseSqrtOp declarations
//===----------------------------------------------------------------------===//

class GLSLInverseSqrtOpAdaptor {
public:
  GLSLInverseSqrtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLInverseSqrtOpAdaptor(GLSLInverseSqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLInverseSqrtOp : public ::mlir::Op<GLSLInverseSqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLInverseSqrtOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLLogOp declarations
//===----------------------------------------------------------------------===//

class GLSLLogOpAdaptor {
public:
  GLSLLogOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLLogOpAdaptor(GLSLLogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLLogOp : public ::mlir::Op<GLSLLogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLLogOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSAbsOp declarations
//===----------------------------------------------------------------------===//

class GLSLSAbsOpAdaptor {
public:
  GLSLSAbsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLSAbsOpAdaptor(GLSLSAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLSAbsOp : public ::mlir::Op<GLSLSAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSAbsOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSMaxOp declarations
//===----------------------------------------------------------------------===//

class GLSLSMaxOpAdaptor {
public:
  GLSLSMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLSMaxOpAdaptor(GLSLSMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLSMaxOp : public ::mlir::Op<GLSLSMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSMinOp declarations
//===----------------------------------------------------------------------===//

class GLSLSMinOpAdaptor {
public:
  GLSLSMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLSMinOpAdaptor(GLSLSMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLSMinOp : public ::mlir::Op<GLSLSMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSSignOp declarations
//===----------------------------------------------------------------------===//

class GLSLSSignOpAdaptor {
public:
  GLSLSSignOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLSSignOpAdaptor(GLSLSSignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLSSignOp : public ::mlir::Op<GLSLSSignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSSignOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSinOp declarations
//===----------------------------------------------------------------------===//

class GLSLSinOpAdaptor {
public:
  GLSLSinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLSinOpAdaptor(GLSLSinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLSinOp : public ::mlir::Op<GLSLSinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSqrtOp declarations
//===----------------------------------------------------------------------===//

class GLSLSqrtOpAdaptor {
public:
  GLSLSqrtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLSqrtOpAdaptor(GLSLSqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLSqrtOp : public ::mlir::Op<GLSLSqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSqrtOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLTanOp declarations
//===----------------------------------------------------------------------===//

class GLSLTanOpAdaptor {
public:
  GLSLTanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLTanOpAdaptor(GLSLTanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLTanOp : public ::mlir::Op<GLSLTanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLTanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLTanhOp declarations
//===----------------------------------------------------------------------===//

class GLSLTanhOpAdaptor {
public:
  GLSLTanhOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GLSLTanhOpAdaptor(GLSLTanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GLSLTanhOp : public ::mlir::Op<GLSLTanhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLTanhOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GlobalVariableOp declarations
//===----------------------------------------------------------------------===//

class GlobalVariableOpAdaptor {
public:
  GlobalVariableOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GlobalVariableOpAdaptor(GlobalVariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::TypeAttr type();
  ::mlir::StringAttr sym_name();
  ::mlir::FlatSymbolRefAttr initializer();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GlobalVariableOp : public ::mlir::Op<GlobalVariableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::SymbolOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GlobalVariableOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypeAttr typeAttr();
  ::mlir::Type type();
  ::mlir::StringAttr sym_nameAttr();
  ::llvm::StringRef sym_name();
  ::mlir::FlatSymbolRefAttr initializerAttr();
  ::llvm::Optional< ::llvm::StringRef > initializer();
  void typeAttr(::mlir::TypeAttr attr);
  void sym_nameAttr(::mlir::StringAttr attr);
  void initializerAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &state, TypeAttr type, ArrayRef<NamedAttribute> namedAttrs);
  static void build(OpBuilder &builder, OperationState &state,
                Type type, StringRef name, unsigned descriptorSet,
                unsigned binding);
  static void build(OpBuilder &builder, OperationState &state,
                Type type, StringRef name, spirv::BuiltIn builtin);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeAttr type, ::mlir::StringAttr sym_name, /*optional*/::mlir::FlatSymbolRefAttr initializer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type, ::mlir::StringAttr sym_name, /*optional*/::mlir::FlatSymbolRefAttr initializer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeAttr type, ::llvm::StringRef sym_name, /*optional*/::mlir::FlatSymbolRefAttr initializer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type, ::llvm::StringRef sym_name, /*optional*/::mlir::FlatSymbolRefAttr initializer);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    ::mlir::spirv::StorageClass storageClass() {
      return this->type().cast<::mlir::spirv::PointerType>().getStorageClass();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformBallotOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformBallotOpAdaptor {
public:
  GroupNonUniformBallotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformBallotOpAdaptor(GroupNonUniformBallotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value predicate();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformBallotOp : public ::mlir::Op<GroupNonUniformBallotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformBallotOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value predicate();
  ::mlir::MutableOperandRange predicateMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::Value predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::Value predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::Value predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::Value predicate);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformElectOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformElectOpAdaptor {
public:
  GroupNonUniformElectOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformElectOpAdaptor(GroupNonUniformElectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr execution_scope();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformElectOp : public ::mlir::Op<GroupNonUniformElectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformElectOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, spirv::Scope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFAddOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFAddOpAdaptor {
public:
  GroupNonUniformFAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformFAddOpAdaptor(GroupNonUniformFAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformFAddOp : public ::mlir::Op<GroupNonUniformFAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFAddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFMaxOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFMaxOpAdaptor {
public:
  GroupNonUniformFMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformFMaxOpAdaptor(GroupNonUniformFMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformFMaxOp : public ::mlir::Op<GroupNonUniformFMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFMinOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFMinOpAdaptor {
public:
  GroupNonUniformFMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformFMinOpAdaptor(GroupNonUniformFMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformFMinOp : public ::mlir::Op<GroupNonUniformFMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFMulOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFMulOpAdaptor {
public:
  GroupNonUniformFMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformFMulOpAdaptor(GroupNonUniformFMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformFMulOp : public ::mlir::Op<GroupNonUniformFMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFMulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformIAddOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformIAddOpAdaptor {
public:
  GroupNonUniformIAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformIAddOpAdaptor(GroupNonUniformIAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformIAddOp : public ::mlir::Op<GroupNonUniformIAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformIAddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformIMulOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformIMulOpAdaptor {
public:
  GroupNonUniformIMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformIMulOpAdaptor(GroupNonUniformIMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformIMulOp : public ::mlir::Op<GroupNonUniformIMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformIMulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformSMaxOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformSMaxOpAdaptor {
public:
  GroupNonUniformSMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformSMaxOpAdaptor(GroupNonUniformSMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformSMaxOp : public ::mlir::Op<GroupNonUniformSMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformSMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformSMinOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformSMinOpAdaptor {
public:
  GroupNonUniformSMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformSMinOpAdaptor(GroupNonUniformSMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformSMinOp : public ::mlir::Op<GroupNonUniformSMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformSMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformUMaxOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformUMaxOpAdaptor {
public:
  GroupNonUniformUMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformUMaxOpAdaptor(GroupNonUniformUMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformUMaxOp : public ::mlir::Op<GroupNonUniformUMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformUMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformUMinOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformUMinOpAdaptor {
public:
  GroupNonUniformUMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GroupNonUniformUMinOpAdaptor(GroupNonUniformUMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::IntegerAttr execution_scope();
  ::mlir::IntegerAttr group_operation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GroupNonUniformUMinOp : public ::mlir::Op<GroupNonUniformUMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformUMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  ::mlir::IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(::mlir::IntegerAttr attr);
  void group_operationAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr execution_scope, ::mlir::IntegerAttr group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, ::mlir::Value value, /*optional*/::mlir::Value cluster_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::IAddOp declarations
//===----------------------------------------------------------------------===//

class IAddOpAdaptor {
public:
  IAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  IAddOpAdaptor(IAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class IAddOp : public ::mlir::Op<IAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IAddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::IEqualOp declarations
//===----------------------------------------------------------------------===//

class IEqualOpAdaptor {
public:
  IEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  IEqualOpAdaptor(IEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class IEqualOp : public ::mlir::Op<IEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::IMulOp declarations
//===----------------------------------------------------------------------===//

class IMulOpAdaptor {
public:
  IMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  IMulOpAdaptor(IMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class IMulOp : public ::mlir::Op<IMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IMulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::INotEqualOp declarations
//===----------------------------------------------------------------------===//

class INotEqualOpAdaptor {
public:
  INotEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  INotEqualOpAdaptor(INotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class INotEqualOp : public ::mlir::Op<INotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = INotEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ISubOp declarations
//===----------------------------------------------------------------------===//

class ISubOpAdaptor {
public:
  ISubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ISubOpAdaptor(ISubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ISubOp : public ::mlir::Op<ISubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ISubOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpAdaptor {
public:
  LoadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LoadOpAdaptor(LoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::IntegerAttr memory_access();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LoadOp : public ::mlir::Op<LoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LoadOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::MutableOperandRange ptrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_accessAttr();
  ::llvm::Optional<::mlir::spirv::MemoryAccess> memory_access();
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > alignment();
  void memory_accessAttr(::mlir::IntegerAttr attr);
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(
      OpBuilder &builder, OperationState &state,
      Value basePtr, IntegerAttr memory_access = {},
      IntegerAttr alignment = {}
    );
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value ptr, /*optional*/::mlir::IntegerAttr memory_access, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value ptr, /*optional*/::mlir::IntegerAttr memory_access, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalAndOp declarations
//===----------------------------------------------------------------------===//

class LogicalAndOpAdaptor {
public:
  LogicalAndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LogicalAndOpAdaptor(LogicalAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LogicalAndOp : public ::mlir::Op<LogicalAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalAndOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalEqualOp declarations
//===----------------------------------------------------------------------===//

class LogicalEqualOpAdaptor {
public:
  LogicalEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LogicalEqualOpAdaptor(LogicalEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LogicalEqualOp : public ::mlir::Op<LogicalEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalNotEqualOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotEqualOpAdaptor {
public:
  LogicalNotEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LogicalNotEqualOpAdaptor(LogicalNotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LogicalNotEqualOp : public ::mlir::Op<LogicalNotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalNotEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalNotOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotOpAdaptor {
public:
  LogicalNotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LogicalNotOpAdaptor(LogicalNotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LogicalNotOp : public ::mlir::Op<LogicalNotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalNotOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalOrOp declarations
//===----------------------------------------------------------------------===//

class LogicalOrOpAdaptor {
public:
  LogicalOrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LogicalOrOpAdaptor(LogicalOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LogicalOrOp : public ::mlir::Op<LogicalOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalOrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LoopOp declarations
//===----------------------------------------------------------------------===//

class LoopOpAdaptor {
public:
  LoopOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LoopOpAdaptor(LoopOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr loop_control();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LoopOp : public ::mlir::Op<LoopOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LoopOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &body();
  ::mlir::IntegerAttr loop_controlAttr();
  ::mlir::spirv::LoopControl loop_control();
  void loop_controlAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr loop_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr loop_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::spirv::LoopControl loop_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::LoopControl loop_control);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    // Returns the entry block.
    Block *getEntryBlock();

    // Returns the loop header block.
    Block *getHeaderBlock();

    // Returns the loop continue block.
    Block *getContinueBlock();

    // Returns the loop merge block.
    Block *getMergeBlock();

    // Adds an empty entry block and loop merge block containing one
    // spv._merge op.
    void addEntryAndMergeBlock();
  
};

//===----------------------------------------------------------------------===//
// spirv::MatrixTimesMatrixOp declarations
//===----------------------------------------------------------------------===//

class MatrixTimesMatrixOpAdaptor {
public:
  MatrixTimesMatrixOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatrixTimesMatrixOpAdaptor(MatrixTimesMatrixOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value leftmatrix();
  ::mlir::Value rightmatrix();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatrixTimesMatrixOp : public ::mlir::Op<MatrixTimesMatrixOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixTimesMatrixOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value leftmatrix();
  ::mlir::Value rightmatrix();
  ::mlir::MutableOperandRange leftmatrixMutable();
  ::mlir::MutableOperandRange rightmatrixMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value leftmatrix, ::mlir::Value rightmatrix);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value leftmatrix, ::mlir::Value rightmatrix);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::MatrixTimesScalarOp declarations
//===----------------------------------------------------------------------===//

class MatrixTimesScalarOpAdaptor {
public:
  MatrixTimesScalarOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatrixTimesScalarOpAdaptor(MatrixTimesScalarOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::Value scalar();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatrixTimesScalarOp : public ::mlir::Op<MatrixTimesScalarOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixTimesScalarOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::Value scalar();
  ::mlir::MutableOperandRange matrixMutable();
  ::mlir::MutableOperandRange scalarMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value matrix, ::mlir::Value scalar);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::mlir::Value scalar);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::MemoryBarrierOp declarations
//===----------------------------------------------------------------------===//

class MemoryBarrierOpAdaptor {
public:
  MemoryBarrierOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MemoryBarrierOpAdaptor(MemoryBarrierOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr memory_scope();
  ::mlir::IntegerAttr memory_semantics();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MemoryBarrierOp : public ::mlir::Op<MemoryBarrierOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MemoryBarrierOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  ::mlir::IntegerAttr memory_semanticsAttr();
  ::mlir::spirv::MemorySemantics memory_semantics();
  void memory_scopeAttr(::mlir::IntegerAttr attr);
  void memory_semanticsAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr memory_semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr memory_scope, ::mlir::IntegerAttr memory_semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::MergeOp declarations
//===----------------------------------------------------------------------===//

class MergeOpAdaptor {
public:
  MergeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MergeOpAdaptor(MergeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MergeOp : public ::mlir::Op<MergeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MergeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ModuleEndOp declarations
//===----------------------------------------------------------------------===//

class ModuleEndOpAdaptor {
public:
  ModuleEndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ModuleEndOpAdaptor(ModuleEndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ModuleEndOp : public ::mlir::Op<ModuleEndOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ModuleEndOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::ModuleOp declarations
//===----------------------------------------------------------------------===//

class ModuleOpAdaptor {
public:
  ModuleOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ModuleOpAdaptor(ModuleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr addressing_model();
  ::mlir::IntegerAttr memory_model();
  ::mlir::spirv::VerCapExtAttr vce_triple();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ModuleOp : public ::mlir::Op<ModuleOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ModuleEndOp>::Impl, OpTrait::SymbolTable, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ModuleOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &body();
  ::mlir::IntegerAttr addressing_modelAttr();
  ::mlir::spirv::AddressingModel addressing_model();
  ::mlir::IntegerAttr memory_modelAttr();
  ::mlir::spirv::MemoryModel memory_model();
  ::mlir::spirv::VerCapExtAttr vce_tripleAttr();
  ::llvm::Optional<::mlir::spirv::VerCapExtAttr> vce_triple();
  void addressing_modelAttr(::mlir::IntegerAttr attr);
  void memory_modelAttr(::mlir::IntegerAttr attr);
  void vce_tripleAttr(::mlir::spirv::VerCapExtAttr attr);
  static void build(OpBuilder &, OperationState &state);
  static void build(OpBuilder &, OperationState &state,
                spirv::AddressingModel addressing_model,
                spirv::MemoryModel memory_model);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    static StringRef getVCETripleAttrName() { return "vce_triple"; }

    Block& getBlock() {
      return this->getOperation()->getRegion(0).front();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::NotOp declarations
//===----------------------------------------------------------------------===//

class NotOpAdaptor {
public:
  NotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  NotOpAdaptor(NotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class NotOp : public ::mlir::Op<NotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NotOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ReferenceOfOp declarations
//===----------------------------------------------------------------------===//

class ReferenceOfOpAdaptor {
public:
  ReferenceOfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReferenceOfOpAdaptor(ReferenceOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::FlatSymbolRefAttr spec_const();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReferenceOfOp : public ::mlir::Op<ReferenceOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReferenceOfOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value reference();
  ::mlir::FlatSymbolRefAttr spec_constAttr();
  ::llvm::StringRef spec_const();
  void spec_constAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type reference, ::mlir::FlatSymbolRefAttr spec_const);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::FlatSymbolRefAttr spec_const);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type reference, ::llvm::StringRef spec_const);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef spec_const);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReturnOp : public ::mlir::Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ReturnValueOp declarations
//===----------------------------------------------------------------------===//

class ReturnValueOpAdaptor {
public:
  ReturnValueOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReturnValueOpAdaptor(ReturnValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReturnValueOp : public ::mlir::Op<ReturnValueOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReturnValueOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SConvertOp declarations
//===----------------------------------------------------------------------===//

class SConvertOpAdaptor {
public:
  SConvertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SConvertOpAdaptor(SConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SConvertOp : public ::mlir::Op<SConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SConvertOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SDivOp declarations
//===----------------------------------------------------------------------===//

class SDivOpAdaptor {
public:
  SDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SDivOpAdaptor(SDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SDivOp : public ::mlir::Op<SDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SDivOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class SGreaterThanEqualOpAdaptor {
public:
  SGreaterThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SGreaterThanEqualOpAdaptor(SGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SGreaterThanEqualOp : public ::mlir::Op<SGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SGreaterThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class SGreaterThanOpAdaptor {
public:
  SGreaterThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SGreaterThanOpAdaptor(SGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SGreaterThanOp : public ::mlir::Op<SGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SGreaterThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class SLessThanEqualOpAdaptor {
public:
  SLessThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SLessThanEqualOpAdaptor(SLessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SLessThanEqualOp : public ::mlir::Op<SLessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SLessThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SLessThanOp declarations
//===----------------------------------------------------------------------===//

class SLessThanOpAdaptor {
public:
  SLessThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SLessThanOpAdaptor(SLessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SLessThanOp : public ::mlir::Op<SLessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SLessThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SModOp declarations
//===----------------------------------------------------------------------===//

class SModOpAdaptor {
public:
  SModOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SModOpAdaptor(SModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SModOp : public ::mlir::Op<SModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SModOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SNegateOp declarations
//===----------------------------------------------------------------------===//

class SNegateOpAdaptor {
public:
  SNegateOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SNegateOpAdaptor(SNegateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SNegateOp : public ::mlir::Op<SNegateOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SNegateOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SRemOp declarations
//===----------------------------------------------------------------------===//

class SRemOpAdaptor {
public:
  SRemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SRemOpAdaptor(SRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SRemOp : public ::mlir::Op<SRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SRemOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpAdaptor {
public:
  SelectOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SelectOpAdaptor(SelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::Value true_value();
  ::mlir::Value false_value();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SelectOp : public ::mlir::Op<SelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::Value true_value();
  ::mlir::Value false_value();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange true_valueMutable();
  ::mlir::MutableOperandRange false_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state,
                              Value cond, Value trueValue,
                              Value falseValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value condition, ::mlir::Value true_value, ::mlir::Value false_value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value condition, ::mlir::Value true_value, ::mlir::Value false_value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SelectionOp declarations
//===----------------------------------------------------------------------===//

class SelectionOpAdaptor {
public:
  SelectionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SelectionOpAdaptor(SelectionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr selection_control();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SelectionOp : public ::mlir::Op<SelectionOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectionOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &body();
  ::mlir::IntegerAttr selection_controlAttr();
  ::mlir::spirv::SelectionControl selection_control();
  void selection_controlAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr selection_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr selection_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::spirv::SelectionControl selection_control);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::SelectionControl selection_control);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    /// Returns the selection header block.
    Block *getHeaderBlock();

    /// Returns the selection merge block.
    Block *getMergeBlock();

    /// Adds a selection merge block containing one spv._merge op.
    void addMergeBlock();

    /// Creates a spv.selection op for `if (<condition>) then { <thenBody> }`
    /// with `builder`. `builder`'s insertion point will remain at after the
    /// newly inserted spv.selection op afterwards.
    static SelectionOp createIfThen(
        Location loc, Value condition,
        function_ref<void(OpBuilder &builder)> thenBody,
        OpBuilder &builder);
  
};

//===----------------------------------------------------------------------===//
// spirv::ShiftLeftLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftLeftLogicalOpAdaptor {
public:
  ShiftLeftLogicalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ShiftLeftLogicalOpAdaptor(ShiftLeftLogicalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ShiftLeftLogicalOp : public ::mlir::Op<ShiftLeftLogicalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftLeftLogicalOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ShiftRightArithmeticOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightArithmeticOpAdaptor {
public:
  ShiftRightArithmeticOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ShiftRightArithmeticOpAdaptor(ShiftRightArithmeticOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ShiftRightArithmeticOp : public ::mlir::Op<ShiftRightArithmeticOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftRightArithmeticOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ShiftRightLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightLogicalOpAdaptor {
public:
  ShiftRightLogicalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ShiftRightLogicalOpAdaptor(ShiftRightLogicalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ShiftRightLogicalOp : public ::mlir::Op<ShiftRightLogicalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftRightLogicalOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SpecConstantOp declarations
//===----------------------------------------------------------------------===//

class SpecConstantOpAdaptor {
public:
  SpecConstantOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SpecConstantOpAdaptor(SpecConstantOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::StringAttr sym_name();
  ::mlir::Attribute default_value();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SpecConstantOp : public ::mlir::Op<SpecConstantOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::SymbolOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SpecConstantOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr sym_nameAttr();
  ::llvm::StringRef sym_name();
  ::mlir::Attribute default_valueAttr();
  ::mlir::Attribute default_value();
  void sym_nameAttr(::mlir::StringAttr attr);
  void default_valueAttr(::mlir::Attribute attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::Attribute default_value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::StringAttr sym_name, ::mlir::Attribute default_value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::Attribute default_value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef sym_name, ::mlir::Attribute default_value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpAdaptor {
public:
  StoreOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  StoreOpAdaptor(StoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::Value value();
  ::mlir::IntegerAttr memory_access();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class StoreOp : public ::mlir::Op<StoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StoreOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::Value value();
  ::mlir::MutableOperandRange ptrMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr memory_accessAttr();
  ::llvm::Optional<::mlir::spirv::MemoryAccess> memory_access();
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > alignment();
  void memory_accessAttr(::mlir::IntegerAttr attr);
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value ptr, Value value, ArrayRef<NamedAttribute> namedAttrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ptr, ::mlir::Value value, /*optional*/::mlir::IntegerAttr memory_access, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value ptr, ::mlir::Value value, /*optional*/::mlir::IntegerAttr memory_access, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SubgroupBallotKHROp declarations
//===----------------------------------------------------------------------===//

class SubgroupBallotKHROpAdaptor {
public:
  SubgroupBallotKHROpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SubgroupBallotKHROpAdaptor(SubgroupBallotKHROp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value predicate();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SubgroupBallotKHROp : public ::mlir::Op<SubgroupBallotKHROp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubgroupBallotKHROpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value predicate();
  ::mlir::MutableOperandRange predicateMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value predicate);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpAdaptor {
public:
  TransposeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  TransposeOpAdaptor(TransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class TransposeOp : public ::mlir::Op<TransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TransposeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::MutableOperandRange matrixMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value matrix);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UConvertOp declarations
//===----------------------------------------------------------------------===//

class UConvertOpAdaptor {
public:
  UConvertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UConvertOpAdaptor(UConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UConvertOp : public ::mlir::Op<UConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UConvertOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UDivOp declarations
//===----------------------------------------------------------------------===//

class UDivOpAdaptor {
public:
  UDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UDivOpAdaptor(UDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UDivOp : public ::mlir::Op<UDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UDivOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class UGreaterThanEqualOpAdaptor {
public:
  UGreaterThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UGreaterThanEqualOpAdaptor(UGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UGreaterThanEqualOp : public ::mlir::Op<UGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UGreaterThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class UGreaterThanOpAdaptor {
public:
  UGreaterThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UGreaterThanOpAdaptor(UGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UGreaterThanOp : public ::mlir::Op<UGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UGreaterThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ULessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class ULessThanEqualOpAdaptor {
public:
  ULessThanEqualOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ULessThanEqualOpAdaptor(ULessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ULessThanEqualOp : public ::mlir::Op<ULessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ULessThanEqualOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ULessThanOp declarations
//===----------------------------------------------------------------------===//

class ULessThanOpAdaptor {
public:
  ULessThanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ULessThanOpAdaptor(ULessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ULessThanOp : public ::mlir::Op<ULessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ULessThanOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(OpBuilder &builder, OperationState &state, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UModOp declarations
//===----------------------------------------------------------------------===//

class UModOpAdaptor {
public:
  UModOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UModOpAdaptor(UModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UModOp : public ::mlir::Op<UModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UModOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand1();
  ::mlir::Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand1, ::mlir::Value operand2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UndefOp declarations
//===----------------------------------------------------------------------===//

class UndefOpAdaptor {
public:
  UndefOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UndefOpAdaptor(UndefOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UndefOp : public ::mlir::Op<UndefOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UndefOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::UnreachableOp declarations
//===----------------------------------------------------------------------===//

class UnreachableOpAdaptor {
public:
  UnreachableOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UnreachableOpAdaptor(UnreachableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UnreachableOp : public ::mlir::Op<UnreachableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnreachableOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::VariableOp declarations
//===----------------------------------------------------------------------===//

class VariableOpAdaptor {
public:
  VariableOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  VariableOpAdaptor(VariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value initializer();
  ::mlir::IntegerAttr storage_class();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class VariableOp : public ::mlir::Op<VariableOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = VariableOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value initializer();
  ::mlir::MutableOperandRange initializerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value pointer();
  ::mlir::IntegerAttr storage_classAttr();
  ::mlir::spirv::StorageClass storage_class();
  void storage_classAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pointer, ::mlir::IntegerAttr storage_class, /*optional*/::mlir::Value initializer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr storage_class, /*optional*/::mlir::Value initializer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pointer, ::mlir::spirv::StorageClass storage_class, /*optional*/::mlir::Value initializer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::spirv::StorageClass storage_class, /*optional*/::mlir::Value initializer);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

#endif  // GET_OP_CLASSES

