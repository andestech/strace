#if defined(RISCV64)
# include "../64/ioctls_inc.h"
#elif defined(RISCV32)
# include "../32/ioctls_inc.h"
#else
# error "Unsupported RISC-V xlen"
#endif
