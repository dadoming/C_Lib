#ifndef MY_LIB_STRING_H
# define MY_LIB_STRING_H

typedef struct s_string
{
    // Returns an int from a passed string.
    int 	(*_atoi)(const char *str);
    // Returns the length of a string.
    int 	(*_length)(const char *str);
    // Return a pointer to where it found 'char c' in string.
    char* 	(*_rear_search)(const char *str, char to_find);
    // Finds needle in haystack and no more than len characters are searched. 
    // If found, it returns a pointer to where it started. 
	char*	(*_strnstr)(const char *str, const char *to_find, unsigned int);
    // Return a new alloc'd string with a 'len' length and starting in s[start].
    char* 	(*_substr)(const char *str, unsigned int start, unsigned int len);
    // Returns a passed letter in lowercase.
    char 	(*_to_lower)(char c);
    // Returns a passed letter in uppercase.
    char 	(*_to_upper)(char c);
    // Compare if s2 == s1 no more than n characters. 
    // Return the difference if different, 0 if the same.
    int	    (*_compare_n)(const char* s1, const char* s2, unsigned int n);
    // Compares if s2 == s1. 
    // Return the difference if different. 0 if the same.
    int	    (*_compare)(const char* s1, const char* s2);
    // Returns a new alloc'd string appending s2 to s1.
    char*	(*_append)(const char* s1, const char* s2);
    // Returns a pointer to where it found 'char c' in string.
    char*	(*_search)(const char *str, char c);
    // Copies (dstsize - 1) characters from src to dst. 
    // Return the amount of characters of the total string it tried to copy.
    int	    (*_copyl)(char *dst, const char *src, int dstsize);
    // Appends (dstsize - dst(len) - 1) characters from src to dst. 
    // Returns the amount of characters of the total string it tried to concatenate.
    int	    (*_concatenatel)(char *dst, const char *src, int dstsize);
    // Puts char in fd.
    void	(*_putchar_fd)(char c, int fd);
    // Puts string in fd.
    void	(*_putstring_fd)(char *s, int fd);
    // Puts number in fd.
    void	(*_putnumber_fd)(int n, int fd);
    // Checks if 'c' is alpha. 
    // Returns 2 for uppercase. 
    // 1 for lowercase. 
    // 0 for not alpha.
    int	    (*_is_alpha)(int c);
    // Checks if 'c' is ascii. 
    // Returns 1 for true. 0 for false.
    int	    (*_is_ascii)(int c);
    // Checks if 'c' is digit. 
    // Returns 1 for true. 0 for false. 
    int	    (*_is_digit)(int c);
    // Checks if 32 >= 'c' =< 126. 
    // Returns 1 for true. 0 for false. 
    int	    (*_is_printable)(int c);
    // Checks if is alpha or is digit. 
    // Returns 1 for true. 0 for false.
    int	    (*_is_alnum)(int c);
    // Returns an alloc'd string from a passed integer.
    char*   (*_itoa)(int n);
    // Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
    void	(*_bzero)(void* str, unsigned int n);
    // Returns a malloc'd pointer initialized with 0's with sizeof(count * size) bytes. 
    void*   (*_calloc)(unsigned int count, unsigned int size);
    // Sets the array, one by one, no more than len characters to 'to_swap'.
    void*   (*_mem_set)(void *str, int to_swap, unsigned int len);
    // Returns a malloc'd string duplicated.
    char*   (*_duplicate)(const char *str);
    // Searches for 'c' in an array, no more than n characters. Return the address of n.
    void*	(*_mem_search)(const void *str, int c, unsigned int n);
    // Compares array1 with array2, no more than n characters.
    // Return the difference if different. 0 if the same.
    int	    (*_mem_compare)(const void *s1, const void *s2, unsigned int n);
    // Copies no more than n from array src to array dst, return a pointer to dst.
    void*   (*_mem_copy)(void *dst, const void *src, unsigned int n);
    // Copies from src to dst but uses a temporary array to do it.
    void*   (*_mem_move)(void *dst, const void *src, unsigned int len);
    // Puts string with '\n' in fd.
    void	(*_putstring_n_fd)(char *s, int fd);
    // Returns a splitted string.
    char**  (*_split)(char const *str, char c);
    char*	(*_mapi)(char const *s, char (*f)(unsigned int, char));
    // Returns a new alloc'd string having applied function f to every member of the string. 
    void	(*_iteri)(char *s, void (*f)(unsigned int, char*));
    char*	(*_trim)(char const *s1, char const *set);

} t_string;

// My lib function storer.
t_string *string();

char	_to_lower(char letter);
char	_to_upper(char letter);

char*   _append(char const *s1, char const *s2);
char*   _strnstr(const char *str, const char *to_find, unsigned int len);
char*   _rear_search(const char *str, char c);
char*   _substr(const char *s, unsigned int start, unsigned int len);
char*	_search(const char *str, char c);
char*   _itoa(int n);
char*	_mapi(char const *s, char (*f)(unsigned int, char));
char*	_trim(char const *s1, char const *set);
char*   _duplicate(const char *str);

char**  _split(char const *s, char c);

int		_atoi(const char *str);
int 	_length(const char *str);
int	    _compare(const char* s1, const char* s2);
int	    _compare_n(const char *s1, const char *s2, unsigned int n);
int	    _copyl(char *dst, const char *src, int dstsize);
int	    _concatenatel(char *dst, const char *src, int dstsize);
int	    _is_alpha(int c);
int	    _is_ascii(int c);
int	    _is_digit(int c);
int	    _is_printable(int c);
int	    _is_alnum(int c);
int	    _mem_compare(const void *s1, const void *s2, unsigned int n);

void	_putchar_fd(char c, int fd);
void	_putstring_fd(char *s, int fd);
void	_putstring_n_fd(char *s, int fd);
void	_putnumber_fd(int n, int fd);
void	_bzero(void *str, unsigned int n);
void	_iteri(char *s, void (*f)(unsigned int, char*));

void*   _calloc(unsigned int count, unsigned int size);
void*   _mem_set(void *str, int to_swap, unsigned int len);
void*	_mem_search(const void *str, int c, unsigned int n);
void*   _mem_copy(void *dst, const void *src, unsigned int n);
void*   _mem_move(void *dst, const void *src, unsigned int len);

#endif
