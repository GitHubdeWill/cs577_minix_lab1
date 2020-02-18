#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
*                                do_mulkernel                                *
*===========================================================================*/
int do_mulkernel(struct proc *caller_ptr, message *m_ptr)
{
    printf(">>>starting do_mulkernel from kernel.\n");
    // Get actual integers from message
    int a1 = m_ptr->m1_i1;
    int a2 = m_ptr->m1_i2;
    printf("do_mulkernel: received %d, %d. performing multiplication.\n", a1, a2);
    int ret = a1 * a2;
    printf("do_mulkernel: result %d * %d = %d;\n", a1, a2, ret);
    m_ptr->m1_i3 = ret;
    printf("<<<leaving do_mulkernel from kernel.\n");
    return(OK);
}