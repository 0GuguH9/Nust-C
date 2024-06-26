#ifndef ERROR_CODES_H
#define ERROR_CODES_H

enum EErrorCodes {
    NO_COMMAND = 1,
    INVALID_COMMAND,
    NO_ARGUMENTS,
    INVALID_ASSEMBLY,
    INVALID_OS,
    //Compile command
    CMP_NO_FILE_EXTENSION,
    CMP_NO_COMPILABLE_FILE,
    CMP_INVALID_FILE_FOR_THIS,
    CMP_NO_INPUT_FILES,
    CMP_INVALID_ASM_ARGUMENT_SYNTAX,
    CMP_INVALID_OS_ARGUMENT_SYNTAX,
    CMP_INVALID_ARGUMENT,
    CMP_FILE_DONT_EXISTS,
    CMP_SAME_AS_OUTPUT,
    //NIR compile command
    //UTF-8 compatibily
    UTF8_ALLOC_ERROR,
    UTF8_ALLOC_SEQUENCE_ERROR,
    UTF8_REALLOC_SEQUENCE_ERROR,
    UTF8_INVALID_LENGHT,
    UTF8_INVALID_CHARACTER,
    UTF8_NO_CONTINUATION_BYTE,
    UTF8_OVERLONG,
    UTF8_SURROGATE_PAIR,
    UTF8_AWAY_LIMITS,
    //Lexer compiler phase
    LX_MEMORY_ALLOC_ERROR,
    LX_EMPTY_FILE_PASSED,
    LX_INVALID_CHARACTER,
    LX_EARLY_EOF,
    LX_HEXA_BAD_FORMAT,
    LX_CANT_GET_SSEQUENCE,
    LX_INVALID_STRING,
    LX_INVALID_CHAR,
    LX_INVALID_CHAR_FORMAT,
    //Token
    TK_MEMORY_ALLOC_ERROR,
    //AST
    AST_MEMORY_ALLOC_ERROR,
    //Syntaxer
    SY_MEMORY_ALLOC_ERROR,
    SY_UNEXPECTED_TOKEN,
};

#endif
