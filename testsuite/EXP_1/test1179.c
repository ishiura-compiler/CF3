
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

int16_t x1 = INT16_MAX;
uint32_t x10 = 49045635U;
int8_t x12 = -1;
int16_t x18 = -1;
uint64_t x21 = UINT64_MAX;
int16_t x23 = INT16_MIN;
int64_t x25 = INT64_MAX;
uint64_t x27 = 22697LLU;
static volatile uint64_t x30 = UINT64_MAX;
static uint8_t x31 = 8U;
int16_t x32 = -1;
int16_t x33 = INT16_MIN;
int8_t x39 = INT8_MAX;
uint16_t x44 = 3U;
static int64_t t10 = 384238524832LL;
uint64_t x57 = 17404825LLU;
int16_t x58 = INT16_MIN;
volatile uint32_t x59 = 0U;
int32_t x60 = -7;
uint32_t t12 = 7169U;
int64_t x62 = INT64_MIN;
uint32_t x72 = 126110849U;
volatile uint32_t t14 = 200839U;
int32_t x73 = -1;
int32_t x105 = INT32_MIN;
volatile int32_t x110 = -55157;
static int64_t x134 = INT64_MIN;
int32_t x142 = INT32_MIN;
int8_t x150 = 9;
volatile uint16_t x157 = 4U;
int64_t x158 = 1037537LL;
uint64_t x161 = 50672632LLU;
int8_t x162 = -1;
int16_t x164 = INT16_MAX;
volatile int32_t t31 = 240288157;
int32_t t32 = INT32_MAX;
uint64_t x176 = UINT64_MAX;
int32_t t35 = -27573817;
uint64_t x196 = 10896LLU;
volatile int16_t x202 = -50;
int32_t x204 = INT32_MIN;
static uint64_t x208 = 1124LLU;
volatile uint16_t x215 = UINT16_MAX;
static volatile int64_t x229 = 45062333LL;
uint32_t x241 = UINT32_MAX;
int16_t x277 = INT16_MIN;
volatile int8_t x279 = 0;
int64_t x297 = -1LL;
int16_t x306 = INT16_MIN;
static int32_t x308 = INT32_MAX;
uint8_t x312 = 58U;
int8_t x324 = -2;
uint8_t x343 = 61U;
uint32_t x345 = 412706384U;
volatile int32_t x349 = INT32_MAX;
int32_t x351 = 2303;
static int64_t x353 = -1LL;
uint16_t x355 = 1580U;
uint32_t x361 = 7580265U;
static volatile int16_t x362 = INT16_MAX;
uint64_t t67 = 56519886125325456LLU;
uint8_t x366 = 19U;
int16_t x368 = INT16_MIN;
uint32_t t68 = 92671U;
static uint64_t x370 = 6514403567778LLU;
int32_t t69 = 92;
static volatile int64_t t70 = 341642934707018439LL;
volatile int8_t x382 = 1;
uint8_t x383 = UINT8_MAX;
volatile int8_t x384 = INT8_MIN;
int32_t t71 = 21;
static uint16_t x385 = 116U;
volatile int64_t t72 = 65272549104900530LL;
volatile uint16_t x392 = 31124U;
volatile int32_t x402 = 361453952;
int8_t x403 = 1;
uint8_t x405 = 20U;
int32_t x406 = 3664491;
int8_t x415 = INT8_MAX;
int64_t x418 = -11LL;
int8_t x419 = -1;
uint8_t x427 = 29U;
int16_t x428 = -4;
volatile int32_t x449 = INT32_MAX;
int16_t x450 = INT16_MIN;
static int16_t x455 = INT16_MIN;
int64_t x460 = -1LL;
volatile uint64_t t86 = 173LLU;
int16_t x477 = INT16_MIN;
int32_t t90 = 700175243;
uint8_t x491 = UINT8_MAX;
volatile uint16_t x494 = 0U;
static volatile int32_t x508 = INT32_MIN;
int32_t x511 = -127;
int32_t t96 = 42363541;
int64_t t98 = -60551709718409620LL;
int32_t x529 = INT32_MAX;
uint64_t x532 = 4LLU;
uint64_t x536 = 3017LLU;
volatile uint64_t t100 = 132228LLU;
int16_t x547 = INT16_MIN;
uint64_t x553 = UINT64_MAX;
uint16_t x554 = UINT16_MAX;
volatile int16_t x556 = -1;
uint16_t x566 = 8408U;
uint16_t x573 = 54U;
volatile int32_t t108 = 19988;
uint8_t x583 = 2U;
static int8_t x588 = -1;
uint64_t x590 = 72299802LLU;
uint64_t t112 = 1725LLU;
uint32_t x593 = 1812845U;
uint8_t x602 = 30U;
int16_t x603 = INT16_MIN;
uint32_t x607 = 2582U;
static int64_t x610 = -20880598653467LL;
uint8_t x615 = UINT8_MAX;
int16_t x627 = -1;
volatile uint8_t x628 = UINT8_MAX;
int32_t t121 = 88118;
int8_t x680 = 0;
uint32_t t126 = 13023U;
int16_t x689 = INT16_MIN;
volatile int8_t x691 = -1;
int16_t x692 = INT16_MIN;
int64_t x693 = -1LL;
static uint64_t x701 = 1LLU;
int64_t x704 = -47LL;
static int8_t x709 = -1;
int16_t x712 = INT16_MIN;
uint8_t x715 = UINT8_MAX;
int32_t x718 = 238258000;
int32_t x726 = INT32_MIN;
int8_t x727 = INT8_MIN;
volatile uint16_t x730 = UINT16_MAX;
static int64_t t136 = INT64_MAX;
static uint64_t x747 = 4121583576267174LLU;
uint64_t t138 = 240461LLU;
int32_t x765 = INT32_MIN;
int16_t x766 = -263;
static uint16_t x778 = UINT16_MAX;
volatile uint64_t x779 = UINT64_MAX;
static uint64_t t142 = 1507611106817LLU;
uint64_t x785 = 1048970394779921709LLU;
static int32_t x787 = -1;
static uint8_t x797 = UINT8_MAX;
int16_t x802 = -23;
int32_t x804 = -1;
volatile int32_t t147 = 3439;
uint64_t x810 = 326209951LLU;
volatile int8_t x818 = INT8_MAX;
int64_t t151 = -109505744260561LL;
static int8_t x822 = -1;
int64_t x823 = 49184858933LL;
static volatile int16_t x824 = 360;
static volatile int64_t t152 = -5751492LL;
int8_t x826 = INT8_MIN;
int16_t x827 = INT16_MAX;
uint16_t x828 = UINT16_MAX;
int64_t t154 = INT64_MAX;
uint16_t x843 = 4072U;
int8_t x851 = -8;
static int32_t t157 = -5477415;
int16_t x856 = -1;
volatile uint32_t x875 = UINT32_MAX;
int8_t x876 = -4;
int32_t x901 = INT32_MIN;
static volatile int16_t x919 = -1;
int32_t x920 = 120316315;
volatile int32_t x932 = 892;
int16_t x937 = -135;
static uint64_t x958 = 2LLU;
int16_t x991 = INT16_MAX;
uint16_t x993 = UINT16_MAX;
int8_t x998 = INT8_MAX;
int16_t x1000 = INT16_MIN;
uint32_t x1016 = 5U;
int32_t x1024 = INT32_MIN;
int32_t x1042 = 120843;
int64_t x1050 = INT64_MIN;
volatile uint32_t t183 = 6U;
static int64_t x1073 = -1LL;
int32_t t187 = 30255649;
volatile int32_t t188 = -7;
int32_t x1082 = INT32_MIN;
int16_t x1084 = 1688;
int8_t x1088 = INT8_MIN;
uint16_t x1092 = UINT16_MAX;
int16_t x1106 = INT16_MAX;
volatile int32_t t194 = 0;
int8_t x1113 = -1;
volatile int8_t x1116 = -1;
uint8_t x1117 = UINT8_MAX;
int32_t t196 = 218595279;


void f0(void) {
    	volatile int64_t x2 = INT64_MIN;
	uint8_t x3 = 99U;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -18278;

    t0 = (((x1!=x2)+x3)*x4);

    if (t0 != 6553500) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 110917009LLU;
	int8_t x7 = INT8_MIN;
	static int16_t x8 = 233;
	volatile int32_t t1 = 20727;

    t1 = (((x5!=x6)+x7)*x8);

    if (t1 != -29591) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	volatile uint8_t x11 = UINT8_MAX;
	volatile int32_t t2 = 63099268;

    t2 = (((x9!=x10)+x11)*x12);

    if (t2 != -256) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x19 = -1LL;
	uint8_t x20 = UINT8_MAX;
	volatile int64_t t3 = 11310344991LL;

    t3 = (((x17!=x18)+x19)*x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x22 = 941U;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t4 = -2878268;

    t4 = (((x21!=x22)+x23)*x24);

    if (t4 != 4194176) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = INT32_MIN;
	static volatile uint64_t x28 = 29874508118297965LLU;
	static uint64_t t5 = 31020166225992983LLU;

    t5 = (((x25!=x26)+x27)*x28);

    if (t5 != 14008798615583351394LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x29 = -2869LL;
	static volatile int32_t t6 = 1055609872;

    t6 = (((x29!=x30)+x31)*x32);

    if (t6 != -9) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = -1LL;
	int32_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t7 = -440311;

    t7 = (((x33!=x34)+x35)*x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = UINT64_MAX;
	volatile int8_t x38 = INT8_MIN;
	int16_t x40 = -1;
	volatile int32_t t8 = 10626;

    t8 = (((x37!=x38)+x39)*x40);

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x41 = 30LLU;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = -1LL;
	int64_t t9 = 238304LL;

    t9 = (((x41!=x42)+x43)*x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	volatile int8_t x46 = -2;
	int64_t x47 = 28841696764LL;
	uint32_t x48 = 215U;

    t10 = (((x45!=x46)+x47)*x48);

    if (t10 != 6200964804475LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = 5;
	uint8_t x54 = 44U;
	uint16_t x55 = 317U;
	int64_t x56 = 33059442LL;
	volatile int64_t t11 = 0LL;

    t11 = (((x53!=x54)+x55)*x56);

    if (t11 != 10512902556LL) { NG(); } else { ; }
	
}

void f12(void) {
    

    t12 = (((x57!=x58)+x59)*x60);

    if (t12 != 4294967289U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = 3874754;
	static uint32_t x63 = 221U;
	static uint8_t x64 = UINT8_MAX;
	static uint32_t t13 = 2075853709U;

    t13 = (((x61!=x62)+x63)*x64);

    if (t13 != 56610U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MIN;
	uint8_t x71 = UINT8_MAX;

    t14 = (((x69!=x70)+x71)*x72);

    if (t14 != 2093495423U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x74 = -1;
	static volatile int32_t x75 = 10779423;
	volatile uint32_t x76 = UINT32_MAX;
	uint32_t t15 = 50447039U;

    t15 = (((x73!=x74)+x75)*x76);

    if (t15 != 4284187873U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -155961834LL;
	static uint16_t x78 = UINT16_MAX;
	int32_t x79 = -3157;
	static volatile uint16_t x80 = 3U;
	volatile int32_t t16 = -15789;

    t16 = (((x77!=x78)+x79)*x80);

    if (t16 != -9468) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile int8_t x86 = -3;
	uint8_t x87 = 8U;
	volatile uint8_t x88 = UINT8_MAX;
	static int32_t t17 = 351650491;

    t17 = (((x85!=x86)+x87)*x88);

    if (t17 != 2295) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	volatile int16_t x91 = 1;
	static int32_t x92 = -3342;
	int32_t t18 = 0;

    t18 = (((x89!=x90)+x91)*x92);

    if (t18 != -3342) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = INT16_MIN;
	volatile int8_t x94 = 38;
	int64_t x95 = 44171642LL;
	static volatile uint8_t x96 = UINT8_MAX;
	int64_t t19 = -85361956687436877LL;

    t19 = (((x93!=x94)+x95)*x96);

    if (t19 != 11263768965LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x97 = 30U;
	volatile uint64_t x98 = 0LLU;
	int8_t x99 = INT8_MAX;
	int64_t x100 = 311124178LL;
	volatile int64_t t20 = -38LL;

    t20 = (((x97!=x98)+x99)*x100);

    if (t20 != 39823894784LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x106 = 154LL;
	int64_t x107 = -1LL;
	int32_t x108 = 8534;
	int64_t t21 = -17225667LL;

    t21 = (((x105!=x106)+x107)*x108);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x109 = UINT64_MAX;
	uint32_t x111 = 47123U;
	uint8_t x112 = UINT8_MAX;
	static volatile uint32_t t22 = 29U;

    t22 = (((x109!=x110)+x111)*x112);

    if (t22 != 12016620U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x121 = UINT32_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	int64_t x123 = 30618177LL;
	int16_t x124 = INT16_MIN;
	volatile int64_t t23 = -44856LL;

    t23 = (((x121!=x122)+x123)*x124);

    if (t23 != -1003296456704LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x125 = 10620641724LL;
	static int8_t x126 = 14;
	static int32_t x127 = -1;
	int32_t x128 = 51442;
	volatile int32_t t24 = -1059402596;

    t24 = (((x125!=x126)+x127)*x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x129 = 1864473244LLU;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MAX;
	uint32_t x132 = 227276788U;
	volatile uint32_t t25 = 7U;

    t25 = (((x129!=x130)+x131)*x132);

    if (t25 != 4227465216U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x133 = -18;
	int8_t x135 = INT8_MIN;
	int16_t x136 = -2476;
	volatile int32_t t26 = 5263528;

    t26 = (((x133!=x134)+x135)*x136);

    if (t26 != 314452) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x141 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = -1;
	int32_t t27 = -51;

    t27 = (((x141!=x142)+x143)*x144);

    if (t27 != -65536) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x145 = INT8_MIN;
	int32_t x146 = 653;
	int8_t x147 = 3;
	volatile int64_t x148 = -1LL;
	volatile int64_t t28 = 1226LL;

    t28 = (((x145!=x146)+x147)*x148);

    if (t28 != -4LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x149 = UINT16_MAX;
	int16_t x151 = INT16_MIN;
	static uint32_t x152 = 655028U;
	static uint32_t t29 = 301U;

    t29 = (((x149!=x150)+x151)*x152);

    if (t29 != 11534004U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x159 = 2806278LLU;
	volatile uint16_t x160 = 98U;
	uint64_t t30 = 214LLU;

    t30 = (((x157!=x158)+x159)*x160);

    if (t30 != 275015342LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x163 = 1U;

    t31 = (((x161!=x162)+x163)*x164);

    if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x165 = 49611562748256183LLU;
	volatile int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	int8_t x168 = -1;

    t32 = (((x165!=x166)+x167)*x168);

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x173 = INT32_MAX;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	uint64_t t33 = 1LLU;

    t33 = (((x173!=x174)+x175)*x176);

    if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MAX;
	int16_t x180 = -1;
	static int32_t t34 = -1047006776;

    t34 = (((x177!=x178)+x179)*x180);

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x185 = 6U;
	static int64_t x186 = INT64_MIN;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = -1;

    t35 = (((x185!=x186)+x187)*x188);

    if (t35 != -256) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = -231912553;
	uint8_t x190 = UINT8_MAX;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 0U;
	int32_t t36 = 11862;

    t36 = (((x189!=x190)+x191)*x192);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x193 = -5LL;
	volatile int8_t x194 = INT8_MIN;
	static volatile int64_t x195 = INT64_MIN;
	uint64_t t37 = 42257965LLU;

    t37 = (((x193!=x194)+x195)*x196);

    if (t37 != 10896LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x197 = 1350U;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 1900930LLU;
	int64_t x200 = 14697803951394LL;
	static volatile uint64_t t38 = 109LLU;

    t38 = (((x197!=x198)+x199)*x200);

    if (t38 != 9492767089417796198LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x203 = -1;
	volatile int32_t t39 = -7333316;

    t39 = (((x201!=x202)+x203)*x204);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x205 = -23;
	uint32_t x206 = 222665U;
	static int64_t x207 = 5189022626LL;
	volatile uint64_t t40 = 3467541072812131LLU;

    t40 = (((x205!=x206)+x207)*x208);

    if (t40 != 5832461432748LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x213 = -2361LL;
	int32_t x214 = INT32_MIN;
	int8_t x216 = -1;
	static int32_t t41 = 773087;

    t41 = (((x213!=x214)+x215)*x216);

    if (t41 != -65536) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x217 = 1646655;
	int8_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	static uint8_t x220 = 0U;
	static volatile int32_t t42 = 606;

    t42 = (((x217!=x218)+x219)*x220);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x221 = 13LLU;
	int32_t x222 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 1029U;
	volatile uint32_t t43 = 81U;

    t43 = (((x221!=x222)+x223)*x224);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x225 = 79321450U;
	int64_t x226 = INT64_MIN;
	uint32_t x227 = 1011177526U;
	uint64_t x228 = 27367591134351LLU;
	static volatile uint64_t t44 = 88576314154718LLU;

    t44 = (((x225!=x226)+x227)*x228);

    if (t44 != 3377012615841505977LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x230 = 0;
	int32_t x231 = -1;
	uint16_t x232 = 14U;
	static volatile int32_t t45 = -130;

    t45 = (((x229!=x230)+x231)*x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x237 = -14109028;
	int32_t x238 = -304176857;
	uint64_t x239 = 9117026654570502025LLU;
	uint32_t x240 = 626U;
	uint64_t t46 = 4948487LLU;

    t46 = (((x237!=x238)+x239)*x240);

    if (t46 != 7214766984882818932LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x242 = INT64_MAX;
	int8_t x243 = INT8_MAX;
	static volatile int16_t x244 = -1;
	int32_t t47 = -1065;

    t47 = (((x241!=x242)+x243)*x244);

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x245 = 0;
	static volatile int16_t x246 = INT16_MIN;
	int64_t x247 = -1LL;
	int16_t x248 = INT16_MIN;
	int64_t t48 = -13936LL;

    t48 = (((x245!=x246)+x247)*x248);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x265 = 6834U;
	volatile int32_t x266 = 34157;
	int64_t x267 = -1LL;
	volatile int8_t x268 = 16;
	volatile int64_t t49 = -51581785LL;

    t49 = (((x265!=x266)+x267)*x268);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x269 = 245708286;
	uint8_t x270 = 6U;
	int16_t x271 = INT16_MIN;
	static int8_t x272 = INT8_MAX;
	static volatile int32_t t50 = -41;

    t50 = (((x269!=x270)+x271)*x272);

    if (t50 != -4161409) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x278 = -14;
	int16_t x280 = INT16_MIN;
	static int32_t t51 = -774119323;

    t51 = (((x277!=x278)+x279)*x280);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = 8640475;
	int64_t x282 = INT64_MAX;
	int32_t x283 = 1430939;
	uint8_t x284 = 0U;
	volatile int32_t t52 = 0;

    t52 = (((x281!=x282)+x283)*x284);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x285 = INT8_MIN;
	static uint8_t x286 = 16U;
	int32_t x287 = 29;
	uint32_t x288 = 76U;
	static uint32_t t53 = 3U;

    t53 = (((x285!=x286)+x287)*x288);

    if (t53 != 2280U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x289 = -1;
	static int32_t x290 = INT32_MAX;
	uint32_t x291 = 30242U;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t54 = 1052288005821LLU;

    t54 = (((x289!=x290)+x291)*x292);

    if (t54 != 18446744073709521373LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x293 = 15539980;
	volatile uint16_t x294 = UINT16_MAX;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t55 = 306LLU;

    t55 = (((x293!=x294)+x295)*x296);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x298 = -34892483;
	static int64_t x299 = -69250LL;
	volatile uint8_t x300 = UINT8_MAX;
	int64_t t56 = 1322495019670934804LL;

    t56 = (((x297!=x298)+x299)*x300);

    if (t56 != -17658495LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x301 = 1U;
	int64_t x302 = INT64_MAX;
	uint8_t x303 = 1U;
	uint32_t x304 = 7943U;
	static volatile uint32_t t57 = 14812U;

    t57 = (((x301!=x302)+x303)*x304);

    if (t57 != 15886U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x305 = -1;
	int16_t x307 = -1;
	volatile int32_t t58 = 1867;

    t58 = (((x305!=x306)+x307)*x308);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x309 = -61;
	volatile int64_t x310 = INT64_MAX;
	int8_t x311 = 0;
	int32_t t59 = -2;

    t59 = (((x309!=x310)+x311)*x312);

    if (t59 != 58) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x321 = 159200U;
	static int16_t x322 = INT16_MIN;
	volatile int16_t x323 = INT16_MAX;
	volatile int32_t t60 = -987;

    t60 = (((x321!=x322)+x323)*x324);

    if (t60 != -65536) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x333 = INT64_MAX;
	volatile int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MAX;
	int32_t t61 = -201;

    t61 = (((x333!=x334)+x335)*x336);

    if (t61 != 16256) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x341 = -8;
	int64_t x342 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t62 = 911LLU;

    t62 = (((x341!=x342)+x343)*x344);

    if (t62 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x346 = -156;
	int64_t x347 = -1LL;
	int8_t x348 = -1;
	volatile int64_t t63 = -348754870353798LL;

    t63 = (((x345!=x346)+x347)*x348);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x350 = INT8_MIN;
	volatile uint64_t x352 = 33446LLU;
	volatile uint64_t t64 = 8559198818853848842LLU;

    t64 = (((x349!=x350)+x351)*x352);

    if (t64 != 77059584LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x354 = -41;
	static uint8_t x356 = UINT8_MAX;
	int32_t t65 = 25;

    t65 = (((x353!=x354)+x355)*x356);

    if (t65 != 403155) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x357 = INT8_MAX;
	uint16_t x358 = 243U;
	int16_t x359 = INT16_MIN;
	static volatile int8_t x360 = INT8_MIN;
	int32_t t66 = -259;

    t66 = (((x357!=x358)+x359)*x360);

    if (t66 != 4194176) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x363 = 284265669LLU;
	uint32_t x364 = 1671202560U;

    t67 = (((x361!=x362)+x363)*x364);

    if (t67 != 475065515424115200LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x365 = UINT64_MAX;
	volatile uint32_t x367 = 588030U;

    t68 = (((x365!=x366)+x367)*x368);

    if (t68 != 2206236672U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x369 = INT32_MAX;
	static volatile int8_t x371 = 1;
	int32_t x372 = 262261674;

    t69 = (((x369!=x370)+x371)*x372);

    if (t69 != 524523348) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = 22U;
	volatile int64_t x376 = 1066271058418LL;

    t70 = (((x373!=x374)+x375)*x376);

    if (t70 != 24524234343614LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x381 = INT16_MIN;

    t71 = (((x381!=x382)+x383)*x384);

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x386 = 201U;
	int64_t x387 = 3328730LL;
	static int64_t x388 = -1LL;

    t72 = (((x385!=x386)+x387)*x388);

    if (t72 != -3328731LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x389 = UINT32_MAX;
	static uint8_t x390 = UINT8_MAX;
	static int32_t x391 = -1;
	int32_t t73 = 32534;

    t73 = (((x389!=x390)+x391)*x392);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x393 = 1U;
	int8_t x394 = -1;
	int8_t x395 = 47;
	volatile uint32_t x396 = 25171U;
	volatile uint32_t t74 = 427015U;

    t74 = (((x393!=x394)+x395)*x396);

    if (t74 != 1208208U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x397 = INT8_MAX;
	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = 543636U;
	uint8_t x400 = UINT8_MAX;
	volatile uint32_t t75 = 885U;

    t75 = (((x397!=x398)+x399)*x400);

    if (t75 != 138627435U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x401 = 99U;
	int64_t x404 = -25819499575LL;
	volatile int64_t t76 = 528655569055LL;

    t76 = (((x401!=x402)+x403)*x404);

    if (t76 != -51638999150LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x407 = 0U;
	volatile int32_t x408 = -481500;
	volatile int32_t t77 = -498707262;

    t77 = (((x405!=x406)+x407)*x408);

    if (t77 != -481500) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x409 = INT64_MIN;
	uint16_t x410 = 12163U;
	uint16_t x411 = 14U;
	volatile uint32_t x412 = 15623U;
	uint32_t t78 = 50U;

    t78 = (((x409!=x410)+x411)*x412);

    if (t78 != 234345U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x413 = INT64_MAX;
	static volatile int64_t x414 = INT64_MIN;
	uint64_t x416 = 73184638572016LLU;
	uint64_t t79 = 13099154332LLU;

    t79 = (((x413!=x414)+x415)*x416);

    if (t79 != 9367633737218048LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x417 = 42;
	static uint32_t x420 = 10658U;
	volatile uint32_t t80 = 781909201U;

    t80 = (((x417!=x418)+x419)*x420);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x425 = 20U;
	volatile int8_t x426 = INT8_MIN;
	static volatile int32_t t81 = 1077380;

    t81 = (((x425!=x426)+x427)*x428);

    if (t81 != -120) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x429 = -2264;
	int32_t x430 = INT32_MAX;
	volatile int8_t x431 = INT8_MIN;
	uint8_t x432 = 83U;
	volatile int32_t t82 = 3;

    t82 = (((x429!=x430)+x431)*x432);

    if (t82 != -10541) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x451 = INT8_MIN;
	static volatile uint16_t x452 = 12U;
	int32_t t83 = -7;

    t83 = (((x449!=x450)+x451)*x452);

    if (t83 != -1524) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x453 = INT8_MAX;
	volatile int32_t x454 = INT32_MIN;
	int8_t x456 = -1;
	int32_t t84 = 5128;

    t84 = (((x453!=x454)+x455)*x456);

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x457 = -1;
	volatile int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MAX;
	static volatile int64_t t85 = 1163LL;

    t85 = (((x457!=x458)+x459)*x460);

    if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x461 = 1794U;
	uint32_t x462 = 478681U;
	uint64_t x463 = 20668973567155088LLU;
	uint32_t x464 = 161746389U;

    t86 = (((x461!=x462)+x463)*x464);

    if (t86 != 9963601328899804325LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x465 = 831451225U;
	volatile uint16_t x466 = 1653U;
	static int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MAX;
	volatile int32_t t87 = -1;

    t87 = (((x465!=x466)+x467)*x468);

    if (t87 != -4161409) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x473 = -1;
	volatile int32_t x474 = INT32_MAX;
	int16_t x475 = -1;
	volatile uint64_t x476 = 53455381678626LLU;
	volatile uint64_t t88 = 473223196821LLU;

    t88 = (((x473!=x474)+x475)*x476);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x478 = -1;
	int32_t x479 = 1;
	static volatile int8_t x480 = INT8_MIN;
	static int32_t t89 = 60852;

    t89 = (((x477!=x478)+x479)*x480);

    if (t89 != -256) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x481 = 1LL;
	static int8_t x482 = -2;
	int8_t x483 = INT8_MAX;
	uint16_t x484 = 1U;

    t90 = (((x481!=x482)+x483)*x484);

    if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x489 = 215162416131932465LL;
	static int64_t x490 = INT64_MIN;
	volatile uint8_t x492 = 1U;
	static int32_t t91 = -8959;

    t91 = (((x489!=x490)+x491)*x492);

    if (t91 != 256) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x493 = UINT16_MAX;
	int32_t x495 = 4408;
	int16_t x496 = INT16_MIN;
	int32_t t92 = 50540231;

    t92 = (((x493!=x494)+x495)*x496);

    if (t92 != -144474112) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x497 = 108;
	volatile int8_t x498 = -22;
	int32_t x499 = -11618;
	uint64_t x500 = 1510472585LLU;
	uint64_t t93 = 13LLU;

    t93 = (((x497!=x498)+x499)*x500);

    if (t93 != 18446726526549531671LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x501 = 636U;
	int16_t x502 = -1970;
	int16_t x503 = INT16_MIN;
	static int16_t x504 = -222;
	volatile int32_t t94 = -2244;

    t94 = (((x501!=x502)+x503)*x504);

    if (t94 != 7274274) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x505 = 2U;
	volatile uint64_t x506 = UINT64_MAX;
	int64_t x507 = 446810LL;
	int64_t t95 = -10661585589LL;

    t95 = (((x505!=x506)+x507)*x508);

    if (t95 != -959519316246528LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x509 = INT16_MIN;
	volatile uint8_t x510 = 113U;
	uint8_t x512 = 22U;

    t96 = (((x509!=x510)+x511)*x512);

    if (t96 != -2772) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x521 = INT64_MAX;
	uint16_t x522 = 8989U;
	volatile int16_t x523 = INT16_MIN;
	static volatile int64_t x524 = -628713922LL;
	volatile int64_t t97 = 16517288LL;

    t97 = (((x521!=x522)+x523)*x524);

    if (t97 != 20601069082174LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x525 = 39U;
	static int8_t x526 = 14;
	int64_t x527 = 2LL;
	volatile uint8_t x528 = 53U;

    t98 = (((x525!=x526)+x527)*x528);

    if (t98 != 159LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x530 = INT32_MAX;
	static int64_t x531 = -1LL;
	volatile uint64_t t99 = 12930347LLU;

    t99 = (((x529!=x530)+x531)*x532);

    if (t99 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x533 = 3424716829499LLU;
	volatile int16_t x534 = INT16_MIN;
	int32_t x535 = 1;

    t100 = (((x533!=x534)+x535)*x536);

    if (t100 != 6034LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x541 = -1;
	uint8_t x542 = 3U;
	uint64_t x543 = 289342LLU;
	int32_t x544 = INT32_MIN;
	volatile uint64_t t101 = 2237490877476853LLU;

    t101 = (((x541!=x542)+x543)*x544);

    if (t101 != 18446122714348388352LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x545 = -1;
	static uint16_t x546 = 0U;
	volatile int8_t x548 = 7;
	volatile int32_t t102 = -1895;

    t102 = (((x545!=x546)+x547)*x548);

    if (t102 != -229369) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x549 = -15LL;
	int64_t x550 = INT64_MAX;
	static int16_t x551 = 1248;
	static int16_t x552 = -1;
	volatile int32_t t103 = -20521;

    t103 = (((x549!=x550)+x551)*x552);

    if (t103 != -1249) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x555 = INT32_MIN;
	int32_t t104 = INT32_MAX;

    t104 = (((x553!=x554)+x555)*x556);

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x561 = 3092U;
	volatile int8_t x562 = -1;
	uint32_t x563 = 3U;
	int32_t x564 = INT32_MAX;
	uint32_t t105 = 575905U;

    t105 = (((x561!=x562)+x563)*x564);

    if (t105 != 4294967292U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x567 = INT16_MAX;
	uint8_t x568 = 1U;
	static volatile int32_t t106 = 48;

    t106 = (((x565!=x566)+x567)*x568);

    if (t106 != 32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x569 = INT32_MAX;
	int16_t x570 = -1;
	volatile int8_t x571 = -4;
	uint16_t x572 = UINT16_MAX;
	int32_t t107 = 18241815;

    t107 = (((x569!=x570)+x571)*x572);

    if (t107 != -196605) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x574 = -1;
	int8_t x575 = INT8_MAX;
	volatile uint8_t x576 = UINT8_MAX;

    t108 = (((x573!=x574)+x575)*x576);

    if (t108 != 32640) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x578 = INT16_MAX;
	int32_t x579 = INT32_MIN;
	int32_t x580 = -1;
	volatile int32_t t109 = INT32_MAX;

    t109 = (((x577!=x578)+x579)*x580);

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x581 = 37U;
	int16_t x582 = -1;
	int8_t x584 = -1;
	int32_t t110 = -16;

    t110 = (((x581!=x582)+x583)*x584);

    if (t110 != -3) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x585 = -2;
	volatile uint64_t x586 = UINT64_MAX;
	static int32_t x587 = -1;
	int32_t t111 = -204751348;

    t111 = (((x585!=x586)+x587)*x588);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x589 = INT8_MIN;
	uint64_t x591 = 2111852152LLU;
	volatile uint64_t x592 = 317895467499404286LLU;

    t112 = (((x589!=x590)+x591)*x592);

    if (t112 != 6193143365431049998LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x594 = -1;
	int64_t x595 = -1LL;
	static int16_t x596 = INT16_MIN;
	int64_t t113 = -249955701992141222LL;

    t113 = (((x593!=x594)+x595)*x596);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x597 = UINT8_MAX;
	int16_t x598 = INT16_MIN;
	static uint16_t x599 = 7672U;
	int8_t x600 = INT8_MIN;
	static int32_t t114 = -49297;

    t114 = (((x597!=x598)+x599)*x600);

    if (t114 != -982144) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x601 = -1;
	int32_t x604 = -1;
	volatile int32_t t115 = 37371;

    t115 = (((x601!=x602)+x603)*x604);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x605 = UINT32_MAX;
	uint8_t x606 = 2U;
	uint64_t x608 = 702065986558LLU;
	volatile uint64_t t116 = 62447359574819LLU;

    t116 = (((x605!=x606)+x607)*x608);

    if (t116 != 1813436443279314LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x609 = -27;
	int64_t x611 = -1LL;
	uint64_t x612 = 210973360334683003LLU;
	volatile uint64_t t117 = 21LLU;

    t117 = (((x609!=x610)+x611)*x612);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	int64_t x614 = INT64_MAX;
	uint8_t x616 = UINT8_MAX;
	int32_t t118 = 852;

    t118 = (((x613!=x614)+x615)*x616);

    if (t118 != 65280) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x621 = -1;
	int8_t x622 = INT8_MAX;
	static uint8_t x623 = UINT8_MAX;
	static int16_t x624 = -1580;
	int32_t t119 = 21725019;

    t119 = (((x621!=x622)+x623)*x624);

    if (t119 != -404480) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x625 = INT16_MIN;
	volatile int8_t x626 = 1;
	static volatile int32_t t120 = -2;

    t120 = (((x625!=x626)+x627)*x628);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x633 = 1177973450LLU;
	uint64_t x634 = 13149LLU;
	static int8_t x635 = INT8_MIN;
	uint8_t x636 = UINT8_MAX;

    t121 = (((x633!=x634)+x635)*x636);

    if (t121 != -32385) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x637 = INT16_MIN;
	uint32_t x638 = 188811323U;
	int16_t x639 = -1;
	static uint16_t x640 = UINT16_MAX;
	static volatile int32_t t122 = 1;

    t122 = (((x637!=x638)+x639)*x640);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x645 = 185U;
	int64_t x646 = -1LL;
	static int16_t x647 = 562;
	static uint8_t x648 = UINT8_MAX;
	volatile int32_t t123 = -269868196;

    t123 = (((x645!=x646)+x647)*x648);

    if (t123 != 143565) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x649 = INT64_MIN;
	int32_t x650 = INT32_MAX;
	volatile int32_t x651 = 3;
	uint64_t x652 = 89564889940LLU;
	uint64_t t124 = 60832862517LLU;

    t124 = (((x649!=x650)+x651)*x652);

    if (t124 != 358259559760LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x653 = INT32_MAX;
	static int16_t x654 = 53;
	uint8_t x655 = 1U;
	int8_t x656 = INT8_MAX;
	volatile int32_t t125 = -34186015;

    t125 = (((x653!=x654)+x655)*x656);

    if (t125 != 254) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x677 = UINT64_MAX;
	static uint64_t x678 = 4567264LLU;
	volatile uint32_t x679 = UINT32_MAX;

    t126 = (((x677!=x678)+x679)*x680);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x685 = -2;
	int8_t x686 = -13;
	uint64_t x687 = 164834614391754LLU;
	int16_t x688 = INT16_MIN;
	uint64_t t127 = 19383LLU;

    t127 = (((x685!=x686)+x687)*x688);

    if (t127 != 13045443429320523776LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x690 = UINT16_MAX;
	int32_t t128 = 91;

    t128 = (((x689!=x690)+x691)*x692);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x694 = 927U;
	int8_t x695 = INT8_MIN;
	int64_t x696 = 94512427641LL;
	static volatile int64_t t129 = -793LL;

    t129 = (((x693!=x694)+x695)*x696);

    if (t129 != -12003078310407LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x702 = 0;
	static int8_t x703 = -1;
	volatile int64_t t130 = -13675LL;

    t130 = (((x701!=x702)+x703)*x704);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x710 = -97;
	volatile int8_t x711 = -53;
	volatile int32_t t131 = -189;

    t131 = (((x709!=x710)+x711)*x712);

    if (t131 != 1703936) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x713 = 1U;
	int32_t x714 = INT32_MIN;
	static int32_t x716 = -510;
	int32_t t132 = 233284525;

    t132 = (((x713!=x714)+x715)*x716);

    if (t132 != -130560) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x717 = -1;
	static uint64_t x719 = 7419687567825LLU;
	uint16_t x720 = 0U;
	volatile uint64_t t133 = 241578185967503773LLU;

    t133 = (((x717!=x718)+x719)*x720);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x721 = 44U;
	uint64_t x722 = UINT64_MAX;
	uint8_t x723 = 0U;
	uint8_t x724 = UINT8_MAX;
	int32_t t134 = -162695;

    t134 = (((x721!=x722)+x723)*x724);

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x725 = INT32_MAX;
	volatile int64_t x728 = -1LL;
	static volatile int64_t t135 = 14696957930LL;

    t135 = (((x725!=x726)+x727)*x728);

    if (t135 != 127LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x729 = INT64_MIN;
	volatile int64_t x731 = INT64_MIN;
	int16_t x732 = -1;

    t136 = (((x729!=x730)+x731)*x732);

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x733 = 1325U;
	int8_t x734 = 18;
	uint64_t x735 = 3812005113313731348LLU;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t137 = 57437LLU;

    t137 = (((x733!=x734)+x735)*x736);

    if (t137 != 14634738960395820267LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x745 = 142363494917664LLU;
	static int8_t x746 = INT8_MAX;
	uint64_t x748 = 3687LLU;

    t138 = (((x745!=x746)+x747)*x748);

    if (t138 != 15196278645697074225LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x749 = -1;
	int64_t x750 = -1LL;
	volatile int64_t x751 = -1LL;
	static int32_t x752 = INT32_MAX;
	volatile int64_t t139 = -10760612005LL;

    t139 = (((x749!=x750)+x751)*x752);

    if (t139 != -2147483647LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x753 = 3U;
	int64_t x754 = INT64_MIN;
	int64_t x755 = -1LL;
	static uint16_t x756 = UINT16_MAX;
	static int64_t t140 = 26276067663019LL;

    t140 = (((x753!=x754)+x755)*x756);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x767 = -1;
	int16_t x768 = -1;
	volatile int32_t t141 = -1076843;

    t141 = (((x765!=x766)+x767)*x768);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x777 = -1;
	int8_t x780 = 1;

    t142 = (((x777!=x778)+x779)*x780);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x781 = -1;
	volatile int32_t x782 = INT32_MIN;
	uint16_t x783 = 262U;
	uint32_t x784 = 3U;
	uint32_t t143 = 8035U;

    t143 = (((x781!=x782)+x783)*x784);

    if (t143 != 789U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x786 = 50;
	uint32_t x788 = 1908547048U;
	uint32_t t144 = 209U;

    t144 = (((x785!=x786)+x787)*x788);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x793 = -33504695LL;
	static uint16_t x794 = 166U;
	uint32_t x795 = 21537U;
	static volatile uint32_t x796 = 68U;
	uint32_t t145 = 7349445U;

    t145 = (((x793!=x794)+x795)*x796);

    if (t145 != 1464584U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x798 = -4027897LL;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = -1;
	volatile int32_t t146 = 65;

    t146 = (((x797!=x798)+x799)*x800);

    if (t146 != -256) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x801 = -1;
	uint16_t x803 = 13U;

    t147 = (((x801!=x802)+x803)*x804);

    if (t147 != -14) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x805 = -15460576;
	static volatile int32_t x806 = 8342031;
	uint32_t x807 = 1665991U;
	int16_t x808 = 3;
	static uint32_t t148 = 70964U;

    t148 = (((x805!=x806)+x807)*x808);

    if (t148 != 4997976U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int64_t x811 = -1LL;
	volatile int16_t x812 = -794;
	volatile int64_t t149 = -3LL;

    t149 = (((x809!=x810)+x811)*x812);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x813 = 5;
	int8_t x814 = INT8_MIN;
	static uint16_t x815 = 26U;
	int8_t x816 = -9;
	int32_t t150 = 470;

    t150 = (((x813!=x814)+x815)*x816);

    if (t150 != -243) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x817 = UINT16_MAX;
	int64_t x819 = -151862LL;
	int16_t x820 = -85;

    t151 = (((x817!=x818)+x819)*x820);

    if (t151 != 12908185LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x821 = INT16_MIN;

    t152 = (((x821!=x822)+x823)*x824);

    if (t152 != 17706549216240LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x825 = -164LL;
	int32_t t153 = 144983;

    t153 = (((x825!=x826)+x827)*x828);

    if (t153 != 2147450880) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x833 = 1;
	volatile int8_t x834 = INT8_MIN;
	int64_t x835 = INT64_MIN;
	int64_t x836 = -1LL;

    t154 = (((x833!=x834)+x835)*x836);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x841 = INT16_MIN;
	static int32_t x842 = 24;
	volatile int64_t x844 = 15LL;
	int64_t t155 = -101403714366630LL;

    t155 = (((x841!=x842)+x843)*x844);

    if (t155 != 61095LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x845 = 209818U;
	volatile int64_t x846 = INT64_MIN;
	int64_t x847 = -217141LL;
	int16_t x848 = -1;
	static int64_t t156 = -52009694LL;

    t156 = (((x845!=x846)+x847)*x848);

    if (t156 != 217140LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x849 = INT8_MIN;
	int32_t x850 = 7777;
	static uint16_t x852 = 1U;

    t157 = (((x849!=x850)+x851)*x852);

    if (t157 != -7) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x853 = 2765256644569258187LL;
	int16_t x854 = INT16_MAX;
	int8_t x855 = INT8_MIN;
	int32_t t158 = -110;

    t158 = (((x853!=x854)+x855)*x856);

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x861 = -1LL;
	uint32_t x862 = 4897453U;
	volatile int16_t x863 = 29;
	uint32_t x864 = 55461080U;
	uint32_t t159 = 252910832U;

    t159 = (((x861!=x862)+x863)*x864);

    if (t159 != 1663832400U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x865 = -1;
	int32_t x866 = INT32_MIN;
	int8_t x867 = INT8_MIN;
	uint32_t x868 = 80225U;
	uint32_t t160 = 455U;

    t160 = (((x865!=x866)+x867)*x868);

    if (t160 != 4284778721U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x873 = 264065U;
	int8_t x874 = 0;
	static uint32_t t161 = 323718U;

    t161 = (((x873!=x874)+x875)*x876);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x881 = 204570206145698349LLU;
	int16_t x882 = INT16_MAX;
	uint64_t x883 = UINT64_MAX;
	int8_t x884 = INT8_MIN;
	static uint64_t t162 = 2222096421084266LLU;

    t162 = (((x881!=x882)+x883)*x884);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x885 = INT32_MIN;
	static int64_t x886 = INT64_MAX;
	int64_t x887 = 12447973094253LL;
	int64_t x888 = -1LL;
	int64_t t163 = 315978727940828LL;

    t163 = (((x885!=x886)+x887)*x888);

    if (t163 != -12447973094254LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x889 = INT64_MIN;
	uint8_t x890 = 1U;
	static int64_t x891 = INT64_MIN;
	int16_t x892 = -1;
	int64_t t164 = INT64_MAX;

    t164 = (((x889!=x890)+x891)*x892);

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x897 = -1;
	static volatile uint64_t x898 = 41591526016LLU;
	static uint16_t x899 = 4U;
	int64_t x900 = -84676LL;
	int64_t t165 = 642539252907591LL;

    t165 = (((x897!=x898)+x899)*x900);

    if (t165 != -423380LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x902 = -830;
	static int8_t x903 = -1;
	uint64_t x904 = UINT64_MAX;
	volatile uint64_t t166 = 368LLU;

    t166 = (((x901!=x902)+x903)*x904);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x917 = INT16_MIN;
	uint16_t x918 = UINT16_MAX;
	int32_t t167 = 6;

    t167 = (((x917!=x918)+x919)*x920);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x929 = -1LL;
	int64_t x930 = INT64_MIN;
	volatile uint32_t x931 = 23933U;
	uint32_t t168 = 160915086U;

    t168 = (((x929!=x930)+x931)*x932);

    if (t168 != 21349128U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x938 = 68622U;
	uint32_t x939 = 8078591U;
	static uint32_t x940 = 43605684U;
	static uint32_t t169 = 3259990U;

    t169 = (((x937!=x938)+x939)*x940);

    if (t169 != 3607266304U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x949 = -7442;
	volatile uint16_t x950 = 2U;
	int64_t x951 = INT64_MIN;
	int16_t x952 = -1;
	int64_t t170 = INT64_MAX;

    t170 = (((x949!=x950)+x951)*x952);

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x957 = -1;
	uint8_t x959 = UINT8_MAX;
	volatile uint32_t x960 = UINT32_MAX;
	static uint32_t t171 = 33544152U;

    t171 = (((x957!=x958)+x959)*x960);

    if (t171 != 4294967040U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x969 = 30U;
	int64_t x970 = INT64_MIN;
	static int16_t x971 = INT16_MIN;
	volatile int8_t x972 = INT8_MIN;
	int32_t t172 = -85464;

    t172 = (((x969!=x970)+x971)*x972);

    if (t172 != 4194176) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x973 = INT16_MAX;
	static int16_t x974 = INT16_MIN;
	int32_t x975 = -1;
	uint8_t x976 = 1U;
	int32_t t173 = 5;

    t173 = (((x973!=x974)+x975)*x976);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x981 = INT32_MIN;
	uint8_t x982 = UINT8_MAX;
	int16_t x983 = -1;
	static int16_t x984 = -196;
	static int32_t t174 = 178150403;

    t174 = (((x981!=x982)+x983)*x984);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x989 = INT8_MIN;
	int32_t x990 = INT32_MIN;
	volatile uint64_t x992 = 12LLU;
	volatile uint64_t t175 = 26164304692605LLU;

    t175 = (((x989!=x990)+x991)*x992);

    if (t175 != 393216LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x994 = 56796033354803LLU;
	uint16_t x995 = 2045U;
	uint32_t x996 = 14U;
	uint32_t t176 = 9201U;

    t176 = (((x993!=x994)+x995)*x996);

    if (t176 != 28644U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x997 = INT64_MIN;
	static uint64_t x999 = 1228322351913LLU;
	volatile uint64_t t177 = 394LLU;

    t177 = (((x997!=x998)+x999)*x1000);

    if (t177 != 18406494406882033664LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1005 = -1;
	int32_t x1006 = INT32_MIN;
	int32_t x1007 = -1;
	static int16_t x1008 = INT16_MAX;
	volatile int32_t t178 = -5;

    t178 = (((x1005!=x1006)+x1007)*x1008);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x1013 = 2U;
	int16_t x1014 = -1;
	static volatile uint16_t x1015 = 184U;
	volatile uint32_t t179 = 4536858U;

    t179 = (((x1013!=x1014)+x1015)*x1016);

    if (t179 != 925U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1021 = -328382035;
	int64_t x1022 = -47297196773LL;
	uint64_t x1023 = 6143956995373306LLU;
	uint64_t t180 = 29200335493209LLU;

    t180 = (((x1021!=x1022)+x1023)*x1024);

    if (t180 != 4963885442064711680LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1025 = -1LL;
	volatile uint16_t x1026 = 12U;
	int64_t x1027 = -13575LL;
	uint16_t x1028 = UINT16_MAX;
	int64_t t181 = 31747475LL;

    t181 = (((x1025!=x1026)+x1027)*x1028);

    if (t181 != -889572090LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1041 = INT16_MIN;
	int16_t x1043 = INT16_MIN;
	volatile int16_t x1044 = INT16_MIN;
	volatile int32_t t182 = 20295972;

    t182 = (((x1041!=x1042)+x1043)*x1044);

    if (t182 != 1073709056) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1049 = INT8_MIN;
	static int8_t x1051 = -1;
	uint32_t x1052 = 1064076985U;

    t183 = (((x1049!=x1050)+x1051)*x1052);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1053 = 7U;
	int16_t x1054 = 8;
	uint64_t x1055 = 5040232409501191LLU;
	static uint64_t x1056 = UINT64_MAX;
	static volatile uint64_t t184 = 46949941553LLU;

    t184 = (((x1053!=x1054)+x1055)*x1056);

    if (t184 != 18441703841300050424LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1057 = UINT32_MAX;
	static int8_t x1058 = 10;
	int8_t x1059 = INT8_MAX;
	volatile uint32_t x1060 = 99840U;
	uint32_t t185 = 889U;

    t185 = (((x1057!=x1058)+x1059)*x1060);

    if (t185 != 12779520U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1061 = UINT16_MAX;
	volatile int32_t x1062 = INT32_MAX;
	uint32_t x1063 = 19715U;
	int32_t x1064 = INT32_MAX;
	uint32_t t186 = 6596U;

    t186 = (((x1061!=x1062)+x1063)*x1064);

    if (t186 != 4294947580U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1074 = INT8_MIN;
	volatile int8_t x1075 = INT8_MIN;
	int8_t x1076 = INT8_MIN;

    t187 = (((x1073!=x1074)+x1075)*x1076);

    if (t187 != 16256) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1077 = INT8_MAX;
	volatile uint16_t x1078 = 0U;
	int16_t x1079 = INT16_MIN;
	static int32_t x1080 = 28760;

    t188 = (((x1077!=x1078)+x1079)*x1080);

    if (t188 != -942378920) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1081 = 995100452682464940LLU;
	int16_t x1083 = INT16_MIN;
	int32_t t189 = -26;

    t189 = (((x1081!=x1082)+x1083)*x1084);

    if (t189 != -55310696) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1085 = INT32_MIN;
	int64_t x1086 = INT64_MIN;
	int8_t x1087 = INT8_MIN;
	int32_t t190 = -1506;

    t190 = (((x1085!=x1086)+x1087)*x1088);

    if (t190 != 16256) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1089 = INT8_MAX;
	int64_t x1090 = -1LL;
	volatile int8_t x1091 = 6;
	int32_t t191 = -55734912;

    t191 = (((x1089!=x1090)+x1091)*x1092);

    if (t191 != 458745) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1101 = -1;
	int16_t x1102 = -1;
	uint64_t x1103 = 991223276LLU;
	volatile int32_t x1104 = INT32_MAX;
	uint64_t t192 = 7603289461087LLU;

    t192 = (((x1101!=x1102)+x1103)*x1104);

    if (t192 != 2128635775735767572LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1105 = -1;
	uint32_t x1107 = 45U;
	volatile int16_t x1108 = -1;
	volatile uint32_t t193 = 274711049U;

    t193 = (((x1105!=x1106)+x1107)*x1108);

    if (t193 != 4294967250U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1109 = INT8_MAX;
	uint64_t x1110 = 3220069LLU;
	int32_t x1111 = -1;
	volatile int8_t x1112 = -1;

    t194 = (((x1109!=x1110)+x1111)*x1112);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1114 = UINT16_MAX;
	static int64_t x1115 = -246762LL;
	volatile int64_t t195 = 1372540022802LL;

    t195 = (((x1113!=x1114)+x1115)*x1116);

    if (t195 != 246761LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1118 = 13230U;
	int8_t x1119 = -1;
	uint16_t x1120 = 2167U;

    t196 = (((x1117!=x1118)+x1119)*x1120);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1121 = -1;
	uint8_t x1122 = 3U;
	int8_t x1123 = INT8_MIN;
	int8_t x1124 = -12;
	volatile int32_t t197 = 74134773;

    t197 = (((x1121!=x1122)+x1123)*x1124);

    if (t197 != 1524) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1125 = 115065426005995LLU;
	int64_t x1126 = 22082459028LL;
	int16_t x1127 = 8;
	volatile uint64_t x1128 = UINT64_MAX;
	uint64_t t198 = 9443554896LLU;

    t198 = (((x1125!=x1126)+x1127)*x1128);

    if (t198 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1129 = INT64_MAX;
	static int8_t x1130 = 1;
	volatile int8_t x1131 = INT8_MAX;
	volatile int64_t x1132 = -1LL;
	volatile int64_t t199 = 1LL;

    t199 = (((x1129!=x1130)+x1131)*x1132);

    if (t199 != -128LL) { NG(); } else { ; }
	
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

