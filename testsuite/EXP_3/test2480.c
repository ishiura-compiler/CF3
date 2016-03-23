
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

static volatile int32_t x4 = -200614989;
static int64_t x9 = INT64_MIN;
static int64_t x10 = -1LL;
uint8_t x16 = 30U;
int16_t x21 = -1;
volatile int64_t t5 = -87877387071924406LL;
int32_t x33 = -1;
uint8_t x35 = UINT8_MAX;
volatile int32_t t9 = -15;
int8_t x42 = INT8_MIN;
volatile int8_t x43 = 1;
volatile int64_t t10 = 49781098456370449LL;
uint16_t x45 = 499U;
uint16_t x47 = 18U;
int64_t x52 = INT64_MIN;
int64_t t12 = 24089341472539LL;
int8_t x53 = 1;
static int16_t x55 = INT16_MAX;
int16_t x58 = INT16_MIN;
int32_t x63 = INT32_MAX;
volatile int32_t t15 = 534779042;
int32_t t17 = 1004972453;
int64_t x76 = INT64_MIN;
int32_t x77 = INT32_MIN;
int16_t x79 = -1;
volatile int32_t t19 = 17879;
static int16_t x87 = INT16_MIN;
static int16_t x89 = INT16_MAX;
int32_t x92 = -776135295;
volatile int32_t x98 = INT32_MIN;
int8_t x107 = 60;
int32_t x110 = INT32_MIN;
static int16_t x111 = 1157;
static int64_t x112 = INT64_MIN;
int64_t x113 = 2117492212904664LL;
int64_t x116 = INT64_MAX;
int64_t x117 = -58LL;
uint64_t x124 = 2301687427168LLU;
volatile int32_t t32 = 1553175;
int32_t x135 = INT32_MIN;
int16_t x143 = INT16_MIN;
int16_t x146 = INT16_MAX;
volatile int32_t x150 = INT32_MIN;
uint16_t x151 = 1495U;
uint64_t x162 = 100LLU;
int16_t x169 = INT16_MIN;
uint16_t x170 = UINT16_MAX;
static int32_t x173 = INT32_MIN;
int8_t x174 = INT8_MIN;
static uint16_t x175 = 570U;
int32_t x180 = 733;
static int8_t x181 = -1;
int8_t x189 = -1;
volatile int8_t x192 = -1;
int32_t x196 = INT32_MIN;
uint16_t x199 = 10U;
uint64_t x202 = 184145426593LLU;
uint64_t x204 = 32561LLU;
static int16_t x208 = INT16_MIN;
int8_t x209 = INT8_MIN;
int64_t x215 = INT64_MIN;
static int32_t x216 = INT32_MIN;
static uint32_t t54 = 202353624U;
int64_t x226 = -536599923223900129LL;
int64_t x232 = 13658LL;
volatile int32_t x235 = INT32_MAX;
int64_t t59 = -136524LL;
static volatile uint32_t t62 = 29951249U;
static int32_t x256 = INT32_MIN;
int16_t x261 = -13;
uint32_t t65 = 115U;
int32_t t66 = 64280364;
static int16_t x270 = 96;
uint8_t x273 = UINT8_MAX;
uint32_t x276 = 200116U;
static int64_t x290 = INT64_MIN;
int16_t x292 = INT16_MIN;
uint16_t x298 = 3751U;
static int64_t x304 = INT64_MIN;
int16_t x305 = 8025;
int64_t x313 = INT64_MIN;
static int32_t x314 = -1;
static volatile uint64_t t78 = 1077534617640289285LLU;
uint8_t x318 = UINT8_MAX;
int32_t t80 = -91141;
volatile int8_t x329 = -1;
uint64_t x330 = 6969218770312019LLU;
int64_t x335 = -1LL;
uint8_t x336 = 7U;
volatile int32_t t84 = 3987;
static volatile uint8_t x341 = 100U;
uint8_t x343 = 1U;
static int32_t x347 = INT32_MIN;
volatile int32_t t86 = 14045;
uint8_t x367 = 11U;
static int16_t x369 = 78;
static int32_t x372 = INT32_MAX;
int8_t x375 = INT8_MIN;
int32_t x376 = -1;
int16_t x377 = -55;
int32_t x388 = -1;
volatile int32_t t96 = 7;
static int16_t x389 = 12106;
uint8_t x400 = 2U;
uint64_t t103 = 962200LLU;
static int32_t x417 = INT32_MAX;
static uint16_t x418 = UINT16_MAX;
int32_t x420 = INT32_MIN;
static uint16_t x424 = UINT16_MAX;
int16_t x425 = INT16_MIN;
uint16_t x432 = 140U;
uint8_t x434 = UINT8_MAX;
volatile int64_t t109 = -395LL;
int8_t x441 = INT8_MIN;
uint32_t x446 = UINT32_MAX;
static int64_t t113 = 1459342541201770LL;
int32_t x462 = INT32_MIN;
static uint64_t x466 = 590LLU;
volatile int32_t t117 = -546014599;
int64_t x475 = 251089782LL;
int16_t x477 = INT16_MAX;
int8_t x481 = -15;
int16_t x486 = INT16_MIN;
uint64_t x489 = 9067031145416LLU;
static int16_t x504 = -1;
volatile int32_t t125 = 877076016;
int16_t x508 = INT16_MAX;
uint16_t x514 = 1U;
uint64_t t128 = 269944583LLU;
int32_t x521 = INT32_MIN;
int16_t x523 = INT16_MIN;
int32_t x524 = INT32_MAX;
int32_t t130 = 10;
int32_t x525 = INT32_MIN;
int8_t x529 = 5;
uint64_t x530 = 130373253174174977LLU;
int64_t x543 = 0LL;
uint64_t x546 = UINT64_MAX;
int16_t x552 = -1;
uint8_t x554 = 3U;
volatile uint64_t t138 = 23LLU;
volatile uint32_t x572 = 1001U;
static int8_t x577 = -1;
int16_t x580 = INT16_MAX;
int64_t x584 = INT64_MIN;
volatile int64_t t145 = -2391071LL;
uint64_t t149 = 64774588LLU;
int8_t x608 = INT8_MIN;
int32_t x611 = 621622;
uint32_t x621 = 21901190U;
uint8_t x623 = 0U;
volatile int32_t t154 = -183;
uint32_t x626 = 1542172U;
uint8_t x629 = UINT8_MAX;
volatile int32_t t156 = 1;
uint16_t x652 = 6U;
int64_t x661 = INT64_MIN;
int16_t x663 = -1;
volatile uint64_t t165 = 7557LLU;
int16_t x672 = INT16_MIN;
uint16_t x673 = 23U;
static int32_t x674 = INT32_MAX;
static int8_t x678 = INT8_MIN;
int64_t x679 = INT64_MAX;
static uint16_t x685 = 10330U;
int16_t x687 = INT16_MIN;
int64_t x688 = -218385639124938LL;
int64_t x689 = 2788LL;
int64_t x694 = -1LL;
int64_t x695 = INT64_MIN;
uint64_t x698 = 22351516LLU;
uint64_t x710 = 36LLU;
uint32_t x711 = 119657416U;
volatile int8_t x712 = INT8_MAX;
uint32_t t175 = 1871261191U;
uint8_t x718 = 12U;
volatile int16_t x722 = 8;
uint64_t x724 = UINT64_MAX;
static uint16_t x728 = 1699U;
int8_t x729 = INT8_MIN;
static volatile int64_t x732 = 0LL;
int16_t x738 = INT16_MIN;
static volatile int16_t x741 = -1;
static volatile int32_t x745 = -74;
volatile uint32_t t184 = 145442U;
int32_t x757 = -212;
int16_t x759 = INT16_MIN;
uint8_t x764 = UINT8_MAX;
int32_t x768 = 1;
int16_t x772 = INT16_MIN;
int64_t x774 = -1LL;
volatile uint8_t x778 = 15U;
uint64_t x783 = 15845LLU;
uint32_t x785 = 25U;
int8_t x789 = INT8_MIN;
volatile int64_t t195 = 34451339249674165LL;
int8_t x803 = INT8_MIN;
static volatile uint64_t x804 = UINT64_MAX;
static uint64_t x806 = 1322527842891709846LLU;


void f0(void) {
    	uint16_t x1 = 6295U;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	int32_t t0 = -525316;

    t0 = ((x1<=x2)-(x3|x4));

    if (t0 != 77) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 507364U;
	uint32_t x6 = 1U;
	int16_t x7 = INT16_MAX;
	static int16_t x8 = -1;
	int32_t t1 = 901;

    t1 = ((x5<=x6)-(x7|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x11 = -1;
	uint16_t x12 = 0U;
	static volatile int32_t t2 = -1;

    t2 = ((x9<=x10)-(x11|x12));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = 4144161LL;
	static volatile uint32_t x14 = UINT32_MAX;
	static int16_t x15 = -1;
	volatile int32_t t3 = 498168888;

    t3 = ((x13<=x14)-(x15|x16));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 722U;
	uint32_t x18 = 0U;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 7;

    t4 = ((x17<=x18)-(x19|x20));

    if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x22 = INT8_MIN;
	int64_t x23 = -1LL;
	static volatile int16_t x24 = INT16_MAX;

    t5 = ((x21<=x22)-(x23|x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 234444LLU;
	int32_t x26 = INT32_MIN;
	int64_t x27 = 0LL;
	int32_t x28 = -1;
	volatile int64_t t6 = -87247665LL;

    t6 = ((x25<=x26)-(x27|x28));

    if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 309248836199402235LL;
	static volatile int32_t x30 = INT32_MIN;
	volatile int8_t x31 = -1;
	int8_t x32 = -1;
	static volatile int32_t t7 = 9;

    t7 = ((x29<=x30)-(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = INT16_MIN;
	uint16_t x36 = 14050U;
	volatile int32_t t8 = -188988817;

    t8 = ((x33<=x34)-(x35|x36));

    if (t8 != -14079) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	static int64_t x38 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	static int8_t x40 = INT8_MAX;

    t9 = ((x37<=x38)-(x39|x40));

    if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 23U;
	int64_t x44 = 238LL;

    t10 = ((x41<=x42)-(x43|x44));

    if (t10 != -239LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = 115856LL;
	uint16_t x48 = 1319U;
	volatile int32_t t11 = -331619340;

    t11 = ((x45<=x46)-(x47|x48));

    if (t11 != -1334) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MAX;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = INT32_MAX;

    t12 = ((x49<=x50)-(x51|x52));

    if (t12 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = -1;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -1139515;

    t13 = ((x53<=x54)-(x55|x56));

    if (t13 != 2147450881) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -16755600902184932LL;
	int32_t x59 = -1;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 0;

    t14 = ((x57<=x58)-(x59|x60));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = 15274180;
	static int32_t x64 = -1;

    t15 = ((x61<=x62)-(x63|x64));

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 128442184571LLU;
	volatile uint32_t x66 = 0U;
	volatile int32_t x67 = INT32_MIN;
	uint16_t x68 = 14029U;
	int32_t t16 = 8849;

    t16 = ((x65<=x66)-(x67|x68));

    if (t16 != 2147469619) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 14U;
	int32_t x71 = INT32_MIN;
	volatile uint8_t x72 = UINT8_MAX;

    t17 = ((x69<=x70)-(x71|x72));

    if (t17 != 2147483393) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 0;
	int16_t x74 = -77;
	int16_t x75 = 13;
	int64_t t18 = -196486LL;

    t18 = ((x73<=x74)-(x75|x76));

    if (t18 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	static int8_t x80 = -1;

    t19 = ((x77<=x78)-(x79|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MAX;
	uint32_t x82 = 138U;
	uint16_t x83 = UINT16_MAX;
	static uint8_t x84 = UINT8_MAX;
	int32_t t20 = -10413;

    t20 = ((x81<=x82)-(x83|x84));

    if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 1750304LLU;
	int32_t x86 = INT32_MAX;
	int64_t x88 = INT64_MAX;
	volatile int64_t t21 = -2101652LL;

    t21 = ((x85<=x86)-(x87|x88));

    if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x90 = 2U;
	volatile uint16_t x91 = 14172U;
	volatile int32_t t22 = -71876865;

    t22 = ((x89<=x90)-(x91|x92));

    if (t22 != 776126499) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 331U;
	int8_t x94 = INT8_MAX;
	static volatile int32_t x95 = INT32_MIN;
	uint8_t x96 = 1U;
	volatile int32_t t23 = INT32_MAX;

    t23 = ((x93<=x94)-(x95|x96));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	static int16_t x100 = INT16_MAX;
	volatile uint64_t t24 = 973969LLU;

    t24 = ((x97<=x98)-(x99|x100));

    if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = INT8_MIN;
	int32_t x102 = -6;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 43634875U;
	uint32_t t25 = 80U;

    t25 = ((x101<=x102)-(x103|x104));

    if (t25 != 4251332354U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 1U;
	static int64_t x106 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -798;

    t26 = ((x105<=x106)-(x107|x108));

    if (t26 != 32708) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 669495632;
	int64_t t27 = 208187541332765LL;

    t27 = ((x109<=x110)-(x111|x112));

    if (t27 != 9223372036854774651LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x114 = 1717103LLU;
	int64_t x115 = INT64_MAX;
	int64_t t28 = 64938028196126988LL;

    t28 = ((x113<=x114)-(x115|x116));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x118 = INT64_MIN;
	int64_t x119 = 13134228383LL;
	uint64_t x120 = UINT64_MAX;
	uint64_t t29 = 2262LLU;

    t29 = ((x117<=x118)-(x119|x120));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x121 = 1;
	int16_t x122 = -2;
	static uint16_t x123 = 1U;
	volatile uint64_t t30 = 11036LLU;

    t30 = ((x121<=x122)-(x123|x124));

    if (t30 != 18446741772022124447LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 3754739227921238LLU;
	int32_t x126 = 165;
	uint64_t x127 = 419412664928071LLU;
	int32_t x128 = INT32_MIN;
	static volatile uint64_t t31 = 56220462687LLU;

    t31 = ((x125<=x126)-(x127|x128));

    if (t31 != 1628944569LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	volatile int32_t x130 = INT32_MIN;
	int16_t x131 = -1;
	uint8_t x132 = 1U;

    t32 = ((x129<=x130)-(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	int16_t x134 = -1;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 813;

    t33 = ((x133<=x134)-(x135|x136));

    if (t33 != 129) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -1;
	int8_t x138 = 15;
	static volatile int64_t x139 = -29542409438903921LL;
	uint16_t x140 = 31U;
	static int64_t t34 = 1LL;

    t34 = ((x137<=x138)-(x139|x140));

    if (t34 != 29542409438903906LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 17;
	volatile int16_t x142 = -2;
	uint32_t x144 = UINT32_MAX;
	uint32_t t35 = 405203U;

    t35 = ((x141<=x142)-(x143|x144));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 1;
	uint32_t x147 = 383982533U;
	int8_t x148 = INT8_MIN;
	volatile uint32_t t36 = 31U;

    t36 = ((x145<=x146)-(x147|x148));

    if (t36 != 60U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	volatile int64_t x152 = INT64_MAX;
	int64_t t37 = -755606LL;

    t37 = ((x149<=x150)-(x151|x152));

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 45;
	int8_t x154 = INT8_MIN;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = 31005933LL;
	static int64_t t38 = -1203952147487867823LL;

    t38 = ((x153<=x154)-(x155|x156));

    if (t38 != -4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -35;
	int8_t x158 = -1;
	int16_t x159 = INT16_MIN;
	int8_t x160 = -1;
	static int32_t t39 = -128669;

    t39 = ((x157<=x158)-(x159|x160));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 24503640;
	uint8_t x163 = 20U;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -972234;

    t40 = ((x161<=x162)-(x163|x164));

    if (t40 != 32748) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	volatile uint64_t x166 = UINT64_MAX;
	static uint64_t x167 = 5038801132LLU;
	int16_t x168 = INT16_MIN;
	uint64_t t41 = 2LLU;

    t41 = ((x165<=x166)-(x167|x168));

    if (t41 != 32533LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = INT8_MAX;
	volatile int32_t t42 = -1355;

    t42 = ((x169<=x170)-(x171|x172));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -132843501;

    t43 = ((x173<=x174)-(x175|x176));

    if (t43 != 32199) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = -3;
	int8_t x179 = INT8_MAX;
	volatile int32_t t44 = 0;

    t44 = ((x177<=x178)-(x179|x180));

    if (t44 != -767) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x182 = 13;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MAX;
	int64_t t45 = 541512931740LL;

    t45 = ((x181<=x182)-(x183|x184));

    if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MAX;
	static int64_t x187 = -2225491LL;
	static volatile int8_t x188 = INT8_MIN;
	static volatile int64_t t46 = -2150LL;

    t46 = ((x185<=x186)-(x187|x188));

    if (t46 != 84LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = -2913;
	int32_t x191 = -57;
	static volatile int32_t t47 = -16602911;

    t47 = ((x189<=x190)-(x191|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 242845610;
	int16_t x194 = INT16_MIN;
	int64_t x195 = 186596LL;
	int64_t t48 = 12LL;

    t48 = ((x193<=x194)-(x195|x196));

    if (t48 != 2147297052LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x197 = 248U;
	static int16_t x198 = INT16_MIN;
	uint32_t x200 = 0U;
	volatile uint32_t t49 = 70U;

    t49 = ((x197<=x198)-(x199|x200));

    if (t49 != 4294967286U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	static int32_t x203 = 8;
	uint64_t t50 = 1319LLU;

    t50 = ((x201<=x202)-(x203|x204));

    if (t50 != 18446744073709519048LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = UINT16_MAX;
	uint32_t x206 = 133249947U;
	int32_t x207 = INT32_MIN;
	int32_t t51 = 151;

    t51 = ((x205<=x206)-(x207|x208));

    if (t51 != 32769) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = UINT16_MAX;
	static int8_t x211 = -1;
	uint8_t x212 = 38U;
	static int32_t t52 = -1;

    t52 = ((x209<=x210)-(x211|x212));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint32_t x214 = 63381U;
	volatile int64_t t53 = -27172935781143950LL;

    t53 = ((x213<=x214)-(x215|x216));

    if (t53 != 2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = -1;
	uint32_t x219 = 11U;
	static volatile uint32_t x220 = UINT32_MAX;

    t54 = ((x217<=x218)-(x219|x220));

    if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 108326148U;
	int32_t x222 = -1;
	int16_t x223 = -242;
	uint8_t x224 = 43U;
	static volatile int32_t t55 = -161415;

    t55 = ((x221<=x222)-(x223|x224));

    if (t55 != 210) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MAX;
	volatile int64_t t56 = 385255LL;

    t56 = ((x225<=x226)-(x227|x228));

    if (t56 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	uint32_t x230 = 333U;
	volatile uint8_t x231 = 1U;
	int64_t t57 = -2060326038414472LL;

    t57 = ((x229<=x230)-(x231|x232));

    if (t57 != -13659LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = -1;
	static int8_t x236 = 2;
	volatile int32_t t58 = -6;

    t58 = ((x233<=x234)-(x235|x236));

    if (t58 != -2147483646) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = INT32_MAX;
	uint16_t x238 = UINT16_MAX;
	volatile int64_t x239 = -4260139249926LL;
	int16_t x240 = 200;

    t59 = ((x237<=x238)-(x239|x240));

    if (t59 != 4260139249926LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = 134;
	static int16_t x242 = -1;
	int32_t x243 = 21;
	uint16_t x244 = 61U;
	int32_t t60 = -660;

    t60 = ((x241<=x242)-(x243|x244));

    if (t60 != -61) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 7008U;
	volatile uint32_t x246 = 1U;
	uint64_t x247 = 442LLU;
	int32_t x248 = INT32_MIN;
	uint64_t t61 = 1077712973293308884LLU;

    t61 = ((x245<=x246)-(x247|x248));

    if (t61 != 2147483206LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x249 = INT32_MIN;
	volatile uint16_t x250 = 25U;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t x252 = INT32_MIN;

    t62 = ((x249<=x250)-(x251|x252));

    if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = 4959025864327LL;
	int32_t x254 = INT32_MAX;
	volatile int16_t x255 = 443;
	int32_t t63 = -55;

    t63 = ((x253<=x254)-(x255|x256));

    if (t63 != 2147483205) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 10909;
	volatile int8_t x258 = -1;
	int16_t x259 = INT16_MAX;
	int64_t x260 = INT64_MIN;
	int64_t t64 = -506167672LL;

    t64 = ((x257<=x258)-(x259|x260));

    if (t64 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x262 = 734350335U;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;

    t65 = ((x261<=x262)-(x263|x264));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	uint8_t x267 = 112U;
	int16_t x268 = INT16_MIN;

    t66 = ((x265<=x266)-(x267|x268));

    if (t66 != 32656) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = INT8_MIN;
	uint32_t t67 = 1905U;

    t67 = ((x269<=x270)-(x271|x272));

    if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = 46076U;
	int16_t x275 = INT16_MIN;
	static uint32_t t68 = 927922U;

    t68 = ((x273<=x274)-(x275|x276));

    if (t68 != 29261U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -1;
	volatile int16_t x278 = INT16_MIN;
	int16_t x279 = -593;
	int32_t x280 = -1;
	int32_t t69 = 102;

    t69 = ((x277<=x278)-(x279|x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -11106LL;
	int16_t x282 = INT16_MIN;
	static uint8_t x283 = 1U;
	int64_t x284 = -4819921651711810LL;
	int64_t t70 = 1848159LL;

    t70 = ((x281<=x282)-(x283|x284));

    if (t70 != 4819921651711809LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	static uint32_t x286 = 49304217U;
	int64_t x287 = -65097LL;
	volatile uint16_t x288 = 1617U;
	volatile int64_t t71 = -13556LL;

    t71 = ((x285<=x286)-(x287|x288));

    if (t71 != 63497LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x289 = 950042132;
	uint8_t x291 = 1U;
	int32_t t72 = -51851765;

    t72 = ((x289<=x290)-(x291|x292));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = 217296505884624LLU;
	volatile uint32_t x296 = 3704U;
	uint64_t t73 = 4971378081744LLU;

    t73 = ((x293<=x294)-(x295|x296));

    if (t73 != 18446526777203666952LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = UINT32_MAX;
	volatile int64_t x299 = 1474407LL;
	uint8_t x300 = UINT8_MAX;
	int64_t t74 = 54636LL;

    t74 = ((x297<=x298)-(x299|x300));

    if (t74 != -1474559LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = 3061671690LL;
	int32_t x302 = -802658468;
	uint32_t x303 = 91737U;
	volatile int64_t t75 = 362272355LL;

    t75 = ((x301<=x302)-(x303|x304));

    if (t75 != 9223372036854684071LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	uint64_t t76 = 374113LLU;

    t76 = ((x305<=x306)-(x307|x308));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -52948;
	uint8_t x310 = UINT8_MAX;
	uint32_t x311 = 592788036U;
	uint8_t x312 = 1U;
	uint32_t t77 = 0U;

    t77 = ((x309<=x310)-(x311|x312));

    if (t77 != 3702179260U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x315 = 19U;
	volatile uint64_t x316 = 23588194LLU;

    t78 = ((x313<=x314)-(x315|x316));

    if (t78 != 18446744073685963406LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1LL;
	static uint16_t x319 = 1U;
	static uint16_t x320 = UINT16_MAX;
	static volatile int32_t t79 = 11749253;

    t79 = ((x317<=x318)-(x319|x320));

    if (t79 != -65534) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = -927695LL;
	static uint32_t x322 = 120287196U;
	int32_t x323 = -5;
	int16_t x324 = -20;

    t80 = ((x321<=x322)-(x323|x324));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 138;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -2;
	uint16_t x328 = 13U;
	static int32_t t81 = -38;

    t81 = ((x325<=x326)-(x327|x328));

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x331 = UINT64_MAX;
	static uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t82 = 93539989LLU;

    t82 = ((x329<=x330)-(x331|x332));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = 31;
	volatile int8_t x334 = -2;
	static volatile int64_t t83 = -1LL;

    t83 = ((x333<=x334)-(x335|x336));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = INT8_MAX;
	volatile uint32_t x338 = 116609171U;
	int8_t x339 = INT8_MAX;
	int8_t x340 = -1;

    t84 = ((x337<=x338)-(x339|x340));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x342 = INT8_MIN;
	int64_t x344 = 15LL;
	int64_t t85 = -240428LL;

    t85 = ((x341<=x342)-(x343|x344));

    if (t85 != -15LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 26;
	volatile int16_t x346 = INT16_MIN;
	static volatile int16_t x348 = INT16_MIN;

    t86 = ((x345<=x346)-(x347|x348));

    if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x349 = 3;
	static volatile uint32_t x350 = 999252U;
	int8_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = -188473;

    t87 = ((x349<=x350)-(x351|x352));

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = 24824215636246LL;
	uint8_t x354 = 45U;
	static int32_t x355 = 0;
	volatile uint64_t x356 = 1643756455118895268LLU;
	volatile uint64_t t88 = 884905397LLU;

    t88 = ((x353<=x354)-(x355|x356));

    if (t88 != 16802987618590656348LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x357 = 4U;
	static int8_t x358 = INT8_MIN;
	static volatile int64_t x359 = 1140469LL;
	int16_t x360 = INT16_MAX;
	int64_t t89 = -422698326863378LL;

    t89 = ((x357<=x358)-(x359|x360));

    if (t89 != -1146879LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 2U;
	uint32_t x362 = 2750U;
	int32_t x363 = -1;
	int8_t x364 = -1;
	int32_t t90 = -127;

    t90 = ((x361<=x362)-(x363|x364));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	uint16_t x366 = 0U;
	int8_t x368 = -7;
	int32_t t91 = 395347795;

    t91 = ((x365<=x366)-(x367|x368));

    if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = -1;
	int16_t x371 = -1;
	volatile int32_t t92 = 384333698;

    t92 = ((x369<=x370)-(x371|x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = 3295U;
	int64_t x374 = -89645408LL;
	int32_t t93 = -1;

    t93 = ((x373<=x374)-(x375|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x378 = 1U;
	int8_t x379 = -1;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 881025;

    t94 = ((x377<=x378)-(x379|x380));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	int64_t x382 = -2051144LL;
	int64_t x383 = INT64_MIN;
	int32_t x384 = -1;
	volatile int64_t t95 = -409LL;

    t95 = ((x381<=x382)-(x383|x384));

    if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MIN;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MIN;

    t96 = ((x385<=x386)-(x387|x388));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = 113LLU;
	uint16_t x391 = 3080U;
	uint64_t x392 = 150795LLU;
	volatile uint64_t t97 = 51671LLU;

    t97 = ((x389<=x390)-(x391|x392));

    if (t97 != 18446744073709400821LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = INT16_MIN;
	int64_t x394 = 4250028574510901LL;
	int64_t x395 = INT64_MIN;
	volatile uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = 11677729991LL;

    t98 = ((x393<=x394)-(x395|x396));

    if (t98 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int64_t x398 = INT64_MIN;
	uint16_t x399 = 62U;
	int32_t t99 = -1260457;

    t99 = ((x397<=x398)-(x399|x400));

    if (t99 != -62) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 1426258U;
	int32_t x402 = INT32_MIN;
	int16_t x403 = -1;
	volatile int16_t x404 = INT16_MIN;
	int32_t t100 = 2;

    t100 = ((x401<=x402)-(x403|x404));

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 397584U;
	volatile int8_t x406 = -1;
	static uint64_t x407 = 39322214421547272LLU;
	int64_t x408 = INT64_MIN;
	volatile uint64_t t101 = 139056616618836LLU;

    t101 = ((x405<=x406)-(x407|x408));

    if (t101 != 9184049822433228537LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t102 = -188896017;

    t102 = ((x409<=x410)-(x411|x412));

    if (t102 != 129) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 539491478507911LLU;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	volatile uint64_t x416 = 284LLU;

    t103 = ((x413<=x414)-(x415|x416));

    if (t103 != 100LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x419 = UINT64_MAX;
	static uint64_t t104 = 0LLU;

    t104 = ((x417<=x418)-(x419|x420));

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 50U;
	uint32_t x422 = 1896171U;
	volatile int8_t x423 = INT8_MIN;
	int32_t t105 = -58133507;

    t105 = ((x421<=x422)-(x423|x424));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x426 = 0;
	int32_t x427 = -1;
	static int16_t x428 = INT16_MIN;
	int32_t t106 = 0;

    t106 = ((x425<=x426)-(x427|x428));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -172187LL;
	int16_t x430 = INT16_MIN;
	static int16_t x431 = INT16_MIN;
	int32_t t107 = -50091188;

    t107 = ((x429<=x430)-(x431|x432));

    if (t107 != 32629) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int8_t x435 = INT8_MIN;
	uint16_t x436 = 2U;
	volatile int32_t t108 = -158814996;

    t108 = ((x433<=x434)-(x435|x436));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = 7;
	int8_t x438 = INT8_MIN;
	int64_t x439 = -1LL;
	static int8_t x440 = 50;

    t109 = ((x437<=x438)-(x439|x440));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	static volatile int16_t x443 = 0;
	volatile int32_t x444 = -11315791;
	int32_t t110 = -79;

    t110 = ((x441<=x442)-(x443|x444));

    if (t110 != 11315791) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -207LL;
	int16_t x447 = -8;
	int16_t x448 = -4162;
	int32_t t111 = 70866;

    t111 = ((x445<=x446)-(x447|x448));

    if (t111 != 3) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 2;
	static uint32_t x450 = 9432U;
	static int64_t x451 = -1LL;
	int32_t x452 = -41663;
	int64_t t112 = 118384390LL;

    t112 = ((x449<=x450)-(x451|x452));

    if (t112 != 2LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MIN;
	int8_t x456 = INT8_MAX;

    t113 = ((x453<=x454)-(x455|x456));

    if (t113 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = -1;
	uint8_t x458 = UINT8_MAX;
	int32_t x459 = INT32_MIN;
	int32_t x460 = -57225950;
	volatile int32_t t114 = 0;

    t114 = ((x457<=x458)-(x459|x460));

    if (t114 != 57225951) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = 1860268007LL;
	volatile int16_t x463 = -18;
	int8_t x464 = INT8_MAX;
	int32_t t115 = 3050502;

    t115 = ((x461<=x462)-(x463|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	uint32_t x467 = UINT32_MAX;
	volatile int32_t x468 = 125;
	uint32_t t116 = 145U;

    t116 = ((x465<=x466)-(x467|x468));

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = -1;
	int32_t x470 = 0;
	int16_t x471 = INT16_MIN;
	static uint8_t x472 = UINT8_MAX;

    t117 = ((x469<=x470)-(x471|x472));

    if (t117 != 32514) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	static int16_t x474 = INT16_MAX;
	uint32_t x476 = 1721329138U;
	volatile int64_t t118 = 112LL;

    t118 = ((x473<=x474)-(x475|x476));

    if (t118 != -1862236149LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MIN;
	int32_t x479 = 1;
	int16_t x480 = -1774;
	int32_t t119 = -5903708;

    t119 = ((x477<=x478)-(x479|x480));

    if (t119 != 1773) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x482 = 122U;
	int8_t x483 = -31;
	volatile uint8_t x484 = UINT8_MAX;
	volatile int32_t t120 = 984890121;

    t120 = ((x481<=x482)-(x483|x484));

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MAX;
	int16_t x487 = 6375;
	uint64_t x488 = 7690202980994LLU;
	static uint64_t t121 = 678LLU;

    t121 = ((x485<=x486)-(x487|x488));

    if (t121 != 18446736383506564377LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = -1004260639359290LL;
	uint8_t x491 = 2U;
	int64_t x492 = INT64_MIN;
	static int64_t t122 = INT64_MAX;

    t122 = ((x489<=x490)-(x491|x492));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = -1544998;
	int64_t x494 = INT64_MAX;
	volatile int16_t x495 = INT16_MAX;
	int16_t x496 = -1;
	int32_t t123 = 74;

    t123 = ((x493<=x494)-(x495|x496));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	static uint32_t x498 = 4349113U;
	volatile int64_t x499 = -1LL;
	uint8_t x500 = UINT8_MAX;
	int64_t t124 = 3801757586344263181LL;

    t124 = ((x497<=x498)-(x499|x500));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int16_t x502 = -10;
	int16_t x503 = INT16_MIN;

    t125 = ((x501<=x502)-(x503|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MAX;
	uint8_t x506 = UINT8_MAX;
	uint32_t x507 = UINT32_MAX;
	static volatile uint32_t t126 = 733512833U;

    t126 = ((x505<=x506)-(x507|x508));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	uint64_t x510 = 3751461128542797782LLU;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = 3302553050117LLU;
	uint64_t t127 = 1140095710892988072LLU;

    t127 = ((x509<=x510)-(x511|x512));

    if (t127 != 9223368734301725691LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	volatile uint64_t x515 = 78LLU;
	static uint8_t x516 = 6U;

    t128 = ((x513<=x514)-(x515|x516));

    if (t128 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	uint16_t x518 = 4U;
	volatile int64_t x519 = INT64_MAX;
	uint8_t x520 = UINT8_MAX;
	static volatile int64_t t129 = -16393175LL;

    t129 = ((x517<=x518)-(x519|x520));

    if (t129 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x522 = 23;

    t130 = ((x521<=x522)-(x523|x524));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MIN;
	int64_t x527 = INT64_MIN;
	int16_t x528 = 4542;
	int64_t t131 = -132047739369958LL;

    t131 = ((x525<=x526)-(x527|x528));

    if (t131 != 9223372036854771266LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x531 = INT64_MAX;
	int8_t x532 = -1;
	static int64_t t132 = -716LL;

    t132 = ((x529<=x530)-(x531|x532));

    if (t132 != 2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	static volatile int8_t x534 = INT8_MIN;
	volatile int32_t x535 = INT32_MIN;
	uint16_t x536 = 902U;
	static int32_t t133 = -77870;

    t133 = ((x533<=x534)-(x535|x536));

    if (t133 != 2147482747) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = 1LL;
	volatile uint8_t x538 = UINT8_MAX;
	int64_t x539 = 14614238548614988LL;
	volatile int32_t x540 = INT32_MAX;
	static volatile int64_t t134 = 3098962415LL;

    t134 = ((x537<=x538)-(x539|x540));

    if (t134 != -14614240404963326LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -61;
	volatile uint32_t x542 = 3U;
	int16_t x544 = -20;
	volatile int64_t t135 = 3652266081LL;

    t135 = ((x541<=x542)-(x543|x544));

    if (t135 != 20LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -1;
	int64_t x547 = INT64_MIN;
	int8_t x548 = INT8_MIN;
	static int64_t t136 = 256748820490LL;

    t136 = ((x545<=x546)-(x547|x548));

    if (t136 != 129LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	static int8_t x550 = -1;
	int64_t x551 = -15767941147580401LL;
	int64_t t137 = -140688266924406LL;

    t137 = ((x549<=x550)-(x551|x552));

    if (t137 != 2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -1LL;
	uint64_t x555 = UINT64_MAX;
	uint8_t x556 = UINT8_MAX;

    t138 = ((x553<=x554)-(x555|x556));

    if (t138 != 2LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	uint16_t x558 = 242U;
	static volatile int8_t x559 = -2;
	int32_t x560 = 1;
	int32_t t139 = 4;

    t139 = ((x557<=x558)-(x559|x560));

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	static volatile uint32_t x562 = 68153771U;
	int16_t x563 = INT16_MAX;
	int8_t x564 = -1;
	int32_t t140 = -304;

    t140 = ((x561<=x562)-(x563|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = INT8_MAX;
	int16_t x566 = INT16_MAX;
	int64_t x567 = 1364648LL;
	int8_t x568 = 0;
	int64_t t141 = -418790170LL;

    t141 = ((x565<=x566)-(x567|x568));

    if (t141 != -1364647LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	uint8_t x570 = 2U;
	uint64_t x571 = 1133653880LLU;
	volatile uint64_t t142 = 759620010411LLU;

    t142 = ((x569<=x570)-(x571|x572));

    if (t142 != 18446744072575897608LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	uint32_t x574 = 14915265U;
	int32_t x575 = -1948;
	uint16_t x576 = 0U;
	volatile int32_t t143 = -829;

    t143 = ((x573<=x574)-(x575|x576));

    if (t143 != 1948) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x578 = UINT8_MAX;
	int64_t x579 = -1LL;
	int64_t t144 = -23437LL;

    t144 = ((x577<=x578)-(x579|x580));

    if (t144 != 2LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	int16_t x582 = INT16_MAX;
	int32_t x583 = INT32_MIN;

    t145 = ((x581<=x582)-(x583|x584));

    if (t145 != 2147483649LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = -1;
	volatile uint16_t x586 = 3U;
	uint32_t x587 = UINT32_MAX;
	int32_t x588 = -7;
	volatile uint32_t t146 = 187907832U;

    t146 = ((x585<=x586)-(x587|x588));

    if (t146 != 2U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x593 = 5170101646LL;
	uint32_t x594 = 1U;
	uint8_t x595 = 0U;
	static int16_t x596 = INT16_MAX;
	volatile int32_t t147 = -264117;

    t147 = ((x593<=x594)-(x595|x596));

    if (t147 != -32767) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x597 = 0U;
	uint8_t x598 = UINT8_MAX;
	volatile int8_t x599 = -1;
	volatile uint32_t x600 = 13667U;
	static uint32_t t148 = 501650U;

    t148 = ((x597<=x598)-(x599|x600));

    if (t148 != 2U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MIN;
	static uint64_t x603 = 49201115982721LLU;
	static int8_t x604 = INT8_MIN;

    t149 = ((x601<=x602)-(x603|x604));

    if (t149 != 128LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x605 = INT16_MIN;
	uint8_t x606 = UINT8_MAX;
	int32_t x607 = 185272;
	int32_t t150 = -199716;

    t150 = ((x605<=x606)-(x607|x608));

    if (t150 != 73) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x609 = UINT32_MAX;
	static int8_t x610 = INT8_MIN;
	int32_t x612 = -1;
	volatile int32_t t151 = 5610;

    t151 = ((x609<=x610)-(x611|x612));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x613 = -1LL;
	static int64_t x614 = 7359977414342LL;
	static int64_t x615 = INT64_MIN;
	int32_t x616 = 6735;
	volatile int64_t t152 = 15334455714258LL;

    t152 = ((x613<=x614)-(x615|x616));

    if (t152 != 9223372036854769074LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x617 = -1LL;
	uint8_t x618 = 1U;
	uint64_t x619 = 113756784LLU;
	int8_t x620 = INT8_MAX;
	static uint64_t t153 = 581926LLU;

    t153 = ((x617<=x618)-(x619|x620));

    if (t153 != 18446744073595794818LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x622 = UINT32_MAX;
	uint8_t x624 = UINT8_MAX;

    t154 = ((x621<=x622)-(x623|x624));

    if (t154 != -254) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x625 = 139;
	static volatile uint8_t x627 = UINT8_MAX;
	volatile int8_t x628 = INT8_MIN;
	int32_t t155 = -1;

    t155 = ((x625<=x626)-(x627|x628));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x630 = 19U;
	int16_t x631 = INT16_MIN;
	int32_t x632 = -7414;

    t156 = ((x629<=x630)-(x631|x632));

    if (t156 != 7414) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x633 = INT64_MAX;
	static int64_t x634 = INT64_MIN;
	volatile int64_t x635 = 1213446347163243759LL;
	int16_t x636 = INT16_MIN;
	volatile int64_t t157 = 1239319597LL;

    t157 = ((x633<=x634)-(x635|x636));

    if (t157 != 27409LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x637 = 26214049442484295LL;
	int64_t x638 = 224809LL;
	static int16_t x639 = -2;
	static int32_t x640 = -8941;
	int32_t t158 = -49;

    t158 = ((x637<=x638)-(x639|x640));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x641 = INT16_MIN;
	uint64_t x642 = 14166571990LLU;
	volatile uint32_t x643 = 1089294761U;
	uint16_t x644 = 127U;
	static volatile uint32_t t159 = 1U;

    t159 = ((x641<=x642)-(x643|x644));

    if (t159 != 3205672449U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x645 = -3827;
	static int16_t x646 = -13857;
	static int64_t x647 = INT64_MIN;
	volatile int32_t x648 = INT32_MAX;
	int64_t t160 = 52767LL;

    t160 = ((x645<=x646)-(x647|x648));

    if (t160 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x649 = 11LLU;
	static volatile int64_t x650 = INT64_MIN;
	static int16_t x651 = INT16_MIN;
	int32_t t161 = -144707;

    t161 = ((x649<=x650)-(x651|x652));

    if (t161 != 32763) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x653 = -1LL;
	int8_t x654 = 1;
	int64_t x655 = 0LL;
	int8_t x656 = -1;
	volatile int64_t t162 = -24225830LL;

    t162 = ((x653<=x654)-(x655|x656));

    if (t162 != 2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = 1;
	static int64_t x659 = -19125LL;
	int64_t x660 = INT64_MIN;
	int64_t t163 = -42551767LL;

    t163 = ((x657<=x658)-(x659|x660));

    if (t163 != 19126LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x662 = 9U;
	int16_t x664 = -13;
	volatile int32_t t164 = -1;

    t164 = ((x661<=x662)-(x663|x664));

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = -732;
	static int64_t x667 = INT64_MAX;
	uint64_t x668 = UINT64_MAX;

    t165 = ((x665<=x666)-(x667|x668));

    if (t165 != 2LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x669 = 954809907907993LLU;
	static uint32_t x670 = UINT32_MAX;
	uint32_t x671 = 170344U;
	uint32_t t166 = 207159U;

    t166 = ((x669<=x670)-(x671|x672));

    if (t166 != 26264U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x675 = 3;
	int8_t x676 = INT8_MIN;
	int32_t t167 = -94764597;

    t167 = ((x673<=x674)-(x675|x676));

    if (t167 != 126) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x677 = -1;
	static int8_t x680 = INT8_MAX;
	int64_t t168 = -160192152824794LL;

    t168 = ((x677<=x678)-(x679|x680));

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x686 = INT8_MIN;
	int64_t t169 = 6360610LL;

    t169 = ((x685<=x686)-(x687|x688));

    if (t169 != 12234LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x690 = INT8_MAX;
	int8_t x691 = INT8_MIN;
	int8_t x692 = 15;
	int32_t t170 = -517023759;

    t170 = ((x689<=x690)-(x691|x692));

    if (t170 != 113) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x693 = -421;
	int16_t x696 = 771;
	static int64_t t171 = 100374280380985206LL;

    t171 = ((x693<=x694)-(x695|x696));

    if (t171 != 9223372036854775038LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x697 = INT8_MAX;
	static uint64_t x699 = 26738834004LLU;
	int8_t x700 = INT8_MAX;
	uint64_t t172 = 507295LLU;

    t172 = ((x697<=x698)-(x699|x700));

    if (t172 != 18446744046970717570LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x701 = INT8_MIN;
	static uint32_t x702 = UINT32_MAX;
	uint64_t x703 = 252745866115313580LLU;
	uint64_t x704 = 1636887493086380131LLU;
	volatile uint64_t t173 = 144147965LLU;

    t173 = ((x701<=x702)-(x703|x704));

    if (t173 != 16737646128158085138LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x705 = 1U;
	uint16_t x706 = 573U;
	int64_t x707 = INT64_MIN;
	uint16_t x708 = UINT16_MAX;
	volatile int64_t t174 = -65581298LL;

    t174 = ((x705<=x706)-(x707|x708));

    if (t174 != 9223372036854710274LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x709 = 51U;

    t175 = ((x709<=x710)-(x711|x712));

    if (t175 != 4175309825U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x713 = INT32_MIN;
	volatile uint64_t x714 = 1097LLU;
	uint8_t x715 = UINT8_MAX;
	int8_t x716 = -6;
	volatile int32_t t176 = 997191947;

    t176 = ((x713<=x714)-(x715|x716));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x717 = INT64_MIN;
	static int8_t x719 = INT8_MIN;
	int8_t x720 = 7;
	static volatile int32_t t177 = -970905;

    t177 = ((x717<=x718)-(x719|x720));

    if (t177 != 122) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x721 = 251183690847795LL;
	volatile int16_t x723 = INT16_MIN;
	volatile uint64_t t178 = 21019LLU;

    t178 = ((x721<=x722)-(x723|x724));

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x725 = -1;
	int16_t x726 = -1634;
	uint16_t x727 = UINT16_MAX;
	volatile int32_t t179 = 0;

    t179 = ((x725<=x726)-(x727|x728));

    if (t179 != -65535) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x730 = 37U;
	static volatile int8_t x731 = INT8_MAX;
	int64_t t180 = -578429251439LL;

    t180 = ((x729<=x730)-(x731|x732));

    if (t180 != -126LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x733 = INT64_MAX;
	volatile int8_t x734 = -1;
	static uint32_t x735 = 93227764U;
	int64_t x736 = -1LL;
	volatile int64_t t181 = -1627411687487635LL;

    t181 = ((x733<=x734)-(x735|x736));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x737 = 1538U;
	volatile uint32_t x739 = 1630628U;
	uint64_t x740 = UINT64_MAX;
	volatile uint64_t t182 = 415062459744248895LLU;

    t182 = ((x737<=x738)-(x739|x740));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x742 = INT16_MIN;
	int16_t x743 = -1;
	int64_t x744 = -859680817LL;
	volatile int64_t t183 = 2171LL;

    t183 = ((x741<=x742)-(x743|x744));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x746 = UINT16_MAX;
	static volatile uint32_t x747 = 1U;
	volatile int8_t x748 = INT8_MIN;

    t184 = ((x745<=x746)-(x747|x748));

    if (t184 != 128U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x750 = INT16_MAX;
	volatile int8_t x751 = -53;
	int16_t x752 = 0;
	int32_t t185 = -218200641;

    t185 = ((x749<=x750)-(x751|x752));

    if (t185 != 54) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x753 = 20243U;
	volatile int64_t x754 = 28111LL;
	int64_t x755 = INT64_MIN;
	static int8_t x756 = -23;
	volatile int64_t t186 = -1LL;

    t186 = ((x753<=x754)-(x755|x756));

    if (t186 != 24LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x758 = 1;
	int64_t x760 = 111232480143LL;
	int64_t t187 = 3386739751707428497LL;

    t187 = ((x757<=x758)-(x759|x760));

    if (t187 != 3186LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x761 = -1122LL;
	uint8_t x762 = 90U;
	int8_t x763 = INT8_MAX;
	volatile int32_t t188 = 1;

    t188 = ((x761<=x762)-(x763|x764));

    if (t188 != -254) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x765 = INT32_MAX;
	int8_t x766 = 0;
	int8_t x767 = -12;
	volatile int32_t t189 = 65838185;

    t189 = ((x765<=x766)-(x767|x768));

    if (t189 != 11) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x769 = INT8_MAX;
	int32_t x770 = INT32_MIN;
	volatile int8_t x771 = -1;
	static int32_t t190 = -4446;

    t190 = ((x769<=x770)-(x771|x772));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x773 = 2U;
	int8_t x775 = INT8_MAX;
	volatile int16_t x776 = INT16_MAX;
	int32_t t191 = 64164;

    t191 = ((x773<=x774)-(x775|x776));

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x777 = 3668;
	uint16_t x779 = 437U;
	int32_t x780 = INT32_MIN;
	int32_t t192 = -676;

    t192 = ((x777<=x778)-(x779|x780));

    if (t192 != 2147483211) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x781 = -11;
	uint8_t x782 = 37U;
	int32_t x784 = -1;
	volatile uint64_t t193 = 337LLU;

    t193 = ((x781<=x782)-(x783|x784));

    if (t193 != 2LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint8_t x786 = UINT8_MAX;
	uint32_t x787 = 8445U;
	static volatile uint8_t x788 = 55U;
	volatile uint32_t t194 = 613476U;

    t194 = ((x785<=x786)-(x787|x788));

    if (t194 != 4294958850U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x790 = INT16_MIN;
	int64_t x791 = 35913765737389793LL;
	int32_t x792 = INT32_MAX;

    t195 = ((x789<=x790)-(x791|x792));

    if (t195 != -35913767057358847LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x793 = UINT32_MAX;
	int32_t x794 = -1300584;
	static uint16_t x795 = 7U;
	uint64_t x796 = 834238597696LLU;
	volatile uint64_t t196 = 480760LLU;

    t196 = ((x793<=x794)-(x795|x796));

    if (t196 != 18446743239470953913LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x797 = -2354;
	int64_t x798 = 117350738LL;
	int32_t x799 = INT32_MAX;
	volatile int64_t x800 = INT64_MAX;
	int64_t t197 = 1067786954824LL;

    t197 = ((x797<=x798)-(x799|x800));

    if (t197 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x801 = 143756230U;
	uint32_t x802 = 98U;
	volatile uint64_t t198 = 30112LLU;

    t198 = ((x801<=x802)-(x803|x804));

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x805 = -1LL;
	static uint32_t x807 = UINT32_MAX;
	uint8_t x808 = UINT8_MAX;
	static uint32_t t199 = 19U;

    t199 = ((x805<=x806)-(x807|x808));

    if (t199 != 1U) { NG(); } else { ; }
	
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

