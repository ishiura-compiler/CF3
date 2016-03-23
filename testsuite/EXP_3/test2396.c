
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

uint8_t x12 = 7U;
volatile uint8_t x14 = UINT8_MAX;
uint16_t x28 = UINT16_MAX;
uint16_t x32 = UINT16_MAX;
uint16_t x43 = 43U;
int16_t x47 = INT16_MIN;
volatile int8_t x48 = INT8_MIN;
int32_t x58 = INT32_MIN;
volatile int64_t t13 = -9LL;
volatile int64_t x74 = -1LL;
uint64_t x83 = UINT64_MAX;
volatile uint8_t x85 = 125U;
static int16_t x86 = INT16_MIN;
int16_t x89 = 80;
int16_t x94 = 2;
volatile uint32_t x96 = 3853U;
static volatile int64_t x105 = INT64_MIN;
int16_t x108 = -1;
int16_t x115 = 12;
int8_t x118 = -1;
volatile int16_t x121 = -1002;
uint64_t x123 = UINT64_MAX;
static int32_t x129 = INT32_MIN;
uint16_t x138 = 51U;
int16_t x139 = INT16_MAX;
volatile int64_t t33 = 496707LL;
uint32_t x141 = 1752164U;
static uint8_t x142 = UINT8_MAX;
volatile int16_t x146 = -1;
int64_t x161 = INT64_MAX;
static int8_t x163 = INT8_MIN;
int32_t x175 = -1;
static uint64_t x178 = UINT64_MAX;
int64_t x180 = INT64_MAX;
int8_t x181 = -1;
uint32_t x185 = 35388735U;
uint64_t t44 = 10671287LLU;
volatile uint64_t x191 = 1886544852802122LLU;
static int16_t x198 = 160;
volatile int8_t x210 = INT8_MAX;
uint64_t x218 = 1916LLU;
volatile uint32_t x221 = UINT32_MAX;
int8_t x222 = INT8_MIN;
int32_t x223 = 5467669;
uint64_t x229 = 695518435267464LLU;
int16_t x231 = 18;
static int32_t x232 = INT32_MIN;
uint32_t x237 = UINT32_MAX;
int8_t x239 = INT8_MAX;
int32_t x242 = INT32_MAX;
int64_t x249 = INT64_MIN;
int8_t x258 = INT8_MAX;
int32_t x261 = -1;
int64_t x267 = INT64_MIN;
int64_t x268 = -1LL;
volatile int64_t t63 = 9LL;
uint32_t x270 = 221418U;
volatile uint32_t x274 = 3073119U;
uint16_t x285 = 518U;
volatile int64_t x289 = 98821849740LL;
volatile int16_t x310 = -1;
int16_t x311 = -4;
static uint32_t t73 = 321743964U;
static volatile uint8_t x324 = UINT8_MAX;
volatile uint16_t x325 = 25462U;
static volatile int8_t x326 = INT8_MIN;
int16_t x330 = 44;
int64_t x331 = -1LL;
volatile int64_t t78 = -108516377328752LL;
uint32_t x333 = UINT32_MAX;
static uint32_t x341 = UINT32_MAX;
static uint16_t x342 = 154U;
uint32_t t81 = 16422776U;
uint32_t x345 = 799714U;
int64_t x346 = -1LL;
volatile uint64_t x348 = UINT64_MAX;
uint32_t x355 = UINT32_MAX;
int64_t x356 = -3112596LL;
uint64_t x361 = UINT64_MAX;
static int16_t x369 = INT16_MIN;
volatile int32_t x370 = INT32_MIN;
int8_t x371 = INT8_MIN;
int64_t x372 = INT64_MIN;
volatile uint64_t t88 = 1395416781797LLU;
int64_t x377 = INT64_MAX;
static int16_t x379 = INT16_MAX;
int64_t t89 = -6574745382LL;
volatile uint8_t x383 = 15U;
int64_t x384 = -1LL;
static int8_t x386 = INT8_MIN;
volatile int64_t t91 = -3392089918LL;
uint16_t x392 = UINT16_MAX;
volatile uint64_t x411 = UINT64_MAX;
static int64_t x413 = INT64_MIN;
static int32_t x415 = -1;
static uint64_t x417 = 13298093LLU;
uint64_t x420 = 639162138754LLU;
static int32_t x421 = -397;
uint64_t t100 = 1723930642883900160LLU;
int32_t x430 = INT32_MAX;
static volatile int32_t x435 = INT32_MIN;
uint16_t x436 = UINT16_MAX;
uint32_t x443 = 1578280792U;
int16_t x445 = 7388;
int32_t x448 = -1;
int32_t t106 = -1479766;
volatile uint64_t x459 = 8454943084065LLU;
uint64_t t108 = 14LLU;
static uint64_t x461 = 27334411625830LLU;
int16_t x462 = INT16_MAX;
int16_t x468 = INT16_MIN;
volatile int64_t t110 = 2324744LL;
static int64_t x473 = INT64_MAX;
static int64_t x478 = -3LL;
volatile uint64_t t114 = 2094337887LLU;
static uint16_t x485 = UINT16_MAX;
uint32_t x491 = 81U;
int32_t x502 = 24;
int32_t x511 = INT32_MIN;
int16_t x512 = INT16_MIN;
int8_t x515 = INT8_MAX;
static int64_t x519 = -1LL;
volatile uint32_t t124 = 5537U;
int16_t x530 = INT16_MIN;
volatile int64_t t126 = 0LL;
volatile int64_t t127 = -2000LL;
static int64_t t129 = -10774426LL;
static volatile int16_t x546 = INT16_MAX;
uint64_t x550 = 1083LLU;
int8_t x560 = INT8_MIN;
static uint16_t x561 = 53U;
int32_t x566 = -21;
int64_t x568 = 25742LL;
volatile int32_t t136 = 209;
volatile uint16_t x573 = UINT16_MAX;
int32_t t137 = 8453;
int16_t x584 = INT16_MIN;
int8_t x586 = -1;
uint64_t x587 = 75872183825174LLU;
volatile uint64_t t141 = 12455998LLU;
int32_t x594 = INT32_MIN;
static uint16_t x603 = UINT16_MAX;
int32_t t144 = 15;
volatile int64_t x608 = INT64_MIN;
static volatile int8_t x618 = INT8_MIN;
static volatile int64_t t148 = 533829076007224742LL;
static uint64_t x622 = 207LLU;
uint16_t x624 = UINT16_MAX;
volatile int32_t x625 = INT32_MAX;
int16_t x632 = INT16_MIN;
static int16_t x633 = -1;
volatile int8_t x635 = -15;
int8_t x639 = INT8_MIN;
int64_t t153 = 31543587175657150LL;
static int8_t x643 = 10;
int64_t x645 = -1LL;
uint64_t x653 = UINT64_MAX;
static int64_t x654 = -164276LL;
int64_t x662 = 113784205LL;
uint32_t x665 = UINT32_MAX;
static int64_t x671 = 186356LL;
int16_t x676 = -703;
int32_t x679 = INT32_MIN;
static int64_t x682 = 414873694015383LL;
int64_t t164 = 1956744895071628LL;
uint64_t x685 = UINT64_MAX;
static int64_t x687 = INT64_MAX;
int8_t x690 = -1;
uint64_t x692 = 118851690581LLU;
uint64_t x696 = 52978557553LLU;
uint64_t x700 = UINT64_MAX;
static int32_t x703 = 442151935;
int8_t x704 = INT8_MAX;
uint32_t x712 = 188U;
volatile int8_t x718 = INT8_MIN;
static volatile int16_t x719 = INT16_MIN;
static uint16_t x720 = 8U;
static uint32_t x727 = 3218U;
int64_t x735 = INT64_MIN;
static int32_t x736 = INT32_MAX;
int16_t x742 = INT16_MAX;
int64_t x744 = INT64_MIN;
volatile int16_t x745 = 1;
int8_t x747 = INT8_MAX;
int32_t x748 = -97356;
uint8_t x750 = UINT8_MAX;
static volatile int64_t t179 = 11054875LL;
uint32_t x753 = 3615U;
static uint64_t x761 = 6069397618LLU;
int8_t x764 = INT8_MAX;
int32_t x768 = INT32_MAX;
volatile uint8_t x771 = 3U;
static int16_t x772 = INT16_MIN;
static uint64_t x779 = 6693792932LLU;
uint64_t t186 = 29818468002687437LLU;
int8_t x782 = -1;
int32_t t187 = -7;
uint64_t x789 = 28101LLU;
static int32_t x792 = INT32_MIN;
uint64_t t190 = 1017624082LLU;
int32_t x801 = -3108;
uint8_t x804 = 68U;
int64_t x806 = -1LL;
volatile int16_t x807 = -2;
volatile int32_t t195 = -11432;
int32_t x818 = INT32_MAX;
volatile uint64_t x831 = 824494435LLU;
int16_t x832 = 820;


void f0(void) {
    	static int16_t x1 = -221;
	uint32_t x2 = 517U;
	int8_t x3 = -1;
	uint32_t x4 = 445U;
	volatile uint32_t t0 = 3249875U;

    t0 = ((x1/x2)-(x3|x4));

    if (t0 != 8307480U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	uint16_t x6 = UINT16_MAX;
	static uint16_t x7 = 7049U;
	int16_t x8 = INT16_MIN;
	int64_t t1 = 21094091292LL;

    t1 = ((x5/x6)-(x7|x8));

    if (t1 != -140739635846025LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	static uint8_t x10 = UINT8_MAX;
	int32_t x11 = -2;
	uint64_t t2 = 1212692765500118156LLU;

    t2 = ((x9/x10)-(x11|x12));

    if (t2 != 72340172838076674LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -4;
	int32_t x15 = 933;
	static int16_t x16 = -2;
	int32_t t3 = -517182;

    t3 = ((x13/x14)-(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 26LLU;
	int8_t x18 = INT8_MIN;
	volatile int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	uint64_t t4 = 1LLU;

    t4 = ((x17/x18)-(x19|x20));

    if (t4 != 32768LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	static int64_t x22 = -494791027058828LL;
	uint8_t x23 = 43U;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 6LLU;

    t5 = ((x21/x22)-(x23|x24));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -1;
	int16_t x26 = 1;
	int16_t x27 = INT16_MAX;
	int32_t t6 = -52744771;

    t6 = ((x25/x26)-(x27|x28));

    if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 0;
	volatile int8_t x30 = 2;
	int8_t x31 = -1;
	volatile int32_t t7 = 117;

    t7 = ((x29/x30)-(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	volatile uint16_t x34 = 251U;
	uint8_t x35 = 5U;
	volatile int16_t x36 = -11630;
	static int64_t t8 = -26112LL;

    t8 = ((x33/x34)-(x35|x36));

    if (t8 != -36746502138852023LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	int64_t t9 = -3061811162562LL;

    t9 = ((x37/x38)-(x39|x40));

    if (t9 != 2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 3785712LL;
	int8_t x42 = INT8_MAX;
	uint64_t x44 = 4764432LLU;
	static volatile uint64_t t10 = 30563565LLU;

    t10 = ((x41/x42)-(x43|x44));

    if (t10 != 18446744073704816949LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static uint64_t x46 = 489629273420499LLU;
	volatile uint64_t t11 = 413LLU;

    t11 = ((x45/x46)-(x47|x48));

    if (t11 != 37802LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = 566697234928977157LL;
	static int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	volatile int64_t t12 = -76887567649LL;

    t12 = ((x53/x54)-(x55|x56));

    if (t12 != -4427322147849866LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = -1;
	int16_t x59 = 43;
	static volatile int64_t x60 = 384794259723555LL;

    t13 = ((x57/x58)-(x59|x60));

    if (t13 != -384794259723563LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = 0;
	volatile int64_t x62 = INT64_MIN;
	static int8_t x63 = -1;
	static int32_t x64 = 14;
	int64_t t14 = 111LL;

    t14 = ((x61/x62)-(x63|x64));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = INT64_MIN;
	int16_t x68 = -1;
	volatile uint64_t t15 = 184LLU;

    t15 = ((x65/x66)-(x67|x68));

    if (t15 != 281479271743490LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	uint64_t x70 = 60318025101168832LLU;
	int64_t x71 = -4167007002753612919LL;
	volatile int16_t x72 = 4;
	volatile uint64_t t16 = 25102996LLU;

    t16 = ((x69/x70)-(x71|x72));

    if (t16 != 4167007002753613067LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = UINT16_MAX;
	static volatile int16_t x75 = -177;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t17 = 2053233LL;

    t17 = ((x73/x74)-(x75|x76));

    if (t17 != -4295032830LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -30403;
	uint64_t x78 = UINT64_MAX;
	volatile uint64_t x79 = 1469LLU;
	int16_t x80 = -1;
	volatile uint64_t t18 = 2157555LLU;

    t18 = ((x77/x78)-(x79|x80));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x81 = 37U;
	uint16_t x82 = 1594U;
	int16_t x84 = INT16_MAX;
	volatile uint64_t t19 = 24LLU;

    t19 = ((x81/x82)-(x83|x84));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x87 = -42;
	int8_t x88 = INT8_MAX;
	volatile int32_t t20 = 32036;

    t20 = ((x85/x86)-(x87|x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x90 = INT16_MIN;
	static int8_t x91 = INT8_MAX;
	volatile int32_t x92 = INT32_MIN;
	static int32_t t21 = -35274;

    t21 = ((x89/x90)-(x91|x92));

    if (t21 != 2147483521) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 10U;
	static int32_t x95 = -1;
	uint32_t t22 = 3U;

    t22 = ((x93/x94)-(x95|x96));

    if (t22 != 6U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x97 = UINT16_MAX;
	static volatile uint16_t x98 = 7297U;
	static uint8_t x99 = UINT8_MAX;
	static int32_t x100 = -1;
	static volatile int32_t t23 = -368333;

    t23 = ((x97/x98)-(x99|x100));

    if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x101 = UINT8_MAX;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;
	int8_t x104 = -1;
	static volatile uint64_t t24 = 1LLU;

    t24 = ((x101/x102)-(x103|x104));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = 12877890350934615LL;
	int64_t x107 = -1LL;
	volatile int64_t t25 = 1737529707844554LL;

    t25 = ((x105/x106)-(x107|x108));

    if (t25 != -715LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	uint16_t x110 = 26U;
	static uint8_t x111 = 39U;
	int16_t x112 = INT16_MAX;
	int32_t t26 = -65;

    t26 = ((x109/x110)-(x111|x112));

    if (t26 != -82628291) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 5867U;
	int32_t x114 = INT32_MAX;
	static volatile int16_t x116 = -1;
	int32_t t27 = 5218348;

    t27 = ((x113/x114)-(x115|x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = 23U;
	uint8_t x119 = 63U;
	uint64_t x120 = 810891821595233640LLU;
	uint64_t t28 = 774LLU;

    t28 = ((x117/x118)-(x119|x120));

    if (t28 != 17635852252114317953LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x122 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t29 = 1028522453183189LLU;

    t29 = ((x121/x122)-(x123|x124));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MAX;
	int32_t x127 = 4300040;
	static int8_t x128 = -1;
	int32_t t30 = 224833;

    t30 = ((x125/x126)-(x127|x128));

    if (t30 != -65537) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x130 = 6U;
	uint8_t x131 = 30U;
	static uint8_t x132 = 7U;
	volatile int32_t t31 = 16026303;

    t31 = ((x129/x130)-(x131|x132));

    if (t31 != -357913972) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	int32_t x134 = INT32_MIN;
	int16_t x135 = -1;
	int64_t x136 = INT64_MIN;
	int64_t t32 = -441LL;

    t32 = ((x133/x134)-(x135|x136));

    if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x140 = INT64_MIN;

    t33 = ((x137/x138)-(x139|x140));

    if (t33 != 9042521604759551359LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x143 = -1203;
	int16_t x144 = -1;
	uint32_t t34 = 16U;

    t34 = ((x141/x142)-(x143|x144));

    if (t34 != 6872U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = -1LL;
	volatile uint64_t x147 = 1LLU;
	int8_t x148 = -1;
	volatile uint64_t t35 = 490011LLU;

    t35 = ((x145/x146)-(x147|x148));

    if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x149 = 4151605195004034382LLU;
	static int64_t x150 = 16175078134923LL;
	int32_t x151 = 2719714;
	volatile uint8_t x152 = 19U;
	static uint64_t t36 = 273905586998464411LLU;

    t36 = ((x149/x150)-(x151|x152));

    if (t36 != 18446744073707088551LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	uint32_t x154 = 745U;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MAX;
	int64_t t37 = -58833401148762600LL;

    t37 = ((x153/x154)-(x155|x156));

    if (t37 != -12380369445107933LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 3;
	uint32_t x158 = 576U;
	int32_t x159 = 29;
	int8_t x160 = INT8_MIN;
	uint32_t t38 = 256999U;

    t38 = ((x157/x158)-(x159|x160));

    if (t38 != 99U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x162 = INT32_MAX;
	int16_t x164 = 104;
	volatile int64_t t39 = -508837683LL;

    t39 = ((x161/x162)-(x163|x164));

    if (t39 != 4294967322LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	uint32_t x171 = 205270764U;
	int32_t x172 = -889;
	static volatile uint32_t t40 = 53U;

    t40 = ((x169/x170)-(x171|x172));

    if (t40 != 273U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = INT64_MAX;
	static uint8_t x174 = UINT8_MAX;
	volatile int8_t x176 = 0;
	static volatile int64_t t41 = -15881006349333LL;

    t41 = ((x173/x174)-(x175|x176));

    if (t41 != 36170086419038337LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = 157170937149427822LL;
	static uint8_t x179 = UINT8_MAX;
	uint64_t t42 = 307614211LLU;

    t42 = ((x177/x178)-(x179|x180));

    if (t42 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x182 = UINT64_MAX;
	uint8_t x183 = 3U;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t43 = 1591446LLU;

    t43 = ((x181/x182)-(x183|x184));

    if (t43 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x186 = 1440337014962LLU;
	uint16_t x187 = 673U;
	uint64_t x188 = 918534LLU;

    t44 = ((x185/x186)-(x187|x188));

    if (t44 != 18446744073708632409LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	int16_t x192 = INT16_MAX;
	volatile uint64_t t45 = 284LLU;

    t45 = ((x189/x190)-(x191|x192));

    if (t45 != 18444857528856739841LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = 20U;
	uint64_t x199 = 877LLU;
	uint16_t x200 = 104U;
	volatile uint64_t t46 = 186773008LLU;

    t46 = ((x197/x198)-(x199|x200));

    if (t46 != 18446744073709550739LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x201 = INT8_MIN;
	static volatile int8_t x202 = -1;
	int32_t x203 = -209551;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t47 = -188190622;

    t47 = ((x201/x202)-(x203|x204));

    if (t47 != 13071) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = 353358U;
	int32_t x207 = 442205;
	static volatile int64_t x208 = -1LL;
	volatile int64_t t48 = 66786956434655789LL;

    t48 = ((x205/x206)-(x207|x208));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = -1;
	volatile int32_t x211 = INT32_MAX;
	volatile uint16_t x212 = 5691U;
	int32_t t49 = -421;

    t49 = ((x209/x210)-(x211|x212));

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	static volatile int16_t x214 = 23;
	uint8_t x215 = UINT8_MAX;
	static uint64_t x216 = 1LLU;
	uint64_t t50 = 174LLU;

    t50 = ((x213/x214)-(x215|x216));

    if (t50 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = 623LLU;
	static int32_t x219 = INT32_MAX;
	uint64_t x220 = 60982347176204201LLU;
	volatile uint64_t t51 = 1674184LLU;

    t51 = ((x217/x218)-(x219|x220));

    if (t51 != 18385761725006741505LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x224 = -7018792LL;
	static volatile int64_t t52 = -3LL;

    t52 = ((x221/x222)-(x223|x224));

    if (t52 != 2625828LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = 24U;
	int16_t x226 = -7;
	uint32_t x227 = 27824099U;
	uint32_t x228 = 42230U;
	static uint32_t t53 = 2U;

    t53 = ((x225/x226)-(x227|x228));

    if (t53 != 4267134982U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x230 = INT32_MAX;
	volatile uint64_t t54 = 2LLU;

    t54 = ((x229/x230)-(x231|x232));

    if (t54 != 2147807506LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MAX;
	int16_t x236 = 0;
	int64_t t55 = 1LL;

    t55 = ((x233/x234)-(x235|x236));

    if (t55 != -9223372036837998591LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x238 = 1U;
	static uint16_t x240 = UINT16_MAX;
	uint32_t t56 = 205U;

    t56 = ((x237/x238)-(x239|x240));

    if (t56 != 4294901760U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	static int16_t x244 = -7;
	int32_t t57 = 0;

    t57 = ((x241/x242)-(x243|x244));

    if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x245 = 23U;
	uint8_t x246 = 19U;
	static uint32_t x247 = 87414U;
	int32_t x248 = 122231;
	uint32_t t58 = 12037995U;

    t58 = ((x245/x246)-(x247|x248));

    if (t58 != 4294845066U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x250 = 1;
	static int64_t x251 = INT64_MIN;
	static uint32_t x252 = 4424U;
	int64_t t59 = -1051036LL;

    t59 = ((x249/x250)-(x251|x252));

    if (t59 != -4424LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = 7;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 47U;
	volatile int32_t t60 = -309648;

    t60 = ((x253/x254)-(x255|x256));

    if (t60 != 32721) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = 13673LL;
	int8_t x259 = -1;
	int64_t x260 = INT64_MIN;
	volatile int64_t t61 = -183LL;

    t61 = ((x257/x258)-(x259|x260));

    if (t61 != 108LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x262 = INT32_MIN;
	static uint8_t x263 = UINT8_MAX;
	static uint64_t x264 = UINT64_MAX;
	uint64_t t62 = 4521309854082880LLU;

    t62 = ((x261/x262)-(x263|x264));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MAX;

    t63 = ((x265/x266)-(x267|x268));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = 4868777U;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MAX;
	static volatile uint32_t t64 = 3U;

    t64 = ((x269/x270)-(x271|x272));

    if (t64 != 2147450902U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x273 = INT16_MIN;
	volatile int64_t x275 = INT64_MAX;
	static volatile int32_t x276 = INT32_MIN;
	int64_t t65 = 94062479610293LL;

    t65 = ((x273/x274)-(x275|x276));

    if (t65 != 1398LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static int8_t x279 = 0;
	static int32_t x280 = INT32_MAX;
	volatile int32_t t66 = 209232;

    t66 = ((x277/x278)-(x279|x280));

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = INT32_MIN;
	static int32_t x282 = INT32_MAX;
	int16_t x283 = INT16_MIN;
	static uint16_t x284 = UINT16_MAX;
	int32_t t67 = 6744172;

    t67 = ((x281/x282)-(x283|x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x286 = UINT64_MAX;
	static int32_t x287 = 978997695;
	int16_t x288 = -1;
	uint64_t t68 = 565504583253LLU;

    t68 = ((x285/x286)-(x287|x288));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x290 = 997614U;
	volatile int16_t x291 = 21;
	volatile uint8_t x292 = 6U;
	int64_t t69 = -22956723695367LL;

    t69 = ((x289/x290)-(x291|x292));

    if (t69 != 99035LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x293 = INT16_MIN;
	int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	int32_t t70 = 39487710;

    t70 = ((x293/x294)-(x295|x296));

    if (t70 != 32769) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = INT32_MIN;
	int64_t x298 = 5LL;
	static volatile uint16_t x299 = 232U;
	int16_t x300 = INT16_MIN;
	int64_t t71 = 345967081698LL;

    t71 = ((x297/x298)-(x299|x300));

    if (t71 != -429464193LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MAX;
	volatile uint64_t x307 = 1LLU;
	uint8_t x308 = 47U;
	uint64_t t72 = 283345LLU;

    t72 = ((x305/x306)-(x307|x308));

    if (t72 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = UINT32_MAX;
	static int32_t x312 = INT32_MIN;

    t73 = ((x309/x310)-(x311|x312));

    if (t73 != 5U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x313 = INT8_MIN;
	uint16_t x314 = 12471U;
	volatile uint16_t x315 = 171U;
	volatile int16_t x316 = 1;
	volatile int32_t t74 = -8240;

    t74 = ((x313/x314)-(x315|x316));

    if (t74 != -171) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MIN;
	static int8_t x318 = -7;
	uint16_t x319 = 14306U;
	uint16_t x320 = 1U;
	static volatile int32_t t75 = -154780;

    t75 = ((x317/x318)-(x319|x320));

    if (t75 != 306769071) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x321 = UINT32_MAX;
	int16_t x322 = -71;
	int64_t x323 = -512143512478LL;
	int64_t t76 = -467206LL;

    t76 = ((x321/x322)-(x323|x324));

    if (t76 != 512143512322LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint8_t x327 = 47U;
	static uint64_t x328 = UINT64_MAX;
	uint64_t t77 = 9449143008833LLU;

    t77 = ((x325/x326)-(x327|x328));

    if (t77 != 18446744073709551419LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x329 = 1567;
	int64_t x332 = -1LL;

    t78 = ((x329/x330)-(x331|x332));

    if (t78 != 36LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x334 = -129459500338075LL;
	volatile int64_t x335 = INT64_MIN;
	static uint32_t x336 = 8453U;
	volatile int64_t t79 = 26545942097LL;

    t79 = ((x333/x334)-(x335|x336));

    if (t79 != 9223372036854767355LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x337 = INT64_MAX;
	static volatile int32_t x338 = -52998909;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	volatile int64_t t80 = 1390670966743LL;

    t80 = ((x337/x338)-(x339|x340));

    if (t80 != -174029469867LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x343 = 383662163U;
	int16_t x344 = -46;

    t81 = ((x341/x342)-(x343|x344));

    if (t81 != 27889443U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x347 = -1LL;
	volatile uint64_t t82 = 51046LLU;

    t82 = ((x345/x346)-(x347|x348));

    if (t82 != 18446744073708751903LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x353 = INT16_MIN;
	uint8_t x354 = UINT8_MAX;
	int64_t t83 = 1080233139820LL;

    t83 = ((x353/x354)-(x355|x356));

    if (t83 != -127LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x357 = 20;
	static uint16_t x358 = 660U;
	int16_t x359 = 12;
	volatile uint64_t x360 = 378397589918LLU;
	uint64_t t84 = 45062001032743216LLU;

    t84 = ((x357/x358)-(x359|x360));

    if (t84 != 18446743695311961698LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x362 = 49U;
	int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	uint64_t t85 = 346396892716428LLU;

    t85 = ((x361/x362)-(x363|x364));

    if (t85 != 376464166917033567LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x365 = INT8_MAX;
	int64_t x366 = 8465494813LL;
	volatile uint8_t x367 = UINT8_MAX;
	uint8_t x368 = UINT8_MAX;
	int64_t t86 = 400741540146149LL;

    t86 = ((x365/x366)-(x367|x368));

    if (t86 != -255LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t t87 = -52094185979151LL;

    t87 = ((x369/x370)-(x371|x372));

    if (t87 != 128LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x373 = 2LLU;
	int8_t x374 = INT8_MAX;
	int8_t x375 = -1;
	int64_t x376 = -895137LL;

    t88 = ((x373/x374)-(x375|x376));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x378 = 5U;
	static uint16_t x380 = UINT16_MAX;

    t89 = ((x377/x378)-(x379|x380));

    if (t89 != 1844674407370889626LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x381 = INT32_MAX;
	static volatile int32_t x382 = INT32_MIN;
	static volatile int64_t t90 = 1LL;

    t90 = ((x381/x382)-(x383|x384));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x385 = -1;
	int64_t x387 = INT64_MAX;
	volatile int8_t x388 = -1;

    t91 = ((x385/x386)-(x387|x388));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x389 = 2407993U;
	volatile uint16_t x390 = 1U;
	uint64_t x391 = 609113210592916001LLU;
	volatile uint64_t t92 = 3819381LLU;

    t92 = ((x389/x390)-(x391|x392));

    if (t92 != 17837630863119007290LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = -3811;
	int8_t x394 = INT8_MAX;
	static uint8_t x395 = 43U;
	static uint8_t x396 = 18U;
	int32_t t93 = -250;

    t93 = ((x393/x394)-(x395|x396));

    if (t93 != -89) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	uint16_t x399 = 8072U;
	volatile int16_t x400 = -3;
	volatile int32_t t94 = 1;

    t94 = ((x397/x398)-(x399|x400));

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x401 = INT16_MAX;
	static volatile int64_t x402 = 817539898LL;
	volatile uint8_t x403 = 33U;
	int32_t x404 = 663986;
	int64_t t95 = -426389972883196LL;

    t95 = ((x401/x402)-(x403|x404));

    if (t95 != -663987LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x405 = 132079620LLU;
	int64_t x406 = INT64_MIN;
	int64_t x407 = INT64_MAX;
	int8_t x408 = INT8_MIN;
	static uint64_t t96 = 3029866575577LLU;

    t96 = ((x405/x406)-(x407|x408));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x409 = 9U;
	int64_t x410 = INT64_MAX;
	int32_t x412 = 929746;
	uint64_t t97 = 758LLU;

    t97 = ((x409/x410)-(x411|x412));

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x414 = INT32_MAX;
	uint32_t x416 = 502U;
	int64_t t98 = 591816LL;

    t98 = ((x413/x414)-(x415|x416));

    if (t98 != -8589934593LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x418 = INT32_MIN;
	volatile int16_t x419 = INT16_MIN;
	uint64_t t99 = 44790772LLU;

    t99 = ((x417/x418)-(x419|x420));

    if (t99 != 16254LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x422 = INT16_MIN;
	uint16_t x423 = 1U;
	static uint64_t x424 = 3224550670LLU;

    t100 = ((x421/x422)-(x423|x424));

    if (t100 != 18446744070485000945LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x429 = 120271142787320604LLU;
	volatile uint64_t x431 = 326237574580LLU;
	volatile int16_t x432 = INT16_MIN;
	static uint64_t t101 = 6674LLU;

    t101 = ((x429/x430)-(x431|x432));

    if (t101 != 56016443LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x433 = 9006723623503898820LLU;
	int64_t x434 = -1LL;
	uint64_t t102 = 4LLU;

    t102 = ((x433/x434)-(x435|x436));

    if (t102 != 2147418113LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x437 = -8775856;
	uint64_t x438 = 2699097876958185LLU;
	volatile int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;
	static volatile uint64_t t103 = 579355LLU;

    t103 = ((x437/x438)-(x439|x440));

    if (t103 != 39602LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x441 = UINT8_MAX;
	static int8_t x442 = INT8_MIN;
	volatile int16_t x444 = -6969;
	volatile uint32_t t104 = 15U;

    t104 = ((x441/x442)-(x443|x444));

    if (t104 != 6176U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MAX;
	volatile int64_t t105 = 298390214031241LL;

    t105 = ((x445/x446)-(x447|x448));

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x449 = 1U;
	uint16_t x450 = 1U;
	static int32_t x451 = 10232;
	volatile int16_t x452 = INT16_MIN;

    t106 = ((x449/x450)-(x451|x452));

    if (t106 != 22537) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x453 = INT8_MAX;
	uint16_t x454 = 30U;
	int8_t x455 = INT8_MIN;
	volatile int32_t x456 = -3088;
	volatile int32_t t107 = -2;

    t107 = ((x453/x454)-(x455|x456));

    if (t107 != 20) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x457 = 1083U;
	uint8_t x458 = 7U;
	uint64_t x460 = UINT64_MAX;

    t108 = ((x457/x458)-(x459|x460));

    if (t108 != 155LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x463 = 4U;
	int8_t x464 = INT8_MIN;
	volatile uint64_t t109 = 6202LLU;

    t109 = ((x461/x462)-(x463|x464));

    if (t109 != 834205624LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x465 = 28852LL;
	volatile int16_t x466 = INT16_MIN;
	volatile int8_t x467 = INT8_MAX;

    t110 = ((x465/x466)-(x467|x468));

    if (t110 != 32641LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x469 = -6569;
	static uint16_t x470 = 1698U;
	volatile int64_t x471 = -1LL;
	uint8_t x472 = 27U;
	volatile int64_t t111 = 112071676192854LL;

    t111 = ((x469/x470)-(x471|x472));

    if (t111 != -2LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x474 = 26200713;
	volatile uint8_t x475 = 1U;
	int8_t x476 = -1;
	int64_t t112 = 533095368758LL;

    t112 = ((x473/x474)-(x475|x476));

    if (t112 != 352027520658LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x477 = INT16_MAX;
	int16_t x479 = 5;
	int32_t x480 = -1;
	int64_t t113 = 226716309LL;

    t113 = ((x477/x478)-(x479|x480));

    if (t113 != -10921LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x481 = 7LLU;
	static int64_t x482 = INT64_MIN;
	int16_t x483 = -1;
	volatile int32_t x484 = -1;

    t114 = ((x481/x482)-(x483|x484));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x486 = INT64_MIN;
	int32_t x487 = INT32_MAX;
	int64_t x488 = INT64_MIN;
	volatile int64_t t115 = -1878790LL;

    t115 = ((x485/x486)-(x487|x488));

    if (t115 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x489 = INT8_MIN;
	int32_t x490 = -1;
	volatile int16_t x492 = 5;
	volatile uint32_t t116 = 179U;

    t116 = ((x489/x490)-(x491|x492));

    if (t116 != 43U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x493 = INT64_MIN;
	int32_t x494 = INT32_MAX;
	int8_t x495 = -1;
	int16_t x496 = -3;
	volatile int64_t t117 = 1627656997413LL;

    t117 = ((x493/x494)-(x495|x496));

    if (t117 != -4294967297LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x497 = UINT16_MAX;
	int32_t x498 = INT32_MIN;
	volatile int16_t x499 = INT16_MIN;
	int8_t x500 = 1;
	int32_t t118 = -1482;

    t118 = ((x497/x498)-(x499|x500));

    if (t118 != 32767) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x501 = 1U;
	uint16_t x503 = UINT16_MAX;
	volatile int16_t x504 = -41;
	volatile int32_t t119 = -13916449;

    t119 = ((x501/x502)-(x503|x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = -171;
	uint32_t x506 = 236308U;
	uint64_t x507 = 14034LLU;
	uint16_t x508 = 725U;
	uint64_t t120 = 64303458829LLU;

    t120 = ((x505/x506)-(x507|x508));

    if (t120 != 4136LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x509 = 1;
	int16_t x510 = -1;
	volatile int32_t t121 = -83519;

    t121 = ((x509/x510)-(x511|x512));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = -1;
	uint16_t x514 = UINT16_MAX;
	int16_t x516 = INT16_MIN;
	int32_t t122 = -26310;

    t122 = ((x513/x514)-(x515|x516));

    if (t122 != 32641) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x517 = 5507U;
	int16_t x518 = -1;
	static int32_t x520 = 138751361;
	volatile int64_t t123 = 83092889039467LL;

    t123 = ((x517/x518)-(x519|x520));

    if (t123 != -5506LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x521 = 0U;
	int16_t x522 = -54;
	uint32_t x523 = 44336734U;
	static int32_t x524 = INT32_MIN;

    t124 = ((x521/x522)-(x523|x524));

    if (t124 != 2103146914U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x525 = UINT32_MAX;
	int16_t x526 = -1967;
	volatile int64_t x527 = INT64_MIN;
	static int32_t x528 = -1;
	static volatile int64_t t125 = 392801641814225LL;

    t125 = ((x525/x526)-(x527|x528));

    if (t125 != 2LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x529 = INT64_MAX;
	int16_t x531 = INT16_MAX;
	uint32_t x532 = 852094088U;

    t126 = ((x529/x530)-(x531|x532));

    if (t126 != -281475828809726LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x533 = INT32_MIN;
	int64_t x534 = -208787777LL;
	int16_t x535 = INT16_MIN;
	uint16_t x536 = UINT16_MAX;

    t127 = ((x533/x534)-(x535|x536));

    if (t127 != 11LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint64_t x537 = UINT64_MAX;
	uint64_t x538 = 8296255719495LLU;
	static int32_t x539 = -4;
	uint8_t x540 = UINT8_MAX;
	uint64_t t128 = 14130063785179278LLU;

    t128 = ((x537/x538)-(x539|x540));

    if (t128 != 2223503LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x541 = INT8_MIN;
	int64_t x542 = -1LL;
	volatile int16_t x543 = INT16_MAX;
	static int8_t x544 = -1;

    t129 = ((x541/x542)-(x543|x544));

    if (t129 != 129LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = INT16_MIN;
	uint16_t x547 = UINT16_MAX;
	int8_t x548 = -1;
	int32_t t130 = -1685;

    t130 = ((x545/x546)-(x547|x548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x549 = INT32_MIN;
	volatile int64_t x551 = INT64_MIN;
	volatile uint16_t x552 = 63U;
	volatile uint64_t t131 = 10980LLU;

    t131 = ((x549/x550)-(x551|x552));

    if (t131 != 9240405041537658540LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x553 = -49;
	static uint32_t x554 = UINT32_MAX;
	volatile int8_t x555 = INT8_MAX;
	uint64_t x556 = 207407459061LLU;
	uint64_t t132 = 0LLU;

    t132 = ((x553/x554)-(x555|x556));

    if (t132 != 18446743866302092545LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	volatile uint8_t x558 = UINT8_MAX;
	int32_t x559 = INT32_MIN;
	int32_t t133 = 0;

    t133 = ((x557/x558)-(x559|x560));

    if (t133 != 385) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x562 = 15598;
	static int8_t x563 = INT8_MIN;
	volatile uint8_t x564 = 1U;
	volatile int32_t t134 = 140;

    t134 = ((x561/x562)-(x563|x564));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x565 = INT64_MIN;
	int8_t x567 = INT8_MIN;
	int64_t t135 = 53087LL;

    t135 = ((x565/x566)-(x567|x568));

    if (t135 != 439208192231179914LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = 17394757;
	volatile int32_t x570 = INT32_MIN;
	int16_t x571 = -1;
	int8_t x572 = 1;

    t136 = ((x569/x570)-(x571|x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x574 = 50;
	int16_t x575 = INT16_MAX;
	int32_t x576 = INT32_MIN;

    t137 = ((x573/x574)-(x575|x576));

    if (t137 != 2147452191) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x577 = -1;
	volatile uint64_t x578 = 98973LLU;
	int32_t x579 = -760;
	int8_t x580 = INT8_MIN;
	uint64_t t138 = 8126LLU;

    t138 = ((x577/x578)-(x579|x580));

    if (t138 != 186381579559288LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = INT32_MIN;
	static int32_t x583 = INT32_MAX;
	int64_t t139 = -360838492503110LL;

    t139 = ((x581/x582)-(x583|x584));

    if (t139 != -4294967294LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x585 = 1LL;
	int32_t x588 = INT32_MIN;
	volatile uint64_t t140 = 113112109929562LLU;

    t140 = ((x585/x586)-(x587|x588));

    if (t140 != 560942313LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x589 = 12;
	uint64_t x590 = 5929973604LLU;
	static volatile int16_t x591 = -1;
	volatile int32_t x592 = INT32_MIN;

    t141 = ((x589/x590)-(x591|x592));

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x593 = UINT8_MAX;
	int32_t x595 = INT32_MIN;
	int16_t x596 = INT16_MAX;
	volatile int32_t t142 = 33318501;

    t142 = ((x593/x594)-(x595|x596));

    if (t142 != 2147450881) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x597 = 4741854;
	int64_t x598 = 3413475843LL;
	int16_t x599 = -3576;
	volatile int32_t x600 = -5;
	volatile int64_t t143 = 30625902LL;

    t143 = ((x597/x598)-(x599|x600));

    if (t143 != 5LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x601 = 0U;
	static int16_t x602 = -1;
	int8_t x604 = INT8_MIN;

    t144 = ((x601/x602)-(x603|x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x605 = INT64_MIN;
	static int8_t x606 = INT8_MIN;
	int64_t x607 = -19416820134LL;
	int64_t t145 = -1LL;

    t145 = ((x605/x606)-(x607|x608));

    if (t145 != 72057613454748070LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x609 = INT64_MIN;
	volatile uint64_t x610 = 1330LLU;
	int32_t x611 = INT32_MIN;
	uint64_t x612 = 7520LLU;
	uint64_t t146 = 637584LLU;

    t146 = ((x609/x610)-(x611|x612));

    if (t146 != 6934868340600019LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x613 = 67498;
	int8_t x614 = INT8_MAX;
	volatile int16_t x615 = INT16_MIN;
	volatile uint32_t x616 = 479U;
	uint32_t t147 = 196266U;

    t147 = ((x613/x614)-(x615|x616));

    if (t147 != 32820U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x617 = UINT8_MAX;
	int16_t x619 = INT16_MAX;
	volatile int64_t x620 = INT64_MIN;

    t148 = ((x617/x618)-(x619|x620));

    if (t148 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x621 = INT8_MAX;
	uint64_t x623 = 2309304LLU;
	uint64_t t149 = 1LLU;

    t149 = ((x621/x622)-(x623|x624));

    if (t149 != 18446744073707192321LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x626 = -2969737LL;
	int64_t x627 = INT64_MAX;
	int16_t x628 = -1;
	int64_t t150 = 441879LL;

    t150 = ((x625/x626)-(x627|x628));

    if (t150 != -722LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x630 = 11164036;
	int32_t x631 = INT32_MIN;
	volatile int32_t t151 = -435631221;

    t151 = ((x629/x630)-(x631|x632));

    if (t151 != 32960) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x634 = INT8_MIN;
	int16_t x636 = INT16_MIN;
	int32_t t152 = 25933;

    t152 = ((x633/x634)-(x635|x636));

    if (t152 != 15) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x637 = INT32_MIN;
	uint16_t x638 = UINT16_MAX;
	int64_t x640 = -2808366710LL;

    t153 = ((x637/x638)-(x639|x640));

    if (t153 != -32650LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x641 = INT8_MIN;
	int16_t x642 = INT16_MAX;
	static int16_t x644 = -11759;
	int32_t t154 = 0;

    t154 = ((x641/x642)-(x643|x644));

    if (t154 != 11749) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x646 = -1;
	int64_t x647 = INT64_MIN;
	volatile int16_t x648 = 34;
	volatile int64_t t155 = -1530LL;

    t155 = ((x645/x646)-(x647|x648));

    if (t155 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x649 = INT8_MAX;
	static volatile int8_t x650 = INT8_MIN;
	int16_t x651 = 89;
	int8_t x652 = -1;
	static volatile int32_t t156 = -1;

    t156 = ((x649/x650)-(x651|x652));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x655 = -1;
	int64_t x656 = INT64_MIN;
	uint64_t t157 = 3697LLU;

    t157 = ((x653/x654)-(x655|x656));

    if (t157 != 2LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x657 = UINT32_MAX;
	static int16_t x658 = INT16_MAX;
	volatile int32_t x659 = -1;
	uint16_t x660 = 376U;
	static volatile uint32_t t158 = 824854U;

    t158 = ((x657/x658)-(x659|x660));

    if (t158 != 131077U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x661 = 874U;
	int8_t x663 = -1;
	int8_t x664 = INT8_MAX;
	int64_t t159 = -1472879176LL;

    t159 = ((x661/x662)-(x663|x664));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x666 = INT64_MIN;
	volatile uint32_t x667 = UINT32_MAX;
	int64_t x668 = -413260LL;
	static volatile int64_t t160 = -6065761LL;

    t160 = ((x665/x666)-(x667|x668));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x669 = INT64_MIN;
	int16_t x670 = 215;
	int16_t x672 = INT16_MAX;
	static volatile int64_t t161 = -15LL;

    t161 = ((x669/x670)-(x671|x672));

    if (t161 != -42899404822776959LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x673 = 17734U;
	int8_t x674 = INT8_MIN;
	int8_t x675 = -1;
	volatile uint32_t t162 = 882582601U;

    t162 = ((x673/x674)-(x675|x676));

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x677 = 0LLU;
	volatile int32_t x678 = INT32_MIN;
	volatile uint16_t x680 = 21604U;
	volatile uint64_t t163 = 141929416418390LLU;

    t163 = ((x677/x678)-(x679|x680));

    if (t163 != 2147462044LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = -1;
	int64_t x683 = 167186174330LL;
	volatile int8_t x684 = INT8_MAX;

    t164 = ((x681/x682)-(x683|x684));

    if (t164 != -167186174335LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x686 = 29U;
	static volatile int8_t x688 = -1;
	static volatile uint64_t t165 = 4332654511482578646LLU;

    t165 = ((x685/x686)-(x687|x688));

    if (t165 != 636094623231363849LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = INT16_MAX;
	volatile int64_t x691 = INT64_MIN;
	uint64_t t166 = 155918778171LLU;

    t166 = ((x689/x690)-(x691|x692));

    if (t166 != 9223371918003052460LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x693 = 30792446969578113LLU;
	int32_t x694 = 47304;
	static int16_t x695 = INT16_MIN;
	volatile uint64_t t167 = 24871543443LLU;

    t167 = ((x693/x694)-(x695|x696));

    if (t167 != 650948082668LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x697 = -1;
	int8_t x698 = 1;
	static int64_t x699 = 1273972270LL;
	uint64_t t168 = 3129658394991LLU;

    t168 = ((x697/x698)-(x699|x700));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x701 = UINT8_MAX;
	int64_t x702 = 222951529259307LL;
	volatile int64_t t169 = -1020622LL;

    t169 = ((x701/x702)-(x703|x704));

    if (t169 != -442151935LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int32_t x706 = 332;
	volatile int8_t x707 = 1;
	static uint64_t x708 = 1181887527560LLU;
	uint64_t t170 = 204289LLU;

    t170 = ((x705/x706)-(x707|x708));

    if (t170 != 18446742891822024252LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = INT8_MIN;
	uint64_t x710 = 834052631662LLU;
	uint64_t x711 = UINT64_MAX;
	volatile uint64_t t171 = 3700LLU;

    t171 = ((x709/x710)-(x711|x712));

    if (t171 != 22117003LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x713 = INT32_MIN;
	int64_t x714 = -47396LL;
	volatile int16_t x715 = INT16_MAX;
	uint8_t x716 = 57U;
	int64_t t172 = 83165519601LL;

    t172 = ((x713/x714)-(x715|x716));

    if (t172 != 12542LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x717 = 10569008745818LLU;
	uint64_t t173 = 17307072869442LLU;

    t173 = ((x717/x718)-(x719|x720));

    if (t173 != 32760LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = -1;
	static uint32_t x722 = 104U;
	volatile uint16_t x723 = 11623U;
	int8_t x724 = INT8_MIN;
	volatile uint32_t t174 = 239069U;

    t174 = ((x721/x722)-(x723|x724));

    if (t174 != 41297787U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x725 = UINT8_MAX;
	static uint16_t x726 = 3U;
	int64_t x728 = -1LL;
	int64_t t175 = -12570259145227LL;

    t175 = ((x725/x726)-(x727|x728));

    if (t175 != 86LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x733 = 21801U;
	int16_t x734 = INT16_MAX;
	static int64_t t176 = -13380470979550012LL;

    t176 = ((x733/x734)-(x735|x736));

    if (t176 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x741 = -1;
	int32_t x743 = 14;
	int64_t t177 = -3294469165686623LL;

    t177 = ((x741/x742)-(x743|x744));

    if (t177 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x746 = UINT32_MAX;
	uint32_t t178 = 13029U;

    t178 = ((x745/x746)-(x747|x748));

    if (t178 != 97281U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x749 = 16024336U;
	static int64_t x751 = -1LL;
	static int8_t x752 = INT8_MAX;

    t179 = ((x749/x750)-(x751|x752));

    if (t179 != 62841LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x754 = 49318534569817LL;
	volatile int64_t x755 = -1340LL;
	volatile int64_t x756 = 2654LL;
	static volatile int64_t t180 = 63823744189LL;

    t180 = ((x753/x754)-(x755|x756));

    if (t180 != 1314LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x757 = -49622;
	int32_t x758 = INT32_MIN;
	uint16_t x759 = 11U;
	static uint8_t x760 = 5U;
	int32_t t181 = 195876511;

    t181 = ((x757/x758)-(x759|x760));

    if (t181 != -15) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x762 = INT8_MIN;
	volatile uint8_t x763 = 15U;
	uint64_t t182 = 186LLU;

    t182 = ((x761/x762)-(x763|x764));

    if (t182 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x765 = UINT64_MAX;
	volatile int8_t x766 = -1;
	static volatile uint32_t x767 = 181688634U;
	uint64_t t183 = 0LLU;

    t183 = ((x765/x766)-(x767|x768));

    if (t183 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x769 = 74U;
	volatile int64_t x770 = -1LL;
	volatile int64_t t184 = 45627686377LL;

    t184 = ((x769/x770)-(x771|x772));

    if (t184 != 32691LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x773 = INT32_MIN;
	uint16_t x774 = 77U;
	int64_t x775 = INT64_MIN;
	int32_t x776 = 1;
	int64_t t185 = -585733898LL;

    t185 = ((x773/x774)-(x775|x776));

    if (t185 != 9223372036826886409LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x777 = -1;
	int64_t x778 = INT64_MIN;
	uint32_t x780 = UINT32_MAX;

    t186 = ((x777/x778)-(x779|x780));

    if (t186 != 18446744065119617025LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x781 = INT32_MAX;
	static volatile int16_t x783 = -1;
	uint16_t x784 = 3U;

    t187 = ((x781/x782)-(x783|x784));

    if (t187 != -2147483646) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x785 = -51085052339LL;
	uint64_t x786 = 17232830173519LLU;
	uint8_t x787 = 7U;
	volatile uint8_t x788 = 0U;
	uint64_t t188 = 4016669LLU;

    t188 = ((x785/x786)-(x787|x788));

    if (t188 != 1070434LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x790 = UINT16_MAX;
	int16_t x791 = 21;
	uint64_t t189 = 1478LLU;

    t189 = ((x789/x790)-(x791|x792));

    if (t189 != 2147483627LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x793 = 11510U;
	uint8_t x794 = 3U;
	static uint32_t x795 = UINT32_MAX;
	uint64_t x796 = UINT64_MAX;

    t190 = ((x793/x794)-(x795|x796));

    if (t190 != 3837LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x797 = -38;
	uint32_t x798 = 124794352U;
	int64_t x799 = INT64_MIN;
	static volatile int16_t x800 = INT16_MIN;
	volatile int64_t t191 = -153813591360014LL;

    t191 = ((x797/x798)-(x799|x800));

    if (t191 != 32802LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x802 = INT8_MIN;
	int32_t x803 = -1;
	int32_t t192 = -2695494;

    t192 = ((x801/x802)-(x803|x804));

    if (t192 != 25) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x805 = INT32_MIN;
	int64_t x808 = INT64_MAX;
	int64_t t193 = -7369806418LL;

    t193 = ((x805/x806)-(x807|x808));

    if (t193 != 2147483649LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x809 = INT32_MIN;
	static int64_t x810 = -63LL;
	int32_t x811 = INT32_MIN;
	int32_t x812 = 33327836;
	volatile int64_t t194 = 1814929414018496380LL;

    t194 = ((x809/x810)-(x811|x812));

    if (t194 != 2148242854LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x813 = INT32_MIN;
	int32_t x814 = -459354;
	int32_t x815 = INT32_MAX;
	volatile int16_t x816 = -1;

    t195 = ((x813/x814)-(x815|x816));

    if (t195 != 4676) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x817 = INT64_MIN;
	uint8_t x819 = UINT8_MAX;
	uint8_t x820 = 57U;
	volatile int64_t t196 = -18094070908103LL;

    t196 = ((x817/x818)-(x819|x820));

    if (t196 != -4294967553LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x821 = UINT64_MAX;
	int64_t x822 = INT64_MIN;
	int16_t x823 = INT16_MIN;
	static uint64_t x824 = 2024184935799878LLU;
	uint64_t t197 = 490LLU;

    t197 = ((x821/x822)-(x823|x824));

    if (t197 != 9147LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x825 = -1;
	int64_t x826 = INT64_MIN;
	uint64_t x827 = 10789509895509820LLU;
	int32_t x828 = -58;
	uint64_t t198 = 395573557890293241LLU;

    t198 = ((x825/x826)-(x827|x828));

    if (t198 != 2LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x829 = 2U;
	int8_t x830 = 1;
	uint64_t t199 = 652976755891897868LLU;

    t199 = ((x829/x830)-(x831|x832));

    if (t199 != 18446744072885056651LLU) { NG(); } else { ; }
	
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

