# Example makefile using cmpopt

-include cmpopt.mk

CXXFLAGS=${CXXFLAGSOPT} ${OPENMPCXXFLAGS}
CC=${CXX}
LDFLAGS+=${OPENMPCLDFLAGS}

all: testcmpopt

testcmpopt.o: testcmpopt.cc cmpopt.mk
testcmpopt: testcmpopt.o

run: testcmpopt
	./testcmpopt

clean:
	rm -f  testcmpopt.o

configure:
	cmpopt make > cmpopt.mk

