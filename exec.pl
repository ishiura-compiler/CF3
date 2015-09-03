#!/usr/bin/perl

use strict;
use warnings;
use File::Spec;
use Time::HiRes;


# my @testfiles = @ARGV;

my $start_time = Time::HiRes::time;

my $compiler = "gcc-4.4";   #target compiler

my $path = File::Spec->rel2abs();

for(my $i = 1; $i < 6; $i++ ) {
	while (my $file = glob("$path/testsuite/EXP_$i/*.c")) {
		system "$compiler $file -O3";
		system "./a.out";
		print $file, "\n";
	}
}
printf("execution time: %0.3f[s]\n", Time::HiRes::time - $start_time);

