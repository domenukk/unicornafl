/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI visitor functions
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#ifndef QAPI_VISIT_H
#define QAPI_VISIT_H

#include "qapi/visitor.h"
#include "qapi-types.h"


#ifndef QAPI_VISIT_BUILTIN_VISITOR_DECL_H
#define QAPI_VISIT_BUILTIN_VISITOR_DECL_H

void visit_type_int32List(Visitor *m, int32List **obj, const char *name, Error **errp);
void visit_type_int16List(Visitor *m, int16List **obj, const char *name, Error **errp);
void visit_type_intList(Visitor *m, intList **obj, const char *name, Error **errp);
void visit_type_uint8List(Visitor *m, uint8List **obj, const char *name, Error **errp);
void visit_type_numberList(Visitor *m, numberList **obj, const char *name, Error **errp);
void visit_type_int8List(Visitor *m, int8List **obj, const char *name, Error **errp);
void visit_type_sizeList(Visitor *m, sizeList **obj, const char *name, Error **errp);
void visit_type_uint64List(Visitor *m, uint64List **obj, const char *name, Error **errp);
void visit_type_uint16List(Visitor *m, uint16List **obj, const char *name, Error **errp);
void visit_type_boolList(Visitor *m, boolList **obj, const char *name, Error **errp);
void visit_type_strList(Visitor *m, strList **obj, const char *name, Error **errp);
void visit_type_int64List(Visitor *m, int64List **obj, const char *name, Error **errp);
void visit_type_uint32List(Visitor *m, uint32List **obj, const char *name, Error **errp);

#endif /* QAPI_VISIT_BUILTIN_VISITOR_DECL_H */


void visit_type_ErrorClass(Visitor *m, ErrorClass *obj, const char *name, Error **errp);
void visit_type_ErrorClassList(Visitor *m, ErrorClassList **obj, const char *name, Error **errp);

void visit_type_X86CPURegister32(Visitor *m, X86CPURegister32 *obj, const char *name, Error **errp);
void visit_type_X86CPURegister32List(Visitor *m, X86CPURegister32List **obj, const char *name, Error **errp);

void visit_type_X86CPUFeatureWordInfo(Visitor *m, X86CPUFeatureWordInfo **obj, const char *name, Error **errp);
void visit_type_X86CPUFeatureWordInfoList(Visitor *m, X86CPUFeatureWordInfoList **obj, const char *name, Error **errp);

#endif
