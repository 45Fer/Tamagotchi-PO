CXX ?= g++
MINGW64 ?= C:/msys64/mingw64
SFML_INCLUDE ?= $(MINGW64)/include
SFML_LIB ?= $(MINGW64)/lib

CXXFLAGS = -std=c++11 -Iinclude -I$(SFML_INCLUDE)
LDFLAGS = -L$(SFML_LIB)
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

SRCDIR = src
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(SOURCES))
TARGET = $(BINDIR)/tamagotchi.exe

all: $(BINDIR) $(TARGET)

$(BINDIR):
	mkdir -p $(BINDIR)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

run: all
	$(TARGET)

clean:
	rm -f $(BINDIR)/*.o $(TARGET)