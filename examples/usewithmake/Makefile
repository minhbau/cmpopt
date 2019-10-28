# Example makefile using cmpopt

-include config.mk

LINK.o = $(LINK.cc)
CXXFLAGS+= $(OPENMPCXXFLAGS)
#LDFLAGS += $(OPENMPLDFLAGS)

APPNAME = testcmpopt
APPOBJS = $(APPNAME).o

all: $(APPNAME)

$(APPNAME).o: $(APPNAME).cc config.mk

$(APPNAME): $(APPOBJS)

run: $(APPNAME)
	./$(APPNAME)

clean:
	rm -f  $(APPNAME).o $(APPNAME)

distclean: clean
	rm -f config.mk
