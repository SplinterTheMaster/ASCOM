/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct LinalgOpInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual unsigned getNumParallelLoops(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual unsigned getNumReductionLoops(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual unsigned getNumWindowLoops(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual unsigned getNumLoops(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual bool hasSingleReductionLoop(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual unsigned getNumInputs(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual Value getInput(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual llvm::Optional<unsigned> getIndexOfInput(::mlir::Operation *tablegen_opaque_val, Value v) const = 0;
    virtual Operation::operand_range getInputs(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual ShapedType getInputShapedType(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual SmallVector<RankedTensorType, 4> getInputTensorTypes(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual unsigned getNumOutputs(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual Value getOutputBuffer(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual llvm::Optional<unsigned> getIndexOfOutputBuffer(::mlir::Operation *tablegen_opaque_val, Value view) const = 0;
    virtual MemRefType getOutputBufferType(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual ShapedType getOutputShapedType(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual SmallVector<RankedTensorType, 4> getOutputTensorTypes(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual Operation::operand_range getOutputBuffers(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual Value getBuffer(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual unsigned getNumInputsAndOutputs(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual unsigned getNumInputsAndOutputBuffers(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual Operation::operand_range getInputsAndOutputBuffers(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual SmallVector<ShapedType, 4> getInputOutputShapedTypes(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual llvm::Optional<SmallVector<StringRef, 8>> referenceIterators(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual ArrayAttr iterator_types(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual ArrayAttr indexing_maps(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual SmallVector<AffineMap, 4> getIndexingMaps(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual AffineMap getIndexingMap(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual AffineMap getInputIndexingMap(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual AffineMap getOutputIndexingMap(::mlir::Operation *tablegen_opaque_val, unsigned i) const = 0;
    virtual bool hasBufferSemantics(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual bool hasTensorSemantics(::mlir::Operation *tablegen_opaque_val) const = 0;
    virtual Operation *create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes) const = 0;
    virtual Operation *clone(::mlir::Operation *tablegen_opaque_val, OpBuilder & b, Location loc, ValueRange operands) const = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    unsigned getNumParallelLoops(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumParallelLoops();
    }
    unsigned getNumReductionLoops(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumReductionLoops();
    }
    unsigned getNumWindowLoops(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumWindowLoops();
    }
    unsigned getNumLoops(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumLoops();
    }
    bool hasSingleReductionLoop(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasSingleReductionLoop();
    }
    unsigned getNumInputs(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumInputs();
    }
    Value getInput(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInput(i);
    }
    llvm::Optional<unsigned> getIndexOfInput(::mlir::Operation *tablegen_opaque_val, Value v) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getIndexOfInput(v);
    }
    Operation::operand_range getInputs(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInputs();
    }
    ShapedType getInputShapedType(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInputShapedType(i);
    }
    SmallVector<RankedTensorType, 4> getInputTensorTypes(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInputTensorTypes();
    }
    unsigned getNumOutputs(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumOutputs();
    }
    Value getOutputBuffer(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOutputBuffer(i);
    }
    llvm::Optional<unsigned> getIndexOfOutputBuffer(::mlir::Operation *tablegen_opaque_val, Value view) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getIndexOfOutputBuffer(view);
    }
    MemRefType getOutputBufferType(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOutputBufferType(i);
    }
    ShapedType getOutputShapedType(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOutputShapedType(i);
    }
    SmallVector<RankedTensorType, 4> getOutputTensorTypes(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOutputTensorTypes();
    }
    Operation::operand_range getOutputBuffers(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOutputBuffers();
    }
    Value getBuffer(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getBuffer(i);
    }
    unsigned getNumInputsAndOutputs(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumInputsAndOutputs();
    }
    unsigned getNumInputsAndOutputBuffers(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNumInputsAndOutputBuffers();
    }
    Operation::operand_range getInputsAndOutputBuffers(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInputsAndOutputBuffers();
    }
    SmallVector<ShapedType, 4> getInputOutputShapedTypes(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInputOutputShapedTypes();
    }
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).referenceIterators();
    }
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).referenceIndexingMaps();
    }
    ArrayAttr iterator_types(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).iterator_types();
    }
    ArrayAttr indexing_maps(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).indexing_maps();
    }
    SmallVector<AffineMap, 4> getIndexingMaps(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getIndexingMaps();
    }
    AffineMap getIndexingMap(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getIndexingMap(i);
    }
    AffineMap getInputIndexingMap(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getInputIndexingMap(i);
    }
    AffineMap getOutputIndexingMap(::mlir::Operation *tablegen_opaque_val, unsigned i) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOutputIndexingMap(i);
    }
    bool hasBufferSemantics(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasBufferSemantics();
    }
    bool hasTensorSemantics(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasTensorSemantics();
    }
    Operation *create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes) const final {
      return builder.create<ConcreteOp>(loc, ArrayRef<Type>{}, operands,
                                          attributes);
    }
    Operation *clone(::mlir::Operation *tablegen_opaque_val, OpBuilder & b, Location loc, ValueRange operands) const final {
      BlockAndValueMapping map;
        unsigned numRegions = (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOperation()->getNumRegions();
        Operation *res = create(b, loc, operands, (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getAttrs());
        assert(res->getNumRegions() == numRegions && "inconsistent # regions");
        for (unsigned ridx = 0; ridx < numRegions; ++ridx)
          (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOperation()->getRegion(ridx).cloneInto(
            &res->getRegion(ridx), map);
        return res;
    }
  };
};
} // end namespace detail
class LinalgOp : public ::mlir::OpInterface<LinalgOp, detail::LinalgOpInterfaceTraits> {
public:
  using ::mlir::OpInterface<LinalgOp, detail::LinalgOpInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct LinalgOpTrait : public ::mlir::OpInterface<LinalgOp, detail::LinalgOpInterfaceTraits>::Trait<ConcreteOp> {
  };
  template <typename ConcreteOp>
  struct Trait : public LinalgOpTrait<ConcreteOp> {};
  unsigned getNumParallelLoops();
  unsigned getNumReductionLoops();
  unsigned getNumWindowLoops();
  unsigned getNumLoops();
  bool hasSingleReductionLoop();
  unsigned getNumInputs();
  Value getInput(unsigned i);
  llvm::Optional<unsigned> getIndexOfInput(Value v);
  Operation::operand_range getInputs();
  ShapedType getInputShapedType(unsigned i);
  SmallVector<RankedTensorType, 4> getInputTensorTypes();
  unsigned getNumOutputs();
  Value getOutputBuffer(unsigned i);
  llvm::Optional<unsigned> getIndexOfOutputBuffer(Value view);
  MemRefType getOutputBufferType(unsigned i);
  ShapedType getOutputShapedType(unsigned i);
  SmallVector<RankedTensorType, 4> getOutputTensorTypes();
  Operation::operand_range getOutputBuffers();
  Value getBuffer(unsigned i);
  unsigned getNumInputsAndOutputs();
  unsigned getNumInputsAndOutputBuffers();
  Operation::operand_range getInputsAndOutputBuffers();
  SmallVector<ShapedType, 4> getInputOutputShapedTypes();
  llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
  llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
  ArrayAttr iterator_types();
  ArrayAttr indexing_maps();
  SmallVector<AffineMap, 4> getIndexingMaps();
  AffineMap getIndexingMap(unsigned i);
  AffineMap getInputIndexingMap(unsigned i);
  AffineMap getOutputIndexingMap(unsigned i);
  bool hasBufferSemantics();
  bool hasTensorSemantics();
  Operation *create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  Operation *clone(OpBuilder & b, Location loc, ValueRange operands);
};
