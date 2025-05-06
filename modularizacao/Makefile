CFLAGS = -Wall -g # Opções de Compilador: todos warnings e debug info

PROG = main						# define o nome do programa executável
FONTES = main.c bibfunc.c		# define todos os módulos
OBJETOS = $(FONTES:.c=.o)		# define como transformar um .cpp em um .o

$(PROG): $(OBJETOS)
	gcc $(CFLAGS) $(OBJETOS) -o $@

# make clean: permite apagar os arquivos .o e executável gerados
clean:
	-@ rm -f $(OBJETOS) $(PROG)

# usado para gerar automaticamente todas as dependências dos módulos
depend:
	makedepend -- ${CFLAGS} -- ${FONTES}
# DO NOT DELETE
main.o: bibFunc.h
bibfunc.o: bibFunc.h