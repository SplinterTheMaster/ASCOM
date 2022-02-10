if (auto op = dyn_cast<NVVM::Barrier0Op>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier0);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockDimXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_x,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockDimYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_y,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockDimZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_z,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockIdXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_x,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockIdYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_y,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockIdZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_z,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::GridDimXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_x,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::GridDimYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_y,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::GridDimZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_z,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::LaneIdOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_laneid,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::MmaOp>(opInst)) {

    valueMapping[op.res()] = createIntrinsicCall(
        builder, llvm::Intrinsic::nvvm_mma_m8n8k4_row_col_f32_f32, lookupValues(op.args()));
  
  return success();
}
if (auto op = dyn_cast<NVVM::ShflBflyOp>(opInst)) {

      auto intId = getShflBflyIntrinsicId(
          op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType(), static_cast<bool>(op.return_value_and_is_valid()));
      valueMapping[op.res()] = createIntrinsicCall(builder,
          intId, {valueMapping.lookup(op.dst()), valueMapping.lookup(op.val()), valueMapping.lookup(op.offset()), valueMapping.lookup(op.mask_and_clamp())});
  
  return success();
}
if (auto op = dyn_cast<NVVM::ThreadIdXOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_tid_x,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::ThreadIdYOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_tid_y,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::ThreadIdZOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_tid_z,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<NVVM::VoteBallotOp>(opInst)) {

      valueMapping[op.res()] = createIntrinsicCall(builder,
            llvm::Intrinsic::nvvm_vote_ballot_sync, {valueMapping.lookup(op.mask()), valueMapping.lookup(op.pred())});
  
  return success();
}
if (auto op = dyn_cast<NVVM::WarpSizeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::nvvm_read_ptx_sreg_warpsize,
        { 
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
