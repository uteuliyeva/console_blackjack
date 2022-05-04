# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o Card.o Deck.o Game.o GenericPlayer.o Hand.o House.o Player.o 
	$(CC) $(CFLAGS) -o main main.o Card.o Game.o  Deck.o GenericPlayer.o Hand.o House.o Player.o 
 
# The main.o target can be written more simply
 
main.o: main.cpp Card.h Deck.h Game.h GenericPlayer.h Hand.h House.h Player.h
	$(CC) $(CFLAGS) -c main.cpp

Card.o: Card.h

Deck.o: Deck.h Hand.h GenericPlayer.h

Game.o: Game.h Deck.h GenericPlayer.h House.h Player.h   

GenericPlayer.o: GenericPlayer.h  Hand.h 

Hand.o: Hand.h Card.h 

House.o: House.h GenericPlayer.h 

Player.o: Player.h GenericPLayer.h 
