CC = gcc
CFLAGS = -Wall -I./include

SRCDIR = ./src
OBJDIR = ./src/obj
INCDIR = ./include

SRCFILES = $(SRCDIR)/main.c $(SRCDIR)/vector.c
OBJFILES = $(addprefix $(OBJDIR)/,$(notdir $(SRCFILES:.c=.o)))

all: main

main: $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/vector.h
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f main $(OBJDIR)/*.o
