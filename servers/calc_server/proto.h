#ifndef __CALCSERVER_PROTO_H__
#define __CALCSERVER_PROTO_H__

/* Function prototypes. */

/* main.c */
int main(int argc, char **argv);

/* calc_server.c */
int do_add(void);  // Addition as System Call

int do_mul(void);  // Multiplication as Kernel Call

#endif