/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

shape::AddOp,
shape::AnyOp,
shape::AssumingAllOp,
shape::AssumingOp,
shape::AssumingYieldOp,
shape::BroadcastOp,
shape::ConcatOp,
shape::ConstShapeOp,
shape::ConstSizeOp,
shape::ConstWitnessOp,
shape::CstrBroadcastableOp,
shape::CstrEqOp,
shape::DebugPrintOp,
shape::FromExtentTensorOp,
shape::FromExtentsOp,
shape::GetExtentOp,
shape::IndexToSizeOp,
shape::JoinOp,
shape::MulOp,
shape::NumElementsOp,
shape::RankOp,
shape::ReduceOp,
shape::ShapeOfOp,
shape::SizeToIndexOp,
shape::SplitAtOp,
shape::ToExtentTensorOp,
shape::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// shape::AddOp definitions
//===----------------------------------------------------------------------===//

AddOpAdaptor::AddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddOpAdaptor::AddOpAdaptor(AddOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AddOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value AddOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult AddOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef AddOp::getOperationName() {
  return "shape.add";
}

std::pair<unsigned, unsigned> AddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value AddOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AddOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOp::result() {
  return *getODSResults(0).begin();
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AddOp::verify() {
  if (failed(AddOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}

::mlir::ParseResult AddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AddOp::print(OpAsmPrinter &p) {
  p << "shape.add";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// shape::AnyOp definitions
//===----------------------------------------------------------------------===//

AnyOpAdaptor::AnyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AnyOpAdaptor::AnyOpAdaptor(AnyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AnyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange AnyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange AnyOpAdaptor::inputs() {
  return getODSOperands(0);
}

::mlir::LogicalResult AnyOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef AnyOp::getOperationName() {
  return "shape.any";
}

std::pair<unsigned, unsigned> AnyOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AnyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AnyOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AnyOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AnyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AnyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AnyOp::result() {
  return *getODSResults(0).begin();
}

void AnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void AnyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AnyOp::verify() {
  if (failed(AnyOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult AnyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> inputsOperands;
  ::llvm::SMLoc inputsOperandsLoc = parser.getCurrentLocation();
  (void)inputsOperandsLoc;

  if (parser.parseOperandList(inputsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AnyOp::print(OpAsmPrinter &p) {
  p << "shape.any";
  p << " ";
  p << inputs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void AnyOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::AssumingAllOp definitions
//===----------------------------------------------------------------------===//

AssumingAllOpAdaptor::AssumingAllOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumingAllOpAdaptor::AssumingAllOpAdaptor(AssumingAllOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumingAllOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange AssumingAllOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange AssumingAllOpAdaptor::inputs() {
  return getODSOperands(0);
}

::mlir::LogicalResult AssumingAllOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef AssumingAllOp::getOperationName() {
  return "shape.assuming_all";
}

std::pair<unsigned, unsigned> AssumingAllOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AssumingAllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AssumingAllOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AssumingAllOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumingAllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AssumingAllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AssumingAllOp::result() {
  return *getODSResults(0).begin();
}

void AssumingAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void AssumingAllOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AssumingAllOp::verify() {
  if (failed(AssumingAllOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("operand #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



::mlir::ParseResult AssumingAllOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> inputsOperands;
  ::llvm::SMLoc inputsOperandsLoc = parser.getCurrentLocation();
  (void)inputsOperandsLoc;

  if (parser.parseOperandList(inputsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AssumingAllOp::print(OpAsmPrinter &p) {
  p << "shape.assuming_all";
  p << " ";
  p << inputs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void AssumingAllOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::AssumingOp definitions
//===----------------------------------------------------------------------===//

AssumingOpAdaptor::AssumingOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumingOpAdaptor::AssumingOpAdaptor(AssumingOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumingOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AssumingOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AssumingOpAdaptor::witness() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult AssumingOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef AssumingOp::getOperationName() {
  return "shape.assuming";
}

std::pair<unsigned, unsigned> AssumingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AssumingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AssumingOp::witness() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AssumingOp::witnessMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumingOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range AssumingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range AssumingOp::results() {
  return getODSResults(0);
}

::mlir::Region &AssumingOp::doRegion() {
  return this->getOperation()->getRegion(0);
}

void AssumingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> results, ::mlir::Value witness) {
  odsState.addOperands(witness);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void AssumingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult AssumingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseAssumingOp(parser, result);
}

void AssumingOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult AssumingOp::verify() {
  if (failed(AssumingOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("operand #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('doRegion') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}




//===----------------------------------------------------------------------===//
// shape::AssumingYieldOp definitions
//===----------------------------------------------------------------------===//

AssumingYieldOpAdaptor::AssumingYieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumingYieldOpAdaptor::AssumingYieldOpAdaptor(AssumingYieldOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumingYieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange AssumingYieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange AssumingYieldOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::LogicalResult AssumingYieldOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef AssumingYieldOp::getOperationName() {
  return "shape.assuming_yield";
}

std::pair<unsigned, unsigned> AssumingYieldOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AssumingYieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AssumingYieldOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AssumingYieldOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumingYieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AssumingYieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AssumingYieldOp::build(OpBuilder &builder, OperationState &result) {
 /* nothing to do */ 
}

void AssumingYieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
}

void AssumingYieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AssumingYieldOp::verify() {
  if (failed(AssumingYieldOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

::mlir::ParseResult AssumingYieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> operandsTypes;
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(operandsTypes))
    return failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return failure();
  return success();
}

void AssumingYieldOp::print(OpAsmPrinter &p) {
  p << "shape.assuming_yield";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  if (!operands().empty()) {
  p << " ";
  p << operands();
  p << " " << ":";
  p << " ";
  p << operands().getTypes();
  }
}

void AssumingYieldOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::BroadcastOp definitions
//===----------------------------------------------------------------------===//

BroadcastOpAdaptor::BroadcastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BroadcastOpAdaptor::BroadcastOpAdaptor(BroadcastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BroadcastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::StringAttr BroadcastOpAdaptor::error() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("error").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_error = odsAttrs.get("error");
  if (tblgen_error) {
    if (!((tblgen_error.isa<::mlir::StringAttr>()))) return emitError(loc, "'shape.broadcast' op ""attribute 'error' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

::llvm::StringRef BroadcastOp::getOperationName() {
  return "shape.broadcast";
}

std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOp::result() {
  return *getODSResults(0).begin();
}

::mlir::StringAttr BroadcastOp::errorAttr() {
  return this->getAttr("error").dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > BroadcastOp::error() {
  auto attr = errorAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void BroadcastOp::errorAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("error", attr);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::StringAttr error) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (error) {
  odsState.addAttribute("error", error);
  }
  odsState.addTypes(result);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::StringAttr error) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (error) {
  odsState.addAttribute("error", error);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(BroadcastOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::StringAttr error) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (error) {
  odsState.addAttribute("error", error);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(BroadcastOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult BroadcastOp::verify() {
  if (failed(BroadcastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::LogicalResult BroadcastOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConcatOp definitions
//===----------------------------------------------------------------------===//

ConcatOpAdaptor::ConcatOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConcatOpAdaptor::ConcatOpAdaptor(ConcatOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConcatOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConcatOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConcatOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConcatOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult ConcatOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef ConcatOp::getOperationName() {
  return "shape.concat";
}

std::pair<unsigned, unsigned> ConcatOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConcatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConcatOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConcatOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ConcatOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConcatOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConcatOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConcatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConcatOp::result() {
  return *getODSResults(0).begin();
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult ConcatOp::verify() {
  if (failed(ConcatOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::LogicalResult ConcatOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConstShapeOp definitions
//===----------------------------------------------------------------------===//

ConstShapeOpAdaptor::ConstShapeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstShapeOpAdaptor::ConstShapeOpAdaptor(ConstShapeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstShapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConstShapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ConstShapeOpAdaptor::shape() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("shape").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ConstShapeOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_shape = odsAttrs.get("shape");
  if (!tblgen_shape) return emitError(loc, "'shape.const_shape' op ""requires attribute 'shape'");
    if (!(((tblgen_shape.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_shape.cast<::mlir::DenseIntElementsAttr>()
                                      .getType()
                                      .getElementType()
                                      .isIndex())))) return emitError(loc, "'shape.const_shape' op ""attribute 'shape' failed to satisfy constraint: index elements attribute");
  }
  return success();
}

::llvm::StringRef ConstShapeOp::getOperationName() {
  return "shape.const_shape";
}

std::pair<unsigned, unsigned> ConstShapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstShapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstShapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstShapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstShapeOp::result() {
  return *getODSResults(0).begin();
}

::mlir::DenseIntElementsAttr ConstShapeOp::shapeAttr() {
  return this->getAttr("shape").cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr ConstShapeOp::shape() {
  auto attr = shapeAttr();
  return attr;
}

void ConstShapeOp::shapeAttr(::mlir::DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("shape", attr);
}

void ConstShapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::DenseIntElementsAttr shape) {
  odsState.addAttribute("shape", shape);
  odsState.addTypes(result);
}

void ConstShapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::DenseIntElementsAttr shape) {
  odsState.addAttribute("shape", shape);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConstShapeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstShapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::DenseIntElementsAttr shape) {
  odsState.addAttribute("shape", shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstShapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstShapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(ConstShapeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::ParseResult ConstShapeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseConstShapeOp(parser, result);
}

void ConstShapeOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult ConstShapeOp::verify() {
  if (failed(ConstShapeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



void ConstShapeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult ConstShapeOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConstSizeOp definitions
//===----------------------------------------------------------------------===//

ConstSizeOpAdaptor::ConstSizeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstSizeOpAdaptor::ConstSizeOpAdaptor(ConstSizeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstSizeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConstSizeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr ConstSizeOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("value").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult ConstSizeOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_value = odsAttrs.get("value");
  if (!tblgen_value) return emitError(loc, "'shape.const_size' op ""requires attribute 'value'");
    if (!(((tblgen_value.isa<::mlir::IntegerAttr>())) && ((tblgen_value.cast<::mlir::IntegerAttr>().getType().isa<::mlir::IndexType>())))) return emitError(loc, "'shape.const_size' op ""attribute 'value' failed to satisfy constraint: index attribute");
  }
  return success();
}

::llvm::StringRef ConstSizeOp::getOperationName() {
  return "shape.const_size";
}

std::pair<unsigned, unsigned> ConstSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstSizeOp::result() {
  return *getODSResults(0).begin();
}

::mlir::IntegerAttr ConstSizeOp::valueAttr() {
  return this->getAttr("value").cast<::mlir::IntegerAttr>();
}

::llvm::APInt ConstSizeOp::value() {
  auto attr = valueAttr();
  return attr.getValue();
}

void ConstSizeOp::valueAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("value", attr);
}



void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr value) {
  odsState.addAttribute("value", value);
  odsState.addTypes(result);
}

void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr value) {
  odsState.addAttribute("value", value);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConstSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::IntegerAttr value) {
  odsState.addAttribute("value", value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::APInt value) {
  odsState.addAttribute("value", odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), value));
  odsState.addTypes(result);
}

void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::APInt value) {
  odsState.addAttribute("value", odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), value));

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConstSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::APInt value) {
  odsState.addAttribute("value", odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), value));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(ConstSizeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult ConstSizeOp::verify() {
  if (failed(ConstSizeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}





::mlir::ParseResult ConstSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr valueAttr;
  if (parser.parseAttribute(valueAttr, parser.getBuilder().getIndexType(), "value", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  return success();
}

void ConstSizeOp::print(OpAsmPrinter &p) {
  p << "shape.const_size";
  p << " ";
  p.printAttributeWithoutType(valueAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"value"});
}

void ConstSizeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult ConstSizeOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConstWitnessOp definitions
//===----------------------------------------------------------------------===//

ConstWitnessOpAdaptor::ConstWitnessOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstWitnessOpAdaptor::ConstWitnessOpAdaptor(ConstWitnessOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstWitnessOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConstWitnessOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::BoolAttr ConstWitnessOpAdaptor::passing() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("passing").cast<::mlir::BoolAttr>();
  return attr;
}

::mlir::LogicalResult ConstWitnessOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_passing = odsAttrs.get("passing");
  if (!tblgen_passing) return emitError(loc, "'shape.const_witness' op ""requires attribute 'passing'");
    if (!((tblgen_passing.isa<::mlir::BoolAttr>()))) return emitError(loc, "'shape.const_witness' op ""attribute 'passing' failed to satisfy constraint: bool attribute");
  }
  return success();
}

::llvm::StringRef ConstWitnessOp::getOperationName() {
  return "shape.const_witness";
}

std::pair<unsigned, unsigned> ConstWitnessOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstWitnessOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstWitnessOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstWitnessOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstWitnessOp::result() {
  return *getODSResults(0).begin();
}

::mlir::BoolAttr ConstWitnessOp::passingAttr() {
  return this->getAttr("passing").cast<::mlir::BoolAttr>();
}

bool ConstWitnessOp::passing() {
  auto attr = passingAttr();
  return attr.getValue();
}

void ConstWitnessOp::passingAttr(::mlir::BoolAttr attr) {
  this->getOperation()->setAttr("passing", attr);
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::BoolAttr passing) {
  odsState.addAttribute("passing", passing);
  odsState.addTypes(result);
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr passing) {
  odsState.addAttribute("passing", passing);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConstWitnessOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::BoolAttr passing) {
  odsState.addAttribute("passing", passing);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, bool passing) {
  odsState.addAttribute("passing", odsBuilder.getBoolAttr(passing));
  odsState.addTypes(result);
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool passing) {
  odsState.addAttribute("passing", odsBuilder.getBoolAttr(passing));

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConstWitnessOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, bool passing) {
  odsState.addAttribute("passing", odsBuilder.getBoolAttr(passing));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstWitnessOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstWitnessOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(ConstWitnessOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult ConstWitnessOp::verify() {
  if (failed(ConstWitnessOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult ConstWitnessOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::BoolAttr passingAttr;
  if (parser.parseAttribute(passingAttr, parser.getBuilder().getIntegerType(1), "passing", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  result.addTypes(odsBuildableType0);
  return success();
}

void ConstWitnessOp::print(OpAsmPrinter &p) {
  p << "shape.const_witness";
  p << " ";
  p.printAttributeWithoutType(passingAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"passing"});
}

void ConstWitnessOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult ConstWitnessOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::WitnessType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::CstrBroadcastableOp definitions
//===----------------------------------------------------------------------===//

CstrBroadcastableOpAdaptor::CstrBroadcastableOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CstrBroadcastableOpAdaptor::CstrBroadcastableOpAdaptor(CstrBroadcastableOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CstrBroadcastableOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CstrBroadcastableOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CstrBroadcastableOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value CstrBroadcastableOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult CstrBroadcastableOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef CstrBroadcastableOp::getOperationName() {
  return "shape.cstr_broadcastable";
}

std::pair<unsigned, unsigned> CstrBroadcastableOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CstrBroadcastableOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CstrBroadcastableOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value CstrBroadcastableOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CstrBroadcastableOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CstrBroadcastableOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CstrBroadcastableOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CstrBroadcastableOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CstrBroadcastableOp::result() {
  return *getODSResults(0).begin();
}

void CstrBroadcastableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void CstrBroadcastableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(CstrBroadcastableOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void CstrBroadcastableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CstrBroadcastableOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CstrBroadcastableOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(CstrBroadcastableOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult CstrBroadcastableOp::verify() {
  if (failed(CstrBroadcastableOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}





::mlir::ParseResult CstrBroadcastableOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, odsBuildableType1, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void CstrBroadcastableOp::print(OpAsmPrinter &p) {
  p << "shape.cstr_broadcastable";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

::mlir::LogicalResult CstrBroadcastableOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::WitnessType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::CstrEqOp definitions
//===----------------------------------------------------------------------===//

CstrEqOpAdaptor::CstrEqOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CstrEqOpAdaptor::CstrEqOpAdaptor(CstrEqOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CstrEqOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange CstrEqOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange CstrEqOpAdaptor::inputs() {
  return getODSOperands(0);
}

::mlir::LogicalResult CstrEqOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef CstrEqOp::getOperationName() {
  return "shape.cstr_eq";
}

std::pair<unsigned, unsigned> CstrEqOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CstrEqOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CstrEqOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CstrEqOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CstrEqOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CstrEqOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CstrEqOp::result() {
  return *getODSResults(0).begin();
}

void CstrEqOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void CstrEqOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CstrEqOp::verify() {
  if (failed(CstrEqOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}





::mlir::ParseResult CstrEqOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> inputsOperands;
  ::llvm::SMLoc inputsOperandsLoc = parser.getCurrentLocation();
  (void)inputsOperandsLoc;

  if (parser.parseOperandList(inputsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputsOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void CstrEqOp::print(OpAsmPrinter &p) {
  p << "shape.cstr_eq";
  p << " ";
  p << inputs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// shape::DebugPrintOp definitions
//===----------------------------------------------------------------------===//

DebugPrintOpAdaptor::DebugPrintOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DebugPrintOpAdaptor::DebugPrintOpAdaptor(DebugPrintOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DebugPrintOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange DebugPrintOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DebugPrintOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult DebugPrintOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef DebugPrintOp::getOperationName() {
  return "shape.debug_print";
}

std::pair<unsigned, unsigned> DebugPrintOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DebugPrintOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DebugPrintOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DebugPrintOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DebugPrintOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DebugPrintOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DebugPrintOp::output() {
  return *getODSResults(0).begin();
}

void DebugPrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void DebugPrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DebugPrintOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DebugPrintOp::verify() {
  if (failed(DebugPrintOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("operand #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("result #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}


//===----------------------------------------------------------------------===//
// shape::FromExtentTensorOp definitions
//===----------------------------------------------------------------------===//

FromExtentTensorOpAdaptor::FromExtentTensorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FromExtentTensorOpAdaptor::FromExtentTensorOpAdaptor(FromExtentTensorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FromExtentTensorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FromExtentTensorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FromExtentTensorOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult FromExtentTensorOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef FromExtentTensorOp::getOperationName() {
  return "shape.from_extent_tensor";
}

std::pair<unsigned, unsigned> FromExtentTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FromExtentTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FromExtentTensorOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FromExtentTensorOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FromExtentTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FromExtentTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FromExtentTensorOp::result() {
  return *getODSResults(0).begin();
}

void FromExtentTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(result);
}

void FromExtentTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input) {
  odsState.addOperands(input);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(FromExtentTensorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void FromExtentTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FromExtentTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FromExtentTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(FromExtentTensorOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult FromExtentTensorOp::verify() {
  if (failed(FromExtentTensorOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::IndexType>())))) {
        return emitOpError("operand #") << index << " must be tensor of index values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}

::mlir::ParseResult FromExtentTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc = parser.getCurrentLocation();
  (void)inputOperandsLoc;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperand(inputRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(inputRawTypes[0]))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return failure();
  return success();
}

void FromExtentTensorOp::print(OpAsmPrinter &p) {
  p << "shape.from_extent_tensor";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " ";
  p << input();
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(input().getType());
}

void FromExtentTensorOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult FromExtentTensorOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::FromExtentsOp definitions
//===----------------------------------------------------------------------===//

FromExtentsOpAdaptor::FromExtentsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FromExtentsOpAdaptor::FromExtentsOpAdaptor(FromExtentsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FromExtentsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange FromExtentsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange FromExtentsOpAdaptor::extents() {
  return getODSOperands(0);
}

::mlir::LogicalResult FromExtentsOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef FromExtentsOp::getOperationName() {
  return "shape.from_extents";
}

std::pair<unsigned, unsigned> FromExtentsOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range FromExtentsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range FromExtentsOp::extents() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange FromExtentsOp::extentsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FromExtentsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FromExtentsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FromExtentsOp::shape() {
  return *getODSResults(0).begin();
}

void FromExtentsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type shape, ::mlir::ValueRange extents) {
  odsState.addOperands(extents);
  odsState.addTypes(shape);
}

void FromExtentsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FromExtentsOp::verify() {
  if (failed(FromExtentsOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult FromExtentsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> extentsOperands;
  ::llvm::SMLoc extentsOperandsLoc = parser.getCurrentLocation();
  (void)extentsOperandsLoc;

  if (parser.parseOperandList(extentsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(extentsOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void FromExtentsOp::print(OpAsmPrinter &p) {
  p << "shape.from_extents";
  p << " ";
  p << extents();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void FromExtentsOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::GetExtentOp definitions
//===----------------------------------------------------------------------===//

GetExtentOpAdaptor::GetExtentOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GetExtentOpAdaptor::GetExtentOpAdaptor(GetExtentOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GetExtentOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange GetExtentOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetExtentOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

::mlir::Value GetExtentOpAdaptor::dim() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult GetExtentOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef GetExtentOp::getOperationName() {
  return "shape.get_extent";
}

std::pair<unsigned, unsigned> GetExtentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetExtentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetExtentOp::shape() {
  return *getODSOperands(0).begin();
}

::mlir::Value GetExtentOp::dim() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange GetExtentOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange GetExtentOp::dimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GetExtentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetExtentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetExtentOp::extent() {
  return *getODSResults(0).begin();
}



void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type extent, ::mlir::Value shape, ::mlir::Value dim) {
  odsState.addOperands(shape);
  odsState.addOperands(dim);
  odsState.addTypes(extent);
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::mlir::Value dim) {
  odsState.addOperands(shape);
  odsState.addOperands(dim);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value shape, ::mlir::Value dim) {
  odsState.addOperands(shape);
  odsState.addOperands(dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult GetExtentOp::verify() {
  if (failed(GetExtentOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult GetExtentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType shapeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> shapeOperands(shapeRawOperands);  ::llvm::SMLoc shapeOperandsLoc = parser.getCurrentLocation();
  (void)shapeOperandsLoc;
  ::mlir::OpAsmParser::OperandType dimRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> dimOperands(dimRawOperands);  ::llvm::SMLoc dimOperandsLoc = parser.getCurrentLocation();
  (void)dimOperandsLoc;

  if (parser.parseOperand(shapeRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(dimRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(shapeOperands, odsBuildableType1, result.operands))
    return failure();
  if (parser.resolveOperands(dimOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void GetExtentOp::print(OpAsmPrinter &p) {
  p << "shape.get_extent";
  p << " ";
  p << shape();
  p << ",";
  p << " ";
  p << dim();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void GetExtentOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult GetExtentOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::IndexToSizeOp definitions
//===----------------------------------------------------------------------===//

IndexToSizeOpAdaptor::IndexToSizeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

IndexToSizeOpAdaptor::IndexToSizeOpAdaptor(IndexToSizeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> IndexToSizeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange IndexToSizeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexToSizeOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult IndexToSizeOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef IndexToSizeOp::getOperationName() {
  return "shape.index_to_size";
}

std::pair<unsigned, unsigned> IndexToSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IndexToSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexToSizeOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IndexToSizeOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IndexToSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IndexToSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IndexToSizeOp::result() {
  return *getODSResults(0).begin();
}

void IndexToSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(result);
}

void IndexToSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg) {
  odsState.addOperands(arg);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(IndexToSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IndexToSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexToSizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IndexToSizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(IndexToSizeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult IndexToSizeOp::verify() {
  if (failed(IndexToSizeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}





::mlir::ParseResult IndexToSizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType argRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> argOperands(argRawOperands);  ::llvm::SMLoc argOperandsLoc = parser.getCurrentLocation();
  (void)argOperandsLoc;

  if (parser.parseOperand(argRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(argOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void IndexToSizeOp::print(OpAsmPrinter &p) {
  p << "shape.index_to_size";
  p << " ";
  p << arg();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void IndexToSizeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult IndexToSizeOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::JoinOp definitions
//===----------------------------------------------------------------------===//

JoinOpAdaptor::JoinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

JoinOpAdaptor::JoinOpAdaptor(JoinOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> JoinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange JoinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value JoinOpAdaptor::arg0() {
  return *getODSOperands(0).begin();
}

::mlir::Value JoinOpAdaptor::arg1() {
  return *getODSOperands(1).begin();
}

::mlir::StringAttr JoinOpAdaptor::error() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("error").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult JoinOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_error = odsAttrs.get("error");
  if (tblgen_error) {
    if (!((tblgen_error.isa<::mlir::StringAttr>()))) return emitError(loc, "'shape.join' op ""attribute 'error' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

::llvm::StringRef JoinOp::getOperationName() {
  return "shape.join";
}

std::pair<unsigned, unsigned> JoinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range JoinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value JoinOp::arg0() {
  return *getODSOperands(0).begin();
}

::mlir::Value JoinOp::arg1() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange JoinOp::arg0Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange JoinOp::arg1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> JoinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range JoinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value JoinOp::result() {
  return *getODSResults(0).begin();
}

::mlir::StringAttr JoinOp::errorAttr() {
  return this->getAttr("error").dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > JoinOp::error() {
  auto attr = errorAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void JoinOp::errorAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("error", attr);
}

void JoinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value arg0, ::mlir::Value arg1, /*optional*/::mlir::StringAttr error) {
  odsState.addOperands(arg0);
  odsState.addOperands(arg1);
  if (error) {
  odsState.addAttribute("error", error);
  }
  odsState.addTypes(result);
}

void JoinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg0, ::mlir::Value arg1, /*optional*/::mlir::StringAttr error) {
  odsState.addOperands(arg0);
  odsState.addOperands(arg1);
  if (error) {
  odsState.addAttribute("error", error);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void JoinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult JoinOp::verify() {
  if (failed(JoinOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("operand #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("operand #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("result #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}


//===----------------------------------------------------------------------===//
// shape::MulOp definitions
//===----------------------------------------------------------------------===//

MulOpAdaptor::MulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MulOpAdaptor::MulOpAdaptor(MulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange MulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult MulOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef MulOp::getOperationName() {
  return "shape.mul";
}

std::pair<unsigned, unsigned> MulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOp::result() {
  return *getODSResults(0).begin();
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult MulOp::verify() {
  if (failed(MulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}

::mlir::ParseResult MulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void MulOp::print(OpAsmPrinter &p) {
  p << "shape.mul";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// shape::NumElementsOp definitions
//===----------------------------------------------------------------------===//

NumElementsOpAdaptor::NumElementsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

NumElementsOpAdaptor::NumElementsOpAdaptor(NumElementsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> NumElementsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange NumElementsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NumElementsOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult NumElementsOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef NumElementsOp::getOperationName() {
  return "shape.num_elements";
}

std::pair<unsigned, unsigned> NumElementsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NumElementsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NumElementsOp::shape() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange NumElementsOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> NumElementsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NumElementsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NumElementsOp::result() {
  return *getODSResults(0).begin();
}

void NumElementsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value shape) {
  odsState.addOperands(shape);
  odsState.addTypes(result);
}

void NumElementsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape) {
  odsState.addOperands(shape);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(NumElementsOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NumElementsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value shape) {
  odsState.addOperands(shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NumElementsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NumElementsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(NumElementsOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult NumElementsOp::verify() {
  if (failed(NumElementsOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult NumElementsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType shapeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> shapeOperands(shapeRawOperands);  ::llvm::SMLoc shapeOperandsLoc = parser.getCurrentLocation();
  (void)shapeOperandsLoc;

  if (parser.parseOperand(shapeRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(shapeOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void NumElementsOp::print(OpAsmPrinter &p) {
  p << "shape.num_elements";
  p << " ";
  p << shape();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void NumElementsOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult NumElementsOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::RankOp definitions
//===----------------------------------------------------------------------===//

RankOpAdaptor::RankOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

RankOpAdaptor::RankOpAdaptor(RankOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> RankOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange RankOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RankOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult RankOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef RankOp::getOperationName() {
  return "shape.rank";
}

std::pair<unsigned, unsigned> RankOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RankOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RankOp::shape() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange RankOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RankOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RankOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RankOp::rank() {
  return *getODSResults(0).begin();
}

void RankOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type rank, ::mlir::Value shape) {
  odsState.addOperands(shape);
  odsState.addTypes(rank);
}

void RankOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape) {
  odsState.addOperands(shape);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(RankOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void RankOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value shape) {
  odsState.addOperands(shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RankOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RankOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(RankOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult RankOp::verify() {
  if (failed(RankOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}





::mlir::ParseResult RankOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType shapeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> shapeOperands(shapeRawOperands);  ::llvm::SMLoc shapeOperandsLoc = parser.getCurrentLocation();
  (void)shapeOperandsLoc;
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperand(shapeRawOperands[0]))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(shapeOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void RankOp::print(OpAsmPrinter &p) {
  p << "shape.rank";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " ";
  p << shape();
}

void RankOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult RankOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ReduceOp definitions
//===----------------------------------------------------------------------===//

ReduceOpAdaptor::ReduceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReduceOpAdaptor::ReduceOpAdaptor(ReduceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReduceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange ReduceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

::mlir::ValueRange ReduceOpAdaptor::initVals() {
  return getODSOperands(1);
}

::mlir::LogicalResult ReduceOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef ReduceOp::getOperationName() {
  return "shape.reduce";
}

std::pair<unsigned, unsigned> ReduceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceOp::shape() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range ReduceOp::initVals() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ReduceOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReduceOp::initValsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReduceOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range ReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ReduceOp::result() {
  return getODSResults(0);
}

::mlir::Region &ReduceOp::region() {
  return this->getOperation()->getRegion(0);
}



void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> result, ::mlir::Value shape, ::mlir::ValueRange initVals) {
  odsState.addOperands(shape);
  odsState.addOperands(initVals);
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void ReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult ReduceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseReduceOp(parser, result);
}

void ReduceOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult ReduceOp::verify() {
  if (failed(ReduceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// shape::ShapeOfOp definitions
//===----------------------------------------------------------------------===//

ShapeOfOpAdaptor::ShapeOfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShapeOfOpAdaptor::ShapeOfOpAdaptor(ShapeOfOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShapeOfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ShapeOfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeOfOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult ShapeOfOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef ShapeOfOp::getOperationName() {
  return "shape.shape_of";
}

std::pair<unsigned, unsigned> ShapeOfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShapeOfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeOfOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ShapeOfOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShapeOfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShapeOfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeOfOp::result() {
  return *getODSResults(0).begin();
}

void ShapeOfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(result);
}

void ShapeOfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg) {
  odsState.addOperands(arg);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ShapeOfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShapeOfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShapeOfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShapeOfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(ShapeOfOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult ShapeOfOp::verify() {
  if (failed(ShapeOfOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::ShapedType>())) && ((true))) || ((v.getType().isa<::mlir::shape::ValueShapeType>())))) {
        return emitOpError("operand #") << index << " must be shaped of any type values or value shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult ShapeOfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType argRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> argOperands(argRawOperands);  ::llvm::SMLoc argOperandsLoc = parser.getCurrentLocation();
  (void)argOperandsLoc;
  ::mlir::Type argRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> argTypes(argRawTypes);

  if (parser.parseOperand(argRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(argRawTypes[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(argOperands, argTypes, argOperandsLoc, result.operands))
    return failure();
  return success();
}

void ShapeOfOp::print(OpAsmPrinter &p) {
  p << "shape.shape_of";
  p << " ";
  p << arg();
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(arg().getType());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void ShapeOfOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult ShapeOfOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::SizeToIndexOp definitions
//===----------------------------------------------------------------------===//

SizeToIndexOpAdaptor::SizeToIndexOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SizeToIndexOpAdaptor::SizeToIndexOpAdaptor(SizeToIndexOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SizeToIndexOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SizeToIndexOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SizeToIndexOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult SizeToIndexOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef SizeToIndexOp::getOperationName() {
  return "shape.size_to_index";
}

std::pair<unsigned, unsigned> SizeToIndexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SizeToIndexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SizeToIndexOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SizeToIndexOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SizeToIndexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SizeToIndexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SizeToIndexOp::result() {
  return *getODSResults(0).begin();
}

void SizeToIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(result);
}

void SizeToIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg) {
  odsState.addOperands(arg);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(SizeToIndexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SizeToIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SizeToIndexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SizeToIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(SizeToIndexOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult SizeToIndexOp::verify() {
  if (failed(SizeToIndexOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}





::mlir::ParseResult SizeToIndexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType argRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> argOperands(argRawOperands);  ::llvm::SMLoc argOperandsLoc = parser.getCurrentLocation();
  (void)argOperandsLoc;

  if (parser.parseOperand(argRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(argOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void SizeToIndexOp::print(OpAsmPrinter &p) {
  p << "shape.size_to_index";
  p << " ";
  p << arg();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void SizeToIndexOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

::mlir::LogicalResult SizeToIndexOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getIndexType();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::SplitAtOp definitions
//===----------------------------------------------------------------------===//

SplitAtOpAdaptor::SplitAtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SplitAtOpAdaptor::SplitAtOpAdaptor(SplitAtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SplitAtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SplitAtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SplitAtOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value SplitAtOpAdaptor::index() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult SplitAtOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

void SplitAtOp::getAsmResultNames(OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!llvm::empty(resultGroup0))
    setNameFn(*resultGroup0.begin(), "head");
  auto resultGroup1 = getODSResults(1);
  if (!llvm::empty(resultGroup1))
    setNameFn(*resultGroup1.begin(), "tail");
}

::llvm::StringRef SplitAtOp::getOperationName() {
  return "shape.split_at";
}

std::pair<unsigned, unsigned> SplitAtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SplitAtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SplitAtOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value SplitAtOp::index() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SplitAtOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SplitAtOp::indexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SplitAtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SplitAtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SplitAtOp::head() {
  return *getODSResults(0).begin();
}

::mlir::Value SplitAtOp::tail() {
  return *getODSResults(1).begin();
}

void SplitAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type head, ::mlir::Type tail, ::mlir::Value operand, ::mlir::Value index) {
  odsState.addOperands(operand);
  odsState.addOperands(index);
  odsState.addTypes(head);
  odsState.addTypes(tail);
}

void SplitAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value index) {
  odsState.addOperands(operand);
  odsState.addOperands(index);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(SplitAtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void SplitAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value operand, ::mlir::Value index) {
  odsState.addOperands(operand);
  odsState.addOperands(index);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitAtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SplitAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(SplitAtOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 2u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult SplitAtOp::verify() {
  if (failed(SplitAtOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isSignlessInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSResults(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::LogicalResult SplitAtOp::inferReturnTypes(::mlir::MLIRContext* context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  ::mlir::Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  inferredReturnTypes[1] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ToExtentTensorOp definitions
//===----------------------------------------------------------------------===//

ToExtentTensorOpAdaptor::ToExtentTensorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ToExtentTensorOpAdaptor::ToExtentTensorOpAdaptor(ToExtentTensorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ToExtentTensorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ToExtentTensorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToExtentTensorOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult ToExtentTensorOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef ToExtentTensorOp::getOperationName() {
  return "shape.to_extent_tensor";
}

std::pair<unsigned, unsigned> ToExtentTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ToExtentTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToExtentTensorOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ToExtentTensorOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ToExtentTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ToExtentTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ToExtentTensorOp::result() {
  return *getODSResults(0).begin();
}

void ToExtentTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value input) {
  odsState.addOperands(input);
  odsState.addTypes(result);
}

void ToExtentTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToExtentTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ToExtentTensorOp::verify() {
  if (failed(ToExtentTensorOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::IndexType>())))) {
        return emitOpError("result #") << index << " must be tensor of index values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::mlir::success();
}



::mlir::ParseResult ToExtentTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc = parser.getCurrentLocation();
  (void)inputOperandsLoc;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperand(inputRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void ToExtentTensorOp::print(OpAsmPrinter &p) {
  p << "shape.to_extent_tensor";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " ";
  p << input();
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void ToExtentTensorOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::YieldOp definitions
//===----------------------------------------------------------------------===//

YieldOpAdaptor::YieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

YieldOpAdaptor::YieldOpAdaptor(YieldOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> YieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange YieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange YieldOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::LogicalResult YieldOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef YieldOp::getOperationName() {
  return "shape.yield";
}

std::pair<unsigned, unsigned> YieldOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range YieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range YieldOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> YieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range YieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void YieldOp::build(OpBuilder &b, OperationState &result) {
 build(b, result, llvm::None); 
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
}

void YieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult YieldOp::verify() {
  if (failed(YieldOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> operandsTypes;
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(operandsTypes))
    return failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return failure();
  return success();
}

void YieldOp::print(OpAsmPrinter &p) {
  p << "shape.yield";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  if (!operands().empty()) {
  p << " ";
  p << operands();
  p << " " << ":";
  p << " ";
  p << operands().getTypes();
  }
}

void YieldOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

