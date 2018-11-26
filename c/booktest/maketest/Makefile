CC	=  gcc
CFLAGS	= -W -Wall -O2 -g
LDFLAGS	= -lm

all : like

like : like.c love.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean :
	@rm -rf *o like

