CC=clang
CFLAGS=-std=c11 -Wall -Wextra -Werror -Wpedantic
SRCDIR=src
INCDIR=inc
OBJDIR=obj
NAME=libmx.a
INSTALLDIR=/usr/local/lib

SRC=$(wildcard $(SRCDIR)/*.c)

OBJ=$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

#CFLAGS+=-I$(INCDIR)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	mkdir -p $(OBJDIR)

install: $(NAME)
	install -m 644 $< $(INSTALLDIR)
	ldconfig
clean:
	@rm -rf $(OBJDIR)

uninstall: clean
	@rm -rf $(NAME)
reinstall: uninstall all
.PHONY: all install uninstall clean

