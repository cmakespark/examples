#pragma once

#ifdef __linux__
#    define DECL_EXPORT     __attribute__((visibility("default")))
#    define DECL_IMPORT     __attribute__((visibility("default")))
#elif _WIN32
#    define DECL_EXPORT     __declspec(dllexport)
#    define DECL_IMPORT     __declspec(dllimport)
#else
#    define DECL_EXPORT     __attribute__((visibility("default")))
#    define DECL_IMPORT     __attribute__((visibility("default")))
#endif

#ifdef CCQComplexLib_BUILD_SHARED_LIBS
#  if defined(QCOMPLEXLIB_LIBRARY_BUILD)
#    define QCOMPLEXLIB_EXPORT DECL_EXPORT
#    ifdef PRIVATE_TESTS_ENABLED
#      define QCOMPLEXLIB_AUTOTEST_EXPORT DECL_EXPORT
#    else
#      define QCOMPLEXLIB_AUTOTEST_EXPORT
#    endif
#  else
#    define QCOMPLEXLIB_EXPORT DECL_IMPORT
#    ifdef PRIVATE_TESTS_ENABLED
#      define QCOMPLEXLIB_AUTOTEST_EXPORT DECL_IMPORT
#    else
#      define QCOMPLEXLIB_AUTOTEST_EXPORT
#    endif
#  endif
#else
#  define QCOMPLEXLIB_EXPORT
#  define QCOMPLEXLIB_AUTOTEST_EXPORT
#endif
