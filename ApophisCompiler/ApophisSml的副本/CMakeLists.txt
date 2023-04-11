cmake_minimum_required(VERSION 3.24)
project(ApophisSml C)

set(CMAKE_C_STANDARD 11)

add_executable(ApophisSml main.c compiler.c compiler.h cprocess.c helpers/vector.c helpers/vector.h helpers/buffer.c helpers/buffer.h test.c lex_process.c lexer.c token.c parser.c node.c)
