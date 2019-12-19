# Example makefile using cmpopt

-include config.mk

LINK.o = $(LINK.cc)
#CXXFLAGS = $(CXXFLAGSOPT)
CXXFLAGS += $(EXTRACXXFLAGSOMP)
LDFLAGS += $(EXTRALINKFLAGSOMP)

APPNAME = testcmpopt
APPOBJS = $(APPNAME).o

all: $(APPNAME)

# generate the config automatically
config.mk:
	cmpopt makefile > $@

$(APPNAME).o: $(APPNAME).cc config.mk

$(APPNAME): $(APPOBJS) config.mk
	$(CXX) $(LDFLAGS) -o $@ $(APPOBJS) $(LDLIBS)

run: $(APPNAME)
	./$(APPNAME)

clean:
	rm -f  $(APPOBJS)

distclean: clean
	rm -f config.mk $(APPNAME)
