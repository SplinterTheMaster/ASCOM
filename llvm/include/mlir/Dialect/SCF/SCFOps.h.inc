/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class ForOp;
class IfOp;
class ParallelOp;
class ReduceOp;
class ReduceReturnOp;
class YieldOp;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// ForOp declarations
//===----------------------------------------------------------------------===//

class ForOpAdaptor {
public:
  ForOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ForOpAdaptor(ForOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value lowerBound();
  ::mlir::Value upperBound();
  ::mlir::Value step();
  ::mlir::ValueRange initArgs();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ForOp : public ::mlir::Op<ForOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<3>::Impl, ::mlir::LoopLikeOpInterface::Trait, ::mlir::RegionBranchOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = ForOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value lowerBound();
  ::mlir::Value upperBound();
  ::mlir::Value step();
  ::mlir::Operation::operand_range initArgs();
  ::mlir::MutableOperandRange lowerBoundMutable();
  ::mlir::MutableOperandRange upperBoundMutable();
  ::mlir::MutableOperandRange stepMutable();
  ::mlir::MutableOperandRange initArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range results();
  ::mlir::Region &region();
  static void build(OpBuilder &builder, OperationState &result, Value lowerBound, Value upperBound, Value step, ValueRange iterArgs = llvm::None, function_ref<void(OpBuilder &, Location, Value, ValueRange)>    = nullptr);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);
  void getSuccessorRegions(Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions);

    using BodyBuilderFn =
        function_ref<void(OpBuilder &, Location, Value, ValueRange)>;

    Value getInductionVar() { return getBody()->getArgument(0); }
    Block::BlockArgListType getRegionIterArgs() {
      return getBody()->getArguments().drop_front();
    }
    Operation::operand_range getIterOperands() {
      return getOperands().drop_front(getNumControlOperands());
    }

    void setLowerBound(Value bound) { getOperation()->setOperand(0, bound); }
    void setUpperBound(Value bound) { getOperation()->setOperand(1, bound); }
    void setStep(Value step) { getOperation()->setOperand(2, step); }

    /// Number of region arguments for loop-carried values
    unsigned getNumRegionIterArgs() {
      return getBody()->getNumArguments() - 1;
    }
    /// Number of operands controlling the loop: lb, ub, step
    unsigned getNumControlOperands() { return 3; }
    /// Does the operation hold operands for loop-carried values
    bool hasIterOperands() {
      return getOperation()->getNumOperands() > getNumControlOperands();
    }
    /// Get Number of loop-carried values
    unsigned getNumIterOperands() {
      return getOperation()->getNumOperands() - getNumControlOperands();
    }

    /// Return operands used when entering the region at 'index'. These operands
    /// correspond to the loop iterator operands, i.e., those exclusing the
    /// induction variable. LoopOp only has one region, so 0 is the only valid
    /// value for `index`.
    OperandRange getSuccessorEntryOperands(unsigned index);
  
};

//===----------------------------------------------------------------------===//
// IfOp declarations
//===----------------------------------------------------------------------===//

class IfOpAdaptor {
public:
  IfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  IfOpAdaptor(IfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class IfOp : public ::mlir::Op<IfOp, OpTrait::NRegions<2>::Impl, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, ::mlir::RegionBranchOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::HasRecursiveSideEffects, OpTrait::NoRegionArguments> {
public:
  using Op::Op;
  using Adaptor = IfOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value condition();
  ::mlir::MutableOperandRange conditionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range results();
  ::mlir::Region &thenRegion();
  ::mlir::Region &elseRegion();
  static void build(OpBuilder &builder, OperationState &result, Value cond, bool withElseRegion);
  static void build(OpBuilder &builder, OperationState &result, TypeRange resultTypes, Value cond, bool withElseRegion);
  static void build(OpBuilder &builder, OperationState &result, TypeRange resultTypes, Value cond, function_ref<void(OpBuilder &, Location)> thenBuilder     = buildTerminatedBody, function_ref<void(OpBuilder &, Location)> elseBuilder = nullptr);
  static void build(OpBuilder &builder, OperationState &result, Value cond, function_ref<void(OpBuilder &, Location)> thenBuilder     = buildTerminatedBody, function_ref<void(OpBuilder &, Location)> elseBuilder = nullptr);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getSuccessorRegions(Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions);

    OpBuilder getThenBodyBuilder() {
      Block* body = getBody(0);
      return results().empty() ? OpBuilder::atBlockTerminator(body)
                               : OpBuilder::atBlockEnd(body);
    }
    OpBuilder getElseBodyBuilder() {
      Block* body = getBody(1);
      return results().empty() ? OpBuilder::atBlockTerminator(body)
                               : OpBuilder::atBlockEnd(body);
    }
  
};

//===----------------------------------------------------------------------===//
// ParallelOp declarations
//===----------------------------------------------------------------------===//

class ParallelOpAdaptor {
public:
  ParallelOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs);
  ParallelOpAdaptor(ParallelOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange lowerBound();
  ::mlir::ValueRange upperBound();
  ::mlir::ValueRange step();
  ::mlir::ValueRange initVals();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ParallelOp : public ::mlir::Op<ParallelOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::AttrSizedOperandSegments, ::mlir::LoopLikeOpInterface::Trait, OpTrait::HasRecursiveSideEffects, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ParallelOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range lowerBound();
  ::mlir::Operation::operand_range upperBound();
  ::mlir::Operation::operand_range step();
  ::mlir::Operation::operand_range initVals();
  ::mlir::MutableOperandRange lowerBoundMutable();
  ::mlir::MutableOperandRange upperBoundMutable();
  ::mlir::MutableOperandRange stepMutable();
  ::mlir::MutableOperandRange initValsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range results();
  ::mlir::Region &region();
  static void build(OpBuilder &builder, OperationState &result, ValueRange lowerBounds, ValueRange upperBounds, ValueRange steps, ValueRange initVals, function_ref<void (OpBuilder &, Location, ValueRange, ValueRange)>  bodyBuilderFn = nullptr);
  static void build(OpBuilder &builder, OperationState &result, ValueRange lowerBounds, ValueRange upperBounds, ValueRange steps, function_ref<void (OpBuilder &, Location, ValueRange)>  bodyBuilderFn = nullptr);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::OwningRewritePatternList &results, ::mlir::MLIRContext *context);
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);

    ValueRange getInductionVars() {
      return getBody()->getArguments();
    }
    unsigned getNumLoops() { return step().size(); }
    unsigned getNumReductions() { return initVals().size(); }
  
};

//===----------------------------------------------------------------------===//
// ReduceOp declarations
//===----------------------------------------------------------------------===//

class ReduceOpAdaptor {
public:
  ReduceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReduceOpAdaptor(ReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReduceOp : public ::mlir::Op<ReduceOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::HasParent<ParallelOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReduceOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &reductionOperator();
  static void build(OpBuilder &builder, OperationState &result, Value operand, function_ref<void (OpBuilder &, Location, Value, Value)>  bodyBuilderFn = nullptr);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// ReduceReturnOp declarations
//===----------------------------------------------------------------------===//

class ReduceReturnOpAdaptor {
public:
  ReduceReturnOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ReduceReturnOpAdaptor(ReduceReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value result();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ReduceReturnOp : public ::mlir::Op<ReduceReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::HasParent<ReduceOp>::Impl, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReduceReturnOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value result();
  ::mlir::MutableOperandRange resultMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value result);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  YieldOpAdaptor(YieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange results();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class YieldOp : public ::mlir::Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, ::mlir::MemoryEffectOpInterface::Trait, OpTrait::ReturnLike, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = YieldOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range results();
  ::mlir::MutableOperandRange resultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange results);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

