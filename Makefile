SRC = unity/unity.c\
src/complex_calculator.c\
test/test_complex_calculator.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = complex_calculator.exe

all: $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/complex_calculator.c main.c




