*This project has been created as part of the 42 curriculum by amoutia.*

# Libft

## Description

Libft is my first own C library, built as the first project of the 42 curriculum. The goal is to understand how the standard C functions really work by writing them myself, and to end up with a small library of general-purpose functions that I can reuse in later projects.

The library is compiled into a static archive, `libft.a`, and is split into three parts, as the subject requires:

1. **Libc functions**: re-implementations of standard functions, with the same prototypes and the same behavior as described in their man pages, only prefixed with `ft_`.
2. **Additional functions**: useful functions that are not in libc, or exist in a different form (string creation, splitting, number conversion, writing to a file descriptor).
3. **Linked list**: a `t_list` structure and the functions to create, extend, traverse, transform and free a singly linked list.

## Instructions

### Compilation

From the root of the repository:

```sh
make          # builds libft.a (flags: -Wall -Wextra -Werror, library made with ar)
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean, then a full rebuild
```

The Makefile does not relink: running `make` a second time does nothing, and changing one `.c` file only recompiles that file. Changing `libft.h` recompiles everything.

### Using the library

Include the header in your code and link against the archive:

```c
#include "libft.h"

int main(void)
{
	char	*s;

	s = ft_itoa(-42);
	ft_putendl_fd(s, 1);
	free(s);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o demo
```

Linking the archive directly also works: `cc main.c libft.a`.

## Library description

### Part 1: libc functions

| Group | Functions |
| --- | --- |
| Character tests | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Conversion and allocation | `ft_atoi`, `ft_calloc` |

Notes on behavior:

- The `ft_is*` functions return exactly `1` when the character matches and `0` when it does not, as the subject asks. (The libc versions may return any non-zero value.)
- `ft_strlcpy` and `ft_strlcat` follow the BSD behavior: they never write more than `dstsize` bytes, always terminate the result when `dstsize` allows it, and return the length of the string they tried to create, so truncation can be detected.
- `ft_memmove` handles overlapping buffers by copying forward or backward depending on the position of `dst` relative to `src`.
- `ft_strncmp` and `ft_memcmp` compare bytes as `unsigned char`.
- `ft_strnstr` returns the haystack itself when the needle is empty, and never reads past `len` or past the end of the haystack.
- `ft_calloc` follows the subject's rule: if `count` or `size` is 0, it returns a unique pointer that can be passed to `free`. It returns `NULL` when `count * size` would overflow.

### Part 2: additional functions

| Function | What it does |
| --- | --- |
| `ft_substr` | Allocates and returns a substring of `s`, starting at `start`, at most `len` characters long. Returns an empty string when `start` is past the end. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Allocates and returns a copy of a string with the characters of a given set removed from both ends. |
| `ft_split` | Allocates and returns a `NULL`-terminated array of the words of a string, separated by a delimiter character. If an allocation fails, everything already allocated is freed and `NULL` is returned. |
| `ft_itoa` | Allocates and returns the string form of an `int`, including negative numbers and `INT_MIN`. |
| `ft_strmapi` | Allocates and returns a new string made by applying a function to each character and its index. |
| `ft_striteri` | Applies a function to each character of a string, by address, so the string can be modified in place. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, a string, a string followed by a newline, or an integer to a file descriptor, using only `write`. |

### Part 3: linked list

The list uses the structure given in the subject:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | What it does |
| --- | --- |
| `ft_lstnew` | Allocates a new node holding the given content pointer, with `next` set to `NULL`. |
| `ft_lstadd_front`, `ft_lstadd_back` | Add a node at the beginning or at the end of the list. They take a `t_list **`, so they can change the head of an empty list. |
| `ft_lstsize` | Returns the number of nodes. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstdelone` | Frees the content of one node with `del`, then the node itself. It does not touch the next node. |
| `ft_lstclear` | Frees a node and all its successors, then sets the caller's pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list from the results of a function applied to each content. If an allocation fails, the new content and the partial list are freed with `del`, and `NULL` is returned. |

## Technical choices

- **Static helpers.** Helper functions (for example the word counter and the cleanup function of `ft_split`) are `static`, so only the `ft_*` functions are visible in the library. There are no global variables.
- **Defensive checks.** Functions that take a pointer to a string or a callback in Part 2 and Part 3 return `NULL`, or do nothing, when given a `NULL` string or callback, instead of crashing. The libc re-implementations keep the original's behavior and do not check for `NULL`.
- **Optional `del`.** `ft_lstdelone` and `ft_lstclear` accept a `NULL` `del`: in that case the nodes are freed but the contents are left alone, because without `del` the function cannot know how the content was allocated.
- **Memory.** Every allocation is checked, and functions that allocate several blocks free what they already allocated before returning `NULL`.

## Resources

References I read while working on the project:

- The man pages of the re-implemented functions (`man 3 strlcpy`, `man 3 memmove`, `man 3 strnstr`, and so on).
- The GNU Make manual, for rules, pattern rules, automatic variables and `.PHONY`: https://www.gnu.org/software/make/manual/
- cppreference.com, for the C standard library and the C language: https://en.cppreference.com/
- The 42 Norm and the Libft subject (version 19.3).

### Use of AI

I used an AI assistant (Claude, by Anthropic) as a tutor during this project, in these ways:

- **Explanations.** Understanding Makefiles (rules, timestamps, pattern rules, relinking), structs, pointers to pointers and linked lists, before I wrote the corresponding code.
- **Code review.** I wrote the functions myself. The assistant ran my code and told me what was wrong (for example edge cases, memory leaks, a wrong list insertion) without rewriting it, and I fixed the problems myself.
- **Worked solutions where I was stuck.** For a few pieces I asked for a full explanation with working code: the word counting and the cleanup loop of `ft_split`, `ft_itoa`, and `ft_lstadd_front`. I then read and rewrote them until I understood every line.
- **Test checklist.** The assistant produced a checklist of test cases and expected results for every function, the Makefile and the submission. I wrote my own test programs from it.
- **README.** The first draft of this file was generated by the assistant from the subject's requirements and my code. I reviewed and corrected it.

The functions of Part 1, Part 2 and Part 3 were written by me, except for the pieces listed above.
