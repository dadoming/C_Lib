#include "my_lib.h"

t_string *string()
{
    static t_string s = {_atoi, _length, _rear_search, _strnstr,
    _substr, _to_lower, _to_upper, _compare_n, _compare, _append,
    _search, _copyl, _concatenatel, _putchar_fd, _putstring_fd,
    _putnumber_fd, _is_alpha, _is_ascii, _is_digit, _is_printable,
    _is_alnum, _itoa, _bzero, _calloc, _memset, _duplicate,
    _mem_search, _mem_compare, _mem_copy, _mem_set, _mem_move,
    _putstring_n_fd, _split, _mapi, _iteri, _trim};
    return (&s);
}
