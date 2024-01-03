

APATH	=	appendix
PRJ	=	udp
TARGET	=	$(APATH)/$(PRJ)

VPATH 	=	net
IPATH	=	net

INCPATH	=	$(addprefix -I, $(IPATH))
LIBPATH =	$(addprefix -I, $(VPATH))

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

SRC		= main.c 
SRC		+= udp_efr.c 
SRC		+= udp.c 
SRC		+= ip.c ethernet.c

OBJS		= $(addprefix $(APATH)/, $(addsuffix .o,$(basename $(SRC))))

TAGS		= $(TARGET).tag

.PHONY:	all clean tags info

all: $(TARGET) #tags

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCPATH) $(LIBPATH) $^ -o $@ $(LIBS)
	@echo $(OBJS)

$(APATH)/%.o: %.c
	$(CC) $(CFLAGS) $(INCPATH) -c $< -o $@

tags:
	@ctags `find . -name "*.[ch]" -print` 

clean:
	@rm -vf $(APATH)/*.o $(APATH)/$(PRJ)

info:
	@echo $(INCPATH)
	@echo $(LIBPATH)
