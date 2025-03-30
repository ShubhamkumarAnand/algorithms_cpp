# Compiler to use
CXX = g++
# Compiler flags: -std=c++17 (use a modern standard), -Wall (warnings), -g (debugging symbols)
CXXFLAGS = -std=c++17 -Wall -Wextra -g -I$(ALGO_DIR) -I$(UTILS_DIR)

# Directories
ALGO_DIR = algorithms
UTILS_DIR = utils

# Find all .cpp files (adjust pattern if you don't use subdirs initially)
SOURCES = main.cpp $(wildcard $(ALGO_DIR)/*/*.cpp) $(wildcard $(ALGO_DIR)/*.cpp) $(wildcard $(UTILS_DIR)/*.cpp)
# Alternative if NO subdirs in algorithms:
# SOURCES = main.cpp $(wildcard $(ALGO_DIR)/*.cpp) $(wildcard $(UTILS_DIR)/*.cpp)


# Name of the final executable
EXECUTABLE = runner

# Default target: build the executable
all: $(EXECUTABLE)

# Rule to link the executable
$(EXECUTABLE): $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) $^ -o $(EXECUTABLE)

# Rule to compile .cpp files into .o (object) files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to compile main.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

# Rule to compile algorithm files (adjust path if needed)
$(ALGO_DIR)/%.o: $(ALGO_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(ALGO_DIR) -I$(UTILS_DIR) # Include paths

$(ALGO_DIR)/*/*.o: $(ALGO_DIR)/*/*.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(ALGO_DIR) -I$(UTILS_DIR) # Include paths for subdirs

# Rule to compile utility files
$(UTILS_DIR)/%.o: $(UTILS_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(ALGO_DIR) -I$(UTILS_DIR) # Include paths

# Target to clean up compiled files
clean:
	rm -f $(EXECUTABLE) $(SOURCES:.cpp=.o)

.PHONY: all clean
