all:
 g++ -std=c++17 main.cpp -o algorithms_1

test:
 chmod +x main.cpp

clean:
 $(RM) main.cpp
