/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
class BatchMatmulOp;
class ConvOp;
class CopyOp;
class DotOp;
class FillOp;
class GenericOp;
class IndexedGenericOp;
class MatmulOp;
class MatvecOp;
class PoolingMaxOp;
class PoolingMinOp;
class PoolingSumOp;
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::BatchMatmulOp declarations
//===----------------------------------------------------------------------===//

class BatchMatmulOpAdaptor {
public:
  BatchMatmulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  BatchMatmulOpAdaptor(BatchMatmulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange views();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class BatchMatmulOp : public ::mlir::Op<BatchMatmulOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::NamedStructuredOpTraits, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchMatmulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range output_tensors();
  ::mlir::Region &region();
  static void build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);

        llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
        static SmallVector<StringRef, 8> referenceIterators(
          TypeRange inputTypes, TypeRange outputTypes);

        llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
        static SmallVector<AffineMap, 8> referenceIndexingMaps(
          TypeRange inputTypes, TypeRange outputTypes);

        static void regionBuilder(Block &block);

        std::string getLibraryCallName() {
          return generateLibraryCallName(getOperation());
        }
      
};

//===----------------------------------------------------------------------===//
// linalg::ConvOp declarations
//===----------------------------------------------------------------------===//

class ConvOpAdaptor {
public:
  ConvOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  ConvOpAdaptor(ConvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value filter();
  ::mlir::Value input();
  ::mlir::Value output();
  ::mlir::ArrayAttr strides();
  ::mlir::ArrayAttr dilations();
  ::mlir::DenseIntElementsAttr padding();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class ConvOp : public ::mlir::Op<ConvOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value filter();
  ::mlir::Value input();
  ::mlir::Value output();
  ::mlir::MutableOperandRange filterMutable();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::ArrayAttr stridesAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > strides();
  ::mlir::ArrayAttr dilationsAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > dilations();
  ::mlir::DenseIntElementsAttr paddingAttr();
  ::llvm::Optional< ::mlir::DenseIntElementsAttr > padding();
  void stridesAttr(::mlir::ArrayAttr attr);
  void dilationsAttr(::mlir::ArrayAttr attr);
  void paddingAttr(::mlir::DenseIntElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value filter, ::mlir::Value input, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value filter, ::mlir::Value input, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    // TODO: extend to support more than 1 dimensions and potentially grouping
    // too.
    unsigned getNumBatchDimensions() { return 1; }

    unsigned getNumInputFeatureDimensions() { return 1; }

    unsigned getNumOutputFeatureDimensions() { return 1; }

    unsigned getNumSpatialDimensions() {
      return getOutputShapedType(0).getRank() - getNumBatchDimensions() -
             getNumOutputFeatureDimensions();
    }

    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions; i.e.
      // [b, xs, q] in the TF notation above.
      unsigned nPar = getOutputShapedType(0).getRank();
      unsigned nRed = getNumInputFeatureDimensions();
      // Window loops are a special kind of reduction that is never tiled or
      // parallelized across; i.e. [zs] in the TF notation above whose number
      // match `xs` (i.e. 1 window loop per "image" dimension).
      // This may evolve in the future.
      unsigned nWin =
        nPar - getNumBatchDimensions() - getNumInputFeatureDimensions();
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nRed + nWin);
      iters.append(nRed, getReductionIteratorTypeName());
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    //   F(z0, ..., zN-1, q, k) *
    //     I(b, x0 + z0 - pad_low_0, ..., xN-1 + zN-1 - pad_low_N-1, q)
    //   ->  O(b, x0, ..., xN-1, k)
    // for N equal to `nWindow`. If there is no padding attribute, it will be
    // ignored.
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      // In the following, AffineDimExprs are indexed in loop order:
      //   [ b, xs, k,           q,                     zs]
      //    parallels     non-window reductions     windows
      //
      // Parallel dims are exactly the dimensions indexing `output`:
      //     output[b, x[0], ..., x[N-1], k]; i.e.
      //  * batch dimensions (bs with #bs = 1 for now)
      //  * "image" dimensions (xs with #xs = #zs = output_rank - #bs - #ks)
      //  * output filter dimensions (ks with #ks = 1 for now)
      auto bs = makeAffineDimExprs(getNumBatchDimensions(), idx, context);
      auto xs = makeAffineDimExprs(nWin, idx, context);
      auto ks = makeAffineDimExprs(
        getNumOutputFeatureDimensions(), idx, context);
      // Non-window reduction dim: sum_{z[0], ..., z[N-1], q}
      auto qs = makeAffineDimExprs(
        getNumInputFeatureDimensions(), idx, context);
      // Window reduction dims: sum_{z[0], ..., z[N-1], q}
      auto zs = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto ws = weightedPoolingInputIndex(*this, xs, zs);
      return SmallVector<AffineMap, 8>{
        // filter[z[0], ..., z[N-1], q, k]
        AffineMap::get(idx, 0, concat(concat(zs, qs), ks), context),
        // input[b,
        //       x[0]*s[0] + d[0]*z[0] - pad_low[0],
        //       ...
        //       x[N-1]*s[N-1] + d[N-1]*z[N-1] - pad_low[N-1],
        //       q]
        AffineMap::get(idx, 0, concat(concat(bs, ws), qs), context),
        // output[b, x[0], ..., x[N-1], k]
        AffineMap::get(idx, 0, concat(concat(bs, xs), ks), context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::CopyOp declarations
//===----------------------------------------------------------------------===//

class CopyOpAdaptor {
public:
  CopyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  CopyOpAdaptor(CopyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value output();
  AffineMapAttr inputPermutation();
  AffineMapAttr outputPermutation();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class CopyOp : public ::mlir::Op<CopyOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, ::mlir::CopyOpInterface::Trait, OpTrait::linalg::NInputs<1>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = CopyOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  AffineMapAttr inputPermutationAttr();
  ::llvm::Optional< AffineMap > inputPermutation();
  AffineMapAttr outputPermutationAttr();
  ::llvm::Optional< AffineMap > outputPermutation();
  void inputPermutationAttr(AffineMapAttr attr);
  void outputPermutationAttr(AffineMapAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value input, Value output);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    // Rank-polymorphic.
    //   filling_value -> O(ivs) with parallel iterators.
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      unsigned nPar = input().getType().cast<ShapedType>().getRank();
      return SmallVector<StringRef, 8>(nPar, getParallelIteratorTypeName());
    }

    // I(input_perm(ivs)) -> O(output_perm(ivs))
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto maybeInputMap = inputPermutation();
      auto maybeOutputMap = outputPermutation();
      unsigned inputRank = getInputShapedType(0).getRank();
      unsigned outputRank = getOutputShapedType(0).getRank();
      return SmallVector<AffineMap, 8>{
          extractOrIdentityMap(maybeInputMap, inputRank, context),
          extractOrIdentityMap(maybeOutputMap, outputRank, context)};
    }

    Value getSource() { return input();}
    Value getTarget() { return output(); }
  
};

//===----------------------------------------------------------------------===//
// linalg::DotOp declarations
//===----------------------------------------------------------------------===//

class DotOpAdaptor {
public:
  DotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  DotOpAdaptor(DotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class DotOp : public ::mlir::Op<DotOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = DotOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      return SmallVector<StringRef, 8>{getReductionIteratorTypeName()};
    }

    // A(r_i) * B(r_i) -> C()
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto r_i = getAffineDimExpr(0, context);
      return SmallVector<AffineMap, 8>{
        AffineMap::get(1, 0, {r_i}, context),
        AffineMap::get(1, 0, {r_i}, context),
        AffineMap::get(1, 0, {}, context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::FillOp declarations
//===----------------------------------------------------------------------===//

class FillOpAdaptor {
public:
  FillOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  FillOpAdaptor(FillOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value output();
  ::mlir::Value value();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class FillOp : public ::mlir::Op<FillOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::linalg::NInputs<0>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = FillOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value output();
  ::mlir::Value value();
  ::mlir::MutableOperandRange outputMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value output, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value output, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    // Rank-polymorphic.
    //   filling_value -> O(ivs) with parallel iterators.
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      unsigned nPar = output().getType().cast<ShapedType>().getRank();
      return SmallVector<StringRef, 8>(nPar, getParallelIteratorTypeName());
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      // filling_value -> O(ivs)
      return SmallVector<AffineMap, 8>{
          extractOrIdentityMap(llvm::None, getNumParallelLoops(), context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::GenericOp declarations
//===----------------------------------------------------------------------===//

class GenericOpAdaptor {
public:
  GenericOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  GenericOpAdaptor(GenericOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange views();
  ::mlir::IntegerAttr args_in();
  ::mlir::IntegerAttr args_out();
  ::mlir::ArrayAttr indexing_maps();
  ::mlir::ArrayAttr iterator_types();
  ::mlir::StringAttr doc();
  ::mlir::StringAttr library_call();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class GenericOp : public ::mlir::Op<GenericOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = GenericOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range output_tensors();
  ::mlir::Region &region();
  ::mlir::IntegerAttr args_inAttr();
  ::llvm::APInt args_in();
  ::mlir::IntegerAttr args_outAttr();
  ::llvm::APInt args_out();
  ::mlir::ArrayAttr indexing_mapsAttr();
  ::mlir::ArrayAttr indexing_maps();
  ::mlir::ArrayAttr iterator_typesAttr();
  ::mlir::ArrayAttr iterator_types();
  ::mlir::StringAttr docAttr();
  ::llvm::Optional< ::llvm::StringRef > doc();
  ::mlir::StringAttr library_callAttr();
  ::llvm::Optional< ::llvm::StringRef > library_call();
  void args_inAttr(::mlir::IntegerAttr attr);
  void args_outAttr(::mlir::IntegerAttr attr);
  void indexing_mapsAttr(::mlir::ArrayAttr attr);
  void iterator_typesAttr(::mlir::ArrayAttr attr);
  void docAttr(::mlir::StringAttr attr);
  void library_callAttr(::mlir::StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, ArrayRef<Type> resultTypes, ValueRange args, int64_t inputCount, int64_t outputCount, ArrayRef<AffineMap> indexingMaps, ArrayRef<StringRef> iteratorTypes, function_ref<void(OpBuilder &, Location, ValueRange)> = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::mlir::IntegerAttr args_in, ::mlir::IntegerAttr args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::llvm::APInt args_in, ::llvm::APInt args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);

    SmallVector<StringRef, 8> linalgTraitAttrNames() {
      return SmallVector<StringRef, 8>{
        getArgsInAttrName(), getArgsOutAttrName(), getDocAttrName(),
        getIndexingMapsAttrName(), getLibraryCallAttrName(),
        getIteratorTypesAttrName()
      };
    }

    unsigned getNumInputs() { return args_in().getSExtValue(); }

    unsigned getNumOutputs() { return args_out().getSExtValue(); }

    StringRef getLibraryCallName() {
      return library_call().hasValue() ? library_call().getValue() : "";
    }

    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      llvm_unreachable(
        "No such thing as reference iterator types for a generic op.");
     }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      llvm_unreachable(
        "No such thing as reference indexing maps for a generic op.");
     }
  
};

//===----------------------------------------------------------------------===//
// linalg::IndexedGenericOp declarations
//===----------------------------------------------------------------------===//

class IndexedGenericOpAdaptor {
public:
  IndexedGenericOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  IndexedGenericOpAdaptor(IndexedGenericOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange views();
  ::mlir::IntegerAttr args_in();
  ::mlir::IntegerAttr args_out();
  ::mlir::ArrayAttr indexing_maps();
  ::mlir::ArrayAttr iterator_types();
  ::mlir::StringAttr doc();
  ::mlir::StringAttr library_call();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class IndexedGenericOp : public ::mlir::Op<IndexedGenericOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = IndexedGenericOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range output_tensors();
  ::mlir::Region &region();
  ::mlir::IntegerAttr args_inAttr();
  ::llvm::APInt args_in();
  ::mlir::IntegerAttr args_outAttr();
  ::llvm::APInt args_out();
  ::mlir::ArrayAttr indexing_mapsAttr();
  ::mlir::ArrayAttr indexing_maps();
  ::mlir::ArrayAttr iterator_typesAttr();
  ::mlir::ArrayAttr iterator_types();
  ::mlir::StringAttr docAttr();
  ::llvm::Optional< ::llvm::StringRef > doc();
  ::mlir::StringAttr library_callAttr();
  ::llvm::Optional< ::llvm::StringRef > library_call();
  void args_inAttr(::mlir::IntegerAttr attr);
  void args_outAttr(::mlir::IntegerAttr attr);
  void indexing_mapsAttr(::mlir::ArrayAttr attr);
  void iterator_typesAttr(::mlir::ArrayAttr attr);
  void docAttr(::mlir::StringAttr attr);
  void library_callAttr(::mlir::StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, ArrayRef<Type> resultTypes, ValueRange args, int64_t inputCount, int64_t outputCount, ArrayRef<AffineMap> indexingMaps, ArrayRef<StringRef> iteratorTypes, function_ref<void(OpBuilder &, Location, ValueRange, ValueRange)> = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::mlir::IntegerAttr args_in, ::mlir::IntegerAttr args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::llvm::APInt args_in, ::llvm::APInt args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);

    SmallVector<StringRef, 8> linalgTraitAttrNames() {
      return SmallVector<StringRef, 8>{
        getArgsInAttrName(), getArgsOutAttrName(), getDocAttrName(),
        getIndexingMapsAttrName(), getLibraryCallAttrName(),
        getIteratorTypesAttrName()
      };
    }

    unsigned getNumInputs() { return args_in().getSExtValue(); }

    unsigned getNumOutputs() { return args_out().getSExtValue(); }

    StringRef getLibraryCallName() {
      return library_call().hasValue() ? library_call().getValue() : "";
    }

    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      llvm_unreachable(
        "No such thing as reference iterator types for a generic op.");
     }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      llvm_unreachable(
        "No such thing as reference indexing maps for a generic op.");
     }
  
};

//===----------------------------------------------------------------------===//
// linalg::MatmulOp declarations
//===----------------------------------------------------------------------===//

class MatmulOpAdaptor {
public:
  MatmulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatmulOpAdaptor(MatmulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange views();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatmulOp : public ::mlir::Op<MatmulOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::NamedStructuredOpTraits, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = MatmulOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range output_tensors();
  ::mlir::Region &region();
  static void build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);

        llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
        static SmallVector<StringRef, 8> referenceIterators(
          TypeRange inputTypes, TypeRange outputTypes);

        llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
        static SmallVector<AffineMap, 8> referenceIndexingMaps(
          TypeRange inputTypes, TypeRange outputTypes);

        static void regionBuilder(Block &block);

        std::string getLibraryCallName() {
          return generateLibraryCallName(getOperation());
        }
      
};

//===----------------------------------------------------------------------===//
// linalg::MatvecOp declarations
//===----------------------------------------------------------------------===//

class MatvecOpAdaptor {
public:
  MatvecOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  MatvecOpAdaptor(MatvecOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange views();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class MatvecOp : public ::mlir::Op<MatvecOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::NamedStructuredOpTraits, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = MatvecOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range output_tensors();
  ::mlir::Region &region();
  static void build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);

        llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
        static SmallVector<StringRef, 8> referenceIterators(
          TypeRange inputTypes, TypeRange outputTypes);

        llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
        static SmallVector<AffineMap, 8> referenceIndexingMaps(
          TypeRange inputTypes, TypeRange outputTypes);

        static void regionBuilder(Block &block);

        std::string getLibraryCallName() {
          return generateLibraryCallName(getOperation());
        }
      
};

//===----------------------------------------------------------------------===//
// linalg::PoolingMaxOp declarations
//===----------------------------------------------------------------------===//

class PoolingMaxOpAdaptor {
public:
  PoolingMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  PoolingMaxOpAdaptor(PoolingMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value windowDims();
  ::mlir::Value output();
  ::mlir::ArrayAttr strides();
  ::mlir::ArrayAttr dilations();
  ::mlir::DenseIntElementsAttr padding();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class PoolingMaxOp : public ::mlir::Op<PoolingMaxOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = PoolingMaxOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value windowDims();
  ::mlir::Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange windowDimsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::ArrayAttr stridesAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > strides();
  ::mlir::ArrayAttr dilationsAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > dilations();
  ::mlir::DenseIntElementsAttr paddingAttr();
  ::llvm::Optional< ::mlir::DenseIntElementsAttr > padding();
  void stridesAttr(::mlir::ArrayAttr attr);
  void dilationsAttr(::mlir::ArrayAttr attr);
  void paddingAttr(::mlir::DenseIntElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions.
      unsigned nPar = getOutputShapedType(0).getRank();
      // The window loops has the same number loops with output dimensions.
      unsigned nWin = nPar;
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nWin);
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nPar = getNumParallelLoops();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      auto outputDims = makeAffineDimExprs(nPar, idx, context);
      auto windowDims = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto inputDims =
          weightedPoolingInputIndex(*this, outputDims, windowDims);
      return SmallVector<AffineMap, 8>{
        // input
        AffineMap::get(idx, 0, inputDims, context),
        // windowDims
        AffineMap::get(idx, 0, windowDims, context),
        // output
        AffineMap::get(idx, 0, outputDims, context)
        };
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::PoolingMinOp declarations
//===----------------------------------------------------------------------===//

class PoolingMinOpAdaptor {
public:
  PoolingMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  PoolingMinOpAdaptor(PoolingMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value windowDims();
  ::mlir::Value output();
  ::mlir::ArrayAttr strides();
  ::mlir::ArrayAttr dilations();
  ::mlir::DenseIntElementsAttr padding();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class PoolingMinOp : public ::mlir::Op<PoolingMinOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = PoolingMinOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value windowDims();
  ::mlir::Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange windowDimsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::ArrayAttr stridesAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > strides();
  ::mlir::ArrayAttr dilationsAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > dilations();
  ::mlir::DenseIntElementsAttr paddingAttr();
  ::llvm::Optional< ::mlir::DenseIntElementsAttr > padding();
  void stridesAttr(::mlir::ArrayAttr attr);
  void dilationsAttr(::mlir::ArrayAttr attr);
  void paddingAttr(::mlir::DenseIntElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions.
      unsigned nPar = getOutputShapedType(0).getRank();
      // The window loops has the same number loops with output dimensions.
      unsigned nWin = nPar;
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nWin);
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nPar = getNumParallelLoops();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      auto outputDims = makeAffineDimExprs(nPar, idx, context);
      auto windowDims = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto inputDims =
          weightedPoolingInputIndex(*this, outputDims, windowDims);
      return SmallVector<AffineMap, 8>{
        // input
        AffineMap::get(idx, 0, inputDims, context),
        // windowDims
        AffineMap::get(idx, 0, windowDims, context),
        // output
        AffineMap::get(idx, 0, outputDims, context)
        };
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::PoolingSumOp declarations
//===----------------------------------------------------------------------===//

class PoolingSumOpAdaptor {
public:
  PoolingSumOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr);
  PoolingSumOpAdaptor(PoolingSumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value windowDims();
  ::mlir::Value output();
  ::mlir::ArrayAttr strides();
  ::mlir::ArrayAttr dilations();
  ::mlir::DenseIntElementsAttr padding();
  ::mlir::LogicalResult verify(::mlir::Location loc);

private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
};
class PoolingSumOp : public ::mlir::Op<PoolingSumOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = PoolingSumOpAdaptor;
  static ::llvm::StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value input();
  ::mlir::Value windowDims();
  ::mlir::Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange windowDimsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::ArrayAttr stridesAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > strides();
  ::mlir::ArrayAttr dilationsAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > dilations();
  ::mlir::DenseIntElementsAttr paddingAttr();
  ::llvm::Optional< ::mlir::DenseIntElementsAttr > padding();
  void stridesAttr(::mlir::ArrayAttr attr);
  void dilationsAttr(::mlir::ArrayAttr attr);
  void paddingAttr(::mlir::DenseIntElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions.
      unsigned nPar = getOutputShapedType(0).getRank();
      // The window loops has the same number loops with output dimensions.
      unsigned nWin = nPar;
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nWin);
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nPar = getNumParallelLoops();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      auto outputDims = makeAffineDimExprs(nPar, idx, context);
      auto windowDims = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto inputDims =
          weightedPoolingInputIndex(*this, outputDims, windowDims);
      return SmallVector<AffineMap, 8>{
        // input
        AffineMap::get(idx, 0, inputDims, context),
        // windowDims
        AffineMap::get(idx, 0, windowDims, context),
        // output
        AffineMap::get(idx, 0, outputDims, context)
        };
    }
  
};

#endif  // GET_OP_CLASSES

