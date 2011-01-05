CC = gcc
DOXYGEN = doxygen
FILES = src/twitter.c
OUT_EXE = target/twitter
#HEADERDIRS = -Ilib/curl-7.21.3/include
#LIBDIRS = -L/usr/lib #default for gcc
LIBS = -lcurl

build: $(FILES)
	if [ ! -d "target" ]; then mkdir target; fi
	$(CC) -o $(OUT_EXE) $(FILES) $(LIBDIRS) $(LIBS) 

doc:
	$(DOXYGEN) Doxyfile
