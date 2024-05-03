COMP = clang
OPC = -Wall -std=c99
NOME = EXE
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME)

nome: clear
	$(COMP) $(OPC) -o $(NOME) *.c
	@$(START)

compile: clear
	$(COMP) $(OPC) -o $(NOME) *.c

clear:
	rm -rf $(NOME) .*.c.swp .*.h.swp .cache
	clear
	@echo ""
	@ls -alh --color=auto
	@echo ""

run:
	@$(START)
