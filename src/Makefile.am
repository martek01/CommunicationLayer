lib_LTLIBRARIES = libcomlayer.la
libcomlayer_la_SOURCES = server.cpp client.cpp httpclient.cpp

AM_CPPFLAGS = $(BOOST_CPPFLAGS)
AM_LDFLAGS = $(BOOST_LDFLAGS)

libcomlayer_la_LIBADD = $(BOOST_PROGRAM_OPTIONS_LIB) $(BOOST_ASIO_LIB)
