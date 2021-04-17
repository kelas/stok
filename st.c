//! tiny strtok, copyright (c) 2021 regents of kparc, bsd-2-clause
#include"st.h"
//! sndx: (s)tr le(n) (d)elim e(x)ec
//! exec is arbitrary code, has access to t,tn,tp: token, token length, token position
#define stok(s,n,d,x){ZG z=0,D[255]="*";Z(!z,z=1;N(sl(d),D[d[i]]='*'));{\
 I tn,in=0;U tp=0;S t;N(n+1,Z(D[s[i]],Z(in,in=0,t=s+tp,tn=i-tp;{x;})tp=i)Z(!in,in=1,tp=i))}}

int main(){U n;S s=mf("fw.txt",&n),d=" ,'.\n"; // tape delims
 stok(s,n,d,O("(%llu:%.*s)",tp,tn,t);)R!!uf(s,n);}

//:~
