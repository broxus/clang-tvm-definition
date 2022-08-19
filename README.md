## Clang TVM Definition

Custom compiler definition for CLion

### How To Use

1. Go to *Preferences/Settings | Build, Execution, Deployment | Toolchains | Custom Compiler*.
2. Set the Use custom compiler config (*.yaml) checkbox and provide the path to the `compiler.yaml`.
3. Switch to the Toolchains dialog and select the toolchain to be edited or create a new one.
4. Change the paths in the C Compiler and C++ Compiler fields to
   `$HOME/.everdev/clang/opt/work/llvm/install/bin/clang`.
5. Include `builtin.hpp` to fix IDE warnings.
