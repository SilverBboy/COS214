# Define the compiler and the flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I/home/morne/projects/COS214/Prac_2/src

# Define the target executable
TARGET = demoMain

# Define the source files
SRCS = /home/morne/projects/COS214/Prac_2/src/Boatman.cpp \
       /home/morne/projects/COS214/Prac_2/src/BoatmanFactory.cpp \
       /home/morne/projects/COS214/Prac_2/src/CareTaker.cpp \
       /home/morne/projects/COS214/Prac_2/src/Game.cpp \
       /home/morne/projects/COS214/Prac_2/src/Infantry.cpp \
       /home/morne/projects/COS214/Prac_2/src/InfantryFactory.cpp \
       /home/morne/projects/COS214/Prac_2/src/Memento.cpp \
       /home/morne/projects/COS214/Prac_2/src/ShieldBearer.cpp \
       /home/morne/projects/COS214/Prac_2/src/ShieldBearerFactory.cpp \
       /home/morne/projects/COS214/Prac_2/src/SoldierFactory.cpp \
       /home/morne/projects/COS214/Prac_2/src/Soldiers.cpp \
       /home/morne/projects/COS214/Prac_2/src/demoMain.cpp

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
