#include "syslib.h"
#include <stdio.h>

int sys_mulkernel(message *m)
{
        printf(">>>starting sys_mulkernel from syslib.\n");
        // Get actual integers from message
        int a1 = m->m1_i1;
        int a2 = m->m1_i2;
        printf("sys_mulkernel: received %d, %d. calling kernel for multiplication.\n", a1, a2);
        int m_type = _kernel_call(SYS_MULKERNEL, m);
        int ret = m->m1_i3;
        printf("sys_mulkernel: result %d * %d = %d;\n", a1, a2, ret);
        printf("<<<leaving sys_mulkernel from syslib.\n");
        return(m_type);
}