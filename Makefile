SRCS		= ft_pa.c ft_pb.c ft_ra.c ft_rb.c ft_rr.c ft_rra.c ft_rrb.c ft_rrr.c ft_sa.c ft_sb.c ft_ss.c
BONUS_SRCS	= NULLma
NAME		= libft.a
OBJS		= $(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
bonus:		$(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
