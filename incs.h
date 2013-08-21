#include <stdlib.h>  // malloc
#include <stdio.h>   // printf
#include <string.h>  // strlen
typedef char C;
typedef long I;
typedef void V;
typedef struct a{I t,r,d[3],p[2];}*A;
#define P printf
#define R return
#define DO(n,x) {I i=0,_n=(n);for(;i<_n;++i){x;}}
