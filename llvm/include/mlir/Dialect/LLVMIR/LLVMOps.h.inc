/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class AShrOp;
class AddOp;
class AddrSpaceCastOp;
class AddressOfOp;
class AllocaOp;
class AndOp;
class AssumeOp;
class AtomicCmpXchgOp;
class AtomicRMWOp;
class BitReverseOp;
class BitcastOp;
class BrOp;
class CallOp;
class CondBrOp;
class ConstantOp;
class CopySignOp;
class CosOp;
class CtPopOp;
class DialectCastOp;
class Exp2Op;
class ExpOp;
class ExtractElementOp;
class ExtractValueOp;
class FAbsOp;
class FAddOp;
class FCeilOp;
class FCmpOp;
class FDivOp;
class FMAOp;
class FMulAddOp;
class FMulOp;
class FNegOp;
class FPExtOp;
class FPToSIOp;
class FPToUIOp;
class FPTruncOp;
class FRemOp;
class FSubOp;
class FenceOp;
class FreezeOp;
class GEPOp;
class GlobalOp;
class ICmpOp;
class InsertElementOp;
class InsertValueOp;
class IntToPtrOp;
class InvokeOp;
class LLVMFuncOp;
class LShrOp;
class LandingpadOp;
class LoadOp;
class Log10Op;
class Log2Op;
class LogOp;
class MaskedLoadOp;
class MaskedStoreOp;
class MatrixColumnMajorLoadOp;
class MatrixColumnMajorStoreOp;
class MatrixMultiplyOp;
class MatrixTransposeOp;
class MemcpyInlineOp;
class MemcpyOp;
class MulOp;
class NullOp;
class OrOp;
class PowOp;
class Prefetch;
class PtrToIntOp;
class ResumeOp;
class ReturnOp;
class SDivOp;
class SExtOp;
class SIToFPOp;
class SRemOp;
class SelectOp;
class ShlOp;
class ShuffleVectorOp;
class SinOp;
class SqrtOp;
class StoreOp;
class SubOp;
class TruncOp;
class UDivOp;
class UIToFPOp;
class URemOp;
class UndefOp;
class UnreachableOp;
class XOrOp;
class ZExtOp;
class experimental_vector_reduce_add;
class experimental_vector_reduce_and;
class experimental_vector_reduce_fmax;
class experimental_vector_reduce_fmin;
class experimental_vector_reduce_mul;
class experimental_vector_reduce_or;
class experimental_vector_reduce_smax;
class experimental_vector_reduce_smin;
class experimental_vector_reduce_umax;
class experimental_vector_reduce_umin;
class experimental_vector_reduce_v2_fadd;
class experimental_vector_reduce_v2_fmul;
class experimental_vector_reduce_xor;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// LLVM::AShrOp declarations
//===----------------------------------------------------------------------===//

class AShrOpAdaptor {
public:
  AShrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AShrOpAdaptor(AShrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AShrOp : public ::mlir::Op<AShrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AShrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AddOp declarations
//===----------------------------------------------------------------------===//

class AddOpAdaptor {
public:
  AddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AddOpAdaptor(AddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AddOp : public ::mlir::Op<AddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Adaptor = AddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AddrSpaceCastOp declarations
//===----------------------------------------------------------------------===//

class AddrSpaceCastOpAdaptor {
public:
  AddrSpaceCastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AddrSpaceCastOpAdaptor(AddrSpaceCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AddrSpaceCastOp : public ::mlir::Op<AddrSpaceCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddrSpaceCastOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AddressOfOp declarations
//===----------------------------------------------------------------------===//

class AddressOfOpAdaptor {
public:
  AddressOfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AddressOfOpAdaptor(AddressOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::FlatSymbolRefAttr global_name();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AddressOfOp : public ::mlir::Op<AddressOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = AddressOfOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::FlatSymbolRefAttr global_nameAttr();
  ::llvm::StringRef global_name();
  void global_nameAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &result, LLVMType resType, StringRef name, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &builder, OperationState &result, GlobalOp global, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &builder, OperationState &result, LLVMFuncOp func, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::FlatSymbolRefAttr global_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::FlatSymbolRefAttr global_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::llvm::StringRef global_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef global_name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    /// Return the llvm.mlir.global operation that defined the value referenced
    /// here.
    GlobalOp getGlobal();

    /// Return the llvm.func operation that is referenced here.
    LLVMFuncOp getFunction();
  
};

//===----------------------------------------------------------------------===//
// LLVM::AllocaOp declarations
//===----------------------------------------------------------------------===//

class AllocaOpAdaptor {
public:
  AllocaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AllocaOpAdaptor(AllocaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arraySize();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AllocaOp : public ::mlir::Op<AllocaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = AllocaOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arraySize();
  ::mlir::MutableOperandRange arraySizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > alignment();
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, Type resultType, Value arraySize, unsigned alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arraySize, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arraySize, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AndOp declarations
//===----------------------------------------------------------------------===//

class AndOpAdaptor {
public:
  AndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AndOpAdaptor(AndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AndOp : public ::mlir::Op<AndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AndOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AssumeOp declarations
//===----------------------------------------------------------------------===//

class AssumeOpAdaptor {
public:
  AssumeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AssumeOpAdaptor(AssumeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value cond();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AssumeOp : public ::mlir::Op<AssumeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = AssumeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value cond();
  ::mlir::MutableOperandRange condMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value cond);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value cond);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AtomicCmpXchgOp declarations
//===----------------------------------------------------------------------===//

class AtomicCmpXchgOpAdaptor {
public:
  AtomicCmpXchgOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicCmpXchgOpAdaptor(AtomicCmpXchgOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::Value cmp();
  ::mlir::Value val();
  ::mlir::IntegerAttr success_ordering();
  ::mlir::IntegerAttr failure_ordering();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicCmpXchgOp : public ::mlir::Op<AtomicCmpXchgOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = AtomicCmpXchgOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::Value cmp();
  ::mlir::Value val();
  ::mlir::MutableOperandRange ptrMutable();
  ::mlir::MutableOperandRange cmpMutable();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr success_orderingAttr();
  ::mlir::LLVM::AtomicOrdering success_ordering();
  ::mlir::IntegerAttr failure_orderingAttr();
  ::mlir::LLVM::AtomicOrdering failure_ordering();
  void success_orderingAttr(::mlir::IntegerAttr attr);
  void failure_orderingAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value ptr, ::mlir::Value cmp, ::mlir::Value val, ::mlir::IntegerAttr success_ordering, ::mlir::IntegerAttr failure_ordering);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value ptr, ::mlir::Value cmp, ::mlir::Value val, ::mlir::IntegerAttr success_ordering, ::mlir::IntegerAttr failure_ordering);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value ptr, ::mlir::Value cmp, ::mlir::Value val, ::mlir::LLVM::AtomicOrdering success_ordering, ::mlir::LLVM::AtomicOrdering failure_ordering);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value ptr, ::mlir::Value cmp, ::mlir::Value val, ::mlir::LLVM::AtomicOrdering success_ordering, ::mlir::LLVM::AtomicOrdering failure_ordering);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AtomicRMWOp declarations
//===----------------------------------------------------------------------===//

class AtomicRMWOpAdaptor {
public:
  AtomicRMWOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  AtomicRMWOpAdaptor(AtomicRMWOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::Value val();
  ::mlir::IntegerAttr bin_op();
  ::mlir::IntegerAttr ordering();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class AtomicRMWOp : public ::mlir::Op<AtomicRMWOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = AtomicRMWOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value ptr();
  ::mlir::Value val();
  ::mlir::MutableOperandRange ptrMutable();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr bin_opAttr();
  ::mlir::LLVM::AtomicBinOp bin_op();
  ::mlir::IntegerAttr orderingAttr();
  ::mlir::LLVM::AtomicOrdering ordering();
  void bin_opAttr(::mlir::IntegerAttr attr);
  void orderingAttr(::mlir::IntegerAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::IntegerAttr bin_op, ::mlir::Value ptr, ::mlir::Value val, ::mlir::IntegerAttr ordering);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr bin_op, ::mlir::Value ptr, ::mlir::Value val, ::mlir::IntegerAttr ordering);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::LLVM::AtomicBinOp bin_op, ::mlir::Value ptr, ::mlir::Value val, ::mlir::LLVM::AtomicOrdering ordering);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::LLVM::AtomicBinOp bin_op, ::mlir::Value ptr, ::mlir::Value val, ::mlir::LLVM::AtomicOrdering ordering);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::BitReverseOp declarations
//===----------------------------------------------------------------------===//

class BitReverseOpAdaptor {
public:
  BitReverseOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitReverseOpAdaptor(BitReverseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitReverseOp : public ::mlir::Op<BitReverseOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = BitReverseOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpAdaptor {
public:
  BitcastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BitcastOpAdaptor(BitcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BitcastOp : public ::mlir::Op<BitcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitcastOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::BrOp declarations
//===----------------------------------------------------------------------===//

class BrOpAdaptor {
public:
  BrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BrOpAdaptor(BrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange destOperands();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BrOp : public ::mlir::Op<BrOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::OneSuccessor, OpTrait::VariadicOperands, ::mlir::BranchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = BrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range destOperands();
  ::mlir::MutableOperandRange destOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *dest();
  static void build(OpBuilder &, OperationState &result, ValueRange operands, SuccessorRange destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange destOperands, ::mlir::Block *dest);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CallOp declarations
//===----------------------------------------------------------------------===//

class CallOpAdaptor {
public:
  CallOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CallOpAdaptor(CallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::FlatSymbolRefAttr callee();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CallOp : public ::mlir::Op<CallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = CallOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::FlatSymbolRefAttr calleeAttr();
  ::llvm::Optional< ::llvm::StringRef > callee();
  void calleeAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &result, LLVMFuncOp func,ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultType0, /*optional*/::mlir::FlatSymbolRefAttr callee, ::mlir::ValueRange odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::CondBrOp declarations
//===----------------------------------------------------------------------===//

class CondBrOpAdaptor {
public:
  CondBrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs);
  CondBrOpAdaptor(CondBrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::ValueRange trueDestOperands();
  ::mlir::ValueRange falseDestOperands();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CondBrOp : public ::mlir::Op<CondBrOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::NSuccessors<2>::Impl, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, ::mlir::BranchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = CondBrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::Operation::operand_range trueDestOperands();
  ::mlir::Operation::operand_range falseDestOperands();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange trueDestOperandsMutable();
  ::mlir::MutableOperandRange falseDestOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *trueDest();
  ::mlir::Block *falseDest();
  static void build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, ValueRange trueOperands,Block *falseDest, ValueRange falseOperands);
  static void build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, Block *falseDest, ValueRange falseOperands = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, SuccessorRange destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value condition, ::mlir::ValueRange trueDestOperands, ::mlir::ValueRange falseDestOperands, ::mlir::Block *trueDest, ::mlir::Block *falseDest);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value condition, ::mlir::ValueRange trueDestOperands, ::mlir::ValueRange falseDestOperands, ::mlir::Block *trueDest, ::mlir::Block *falseDest);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ConstantOp declarations
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
class ConstantOp : public ::mlir::Op<ConstantOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstantOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::Attribute valueAttr();
  ::mlir::Attribute value();
  void valueAttr(::mlir::Attribute attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Attribute value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Attribute value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CopySignOp declarations
//===----------------------------------------------------------------------===//

class CopySignOpAdaptor {
public:
  CopySignOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CopySignOpAdaptor(CopySignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CopySignOp : public ::mlir::Op<CopySignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CopySignOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value a, ::mlir::Value b);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpAdaptor {
public:
  CosOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CosOpAdaptor(CosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CosOp : public ::mlir::Op<CosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CosOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CtPopOp declarations
//===----------------------------------------------------------------------===//

class CtPopOpAdaptor {
public:
  CtPopOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CtPopOpAdaptor(CtPopOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CtPopOp : public ::mlir::Op<CtPopOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CtPopOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::DialectCastOp declarations
//===----------------------------------------------------------------------===//

class DialectCastOpAdaptor {
public:
  DialectCastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  DialectCastOpAdaptor(DialectCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class DialectCastOp : public ::mlir::Op<DialectCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DialectCastOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::Exp2Op declarations
//===----------------------------------------------------------------------===//

class Exp2OpAdaptor {
public:
  Exp2OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  Exp2OpAdaptor(Exp2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class Exp2Op : public ::mlir::Op<Exp2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = Exp2OpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpAdaptor {
public:
  ExpOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ExpOpAdaptor(ExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ExpOp : public ::mlir::Op<ExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = ExpOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ExtractElementOp declarations
//===----------------------------------------------------------------------===//

class ExtractElementOpAdaptor {
public:
  ExtractElementOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ExtractElementOpAdaptor(ExtractElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value vector();
  ::mlir::Value position();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ExtractElementOp : public ::mlir::Op<ExtractElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractElementOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value vector();
  ::mlir::Value position();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange positionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &b, OperationState &result, Value vector, Value position,ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value vector, ::mlir::Value position);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::Value position);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ExtractValueOp declarations
//===----------------------------------------------------------------------===//

class ExtractValueOpAdaptor {
public:
  ExtractValueOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ExtractValueOpAdaptor(ExtractValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value container();
  ::mlir::ArrayAttr position();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ExtractValueOp : public ::mlir::Op<ExtractValueOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractValueOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value container();
  ::mlir::MutableOperandRange containerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::ArrayAttr positionAttr();
  ::mlir::ArrayAttr position();
  void positionAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value container, ::mlir::ArrayAttr position);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value container, ::mlir::ArrayAttr position);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FAbsOp declarations
//===----------------------------------------------------------------------===//

class FAbsOpAdaptor {
public:
  FAbsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FAbsOpAdaptor(FAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FAbsOp : public ::mlir::Op<FAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FAbsOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FAddOp declarations
//===----------------------------------------------------------------------===//

class FAddOpAdaptor {
public:
  FAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FAddOpAdaptor(FAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FAddOp : public ::mlir::Op<FAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FAddOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FCeilOp declarations
//===----------------------------------------------------------------------===//

class FCeilOpAdaptor {
public:
  FCeilOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FCeilOpAdaptor(FCeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FCeilOp : public ::mlir::Op<FCeilOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FCeilOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FCmpOp declarations
//===----------------------------------------------------------------------===//

class FCmpOpAdaptor {
public:
  FCmpOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FCmpOpAdaptor(FCmpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::IntegerAttr predicate();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FCmpOp : public ::mlir::Op<FCmpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FCmpOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr predicateAttr();
  ::mlir::LLVM::FCmpPredicate predicate();
  void predicateAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::IntegerAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::LLVM::FCmpPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::LLVM::FCmpPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FDivOp declarations
//===----------------------------------------------------------------------===//

class FDivOpAdaptor {
public:
  FDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FDivOpAdaptor(FDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FDivOp : public ::mlir::Op<FDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FDivOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FMAOp declarations
//===----------------------------------------------------------------------===//

class FMAOpAdaptor {
public:
  FMAOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FMAOpAdaptor(FMAOp& op);
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
class FMAOp : public ::mlir::Op<FMAOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FMAOpAdaptor;
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
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FMulAddOp declarations
//===----------------------------------------------------------------------===//

class FMulAddOpAdaptor {
public:
  FMulAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FMulAddOpAdaptor(FMulAddOp& op);
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
class FMulAddOp : public ::mlir::Op<FMulAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FMulAddOpAdaptor;
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
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FMulOp declarations
//===----------------------------------------------------------------------===//

class FMulOpAdaptor {
public:
  FMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FMulOpAdaptor(FMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FMulOp : public ::mlir::Op<FMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FMulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FNegOp declarations
//===----------------------------------------------------------------------===//

class FNegOpAdaptor {
public:
  FNegOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FNegOpAdaptor(FNegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FNegOp : public ::mlir::Op<FNegOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FNegOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPExtOp declarations
//===----------------------------------------------------------------------===//

class FPExtOpAdaptor {
public:
  FPExtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FPExtOpAdaptor(FPExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FPExtOp : public ::mlir::Op<FPExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPExtOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPToSIOp declarations
//===----------------------------------------------------------------------===//

class FPToSIOpAdaptor {
public:
  FPToSIOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FPToSIOpAdaptor(FPToSIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FPToSIOp : public ::mlir::Op<FPToSIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPToSIOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPToUIOp declarations
//===----------------------------------------------------------------------===//

class FPToUIOpAdaptor {
public:
  FPToUIOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FPToUIOpAdaptor(FPToUIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FPToUIOp : public ::mlir::Op<FPToUIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPToUIOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPTruncOp declarations
//===----------------------------------------------------------------------===//

class FPTruncOpAdaptor {
public:
  FPTruncOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FPTruncOpAdaptor(FPTruncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FPTruncOp : public ::mlir::Op<FPTruncOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPTruncOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FRemOp declarations
//===----------------------------------------------------------------------===//

class FRemOpAdaptor {
public:
  FRemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FRemOpAdaptor(FRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FRemOp : public ::mlir::Op<FRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FRemOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FSubOp declarations
//===----------------------------------------------------------------------===//

class FSubOpAdaptor {
public:
  FSubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FSubOpAdaptor(FSubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FSubOp : public ::mlir::Op<FSubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FSubOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FenceOp declarations
//===----------------------------------------------------------------------===//

class FenceOpAdaptor {
public:
  FenceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FenceOpAdaptor(FenceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr ordering();
  ::mlir::StringAttr syncscope();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FenceOp : public ::mlir::Op<FenceOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = FenceOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr orderingAttr();
  ::mlir::LLVM::AtomicOrdering ordering();
  ::mlir::StringAttr syncscopeAttr();
  ::llvm::StringRef syncscope();
  void orderingAttr(::mlir::IntegerAttr attr);
  void syncscopeAttr(::mlir::StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr ordering, ::mlir::StringAttr syncscope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr ordering, ::mlir::StringAttr syncscope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::LLVM::AtomicOrdering ordering, ::llvm::StringRef syncscope);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::LLVM::AtomicOrdering ordering, ::llvm::StringRef syncscope);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FreezeOp declarations
//===----------------------------------------------------------------------===//

class FreezeOpAdaptor {
public:
  FreezeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FreezeOpAdaptor(FreezeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value val();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FreezeOp : public ::mlir::Op<FreezeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FreezeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value val();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value val);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value val);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value val);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::GEPOp declarations
//===----------------------------------------------------------------------===//

class GEPOpAdaptor {
public:
  GEPOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GEPOpAdaptor(GEPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::ValueRange indices();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GEPOp : public ::mlir::Op<GEPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GEPOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value base();
  ::mlir::Operation::operand_range indices();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value base, ::mlir::ValueRange indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value base, ::mlir::ValueRange indices);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::GlobalOp declarations
//===----------------------------------------------------------------------===//

class GlobalOpAdaptor {
public:
  GlobalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GlobalOpAdaptor(GlobalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::TypeAttr type();
  ::mlir::UnitAttr constant();
  ::mlir::StringAttr sym_name();
  ::mlir::IntegerAttr linkage();
  ::mlir::Attribute value();
  ::mlir::IntegerAttr addr_space();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GlobalOp : public ::mlir::Op<GlobalOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl, ::mlir::SymbolOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GlobalOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &initializer();
  ::mlir::TypeAttr typeAttr();
  ::mlir::Type type();
  ::mlir::UnitAttr constantAttr();
  bool constant();
  ::mlir::StringAttr sym_nameAttr();
  ::llvm::StringRef sym_name();
  ::mlir::IntegerAttr linkageAttr();
  ::mlir::LLVM::Linkage linkage();
  ::mlir::Attribute valueAttr();
  ::llvm::Optional<::mlir::Attribute> value();
  ::mlir::IntegerAttr addr_spaceAttr();
  ::llvm::APInt addr_space();
  void typeAttr(::mlir::TypeAttr attr);
  void constantAttr(::mlir::UnitAttr attr);
  void sym_nameAttr(::mlir::StringAttr attr);
  void linkageAttr(::mlir::IntegerAttr attr);
  void valueAttr(::mlir::Attribute attr);
  void addr_spaceAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, LLVMType type, bool isConstant, Linkage linkage, StringRef name, Attribute value, unsigned addrSpace = 0, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeAttr type, /*optional*/::mlir::UnitAttr constant, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr linkage, /*optional*/::mlir::Attribute value, ::mlir::IntegerAttr addr_space);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type, /*optional*/::mlir::UnitAttr constant, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr linkage, /*optional*/::mlir::Attribute value, ::mlir::IntegerAttr addr_space);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeAttr type, /*optional*/bool constant, ::llvm::StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/::mlir::Attribute value, ::llvm::APInt addr_space);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::TypeAttr type, /*optional*/bool constant, ::llvm::StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/::mlir::Attribute value, ::llvm::APInt addr_space);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();

    /// Return the LLVM type of the global.
    LLVMType getType() {
      return type().cast<LLVMType>();
    }
    /// Return the initializer attribute if it exists, or a null attribute.
    Attribute getValueOrNull() {
      return value().getValueOr(Attribute());
    }
    /// Return the initializer region. This may be empty, but if it is not it
    /// terminates in an `llvm.return` op with the initializer value.
    Region &getInitializerRegion() {
      return getOperation()->getRegion(0);
    }
    /// Return the initializer block. If the initializer region is empty this
    /// is nullptr. If it is not nullptr, it terminates with an `llvm.return`
    /// op with the initializer value.
    Block *getInitializerBlock() {
      return getInitializerRegion().empty() ?
        nullptr : &getInitializerRegion().front();
    }
  
};

//===----------------------------------------------------------------------===//
// LLVM::ICmpOp declarations
//===----------------------------------------------------------------------===//

class ICmpOpAdaptor {
public:
  ICmpOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ICmpOpAdaptor(ICmpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::IntegerAttr predicate();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ICmpOp : public ::mlir::Op<ICmpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ICmpOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr predicateAttr();
  ::mlir::LLVM::ICmpPredicate predicate();
  void predicateAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::IntegerAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::LLVM::ICmpPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::LLVM::ICmpPredicate predicate, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::InsertElementOp declarations
//===----------------------------------------------------------------------===//

class InsertElementOpAdaptor {
public:
  InsertElementOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  InsertElementOpAdaptor(InsertElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value vector();
  ::mlir::Value value();
  ::mlir::Value position();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class InsertElementOp : public ::mlir::Op<InsertElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertElementOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value vector();
  ::mlir::Value value();
  ::mlir::Value position();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange positionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value vector, ::mlir::Value value, ::mlir::Value position);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::Value value, ::mlir::Value position);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::InsertValueOp declarations
//===----------------------------------------------------------------------===//

class InsertValueOpAdaptor {
public:
  InsertValueOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  InsertValueOpAdaptor(InsertValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value container();
  ::mlir::Value value();
  ::mlir::ArrayAttr position();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class InsertValueOp : public ::mlir::Op<InsertValueOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertValueOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value container();
  ::mlir::Value value();
  ::mlir::MutableOperandRange containerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::ArrayAttr positionAttr();
  ::mlir::ArrayAttr position();
  void positionAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value container, Value value, ArrayAttr position);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value container, ::mlir::Value value, ::mlir::ArrayAttr position);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value container, ::mlir::Value value, ::mlir::ArrayAttr position);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::IntToPtrOp declarations
//===----------------------------------------------------------------------===//

class IntToPtrOpAdaptor {
public:
  IntToPtrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  IntToPtrOpAdaptor(IntToPtrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class IntToPtrOp : public ::mlir::Op<IntToPtrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IntToPtrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::InvokeOp declarations
//===----------------------------------------------------------------------===//

class InvokeOpAdaptor {
public:
  InvokeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs);
  InvokeOpAdaptor(InvokeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange operands();
  ::mlir::ValueRange normalDestOperands();
  ::mlir::ValueRange unwindDestOperands();
  ::mlir::FlatSymbolRefAttr callee();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class InvokeOp : public ::mlir::Op<InvokeOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::NSuccessors<2>::Impl, OpTrait::VariadicOperands, OpTrait::AttrSizedOperandSegments, ::mlir::BranchOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = InvokeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range operands();
  ::mlir::Operation::operand_range normalDestOperands();
  ::mlir::Operation::operand_range unwindDestOperands();
  ::mlir::MutableOperandRange operandsMutable();
  ::mlir::MutableOperandRange normalDestOperandsMutable();
  ::mlir::MutableOperandRange unwindDestOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *normalDest();
  ::mlir::Block *unwindDest();
  ::mlir::FlatSymbolRefAttr calleeAttr();
  ::llvm::Optional< ::llvm::StringRef > callee();
  void calleeAttr(::mlir::FlatSymbolRefAttr attr);
  static void build(OpBuilder &b, OperationState &result, ArrayRef<Type> tys, FlatSymbolRefAttr callee, ValueRange ops, Block* normal, ValueRange normalOps, Block* unwind, ValueRange unwindOps);
  static void build(OpBuilder &b, OperationState &result, ArrayRef<Type> tys, ValueRange ops, Block* normal, ValueRange normalOps, Block* unwind, ValueRange unwindOps);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultType0, /*optional*/::mlir::FlatSymbolRefAttr callee, ::mlir::ValueRange operands, ::mlir::ValueRange normalDestOperands, ::mlir::ValueRange unwindDestOperands, ::mlir::Block *normalDest, ::mlir::Block *unwindDest);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
};

//===----------------------------------------------------------------------===//
// LLVM::LLVMFuncOp declarations
//===----------------------------------------------------------------------===//

class LLVMFuncOpAdaptor {
public:
  LLVMFuncOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LLVMFuncOpAdaptor(LLVMFuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::IntegerAttr linkage();
  ::mlir::FlatSymbolRefAttr personality();
  ::mlir::ArrayAttr passthrough();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LLVMFuncOp : public ::mlir::Op<LLVMFuncOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::AutomaticAllocationScope, OpTrait::IsIsolatedFromAbove, OpTrait::FunctionLike, ::mlir::SymbolOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LLVMFuncOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &body();
  ::mlir::IntegerAttr linkageAttr();
  ::mlir::LLVM::Linkage linkage();
  ::mlir::FlatSymbolRefAttr personalityAttr();
  ::llvm::Optional< ::llvm::StringRef > personality();
  ::mlir::ArrayAttr passthroughAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > passthrough();
  void linkageAttr(::mlir::IntegerAttr attr);
  void personalityAttr(::mlir::FlatSymbolRefAttr attr);
  void passthroughAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, StringRef name, LLVMType type, LLVM::Linkage linkage = LLVM::Linkage::External, ArrayRef<NamedAttribute> attrs = {}, ArrayRef<MutableDictionaryAttr> argAttrs = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();

    // Add an entry block to an empty function, and set up the block arguments
    // to match the signature of the function.
    Block *addEntryBlock();

    LLVMType getType() {
      return getAttrOfType<TypeAttr>(getTypeAttrName())
          .getValue().cast<LLVMType>();
    }
    bool isVarArg() {
      return getType().getUnderlyingType()->isFunctionVarArg();
    }

    // Hook for OpTrait::FunctionLike, returns the number of function arguments.
    // Depends on the type attribute being correct as checked by verifyType.
    unsigned getNumFuncArguments();

    // Hook for OpTrait::FunctionLike, returns the number of function results.
    // Depends on the type attribute being correct as checked by verifyType.
    unsigned getNumFuncResults();

    // Hook for OpTrait::FunctionLike, called after verifying that the 'type'
    // attribute is present.  This can check for preconditions of the
    // getNumArguments hook not failing.
    LogicalResult verifyType();
  
};

//===----------------------------------------------------------------------===//
// LLVM::LShrOp declarations
//===----------------------------------------------------------------------===//

class LShrOpAdaptor {
public:
  LShrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LShrOpAdaptor(LShrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LShrOp : public ::mlir::Op<LShrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = LShrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::LandingpadOp declarations
//===----------------------------------------------------------------------===//

class LandingpadOpAdaptor {
public:
  LandingpadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LandingpadOpAdaptor(LandingpadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::UnitAttr cleanup();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LandingpadOp : public ::mlir::Op<LandingpadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = LandingpadOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::UnitAttr cleanupAttr();
  bool cleanup();
  void cleanupAttr(::mlir::UnitAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, /*optional*/::mlir::UnitAttr cleanup, ::mlir::ValueRange odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, /*optional*/::mlir::UnitAttr cleanup, ::mlir::ValueRange odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, /*optional*/bool cleanup, ::mlir::ValueRange odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, /*optional*/bool cleanup, ::mlir::ValueRange odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpAdaptor {
public:
  LoadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LoadOpAdaptor(LoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value addr();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LoadOp : public ::mlir::Op<LoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = LoadOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value addr();
  ::mlir::MutableOperandRange addrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > alignment();
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value addr, unsigned alignment = 0);
  static void build(OpBuilder &b, OperationState &result, Type t, Value addr, unsigned alignment = 0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value addr, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value addr, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::Log10Op declarations
//===----------------------------------------------------------------------===//

class Log10OpAdaptor {
public:
  Log10OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  Log10OpAdaptor(Log10Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class Log10Op : public ::mlir::Op<Log10Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = Log10OpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::Log2Op declarations
//===----------------------------------------------------------------------===//

class Log2OpAdaptor {
public:
  Log2OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  Log2OpAdaptor(Log2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class Log2Op : public ::mlir::Op<Log2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = Log2OpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpAdaptor {
public:
  LogOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  LogOpAdaptor(LogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class LogOp : public ::mlir::Op<LogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = LogOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::MaskedLoadOp declarations
//===----------------------------------------------------------------------===//

class MaskedLoadOpAdaptor {
public:
  MaskedLoadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MaskedLoadOpAdaptor(MaskedLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value data();
  ::mlir::Value mask();
  ::mlir::ValueRange pass_thru();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MaskedLoadOp : public ::mlir::Op<MaskedLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = MaskedLoadOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value data();
  ::mlir::Value mask();
  ::mlir::Operation::operand_range pass_thru();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange maskMutable();
  ::mlir::MutableOperandRange pass_thruMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::APInt alignment();
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value data, ::mlir::Value mask, ::mlir::ValueRange pass_thru, ::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value data, ::mlir::Value mask, ::mlir::ValueRange pass_thru, ::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value data, ::mlir::Value mask, ::mlir::ValueRange pass_thru, ::llvm::APInt alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value data, ::mlir::Value mask, ::mlir::ValueRange pass_thru, ::llvm::APInt alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MaskedStoreOp declarations
//===----------------------------------------------------------------------===//

class MaskedStoreOpAdaptor {
public:
  MaskedStoreOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MaskedStoreOpAdaptor(MaskedStoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value data();
  ::mlir::Value mask();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MaskedStoreOp : public ::mlir::Op<MaskedStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = MaskedStoreOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value data();
  ::mlir::Value mask();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange maskMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::APInt alignment();
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value data, ::mlir::Value mask, ::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value value, ::mlir::Value data, ::mlir::Value mask, ::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value data, ::mlir::Value mask, ::llvm::APInt alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value value, ::mlir::Value data, ::mlir::Value mask, ::llvm::APInt alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixColumnMajorLoadOp declarations
//===----------------------------------------------------------------------===//

class MatrixColumnMajorLoadOpAdaptor {
public:
  MatrixColumnMajorLoadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatrixColumnMajorLoadOpAdaptor(MatrixColumnMajorLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value data();
  ::mlir::Value stride();
  ::mlir::IntegerAttr isVolatile();
  ::mlir::IntegerAttr rows();
  ::mlir::IntegerAttr columns();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatrixColumnMajorLoadOp : public ::mlir::Op<MatrixColumnMajorLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = MatrixColumnMajorLoadOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value data();
  ::mlir::Value stride();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange strideMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr isVolatileAttr();
  ::llvm::APInt isVolatile();
  ::mlir::IntegerAttr rowsAttr();
  ::llvm::APInt rows();
  ::mlir::IntegerAttr columnsAttr();
  ::llvm::APInt columns();
  void isVolatileAttr(::mlir::IntegerAttr attr);
  void rowsAttr(::mlir::IntegerAttr attr);
  void columnsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value data, ::mlir::Value stride, ::mlir::IntegerAttr isVolatile, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value data, ::mlir::Value stride, ::mlir::IntegerAttr isVolatile, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value data, ::mlir::Value stride, ::llvm::APInt isVolatile, ::llvm::APInt rows, ::llvm::APInt columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value data, ::mlir::Value stride, ::llvm::APInt isVolatile, ::llvm::APInt rows, ::llvm::APInt columns);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixColumnMajorStoreOp declarations
//===----------------------------------------------------------------------===//

class MatrixColumnMajorStoreOpAdaptor {
public:
  MatrixColumnMajorStoreOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatrixColumnMajorStoreOpAdaptor(MatrixColumnMajorStoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::Value data();
  ::mlir::Value stride();
  ::mlir::IntegerAttr isVolatile();
  ::mlir::IntegerAttr rows();
  ::mlir::IntegerAttr columns();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatrixColumnMajorStoreOp : public ::mlir::Op<MatrixColumnMajorStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = MatrixColumnMajorStoreOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::Value data();
  ::mlir::Value stride();
  ::mlir::MutableOperandRange matrixMutable();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange strideMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr isVolatileAttr();
  ::llvm::APInt isVolatile();
  ::mlir::IntegerAttr rowsAttr();
  ::llvm::APInt rows();
  ::mlir::IntegerAttr columnsAttr();
  ::llvm::APInt columns();
  void isVolatileAttr(::mlir::IntegerAttr attr);
  void rowsAttr(::mlir::IntegerAttr attr);
  void columnsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value matrix, ::mlir::Value data, ::mlir::Value stride, ::mlir::IntegerAttr isVolatile, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::mlir::Value data, ::mlir::Value stride, ::mlir::IntegerAttr isVolatile, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value matrix, ::mlir::Value data, ::mlir::Value stride, ::llvm::APInt isVolatile, ::llvm::APInt rows, ::llvm::APInt columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::mlir::Value data, ::mlir::Value stride, ::llvm::APInt isVolatile, ::llvm::APInt rows, ::llvm::APInt columns);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixMultiplyOp declarations
//===----------------------------------------------------------------------===//

class MatrixMultiplyOpAdaptor {
public:
  MatrixMultiplyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatrixMultiplyOpAdaptor(MatrixMultiplyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::IntegerAttr lhs_rows();
  ::mlir::IntegerAttr lhs_columns();
  ::mlir::IntegerAttr rhs_columns();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatrixMultiplyOp : public ::mlir::Op<MatrixMultiplyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = MatrixMultiplyOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr lhs_rowsAttr();
  ::llvm::APInt lhs_rows();
  ::mlir::IntegerAttr lhs_columnsAttr();
  ::llvm::APInt lhs_columns();
  ::mlir::IntegerAttr rhs_columnsAttr();
  ::llvm::APInt rhs_columns();
  void lhs_rowsAttr(::mlir::IntegerAttr attr);
  void lhs_columnsAttr(::mlir::IntegerAttr attr);
  void rhs_columnsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::IntegerAttr lhs_rows, ::mlir::IntegerAttr lhs_columns, ::mlir::IntegerAttr rhs_columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::IntegerAttr lhs_rows, ::mlir::IntegerAttr lhs_columns, ::mlir::IntegerAttr rhs_columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::llvm::APInt lhs_rows, ::llvm::APInt lhs_columns, ::llvm::APInt rhs_columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::llvm::APInt lhs_rows, ::llvm::APInt lhs_columns, ::llvm::APInt rhs_columns);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixTransposeOp declarations
//===----------------------------------------------------------------------===//

class MatrixTransposeOpAdaptor {
public:
  MatrixTransposeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatrixTransposeOpAdaptor(MatrixTransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::IntegerAttr rows();
  ::mlir::IntegerAttr columns();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatrixTransposeOp : public ::mlir::Op<MatrixTransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = MatrixTransposeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value matrix();
  ::mlir::MutableOperandRange matrixMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::IntegerAttr rowsAttr();
  ::llvm::APInt rows();
  ::mlir::IntegerAttr columnsAttr();
  ::llvm::APInt columns();
  void rowsAttr(::mlir::IntegerAttr attr);
  void columnsAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrix, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrix, ::llvm::APInt rows, ::llvm::APInt columns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::llvm::APInt rows, ::llvm::APInt columns);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MemcpyInlineOp declarations
//===----------------------------------------------------------------------===//

class MemcpyInlineOpAdaptor {
public:
  MemcpyInlineOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MemcpyInlineOpAdaptor(MemcpyInlineOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value dst();
  ::mlir::Value src();
  ::mlir::Value len();
  ::mlir::Value isVolatile();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MemcpyInlineOp : public ::mlir::Op<MemcpyInlineOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using Adaptor = MemcpyInlineOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value dst();
  ::mlir::Value src();
  ::mlir::Value len();
  ::mlir::Value isVolatile();
  ::mlir::MutableOperandRange dstMutable();
  ::mlir::MutableOperandRange srcMutable();
  ::mlir::MutableOperandRange lenMutable();
  ::mlir::MutableOperandRange isVolatileMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value src, ::mlir::Value len, ::mlir::Value isVolatile);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value dst, ::mlir::Value src, ::mlir::Value len, ::mlir::Value isVolatile);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::MemcpyOp declarations
//===----------------------------------------------------------------------===//

class MemcpyOpAdaptor {
public:
  MemcpyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MemcpyOpAdaptor(MemcpyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value dst();
  ::mlir::Value src();
  ::mlir::Value len();
  ::mlir::Value isVolatile();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MemcpyOp : public ::mlir::Op<MemcpyOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using Adaptor = MemcpyOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value dst();
  ::mlir::Value src();
  ::mlir::Value len();
  ::mlir::Value isVolatile();
  ::mlir::MutableOperandRange dstMutable();
  ::mlir::MutableOperandRange srcMutable();
  ::mlir::MutableOperandRange lenMutable();
  ::mlir::MutableOperandRange isVolatileMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value src, ::mlir::Value len, ::mlir::Value isVolatile);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value dst, ::mlir::Value src, ::mlir::Value len, ::mlir::Value isVolatile);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::MulOp declarations
//===----------------------------------------------------------------------===//

class MulOpAdaptor {
public:
  MulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MulOpAdaptor(MulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MulOp : public ::mlir::Op<MulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Adaptor = MulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::NullOp declarations
//===----------------------------------------------------------------------===//

class NullOpAdaptor {
public:
  NullOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  NullOpAdaptor(NullOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class NullOp : public ::mlir::Op<NullOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NullOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::OrOp declarations
//===----------------------------------------------------------------------===//

class OrOpAdaptor {
public:
  OrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  OrOpAdaptor(OrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class OrOp : public ::mlir::Op<OrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = OrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::PowOp declarations
//===----------------------------------------------------------------------===//

class PowOpAdaptor {
public:
  PowOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  PowOpAdaptor(PowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class PowOp : public ::mlir::Op<PowOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = PowOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value a, ::mlir::Value b);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value a, ::mlir::Value b);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::Prefetch declarations
//===----------------------------------------------------------------------===//

class PrefetchAdaptor {
public:
  PrefetchAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  PrefetchAdaptor(Prefetch& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value addr();
  ::mlir::Value rw();
  ::mlir::Value hint();
  ::mlir::Value cache();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class Prefetch : public ::mlir::Op<Prefetch, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using Adaptor = PrefetchAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value addr();
  ::mlir::Value rw();
  ::mlir::Value hint();
  ::mlir::Value cache();
  ::mlir::MutableOperandRange addrMutable();
  ::mlir::MutableOperandRange rwMutable();
  ::mlir::MutableOperandRange hintMutable();
  ::mlir::MutableOperandRange cacheMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value rw, ::mlir::Value hint, ::mlir::Value cache);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value addr, ::mlir::Value rw, ::mlir::Value hint, ::mlir::Value cache);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::PtrToIntOp declarations
//===----------------------------------------------------------------------===//

class PtrToIntOpAdaptor {
public:
  PtrToIntOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  PtrToIntOpAdaptor(PtrToIntOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class PtrToIntOp : public ::mlir::Op<PtrToIntOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PtrToIntOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ResumeOp declarations
//===----------------------------------------------------------------------===//

class ResumeOpAdaptor {
public:
  ResumeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ResumeOpAdaptor(ResumeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ResumeOp : public ::mlir::Op<ResumeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ResumeOpAdaptor;
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
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange args();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReturnOp : public ::mlir::Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SDivOp declarations
//===----------------------------------------------------------------------===//

class SDivOpAdaptor {
public:
  SDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SDivOpAdaptor(SDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SDivOp : public ::mlir::Op<SDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SDivOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SExtOp declarations
//===----------------------------------------------------------------------===//

class SExtOpAdaptor {
public:
  SExtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SExtOpAdaptor(SExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SExtOp : public ::mlir::Op<SExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SExtOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SIToFPOp declarations
//===----------------------------------------------------------------------===//

class SIToFPOpAdaptor {
public:
  SIToFPOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SIToFPOpAdaptor(SIToFPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SIToFPOp : public ::mlir::Op<SIToFPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SIToFPOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SRemOp declarations
//===----------------------------------------------------------------------===//

class SRemOpAdaptor {
public:
  SRemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SRemOpAdaptor(SRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SRemOp : public ::mlir::Op<SRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SRemOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpAdaptor {
public:
  SelectOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SelectOpAdaptor(SelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::Value trueValue();
  ::mlir::Value falseValue();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SelectOp : public ::mlir::Op<SelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::Value trueValue();
  ::mlir::Value falseValue();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange trueValueMutable();
  ::mlir::MutableOperandRange falseValueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &b, OperationState &result, Value condition, Value lhs, Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value condition, ::mlir::Value trueValue, ::mlir::Value falseValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value condition, ::mlir::Value trueValue, ::mlir::Value falseValue);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ShlOp declarations
//===----------------------------------------------------------------------===//

class ShlOpAdaptor {
public:
  ShlOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ShlOpAdaptor(ShlOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ShlOp : public ::mlir::Op<ShlOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = ShlOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ShuffleVectorOp declarations
//===----------------------------------------------------------------------===//

class ShuffleVectorOpAdaptor {
public:
  ShuffleVectorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ShuffleVectorOpAdaptor(ShuffleVectorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value v1();
  ::mlir::Value v2();
  ::mlir::ArrayAttr mask();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ShuffleVectorOp : public ::mlir::Op<ShuffleVectorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShuffleVectorOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value v1();
  ::mlir::Value v2();
  ::mlir::MutableOperandRange v1Mutable();
  ::mlir::MutableOperandRange v2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::ArrayAttr maskAttr();
  ::mlir::ArrayAttr mask();
  void maskAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value v1, Value v2, ArrayAttr mask, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SinOp declarations
//===----------------------------------------------------------------------===//

class SinOpAdaptor {
public:
  SinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SinOpAdaptor(SinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SinOp : public ::mlir::Op<SinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SqrtOp declarations
//===----------------------------------------------------------------------===//

class SqrtOpAdaptor {
public:
  SqrtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SqrtOpAdaptor(SqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SqrtOp : public ::mlir::Op<SqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SqrtOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value in);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value in);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpAdaptor {
public:
  StoreOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  StoreOpAdaptor(StoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value addr();
  ::mlir::IntegerAttr alignment();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class StoreOp : public ::mlir::Op<StoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = StoreOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value value();
  ::mlir::Value addr();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange addrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr alignmentAttr();
  ::llvm::Optional< ::llvm::APInt > alignment();
  void alignmentAttr(::mlir::IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value value, Value addr, unsigned alignment = 0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value addr, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value value, ::mlir::Value addr, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SubOp declarations
//===----------------------------------------------------------------------===//

class SubOpAdaptor {
public:
  SubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SubOpAdaptor(SubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SubOp : public ::mlir::Op<SubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SubOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::TruncOp declarations
//===----------------------------------------------------------------------===//

class TruncOpAdaptor {
public:
  TruncOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  TruncOpAdaptor(TruncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class TruncOp : public ::mlir::Op<TruncOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TruncOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UDivOp declarations
//===----------------------------------------------------------------------===//

class UDivOpAdaptor {
public:
  UDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UDivOpAdaptor(UDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UDivOp : public ::mlir::Op<UDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = UDivOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UIToFPOp declarations
//===----------------------------------------------------------------------===//

class UIToFPOpAdaptor {
public:
  UIToFPOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  UIToFPOpAdaptor(UIToFPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class UIToFPOp : public ::mlir::Op<UIToFPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UIToFPOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::URemOp declarations
//===----------------------------------------------------------------------===//

class URemOpAdaptor {
public:
  URemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  URemOpAdaptor(URemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class URemOp : public ::mlir::Op<URemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = URemOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UndefOp declarations
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
class UndefOp : public ::mlir::Op<UndefOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UndefOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UnreachableOp declarations
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
class UnreachableOp : public ::mlir::Op<UnreachableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator> {
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
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::XOrOp declarations
//===----------------------------------------------------------------------===//

class XOrOpAdaptor {
public:
  XOrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  XOrOpAdaptor(XOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class XOrOp : public ::mlir::Op<XOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = XOrOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lhs();
  ::mlir::Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ZExtOp declarations
//===----------------------------------------------------------------------===//

class ZExtOpAdaptor {
public:
  ZExtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ZExtOpAdaptor(ZExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ZExtOp : public ::mlir::Op<ZExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ZExtOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_add declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_addAdaptor {
public:
  experimental_vector_reduce_addAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_addAdaptor(experimental_vector_reduce_add& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_add : public ::mlir::Op<experimental_vector_reduce_add, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_addAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_and declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_andAdaptor {
public:
  experimental_vector_reduce_andAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_andAdaptor(experimental_vector_reduce_and& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_and : public ::mlir::Op<experimental_vector_reduce_and, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_andAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_fmax declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_fmaxAdaptor {
public:
  experimental_vector_reduce_fmaxAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_fmaxAdaptor(experimental_vector_reduce_fmax& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_fmax : public ::mlir::Op<experimental_vector_reduce_fmax, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_fmaxAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_fmin declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_fminAdaptor {
public:
  experimental_vector_reduce_fminAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_fminAdaptor(experimental_vector_reduce_fmin& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_fmin : public ::mlir::Op<experimental_vector_reduce_fmin, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_fminAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_mul declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_mulAdaptor {
public:
  experimental_vector_reduce_mulAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_mulAdaptor(experimental_vector_reduce_mul& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_mul : public ::mlir::Op<experimental_vector_reduce_mul, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_mulAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_or declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_orAdaptor {
public:
  experimental_vector_reduce_orAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_orAdaptor(experimental_vector_reduce_or& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_or : public ::mlir::Op<experimental_vector_reduce_or, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_orAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_smax declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_smaxAdaptor {
public:
  experimental_vector_reduce_smaxAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_smaxAdaptor(experimental_vector_reduce_smax& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_smax : public ::mlir::Op<experimental_vector_reduce_smax, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_smaxAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_smin declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_sminAdaptor {
public:
  experimental_vector_reduce_sminAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_sminAdaptor(experimental_vector_reduce_smin& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_smin : public ::mlir::Op<experimental_vector_reduce_smin, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_sminAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_umax declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_umaxAdaptor {
public:
  experimental_vector_reduce_umaxAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_umaxAdaptor(experimental_vector_reduce_umax& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_umax : public ::mlir::Op<experimental_vector_reduce_umax, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_umaxAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_umin declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_uminAdaptor {
public:
  experimental_vector_reduce_uminAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_uminAdaptor(experimental_vector_reduce_umin& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_umin : public ::mlir::Op<experimental_vector_reduce_umin, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_uminAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_v2_fadd declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_v2_faddAdaptor {
public:
  experimental_vector_reduce_v2_faddAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_v2_faddAdaptor(experimental_vector_reduce_v2_fadd& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::BoolAttr reassoc();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_v2_fadd : public ::mlir::Op<experimental_vector_reduce_v2_fadd, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_v2_faddAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::BoolAttr reassocAttr();
  bool reassoc();
  void reassocAttr(::mlir::BoolAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::BoolAttr reassoc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::BoolAttr reassoc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, bool reassoc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, bool reassoc = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_v2_fmul declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_v2_fmulAdaptor {
public:
  experimental_vector_reduce_v2_fmulAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_v2_fmulAdaptor(experimental_vector_reduce_v2_fmul& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::BoolAttr reassoc();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_v2_fmul : public ::mlir::Op<experimental_vector_reduce_v2_fmul, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_v2_fmulAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  ::mlir::BoolAttr reassocAttr();
  bool reassoc();
  void reassocAttr(::mlir::BoolAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::BoolAttr reassoc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::BoolAttr reassoc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, bool reassoc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, bool reassoc = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_xor declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_xorAdaptor {
public:
  experimental_vector_reduce_xorAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_xorAdaptor(experimental_vector_reduce_xor& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_xor : public ::mlir::Op<experimental_vector_reduce_xor, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_xorAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

#endif  // GET_OP_CLASSES

