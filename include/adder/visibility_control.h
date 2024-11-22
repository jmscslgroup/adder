#ifndef ADDER__VISIBILITY_CONTROL_H_
#define ADDER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ADDER_EXPORT __attribute__ ((dllexport))
    #define ADDER_IMPORT __attribute__ ((dllimport))
  #else
    #define ADDER_EXPORT __declspec(dllexport)
    #define ADDER_IMPORT __declspec(dllimport)
  #endif
  #ifdef ADDER_BUILDING_LIBRARY
    #define ADDER_PUBLIC ADDER_EXPORT
  #else
    #define ADDER_PUBLIC ADDER_IMPORT
  #endif
  #define ADDER_PUBLIC_TYPE ADDER_PUBLIC
  #define ADDER_LOCAL
#else
  #define ADDER_EXPORT __attribute__ ((visibility("default")))
  #define ADDER_IMPORT
  #if __GNUC__ >= 4
    #define ADDER_PUBLIC __attribute__ ((visibility("default")))
    #define ADDER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define ADDER_PUBLIC
    #define ADDER_LOCAL
  #endif
  #define ADDER_PUBLIC_TYPE
#endif
#endif  // ADDER__VISIBILITY_CONTROL_H_
// Generated 22-Nov-2024 15:30:08
// Copyright 2019-2020 The MathWorks, Inc.
