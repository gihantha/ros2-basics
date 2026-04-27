// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_first_pkg_interfaces:msg/MyData.idl
// generated code does not contain a copyright notice

#include "my_first_pkg_interfaces/msg/detail/my_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_first_pkg_interfaces
const rosidl_type_hash_t *
my_first_pkg_interfaces__msg__MyData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x30, 0x08, 0x3a, 0x1b, 0xd7, 0x85, 0x06,
      0x39, 0x64, 0xb9, 0xe4, 0x53, 0x53, 0xec, 0xd5,
      0xb5, 0xb3, 0xba, 0x7f, 0xb3, 0x9d, 0xf8, 0xc6,
      0x86, 0x9b, 0xd2, 0xaf, 0x28, 0xcc, 0xaa, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_first_pkg_interfaces__msg__MyData__TYPE_NAME[] = "my_first_pkg_interfaces/msg/MyData";

// Define type names, field names, and default values
static char my_first_pkg_interfaces__msg__MyData__FIELD_NAME__name[] = "name";
static char my_first_pkg_interfaces__msg__MyData__FIELD_NAME__age[] = "age";
static char my_first_pkg_interfaces__msg__MyData__FIELD_NAME__height[] = "height";

static rosidl_runtime_c__type_description__Field my_first_pkg_interfaces__msg__MyData__FIELDS[] = {
  {
    {my_first_pkg_interfaces__msg__MyData__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_first_pkg_interfaces__msg__MyData__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_first_pkg_interfaces__msg__MyData__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_first_pkg_interfaces__msg__MyData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_first_pkg_interfaces__msg__MyData__TYPE_NAME, 34, 34},
      {my_first_pkg_interfaces__msg__MyData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 age\n"
  "float32 height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_first_pkg_interfaces__msg__MyData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_first_pkg_interfaces__msg__MyData__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_first_pkg_interfaces__msg__MyData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_first_pkg_interfaces__msg__MyData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
