// This file was generated by upbc (the upb compiler).
// Do not edit -- your changes will be discarded when the file is
// regenerated.

#include "upb/def.h"

const upb_msgdef google_protobuf_msgs[20];
const upb_fielddef google_protobuf_fields[73];
const upb_enumdef google_protobuf_enums[4];
const upb_tabent google_protobuf_strentries[192];
const upb_tabent google_protobuf_intentries[66];
const _upb_value google_protobuf_arrays[97];

const upb_msgdef google_protobuf_msgs[20] = {
  UPB_MSGDEF_INIT("google.protobuf.DescriptorProto", UPB_INTTABLE_INIT(2, 3, 9, 2, &google_protobuf_intentries[0], &google_protobuf_arrays[0], 6, 5), UPB_STRTABLE_INIT(7, 15, 9, 4, &google_protobuf_strentries[0]), 33),
  UPB_MSGDEF_INIT("google.protobuf.DescriptorProto.ExtensionRange", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[6], 4, 2), UPB_STRTABLE_INIT(2, 3, 9, 2, &google_protobuf_strentries[16]), 4),
  UPB_MSGDEF_INIT("google.protobuf.EnumDescriptorProto", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[10], 4, 3), UPB_STRTABLE_INIT(3, 3, 9, 2, &google_protobuf_strentries[20]), 13),
  UPB_MSGDEF_INIT("google.protobuf.EnumOptions", UPB_INTTABLE_INIT(1, 1, 9, 1, &google_protobuf_intentries[4], &google_protobuf_arrays[14], 1, 0), UPB_STRTABLE_INIT(1, 3, 9, 2, &google_protobuf_strentries[24]), 7),
  UPB_MSGDEF_INIT("google.protobuf.EnumValueDescriptorProto", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[15], 4, 3), UPB_STRTABLE_INIT(3, 3, 9, 2, &google_protobuf_strentries[28]), 9),
  UPB_MSGDEF_INIT("google.protobuf.EnumValueOptions", UPB_INTTABLE_INIT(1, 1, 9, 1, &google_protobuf_intentries[6], &google_protobuf_arrays[19], 1, 0), UPB_STRTABLE_INIT(1, 3, 9, 2, &google_protobuf_strentries[32]), 7),
  UPB_MSGDEF_INIT("google.protobuf.FieldDescriptorProto", UPB_INTTABLE_INIT(3, 3, 9, 2, &google_protobuf_intentries[8], &google_protobuf_arrays[20], 6, 5), UPB_STRTABLE_INIT(8, 15, 9, 4, &google_protobuf_strentries[36]), 20),
  UPB_MSGDEF_INIT("google.protobuf.FieldOptions", UPB_INTTABLE_INIT(2, 3, 9, 2, &google_protobuf_intentries[12], &google_protobuf_arrays[26], 5, 3), UPB_STRTABLE_INIT(5, 7, 9, 3, &google_protobuf_strentries[52]), 13),
  UPB_MSGDEF_INIT("google.protobuf.FileDescriptorProto", UPB_INTTABLE_INIT(4, 7, 9, 3, &google_protobuf_intentries[16], &google_protobuf_arrays[31], 6, 5), UPB_STRTABLE_INIT(9, 15, 9, 4, &google_protobuf_strentries[60]), 39),
  UPB_MSGDEF_INIT("google.protobuf.FileDescriptorSet", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[37], 3, 1), UPB_STRTABLE_INIT(1, 3, 9, 2, &google_protobuf_strentries[76]), 7),
  UPB_MSGDEF_INIT("google.protobuf.FileOptions", UPB_INTTABLE_INIT(8, 15, 9, 4, &google_protobuf_intentries[24], &google_protobuf_arrays[40], 6, 1), UPB_STRTABLE_INIT(9, 15, 9, 4, &google_protobuf_strentries[80]), 19),
  UPB_MSGDEF_INIT("google.protobuf.MessageOptions", UPB_INTTABLE_INIT(1, 1, 9, 1, &google_protobuf_intentries[40], &google_protobuf_arrays[46], 4, 2), UPB_STRTABLE_INIT(3, 3, 9, 2, &google_protobuf_strentries[96]), 9),
  UPB_MSGDEF_INIT("google.protobuf.MethodDescriptorProto", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[50], 5, 4), UPB_STRTABLE_INIT(4, 7, 9, 3, &google_protobuf_strentries[100]), 14),
  UPB_MSGDEF_INIT("google.protobuf.MethodOptions", UPB_INTTABLE_INIT(1, 1, 9, 1, &google_protobuf_intentries[42], &google_protobuf_arrays[55], 1, 0), UPB_STRTABLE_INIT(1, 3, 9, 2, &google_protobuf_strentries[108]), 7),
  UPB_MSGDEF_INIT("google.protobuf.ServiceDescriptorProto", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[56], 4, 3), UPB_STRTABLE_INIT(3, 3, 9, 2, &google_protobuf_strentries[112]), 13),
  UPB_MSGDEF_INIT("google.protobuf.ServiceOptions", UPB_INTTABLE_INIT(1, 1, 9, 1, &google_protobuf_intentries[44], &google_protobuf_arrays[60], 1, 0), UPB_STRTABLE_INIT(1, 3, 9, 2, &google_protobuf_strentries[116]), 7),
  UPB_MSGDEF_INIT("google.protobuf.SourceCodeInfo", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[61], 3, 1), UPB_STRTABLE_INIT(1, 3, 9, 2, &google_protobuf_strentries[120]), 7),
  UPB_MSGDEF_INIT("google.protobuf.SourceCodeInfo.Location", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[64], 4, 2), UPB_STRTABLE_INIT(2, 3, 9, 2, &google_protobuf_strentries[124]), 8),
  UPB_MSGDEF_INIT("google.protobuf.UninterpretedOption", UPB_INTTABLE_INIT(3, 3, 9, 2, &google_protobuf_intentries[46], &google_protobuf_arrays[68], 6, 4), UPB_STRTABLE_INIT(7, 15, 9, 4, &google_protobuf_strentries[128]), 19),
  UPB_MSGDEF_INIT("google.protobuf.UninterpretedOption.NamePart", UPB_INTTABLE_INIT(0, 0, 9, 0, NULL, &google_protobuf_arrays[74], 4, 2), UPB_STRTABLE_INIT(2, 3, 9, 2, &google_protobuf_strentries[144]), 6),
};

const upb_fielddef google_protobuf_fields[73] = {
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "aggregate_value", 8, &google_protobuf_msgs[18], NULL, 12, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "cc_generic_services", 16, &google_protobuf_msgs[10], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_ENUM, 0, false, "ctype", 1, &google_protobuf_msgs[7], upb_upcast(&google_protobuf_enums[2]), 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "default_value", 7, &google_protobuf_msgs[6], NULL, 17, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_STRING, 0, false, "dependency", 3, &google_protobuf_msgs[8], NULL, 10, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "deprecated", 3, &google_protobuf_msgs[7], NULL, 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_DOUBLE, 0, false, "double_value", 6, &google_protobuf_msgs[18], NULL, 15, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_INT32, UPB_INTFMT_VARIABLE, false, "end", 2, &google_protobuf_msgs[1], NULL, 3, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "enum_type", 4, &google_protobuf_msgs[0], upb_upcast(&google_protobuf_msgs[2]), 17, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "enum_type", 5, &google_protobuf_msgs[8], upb_upcast(&google_protobuf_msgs[2]), 20, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "experimental_map_key", 9, &google_protobuf_msgs[7], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "extendee", 2, &google_protobuf_msgs[6], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "extension", 7, &google_protobuf_msgs[8], upb_upcast(&google_protobuf_msgs[6]), 36, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "extension", 6, &google_protobuf_msgs[0], upb_upcast(&google_protobuf_msgs[6]), 27, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "extension_range", 5, &google_protobuf_msgs[0], upb_upcast(&google_protobuf_msgs[1]), 22, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "field", 2, &google_protobuf_msgs[0], upb_upcast(&google_protobuf_msgs[6]), 7, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "file", 1, &google_protobuf_msgs[9], upb_upcast(&google_protobuf_msgs[8]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "identifier_value", 3, &google_protobuf_msgs[18], NULL, 7, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "input_type", 2, &google_protobuf_msgs[12], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REQUIRED, UPB_TYPE_BOOL, 0, false, "is_extension", 2, &google_protobuf_msgs[19], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "java_generate_equals_and_hash", 20, &google_protobuf_msgs[10], NULL, 8, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "java_generic_services", 17, &google_protobuf_msgs[10], NULL, 6, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "java_multiple_files", 10, &google_protobuf_msgs[10], NULL, 18, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "java_outer_classname", 8, &google_protobuf_msgs[10], NULL, 14, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "java_package", 1, &google_protobuf_msgs[10], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_ENUM, 0, false, "label", 4, &google_protobuf_msgs[6], upb_upcast(&google_protobuf_enums[0]), 9, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "location", 1, &google_protobuf_msgs[16], upb_upcast(&google_protobuf_msgs[17]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "message_set_wire_format", 1, &google_protobuf_msgs[11], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "message_type", 4, &google_protobuf_msgs[8], upb_upcast(&google_protobuf_msgs[0]), 15, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "method", 2, &google_protobuf_msgs[14], upb_upcast(&google_protobuf_msgs[12]), 7, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[12], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[4], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[14], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[2], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[6], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "name", 2, &google_protobuf_msgs[18], upb_upcast(&google_protobuf_msgs[19]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[0], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "name", 1, &google_protobuf_msgs[8], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REQUIRED, UPB_TYPE_STRING, 0, false, "name_part", 1, &google_protobuf_msgs[19], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_INT64, UPB_INTFMT_VARIABLE, false, "negative_int_value", 5, &google_protobuf_msgs[18], NULL, 11, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "nested_type", 3, &google_protobuf_msgs[0], upb_upcast(&google_protobuf_msgs[0]), 12, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "no_standard_descriptor_accessor", 2, &google_protobuf_msgs[11], NULL, 3, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_INT32, UPB_INTFMT_VARIABLE, false, "number", 2, &google_protobuf_msgs[4], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_INT32, UPB_INTFMT_VARIABLE, false, "number", 3, &google_protobuf_msgs[6], NULL, 8, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_ENUM, 0, false, "optimize_for", 9, &google_protobuf_msgs[10], upb_upcast(&google_protobuf_enums[3]), 17, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 4, &google_protobuf_msgs[12], upb_upcast(&google_protobuf_msgs[13]), 11, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 3, &google_protobuf_msgs[14], upb_upcast(&google_protobuf_msgs[15]), 10, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 8, &google_protobuf_msgs[8], upb_upcast(&google_protobuf_msgs[10]), 23, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 3, &google_protobuf_msgs[2], upb_upcast(&google_protobuf_msgs[3]), 10, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 7, &google_protobuf_msgs[0], upb_upcast(&google_protobuf_msgs[11]), 30, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 8, &google_protobuf_msgs[6], upb_upcast(&google_protobuf_msgs[7]), 11, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "options", 3, &google_protobuf_msgs[4], upb_upcast(&google_protobuf_msgs[5]), 6, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "output_type", 3, &google_protobuf_msgs[12], NULL, 8, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "package", 2, &google_protobuf_msgs[8], NULL, 5, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "packed", 2, &google_protobuf_msgs[7], NULL, 3, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_INT32, UPB_INTFMT_VARIABLE, false, "path", 1, &google_protobuf_msgs[17], NULL, 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_UINT64, UPB_INTFMT_VARIABLE, false, "positive_int_value", 4, &google_protobuf_msgs[18], NULL, 10, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BOOL, 0, false, "py_generic_services", 18, &google_protobuf_msgs[10], NULL, 7, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "service", 6, &google_protobuf_msgs[8], upb_upcast(&google_protobuf_msgs[14]), 31, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_MESSAGE, 0, false, "source_code_info", 9, &google_protobuf_msgs[8], upb_upcast(&google_protobuf_msgs[16]), 26, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_INT32, UPB_INTFMT_VARIABLE, false, "span", 2, &google_protobuf_msgs[17], NULL, 7, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_INT32, UPB_INTFMT_VARIABLE, false, "start", 1, &google_protobuf_msgs[1], NULL, 2, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BYTES, 0, false, "string_value", 7, &google_protobuf_msgs[18], NULL, 16, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_ENUM, 0, false, "type", 5, &google_protobuf_msgs[6], upb_upcast(&google_protobuf_enums[1]), 10, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_STRING, 0, false, "type_name", 6, &google_protobuf_msgs[6], NULL, 14, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[15], upb_upcast(&google_protobuf_msgs[18]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[11], upb_upcast(&google_protobuf_msgs[18]), 6, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[13], upb_upcast(&google_protobuf_msgs[18]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[10], upb_upcast(&google_protobuf_msgs[18]), 11, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[7], upb_upcast(&google_protobuf_msgs[18]), 10, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[3], upb_upcast(&google_protobuf_msgs[18]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "uninterpreted_option", 999, &google_protobuf_msgs[5], upb_upcast(&google_protobuf_msgs[18]), 4, UPB_VALUE_INIT_NONE),
  UPB_FIELDDEF_INIT(UPB_LABEL_REPEATED, UPB_TYPE_MESSAGE, 0, false, "value", 2, &google_protobuf_msgs[2], upb_upcast(&google_protobuf_msgs[4]), 7, UPB_VALUE_INIT_NONE),
};

const upb_enumdef google_protobuf_enums[4] = {
  UPB_ENUMDEF_INIT("google.protobuf.FieldDescriptorProto.Label", UPB_STRTABLE_INIT(3, 3, 1, 2, &google_protobuf_strentries[148]), UPB_INTTABLE_INIT(0, 0, 8, 0, NULL, &google_protobuf_arrays[78], 4, 3), 0),
  UPB_ENUMDEF_INIT("google.protobuf.FieldDescriptorProto.Type", UPB_STRTABLE_INIT(18, 31, 1, 5, &google_protobuf_strentries[152]), UPB_INTTABLE_INIT(12, 15, 8, 4, &google_protobuf_intentries[50], &google_protobuf_arrays[82], 7, 6), 0),
  UPB_ENUMDEF_INIT("google.protobuf.FieldOptions.CType", UPB_STRTABLE_INIT(3, 3, 1, 2, &google_protobuf_strentries[184]), UPB_INTTABLE_INIT(0, 0, 8, 0, NULL, &google_protobuf_arrays[89], 4, 3), 0),
  UPB_ENUMDEF_INIT("google.protobuf.FileOptions.OptimizeMode", UPB_STRTABLE_INIT(3, 3, 1, 2, &google_protobuf_strentries[188]), UPB_INTTABLE_INIT(0, 0, 8, 0, NULL, &google_protobuf_arrays[93], 4, 3), 0),
};

const upb_tabent google_protobuf_strentries[192] = {
  {UPB_TABKEY_STR("extension"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[13]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[36]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("field"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[15]), NULL},
  {UPB_TABKEY_STR("extension_range"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[14]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("nested_type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[40]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[49]), NULL},
  {UPB_TABKEY_STR("enum_type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[8]), &google_protobuf_strentries[14]},
  {UPB_TABKEY_STR("start"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[61]), NULL},
  {UPB_TABKEY_STR("end"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[7]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[72]), NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[48]), NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[33]), &google_protobuf_strentries[22]},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[70]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("number"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[42]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[51]), NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[31]), &google_protobuf_strentries[30]},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[71]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("label"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[25]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[34]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("number"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[43]), &google_protobuf_strentries[49]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("type_name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[64]), NULL},
  {UPB_TABKEY_STR("extendee"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[11]), NULL},
  {UPB_TABKEY_STR("type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[63]), &google_protobuf_strentries[48]},
  {UPB_TABKEY_STR("default_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[3]), NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[50]), NULL},
  {UPB_TABKEY_STR("experimental_map_key"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[10]), &google_protobuf_strentries[58]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("ctype"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[2]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("deprecated"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[5]), NULL},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[69]), NULL},
  {UPB_TABKEY_STR("packed"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[54]), NULL},
  {UPB_TABKEY_STR("extension"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[12]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[37]), NULL},
  {UPB_TABKEY_STR("service"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[58]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("source_code_info"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[59]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("dependency"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[4]), NULL},
  {UPB_TABKEY_STR("message_type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[28]), NULL},
  {UPB_TABKEY_STR("package"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[53]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[47]), NULL},
  {UPB_TABKEY_STR("enum_type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[9]), &google_protobuf_strentries[74]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("file"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[16]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[68]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("cc_generic_services"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[1]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("java_multiple_files"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[22]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("java_generic_services"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[21]), &google_protobuf_strentries[94]},
  {UPB_TABKEY_STR("java_generate_equals_and_hash"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[20]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("java_package"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[24]), NULL},
  {UPB_TABKEY_STR("optimize_for"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[44]), NULL},
  {UPB_TABKEY_STR("py_generic_services"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[57]), NULL},
  {UPB_TABKEY_STR("java_outer_classname"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[23]), NULL},
  {UPB_TABKEY_STR("message_set_wire_format"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[27]), &google_protobuf_strentries[98]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[66]), NULL},
  {UPB_TABKEY_STR("no_standard_descriptor_accessor"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[41]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[30]), NULL},
  {UPB_TABKEY_STR("input_type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[18]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("output_type"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[52]), NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[45]), NULL},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[67]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("options"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[46]), &google_protobuf_strentries[114]},
  {UPB_TABKEY_STR("method"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[29]), NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[32]), &google_protobuf_strentries[113]},
  {UPB_TABKEY_STR("uninterpreted_option"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[65]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("location"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[26]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("span"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[60]), NULL},
  {UPB_TABKEY_STR("path"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[55]), &google_protobuf_strentries[126]},
  {UPB_TABKEY_STR("double_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[6]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("name"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[35]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("negative_int_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[39]), NULL},
  {UPB_TABKEY_STR("aggregate_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[0]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("positive_int_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[56]), NULL},
  {UPB_TABKEY_STR("identifier_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[17]), NULL},
  {UPB_TABKEY_STR("string_value"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[62]), &google_protobuf_strentries[142]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("is_extension"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[19]), NULL},
  {UPB_TABKEY_STR("name_part"), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[38]), NULL},
  {UPB_TABKEY_STR("LABEL_REQUIRED"), UPB_VALUE_INIT_INT32(2), &google_protobuf_strentries[150]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("LABEL_REPEATED"), UPB_VALUE_INIT_INT32(3), NULL},
  {UPB_TABKEY_STR("LABEL_OPTIONAL"), UPB_VALUE_INIT_INT32(1), NULL},
  {UPB_TABKEY_STR("TYPE_FIXED64"), UPB_VALUE_INIT_INT32(6), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_STRING"), UPB_VALUE_INIT_INT32(9), NULL},
  {UPB_TABKEY_STR("TYPE_FLOAT"), UPB_VALUE_INIT_INT32(2), &google_protobuf_strentries[181]},
  {UPB_TABKEY_STR("TYPE_DOUBLE"), UPB_VALUE_INIT_INT32(1), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_INT32"), UPB_VALUE_INIT_INT32(5), NULL},
  {UPB_TABKEY_STR("TYPE_SFIXED32"), UPB_VALUE_INIT_INT32(15), NULL},
  {UPB_TABKEY_STR("TYPE_FIXED32"), UPB_VALUE_INIT_INT32(7), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_MESSAGE"), UPB_VALUE_INIT_INT32(11), &google_protobuf_strentries[182]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_INT64"), UPB_VALUE_INIT_INT32(3), &google_protobuf_strentries[179]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_ENUM"), UPB_VALUE_INIT_INT32(14), NULL},
  {UPB_TABKEY_STR("TYPE_UINT32"), UPB_VALUE_INIT_INT32(13), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_UINT64"), UPB_VALUE_INIT_INT32(4), &google_protobuf_strentries[178]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("TYPE_SFIXED64"), UPB_VALUE_INIT_INT32(16), NULL},
  {UPB_TABKEY_STR("TYPE_BYTES"), UPB_VALUE_INIT_INT32(12), NULL},
  {UPB_TABKEY_STR("TYPE_SINT64"), UPB_VALUE_INIT_INT32(18), NULL},
  {UPB_TABKEY_STR("TYPE_BOOL"), UPB_VALUE_INIT_INT32(8), NULL},
  {UPB_TABKEY_STR("TYPE_GROUP"), UPB_VALUE_INIT_INT32(10), NULL},
  {UPB_TABKEY_STR("TYPE_SINT32"), UPB_VALUE_INIT_INT32(17), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("CORD"), UPB_VALUE_INIT_INT32(1), NULL},
  {UPB_TABKEY_STR("STRING"), UPB_VALUE_INIT_INT32(0), &google_protobuf_strentries[185]},
  {UPB_TABKEY_STR("STRING_PIECE"), UPB_VALUE_INIT_INT32(2), NULL},
  {UPB_TABKEY_STR("CODE_SIZE"), UPB_VALUE_INIT_INT32(2), NULL},
  {UPB_TABKEY_STR("SPEED"), UPB_VALUE_INIT_INT32(1), &google_protobuf_strentries[191]},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("LITE_RUNTIME"), UPB_VALUE_INIT_INT32(3), NULL},
};

const upb_tabent google_protobuf_intentries[66] = {
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(6), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[13]), NULL},
  {UPB_TABKEY_NUM(7), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[49]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[70]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[71]), NULL},
  {UPB_TABKEY_NUM(8), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[50]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(6), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[64]), NULL},
  {UPB_TABKEY_NUM(7), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[3]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(9), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[10]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[69]), NULL},
  {UPB_TABKEY_NUM(8), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[47]), NULL},
  {UPB_TABKEY_NUM(9), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[59]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(6), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[58]), NULL},
  {UPB_TABKEY_NUM(7), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[12]), NULL},
  {UPB_TABKEY_NUM(16), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[1]), NULL},
  {UPB_TABKEY_NUM(17), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[21]), NULL},
  {UPB_TABKEY_NUM(18), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[57]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(20), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[20]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[68]), NULL},
  {UPB_TABKEY_NUM(8), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[23]), NULL},
  {UPB_TABKEY_NUM(9), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[44]), NULL},
  {UPB_TABKEY_NUM(10), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[22]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[66]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[67]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(999), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[65]), NULL},
  {UPB_TABKEY_NUM(8), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[0]), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(6), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[6]), NULL},
  {UPB_TABKEY_NUM(7), UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[62]), NULL},
  {UPB_TABKEY_NUM(16), UPB_VALUE_INIT_CONSTPTR("TYPE_SFIXED64"), NULL},
  {UPB_TABKEY_NUM(17), UPB_VALUE_INIT_CONSTPTR("TYPE_SINT32"), NULL},
  {UPB_TABKEY_NUM(18), UPB_VALUE_INIT_CONSTPTR("TYPE_SINT64"), NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NUM(7), UPB_VALUE_INIT_CONSTPTR("TYPE_FIXED32"), NULL},
  {UPB_TABKEY_NUM(8), UPB_VALUE_INIT_CONSTPTR("TYPE_BOOL"), NULL},
  {UPB_TABKEY_NUM(9), UPB_VALUE_INIT_CONSTPTR("TYPE_STRING"), NULL},
  {UPB_TABKEY_NUM(10), UPB_VALUE_INIT_CONSTPTR("TYPE_GROUP"), NULL},
  {UPB_TABKEY_NUM(11), UPB_VALUE_INIT_CONSTPTR("TYPE_MESSAGE"), NULL},
  {UPB_TABKEY_NUM(12), UPB_VALUE_INIT_CONSTPTR("TYPE_BYTES"), NULL},
  {UPB_TABKEY_NUM(13), UPB_VALUE_INIT_CONSTPTR("TYPE_UINT32"), NULL},
  {UPB_TABKEY_NUM(14), UPB_VALUE_INIT_CONSTPTR("TYPE_ENUM"), NULL},
  {UPB_TABKEY_NUM(15), UPB_VALUE_INIT_CONSTPTR("TYPE_SFIXED32"), NULL},
};

const _upb_value google_protobuf_arrays[97] = {
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[36]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[15]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[40]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[8]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[14]),
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[61]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[7]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[33]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[72]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[48]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[31]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[42]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[51]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[34]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[11]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[43]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[25]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[63]),
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[2]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[54]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[5]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[37]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[53]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[4]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[28]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[9]),
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[16]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[24]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[27]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[41]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[30]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[18]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[52]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[45]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[32]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[29]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[46]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[26]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[55]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[60]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[35]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[17]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[56]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[39]),
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[38]),
  UPB_VALUE_INIT_CONSTPTR(&google_protobuf_fields[19]),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR("LABEL_OPTIONAL"),
  UPB_VALUE_INIT_CONSTPTR("LABEL_REQUIRED"),
  UPB_VALUE_INIT_CONSTPTR("LABEL_REPEATED"),
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR("TYPE_DOUBLE"),
  UPB_VALUE_INIT_CONSTPTR("TYPE_FLOAT"),
  UPB_VALUE_INIT_CONSTPTR("TYPE_INT64"),
  UPB_VALUE_INIT_CONSTPTR("TYPE_UINT64"),
  UPB_VALUE_INIT_CONSTPTR("TYPE_INT32"),
  UPB_VALUE_INIT_CONSTPTR("TYPE_FIXED64"),
  UPB_VALUE_INIT_CONSTPTR("STRING"),
  UPB_VALUE_INIT_CONSTPTR("CORD"),
  UPB_VALUE_INIT_CONSTPTR("STRING_PIECE"),
  UPB_ARRAY_EMPTYENT,
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR("SPEED"),
  UPB_VALUE_INIT_CONSTPTR("CODE_SIZE"),
  UPB_VALUE_INIT_CONSTPTR("LITE_RUNTIME"),
};

