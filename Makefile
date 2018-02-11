#This is a Makefile, it is useful in cases like when we have to compile many files
#and writing them all again and again is tedious and time consuming.
#It also keeps a check on which files are not changed, so it doesn't have to compile them again.


CC=g++

#add -c -Wall later
CFLAGS= 


#The first target is taken as the default target
#This compiles only the matrixclass.cpp
matrixclass.o: matrixclass.cpp
	$(CC) $(CFLAGS) matrixclass.cpp -o matrixclass 
	
#This compiles all the files
all: matrixclass.o calctime.o calcspace.o

#This compiles only the calctime.cpp
#-std=c++11 is needed for chrono's high resolution clock to work
calctime.o: calctime.cpp
	$(CC) $(CFLAGS) -std=c++11 calctime.cpp -o calctime

#This compiles only the calcspace.cpp
calcspace.o: calcspace.cpp
	$(CC) $(CFLAGS) calcspace.cpp -o calcspace
