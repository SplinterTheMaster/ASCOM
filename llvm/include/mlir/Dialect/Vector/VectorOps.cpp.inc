/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

vector::BroadcastOp,
vector::ConstantMaskOp,
vector::ContractionOp,
vector::CreateMaskOp,
vector::ExtractElementOp,
vector::ExtractOp,
vector::ExtractSlicesOp,
vector::ExtractStridedSliceOp,
vector::FMAOp,
vector::FlatTransposeOp,
vector::InsertElementOp,
vector::InsertOp,
vector::InsertSlicesOp,
vector::InsertStridedSliceOp,
vector::MatmulOp,
vector::OuterProductOp,
vector::PrintOp,
vector::ReductionOp,
vector::ReshapeOp,
vector::ShapeCastOp,
vector::ShuffleOp,
vector::TransferReadOp,
vector::TransferWriteOp,
vector::TransposeOp,
vector::TupleGetOp,
vector::TupleOp,
vector::TypeCastOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// vector::BroadcastOp definitions
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

::mlir::Value BroadcastOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult BroadcastOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef BroadcastOp::getOperationName() {
  return "vector.broadcast";
}

std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange BroadcastOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
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

::mlir::Value BroadcastOp::vector() {
  return *getODSResults(0).begin();
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(vector);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastOp::verify() {
  if (failed(BroadcastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::verify(*this);
}

::mlir::ParseResult BroadcastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  result.addTypes(vectorTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  return success();
}

void BroadcastOp::print(OpAsmPrinter &p) {
  p << "vector.broadcast";
  p << " ";
  p << source();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(source().getType());
  p << " " << "to";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vector().getType());
}

void BroadcastOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ConstantMaskOp definitions
//===----------------------------------------------------------------------===//

ConstantMaskOpAdaptor::ConstantMaskOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstantMaskOpAdaptor::ConstantMaskOpAdaptor(ConstantMaskOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstantMaskOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConstantMaskOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ConstantMaskOpAdaptor::mask_dim_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("mask_dim_sizes").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ConstantMaskOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_mask_dim_sizes = odsAttrs.get("mask_dim_sizes");
  if (!tblgen_mask_dim_sizes) return emitError(loc, "'vector.constant_mask' op ""requires attribute 'mask_dim_sizes'");
    if (!(((tblgen_mask_dim_sizes.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_mask_dim_sizes.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.constant_mask' op ""attribute 'mask_dim_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef ConstantMaskOp::getOperationName() {
  return "vector.constant_mask";
}

std::pair<unsigned, unsigned> ConstantMaskOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstantMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstantMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstantMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ConstantMaskOp::mask_dim_sizesAttr() {
  return this->getAttr("mask_dim_sizes").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ConstantMaskOp::mask_dim_sizes() {
  auto attr = mask_dim_sizesAttr();
  return attr;
}

void ConstantMaskOp::mask_dim_sizesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("mask_dim_sizes", attr);
}

void ConstantMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ArrayAttr mask_dim_sizes) {
  odsState.addAttribute("mask_dim_sizes", mask_dim_sizes);
  odsState.addTypes(resultType0);
}

void ConstantMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ArrayAttr mask_dim_sizes) {
  odsState.addAttribute("mask_dim_sizes", mask_dim_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantMaskOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConstantMaskOp::verify() {
  if (failed(ConstantMaskOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))))) {
        return emitOpError("result #") << index << " must be vector of 1-bit signless integer values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

::mlir::ParseResult ConstantMaskOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  ::mlir::ArrayAttr mask_dim_sizesAttr;
  if (parser.parseAttribute(mask_dim_sizesAttr, parser.getBuilder().getType<::mlir::NoneType>(), "mask_dim_sizes", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  return success();
}

void ConstantMaskOp::print(OpAsmPrinter &p) {
  p << "vector.constant_mask";
  p << " ";
  p.printAttributeWithoutType(mask_dim_sizesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"mask_dim_sizes"});
  p << " " << ":";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ConstantMaskOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ContractionOp definitions
//===----------------------------------------------------------------------===//

ContractionOpAdaptor::ContractionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ContractionOpAdaptor::ContractionOpAdaptor(ContractionOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ContractionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange ContractionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ContractionOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ContractionOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ContractionOpAdaptor::acc() {
  return *getODSOperands(2).begin();
}

::mlir::ValueRange ContractionOpAdaptor::masks() {
  return getODSOperands(3);
}

::mlir::ArrayAttr ContractionOpAdaptor::indexing_maps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("indexing_maps").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr ContractionOpAdaptor::iterator_types() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("iterator_types").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ContractionOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_indexing_maps = odsAttrs.get("indexing_maps");
  if (!tblgen_indexing_maps) return emitError(loc, "'vector.contract' op ""requires attribute 'indexing_maps'");
    if (!(((tblgen_indexing_maps.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_indexing_maps.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'vector.contract' op ""attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  {
  auto tblgen_iterator_types = odsAttrs.get("iterator_types");
  if (!tblgen_iterator_types) return emitError(loc, "'vector.contract' op ""requires attribute 'iterator_types'");
    if (!((tblgen_iterator_types.isa<::mlir::ArrayAttr>()))) return emitError(loc, "'vector.contract' op ""attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  return success();
}

::llvm::StringRef ContractionOp::getOperationName() {
  return "vector.contract";
}

std::pair<unsigned, unsigned> ContractionOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ContractionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ContractionOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ContractionOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ContractionOp::acc() {
  return *getODSOperands(2).begin();
}

::mlir::Operation::operand_range ContractionOp::masks() {
  return getODSOperands(3);
}

::mlir::MutableOperandRange ContractionOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ContractionOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ContractionOp::accMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ContractionOp::masksMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ContractionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ContractionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ContractionOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ContractionOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

::mlir::ArrayAttr ContractionOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ContractionOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

void ContractionOp::indexing_mapsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("indexing_maps", attr);
}

void ContractionOp::iterator_typesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("iterator_types", attr);
}





void ContractionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, ::mlir::ValueRange masks, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addOperands(masks);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  odsState.addTypes(resultType0);
}

void ContractionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc, ::mlir::ValueRange masks, ::mlir::ArrayAttr indexing_maps, ::mlir::ArrayAttr iterator_types) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addOperands(masks);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ContractionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult ContractionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseContractionOp(parser, result);
}

void ContractionOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult ContractionOp::verify() {
  if (failed(ContractionOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))))) {
        return emitOpError("operand #") << index << " must be vector of 1-bit signless integer values, but got " << v.getType();
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
  if (!((((*this->getOperation()).getNumOperands() > 1)) && (((*this->getOperation()).getOperand(0).getType().isa<::mlir::ShapedType>())) && (((*this->getOperation()).getOperand(1).getType().isa<::mlir::ShapedType>())) && ((::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(0)) == ::mlir::getElementTypeOrSelf((*this->getOperation()).getOperand(1))))))
    return emitOpError("failed to verify that lhs and rhs have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(2)))))
    return emitOpError("failed to verify that third operand acc and result have same element type");
  return ::verify(*this);
}



void ContractionOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::CreateMaskOp definitions
//===----------------------------------------------------------------------===//

CreateMaskOpAdaptor::CreateMaskOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CreateMaskOpAdaptor::CreateMaskOpAdaptor(CreateMaskOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CreateMaskOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange CreateMaskOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange CreateMaskOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::LogicalResult CreateMaskOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef CreateMaskOp::getOperationName() {
  return "vector.create_mask";
}

std::pair<unsigned, unsigned> CreateMaskOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CreateMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CreateMaskOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CreateMaskOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CreateMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CreateMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CreateMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addTypes(resultType0);
}

void CreateMaskOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CreateMaskOp::verify() {
  if (failed(CreateMaskOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))))) {
        return emitOpError("result #") << index << " must be vector of 1-bit signless integer values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



::mlir::ParseResult CreateMaskOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(operandsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void CreateMaskOp::print(OpAsmPrinter &p) {
  p << "vector.create_mask";
  p << " ";
  p << operands();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getResultTypes();
}

void CreateMaskOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractElementOp definitions
//===----------------------------------------------------------------------===//

ExtractElementOpAdaptor::ExtractElementOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractElementOpAdaptor::ExtractElementOpAdaptor(ExtractElementOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractElementOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ExtractElementOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractElementOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::Value ExtractElementOpAdaptor::position() {
  return *getODSOperands(1).begin();
}

::mlir::LogicalResult ExtractElementOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef ExtractElementOp::getOperationName() {
  return "vector.extractelement";
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractElementOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::Value ExtractElementOp::position() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ExtractElementOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ExtractElementOp::positionMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractElementOp::result() {
  return *getODSResults(0).begin();
}

void ExtractElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(position);
  odsState.addTypes(result);
}

void ExtractElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractElementOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtractElementOp::verify() {
  if (failed(ExtractElementOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isSignlessInteger()))) {
        return emitOpError("operand #") << index << " must be signless integer, but got " << v.getType();
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
  if (!(((*this->getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type matches element type of vector operand");
  return ::verify(*this);
}

::mlir::ParseResult ExtractElementOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  ::mlir::OpAsmParser::OperandType positionRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> positionOperands(positionRawOperands);  ::llvm::SMLoc positionOperandsLoc = parser.getCurrentLocation();
  (void)positionOperandsLoc;
  ::mlir::Type positionRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> positionTypes(positionRawTypes);
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperand(positionRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(positionRawTypes[0]))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  for (::mlir::Type type : vectorTypes) {
    (void)type;
    if (!(((type.isa<::mlir::VectorType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'vector' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(vectorTypes[0].cast<ShapedType>().getElementType());
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(positionOperands, positionTypes, positionOperandsLoc, result.operands))
    return failure();
  return success();
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  p << "vector.extractelement";
  p << " ";
  p << vector();
  p << "[";
  p << position();
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(position().getType());
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vector().getType());
}

void ExtractElementOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractOp definitions
//===----------------------------------------------------------------------===//

ExtractOpAdaptor::ExtractOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractOpAdaptor::ExtractOpAdaptor(ExtractOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ExtractOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::ArrayAttr ExtractOpAdaptor::position() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("position").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ExtractOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_position = odsAttrs.get("position");
  if (!tblgen_position) return emitError(loc, "'vector.extract' op ""requires attribute 'position'");
    if (!(((tblgen_position.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_position.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract' op ""attribute 'position' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef ExtractOp::getOperationName() {
  return "vector.extract";
}

std::pair<unsigned, unsigned> ExtractOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtractOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ExtractOp::positionAttr() {
  return this->getAttr("position").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ExtractOp::position() {
  auto attr = positionAttr();
  return attr;
}

void ExtractOp::positionAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("position", attr);
}





void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value vector, ::mlir::ArrayAttr position) {
  odsState.addOperands(vector);
  odsState.addAttribute("position", position);
  odsState.addTypes(resultType0);
}

void ExtractOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::ArrayAttr position) {
  odsState.addOperands(vector);
  odsState.addAttribute("position", position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult ExtractOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseExtractOp(parser, result);
}

void ExtractOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult ExtractOp::verify() {
  if (failed(ExtractOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
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
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::verify(*this);
}



void ExtractOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractSlicesOp definitions
//===----------------------------------------------------------------------===//

ExtractSlicesOpAdaptor::ExtractSlicesOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractSlicesOpAdaptor::ExtractSlicesOpAdaptor(ExtractSlicesOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractSlicesOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ExtractSlicesOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractSlicesOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::ArrayAttr ExtractSlicesOpAdaptor::sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("sizes").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr ExtractSlicesOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ExtractSlicesOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_sizes = odsAttrs.get("sizes");
  if (!tblgen_sizes) return emitError(loc, "'vector.extract_slices' op ""requires attribute 'sizes'");
    if (!(((tblgen_sizes.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_sizes.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_slices' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.extract_slices' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_slices' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef ExtractSlicesOp::getOperationName() {
  return "vector.extract_slices";
}

std::pair<unsigned, unsigned> ExtractSlicesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtractSlicesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractSlicesOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractSlicesOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractSlicesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractSlicesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ExtractSlicesOp::sizesAttr() {
  return this->getAttr("sizes").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ExtractSlicesOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

::mlir::ArrayAttr ExtractSlicesOp::stridesAttr() {
  return this->getAttr("strides").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ExtractSlicesOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void ExtractSlicesOp::sizesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("sizes", attr);
}

void ExtractSlicesOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}



void ExtractSlicesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value vector, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(resultType0);
}

void ExtractSlicesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractSlicesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtractSlicesOp::verify() {
  if (failed(ExtractSlicesOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::TupleType>())) && (::llvm::all_of(v.getType().cast<::mlir::TupleType>().getTypes(), [](Type t) { return ((t.isa<::mlir::VectorType>())) && ((true)); })))) {
        return emitOpError("result #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

::mlir::ParseResult ExtractSlicesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  ::mlir::ArrayAttr sizesAttr;
  if (parser.parseAttribute(sizesAttr, parser.getBuilder().getType<::mlir::NoneType>(), "sizes", result.attributes))
    return failure();
  if (parser.parseComma())
    return failure();

  ::mlir::ArrayAttr stridesAttr;
  if (parser.parseAttribute(stridesAttr, parser.getBuilder().getType<::mlir::NoneType>(), "strides", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  return success();
}

void ExtractSlicesOp::print(OpAsmPrinter &p) {
  p << "vector.extract_slices";
  p << " ";
  p << vector();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(sizesAttr());
  p << ",";
  p << " ";
  p.printAttributeWithoutType(stridesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"sizes", "strides"});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vector().getType());
  p << " " << "into";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ExtractSlicesOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractStridedSliceOp definitions
//===----------------------------------------------------------------------===//

ExtractStridedSliceOpAdaptor::ExtractStridedSliceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractStridedSliceOpAdaptor::ExtractStridedSliceOpAdaptor(ExtractStridedSliceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractStridedSliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ExtractStridedSliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractStridedSliceOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::ArrayAttr ExtractStridedSliceOpAdaptor::offsets() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("offsets").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpAdaptor::sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("sizes").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ExtractStridedSliceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_offsets = odsAttrs.get("offsets");
  if (!tblgen_offsets) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'offsets'");
    if (!(((tblgen_offsets.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_offsets.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_sizes = odsAttrs.get("sizes");
  if (!tblgen_sizes) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'sizes'");
    if (!(((tblgen_sizes.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_sizes.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef ExtractStridedSliceOp::getOperationName() {
  return "vector.extract_strided_slice";
}

std::pair<unsigned, unsigned> ExtractStridedSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExtractStridedSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExtractStridedSliceOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractStridedSliceOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractStridedSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExtractStridedSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr ExtractStridedSliceOp::offsetsAttr() {
  return this->getAttr("offsets").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ExtractStridedSliceOp::offsets() {
  auto attr = offsetsAttr();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOp::sizesAttr() {
  return this->getAttr("sizes").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ExtractStridedSliceOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

::mlir::ArrayAttr ExtractStridedSliceOp::stridesAttr() {
  return this->getAttr("strides").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ExtractStridedSliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void ExtractStridedSliceOp::offsetsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("offsets", attr);
}

void ExtractStridedSliceOp::sizesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("sizes", attr);
}

void ExtractStridedSliceOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}



void ExtractStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value vector, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(resultType0);
}

void ExtractStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractStridedSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExtractStridedSliceOp::verify() {
  if (failed(ExtractStridedSliceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::verify(*this);
}



::mlir::ParseResult ExtractStridedSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  return success();
}

void ExtractStridedSliceOp::print(OpAsmPrinter &p) {
  p << "vector.extract_strided_slice";
  p << " ";
  p << vector();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vector().getType());
  p << " " << "to";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ExtractStridedSliceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::FMAOp definitions
//===----------------------------------------------------------------------===//

FMAOpAdaptor::FMAOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FMAOpAdaptor::FMAOpAdaptor(FMAOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FMAOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FMAOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMAOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value FMAOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value FMAOpAdaptor::acc() {
  return *getODSOperands(2).begin();
}

::mlir::LogicalResult FMAOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef FMAOp::getOperationName() {
  return "vector.fma";
}

std::pair<unsigned, unsigned> FMAOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FMAOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMAOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value FMAOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value FMAOp::acc() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange FMAOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMAOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMAOp::accMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FMAOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FMAOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FMAOp::result() {
  return *getODSResults(0).begin();
}

void FMAOp::build(OpBuilder &b, OperationState &result, Value lhs, Value rhs, Value acc) {
build(b, result, lhs.getType(), lhs, rhs, acc);
}

void FMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addTypes(result);
}

void FMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMAOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FMAOp::verify() {
  if (failed(FMAOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((::llvm::is_splat(::llvm::makeArrayRef({(*this->getODSOperands(0).begin()).getType(), (*this->getODSOperands(1).begin()).getType(), (*this->getODSOperands(2).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {lhs, rhs, acc, result} have same type");
  return ::mlir::success();
}

::mlir::ParseResult FMAOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType accRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> accOperands(accRawOperands);  ::llvm::SMLoc accOperandsLoc = parser.getCurrentLocation();
  (void)accOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(accRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(lhsRawTypes[0]))
    return failure();
  result.addTypes(lhsTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes[0], result.operands))
    return failure();
  if (parser.resolveOperands(accOperands, lhsTypes[0], result.operands))
    return failure();
  return success();
}

void FMAOp::print(OpAsmPrinter &p) {
  p << "vector.fma";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p << ",";
  p << " ";
  p << acc();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
}

void FMAOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::FlatTransposeOp definitions
//===----------------------------------------------------------------------===//

FlatTransposeOpAdaptor::FlatTransposeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FlatTransposeOpAdaptor::FlatTransposeOpAdaptor(FlatTransposeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FlatTransposeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FlatTransposeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FlatTransposeOpAdaptor::matrix() {
  return *getODSOperands(0).begin();
}

::mlir::IntegerAttr FlatTransposeOpAdaptor::rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("rows").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr FlatTransposeOpAdaptor::columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("columns").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult FlatTransposeOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_rows = odsAttrs.get("rows");
  if (!tblgen_rows) return emitError(loc, "'vector.flat_transpose' op ""requires attribute 'rows'");
    if (!(((tblgen_rows.isa<::mlir::IntegerAttr>())) && ((tblgen_rows.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.flat_transpose' op ""attribute 'rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_columns = odsAttrs.get("columns");
  if (!tblgen_columns) return emitError(loc, "'vector.flat_transpose' op ""requires attribute 'columns'");
    if (!(((tblgen_columns.isa<::mlir::IntegerAttr>())) && ((tblgen_columns.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.flat_transpose' op ""attribute 'columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

::llvm::StringRef FlatTransposeOp::getOperationName() {
  return "vector.flat_transpose";
}

std::pair<unsigned, unsigned> FlatTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FlatTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FlatTransposeOp::matrix() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FlatTransposeOp::matrixMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FlatTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FlatTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FlatTransposeOp::res() {
  return *getODSResults(0).begin();
}

::mlir::IntegerAttr FlatTransposeOp::rowsAttr() {
  return this->getAttr("rows").cast<::mlir::IntegerAttr>();
}

::llvm::APInt FlatTransposeOp::rows() {
  auto attr = rowsAttr();
  return attr.getValue();
}

::mlir::IntegerAttr FlatTransposeOp::columnsAttr() {
  return this->getAttr("columns").cast<::mlir::IntegerAttr>();
}

::llvm::APInt FlatTransposeOp::columns() {
  auto attr = columnsAttr();
  return attr.getValue();
}

void FlatTransposeOp::rowsAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("rows", attr);
}

void FlatTransposeOp::columnsAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("columns", attr);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrix, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  odsState.addTypes(res);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::mlir::IntegerAttr rows, ::mlir::IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value matrix, ::llvm::APInt rows, ::llvm::APInt columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  odsState.addTypes(res);
}

void FlatTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value matrix, ::llvm::APInt rows, ::llvm::APInt columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlatTransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FlatTransposeOp::verify() {
  if (failed(FlatTransposeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && (((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) && (((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::VectorType>().getRank()
                           == 1))))) {
        return emitOpError("operand #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && (((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) && (((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::VectorType>().getRank()
                           == 1))))) {
        return emitOpError("result #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::mlir::success();
}

::mlir::ParseResult FlatTransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType matrixRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> matrixOperands(matrixRawOperands);  ::llvm::SMLoc matrixOperandsLoc = parser.getCurrentLocation();
  (void)matrixOperandsLoc;
  ::mlir::Type matrixRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> matrixTypes(matrixRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  if (parser.parseOperand(matrixRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(matrixRawTypes[0]))
    return failure();
  if (parser.parseArrow())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(matrixOperands, matrixTypes, matrixOperandsLoc, result.operands))
    return failure();
  return success();
}

void FlatTransposeOp::print(OpAsmPrinter &p) {
  p << "vector.flat_transpose";
  p << " ";
  p << matrix();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(matrix().getType());
  p << " " << "->";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(res().getType());
}

void FlatTransposeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertElementOp definitions
//===----------------------------------------------------------------------===//

InsertElementOpAdaptor::InsertElementOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertElementOpAdaptor::InsertElementOpAdaptor(InsertElementOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertElementOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange InsertElementOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertElementOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

::mlir::Value InsertElementOpAdaptor::dest() {
  return *getODSOperands(1).begin();
}

::mlir::Value InsertElementOpAdaptor::position() {
  return *getODSOperands(2).begin();
}

::mlir::LogicalResult InsertElementOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef InsertElementOp::getOperationName() {
  return "vector.insertelement";
}

std::pair<unsigned, unsigned> InsertElementOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InsertElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertElementOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::Value InsertElementOp::dest() {
  return *getODSOperands(1).begin();
}

::mlir::Value InsertElementOp::position() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange InsertElementOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertElementOp::destMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertElementOp::positionMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertElementOp::result() {
  return *getODSResults(0).begin();
}

void InsertElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value dest, ::mlir::Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(position);
  odsState.addTypes(result);
}

void InsertElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertElementOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InsertElementOp::verify() {
  if (failed(InsertElementOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((v.getType().isSignlessInteger()))) {
        return emitOpError("operand #") << index << " must be signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().cast<ShapedType>().getElementType() == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that source operand type matches element type of result");
  if (!((::llvm::is_splat(::llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {dest, result} have same type");
  return ::verify(*this);
}

::mlir::ParseResult InsertElementOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::OperandType destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsLoc;
  ::mlir::OpAsmParser::OperandType positionRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> positionOperands(positionRawOperands);  ::llvm::SMLoc positionOperandsLoc = parser.getCurrentLocation();
  (void)positionOperandsLoc;
  ::mlir::Type positionRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> positionTypes(positionRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(destRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperand(positionRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(positionRawTypes[0]))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  for (::mlir::Type type : resultTypes) {
    (void)type;
    if (!(((type.isa<::mlir::VectorType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, resultTypes[0].cast<ShapedType>().getElementType(), sourceOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(destOperands, resultTypes[0], result.operands))
    return failure();
  if (parser.resolveOperands(positionOperands, positionTypes, positionOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertElementOp::print(OpAsmPrinter &p) {
  p << "vector.insertelement";
  p << " ";
  p << source();
  p << ",";
  p << " ";
  p << dest();
  p << "[";
  p << position();
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(position().getType());
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void InsertElementOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertOp definitions
//===----------------------------------------------------------------------===//

InsertOpAdaptor::InsertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertOpAdaptor::InsertOpAdaptor(InsertOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange InsertOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

::mlir::Value InsertOpAdaptor::dest() {
  return *getODSOperands(1).begin();
}

::mlir::ArrayAttr InsertOpAdaptor::position() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("position").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult InsertOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_position = odsAttrs.get("position");
  if (!tblgen_position) return emitError(loc, "'vector.insert' op ""requires attribute 'position'");
    if (!(((tblgen_position.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_position.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert' op ""attribute 'position' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef InsertOp::getOperationName() {
  return "vector.insert";
}

std::pair<unsigned, unsigned> InsertOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InsertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::Value InsertOp::dest() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange InsertOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertOp::destMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertOp::res() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr InsertOp::positionAttr() {
  return this->getAttr("position").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr InsertOp::position() {
  auto attr = positionAttr();
  return attr;
}

void InsertOp::positionAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("position", attr);
}





void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("position", position);
  odsState.addTypes(res);
}

void InsertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("position", position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InsertOp::verify() {
  if (failed(InsertOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  if (!((::llvm::is_splat(::llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {dest, res} have same type");
  return ::verify(*this);
}

::mlir::ParseResult InsertOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::OperandType destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(destRawOperands[0]))
    return failure();

  ::mlir::ArrayAttr positionAttr;
  if (parser.parseAttribute(positionAttr, parser.getBuilder().getType<::mlir::NoneType>(), "position", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseType(destRawTypes[0]))
    return failure();
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertOp::print(OpAsmPrinter &p) {
  p << "vector.insert";
  p << " ";
  p << source();
  p << ",";
  p << " ";
  p << dest();
  p << " ";
  p.printAttributeWithoutType(positionAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"position"});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(source().getType());
  p << " " << "into";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(dest().getType());
}

void InsertOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertSlicesOp definitions
//===----------------------------------------------------------------------===//

InsertSlicesOpAdaptor::InsertSlicesOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertSlicesOpAdaptor::InsertSlicesOpAdaptor(InsertSlicesOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertSlicesOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange InsertSlicesOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertSlicesOpAdaptor::vectors() {
  return *getODSOperands(0).begin();
}

::mlir::ArrayAttr InsertSlicesOpAdaptor::sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("sizes").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr InsertSlicesOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult InsertSlicesOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_sizes = odsAttrs.get("sizes");
  if (!tblgen_sizes) return emitError(loc, "'vector.insert_slices' op ""requires attribute 'sizes'");
    if (!(((tblgen_sizes.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_sizes.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_slices' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.insert_slices' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_slices' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef InsertSlicesOp::getOperationName() {
  return "vector.insert_slices";
}

std::pair<unsigned, unsigned> InsertSlicesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InsertSlicesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertSlicesOp::vectors() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange InsertSlicesOp::vectorsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertSlicesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertSlicesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr InsertSlicesOp::sizesAttr() {
  return this->getAttr("sizes").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr InsertSlicesOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

::mlir::ArrayAttr InsertSlicesOp::stridesAttr() {
  return this->getAttr("strides").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr InsertSlicesOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void InsertSlicesOp::sizesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("sizes", attr);
}

void InsertSlicesOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void InsertSlicesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value vectors, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vectors);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(resultType0);
}

void InsertSlicesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vectors, ::mlir::ArrayAttr sizes, ::mlir::ArrayAttr strides) {
  odsState.addOperands(vectors);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertSlicesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InsertSlicesOp::verify() {
  if (failed(InsertSlicesOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::TupleType>())) && (::llvm::all_of(v.getType().cast<::mlir::TupleType>().getTypes(), [](Type t) { return ((t.isa<::mlir::VectorType>())) && ((true)); })))) {
        return emitOpError("operand #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

::mlir::ParseResult InsertSlicesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType vectorsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> vectorsOperands(vectorsRawOperands);  ::llvm::SMLoc vectorsOperandsLoc = parser.getCurrentLocation();
  (void)vectorsOperandsLoc;
  ::mlir::Type vectorsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorsTypes(vectorsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  if (parser.parseOperand(vectorsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  ::mlir::ArrayAttr sizesAttr;
  if (parser.parseAttribute(sizesAttr, parser.getBuilder().getType<::mlir::NoneType>(), "sizes", result.attributes))
    return failure();
  if (parser.parseComma())
    return failure();

  ::mlir::ArrayAttr stridesAttr;
  if (parser.parseAttribute(stridesAttr, parser.getBuilder().getType<::mlir::NoneType>(), "strides", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorsRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorsOperands, vectorsTypes, vectorsOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertSlicesOp::print(OpAsmPrinter &p) {
  p << "vector.insert_slices";
  p << " ";
  p << vectors();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(sizesAttr());
  p << ",";
  p << " ";
  p.printAttributeWithoutType(stridesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"sizes", "strides"});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vectors().getType());
  p << " " << "into";
  p << " ";
  p << getOperation()->getResultTypes();
}

void InsertSlicesOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertStridedSliceOp definitions
//===----------------------------------------------------------------------===//

InsertStridedSliceOpAdaptor::InsertStridedSliceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertStridedSliceOpAdaptor::InsertStridedSliceOpAdaptor(InsertStridedSliceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertStridedSliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange InsertStridedSliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertStridedSliceOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

::mlir::Value InsertStridedSliceOpAdaptor::dest() {
  return *getODSOperands(1).begin();
}

::mlir::ArrayAttr InsertStridedSliceOpAdaptor::offsets() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("offsets").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr InsertStridedSliceOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult InsertStridedSliceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_offsets = odsAttrs.get("offsets");
  if (!tblgen_offsets) return emitError(loc, "'vector.insert_strided_slice' op ""requires attribute 'offsets'");
    if (!(((tblgen_offsets.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_offsets.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_strided_slice' op ""attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.insert_strided_slice' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_strided_slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef InsertStridedSliceOp::getOperationName() {
  return "vector.insert_strided_slice";
}

std::pair<unsigned, unsigned> InsertStridedSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InsertStridedSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertStridedSliceOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::Value InsertStridedSliceOp::dest() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange InsertStridedSliceOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertStridedSliceOp::destMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertStridedSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertStridedSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value InsertStridedSliceOp::res() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr InsertStridedSliceOp::offsetsAttr() {
  return this->getAttr("offsets").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr InsertStridedSliceOp::offsets() {
  auto attr = offsetsAttr();
  return attr;
}

::mlir::ArrayAttr InsertStridedSliceOp::stridesAttr() {
  return this->getAttr("strides").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr InsertStridedSliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void InsertStridedSliceOp::offsetsAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("offsets", attr);
}

void InsertStridedSliceOp::stridesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}



void InsertStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(res);
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value source, ::mlir::Value dest, ::mlir::ArrayAttr offsets, ::mlir::ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertStridedSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InsertStridedSliceOp::verify() {
  if (failed(InsertStridedSliceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand #0 and result have same element type");
  if (!((::llvm::is_splat(::llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {dest, res} have same type");
  return ::verify(*this);
}

::mlir::ParseResult InsertStridedSliceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  ::mlir::OpAsmParser::OperandType destRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> destOperands(destRawOperands);  ::llvm::SMLoc destOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type destRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> destTypes(destRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(destRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseType(destRawTypes[0]))
    return failure();
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertStridedSliceOp::print(OpAsmPrinter &p) {
  p << "vector.insert_strided_slice";
  p << " ";
  p << source();
  p << ",";
  p << " ";
  p << dest();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(source().getType());
  p << " " << "into";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(dest().getType());
}

void InsertStridedSliceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::MatmulOp definitions
//===----------------------------------------------------------------------===//

MatmulOpAdaptor::MatmulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatmulOpAdaptor::MatmulOpAdaptor(MatmulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatmulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange MatmulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatmulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MatmulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::IntegerAttr MatmulOpAdaptor::lhs_rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("lhs_rows").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr MatmulOpAdaptor::lhs_columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("lhs_columns").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr MatmulOpAdaptor::rhs_columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("rhs_columns").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult MatmulOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_lhs_rows = odsAttrs.get("lhs_rows");
  if (!tblgen_lhs_rows) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'lhs_rows'");
    if (!(((tblgen_lhs_rows.isa<::mlir::IntegerAttr>())) && ((tblgen_lhs_rows.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.matrix_multiply' op ""attribute 'lhs_rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_lhs_columns = odsAttrs.get("lhs_columns");
  if (!tblgen_lhs_columns) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'lhs_columns'");
    if (!(((tblgen_lhs_columns.isa<::mlir::IntegerAttr>())) && ((tblgen_lhs_columns.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.matrix_multiply' op ""attribute 'lhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_rhs_columns = odsAttrs.get("rhs_columns");
  if (!tblgen_rhs_columns) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'rhs_columns'");
    if (!(((tblgen_rhs_columns.isa<::mlir::IntegerAttr>())) && ((tblgen_rhs_columns.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.matrix_multiply' op ""attribute 'rhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

::llvm::StringRef MatmulOp::getOperationName() {
  return "vector.matrix_multiply";
}

std::pair<unsigned, unsigned> MatmulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatmulOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MatmulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MatmulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MatmulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatmulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatmulOp::res() {
  return *getODSResults(0).begin();
}

::mlir::IntegerAttr MatmulOp::lhs_rowsAttr() {
  return this->getAttr("lhs_rows").cast<::mlir::IntegerAttr>();
}

::llvm::APInt MatmulOp::lhs_rows() {
  auto attr = lhs_rowsAttr();
  return attr.getValue();
}

::mlir::IntegerAttr MatmulOp::lhs_columnsAttr() {
  return this->getAttr("lhs_columns").cast<::mlir::IntegerAttr>();
}

::llvm::APInt MatmulOp::lhs_columns() {
  auto attr = lhs_columnsAttr();
  return attr.getValue();
}

::mlir::IntegerAttr MatmulOp::rhs_columnsAttr() {
  return this->getAttr("rhs_columns").cast<::mlir::IntegerAttr>();
}

::llvm::APInt MatmulOp::rhs_columns() {
  auto attr = rhs_columnsAttr();
  return attr.getValue();
}

void MatmulOp::lhs_rowsAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("lhs_rows", attr);
}

void MatmulOp::lhs_columnsAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("lhs_columns", attr);
}

void MatmulOp::rhs_columnsAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("rhs_columns", attr);
}

void MatmulOp::build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, unsigned lhsRows, unsigned lhsColumns, unsigned rhsColumns) {
     result.addOperands({lhs, rhs});
     result.addAttribute("lhs_rows", builder.getI32IntegerAttr(lhsRows));
     result.addAttribute("lhs_columns", builder.getI32IntegerAttr(lhsColumns));
     result.addAttribute("rhs_columns", builder.getI32IntegerAttr(rhsColumns));
     result.addTypes(VectorType::get(lhsRows * rhsColumns,
       lhs.getType().cast<VectorType>().getElementType()));
   
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::IntegerAttr lhs_rows, ::mlir::IntegerAttr lhs_columns, ::mlir::IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", lhs_rows);
  odsState.addAttribute("lhs_columns", lhs_columns);
  odsState.addAttribute("rhs_columns", rhs_columns);
  odsState.addTypes(res);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::IntegerAttr lhs_rows, ::mlir::IntegerAttr lhs_columns, ::mlir::IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", lhs_rows);
  odsState.addAttribute("lhs_columns", lhs_columns);
  odsState.addAttribute("rhs_columns", rhs_columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value lhs, ::mlir::Value rhs, ::llvm::APInt lhs_rows, ::llvm::APInt lhs_columns, ::llvm::APInt rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows));
  odsState.addAttribute("lhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns));
  odsState.addAttribute("rhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns));
  odsState.addTypes(res);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::llvm::APInt lhs_rows, ::llvm::APInt lhs_columns, ::llvm::APInt rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows));
  odsState.addAttribute("lhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns));
  odsState.addAttribute("rhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatmulOp::verify() {
  if (failed(MatmulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && (((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) && (((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::VectorType>().getRank()
                           == 1))))) {
        return emitOpError("operand #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && (((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) && (((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::VectorType>().getRank()
                           == 1))))) {
        return emitOpError("operand #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && (((v.getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) && (((v.getType().isa<::mlir::VectorType>())) && ((v.getType().cast<::mlir::VectorType>().getRank()
                           == 1))))) {
        return emitOpError("result #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that lhs operand and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that rhs operand and result have same element type");
  return ::mlir::success();
}

::mlir::ParseResult MatmulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::Type resRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resTypes(resRawTypes);

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();
  if (parser.parseLParen())
    return failure();

  if (parser.parseType(lhsRawTypes[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseType(rhsRawTypes[0]))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseArrow())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return failure();
  return success();
}

void MatmulOp::print(OpAsmPrinter &p) {
  p << "vector.matrix_multiply";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " " << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << " " << "->";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(res().getType());
}

void MatmulOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::OuterProductOp definitions
//===----------------------------------------------------------------------===//

OuterProductOpAdaptor::OuterProductOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

OuterProductOpAdaptor::OuterProductOpAdaptor(OuterProductOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> OuterProductOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange OuterProductOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OuterProductOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value OuterProductOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::ValueRange OuterProductOpAdaptor::acc() {
  return getODSOperands(2);
}

::mlir::LogicalResult OuterProductOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef OuterProductOp::getOperationName() {
  return "vector.outerproduct";
}

std::pair<unsigned, unsigned> OuterProductOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range OuterProductOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OuterProductOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value OuterProductOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Operation::operand_range OuterProductOp::acc() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange OuterProductOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OuterProductOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OuterProductOp::accMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> OuterProductOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OuterProductOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}



void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::ValueRange acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addTypes(resultType0);
}

void OuterProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::ValueRange acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OuterProductOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult OuterProductOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseOuterProductOp(parser, result);
}

void OuterProductOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult OuterProductOp::verify() {
  if (failed(OuterProductOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
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
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that lhs operand and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that rhs operand and result have same element type");
  return ::verify(*this);
}

void OuterProductOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::PrintOp definitions
//===----------------------------------------------------------------------===//

PrintOpAdaptor::PrintOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PrintOpAdaptor::PrintOpAdaptor(PrintOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PrintOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PrintOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PrintOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult PrintOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef PrintOp::getOperationName() {
  return "vector.print";
}

std::pair<unsigned, unsigned> PrintOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PrintOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PrintOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange PrintOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PrintOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PrintOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source) {
  odsState.addOperands(source);
}

void PrintOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrintOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PrintOp::verify() {
  if (failed(PrintOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

::mlir::ParseResult PrintOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  return success();
}

void PrintOp::print(OpAsmPrinter &p) {
  p << "vector.print";
  p << " ";
  p << source();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(source().getType());
}


//===----------------------------------------------------------------------===//
// vector::ReductionOp definitions
//===----------------------------------------------------------------------===//

ReductionOpAdaptor::ReductionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReductionOpAdaptor::ReductionOpAdaptor(ReductionOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReductionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange ReductionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::ValueRange ReductionOpAdaptor::acc() {
  return getODSOperands(1);
}

::mlir::StringAttr ReductionOpAdaptor::kind() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("kind").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult ReductionOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_kind = odsAttrs.get("kind");
  if (!tblgen_kind) return emitError(loc, "'vector.reduction' op ""requires attribute 'kind'");
    if (!((tblgen_kind.isa<::mlir::StringAttr>()))) return emitError(loc, "'vector.reduction' op ""attribute 'kind' failed to satisfy constraint: string attribute");
  }
  return success();
}

::llvm::StringRef ReductionOp::getOperationName() {
  return "vector.reduction";
}

std::pair<unsigned, unsigned> ReductionOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range ReductionOp::acc() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ReductionOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReductionOp::accMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOp::dest() {
  return *getODSResults(0).begin();
}

::mlir::StringAttr ReductionOp::kindAttr() {
  return this->getAttr("kind").cast<::mlir::StringAttr>();
}

::llvm::StringRef ReductionOp::kind() {
  auto attr = kindAttr();
  return attr.getValue();
}

void ReductionOp::kindAttr(::mlir::StringAttr attr) {
  this->getOperation()->setAttr("kind", attr);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::StringAttr kind, ::mlir::Value vector, ::mlir::ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", kind);
  odsState.addTypes(dest);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::StringAttr kind, ::mlir::Value vector, ::mlir::ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", kind);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::llvm::StringRef kind, ::mlir::Value vector, ::mlir::ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", odsBuilder.getStringAttr(kind));
  odsState.addTypes(dest);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::llvm::StringRef kind, ::mlir::Value vector, ::mlir::ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", odsBuilder.getStringAttr(kind));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult ReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseReductionOp(parser, result);
}

void ReductionOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult ReductionOp::verify() {
  if (failed(ReductionOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
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
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::verify(*this);
}

void ReductionOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ReshapeOp definitions
//===----------------------------------------------------------------------===//

ReshapeOpAdaptor::ReshapeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

ReshapeOpAdaptor::ReshapeOpAdaptor(ReshapeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReshapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

::mlir::ValueRange ReshapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::ValueRange ReshapeOpAdaptor::input_shape() {
  return getODSOperands(1);
}

::mlir::ValueRange ReshapeOpAdaptor::output_shape() {
  return getODSOperands(2);
}

::mlir::ArrayAttr ReshapeOpAdaptor::fixed_vector_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("fixed_vector_sizes").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ReshapeOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements");
  }
    {
  auto tblgen_fixed_vector_sizes = odsAttrs.get("fixed_vector_sizes");
  if (!tblgen_fixed_vector_sizes) return emitError(loc, "'vector.reshape' op ""requires attribute 'fixed_vector_sizes'");
    if (!(((tblgen_fixed_vector_sizes.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_fixed_vector_sizes.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.reshape' op ""attribute 'fixed_vector_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef ReshapeOp::getOperationName() {
  return "vector.reshape";
}

std::pair<unsigned, unsigned> ReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<::mlir::DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

::mlir::Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range ReshapeOp::input_shape() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range ReshapeOp::output_shape() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ReshapeOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ReshapeOp::input_shapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ReshapeOp::output_shapeMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> ReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOp::result() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr ReshapeOp::fixed_vector_sizesAttr() {
  return this->getAttr("fixed_vector_sizes").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ReshapeOp::fixed_vector_sizes() {
  auto attr = fixed_vector_sizesAttr();
  return attr;
}

void ReshapeOp::fixed_vector_sizesAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("fixed_vector_sizes", attr);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::ValueRange input_shape, ::mlir::ValueRange output_shape, ::mlir::ArrayAttr fixed_vector_sizes) {
  odsState.addOperands(vector);
  odsState.addOperands(input_shape);
  odsState.addOperands(output_shape);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(input_shape.size()), static_cast<int32_t>(output_shape.size())}));
  odsState.addAttribute("fixed_vector_sizes", fixed_vector_sizes);
  odsState.addTypes(result);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::ValueRange input_shape, ::mlir::ValueRange output_shape, ::mlir::ArrayAttr fixed_vector_sizes) {
  odsState.addOperands(vector);
  odsState.addOperands(input_shape);
  odsState.addOperands(output_shape);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(input_shape.size()), static_cast<int32_t>(output_shape.size())}));
  odsState.addAttribute("fixed_vector_sizes", fixed_vector_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReshapeOp::verify() {
  if (failed(ReshapeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
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
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

::mlir::ParseResult ReshapeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> input_shapeOperands;
  ::llvm::SMLoc input_shapeOperandsLoc = parser.getCurrentLocation();
  (void)input_shapeOperandsLoc;
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> output_shapeOperands;
  ::llvm::SMLoc output_shapeOperandsLoc = parser.getCurrentLocation();
  (void)output_shapeOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(input_shapeOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseComma())
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(output_shapeOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseComma())
    return failure();

  ::mlir::ArrayAttr fixed_vector_sizesAttr;
  if (parser.parseAttribute(fixed_vector_sizesAttr, parser.getBuilder().getType<::mlir::NoneType>(), "fixed_vector_sizes", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(input_shapeOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(output_shapeOperands, odsBuildableType0, result.operands))
    return failure();
  result.addAttribute("operand_segment_sizes", parser.getBuilder().getI32VectorAttr({1, static_cast<int32_t>(input_shapeOperands.size()), static_cast<int32_t>(output_shapeOperands.size())}));
  return success();
}

void ReshapeOp::print(OpAsmPrinter &p) {
  p << "vector.reshape";
  p << " ";
  p << vector();
  p << ",";
  p << " " << "[";
  p << input_shape();
  p << "]";
  p << ",";
  p << " " << "[";
  p << output_shape();
  p << "]";
  p << ",";
  p << " ";
  p.printAttributeWithoutType(fixed_vector_sizesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"operand_segment_sizes", "fixed_vector_sizes"});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vector().getType());
  p << " " << "to";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void ReshapeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ShapeCastOp definitions
//===----------------------------------------------------------------------===//

ShapeCastOpAdaptor::ShapeCastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShapeCastOpAdaptor::ShapeCastOpAdaptor(ShapeCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShapeCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ShapeCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeCastOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult ShapeCastOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef ShapeCastOp::getOperationName() {
  return "vector.shape_cast";
}

std::pair<unsigned, unsigned> ShapeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShapeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeCastOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ShapeCastOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShapeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShapeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeCastOp::result() {
  return *getODSResults(0).begin();
}

void ShapeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void ShapeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShapeCastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShapeCastOp::verify() {
  if (failed(ShapeCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && ((true))) || (((v.getType().isa<::mlir::TupleType>())) && (::llvm::all_of(v.getType().cast<::mlir::TupleType>().getTypes(), [](Type t) { return ((t.isa<::mlir::VectorType>())) && ((true)); }))))) {
        return emitOpError("operand #") << index << " must be vector of any type values or tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::VectorType>())) && ((true))) || (((v.getType().isa<::mlir::TupleType>())) && (::llvm::all_of(v.getType().cast<::mlir::TupleType>().getTypes(), [](Type t) { return ((t.isa<::mlir::VectorType>())) && ((true)); }))))) {
        return emitOpError("result #") << index << " must be vector of any type values or tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



::mlir::ParseResult ShapeCastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  ::mlir::Type sourceRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sourceTypes(sourceRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  return success();
}

void ShapeCastOp::print(OpAsmPrinter &p) {
  p << "vector.shape_cast";
  p << " ";
  p << source();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(source().getType());
  p << " " << "to";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void ShapeCastOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ShuffleOp definitions
//===----------------------------------------------------------------------===//

ShuffleOpAdaptor::ShuffleOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShuffleOpAdaptor::ShuffleOpAdaptor(ShuffleOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShuffleOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ShuffleOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShuffleOpAdaptor::v1() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShuffleOpAdaptor::v2() {
  return *getODSOperands(1).begin();
}

::mlir::ArrayAttr ShuffleOpAdaptor::mask() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("mask").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ShuffleOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_mask = odsAttrs.get("mask");
  if (!tblgen_mask) return emitError(loc, "'vector.shuffle' op ""requires attribute 'mask'");
    if (!(((tblgen_mask.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_mask.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.shuffle' op ""attribute 'mask' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef ShuffleOp::getOperationName() {
  return "vector.shuffle";
}

std::pair<unsigned, unsigned> ShuffleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShuffleOp::v1() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShuffleOp::v2() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ShuffleOp::v1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShuffleOp::v2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShuffleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShuffleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShuffleOp::vector() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr ShuffleOp::maskAttr() {
  return this->getAttr("mask").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ShuffleOp::mask() {
  auto attr = maskAttr();
  return attr;
}

void ShuffleOp::maskAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("mask", attr);
}



void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.addAttribute("mask", mask);
  odsState.addTypes(vector);
}

void ShuffleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value v1, ::mlir::Value v2, ::mlir::ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.addAttribute("mask", mask);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult ShuffleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseShuffleOp(parser, result);
}

void ShuffleOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult ShuffleOp::verify() {
  if (failed(ShuffleOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that first operand v1 and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that second operand v2 and result have same element type");
  return ::verify(*this);
}

void ShuffleOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TransferReadOp definitions
//===----------------------------------------------------------------------===//

TransferReadOpAdaptor::TransferReadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TransferReadOpAdaptor::TransferReadOpAdaptor(TransferReadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TransferReadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange TransferReadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransferReadOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

::mlir::ValueRange TransferReadOpAdaptor::indices() {
  return getODSOperands(1);
}

::mlir::Value TransferReadOpAdaptor::padding() {
  return *getODSOperands(2).begin();
}

AffineMapAttr TransferReadOpAdaptor::permutation_map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("permutation_map").cast<AffineMapAttr>();
  return attr;
}

::mlir::ArrayAttr TransferReadOpAdaptor::masked() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("masked").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult TransferReadOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_permutation_map = odsAttrs.get("permutation_map");
  if (!tblgen_permutation_map) return emitError(loc, "'vector.transfer_read' op ""requires attribute 'permutation_map'");
    if (!((tblgen_permutation_map.isa<AffineMapAttr>()))) return emitError(loc, "'vector.transfer_read' op ""attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");
  }
  {
  auto tblgen_masked = odsAttrs.get("masked");
  if (tblgen_masked) {
    if (!(((tblgen_masked.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_masked.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return (attr.isa<::mlir::BoolAttr>()); })))) return emitError(loc, "'vector.transfer_read' op ""attribute 'masked' failed to satisfy constraint: 1-bit boolean array attribute");
  }
  }
  return success();
}

::llvm::StringRef TransferReadOp::getOperationName() {
  return "vector.transfer_read";
}

std::pair<unsigned, unsigned> TransferReadOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TransferReadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransferReadOp::memref() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range TransferReadOp::indices() {
  return getODSOperands(1);
}

::mlir::Value TransferReadOp::padding() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange TransferReadOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferReadOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferReadOp::paddingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransferReadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransferReadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransferReadOp::vector() {
  return *getODSResults(0).begin();
}

AffineMapAttr TransferReadOp::permutation_mapAttr() {
  return this->getAttr("permutation_map").cast<AffineMapAttr>();
}

AffineMap TransferReadOp::permutation_map() {
  auto attr = permutation_mapAttr();
  return attr.getValue();
}

::mlir::ArrayAttr TransferReadOp::maskedAttr() {
  return this->getAttr("masked").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > TransferReadOp::masked() {
  auto attr = maskedAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

void TransferReadOp::permutation_mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("permutation_map", attr);
}

void TransferReadOp::maskedAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("masked", attr);
}





void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMapAttr permutation_map, ::mlir::Value padding, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  odsState.addTypes(vector);
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMapAttr permutation_map, ::mlir::Value padding, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type vector, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMap permutation_map, ::mlir::Value padding, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  odsState.addTypes(vector);
}

void TransferReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMap permutation_map, ::mlir::Value padding, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferReadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult TransferReadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseTransferReadOp(parser, result);
}

void TransferReadOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult TransferReadOp::verify() {
  if (failed(TransferReadOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
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
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}






//===----------------------------------------------------------------------===//
// vector::TransferWriteOp definitions
//===----------------------------------------------------------------------===//

TransferWriteOpAdaptor::TransferWriteOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TransferWriteOpAdaptor::TransferWriteOpAdaptor(TransferWriteOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TransferWriteOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange TransferWriteOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransferWriteOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::Value TransferWriteOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

::mlir::ValueRange TransferWriteOpAdaptor::indices() {
  return getODSOperands(2);
}

AffineMapAttr TransferWriteOpAdaptor::permutation_map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("permutation_map").cast<AffineMapAttr>();
  return attr;
}

::mlir::ArrayAttr TransferWriteOpAdaptor::masked() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("masked").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult TransferWriteOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_permutation_map = odsAttrs.get("permutation_map");
  if (!tblgen_permutation_map) return emitError(loc, "'vector.transfer_write' op ""requires attribute 'permutation_map'");
    if (!((tblgen_permutation_map.isa<AffineMapAttr>()))) return emitError(loc, "'vector.transfer_write' op ""attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");
  }
  {
  auto tblgen_masked = odsAttrs.get("masked");
  if (tblgen_masked) {
    if (!(((tblgen_masked.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_masked.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return (attr.isa<::mlir::BoolAttr>()); })))) return emitError(loc, "'vector.transfer_write' op ""attribute 'masked' failed to satisfy constraint: 1-bit boolean array attribute");
  }
  }
  return success();
}

::llvm::StringRef TransferWriteOp::getOperationName() {
  return "vector.transfer_write";
}

std::pair<unsigned, unsigned> TransferWriteOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TransferWriteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransferWriteOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::Value TransferWriteOp::memref() {
  return *getODSOperands(1).begin();
}

::mlir::Operation::operand_range TransferWriteOp::indices() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange TransferWriteOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferWriteOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferWriteOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransferWriteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransferWriteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr TransferWriteOp::permutation_mapAttr() {
  return this->getAttr("permutation_map").cast<AffineMapAttr>();
}

AffineMap TransferWriteOp::permutation_map() {
  auto attr = permutation_mapAttr();
  return attr.getValue();
}

::mlir::ArrayAttr TransferWriteOp::maskedAttr() {
  return this->getAttr("masked").dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > TransferWriteOp::masked() {
  auto attr = maskedAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

void TransferWriteOp::permutation_mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("permutation_map", attr);
}

void TransferWriteOp::maskedAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("masked", attr);
}





void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMapAttr permutation_map, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMapAttr permutation_map, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMap permutation_map, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
}

void TransferWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::Value memref, ::mlir::ValueRange indices, AffineMap permutation_map, /*optional*/::mlir::ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferWriteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult TransferWriteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseTransferWriteOp(parser, result);
}

void TransferWriteOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult TransferWriteOp::verify() {
  if (failed(TransferWriteOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      (void)v;
      if (!((v.getType().isa<::mlir::IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}






//===----------------------------------------------------------------------===//
// vector::TransposeOp definitions
//===----------------------------------------------------------------------===//

TransposeOpAdaptor::TransposeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TransposeOpAdaptor::TransposeOpAdaptor(TransposeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TransposeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TransposeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

::mlir::ArrayAttr TransposeOpAdaptor::transp() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("transp").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult TransposeOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_transp = odsAttrs.get("transp");
  if (!tblgen_transp) return emitError(loc, "'vector.transpose' op ""requires attribute 'transp'");
    if (!(((tblgen_transp.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_transp.cast<::mlir::ArrayAttr>(), [](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.transpose' op ""attribute 'transp' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

::llvm::StringRef TransposeOp::getOperationName() {
  return "vector.transpose";
}

std::pair<unsigned, unsigned> TransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TransposeOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOp::result() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr TransposeOp::transpAttr() {
  return this->getAttr("transp").cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr TransposeOp::transp() {
  auto attr = transpAttr();
  return attr;
}

void TransposeOp::transpAttr(::mlir::ArrayAttr attr) {
  this->getOperation()->setAttr("transp", attr);
}



void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::ArrayAttr transp) {
  odsState.addOperands(vector);
  odsState.addAttribute("transp", transp);
  odsState.addTypes(result);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vector, ::mlir::ArrayAttr transp) {
  odsState.addOperands(vector);
  odsState.addAttribute("transp", transp);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeOp::verify() {
  if (failed(TransposeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::verify(*this);
}





::mlir::ParseResult TransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType vectorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  ::llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  ::mlir::Type vectorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> vectorTypes(vectorRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  ::mlir::ArrayAttr transpAttr;
  if (parser.parseAttribute(transpAttr, parser.getBuilder().getType<::mlir::NoneType>(), "transp", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  return success();
}

void TransposeOp::print(OpAsmPrinter &p) {
  p << "vector.transpose";
  p << " ";
  p << vector();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(transpAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"transp"});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(vector().getType());
  p << " " << "to";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void TransposeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TupleGetOp definitions
//===----------------------------------------------------------------------===//

TupleGetOpAdaptor::TupleGetOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TupleGetOpAdaptor::TupleGetOpAdaptor(TupleGetOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TupleGetOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TupleGetOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TupleGetOpAdaptor::vectors() {
  return *getODSOperands(0).begin();
}

::mlir::IntegerAttr TupleGetOpAdaptor::index() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("index").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult TupleGetOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_index = odsAttrs.get("index");
  if (!tblgen_index) return emitError(loc, "'vector.tuple_get' op ""requires attribute 'index'");
    if (!((tblgen_index.isa<::mlir::IntegerAttr>()))) return emitError(loc, "'vector.tuple_get' op ""attribute 'index' failed to satisfy constraint: arbitrary integer attribute");
  }
  return success();
}

::llvm::StringRef TupleGetOp::getOperationName() {
  return "vector.tuple_get";
}

std::pair<unsigned, unsigned> TupleGetOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TupleGetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TupleGetOp::vectors() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TupleGetOp::vectorsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TupleGetOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TupleGetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr TupleGetOp::indexAttr() {
  return this->getAttr("index").cast<::mlir::IntegerAttr>();
}

::mlir::APInt TupleGetOp::index() {
  auto attr = indexAttr();
  return attr.getValue();
}

void TupleGetOp::indexAttr(::mlir::IntegerAttr attr) {
  this->getOperation()->setAttr("index", attr);
}

void TupleGetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value vectors, ::mlir::IntegerAttr index) {
  odsState.addOperands(vectors);
  odsState.addAttribute("index", index);
  odsState.addTypes(resultType0);
}

void TupleGetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value vectors, ::mlir::IntegerAttr index) {
  odsState.addOperands(vectors);
  odsState.addAttribute("index", index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TupleGetOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult TupleGetOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseTupleGetOp(parser, result);
}

void TupleGetOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult TupleGetOp::verify() {
  if (failed(TupleGetOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::TupleType>())) && (::llvm::all_of(v.getType().cast<::mlir::TupleType>().getTypes(), [](Type t) { return ((t.isa<::mlir::VectorType>())) && ((true)); })))) {
        return emitOpError("operand #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



void TupleGetOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TupleOp definitions
//===----------------------------------------------------------------------===//

TupleOpAdaptor::TupleOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TupleOpAdaptor::TupleOpAdaptor(TupleOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TupleOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange TupleOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange TupleOpAdaptor::vectors() {
  return getODSOperands(0);
}

::mlir::LogicalResult TupleOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef TupleOp::getOperationName() {
  return "vector.tuple";
}

std::pair<unsigned, unsigned> TupleOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range TupleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range TupleOp::vectors() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange TupleOp::vectorsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TupleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TupleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TupleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ValueRange vectors) {
  odsState.addOperands(vectors);
  odsState.addTypes(resultType0);
}

void TupleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::ParseResult TupleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  return ::parseTupleOp(parser, result);
}

void TupleOp::print(::mlir::OpAsmPrinter &p) {
  return ::print(p, *this);
}

::mlir::LogicalResult TupleOp::verify() {
  if (failed(TupleOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::TupleType>())) && (::llvm::all_of(v.getType().cast<::mlir::TupleType>().getTypes(), [](Type t) { return ((t.isa<::mlir::VectorType>())) && ((true)); })))) {
        return emitOpError("result #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

void TupleOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TypeCastOp definitions
//===----------------------------------------------------------------------===//

TypeCastOpAdaptor::TypeCastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TypeCastOpAdaptor::TypeCastOpAdaptor(TypeCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TypeCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TypeCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TypeCastOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

::mlir::LogicalResult TypeCastOpAdaptor::verify(::mlir::Location loc) {
  return success();
}

::llvm::StringRef TypeCastOp::getOperationName() {
  return "vector.type_cast";
}

std::pair<unsigned, unsigned> TypeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TypeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TypeCastOp::memref() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TypeCastOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TypeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TypeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TypeCastOp::result() {
  return *getODSResults(0).begin();
}



void TypeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value memref) {
  odsState.addOperands(memref);
  odsState.addTypes(result);
}

void TypeCastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::Value memref) {
  odsState.addOperands(memref);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TypeCastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::llvm::ArrayRef<::mlir::Type> resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes ) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TypeCastOp::verify() {
  if (failed(TypeCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<::mlir::MemRefType>())) && ((true))) && ((v.getType().cast<::mlir::ShapedType>().hasStaticShape())))) {
        return emitOpError("operand #") << index << " must be statically shaped memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

::mlir::ParseResult TypeCastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  ::mlir::Type memrefRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> memrefTypes(memrefRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  return success();
}

void TypeCastOp::print(OpAsmPrinter &p) {
  p << "vector.type_cast";
  p << " ";
  p << memref();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(memref().getType());
  p << " " << "to";
  p << " ";
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void TypeCastOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

