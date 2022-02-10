/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class MaskRndScaleOp;
class MaskScaleFOp;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// avx512::MaskRndScaleOp declarations
//===----------------------------------------------------------------------===//

class MaskRndScaleOpAdaptor {
public:
  MaskRndScaleOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MaskRndScaleOpAdaptor(MaskRndScaleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::Value k();
  ::mlir::Value a();
  ::mlir::Value imm();
  ::mlir::Value rounding();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MaskRndScaleOp : public ::mlir::Op<MaskRndScaleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaskRndScaleOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::Value k();
  ::mlir::Value a();
  ::mlir::Value imm();
  ::mlir::Value rounding();
  ::mlir::MutableOperandRange srcMutable();
  ::mlir::MutableOperandRange kMutable();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange immMutable();
  ::mlir::MutableOperandRange roundingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value dst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value src, ::mlir::Value k, ::mlir::Value a, ::mlir::Value imm, ::mlir::Value rounding);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// avx512::MaskScaleFOp declarations
//===----------------------------------------------------------------------===//

class MaskScaleFOpAdaptor {
public:
  MaskScaleFOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MaskScaleFOpAdaptor(MaskScaleFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::Value k();
  ::mlir::Value rounding();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MaskScaleFOp : public ::mlir::Op<MaskScaleFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaskScaleFOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::Value a();
  ::mlir::Value b();
  ::mlir::Value k();
  ::mlir::Value rounding();
  ::mlir::MutableOperandRange srcMutable();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange kMutable();
  ::mlir::MutableOperandRange roundingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value dst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value src, ::mlir::Value a, ::mlir::Value b, ::mlir::Value k, ::mlir::Value rounding);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

