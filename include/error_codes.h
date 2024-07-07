#ifndef NUSTC_ERROR_CODES_H
#define NUSTC_ERROR_CODES_H

enum EErrorCode {
    // Memory errors
    ERROR_MALLOC_FAILED,
    ERROR_REALLOC_FAILED,
    ERROR_TRY_TO_FREE_NULL,
    ERROR_TRY_TO_USE_NULL,
    // UTF-8 compatibility errors
    ERROR_UTF8_INVALID_LENGHT,
    ERROR_UTF8_NO_NEXT_BYTE,
    ERROR_UTF8_OVERLONG,

};

#endif