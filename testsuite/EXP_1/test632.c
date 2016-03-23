
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

int8_t x2 = INT8_MIN;
uint16_t x4 = 53U;
int64_t x15 = INT64_MIN;
static int16_t x25 = -1;
int64_t t3 = 0LL;
int32_t x40 = -9015090;
uint64_t x43 = UINT64_MAX;
volatile int64_t x47 = INT64_MIN;
int16_t x49 = -170;
uint8_t x51 = UINT8_MAX;
static volatile int64_t t9 = 0LL;
uint64_t x66 = 1432898LLU;
uint64_t t13 = 23471486189LLU;
int8_t x80 = INT8_MIN;
static volatile int64_t t16 = 307553694884539190LL;
int8_t x86 = INT8_MAX;
static int32_t x87 = 1;
int64_t x90 = -27LL;
int64_t x92 = INT64_MAX;
static int32_t x96 = 229890;
int8_t x105 = -6;
uint32_t x107 = 1986800689U;
volatile uint32_t x109 = 19149U;
static uint16_t x111 = 117U;
volatile int8_t x112 = INT8_MIN;
volatile int64_t t26 = 3175LL;
int8_t x132 = INT8_MIN;
volatile int32_t t27 = -58;
int64_t x143 = -3156711055015498LL;
int32_t x151 = 1821;
int32_t x153 = -163893887;
int64_t x158 = 17LL;
static uint8_t x166 = UINT8_MAX;
int64_t x167 = INT64_MIN;
volatile int32_t x168 = INT32_MAX;
int64_t x173 = INT64_MIN;
int8_t x175 = -1;
uint16_t x183 = 62U;
uint64_t x186 = 106LLU;
int8_t x219 = 12;
static int8_t x222 = -1;
volatile uint64_t t48 = 11760363LLU;
int64_t x225 = 30133390625LL;
uint32_t x227 = 246014414U;
int32_t x233 = -6773;
int64_t t50 = -3824741299LL;
int64_t x239 = INT64_MIN;
int64_t t51 = -64861387LL;
int64_t x246 = INT64_MIN;
volatile int64_t x247 = INT64_MAX;
volatile int64_t t53 = -1584044037LL;
static int64_t x251 = INT64_MIN;
static int64_t t55 = -106085930699409658LL;
uint64_t x258 = 72522804860LLU;
int32_t x260 = INT32_MAX;
int64_t x263 = 364328155051LL;
static int8_t x265 = INT8_MAX;
static int16_t x278 = INT16_MIN;
int16_t x281 = INT16_MAX;
volatile int32_t t61 = 12825;
volatile int64_t x292 = INT64_MAX;
static uint32_t x294 = 21640664U;
static uint64_t t65 = 247508974LLU;
int16_t x307 = -3551;
int64_t x310 = INT64_MIN;
uint64_t x315 = 28169170368780LLU;
static volatile uint64_t t70 = 2575500309LLU;
static int16_t x337 = 1436;
volatile int64_t x338 = 25584LL;
int32_t x339 = INT32_MIN;
int16_t x347 = INT16_MIN;
volatile uint64_t t77 = 392588257590087LLU;
static int64_t x359 = -479504432254313671LL;
volatile int32_t x364 = 8;
volatile uint32_t x366 = 2885065U;
int8_t x381 = INT8_MAX;
volatile int32_t x389 = INT32_MAX;
static int16_t x394 = 12006;
int8_t x395 = 7;
static int8_t x408 = INT8_MIN;
volatile int32_t t90 = 8074974;
int8_t x422 = INT8_MIN;
int32_t x425 = INT32_MIN;
uint64_t x443 = UINT64_MAX;
static int8_t x444 = -1;
int64_t x445 = -892735LL;
static uint8_t x457 = UINT8_MAX;
static int16_t x459 = -1;
uint16_t x462 = 115U;
int64_t t100 = 4324683809LL;
int64_t x470 = -1LL;
volatile uint32_t x471 = UINT32_MAX;
int16_t x473 = -1;
volatile uint16_t x476 = 1429U;
uint64_t x485 = UINT64_MAX;
volatile int16_t x494 = INT16_MIN;
uint8_t x501 = UINT8_MAX;
uint8_t x513 = UINT8_MAX;
int32_t x514 = 3923278;
int8_t x515 = INT8_MAX;
int64_t t109 = -46LL;
volatile uint32_t t111 = 9891U;
uint32_t x532 = 3433548U;
int64_t x535 = -895725427078LL;
int32_t x540 = 6;
static int8_t x546 = INT8_MIN;
static uint64_t t117 = 393769LLU;
int32_t x559 = INT32_MIN;
int8_t x560 = 8;
int32_t x561 = INT32_MAX;
int64_t x563 = INT64_MIN;
int32_t x565 = 1;
int64_t x566 = INT64_MIN;
int16_t x570 = -1;
int32_t x572 = INT32_MAX;
static volatile int32_t t122 = -462400;
uint64_t t123 = 6037029085348LLU;
int8_t x577 = 4;
volatile int32_t t125 = 86;
static uint16_t x610 = 40U;
uint64_t t129 = 19460745LLU;
int32_t x614 = -95;
uint16_t x620 = 0U;
static volatile uint64_t t131 = 6679003LLU;
uint64_t t132 = 8LLU;
int16_t x631 = INT16_MIN;
int32_t x638 = -1;
volatile int32_t t135 = -3055;
volatile uint32_t x643 = 1U;
uint32_t x649 = UINT32_MAX;
int64_t x650 = 2300616LL;
static volatile int16_t x651 = INT16_MIN;
uint64_t t137 = 2939421511LLU;
int32_t x668 = 1249440;
int8_t x671 = 3;
int16_t x676 = INT16_MIN;
uint32_t t142 = 0U;
uint64_t t143 = 0LLU;
uint32_t x683 = UINT32_MAX;
volatile int32_t t145 = 86638706;
uint64_t x694 = 10780LLU;
int16_t x701 = INT16_MAX;
uint8_t x707 = 8U;
int16_t x721 = INT16_MIN;
static volatile int32_t x723 = INT32_MIN;
static volatile uint32_t x726 = 2338352U;
int64_t x733 = INT64_MAX;
int32_t x735 = 250;
volatile uint8_t x742 = 15U;
int32_t x743 = -1;
int16_t x744 = INT16_MIN;
int16_t x748 = -1;
volatile int32_t t162 = 51426;
uint16_t x771 = UINT16_MAX;
int32_t x784 = -1;
int32_t x787 = -970083;
volatile uint64_t t167 = 8687271532493282LLU;
int32_t x796 = INT32_MAX;
static int16_t x797 = -1;
static volatile uint16_t x798 = UINT16_MAX;
int8_t x799 = INT8_MAX;
uint64_t x802 = 10422499426LLU;
int32_t x807 = INT32_MIN;
int64_t x816 = INT64_MAX;
int32_t x818 = -923827;
volatile int64_t t175 = 966LL;
static volatile int32_t t177 = -6743223;
int64_t x831 = INT64_MIN;
int8_t x841 = INT8_MIN;
int32_t t179 = 24858;
uint64_t x852 = UINT64_MAX;
int16_t x853 = INT16_MIN;
int8_t x870 = INT8_MIN;
volatile uint16_t x878 = 11U;
static int16_t x880 = 1784;
volatile uint32_t t186 = 77195442U;
int8_t x891 = INT8_MIN;
uint16_t x899 = 12U;
int64_t x903 = INT64_MIN;
uint64_t x906 = UINT64_MAX;
static uint32_t x908 = UINT32_MAX;
int16_t x909 = -1;
int64_t x911 = -1LL;
uint8_t x913 = 17U;
uint32_t x919 = 1742043U;
static volatile uint32_t t195 = 65U;
static uint8_t x923 = 8U;
int16_t x924 = -2;
volatile int16_t x927 = -1;
int8_t x933 = INT8_MAX;
int32_t x934 = -212339596;


void f0(void) {
    	volatile uint32_t x1 = 440868U;
	volatile uint64_t x3 = 16808605720009141LLU;
	uint64_t t0 = 14850272LLU;

    t0 = (((x1/x2)/x3)-x4);

    if (t0 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MAX;
	int32_t x6 = 59;
	volatile int8_t x7 = INT8_MAX;
	volatile uint16_t x8 = 106U;
	static int32_t t1 = 0;

    t1 = (((x5/x6)/x7)-x8);

    if (t1 != -106) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1LL;
	volatile uint64_t x14 = 1LLU;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t2 = 2176260805620602719LLU;

    t2 = (((x13/x14)/x15)-x16);

    if (t2 != 129LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x26 = 774;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = 601458LL;

    t3 = (((x25/x26)/x27)-x28);

    if (t3 != -601458LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = -1LL;
	static volatile uint8_t x30 = 17U;
	int16_t x31 = 1;
	int32_t x32 = INT32_MIN;
	static volatile int64_t t4 = 8907106LL;

    t4 = (((x29/x30)/x31)-x32);

    if (t4 != 2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x33 = UINT8_MAX;
	int32_t x34 = 29910287;
	uint64_t x35 = 25952842LLU;
	static volatile int64_t x36 = -1LL;
	uint64_t t5 = 40066817660454LLU;

    t5 = (((x33/x34)/x35)-x36);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x37 = 0U;
	static uint16_t x38 = 4U;
	static volatile uint64_t x39 = UINT64_MAX;
	uint64_t t6 = 1706683303912323LLU;

    t6 = (((x37/x38)/x39)-x40);

    if (t6 != 9015090LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MIN;
	volatile int64_t x42 = 1462LL;
	uint32_t x44 = 3674197U;
	volatile uint64_t t7 = 144LLU;

    t7 = (((x41/x42)/x43)-x44);

    if (t7 != 18446744073705877419LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	volatile uint64_t x46 = 552752646928838LLU;
	int32_t x48 = 5544;
	static volatile uint64_t t8 = 17388054LLU;

    t8 = (((x45/x46)/x47)-x48);

    if (t8 != 18446744073709546072LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x50 = INT64_MAX;
	uint32_t x52 = 771503U;

    t9 = (((x49/x50)/x51)-x52);

    if (t9 != -771503LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = 9U;
	static uint64_t x59 = 21228743LLU;
	int8_t x60 = 23;
	static uint64_t t10 = UINT64_MAX;

    t10 = (((x57/x58)/x59)-x60);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	int32_t x63 = 61;
	static int8_t x64 = INT8_MAX;
	int64_t t11 = 1LL;

    t11 = (((x61/x62)/x63)-x64);

    if (t11 != 70409172LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x65 = 180700LLU;
	int32_t x67 = INT32_MIN;
	int8_t x68 = INT8_MIN;
	uint64_t t12 = 2046012794540LLU;

    t12 = (((x65/x66)/x67)-x68);

    if (t12 != 128LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x69 = INT16_MIN;
	volatile uint16_t x70 = 4U;
	static uint8_t x71 = 4U;
	uint64_t x72 = 1973988925578494392LLU;

    t13 = (((x69/x70)/x71)-x72);

    if (t13 != 16472755148131055176LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = -1LL;
	int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;
	uint64_t x76 = 4014LLU;
	static uint64_t t14 = 90778322122027988LLU;

    t14 = (((x73/x74)/x75)-x76);

    if (t14 != 18446744073709547602LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x77 = 35U;
	static int64_t x78 = INT64_MAX;
	uint16_t x79 = 1U;
	static int64_t t15 = -14304LL;

    t15 = (((x77/x78)/x79)-x80);

    if (t15 != 128LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = 116268053U;
	volatile int64_t x83 = -1LL;
	int64_t x84 = INT64_MIN;

    t16 = (((x81/x82)/x83)-x84);

    if (t16 != 9223372036854775772LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x85 = 0;
	uint64_t x88 = 340388455295038LLU;
	uint64_t t17 = 46517820720874LLU;

    t17 = (((x85/x86)/x87)-x88);

    if (t17 != 18446403685254256578LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MIN;
	static volatile int32_t x91 = 29491570;
	int64_t t18 = -247862233732375LL;

    t18 = (((x89/x90)/x91)-x92);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x93 = 1824084643934LLU;
	static uint32_t x94 = 754108U;
	static int16_t x95 = INT16_MAX;
	uint64_t t19 = 7254868968623LLU;

    t19 = (((x93/x94)/x95)-x96);

    if (t19 != 18446744073709321799LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = -1;
	static int32_t x98 = 10876;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = -840775;
	static volatile int32_t t20 = -16145;

    t20 = (((x97/x98)/x99)-x100);

    if (t20 != 840775) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 1;
	volatile int32_t t21 = 432;

    t21 = (((x101/x102)/x103)-x104);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x106 = -27218;
	static uint16_t x108 = UINT16_MAX;
	volatile uint32_t t22 = 122464722U;

    t22 = (((x105/x106)/x107)-x108);

    if (t22 != 4294901761U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x110 = -1;
	volatile uint32_t t23 = 0U;

    t23 = (((x109/x110)/x111)-x112);

    if (t23 != 128U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x113 = UINT8_MAX;
	int8_t x114 = -1;
	volatile int8_t x115 = -1;
	uint32_t x116 = 168899024U;
	uint32_t t24 = 2937U;

    t24 = (((x113/x114)/x115)-x116);

    if (t24 != 4126068527U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x117 = UINT8_MAX;
	uint16_t x118 = UINT16_MAX;
	static uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t25 = 0;

    t25 = (((x117/x118)/x119)-x120);

    if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x125 = INT32_MIN;
	uint32_t x126 = 1315653U;
	int64_t x127 = INT64_MIN;
	int64_t x128 = -1LL;

    t26 = (((x125/x126)/x127)-x128);

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x129 = INT8_MAX;
	uint16_t x130 = UINT16_MAX;
	volatile uint8_t x131 = UINT8_MAX;

    t27 = (((x129/x130)/x131)-x132);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	static uint8_t x135 = 9U;
	uint64_t x136 = 214123286023780LLU;
	uint64_t t28 = 182535900LLU;

    t28 = (((x133/x134)/x135)-x136);

    if (t28 != 18446529950423527836LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x137 = UINT8_MAX;
	static uint16_t x138 = UINT16_MAX;
	int32_t x139 = 1;
	static volatile int16_t x140 = INT16_MIN;
	int32_t t29 = -59080;

    t29 = (((x137/x138)/x139)-x140);

    if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = INT8_MAX;
	volatile int64_t x142 = INT64_MIN;
	static volatile uint16_t x144 = 0U;
	static int64_t t30 = -105641966LL;

    t30 = (((x141/x142)/x143)-x144);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = UINT16_MAX;
	static int8_t x146 = -1;
	int64_t x147 = 15678668971901653LL;
	static volatile int16_t x148 = INT16_MIN;
	int64_t t31 = -860039LL;

    t31 = (((x145/x146)/x147)-x148);

    if (t31 != 32768LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x149 = -44LL;
	volatile uint16_t x150 = 288U;
	uint64_t x152 = UINT64_MAX;
	static uint64_t t32 = 252668403956840LLU;

    t32 = (((x149/x150)/x151)-x152);

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x154 = INT32_MIN;
	uint16_t x155 = UINT16_MAX;
	uint16_t x156 = 5976U;
	static int32_t t33 = 194;

    t33 = (((x153/x154)/x155)-x156);

    if (t33 != -5976) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = INT64_MAX;
	int8_t x159 = -1;
	int32_t x160 = -1;
	volatile int64_t t34 = 3LL;

    t34 = (((x157/x158)/x159)-x160);

    if (t34 != -542551296285575046LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	int32_t x163 = -122323;
	uint16_t x164 = 7U;
	volatile uint64_t t35 = 2464LLU;

    t35 = (((x161/x162)/x163)-x164);

    if (t35 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = 8;
	volatile int64_t t36 = 809667344LL;

    t36 = (((x165/x166)/x167)-x168);

    if (t36 != -2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = UINT8_MAX;
	static uint8_t x170 = 30U;
	int16_t x171 = 126;
	volatile int8_t x172 = -32;
	int32_t t37 = -60129562;

    t37 = (((x169/x170)/x171)-x172);

    if (t37 != 32) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x174 = -419608186LL;
	uint64_t x176 = 43109988944LLU;
	uint64_t t38 = 1068484465849263173LLU;

    t38 = (((x173/x174)/x175)-x176);

    if (t38 != 18446744008618647274LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = 188484789269LL;
	int16_t x178 = 15018;
	uint64_t x179 = 5996LLU;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t39 = 956743163571791LLU;

    t39 = (((x177/x178)/x179)-x180);

    if (t39 != 2094LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x181 = INT8_MIN;
	static volatile int32_t x182 = INT32_MIN;
	volatile int64_t x184 = INT64_MAX;
	int64_t t40 = 28500012307LL;

    t40 = (((x181/x182)/x183)-x184);

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x185 = 1U;
	volatile int64_t x187 = 84656788400593520LL;
	int64_t x188 = -51602023260617LL;
	volatile uint64_t t41 = 23974160240LLU;

    t41 = (((x185/x186)/x187)-x188);

    if (t41 != 51602023260617LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x197 = INT8_MIN;
	volatile int16_t x198 = 4;
	uint64_t x199 = 2LLU;
	static uint8_t x200 = 112U;
	volatile uint64_t t42 = 2481831438767822279LLU;

    t42 = (((x197/x198)/x199)-x200);

    if (t42 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = -141;
	volatile uint64_t x202 = UINT64_MAX;
	uint8_t x203 = 8U;
	uint8_t x204 = 13U;
	uint64_t t43 = 929LLU;

    t43 = (((x201/x202)/x203)-x204);

    if (t43 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x205 = UINT8_MAX;
	static int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	uint8_t x208 = 3U;
	volatile int32_t t44 = -83;

    t44 = (((x205/x206)/x207)-x208);

    if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x209 = INT64_MAX;
	uint64_t x210 = 7022196832671277046LLU;
	int64_t x211 = 3194LL;
	static int8_t x212 = 21;
	uint64_t t45 = 30LLU;

    t45 = (((x209/x210)/x211)-x212);

    if (t45 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x213 = UINT32_MAX;
	volatile int16_t x214 = INT16_MIN;
	volatile int32_t x215 = INT32_MAX;
	uint16_t x216 = 66U;
	uint32_t t46 = 661488U;

    t46 = (((x213/x214)/x215)-x216);

    if (t46 != 4294967230U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = INT64_MAX;
	uint8_t x218 = 1U;
	int8_t x220 = -1;
	static volatile int64_t t47 = 114251749386959LL;

    t47 = (((x217/x218)/x219)-x220);

    if (t47 != 768614336404564651LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x221 = -49380963LL;
	uint64_t x223 = 529777951795307LLU;
	int16_t x224 = -1167;

    t48 = (((x221/x222)/x223)-x224);

    if (t48 != 1167LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x226 = INT16_MAX;
	static int16_t x228 = INT16_MIN;
	int64_t t49 = -2435751LL;

    t49 = (((x225/x226)/x227)-x228);

    if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x234 = -1LL;
	uint16_t x235 = 28U;
	int32_t x236 = INT32_MIN;

    t50 = (((x233/x234)/x235)-x236);

    if (t50 != 2147483889LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x237 = 646U;
	int16_t x238 = -27;
	uint8_t x240 = UINT8_MAX;

    t51 = (((x237/x238)/x239)-x240);

    if (t51 != -255LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x241 = 290097176LLU;
	uint32_t x242 = 13024438U;
	int32_t x243 = 19;
	int32_t x244 = INT32_MAX;
	uint64_t t52 = 2477061524196LLU;

    t52 = (((x241/x242)/x243)-x244);

    if (t52 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x245 = INT32_MAX;
	uint8_t x248 = 8U;

    t53 = (((x245/x246)/x247)-x248);

    if (t53 != -8LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x249 = -1;
	uint64_t x250 = UINT64_MAX;
	uint32_t x252 = UINT32_MAX;
	uint64_t t54 = 1059015591LLU;

    t54 = (((x249/x250)/x251)-x252);

    if (t54 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x253 = -1LL;
	volatile int16_t x254 = INT16_MIN;
	static volatile int8_t x255 = INT8_MIN;
	static int32_t x256 = INT32_MAX;

    t55 = (((x253/x254)/x255)-x256);

    if (t55 != -2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x257 = UINT32_MAX;
	volatile int64_t x259 = INT64_MIN;
	uint64_t t56 = 44648248520LLU;

    t56 = (((x257/x258)/x259)-x260);

    if (t56 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x261 = 2364617062690LLU;
	int8_t x262 = -32;
	int32_t x264 = INT32_MIN;
	volatile uint64_t t57 = 101713843095922576LLU;

    t57 = (((x261/x262)/x263)-x264);

    if (t57 != 2147483648LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	uint32_t t58 = 33895U;

    t58 = (((x265/x266)/x267)-x268);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x269 = -8357;
	uint8_t x270 = 33U;
	volatile int8_t x271 = -1;
	static uint8_t x272 = UINT8_MAX;
	int32_t t59 = -572329;

    t59 = (((x269/x270)/x271)-x272);

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x277 = INT64_MIN;
	volatile int64_t x279 = 7947391938LL;
	int16_t x280 = INT16_MIN;
	int64_t t60 = -11419587165721LL;

    t60 = (((x277/x278)/x279)-x280);

    if (t60 != 68185LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x282 = -1;
	int16_t x283 = -103;
	volatile int32_t x284 = 7;

    t61 = (((x281/x282)/x283)-x284);

    if (t61 != 311) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = 0;
	int32_t x286 = 100;
	static int32_t x287 = INT32_MAX;
	int64_t x288 = 406LL;
	int64_t t62 = -4129408276123523997LL;

    t62 = (((x285/x286)/x287)-x288);

    if (t62 != -406LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	static int16_t x291 = INT16_MIN;
	int64_t t63 = -1LL;

    t63 = (((x289/x290)/x291)-x292);

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x293 = 25U;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = -1LL;
	volatile uint64_t t64 = 8707LLU;

    t64 = (((x293/x294)/x295)-x296);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x297 = INT64_MAX;
	volatile uint64_t x298 = 947018070558LLU;
	uint32_t x299 = 1907004U;
	int64_t x300 = 1LL;

    t65 = (((x297/x298)/x299)-x300);

    if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = -1;
	uint32_t x306 = 34113462U;
	static int8_t x308 = 13;
	uint32_t t66 = 14620U;

    t66 = (((x305/x306)/x307)-x308);

    if (t66 != 4294967283U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x309 = UINT32_MAX;
	volatile int32_t x311 = 33;
	int32_t x312 = -1;
	volatile int64_t t67 = 759033816302105LL;

    t67 = (((x309/x310)/x311)-x312);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x313 = 226329LL;
	int8_t x314 = INT8_MAX;
	volatile int16_t x316 = -1;
	volatile uint64_t t68 = 1074762405LLU;

    t68 = (((x313/x314)/x315)-x316);

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t69 = 53710060656713896LLU;

    t69 = (((x317/x318)/x319)-x320);

    if (t69 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x321 = 79LLU;
	volatile uint16_t x322 = 4U;
	static volatile int64_t x323 = -95785LL;
	int16_t x324 = INT16_MAX;

    t70 = (((x321/x322)/x323)-x324);

    if (t70 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x325 = 23U;
	int64_t x326 = INT64_MIN;
	volatile int64_t x327 = 890991859LL;
	uint8_t x328 = 5U;
	int64_t t71 = 103904235012LL;

    t71 = (((x325/x326)/x327)-x328);

    if (t71 != -5LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x329 = -1;
	int32_t x330 = INT32_MAX;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MAX;
	int32_t t72 = -9080;

    t72 = (((x329/x330)/x331)-x332);

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x340 = -7593;
	volatile int64_t t73 = -6050673LL;

    t73 = (((x337/x338)/x339)-x340);

    if (t73 != 7593LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x341 = INT16_MIN;
	static volatile int16_t x342 = 1;
	int8_t x343 = -1;
	volatile uint32_t x344 = 198378220U;
	volatile uint32_t t74 = 2U;

    t74 = (((x341/x342)/x343)-x344);

    if (t74 != 4096621844U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x345 = -551;
	static int32_t x346 = INT32_MAX;
	int64_t x348 = -1LL;
	static int64_t t75 = -7976LL;

    t75 = (((x345/x346)/x347)-x348);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = INT8_MIN;
	volatile uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = 3477249178115601LLU;
	static uint64_t t76 = 6286276396890LLU;

    t76 = (((x349/x350)/x351)-x352);

    if (t76 != 18443266824531436015LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x353 = UINT64_MAX;
	int8_t x354 = -13;
	volatile int32_t x355 = INT32_MIN;
	static int32_t x356 = 3206882;

    t77 = (((x353/x354)/x355)-x356);

    if (t77 != 18446744073706344734LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = INT16_MAX;
	int32_t x358 = -550582286;
	static int64_t x360 = -2LL;
	static volatile int64_t t78 = 24LL;

    t78 = (((x357/x358)/x359)-x360);

    if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x361 = 2U;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = -1;
	static int32_t t79 = 414;

    t79 = (((x361/x362)/x363)-x364);

    if (t79 != -8) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x365 = 39U;
	static int32_t x367 = INT32_MAX;
	int32_t x368 = -1;
	volatile uint32_t t80 = 31061656U;

    t80 = (((x365/x366)/x367)-x368);

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x369 = -76;
	int8_t x370 = -5;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 62U;
	volatile int32_t t81 = -2;

    t81 = (((x369/x370)/x371)-x372);

    if (t81 != -62) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x377 = UINT32_MAX;
	static int16_t x378 = INT16_MIN;
	volatile int8_t x379 = -1;
	uint8_t x380 = UINT8_MAX;
	volatile uint32_t t82 = 847713736U;

    t82 = (((x377/x378)/x379)-x380);

    if (t82 != 4294967041U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x382 = INT16_MIN;
	int64_t x383 = 2779051189409230LL;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t83 = 55999522015066614LLU;

    t83 = (((x381/x382)/x383)-x384);

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x390 = -1;
	int8_t x391 = INT8_MIN;
	static uint64_t x392 = 529257201534271143LLU;
	uint64_t t84 = 2234328722460745489LLU;

    t84 = (((x389/x390)/x391)-x392);

    if (t84 != 17917486872192057688LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = -1;
	int16_t x396 = -1;
	int32_t t85 = 0;

    t85 = (((x393/x394)/x395)-x396);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = -1;
	volatile uint32_t x398 = UINT32_MAX;
	static volatile int8_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int64_t t86 = -30LL;

    t86 = (((x397/x398)/x399)-x400);

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x401 = 14U;
	int16_t x402 = INT16_MAX;
	int64_t x403 = 525081412327238LL;
	uint8_t x404 = UINT8_MAX;
	int64_t t87 = -115LL;

    t87 = (((x401/x402)/x403)-x404);

    if (t87 != -255LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x405 = INT64_MIN;
	uint16_t x406 = 7522U;
	uint64_t x407 = UINT64_MAX;
	volatile uint64_t t88 = 1020977660593240549LLU;

    t88 = (((x405/x406)/x407)-x408);

    if (t88 != 128LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x413 = 120U;
	static volatile int32_t x414 = INT32_MIN;
	int64_t x415 = INT64_MIN;
	static volatile uint16_t x416 = 3264U;
	volatile int64_t t89 = -26653281LL;

    t89 = (((x413/x414)/x415)-x416);

    if (t89 != -3264LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MAX;
	volatile uint8_t x419 = 7U;
	uint8_t x420 = 0U;

    t90 = (((x417/x418)/x419)-x420);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x421 = -1;
	volatile int64_t x423 = INT64_MAX;
	int64_t x424 = 578524819894LL;
	static volatile int64_t t91 = 524LL;

    t91 = (((x421/x422)/x423)-x424);

    if (t91 != -578524819894LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x426 = -5301719270533627LL;
	static uint32_t x427 = 240081272U;
	int32_t x428 = -2719;
	int64_t t92 = -80795215620095LL;

    t92 = (((x425/x426)/x427)-x428);

    if (t92 != 2719LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x429 = 16850U;
	static int64_t x430 = INT64_MIN;
	int8_t x431 = 5;
	int16_t x432 = INT16_MAX;
	static int64_t t93 = 140LL;

    t93 = (((x429/x430)/x431)-x432);

    if (t93 != -32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x433 = INT32_MAX;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	static volatile int32_t t94 = -101491;

    t94 = (((x433/x434)/x435)-x436);

    if (t94 != 386) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x437 = 0LL;
	static volatile int64_t x438 = 406678546520167459LL;
	int16_t x439 = -3601;
	uint64_t x440 = 3828316278LLU;
	uint64_t t95 = 1114977560176707910LLU;

    t95 = (((x437/x438)/x439)-x440);

    if (t95 != 18446744069881235338LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x441 = 1354539709725LLU;
	static volatile uint8_t x442 = UINT8_MAX;
	volatile uint64_t t96 = 125993LLU;

    t96 = (((x441/x442)/x443)-x444);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x446 = -1;
	static uint8_t x447 = 18U;
	int8_t x448 = 7;
	static int64_t t97 = -62914536144886292LL;

    t97 = (((x445/x446)/x447)-x448);

    if (t97 != 49589LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MIN;
	uint32_t x451 = 6U;
	int32_t x452 = INT32_MAX;
	volatile uint32_t t98 = 93898U;

    t98 = (((x449/x450)/x451)-x452);

    if (t98 != 2147483649U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x458 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t99 = 404;

    t99 = (((x457/x458)/x459)-x460);

    if (t99 != 129) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x461 = 4U;
	static int64_t x463 = INT64_MIN;
	volatile int8_t x464 = 58;

    t100 = (((x461/x462)/x463)-x464);

    if (t100 != -58LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x469 = 30033U;
	uint8_t x472 = 22U;
	volatile int64_t t101 = -46765763LL;

    t101 = (((x469/x470)/x471)-x472);

    if (t101 != -22LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x474 = 10147U;
	uint16_t x475 = UINT16_MAX;
	volatile uint32_t t102 = 0U;

    t102 = (((x473/x474)/x475)-x476);

    if (t102 != 4294965873U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x477 = 260409LLU;
	static uint32_t x478 = 1U;
	int8_t x479 = INT8_MIN;
	volatile int64_t x480 = -1LL;
	static volatile uint64_t t103 = 95193650LLU;

    t103 = (((x477/x478)/x479)-x480);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x481 = UINT32_MAX;
	static int64_t x482 = -1LL;
	static int64_t x483 = INT64_MIN;
	int16_t x484 = -4787;
	int64_t t104 = -57174172170878LL;

    t104 = (((x481/x482)/x483)-x484);

    if (t104 != 4787LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x486 = 31U;
	static int16_t x487 = 36;
	static int32_t x488 = -1;
	static volatile uint64_t t105 = 227732260255048LLU;

    t105 = (((x485/x486)/x487)-x488);

    if (t105 != 16529340567840101LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x493 = -1;
	uint8_t x495 = 5U;
	uint32_t x496 = UINT32_MAX;
	uint32_t t106 = 172378739U;

    t106 = (((x493/x494)/x495)-x496);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x502 = 1392U;
	volatile uint32_t x503 = UINT32_MAX;
	int64_t x504 = -1LL;
	int64_t t107 = -101758606504152471LL;

    t107 = (((x501/x502)/x503)-x504);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = UINT8_MAX;
	volatile int8_t x506 = INT8_MIN;
	volatile uint64_t x507 = UINT64_MAX;
	static int16_t x508 = -5;
	volatile uint64_t t108 = 144LLU;

    t108 = (((x505/x506)/x507)-x508);

    if (t108 != 6LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x516 = 4910413967LL;

    t109 = (((x513/x514)/x515)-x516);

    if (t109 != -4910413967LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x517 = 128993960215210LLU;
	static int32_t x518 = -7;
	static int32_t x519 = -1;
	volatile int32_t x520 = -1;
	uint64_t t110 = 2886881228490LLU;

    t110 = (((x517/x518)/x519)-x520);

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = INT8_MIN;
	uint16_t x522 = UINT16_MAX;
	uint16_t x523 = UINT16_MAX;
	volatile uint32_t x524 = 1591U;

    t111 = (((x521/x522)/x523)-x524);

    if (t111 != 4294965705U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x525 = INT8_MAX;
	int8_t x526 = INT8_MAX;
	uint8_t x527 = 43U;
	static int32_t x528 = INT32_MAX;
	static int32_t t112 = -126346;

    t112 = (((x525/x526)/x527)-x528);

    if (t112 != -2147483647) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x529 = UINT8_MAX;
	static int32_t x530 = 35096;
	volatile int32_t x531 = -1;
	volatile uint32_t t113 = 186517U;

    t113 = (((x529/x530)/x531)-x532);

    if (t113 != 4291533748U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x533 = -45362LL;
	int16_t x534 = INT16_MIN;
	uint16_t x536 = 2800U;
	int64_t t114 = -720600328582512LL;

    t114 = (((x533/x534)/x535)-x536);

    if (t114 != -2800LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x537 = -1;
	int8_t x538 = -2;
	static volatile int16_t x539 = INT16_MIN;
	volatile int32_t t115 = 1924;

    t115 = (((x537/x538)/x539)-x540);

    if (t115 != -6) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x545 = UINT64_MAX;
	static int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MIN;
	volatile uint64_t t116 = 78516927LLU;

    t116 = (((x545/x546)/x547)-x548);

    if (t116 != 32768LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x549 = 2782;
	int8_t x550 = -1;
	int16_t x551 = INT16_MIN;
	uint64_t x552 = 2814828316LLU;

    t117 = (((x549/x550)/x551)-x552);

    if (t117 != 18446744070894723300LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x553 = UINT16_MAX;
	static uint64_t x554 = UINT64_MAX;
	int8_t x555 = INT8_MIN;
	int32_t x556 = INT32_MIN;
	uint64_t t118 = 1041241045037LLU;

    t118 = (((x553/x554)/x555)-x556);

    if (t118 != 2147483648LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x557 = INT64_MAX;
	int64_t x558 = INT64_MIN;
	volatile int64_t t119 = 10342749675LL;

    t119 = (((x557/x558)/x559)-x560);

    if (t119 != -8LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x562 = -1;
	volatile int16_t x564 = INT16_MIN;
	int64_t t120 = -131145750049552LL;

    t120 = (((x561/x562)/x563)-x564);

    if (t120 != 32768LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x567 = -1;
	int8_t x568 = -10;
	int64_t t121 = 566284415963LL;

    t121 = (((x565/x566)/x567)-x568);

    if (t121 != 10LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x569 = -84409380;
	uint8_t x571 = UINT8_MAX;

    t122 = (((x569/x570)/x571)-x572);

    if (t122 != -2147152630) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x573 = 11425459132181LL;
	int8_t x574 = INT8_MAX;
	uint64_t x575 = UINT64_MAX;
	int32_t x576 = INT32_MIN;

    t123 = (((x573/x574)/x575)-x576);

    if (t123 != 2147483648LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MIN;
	int64_t x580 = -1LL;
	static int64_t t124 = -74078128LL;

    t124 = (((x577/x578)/x579)-x580);

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x581 = 44U;
	static uint16_t x582 = UINT16_MAX;
	static int8_t x583 = -1;
	static uint8_t x584 = 0U;

    t125 = (((x581/x582)/x583)-x584);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x585 = -5;
	int64_t x586 = -1LL;
	int64_t x587 = 4485LL;
	static int16_t x588 = INT16_MIN;
	static volatile int64_t t126 = -28249462051828LL;

    t126 = (((x585/x586)/x587)-x588);

    if (t126 != 32768LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x589 = INT8_MIN;
	int32_t x590 = 80049762;
	int16_t x591 = INT16_MAX;
	static int16_t x592 = -1;
	volatile int32_t t127 = 219;

    t127 = (((x589/x590)/x591)-x592);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x605 = 1582462186479LLU;
	int8_t x606 = -1;
	int8_t x607 = -8;
	static uint8_t x608 = UINT8_MAX;
	uint64_t t128 = 331492394602195792LLU;

    t128 = (((x605/x606)/x607)-x608);

    if (t128 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x609 = INT64_MIN;
	volatile uint64_t x611 = 15986LLU;
	static int16_t x612 = -1;

    t129 = (((x609/x610)/x611)-x612);

    if (t129 != 1139507054471925LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x613 = 1492U;
	static int64_t x615 = -25925049330LL;
	uint8_t x616 = 2U;
	int64_t t130 = -1LL;

    t130 = (((x613/x614)/x615)-x616);

    if (t130 != -2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x617 = UINT32_MAX;
	volatile uint64_t x618 = 417LLU;
	int64_t x619 = 46LL;

    t131 = (((x617/x618)/x619)-x620);

    if (t131 != 223906LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x621 = 126285134LLU;
	uint16_t x622 = UINT16_MAX;
	uint64_t x623 = 9241LLU;
	int32_t x624 = 114;

    t132 = (((x621/x622)/x623)-x624);

    if (t132 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x625 = INT32_MAX;
	int16_t x626 = INT16_MIN;
	uint64_t x627 = 145780605LLU;
	int32_t x628 = -1;
	uint64_t t133 = 1255LLU;

    t133 = (((x625/x626)/x627)-x628);

    if (t133 != 126537711061LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x629 = INT64_MIN;
	uint32_t x630 = 23U;
	uint16_t x632 = UINT16_MAX;
	static int64_t t134 = -1021066720LL;

    t134 = (((x629/x630)/x631)-x632);

    if (t134 != 12238042400145LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x639 = 161602340;
	int8_t x640 = -1;

    t135 = (((x637/x638)/x639)-x640);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x641 = UINT32_MAX;
	int8_t x642 = INT8_MIN;
	int16_t x644 = 9;
	uint32_t t136 = 1925U;

    t136 = (((x641/x642)/x643)-x644);

    if (t136 != 4294967288U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x652 = 4436LLU;

    t137 = (((x649/x650)/x651)-x652);

    if (t137 != 18446744073709547180LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x653 = INT32_MIN;
	uint64_t x654 = UINT64_MAX;
	volatile uint32_t x655 = UINT32_MAX;
	static int8_t x656 = 6;
	volatile uint64_t t138 = 2248887274992125LLU;

    t138 = (((x653/x654)/x655)-x656);

    if (t138 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x657 = INT32_MIN;
	volatile int8_t x658 = INT8_MIN;
	static volatile int8_t x659 = INT8_MIN;
	int16_t x660 = -93;
	volatile int32_t t139 = -36124269;

    t139 = (((x657/x658)/x659)-x660);

    if (t139 != -130979) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x665 = -2;
	static uint16_t x666 = UINT16_MAX;
	volatile int32_t x667 = 1030611;
	volatile int32_t t140 = 26840;

    t140 = (((x665/x666)/x667)-x668);

    if (t140 != -1249440) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x669 = 159308986LLU;
	static int64_t x670 = -698344451815695655LL;
	static volatile uint32_t x672 = UINT32_MAX;
	uint64_t t141 = 36025209543060LLU;

    t141 = (((x669/x670)/x671)-x672);

    if (t141 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x673 = 0;
	static uint32_t x674 = 1U;
	static uint8_t x675 = 10U;

    t142 = (((x673/x674)/x675)-x676);

    if (t142 != 32768U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x677 = 5U;
	uint64_t x678 = 268548075696LLU;
	volatile int64_t x679 = -1LL;
	int32_t x680 = INT32_MIN;

    t143 = (((x677/x678)/x679)-x680);

    if (t143 != 2147483648LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x681 = 1U;
	volatile uint16_t x682 = 5U;
	volatile uint64_t x684 = UINT64_MAX;
	uint64_t t144 = 397819521106LLU;

    t144 = (((x681/x682)/x683)-x684);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x689 = 180;
	uint16_t x690 = UINT16_MAX;
	uint16_t x691 = UINT16_MAX;
	int8_t x692 = INT8_MIN;

    t145 = (((x689/x690)/x691)-x692);

    if (t145 != 128) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x693 = 16370640588379036LLU;
	int16_t x695 = 11;
	int32_t x696 = INT32_MIN;
	static uint64_t t146 = 60039422296LLU;

    t146 = (((x693/x694)/x695)-x696);

    if (t146 != 140203147236LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x697 = 526459LL;
	volatile int64_t x698 = -51398LL;
	static uint64_t x699 = 1221408516799LLU;
	static volatile int64_t x700 = -1LL;
	static volatile uint64_t t147 = 4893LLU;

    t147 = (((x697/x698)/x699)-x700);

    if (t147 != 15102846LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x702 = 927616;
	int32_t x703 = INT32_MIN;
	uint8_t x704 = 0U;
	volatile int32_t t148 = -190694911;

    t148 = (((x701/x702)/x703)-x704);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x705 = INT32_MIN;
	static int64_t x706 = INT64_MIN;
	static volatile int16_t x708 = INT16_MIN;
	int64_t t149 = 28891LL;

    t149 = (((x705/x706)/x707)-x708);

    if (t149 != 32768LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x717 = 38U;
	volatile int8_t x718 = 1;
	volatile int64_t x719 = -1LL;
	int16_t x720 = -7;
	int64_t t150 = -4383LL;

    t150 = (((x717/x718)/x719)-x720);

    if (t150 != -31LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x722 = 11;
	uint32_t x724 = 199069U;
	volatile uint32_t t151 = 65U;

    t151 = (((x721/x722)/x723)-x724);

    if (t151 != 4294768227U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x725 = INT64_MIN;
	volatile uint32_t x727 = 91U;
	volatile uint8_t x728 = 12U;
	volatile int64_t t152 = -4536468349495LL;

    t152 = (((x725/x726)/x727)-x728);

    if (t152 != -43344944087LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x729 = 10U;
	static int64_t x730 = INT64_MIN;
	volatile uint32_t x731 = 62805910U;
	int16_t x732 = -1;
	volatile int64_t t153 = -131LL;

    t153 = (((x729/x730)/x731)-x732);

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x734 = UINT64_MAX;
	int8_t x736 = INT8_MIN;
	uint64_t t154 = 186LLU;

    t154 = (((x733/x734)/x735)-x736);

    if (t154 != 128LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x737 = -2733542;
	int16_t x738 = INT16_MIN;
	static uint8_t x739 = UINT8_MAX;
	int8_t x740 = 20;
	volatile int32_t t155 = 0;

    t155 = (((x737/x738)/x739)-x740);

    if (t155 != -20) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x741 = INT16_MIN;
	volatile int32_t t156 = -31048;

    t156 = (((x741/x742)/x743)-x744);

    if (t156 != 34952) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x745 = -1LL;
	uint16_t x746 = 266U;
	int8_t x747 = 1;
	volatile int64_t t157 = 1665342LL;

    t157 = (((x745/x746)/x747)-x748);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	volatile uint32_t x750 = UINT32_MAX;
	static int64_t x751 = INT64_MIN;
	int8_t x752 = -10;
	volatile uint64_t t158 = 107443430442478631LLU;

    t158 = (((x749/x750)/x751)-x752);

    if (t158 != 10LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x753 = INT32_MAX;
	int8_t x754 = 1;
	int16_t x755 = INT16_MIN;
	int16_t x756 = 5360;
	static int32_t t159 = -17;

    t159 = (((x753/x754)/x755)-x756);

    if (t159 != -70895) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x757 = -1LL;
	int8_t x758 = -1;
	int8_t x759 = 1;
	volatile uint32_t x760 = UINT32_MAX;
	volatile int64_t t160 = -14540940125379191LL;

    t160 = (((x757/x758)/x759)-x760);

    if (t160 != -4294967294LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x761 = INT64_MIN;
	uint8_t x762 = 4U;
	volatile uint32_t x763 = 1101318450U;
	static uint32_t x764 = 503964U;
	int64_t t161 = 24369719575793453LL;

    t161 = (((x761/x762)/x763)-x764);

    if (t161 != -2094215377LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x765 = 12U;
	int32_t x766 = INT32_MIN;
	uint16_t x767 = 30351U;
	uint8_t x768 = 2U;

    t162 = (((x765/x766)/x767)-x768);

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x769 = 1538U;
	volatile int8_t x770 = 1;
	volatile uint16_t x772 = 2U;
	volatile int32_t t163 = 28;

    t163 = (((x769/x770)/x771)-x772);

    if (t163 != -2) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x773 = 26064U;
	int16_t x774 = INT16_MAX;
	volatile uint64_t x775 = 22LLU;
	uint32_t x776 = 2029190U;
	uint64_t t164 = 2345714887LLU;

    t164 = (((x773/x774)/x775)-x776);

    if (t164 != 18446744073707522426LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x777 = -1LL;
	int8_t x778 = 1;
	volatile uint8_t x779 = 11U;
	volatile int32_t x780 = -15;
	int64_t t165 = 34819095LL;

    t165 = (((x777/x778)/x779)-x780);

    if (t165 != 15LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x781 = -7;
	static uint16_t x782 = UINT16_MAX;
	uint64_t x783 = 10439648LLU;
	uint64_t t166 = 58392309414647LLU;

    t166 = (((x781/x782)/x783)-x784);

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x785 = -1;
	volatile uint64_t x786 = 6162433116LLU;
	uint8_t x788 = 103U;

    t167 = (((x785/x786)/x787)-x788);

    if (t167 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x789 = INT16_MAX;
	uint32_t x790 = 134165755U;
	volatile int64_t x791 = 461826LL;
	volatile uint16_t x792 = 248U;
	int64_t t168 = -6702LL;

    t168 = (((x789/x790)/x791)-x792);

    if (t168 != -248LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x793 = INT32_MAX;
	int64_t x794 = 86121860709LL;
	volatile int16_t x795 = INT16_MIN;
	volatile int64_t t169 = 26759010339LL;

    t169 = (((x793/x794)/x795)-x796);

    if (t169 != -2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x800 = 178546U;
	uint32_t t170 = 50567185U;

    t170 = (((x797/x798)/x799)-x800);

    if (t170 != 4294788750U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x801 = 100U;
	uint64_t x803 = UINT64_MAX;
	uint32_t x804 = 989848648U;
	static uint64_t t171 = 7157LLU;

    t171 = (((x801/x802)/x803)-x804);

    if (t171 != 18446744072719702968LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x805 = -43;
	int32_t x806 = INT32_MIN;
	int8_t x808 = INT8_MAX;
	int32_t t172 = -404;

    t172 = (((x805/x806)/x807)-x808);

    if (t172 != -127) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x809 = -1LL;
	int8_t x810 = INT8_MIN;
	int64_t x811 = INT64_MAX;
	int16_t x812 = INT16_MIN;
	volatile int64_t t173 = 246199950LL;

    t173 = (((x809/x810)/x811)-x812);

    if (t173 != 32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x813 = -1005621640LL;
	volatile int32_t x814 = INT32_MIN;
	volatile int64_t x815 = -58557LL;
	volatile int64_t t174 = -1117065912980270023LL;

    t174 = (((x813/x814)/x815)-x816);

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x817 = -1;
	static int64_t x819 = INT64_MIN;
	int16_t x820 = INT16_MAX;

    t175 = (((x817/x818)/x819)-x820);

    if (t175 != -32767LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x821 = INT8_MAX;
	int8_t x822 = -10;
	uint8_t x823 = UINT8_MAX;
	uint8_t x824 = 2U;
	int32_t t176 = 948672;

    t176 = (((x821/x822)/x823)-x824);

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x825 = 3;
	uint8_t x826 = 38U;
	int8_t x827 = INT8_MAX;
	int16_t x828 = INT16_MIN;

    t177 = (((x825/x826)/x827)-x828);

    if (t177 != 32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x829 = 998;
	volatile int16_t x830 = INT16_MIN;
	int32_t x832 = -1694;
	int64_t t178 = -4580LL;

    t178 = (((x829/x830)/x831)-x832);

    if (t178 != 1694LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x842 = 1U;
	int8_t x843 = 1;
	int8_t x844 = 1;

    t179 = (((x841/x842)/x843)-x844);

    if (t179 != -129) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x845 = INT32_MIN;
	static int32_t x846 = INT32_MIN;
	int8_t x847 = -3;
	int16_t x848 = 3;
	static int32_t t180 = -3640;

    t180 = (((x845/x846)/x847)-x848);

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x849 = UINT16_MAX;
	int32_t x850 = -94;
	volatile int64_t x851 = INT64_MIN;
	static volatile uint64_t t181 = 270978144808710658LLU;

    t181 = (((x849/x850)/x851)-x852);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x854 = 11160U;
	int32_t x855 = INT32_MIN;
	uint8_t x856 = 46U;
	int32_t t182 = 3;

    t182 = (((x853/x854)/x855)-x856);

    if (t182 != -46) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x861 = INT64_MIN;
	uint8_t x862 = 2U;
	int32_t x863 = INT32_MIN;
	static int32_t x864 = -1;
	int64_t t183 = -2000494LL;

    t183 = (((x861/x862)/x863)-x864);

    if (t183 != 2147483649LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x869 = UINT64_MAX;
	int16_t x871 = INT16_MAX;
	int64_t x872 = INT64_MIN;
	volatile uint64_t t184 = 1491824100LLU;

    t184 = (((x869/x870)/x871)-x872);

    if (t184 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x877 = -1;
	int8_t x879 = INT8_MIN;
	int32_t t185 = -88;

    t185 = (((x877/x878)/x879)-x880);

    if (t185 != -1784) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x881 = INT32_MIN;
	uint32_t x882 = 2480U;
	static uint32_t x883 = 217234724U;
	int16_t x884 = INT16_MIN;

    t186 = (((x881/x882)/x883)-x884);

    if (t186 != 32768U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x885 = INT64_MIN;
	static int16_t x886 = 2825;
	static uint16_t x887 = UINT16_MAX;
	uint8_t x888 = 18U;
	int64_t t187 = -405924296703828988LL;

    t187 = (((x885/x886)/x887)-x888);

    if (t187 != -49819340149LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x889 = 26986U;
	static uint32_t x890 = UINT32_MAX;
	volatile int64_t x892 = -22126341166588804LL;
	int64_t t188 = 187743549LL;

    t188 = (((x889/x890)/x891)-x892);

    if (t188 != 22126341166588804LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x893 = INT64_MIN;
	static uint16_t x894 = UINT16_MAX;
	int16_t x895 = 14254;
	int32_t x896 = INT32_MAX;
	volatile int64_t t189 = -59316LL;

    t189 = (((x893/x894)/x895)-x896);

    if (t189 != -12021177758LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x897 = INT8_MAX;
	int8_t x898 = -1;
	int8_t x900 = -1;
	static volatile int32_t t190 = -27846030;

    t190 = (((x897/x898)/x899)-x900);

    if (t190 != -9) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x901 = -3299LL;
	int32_t x902 = -687595801;
	uint64_t x904 = 6LLU;
	uint64_t t191 = 27408893LLU;

    t191 = (((x901/x902)/x903)-x904);

    if (t191 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x905 = -1;
	int8_t x907 = 6;
	volatile uint64_t t192 = 51243780119156517LLU;

    t192 = (((x905/x906)/x907)-x908);

    if (t192 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x910 = UINT64_MAX;
	uint32_t x912 = UINT32_MAX;
	volatile uint64_t t193 = 4831334076LLU;

    t193 = (((x909/x910)/x911)-x912);

    if (t193 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x914 = -5;
	volatile uint32_t x915 = 59856U;
	int32_t x916 = 1550795;
	uint32_t t194 = 90U;

    t194 = (((x913/x914)/x915)-x916);

    if (t194 != 4293488256U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x917 = INT32_MAX;
	volatile int16_t x918 = INT16_MAX;
	static uint8_t x920 = 3U;

    t195 = (((x917/x918)/x919)-x920);

    if (t195 != 4294967293U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x921 = UINT32_MAX;
	int16_t x922 = INT16_MIN;
	volatile uint32_t t196 = 1843300812U;

    t196 = (((x921/x922)/x923)-x924);

    if (t196 != 2U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x925 = -1;
	static int64_t x926 = INT64_MIN;
	int32_t x928 = INT32_MIN;
	int64_t t197 = 1LL;

    t197 = (((x925/x926)/x927)-x928);

    if (t197 != 2147483648LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x929 = 1;
	uint16_t x930 = 3U;
	int64_t x931 = INT64_MAX;
	static volatile int16_t x932 = INT16_MIN;
	int64_t t198 = 8764LL;

    t198 = (((x929/x930)/x931)-x932);

    if (t198 != 32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x935 = INT32_MAX;
	int32_t x936 = -4;
	volatile int32_t t199 = 832266;

    t199 = (((x933/x934)/x935)-x936);

    if (t199 != 4) { NG(); } else { ; }
	
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

