fileio: fileio.o
	g++ fileio.o -o fileio

fileio.o: fileio.cpp
	g++ -c fileio.cpp

build:
	make fileio.o
	make fileio

run: fileio
	./fileio

br:
	make build
	make run

clean:
	rm fileio
	rm *.o

send:
	git add fileio.cpp data.csv
	git commit -m main
	git push
