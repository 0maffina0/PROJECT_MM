all:
 g++ -std=c++17 main.cpp -o main.cpp

test:
 chmod +x main.cpp

clean:
 $(RM) main.cpp
