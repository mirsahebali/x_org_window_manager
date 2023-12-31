CXXFLAGS ?= -Wall -g
CXXFLAGS += -std=c++1y
CXXFLAGS += `pkg-config --cflags x11 libglog`
LDFLAGS += `pkg-config --libs x11 libglog`

all: winx

HEADERS = \
	  window_manager.hpp

SOURCES = \
	  window_manager.cpp \
	  main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

winx: $(HEADERS) $(OBJECTS)
	$(CXX) -o $@ $(OBJECTS) $(LDFLAGS)

.PHONY: clean

clean: 
	rm -f winx $(OBJECTS)
