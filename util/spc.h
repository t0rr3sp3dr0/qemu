//
// Created by Pedro Tôrres on 10/3/21.
//

#ifndef QEMU_UTIL_SPC_H
#define QEMU_UTIL_SPC_H

void spc_drop_privileges(int permanent);
void spc_restore_privileges(void);

#endif //QEMU_UTIL_SPC_H
