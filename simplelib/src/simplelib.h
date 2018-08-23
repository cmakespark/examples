#pragma once

#ifdef CCsimplelib_BUILD_SHARED_LIBS
#  if defined(SIMPLELIB_BUILD_LIBRARY)
#    define CCSIMPLELIB_EXPORT __declspec(dllexport)
#    ifdef PRIVATE_TESTS_ENABLED
#      define CCSIMPLELIB_AUTOTEST_EXPORT __declspec(dllexport)
#    else
#      define CCSIMPLELIB_AUTOTEST_EXPORT
#    endif
#  else
#    define CCSIMPLELIB_EXPORT __declspec(dllimport)
#    ifdef PRIVATE_TESTS_ENABLED
#      define CCSIMPLELIB_AUTOTEST_EXPORT __declspec(dllimport)
#    else
#      define CCSIMPLELIB_AUTOTEST_EXPORT
#    endif
#  endif
#else
#  define CCSIMPLELIB_EXPORT
#  define CCSIMPLELIB_AUTOTEST_EXPORT
#endif
