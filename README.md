CF3
===

"CF3" is a C compiler test suite targeting arithmetic optimization.   

## DESCRIPTION
CF3 consists of 13,720 c source files, each containing 200 test cases.  
### DIRECTORY STRUCTURES
The files are stored in 5 directories (EXP_1~EXP_5).  

    ~/CF3
     |-- exec.pl
     `-- testsuite/
        |--EXP_1/
        |--EXP_2/
        |--EXP_3/
        |--EXP_4/
        `--EXP_5/

## Usage
  
A perl simple script to run all c test programs is included in the package.  

    perl exec.pl

## BIBLIOGRAPHY
Y. Hibino and N. Ishiura: "CF3: Test suite for arithmetic optimization of C compilers," Technical Report of IEICE, VLD2013-133, (Jan. 2015).([pdf](http://ist.ksc.kwansei.ac.jp/~ishiura/publications/T2015-01a.pdf) )(in Japanese)

##AUTHORS
Ishiura Lab. <ishiura-compiler@ml.kwansei.ac.jp>

Mr. Hirofumi Ikeo  
Mr. Yusuke Hibino  

## LICENCE
Copyright (c) 2015 ishiura-lab  
Released under the MIT license  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
