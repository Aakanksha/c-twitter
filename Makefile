CC = gcc
FILES = src/twitter.c
OUT_EXE = target/twitter
LIBS = lib/curl-7.21.3

build: $(FILES)
	$(CC) -I $(LIBS) -o $(OUT_EXE) $(FILES)

