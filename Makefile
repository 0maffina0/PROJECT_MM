all:
 g++ -std=c++17 revision -o revision

test:
 chmod +x revision

clean:
 $(RM) revision
