/* Autogenerated by mlir-tblgen; don't manually edit */
#ifdef GEN_PASS_CLASSES

//===----------------------------------------------------------------------===//
// SCFForLoopSpecialization
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class SCFForLoopSpecializationBase : public ::mlir::FunctionPass {
public:
  SCFForLoopSpecializationBase() : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}
  SCFForLoopSpecializationBase(const SCFForLoopSpecializationBase &) : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}

  /// Returns the command-line argument attached to this pass.
  ::llvm::StringRef getArgument() const override { return "for-loop-specialization"; }

  /// Returns the derived pass name.
  ::llvm::StringRef getName() const override { return "SCFForLoopSpecialization"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

protected:
};

//===----------------------------------------------------------------------===//
// SCFParallelLoopFusion
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class SCFParallelLoopFusionBase : public ::mlir::OperationPass<> {
public:
  SCFParallelLoopFusionBase() : ::mlir::OperationPass<>(::mlir::TypeID::get<DerivedT>()) {}
  SCFParallelLoopFusionBase(const SCFParallelLoopFusionBase &) : ::mlir::OperationPass<>(::mlir::TypeID::get<DerivedT>()) {}

  /// Returns the command-line argument attached to this pass.
  ::llvm::StringRef getArgument() const override { return "parallel-loop-fusion"; }

  /// Returns the derived pass name.
  ::llvm::StringRef getName() const override { return "SCFParallelLoopFusion"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

protected:
};

//===----------------------------------------------------------------------===//
// SCFParallelLoopSpecialization
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class SCFParallelLoopSpecializationBase : public ::mlir::FunctionPass {
public:
  SCFParallelLoopSpecializationBase() : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}
  SCFParallelLoopSpecializationBase(const SCFParallelLoopSpecializationBase &) : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}

  /// Returns the command-line argument attached to this pass.
  ::llvm::StringRef getArgument() const override { return "parallel-loop-specialization"; }

  /// Returns the derived pass name.
  ::llvm::StringRef getName() const override { return "SCFParallelLoopSpecialization"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

protected:
};

//===----------------------------------------------------------------------===//
// SCFParallelLoopTiling
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class SCFParallelLoopTilingBase : public ::mlir::FunctionPass {
public:
  SCFParallelLoopTilingBase() : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}
  SCFParallelLoopTilingBase(const SCFParallelLoopTilingBase &) : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}

  /// Returns the command-line argument attached to this pass.
  ::llvm::StringRef getArgument() const override { return "parallel-loop-tiling"; }

  /// Returns the derived pass name.
  ::llvm::StringRef getName() const override { return "SCFParallelLoopTiling"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

protected:
  ::mlir::Pass::ListOption<int64_t> tileSizes{*this, "parallel-loop-tile-sizes", ::llvm::cl::desc("Factors to tile parallel loops by"), llvm::cl::ZeroOrMore, llvm::cl::MiscFlags::CommaSeparated};
};
#undef GEN_PASS_CLASSES
#endif // GEN_PASS_CLASSES
#ifdef GEN_PASS_REGISTRATION
#define GEN_PASS_REGISTRATION_SCFForLoopSpecialization
#define GEN_PASS_REGISTRATION_SCFParallelLoopFusion
#define GEN_PASS_REGISTRATION_SCFParallelLoopSpecialization
#define GEN_PASS_REGISTRATION_SCFParallelLoopTiling
#endif // GEN_PASS_REGISTRATION
#ifdef GEN_PASS_REGISTRATION_SCFForLoopSpecialization
::mlir::registerPass("for-loop-specialization", "Specialize `for` loops for vectorization", []() -> std::unique_ptr<::mlir::Pass> { return mlir::createForLoopSpecializationPass(); });
#endif // GEN_PASS_REGISTRATION_SCFForLoopSpecialization
#undef GEN_PASS_REGISTRATION_SCFForLoopSpecialization
#ifdef GEN_PASS_REGISTRATION_SCFParallelLoopFusion
::mlir::registerPass("parallel-loop-fusion", "Fuse adjacent parallel loops", []() -> std::unique_ptr<::mlir::Pass> { return mlir::createParallelLoopFusionPass(); });
#endif // GEN_PASS_REGISTRATION_SCFParallelLoopFusion
#undef GEN_PASS_REGISTRATION_SCFParallelLoopFusion
#ifdef GEN_PASS_REGISTRATION_SCFParallelLoopSpecialization
::mlir::registerPass("parallel-loop-specialization", "Specialize parallel loops for vectorization", []() -> std::unique_ptr<::mlir::Pass> { return mlir::createParallelLoopSpecializationPass(); });
#endif // GEN_PASS_REGISTRATION_SCFParallelLoopSpecialization
#undef GEN_PASS_REGISTRATION_SCFParallelLoopSpecialization
#ifdef GEN_PASS_REGISTRATION_SCFParallelLoopTiling
::mlir::registerPass("parallel-loop-tiling", "Tile parallel loops", []() -> std::unique_ptr<::mlir::Pass> { return mlir::createParallelLoopTilingPass(); });
#endif // GEN_PASS_REGISTRATION_SCFParallelLoopTiling
#undef GEN_PASS_REGISTRATION_SCFParallelLoopTiling
#ifdef GEN_PASS_REGISTRATION
#undef GEN_PASS_REGISTRATION_SCFForLoopSpecialization
#undef GEN_PASS_REGISTRATION_SCFParallelLoopFusion
#undef GEN_PASS_REGISTRATION_SCFParallelLoopSpecialization
#undef GEN_PASS_REGISTRATION_SCFParallelLoopTiling
#endif // GEN_PASS_REGISTRATION
#undef GEN_PASS_REGISTRATION
