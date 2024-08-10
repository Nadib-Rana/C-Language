# # Step 2: C Basics
i) Installation and Setup
# Installing a C Compiler
 * GCC (GNU Compiler Collection): Available on Linux and can be installed
   on Windows using MinGW or on macOS via Xcode Command Line Tools.

# IDE Options:
* Code::Blocks
* Eclipse
* Visual Studio Code (with C/C++ extension)
* Example: Install GCC on Ubuntu:

# bash
*Copy code:
   sudo apt-get install build-essential
# ii) Writing and Running C Programs
Hello World Program

# Example:
Copy code:
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

# Compiling and Running:

# bash
*Copy code:
      gcc hello.c -o hello
      ./hello
