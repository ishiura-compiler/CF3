
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

static int8_t x5 = INT8_MIN;
volatile int8_t x11 = 0;
int16_t x26 = 51;
static int8_t x32 = INT8_MAX;
int16_t x38 = 4;
int16_t x47 = 14;
volatile uint16_t x50 = 118U;
uint16_t x57 = UINT16_MAX;
uint64_t x63 = 701507688LLU;
uint64_t t12 = 16508787219022661LLU;
uint32_t x73 = UINT32_MAX;
uint8_t x75 = UINT8_MAX;
uint32_t x79 = 1291U;
int32_t x81 = INT32_MAX;
uint16_t x84 = 4U;
static int32_t x85 = INT32_MIN;
int64_t x88 = 1387467509811LL;
uint32_t x91 = UINT32_MAX;
uint16_t x97 = 970U;
static volatile uint16_t x106 = 553U;
uint64_t t20 = 243322466LLU;
static int16_t x113 = -1;
volatile int8_t x119 = INT8_MIN;
int8_t x120 = 25;
int64_t x127 = 215345047977LL;
int8_t x128 = INT8_MIN;
static volatile int64_t t23 = -741LL;
int16_t x136 = INT16_MIN;
uint16_t x148 = 38U;
volatile uint64_t x152 = 1961294880908286LLU;
int64_t x160 = -1LL;
uint64_t x161 = UINT64_MAX;
static uint64_t x172 = UINT64_MAX;
int32_t x185 = INT32_MIN;
int64_t x186 = -1LL;
volatile uint64_t t33 = 476405768LLU;
volatile uint8_t x190 = 36U;
int16_t x205 = -4;
static volatile int64_t t36 = -166714LL;
uint8_t x239 = 55U;
static volatile int64_t t40 = -584369823137575153LL;
volatile uint8_t x243 = 4U;
volatile uint64_t t42 = 2474734542LLU;
int64_t x250 = -1LL;
int16_t x251 = -1;
static int32_t x253 = -1;
volatile uint32_t x254 = UINT32_MAX;
static int8_t x255 = INT8_MIN;
int16_t x270 = INT16_MAX;
uint8_t x291 = UINT8_MAX;
volatile int64_t t50 = -1320322809LL;
static volatile int64_t t51 = 12907396124943667LL;
int32_t x310 = -8850332;
uint64_t x315 = 30167889198725LLU;
static int16_t x316 = INT16_MIN;
int8_t x318 = INT8_MAX;
int64_t t56 = -870578LL;
uint32_t x331 = UINT32_MAX;
int16_t x332 = 1859;
static uint64_t x367 = UINT64_MAX;
volatile uint64_t t63 = 12846198285208797LLU;
int16_t x369 = INT16_MIN;
int8_t x386 = INT8_MIN;
int32_t x411 = 0;
uint64_t x412 = UINT64_MAX;
static volatile uint64_t t70 = 1905170871983300664LLU;
volatile uint64_t t72 = 16680LLU;
static volatile int16_t x423 = 0;
int16_t x425 = -1;
int16_t x426 = -1;
uint16_t x451 = 612U;
int32_t x462 = INT32_MIN;
volatile int8_t x464 = INT8_MIN;
uint32_t x473 = 57546004U;
volatile uint64_t t81 = 24478457580LLU;
int16_t x479 = -264;
static uint8_t x480 = 11U;
uint32_t x484 = UINT32_MAX;
volatile uint32_t t86 = UINT32_MAX;
uint64_t x506 = 129318915306904146LLU;
volatile uint64_t t87 = 52435504LLU;
uint32_t x524 = 22U;
int16_t x535 = 4326;
static uint8_t x541 = 89U;
int8_t x543 = 0;
int8_t x545 = INT8_MIN;
volatile uint32_t t94 = 3391U;
uint16_t x551 = UINT16_MAX;
volatile uint64_t x578 = 824346530974194024LLU;
int64_t x603 = INT64_MAX;
static uint64_t x604 = 503334205534955223LLU;
uint64_t t100 = 46852489188LLU;
int8_t x610 = -1;
uint64_t x611 = 3603621598591LLU;
static uint64_t x613 = 152286937422054LLU;
uint32_t x617 = 10986133U;
uint16_t x621 = 4961U;
int64_t x622 = 119654436651623250LL;
int16_t x629 = -56;
uint16_t x630 = UINT16_MAX;
int64_t x639 = -1LL;
int16_t x646 = INT16_MAX;
static uint8_t x656 = 3U;
volatile int8_t x661 = INT8_MIN;
uint32_t x662 = 837U;
volatile int16_t x671 = INT16_MIN;
int16_t x679 = INT16_MAX;
uint64_t x680 = UINT64_MAX;
int64_t x686 = -1LL;
uint64_t t118 = 1945190678219LLU;
int16_t x693 = 484;
uint16_t x709 = 4911U;
uint64_t t122 = 5111468752LLU;
int8_t x723 = -47;
uint8_t x732 = 0U;
static volatile int16_t x734 = -22;
static volatile int8_t x736 = -3;
int64_t t131 = 7914593LL;
volatile uint32_t x753 = UINT32_MAX;
int32_t x756 = 6;
int64_t t132 = -4301671236732LL;
uint16_t x762 = UINT16_MAX;
int64_t x765 = INT64_MAX;
int16_t x767 = INT16_MIN;
volatile int64_t t135 = INT64_MAX;
int64_t x770 = 388LL;
volatile int64_t t136 = -55951962776899LL;
int8_t x774 = 1;
uint16_t x780 = UINT16_MAX;
uint64_t x784 = 1858112107848243974LLU;
volatile int16_t x792 = -1;
int16_t x797 = INT16_MIN;
static uint16_t x798 = 4633U;
int64_t t142 = 18496LL;
static volatile int64_t x807 = -1LL;
uint16_t x829 = 4489U;
int32_t x830 = INT32_MAX;
uint64_t x831 = UINT64_MAX;
int64_t t145 = 501LL;
static uint16_t x853 = UINT16_MAX;
uint16_t x855 = 1U;
static int64_t x857 = INT64_MAX;
int64_t x858 = INT64_MIN;
static int32_t x862 = -8;
uint32_t x887 = 110583893U;
volatile int32_t x890 = -1;
volatile uint32_t t155 = UINT32_MAX;
volatile uint64_t t156 = 1669590543984LLU;
int8_t x897 = INT8_MAX;
volatile int32_t x898 = 12336804;
volatile int32_t x902 = INT32_MIN;
static int64_t x903 = -1LL;
int64_t x909 = INT64_MAX;
static uint8_t x910 = 97U;
volatile int32_t x917 = -1;
int16_t x919 = -1;
static volatile uint32_t x923 = UINT32_MAX;
volatile int16_t x930 = 1;
volatile int64_t x931 = 0LL;
int32_t t163 = 0;
static int64_t x938 = -4332813323LL;
int64_t x943 = 1793913LL;
int32_t x950 = -167;
static int8_t x952 = -1;
volatile uint8_t x964 = 5U;
int8_t x981 = -1;
int8_t x984 = INT8_MIN;
volatile uint16_t x994 = 13560U;
int16_t x1008 = INT16_MIN;
int16_t x1019 = INT16_MIN;
int16_t x1030 = INT16_MIN;
volatile uint64_t x1036 = UINT64_MAX;
static int16_t x1037 = INT16_MIN;
volatile uint64_t t185 = 10684198298318LLU;
static int8_t x1053 = INT8_MIN;
uint64_t x1064 = UINT64_MAX;
static volatile int32_t x1065 = -120925732;
uint64_t t189 = 259LLU;
uint64_t x1088 = UINT64_MAX;
int32_t x1095 = -98855;
volatile uint64_t t193 = 45056655LLU;
static uint32_t t195 = 8353280U;
static uint64_t t196 = 1LLU;
static int8_t x1121 = 55;
static volatile int8_t x1131 = INT8_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint16_t x2 = 1U;
	volatile int32_t x3 = 186160394;
	static uint64_t x4 = 160208877760LLU;
	volatile uint64_t t0 = 186955LLU;

    t0 = (x1|(x2+(x3*x4)));

    if (t0 != 18446744073193027457LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 58799635;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -1;

    t1 = (x5|(x6+(x7*x8)));

    if (t1 != -108) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int32_t x10 = -1;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -2;

    t2 = (x9|(x10+(x11*x12)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int32_t x15 = 268;
	uint16_t x16 = 1U;
	static int32_t t3 = 12082;

    t3 = (x13|(x14+(x15*x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = 46365005;
	int32_t x27 = 1;
	uint8_t x28 = 23U;
	volatile int32_t t4 = -7792;

    t4 = (x25|(x26+(x27*x28)));

    if (t4 != 46365007) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = INT64_MIN;
	volatile int64_t x30 = INT64_MIN;
	volatile uint16_t x31 = UINT16_MAX;
	int64_t t5 = 3546188910580LL;

    t5 = (x29|(x30+(x31*x32)));

    if (t5 != -9223372036846452863LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = INT8_MIN;
	int64_t x34 = 3384072402487LL;
	int8_t x35 = INT8_MIN;
	volatile int8_t x36 = -1;
	volatile int64_t t6 = 285651LL;

    t6 = (x33|(x34+(x35*x36)));

    if (t6 != -73LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = 8502550419185LL;
	volatile int8_t x39 = -1;
	int32_t x40 = -1;
	static int64_t t7 = -17041121286LL;

    t7 = (x37|(x38+(x39*x40)));

    if (t7 != 8502550419189LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x45 = 4745;
	uint8_t x46 = UINT8_MAX;
	int8_t x48 = INT8_MAX;
	int32_t t8 = -221649785;

    t8 = (x45|(x46+(x47*x48)));

    if (t8 != 6137) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x49 = -7896;
	volatile int32_t x51 = -1;
	static volatile uint64_t x52 = UINT64_MAX;
	volatile uint64_t t9 = 3349355832323490803LLU;

    t9 = (x49|(x50+(x51*x52)));

    if (t9 != 18446744073709543807LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x53 = -1LL;
	uint32_t x54 = 2653U;
	uint32_t x55 = 3U;
	int32_t x56 = 883531168;
	static int64_t t10 = 4160299604463395LL;

    t10 = (x53|(x54+(x55*x56)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x58 = -8;
	uint16_t x59 = 82U;
	volatile int64_t x60 = 0LL;
	int64_t t11 = 0LL;

    t11 = (x57|(x58+(x59*x60)));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x61 = UINT16_MAX;
	int32_t x62 = -4029;
	static int8_t x64 = 30;

    t12 = (x61|(x62+(x63*x64)));

    if (t12 != 21045247999LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x74 = 1612801570754494LLU;
	uint32_t x76 = 3181U;
	static volatile uint64_t t13 = 422LLU;

    t13 = (x73|(x74+(x75*x76)));

    if (t13 != 1612803169320959LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MAX;
	uint64_t x80 = 137101154419432873LLU;
	volatile uint64_t t14 = 1553005LLU;

    t14 = (x77|(x78+(x79*x80)));

    if (t14 != 18446744073709540290LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x82 = INT8_MAX;
	static volatile int8_t x83 = -1;
	volatile int32_t t15 = INT32_MAX;

    t15 = (x81|(x82+(x83*x84)));

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x86 = -1;
	uint16_t x87 = 671U;
	int64_t t16 = 556402692036LL;

    t16 = (x85|(x86+(x87*x88)));

    if (t16 != -1444383316LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = 29;
	int16_t x90 = -1;
	static uint32_t x92 = 189313U;
	volatile uint32_t t17 = 1U;

    t17 = (x89|(x90+(x91*x92)));

    if (t17 != 4294777983U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x98 = 118U;
	uint8_t x99 = UINT8_MAX;
	static int8_t x100 = 0;
	volatile int32_t t18 = 11;

    t18 = (x97|(x98+(x99*x100)));

    if (t18 != 1022) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	static uint64_t x108 = 297886243LLU;
	static uint64_t t19 = 1040002202205883378LLU;

    t19 = (x105|(x106+(x107*x108)));

    if (t19 != 18446744073709547689LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = 45;
	volatile int64_t x110 = INT64_MAX;
	uint64_t x111 = 7LLU;
	uint16_t x112 = UINT16_MAX;

    t20 = (x109|(x110+(x111*x112)));

    if (t20 != 9223372036855234557LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x114 = 6U;
	int32_t x115 = -1;
	uint8_t x116 = 1U;
	static int32_t t21 = -746064150;

    t21 = (x113|(x114+(x115*x116)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x117 = 1004U;
	uint8_t x118 = 25U;
	volatile int32_t t22 = -5746335;

    t22 = (x117|(x118+(x119*x120)));

    if (t22 != -3075) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x125 = 29;
	int16_t x126 = INT16_MIN;

    t23 = (x125|(x126+(x127*x128)));

    if (t23 != -27564166173795LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x133 = UINT16_MAX;
	static volatile int32_t x134 = -8305910;
	volatile uint32_t x135 = 72U;
	volatile uint32_t t24 = 14133U;

    t24 = (x133|(x134+(x135*x136)));

    if (t24 != 4284350463U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x137 = -1;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 8031050395521277LLU;
	int8_t x140 = 47;
	volatile uint64_t t25 = UINT64_MAX;

    t25 = (x137|(x138+(x139*x140)));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x145 = INT64_MIN;
	static int8_t x146 = 1;
	int8_t x147 = -1;
	static int64_t t26 = 58046094LL;

    t26 = (x145|(x146+(x147*x148)));

    if (t26 != -37LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x149 = INT8_MIN;
	volatile int16_t x150 = -1;
	volatile int16_t x151 = INT16_MIN;
	uint64_t t27 = UINT64_MAX;

    t27 = (x149|(x150+(x151*x152)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x157 = INT32_MIN;
	uint16_t x158 = 15U;
	int16_t x159 = INT16_MIN;
	int64_t t28 = -219709LL;

    t28 = (x157|(x158+(x159*x160)));

    if (t28 != -2147450865LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x162 = UINT16_MAX;
	static int32_t x163 = 1;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t29 = UINT64_MAX;

    t29 = (x161|(x162+(x163*x164)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x165 = INT8_MAX;
	volatile uint32_t x166 = 1981862U;
	int64_t x167 = -7241LL;
	uint16_t x168 = UINT16_MAX;
	static int64_t t30 = -289292LL;

    t30 = (x165|(x166+(x167*x168)));

    if (t30 != -472557057LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x169 = INT8_MAX;
	volatile int16_t x170 = -13;
	int8_t x171 = INT8_MAX;
	uint64_t t31 = 3931042494LLU;

    t31 = (x169|(x170+(x171*x172)));

    if (t31 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x181 = INT32_MIN;
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 374671778961LLU;
	int32_t x184 = -45166264;
	uint64_t t32 = 22302LLU;

    t32 = (x181|(x182+(x183*x184)));

    if (t32 != 18446744072121920199LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x187 = 5047LLU;
	int8_t x188 = INT8_MAX;

    t33 = (x185|(x186+(x187*x188)));

    if (t33 != 18446744071562708936LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x189 = UINT32_MAX;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = 18;
	uint64_t t34 = 1220882883267709029LLU;

    t34 = (x189|(x190+(x191*x192)));

    if (t34 != 4294967295LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x197 = 0;
	static volatile uint64_t x198 = UINT64_MAX;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MAX;
	volatile uint64_t t35 = 872601061939229LLU;

    t35 = (x197|(x198+(x199*x200)));

    if (t35 != 8355584LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x206 = UINT32_MAX;
	int8_t x207 = 0;
	int64_t x208 = -6477LL;

    t36 = (x205|(x206+(x207*x208)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x209 = INT32_MAX;
	volatile int8_t x210 = INT8_MAX;
	int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	volatile int32_t t37 = INT32_MAX;

    t37 = (x209|(x210+(x211*x212)));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x229 = 4U;
	uint64_t x230 = UINT64_MAX;
	static int32_t x231 = 7072;
	int16_t x232 = -191;
	volatile uint64_t t38 = 5548LLU;

    t38 = (x229|(x230+(x231*x232)));

    if (t38 != 18446744073708200863LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x233 = UINT64_MAX;
	int16_t x234 = -1;
	int8_t x235 = 0;
	int8_t x236 = INT8_MIN;
	uint64_t t39 = UINT64_MAX;

    t39 = (x233|(x234+(x235*x236)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x237 = INT64_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	int8_t x240 = -41;

    t40 = (x237|(x238+(x239*x240)));

    if (t40 != -9223372032559810768LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x241 = 3LL;
	int16_t x242 = -1;
	uint64_t x244 = UINT64_MAX;
	uint64_t t41 = 2079362328215484LLU;

    t41 = (x241|(x242+(x243*x244)));

    if (t41 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x245 = 1696U;
	uint8_t x246 = 20U;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;

    t42 = (x245|(x246+(x247*x248)));

    if (t42 != 1716LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x249 = 14274702478120LLU;
	static uint8_t x252 = 43U;
	uint64_t t43 = 154674404LLU;

    t43 = (x249|(x250+(x251*x252)));

    if (t43 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x256 = 1573309730865LL;
	int64_t t44 = -1193LL;

    t44 = (x253|(x254+(x255*x256)));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x265 = UINT64_MAX;
	uint8_t x266 = 9U;
	int16_t x267 = -12555;
	uint16_t x268 = 114U;
	static volatile uint64_t t45 = UINT64_MAX;

    t45 = (x265|(x266+(x267*x268)));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x269 = -1LL;
	int32_t x271 = -232825;
	int8_t x272 = -1;
	static int64_t t46 = -55LL;

    t46 = (x269|(x270+(x271*x272)));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x273 = 0U;
	int32_t x274 = 190334021;
	uint32_t x275 = 432U;
	uint64_t x276 = 1757729073528068934LLU;
	uint64_t t47 = 443583LLU;

    t47 = (x273|(x274+(x275*x276)));

    if (t47 != 3022452742224497253LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x281 = -1;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 564LLU;
	int64_t x284 = INT64_MAX;
	uint64_t t48 = UINT64_MAX;

    t48 = (x281|(x282+(x283*x284)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x289 = -9;
	volatile int8_t x290 = INT8_MIN;
	static uint32_t x292 = 693690U;
	static volatile uint32_t t49 = 40U;

    t49 = (x289|(x290+(x291*x292)));

    if (t49 != 4294967287U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x293 = -1LL;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 0U;
	volatile int32_t x296 = -1;

    t50 = (x293|(x294+(x295*x296)));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x297 = UINT8_MAX;
	int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	static int64_t x300 = -490368LL;

    t51 = (x297|(x298+(x299*x300)));

    if (t51 != -32136266753LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x301 = 2;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	static int16_t x304 = INT16_MIN;
	int32_t t52 = 86787;

    t52 = (x301|(x302+(x303*x304)));

    if (t52 != 1073741698) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x305 = -505LL;
	static int64_t x306 = 5102168206LL;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile int64_t t53 = 14936368LL;

    t53 = (x305|(x306+(x307*x308)));

    if (t53 != -497LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x309 = UINT16_MAX;
	int32_t x311 = 493241003;
	static uint64_t x312 = 53LLU;
	volatile uint64_t t54 = 94416697522LLU;

    t54 = (x309|(x310+(x311*x312)));

    if (t54 != 26132938751LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x313 = INT64_MIN;
	uint16_t x314 = 26422U;
	volatile uint64_t t55 = 12167569382LLU;

    t55 = (x313|(x314+(x315*x316)));

    if (t55 != 17458202680445757238LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x317 = INT16_MIN;
	volatile int8_t x319 = -59;
	int64_t x320 = -8614LL;

    t56 = (x317|(x318+(x319*x320)));

    if (t56 != -15935LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x329 = 10U;
	uint32_t x330 = 5624U;
	static volatile uint32_t t57 = 20993146U;

    t57 = (x329|(x330+(x331*x332)));

    if (t57 != 3775U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x333 = 10U;
	static int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t58 = -119137840;

    t58 = (x333|(x334+(x335*x336)));

    if (t58 != -4128769) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x341 = UINT16_MAX;
	uint64_t x342 = 43713LLU;
	static int16_t x343 = INT16_MIN;
	uint16_t x344 = 15U;
	volatile uint64_t t59 = 1033997903LLU;

    t59 = (x341|(x342+(x343*x344)));

    if (t59 != 18446744073709158399LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x345 = -1;
	int64_t x346 = INT64_MAX;
	static int8_t x347 = INT8_MIN;
	int64_t x348 = 4912LL;
	volatile int64_t t60 = 26836647313354LL;

    t60 = (x345|(x346+(x347*x348)));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x349 = -115;
	int8_t x350 = 0;
	uint16_t x351 = 17U;
	volatile uint8_t x352 = 0U;
	volatile int32_t t61 = 241;

    t61 = (x349|(x350+(x351*x352)));

    if (t61 != -115) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MAX;
	uint8_t x359 = 0U;
	static int32_t x360 = 1866053;
	static int32_t t62 = -38607024;

    t62 = (x357|(x358+(x359*x360)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x365 = 23275941641271LLU;
	int8_t x366 = 13;
	uint64_t x368 = 6322LLU;

    t63 = (x365|(x366+(x367*x368)));

    if (t63 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x370 = -1;
	uint8_t x371 = 1U;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t64 = -62;

    t64 = (x369|(x370+(x371*x372)));

    if (t64 != -129) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x373 = -18;
	static uint8_t x374 = 122U;
	int16_t x375 = 8116;
	uint32_t x376 = 57515684U;
	uint32_t t65 = 51296268U;

    t65 = (x373|(x374+(x375*x376)));

    if (t65 != 4294967278U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x377 = INT8_MAX;
	int64_t x378 = INT64_MIN;
	uint8_t x379 = 0U;
	uint64_t x380 = 36595009266808270LLU;
	static uint64_t t66 = 816106243309420939LLU;

    t66 = (x377|(x378+(x379*x380)));

    if (t66 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x385 = 1U;
	uint16_t x387 = 14U;
	uint16_t x388 = 103U;
	volatile int32_t t67 = 12607784;

    t67 = (x385|(x386+(x387*x388)));

    if (t67 != 1315) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	volatile int16_t x403 = INT16_MIN;
	int64_t x404 = -213699LL;
	int64_t t68 = -841261230860232776LL;

    t68 = (x401|(x402+(x403*x404)));

    if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x405 = 97U;
	int16_t x406 = 4;
	int8_t x407 = 1;
	int16_t x408 = INT16_MIN;
	static volatile int32_t t69 = -252;

    t69 = (x405|(x406+(x407*x408)));

    if (t69 != -32667) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x409 = 6U;
	volatile int16_t x410 = 52;

    t70 = (x409|(x410+(x411*x412)));

    if (t70 != 54LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MAX;
	int16_t x415 = INT16_MIN;
	static int64_t x416 = 23992546LL;
	static volatile int64_t t71 = -21278LL;

    t71 = (x413|(x414+(x415*x416)));

    if (t71 != -786187747329LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x417 = 514593182LLU;
	volatile int32_t x418 = INT32_MIN;
	volatile uint8_t x419 = 0U;
	volatile uint16_t x420 = 9U;

    t72 = (x417|(x418+(x419*x420)));

    if (t72 != 18446744072076661150LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x421 = UINT16_MAX;
	static uint8_t x422 = UINT8_MAX;
	uint64_t x424 = 31707882688582LLU;
	volatile uint64_t t73 = 433472LLU;

    t73 = (x421|(x422+(x423*x424)));

    if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x427 = UINT8_MAX;
	int8_t x428 = 1;
	int32_t t74 = -19;

    t74 = (x425|(x426+(x427*x428)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x433 = 18U;
	int16_t x434 = -1;
	static volatile uint64_t x435 = UINT64_MAX;
	int32_t x436 = -1;
	uint64_t t75 = 5422340317307322LLU;

    t75 = (x433|(x434+(x435*x436)));

    if (t75 != 18LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x449 = 0;
	static volatile uint16_t x450 = 62U;
	int16_t x452 = -56;
	volatile int32_t t76 = -1910196;

    t76 = (x449|(x450+(x451*x452)));

    if (t76 != -34210) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x453 = INT32_MAX;
	static int32_t x454 = 12991;
	static int8_t x455 = -1;
	uint32_t x456 = UINT32_MAX;
	uint32_t t77 = 170776288U;

    t77 = (x453|(x454+(x455*x456)));

    if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x457 = -1;
	int32_t x458 = -1;
	int64_t x459 = -1LL;
	int32_t x460 = 3758711;
	int64_t t78 = 75546103LL;

    t78 = (x457|(x458+(x459*x460)));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x461 = 22U;
	static volatile int8_t x463 = -1;
	volatile int32_t t79 = -3956614;

    t79 = (x461|(x462+(x463*x464)));

    if (t79 != -2147483498) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x465 = 9141316121623293875LLU;
	static volatile int16_t x466 = INT16_MIN;
	uint16_t x467 = 1650U;
	int8_t x468 = INT8_MAX;
	static uint64_t t80 = 762917LLU;

    t80 = (x465|(x466+(x467*x468)));

    if (t80 != 9141316121623461823LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x474 = INT8_MIN;
	volatile int64_t x475 = 795121LL;
	uint64_t x476 = 60900891791962LLU;

    t81 = (x473|(x474+(x475*x476)));

    if (t81 != 11530089835133826366LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x477 = 0;
	uint16_t x478 = UINT16_MAX;
	int32_t t82 = 976134391;

    t82 = (x477|(x478+(x479*x480)));

    if (t82 != 62631) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x481 = INT64_MAX;
	int32_t x482 = -17832;
	static int32_t x483 = INT32_MIN;
	volatile int64_t t83 = INT64_MAX;

    t83 = (x481|(x482+(x483*x484)));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x485 = INT32_MAX;
	static int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t84 = INT32_MAX;

    t84 = (x485|(x486+(x487*x488)));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x493 = INT8_MIN;
	volatile int16_t x494 = INT16_MIN;
	static volatile uint16_t x495 = UINT16_MAX;
	int8_t x496 = -58;
	static volatile int32_t t85 = -1;

    t85 = (x493|(x494+(x495*x496)));

    if (t85 != -70) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x501 = UINT32_MAX;
	uint8_t x502 = 3U;
	volatile int16_t x503 = -1;
	int8_t x504 = -1;

    t86 = (x501|(x502+(x503*x504)));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x505 = 67U;
	uint32_t x507 = 152U;
	volatile int16_t x508 = -113;

    t87 = (x505|(x506+(x507*x508)));

    if (t87 != 129318919601854331LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x509 = UINT32_MAX;
	int8_t x510 = INT8_MAX;
	int8_t x511 = 0;
	uint32_t x512 = 963U;
	volatile uint32_t t88 = UINT32_MAX;

    t88 = (x509|(x510+(x511*x512)));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x517 = INT16_MAX;
	static int64_t x518 = 1015201LL;
	static uint64_t x519 = UINT64_MAX;
	int64_t x520 = INT64_MIN;
	uint64_t t89 = 152LLU;

    t89 = (x517|(x518+(x519*x520)));

    if (t89 != 9223372036855791615LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x521 = 4;
	int16_t x522 = INT16_MAX;
	int64_t x523 = -1LL;
	int64_t t90 = -2849LL;

    t90 = (x521|(x522+(x523*x524)));

    if (t90 != 32749LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x533 = -1LL;
	int8_t x534 = -1;
	static int32_t x536 = 8592;
	volatile int64_t t91 = -29247810205LL;

    t91 = (x533|(x534+(x535*x536)));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x537 = 300;
	uint16_t x538 = UINT16_MAX;
	volatile int16_t x539 = INT16_MIN;
	int16_t x540 = -13;
	volatile int32_t t92 = -1492;

    t92 = (x537|(x538+(x539*x540)));

    if (t92 != 491519) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x542 = 16585376179380796LLU;
	int32_t x544 = -1;
	uint64_t t93 = 1045451621725256LLU;

    t93 = (x541|(x542+(x543*x544)));

    if (t93 != 16585376179380861LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x546 = 15060U;
	uint32_t x547 = 5121128U;
	uint16_t x548 = UINT16_MAX;

    t94 = (x545|(x546+(x547*x548)));

    if (t94 != 4294967276U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x549 = -1LL;
	uint16_t x550 = 1530U;
	int16_t x552 = -1;
	int64_t t95 = -680895LL;

    t95 = (x549|(x550+(x551*x552)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x569 = -1642997;
	uint16_t x570 = UINT16_MAX;
	uint32_t x571 = 1889549378U;
	int8_t x572 = INT8_MAX;
	volatile uint32_t t96 = 259975135U;

    t96 = (x569|(x570+(x571*x572)));

    if (t96 != 4294897343U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x573 = 107LL;
	int32_t x574 = 25934776;
	uint32_t x575 = UINT32_MAX;
	uint16_t x576 = UINT16_MAX;
	int64_t t97 = -2422983973313346LL;

    t97 = (x573|(x574+(x575*x576)));

    if (t97 != 25869307LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x577 = INT8_MAX;
	uint16_t x579 = UINT16_MAX;
	uint64_t x580 = 8105807573378LLU;
	uint64_t t98 = 93LLU;

    t98 = (x577|(x578+(x579*x580)));

    if (t98 != 1355560630295521279LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x581 = -1;
	static int16_t x582 = 13731;
	int16_t x583 = -1;
	uint16_t x584 = 31U;
	int32_t t99 = 4148824;

    t99 = (x581|(x582+(x583*x584)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x601 = 799LL;
	int32_t x602 = INT32_MIN;

    t100 = (x601|(x602+(x603*x604)));

    if (t100 != 8720037829172337471LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x605 = -21;
	static int32_t x606 = INT32_MAX;
	int8_t x607 = -1;
	volatile uint64_t x608 = UINT64_MAX;
	volatile uint64_t t101 = 25LLU;

    t101 = (x605|(x606+(x607*x608)));

    if (t101 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x612 = INT32_MAX;
	volatile uint64_t t102 = 213398411868401159LLU;

    t102 = (x609|(x610+(x611*x612)));

    if (t102 != 9532686065868668927LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x614 = UINT32_MAX;
	uint32_t x615 = UINT32_MAX;
	uint16_t x616 = UINT16_MAX;
	uint64_t t103 = 4566732062961LLU;

    t103 = (x613|(x614+(x615*x616)));

    if (t103 != 152290950322406LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x618 = UINT8_MAX;
	uint8_t x619 = UINT8_MAX;
	int16_t x620 = 4;
	uint32_t t104 = 6487U;

    t104 = (x617|(x618+(x619*x620)));

    if (t104 != 10987263U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x623 = INT8_MIN;
	int16_t x624 = -1;
	int64_t t105 = 2163924LL;

    t105 = (x621|(x622+(x623*x624)));

    if (t105 != 119654436651627507LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x631 = 31U;
	int16_t x632 = -1;
	volatile int32_t t106 = 127376043;

    t106 = (x629|(x630+(x631*x632)));

    if (t106 != -24) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x637 = 5459U;
	static int32_t x638 = INT32_MAX;
	int32_t x640 = INT32_MAX;
	int64_t t107 = 25071159673358LL;

    t107 = (x637|(x638+(x639*x640)));

    if (t107 != 5459LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x645 = 0U;
	int16_t x647 = INT16_MIN;
	static int8_t x648 = INT8_MIN;
	static volatile int32_t t108 = -426;

    t108 = (x645|(x646+(x647*x648)));

    if (t108 != 4227071) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x649 = INT8_MAX;
	static int64_t x650 = -414949986554LL;
	uint64_t x651 = 64LLU;
	int32_t x652 = -1;
	volatile uint64_t t109 = 12755LLU;

    t109 = (x649|(x650+(x651*x652)));

    if (t109 != 18446743658759565055LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x653 = -1LL;
	int64_t x654 = INT64_MAX;
	int64_t x655 = -1LL;
	volatile int64_t t110 = -32393363LL;

    t110 = (x653|(x654+(x655*x656)));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x657 = UINT64_MAX;
	uint32_t x658 = UINT32_MAX;
	static int16_t x659 = INT16_MAX;
	int16_t x660 = 2;
	uint64_t t111 = UINT64_MAX;

    t111 = (x657|(x658+(x659*x660)));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x663 = INT8_MAX;
	volatile uint16_t x664 = 3U;
	static uint32_t t112 = 785U;

    t112 = (x661|(x662+(x663*x664)));

    if (t112 != 4294967234U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x665 = -26184759945LL;
	int64_t x666 = 63LL;
	int64_t x667 = 54764LL;
	uint64_t x668 = 218301210387654844LLU;
	volatile uint64_t t113 = 56608853246LLU;

    t113 = (x665|(x666+(x667*x668)));

    if (t113 != 18446744047527656959LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x669 = 16857381;
	int16_t x670 = -3129;
	int16_t x672 = -1;
	volatile int32_t t114 = -25;

    t114 = (x669|(x670+(x671*x672)));

    if (t114 != 16874471) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x673 = INT32_MIN;
	volatile int64_t x674 = -1LL;
	uint64_t x675 = 2LLU;
	uint16_t x676 = 21276U;
	uint64_t t115 = 440868677LLU;

    t115 = (x673|(x674+(x675*x676)));

    if (t115 != 18446744071562110519LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x677 = INT16_MAX;
	int8_t x678 = -1;
	uint64_t t116 = UINT64_MAX;

    t116 = (x677|(x678+(x679*x680)));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x685 = 3U;
	int8_t x687 = INT8_MIN;
	volatile int16_t x688 = 0;
	int64_t t117 = 169487500LL;

    t117 = (x685|(x686+(x687*x688)));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x689 = INT64_MAX;
	uint64_t x690 = UINT64_MAX;
	volatile int8_t x691 = 5;
	volatile uint16_t x692 = 398U;

    t118 = (x689|(x690+(x691*x692)));

    if (t118 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x694 = UINT32_MAX;
	int64_t x695 = -94LL;
	int32_t x696 = INT32_MIN;
	volatile int64_t t119 = 1760702485LL;

    t119 = (x693|(x694+(x695*x696)));

    if (t119 != 206158430207LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x701 = 33;
	int8_t x702 = INT8_MIN;
	int16_t x703 = INT16_MIN;
	uint16_t x704 = UINT16_MAX;
	static volatile int32_t t120 = 123080;

    t120 = (x701|(x702+(x703*x704)));

    if (t120 != -2147450975) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x705 = -1460573951798953LL;
	int16_t x706 = INT16_MIN;
	uint64_t x707 = 8160961725365LLU;
	int64_t x708 = INT64_MIN;
	volatile uint64_t t121 = 3482839513167875003LLU;

    t121 = (x705|(x706+(x707*x708)));

    if (t121 != 18446744073709539671LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x710 = INT16_MIN;
	static int16_t x711 = INT16_MIN;
	uint64_t x712 = 279305170LLU;

    t122 = (x709|(x710+(x711*x712)));

    if (t122 != 18446734921437713199LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x713 = 1718;
	uint64_t x714 = UINT64_MAX;
	static int32_t x715 = 2856;
	volatile uint16_t x716 = 3U;
	volatile uint64_t t123 = 20516162LLU;

    t123 = (x713|(x714+(x715*x716)));

    if (t123 != 10231LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x721 = INT32_MAX;
	int32_t x722 = 84;
	int64_t x724 = -660821129754141LL;
	volatile int64_t t124 = 40933645117LL;

    t124 = (x721|(x722+(x723*x724)));

    if (t124 != 31058594292039679LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x725 = INT8_MAX;
	volatile int64_t x726 = INT64_MIN;
	volatile int16_t x727 = -1;
	static int8_t x728 = INT8_MIN;
	int64_t t125 = 6LL;

    t125 = (x725|(x726+(x727*x728)));

    if (t125 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x729 = -24;
	uint32_t x730 = UINT32_MAX;
	static int32_t x731 = INT32_MIN;
	uint32_t t126 = UINT32_MAX;

    t126 = (x729|(x730+(x731*x732)));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x733 = 8356980;
	int16_t x735 = INT16_MIN;
	volatile int32_t t127 = -132;

    t127 = (x733|(x734+(x735*x736)));

    if (t127 != 8388606) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int32_t x738 = INT32_MAX;
	volatile int8_t x739 = -3;
	int64_t x740 = -1LL;
	int64_t t128 = 1764479847479LL;

    t128 = (x737|(x738+(x739*x740)));

    if (t128 != 2147483903LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x741 = INT64_MIN;
	uint64_t x742 = 681762LLU;
	int8_t x743 = 0;
	uint64_t x744 = 73007373692LLU;
	uint64_t t129 = 5LLU;

    t129 = (x741|(x742+(x743*x744)));

    if (t129 != 9223372036855457570LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x745 = -1LL;
	static int32_t x746 = INT32_MAX;
	static int64_t x747 = INT64_MIN;
	uint64_t x748 = 175724033842LLU;
	uint64_t t130 = UINT64_MAX;

    t130 = (x745|(x746+(x747*x748)));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x749 = -1;
	static volatile int16_t x750 = -1;
	static int64_t x751 = -2566392951LL;
	int16_t x752 = -22;

    t131 = (x749|(x750+(x751*x752)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x754 = 69939730U;
	int64_t x755 = -1LL;

    t132 = (x753|(x754+(x755*x756)));

    if (t132 != 4294967295LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x757 = 4582486;
	static int8_t x758 = -3;
	int16_t x759 = 6861;
	static volatile uint64_t x760 = 214911966820LLU;
	volatile uint64_t t133 = 242107471943LLU;

    t133 = (x757|(x758+(x759*x760)));

    if (t133 != 1474511008824919LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x761 = INT8_MIN;
	int64_t x763 = 169593LL;
	static uint8_t x764 = UINT8_MAX;
	static volatile int64_t t134 = 949773100591087520LL;

    t134 = (x761|(x762+(x763*x764)));

    if (t134 != -122LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x766 = INT8_MIN;
	int32_t x768 = -1;

    t135 = (x765|(x766+(x767*x768)));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x769 = 1870828U;
	uint16_t x771 = UINT16_MAX;
	int16_t x772 = INT16_MAX;

    t136 = (x769|(x770+(x771*x772)));

    if (t136 != 2147388397LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x773 = -2324;
	uint64_t x775 = UINT64_MAX;
	static int32_t x776 = -1;
	volatile uint64_t t137 = 427757776286773LLU;

    t137 = (x773|(x774+(x775*x776)));

    if (t137 != 18446744073709549294LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x777 = 1889512473505273394LL;
	uint32_t x778 = UINT32_MAX;
	static int8_t x779 = -1;
	static volatile int64_t t138 = 679082LL;

    t138 = (x777|(x778+(x779*x780)));

    if (t138 != 1889512476089751090LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x781 = UINT16_MAX;
	volatile int64_t x782 = INT64_MAX;
	int16_t x783 = INT16_MAX;
	volatile uint64_t t139 = 239727529LLU;

    t139 = (x781|(x782+(x783*x784)));

    if (t139 != 1280622585035227135LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x789 = -1LL;
	uint16_t x790 = UINT16_MAX;
	uint64_t x791 = 1145LLU;
	volatile uint64_t t140 = UINT64_MAX;

    t140 = (x789|(x790+(x791*x792)));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x793 = 1;
	int16_t x794 = INT16_MAX;
	int8_t x795 = -1;
	static int64_t x796 = INT64_MAX;
	volatile int64_t t141 = -1LL;

    t141 = (x793|(x794+(x795*x796)));

    if (t141 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x799 = -9742016LL;
	int8_t x800 = INT8_MIN;

    t142 = (x797|(x798+(x799*x800)));

    if (t142 != -3559LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x805 = -371;
	int32_t x806 = INT32_MIN;
	uint32_t x808 = 6515520U;
	int64_t t143 = -9086246670LL;

    t143 = (x805|(x806+(x807*x808)));

    if (t143 != -307LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x832 = 7514084193156LL;
	volatile uint64_t t144 = 222565353298969345LLU;

    t144 = (x829|(x830+(x831*x832)));

    if (t144 != 18446736561772846587LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x833 = -1;
	int64_t x834 = -1LL;
	volatile int64_t x835 = -129344LL;
	static int16_t x836 = 0;

    t145 = (x833|(x834+(x835*x836)));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x849 = 11;
	static int16_t x850 = -1;
	static int32_t x851 = 349;
	static uint16_t x852 = UINT16_MAX;
	static volatile int32_t t146 = 440;

    t146 = (x849|(x850+(x851*x852)));

    if (t146 != 22871723) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x854 = 13283471702551948LLU;
	static volatile int64_t x856 = INT64_MIN;
	static volatile uint64_t t147 = 708905593304LLU;

    t147 = (x853|(x854+(x855*x856)));

    if (t147 != 9236655508557332479LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x859 = INT16_MAX;
	uint32_t x860 = 145049U;
	static int64_t t148 = -526922303LL;

    t148 = (x857|(x858+(x859*x860)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x861 = -1;
	uint64_t x863 = 2889235187844LLU;
	int16_t x864 = -1;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = (x861|(x862+(x863*x864)));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x865 = 29;
	uint8_t x866 = 0U;
	int64_t x867 = -1LL;
	uint8_t x868 = UINT8_MAX;
	volatile int64_t t150 = 1LL;

    t150 = (x865|(x866+(x867*x868)));

    if (t150 != -227LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x869 = INT8_MAX;
	uint64_t x870 = UINT64_MAX;
	int8_t x871 = INT8_MAX;
	int8_t x872 = -1;
	uint64_t t151 = UINT64_MAX;

    t151 = (x869|(x870+(x871*x872)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x873 = -117920612;
	volatile int32_t x874 = INT32_MIN;
	volatile uint64_t x875 = 16286532067107LLU;
	int8_t x876 = INT8_MAX;
	uint64_t t152 = 48LLU;

    t152 = (x873|(x874+(x875*x876)));

    if (t152 != 18446744073608543965LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x877 = 12650LLU;
	uint32_t x878 = 23U;
	uint64_t x879 = UINT64_MAX;
	static volatile int64_t x880 = -38620919596LL;
	uint64_t t153 = 5894LLU;

    t153 = (x877|(x878+(x879*x880)));

    if (t153 != 38620919659LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x885 = -1;
	int32_t x886 = -572;
	int16_t x888 = INT16_MIN;
	uint32_t t154 = UINT32_MAX;

    t154 = (x885|(x886+(x887*x888)));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x889 = INT8_MIN;
	volatile uint32_t x891 = 92106107U;
	static int8_t x892 = INT8_MIN;

    t155 = (x889|(x890+(x891*x892)));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x893 = -32199645;
	uint64_t x894 = UINT64_MAX;
	static uint16_t x895 = UINT16_MAX;
	static int64_t x896 = -1LL;

    t156 = (x893|(x894+(x895*x896)));

    if (t156 != 18446744073709530147LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x899 = -1LL;
	int8_t x900 = -1;
	volatile int64_t t157 = -122484712LL;

    t157 = (x897|(x898+(x899*x900)));

    if (t157 != 12336895LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x901 = 5391LLU;
	int16_t x904 = -11;
	volatile uint64_t t158 = 1834836294797627LLU;

    t158 = (x901|(x902+(x903*x904)));

    if (t158 != 18446744071562073359LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x911 = INT8_MIN;
	static uint8_t x912 = 52U;
	volatile int64_t t159 = -1299987785741LL;

    t159 = (x909|(x910+(x911*x912)));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x918 = INT16_MIN;
	int16_t x920 = 60;
	volatile int32_t t160 = 47;

    t160 = (x917|(x918+(x919*x920)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x921 = UINT32_MAX;
	int8_t x922 = INT8_MAX;
	static uint32_t x924 = 4U;
	uint32_t t161 = UINT32_MAX;

    t161 = (x921|(x922+(x923*x924)));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x929 = -21;
	volatile uint64_t x932 = 3820132198LLU;
	uint64_t t162 = 12937064939504644LLU;

    t162 = (x929|(x930+(x931*x932)));

    if (t162 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x933 = INT32_MAX;
	uint8_t x934 = UINT8_MAX;
	int16_t x935 = INT16_MAX;
	int32_t x936 = -2;

    t163 = (x933|(x934+(x935*x936)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x937 = 8309843U;
	int64_t x939 = -1162LL;
	static int64_t x940 = -1LL;
	volatile int64_t t164 = 3LL;

    t164 = (x937|(x938+(x939*x940)));

    if (t164 != -4328600449LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x941 = 5;
	volatile int16_t x942 = INT16_MIN;
	int32_t x944 = 400115660;
	volatile int64_t t165 = 181805LL;

    t165 = (x941|(x942+(x943*x944)));

    if (t165 != 717772683944813LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x945 = UINT8_MAX;
	int8_t x946 = INT8_MIN;
	volatile int32_t x947 = -16305552;
	static uint8_t x948 = 0U;
	volatile int32_t t166 = -2085464;

    t166 = (x945|(x946+(x947*x948)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x949 = 15U;
	volatile int8_t x951 = 0;
	volatile uint32_t t167 = 15473011U;

    t167 = (x949|(x950+(x951*x952)));

    if (t167 != 4294967135U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x953 = -1;
	volatile int16_t x954 = -1;
	static volatile int16_t x955 = INT16_MAX;
	volatile uint32_t x956 = 48U;
	volatile uint32_t t168 = UINT32_MAX;

    t168 = (x953|(x954+(x955*x956)));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x961 = -85566;
	volatile int32_t x962 = -963;
	static int8_t x963 = INT8_MIN;
	volatile int32_t t169 = 19;

    t169 = (x961|(x962+(x963*x964)));

    if (t169 != -1537) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x965 = INT8_MIN;
	uint32_t x966 = UINT32_MAX;
	int8_t x967 = -1;
	int16_t x968 = -1;
	uint32_t t170 = 455900U;

    t170 = (x965|(x966+(x967*x968)));

    if (t170 != 4294967168U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x969 = -6239964LL;
	static int8_t x970 = INT8_MIN;
	static uint16_t x971 = 9976U;
	volatile int64_t x972 = -1LL;
	volatile int64_t t171 = -4LL;

    t171 = (x969|(x970+(x971*x972)));

    if (t171 != -9812LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x973 = -1492;
	volatile int64_t x974 = -1LL;
	int8_t x975 = INT8_MAX;
	int16_t x976 = INT16_MIN;
	volatile int64_t t172 = -93237580000LL;

    t172 = (x973|(x974+(x975*x976)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x982 = INT16_MIN;
	uint8_t x983 = UINT8_MAX;
	volatile int32_t t173 = -6684912;

    t173 = (x981|(x982+(x983*x984)));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x985 = 9899590729794LLU;
	volatile int16_t x986 = -1;
	static uint8_t x987 = 4U;
	int32_t x988 = -1;
	uint64_t t174 = 10240931LLU;

    t174 = (x985|(x986+(x987*x988)));

    if (t174 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x993 = 50405LLU;
	uint64_t x995 = 5602019060067LLU;
	int32_t x996 = -1;
	static volatile uint64_t t175 = 1LLU;

    t175 = (x993|(x994+(x995*x996)));

    if (t175 != 18446738471690555381LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1005 = 2950140U;
	int8_t x1006 = 6;
	static uint64_t x1007 = 43751483939708LLU;
	uint64_t t176 = 542LLU;

    t176 = (x1005|(x1006+(x1007*x1008)));

    if (t176 != 17013095447976150014LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1013 = UINT32_MAX;
	int8_t x1014 = -1;
	uint8_t x1015 = 4U;
	int16_t x1016 = -108;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = (x1013|(x1014+(x1015*x1016)));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1017 = 11910021LLU;
	volatile int64_t x1018 = -747840LL;
	uint64_t x1020 = 55262623LLU;
	volatile uint64_t t178 = 428LLU;

    t178 = (x1017|(x1018+(x1019*x1020)));

    if (t178 != 18446742262872653765LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x1021 = INT64_MIN;
	int64_t x1022 = -429982LL;
	int32_t x1023 = INT32_MIN;
	int32_t x1024 = 1;
	volatile int64_t t179 = -1LL;

    t179 = (x1021|(x1022+(x1023*x1024)));

    if (t179 != -2147913630LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1025 = INT16_MIN;
	int64_t x1026 = -29LL;
	int32_t x1027 = -3579;
	int8_t x1028 = INT8_MIN;
	static int64_t t180 = -402321LL;

    t180 = (x1025|(x1026+(x1027*x1028)));

    if (t180 != -669LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1029 = 8U;
	uint16_t x1031 = 81U;
	uint8_t x1032 = 2U;
	volatile int32_t t181 = -2764;

    t181 = (x1029|(x1030+(x1031*x1032)));

    if (t181 != -32598) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1033 = -1;
	int32_t x1034 = INT32_MIN;
	int16_t x1035 = INT16_MAX;
	uint64_t t182 = UINT64_MAX;

    t182 = (x1033|(x1034+(x1035*x1036)));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1038 = INT16_MIN;
	uint8_t x1039 = 2U;
	volatile int64_t x1040 = -1LL;
	int64_t t183 = 1958046747230721311LL;

    t183 = (x1037|(x1038+(x1039*x1040)));

    if (t183 != -2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x1041 = UINT32_MAX;
	int32_t x1042 = -6707674;
	volatile int16_t x1043 = INT16_MIN;
	int32_t x1044 = -1;
	uint32_t t184 = UINT32_MAX;

    t184 = (x1041|(x1042+(x1043*x1044)));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1045 = 3;
	int64_t x1046 = -1LL;
	static uint64_t x1047 = 57593014808LLU;
	static volatile int32_t x1048 = INT32_MAX;

    t185 = (x1045|(x1046+(x1047*x1048)));

    if (t185 != 12999593039351535079LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1054 = -1;
	volatile uint8_t x1055 = 5U;
	int32_t x1056 = -1;
	int32_t t186 = 2;

    t186 = (x1053|(x1054+(x1055*x1056)));

    if (t186 != -6) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1057 = INT32_MIN;
	static volatile uint64_t x1058 = 1LLU;
	uint8_t x1059 = UINT8_MAX;
	uint8_t x1060 = UINT8_MAX;
	volatile uint64_t t187 = 2807656LLU;

    t187 = (x1057|(x1058+(x1059*x1060)));

    if (t187 != 18446744071562132994LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x1061 = UINT8_MAX;
	volatile int32_t x1062 = -158499152;
	uint8_t x1063 = 14U;
	volatile uint64_t t188 = 1349332000019LLU;

    t188 = (x1061|(x1062+(x1063*x1064)));

    if (t188 != 18446744073551052543LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1066 = INT8_MIN;
	volatile uint16_t x1067 = 2608U;
	volatile uint64_t x1068 = 6265561974799067LLU;

    t189 = (x1065|(x1066+(x1067*x1068)));

    if (t189 != 18446744073625393116LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1085 = 7555U;
	volatile uint8_t x1086 = 7U;
	uint16_t x1087 = UINT16_MAX;
	volatile uint64_t t190 = 25022711339059LLU;

    t190 = (x1085|(x1086+(x1087*x1088)));

    if (t190 != 18446744073709493643LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1093 = -1;
	int16_t x1094 = -1;
	int8_t x1096 = INT8_MIN;
	int32_t t191 = 8458;

    t191 = (x1093|(x1094+(x1095*x1096)));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1097 = UINT8_MAX;
	int16_t x1098 = INT16_MIN;
	int32_t x1099 = 142062;
	static uint8_t x1100 = 7U;
	int32_t t192 = 186311;

    t192 = (x1097|(x1098+(x1099*x1100)));

    if (t192 != 961791) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x1101 = 858458984593LLU;
	int16_t x1102 = INT16_MIN;
	volatile int32_t x1103 = -1;
	int16_t x1104 = -986;

    t193 = (x1101|(x1102+(x1103*x1104)));

    if (t193 != 18446744073709523931LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1109 = INT64_MIN;
	static int32_t x1110 = INT32_MIN;
	uint64_t x1111 = 56883836541LLU;
	uint64_t x1112 = UINT64_MAX;
	static uint64_t t194 = 260142LLU;

    t194 = (x1109|(x1110+(x1111*x1112)));

    if (t194 != 18446744014678231427LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1113 = INT32_MAX;
	uint32_t x1114 = 53311247U;
	volatile uint16_t x1115 = 4U;
	int32_t x1116 = -3384305;

    t195 = (x1113|(x1114+(x1115*x1116)));

    if (t195 != 2147483647U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1117 = 14925U;
	int32_t x1118 = -1464;
	uint64_t x1119 = UINT64_MAX;
	int8_t x1120 = INT8_MIN;

    t196 = (x1117|(x1118+(x1119*x1120)));

    if (t196 != 18446744073709550285LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1122 = UINT32_MAX;
	uint64_t x1123 = 53660LLU;
	int16_t x1124 = INT16_MIN;
	uint64_t t197 = 5633LLU;

    t197 = (x1121|(x1122+(x1123*x1124)));

    if (t197 != 2536636415LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1129 = 7U;
	uint64_t x1130 = 1357327580581897693LLU;
	uint16_t x1132 = 59U;
	uint64_t t198 = 109997704315616LLU;

    t198 = (x1129|(x1130+(x1131*x1132)));

    if (t198 != 1357327580581890143LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1137 = -50LL;
	uint16_t x1138 = 1U;
	int64_t x1139 = 16503787LL;
	uint64_t x1140 = 1495726LLU;
	uint64_t t199 = UINT64_MAX;

    t199 = (x1137|(x1138+(x1139*x1140)));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

