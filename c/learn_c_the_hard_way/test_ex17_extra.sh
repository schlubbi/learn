#!/bin/bash
set -e

function setup {
	make ex17_extra
}

function tests {
	./ex17_extra db.dat c
	./ex17_extra db.dat s 1 alice alice@example.com
	./ex17_extra db.dat s 2 bob bob@example.com
	./ex17_extra db.dat s 3 klaus klaus@example.com
	./ex17_extra db.dat l
	./ex17_extra db.dat d 3
	./ex17_extra db.dat l
	./ex17_extra db.dat g 1
	./ex17_extra db.dat f bob
}

function cleanup {
	rm db.dat
	make clean
}

function main {
	setup
	tests
	cleanup
}
main
