#Makefile by Damian 
#0.3.3
NAME := stest
POSTFIX := .exe

CXX := g++
CXXFLAGS := -Wall -std=c++11
LINK_FLAGS := 

CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix $(OBJDIR),$(notdir $(CPP_FILES:.cpp=.o)))
EXE_FILE := $(addprefix $(NAME),$(POSTFIX))


$(EXE_FILE): $(OBJ_FILES)
	$(CXX) $(LINK_FLAGS) -o $@ $^

rebuild: |clean 
	make $(EXE_FILE)
test:
	echo $(EXE_FILE)

%.o: %.C
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f -r *.o
	rm -f $(EXE_FILE)
	rm -f myout
print:
	@echo $(CPP_FILES)
	@echo ----
	@echo $(OBJ_FILES)
	@echo COMPILE_FLAGS
	@echo $(COMPILE_FLAGS)

.PHONY: $(EXE_FILE) clean rebuild print
