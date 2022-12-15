all:
	g++ -std=c++17 revision.cpp -o revision

test:
	chmod +x revision

clean:
	$(RM) revision
