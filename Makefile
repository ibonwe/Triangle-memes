CC := g++
PROJECT := polygon-memes-SNAPSHOT
VERSION := v1.0.0
BINDIR := bin
BUILDDIR := build
SRCDIR := src
TESTDIR := test
TARGET := $(BINDIR)/$(PROJECT)-$(VERSION)

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%, $(BUILDDIR)/%, $(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g # -Wall
INC := -I include

$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	@echo " Linking..."
	@echo " $(CC) $^ -o $(TARGET)"; $(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning..."
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

destroy:
	@echo " Destroy..."
	@echo " $(RM) -r $(BUILDDIR) $(BINDIR)"; $(RM) -r $(BUILDDIR) $(BINDIR)

test:
	$(CC) $(CFLAGS) $(TESTDIR)/tests.cpp $(INC) -o $(BINDIR)/tests

.PHONY: clean
