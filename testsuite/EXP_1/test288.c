
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

int32_t x4 = INT32_MAX;
int32_t x6 = INT32_MIN;
int64_t x8 = INT64_MAX;
int32_t t1 = -2;
volatile int8_t x22 = 1;
static int8_t x23 = -1;
volatile int16_t x30 = 0;
int32_t x31 = -23806397;
uint16_t x34 = UINT16_MAX;
uint32_t x44 = UINT32_MAX;
static volatile int8_t x46 = INT8_MIN;
static volatile int32_t t9 = 1784;
uint64_t x49 = 1148813138114887LLU;
uint64_t x58 = 41945029LLU;
int32_t t14 = 31;
static uint16_t x71 = UINT16_MAX;
volatile int32_t t16 = -34;
int32_t t18 = -59;
static int32_t x85 = -15;
volatile int32_t x87 = 1885606;
static uint16_t x92 = 2656U;
volatile uint64_t x93 = 153205225105350LLU;
int8_t x96 = -4;
uint16_t x113 = 1391U;
static int16_t x114 = 48;
uint32_t x122 = 92050108U;
int32_t t26 = 1063957;
int16_t x128 = -3023;
volatile uint8_t x129 = UINT8_MAX;
volatile int32_t t29 = -7;
int32_t x139 = INT32_MAX;
volatile int32_t t33 = 27946;
uint16_t x153 = UINT16_MAX;
int8_t x155 = INT8_MIN;
int64_t x161 = 12054940LL;
uint16_t x162 = 22U;
static uint8_t x163 = UINT8_MAX;
int32_t x164 = 1;
int32_t x168 = INT32_MIN;
uint64_t x176 = 41022528LLU;
uint64_t x183 = 1050857479812273649LLU;
uint32_t x190 = 292088U;
uint16_t x191 = 490U;
static int32_t t40 = -1;
volatile uint32_t x197 = UINT32_MAX;
static uint64_t x207 = 7036485080067158LLU;
static int64_t x210 = 8165322558022LL;
volatile int64_t x214 = -1LL;
int32_t x222 = INT32_MIN;
uint64_t x223 = 7789049022371741LLU;
int16_t x231 = INT16_MIN;
int8_t x242 = -1;
volatile int32_t t50 = -1;
int8_t x247 = -1;
volatile int16_t x248 = INT16_MIN;
static int32_t x251 = INT32_MIN;
uint16_t x254 = 19365U;
int16_t x258 = 20;
uint32_t x263 = 24929U;
static volatile int32_t t55 = -1034900;
uint8_t x268 = 0U;
int32_t t56 = -3817;
int32_t t57 = 411;
int8_t x282 = INT8_MIN;
int8_t x284 = INT8_MIN;
int32_t t59 = -72016666;
static volatile uint32_t x285 = 290959009U;
int16_t x286 = -6924;
static int32_t t60 = -1;
uint32_t x293 = 1886538U;
uint16_t x294 = 710U;
uint8_t x295 = UINT8_MAX;
volatile int32_t t64 = -691327;
volatile int8_t x309 = INT8_MAX;
uint64_t x310 = 130315694935156LLU;
volatile int32_t x312 = INT32_MAX;
uint64_t x313 = 58884049275LLU;
static int32_t x326 = 1646;
static int16_t x327 = -16233;
volatile int16_t x330 = -112;
int64_t x334 = -1LL;
uint64_t x338 = 22517670LLU;
int8_t x339 = INT8_MIN;
static int16_t x342 = 2;
uint8_t x345 = 1U;
static uint16_t x347 = 1789U;
volatile int32_t x349 = -1;
volatile int32_t t75 = 163678434;
int64_t x365 = 377720830371LL;
uint32_t x370 = UINT32_MAX;
static volatile int32_t t78 = 17707076;
uint8_t x373 = UINT8_MAX;
uint32_t x374 = 23214U;
int8_t x379 = -1;
static uint16_t x380 = UINT16_MAX;
int64_t x385 = 274374220232LL;
int32_t x397 = 191;
uint32_t x399 = UINT32_MAX;
int64_t x405 = INT64_MIN;
volatile int8_t x409 = -24;
int8_t x410 = INT8_MIN;
volatile int32_t t86 = 29;
int16_t x419 = 6357;
volatile int64_t x420 = INT64_MIN;
int64_t x440 = -3465LL;
static int32_t t89 = 8;
static volatile int32_t x447 = INT32_MIN;
static uint32_t x448 = UINT32_MAX;
int8_t x453 = INT8_MIN;
static int16_t x470 = INT16_MIN;
uint8_t x473 = 1U;
int16_t x475 = INT16_MIN;
static int32_t x489 = -1;
volatile int64_t x493 = -539890LL;
volatile int16_t x495 = -2;
int32_t x516 = 68013679;
int32_t t103 = 29136;
int64_t x518 = -551262233423LL;
int32_t t106 = 2152;
static int64_t x535 = INT64_MAX;
uint32_t x540 = 747U;
volatile uint16_t x563 = UINT16_MAX;
static int32_t x564 = INT32_MAX;
uint32_t x568 = 1U;
static volatile int32_t x573 = -1;
int32_t t117 = -470313;
uint8_t x586 = UINT8_MAX;
int16_t x589 = INT16_MAX;
uint16_t x597 = 3U;
int8_t x608 = -1;
int32_t t124 = 51586202;
uint32_t x609 = 1312379686U;
volatile uint16_t x617 = 478U;
volatile int32_t x619 = INT32_MIN;
volatile int32_t t126 = -2371;
uint64_t x626 = 4243390015LLU;
static int64_t x637 = INT64_MIN;
static int32_t x640 = 52;
volatile int8_t x642 = INT8_MIN;
static int64_t x643 = INT64_MIN;
static volatile int32_t t132 = 43922;
static int32_t t133 = -988384;
uint8_t x649 = 63U;
int16_t x651 = -1;
int32_t x654 = -959296;
int32_t x659 = 137287800;
uint16_t x673 = 3U;
int16_t x678 = -19;
static int64_t x681 = 561753451778691033LL;
uint64_t x684 = 50380LLU;
static int32_t t140 = 27040554;
uint16_t x691 = 62U;
int64_t x696 = INT64_MIN;
static int32_t t145 = 1;
volatile int16_t x709 = -1;
int64_t x714 = -3987743366441308LL;
static int8_t x716 = 13;
int32_t x721 = 1047983;
uint32_t x723 = 13301U;
uint32_t x734 = UINT32_MAX;
int32_t x736 = INT32_MIN;
int64_t x739 = -397973381036681LL;
int64_t x743 = 13337701LL;
static uint64_t x759 = 16465571879990850LLU;
uint32_t x767 = UINT32_MAX;
uint32_t x768 = 0U;
int32_t x770 = 52;
int8_t x782 = INT8_MIN;
uint64_t x787 = 1202LLU;
uint64_t x790 = 2LLU;
static volatile int32_t x792 = -33647947;
static volatile uint64_t x801 = UINT64_MAX;
volatile int32_t t166 = -80833;
volatile int64_t x806 = -1731529645LL;
int16_t x808 = INT16_MIN;
volatile uint16_t x817 = 705U;
volatile int16_t x823 = -4;
uint16_t x826 = 3U;
volatile int8_t x836 = 8;
static int32_t t175 = -60827;
int32_t x850 = -1;
int8_t x855 = -1;
volatile int16_t x856 = -15;
static uint64_t x857 = 23351LLU;
uint16_t x859 = 1691U;
int16_t x864 = INT16_MIN;
volatile int8_t x865 = -1;
uint64_t x869 = UINT64_MAX;
int16_t x876 = 1;
static volatile int32_t x880 = INT32_MIN;
static int32_t t184 = -105592767;
volatile int32_t t185 = 0;
int16_t x886 = INT16_MIN;
volatile int64_t x887 = -77LL;
static int16_t x898 = INT16_MIN;
static volatile int32_t t188 = 25534;
uint8_t x901 = 1U;
int64_t x904 = -2531471LL;
int16_t x907 = -14;
static uint64_t x909 = UINT64_MAX;
int64_t x914 = -10389083LL;
int8_t x923 = -1;
static uint64_t x924 = 514353LLU;
volatile int32_t x925 = -1;
static int16_t x930 = INT16_MIN;
static int64_t x931 = 71788LL;
volatile int8_t x932 = 1;
int16_t x934 = -1;
int8_t x935 = INT8_MAX;
int32_t t197 = -56;
int16_t x941 = INT16_MIN;
uint8_t x943 = UINT8_MAX;


void f0(void) {
    	uint8_t x1 = 15U;
	volatile int32_t x2 = -12;
	static int8_t x3 = 0;
	int32_t t0 = -22891429;

    t0 = (((x1-x2)!=x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int64_t x7 = -1LL;

    t1 = (((x5-x6)!=x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x13 = 4U;
	static int16_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;
	static int8_t x16 = INT8_MIN;
	static volatile int32_t t2 = 1254;

    t2 = (((x13-x14)!=x15)==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x17 = 353635115362LLU;
	static int32_t x18 = 72960119;
	volatile int64_t x19 = 339LL;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t3 = 0;

    t3 = (((x17-x18)!=x19)==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MIN;
	int64_t x24 = INT64_MAX;
	static volatile int32_t t4 = -212516870;

    t4 = (((x21-x22)!=x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x29 = 41U;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t5 = -60784484;

    t5 = (((x29-x30)!=x31)==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	volatile int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MAX;
	int32_t t6 = 4774179;

    t6 = (((x33-x34)!=x35)==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x37 = INT32_MAX;
	static uint16_t x38 = 0U;
	int8_t x39 = -6;
	uint16_t x40 = UINT16_MAX;
	int32_t t7 = -326581294;

    t7 = (((x37-x38)!=x39)==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x41 = INT8_MAX;
	uint32_t x42 = 45U;
	int32_t x43 = INT32_MIN;
	int32_t t8 = -11939;

    t8 = (((x41-x42)!=x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x45 = INT16_MIN;
	volatile int16_t x47 = INT16_MIN;
	volatile int64_t x48 = INT64_MIN;

    t9 = (((x45-x46)!=x47)==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = INT32_MAX;
	static int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	static int32_t t10 = -7914915;

    t10 = (((x49-x50)!=x51)==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 4U;
	int16_t x54 = INT16_MIN;
	int32_t x55 = 952;
	uint64_t x56 = 672050235411LLU;
	volatile int32_t t11 = -11;

    t11 = (((x53-x54)!=x55)==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MIN;
	static volatile int32_t x59 = 215293360;
	int32_t x60 = INT32_MIN;
	volatile int32_t t12 = -12;

    t12 = (((x57-x58)!=x59)==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x61 = 0;
	static int8_t x62 = -6;
	int8_t x63 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t13 = 10566;

    t13 = (((x61-x62)!=x63)==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x65 = 5625U;
	volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MAX;
	static uint8_t x68 = 5U;

    t14 = (((x65-x66)!=x67)==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MIN;
	int64_t x70 = -41LL;
	uint64_t x72 = 963541363186014587LLU;
	static int32_t t15 = -133439462;

    t15 = (((x69-x70)!=x71)==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MIN;
	volatile uint32_t x75 = 120U;
	uint16_t x76 = 2U;

    t16 = (((x73-x74)!=x75)==x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x77 = 0U;
	int16_t x78 = INT16_MIN;
	volatile int32_t x79 = -6;
	int8_t x80 = -1;
	volatile int32_t t17 = 158586811;

    t17 = (((x77-x78)!=x79)==x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x81 = UINT16_MAX;
	static int64_t x82 = INT64_MAX;
	int32_t x83 = INT32_MAX;
	int64_t x84 = 1322263033186LL;

    t18 = (((x81-x82)!=x83)==x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x86 = INT64_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t19 = 97245;

    t19 = (((x85-x86)!=x87)==x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x89 = 3729423;
	int8_t x90 = 50;
	int32_t x91 = INT32_MAX;
	int32_t t20 = -15;

    t20 = (((x89-x90)!=x91)==x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x94 = 29232U;
	int64_t x95 = 1456503839112918LL;
	int32_t t21 = -18;

    t21 = (((x93-x94)!=x95)==x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = 384LL;
	static volatile int16_t x102 = INT16_MIN;
	int8_t x103 = 0;
	uint8_t x104 = 51U;
	volatile int32_t t22 = -9;

    t22 = (((x101-x102)!=x103)==x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 1U;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MAX;
	volatile int32_t t23 = -89;

    t23 = (((x109-x110)!=x111)==x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x115 = -1;
	uint16_t x116 = 3U;
	volatile int32_t t24 = 4480002;

    t24 = (((x113-x114)!=x115)==x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x117 = -6891;
	int16_t x118 = INT16_MIN;
	volatile int8_t x119 = -1;
	static uint64_t x120 = 8046495221039786LLU;
	static int32_t t25 = -717;

    t25 = (((x117-x118)!=x119)==x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = -1;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;

    t26 = (((x121-x122)!=x123)==x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MIN;
	static volatile int16_t x127 = -7164;
	volatile int32_t t27 = -5;

    t27 = (((x125-x126)!=x127)==x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x130 = 0U;
	static int16_t x131 = INT16_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	int32_t t28 = -8615;

    t28 = (((x129-x130)!=x131)==x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = 44;
	int32_t x134 = 23902252;
	int8_t x135 = -23;
	static int8_t x136 = -1;

    t29 = (((x133-x134)!=x135)==x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x137 = 102U;
	int16_t x138 = INT16_MIN;
	static volatile uint8_t x140 = 97U;
	volatile int32_t t30 = 32614246;

    t30 = (((x137-x138)!=x139)==x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = -1839LL;
	uint64_t x142 = 46062675LLU;
	volatile uint64_t x143 = 21403463339937LLU;
	int8_t x144 = -1;
	int32_t t31 = -14590;

    t31 = (((x141-x142)!=x143)==x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = -413;
	static int16_t x146 = 136;
	static int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	int32_t t32 = 11769589;

    t32 = (((x145-x146)!=x147)==x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x149 = 445U;
	uint32_t x150 = 15926U;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;

    t33 = (((x149-x150)!=x151)==x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x154 = 631515538858053215LLU;
	static volatile int16_t x156 = 3;
	volatile int32_t t34 = 29667138;

    t34 = (((x153-x154)!=x155)==x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t t35 = 46282;

    t35 = (((x161-x162)!=x163)==x164);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x165 = 31U;
	volatile uint8_t x166 = 105U;
	int64_t x167 = -194LL;
	int32_t t36 = 120288877;

    t36 = (((x165-x166)!=x167)==x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = UINT8_MAX;
	int32_t x174 = -1;
	int32_t x175 = 30440069;
	int32_t t37 = -14606;

    t37 = (((x173-x174)!=x175)==x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = -1;
	int16_t x178 = INT16_MAX;
	volatile uint16_t x179 = 1691U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t38 = 12;

    t38 = (((x177-x178)!=x179)==x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = 13;
	int8_t x184 = -1;
	volatile int32_t t39 = -998917816;

    t39 = (((x181-x182)!=x183)==x184);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = -48818;
	static int32_t x192 = INT32_MAX;

    t40 = (((x189-x190)!=x191)==x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x198 = 2824295U;
	int64_t x199 = -13203193101731387LL;
	int64_t x200 = INT64_MIN;
	volatile int32_t t41 = -684540262;

    t41 = (((x197-x198)!=x199)==x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = INT32_MAX;
	int32_t x202 = 3101;
	int64_t x203 = -1LL;
	static int16_t x204 = 7;
	static volatile int32_t t42 = -127;

    t42 = (((x201-x202)!=x203)==x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x205 = -1;
	volatile int8_t x206 = INT8_MIN;
	uint64_t x208 = 15461856916LLU;
	volatile int32_t t43 = 104692;

    t43 = (((x205-x206)!=x207)==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x211 = INT32_MIN;
	int16_t x212 = 0;
	volatile int32_t t44 = -31201060;

    t44 = (((x209-x210)!=x211)==x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x213 = -14675;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 15247325066592669LLU;
	int32_t t45 = -1;

    t45 = (((x213-x214)!=x215)==x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = -1;
	volatile int64_t x224 = INT64_MIN;
	volatile int32_t t46 = -5;

    t46 = (((x221-x222)!=x223)==x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x229 = -5116319LL;
	uint32_t x230 = 233970888U;
	int64_t x232 = INT64_MAX;
	static int32_t t47 = 4;

    t47 = (((x229-x230)!=x231)==x232);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = -1;
	int16_t x235 = -6;
	volatile int64_t x236 = INT64_MIN;
	int32_t t48 = 325382;

    t48 = (((x233-x234)!=x235)==x236);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = 1051673216;
	int32_t x238 = -1;
	static volatile uint64_t x239 = 344727888LLU;
	int32_t x240 = INT32_MAX;
	int32_t t49 = -8332;

    t49 = (((x237-x238)!=x239)==x240);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x241 = -1;
	static int16_t x243 = INT16_MIN;
	uint16_t x244 = 2697U;

    t50 = (((x241-x242)!=x243)==x244);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x245 = 27977LLU;
	static uint32_t x246 = 1882U;
	int32_t t51 = 906250444;

    t51 = (((x245-x246)!=x247)==x248);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = INT8_MAX;
	static int16_t x250 = INT16_MIN;
	static int64_t x252 = 100580196LL;
	static int32_t t52 = 80;

    t52 = (((x249-x250)!=x251)==x252);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x253 = UINT32_MAX;
	int16_t x255 = INT16_MAX;
	int64_t x256 = -51LL;
	int32_t t53 = 0;

    t53 = (((x253-x254)!=x255)==x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x257 = INT8_MAX;
	int8_t x259 = INT8_MAX;
	int32_t x260 = 774929;
	volatile int32_t t54 = -483912;

    t54 = (((x257-x258)!=x259)==x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x261 = 216113164U;
	uint32_t x262 = UINT32_MAX;
	int32_t x264 = INT32_MAX;

    t55 = (((x261-x262)!=x263)==x264);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x265 = -1;
	int32_t x266 = -2987091;
	static uint64_t x267 = UINT64_MAX;

    t56 = (((x265-x266)!=x267)==x268);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x269 = 0;
	int64_t x270 = INT64_MAX;
	volatile int8_t x271 = INT8_MAX;
	uint32_t x272 = 1173731U;

    t57 = (((x269-x270)!=x271)==x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x277 = 53U;
	int16_t x278 = INT16_MAX;
	static int16_t x279 = 2;
	static int16_t x280 = -1;
	int32_t t58 = -200403;

    t58 = (((x277-x278)!=x279)==x280);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x281 = -1;
	int16_t x283 = INT16_MIN;

    t59 = (((x281-x282)!=x283)==x284);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x287 = -1;
	volatile int8_t x288 = -1;

    t60 = (((x285-x286)!=x287)==x288);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x296 = 2U;
	int32_t t61 = 13611;

    t61 = (((x293-x294)!=x295)==x296);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x297 = -9101965LL;
	uint16_t x298 = 4U;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t62 = -339603909;

    t62 = (((x297-x298)!=x299)==x300);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x301 = -5290;
	int8_t x302 = 1;
	volatile int32_t x303 = INT32_MIN;
	static volatile int64_t x304 = INT64_MIN;
	volatile int32_t t63 = 13185034;

    t63 = (((x301-x302)!=x303)==x304);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 23367U;
	volatile uint32_t x307 = UINT32_MAX;
	int32_t x308 = 39548699;

    t64 = (((x305-x306)!=x307)==x308);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x311 = 925494265U;
	volatile int32_t t65 = 13255890;

    t65 = (((x309-x310)!=x311)==x312);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x314 = -27;
	static int32_t x315 = INT32_MIN;
	uint32_t x316 = 626699468U;
	volatile int32_t t66 = 10526276;

    t66 = (((x313-x314)!=x315)==x316);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x321 = -1;
	volatile uint8_t x322 = 126U;
	static int8_t x323 = 6;
	uint8_t x324 = 20U;
	volatile int32_t t67 = -28289;

    t67 = (((x321-x322)!=x323)==x324);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x328 = -1;
	volatile int32_t t68 = 3;

    t68 = (((x325-x326)!=x327)==x328);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x329 = -1;
	volatile int32_t x331 = -33720467;
	int16_t x332 = INT16_MIN;
	volatile int32_t t69 = -3;

    t69 = (((x329-x330)!=x331)==x332);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = INT16_MIN;
	static uint32_t x335 = 705839255U;
	int16_t x336 = 2;
	int32_t t70 = 1;

    t70 = (((x333-x334)!=x335)==x336);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x337 = -1;
	int32_t x340 = INT32_MIN;
	volatile int32_t t71 = -98;

    t71 = (((x337-x338)!=x339)==x340);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x341 = 57076LLU;
	volatile int64_t x343 = -793242356642163LL;
	uint8_t x344 = 53U;
	int32_t t72 = 2744;

    t72 = (((x341-x342)!=x343)==x344);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x346 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t73 = 26710275;

    t73 = (((x345-x346)!=x347)==x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x350 = INT16_MAX;
	uint8_t x351 = 118U;
	int64_t x352 = INT64_MIN;
	volatile int32_t t74 = 209683857;

    t74 = (((x349-x350)!=x351)==x352);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x357 = 919U;
	int64_t x358 = INT64_MAX;
	static int8_t x359 = INT8_MIN;
	volatile uint32_t x360 = 495U;

    t75 = (((x357-x358)!=x359)==x360);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x361 = 426U;
	static uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = 1;
	volatile int32_t t76 = -32226356;

    t76 = (((x361-x362)!=x363)==x364);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x366 = 45;
	static volatile int32_t x367 = INT32_MIN;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t77 = 33192736;

    t77 = (((x365-x366)!=x367)==x368);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x369 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MIN;

    t78 = (((x369-x370)!=x371)==x372);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t79 = 7636166;

    t79 = (((x373-x374)!=x375)==x376);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int32_t t80 = -10117;

    t80 = (((x377-x378)!=x379)==x380);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x386 = 65575399;
	int8_t x387 = -1;
	int16_t x388 = INT16_MAX;
	volatile int32_t t81 = -475;

    t81 = (((x385-x386)!=x387)==x388);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 5751LLU;
	uint8_t x392 = UINT8_MAX;
	int32_t t82 = -3308;

    t82 = (((x389-x390)!=x391)==x392);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x398 = 10U;
	int32_t x400 = INT32_MAX;
	int32_t t83 = -2315540;

    t83 = (((x397-x398)!=x399)==x400);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 3151864236LLU;
	volatile uint16_t x403 = UINT16_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t84 = 0;

    t84 = (((x401-x402)!=x403)==x404);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x406 = INT64_MIN;
	volatile int64_t x407 = INT64_MIN;
	int32_t x408 = -698;
	int32_t t85 = 0;

    t85 = (((x405-x406)!=x407)==x408);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x411 = INT16_MIN;
	static volatile uint16_t x412 = 508U;

    t86 = (((x409-x410)!=x411)==x412);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x413 = -1;
	uint8_t x414 = UINT8_MAX;
	volatile int64_t x415 = INT64_MIN;
	int32_t x416 = -361550972;
	volatile int32_t t87 = -9285377;

    t87 = (((x413-x414)!=x415)==x416);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x417 = UINT16_MAX;
	int8_t x418 = INT8_MIN;
	int32_t t88 = -679;

    t88 = (((x417-x418)!=x419)==x420);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x437 = 1278846756575LLU;
	int8_t x438 = 1;
	static uint32_t x439 = 5675507U;

    t89 = (((x437-x438)!=x439)==x440);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x441 = 0;
	volatile int16_t x442 = INT16_MIN;
	uint16_t x443 = 54U;
	int32_t x444 = 513512;
	volatile int32_t t90 = 61972;

    t90 = (((x441-x442)!=x443)==x444);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x445 = 49322932808520LL;
	int32_t x446 = INT32_MAX;
	int32_t t91 = -910986;

    t91 = (((x445-x446)!=x447)==x448);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x454 = 0;
	int32_t x455 = INT32_MIN;
	uint8_t x456 = 0U;
	int32_t t92 = 7;

    t92 = (((x453-x454)!=x455)==x456);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x461 = 303810552U;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MAX;
	uint32_t x464 = 1480U;
	int32_t t93 = -1;

    t93 = (((x461-x462)!=x463)==x464);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x465 = INT16_MIN;
	static uint64_t x466 = UINT64_MAX;
	static int16_t x467 = -1;
	static volatile int16_t x468 = 30;
	static int32_t t94 = 463198141;

    t94 = (((x465-x466)!=x467)==x468);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x469 = 329;
	uint8_t x471 = UINT8_MAX;
	static volatile int64_t x472 = -248739552619464970LL;
	volatile int32_t t95 = -452;

    t95 = (((x469-x470)!=x471)==x472);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x474 = INT8_MIN;
	int8_t x476 = -1;
	volatile int32_t t96 = -3;

    t96 = (((x473-x474)!=x475)==x476);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x477 = 619422946169871842LLU;
	int16_t x478 = INT16_MIN;
	volatile int8_t x479 = -1;
	static uint8_t x480 = 1U;
	static volatile int32_t t97 = 87356793;

    t97 = (((x477-x478)!=x479)==x480);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x481 = -8;
	static int8_t x482 = 0;
	uint32_t x483 = 481364U;
	uint8_t x484 = 5U;
	int32_t t98 = 916;

    t98 = (((x481-x482)!=x483)==x484);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x485 = UINT8_MAX;
	int8_t x486 = -24;
	static int16_t x487 = INT16_MIN;
	static uint8_t x488 = 53U;
	int32_t t99 = 116593637;

    t99 = (((x485-x486)!=x487)==x488);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x490 = 65557215643LLU;
	uint16_t x491 = UINT16_MAX;
	int64_t x492 = -483890LL;
	int32_t t100 = -2;

    t100 = (((x489-x490)!=x491)==x492);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x494 = INT16_MIN;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t101 = -19496;

    t101 = (((x493-x494)!=x495)==x496);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x497 = 7LLU;
	uint64_t x498 = 755923908LLU;
	volatile int8_t x499 = INT8_MAX;
	int32_t x500 = -1;
	volatile int32_t t102 = 4028512;

    t102 = (((x497-x498)!=x499)==x500);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MIN;
	int16_t x515 = INT16_MIN;

    t103 = (((x513-x514)!=x515)==x516);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x517 = INT16_MAX;
	volatile int32_t x519 = INT32_MAX;
	int8_t x520 = INT8_MIN;
	volatile int32_t t104 = -49;

    t104 = (((x517-x518)!=x519)==x520);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x521 = UINT16_MAX;
	uint16_t x522 = UINT16_MAX;
	uint32_t x523 = UINT32_MAX;
	static int64_t x524 = 3728LL;
	volatile int32_t t105 = 28;

    t105 = (((x521-x522)!=x523)==x524);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x525 = 0U;
	uint32_t x526 = UINT32_MAX;
	int32_t x527 = -1;
	int8_t x528 = INT8_MAX;

    t106 = (((x525-x526)!=x527)==x528);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x529 = UINT8_MAX;
	volatile uint16_t x530 = 783U;
	int64_t x531 = INT64_MIN;
	uint8_t x532 = 58U;
	static volatile int32_t t107 = 97136;

    t107 = (((x529-x530)!=x531)==x532);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x533 = -1;
	volatile int64_t x534 = INT64_MIN;
	volatile int16_t x536 = INT16_MAX;
	int32_t t108 = 1098926;

    t108 = (((x533-x534)!=x535)==x536);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x537 = INT16_MIN;
	static int8_t x538 = INT8_MAX;
	volatile uint32_t x539 = UINT32_MAX;
	int32_t t109 = 7999;

    t109 = (((x537-x538)!=x539)==x540);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MAX;
	uint8_t x547 = 9U;
	int32_t x548 = INT32_MIN;
	volatile int32_t t110 = 102153638;

    t110 = (((x545-x546)!=x547)==x548);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x549 = -5791400;
	uint64_t x550 = 164780622432381LLU;
	int64_t x551 = -428134932LL;
	volatile int32_t x552 = 0;
	static volatile int32_t t111 = 5711;

    t111 = (((x549-x550)!=x551)==x552);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x553 = -1;
	uint8_t x554 = UINT8_MAX;
	uint64_t x555 = 2078835464LLU;
	uint32_t x556 = 1628U;
	volatile int32_t t112 = -35102;

    t112 = (((x553-x554)!=x555)==x556);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x557 = INT64_MAX;
	uint32_t x558 = UINT32_MAX;
	int32_t x559 = 3926497;
	int64_t x560 = INT64_MIN;
	int32_t t113 = 6585381;

    t113 = (((x557-x558)!=x559)==x560);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x561 = -1LL;
	static volatile int8_t x562 = INT8_MIN;
	static int32_t t114 = -795453;

    t114 = (((x561-x562)!=x563)==x564);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x565 = INT64_MIN;
	volatile int16_t x566 = -1;
	int32_t x567 = -1;
	static volatile int32_t t115 = 79257156;

    t115 = (((x565-x566)!=x567)==x568);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x569 = 31502;
	int32_t x570 = -208;
	int8_t x571 = INT8_MAX;
	uint8_t x572 = 27U;
	int32_t t116 = -984;

    t116 = (((x569-x570)!=x571)==x572);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x574 = -1LL;
	static int16_t x575 = INT16_MIN;
	int32_t x576 = INT32_MIN;

    t117 = (((x573-x574)!=x575)==x576);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x577 = 272129031U;
	volatile int64_t x578 = -1LL;
	int32_t x579 = INT32_MIN;
	volatile int16_t x580 = INT16_MIN;
	int32_t t118 = 4489591;

    t118 = (((x577-x578)!=x579)==x580);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x581 = 0;
	int16_t x582 = INT16_MIN;
	int8_t x583 = INT8_MIN;
	uint64_t x584 = UINT64_MAX;
	int32_t t119 = -813488;

    t119 = (((x581-x582)!=x583)==x584);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint32_t x585 = UINT32_MAX;
	int8_t x587 = INT8_MIN;
	int64_t x588 = 20919677LL;
	volatile int32_t t120 = -2845;

    t120 = (((x585-x586)!=x587)==x588);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x590 = 1;
	int32_t x591 = -1;
	int16_t x592 = INT16_MIN;
	static int32_t t121 = 2;

    t121 = (((x589-x590)!=x591)==x592);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x593 = UINT8_MAX;
	volatile uint8_t x594 = 5U;
	volatile int64_t x595 = -128LL;
	static uint16_t x596 = 955U;
	volatile int32_t t122 = -2667;

    t122 = (((x593-x594)!=x595)==x596);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x598 = UINT64_MAX;
	int16_t x599 = -2;
	int32_t x600 = 3;
	volatile int32_t t123 = 2;

    t123 = (((x597-x598)!=x599)==x600);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x605 = 5;
	int8_t x606 = 10;
	volatile int8_t x607 = INT8_MIN;

    t124 = (((x605-x606)!=x607)==x608);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x610 = 1U;
	int32_t x611 = INT32_MIN;
	int64_t x612 = 2966LL;
	int32_t t125 = -8444;

    t125 = (((x609-x610)!=x611)==x612);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x618 = INT16_MAX;
	int32_t x620 = INT32_MIN;

    t126 = (((x617-x618)!=x619)==x620);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x621 = 10U;
	volatile int32_t x622 = -1;
	volatile int32_t x623 = -4743423;
	int8_t x624 = -4;
	volatile int32_t t127 = 9;

    t127 = (((x621-x622)!=x623)==x624);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x625 = 87U;
	int8_t x627 = -50;
	uint32_t x628 = UINT32_MAX;
	int32_t t128 = -361455817;

    t128 = (((x625-x626)!=x627)==x628);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x629 = -6958;
	int8_t x630 = -1;
	volatile int64_t x631 = INT64_MIN;
	int32_t x632 = -1;
	int32_t t129 = -123;

    t129 = (((x629-x630)!=x631)==x632);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x633 = 2U;
	int32_t x634 = -206114589;
	int32_t x635 = INT32_MIN;
	int8_t x636 = -2;
	int32_t t130 = 870;

    t130 = (((x633-x634)!=x635)==x636);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x638 = -1LL;
	uint8_t x639 = 3U;
	static int32_t t131 = -1;

    t131 = (((x637-x638)!=x639)==x640);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x641 = 12U;
	volatile int16_t x644 = 7181;

    t132 = (((x641-x642)!=x643)==x644);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x645 = UINT8_MAX;
	static int64_t x646 = INT64_MAX;
	int16_t x647 = -1;
	int16_t x648 = 90;

    t133 = (((x645-x646)!=x647)==x648);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x650 = -1;
	int64_t x652 = INT64_MIN;
	int32_t t134 = -11639684;

    t134 = (((x649-x650)!=x651)==x652);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x653 = -1;
	uint64_t x655 = 48053837LLU;
	int16_t x656 = -1;
	static int32_t t135 = 1432;

    t135 = (((x653-x654)!=x655)==x656);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile int16_t x658 = INT16_MAX;
	int32_t x660 = -1;
	int32_t t136 = 3;

    t136 = (((x657-x658)!=x659)==x660);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x661 = -1LL;
	static uint16_t x662 = 0U;
	volatile uint16_t x663 = 292U;
	int64_t x664 = -52408634LL;
	int32_t t137 = 93500692;

    t137 = (((x661-x662)!=x663)==x664);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x674 = 151670153775LLU;
	int16_t x675 = INT16_MIN;
	int16_t x676 = 0;
	volatile int32_t t138 = 1;

    t138 = (((x673-x674)!=x675)==x676);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x679 = -39295LL;
	int8_t x680 = INT8_MIN;
	int32_t t139 = -4761048;

    t139 = (((x677-x678)!=x679)==x680);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x682 = INT8_MIN;
	int16_t x683 = -231;

    t140 = (((x681-x682)!=x683)==x684);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x685 = INT8_MIN;
	volatile int64_t x686 = -4539899578444534LL;
	uint16_t x687 = 5900U;
	int16_t x688 = INT16_MIN;
	int32_t t141 = -72904;

    t141 = (((x685-x686)!=x687)==x688);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile int8_t x690 = -51;
	int8_t x692 = -1;
	int32_t t142 = -84961;

    t142 = (((x689-x690)!=x691)==x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x693 = INT16_MIN;
	static int64_t x694 = 9243LL;
	static uint32_t x695 = 2835278U;
	int32_t t143 = -25081;

    t143 = (((x693-x694)!=x695)==x696);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x697 = 4U;
	uint64_t x698 = 6718596318820LLU;
	static int64_t x699 = INT64_MIN;
	int32_t x700 = -1;
	int32_t t144 = -31;

    t144 = (((x697-x698)!=x699)==x700);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x701 = UINT8_MAX;
	int64_t x702 = 396373965494470LL;
	int8_t x703 = INT8_MAX;
	int8_t x704 = INT8_MIN;

    t145 = (((x701-x702)!=x703)==x704);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x705 = -1;
	int32_t x706 = INT32_MIN;
	int64_t x707 = INT64_MIN;
	static volatile uint64_t x708 = 2281LLU;
	volatile int32_t t146 = -89;

    t146 = (((x705-x706)!=x707)==x708);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x710 = 303469839731LLU;
	int16_t x711 = INT16_MAX;
	volatile int32_t x712 = -12;
	static int32_t t147 = -188927437;

    t147 = (((x709-x710)!=x711)==x712);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x713 = 44004U;
	int16_t x715 = -112;
	int32_t t148 = 297889435;

    t148 = (((x713-x714)!=x715)==x716);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x717 = 4455975856LLU;
	int32_t x718 = -14695675;
	int8_t x719 = 22;
	uint8_t x720 = 19U;
	int32_t t149 = 83540;

    t149 = (((x717-x718)!=x719)==x720);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x722 = INT16_MIN;
	int8_t x724 = 0;
	static int32_t t150 = -1002;

    t150 = (((x721-x722)!=x723)==x724);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x725 = 102;
	int8_t x726 = -61;
	static uint16_t x727 = 2512U;
	int16_t x728 = INT16_MIN;
	static int32_t t151 = -439;

    t151 = (((x725-x726)!=x727)==x728);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x729 = 23602U;
	static int32_t x730 = INT32_MAX;
	volatile int64_t x731 = INT64_MIN;
	static int64_t x732 = INT64_MIN;
	volatile int32_t t152 = 3252;

    t152 = (((x729-x730)!=x731)==x732);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x733 = 642LLU;
	int32_t x735 = INT32_MAX;
	int32_t t153 = 1;

    t153 = (((x733-x734)!=x735)==x736);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x737 = 1389897102503LL;
	int32_t x738 = INT32_MIN;
	static int16_t x740 = 3;
	int32_t t154 = -834;

    t154 = (((x737-x738)!=x739)==x740);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x741 = 2668LLU;
	int8_t x742 = -26;
	static int32_t x744 = -1;
	static volatile int32_t t155 = -367025;

    t155 = (((x741-x742)!=x743)==x744);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x745 = INT64_MAX;
	volatile uint8_t x746 = 1U;
	volatile int16_t x747 = INT16_MIN;
	uint32_t x748 = 960269899U;
	static volatile int32_t t156 = -1900;

    t156 = (((x745-x746)!=x747)==x748);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x749 = -1;
	int8_t x750 = INT8_MIN;
	volatile int64_t x751 = 918249906705629014LL;
	int64_t x752 = -1LL;
	volatile int32_t t157 = -386420;

    t157 = (((x749-x750)!=x751)==x752);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x757 = -14;
	static int16_t x758 = 0;
	int64_t x760 = INT64_MIN;
	int32_t t158 = -72;

    t158 = (((x757-x758)!=x759)==x760);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x761 = INT16_MIN;
	int64_t x762 = -76803444LL;
	volatile int16_t x763 = 5634;
	uint32_t x764 = 768U;
	int32_t t159 = 377102526;

    t159 = (((x761-x762)!=x763)==x764);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x765 = 2190U;
	volatile uint32_t x766 = UINT32_MAX;
	volatile int32_t t160 = 3542337;

    t160 = (((x765-x766)!=x767)==x768);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x769 = INT8_MIN;
	static int64_t x771 = -3218668622638LL;
	int16_t x772 = 28;
	volatile int32_t t161 = 1338;

    t161 = (((x769-x770)!=x771)==x772);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x773 = UINT32_MAX;
	static int64_t x774 = INT64_MAX;
	int64_t x775 = INT64_MIN;
	uint64_t x776 = UINT64_MAX;
	volatile int32_t t162 = 37810807;

    t162 = (((x773-x774)!=x775)==x776);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x781 = -1;
	uint32_t x783 = 485174354U;
	int16_t x784 = 8;
	volatile int32_t t163 = -77771943;

    t163 = (((x781-x782)!=x783)==x784);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = -37065691011432582LL;
	static uint32_t x788 = 6U;
	volatile int32_t t164 = 131064;

    t164 = (((x785-x786)!=x787)==x788);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x789 = INT32_MAX;
	static volatile int64_t x791 = -1LL;
	static volatile int32_t t165 = 773865;

    t165 = (((x789-x790)!=x791)==x792);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x802 = INT32_MIN;
	static uint64_t x803 = UINT64_MAX;
	uint32_t x804 = UINT32_MAX;

    t166 = (((x801-x802)!=x803)==x804);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x805 = -79221955404171LL;
	static int8_t x807 = -9;
	static int32_t t167 = 29810;

    t167 = (((x805-x806)!=x807)==x808);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x813 = 128332198335LLU;
	static uint32_t x814 = 83U;
	int16_t x815 = 12;
	static int32_t x816 = -505551443;
	int32_t t168 = 1318;

    t168 = (((x813-x814)!=x815)==x816);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x818 = 2U;
	int8_t x819 = INT8_MAX;
	static int8_t x820 = 1;
	int32_t t169 = -2;

    t169 = (((x817-x818)!=x819)==x820);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x821 = UINT64_MAX;
	int64_t x822 = INT64_MIN;
	uint64_t x824 = 10LLU;
	volatile int32_t t170 = -1054532436;

    t170 = (((x821-x822)!=x823)==x824);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x825 = INT16_MIN;
	uint64_t x827 = UINT64_MAX;
	volatile int8_t x828 = -9;
	volatile int32_t t171 = -472947;

    t171 = (((x825-x826)!=x827)==x828);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x829 = -59;
	int8_t x830 = 49;
	int32_t x831 = INT32_MIN;
	int8_t x832 = 1;
	volatile int32_t t172 = -571;

    t172 = (((x829-x830)!=x831)==x832);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x833 = 758;
	int64_t x834 = 14590750225820838LL;
	uint64_t x835 = 1754975971146986LLU;
	static int32_t t173 = 386543135;

    t173 = (((x833-x834)!=x835)==x836);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x837 = 231073493055981LLU;
	static volatile int32_t x838 = INT32_MIN;
	int16_t x839 = -5;
	volatile int64_t x840 = -1LL;
	static int32_t t174 = -1025;

    t174 = (((x837-x838)!=x839)==x840);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x841 = -1LL;
	static uint16_t x842 = 0U;
	int8_t x843 = -10;
	int8_t x844 = -57;

    t175 = (((x841-x842)!=x843)==x844);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x845 = -1;
	int64_t x846 = INT64_MAX;
	volatile uint64_t x847 = UINT64_MAX;
	int32_t x848 = -1;
	volatile int32_t t176 = -66154;

    t176 = (((x845-x846)!=x847)==x848);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x849 = 12777U;
	static int8_t x851 = 0;
	uint8_t x852 = UINT8_MAX;
	int32_t t177 = -1;

    t177 = (((x849-x850)!=x851)==x852);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x853 = 835972U;
	int8_t x854 = 0;
	static int32_t t178 = 18315956;

    t178 = (((x853-x854)!=x855)==x856);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x858 = INT8_MIN;
	uint64_t x860 = 35237599004519428LLU;
	int32_t t179 = -3;

    t179 = (((x857-x858)!=x859)==x860);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x861 = INT16_MAX;
	int64_t x862 = -1LL;
	int64_t x863 = INT64_MAX;
	int32_t t180 = 16443;

    t180 = (((x861-x862)!=x863)==x864);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x866 = -5;
	static int32_t x867 = -7982;
	int64_t x868 = 59095369LL;
	int32_t t181 = -658;

    t181 = (((x865-x866)!=x867)==x868);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x870 = -1LL;
	volatile int16_t x871 = INT16_MAX;
	static int64_t x872 = 8359589LL;
	int32_t t182 = 618;

    t182 = (((x869-x870)!=x871)==x872);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x873 = 297697783782LL;
	int32_t x874 = 3311913;
	int16_t x875 = INT16_MAX;
	volatile int32_t t183 = -26741431;

    t183 = (((x873-x874)!=x875)==x876);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x877 = -1;
	static int64_t x878 = INT64_MIN;
	uint32_t x879 = UINT32_MAX;

    t184 = (((x877-x878)!=x879)==x880);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x881 = UINT32_MAX;
	uint16_t x882 = 3U;
	int32_t x883 = -15038;
	int16_t x884 = -390;

    t185 = (((x881-x882)!=x883)==x884);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x885 = 1;
	volatile int16_t x888 = INT16_MIN;
	volatile int32_t t186 = -33;

    t186 = (((x885-x886)!=x887)==x888);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x889 = 216565641186770LL;
	int32_t x890 = INT32_MIN;
	int32_t x891 = -1;
	int8_t x892 = INT8_MIN;
	volatile int32_t t187 = -40835;

    t187 = (((x889-x890)!=x891)==x892);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x897 = INT32_MIN;
	int8_t x899 = INT8_MAX;
	uint32_t x900 = 0U;

    t188 = (((x897-x898)!=x899)==x900);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x902 = 428648521371493356LLU;
	int16_t x903 = -1;
	static volatile int32_t t189 = -223708628;

    t189 = (((x901-x902)!=x903)==x904);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x905 = INT32_MIN;
	uint64_t x906 = 15527LLU;
	uint64_t x908 = 71332715810LLU;
	volatile int32_t t190 = -119;

    t190 = (((x905-x906)!=x907)==x908);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x910 = 33U;
	int8_t x911 = INT8_MAX;
	int8_t x912 = INT8_MAX;
	int32_t t191 = -3713;

    t191 = (((x909-x910)!=x911)==x912);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x913 = -147281981LL;
	int32_t x915 = -1;
	uint16_t x916 = 0U;
	volatile int32_t t192 = -4;

    t192 = (((x913-x914)!=x915)==x916);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x917 = -1LL;
	static int64_t x918 = INT64_MIN;
	int32_t x919 = 2068344;
	static uint8_t x920 = 2U;
	static int32_t t193 = 7196617;

    t193 = (((x917-x918)!=x919)==x920);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x921 = INT64_MAX;
	uint16_t x922 = UINT16_MAX;
	volatile int32_t t194 = 0;

    t194 = (((x921-x922)!=x923)==x924);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x926 = UINT16_MAX;
	int16_t x927 = INT16_MIN;
	int64_t x928 = INT64_MIN;
	int32_t t195 = -2497439;

    t195 = (((x925-x926)!=x927)==x928);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x929 = 2863U;
	int32_t t196 = -74347725;

    t196 = (((x929-x930)!=x931)==x932);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x933 = -407;
	static uint8_t x936 = UINT8_MAX;

    t197 = (((x933-x934)!=x935)==x936);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x937 = INT64_MIN;
	volatile uint64_t x938 = 45380551282LLU;
	static int64_t x939 = 12LL;
	uint64_t x940 = UINT64_MAX;
	int32_t t198 = 0;

    t198 = (((x937-x938)!=x939)==x940);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x942 = 4060817282032LL;
	int64_t x944 = INT64_MIN;
	static int32_t t199 = -61;

    t199 = (((x941-x942)!=x943)==x944);

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

