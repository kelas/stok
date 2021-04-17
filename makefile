all:
	$(CC) -pedantic -Wno-variadic-macros -Wno-gnu-statement-expression st.c -ost && ./st
