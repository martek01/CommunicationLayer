bin_PROGRAMS = comlayer_tests
comlayer_tests_SOURCES = main.cpp

AM_CPPFLAGS = $(BOOST_CPPFLAGS) -I$(top_srcdir)/../include
AM_LDFLAGS = $(BOOST_LDFLAGS) -L$(top_srcdir)/../src

comlayer_tests_LDADD = $(BOOST_PROGRAM_OPTIONS_LIB) $(BOOST_ASIO_LIB) -lcomlayer
