debug: demo clean

demo:
	    g++ -o demo src/main.cpp src/core/*.cpp
		./demo

clean:
	    rm -rf *.o *~ demo
