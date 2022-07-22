```shell
$> checksec --file level1
RELRO           STACK CANARY      NX            PIE             RPATH      RUNPATH      FILE
No RELRO        No canary found   NX disabled   No PIE          No RPATH   No RUNPATH   level1

# RELRO     : Address randomization
# CANARY    : stack overflow protection
# NX        : Data Execution Prevention.
# PIE       : code address randomization
```