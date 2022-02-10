/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class x86_avx512_mask_rndscale_pd_512;
class x86_avx512_mask_rndscale_ps_512;
class x86_avx512_mask_scalef_pd_512;
class x86_avx512_mask_scalef_ps_512;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_rndscale_pd_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_rndscale_pd_512Adaptor {
public:
  x86_avx512_mask_rndscale_pd_512Adaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  x86_avx512_mask_rndscale_pd_512Adaptor(x86_avx512_mask_rndscale_pd_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class x86_avx512_mask_rndscale_pd_512 : public ::mlir::Op<x86_avx512_mask_rndscale_pd_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_rndscale_pd_512Adaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_rndscale_ps_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_rndscale_ps_512Adaptor {
public:
  x86_avx512_mask_rndscale_ps_512Adaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  x86_avx512_mask_rndscale_ps_512Adaptor(x86_avx512_mask_rndscale_ps_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class x86_avx512_mask_rndscale_ps_512 : public ::mlir::Op<x86_avx512_mask_rndscale_ps_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_rndscale_ps_512Adaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_scalef_pd_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_scalef_pd_512Adaptor {
public:
  x86_avx512_mask_scalef_pd_512Adaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  x86_avx512_mask_scalef_pd_512Adaptor(x86_avx512_mask_scalef_pd_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class x86_avx512_mask_scalef_pd_512 : public ::mlir::Op<x86_avx512_mask_scalef_pd_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_scalef_pd_512Adaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_scalef_ps_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_scalef_ps_512Adaptor {
public:
  x86_avx512_mask_scalef_ps_512Adaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  x86_avx512_mask_scalef_ps_512Adaptor(x86_avx512_mask_scalef_ps_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class x86_avx512_mask_scalef_ps_512 : public ::mlir::Op<x86_avx512_mask_scalef_ps_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_scalef_ps_512Adaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value res();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2, ::mlir::Value odsArg_3, ::mlir::Value odsArg_4);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
};

#endif  // GET_OP_CLASSES

