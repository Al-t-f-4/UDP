APPD = appendix
APP = udp

VPATH = . udp

#INC = . include

OBJS = ethernet.o ip.o udp.o udp_efr.o

CFLAGS	= -Wall

DFLG	+= -D__UNREAL__
DFLG	+= -D_DOS
DFLG	+= -D_DEBUG_

WFLG	= -Wall
WFLG	+= -Wpedantic
WFLG	+= -Wno-builtin-declaration-mismatch

NOFLG	= -nostdinc
NOFLG	+= -nostartfiles
NOFLG	+= -nodefaultlibs
#NOFLG	+= -nolibc
NOFLG	+= -nostdlib

OBJECTS = $(addprefix $(APPD)/,$(OBJS))

GCC	= gcc

.PHONY: all clean 

all: $(APPD)
	$(GCC) $(DFLG) $(WFLG) -o $(APP) main.c

echo:
	echo $(OBJECTS)

clean:
	@$(RM) -fv $(APPD)/*

$(APPD)/%.o: %.c Makefile
	@echo ""
