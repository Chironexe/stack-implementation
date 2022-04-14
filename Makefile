
INCLUDE=../include
OUTPUT=../output/main
INPUT=*.cpp

output: $(INPUT)
	g++ $(INPUT) -I$(INCLUDE) -o $(OUTPUT)

run:
	./$(OUTPUT).exe