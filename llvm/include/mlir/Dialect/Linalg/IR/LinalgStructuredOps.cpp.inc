/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

linalg::BatchMatmulOp,
linalg::ConvOp,
linalg::CopyOp,
linalg::DotOp,
linalg::FillOp,
linalg::GenericOp,
linalg::IndexedGenericOp,
linalg::MatmulOp,
linalg::MatvecOp,
linalg::PoolingMaxOp,
linalg::PoolingMinOp,
linalg::PoolingSumOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::BatchMatmulOp definitions
//===----------------------------------------------------------------------===//

BatchMatmulOpAdaptor::BatchMatmulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BatchMatmulOpAdaptor::BatchMatmulOpAdaptor(BatchMatmulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BatchMatmulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange BatchMatmulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange BatchMatmulOpAdaptor::views() {
  return getODSOperands(0);
}

::mlir::LogicalResult BatchMatmulOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef BatchMatmulOp::getOperationName() {
  return "linalg.batch_matmul";
}

std::pair<unsigned, unsigned> BatchMatmulOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range BatchMatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range BatchMatmulOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange BatchMatmulOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BatchMatmulOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range BatchMatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range BatchMatmulOp::output_tensors() {
  return getODSResults(0);
}

::mlir::Region &BatchMatmulOp::region() {
  return this->getOperation()->getRegion(0);
}

void BatchMatmulOp::build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views) {
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<BatchMatmulOp>(
            b, result, TypeRange(views), outputTypes);
        
}

void BatchMatmulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult BatchMatmulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseNamedStructuredOp<BatchMatmulOp>(parser, result);
}

void BatchMatmulOp::print(::mlir::OpAsmPrinter &p) {
  return ::printNamedStructuredOp(p, *this);
}

::mlir::LogicalResult BatchMatmulOp::verify() {
  if (failed(BatchMatmulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_326, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
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
  return ::verifyNamedStructuredOp(*this);
}




//===----------------------------------------------------------------------===//
// linalg::ConvOp definitions
//===----------------------------------------------------------------------===//

ConvOpAdaptor::ConvOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConvOpAdaptor::ConvOpAdaptor(ConvOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConvOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConvOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvOpAdaptor::filter() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConvOpAdaptor::input() {
  return *getODSOperands(1).begin();
}

::mlir::Value ConvOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::ArrayAttr ConvOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr ConvOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ConvOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ConvOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.conv' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_dilations.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.conv' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.conv' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

::llvm::StringRef ConvOp::getOperationName() {
  return "linalg.conv";
}

std::pair<unsigned, unsigned> ConvOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvOp::filter() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConvOp::input() {
  return *getODSOperands(1).begin();
}

::mlir::Value ConvOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ConvOp::filterMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConvOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ConvOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > ConvOp::strides() {
  auto attr = stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::ArrayAttr ConvOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > ConvOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ConvOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ConvOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void ConvOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void ConvOp::dilationsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void ConvOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void ConvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value filter, ::mlir::Value input, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(filter);
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void ConvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value filter, ::mlir::Value input, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(filter);
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvOp::verify() {
  if (failed(ConvOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



::mlir::ParseResult ConvOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void ConvOp::print(OpAsmPrinter &p) {
  p << "linalg.conv";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::CopyOp definitions
//===----------------------------------------------------------------------===//

CopyOpAdaptor::CopyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CopyOpAdaptor::CopyOpAdaptor(CopyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CopyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CopyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopyOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CopyOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

AffineMapAttr CopyOpAdaptor::inputPermutation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("inputPermutation").dyn_cast_or_null<AffineMapAttr>();
  return attr;
}

AffineMapAttr CopyOpAdaptor::outputPermutation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("outputPermutation").dyn_cast_or_null<AffineMapAttr>();
  return attr;
}

::mlir::LogicalResult CopyOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_inputPermutation = odsAttrs.get("inputPermutation");
  if (tblgen_inputPermutation) {
    if (!((tblgen_inputPermutation.isa<AffineMapAttr>()))) return emitError(loc, "'linalg.copy' op ""attribute 'inputPermutation' failed to satisfy constraint: AffineMap attribute");
  }
  }
  {
  auto tblgen_outputPermutation = odsAttrs.get("outputPermutation");
  if (tblgen_outputPermutation) {
    if (!((tblgen_outputPermutation.isa<AffineMapAttr>()))) return emitError(loc, "'linalg.copy' op ""attribute 'outputPermutation' failed to satisfy constraint: AffineMap attribute");
  }
  }
  return success();
}

::llvm::StringRef CopyOp::getOperationName() {
  return "linalg.copy";
}

std::pair<unsigned, unsigned> CopyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CopyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopyOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CopyOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CopyOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CopyOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CopyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CopyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr CopyOp::inputPermutationAttr() {
  return this->getAttr("inputPermutation").dyn_cast_or_null<AffineMapAttr>();
}

::llvm::Optional< AffineMap > CopyOp::inputPermutation() {
  auto attr = inputPermutationAttr();
  return attr ? ::llvm::Optional< AffineMap >(attr.getValue()) : (::llvm::None);
}

AffineMapAttr CopyOp::outputPermutationAttr() {
  return this->getAttr("outputPermutation").dyn_cast_or_null<AffineMapAttr>();
}

::llvm::Optional< AffineMap > CopyOp::outputPermutation() {
  auto attr = outputPermutationAttr();
  return attr ? ::llvm::Optional< AffineMap >(attr.getValue()) : (::llvm::None);
}

void CopyOp::inputPermutationAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("inputPermutation", attr);
}

void CopyOp::outputPermutationAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("outputPermutation", attr);
}

void CopyOp::build(OpBuilder &builder, OperationState &result, Value input, Value output) {
    return build(
      builder, result, input, output, AffineMapAttr(), AffineMapAttr());
  
}

void CopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (inputPermutation) {
  odsState.addAttribute("inputPermutation", inputPermutation);
  }
  if (outputPermutation) {
  odsState.addAttribute("outputPermutation", outputPermutation);
  }
}

void CopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (inputPermutation) {
  odsState.addAttribute("inputPermutation", inputPermutation);
  }
  if (outputPermutation) {
  odsState.addAttribute("outputPermutation", outputPermutation);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CopyOp::verify() {
  if (failed(CopyOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



::mlir::ParseResult CopyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void CopyOp::print(OpAsmPrinter &p) {
  p << "linalg.copy";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::DotOp definitions
//===----------------------------------------------------------------------===//

DotOpAdaptor::DotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DotOpAdaptor::DotOpAdaptor(DotOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DotOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange DotOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult DotOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef DotOp::getOperationName() {
  return "linalg.dot";
}

std::pair<unsigned, unsigned> DotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> DotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DotOp::verify() {
  if (failed(DotOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))) && ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (((v.getType().cast<::mlir::ShapedType>().hasRank())) && ((v.getType().cast<::mlir::ShapedType>().getRank()
                         == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))) && ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (((v.getType().cast<::mlir::ShapedType>().hasRank())) && ((v.getType().cast<::mlir::ShapedType>().getRank()
                         == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))) && ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (((v.getType().cast<::mlir::ShapedType>().hasRank())) && ((v.getType().cast<::mlir::ShapedType>().getRank()
                         == 0)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 0, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}



::mlir::ParseResult DotOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void DotOp::print(OpAsmPrinter &p) {
  p << "linalg.dot";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::FillOp definitions
//===----------------------------------------------------------------------===//

FillOpAdaptor::FillOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FillOpAdaptor::FillOpAdaptor(FillOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FillOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FillOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FillOpAdaptor::output() {
  return *getODSOperands(0).begin();
}

::mlir::Value FillOpAdaptor::value() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult FillOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef FillOp::getOperationName() {
  return "linalg.fill";
}

std::pair<unsigned, unsigned> FillOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FillOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FillOp::output() {
  return *getODSOperands(0).begin();
}

::mlir::Value FillOp::value() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FillOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FillOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FillOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FillOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FillOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value output, ::mlir::Value value) {
  odsState.addOperands(output);
  odsState.addOperands(value);
}

void FillOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value output, ::mlir::Value value) {
  odsState.addOperands(output);
  odsState.addOperands(value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FillOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FillOp::verify() {
  if (failed(FillOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::FloatType>())) || ((v.getType().isSignlessInteger())) || (((v.getType().isa<::mlir::VectorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be floating-point or signless integer or vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



::mlir::ParseResult FillOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void FillOp::print(OpAsmPrinter &p) {
  p << "linalg.fill";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::GenericOp definitions
//===----------------------------------------------------------------------===//

GenericOpAdaptor::GenericOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GenericOpAdaptor::GenericOpAdaptor(GenericOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GenericOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange GenericOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange GenericOpAdaptor::views() {
  return getODSOperands(0);
}

::mlir::IntegerAttr GenericOpAdaptor::args_in() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("args_in").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr GenericOpAdaptor::args_out() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("args_out").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::ArrayAttr GenericOpAdaptor::indexing_maps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("indexing_maps").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr GenericOpAdaptor::iterator_types() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("iterator_types").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::StringAttr GenericOpAdaptor::doc() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("doc").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr GenericOpAdaptor::library_call() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("library_call").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult GenericOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_args_in = odsAttrs.get("args_in");
  if (!tblgen_args_in) return emitError(loc, "'linalg.generic' op ""requires attribute 'args_in'");
    if (!(((tblgen_args_in.isa<::mlir::IntegerAttr>())) && ((tblgen_args_in.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.generic' op ""attribute 'args_in' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_args_out = odsAttrs.get("args_out");
  if (!tblgen_args_out) return emitError(loc, "'linalg.generic' op ""requires attribute 'args_out'");
    if (!(((tblgen_args_out.isa<::mlir::IntegerAttr>())) && ((tblgen_args_out.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.generic' op ""attribute 'args_out' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_indexing_maps = odsAttrs.get("indexing_maps");
  if (!tblgen_indexing_maps) return emitError(loc, "'linalg.generic' op ""requires attribute 'indexing_maps'");
    if (!(((tblgen_indexing_maps.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_indexing_maps.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'linalg.generic' op ""attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  {
  auto tblgen_iterator_types = odsAttrs.get("iterator_types");
  if (!tblgen_iterator_types) return emitError(loc, "'linalg.generic' op ""requires attribute 'iterator_types'");
    if (!((tblgen_iterator_types.isa<::mlir::ArrayAttr>()))) return emitError(loc, "'linalg.generic' op ""attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  {
  auto tblgen_doc = odsAttrs.get("doc");
  if (tblgen_doc) {
    if (!((tblgen_doc.isa<::mlir::StringAttr>()))) return emitError(loc, "'linalg.generic' op ""attribute 'doc' failed to satisfy constraint: string attribute");
  }
  }
  {
  auto tblgen_library_call = odsAttrs.get("library_call");
  if (tblgen_library_call) {
    if (!((tblgen_library_call.isa<::mlir::StringAttr>()))) return emitError(loc, "'linalg.generic' op ""attribute 'library_call' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

::llvm::StringRef GenericOp::getOperationName() {
  return "linalg.generic";
}

std::pair<unsigned, unsigned> GenericOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range GenericOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range GenericOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange GenericOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GenericOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range GenericOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range GenericOp::output_tensors() {
  return getODSResults(0);
}

::mlir::Region &GenericOp::region() {
  return this->getOperation()->getRegion(0);
}

::mlir::IntegerAttr GenericOp::args_inAttr() {
  return this->getAttr("args_in").cast<::mlir::IntegerAttr>();
}

::llvm::APInt GenericOp::args_in() {
  auto attr = args_inAttr();
  return attr.getValue();
}

::mlir::IntegerAttr GenericOp::args_outAttr() {
  return this->getAttr("args_out").cast<::mlir::IntegerAttr>();
}

::llvm::APInt GenericOp::args_out() {
  auto attr = args_outAttr();
  return attr.getValue();
}

::mlir::ArrayAttr GenericOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr GenericOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

::mlir::ArrayAttr GenericOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr GenericOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

::mlir::StringAttr GenericOp::docAttr() {
  return this->getAttr("doc").dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > GenericOp::doc() {
  auto attr = docAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::StringAttr GenericOp::library_callAttr() {
  return this->getAttr("library_call").dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > GenericOp::library_call() {
  auto attr = library_callAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void GenericOp::args_inAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("args_in", attr);
}

void GenericOp::args_outAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("args_out", attr);
}

void GenericOp::indexing_mapsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("indexing_maps", attr);
}

void GenericOp::iterator_typesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("iterator_types", attr);
}

void GenericOp::docAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("doc", attr);
}

void GenericOp::library_callAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("library_call", attr);
}



void GenericOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::mlir::IntegerAttr args_in, ::mlir::IntegerAttr args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", args_in);
  odsState.addAttribute("args_out", args_out);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void GenericOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::llvm::APInt args_in, ::llvm::APInt args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_in));
  odsState.addAttribute("args_out", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_out));
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void GenericOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult GenericOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseGenericOp(parser, result);
}

void GenericOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult GenericOp::verify() {
  if (failed(GenericOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_326, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// linalg::IndexedGenericOp definitions
//===----------------------------------------------------------------------===//

IndexedGenericOpAdaptor::IndexedGenericOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

IndexedGenericOpAdaptor::IndexedGenericOpAdaptor(IndexedGenericOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> IndexedGenericOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange IndexedGenericOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange IndexedGenericOpAdaptor::views() {
  return getODSOperands(0);
}

::mlir::IntegerAttr IndexedGenericOpAdaptor::args_in() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("args_in").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr IndexedGenericOpAdaptor::args_out() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("args_out").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::ArrayAttr IndexedGenericOpAdaptor::indexing_maps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("indexing_maps").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr IndexedGenericOpAdaptor::iterator_types() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("iterator_types").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::StringAttr IndexedGenericOpAdaptor::doc() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("doc").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr IndexedGenericOpAdaptor::library_call() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("library_call").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult IndexedGenericOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_args_in = odsAttrs.get("args_in");
  if (!tblgen_args_in) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'args_in'");
    if (!(((tblgen_args_in.isa<::mlir::IntegerAttr>())) && ((tblgen_args_in.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'args_in' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_args_out = odsAttrs.get("args_out");
  if (!tblgen_args_out) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'args_out'");
    if (!(((tblgen_args_out.isa<::mlir::IntegerAttr>())) && ((tblgen_args_out.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'args_out' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_indexing_maps = odsAttrs.get("indexing_maps");
  if (!tblgen_indexing_maps) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'indexing_maps'");
    if (!(((tblgen_indexing_maps.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_indexing_maps.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  {
  auto tblgen_iterator_types = odsAttrs.get("iterator_types");
  if (!tblgen_iterator_types) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'iterator_types'");
    if (!((tblgen_iterator_types.isa<::mlir::ArrayAttr>()))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  {
  auto tblgen_doc = odsAttrs.get("doc");
  if (tblgen_doc) {
    if (!((tblgen_doc.isa<::mlir::StringAttr>()))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'doc' failed to satisfy constraint: string attribute");
  }
  }
  {
  auto tblgen_library_call = odsAttrs.get("library_call");
  if (tblgen_library_call) {
    if (!((tblgen_library_call.isa<::mlir::StringAttr>()))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'library_call' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

::llvm::StringRef IndexedGenericOp::getOperationName() {
  return "linalg.indexed_generic";
}

std::pair<unsigned, unsigned> IndexedGenericOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range IndexedGenericOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range IndexedGenericOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange IndexedGenericOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IndexedGenericOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range IndexedGenericOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range IndexedGenericOp::output_tensors() {
  return getODSResults(0);
}

::mlir::Region &IndexedGenericOp::region() {
  return this->getOperation()->getRegion(0);
}

::mlir::IntegerAttr IndexedGenericOp::args_inAttr() {
  return this->getAttr("args_in").cast<::mlir::IntegerAttr>();
}

::llvm::APInt IndexedGenericOp::args_in() {
  auto attr = args_inAttr();
  return attr.getValue();
}

::mlir::IntegerAttr IndexedGenericOp::args_outAttr() {
  return this->getAttr("args_out").cast<::mlir::IntegerAttr>();
}

::llvm::APInt IndexedGenericOp::args_out() {
  auto attr = args_outAttr();
  return attr.getValue();
}

::mlir::ArrayAttr IndexedGenericOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr IndexedGenericOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

::mlir::ArrayAttr IndexedGenericOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr IndexedGenericOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

::mlir::StringAttr IndexedGenericOp::docAttr() {
  return this->getAttr("doc").dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > IndexedGenericOp::doc() {
  auto attr = docAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

::mlir::StringAttr IndexedGenericOp::library_callAttr() {
  return this->getAttr("library_call").dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > IndexedGenericOp::library_call() {
  auto attr = library_callAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void IndexedGenericOp::args_inAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("args_in", attr);
}

void IndexedGenericOp::args_outAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("args_out", attr);
}

void IndexedGenericOp::indexing_mapsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("indexing_maps", attr);
}

void IndexedGenericOp::iterator_typesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("iterator_types", attr);
}

void IndexedGenericOp::docAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("doc", attr);
}

void IndexedGenericOp::library_callAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("library_call", attr);
}



void IndexedGenericOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::mlir::IntegerAttr args_in, ::mlir::IntegerAttr args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", args_in);
  odsState.addAttribute("args_out", args_out);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void IndexedGenericOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> output_tensors, ::mlir::ValueRange views, ::llvm::APInt args_in, ::llvm::APInt args_out, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::StringAttr doc, /*optional*/::mlir::StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_in));
  odsState.addAttribute("args_out", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_out));
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void IndexedGenericOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult IndexedGenericOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseGenericOp(parser, result);
}

void IndexedGenericOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult IndexedGenericOp::verify() {
  if (failed(IndexedGenericOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_326, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// linalg::MatmulOp definitions
//===----------------------------------------------------------------------===//

MatmulOpAdaptor::MatmulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatmulOpAdaptor::MatmulOpAdaptor(MatmulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatmulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange MatmulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange MatmulOpAdaptor::views() {
  return getODSOperands(0);
}

::mlir::LogicalResult MatmulOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef MatmulOp::getOperationName() {
  return "linalg.matmul";
}

std::pair<unsigned, unsigned> MatmulOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MatmulOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MatmulOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatmulOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range MatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range MatmulOp::output_tensors() {
  return getODSResults(0);
}

::mlir::Region &MatmulOp::region() {
  return this->getOperation()->getRegion(0);
}

void MatmulOp::build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views) {
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<MatmulOp>(
            b, result, TypeRange(views), outputTypes);
        
}

void MatmulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult MatmulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseNamedStructuredOp<MatmulOp>(parser, result);
}

void MatmulOp::print(::mlir::OpAsmPrinter &p) {
  return ::printNamedStructuredOp(p, *this);
}

::mlir::LogicalResult MatmulOp::verify() {
  if (failed(MatmulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_326, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
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
  return ::verifyNamedStructuredOp(*this);
}




//===----------------------------------------------------------------------===//
// linalg::MatvecOp definitions
//===----------------------------------------------------------------------===//

MatvecOpAdaptor::MatvecOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatvecOpAdaptor::MatvecOpAdaptor(MatvecOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatvecOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange MatvecOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange MatvecOpAdaptor::views() {
  return getODSOperands(0);
}

::mlir::LogicalResult MatvecOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef MatvecOp::getOperationName() {
  return "linalg.matvec";
}

std::pair<unsigned, unsigned> MatvecOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MatvecOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MatvecOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MatvecOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatvecOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range MatvecOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range MatvecOp::output_tensors() {
  return getODSResults(0);
}

::mlir::Region &MatvecOp::region() {
  return this->getOperation()->getRegion(0);
}

void MatvecOp::build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views) {
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<MatvecOp>(
            b, result, TypeRange(views), outputTypes);
        
}

void MatvecOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult MatvecOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseNamedStructuredOp<MatvecOp>(parser, result);
}

void MatvecOp::print(::mlir::OpAsmPrinter &p) {
  return ::printNamedStructuredOp(p, *this);
}

::mlir::LogicalResult MatvecOp::verify() {
  if (failed(MatvecOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_326, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::TensorType>())) && ((v.getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
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
  return ::verifyNamedStructuredOp(*this);
}




//===----------------------------------------------------------------------===//
// linalg::PoolingMaxOp definitions
//===----------------------------------------------------------------------===//

PoolingMaxOpAdaptor::PoolingMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PoolingMaxOpAdaptor::PoolingMaxOpAdaptor(PoolingMaxOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PoolingMaxOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PoolingMaxOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoolingMaxOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PoolingMaxOpAdaptor::windowDims() {
  return *getODSOperands(1).begin();
}

::mlir::Value PoolingMaxOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::ArrayAttr PoolingMaxOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PoolingMaxOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr PoolingMaxOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult PoolingMaxOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_max' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_dilations.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_max' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.pooling_max' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

::llvm::StringRef PoolingMaxOp::getOperationName() {
  return "linalg.pooling_max";
}

std::pair<unsigned, unsigned> PoolingMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PoolingMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoolingMaxOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PoolingMaxOp::windowDims() {
  return *getODSOperands(1).begin();
}

::mlir::Value PoolingMaxOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PoolingMaxOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMaxOp::windowDimsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMaxOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PoolingMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PoolingMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr PoolingMaxOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > PoolingMaxOp::strides() {
  auto attr = stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::ArrayAttr PoolingMaxOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > PoolingMaxOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr PoolingMaxOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > PoolingMaxOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void PoolingMaxOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void PoolingMaxOp::dilationsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void PoolingMaxOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void PoolingMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void PoolingMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoolingMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PoolingMaxOp::verify() {
  if (failed(PoolingMaxOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



::mlir::ParseResult PoolingMaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void PoolingMaxOp::print(OpAsmPrinter &p) {
  p << "linalg.pooling_max";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::PoolingMinOp definitions
//===----------------------------------------------------------------------===//

PoolingMinOpAdaptor::PoolingMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PoolingMinOpAdaptor::PoolingMinOpAdaptor(PoolingMinOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PoolingMinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PoolingMinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoolingMinOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PoolingMinOpAdaptor::windowDims() {
  return *getODSOperands(1).begin();
}

::mlir::Value PoolingMinOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::ArrayAttr PoolingMinOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PoolingMinOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr PoolingMinOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult PoolingMinOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_min' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_dilations.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_min' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.pooling_min' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

::llvm::StringRef PoolingMinOp::getOperationName() {
  return "linalg.pooling_min";
}

std::pair<unsigned, unsigned> PoolingMinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PoolingMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoolingMinOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PoolingMinOp::windowDims() {
  return *getODSOperands(1).begin();
}

::mlir::Value PoolingMinOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PoolingMinOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMinOp::windowDimsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMinOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PoolingMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PoolingMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr PoolingMinOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > PoolingMinOp::strides() {
  auto attr = stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::ArrayAttr PoolingMinOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > PoolingMinOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr PoolingMinOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > PoolingMinOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void PoolingMinOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void PoolingMinOp::dilationsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void PoolingMinOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void PoolingMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void PoolingMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoolingMinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PoolingMinOp::verify() {
  if (failed(PoolingMinOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



::mlir::ParseResult PoolingMinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void PoolingMinOp::print(OpAsmPrinter &p) {
  p << "linalg.pooling_min";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::PoolingSumOp definitions
//===----------------------------------------------------------------------===//

PoolingSumOpAdaptor::PoolingSumOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PoolingSumOpAdaptor::PoolingSumOpAdaptor(PoolingSumOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PoolingSumOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PoolingSumOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoolingSumOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PoolingSumOpAdaptor::windowDims() {
  return *getODSOperands(1).begin();
}

::mlir::Value PoolingSumOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::ArrayAttr PoolingSumOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PoolingSumOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr PoolingSumOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult PoolingSumOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_sum' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_dilations.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_sum' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.pooling_sum' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

::llvm::StringRef PoolingSumOp::getOperationName() {
  return "linalg.pooling_sum";
}

std::pair<unsigned, unsigned> PoolingSumOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PoolingSumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoolingSumOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PoolingSumOp::windowDims() {
  return *getODSOperands(1).begin();
}

::mlir::Value PoolingSumOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PoolingSumOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingSumOp::windowDimsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingSumOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PoolingSumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PoolingSumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr PoolingSumOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > PoolingSumOp::strides() {
  auto attr = stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::ArrayAttr PoolingSumOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > PoolingSumOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr PoolingSumOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > PoolingSumOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void PoolingSumOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void PoolingSumOp::dilationsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void PoolingSumOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void PoolingSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void PoolingSumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value input, ::mlir::Value windowDims, ::mlir::Value output, /*optional*/::mlir::ArrayAttr strides, /*optional*/::mlir::ArrayAttr dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoolingSumOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PoolingSumOp::verify() {
  if (failed(PoolingSumOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<::mlir::MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



::mlir::ParseResult PoolingSumOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void PoolingSumOp::print(OpAsmPrinter &p) {
  p << "linalg.pooling_sum";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


#endif  // GET_OP_CLASSES

