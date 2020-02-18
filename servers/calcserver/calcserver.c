#include "inc.h"


/*===========================================================================*
 *				do_add				     *
 *===========================================================================*/
int do_add(message *m)
{
    printf(">>>starting do_add.\n");
    // Get actual integers from message
      int a1 = m->m1_i1;
      int a2 = m->m1_i2;
    printf("do_add: received %d, %d. Performing addition.\n", a1, a2);
    int ret = a1 + a2;
    printf("do_add: addition result calculated: %d\n", ret);
    m->m1_i3 = ret;  // Setting return value
    return OK;
}

/*===========================================================================*
 *				do_mul				     *
 *===========================================================================*/
int do_mul(message *m)
{
    printf(">>>starting do_mul.\n");
    // Get actual integers from message
      int a1 = m->m1_i1;
      int a2 = m->m1_i2;
    printf("do_mul: received %d, %d. calling kernel for multiplication.\n", a1, a2);

    int ret = 0;
    printf("do_mul: multiplication result calculated: %d\n", ret);
    m->m1_i3 = ret;  // Setting return value
    return OK;
}