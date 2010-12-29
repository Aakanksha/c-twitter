CC = gcc
FILES = twitter.c
OUT_EXE = twitter
LIBS = curl-7.21.3

build: $(FILES)
	$(CC) -I $(LIBS) -o $(OUT_EXE) $(FILES)

