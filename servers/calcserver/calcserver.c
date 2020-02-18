#include "inc.h"


/*===========================================================================*
 *				do_add				     *
 *===========================================================================*/
int do_add(message *m)
{
    printf(">>>starting do_add from server.\n");
    // Get actual integers from message
      int a1 = m->m1_i1;
      int a2 = m->m1_i2;
    printf("do_add: received %d, %d. Performing addition.\n", a1, a2);
    int ret = a1 + a2;
    printf("do_add: addition result calculated: %d\n", ret);
    m->m1_i3 = ret;  // Setting return value
    printf("<<<leaving do_add from server.\n");
    return OK;
}

/*===========================================================================*
 *				do_mul				     *
 *===========================================================================*/
int do_mul(message *m)
{
    printf(">>>starting do_mul from server.\n");
    // Get actual integers from message
      int a1 = m->m1_i1;
      int a2 = m->m1_i2;
    printf("do_mul: received %d, %d. calling syslib for multiplication.\n", a1, a2);
    sys_mulkernel(m);
    int ret = m->m1_i3;
    printf("do_mul: multiplication result received: %d\n", ret);
    printf("<<<leaving do_mul from server.\n");
    return OK;
}