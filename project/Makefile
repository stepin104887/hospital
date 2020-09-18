Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@stepin104887 
Learn Git and GitHub without any code!
Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.


stepin654321
/
MiniProject_Template
4
784
Code
Issues
Pull requests
1
Actions
Projects
Wiki
Security
Insights
MiniProject_Template/MiniProject_C/3_Implementation/Makefile
@prithvisekhar
prithvisekhar First Commit , Bharath's Intenal Repo
Latest commit 05ada6a on Aug 4
 History
 1 contributor
53 lines (38 sloc)  1.07 KB
  
# Name of the project
PROJECT_NAME = hospital

# Output directory
BUILD = build

# All source code files
SRC = src/main.c\

# All test source files
#TEST_SRC = src/calculator_operations.c\
#test/test_calculator_operations.c

#TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build

