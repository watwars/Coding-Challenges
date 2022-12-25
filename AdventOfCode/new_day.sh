#!/bin/bash

year=$1
day=$2

cd $year

rm -rf $day

mkdir $day
cd $day
touch ${day}_solution1.cpp
touch ${day}_solution2.cpp
touch ${day}_example.txt
touch ${day}_input.txt

for i in {1..2};
do 
    echo "#define _USE_MATH_DEFINES" >> ${day}_solution${i}.cpp
    echo "" >> ${day}_solution${i}.cpp
    echo "#include <algorithm>" >> ${day}_solution${i}.cpp
    echo "#include <cmath>" >> ${day}_solution${i}.cpp
    echo "#include <deque>" >> ${day}_solution${i}.cpp
    echo "#include <iomanip>" >> ${day}_solution${i}.cpp
    echo "#include <iostream>" >> ${day}_solution${i}.cpp
    echo "#include <sstream>" >> ${day}_solution${i}.cpp
    echo "#include <string>" >> ${day}_solution${i}.cpp
    echo "#include <unordered_map>" >> ${day}_solution${i}.cpp
    echo "#include <unordered_set>" >> ${day}_solution${i}.cpp
    echo "#include <utility>" >> ${day}_solution${i}.cpp
    echo "#include <vector>" >> ${day}_solution${i}.cpp
    echo "" >> ${day}_solution${i}.cpp
    echo "using namespace std;" >> ${day}_solution${i}.cpp
    echo "" >> ${day}_solution${i}.cpp
    echo "void solve() {}" >> ${day}_solution${i}.cpp
    echo "" >> ${day}_solution${i}.cpp
    echo "int main() {" >> ${day}_solution${i}.cpp
    echo "    solve();" >> ${day}_solution${i}.cpp
    echo "    return 0;" >> ${day}_solution${i}.cpp
    echo "}" >> ${day}_solution${i}.cpp
done


echo $day created under folder $year


