#ifndef SYMBOL_H_Q3A7KRN4
#define SYMBOL_H_Q3A7KRN4

#define OP_INCLUDE (1)
#define OP_DEFINE (2)
#define OP_NEW_VAR (3)
#define OP_NEW_FUNC (4)
#define OP_ADD_LOCAL (5)
#define OP_POP_LOCAL (6)
#define OP_FREE_LOCAL (7)

void put_symbol(const char *file, int line, int op, const char* detail);

#endif /* end of include guard: SYMBOL_H_Q3A7KRN4 */
