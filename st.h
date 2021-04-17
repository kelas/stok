#include<unistd.h>    //!< close
#include<stdlib.h>    //!< exit
#include<string.h>    //!< strlen
#include<stdio.h>     //!< printf
#include<sys/mman.h>  //!< mmap|unmap
#include<sys/stat.h>  //!< stat|fstat
#include<fcntl.h>     //!< open|close

typedef unsigned long long U;typedef char G,*S;typedef int I;typedef void _;
#define N(n,...) {U _n=(n),i=0;while(i<_n){__VA_ARGS__;++i;}}
#define Z(b,...) if(b){__VA_ARGS__;}else
#define P(b,...) if(b)R __extension__({__VA_ARGS__;});
#define ZG static G
#define sl strlen
#define O printf
#define R return

static S mf(S s,U*n){struct stat b;I d=open((_*)s,0);P(0>d,O("!%s\n",s),exit(1),(S)0)
 R fstat(d,&b),s=mmap(0,*n=b.st_size,PROT_READ,MAP_PRIVATE,d,0),close(d),s;}
#define uf munmap

//:~
