.PHONY: clean

CC = /usr/bin/arm-linux-gnueabi-gcc
#CC = gcc
RM = rm

TARGET = test_cs_sub
INCS = $(wildcard *.h)
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,%.o,$(SRCS))

LIBS    := -lpaho-mqtt3c

$(TARGET) : $(OBJS) $(INCS)
	$(CC) -o $@ $(OBJS) $(LIBS)
%.o: %.c $(INCS)
	$(CC) -o $@ -c $< 
clean:
	$(RM) -fr $(TARGET) $(OBJS)

