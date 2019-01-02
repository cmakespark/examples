# Examples

These are the examples of how the cmake build system of https://github.com/cmakespark/cmake should be used.
This repository are also the tests of this build system.

## Simplelib

This is an example of how the cmake-common buildsys should be used for a simple library.
The cmake tree exists out of the library code itself and an example application which is linked to that library.
The library code exists out of a public and private header file.

## SimpleApp

The simple app example is somewhat related to the example code in the simplelib library.
This shows how an application should be linked to a library outside of it's cmake tree.

```
CMAKE -DCC2SimpleLib_DIR /path/to/installed/lib/cmake/CC2SimpleLib
```

## QSimpleApp

This example is almost identical to the SimpleApp example. 
The only difference is that this application also links to the Qt libraries.

## complexlib

This example show how many libraries and applications link to each other inside the same cmake tree.
This setup has some limitations:
- There can't be any relation between published cmake packages.

However possible, this setup is not recommended.
Let each library have it's own repository.
