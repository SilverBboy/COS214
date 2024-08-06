# Define the compiler and the flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I./src

# Define the target executable
TARGET = demoMain

# Define the source files
SRCS = Boatman.cpp BoatmanFactory.cpp CareTaker.cpp Game.cpp Infantry.cpp InfantryFactory.cpp Memento.cpp ShieldBearer.cpp ShieldBearerFactory.cpp SoldierFactory.cpp Soldiers.cpp demoMain.cpp

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile the source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: all
	./$(TARGET)

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean run