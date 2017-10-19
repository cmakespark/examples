#pragma once

#ifdef CCcomplexlib_BUILD_SHARED_LIBS
#  if defined(CCCOMPLEXLIB_BUILD_LIBRARY)
#    define CCCOMPLEXLIB_EXPORT __declspec(dllexport)
#    ifdef PRIVATE_TESTS_ENABLED
#      define CCCOMPLEXLIB_AUTOTEST_EXPORT __declspec(dllexport)
#    else
#      define CCCOMPLEXLIB_AUTOTEST_EXPORT
#    endif
#  else
#    define CCCOMPLEXLIB_EXPORT __declspec(dllimport)
#    ifdef PRIVATE_TESTS_ENABLED
#      define CCCOMPLEXLIB_AUTOTEST_EXPORT __declspec(dllimport)
#    else
#      define CCCOMPLEXLIB_AUTOTEST_EXPORT
#    endif
#  endif
#else
#  define CCCOMPLEXLIB_EXPORT
#  define CCCOMPLEXLIB_AUTOTEST_EXPORT
#endif
