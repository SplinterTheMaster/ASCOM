/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

void mlir::MemoryEffectOpInterface::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> & effects) {
      return getImpl()->getEffects(getOperation(), effects);
  }
void mlir::MemoryEffectOpInterface::getEffectsOnValue(Value value, SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> & effects) {
      return getImpl()->getEffectsOnValue(getOperation(), value, effects);
  }
void mlir::MemoryEffectOpInterface::getEffectsOnResource(SideEffects::Resource * resource, SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> & effects) {
      return getImpl()->getEffectsOnResource(getOperation(), resource, effects);
  }
