APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src


all: libed myapps

libed: \
	float_vector.o \
	mytime.o

myapps:
	gcc $(APPS)/app.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/app
	gcc $(APPS)/app_com_mytime.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/app_com_mytime

/*
% porcento e como se foce o asteristico do linux
ou melhor qualquer coisa depois do %
ele busca qualquer valor inserido depois da %
um exenplo e o %.o inserido abaixo busca todos arquivos .o*/ 

%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc -c $< -I $(INCLUDE) -o $(OBJ)/$@

run:
	./bin/app

clean:
	rm -rf ./bin/* ./obj/*