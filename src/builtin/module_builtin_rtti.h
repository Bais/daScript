#pragma once

#include "daScript/ast/ast.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "daScript/simulate/aot.h"
#include "daScript/simulate/aot_builtin_rtti.h"

DAS_BASE_BIND_ENUM(das::Type, Type,
    none,           autoinfer,      alias,          fakeContext,
    anyArgument,    tVoid,          tBool,          tInt64,
    tUInt64,        tInt,           tInt2,          tInt3,
    tInt4,          tUInt,          tUInt2,         tUInt3,
    tUInt4,         tFloat,         tFloat2,        tFloat3,
    tFloat4,        tDouble,        tRange,         tURange,
    tString,        tStructure,     tHandle,        tEnumeration,
    tPointer,       tFunction,      tLambda,        tIterator,
    tArray,         tTable,         tBlock,         tInt8,
    tUInt8,         tInt16,         tUInt16,        tTuple,
    tEnumeration8,  tEnumeration16, tVariant,       tBitfield
)

DAS_BASE_BIND_ENUM(das::RefMatters,   RefMatters,   no, yes)
DAS_BASE_BIND_ENUM(das::ConstMatters, ConstMatters, no, yes)
DAS_BASE_BIND_ENUM(das::TemporaryMatters, TemporaryMatters, no, yes)

MAKE_EXTERNAL_TYPE_FACTORY(FileInfo, das::FileInfo)
MAKE_EXTERNAL_TYPE_FACTORY(LineInfo, das::LineInfo)
MAKE_EXTERNAL_TYPE_FACTORY(Annotation, das::Annotation)
MAKE_EXTERNAL_TYPE_FACTORY(TypeAnnotation, das::TypeAnnotation)
MAKE_EXTERNAL_TYPE_FACTORY(BasicStructureAnnotation, das::BasicStructureAnnotation)
MAKE_EXTERNAL_TYPE_FACTORY(StructInfo, das::StructInfo)
MAKE_EXTERNAL_TYPE_FACTORY(EnumInfo, das::EnumInfo)
MAKE_EXTERNAL_TYPE_FACTORY(EnumValueInfo, das::EnumValueInfo)
MAKE_EXTERNAL_TYPE_FACTORY(TypeInfo, das::TypeInfo)
MAKE_EXTERNAL_TYPE_FACTORY(VarInfo, das::VarInfo)
MAKE_EXTERNAL_TYPE_FACTORY(FuncInfo, das::FuncInfo)
MAKE_EXTERNAL_TYPE_FACTORY(AnnotationArgument, das::AnnotationArgument)
MAKE_EXTERNAL_TYPE_FACTORY(AnnotationArguments, das::AnnotationArguments)
MAKE_EXTERNAL_TYPE_FACTORY(RttiProgram, das::RttiProgram)
MAKE_EXTERNAL_TYPE_FACTORY(Module, das::Module)