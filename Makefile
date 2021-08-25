output: ./practice/activity3.cpp
	g++ ./practice/activity3.cpp -o ./output/main

run: activity3.cpp
	./output/main

clean:
	rm *.o