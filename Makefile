SRC_DIR=src
OBJ_DIR=lib

OBJS_C = \
	$(OBJ_DIR)/main.o \

OBJS_ASM = \
	$(OBJ_DIR)/boot.o \

CC=gcc
ASM=nasm
CFLAGS=-m32 -nostdlib -nostdinc -fno-builtin -fno-stack-protector
IFLAGS=
LDFLAGS=-m elf_i386 -Tlink.ld
ASFLAGS=-felf

all: kernel

kernel: ${OBJS_C} ${OBJS_ASM} link.ld
	ld $(LDFLAGS) -o kernel ${OBJS_C} ${OBJS_ASM}

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	$(ASM) $(ASFLAGS) $< -o $@

# .c.o:
# 	${CC} ${CFLAGS} $<

# .s.o:
# 	nasm $(ASFLAGS) $<

clean:
	rm -rf ${OBJ_DIR}/*.o kernel bochsout.txt
