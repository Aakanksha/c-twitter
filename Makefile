CC = gcc
FILES = src/twitter.c
OUT_EXE = target/twitter
#HEADERDIRS = -Ilib/curl-7.21.3/include
#LIBDIRS = -L/usr/lib #default for gcc
LIBS = -lcurl

build: $(FILES)
	#$(CC) $(LIBDIRS) $(LIBS) -o $(OUT_EXE) $(FILES)
	#$(CC) --shared -o $(OUT_EXE) $(LIBDIRS) $(LIBS) $(FILES)
	#$(CC) -c $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(LIBDIRS) $(LIBS) 