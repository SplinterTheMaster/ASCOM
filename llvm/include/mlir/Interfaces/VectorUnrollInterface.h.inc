/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace detail {
struct VectorUnrollOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual Optional<SmallVector<int64_t, 4>> getShapeForUnroll(::mlir::Operation *tablegen_opaque_val) const = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    Optional<SmallVector<int64_t, 4>> getShapeForUnroll(::mlir::Operation *tablegen_opaque_val) const final {
      return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getShapeForUnroll();
    }
  };
};
} // end namespace detail
class VectorUnrollOpInterface : public ::mlir::OpInterface<VectorUnrollOpInterface, detail::VectorUnrollOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<VectorUnrollOpInterface, detail::VectorUnrollOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct VectorUnrollOpInterfaceTrait : public ::mlir::OpInterface<VectorUnrollOpInterface, detail::VectorUnrollOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    Optional<SmallVector<int64_t, 4>> getShapeForUnroll() {
      auto vt = this->getOperation()->getResult(0).getType().
          template dyn_cast<VectorType>();
        if (!vt)
          return None;
        SmallVector<int64_t, 4> res(vt.getShape().begin(), vt.getShape().end());
        return res;
    }
  };
  template <typename ConcreteOp>
  struct Trait : public VectorUnrollOpInterfaceTrait<ConcreteOp> {};
  Optional<SmallVector<int64_t, 4>> getShapeForUnroll();
};
} // namespace mlir
