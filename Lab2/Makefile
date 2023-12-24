CC=g++

CFLAGS=-c -Wall

CDLFLAGS=-c -Wall -fPIC


LIBSOURCES=Client.cpp Database.cpp UserInterface.cpp
LIBOBJECTS=$(LIBSOURCES:.cpp=.o)

MAIN=main.cpp
MAINOBJECT=$(MAIN:.cpp=.o)

EXECUTABLE=start

STATICLIB=libloader.a
DYNAMICLIB=libloader.so


all:

	$(CC) $(CFLAGS) $(MAIN) $(LIBSOURCES)
	$(CC) $(MAINOBJECT) $(LIBOBJECTS) -o $(EXECUTABLE)
static:

	$(CC) $(CFLAGS) $(MAIN) $(LIBSOURCES)
	ar rcs $(STATICLIB) $(LIBOBJECTS)
	$(CC) $(MAINOBJECT) -L. -lloader -o $(EXECUTABLE)

dynamic:
	$(CC) $(CFLAGS) $(MAIN)
	$(CC) $(CDLFLAGS) $(LIBSOURCES)
	$(CC) -shared -o $(DYNAMICLIB) $(LIBOBJECTS) -ldl
	$(CC) $(MAINOBJECT) -ldl -o $(EXECUTABLE) -L. -lloader -Wl,-rpath,.

clean:
	rm -f $(MAINOBJECT) $(LIBOBJECTS) $(EXECUTABLE) $(STATICLIB) $(DYNAMICLIB)

