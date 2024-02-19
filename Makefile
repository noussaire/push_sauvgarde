NAME := push_swap

CC := cc

CFLAGS := -Wall -Wextra -Werror 

RM = rm -f

SRCS = libft/ft_split.c libft/ft_atoi.c libft/ft_strlen.c libft/ft_strjoin.c libft/ft_strdup.c \
		main/format_cheack.c main/main.c main/errors.c main/free.c main/cheaaaaaack.c \
		main/rempplire.c main/rules.c main/sort.c main/errors2.c main/steps.c main/join_argv.c \
		sort/tow_number.c sort/three_number.c \
		rules/sa.c rules/ra.c rules/rra.c rules/p_b.c rules/p_a.c rules/sb.c rules/push_b/push_b.c rules/push_b/push_b_utils.c \
		rules/rb.c rules/rrb.c rules/rrr.c rules/rr.c rules/ss.c rules/organization.c \
		rules/push_a/push_a.c rules/push_a/push_a_utils.c rules/run/run.c \

OBJS = ${SRCS:.c=.o}


$(NAME): ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
