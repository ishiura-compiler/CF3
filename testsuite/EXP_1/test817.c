
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

static uint64_t x5 = 102980LLU;
static uint16_t x16 = UINT16_MAX;
uint32_t x19 = UINT32_MAX;
int16_t x22 = -1;
volatile uint64_t t4 = 54452163051164LLU;
uint16_t x26 = UINT16_MAX;
int32_t x31 = -1;
uint64_t t9 = 449465152LLU;
int16_t x50 = -456;
int64_t t11 = 15311LL;
uint64_t x55 = 521LLU;
uint64_t t12 = 0LLU;
uint16_t x68 = UINT16_MAX;
uint32_t x69 = 7455U;
static volatile uint8_t x71 = UINT8_MAX;
volatile int64_t t17 = -106867LL;
static volatile uint32_t x83 = 4094U;
uint8_t x93 = 0U;
static volatile uint64_t t22 = 333030078259088172LLU;
volatile int64_t x102 = -1091014880248LL;
int64_t x103 = -250811229258333LL;
static int8_t x104 = INT8_MIN;
volatile int64_t t23 = 17549LL;
uint8_t x112 = 1U;
uint64_t x114 = 352017940922LLU;
int16_t x118 = -1;
int32_t t28 = -207;
uint16_t x128 = 187U;
volatile uint32_t t30 = 657135848U;
int16_t x135 = INT16_MIN;
volatile int32_t t31 = 266;
static volatile int8_t x144 = -1;
int32_t x147 = INT32_MIN;
uint16_t x148 = 195U;
uint32_t x154 = UINT32_MAX;
int32_t x155 = 17;
int32_t x166 = 113;
int16_t x170 = INT16_MAX;
int16_t x176 = INT16_MAX;
int8_t x177 = INT8_MIN;
static int32_t t40 = -7399;
volatile uint16_t x182 = UINT16_MAX;
volatile int64_t t42 = -433LL;
uint16_t x190 = UINT16_MAX;
static uint8_t x192 = 7U;
int32_t x193 = INT32_MIN;
uint16_t x199 = 23U;
volatile uint64_t t46 = 6546929153301148795LLU;
volatile int16_t x211 = INT16_MIN;
static int16_t x219 = 1330;
static uint64_t t50 = 1743795LLU;
int16_t x224 = 1;
int64_t t51 = 1542LL;
volatile uint64_t x230 = 209916957926631LLU;
static int32_t x231 = INT32_MIN;
uint32_t x234 = UINT32_MAX;
uint64_t t54 = 395355LLU;
int16_t x247 = 22;
uint64_t t56 = 561704818LLU;
volatile uint64_t t58 = 69472LLU;
static uint8_t x257 = 6U;
int32_t x263 = 1190769;
uint64_t t60 = 76539328LLU;
int32_t x266 = -33406547;
static int32_t t61 = -13;
volatile int64_t t63 = -829842298617974LL;
uint8_t x293 = 15U;
uint8_t x306 = 1U;
uint64_t x309 = UINT64_MAX;
volatile int64_t x312 = 4877844540844LL;
uint8_t x317 = UINT8_MAX;
int16_t x320 = INT16_MIN;
volatile int64_t x321 = INT64_MIN;
uint64_t x322 = 97466684669993953LLU;
static int32_t x327 = INT32_MIN;
volatile int32_t t73 = 10998;
int8_t x337 = INT8_MAX;
int32_t x338 = INT32_MAX;
static uint32_t x343 = UINT32_MAX;
volatile uint32_t x344 = 29990U;
static uint8_t x347 = UINT8_MAX;
static volatile uint64_t x348 = UINT64_MAX;
volatile uint16_t x352 = UINT16_MAX;
int16_t x353 = INT16_MIN;
int32_t x355 = -123;
int32_t x358 = -1;
int8_t x363 = -1;
uint64_t x367 = 2LLU;
int16_t x374 = INT16_MIN;
static uint16_t x380 = UINT16_MAX;
uint32_t x381 = UINT32_MAX;
int16_t x384 = -1;
int32_t x387 = -3;
static uint64_t t88 = 93443657510LLU;
static int8_t x393 = -1;
volatile uint64_t t92 = 3341133446LLU;
volatile uint32_t x424 = 901U;
volatile int16_t x426 = INT16_MIN;
static volatile uint64_t x427 = UINT64_MAX;
static uint16_t x429 = 307U;
int64_t x431 = 1LL;
int16_t x434 = 2;
static volatile int32_t t97 = 485690;
uint16_t x438 = 12497U;
static int32_t x439 = INT32_MAX;
static int64_t t98 = -951173460017405LL;
int64_t x443 = INT64_MIN;
int16_t x450 = -1;
int64_t x451 = INT64_MAX;
static int64_t x461 = INT64_MIN;
int16_t x469 = INT16_MAX;
uint16_t x470 = UINT16_MAX;
volatile int8_t x471 = 10;
int8_t x472 = -1;
int16_t x478 = INT16_MAX;
volatile int32_t x484 = INT32_MIN;
static uint16_t x487 = 8U;
static volatile int64_t t108 = 15042LL;
int64_t x492 = -1LL;
static volatile uint64_t t109 = 11488720413LLU;
uint16_t x503 = 10793U;
uint16_t x511 = 2953U;
volatile uint32_t x512 = UINT32_MAX;
volatile int32_t t113 = 12504579;
static int16_t x520 = INT16_MIN;
int64_t x528 = INT64_MIN;
int8_t x529 = -1;
volatile int32_t t116 = 1904;
uint8_t x538 = UINT8_MAX;
uint16_t x539 = 2974U;
uint32_t x545 = UINT32_MAX;
static uint32_t x551 = 24U;
int64_t x559 = -358LL;
static int8_t x564 = INT8_MAX;
volatile uint32_t x569 = 17923823U;
static uint32_t t125 = 118101U;
static uint16_t x584 = 13130U;
int64_t t126 = -5141166LL;
static int8_t x590 = -1;
int8_t x594 = 1;
volatile int64_t x595 = INT64_MAX;
volatile uint64_t t129 = 2151430820959331LLU;
static volatile uint64_t t131 = 523356069LLU;
volatile int32_t x614 = -1;
int64_t t133 = 11LL;
int32_t x627 = -1;
volatile int64_t t136 = 253237076LL;
int8_t x630 = INT8_MIN;
uint64_t t137 = 3221687581141LLU;
volatile int32_t x652 = INT32_MIN;
int8_t x665 = -3;
int64_t x666 = 3546975382LL;
static int16_t x668 = INT16_MIN;
int64_t x675 = -141566055LL;
static int64_t t146 = 508914LL;
int64_t x677 = INT64_MIN;
volatile int16_t x680 = INT16_MIN;
int64_t x687 = 1007LL;
int16_t x692 = INT16_MIN;
static volatile uint64_t t150 = 236084312671625631LLU;
uint8_t x700 = 22U;
volatile int16_t x712 = -1;
int32_t t155 = -12984448;
int32_t x714 = -1;
int32_t x722 = INT32_MAX;
uint16_t x723 = UINT16_MAX;
int8_t x726 = INT8_MIN;
volatile int32_t t158 = -1;
static int16_t x735 = INT16_MIN;
volatile int8_t x736 = -1;
volatile uint64_t x738 = 985668LLU;
uint64_t t160 = 7007LLU;
int64_t x749 = -207327458LL;
int32_t x753 = INT32_MIN;
uint32_t x754 = 767225124U;
int8_t x755 = 6;
int64_t t163 = -181838304LL;
uint8_t x762 = UINT8_MAX;
int64_t x771 = -9LL;
volatile int16_t x774 = -1;
int32_t x778 = -1824350;
int32_t x780 = -6;
volatile int64_t t169 = -195806LL;
volatile int64_t t170 = 64853877LL;
uint8_t x797 = 2U;
uint16_t x799 = 154U;
static volatile int32_t x807 = -1;
volatile int16_t x812 = INT16_MAX;
int64_t x820 = INT64_MIN;
int16_t x829 = 0;
uint16_t x831 = 7763U;
int64_t t181 = -3969511230997LL;
static int64_t x841 = -1LL;
int64_t t182 = -1067444925509415LL;
volatile int16_t x849 = 0;
int16_t x853 = -26;
static volatile int8_t x854 = INT8_MIN;
int16_t x856 = INT16_MIN;
int8_t x857 = -1;
int8_t x865 = -1;
volatile int8_t x867 = 2;
static uint8_t x868 = 4U;
int32_t t186 = 28;
int32_t x876 = 7;
uint32_t t188 = 59095496U;
int16_t x878 = 1;
int64_t t189 = 16835239471LL;
volatile uint32_t x885 = 440319471U;
int8_t x886 = INT8_MAX;
int8_t x893 = INT8_MIN;
uint64_t x898 = 285187024LLU;
int32_t x903 = -1;
int64_t t197 = 3130035746LL;
static int8_t x916 = 60;
static uint16_t x917 = 48U;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int16_t x2 = INT16_MAX;
	static volatile uint16_t x3 = 1U;
	static uint64_t x4 = 7LLU;
	volatile uint64_t t0 = 274869601LLU;

    t0 = (((x1%x2)*x3)%x4);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x6 = UINT8_MAX;
	int8_t x7 = -1;
	static volatile int32_t x8 = -1;
	volatile uint64_t t1 = 5283043353388LLU;

    t1 = (((x5%x6)*x7)%x8);

    if (t1 != 18446744073709551401LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	volatile int64_t x14 = -182964613212139158LL;
	uint32_t x15 = 861978U;
	int64_t t2 = 1428LL;

    t2 = (((x13%x14)*x15)%x16);

    if (t2 != -37779LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = 126;
	int32_t x20 = INT32_MIN;
	volatile uint32_t t3 = 5U;

    t3 = (((x17%x18)*x19)%x20);

    if (t3 != 2U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	static uint64_t x23 = 5837LLU;
	volatile int32_t x24 = -2051908;

    t4 = (((x21%x22)*x23)%x24);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 91U;
	int8_t x27 = INT8_MIN;
	volatile int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -401034;

    t5 = (((x25%x26)*x27)%x28);

    if (t5 != -91) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = -16;
	uint32_t x30 = UINT32_MAX;
	uint16_t x32 = 7479U;
	uint32_t t6 = 10U;

    t6 = (((x29%x30)*x31)%x32);

    if (t6 != 16U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x34 = 9269;
	int16_t x35 = INT16_MIN;
	static volatile uint16_t x36 = 4U;
	volatile int64_t t7 = -191535095977616LL;

    t7 = (((x33%x34)*x35)%x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -615;
	volatile int8_t x38 = -1;
	static int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t8 = 518291;

    t8 = (((x37%x38)*x39)%x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x41 = 29271U;
	uint8_t x42 = 22U;
	uint64_t x43 = 3749483908891877LLU;
	int16_t x44 = -290;

    t9 = (((x41%x42)*x43)%x44);

    if (t9 != 41244322997810647LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = 35;
	int16_t x46 = 13472;
	uint32_t x47 = UINT32_MAX;
	uint16_t x48 = 8576U;
	volatile uint32_t t10 = 5098781U;

    t10 = (((x45%x46)*x47)%x48);

    if (t10 != 3549U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x51 = 47;
	int64_t x52 = -1LL;

    t11 = (((x49%x50)*x51)%x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -178;
	int16_t x54 = -853;
	volatile int8_t x56 = INT8_MIN;

    t12 = (((x53%x54)*x55)%x56);

    if (t12 != 18446744073709458878LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = 39;
	uint16_t x59 = 1U;
	volatile uint8_t x60 = 14U;
	int64_t t13 = 129054LL;

    t13 = (((x57%x58)*x59)%x60);

    if (t13 != -8LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	static int8_t x63 = 7;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = -4;

    t14 = (((x61%x62)*x63)%x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	static int64_t x66 = -7176996081591896LL;
	static int32_t x67 = INT32_MIN;
	volatile int64_t t15 = -5439LL;

    t15 = (((x65%x66)*x67)%x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x70 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	uint32_t t16 = 2456U;

    t16 = (((x69%x70)*x71)%x72);

    if (t16 != 510U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -1;
	uint32_t x78 = 2444266U;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MIN;

    t17 = (((x77%x78)*x79)%x80);

    if (t17 != 4244799872LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = UINT8_MAX;
	volatile uint64_t x82 = 592043LLU;
	int8_t x84 = INT8_MIN;
	uint64_t t18 = 452891LLU;

    t18 = (((x81%x82)*x83)%x84);

    if (t18 != 1043970LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = -24654982;
	int8_t x86 = INT8_MIN;
	int16_t x87 = -29;
	static volatile uint16_t x88 = UINT16_MAX;
	int32_t t19 = 48483700;

    t19 = (((x85%x86)*x87)%x88);

    if (t19 != 174) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -1;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	volatile uint64_t x92 = 3264LLU;
	uint64_t t20 = 2LLU;

    t20 = (((x89%x90)*x91)%x92);

    if (t20 != 128LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x94 = -35722933LL;
	volatile uint8_t x95 = 34U;
	static int32_t x96 = -4;
	int64_t t21 = 1498375707572LL;

    t21 = (((x93%x94)*x95)%x96);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 11U;
	int64_t x98 = 3829837633809LL;
	uint64_t x99 = 189625649694761LLU;
	static int8_t x100 = 1;

    t22 = (((x97%x98)*x99)%x100);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MAX;

    t23 = (((x101%x102)*x103)%x104);

    if (t23 != -35LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	int8_t x106 = -1;
	int16_t x107 = INT16_MAX;
	static volatile int64_t x108 = -1LL;
	volatile int64_t t24 = -64917139071879LL;

    t24 = (((x105%x106)*x107)%x108);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = 165870973U;
	int64_t x110 = -1LL;
	static int8_t x111 = 0;
	volatile int64_t t25 = 778806457054909LL;

    t25 = (((x109%x110)*x111)%x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = 0;
	static int64_t x115 = 124556LL;
	int8_t x116 = -1;
	uint64_t t26 = 14462LLU;

    t26 = (((x113%x114)*x115)%x116);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	uint32_t x119 = 2644212U;
	int32_t x120 = INT32_MAX;
	uint32_t t27 = 3U;

    t27 = (((x117%x118)*x119)%x120);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = 5;
	volatile int16_t x122 = INT16_MIN;
	int16_t x123 = -1402;
	static int16_t x124 = -5;

    t28 = (((x121%x122)*x123)%x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MIN;
	static uint32_t x126 = UINT32_MAX;
	int32_t x127 = 49476248;
	static uint32_t t29 = 312870U;

    t29 = (((x125%x126)*x127)%x128);

    if (t29 != 178U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = 0;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 120481U;
	static uint32_t x132 = 85658U;

    t30 = (((x129%x130)*x131)%x132);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	int8_t x136 = INT8_MIN;

    t31 = (((x133%x134)*x135)%x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MIN;
	static uint64_t x139 = 893084LLU;
	int32_t x140 = 66086010;
	static uint64_t t32 = 28450101904523425LLU;

    t32 = (((x137%x138)*x139)%x140);

    if (t32 != 53667008LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = -1LL;
	uint16_t x142 = 1485U;
	int64_t x143 = -1LL;
	volatile int64_t t33 = 0LL;

    t33 = (((x141%x142)*x143)%x144);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = 120U;
	uint32_t x146 = 397U;
	static volatile uint32_t t34 = 5446U;

    t34 = (((x145%x146)*x147)%x148);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = -152;
	int8_t x150 = -1;
	static int64_t x151 = INT64_MAX;
	static volatile int16_t x152 = 6817;
	volatile int64_t t35 = -5597862767LL;

    t35 = (((x149%x150)*x151)%x152);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x153 = INT64_MIN;
	volatile uint64_t x156 = 1158854389LLU;
	volatile uint64_t t36 = 1016332052530401LLU;

    t36 = (((x153%x154)*x155)%x156);

    if (t36 != 711376802LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = -1;
	volatile uint64_t x167 = UINT64_MAX;
	static int64_t x168 = INT64_MIN;
	volatile uint64_t t37 = 457132437LLU;

    t37 = (((x165%x166)*x167)%x168);

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x169 = INT16_MAX;
	int64_t x171 = INT64_MIN;
	static int32_t x172 = INT32_MAX;
	volatile int64_t t38 = 395LL;

    t38 = (((x169%x170)*x171)%x172);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = INT16_MIN;
	static int32_t x175 = 15;
	volatile uint32_t t39 = 406896U;

    t39 = (((x173%x174)*x175)%x176);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;

    t40 = (((x177%x178)*x179)%x180);

    if (t40 != 4194304) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x181 = INT64_MIN;
	static uint8_t x183 = 14U;
	uint32_t x184 = 44U;
	int64_t t41 = 4326339679948161147LL;

    t41 = (((x181%x182)*x183)%x184);

    if (t41 != -8LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = 247280005185LL;
	static int32_t x186 = -885;
	int32_t x187 = INT32_MIN;
	volatile int8_t x188 = 13;

    t42 = (((x185%x186)*x187)%x188);

    if (t42 != -9LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = INT32_MIN;
	uint8_t x191 = 8U;
	int32_t t43 = 70698;

    t43 = (((x189%x190)*x191)%x192);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x194 = -1;
	int32_t x195 = -1;
	int8_t x196 = -1;
	volatile int32_t t44 = 1004;

    t44 = (((x193%x194)*x195)%x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x197 = UINT8_MAX;
	int32_t x198 = INT32_MAX;
	uint32_t x200 = 58U;
	static uint32_t t45 = 117989U;

    t45 = (((x197%x198)*x199)%x200);

    if (t45 != 7U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x201 = INT16_MAX;
	static uint64_t x202 = UINT64_MAX;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = -2;

    t46 = (((x201%x202)*x203)%x204);

    if (t46 != 8355585LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = 11U;
	int16_t x207 = -16287;
	static int8_t x208 = -35;
	volatile int32_t t47 = -1248;

    t47 = (((x205%x206)*x207)%x208);

    if (t47 != 15) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = -5184730;
	int16_t x210 = INT16_MAX;
	uint16_t x212 = 1U;
	static int32_t t48 = 354809;

    t48 = (((x209%x210)*x211)%x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = -1;
	volatile int16_t x214 = 1;
	int8_t x215 = 1;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t49 = 131202857;

    t49 = (((x213%x214)*x215)%x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x217 = 11548466099LLU;
	int64_t x218 = INT64_MIN;
	int8_t x220 = -34;

    t50 = (((x217%x218)*x219)%x220);

    if (t50 != 15359459911670LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x221 = 221LL;
	int64_t x222 = -1LL;
	volatile int32_t x223 = INT32_MAX;

    t51 = (((x221%x222)*x223)%x224);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x229 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	uint64_t t52 = 94843378043LLU;

    t52 = (((x229%x230)*x231)%x232);

    if (t52 != 15715494715719680000LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = INT64_MIN;
	uint64_t x235 = 39LLU;
	static int16_t x236 = -43;
	volatile uint64_t t53 = 25LLU;

    t53 = (((x233%x234)*x235)%x236);

    if (t53 != 18446743989957689344LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	static volatile uint64_t x239 = 4457LLU;
	int32_t x240 = -1;

    t54 = (((x237%x238)*x239)%x240);

    if (t54 != 18446744073708981120LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x241 = 28U;
	int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 1818146U;
	uint32_t t55 = 118858U;

    t55 = (((x241%x242)*x243)%x244);

    if (t55 != 1407086U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = 221393LLU;
	int8_t x248 = 27;

    t56 = (((x245%x246)*x247)%x248);

    if (t56 != 21LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x249 = 276732462U;
	static int16_t x250 = INT16_MIN;
	int16_t x251 = -56;
	int8_t x252 = INT8_MAX;
	volatile uint32_t t57 = 296878U;

    t57 = (((x249%x250)*x251)%x252);

    if (t57 != 93U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x253 = 3LLU;
	int16_t x254 = -1;
	int32_t x255 = -1;
	int8_t x256 = INT8_MIN;

    t58 = (((x253%x254)*x255)%x256);

    if (t58 != 125LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x258 = 14;
	int16_t x259 = INT16_MIN;
	static int64_t x260 = -1LL;
	static volatile int64_t t59 = 7948840853LL;

    t59 = (((x257%x258)*x259)%x260);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = INT32_MIN;
	volatile uint8_t x262 = 5U;
	volatile uint64_t x264 = 28228463888LLU;

    t60 = (((x261%x262)*x263)%x264);

    if (t60 != 11632808989LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x265 = 9;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = INT8_MIN;

    t61 = (((x265%x266)*x267)%x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = UINT64_MAX;
	static uint16_t x274 = UINT16_MAX;
	int64_t x275 = -53172LL;
	int16_t x276 = INT16_MAX;
	uint64_t t62 = 3246525LLU;

    t62 = (((x273%x274)*x275)%x276);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = 0;
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -59981209LL;

    t63 = (((x281%x282)*x283)%x284);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MAX;
	static int16_t x286 = INT16_MIN;
	int32_t x287 = -2964362;
	int64_t x288 = -232625418709LL;
	int64_t t64 = 1333151572LL;

    t64 = (((x285%x286)*x287)%x288);

    if (t64 != -376473974LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x289 = -69;
	volatile uint32_t x290 = 3933U;
	uint32_t x291 = UINT32_MAX;
	uint64_t x292 = UINT64_MAX;
	uint64_t t65 = 8312727LLU;

    t65 = (((x289%x290)*x291)%x292);

    if (t65 != 4294965858LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x294 = -1;
	int16_t x295 = INT16_MAX;
	volatile uint64_t x296 = 250014259326LLU;
	uint64_t t66 = 449LLU;

    t66 = (((x293%x294)*x295)%x296);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MAX;
	static int32_t x303 = INT32_MIN;
	uint64_t x304 = 8277LLU;
	uint64_t t67 = 36001318955LLU;

    t67 = (((x301%x302)*x303)%x304);

    if (t67 != 7721LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x305 = INT32_MAX;
	volatile int32_t x307 = -24807;
	static int8_t x308 = -1;
	static int32_t t68 = -10795;

    t68 = (((x305%x306)*x307)%x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x310 = -1570;
	volatile uint64_t x311 = 456705747LLU;
	volatile uint64_t t69 = 56558438LLU;

    t69 = (((x309%x310)*x311)%x312);

    if (t69 != 716571317043LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x313 = -1;
	static volatile int32_t x314 = INT32_MIN;
	int16_t x315 = 0;
	uint16_t x316 = UINT16_MAX;
	int32_t t70 = 67833845;

    t70 = (((x313%x314)*x315)%x316);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x318 = INT16_MIN;
	int8_t x319 = -38;
	static int32_t t71 = -1983;

    t71 = (((x317%x318)*x319)%x320);

    if (t71 != -9690) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x323 = INT8_MIN;
	static int32_t x324 = 8350;
	volatile uint64_t t72 = 51847323117LLU;

    t72 = (((x321%x322)*x323)%x324);

    if (t72 != 4938LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	uint8_t x328 = UINT8_MAX;

    t73 = (((x325%x326)*x327)%x328);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x333 = INT8_MAX;
	int8_t x334 = INT8_MIN;
	volatile int16_t x335 = -38;
	static uint8_t x336 = UINT8_MAX;
	volatile int32_t t74 = 34;

    t74 = (((x333%x334)*x335)%x336);

    if (t74 != -236) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x339 = -170908893905086LL;
	int8_t x340 = INT8_MIN;
	volatile int64_t t75 = 2594747LL;

    t75 = (((x337%x338)*x339)%x340);

    if (t75 != -66LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x341 = -72;
	static uint8_t x342 = UINT8_MAX;
	static volatile uint32_t t76 = 36U;

    t76 = (((x341%x342)*x343)%x344);

    if (t76 != 72U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x345 = 12396U;
	volatile int32_t x346 = INT32_MIN;
	uint64_t t77 = 2150799208663LLU;

    t77 = (((x345%x346)*x347)%x348);

    if (t77 != 3160980LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x349 = 10U;
	int16_t x350 = 1765;
	uint8_t x351 = 18U;
	volatile int32_t t78 = -55;

    t78 = (((x349%x350)*x351)%x352);

    if (t78 != 180) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x354 = -1LL;
	static volatile int64_t x356 = -844LL;
	volatile int64_t t79 = -571705LL;

    t79 = (((x353%x354)*x355)%x356);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x357 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -189;
	volatile int32_t t80 = -3175;

    t80 = (((x357%x358)*x359)%x360);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x361 = 0U;
	static uint32_t x362 = 3U;
	static uint8_t x364 = 4U;
	static volatile uint32_t t81 = 3438386U;

    t81 = (((x361%x362)*x363)%x364);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = -1;
	uint16_t x366 = 97U;
	static uint8_t x368 = 4U;
	volatile uint64_t t82 = 7860576351931490LLU;

    t82 = (((x365%x366)*x367)%x368);

    if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x369 = UINT32_MAX;
	static int8_t x370 = -7;
	uint16_t x371 = 50U;
	int32_t x372 = -1;
	uint32_t t83 = 387293U;

    t83 = (((x369%x370)*x371)%x372);

    if (t83 != 300U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	int32_t t84 = 472171791;

    t84 = (((x373%x374)*x375)%x376);

    if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x377 = 6880464U;
	int16_t x378 = INT16_MAX;
	static int8_t x379 = 8;
	volatile uint32_t t85 = 203U;

    t85 = (((x377%x378)*x379)%x380);

    if (t85 != 60683U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x382 = 3;
	int8_t x383 = 0;
	uint32_t t86 = 3U;

    t86 = (((x381%x382)*x383)%x384);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x385 = 7802370U;
	uint32_t x386 = 52U;
	uint32_t x388 = 212389574U;
	uint32_t t87 = 295975U;

    t87 = (((x385%x386)*x387)%x388);

    if (t87 != 47175726U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x389 = 8U;
	uint64_t x390 = 30290443132LLU;
	int32_t x391 = -1;
	static uint16_t x392 = 179U;

    t88 = (((x389%x390)*x391)%x392);

    if (t88 != 116LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x394 = -1;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t89 = 3247394;

    t89 = (((x393%x394)*x395)%x396);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x401 = 1U;
	static int16_t x402 = INT16_MIN;
	uint8_t x403 = 81U;
	static uint64_t x404 = 51397169LLU;
	static uint64_t t90 = 26362LLU;

    t90 = (((x401%x402)*x403)%x404);

    if (t90 != 81LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x405 = -14;
	int64_t x406 = INT64_MIN;
	volatile uint32_t x407 = 26594455U;
	int16_t x408 = INT16_MIN;
	static volatile int64_t t91 = -1033564382503279310LL;

    t91 = (((x405%x406)*x407)%x408);

    if (t91 != -12354LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x409 = UINT16_MAX;
	uint64_t x410 = 1012705681219398670LLU;
	int16_t x411 = 0;
	static int32_t x412 = 1826;

    t92 = (((x409%x410)*x411)%x412);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = -1;
	int8_t x414 = 1;
	static volatile uint64_t x415 = 9858493250952403LLU;
	uint8_t x416 = 17U;
	uint64_t t93 = 277658770172300LLU;

    t93 = (((x413%x414)*x415)%x416);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x421 = -4709187964493LL;
	int32_t x422 = -1;
	static uint16_t x423 = 3554U;
	volatile int64_t t94 = -1076379033435LL;

    t94 = (((x421%x422)*x423)%x424);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x425 = 45U;
	int16_t x428 = INT16_MIN;
	uint64_t t95 = 60750770LLU;

    t95 = (((x425%x426)*x427)%x428);

    if (t95 != 32723LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x430 = INT16_MIN;
	int16_t x432 = INT16_MAX;
	static volatile int64_t t96 = -5483LL;

    t96 = (((x429%x430)*x431)%x432);

    if (t96 != 307LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x433 = INT16_MIN;
	static uint16_t x435 = 19905U;
	int16_t x436 = INT16_MIN;

    t97 = (((x433%x434)*x435)%x436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x437 = -1LL;
	volatile int64_t x440 = INT64_MIN;

    t98 = (((x437%x438)*x439)%x440);

    if (t98 != -2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x441 = -1;
	uint64_t x442 = 2657281980945666LLU;
	volatile int16_t x444 = 765;
	volatile uint64_t t99 = 16LLU;

    t99 = (((x441%x442)*x443)%x444);

    if (t99 != 638LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x449 = 14;
	uint8_t x452 = 6U;
	volatile int64_t t100 = 1LL;

    t100 = (((x449%x450)*x451)%x452);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x453 = 15U;
	uint32_t x454 = 1471U;
	volatile int32_t x455 = -1;
	volatile uint8_t x456 = UINT8_MAX;
	volatile uint32_t t101 = 11908U;

    t101 = (((x453%x454)*x455)%x456);

    if (t101 != 241U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x457 = INT8_MAX;
	uint16_t x458 = UINT16_MAX;
	uint64_t x459 = 206551LLU;
	volatile int64_t x460 = INT64_MAX;
	static uint64_t t102 = 81902015530LLU;

    t102 = (((x457%x458)*x459)%x460);

    if (t102 != 26231977LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x462 = 1;
	uint16_t x463 = 515U;
	int64_t x464 = INT64_MIN;
	volatile int64_t t103 = 80069LL;

    t103 = (((x461%x462)*x463)%x464);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x465 = 3651825U;
	uint32_t x466 = UINT32_MAX;
	int16_t x467 = INT16_MAX;
	volatile int8_t x468 = INT8_MIN;
	volatile uint32_t t104 = 70896552U;

    t104 = (((x465%x466)*x467)%x468);

    if (t104 != 3695232783U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t t105 = -6;

    t105 = (((x469%x470)*x471)%x472);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x477 = -1LL;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	static volatile int64_t t106 = 32326281LL;

    t106 = (((x477%x478)*x479)%x480);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x481 = 1162585LLU;
	static int32_t x482 = INT32_MIN;
	static volatile int8_t x483 = -1;
	static volatile uint64_t t107 = 21LLU;

    t107 = (((x481%x482)*x483)%x484);

    if (t107 != 2146321063LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x485 = INT64_MIN;
	static volatile int64_t x486 = INT64_MAX;
	uint32_t x488 = UINT32_MAX;

    t108 = (((x485%x486)*x487)%x488);

    if (t108 != -8LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x489 = -130177294LL;
	uint32_t x490 = 10327343U;
	uint64_t x491 = 7LLU;

    t109 = (((x489%x490)*x491)%x492);

    if (t109 != 18446744073665807370LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MIN;
	int8_t x504 = -10;
	int64_t t110 = -89774717774LL;

    t110 = (((x501%x502)*x503)%x504);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x505 = INT16_MIN;
	int64_t x506 = 13LL;
	uint32_t x507 = 156044060U;
	static uint64_t x508 = 64057780799538879LLU;
	static volatile uint64_t t111 = 136533962534435228LLU;

    t111 = (((x505%x506)*x507)%x508);

    if (t111 != 62160982993540863LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x509 = UINT16_MAX;
	volatile uint32_t x510 = 2111373855U;
	uint32_t t112 = 705987950U;

    t112 = (((x509%x510)*x511)%x512);

    if (t112 != 193524855U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int16_t x514 = INT16_MAX;
	int32_t x515 = 38;
	static int16_t x516 = 102;

    t113 = (((x513%x514)*x515)%x516);

    if (t113 != -38) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x517 = 34U;
	uint32_t x518 = UINT32_MAX;
	static int16_t x519 = 6818;
	uint32_t t114 = 114694297U;

    t114 = (((x517%x518)*x519)%x520);

    if (t114 != 231812U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x525 = INT64_MAX;
	int16_t x526 = INT16_MIN;
	static int8_t x527 = 20;
	volatile int64_t t115 = 44921979312822LL;

    t115 = (((x525%x526)*x527)%x528);

    if (t115 != 655340LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x530 = -1;
	int8_t x531 = INT8_MAX;
	int8_t x532 = INT8_MAX;

    t116 = (((x529%x530)*x531)%x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x533 = 225590031LLU;
	uint8_t x534 = 60U;
	uint64_t x535 = UINT64_MAX;
	static uint8_t x536 = 10U;
	volatile uint64_t t117 = 75LLU;

    t117 = (((x533%x534)*x535)%x536);

    if (t117 != 5LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x537 = INT8_MIN;
	volatile uint64_t x540 = 1872842LLU;
	volatile uint64_t t118 = 490226766340426726LLU;

    t118 = (((x537%x538)*x539)%x540);

    if (t118 != 774590LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = 1;
	int16_t x542 = INT16_MAX;
	int64_t x543 = INT64_MIN;
	int16_t x544 = INT16_MIN;
	static volatile int64_t t119 = 257466584395871830LL;

    t119 = (((x541%x542)*x543)%x544);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x546 = 32LLU;
	uint16_t x547 = UINT16_MAX;
	int64_t x548 = INT64_MIN;
	volatile uint64_t t120 = 1811LLU;

    t120 = (((x545%x546)*x547)%x548);

    if (t120 != 2031585LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x549 = 10U;
	static int32_t x550 = INT32_MAX;
	int64_t x552 = -3625676325340839226LL;
	int64_t t121 = -7098LL;

    t121 = (((x549%x550)*x551)%x552);

    if (t121 != 240LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x557 = 0U;
	int32_t x558 = -14694060;
	uint64_t x560 = UINT64_MAX;
	static uint64_t t122 = 600LLU;

    t122 = (((x557%x558)*x559)%x560);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x561 = -4;
	static uint16_t x562 = 468U;
	volatile int32_t x563 = -1;
	static volatile int32_t t123 = -243960;

    t123 = (((x561%x562)*x563)%x564);

    if (t123 != 4) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x570 = -61;
	uint32_t x571 = 1U;
	static int8_t x572 = INT8_MIN;
	uint32_t t124 = 925U;

    t124 = (((x569%x570)*x571)%x572);

    if (t124 != 17923823U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x573 = INT8_MIN;
	uint32_t x574 = 6496U;
	volatile int8_t x575 = INT8_MIN;
	static int16_t x576 = -2422;

    t125 = (((x573%x574)*x575)%x576);

    if (t125 != 4294922240U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x581 = -68656915437055489LL;
	static volatile int16_t x582 = -1;
	uint32_t x583 = 7698U;

    t126 = (((x581%x582)*x583)%x584);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x585 = 4645U;
	static int64_t x586 = -57LL;
	int64_t x587 = 47237721LL;
	int16_t x588 = -1;
	int64_t t127 = 2403923787591724928LL;

    t127 = (((x585%x586)*x587)%x588);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x589 = 2;
	uint8_t x591 = UINT8_MAX;
	int64_t x592 = -47084556810192LL;
	volatile int64_t t128 = 6550LL;

    t128 = (((x589%x590)*x591)%x592);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x593 = 126880521082906LLU;
	int64_t x596 = -1437175842LL;

    t129 = (((x593%x594)*x595)%x596);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x597 = 197177526582588232LLU;
	static volatile int32_t x598 = INT32_MIN;
	int8_t x599 = 2;
	static int8_t x600 = INT8_MAX;
	volatile uint64_t t130 = 292737LLU;

    t130 = (((x597%x598)*x599)%x600);

    if (t130 != 45LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x601 = -1;
	int8_t x602 = INT8_MAX;
	uint8_t x603 = UINT8_MAX;
	static uint64_t x604 = 11879587LLU;

    t131 = (((x601%x602)*x603)%x604);

    if (t131 != 1713729LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = -1;
	uint64_t x606 = 70631152LLU;
	int8_t x607 = INT8_MAX;
	volatile int64_t x608 = INT64_MAX;
	volatile uint64_t t132 = 97673805LLU;

    t132 = (((x605%x606)*x607)%x608);

    if (t132 != 2331043217LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x613 = 323U;
	uint32_t x615 = 114826350U;
	int64_t x616 = -1LL;

    t133 = (((x613%x614)*x615)%x616);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x617 = 103U;
	int16_t x618 = 95;
	uint32_t x619 = UINT32_MAX;
	int8_t x620 = INT8_MIN;
	uint32_t t134 = 22346954U;

    t134 = (((x617%x618)*x619)%x620);

    if (t134 != 120U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x621 = 9763942U;
	uint64_t x622 = UINT64_MAX;
	static uint16_t x623 = 198U;
	int64_t x624 = INT64_MIN;
	volatile uint64_t t135 = 70988128672696919LLU;

    t135 = (((x621%x622)*x623)%x624);

    if (t135 != 1933260516LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x625 = -989611133945250997LL;
	int8_t x626 = INT8_MIN;
	static int8_t x628 = INT8_MAX;

    t136 = (((x625%x626)*x627)%x628);

    if (t136 != 53LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x629 = INT8_MIN;
	int16_t x631 = 1;
	uint64_t x632 = 89321660055679133LLU;

    t137 = (((x629%x630)*x631)%x632);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x633 = 19754742LL;
	uint32_t x634 = UINT32_MAX;
	int64_t x635 = -1LL;
	int16_t x636 = -1;
	volatile int64_t t138 = 1LL;

    t138 = (((x633%x634)*x635)%x636);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x637 = -1;
	int64_t x638 = 1068226837LL;
	static int16_t x639 = -1;
	int16_t x640 = INT16_MIN;
	int64_t t139 = 1245LL;

    t139 = (((x637%x638)*x639)%x640);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x641 = UINT8_MAX;
	int8_t x642 = -7;
	static int32_t x643 = -6;
	int8_t x644 = INT8_MIN;
	volatile int32_t t140 = -178;

    t140 = (((x641%x642)*x643)%x644);

    if (t140 != -18) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = -1LL;
	static volatile int8_t x646 = INT8_MIN;
	uint8_t x647 = 3U;
	static int32_t x648 = INT32_MIN;
	int64_t t141 = 1LL;

    t141 = (((x645%x646)*x647)%x648);

    if (t141 != -3LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x649 = 8U;
	int16_t x650 = INT16_MIN;
	int8_t x651 = -17;
	int32_t t142 = -156;

    t142 = (((x649%x650)*x651)%x652);

    if (t142 != -136) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x653 = INT32_MAX;
	int8_t x654 = -1;
	int64_t x655 = -1LL;
	int32_t x656 = INT32_MAX;
	static volatile int64_t t143 = -10385897677LL;

    t143 = (((x653%x654)*x655)%x656);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x661 = 1;
	uint8_t x662 = 3U;
	uint32_t x663 = UINT32_MAX;
	int16_t x664 = INT16_MAX;
	volatile uint32_t t144 = 34398477U;

    t144 = (((x661%x662)*x663)%x664);

    if (t144 != 3U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x667 = 554LLU;
	uint64_t t145 = 85850090209516LLU;

    t145 = (((x665%x666)*x667)%x668);

    if (t145 != 31106LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x673 = 1LL;
	int16_t x674 = -746;
	int64_t x676 = INT64_MAX;

    t146 = (((x673%x674)*x675)%x676);

    if (t146 != -141566055LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x678 = 299460026LLU;
	int32_t x679 = INT32_MIN;
	uint64_t t147 = 1455431558LLU;

    t147 = (((x677%x678)*x679)%x680);

    if (t147 != 18254039946383851520LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x681 = INT16_MAX;
	int64_t x682 = 3601963751020LL;
	volatile uint32_t x683 = UINT32_MAX;
	static uint64_t x684 = UINT64_MAX;
	uint64_t t148 = 140109537023442LLU;

    t148 = (((x681%x682)*x683)%x684);

    if (t148 != 140733193355265LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x685 = 85U;
	volatile int32_t x686 = -1;
	volatile int8_t x688 = 1;
	int64_t t149 = -70975LL;

    t149 = (((x685%x686)*x687)%x688);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x689 = -2;
	volatile uint64_t x690 = 6736142523LLU;
	static int32_t x691 = -1;

    t150 = (((x689%x690)*x691)%x692);

    if (t150 != 18446744073107967806LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x693 = INT16_MIN;
	volatile uint32_t x694 = 3340511U;
	int8_t x695 = 15;
	volatile int32_t x696 = INT32_MAX;
	uint32_t t151 = 533615493U;

    t151 = (((x693%x694)*x695)%x696);

    if (t151 != 35668395U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x697 = 489668485LLU;
	uint64_t x698 = 4997370100059483026LLU;
	int8_t x699 = INT8_MIN;
	uint64_t t152 = 1597LLU;

    t152 = (((x697%x698)*x699)%x700);

    if (t152 != 8LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	uint32_t x702 = 1489483U;
	int64_t x703 = -3LL;
	static volatile int8_t x704 = INT8_MIN;
	int64_t t153 = 3075764911801718718LL;

    t153 = (((x701%x702)*x703)%x704);

    if (t153 != -125LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x705 = -3016;
	uint64_t x706 = UINT64_MAX;
	volatile uint64_t x707 = UINT64_MAX;
	volatile int32_t x708 = -1;
	static uint64_t t154 = 0LLU;

    t154 = (((x705%x706)*x707)%x708);

    if (t154 != 3016LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x709 = 1U;
	int8_t x710 = -1;
	static uint16_t x711 = 741U;

    t155 = (((x709%x710)*x711)%x712);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x713 = INT32_MIN;
	uint64_t x715 = 2757783777215LLU;
	uint32_t x716 = UINT32_MAX;
	volatile uint64_t t156 = 1190474072LLU;

    t156 = (((x713%x714)*x715)%x716);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x721 = -607;
	uint64_t x724 = UINT64_MAX;
	volatile uint64_t t157 = 227887458LLU;

    t157 = (((x721%x722)*x723)%x724);

    if (t157 != 18446744073669771871LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x725 = INT16_MIN;
	volatile uint8_t x727 = UINT8_MAX;
	volatile int32_t x728 = INT32_MIN;

    t158 = (((x725%x726)*x727)%x728);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x733 = 667795487LLU;
	static int16_t x734 = INT16_MIN;
	uint64_t t159 = 178727LLU;

    t159 = (((x733%x734)*x735)%x736);

    if (t159 != 18446722191387033600LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x737 = -1LL;
	uint32_t x739 = 55316U;
	volatile int8_t x740 = INT8_MIN;

    t160 = (((x737%x738)*x739)%x740);

    if (t160 != 38204050716LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x741 = 933U;
	static uint16_t x742 = 7U;
	int32_t x743 = -7356022;
	volatile uint32_t x744 = 36314U;
	uint32_t t161 = 3U;

    t161 = (((x741%x742)*x743)%x744);

    if (t161 != 33014U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x750 = INT64_MAX;
	int32_t x751 = 4;
	uint16_t x752 = 38U;
	int64_t t162 = 1LL;

    t162 = (((x749%x750)*x751)%x752);

    if (t162 != -36LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x756 = INT64_MIN;

    t163 = (((x753%x754)*x755)%x756);

    if (t163 != 3678200400LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x757 = -1;
	static int32_t x758 = INT32_MIN;
	volatile uint16_t x759 = 4U;
	uint32_t x760 = 59594804U;
	volatile uint32_t t164 = 2193U;

    t164 = (((x757%x758)*x759)%x760);

    if (t164 != 4141404U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x761 = INT8_MIN;
	uint64_t x763 = 73917827838LLU;
	int64_t x764 = -1LL;
	volatile uint64_t t165 = 2438923530612638442LLU;

    t165 = (((x761%x762)*x763)%x764);

    if (t165 != 18446734612227588352LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x769 = UINT32_MAX;
	int64_t x770 = INT64_MAX;
	int16_t x772 = -4;
	volatile int64_t t166 = 235977LL;

    t166 = (((x769%x770)*x771)%x772);

    if (t166 != -3LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x773 = 9697810746LL;
	int16_t x775 = -1;
	volatile int64_t x776 = INT64_MIN;
	volatile int64_t t167 = -61142266311LL;

    t167 = (((x773%x774)*x775)%x776);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x777 = 3U;
	int64_t x779 = -1LL;
	volatile int64_t t168 = 219446713048808LL;

    t168 = (((x777%x778)*x779)%x780);

    if (t168 != -3LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x781 = INT64_MAX;
	int8_t x782 = -1;
	uint32_t x783 = 5125U;
	int64_t x784 = -1LL;

    t169 = (((x781%x782)*x783)%x784);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x785 = -1LL;
	volatile int8_t x786 = -1;
	volatile int64_t x787 = -3861842725LL;
	volatile uint16_t x788 = 7U;

    t170 = (((x785%x786)*x787)%x788);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x789 = 8395392192LLU;
	static int32_t x790 = -1;
	uint64_t x791 = UINT64_MAX;
	static uint64_t x792 = UINT64_MAX;
	uint64_t t171 = 0LLU;

    t171 = (((x789%x790)*x791)%x792);

    if (t171 != 18446744065314159424LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x793 = INT8_MAX;
	int16_t x794 = INT16_MAX;
	int64_t x795 = -1LL;
	volatile int64_t x796 = INT64_MIN;
	volatile int64_t t172 = 3294LL;

    t172 = (((x793%x794)*x795)%x796);

    if (t172 != -127LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x798 = -1;
	volatile int32_t x800 = INT32_MAX;
	volatile int32_t t173 = 237;

    t173 = (((x797%x798)*x799)%x800);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x805 = INT32_MAX;
	uint64_t x806 = 18205LLU;
	uint8_t x808 = 75U;
	static uint64_t t174 = 51098107620LLU;

    t174 = (((x805%x806)*x807)%x808);

    if (t174 != 49LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	int32_t x810 = -1;
	int8_t x811 = -1;
	uint64_t t175 = 51960049LLU;

    t175 = (((x809%x810)*x811)%x812);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x813 = INT32_MIN;
	int64_t x814 = INT64_MIN;
	uint64_t x815 = 13416955175950620LLU;
	uint16_t x816 = UINT16_MAX;
	uint64_t t176 = 19240389099LLU;

    t176 = (((x813%x814)*x815)%x816);

    if (t176 != 27605LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x817 = INT64_MAX;
	int64_t x818 = INT64_MAX;
	int8_t x819 = INT8_MAX;
	int64_t t177 = 1167262872793389515LL;

    t177 = (((x817%x818)*x819)%x820);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x821 = INT16_MIN;
	uint16_t x822 = UINT16_MAX;
	volatile int16_t x823 = -1;
	int32_t x824 = 1;
	volatile int32_t t178 = 635773402;

    t178 = (((x821%x822)*x823)%x824);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x830 = 1990U;
	volatile uint16_t x832 = 5U;
	int32_t t179 = 465;

    t179 = (((x829%x830)*x831)%x832);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x833 = UINT8_MAX;
	static int32_t x834 = INT32_MIN;
	volatile int16_t x835 = INT16_MIN;
	int8_t x836 = -1;
	int32_t t180 = 636;

    t180 = (((x833%x834)*x835)%x836);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x837 = 24U;
	int64_t x838 = -225826647673LL;
	volatile int16_t x839 = INT16_MAX;
	int16_t x840 = -1;

    t181 = (((x837%x838)*x839)%x840);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x842 = -1;
	volatile int16_t x843 = -1;
	int32_t x844 = INT32_MIN;

    t182 = (((x841%x842)*x843)%x844);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x850 = INT16_MAX;
	int16_t x851 = INT16_MIN;
	int8_t x852 = -1;
	volatile int32_t t183 = 93289879;

    t183 = (((x849%x850)*x851)%x852);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x855 = INT16_MAX;
	int32_t t184 = -117548;

    t184 = (((x853%x854)*x855)%x856);

    if (t184 != -32742) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x858 = -22;
	int64_t x859 = -50LL;
	int32_t x860 = -143;
	int64_t t185 = 2297536442417LL;

    t185 = (((x857%x858)*x859)%x860);

    if (t185 != 50LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x866 = -1;

    t186 = (((x865%x866)*x867)%x868);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x869 = INT8_MIN;
	uint16_t x870 = 3U;
	int16_t x871 = INT16_MAX;
	uint64_t x872 = UINT64_MAX;
	volatile uint64_t t187 = 275LLU;

    t187 = (((x869%x870)*x871)%x872);

    if (t187 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x873 = INT32_MIN;
	uint32_t x874 = 1102U;
	int8_t x875 = -1;

    t188 = (((x873%x874)*x875)%x876);

    if (t188 != 3U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x877 = INT64_MAX;
	static volatile int64_t x879 = -1LL;
	int64_t x880 = INT64_MAX;

    t189 = (((x877%x878)*x879)%x880);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x881 = 20955590898LLU;
	uint8_t x882 = 57U;
	volatile int32_t x883 = INT32_MIN;
	int8_t x884 = INT8_MIN;
	volatile uint64_t t190 = 7LLU;

    t190 = (((x881%x882)*x883)%x884);

    if (t190 != 18446744002842591232LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x887 = INT8_MIN;
	uint16_t x888 = UINT16_MAX;
	uint32_t t191 = 13680025U;

    t191 = (((x885%x886)*x887)%x888);

    if (t191 != 58240U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x889 = 9565U;
	int64_t x890 = INT64_MIN;
	static int16_t x891 = INT16_MIN;
	uint16_t x892 = UINT16_MAX;
	int64_t t192 = 508179LL;

    t192 = (((x889%x890)*x891)%x892);

    if (t192 != -37550LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x894 = INT16_MIN;
	volatile uint64_t x895 = UINT64_MAX;
	uint64_t x896 = 3096892768246710LLU;
	uint64_t t193 = 1079261003819535753LLU;

    t193 = (((x893%x894)*x895)%x896);

    if (t193 != 128LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x897 = 7LLU;
	static int8_t x899 = INT8_MAX;
	int8_t x900 = -28;
	volatile uint64_t t194 = 103677LLU;

    t194 = (((x897%x898)*x899)%x900);

    if (t194 != 889LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x901 = 1U;
	uint64_t x902 = 6841592412859LLU;
	int64_t x904 = INT64_MAX;
	uint64_t t195 = 76062329240634683LLU;

    t195 = (((x901%x902)*x903)%x904);

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x905 = UINT16_MAX;
	int16_t x906 = INT16_MIN;
	static volatile int8_t x907 = 4;
	int64_t x908 = -1769948824LL;
	int64_t t196 = -9581772LL;

    t196 = (((x905%x906)*x907)%x908);

    if (t196 != 131068LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x909 = 1U;
	int64_t x910 = INT64_MIN;
	uint16_t x911 = 1464U;
	volatile int16_t x912 = INT16_MIN;

    t197 = (((x909%x910)*x911)%x912);

    if (t197 != 1464LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x913 = -1;
	int16_t x914 = -1;
	static volatile int16_t x915 = INT16_MIN;
	int32_t t198 = 506380992;

    t198 = (((x913%x914)*x915)%x916);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x918 = INT16_MIN;
	uint64_t x919 = 8625690529218291LLU;
	int64_t x920 = 1134144644841LL;
	static uint64_t t199 = 111407468728572LLU;

    t199 = (((x917%x918)*x919)%x920);

    if (t199 != 33067532826LLU) { NG(); } else { ; }
	
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

