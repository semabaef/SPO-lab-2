BUILD_DIR = build
OUTPUT_DIR = out

OBJS = ast.o error.o main.o lex.yy.o grammer.tab.o
OBJS_WITH_PATH = $(patsubst %,$(BUILD_DIR)/%,$(OBJS))

all: clean out build_lab result run

clean:
	rm -rf ${BUILD_DIR}
	rm -rf ${OUTPUT_DIR}
	rm -f *.tab.*
	rm -f lex.yy.c
	rm -f result.exe

out:
	mkdir ${BUILD_DIR}
	mkdir ${OUTPUT_DIR}

build_lab: ${BUILD_DIR}
	gcc -c -o ${BUILD_DIR}/error.o error/error.c
	gcc -c -o ${BUILD_DIR}/ast.o ast/ast.c
	flex parser/lexer.l
	bison -d -t parser/grammer.y && echo '#include "ast/ast.h"' | cat - grammer.tab.h > temp && mv temp grammer.tab.h
	gcc -c -o ${BUILD_DIR}/main.o main.c
	gcc -c -o ${BUILD_DIR}/lex.yy.o lex.yy.c
	gcc -c -o ${BUILD_DIR}/grammer.tab.o grammer.tab.c
	gcc $(OBJS_WITH_PATH) -o result && chmod +x result

error.o: error/error.c
	gcc -c -o ${BUILD_DIR}/error.o error/error.c

lex.yy.c:
	flex parser/lexer.l

grammer.tab.c: parser/grammer.y
	bison -d -t parser/grammer.y && echo '#include "ast/ast.h"' | cat - grammer.tab.h > temp && mv temp grammer.tab.h

ast.o: ast/ast.c
	gcc -c -o ${BUILD_DIR}/ast.o ast/ast.c

main.o: main.c out
	gcc -c -o ${BUILD_DIR}/main.o main.c

lex.yy.o: lex.yy.c
	gcc -c -o ${BUILD_DIR}/lex.yy.o lex.yy.c

grammer.tab.o: grammer.tab.c
	gcc -c -o ${BUILD_DIR}/grammer.tab.o grammer.tab.c

result: $(OBJS_WITH_PATH)
	gcc $(OBJS_WITH_PATH) -o result && chmod +x result

run: result
	for i in 1 2; do \
            ./result tests/test$$i.txt | dot -Tsvg > ${OUTPUT_DIR}/graph_$$i.svg; \
        done