#!/bin/bash
clear

gcc -o anagram anagram.c

echo silent listen| ./anagram
if [ $? -eq 0 ]
then
  echo "Test succeeded"
else
  echo "Test failed"
fi

echo listen silence| ./anagram
if [ $? -eq 0 ]
then
  echo "Test succeeded"
else
  echo "Test failed"
fi
echo "Execution of anagram program has ended successfully"
