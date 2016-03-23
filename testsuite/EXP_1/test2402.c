
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

uint32_t x9 = UINT32_MAX;
uint16_t x10 = UINT16_MAX;
int8_t x13 = -1;
int32_t t3 = 12787575;
int64_t x27 = 70128236LL;
int32_t t5 = 19;
int8_t x30 = INT8_MIN;
uint8_t x31 = 2U;
volatile int64_t x34 = -338116136599224LL;
static int32_t x36 = INT32_MIN;
volatile int32_t t7 = 743;
volatile int8_t x37 = INT8_MIN;
int8_t x38 = -1;
static int32_t x47 = INT32_MIN;
static volatile int32_t x48 = 1770183;
int32_t t10 = -57084027;
static uint8_t x49 = 55U;
volatile int16_t x55 = INT16_MIN;
uint16_t x56 = 22339U;
int32_t t12 = 12798;
int64_t x64 = 577LL;
int8_t x69 = INT8_MIN;
static int32_t x71 = -1;
volatile uint64_t x72 = 85LLU;
int64_t x76 = 1130274LL;
static int32_t x78 = -68588;
uint16_t x83 = 693U;
int32_t t21 = -838;
volatile uint16_t x98 = 3U;
uint32_t x101 = 12902832U;
static int64_t x103 = INT64_MIN;
volatile int32_t x106 = -14854;
int32_t x110 = INT32_MAX;
uint16_t x112 = UINT16_MAX;
static int32_t t26 = -64046122;
int8_t x114 = INT8_MAX;
static int16_t x122 = INT16_MIN;
int32_t x123 = INT32_MIN;
volatile int64_t x125 = INT64_MAX;
int32_t x126 = INT32_MAX;
volatile int64_t x127 = INT64_MAX;
int32_t t32 = 174868372;
uint32_t x145 = 29U;
uint32_t x148 = 76710772U;
int32_t x149 = -11;
volatile int32_t t36 = -14721253;
int8_t x156 = -1;
int32_t x162 = INT32_MIN;
int32_t t38 = 57579;
static uint64_t x171 = UINT64_MAX;
int32_t t40 = -982684233;
volatile int32_t x175 = -1547931;
volatile int16_t x181 = INT16_MIN;
int32_t x182 = -12388;
int8_t x186 = 0;
int16_t x190 = -110;
static volatile uint16_t x200 = 467U;
int16_t x201 = INT16_MAX;
volatile uint32_t x203 = 6797U;
static volatile int32_t t48 = 728480;
int8_t x205 = -16;
int32_t x210 = -1;
static uint64_t x212 = 0LLU;
int16_t x214 = INT16_MIN;
int64_t x216 = INT64_MIN;
int64_t x219 = INT64_MIN;
int32_t x221 = -32;
static int8_t x222 = INT8_MIN;
int16_t x224 = -1;
int32_t t53 = 637;
volatile int64_t x227 = 1510LL;
int16_t x229 = -22;
int64_t x234 = INT64_MIN;
int64_t x236 = -10LL;
static int8_t x237 = 2;
volatile int16_t x242 = INT16_MIN;
static uint16_t x247 = 2481U;
int32_t x248 = INT32_MIN;
static int32_t t59 = 140697411;
uint16_t x267 = 395U;
int8_t x269 = -1;
static int32_t x270 = -1;
uint32_t x283 = UINT32_MAX;
volatile int32_t t68 = -950;
static int32_t t69 = 6161;
volatile int16_t x290 = -1;
static uint32_t x292 = 7530789U;
int8_t x293 = -1;
static int32_t x295 = INT32_MAX;
int8_t x297 = INT8_MIN;
volatile int32_t t72 = -1115;
uint8_t x302 = 14U;
volatile int32_t t73 = -317989;
uint64_t x306 = 3964569488LLU;
uint64_t x313 = 15195510LLU;
uint16_t x318 = 25460U;
int8_t x322 = INT8_MIN;
volatile int32_t x327 = INT32_MIN;
static int8_t x330 = INT8_MAX;
static int16_t x331 = 1;
int16_t x339 = -1;
int8_t x340 = -1;
volatile int32_t t82 = -274913;
static int32_t x345 = INT32_MIN;
volatile int32_t x348 = 3364703;
uint64_t x349 = UINT64_MAX;
int16_t x353 = 1385;
static int32_t t86 = -3362;
int8_t x363 = -1;
int8_t x367 = -1;
int32_t x376 = INT32_MAX;
static int32_t x385 = INT32_MAX;
static int32_t t92 = 58898;
uint8_t x390 = 1U;
int16_t x392 = INT16_MIN;
int16_t x398 = -1;
static uint64_t x400 = UINT64_MAX;
volatile uint16_t x406 = UINT16_MAX;
int8_t x408 = -31;
volatile int32_t t97 = -157;
uint32_t x412 = UINT32_MAX;
int32_t x414 = -1;
static int64_t x416 = INT64_MIN;
int16_t x418 = INT16_MIN;
volatile int32_t t100 = 14;
static uint32_t x422 = 394U;
volatile int32_t x425 = INT32_MIN;
static volatile int8_t x426 = INT8_MIN;
uint32_t x427 = 21889U;
volatile int32_t t102 = -10910;
uint8_t x429 = 3U;
static int8_t x436 = INT8_MIN;
int32_t t104 = -13068;
int8_t x440 = INT8_MAX;
int16_t x442 = INT16_MAX;
int16_t x449 = INT16_MIN;
static volatile int32_t t108 = 43799896;
int32_t t109 = -81;
uint16_t x457 = 15540U;
int32_t t110 = -3390239;
volatile uint16_t x463 = UINT16_MAX;
uint16_t x464 = UINT16_MAX;
static volatile int32_t t111 = 2808924;
uint64_t x468 = UINT64_MAX;
int32_t t112 = -246258800;
int32_t x471 = INT32_MAX;
uint32_t x473 = 25U;
int32_t t114 = 1;
int32_t x482 = INT32_MIN;
int64_t x495 = 37535991829639LL;
uint64_t x496 = UINT64_MAX;
int32_t t120 = -25117763;
static uint8_t x502 = UINT8_MAX;
uint32_t x503 = 1679U;
int32_t x511 = 659561;
uint16_t x517 = UINT16_MAX;
uint64_t x518 = UINT64_MAX;
volatile int32_t t125 = -349940979;
uint64_t x521 = 1779363664600LLU;
volatile int64_t x526 = -42224369544011601LL;
int32_t x533 = 0;
uint8_t x542 = 13U;
int64_t x544 = INT64_MAX;
int32_t x546 = INT32_MAX;
static int64_t x556 = -1LL;
int32_t t134 = -1;
static volatile int8_t x558 = -1;
static volatile int32_t t135 = 713523;
volatile uint64_t x561 = 856030966810LLU;
static int32_t x572 = -10609433;
uint8_t x576 = 7U;
volatile int64_t x587 = INT64_MIN;
uint64_t x588 = UINT64_MAX;
volatile int64_t x590 = -1LL;
volatile int8_t x596 = 0;
int32_t t144 = 3783536;
int64_t x597 = -1LL;
uint8_t x598 = UINT8_MAX;
volatile int32_t t145 = 39;
uint16_t x619 = UINT16_MAX;
int16_t x624 = -1;
uint8_t x630 = 11U;
static int32_t x632 = INT32_MAX;
int64_t x633 = 896429340090LL;
int8_t x638 = -1;
int32_t x639 = -7;
int32_t t156 = -360248439;
uint32_t x645 = 30034756U;
volatile int32_t t157 = -28386797;
uint32_t x654 = 14659805U;
int16_t x656 = 0;
int16_t x669 = INT16_MIN;
int8_t x670 = 17;
int32_t t163 = 132549;
volatile int32_t t164 = -66;
int32_t t165 = -88008;
uint16_t x682 = UINT16_MAX;
int32_t t166 = -199655;
uint64_t x686 = UINT64_MAX;
int16_t x693 = -1;
int64_t x694 = INT64_MAX;
int8_t x695 = -13;
int64_t x699 = INT64_MIN;
int16_t x702 = -1;
uint64_t x705 = 2585826874409LLU;
int32_t x710 = INT32_MAX;
int32_t x723 = INT32_MIN;
uint32_t x726 = 377U;
int8_t x731 = INT8_MAX;
uint8_t x741 = 11U;
volatile uint16_t x745 = 15U;
static int64_t x756 = 364661400598572339LL;
static int8_t x761 = INT8_MIN;
static int16_t x762 = 1;
int16_t x772 = -648;
int32_t t188 = 10;
int32_t x777 = 3931691;
static int32_t x778 = INT32_MIN;
int32_t t190 = -660;
uint32_t x783 = 146664U;
int32_t x784 = INT32_MIN;
uint32_t x785 = 195019076U;
volatile int16_t x796 = -13186;
int64_t x798 = INT64_MIN;
int8_t x805 = -1;
volatile int64_t x806 = INT64_MIN;
volatile uint32_t x810 = 22560605U;
int64_t x812 = -81947671291078LL;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 2U;
	volatile int32_t t0 = 95;

    t0 = (((x1|x2)/x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x11 = -1;
	int64_t x12 = INT64_MAX;
	int32_t t1 = 3;

    t1 = (((x9|x10)/x11)==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x14 = INT16_MAX;
	volatile int8_t x15 = INT8_MIN;
	uint64_t x16 = 6990655833765008024LLU;
	int32_t t2 = 0;

    t2 = (((x13|x14)/x15)==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	int8_t x18 = -1;
	int16_t x19 = INT16_MAX;
	uint8_t x20 = UINT8_MAX;

    t3 = (((x17|x18)/x19)==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 1861410508LLU;
	int16_t x22 = 0;
	uint64_t x23 = 4140146LLU;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 996;

    t4 = (((x21|x22)/x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = 22522193430871LL;
	int32_t x26 = INT32_MAX;
	int16_t x28 = 27;

    t5 = (((x25|x26)/x27)==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = UINT16_MAX;
	volatile int16_t x32 = INT16_MIN;
	int32_t t6 = 1;

    t6 = (((x29|x30)/x31)==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 3293;
	int16_t x35 = INT16_MIN;

    t7 = (((x33|x34)/x35)==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = INT16_MIN;
	int32_t t8 = -37;

    t8 = (((x37|x38)/x39)==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = -1;
	static int64_t x42 = 4053174718386LL;
	static int8_t x43 = INT8_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t9 = -417;

    t9 = (((x41|x42)/x43)==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = 2;
	int16_t x46 = INT16_MAX;

    t10 = (((x45|x46)/x47)==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = INT64_MAX;
	static int64_t x51 = -23102901088530LL;
	static uint32_t x52 = 10899267U;
	static int32_t t11 = -393498;

    t11 = (((x49|x50)/x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = INT64_MAX;
	int64_t x54 = INT64_MIN;

    t12 = (((x53|x54)/x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MIN;
	volatile uint64_t x58 = 561LLU;
	int8_t x59 = 7;
	volatile uint8_t x60 = 127U;
	volatile int32_t t13 = 7695;

    t13 = (((x57|x58)/x59)==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = -1;
	static int8_t x62 = INT8_MIN;
	static int8_t x63 = -12;
	int32_t t14 = -3;

    t14 = (((x61|x62)/x63)==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MAX;
	int32_t x66 = INT32_MAX;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = -1;
	static volatile int32_t t15 = -1915324;

    t15 = (((x65|x66)/x67)==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x70 = UINT32_MAX;
	static int32_t t16 = 209689976;

    t16 = (((x69|x70)/x71)==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = -4;
	static uint32_t x75 = UINT32_MAX;
	volatile int32_t t17 = 366429;

    t17 = (((x73|x74)/x75)==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 2;
	int32_t x79 = -2560456;
	int16_t x80 = -1;
	int32_t t18 = -17202624;

    t18 = (((x77|x78)/x79)==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 1687U;
	volatile int32_t x82 = -15;
	static int16_t x84 = INT16_MAX;
	int32_t t19 = 13;

    t19 = (((x81|x82)/x83)==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	int64_t x86 = -2245247800406452LL;
	int64_t x87 = -1LL;
	static volatile int32_t x88 = -1;
	int32_t t20 = 77297;

    t20 = (((x85|x86)/x87)==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MIN;
	static int16_t x92 = INT16_MAX;

    t21 = (((x89|x90)/x91)==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -181505873;
	int16_t x94 = INT16_MIN;
	volatile int64_t x95 = INT64_MAX;
	int16_t x96 = 112;
	volatile int32_t t22 = 453434228;

    t22 = (((x93|x94)/x95)==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 1017080135LL;
	int64_t x99 = -2074899883552006124LL;
	int64_t x100 = INT64_MIN;
	int32_t t23 = -178;

    t23 = (((x97|x98)/x99)==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = 11738U;
	uint16_t x104 = 1U;
	volatile int32_t t24 = 2;

    t24 = (((x101|x102)/x103)==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x105 = INT8_MIN;
	volatile int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MAX;
	int32_t t25 = -30200;

    t25 = (((x105|x106)/x107)==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -56;
	static volatile int16_t x111 = -1;

    t26 = (((x109|x110)/x111)==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = 6623473672453LL;
	int64_t x115 = -1LL;
	uint16_t x116 = UINT16_MAX;
	int32_t t27 = -2;

    t27 = (((x113|x114)/x115)==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 233;
	volatile int64_t x118 = 1LL;
	int32_t x119 = INT32_MAX;
	volatile int32_t x120 = INT32_MAX;
	volatile int32_t t28 = -7;

    t28 = (((x117|x118)/x119)==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int32_t x124 = -30;
	volatile int32_t t29 = -99574592;

    t29 = (((x121|x122)/x123)==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x128 = INT8_MAX;
	volatile int32_t t30 = -1663685;

    t30 = (((x125|x126)/x127)==x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x129 = 1LL;
	int16_t x130 = -1;
	volatile int16_t x131 = INT16_MIN;
	int64_t x132 = 183041805273047LL;
	int32_t t31 = 202699314;

    t31 = (((x129|x130)/x131)==x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = 788092012LL;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -9;

    t32 = (((x133|x134)/x135)==x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 2711197U;
	volatile int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MAX;
	volatile int16_t x140 = INT16_MAX;
	static volatile int32_t t33 = -10138;

    t33 = (((x137|x138)/x139)==x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	volatile int64_t x142 = INT64_MAX;
	int8_t x143 = 3;
	int64_t x144 = INT64_MAX;
	volatile int32_t t34 = 151;

    t34 = (((x141|x142)/x143)==x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x146 = INT32_MIN;
	volatile uint16_t x147 = 29089U;
	int32_t t35 = 6297;

    t35 = (((x145|x146)/x147)==x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x150 = 1;
	int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MAX;

    t36 = (((x149|x150)/x151)==x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = 4;
	volatile uint8_t x155 = UINT8_MAX;
	int32_t t37 = -2430;

    t37 = (((x153|x154)/x155)==x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MIN;
	uint16_t x163 = 1270U;
	uint16_t x164 = UINT16_MAX;

    t38 = (((x161|x162)/x163)==x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = -1LL;
	int32_t x166 = 0;
	uint16_t x167 = 7U;
	int8_t x168 = INT8_MAX;
	volatile int32_t t39 = -9685;

    t39 = (((x165|x166)/x167)==x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	uint64_t x170 = 10375454643LLU;
	int32_t x172 = 6;

    t40 = (((x169|x170)/x171)==x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x173 = -1;
	static int16_t x174 = 56;
	static int8_t x176 = -3;
	volatile int32_t t41 = -62214307;

    t41 = (((x173|x174)/x175)==x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	uint32_t x178 = 14930640U;
	int64_t x179 = 110579552LL;
	int64_t x180 = INT64_MAX;
	int32_t t42 = 1;

    t42 = (((x177|x178)/x179)==x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 2U;
	int32_t t43 = 117873;

    t43 = (((x181|x182)/x183)==x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = -1;
	volatile uint16_t x187 = 6U;
	static int16_t x188 = INT16_MAX;
	static volatile int32_t t44 = -15400094;

    t44 = (((x185|x186)/x187)==x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = UINT64_MAX;
	int32_t x191 = INT32_MAX;
	static volatile int16_t x192 = -1;
	volatile int32_t t45 = -39;

    t45 = (((x189|x190)/x191)==x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = INT16_MAX;
	uint16_t x194 = 40U;
	volatile uint64_t x195 = UINT64_MAX;
	int16_t x196 = 1;
	int32_t t46 = 104767438;

    t46 = (((x193|x194)/x195)==x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = -52817LL;
	int32_t x198 = -1;
	int8_t x199 = -10;
	int32_t t47 = 232;

    t47 = (((x197|x198)/x199)==x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x202 = 101351406U;
	int16_t x204 = INT16_MIN;

    t48 = (((x201|x202)/x203)==x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t49 = 1588;

    t49 = (((x205|x206)/x207)==x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MAX;
	int64_t x211 = INT64_MIN;
	int32_t t50 = -23;

    t50 = (((x209|x210)/x211)==x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = INT16_MIN;
	uint64_t x215 = 26097609LLU;
	volatile int32_t t51 = 168146572;

    t51 = (((x213|x214)/x215)==x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x217 = 5U;
	volatile int64_t x218 = INT64_MAX;
	uint16_t x220 = 15U;
	volatile int32_t t52 = 2;

    t52 = (((x217|x218)/x219)==x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x223 = 6;

    t53 = (((x221|x222)/x223)==x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 413137LLU;
	int32_t x226 = -1;
	volatile int8_t x228 = 12;
	volatile int32_t t54 = -616383465;

    t54 = (((x225|x226)/x227)==x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x230 = -1LL;
	int16_t x231 = -143;
	uint8_t x232 = 13U;
	int32_t t55 = 2761348;

    t55 = (((x229|x230)/x231)==x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x233 = INT64_MIN;
	volatile uint16_t x235 = 1U;
	volatile int32_t t56 = -1728224;

    t56 = (((x233|x234)/x235)==x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x238 = 1;
	uint8_t x239 = UINT8_MAX;
	uint16_t x240 = 4034U;
	volatile int32_t t57 = 126979;

    t57 = (((x237|x238)/x239)==x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MIN;
	volatile uint64_t x243 = 1152308923056197992LLU;
	volatile int64_t x244 = 1LL;
	int32_t t58 = 37512;

    t58 = (((x241|x242)/x243)==x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 20U;
	int32_t x246 = 7810785;

    t59 = (((x245|x246)/x247)==x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x249 = -63809407;
	int16_t x250 = INT16_MIN;
	static int32_t x251 = -3;
	volatile uint32_t x252 = 296U;
	volatile int32_t t60 = 187093;

    t60 = (((x249|x250)/x251)==x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x253 = 6305;
	static uint64_t x254 = 2712647923080264015LLU;
	uint64_t x255 = UINT64_MAX;
	volatile uint8_t x256 = UINT8_MAX;
	int32_t t61 = -2617;

    t61 = (((x253|x254)/x255)==x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = UINT8_MAX;
	static int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	int32_t t62 = 669870388;

    t62 = (((x257|x258)/x259)==x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x261 = 0;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = -1;
	int32_t x264 = -1;
	static volatile int32_t t63 = -491407145;

    t63 = (((x261|x262)/x263)==x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x265 = 247;
	int8_t x266 = -1;
	int16_t x268 = -1;
	int32_t t64 = 220993;

    t64 = (((x265|x266)/x267)==x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x271 = INT64_MAX;
	uint32_t x272 = 19845784U;
	volatile int32_t t65 = 307025;

    t65 = (((x269|x270)/x271)==x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = 12U;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	volatile int64_t x276 = INT64_MIN;
	static int32_t t66 = -903;

    t66 = (((x273|x274)/x275)==x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	static volatile int32_t x280 = INT32_MIN;
	volatile int32_t t67 = -980679104;

    t67 = (((x277|x278)/x279)==x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x281 = 29332001U;
	uint64_t x282 = 52LLU;
	int16_t x284 = -9;

    t68 = (((x281|x282)/x283)==x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x285 = 14U;
	volatile int8_t x286 = INT8_MIN;
	volatile uint64_t x287 = 4297LLU;
	int16_t x288 = 3;

    t69 = (((x285|x286)/x287)==x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x289 = UINT8_MAX;
	static int8_t x291 = -1;
	volatile int32_t t70 = -564;

    t70 = (((x289|x290)/x291)==x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x294 = 3;
	int64_t x296 = INT64_MIN;
	static volatile int32_t t71 = -1;

    t71 = (((x293|x294)/x295)==x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x298 = UINT16_MAX;
	int16_t x299 = -1;
	int16_t x300 = -1;

    t72 = (((x297|x298)/x299)==x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = -1LL;
	volatile int64_t x303 = -1LL;
	volatile int64_t x304 = INT64_MIN;

    t73 = (((x301|x302)/x303)==x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x305 = 26192391295LLU;
	static int16_t x307 = INT16_MIN;
	static volatile int8_t x308 = -1;
	volatile int32_t t74 = -164;

    t74 = (((x305|x306)/x307)==x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = INT16_MIN;
	static int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MIN;
	int8_t x312 = -1;
	static int32_t t75 = -550605306;

    t75 = (((x309|x310)/x311)==x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x314 = -2397856981914121799LL;
	uint16_t x315 = 11U;
	volatile int32_t x316 = -1;
	static int32_t t76 = -1;

    t76 = (((x313|x314)/x315)==x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x317 = 6U;
	int16_t x319 = -57;
	int32_t x320 = -1;
	volatile int32_t t77 = -3983019;

    t77 = (((x317|x318)/x319)==x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = INT64_MIN;
	int16_t x323 = 109;
	int32_t x324 = -271;
	volatile int32_t t78 = -1;

    t78 = (((x321|x322)/x323)==x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = 6301;
	int8_t x326 = -13;
	uint64_t x328 = 108799287000842903LLU;
	int32_t t79 = 2019969;

    t79 = (((x325|x326)/x327)==x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x329 = 28523U;
	int16_t x332 = 7080;
	int32_t t80 = -31;

    t80 = (((x329|x330)/x331)==x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x333 = -461;
	int16_t x334 = INT16_MAX;
	int64_t x335 = 65949400LL;
	uint16_t x336 = 16U;
	int32_t t81 = 139696;

    t81 = (((x333|x334)/x335)==x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x337 = -6;
	volatile int8_t x338 = INT8_MIN;

    t82 = (((x337|x338)/x339)==x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x341 = INT16_MIN;
	static volatile int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = 1U;
	static int32_t t83 = 584921;

    t83 = (((x341|x342)/x343)==x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x346 = INT32_MAX;
	uint64_t x347 = 384951862LLU;
	static volatile int32_t t84 = -2782517;

    t84 = (((x345|x346)/x347)==x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x350 = INT8_MAX;
	int32_t x351 = 742;
	int64_t x352 = -2723867LL;
	int32_t t85 = 185459348;

    t85 = (((x349|x350)/x351)==x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x354 = 42U;
	int32_t x355 = 21;
	int16_t x356 = -22;

    t86 = (((x353|x354)/x355)==x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = -1;
	int32_t x362 = -3;
	int8_t x364 = -2;
	int32_t t87 = 5078526;

    t87 = (((x361|x362)/x363)==x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = INT64_MAX;
	volatile int8_t x366 = 0;
	static int16_t x368 = INT16_MAX;
	static volatile int32_t t88 = -158;

    t88 = (((x365|x366)/x367)==x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x369 = UINT32_MAX;
	static int8_t x370 = 0;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = 1935313546LLU;
	volatile int32_t t89 = -1;

    t89 = (((x369|x370)/x371)==x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MAX;
	static int8_t x374 = INT8_MIN;
	int8_t x375 = -1;
	volatile int32_t t90 = -10;

    t90 = (((x373|x374)/x375)==x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x377 = 85932416LLU;
	int16_t x378 = 1;
	int32_t x379 = INT32_MIN;
	volatile int64_t x380 = 175LL;
	static volatile int32_t t91 = 304793;

    t91 = (((x377|x378)/x379)==x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x386 = 0;
	volatile uint8_t x387 = 8U;
	int64_t x388 = -121357863063LL;

    t92 = (((x385|x386)/x387)==x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x389 = 1U;
	int64_t x391 = -1LL;
	volatile int32_t t93 = -529497;

    t93 = (((x389|x390)/x391)==x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x393 = 2U;
	uint16_t x394 = 60U;
	int32_t x395 = -1;
	int64_t x396 = INT64_MIN;
	static int32_t t94 = -30594074;

    t94 = (((x393|x394)/x395)==x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x397 = -1;
	int16_t x399 = INT16_MIN;
	int32_t t95 = 1903993;

    t95 = (((x397|x398)/x399)==x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = 6996800;
	uint32_t x402 = UINT32_MAX;
	static int8_t x403 = 6;
	volatile int16_t x404 = -1;
	volatile int32_t t96 = 639;

    t96 = (((x401|x402)/x403)==x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x405 = 398105U;
	int64_t x407 = 1865263LL;

    t97 = (((x405|x406)/x407)==x408);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x409 = 34122466980845LLU;
	int8_t x410 = INT8_MIN;
	static int8_t x411 = -1;
	int32_t t98 = 0;

    t98 = (((x409|x410)/x411)==x412);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x413 = 0LLU;
	uint32_t x415 = 1111U;
	int32_t t99 = 241;

    t99 = (((x413|x414)/x415)==x416);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x417 = UINT8_MAX;
	int32_t x419 = -1;
	uint16_t x420 = 4U;

    t100 = (((x417|x418)/x419)==x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = 34159LL;
	uint64_t x423 = 7LLU;
	static volatile int32_t x424 = INT32_MIN;
	int32_t t101 = 91530;

    t101 = (((x421|x422)/x423)==x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x428 = INT32_MAX;

    t102 = (((x425|x426)/x427)==x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x430 = INT8_MAX;
	volatile int32_t x431 = INT32_MAX;
	int64_t x432 = INT64_MIN;
	volatile int32_t t103 = 2778151;

    t103 = (((x429|x430)/x431)==x432);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x433 = 46130670833054829LL;
	int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MAX;

    t104 = (((x433|x434)/x435)==x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = INT16_MAX;
	int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MAX;
	volatile int32_t t105 = -67710;

    t105 = (((x437|x438)/x439)==x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x441 = INT16_MIN;
	volatile int16_t x443 = INT16_MAX;
	static int8_t x444 = INT8_MAX;
	volatile int32_t t106 = 13;

    t106 = (((x441|x442)/x443)==x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x445 = -1LL;
	int64_t x446 = INT64_MIN;
	volatile uint64_t x447 = UINT64_MAX;
	static int8_t x448 = 0;
	volatile int32_t t107 = -15004009;

    t107 = (((x445|x446)/x447)==x448);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x450 = -1;
	static uint32_t x451 = 11U;
	uint8_t x452 = UINT8_MAX;

    t108 = (((x449|x450)/x451)==x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x453 = 41LL;
	uint16_t x454 = 20U;
	int32_t x455 = INT32_MIN;
	static int8_t x456 = INT8_MIN;

    t109 = (((x453|x454)/x455)==x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x458 = 54;
	static int16_t x459 = -1;
	uint8_t x460 = 15U;

    t110 = (((x457|x458)/x459)==x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x461 = 638LLU;
	int64_t x462 = INT64_MAX;

    t111 = (((x461|x462)/x463)==x464);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x465 = UINT32_MAX;
	static volatile int8_t x466 = 1;
	int8_t x467 = INT8_MAX;

    t112 = (((x465|x466)/x467)==x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = 1;
	volatile int64_t x470 = INT64_MAX;
	int16_t x472 = -1;
	int32_t t113 = -20;

    t113 = (((x469|x470)/x471)==x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x474 = INT64_MAX;
	static volatile uint32_t x475 = 42563112U;
	uint32_t x476 = 198287U;

    t114 = (((x473|x474)/x475)==x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x477 = 5874U;
	volatile int32_t x478 = INT32_MIN;
	volatile int8_t x479 = INT8_MIN;
	int16_t x480 = -1;
	static int32_t t115 = 0;

    t115 = (((x477|x478)/x479)==x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x483 = UINT32_MAX;
	static uint32_t x484 = 47U;
	int32_t t116 = 157988;

    t116 = (((x481|x482)/x483)==x484);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = INT32_MIN;
	uint8_t x486 = 1U;
	uint8_t x487 = 1U;
	uint16_t x488 = 4037U;
	int32_t t117 = -61695;

    t117 = (((x485|x486)/x487)==x488);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = 79;
	int32_t x490 = INT32_MIN;
	int8_t x491 = -45;
	int64_t x492 = INT64_MIN;
	volatile int32_t t118 = -3;

    t118 = (((x489|x490)/x491)==x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x493 = INT32_MAX;
	uint16_t x494 = UINT16_MAX;
	int32_t t119 = 112798;

    t119 = (((x493|x494)/x495)==x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MIN;
	int64_t x500 = -1LL;

    t120 = (((x497|x498)/x499)==x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = -1;
	static uint32_t x504 = 1650347U;
	int32_t t121 = 1599812;

    t121 = (((x501|x502)/x503)==x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x505 = 116;
	int64_t x506 = -1LL;
	uint64_t x507 = 2871763975986917LLU;
	int32_t x508 = INT32_MIN;
	int32_t t122 = -937853788;

    t122 = (((x505|x506)/x507)==x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x509 = 77U;
	volatile uint64_t x510 = UINT64_MAX;
	volatile int16_t x512 = INT16_MIN;
	volatile int32_t t123 = 13;

    t123 = (((x509|x510)/x511)==x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x513 = 2U;
	int16_t x514 = INT16_MAX;
	static int8_t x515 = INT8_MAX;
	uint64_t x516 = 20604458374994263LLU;
	volatile int32_t t124 = -4;

    t124 = (((x513|x514)/x515)==x516);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x519 = 4U;
	uint8_t x520 = 2U;

    t125 = (((x517|x518)/x519)==x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x522 = -1;
	int8_t x523 = 9;
	static uint16_t x524 = 4188U;
	volatile int32_t t126 = 8868;

    t126 = (((x521|x522)/x523)==x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = INT64_MIN;
	int16_t x527 = -1;
	volatile uint32_t x528 = 1250U;
	int32_t t127 = 483459066;

    t127 = (((x525|x526)/x527)==x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = INT8_MIN;
	uint32_t x530 = 319557569U;
	int16_t x531 = INT16_MAX;
	static volatile uint8_t x532 = 0U;
	int32_t t128 = 7611388;

    t128 = (((x529|x530)/x531)==x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x534 = 928618485494823LLU;
	uint32_t x535 = 6903U;
	static int16_t x536 = -1;
	static volatile int32_t t129 = 636883;

    t129 = (((x533|x534)/x535)==x536);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = 551236357LL;
	static int16_t x538 = INT16_MAX;
	volatile int64_t x539 = INT64_MAX;
	int64_t x540 = -1LL;
	int32_t t130 = 54;

    t130 = (((x537|x538)/x539)==x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = UINT64_MAX;
	int32_t x543 = INT32_MAX;
	volatile int32_t t131 = -222339;

    t131 = (((x541|x542)/x543)==x544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x545 = -1;
	int64_t x547 = -1LL;
	uint16_t x548 = 1U;
	volatile int32_t t132 = 1;

    t132 = (((x545|x546)/x547)==x548);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = -1;
	int16_t x550 = INT16_MAX;
	int8_t x551 = 20;
	int16_t x552 = INT16_MAX;
	static volatile int32_t t133 = -13;

    t133 = (((x549|x550)/x551)==x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x553 = UINT8_MAX;
	uint64_t x554 = UINT64_MAX;
	int64_t x555 = INT64_MIN;

    t134 = (((x553|x554)/x555)==x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x557 = INT8_MIN;
	uint16_t x559 = UINT16_MAX;
	int16_t x560 = -3549;

    t135 = (((x557|x558)/x559)==x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x562 = INT32_MIN;
	int8_t x563 = -1;
	volatile uint64_t x564 = 332LLU;
	static int32_t t136 = 73;

    t136 = (((x561|x562)/x563)==x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = 86;
	int32_t x566 = INT32_MIN;
	static int16_t x567 = -1;
	volatile int32_t x568 = -1;
	int32_t t137 = 13;

    t137 = (((x565|x566)/x567)==x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x569 = UINT64_MAX;
	int32_t x570 = INT32_MIN;
	static int64_t x571 = -16535340LL;
	int32_t t138 = 197362;

    t138 = (((x569|x570)/x571)==x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x573 = 20057;
	uint32_t x574 = 3447U;
	uint8_t x575 = 44U;
	int32_t t139 = -207733;

    t139 = (((x573|x574)/x575)==x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x577 = 1028LLU;
	static uint64_t x578 = 28113404639489LLU;
	uint16_t x579 = UINT16_MAX;
	uint64_t x580 = 22756031989084435LLU;
	volatile int32_t t140 = 6811;

    t140 = (((x577|x578)/x579)==x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x581 = 9543909785229LL;
	static int32_t x582 = 1751455;
	static uint8_t x583 = 1U;
	int8_t x584 = -1;
	static int32_t t141 = -5429;

    t141 = (((x581|x582)/x583)==x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x585 = 1953U;
	volatile int32_t x586 = -1;
	volatile int32_t t142 = -151;

    t142 = (((x585|x586)/x587)==x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = 30882U;
	static volatile int8_t x591 = INT8_MAX;
	static int64_t x592 = INT64_MIN;
	volatile int32_t t143 = -169919;

    t143 = (((x589|x590)/x591)==x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x593 = 2;
	static volatile uint64_t x594 = UINT64_MAX;
	uint16_t x595 = UINT16_MAX;

    t144 = (((x593|x594)/x595)==x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x599 = -1;
	volatile uint8_t x600 = 12U;

    t145 = (((x597|x598)/x599)==x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x601 = UINT16_MAX;
	uint16_t x602 = 1341U;
	uint32_t x603 = 7218802U;
	uint16_t x604 = 4U;
	int32_t t146 = 1;

    t146 = (((x601|x602)/x603)==x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = INT16_MAX;
	int8_t x606 = INT8_MIN;
	int64_t x607 = -1LL;
	static uint32_t x608 = UINT32_MAX;
	static int32_t t147 = 22102847;

    t147 = (((x605|x606)/x607)==x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = INT8_MIN;
	int8_t x610 = -9;
	uint8_t x611 = 32U;
	uint64_t x612 = 34170176310974771LLU;
	static int32_t t148 = -3;

    t148 = (((x609|x610)/x611)==x612);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x613 = INT32_MAX;
	volatile int64_t x614 = INT64_MIN;
	int16_t x615 = 5810;
	int16_t x616 = 48;
	volatile int32_t t149 = -443;

    t149 = (((x613|x614)/x615)==x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x617 = UINT64_MAX;
	int32_t x618 = 30803243;
	int16_t x620 = -1;
	int32_t t150 = -1881;

    t150 = (((x617|x618)/x619)==x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x621 = 1;
	int16_t x622 = INT16_MIN;
	uint8_t x623 = 3U;
	volatile int32_t t151 = -1;

    t151 = (((x621|x622)/x623)==x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x625 = -1;
	volatile uint8_t x626 = 31U;
	volatile int8_t x627 = INT8_MIN;
	volatile int8_t x628 = INT8_MIN;
	static int32_t t152 = 3614;

    t152 = (((x625|x626)/x627)==x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x629 = INT16_MAX;
	uint32_t x631 = UINT32_MAX;
	static int32_t t153 = 8192510;

    t153 = (((x629|x630)/x631)==x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x634 = -1LL;
	int32_t x635 = INT32_MAX;
	int32_t x636 = INT32_MIN;
	int32_t t154 = -83;

    t154 = (((x633|x634)/x635)==x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x637 = -1;
	static uint16_t x640 = UINT16_MAX;
	volatile int32_t t155 = 103;

    t155 = (((x637|x638)/x639)==x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x641 = -28102707557LL;
	int32_t x642 = 16202;
	int32_t x643 = 14;
	int64_t x644 = -259200842052402LL;

    t156 = (((x641|x642)/x643)==x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x646 = -1;
	int32_t x647 = -61988;
	static int8_t x648 = INT8_MIN;

    t157 = (((x645|x646)/x647)==x648);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x649 = INT8_MAX;
	static int16_t x650 = INT16_MAX;
	static uint32_t x651 = UINT32_MAX;
	int64_t x652 = INT64_MAX;
	int32_t t158 = 383;

    t158 = (((x649|x650)/x651)==x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x653 = INT8_MAX;
	uint32_t x655 = UINT32_MAX;
	int32_t t159 = -3450917;

    t159 = (((x653|x654)/x655)==x656);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x657 = 7159;
	int64_t x658 = INT64_MAX;
	static uint8_t x659 = 7U;
	int64_t x660 = -550834367239473188LL;
	int32_t t160 = -1771;

    t160 = (((x657|x658)/x659)==x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x661 = 2972510374497681204LLU;
	int16_t x662 = INT16_MIN;
	volatile uint8_t x663 = UINT8_MAX;
	int8_t x664 = 49;
	volatile int32_t t161 = -395;

    t161 = (((x661|x662)/x663)==x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x665 = -2915;
	int32_t x666 = -1;
	int64_t x667 = -1LL;
	uint64_t x668 = 19798386523762550LLU;
	static volatile int32_t t162 = 37;

    t162 = (((x665|x666)/x667)==x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x671 = 1478104679U;
	int8_t x672 = INT8_MAX;

    t163 = (((x669|x670)/x671)==x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = -1LL;
	static uint64_t x674 = 8215288LLU;
	static int16_t x675 = INT16_MIN;
	static volatile uint32_t x676 = 0U;

    t164 = (((x673|x674)/x675)==x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x677 = 0U;
	int8_t x678 = 1;
	int16_t x679 = INT16_MAX;
	uint16_t x680 = 872U;

    t165 = (((x677|x678)/x679)==x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x681 = -1;
	int16_t x683 = INT16_MAX;
	static int8_t x684 = 11;

    t166 = (((x681|x682)/x683)==x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x685 = 220472229;
	uint64_t x687 = UINT64_MAX;
	int8_t x688 = -1;
	volatile int32_t t167 = -475827712;

    t167 = (((x685|x686)/x687)==x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x689 = 540558;
	static volatile int32_t x690 = INT32_MAX;
	int16_t x691 = -1;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t168 = -145978955;

    t168 = (((x689|x690)/x691)==x692);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x696 = INT16_MIN;
	static int32_t t169 = -34;

    t169 = (((x693|x694)/x695)==x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x697 = 598U;
	static uint32_t x698 = UINT32_MAX;
	static int8_t x700 = 1;
	int32_t t170 = 6739;

    t170 = (((x697|x698)/x699)==x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x701 = 182LLU;
	int8_t x703 = 47;
	static volatile int64_t x704 = INT64_MIN;
	volatile int32_t t171 = 288977266;

    t171 = (((x701|x702)/x703)==x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x706 = 30;
	uint16_t x707 = 4U;
	uint8_t x708 = UINT8_MAX;
	int32_t t172 = -14;

    t172 = (((x705|x706)/x707)==x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x709 = INT32_MAX;
	volatile int8_t x711 = 23;
	int64_t x712 = 272173LL;
	int32_t t173 = -813221985;

    t173 = (((x709|x710)/x711)==x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x713 = -1;
	uint8_t x714 = 1U;
	volatile int64_t x715 = INT64_MIN;
	uint64_t x716 = 156044749543054195LLU;
	static volatile int32_t t174 = -731852586;

    t174 = (((x713|x714)/x715)==x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x717 = 740522U;
	int32_t x718 = -1;
	int32_t x719 = 309297377;
	volatile int32_t x720 = INT32_MIN;
	int32_t t175 = 1696;

    t175 = (((x717|x718)/x719)==x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x721 = INT32_MIN;
	volatile int64_t x722 = 1146295564019LL;
	uint64_t x724 = 561170147087426LLU;
	int32_t t176 = 0;

    t176 = (((x721|x722)/x723)==x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x725 = 35U;
	static uint16_t x727 = 828U;
	uint8_t x728 = 38U;
	int32_t t177 = 244183763;

    t177 = (((x725|x726)/x727)==x728);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x729 = 208LL;
	uint8_t x730 = 61U;
	static int8_t x732 = INT8_MAX;
	int32_t t178 = 1003;

    t178 = (((x729|x730)/x731)==x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x733 = 105328562;
	int32_t x734 = -32;
	int8_t x735 = 62;
	int64_t x736 = 23297458988LL;
	static int32_t t179 = -21198128;

    t179 = (((x733|x734)/x735)==x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = INT8_MIN;
	uint32_t x738 = UINT32_MAX;
	int32_t x739 = INT32_MAX;
	uint8_t x740 = UINT8_MAX;
	int32_t t180 = -412;

    t180 = (((x737|x738)/x739)==x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x742 = INT32_MIN;
	int32_t x743 = -1;
	uint32_t x744 = 105258U;
	volatile int32_t t181 = -34840;

    t181 = (((x741|x742)/x743)==x744);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x746 = INT32_MIN;
	volatile int16_t x747 = -219;
	static uint8_t x748 = 6U;
	static int32_t t182 = 3897;

    t182 = (((x745|x746)/x747)==x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x749 = 1309;
	uint8_t x750 = 84U;
	int16_t x751 = -1;
	int8_t x752 = -1;
	int32_t t183 = -16842;

    t183 = (((x749|x750)/x751)==x752);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	int16_t x754 = INT16_MIN;
	int64_t x755 = INT64_MIN;
	static volatile int32_t t184 = -14;

    t184 = (((x753|x754)/x755)==x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint8_t x757 = 45U;
	int8_t x758 = 0;
	static int32_t x759 = 3;
	static uint16_t x760 = UINT16_MAX;
	int32_t t185 = -9;

    t185 = (((x757|x758)/x759)==x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x763 = -1;
	static volatile int8_t x764 = INT8_MIN;
	int32_t t186 = -4;

    t186 = (((x761|x762)/x763)==x764);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x765 = -1LL;
	volatile int64_t x766 = INT64_MIN;
	volatile uint16_t x767 = UINT16_MAX;
	static int64_t x768 = INT64_MAX;
	volatile int32_t t187 = -9;

    t187 = (((x765|x766)/x767)==x768);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = INT32_MAX;
	int64_t x770 = INT64_MIN;
	int16_t x771 = INT16_MIN;

    t188 = (((x769|x770)/x771)==x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x773 = 183U;
	volatile int8_t x774 = 1;
	static int8_t x775 = -1;
	static int16_t x776 = INT16_MIN;
	volatile int32_t t189 = -315;

    t189 = (((x773|x774)/x775)==x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x779 = -1;
	static int32_t x780 = INT32_MIN;

    t190 = (((x777|x778)/x779)==x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x781 = 5930;
	uint8_t x782 = 2U;
	volatile int32_t t191 = -6;

    t191 = (((x781|x782)/x783)==x784);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x786 = 41U;
	int16_t x787 = INT16_MAX;
	int8_t x788 = -6;
	volatile int32_t t192 = 0;

    t192 = (((x785|x786)/x787)==x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x789 = -1LL;
	int64_t x790 = INT64_MAX;
	int16_t x791 = INT16_MIN;
	int32_t x792 = -98;
	volatile int32_t t193 = -11254649;

    t193 = (((x789|x790)/x791)==x792);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = -1;
	int32_t x794 = INT32_MAX;
	int16_t x795 = INT16_MAX;
	int32_t t194 = -75248;

    t194 = (((x793|x794)/x795)==x796);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x797 = -58767725727687LL;
	uint32_t x799 = UINT32_MAX;
	int8_t x800 = -1;
	static volatile int32_t t195 = 215907;

    t195 = (((x797|x798)/x799)==x800);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x801 = -1;
	int8_t x802 = INT8_MIN;
	int16_t x803 = INT16_MIN;
	static int32_t x804 = INT32_MIN;
	static volatile int32_t t196 = -1333;

    t196 = (((x801|x802)/x803)==x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x807 = UINT16_MAX;
	volatile int64_t x808 = INT64_MIN;
	static int32_t t197 = -19857813;

    t197 = (((x805|x806)/x807)==x808);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x809 = -927689382LL;
	volatile uint8_t x811 = 1U;
	volatile int32_t t198 = 39;

    t198 = (((x809|x810)/x811)==x812);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x813 = 18U;
	int8_t x814 = INT8_MAX;
	uint8_t x815 = 7U;
	int16_t x816 = -6911;
	int32_t t199 = -499;

    t199 = (((x813|x814)/x815)==x816);

    if (t199 != 0) { NG(); } else { ; }
	
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

