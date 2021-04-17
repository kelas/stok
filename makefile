CC=clang
#CC=gcc-10
all:
	$(CC) -Os -Werror -pedantic st.c -ost && ./st
