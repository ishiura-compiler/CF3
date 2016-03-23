
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = -5858970157484490LL;
uint8_t x18 = 3U;
uint8_t x22 = 1U;
volatile uint64_t x23 = UINT64_MAX;
volatile uint8_t x27 = 6U;
static int8_t x42 = 1;
volatile uint8_t x49 = UINT8_MAX;
volatile int8_t x51 = -1;
uint8_t x52 = 109U;
volatile int8_t x53 = INT8_MIN;
uint32_t t13 = 134011565U;
uint8_t x68 = 7U;
int64_t x72 = INT64_MAX;
int8_t x77 = 3;
uint64_t x79 = UINT64_MAX;
volatile uint64_t t18 = 289843599735563256LLU;
int32_t x86 = -1;
uint8_t x87 = 3U;
int8_t x93 = -1;
volatile uint32_t t22 = 260858U;
int32_t x101 = INT32_MAX;
static volatile int16_t x102 = -1;
int64_t x105 = 139596020555005426LL;
int16_t x106 = -1;
uint8_t x108 = UINT8_MAX;
int64_t x111 = INT64_MIN;
uint32_t x124 = UINT32_MAX;
static int64_t t28 = 3999LL;
volatile int64_t t29 = 15182231147LL;
static int64_t x134 = INT64_MAX;
uint64_t x135 = 23051LLU;
int64_t x136 = -1LL;
uint64_t t30 = 4254302487LLU;
int8_t x147 = INT8_MIN;
int8_t x155 = INT8_MIN;
volatile int16_t x158 = -5;
uint64_t x160 = 816607125371LLU;
int8_t x170 = INT8_MIN;
static volatile int8_t x179 = INT8_MAX;
uint16_t x182 = 14889U;
static volatile int32_t t42 = 133949713;
int64_t x185 = -1LL;
uint8_t x193 = 50U;
static int8_t x196 = INT8_MIN;
int32_t t46 = 267;
static uint64_t x227 = 370694808LLU;
static volatile uint64_t t52 = 6281859934LLU;
volatile int32_t x231 = -26;
int64_t x232 = INT64_MIN;
uint8_t x234 = 5U;
volatile int64_t t54 = 1286720478759607LL;
volatile uint16_t x238 = 1U;
uint64_t x239 = UINT64_MAX;
int16_t x246 = 4069;
static int32_t x250 = -1317;
volatile int32_t x251 = 51148;
static uint8_t x256 = UINT8_MAX;
volatile int32_t x258 = -3536;
volatile int32_t x259 = INT32_MIN;
uint16_t x269 = 39U;
int32_t x273 = INT32_MAX;
uint8_t x279 = UINT8_MAX;
int8_t x281 = 6;
uint16_t x291 = 5U;
uint32_t t66 = 174540579U;
int32_t t67 = 6772;
uint32_t x303 = UINT32_MAX;
volatile uint32_t t70 = 11U;
int64_t t71 = 0LL;
volatile uint32_t t74 = 3689U;
uint8_t x333 = 1U;
volatile uint16_t x335 = 27U;
volatile uint16_t x337 = 603U;
static uint64_t x338 = 119988881500LLU;
uint16_t x345 = 1380U;
int16_t x346 = 16;
int16_t x362 = -1;
int64_t t83 = 120427499LL;
int16_t x368 = INT16_MAX;
int8_t x369 = INT8_MAX;
volatile int32_t x374 = INT32_MIN;
int64_t x376 = 1018LL;
int32_t t87 = -2;
int32_t x381 = INT32_MIN;
volatile int32_t t88 = INT32_MIN;
uint64_t t90 = 558285011265470486LLU;
int8_t x403 = INT8_MIN;
int32_t x409 = INT32_MIN;
uint32_t t93 = 61176U;
int8_t x422 = -1;
int32_t x429 = 1337;
int8_t x431 = 1;
volatile int16_t x432 = INT16_MIN;
uint16_t x433 = 2U;
volatile uint64_t x437 = 1798382LLU;
uint64_t x443 = UINT64_MAX;
int64_t x444 = INT64_MIN;
uint8_t x452 = 81U;
int64_t x462 = -1LL;
static uint16_t x467 = 70U;
static volatile int8_t x476 = INT8_MIN;
int64_t t106 = -32391573477529222LL;
int32_t x479 = -1;
int8_t x494 = 5;
int8_t x498 = INT8_MIN;
static uint8_t x503 = 3U;
volatile uint64_t t113 = 52247326125LLU;
int32_t x510 = -1;
volatile int64_t x515 = INT64_MIN;
static volatile int64_t t115 = -1708377LL;
uint8_t x520 = 17U;
volatile int32_t x525 = -1;
volatile uint8_t x527 = 24U;
int16_t x529 = INT16_MIN;
int16_t x530 = INT16_MAX;
static volatile int64_t x531 = -1LL;
int64_t x532 = -75LL;
int32_t x536 = INT32_MIN;
int8_t x541 = INT8_MAX;
volatile int8_t x569 = INT8_MIN;
volatile int64_t t127 = 0LL;
volatile uint32_t t129 = 106U;
volatile int32_t t130 = -1;
int16_t x601 = 7038;
static uint64_t t132 = 563014389023022308LLU;
volatile uint16_t x606 = 22961U;
volatile int64_t t133 = -70317LL;
int64_t x615 = INT64_MIN;
volatile int16_t x617 = -1;
volatile uint8_t x619 = 3U;
static volatile int64_t t137 = 18227940467LL;
uint32_t t138 = 164164U;
volatile int64_t x646 = -1LL;
int32_t x647 = INT32_MIN;
int64_t x665 = INT64_MAX;
int32_t x674 = INT32_MAX;
uint32_t t146 = 196936020U;
int32_t x685 = -1;
volatile uint32_t t149 = UINT32_MAX;
int64_t x690 = -58LL;
int32_t x692 = 2443;
uint32_t x695 = 3101379U;
int32_t x705 = 15753;
static int64_t x707 = -1LL;
int64_t t153 = 0LL;
uint64_t x709 = 82248858456LLU;
uint16_t x711 = UINT16_MAX;
int16_t x714 = INT16_MIN;
uint16_t x715 = UINT16_MAX;
static int64_t t155 = -2LL;
uint64_t x735 = 2968702LLU;
volatile uint8_t x736 = 10U;
static int16_t x738 = INT16_MAX;
volatile int32_t x740 = -2497214;
uint8_t x749 = 22U;
int8_t x750 = INT8_MIN;
static int64_t x760 = INT64_MIN;
int32_t x786 = -10;
volatile int64_t x791 = INT64_MIN;
static volatile uint64_t x796 = UINT64_MAX;
int8_t x798 = 2;
uint8_t x801 = 0U;
volatile uint8_t x807 = 2U;
volatile uint16_t x808 = UINT16_MAX;
static int64_t x813 = -1LL;
int64_t x816 = INT64_MIN;
static uint8_t x821 = UINT8_MAX;
int64_t t183 = 33287909530573405LL;
volatile int64_t x834 = -1LL;
int8_t x836 = -1;
int64_t t184 = -8483579435086LL;
int8_t x851 = INT8_MIN;
uint8_t x854 = UINT8_MAX;
volatile int64_t x860 = 275465298346419LL;
uint32_t t190 = 140566852U;
volatile uint64_t t193 = 57LLU;
static int8_t x877 = INT8_MAX;
int32_t x881 = 496445787;
int8_t x884 = -1;
volatile int16_t x885 = 32;
uint8_t x887 = UINT8_MAX;
volatile uint16_t x896 = UINT16_MAX;
uint64_t t197 = 27225333LLU;
int64_t x900 = -1LL;
int32_t x901 = INT32_MAX;
int64_t x903 = INT64_MIN;
int16_t x904 = 16;


void f0(void) {
    	volatile uint32_t x1 = 12U;
	int32_t x2 = 7968076;
	uint64_t x3 = UINT64_MAX;
	static int16_t x4 = -3;
	volatile uint64_t t0 = 2215393649833922LLU;

    t0 = (x1+(x2*(x3%x4)));

    if (t0 != 15936164LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 1629144617811474816LL;
	int16_t x6 = INT16_MIN;
	int16_t x7 = -1;
	volatile int64_t x8 = 1022465003LL;
	static volatile int64_t t1 = -57LL;

    t1 = (x5+(x6*(x7%x8)));

    if (t1 != 1629144617811507584LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = -1;
	int32_t x11 = INT32_MIN;
	int16_t x12 = INT16_MIN;
	int64_t t2 = 150774881230382588LL;

    t2 = (x9+(x10*(x11%x12)));

    if (t2 != -5858970157484490LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int32_t x14 = -5309;
	int16_t x15 = -3369;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = 8;

    t3 = (x13+(x14*(x15%x16)));

    if (t3 != -2147265979) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x19 = -1;
	int32_t x20 = -1;
	int64_t t4 = INT64_MIN;

    t4 = (x17+(x18*(x19%x20)));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 3U;
	uint8_t x24 = UINT8_MAX;
	volatile uint64_t t5 = 6567495510516925LLU;

    t5 = (x21+(x22*(x23%x24)));

    if (t5 != 3LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	uint64_t x26 = UINT64_MAX;
	uint32_t x28 = 1476419194U;
	uint64_t t6 = 184LLU;

    t6 = (x25+(x26*(x27%x28)));

    if (t6 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MAX;
	volatile int32_t x31 = -353672;
	uint8_t x32 = 73U;
	volatile uint32_t t7 = 13U;

    t7 = (x29+(x30*(x31%x32)));

    if (t7 != 4293001275U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x34 = -56;
	int64_t x35 = INT64_MIN;
	static int16_t x36 = INT16_MIN;
	static volatile int64_t t8 = -71943LL;

    t8 = (x33+(x34*(x35%x36)));

    if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	uint32_t x39 = 819007U;
	static uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = 7669LLU;

    t9 = (x37+(x38*(x39%x40)));

    if (t9 != 104013761LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -679;
	uint64_t x43 = 536466888LLU;
	uint32_t x44 = UINT32_MAX;
	uint64_t t10 = 737369799962322LLU;

    t10 = (x41+(x42*(x43%x44)));

    if (t10 != 536466209LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 63811998U;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = 10068010LLU;
	uint64_t x48 = 818LLU;
	volatile uint64_t t11 = 3LLU;

    t11 = (x45+(x46*(x47%x48)));

    if (t11 != 63811932LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	static int32_t t12 = 45;

    t12 = (x49+(x50*(x51%x52)));

    if (t12 != 33023) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = 5U;
	static int16_t x55 = -1;
	volatile int8_t x56 = INT8_MAX;

    t13 = (x53+(x54*(x55%x56)));

    if (t13 != 4294967163U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MAX;
	uint16_t x59 = UINT16_MAX;
	static int64_t x60 = INT64_MIN;
	volatile uint64_t t14 = 201LLU;

    t14 = (x57+(x58*(x59%x60)));

    if (t14 != 2147385344LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 360971801LLU;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = -108;
	uint64_t t15 = 21076373320LLU;

    t15 = (x65+(x66*(x67%x68)));

    if (t15 != 360971036LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 68255666150941LL;
	uint32_t x70 = 74U;
	int32_t x71 = -62865;
	volatile int64_t t16 = -42474064041798LL;

    t16 = (x69+(x70*(x71%x72)));

    if (t16 != 68255661498931LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	volatile int16_t x74 = -1;
	uint16_t x75 = 17736U;
	int32_t x76 = INT32_MIN;
	int32_t t17 = 19239;

    t17 = (x73+(x74*(x75%x76)));

    if (t17 != -50504) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x78 = INT8_MAX;
	int8_t x80 = -1;

    t18 = (x77+(x78*(x79%x80)));

    if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 1;
	uint32_t x88 = 96U;
	uint32_t t19 = 2U;

    t19 = (x85+(x86*(x87%x88)));

    if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -3;
	uint32_t x90 = 32394U;
	volatile int64_t x91 = INT64_MIN;
	uint64_t x92 = 17955LLU;
	volatile uint64_t t20 = 19355LLU;

    t20 = (x89+(x90*(x91%x92)));

    if (t20 != 132912579LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = -575;
	static uint32_t x95 = 10U;
	uint64_t x96 = 88117LLU;
	uint64_t t21 = 3105LLU;

    t21 = (x93+(x94*(x95%x96)));

    if (t21 != 18446744073709545865LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = UINT16_MAX;
	static volatile int16_t x98 = -1809;
	volatile int16_t x99 = -1;
	uint32_t x100 = 700866625U;

    t22 = (x97+(x98*(x99%x100)));

    if (t22 != 819333878U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x103 = INT8_MAX;
	static uint16_t x104 = 453U;
	volatile int32_t t23 = -2153857;

    t23 = (x101+(x102*(x103%x104)));

    if (t23 != 2147483520) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x107 = -3;
	int64_t t24 = 976444950659297931LL;

    t24 = (x105+(x106*(x107%x108)));

    if (t24 != 139596020555005429LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MIN;
	uint32_t x110 = 13U;
	int16_t x112 = INT16_MAX;
	int64_t t25 = -512LL;

    t25 = (x109+(x110*(x111%x112)));

    if (t25 != -2147483752LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	int16_t x114 = INT16_MIN;
	int64_t x115 = 8LL;
	static uint16_t x116 = UINT16_MAX;
	volatile int64_t t26 = -132096232832284456LL;

    t26 = (x113+(x114*(x115%x116)));

    if (t26 != -262145LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x117 = 2132498309740578LLU;
	int64_t x118 = 37338LL;
	int64_t x119 = -1609202782283476526LL;
	volatile int16_t x120 = INT16_MIN;
	uint64_t t27 = 258274154LLU;

    t27 = (x117+(x118*(x119%x120)));

    if (t27 != 2132497868330742LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = 112U;

    t28 = (x121+(x122*(x123%x124)));

    if (t28 != -9223372036847435888LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -83578595459460397LL;
	volatile uint16_t x126 = 6182U;
	int32_t x127 = 36895;
	static volatile int64_t x128 = 14704257490413438LL;

    t29 = (x125+(x126*(x127%x128)));

    if (t29 != -83578595231375507LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = 59;

    t30 = (x133+(x134*(x135%x136)));

    if (t30 != 9223372036854752816LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = -28LL;
	int32_t x139 = INT32_MIN;
	static int16_t x140 = 247;
	volatile int64_t t31 = -65647235672498831LL;

    t31 = (x137+(x138*(x139%x140)));

    if (t31 != -2147478244LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = -1;
	static volatile uint8_t x142 = 9U;
	uint8_t x143 = UINT8_MAX;
	static int32_t x144 = INT32_MIN;
	static int32_t t32 = -1;

    t32 = (x141+(x142*(x143%x144)));

    if (t32 != 2294) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x145 = 33LLU;
	uint64_t x146 = 10297106111LLU;
	uint16_t x148 = 19U;
	uint64_t t33 = 33376032154LLU;

    t33 = (x145+(x146*(x147%x148)));

    if (t33 != 18446743929550066095LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = 819;
	int8_t x150 = -1;
	int8_t x151 = -1;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t34 = -1;

    t34 = (x149+(x150*(x151%x152)));

    if (t34 != 820) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = -1;
	int64_t x156 = INT64_MAX;
	volatile int64_t t35 = -2710156835510LL;

    t35 = (x153+(x154*(x155%x156)));

    if (t35 != -32640LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = -37;
	int64_t x159 = INT64_MAX;
	volatile uint64_t t36 = 4653LLU;

    t36 = (x157+(x158*(x159%x160)));

    if (t36 != 18446742369784930084LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x161 = 23U;
	int16_t x162 = 3950;
	uint64_t x163 = 6678863528056LLU;
	int32_t x164 = INT32_MIN;
	volatile uint64_t t37 = 1525689603LLU;

    t37 = (x161+(x162*(x163%x164)));

    if (t37 != 26381510935821223LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = 13100;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 102898041U;
	static int64_t t38 = 3219879LL;

    t38 = (x165+(x166*(x167%x168)));

    if (t38 != -9223372036182692780LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MAX;
	uint32_t x171 = 98621230U;
	volatile uint8_t x172 = 111U;
	static volatile uint32_t t39 = 29726U;

    t39 = (x169+(x170*(x171%x172)));

    if (t39 != 2147475839U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -1;
	uint16_t x174 = 2U;
	int32_t x175 = INT32_MIN;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t40 = -733761;

    t40 = (x173+(x174*(x175%x176)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x177 = -1;
	int16_t x178 = -1;
	uint32_t x180 = 652066731U;
	volatile uint32_t t41 = 60U;

    t41 = (x177+(x178*(x179%x180)));

    if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	static uint8_t x184 = UINT8_MAX;

    t42 = (x181+(x182*(x183%x184)));

    if (t42 != 1890775) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x186 = -321LL;
	static uint16_t x187 = UINT16_MAX;
	volatile int32_t x188 = INT32_MIN;
	int64_t t43 = -776523254492LL;

    t43 = (x185+(x186*(x187%x188)));

    if (t43 != -21036736LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	static int8_t x190 = -1;
	volatile int64_t x191 = -1LL;
	int16_t x192 = INT16_MIN;
	int64_t t44 = 332513528627148LL;

    t44 = (x189+(x190*(x191%x192)));

    if (t44 != -127LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x194 = -1LL;
	int8_t x195 = 0;
	static int64_t t45 = -6622360155LL;

    t45 = (x193+(x194*(x195%x196)));

    if (t45 != 50LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x197 = INT16_MAX;
	static int32_t x198 = INT32_MAX;
	uint8_t x199 = 0U;
	volatile uint16_t x200 = UINT16_MAX;

    t46 = (x197+(x198*(x199%x200)));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x201 = INT8_MAX;
	volatile uint16_t x202 = 235U;
	static int32_t x203 = 8;
	static int16_t x204 = INT16_MAX;
	volatile int32_t t47 = -357170;

    t47 = (x201+(x202*(x203%x204)));

    if (t47 != 2007) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = 9654;
	uint16_t x206 = 156U;
	int32_t x207 = INT32_MIN;
	int64_t x208 = 143158218746936615LL;
	static int64_t t48 = 1218686256443384135LL;

    t48 = (x205+(x206*(x207%x208)));

    if (t48 != -335007439434LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x209 = UINT64_MAX;
	volatile int8_t x210 = INT8_MIN;
	volatile uint32_t x211 = 1694418U;
	volatile int16_t x212 = INT16_MIN;
	uint64_t t49 = 13966747178961301LLU;

    t49 = (x209+(x210*(x211%x212)));

    if (t49 != 4078081791LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = -29LL;
	int8_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MIN;
	int64_t t50 = -33675580957LL;

    t50 = (x217+(x218*(x219%x220)));

    if (t50 != -65564LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x221 = -1LL;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 90U;
	int8_t x224 = INT8_MIN;
	static volatile int64_t t51 = 8108026337940066LL;

    t51 = (x221+(x222*(x223%x224)));

    if (t51 != 4294955775LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = -1LL;
	int32_t x226 = -1067037374;
	static int64_t x228 = -606706172LL;

    t52 = (x225+(x226*(x227%x228)));

    if (t52 != 18051198859225797423LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x229 = INT8_MAX;
	int32_t x230 = INT32_MAX;
	volatile int64_t t53 = 962624706037710084LL;

    t53 = (x229+(x230*(x231%x232)));

    if (t53 != -55834574695LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x233 = 16821658625980126LL;
	int64_t x235 = -32135028LL;
	int16_t x236 = INT16_MAX;

    t54 = (x233+(x234*(x235%x236)));

    if (t54 != 16821658625863286LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -1;
	volatile int64_t x240 = INT64_MAX;
	volatile uint64_t t55 = 4325LLU;

    t55 = (x237+(x238*(x239%x240)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x241 = UINT8_MAX;
	static uint16_t x242 = 12U;
	static volatile int8_t x243 = 1;
	static uint32_t x244 = 307888213U;
	uint32_t t56 = 34567U;

    t56 = (x241+(x242*(x243%x244)));

    if (t56 != 267U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x245 = UINT64_MAX;
	uint32_t x247 = UINT32_MAX;
	static uint64_t x248 = 56075660887731902LLU;
	volatile uint64_t t57 = 31646705188LLU;

    t57 = (x245+(x246*(x247%x248)));

    if (t57 != 17476221923354LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x249 = 23U;
	static int8_t x252 = INT8_MIN;
	int32_t t58 = 184798435;

    t58 = (x249+(x250*(x251%x252)));

    if (t58 != -100069) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x253 = UINT8_MAX;
	static uint32_t x254 = 862226391U;
	int16_t x255 = -1;
	uint32_t t59 = 4U;

    t59 = (x253+(x254*(x255%x256)));

    if (t59 != 3432741160U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = INT8_MAX;
	int16_t x260 = 13266;
	int32_t t60 = -105567;

    t60 = (x257+(x258*(x259%x260)));

    if (t60 != 35713727) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x265 = 2326990LLU;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t61 = 7LLU;

    t61 = (x265+(x266*(x267%x268)));

    if (t61 != 18446744073703522766LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x270 = -1;
	static uint32_t x271 = 11077436U;
	uint16_t x272 = UINT16_MAX;
	static volatile uint32_t t62 = 3309U;

    t62 = (x269+(x270*(x271%x272)));

    if (t62 != 4294965314U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x274 = INT32_MIN;
	uint8_t x275 = 0U;
	int32_t x276 = -4383351;
	volatile int32_t t63 = INT32_MAX;

    t63 = (x273+(x274*(x275%x276)));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x280 = -1LL;
	static int64_t t64 = -517147780LL;

    t64 = (x277+(x278*(x279%x280)));

    if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x282 = 2560LLU;
	uint32_t x283 = UINT32_MAX;
	static int64_t x284 = -595856562476135LL;
	uint64_t t65 = 1LLU;

    t65 = (x281+(x282*(x283%x284)));

    if (t65 != 10995116275206LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x289 = 16369U;
	int16_t x290 = INT16_MIN;
	static int8_t x292 = -1;

    t66 = (x289+(x290*(x291%x292)));

    if (t66 != 16369U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;

    t67 = (x293+(x294*(x295%x296)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = 440837;
	int32_t x299 = 8105031;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t68 = 1501LLU;

    t68 = (x297+(x298*(x299%x300)));

    if (t68 != 3570850067299LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x301 = 3595;
	static uint32_t x302 = UINT32_MAX;
	volatile int32_t x304 = -1;
	volatile uint32_t t69 = 1763U;

    t69 = (x301+(x302*(x303%x304)));

    if (t69 != 3595U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x305 = INT8_MIN;
	static int8_t x306 = -1;
	int16_t x307 = INT16_MAX;
	uint32_t x308 = UINT32_MAX;

    t70 = (x305+(x306*(x307%x308)));

    if (t70 != 4294934401U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x309 = 39U;
	uint32_t x310 = 34U;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;

    t71 = (x309+(x310*(x311%x312)));

    if (t71 != -4313LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x313 = 11512;
	volatile uint8_t x314 = 3U;
	volatile uint64_t x315 = 13502641970LLU;
	uint8_t x316 = 41U;
	static volatile uint64_t t72 = 1LLU;

    t72 = (x313+(x314*(x315%x316)));

    if (t72 != 11632LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = 8;
	static uint16_t x318 = 5775U;
	static uint64_t x319 = 3944LLU;
	uint8_t x320 = UINT8_MAX;
	uint64_t t73 = 142614982111588LLU;

    t73 = (x317+(x318*(x319%x320)));

    if (t73 != 687233LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x321 = -1;
	static uint32_t x322 = 27010U;
	int16_t x323 = 1;
	int8_t x324 = INT8_MAX;

    t74 = (x321+(x322*(x323%x324)));

    if (t74 != 27009U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = 2093LL;
	static int32_t x326 = -28;
	int32_t x327 = -1;
	static uint64_t x328 = 466985117452073092LLU;
	uint64_t t75 = 41250723LLU;

    t75 = (x325+(x326*(x327%x328)));

    if (t75 != 11885658267505924953LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x334 = 0LLU;
	volatile int8_t x336 = INT8_MAX;
	volatile uint64_t t76 = 1939155815744LLU;

    t76 = (x333+(x334*(x335%x336)));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x339 = -1LL;
	volatile int64_t x340 = -1LL;
	uint64_t t77 = 31037535LLU;

    t77 = (x337+(x338*(x339%x340)));

    if (t77 != 603LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x341 = INT16_MIN;
	int16_t x342 = -10314;
	uint64_t x343 = UINT64_MAX;
	volatile int8_t x344 = -9;
	uint64_t t78 = 186LLU;

    t78 = (x341+(x342*(x343%x344)));

    if (t78 != 18446744073709436336LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x347 = 485980901;
	int8_t x348 = INT8_MIN;
	volatile int32_t t79 = -38224497;

    t79 = (x345+(x346*(x347%x348)));

    if (t79 != 2996) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x349 = 34352965473LLU;
	uint64_t x350 = 1LLU;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 1U;
	volatile uint64_t t80 = 1LLU;

    t80 = (x349+(x350*(x351%x352)));

    if (t80 != 34352965473LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = 0;
	static int64_t x354 = -10645269LL;
	static int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MAX;
	int64_t t81 = -7119166660922LL;

    t81 = (x353+(x354*(x355%x356)));

    if (t81 != -1351949163LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x357 = INT16_MIN;
	static volatile int16_t x358 = -1;
	static uint16_t x359 = 161U;
	uint64_t x360 = 290713444LLU;
	uint64_t t82 = 9544LLU;

    t82 = (x357+(x358*(x359%x360)));

    if (t82 != 18446744073709518687LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x361 = INT8_MIN;
	static volatile int64_t x363 = -1542246655314342669LL;
	uint16_t x364 = UINT16_MAX;

    t83 = (x361+(x362*(x363%x364)));

    if (t83 != 24361LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = 16963;
	static uint64_t x366 = UINT64_MAX;
	int32_t x367 = -1;
	volatile uint64_t t84 = 521833LLU;

    t84 = (x365+(x366*(x367%x368)));

    if (t84 != 16964LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x370 = -6579483LL;
	int64_t x371 = -1LL;
	uint64_t x372 = 104608114705LLU;
	uint64_t t85 = 24440355014438793LLU;

    t85 = (x369+(x370*(x371%x372)));

    if (t85 != 18051538235842595573LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = 370U;
	int64_t x375 = INT64_MIN;
	volatile int64_t t86 = -359LL;

    t86 = (x373+(x374*(x375%x376)));

    if (t86 != 1417339208050LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x377 = 11;
	volatile int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 380U;

    t87 = (x377+(x378*(x379%x380)));

    if (t87 != -4194165) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x382 = 0U;
	int16_t x383 = INT16_MIN;
	int32_t x384 = -13;

    t88 = (x381+(x382*(x383%x384)));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x385 = 2LLU;
	int64_t x386 = INT64_MAX;
	volatile uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t89 = 2LLU;

    t89 = (x385+(x386*(x387%x388)));

    if (t89 != 9223372036854775683LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;

    t90 = (x389+(x390*(x391%x392)));

    if (t90 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x393 = INT32_MIN;
	int64_t x394 = -1LL;
	int64_t x395 = INT64_MIN;
	static volatile uint16_t x396 = 1U;
	volatile int64_t t91 = -48LL;

    t91 = (x393+(x394*(x395%x396)));

    if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x401 = 107U;
	volatile int64_t x402 = -2LL;
	uint16_t x404 = UINT16_MAX;
	int64_t t92 = 21038801258605548LL;

    t92 = (x401+(x402*(x403%x404)));

    if (t92 != 363LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x410 = 155396036U;
	volatile int32_t x411 = INT32_MIN;
	uint8_t x412 = UINT8_MAX;

    t93 = (x409+(x410*(x411%x412)));

    if (t93 != 3731627520U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x421 = 6828LLU;
	uint16_t x423 = 5U;
	volatile uint16_t x424 = 58U;
	uint64_t t94 = 32717293832LLU;

    t94 = (x421+(x422*(x423%x424)));

    if (t94 != 6823LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x425 = 13858U;
	int32_t x426 = -1;
	static volatile int32_t x427 = INT32_MAX;
	static volatile int16_t x428 = INT16_MIN;
	static int32_t t95 = -14780884;

    t95 = (x425+(x426*(x427%x428)));

    if (t95 != -18909) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x430 = -1LL;
	static volatile int64_t t96 = 16903220787LL;

    t96 = (x429+(x430*(x431%x432)));

    if (t96 != 1336LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x434 = -1758;
	volatile int16_t x435 = INT16_MIN;
	volatile int16_t x436 = -3;
	volatile int32_t t97 = 12111;

    t97 = (x433+(x434*(x435%x436)));

    if (t97 != 3518) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x438 = 51378939699LLU;
	int16_t x439 = INT16_MIN;
	int8_t x440 = -1;
	volatile uint64_t t98 = 85543959LLU;

    t98 = (x437+(x438*(x439%x440)));

    if (t98 != 1798382LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x441 = 170;
	volatile uint32_t x442 = 480U;
	static uint64_t t99 = 71467392876189529LLU;

    t99 = (x441+(x442*(x443%x444)));

    if (t99 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x445 = INT16_MIN;
	int8_t x446 = 3;
	int32_t x447 = -1;
	int16_t x448 = INT16_MIN;
	static int32_t t100 = 1;

    t100 = (x445+(x446*(x447%x448)));

    if (t100 != -32771) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x449 = -1;
	int8_t x450 = INT8_MAX;
	static volatile int64_t x451 = -1LL;
	int64_t t101 = 17875LL;

    t101 = (x449+(x450*(x451%x452)));

    if (t101 != -128LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x453 = -1;
	uint64_t x454 = 2030LLU;
	uint64_t x455 = 134078LLU;
	static int16_t x456 = 239;
	volatile uint64_t t102 = 12839757LLU;

    t102 = (x453+(x454*(x455%x456)));

    if (t102 != 483139LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x461 = -348753595713LL;
	uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MAX;
	int64_t t103 = 402LL;

    t103 = (x461+(x462*(x463%x464)));

    if (t103 != -348753595714LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x465 = INT16_MAX;
	int8_t x466 = INT8_MIN;
	int32_t x468 = INT32_MIN;
	volatile int32_t t104 = -9818225;

    t104 = (x465+(x466*(x467%x468)));

    if (t104 != 23807) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x469 = INT32_MAX;
	volatile int8_t x470 = INT8_MAX;
	int64_t x471 = INT64_MIN;
	int8_t x472 = -42;
	int64_t t105 = -279983728844939LL;

    t105 = (x469+(x470*(x471%x472)));

    if (t105 != 2147482631LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = INT16_MIN;
	volatile uint16_t x474 = UINT16_MAX;
	volatile int64_t x475 = -1LL;

    t106 = (x473+(x474*(x475%x476)));

    if (t106 != -98303LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x477 = INT8_MAX;
	int8_t x478 = -32;
	uint64_t x480 = 275LLU;
	static volatile uint64_t t107 = 517041836563776442LLU;

    t107 = (x477+(x478*(x479%x480)));

    if (t107 != 18446744073709551263LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x485 = 0U;
	uint8_t x486 = 46U;
	uint64_t x487 = UINT64_MAX;
	int32_t x488 = -1;
	volatile uint64_t t108 = 3824394051671811LLU;

    t108 = (x485+(x486*(x487%x488)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	static int32_t x492 = INT32_MAX;
	static int64_t t109 = 945LL;

    t109 = (x489+(x490*(x491%x492)));

    if (t109 != 383LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x493 = INT16_MAX;
	int32_t x495 = -42293;
	static int16_t x496 = INT16_MIN;
	int32_t t110 = 757091387;

    t110 = (x493+(x494*(x495%x496)));

    if (t110 != -14858) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x497 = -1;
	static uint64_t x499 = 4346907257LLU;
	int16_t x500 = INT16_MAX;
	static volatile uint64_t t111 = 6164349456140827LLU;

    t111 = (x497+(x498*(x499%x500)));

    if (t111 != 18446744073709005055LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = -1;
	uint32_t x502 = 6989U;
	uint8_t x504 = UINT8_MAX;
	uint32_t t112 = 1983U;

    t112 = (x501+(x502*(x503%x504)));

    if (t112 != 20966U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x505 = 0U;
	volatile uint64_t x506 = 22118962565631LLU;
	int64_t x507 = INT64_MIN;
	int16_t x508 = 2;

    t113 = (x505+(x506*(x507%x508)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x509 = -1LL;
	int16_t x511 = -2;
	uint16_t x512 = UINT16_MAX;
	int64_t t114 = -141573491744971LL;

    t114 = (x509+(x510*(x511%x512)));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x513 = -1;
	static uint16_t x514 = UINT16_MAX;
	uint32_t x516 = 3U;

    t115 = (x513+(x514*(x515%x516)));

    if (t115 != -131071LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x517 = 3;
	int64_t x518 = -23LL;
	uint64_t x519 = UINT64_MAX;
	volatile uint64_t t116 = 2947960207LLU;

    t116 = (x517+(x518*(x519%x520)));

    if (t116 != 3LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x521 = -1;
	static int16_t x522 = INT16_MIN;
	uint16_t x523 = UINT16_MAX;
	volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t117 = 5;

    t117 = (x521+(x522*(x523%x524)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x526 = -1;
	int8_t x528 = -43;
	volatile int32_t t118 = -121693074;

    t118 = (x525+(x526*(x527%x528)));

    if (t118 != -25) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t t119 = -335189LL;

    t119 = (x529+(x530*(x531%x532)));

    if (t119 != -65535LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x533 = UINT16_MAX;
	uint64_t x534 = UINT64_MAX;
	int64_t x535 = -416243LL;
	uint64_t t120 = 20LLU;

    t120 = (x533+(x534*(x535%x536)));

    if (t120 != 481778LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = -4;
	uint16_t x538 = 200U;
	static uint32_t x539 = 1068U;
	volatile int32_t x540 = -1;
	static volatile uint32_t t121 = 55U;

    t121 = (x537+(x538*(x539%x540)));

    if (t121 != 213596U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x542 = 0U;
	static uint8_t x543 = UINT8_MAX;
	uint64_t x544 = UINT64_MAX;
	volatile uint64_t t122 = 714587244LLU;

    t122 = (x541+(x542*(x543%x544)));

    if (t122 != 127LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x545 = -1;
	int8_t x546 = -1;
	int16_t x547 = INT16_MAX;
	volatile uint32_t x548 = 878U;
	static volatile uint32_t t123 = 17093U;

    t123 = (x545+(x546*(x547%x548)));

    if (t123 != 4294967014U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x562 = UINT64_MAX;
	static int16_t x563 = INT16_MIN;
	uint8_t x564 = 1U;
	static volatile uint64_t t124 = 1LLU;

    t124 = (x561+(x562*(x563%x564)));

    if (t124 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x565 = UINT16_MAX;
	static int32_t x566 = -3;
	int16_t x567 = INT16_MIN;
	int64_t x568 = INT64_MAX;
	int64_t t125 = -34035647436136834LL;

    t125 = (x565+(x566*(x567%x568)));

    if (t125 != 163839LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x570 = 3821U;
	int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MAX;
	int64_t t126 = 13740143782945LL;

    t126 = (x569+(x570*(x571%x572)));

    if (t126 != -125206656LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x573 = -1LL;
	static volatile uint16_t x574 = 1U;
	int16_t x575 = INT16_MIN;
	int32_t x576 = INT32_MAX;

    t127 = (x573+(x574*(x575%x576)));

    if (t127 != -32769LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x581 = INT64_MAX;
	volatile uint16_t x582 = UINT16_MAX;
	int32_t x583 = INT32_MIN;
	int8_t x584 = -4;
	static int64_t t128 = INT64_MAX;

    t128 = (x581+(x582*(x583%x584)));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x585 = 3U;
	uint8_t x586 = UINT8_MAX;
	uint32_t x587 = 0U;
	static int16_t x588 = INT16_MIN;

    t129 = (x585+(x586*(x587%x588)));

    if (t129 != 3U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x593 = -220;
	int16_t x594 = -18;
	static int32_t x595 = INT32_MAX;
	int8_t x596 = -31;

    t130 = (x593+(x594*(x595%x596)));

    if (t130 != -238) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x597 = -3477LL;
	static uint32_t x598 = UINT32_MAX;
	int8_t x599 = 13;
	int8_t x600 = -1;
	int64_t t131 = 111LL;

    t131 = (x597+(x598*(x599%x600)));

    if (t131 != -3477LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x602 = -1;
	static uint64_t x603 = 2582824712LLU;
	int16_t x604 = INT16_MIN;

    t132 = (x601+(x602*(x603%x604)));

    if (t132 != 18446744071126733942LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x605 = 471773344117349LL;
	int32_t x607 = 14102380;
	int8_t x608 = INT8_MIN;

    t133 = (x605+(x606*(x607%x608)));

    if (t133 != 471773346597137LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x609 = 98U;
	static int16_t x610 = INT16_MIN;
	int8_t x611 = -1;
	uint32_t x612 = UINT32_MAX;
	uint32_t t134 = 219333982U;

    t134 = (x609+(x610*(x611%x612)));

    if (t134 != 98U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x613 = INT16_MAX;
	int32_t x614 = INT32_MAX;
	static int32_t x616 = -1;
	volatile int64_t t135 = 4227306LL;

    t135 = (x613+(x614*(x615%x616)));

    if (t135 != 32767LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x618 = INT16_MIN;
	int32_t x620 = INT32_MIN;
	int32_t t136 = -88866;

    t136 = (x617+(x618*(x619%x620)));

    if (t136 != -98305) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x621 = 0U;
	int16_t x622 = 48;
	int64_t x623 = -35103127154416365LL;
	static int32_t x624 = -11540994;

    t137 = (x621+(x622*(x623%x624)));

    if (t137 != -512114544LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x629 = INT8_MIN;
	static int32_t x630 = INT32_MIN;
	static uint32_t x631 = 24U;
	int32_t x632 = INT32_MIN;

    t138 = (x629+(x630*(x631%x632)));

    if (t138 != 4294967168U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x633 = INT16_MIN;
	uint64_t x634 = 1062LLU;
	int64_t x635 = -1LL;
	static int64_t x636 = 315371799245LL;
	uint64_t t139 = 6425597000LLU;

    t139 = (x633+(x634*(x635%x636)));

    if (t139 != 18446744073709517786LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x641 = INT16_MIN;
	volatile int64_t x642 = 1952LL;
	uint64_t x643 = 1309092592LLU;
	int8_t x644 = 3;
	uint64_t t140 = 1LLU;

    t140 = (x641+(x642*(x643%x644)));

    if (t140 != 18446744073709520800LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x645 = INT8_MIN;
	uint64_t x648 = UINT64_MAX;
	uint64_t t141 = 39634716707684LLU;

    t141 = (x645+(x646*(x647%x648)));

    if (t141 != 2147483520LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x649 = INT16_MIN;
	uint64_t x650 = UINT64_MAX;
	static uint16_t x651 = UINT16_MAX;
	int16_t x652 = -1;
	static volatile uint64_t t142 = 7576565612416139794LLU;

    t142 = (x649+(x650*(x651%x652)));

    if (t142 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x661 = INT16_MIN;
	static uint16_t x662 = 3U;
	int32_t x663 = -24;
	static uint32_t x664 = 11136656U;
	static volatile uint32_t t143 = 1U;

    t143 = (x661+(x662*(x663%x664)));

    if (t143 != 22031368U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x666 = 17U;
	uint32_t x667 = 2569806U;
	uint8_t x668 = 1U;
	volatile int64_t t144 = INT64_MAX;

    t144 = (x665+(x666*(x667%x668)));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x669 = 797972LLU;
	uint32_t x670 = UINT32_MAX;
	int64_t x671 = -1LL;
	int64_t x672 = 150742078282415LL;
	uint64_t t145 = 78063769453LLU;

    t145 = (x669+(x670*(x671%x672)));

    if (t145 != 18446744069415382293LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x673 = 795U;
	int32_t x675 = INT32_MIN;
	int32_t x676 = INT32_MIN;

    t146 = (x673+(x674*(x675%x676)));

    if (t146 != 795U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x677 = -891190;
	static int16_t x678 = -1;
	static uint8_t x679 = UINT8_MAX;
	volatile uint64_t x680 = 555404786773LLU;
	volatile uint64_t t147 = 1789989415105568221LLU;

    t147 = (x677+(x678*(x679%x680)));

    if (t147 != 18446744073708660171LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MIN;
	int16_t x683 = INT16_MIN;
	uint32_t x684 = UINT32_MAX;
	volatile uint32_t t148 = 12U;

    t148 = (x681+(x682*(x683%x684)));

    if (t148 != 3221225472U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x686 = UINT32_MAX;
	volatile int16_t x687 = 2;
	int16_t x688 = 1;

    t149 = (x685+(x686*(x687%x688)));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x689 = INT8_MIN;
	static int16_t x691 = 2305;
	volatile int64_t t150 = 1180633479490912LL;

    t150 = (x689+(x690*(x691%x692)));

    if (t150 != -133818LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x693 = INT32_MIN;
	uint32_t x694 = 52467U;
	int8_t x696 = INT8_MIN;
	uint32_t t151 = 1U;

    t151 = (x693+(x694*(x695%x696)));

    if (t151 != 1658778393U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x701 = -26;
	uint32_t x702 = 56U;
	static uint16_t x703 = 0U;
	uint8_t x704 = 115U;
	uint32_t t152 = 410151U;

    t152 = (x701+(x702*(x703%x704)));

    if (t152 != 4294967270U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x706 = INT16_MAX;
	int32_t x708 = INT32_MIN;

    t153 = (x705+(x706*(x707%x708)));

    if (t153 != -17014LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x710 = INT8_MIN;
	int32_t x712 = 2539706;
	static volatile uint64_t t154 = 276LLU;

    t154 = (x709+(x710*(x711%x712)));

    if (t154 != 82240469976LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x713 = 3270LL;
	int32_t x716 = -18;

    t155 = (x713+(x714*(x715%x716)));

    if (t155 != -488250LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x717 = INT32_MIN;
	int64_t x718 = -1LL;
	int32_t x719 = INT32_MIN;
	int16_t x720 = -1;
	static int64_t t156 = 28323LL;

    t156 = (x717+(x718*(x719%x720)));

    if (t156 != -2147483648LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x721 = 4101631046147LLU;
	volatile int16_t x722 = 12;
	volatile int64_t x723 = -1LL;
	int16_t x724 = -3;
	volatile uint64_t t157 = 4913159058LLU;

    t157 = (x721+(x722*(x723%x724)));

    if (t157 != 4101631046135LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x725 = UINT8_MAX;
	int32_t x726 = -803951;
	int8_t x727 = INT8_MIN;
	int64_t x728 = -1LL;
	int64_t t158 = 496910029268487LL;

    t158 = (x725+(x726*(x727%x728)));

    if (t158 != 255LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x729 = INT16_MIN;
	volatile int8_t x730 = 0;
	int8_t x731 = INT8_MAX;
	uint32_t x732 = UINT32_MAX;
	volatile uint32_t t159 = 473U;

    t159 = (x729+(x730*(x731%x732)));

    if (t159 != 4294934528U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x733 = INT32_MAX;
	uint64_t x734 = 284474528LLU;
	uint64_t t160 = 4183511666LLU;

    t160 = (x733+(x734*(x735%x736)));

    if (t160 != 2716432703LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x737 = 15990433366752570LL;
	uint8_t x739 = UINT8_MAX;
	int64_t t161 = -1LL;

    t161 = (x737+(x738*(x739%x740)));

    if (t161 != 15990433375108155LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x741 = 799343;
	int64_t x742 = 469741256LL;
	int32_t x743 = INT32_MIN;
	int8_t x744 = INT8_MIN;
	static int64_t t162 = -1296442253306901063LL;

    t162 = (x741+(x742*(x743%x744)));

    if (t162 != 799343LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x745 = 77759765638LLU;
	uint32_t x746 = 740436872U;
	static int32_t x747 = 20823;
	volatile uint64_t x748 = UINT64_MAX;
	uint64_t t163 = 12LLU;

    t163 = (x745+(x746*(x747%x748)));

    if (t163 != 15495876751294LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x751 = INT16_MIN;
	int16_t x752 = -1;
	int32_t t164 = 1;

    t164 = (x749+(x750*(x751%x752)));

    if (t164 != 22) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x753 = 236948158LLU;
	uint8_t x754 = 34U;
	int8_t x755 = -1;
	volatile uint64_t x756 = UINT64_MAX;
	uint64_t t165 = 0LLU;

    t165 = (x753+(x754*(x755%x756)));

    if (t165 != 236948158LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x757 = -1;
	static uint8_t x758 = 53U;
	int64_t x759 = INT64_MIN;
	int64_t t166 = -2113543235LL;

    t166 = (x757+(x758*(x759%x760)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x761 = 6U;
	int16_t x762 = INT16_MIN;
	uint16_t x763 = UINT16_MAX;
	uint8_t x764 = 2U;
	volatile int32_t t167 = -537518;

    t167 = (x761+(x762*(x763%x764)));

    if (t167 != -32762) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x765 = 5;
	int64_t x766 = 338527877LL;
	uint8_t x767 = 29U;
	int8_t x768 = 8;
	int64_t t168 = -6430359LL;

    t168 = (x765+(x766*(x767%x768)));

    if (t168 != 1692639390LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x769 = 3695896LLU;
	uint32_t x770 = 199249U;
	int32_t x771 = -14570548;
	static int16_t x772 = -1;
	uint64_t t169 = 226374634098LLU;

    t169 = (x769+(x770*(x771%x772)));

    if (t169 != 3695896LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x773 = 22LL;
	int8_t x774 = -1;
	uint64_t x775 = 301234LLU;
	static uint8_t x776 = UINT8_MAX;
	uint64_t t170 = 13412191428562044LLU;

    t170 = (x773+(x774*(x775%x776)));

    if (t170 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x777 = UINT32_MAX;
	static int64_t x778 = 27245224210616355LL;
	static uint8_t x779 = 19U;
	uint16_t x780 = 55U;
	int64_t t171 = 13LL;

    t171 = (x777+(x778*(x779%x780)));

    if (t171 != 517659264296678040LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x785 = 1;
	int8_t x787 = INT8_MAX;
	int16_t x788 = -1;
	static int32_t t172 = -86;

    t172 = (x785+(x786*(x787%x788)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x789 = INT32_MIN;
	int32_t x790 = 3336429;
	int16_t x792 = INT16_MAX;
	volatile int64_t t173 = -741344LL;

    t173 = (x789+(x790*(x791%x792)));

    if (t173 != -2174175080LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x793 = 64509130U;
	int64_t x794 = INT64_MIN;
	int16_t x795 = -1;
	volatile uint64_t t174 = 41LLU;

    t174 = (x793+(x794*(x795%x796)));

    if (t174 != 64509130LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x799 = INT64_MAX;
	volatile int8_t x800 = -1;
	uint64_t t175 = UINT64_MAX;

    t175 = (x797+(x798*(x799%x800)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x802 = INT16_MIN;
	volatile int16_t x803 = INT16_MIN;
	uint16_t x804 = 705U;
	volatile int32_t t176 = -16;

    t176 = (x801+(x802*(x803%x804)));

    if (t176 != 11075584) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x805 = INT8_MIN;
	static volatile uint64_t x806 = 10024168LLU;
	volatile uint64_t t177 = 3895LLU;

    t177 = (x805+(x806*(x807%x808)));

    if (t177 != 20048208LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x809 = 60250U;
	int64_t x810 = -191280173LL;
	int8_t x811 = -1;
	static int64_t x812 = 6019704764325675LL;
	int64_t t178 = 2709087482160LL;

    t178 = (x809+(x810*(x811%x812)));

    if (t178 != 191340423LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x814 = INT8_MIN;
	static int8_t x815 = -1;
	volatile int64_t t179 = 2924506231LL;

    t179 = (x813+(x814*(x815%x816)));

    if (t179 != 127LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x817 = 1234779891360LL;
	int16_t x818 = INT16_MIN;
	uint8_t x819 = 0U;
	int8_t x820 = -1;
	static volatile int64_t t180 = -3882600061735120LL;

    t180 = (x817+(x818*(x819%x820)));

    if (t180 != 1234779891360LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x822 = 2;
	int64_t x823 = -1LL;
	int32_t x824 = INT32_MAX;
	int64_t t181 = -1LL;

    t181 = (x821+(x822*(x823%x824)));

    if (t181 != 253LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x825 = 133031375LLU;
	int64_t x826 = -64270216992825950LL;
	static volatile int16_t x827 = -45;
	uint16_t x828 = 31U;
	volatile uint64_t t182 = 10856316569021LLU;

    t182 = (x825+(x826*(x827%x828)));

    if (t182 != 899783038032594675LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x829 = -1LL;
	volatile uint8_t x830 = 1U;
	int16_t x831 = 1149;
	uint16_t x832 = 176U;

    t183 = (x829+(x830*(x831%x832)));

    if (t183 != 92LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x833 = -1;
	int8_t x835 = 2;

    t184 = (x833+(x834*(x835%x836)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MAX;
	uint64_t x839 = UINT64_MAX;
	int8_t x840 = -1;
	volatile uint64_t t185 = 590441732374265LLU;

    t185 = (x837+(x838*(x839%x840)));

    if (t185 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = INT16_MIN;
	uint16_t x842 = 30374U;
	static uint32_t x843 = 3824148U;
	uint32_t x844 = 18820459U;
	volatile uint32_t t186 = 492162U;

    t186 = (x841+(x842*(x843%x844)));

    if (t186 != 190521592U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = INT16_MIN;
	uint64_t x850 = 1LLU;
	int32_t x852 = INT32_MIN;
	uint64_t t187 = 6089LLU;

    t187 = (x849+(x850*(x851%x852)));

    if (t187 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x853 = -1581;
	static int32_t x855 = INT32_MIN;
	int64_t x856 = INT64_MAX;
	int64_t t188 = 1LL;

    t188 = (x853+(x854*(x855%x856)));

    if (t188 != -547608331821LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x857 = INT16_MIN;
	int8_t x858 = -1;
	static uint16_t x859 = UINT16_MAX;
	int64_t t189 = -4817LL;

    t189 = (x857+(x858*(x859%x860)));

    if (t189 != -98303LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x861 = 41545531U;
	uint16_t x862 = 1U;
	static uint16_t x863 = UINT16_MAX;
	static volatile int32_t x864 = INT32_MIN;

    t190 = (x861+(x862*(x863%x864)));

    if (t190 != 41611066U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x865 = INT32_MAX;
	uint64_t x866 = 3582138287344497098LLU;
	int64_t x867 = INT64_MIN;
	int16_t x868 = 6764;
	volatile uint64_t t191 = 11243213846547LLU;

    t191 = (x865+(x866*(x867%x868)));

    if (t191 != 478023710069996591LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x869 = 1;
	int16_t x870 = INT16_MAX;
	int32_t x871 = -1;
	uint16_t x872 = UINT16_MAX;
	int32_t t192 = -50;

    t192 = (x869+(x870*(x871%x872)));

    if (t192 != -32766) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x873 = INT32_MIN;
	uint64_t x874 = 35208485381848797LLU;
	int16_t x875 = -2915;
	uint64_t x876 = UINT64_MAX;

    t193 = (x873+(x874*(x875%x876)));

    if (t193 != 8047729552020582793LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x878 = 185;
	static int8_t x879 = INT8_MIN;
	static int32_t x880 = -3278085;
	static volatile int32_t t194 = 61420;

    t194 = (x877+(x878*(x879%x880)));

    if (t194 != -23553) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x882 = 107843260U;
	uint16_t x883 = 3271U;
	volatile uint32_t t195 = 120514343U;

    t195 = (x881+(x882*(x883%x884)));

    if (t195 != 496445787U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x886 = 114;
	int64_t x888 = -46862253958064LL;
	volatile int64_t t196 = 9501449LL;

    t196 = (x885+(x886*(x887%x888)));

    if (t196 != 29102LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x893 = UINT32_MAX;
	volatile int16_t x894 = -1;
	uint64_t x895 = 4779981740032702LLU;

    t197 = (x893+(x894*(x895%x896)));

    if (t197 != 4294903853LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x897 = 142209LLU;
	static uint8_t x898 = 13U;
	uint16_t x899 = 4U;
	volatile uint64_t t198 = 229988585041192835LLU;

    t198 = (x897+(x898*(x899%x900)));

    if (t198 != 142209LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x902 = INT16_MIN;
	int64_t t199 = 1887LL;

    t199 = (x901+(x902*(x903%x904)));

    if (t199 != 2147483647LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

