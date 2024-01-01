

APATH	=	appendix
PRJ	=	udp
TARGET	=	$(APATH)/$(PRJ)

VPATH 	=	src
IPATH	=	net

INCPATH	=	$(addprefix -I, $(IPATH))

CC	=	gcc 

FFLAGS		= -fno-inline
FFLAGS		+= -fgnu89-inline

WFLAGS		= -Wall
WFLAGS		+= -Wpedantic
WFLAGS		+= -Wextra
WFLAGS		+= -Wno-unused-but-set-variable
WFLAGS		+= -Wno-builtin-declaration-mismatch
WFLAGS		+= -Wno-missing-field-initializers

DFLG		= _$(PRJ)_CHECK_
DFLG		+= _FILE_OFFSET_BITS=64
DFLG		+= _$(ARCH)_BIT_
DFLG		+= _DEBUG_

DFLAGS		= $(addprefix -D,$(DFLG))

CFLAGS		= -g3 -O0 -std=gnu99 $(FFLAGS) $(WFLAGS) $(DFLAGS)

SRCS		= main.c

OBJS		= $(APATH)/$(addsuffix .o,$(basename $(SRCS))) 

TAGS		= $(TARGET).tag

.PHONY:	all clean tags

all: $(TARGET) #tags

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCPATH) $(LIBPATH) $^ -o $@ $(LIBS)

$(APATH)/%.o: %.c
	$(CC) $(CFLAGS) $(INCPATH) -c $< -o $@

#tags: $(OBJS)
#	ctags -R

clean:
	@rm -vf $(APATH)/*.o $(APATH)/$(PRJ)
