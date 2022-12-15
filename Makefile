all:
 g++ -std=c++17 revision.cpp -o revision.cpp

test:
 chmod +x revision.cpp

clean:
 $(RM) revision.cpp
