/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class RangeOp;
class ReshapeOp;
class SliceOp;
class TensorReshapeOp;
class TransposeOp;
class YieldOp;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::RangeOp declarations
//===----------------------------------------------------------------------===//

class RangeOpAdaptor {
public:
  RangeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  RangeOpAdaptor(RangeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value min();
  ::mlir::Value max();
  ::mlir::Value step();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class RangeOp : public ::mlir::Op<RangeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RangeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value min();
  ::mlir::Value max();
  ::mlir::Value step();
  ::mlir::MutableOperandRange minMutable();
  ::mlir::MutableOperandRange maxMutable();
  ::mlir::MutableOperandRange stepMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value min, Value max, Value step);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value min, ::mlir::Value max, ::mlir::Value step);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value min, ::mlir::Value max, ::mlir::Value step);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// linalg::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOpAdaptor {
public:
  ReshapeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReshapeOpAdaptor(ReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::ArrayAttr reassociation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReshapeOp : public ::mlir::Op<ReshapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::ViewLikeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReshapeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::MutableOperandRange srcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::ArrayAttr reassociationAttr();
  ::mlir::ArrayAttr reassociation();
  void reassociationAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value src, ArrayRef<ReassociationExprs> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Type resultType, Value src, ArrayRef<ReassociationExprs> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Type resultType, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::ArrayAttr reassociation);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value src, ::mlir::ArrayAttr reassociation);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  Value getViewSource();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getReassociationAttrName() { return "reassociation"; }
    SmallVector<AffineMap, 4> getReassociationMaps() {
      return llvm::to_vector<4>(llvm::map_range(reassociation(), [
      ](Attribute a) { return a.cast<AffineMapAttr>().getValue(); }));
    }
  
    MemRefType getSrcType() { return src().getType().cast<MemRefType>(); }
    MemRefType getResultType() { return result().getType().cast<MemRefType>(); }
  
};

//===----------------------------------------------------------------------===//
// linalg::SliceOp declarations
//===----------------------------------------------------------------------===//

class SliceOpAdaptor {
public:
  SliceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  SliceOpAdaptor(SliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value view();
  ::mlir::ValueRange indexings();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class SliceOp : public ::mlir::Op<SliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, ::mlir::ViewLikeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SliceOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value view();
  ::mlir::Operation::operand_range indexings();
  ::mlir::MutableOperandRange viewMutable();
  ::mlir::MutableOperandRange indexingsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &b, OperationState &result, Value base, ValueRange indexings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value view, ::mlir::ValueRange indexings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value view, ::mlir::ValueRange indexings);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  Value getViewSource();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    enum { FirstIndexingOperand = 1 };
    unsigned getRank() { return getShapedType().getRank(); }
    Type getElementType() { return getShapedType().getElementType(); }
    ShapedType getShapedType() { return getType().cast<ShapedType>(); }
    unsigned getBaseViewRank() { return getBaseViewType().getRank(); }
    ShapedType getBaseViewType() { return view().getType().cast<ShapedType>();}

    // Get the underlying indexing at a given rank.
    Value indexing(unsigned rank) { return *(indexings().begin() + rank); }

    // Get the subset of indexings that are of RangeType.
    SmallVector<Value, 8> getRanges() {
      SmallVector<Value, 8> res;
      for (auto operand : indexings())
        if (!operand.getType().isa<IndexType>())
          res.push_back(operand);
      return res;
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::TensorReshapeOp declarations
//===----------------------------------------------------------------------===//

class TensorReshapeOpAdaptor {
public:
  TensorReshapeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  TensorReshapeOpAdaptor(TensorReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::ArrayAttr reassociation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class TensorReshapeOp : public ::mlir::Op<TensorReshapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorReshapeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value src();
  ::mlir::MutableOperandRange srcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::ArrayAttr reassociationAttr();
  ::mlir::ArrayAttr reassociation();
  void reassociationAttr(::mlir::ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value src, ArrayRef<ReassociationExprs> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Type resultType, Value src, ArrayRef<ReassociationExprs> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Type resultType, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::ArrayAttr reassociation);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value src, ::mlir::ArrayAttr reassociation);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getReassociationAttrName() { return "reassociation"; }
    SmallVector<AffineMap, 4> getReassociationMaps() {
      return llvm::to_vector<4>(llvm::map_range(reassociation(), [
      ](Attribute a) { return a.cast<AffineMapAttr>().getValue(); }));
    }
  
    RankedTensorType getSrcType() {
      return src().getType().cast<RankedTensorType>();
    }
    RankedTensorType getResultType() {
      return result().getType().cast<RankedTensorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpAdaptor {
public:
  TransposeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  TransposeOpAdaptor(TransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value view();
  AffineMapAttr permutation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class TransposeOp : public ::mlir::Op<TransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TransposeOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value view();
  ::mlir::MutableOperandRange viewMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  AffineMapAttr permutationAttr();
  AffineMap permutation();
  void permutationAttr(AffineMapAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value view, AffineMapAttr permutation, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value view, AffineMapAttr permutation);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value view, AffineMapAttr permutation);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value view, AffineMap permutation);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value view, AffineMap permutation);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(::llvm::ArrayRef<::mlir::Attribute> operands);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getPermutationAttrName() { return "permutation"; }
    ShapedType getShapedType() { return view().getType().cast<ShapedType>(); }
  
};

//===----------------------------------------------------------------------===//
// linalg::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  YieldOpAdaptor(YieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange values();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class YieldOp : public ::mlir::Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = YieldOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range values();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange values);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

