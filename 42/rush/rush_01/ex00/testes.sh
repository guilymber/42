#!/bin/bash
if [[ $1 == "1" ]]
then
	echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\" | cat -e"
	./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
elif [[ $1 == "2" ]]
then
	echo "./rush-01 \"3 2 1 2 2 3 3 1 3 2 1 2 2 3 3 1\" | cat -e"
	./rush-01 "3 2 1 2 2 3 3 1 3 2 1 2 2 3 3 1" | cat -e
elif [[ $1 == "3" ]]
then
	echo "./rush-01 \"2 2 1 3 2 2 3 1 2 1 2 3 2 2 3 1\" | cat -e"
	./rush-01 "2 2 1 3 2 2 3 1 2 1 2 3 2 2 3 1" | cat -e
elif [[ $1 == "4" ]]
then
	echo "./rush-01 \"1 3 2 2 3 1 2 2 1 3 2 2 3 1 2 2\" | cat -e"
	./rush-01 "1 3 2 2 3 1 2 2 1 3 2 2 3 1 2 2" | cat -e
elif [[ $1 == "5" ]]
then
	echo "./rush-01 \"4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4\" | cat -e"
	./rush-01 "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4" | cat -e
elif [[ $1 == "6" ]]
then
	echo "./rush-01 \"4 3 2 1 1 -2 2 2 4 3 2 1 1 2 2 2\" | cat -e"
	./rush-01 "4 3 2 1 1 -2 2 2 4 3 2 1 1 2 2 2" | cat -e
elif [[ $1 == "7" ]]
then
	echo "./rush-01 \"4 3 2 1 1 0 2 2 4 3 2 1 1 2 2 2\" | cat -e"
	./rush-01 "4 3 2 1 1 0 2 2 4 3 2 1 1 2 2 2" | cat -e
else
	echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\" | cat -e"
	./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
	echo "./rush-01 \"3 2 1 2 2 3 3 1 3 2 1 2 2 3 3 1\" | cat -e"
	./rush-01 "3 2 1 2 2 3 3 1 3 2 1 2 2 3 3 1" | cat -e
	echo "./rush-01 \"2 2 1 3 2 2 3 1 2 1 2 3 2 2 3 1\" | cat -e"
	./rush-01 "2 2 1 3 2 2 3 1 2 1 2 3 2 2 3 1" | cat -e
	echo "./rush-01 \"1 3 2 2 3 1 2 2 1 3 2 2 3 1 2 2\" | cat -e"
	./rush-01 "1 3 2 2 3 1 2 2 1 3 2 2 3 1 2 2" | cat -e
	echo "./rush-01 \"4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4\" | cat -e"
	./rush-01 "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4" | cat -e
	echo "./rush-01 \"4 3 2 1 1 -2 2 2 4 3 2 1 1 2 2 2\" | cat -e"
	./rush-01 "4 3 2 1 1 -2 2 2 4 3 2 1 1 2 2 2" | cat -e
	echo "./rush-01 \"4 3 2 1 1 0 2 2 4 3 2 1 1 2 2 2\" | cat -e"
	./rush-01 "4 3 2 1 1 0 2 2 4 3 2 1 1 2 2 2" | cat -e
fi
