CC = gcc
FILES = src/twitter.c
OUT_EXE = target/twitter
LIBDIRS = -L/usr/lib
LIBS = -lcurl

build: $(FILES)
	$(CC) $(LIBDIRS) $(LIBS) -o $(OUT_EXE) $(FILES)

