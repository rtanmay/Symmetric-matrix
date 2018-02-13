#This is a Makefile, it is useful in cases like when we have to compile many files
#and writing them all again and again is tedious and time consuming.
#It also keeps a check on which files are not changed, so it doesn't have to compile them again.

CXX=g++

#add -c -Wall later
CXXFLAGS= 

#The first target is taken as the default target
#This compiles only the matrixclass.cpp
matrixclass.o: matrixclass.cpp
	$(CXX) $(CXXFLAGS) matrixclass.cpp -o matrixclass 
	
#This compiles all the files
all: matrixclass.o calctime_using_chrono.o calcspace.o

#This compiles only the calctime.cpp
#-std=c++11 is needed for chrono's high resolution clock to work
calctime_using_chrono.o: calctime_using_chrono.cpp
	$(CXX) $(CXXFLAGS) -std=c++11 calctime_using_chrono.cpp -o calctime_using_chrono

#This compiles only the calcspace.cpp
calcspace.o: calcspace.cpp
	$(CXX) $(CXXFLAGS) calcspace.cpp -o calcspace