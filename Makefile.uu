all:
	g++ -std=c++17 hello.cpp -o hello
	g++ -std=c++17 helloTest.cpp -lcppunit -o helloTest

test:
	chmod +x hello
	./helloTest

clean:
	$(RM) hello helloTest
