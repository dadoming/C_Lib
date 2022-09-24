#ifndef MY_LIB_LST_H
#define MY_LIB_LST_H

typedef struct s_list
{
    void* content;
    struct s_list* next;
} t_list;

typedef struct s_listfunc
{
    // Returns a pointer to a new node. 
    // Returns NULL if allocation fails.
    t_list*	(*_new_node)(void *content);

    // Returns the list size.
    int	    (*_size)(t_list *lst);

    // Returns a pointer to the last node of the list. 
    // Returns 0 if lst is NULL.
    t_list*	(*_last)(t_list *lst);

    // Adds a new node to the first position of the linked list and sets the head of the list to that new node.
    // The function returns if 'lst' is NULL.
    void    (*_add_front)(t_list **lst, t_list *new);

    // Adds a new node to the back of the linked list.
    // Returns if no list is passed.
    void	(*_add_back)(t_list **lst, t_list *new);

    // Applies a function to every member of the list.
    void	(*_iterator)(t_list *lst, void (*f)(void *));

    // Deletes the current node and sets lst pointer to next node. 
    // Frees removed node.
    void	(*_del_node)(t_list **lst);

    // Clears the whole list calling _del_node() to every member of the list.
    void	(*_clear_list)(t_list **lst);
    
    // Deletes the last node of the list.
    void    (*_del_last_node)(t_list **lst);

} t_listfunc;

t_listfunc *list();

t_list	*_new_node(void *content);
int	    _size(t_list *lst);
t_list	*_last(t_list *lst);
void    _add_front(t_list **lst, t_list *new);
void	_add_back(t_list **lst, t_list *new);
void	_iterator(t_list *lst, void (*f)(void *));
void	_del_node(t_list **lst);
void	_clear_list(t_list **lst);
void    _del_last_node(t_list **lst);

#endif