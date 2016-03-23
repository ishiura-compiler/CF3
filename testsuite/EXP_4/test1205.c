
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

static int32_t x7 = INT32_MIN;
static int8_t x16 = -4;
int32_t x23 = -1;
int64_t x29 = -1072082902LL;
volatile int32_t x30 = -9468;
int8_t x36 = -1;
uint8_t x38 = 3U;
int32_t x39 = -7;
volatile uint16_t x41 = 3511U;
int16_t x58 = 12304;
volatile int64_t t13 = 1463003456936845LL;
static uint16_t x63 = 2U;
static volatile int32_t t14 = 2348858;
int8_t x67 = 1;
int8_t x69 = 5;
int32_t x70 = 86148803;
uint64_t x71 = UINT64_MAX;
int32_t t16 = -553433347;
uint64_t x79 = 9094367853937340LLU;
volatile int64_t t18 = -153981LL;
static uint16_t x81 = 9328U;
static int32_t t26 = 0;
uint8_t x113 = 2U;
volatile int32_t t28 = -814;
uint8_t x121 = UINT8_MAX;
int32_t t29 = 5;
static uint64_t x133 = 1442LLU;
uint64_t x134 = 21709780797829293LLU;
volatile int64_t x135 = -1742LL;
int32_t x138 = INT32_MIN;
uint32_t x140 = 19576U;
uint16_t x141 = UINT16_MAX;
static uint32_t x157 = 442322U;
static uint64_t x158 = 12322LLU;
int8_t x164 = INT8_MIN;
int64_t x182 = -1LL;
static int16_t x186 = -91;
static int32_t x188 = -1;
volatile uint64_t x206 = 303087343427652281LLU;
uint64_t x209 = 215243309221LLU;
uint64_t t46 = 133198803LLU;
uint64_t x216 = UINT64_MAX;
int8_t x223 = INT8_MIN;
uint32_t x230 = 660628U;
static uint64_t x238 = 786245244LLU;
uint64_t x241 = UINT64_MAX;
int8_t x244 = INT8_MIN;
static int16_t x247 = INT16_MIN;
static uint16_t x248 = UINT16_MAX;
volatile int32_t x250 = 172632;
static int32_t x255 = -1;
volatile uint16_t x258 = 1930U;
int8_t x280 = INT8_MIN;
uint32_t x289 = 43U;
int8_t x290 = INT8_MAX;
static int64_t x291 = -691187377LL;
int16_t x306 = INT16_MAX;
volatile int32_t t70 = -3528366;
volatile int8_t x311 = -1;
int8_t x317 = -1;
int16_t x319 = 11;
int64_t x320 = 1013687889374LL;
int64_t x323 = 19162643887LL;
static int32_t t74 = 1;
volatile uint32_t x329 = UINT32_MAX;
int64_t x331 = INT64_MIN;
volatile uint32_t t76 = 351U;
volatile int16_t x333 = INT16_MIN;
uint32_t x334 = 57310579U;
volatile uint32_t t77 = 756024313U;
static volatile uint32_t x337 = UINT32_MAX;
int64_t x349 = INT64_MIN;
volatile int64_t t80 = -12240LL;
uint32_t x354 = 51803859U;
int16_t x356 = 420;
static volatile uint32_t t81 = 675286066U;
int8_t x361 = INT8_MIN;
int8_t x366 = INT8_MIN;
int64_t x373 = 2282174LL;
int16_t x377 = 1;
int32_t x378 = -6810;
int32_t t87 = 19769;
static volatile int16_t x383 = INT16_MIN;
uint64_t x385 = UINT64_MAX;
volatile uint64_t t89 = 1634829LLU;
static int8_t x389 = 22;
volatile uint8_t x408 = 10U;
static volatile int32_t t92 = INT32_MIN;
static int16_t x417 = INT16_MIN;
int32_t x425 = -1;
volatile uint8_t x429 = 47U;
volatile int8_t x440 = -3;
int16_t x441 = -1;
static volatile int32_t x444 = INT32_MIN;
volatile int8_t x448 = -1;
volatile int16_t x454 = INT16_MAX;
int8_t x457 = -24;
uint32_t t102 = 19U;
uint16_t x483 = 25U;
static uint16_t x485 = 41U;
uint8_t x495 = 14U;
int16_t x498 = 1;
int64_t x504 = INT64_MAX;
int64_t x506 = INT64_MIN;
uint8_t x507 = 1U;
int8_t x512 = 6;
static uint32_t x513 = 322179204U;
int16_t x515 = -1;
int16_t x518 = INT16_MIN;
int32_t t115 = 41668;
int64_t x524 = INT64_MAX;
volatile int64_t x525 = INT64_MIN;
uint8_t x547 = 6U;
int8_t x556 = INT8_MIN;
uint32_t x557 = UINT32_MAX;
int64_t x568 = -1LL;
uint32_t t125 = 18U;
int8_t x571 = -1;
int32_t x572 = INT32_MIN;
static uint64_t x574 = UINT64_MAX;
volatile uint64_t t128 = 4192728LLU;
int16_t x586 = INT16_MIN;
volatile int32_t t130 = -1306;
uint16_t x601 = UINT16_MAX;
int8_t x602 = INT8_MIN;
int16_t x603 = -1;
volatile uint16_t x607 = 7U;
volatile int8_t x610 = 0;
int32_t x616 = -1;
int32_t t136 = 326;
int32_t t137 = 27;
int8_t x629 = INT8_MIN;
int16_t x630 = INT16_MIN;
static uint16_t x633 = 0U;
static uint64_t x639 = 245LLU;
uint8_t x640 = 30U;
static uint64_t x646 = 240157066LLU;
volatile int16_t x653 = INT16_MIN;
int32_t x654 = -1;
int16_t x663 = -1;
static volatile uint32_t t147 = 239U;
uint32_t x665 = UINT32_MAX;
int8_t x666 = INT8_MAX;
static int32_t x667 = -19;
static uint64_t t149 = 767190838621LLU;
uint32_t x673 = 1929348616U;
static uint64_t x674 = UINT64_MAX;
volatile uint16_t x686 = UINT16_MAX;
int32_t t152 = -219200;
int64_t x690 = INT64_MAX;
static int32_t t154 = 7;
int8_t x704 = -52;
static int64_t x721 = INT64_MAX;
uint64_t t160 = 7150LLU;
int64_t x733 = INT64_MIN;
int16_t x734 = INT16_MAX;
volatile int64_t t161 = 3127779LL;
int64_t x744 = INT64_MIN;
int32_t t163 = -1;
uint64_t x746 = 1900276728245306049LLU;
static uint16_t x747 = 1322U;
int8_t x748 = INT8_MAX;
uint16_t x756 = UINT16_MAX;
uint32_t x758 = 11402423U;
static volatile int32_t x768 = -1;
uint32_t x778 = UINT32_MAX;
int32_t x783 = INT32_MIN;
volatile uint8_t x790 = 2U;
static uint16_t x793 = UINT16_MAX;
static volatile int32_t t173 = -1987375;
int32_t x801 = INT32_MIN;
volatile int64_t x802 = -92076969248772LL;
static int64_t x803 = 216536897LL;
int8_t x804 = 1;
volatile int8_t x807 = INT8_MAX;
uint16_t x825 = 153U;
int64_t x828 = INT64_MAX;
volatile int16_t x830 = INT16_MAX;
int16_t x834 = INT16_MIN;
int8_t x840 = INT8_MAX;
static int64_t x843 = INT64_MAX;
volatile int64_t x846 = -519348463755LL;
static int64_t t185 = 2372161658916LL;
volatile uint16_t x851 = 3515U;
uint32_t x853 = UINT32_MAX;
uint8_t x854 = UINT8_MAX;
int8_t x859 = INT8_MIN;
uint64_t x867 = 172564080655970682LLU;
volatile uint64_t t190 = 120LLU;
volatile int64_t x869 = -1LL;
uint64_t x872 = 245457849LLU;
uint16_t x875 = UINT16_MAX;
uint64_t x877 = UINT64_MAX;
static int16_t x878 = -52;
volatile int32_t t195 = -97024231;
uint64_t x891 = UINT64_MAX;
int32_t x892 = 1108;
int32_t t196 = 493;
uint64_t x897 = UINT64_MAX;
int8_t x899 = INT8_MIN;
uint64_t x903 = 326921427559LLU;


void f0(void) {
    	uint64_t x1 = 5LLU;
	volatile int16_t x2 = INT16_MAX;
	int32_t x3 = INT32_MIN;
	int8_t x4 = 6;
	volatile uint64_t t0 = 109287914LLU;

    t0 = (x1+(x2*(x3!=x4)));

    if (t0 != 32772LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 0U;
	static uint8_t x6 = UINT8_MAX;
	int32_t x8 = 206660949;
	int32_t t1 = 45964334;

    t1 = (x5+(x6*(x7!=x8)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	static int8_t x12 = 1;
	volatile int32_t t2 = 2527156;

    t2 = (x9+(x10*(x11!=x12)));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int16_t x14 = 6;
	int16_t x15 = -1;
	uint64_t t3 = 132651600794887LLU;

    t3 = (x13+(x14*(x15!=x16)));

    if (t3 != 5LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 32525LLU;
	uint32_t x18 = 1736896150U;
	int16_t x19 = 3210;
	int8_t x20 = INT8_MAX;
	volatile uint64_t t4 = 22LLU;

    t4 = (x17+(x18*(x19!=x20)));

    if (t4 != 1736928675LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 356379964011382LLU;
	static int16_t x22 = INT16_MIN;
	uint8_t x24 = 18U;
	volatile uint64_t t5 = 27LLU;

    t5 = (x21+(x22*(x23!=x24)));

    if (t5 != 356379963978614LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MIN;
	int32_t x27 = -1;
	int64_t x28 = INT64_MIN;
	static volatile uint64_t t6 = 30LLU;

    t6 = (x25+(x26*(x27!=x28)));

    if (t6 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x31 = -1;
	int64_t x32 = -1LL;
	int64_t t7 = -1569462496LL;

    t7 = (x29+(x30*(x31!=x32)));

    if (t7 != -1072082902LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 76787LLU;
	int64_t x34 = -7761LL;
	static uint64_t x35 = UINT64_MAX;
	static volatile uint64_t t8 = 51974934LLU;

    t8 = (x33+(x34*(x35!=x36)));

    if (t8 != 76787LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x40 = 4;
	int32_t t9 = -2972796;

    t9 = (x37+(x38*(x39!=x40)));

    if (t9 != -125) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	int32_t x44 = 1;
	static int32_t t10 = -615669;

    t10 = (x41+(x42*(x43!=x44)));

    if (t10 != -2147480137) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 10U;
	static volatile int16_t x50 = 17;
	volatile int16_t x51 = -1;
	static int64_t x52 = -1LL;
	volatile uint32_t t11 = 122U;

    t11 = (x49+(x50*(x51!=x52)));

    if (t11 != 10U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x53 = INT32_MAX;
	static volatile uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -2168194410296LL;
	volatile uint64_t t12 = 3899577LLU;

    t12 = (x53+(x54*(x55!=x56)));

    if (t12 != 2147483646LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	static uint32_t x59 = 20U;
	uint32_t x60 = 11350373U;

    t13 = (x57+(x58*(x59!=x60)));

    if (t13 != -9223372036854763504LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 6U;
	static volatile int8_t x62 = INT8_MIN;
	int8_t x64 = -21;

    t14 = (x61+(x62*(x63!=x64)));

    if (t14 != -122) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = -1;
	int32_t x66 = INT32_MAX;
	volatile int16_t x68 = -15;
	volatile int32_t t15 = -9052;

    t15 = (x65+(x66*(x67!=x68)));

    if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x72 = UINT16_MAX;

    t16 = (x69+(x70*(x71!=x72)));

    if (t16 != 86148808) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = INT8_MIN;
	int64_t t17 = 0LL;

    t17 = (x73+(x74*(x75!=x76)));

    if (t17 != 254LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -1;
	int64_t x78 = INT64_MAX;
	uint16_t x80 = UINT16_MAX;

    t18 = (x77+(x78*(x79!=x80)));

    if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MAX;
	int16_t x84 = 193;
	volatile int32_t t19 = 27691;

    t19 = (x81+(x82*(x83!=x84)));

    if (t19 != 42095) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 2446550302045741103LLU;
	int8_t x86 = INT8_MIN;
	int64_t x87 = -1LL;
	volatile uint8_t x88 = 21U;
	static uint64_t t20 = 2794962775LLU;

    t20 = (x85+(x86*(x87!=x88)));

    if (t20 != 2446550302045740975LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = 30U;
	uint64_t x92 = UINT64_MAX;
	int64_t t21 = 1419365885862821LL;

    t21 = (x89+(x90*(x91!=x92)));

    if (t21 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = -7571087906464251LL;
	volatile int8_t x95 = 1;
	int64_t x96 = INT64_MAX;
	volatile int64_t t22 = -2869090398889410LL;

    t22 = (x93+(x94*(x95!=x96)));

    if (t22 != -7571090053947899LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = UINT32_MAX;
	volatile uint16_t x98 = 6298U;
	static int8_t x99 = 4;
	int8_t x100 = INT8_MIN;
	static uint32_t t23 = 1654905223U;

    t23 = (x97+(x98*(x99!=x100)));

    if (t23 != 6297U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = INT64_MIN;
	uint64_t x102 = 498537188162762LLU;
	static int64_t x103 = 49LL;
	static uint8_t x104 = 13U;
	volatile uint64_t t24 = 221848321422LLU;

    t24 = (x101+(x102*(x103!=x104)));

    if (t24 != 9223870574042938570LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 1051904152LLU;
	volatile int64_t x106 = -1LL;
	int32_t x107 = INT32_MAX;
	uint32_t x108 = UINT32_MAX;
	uint64_t t25 = 2475356819495372LLU;

    t25 = (x105+(x106*(x107!=x108)));

    if (t25 != 1051904151LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x109 = -1;
	int8_t x110 = -1;
	int64_t x111 = -223197656LL;
	int64_t x112 = INT64_MIN;

    t26 = (x109+(x110*(x111!=x112)));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x114 = UINT32_MAX;
	static uint16_t x115 = 23U;
	int8_t x116 = -1;
	uint32_t t27 = 1009394382U;

    t27 = (x113+(x114*(x115!=x116)));

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = INT32_MIN;
	int32_t x118 = 1;
	uint8_t x119 = 7U;
	uint16_t x120 = 942U;

    t28 = (x117+(x118*(x119!=x120)));

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = 103;
	volatile uint16_t x123 = 0U;
	uint32_t x124 = 34243001U;

    t29 = (x121+(x122*(x123!=x124)));

    if (t29 != 358) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 778260423LLU;
	int32_t x127 = -1;
	volatile uint32_t x128 = UINT32_MAX;
	volatile uint64_t t30 = 771214042007597683LLU;

    t30 = (x125+(x126*(x127!=x128)));

    if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = 909;
	int64_t x130 = -1LL;
	int32_t x131 = 89;
	static uint8_t x132 = 4U;
	volatile int64_t t31 = -579803229160669297LL;

    t31 = (x129+(x130*(x131!=x132)));

    if (t31 != 908LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x136 = INT16_MIN;
	uint64_t t32 = 1879723LLU;

    t32 = (x133+(x134*(x135!=x136)));

    if (t32 != 21709780797830735LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x137 = 508LLU;
	int8_t x139 = INT8_MIN;
	static volatile uint64_t t33 = 88870754538249LLU;

    t33 = (x137+(x138*(x139!=x140)));

    if (t33 != 18446744071562068476LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x142 = INT64_MIN;
	uint32_t x143 = 196U;
	int16_t x144 = INT16_MIN;
	int64_t t34 = -1893703LL;

    t34 = (x141+(x142*(x143!=x144)));

    if (t34 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x145 = 7U;
	int8_t x146 = 2;
	int64_t x147 = INT64_MAX;
	int16_t x148 = -1;
	volatile int32_t t35 = -377380519;

    t35 = (x145+(x146*(x147!=x148)));

    if (t35 != 9) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MAX;
	int64_t x154 = 333518487LL;
	volatile int8_t x155 = 0;
	int8_t x156 = 1;
	volatile int64_t t36 = -1264LL;

    t36 = (x153+(x154*(x155!=x156)));

    if (t36 != 333551254LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x159 = UINT16_MAX;
	static int64_t x160 = INT64_MAX;
	static uint64_t t37 = 118995088676523LLU;

    t37 = (x157+(x158*(x159!=x160)));

    if (t37 != 454644LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = INT8_MAX;
	volatile int8_t x162 = -2;
	static uint8_t x163 = UINT8_MAX;
	volatile int32_t t38 = -19;

    t38 = (x161+(x162*(x163!=x164)));

    if (t38 != 125) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = -1;
	int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	static int16_t x168 = 131;
	static volatile int64_t t39 = 3551563838380242358LL;

    t39 = (x165+(x166*(x167!=x168)));

    if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x169 = INT16_MAX;
	uint32_t x170 = 14157991U;
	int8_t x171 = INT8_MIN;
	static int64_t x172 = INT64_MAX;
	static uint32_t t40 = 119647U;

    t40 = (x169+(x170*(x171!=x172)));

    if (t40 != 14190758U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x173 = 33U;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = 18U;
	uint16_t x176 = 81U;
	uint32_t t41 = 42U;

    t41 = (x173+(x174*(x175!=x176)));

    if (t41 != 160U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x181 = -2;
	int64_t x183 = -1LL;
	int32_t x184 = INT32_MIN;
	static volatile int64_t t42 = 7567077LL;

    t42 = (x181+(x182*(x183!=x184)));

    if (t42 != -3LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x185 = INT16_MAX;
	int64_t x187 = 317154614942558LL;
	volatile int32_t t43 = 1;

    t43 = (x185+(x186*(x187!=x188)));

    if (t43 != 32676) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 0U;
	static uint32_t x196 = 8751U;
	volatile int32_t t44 = -2309709;

    t44 = (x193+(x194*(x195!=x196)));

    if (t44 != -129) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = -1;
	int32_t x207 = -1;
	uint64_t x208 = 34419LLU;
	static uint64_t t45 = 781054533994333430LLU;

    t45 = (x205+(x206*(x207!=x208)));

    if (t45 != 303087343427652280LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x210 = UINT8_MAX;
	volatile int64_t x211 = 14027902106493LL;
	volatile int16_t x212 = INT16_MIN;

    t46 = (x209+(x210*(x211!=x212)));

    if (t46 != 215243309476LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = 345;
	static int8_t x214 = -1;
	int16_t x215 = INT16_MAX;
	static int32_t t47 = -5;

    t47 = (x213+(x214*(x215!=x216)));

    if (t47 != 344) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = -1;
	int64_t x218 = -1LL;
	int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	volatile int64_t t48 = 30039524893292LL;

    t48 = (x217+(x218*(x219!=x220)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = 45;
	int32_t x222 = -56668;
	static uint32_t x224 = 234678935U;
	static int32_t t49 = 3353;

    t49 = (x221+(x222*(x223!=x224)));

    if (t49 != -56623) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = -1;
	volatile uint16_t x226 = 3U;
	uint32_t x227 = 105299U;
	int32_t x228 = 167;
	volatile int32_t t50 = -11896236;

    t50 = (x225+(x226*(x227!=x228)));

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = -2;
	int64_t x231 = INT64_MAX;
	int64_t x232 = 7463420LL;
	volatile uint32_t t51 = 944U;

    t51 = (x229+(x230*(x231!=x232)));

    if (t51 != 660626U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x233 = -1;
	volatile int16_t x234 = -1;
	int64_t x235 = -281234124121258171LL;
	int64_t x236 = INT64_MAX;
	volatile int32_t t52 = -3642089;

    t52 = (x233+(x234*(x235!=x236)));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 35U;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = -123LL;
	volatile uint64_t t53 = 2043182843LLU;

    t53 = (x237+(x238*(x239!=x240)));

    if (t53 != 786245279LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x242 = -158372771;
	int8_t x243 = INT8_MAX;
	volatile uint64_t t54 = 31697941915437580LLU;

    t54 = (x241+(x242*(x243!=x244)));

    if (t54 != 18446744073551178844LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = 52395273LLU;
	static volatile uint64_t t55 = 1495831835LLU;

    t55 = (x245+(x246*(x247!=x248)));

    if (t55 != 9223372036907171081LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = 1;
	int64_t x251 = INT64_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t56 = -219;

    t56 = (x249+(x250*(x251!=x252)));

    if (t56 != 172633) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MAX;
	uint16_t x256 = 166U;
	volatile int64_t t57 = -4917911714864433LL;

    t57 = (x253+(x254*(x255!=x256)));

    if (t57 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = -1;
	int64_t x259 = 949331223810331101LL;
	uint32_t x260 = 33U;
	volatile int32_t t58 = 654443101;

    t58 = (x257+(x258*(x259!=x260)));

    if (t58 != 1929) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x261 = -1;
	static uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;
	uint64_t t59 = 851148802LLU;

    t59 = (x261+(x262*(x263!=x264)));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MAX;
	static int16_t x267 = INT16_MAX;
	static uint64_t x268 = UINT64_MAX;
	static int64_t t60 = 1LL;

    t60 = (x265+(x266*(x267!=x268)));

    if (t60 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x269 = 13713660879795LLU;
	static int32_t x270 = INT32_MIN;
	int16_t x271 = -1;
	int8_t x272 = INT8_MIN;
	uint64_t t61 = 978578536674194292LLU;

    t61 = (x269+(x270*(x271!=x272)));

    if (t61 != 13711513396147LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x273 = 3U;
	static volatile int32_t x274 = -2785910;
	int64_t x275 = -435373LL;
	int32_t x276 = INT32_MIN;
	static int32_t t62 = 14;

    t62 = (x273+(x274*(x275!=x276)));

    if (t62 != -2785907) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x277 = 161010314;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	volatile int32_t t63 = -30732;

    t63 = (x277+(x278*(x279!=x280)));

    if (t63 != 161010314) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x281 = 6U;
	int8_t x282 = 0;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;
	volatile uint32_t t64 = 11158366U;

    t64 = (x281+(x282*(x283!=x284)));

    if (t64 != 6U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x285 = 1313LLU;
	uint8_t x286 = 61U;
	int8_t x287 = -1;
	int16_t x288 = INT16_MAX;
	static uint64_t t65 = 1220580017028108404LLU;

    t65 = (x285+(x286*(x287!=x288)));

    if (t65 != 1374LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x292 = -1;
	uint32_t t66 = 3526693U;

    t66 = (x289+(x290*(x291!=x292)));

    if (t66 != 170U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x293 = 138U;
	int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MIN;
	static uint64_t x296 = 4453LLU;
	static uint32_t t67 = 2853792U;

    t67 = (x293+(x294*(x295!=x296)));

    if (t67 != 32905U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x297 = UINT16_MAX;
	int32_t x298 = INT32_MIN;
	static volatile int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t68 = 1;

    t68 = (x297+(x298*(x299!=x300)));

    if (t68 != -2147418113) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x301 = -3;
	static uint64_t x302 = 71933952262733547LLU;
	int16_t x303 = -1;
	uint8_t x304 = 4U;
	volatile uint64_t t69 = 286649797178LLU;

    t69 = (x301+(x302*(x303!=x304)));

    if (t69 != 71933952262733544LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x305 = 21U;
	uint8_t x307 = 6U;
	int8_t x308 = 13;

    t70 = (x305+(x306*(x307!=x308)));

    if (t70 != 32788) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x309 = -25;
	static volatile int64_t x310 = 197328242LL;
	int32_t x312 = -28523406;
	volatile int64_t t71 = 1LL;

    t71 = (x309+(x310*(x311!=x312)));

    if (t71 != 197328217LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x313 = 5109;
	uint32_t x314 = 63951U;
	volatile uint32_t x315 = 13027U;
	static int8_t x316 = INT8_MIN;
	volatile uint32_t t72 = 2387475U;

    t72 = (x313+(x314*(x315!=x316)));

    if (t72 != 69060U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x318 = INT32_MAX;
	static volatile int32_t t73 = 129723014;

    t73 = (x317+(x318*(x319!=x320)));

    if (t73 != 2147483646) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x321 = INT8_MAX;
	uint8_t x322 = 35U;
	static int32_t x324 = -248411927;

    t74 = (x321+(x322*(x323!=x324)));

    if (t74 != 162) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	static volatile int32_t x328 = INT32_MAX;
	int64_t t75 = 42061569LL;

    t75 = (x325+(x326*(x327!=x328)));

    if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x330 = 4039U;
	static uint16_t x332 = 432U;

    t76 = (x329+(x330*(x331!=x332)));

    if (t76 != 4038U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MAX;

    t77 = (x333+(x334*(x335!=x336)));

    if (t77 != 57277811U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x338 = -1046LL;
	volatile int16_t x339 = -3932;
	int32_t x340 = INT32_MIN;
	int64_t t78 = -2126LL;

    t78 = (x337+(x338*(x339!=x340)));

    if (t78 != 4294966249LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = 1;
	volatile uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1LL;
	static int64_t t79 = 1983211666LL;

    t79 = (x341+(x342*(x343!=x344)));

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x350 = INT64_MAX;
	int32_t x351 = -1;
	int64_t x352 = 224947420994LL;

    t80 = (x349+(x350*(x351!=x352)));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x353 = 8U;
	static int8_t x355 = INT8_MIN;

    t81 = (x353+(x354*(x355!=x356)));

    if (t81 != 51803867U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x357 = 102U;
	uint16_t x358 = UINT16_MAX;
	volatile uint16_t x359 = 257U;
	static int32_t x360 = 4140461;
	volatile int32_t t82 = -32550536;

    t82 = (x357+(x358*(x359!=x360)));

    if (t82 != 65637) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x362 = 16071U;
	volatile int64_t x363 = INT64_MIN;
	uint16_t x364 = 1U;
	int32_t t83 = 168226;

    t83 = (x361+(x362*(x363!=x364)));

    if (t83 != 15943) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x365 = -1LL;
	int16_t x367 = -1;
	uint8_t x368 = 7U;
	volatile int64_t t84 = 29905382186715846LL;

    t84 = (x365+(x366*(x367!=x368)));

    if (t84 != -129LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x369 = 0LL;
	static int32_t x370 = -15255;
	volatile uint64_t x371 = 10024653082LLU;
	uint16_t x372 = UINT16_MAX;
	int64_t t85 = -15193627824205678LL;

    t85 = (x369+(x370*(x371!=x372)));

    if (t85 != -15255LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x374 = UINT32_MAX;
	uint64_t x375 = UINT64_MAX;
	volatile uint16_t x376 = 0U;
	int64_t t86 = -501230245867267LL;

    t86 = (x373+(x374*(x375!=x376)));

    if (t86 != 4297249469LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x379 = 27;
	static volatile int8_t x380 = 0;

    t87 = (x377+(x378*(x379!=x380)));

    if (t87 != -6809) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x381 = INT16_MAX;
	static uint8_t x382 = UINT8_MAX;
	volatile int32_t x384 = 7;
	volatile int32_t t88 = -2066623;

    t88 = (x381+(x382*(x383!=x384)));

    if (t88 != 33022) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x386 = -14878430992428245LL;
	int32_t x387 = INT32_MAX;
	uint32_t x388 = 4U;

    t89 = (x385+(x386*(x387!=x388)));

    if (t89 != 18431865642717123370LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x390 = INT64_MIN;
	static uint64_t x391 = 12236141765LLU;
	int16_t x392 = -1;
	int64_t t90 = 184467LL;

    t90 = (x389+(x390*(x391!=x392)));

    if (t90 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint32_t x401 = 1U;
	static volatile int64_t x402 = INT64_MIN;
	uint16_t x403 = 941U;
	int32_t x404 = -16077491;
	int64_t t91 = 590011322LL;

    t91 = (x401+(x402*(x403!=x404)));

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x405 = 0U;
	int32_t x406 = INT32_MIN;
	uint16_t x407 = UINT16_MAX;

    t92 = (x405+(x406*(x407!=x408)));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x418 = -1;
	static int32_t x419 = INT32_MAX;
	static int64_t x420 = -1LL;
	volatile int32_t t93 = -13;

    t93 = (x417+(x418*(x419!=x420)));

    if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x421 = INT16_MIN;
	uint64_t x422 = 17536193027372LLU;
	uint64_t x423 = 2448319788058363432LLU;
	uint16_t x424 = 6U;
	volatile uint64_t t94 = 126280514439171611LLU;

    t94 = (x421+(x422*(x423!=x424)));

    if (t94 != 17536192994604LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x426 = 83U;
	int32_t x427 = INT32_MIN;
	static uint32_t x428 = 20U;
	volatile int32_t t95 = -68;

    t95 = (x425+(x426*(x427!=x428)));

    if (t95 != 82) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x430 = INT64_MIN;
	static uint64_t x431 = UINT64_MAX;
	int32_t x432 = 383338;
	volatile int64_t t96 = -11945197043240672LL;

    t96 = (x429+(x430*(x431!=x432)));

    if (t96 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x433 = INT64_MIN;
	uint16_t x434 = 52U;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = UINT32_MAX;
	static volatile int64_t t97 = 384LL;

    t97 = (x433+(x434*(x435!=x436)));

    if (t97 != -9223372036854775756LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x437 = 130668LLU;
	int64_t x438 = -1LL;
	static uint16_t x439 = UINT16_MAX;
	uint64_t t98 = 2471LLU;

    t98 = (x437+(x438*(x439!=x440)));

    if (t98 != 130667LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x442 = UINT32_MAX;
	int64_t x443 = -45LL;
	static volatile uint32_t t99 = 1289988U;

    t99 = (x441+(x442*(x443!=x444)));

    if (t99 != 4294967294U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x445 = -8;
	int8_t x446 = -1;
	int64_t x447 = INT64_MAX;
	volatile int32_t t100 = 68889777;

    t100 = (x445+(x446*(x447!=x448)));

    if (t100 != -9) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x453 = 99160956U;
	int64_t x455 = INT64_MIN;
	uint32_t x456 = 109678267U;
	uint32_t t101 = 235322U;

    t101 = (x453+(x454*(x455!=x456)));

    if (t101 != 99193723U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x458 = UINT32_MAX;
	int8_t x459 = INT8_MAX;
	static int32_t x460 = -1;

    t102 = (x457+(x458*(x459!=x460)));

    if (t102 != 4294967271U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x461 = INT8_MIN;
	static uint8_t x462 = 3U;
	int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	int32_t t103 = -1612204;

    t103 = (x461+(x462*(x463!=x464)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = -647027508075LL;
	volatile int8_t x470 = INT8_MIN;
	volatile int8_t x471 = INT8_MAX;
	int64_t x472 = INT64_MIN;
	static int64_t t104 = 0LL;

    t104 = (x469+(x470*(x471!=x472)));

    if (t104 != -647027508203LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x473 = -7238756;
	uint32_t x474 = UINT32_MAX;
	static int64_t x475 = -274807587074LL;
	int16_t x476 = INT16_MIN;
	volatile uint32_t t105 = 2U;

    t105 = (x473+(x474*(x475!=x476)));

    if (t105 != 4287728539U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x481 = 1012148;
	uint8_t x482 = 0U;
	uint16_t x484 = UINT16_MAX;
	static int32_t t106 = 87;

    t106 = (x481+(x482*(x483!=x484)));

    if (t106 != 1012148) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x486 = -9;
	uint32_t x487 = 0U;
	static int8_t x488 = -1;
	static volatile int32_t t107 = 2012373;

    t107 = (x485+(x486*(x487!=x488)));

    if (t107 != 32) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x489 = -1;
	volatile uint8_t x490 = 83U;
	int64_t x491 = INT64_MIN;
	uint16_t x492 = UINT16_MAX;
	int32_t t108 = -32866;

    t108 = (x489+(x490*(x491!=x492)));

    if (t108 != 82) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x493 = INT16_MAX;
	int32_t x494 = -226694751;
	volatile uint64_t x496 = 5383984939122LLU;
	int32_t t109 = 46273571;

    t109 = (x493+(x494*(x495!=x496)));

    if (t109 != -226661984) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x497 = UINT8_MAX;
	int32_t x499 = INT32_MIN;
	static int8_t x500 = INT8_MIN;
	int32_t t110 = 0;

    t110 = (x497+(x498*(x499!=x500)));

    if (t110 != 256) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x501 = INT8_MAX;
	uint64_t x502 = 8305215295199LLU;
	static uint32_t x503 = 216225341U;
	static volatile uint64_t t111 = 5799250418495LLU;

    t111 = (x501+(x502*(x503!=x504)));

    if (t111 != 8305215295326LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MAX;
	int32_t x508 = INT32_MIN;
	int64_t t112 = 182813190LL;

    t112 = (x505+(x506*(x507!=x508)));

    if (t112 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x509 = 29;
	uint8_t x510 = UINT8_MAX;
	volatile uint8_t x511 = UINT8_MAX;
	int32_t t113 = -56;

    t113 = (x509+(x510*(x511!=x512)));

    if (t113 != 284) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x514 = INT8_MIN;
	int32_t x516 = -1;
	uint32_t t114 = 10960540U;

    t114 = (x513+(x514*(x515!=x516)));

    if (t114 != 322179204U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = 0;
	int32_t x519 = -1;
	volatile uint8_t x520 = 5U;

    t115 = (x517+(x518*(x519!=x520)));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x521 = -1550511046LL;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = -1;
	int64_t t116 = -162510276LL;

    t116 = (x521+(x522*(x523!=x524)));

    if (t116 != 2744456249LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x526 = UINT32_MAX;
	int16_t x527 = INT16_MIN;
	static volatile int32_t x528 = INT32_MIN;
	static int64_t t117 = 90713860LL;

    t117 = (x525+(x526*(x527!=x528)));

    if (t117 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	int64_t x534 = 0LL;
	volatile uint8_t x535 = 26U;
	int16_t x536 = INT16_MAX;
	volatile int64_t t118 = 1LL;

    t118 = (x533+(x534*(x535!=x536)));

    if (t118 != 4294967295LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x537 = 3U;
	static uint16_t x538 = 550U;
	uint64_t x539 = 17015791041LLU;
	int8_t x540 = 0;
	int32_t t119 = 847;

    t119 = (x537+(x538*(x539!=x540)));

    if (t119 != 553) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x541 = -1;
	int32_t x542 = -1;
	int16_t x543 = 1;
	volatile int8_t x544 = INT8_MIN;
	int32_t t120 = -911150;

    t120 = (x541+(x542*(x543!=x544)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x545 = UINT32_MAX;
	int64_t x546 = -1LL;
	int16_t x548 = 330;
	volatile int64_t t121 = -93LL;

    t121 = (x545+(x546*(x547!=x548)));

    if (t121 != 4294967294LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x553 = -1677754598LL;
	int16_t x554 = INT16_MIN;
	int32_t x555 = -629;
	volatile int64_t t122 = -6847303661LL;

    t122 = (x553+(x554*(x555!=x556)));

    if (t122 != -1677787366LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x558 = INT8_MIN;
	static int16_t x559 = INT16_MIN;
	static int8_t x560 = -1;
	uint32_t t123 = 32441U;

    t123 = (x557+(x558*(x559!=x560)));

    if (t123 != 4294967167U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x561 = 1LLU;
	volatile uint32_t x562 = 1U;
	int64_t x563 = INT64_MIN;
	static volatile int16_t x564 = -739;
	uint64_t t124 = 156904218729206LLU;

    t124 = (x561+(x562*(x563!=x564)));

    if (t124 != 2LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x565 = INT32_MIN;
	uint32_t x566 = 226U;
	static int16_t x567 = -842;

    t125 = (x565+(x566*(x567!=x568)));

    if (t125 != 2147483874U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x569 = 1109492322LLU;
	volatile uint64_t x570 = 113029536646914723LLU;
	uint64_t t126 = 1463561LLU;

    t126 = (x569+(x570*(x571!=x572)));

    if (t126 != 113029537756407045LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x573 = INT32_MIN;
	uint64_t x575 = 3515644178066281395LLU;
	uint8_t x576 = UINT8_MAX;
	volatile uint64_t t127 = 8922461LLU;

    t127 = (x573+(x574*(x575!=x576)));

    if (t127 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x577 = 4;
	volatile uint64_t x578 = 1126606LLU;
	static volatile int32_t x579 = 23;
	volatile uint32_t x580 = 71U;

    t128 = (x577+(x578*(x579!=x580)));

    if (t128 != 1126610LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x581 = -220463786170LL;
	volatile int8_t x582 = INT8_MIN;
	int32_t x583 = INT32_MIN;
	uint32_t x584 = UINT32_MAX;
	static volatile int64_t t129 = 282008836381536LL;

    t129 = (x581+(x582*(x583!=x584)));

    if (t129 != -220463786298LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x585 = -27;
	uint64_t x587 = UINT64_MAX;
	uint32_t x588 = 1004U;

    t130 = (x585+(x586*(x587!=x588)));

    if (t130 != -32795) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x589 = -1;
	int64_t x590 = -1LL;
	int32_t x591 = -121025;
	static int8_t x592 = 42;
	volatile int64_t t131 = 79LL;

    t131 = (x589+(x590*(x591!=x592)));

    if (t131 != -2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = 3488;
	int16_t x598 = INT16_MIN;
	static int16_t x599 = -1;
	static uint64_t x600 = 1834519047510LLU;
	volatile int32_t t132 = 35969550;

    t132 = (x597+(x598*(x599!=x600)));

    if (t132 != -29280) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x604 = 11644382;
	volatile int32_t t133 = -59191144;

    t133 = (x601+(x602*(x603!=x604)));

    if (t133 != 65407) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = -30;
	int16_t x608 = 16;
	volatile int32_t t134 = -297386;

    t134 = (x605+(x606*(x607!=x608)));

    if (t134 != -32798) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile uint16_t x611 = 409U;
	volatile uint16_t x612 = 0U;
	volatile int32_t t135 = -3;

    t135 = (x609+(x610*(x611!=x612)));

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = -1;
	volatile uint8_t x615 = 1U;

    t136 = (x613+(x614*(x615!=x616)));

    if (t136 != -129) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x617 = -1;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = UINT64_MAX;
	int64_t x620 = -994LL;

    t137 = (x617+(x618*(x619!=x620)));

    if (t137 != -129) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x625 = 1U;
	static int16_t x626 = -1;
	int64_t x627 = 247684051799296LL;
	uint32_t x628 = 231645387U;
	volatile int32_t t138 = -10206345;

    t138 = (x625+(x626*(x627!=x628)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x631 = -1;
	volatile int16_t x632 = INT16_MIN;
	int32_t t139 = 7198;

    t139 = (x629+(x630*(x631!=x632)));

    if (t139 != -32896) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x634 = 26050692LL;
	int32_t x635 = INT32_MAX;
	int64_t x636 = INT64_MIN;
	int64_t t140 = 442233022542LL;

    t140 = (x633+(x634*(x635!=x636)));

    if (t140 != 26050692LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x637 = -1;
	volatile int16_t x638 = 32;
	volatile int32_t t141 = -46356;

    t141 = (x637+(x638*(x639!=x640)));

    if (t141 != 31) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x641 = -31;
	uint16_t x642 = 163U;
	int16_t x643 = -487;
	volatile int32_t x644 = INT32_MAX;
	volatile int32_t t142 = -15;

    t142 = (x641+(x642*(x643!=x644)));

    if (t142 != 132) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x645 = 1819771654U;
	uint8_t x647 = 1U;
	int32_t x648 = -4;
	volatile uint64_t t143 = 82084825771848249LLU;

    t143 = (x645+(x646*(x647!=x648)));

    if (t143 != 2059928720LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x649 = 309;
	int64_t x650 = -1039405240LL;
	uint32_t x651 = UINT32_MAX;
	volatile uint32_t x652 = 542752497U;
	int64_t t144 = -230LL;

    t144 = (x649+(x650*(x651!=x652)));

    if (t144 != -1039404931LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x655 = 2;
	uint64_t x656 = 949264789785759638LLU;
	static volatile int32_t t145 = 8517945;

    t145 = (x653+(x654*(x655!=x656)));

    if (t145 != -32769) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x657 = UINT32_MAX;
	static int32_t x658 = INT32_MIN;
	uint8_t x659 = 97U;
	int64_t x660 = INT64_MIN;
	static volatile uint32_t t146 = 30444U;

    t146 = (x657+(x658*(x659!=x660)));

    if (t146 != 2147483647U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x661 = INT32_MIN;
	volatile uint32_t x662 = UINT32_MAX;
	volatile uint8_t x664 = UINT8_MAX;

    t147 = (x661+(x662*(x663!=x664)));

    if (t147 != 2147483647U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x668 = 10462820;
	static uint32_t t148 = 160U;

    t148 = (x665+(x666*(x667!=x668)));

    if (t148 != 126U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x669 = UINT64_MAX;
	static int32_t x670 = -1312;
	int16_t x671 = INT16_MAX;
	int8_t x672 = 1;

    t149 = (x669+(x670*(x671!=x672)));

    if (t149 != 18446744073709550303LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x675 = 1824;
	uint32_t x676 = UINT32_MAX;
	volatile uint64_t t150 = 239863838LLU;

    t150 = (x673+(x674*(x675!=x676)));

    if (t150 != 1929348615LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x677 = INT64_MIN;
	int64_t x678 = 0LL;
	int16_t x679 = -20;
	static int64_t x680 = INT64_MIN;
	volatile int64_t t151 = INT64_MIN;

    t151 = (x677+(x678*(x679!=x680)));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x685 = INT8_MAX;
	volatile uint32_t x687 = 5U;
	volatile int64_t x688 = 8142LL;

    t152 = (x685+(x686*(x687!=x688)));

    if (t152 != 65662) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x689 = INT8_MIN;
	int64_t x691 = INT64_MIN;
	uint32_t x692 = 1597373425U;
	static int64_t t153 = 38717711LL;

    t153 = (x689+(x690*(x691!=x692)));

    if (t153 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x693 = -1;
	volatile int32_t x694 = -1;
	int16_t x695 = INT16_MAX;
	int32_t x696 = -1;

    t154 = (x693+(x694*(x695!=x696)));

    if (t154 != -2) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x697 = INT8_MIN;
	static int16_t x698 = INT16_MIN;
	static volatile int32_t x699 = INT32_MAX;
	int8_t x700 = -1;
	int32_t t155 = 28283625;

    t155 = (x697+(x698*(x699!=x700)));

    if (t155 != -32896) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x701 = -60;
	static int16_t x702 = 264;
	static uint64_t x703 = 6995702620316LLU;
	volatile int32_t t156 = 8193092;

    t156 = (x701+(x702*(x703!=x704)));

    if (t156 != 204) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x705 = UINT64_MAX;
	int32_t x706 = -17415;
	uint8_t x707 = UINT8_MAX;
	uint64_t x708 = UINT64_MAX;
	static uint64_t t157 = 2721782994LLU;

    t157 = (x705+(x706*(x707!=x708)));

    if (t157 != 18446744073709534200LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x722 = INT64_MIN;
	volatile int16_t x723 = INT16_MAX;
	int16_t x724 = INT16_MIN;
	int64_t t158 = 2211500564468LL;

    t158 = (x721+(x722*(x723!=x724)));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x725 = UINT8_MAX;
	static uint64_t x726 = 121407923485034LLU;
	static int32_t x727 = -64344548;
	int8_t x728 = -3;
	static uint64_t t159 = 54242LLU;

    t159 = (x725+(x726*(x727!=x728)));

    if (t159 != 121407923485289LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x729 = 184608LLU;
	int32_t x730 = -184;
	int64_t x731 = -1LL;
	volatile int32_t x732 = INT32_MAX;

    t160 = (x729+(x730*(x731!=x732)));

    if (t160 != 184424LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x735 = INT16_MIN;
	int8_t x736 = -1;

    t161 = (x733+(x734*(x735!=x736)));

    if (t161 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x737 = 657934760LLU;
	volatile uint8_t x738 = 2U;
	volatile uint16_t x739 = 24005U;
	static uint64_t x740 = 4360622843429LLU;
	volatile uint64_t t162 = 171410418632962LLU;

    t162 = (x737+(x738*(x739!=x740)));

    if (t162 != 657934762LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x741 = INT16_MAX;
	static volatile uint16_t x742 = 0U;
	int16_t x743 = INT16_MIN;

    t163 = (x741+(x742*(x743!=x744)));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x745 = INT16_MIN;
	static volatile uint64_t t164 = 5902910685950478122LLU;

    t164 = (x745+(x746*(x747!=x748)));

    if (t164 != 1900276728245273281LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x753 = INT16_MIN;
	uint32_t x754 = 997120394U;
	volatile uint64_t x755 = 902080496077377984LLU;
	uint32_t t165 = 25548399U;

    t165 = (x753+(x754*(x755!=x756)));

    if (t165 != 997087626U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x757 = 100484U;
	volatile uint16_t x759 = UINT16_MAX;
	volatile uint8_t x760 = 14U;
	volatile uint32_t t166 = 19U;

    t166 = (x757+(x758*(x759!=x760)));

    if (t166 != 11502907U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x765 = 25U;
	static volatile uint8_t x766 = 13U;
	uint32_t x767 = UINT32_MAX;
	int32_t t167 = -235507;

    t167 = (x765+(x766*(x767!=x768)));

    if (t167 != 25) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x769 = 89U;
	int8_t x770 = -16;
	uint8_t x771 = UINT8_MAX;
	static int8_t x772 = 0;
	volatile uint32_t t168 = 426605U;

    t168 = (x769+(x770*(x771!=x772)));

    if (t168 != 73U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x773 = -46;
	int64_t x774 = INT64_MAX;
	int16_t x775 = 15464;
	volatile int8_t x776 = 6;
	static int64_t t169 = 26743106130LL;

    t169 = (x773+(x774*(x775!=x776)));

    if (t169 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x777 = INT8_MAX;
	int8_t x779 = 2;
	int8_t x780 = -1;
	static uint32_t t170 = 49364110U;

    t170 = (x777+(x778*(x779!=x780)));

    if (t170 != 126U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x781 = INT16_MAX;
	static volatile uint8_t x782 = 0U;
	volatile int16_t x784 = -468;
	int32_t t171 = -16;

    t171 = (x781+(x782*(x783!=x784)));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x789 = 8363575369LLU;
	uint16_t x791 = 5102U;
	uint8_t x792 = 40U;
	volatile uint64_t t172 = 823986LLU;

    t172 = (x789+(x790*(x791!=x792)));

    if (t172 != 8363575371LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x794 = 6057;
	int16_t x795 = INT16_MAX;
	int16_t x796 = INT16_MIN;

    t173 = (x793+(x794*(x795!=x796)));

    if (t173 != 71592) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x798 = INT64_MIN;
	int64_t x799 = INT64_MAX;
	int64_t x800 = -1LL;
	int64_t t174 = 49873376382034898LL;

    t174 = (x797+(x798*(x799!=x800)));

    if (t174 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t t175 = 96362295LL;

    t175 = (x801+(x802*(x803!=x804)));

    if (t175 != -92079116732420LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x805 = INT8_MIN;
	volatile uint64_t x806 = 3LLU;
	uint32_t x808 = UINT32_MAX;
	volatile uint64_t t176 = 8695450LLU;

    t176 = (x805+(x806*(x807!=x808)));

    if (t176 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x809 = 200112599U;
	static int8_t x810 = -1;
	static int64_t x811 = -219085437LL;
	volatile int64_t x812 = INT64_MIN;
	volatile uint32_t t177 = 6214U;

    t177 = (x809+(x810*(x811!=x812)));

    if (t177 != 200112598U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x817 = -10;
	uint8_t x818 = 113U;
	int32_t x819 = INT32_MIN;
	int8_t x820 = -1;
	volatile int32_t t178 = -1071403708;

    t178 = (x817+(x818*(x819!=x820)));

    if (t178 != 103) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x821 = 344U;
	int64_t x822 = INT64_MIN;
	int16_t x823 = -1;
	volatile uint64_t x824 = UINT64_MAX;
	int64_t t179 = -17606567269LL;

    t179 = (x821+(x822*(x823!=x824)));

    if (t179 != 344LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x826 = 63U;
	uint32_t x827 = 286U;
	int32_t t180 = -61622;

    t180 = (x825+(x826*(x827!=x828)));

    if (t180 != 216) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x829 = INT64_MIN;
	int16_t x831 = INT16_MIN;
	uint16_t x832 = UINT16_MAX;
	int64_t t181 = -922620058158268106LL;

    t181 = (x829+(x830*(x831!=x832)));

    if (t181 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x833 = INT16_MIN;
	uint32_t x835 = 0U;
	static volatile int16_t x836 = INT16_MAX;
	volatile int32_t t182 = 31;

    t182 = (x833+(x834*(x835!=x836)));

    if (t182 != -65536) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x837 = 1019U;
	int8_t x838 = -1;
	int64_t x839 = -1LL;
	static volatile uint32_t t183 = 327713945U;

    t183 = (x837+(x838*(x839!=x840)));

    if (t183 != 1018U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x841 = 172LL;
	static uint16_t x842 = 14361U;
	uint64_t x844 = UINT64_MAX;
	static volatile int64_t t184 = 1944515LL;

    t184 = (x841+(x842*(x843!=x844)));

    if (t184 != 14533LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x845 = 670884;
	static uint16_t x847 = 1022U;
	static uint32_t x848 = 271979U;

    t185 = (x845+(x846*(x847!=x848)));

    if (t185 != -519347792871LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x849 = INT64_MAX;
	volatile int16_t x850 = INT16_MIN;
	volatile uint16_t x852 = 6U;
	static int64_t t186 = -19059804955LL;

    t186 = (x849+(x850*(x851!=x852)));

    if (t186 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x855 = UINT16_MAX;
	int32_t x856 = -1;
	volatile uint32_t t187 = 40U;

    t187 = (x853+(x854*(x855!=x856)));

    if (t187 != 254U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x857 = 2110;
	uint64_t x858 = 12LLU;
	int16_t x860 = INT16_MIN;
	static volatile uint64_t t188 = 6473501280LLU;

    t188 = (x857+(x858*(x859!=x860)));

    if (t188 != 2122LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x861 = -1LL;
	static int64_t x862 = 7627931LL;
	int16_t x863 = INT16_MAX;
	uint16_t x864 = 28303U;
	int64_t t189 = 356492356763LL;

    t189 = (x861+(x862*(x863!=x864)));

    if (t189 != 7627930LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x865 = 7373316291939340507LLU;
	static volatile int16_t x866 = -6;
	int64_t x868 = -1LL;

    t190 = (x865+(x866*(x867!=x868)));

    if (t190 != 7373316291939340501LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x870 = UINT8_MAX;
	int32_t x871 = INT32_MIN;
	volatile int64_t t191 = 11699018LL;

    t191 = (x869+(x870*(x871!=x872)));

    if (t191 != 254LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x873 = INT32_MAX;
	static volatile int8_t x874 = -12;
	int8_t x876 = INT8_MAX;
	static int32_t t192 = -219318;

    t192 = (x873+(x874*(x875!=x876)));

    if (t192 != 2147483635) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x879 = 43U;
	static uint16_t x880 = 9U;
	volatile uint64_t t193 = 26085LLU;

    t193 = (x877+(x878*(x879!=x880)));

    if (t193 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x881 = 0U;
	uint64_t x882 = 2919676LLU;
	uint64_t x883 = 0LLU;
	int64_t x884 = INT64_MIN;
	volatile uint64_t t194 = 532248303746160LLU;

    t194 = (x881+(x882*(x883!=x884)));

    if (t194 != 2919676LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x885 = INT16_MAX;
	static volatile uint8_t x886 = 36U;
	int8_t x887 = INT8_MIN;
	volatile int16_t x888 = INT16_MAX;

    t195 = (x885+(x886*(x887!=x888)));

    if (t195 != 32803) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x889 = -6;
	static volatile int16_t x890 = INT16_MAX;

    t196 = (x889+(x890*(x891!=x892)));

    if (t196 != 32761) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x893 = 10967LLU;
	uint32_t x894 = 882U;
	int64_t x895 = -38500569034LL;
	static int8_t x896 = INT8_MIN;
	volatile uint64_t t197 = 154408356319501LLU;

    t197 = (x893+(x894*(x895!=x896)));

    if (t197 != 11849LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x898 = -1LL;
	uint16_t x900 = 3U;
	volatile uint64_t t198 = 4469652635LLU;

    t198 = (x897+(x898*(x899!=x900)));

    if (t198 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x901 = INT8_MIN;
	static int64_t x902 = -22411554465LL;
	int16_t x904 = INT16_MAX;
	int64_t t199 = -29654339LL;

    t199 = (x901+(x902*(x903!=x904)));

    if (t199 != -22411554593LL) { NG(); } else { ; }
	
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

