CC := gcc
#CFLAGS := 
DEST := ./build/

substitution: coloring_text_in_terminal.c
	mkdir $(DEST)
	$(CC) coloring_text_in_terminal.c -lcs50 -o $(DEST)/coloring_text_in_terminal 
