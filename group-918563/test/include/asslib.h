# ifndef _ASSLIB_h
# define _ASSLIB_h

typedef struct my_list_t
{
  char key;
  char val;
  struct my_list_t *next;
} my_list_t;

void my_putchar(char c);
void my_putstr(const char *str);
int my_strlen(const char *str);
int my_getnbr(char *str);
void my_putnbr(int nb);
void my_isneg(int nb);
void my_swap(int *a, int *b);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, int n);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, int nb);
char *my_strstr(char *str, const char *to_find);
char *my_strdup(const char *src);

int create_val (int key,char valeur,my_list_t *list);

char delete_key (int key, char valeur,my_list_t *list);
int find_key (int key, char valeur,my_list_t *list);
int word_count(const char *str);
char **my_str_to_word_array(const char *str);
int my_getline_key(char *line);
char *my_getline_val(char *line);
void my_putchar(char c);

# endif
