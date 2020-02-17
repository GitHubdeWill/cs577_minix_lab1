#ifndef _CALCSERVER_PROTO_H
#define _CALCSERVER_PROTO_H

/* Function prototypes. */

/* main.c */
int main(int argc, char **argv);

/* calc_server.c */
int do_add(message *m);  // Addition as System Call

int do_mul(message *m);  // Multiplication as Kernel Call

#endif