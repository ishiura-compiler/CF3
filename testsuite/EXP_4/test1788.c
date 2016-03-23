
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

int32_t x1 = INT32_MIN;
int16_t x2 = INT16_MIN;
int16_t x8 = INT16_MIN;
int16_t x9 = -1;
int8_t x26 = 1;
uint32_t x27 = UINT32_MAX;
volatile int32_t t9 = -34;
int16_t x45 = 313;
volatile int64_t x46 = -1LL;
volatile int64_t x48 = 188756044811389027LL;
int64_t x52 = -254226544101046929LL;
volatile int32_t t11 = 17668;
volatile int32_t t12 = -8;
int16_t x59 = -9;
int32_t x61 = INT32_MIN;
int8_t x69 = 5;
int8_t x77 = 0;
uint16_t x83 = 123U;
int64_t x98 = INT64_MIN;
int32_t x99 = INT32_MAX;
static volatile int16_t x106 = -1;
int16_t x108 = -1;
static int32_t t22 = -11405424;
int64_t x130 = 31904342145182LL;
volatile int32_t x131 = INT32_MIN;
int32_t t25 = 3310703;
volatile uint8_t x138 = UINT8_MAX;
uint16_t x139 = UINT16_MAX;
uint8_t x142 = 0U;
int32_t x145 = -1;
uint32_t x149 = 5520264U;
uint64_t x151 = 1241174LLU;
int32_t x169 = INT32_MIN;
static volatile int32_t t33 = -431498;
uint32_t x173 = 6408643U;
static volatile int64_t x175 = INT64_MIN;
volatile int16_t x178 = 0;
static uint64_t x179 = UINT64_MAX;
static int64_t x187 = -1LL;
static int32_t x208 = -23272739;
volatile int16_t x215 = INT16_MAX;
int64_t x222 = -117905178159722583LL;
uint64_t x223 = UINT64_MAX;
int32_t t46 = -254;
int8_t x229 = 1;
uint64_t x230 = 1615223555LLU;
int64_t x232 = 22705LL;
int16_t x239 = 0;
volatile uint8_t x240 = 0U;
int64_t x241 = -1LL;
static int32_t x245 = 2429537;
int32_t x252 = INT32_MAX;
uint8_t x253 = 106U;
int16_t x258 = INT16_MIN;
volatile int32_t t54 = 6783120;
int16_t x261 = INT16_MIN;
int64_t x262 = 1744307LL;
int32_t t55 = 447;
int8_t x267 = INT8_MIN;
int32_t t57 = -66963062;
uint16_t x284 = UINT16_MAX;
int32_t t59 = 1059127;
static int8_t x292 = INT8_MIN;
int64_t x293 = INT64_MIN;
int64_t x296 = -1LL;
static volatile int32_t t62 = -124;
static int32_t x298 = 15580;
int64_t x304 = -1LL;
uint64_t x319 = UINT64_MAX;
int32_t t66 = -5576204;
int8_t x321 = 0;
static int16_t x338 = -1;
int16_t x339 = INT16_MAX;
volatile uint8_t x340 = 3U;
volatile int32_t t73 = -129545603;
int32_t x350 = -647036965;
volatile int32_t t74 = -7466;
uint32_t x356 = 6586U;
static uint16_t x359 = 6704U;
int32_t x360 = INT32_MIN;
int32_t t76 = 318273944;
uint16_t x362 = 11693U;
volatile int16_t x365 = INT16_MAX;
static int16_t x366 = -1;
uint64_t x371 = UINT64_MAX;
volatile int32_t t80 = -7;
static int32_t t81 = 60614;
int64_t x387 = 64389776964718LL;
volatile int32_t t82 = -38870889;
static int32_t x398 = -1;
int32_t t85 = -1472;
static volatile int32_t t86 = 74331542;
int32_t t87 = -5866526;
int8_t x422 = 1;
volatile int32_t t89 = -207701607;
int16_t x426 = 5271;
volatile int16_t x427 = 3995;
static int32_t t90 = -399397251;
static int32_t x432 = INT32_MAX;
static int16_t x434 = -1;
int32_t x435 = -1;
int32_t t92 = -525865;
uint8_t x437 = UINT8_MAX;
static volatile int64_t x438 = -1LL;
volatile int8_t x442 = 2;
int32_t x443 = -1;
int16_t x447 = -302;
uint8_t x452 = UINT8_MAX;
static uint64_t x455 = 2983533594737LLU;
volatile uint16_t x458 = 206U;
int32_t x460 = INT32_MAX;
volatile int32_t t98 = 1;
int8_t x470 = INT8_MAX;
uint8_t x473 = 58U;
int32_t x475 = INT32_MAX;
int32_t t104 = -1337;
uint64_t x498 = 512896879129LLU;
int16_t x506 = -31;
int16_t x513 = -1;
static int64_t x516 = -1LL;
int64_t x519 = 742615585LL;
static int64_t x520 = 333LL;
static volatile int32_t t110 = 86;
static uint16_t x531 = UINT16_MAX;
volatile uint16_t x535 = UINT16_MAX;
int8_t x543 = INT8_MIN;
int32_t x544 = INT32_MAX;
int8_t x549 = INT8_MIN;
uint16_t x555 = 653U;
int8_t x572 = -1;
volatile int32_t t122 = 20;
volatile int16_t x580 = INT16_MIN;
static int32_t x584 = 1;
static uint16_t x585 = UINT16_MAX;
int64_t x586 = 224670614212626419LL;
int16_t x600 = INT16_MIN;
static int64_t x601 = INT64_MAX;
int64_t x603 = -1LL;
int64_t x607 = INT64_MIN;
int16_t x609 = INT16_MIN;
static uint32_t x613 = UINT32_MAX;
int8_t x622 = -24;
static uint16_t x624 = 0U;
volatile uint8_t x630 = UINT8_MAX;
static int16_t x646 = -1;
int32_t t140 = -178780;
int8_t x651 = 8;
volatile int64_t x652 = INT64_MIN;
uint8_t x653 = 4U;
int8_t x656 = INT8_MAX;
volatile int32_t x658 = INT32_MIN;
int32_t x661 = -108971242;
int16_t x673 = INT16_MIN;
int32_t x676 = -1;
volatile int32_t t146 = -528166833;
uint8_t x699 = 1U;
int8_t x704 = INT8_MIN;
static int16_t x711 = -440;
volatile int32_t t155 = 7;
static int8_t x714 = INT8_MAX;
static int32_t t156 = -33;
static volatile int64_t x720 = INT64_MIN;
int64_t x723 = INT64_MIN;
int64_t x724 = 1LL;
uint32_t x729 = 1636U;
int32_t x737 = -621;
int16_t x739 = INT16_MIN;
int8_t x744 = 3;
volatile uint16_t x748 = UINT16_MAX;
volatile int32_t t163 = 172;
volatile int64_t x756 = INT64_MIN;
static volatile uint16_t x758 = UINT16_MAX;
int8_t x762 = 4;
uint8_t x783 = UINT8_MAX;
volatile uint8_t x786 = 4U;
int32_t x791 = INT32_MIN;
uint64_t x796 = 4949294037412815493LLU;
static int32_t t174 = -10;
static volatile int32_t t175 = 502520;
int32_t t176 = -3799386;
int16_t x811 = INT16_MAX;
int8_t x813 = -1;
uint16_t x815 = UINT16_MAX;
int64_t x822 = 95044370307977LL;
uint16_t x824 = 18838U;
int8_t x827 = INT8_MIN;
static volatile int16_t x841 = -1;
uint8_t x845 = 21U;
int16_t x848 = INT16_MAX;
int8_t x851 = INT8_MAX;
static int64_t x860 = INT64_MAX;
static int32_t t189 = 207773;
int16_t x868 = -1;
volatile int32_t t192 = -4946972;
int64_t x875 = INT64_MIN;
volatile int16_t x879 = INT16_MIN;
volatile int32_t t196 = 167;
uint8_t x900 = 39U;
static int32_t t197 = -54619;
volatile int64_t x904 = -1LL;
static int32_t t198 = 582868412;
int64_t x905 = INT64_MIN;
int8_t x908 = INT8_MAX;


void f0(void) {
    	int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 127931;

    t0 = (x1<=(x2-(x3<=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int32_t x6 = INT32_MAX;
	static int16_t x7 = 399;
	volatile int32_t t1 = 19;

    t1 = (x5<=(x6-(x7<=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -1LL;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 181573;

    t2 = (x9<=(x10-(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MAX;
	static volatile int16_t x14 = INT16_MIN;
	int8_t x15 = -1;
	volatile int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -53;

    t3 = (x13<=(x14-(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile int16_t x18 = INT16_MAX;
	int8_t x19 = INT8_MAX;
	volatile int64_t x20 = -1243837944538397LL;
	volatile int32_t t4 = 53;

    t4 = (x17<=(x18-(x19<=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 5U;
	uint8_t x22 = 15U;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -1;
	static int32_t t5 = 396;

    t5 = (x21<=(x22-(x23<=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = 11450;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 83272;

    t6 = (x25<=(x26-(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x33 = 12201U;
	volatile uint64_t x34 = UINT64_MAX;
	uint16_t x35 = 1U;
	static uint8_t x36 = 0U;
	int32_t t7 = 1;

    t7 = (x33<=(x34-(x35<=x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 7U;
	volatile int32_t x38 = 123;
	int8_t x39 = -1;
	volatile uint64_t x40 = UINT64_MAX;
	int32_t t8 = 25694;

    t8 = (x37<=(x38-(x39<=x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -16997719989LL;
	volatile int32_t x42 = 2860;
	static volatile int64_t x43 = -1LL;
	static volatile int16_t x44 = 788;

    t9 = (x41<=(x42-(x43<=x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x47 = UINT32_MAX;
	static int32_t t10 = 482321;

    t10 = (x45<=(x46-(x47<=x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	uint16_t x51 = UINT16_MAX;

    t11 = (x49<=(x50-(x51<=x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 15U;
	int32_t x54 = INT32_MAX;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = INT32_MAX;

    t12 = (x53<=(x54-(x55<=x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1557;
	uint8_t x58 = UINT8_MAX;
	int8_t x60 = 63;
	int32_t t13 = -8;

    t13 = (x57<=(x58-(x59<=x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x62 = 486473981864006008LLU;
	static int64_t x63 = 1552LL;
	uint16_t x64 = 15576U;
	static volatile int32_t t14 = 1050;

    t14 = (x61<=(x62-(x63<=x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = INT8_MIN;
	volatile uint64_t x66 = 46873569LLU;
	int32_t x67 = INT32_MIN;
	int8_t x68 = -2;
	volatile int32_t t15 = -106;

    t15 = (x65<=(x66-(x67<=x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x70 = 1559830450111521LLU;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -27;

    t16 = (x69<=(x70-(x71<=x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x73 = INT32_MAX;
	uint32_t x74 = 6576602U;
	static volatile int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	static int32_t t17 = -40067040;

    t17 = (x73<=(x74-(x75<=x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = 53005506;
	int64_t x79 = -1LL;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t18 = 3583;

    t18 = (x77<=(x78-(x79<=x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	volatile int64_t x82 = INT64_MAX;
	static int32_t x84 = 8;
	int32_t t19 = 4980;

    t19 = (x81<=(x82-(x83<=x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = 141138401U;
	int64_t x95 = 374399LL;
	volatile int32_t x96 = INT32_MIN;
	static volatile int32_t t20 = 958353;

    t20 = (x93<=(x94-(x95<=x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = 10689077157LL;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t21 = 794880;

    t21 = (x97<=(x98-(x99<=x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = UINT16_MAX;
	int32_t x107 = INT32_MIN;

    t22 = (x105<=(x106-(x107<=x108)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = UINT8_MAX;
	int64_t x114 = -1LL;
	static uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MAX;
	int32_t t23 = -38885763;

    t23 = (x113<=(x114-(x115<=x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x125 = 6758U;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = 3591U;
	int8_t x128 = 0;
	volatile int32_t t24 = -122520333;

    t24 = (x125<=(x126-(x127<=x128)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x129 = INT16_MIN;
	static int32_t x132 = INT32_MIN;

    t25 = (x129<=(x130-(x131<=x132)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x137 = -532554299653966LL;
	volatile int64_t x140 = 612884944156537LL;
	static volatile int32_t t26 = -1144;

    t26 = (x137<=(x138-(x139<=x140)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x141 = INT32_MIN;
	static uint8_t x143 = 37U;
	volatile int32_t x144 = INT32_MAX;
	int32_t t27 = -243279823;

    t27 = (x141<=(x142-(x143<=x144)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x146 = INT8_MIN;
	uint64_t x147 = 1594678345790LLU;
	int8_t x148 = INT8_MAX;
	volatile int32_t t28 = -63786;

    t28 = (x145<=(x146-(x147<=x148)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x150 = 17775U;
	int8_t x152 = 58;
	int32_t t29 = 104777498;

    t29 = (x149<=(x150-(x151<=x152)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x153 = -7;
	static int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -1;
	static volatile int32_t t30 = 7444772;

    t30 = (x153<=(x154-(x155<=x156)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x157 = -1;
	int16_t x158 = -21;
	volatile int64_t x159 = -1722970677581002760LL;
	static int8_t x160 = -3;
	volatile int32_t t31 = 1;

    t31 = (x157<=(x158-(x159<=x160)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x161 = -28;
	int8_t x162 = INT8_MIN;
	static int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	static int32_t t32 = -1;

    t32 = (x161<=(x162-(x163<=x164)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x170 = 1;
	static int8_t x171 = INT8_MIN;
	static volatile uint32_t x172 = 8U;

    t33 = (x169<=(x170-(x171<=x172)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x174 = -1LL;
	static uint64_t x176 = UINT64_MAX;
	volatile int32_t t34 = 44573;

    t34 = (x173<=(x174-(x175<=x176)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x177 = 7422LLU;
	uint16_t x180 = 3835U;
	volatile int32_t t35 = 440148101;

    t35 = (x177<=(x178-(x179<=x180)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x181 = 6LL;
	static uint8_t x182 = 5U;
	int16_t x183 = INT16_MAX;
	static uint64_t x184 = 850854139131LLU;
	static volatile int32_t t36 = 238099663;

    t36 = (x181<=(x182-(x183<=x184)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x185 = 7U;
	uint8_t x186 = 11U;
	int32_t x188 = INT32_MIN;
	volatile int32_t t37 = 88476227;

    t37 = (x185<=(x186-(x187<=x188)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x189 = -1;
	int64_t x190 = -1966923528LL;
	int32_t x191 = -1;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t38 = -11006;

    t38 = (x189<=(x190-(x191<=x192)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x193 = 1;
	static int64_t x194 = INT64_MAX;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = INT32_MIN;
	static int32_t t39 = -2;

    t39 = (x193<=(x194-(x195<=x196)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t40 = 510719;

    t40 = (x197<=(x198-(x199<=x200)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x205 = 4U;
	uint32_t x206 = 13U;
	int8_t x207 = INT8_MAX;
	int32_t t41 = -216332;

    t41 = (x205<=(x206-(x207<=x208)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x209 = 1U;
	volatile int16_t x210 = -1;
	uint16_t x211 = 8025U;
	int32_t x212 = INT32_MAX;
	int32_t t42 = 1544113;

    t42 = (x209<=(x210-(x211<=x212)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x213 = 195U;
	volatile uint16_t x214 = 5U;
	int8_t x216 = 30;
	int32_t t43 = 6;

    t43 = (x213<=(x214-(x215<=x216)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x217 = UINT8_MAX;
	int64_t x218 = 13078333LL;
	int16_t x219 = INT16_MIN;
	static int32_t x220 = INT32_MAX;
	volatile int32_t t44 = 189;

    t44 = (x217<=(x218-(x219<=x220)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x221 = 0U;
	uint16_t x224 = 2U;
	volatile int32_t t45 = 3422893;

    t45 = (x221<=(x222-(x223<=x224)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x225 = INT16_MIN;
	static int64_t x226 = -1LL;
	int32_t x227 = -1;
	uint32_t x228 = 6112U;

    t46 = (x225<=(x226-(x227<=x228)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x231 = INT16_MAX;
	volatile int32_t t47 = 191080426;

    t47 = (x229<=(x230-(x231<=x232)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x233 = -1;
	volatile uint16_t x234 = 15U;
	static uint16_t x235 = 1U;
	uint64_t x236 = 291180LLU;
	int32_t t48 = 6950;

    t48 = (x233<=(x234-(x235<=x236)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = -1;
	uint8_t x238 = 6U;
	volatile int32_t t49 = -7;

    t49 = (x237<=(x238-(x239<=x240)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x242 = INT32_MAX;
	uint32_t x243 = 299166394U;
	int64_t x244 = 1413310598LL;
	int32_t t50 = -119229720;

    t50 = (x241<=(x242-(x243<=x244)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x246 = INT8_MAX;
	volatile int8_t x247 = INT8_MIN;
	uint16_t x248 = 4U;
	int32_t t51 = -24;

    t51 = (x245<=(x246-(x247<=x248)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x249 = INT32_MIN;
	uint8_t x250 = 0U;
	uint64_t x251 = 129647510634451949LLU;
	static volatile int32_t t52 = -17;

    t52 = (x249<=(x250-(x251<=x252)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x254 = -13;
	volatile int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	volatile int32_t t53 = 361914;

    t53 = (x253<=(x254-(x255<=x256)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x257 = UINT64_MAX;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = 30U;

    t54 = (x257<=(x258-(x259<=x260)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x263 = 8820334974253111LLU;
	uint32_t x264 = 1486255694U;

    t55 = (x261<=(x262-(x263<=x264)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x265 = INT64_MAX;
	static int8_t x266 = 33;
	int64_t x268 = INT64_MIN;
	volatile int32_t t56 = -4398;

    t56 = (x265<=(x266-(x267<=x268)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x269 = INT16_MIN;
	volatile int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	volatile int8_t x272 = INT8_MIN;

    t57 = (x269<=(x270-(x271<=x272)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x273 = -127875;
	volatile int64_t x274 = INT64_MAX;
	volatile int64_t x275 = -1LL;
	static int32_t x276 = -1;
	int32_t t58 = 1437;

    t58 = (x273<=(x274-(x275<=x276)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x281 = 20;
	uint8_t x282 = 95U;
	static int8_t x283 = -31;

    t59 = (x281<=(x282-(x283<=x284)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x285 = 602130175;
	uint16_t x286 = 5U;
	int16_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t60 = 139293;

    t60 = (x285<=(x286-(x287<=x288)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x289 = -1LL;
	int8_t x290 = 0;
	static uint16_t x291 = 788U;
	int32_t t61 = 1119056;

    t61 = (x289<=(x290-(x291<=x292)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x294 = 57U;
	int64_t x295 = INT64_MIN;

    t62 = (x293<=(x294-(x295<=x296)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = -1;
	int16_t x299 = -282;
	uint16_t x300 = 20U;
	volatile int32_t t63 = 3655417;

    t63 = (x297<=(x298-(x299<=x300)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x301 = INT8_MIN;
	int32_t x302 = 697589001;
	volatile int32_t x303 = INT32_MIN;
	volatile int32_t t64 = -115;

    t64 = (x301<=(x302-(x303<=x304)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x313 = UINT16_MAX;
	static uint16_t x314 = 10004U;
	static int64_t x315 = INT64_MIN;
	int16_t x316 = 186;
	static int32_t t65 = -176;

    t65 = (x313<=(x314-(x315<=x316)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x317 = INT8_MAX;
	volatile int16_t x318 = -1;
	volatile uint32_t x320 = 91U;

    t66 = (x317<=(x318-(x319<=x320)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	int32_t x324 = -1471;
	static volatile int32_t t67 = -25134861;

    t67 = (x321<=(x322-(x323<=x324)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x325 = 420709716651763254LL;
	int8_t x326 = -11;
	uint8_t x327 = 112U;
	static int64_t x328 = -27358371398LL;
	static volatile int32_t t68 = 625909837;

    t68 = (x325<=(x326-(x327<=x328)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x329 = 18LLU;
	volatile int16_t x330 = 31;
	int8_t x331 = -55;
	static int32_t x332 = -1;
	static volatile int32_t t69 = 14;

    t69 = (x329<=(x330-(x331<=x332)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x333 = -1;
	volatile int8_t x334 = -21;
	volatile int8_t x335 = INT8_MIN;
	static uint64_t x336 = UINT64_MAX;
	static int32_t t70 = 834;

    t70 = (x333<=(x334-(x335<=x336)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = -11;
	volatile int32_t t71 = -1;

    t71 = (x337<=(x338-(x339<=x340)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x342 = -1;
	int64_t x343 = INT64_MAX;
	int32_t x344 = 17;
	int32_t t72 = 507476;

    t72 = (x341<=(x342-(x343<=x344)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x345 = -188;
	int32_t x346 = 336497;
	int8_t x347 = 2;
	int32_t x348 = -1;

    t73 = (x345<=(x346-(x347<=x348)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = INT8_MAX;
	volatile int16_t x351 = -800;
	int64_t x352 = INT64_MIN;

    t74 = (x349<=(x350-(x351<=x352)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x353 = -2;
	static int16_t x354 = -195;
	int32_t x355 = -1;
	volatile int32_t t75 = 267453283;

    t75 = (x353<=(x354-(x355<=x356)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x357 = 1;
	int16_t x358 = INT16_MIN;

    t76 = (x357<=(x358-(x359<=x360)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x361 = -1;
	uint8_t x363 = 1U;
	volatile int64_t x364 = -1LL;
	int32_t t77 = 32837702;

    t77 = (x361<=(x362-(x363<=x364)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x367 = UINT16_MAX;
	volatile int32_t x368 = INT32_MIN;
	static volatile int32_t t78 = 45;

    t78 = (x365<=(x366-(x367<=x368)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x369 = UINT64_MAX;
	static uint8_t x370 = UINT8_MAX;
	volatile int16_t x372 = -3574;
	int32_t t79 = -5;

    t79 = (x369<=(x370-(x371<=x372)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x373 = -32;
	int16_t x374 = INT16_MIN;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t x376 = -1;

    t80 = (x373<=(x374-(x375<=x376)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x377 = -55;
	static int8_t x378 = INT8_MIN;
	volatile int8_t x379 = 3;
	uint32_t x380 = 7323U;

    t81 = (x377<=(x378-(x379<=x380)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 183U;
	uint8_t x388 = 94U;

    t82 = (x385<=(x386-(x387<=x388)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x389 = INT32_MIN;
	uint16_t x390 = 1U;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MAX;
	int32_t t83 = 585426;

    t83 = (x389<=(x390-(x391<=x392)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x393 = UINT8_MAX;
	static uint64_t x394 = 5941469025LLU;
	volatile uint64_t x395 = 96LLU;
	int64_t x396 = INT64_MIN;
	volatile int32_t t84 = 593994649;

    t84 = (x393<=(x394-(x395<=x396)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x397 = INT8_MIN;
	int8_t x399 = -1;
	volatile uint8_t x400 = UINT8_MAX;

    t85 = (x397<=(x398-(x399<=x400)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x401 = 37997834213859871LLU;
	int16_t x402 = -1;
	static volatile int64_t x403 = INT64_MIN;
	int64_t x404 = -1LL;

    t86 = (x401<=(x402-(x403<=x404)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x413 = -891;
	static uint32_t x414 = UINT32_MAX;
	uint8_t x415 = 105U;
	static int64_t x416 = -421284839607686LL;

    t87 = (x413<=(x414-(x415<=x416)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x417 = INT32_MAX;
	static int32_t x418 = -1;
	uint64_t x419 = 110043007LLU;
	static volatile int16_t x420 = -1;
	static volatile int32_t t88 = 57911386;

    t88 = (x417<=(x418-(x419<=x420)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x421 = 832U;
	int64_t x423 = -1LL;
	int64_t x424 = INT64_MIN;

    t89 = (x421<=(x422-(x423<=x424)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x425 = -1;
	uint64_t x428 = 3214203706719811269LLU;

    t90 = (x425<=(x426-(x427<=x428)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x429 = -1;
	int8_t x430 = -1;
	uint8_t x431 = 94U;
	volatile int32_t t91 = -1;

    t91 = (x429<=(x430-(x431<=x432)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x433 = -1;
	static uint8_t x436 = 0U;

    t92 = (x433<=(x434-(x435<=x436)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x439 = -1;
	int64_t x440 = -16205LL;
	int32_t t93 = 118;

    t93 = (x437<=(x438-(x439<=x440)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x441 = INT32_MIN;
	int64_t x444 = 3240946LL;
	int32_t t94 = 159857169;

    t94 = (x441<=(x442-(x443<=x444)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x445 = 0;
	int64_t x446 = -1LL;
	uint64_t x448 = 3775453558577LLU;
	volatile int32_t t95 = -51088;

    t95 = (x445<=(x446-(x447<=x448)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x449 = -520770LL;
	uint16_t x450 = 166U;
	int8_t x451 = INT8_MAX;
	static volatile int32_t t96 = 7151;

    t96 = (x449<=(x450-(x451<=x452)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x453 = UINT16_MAX;
	int8_t x454 = INT8_MIN;
	int32_t x456 = -1;
	static volatile int32_t t97 = -6299427;

    t97 = (x453<=(x454-(x455<=x456)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x457 = INT32_MAX;
	uint8_t x459 = 1U;

    t98 = (x457<=(x458-(x459<=x460)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MAX;
	int32_t x463 = -40;
	uint64_t x464 = UINT64_MAX;
	static volatile int32_t t99 = 96;

    t99 = (x461<=(x462-(x463<=x464)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x465 = INT16_MAX;
	static uint16_t x466 = 3U;
	uint16_t x467 = 31692U;
	static int16_t x468 = INT16_MIN;
	int32_t t100 = -126;

    t100 = (x465<=(x466-(x467<=x468)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x469 = 14029U;
	volatile int8_t x471 = 2;
	static volatile int8_t x472 = -1;
	int32_t t101 = -3;

    t101 = (x469<=(x470-(x471<=x472)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x474 = 7423U;
	int64_t x476 = -34843470720739141LL;
	int32_t t102 = 177;

    t102 = (x473<=(x474-(x475<=x476)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x477 = INT16_MIN;
	static int64_t x478 = INT64_MIN;
	int16_t x479 = 5909;
	volatile int32_t x480 = -429380;
	volatile int32_t t103 = 216556;

    t103 = (x477<=(x478-(x479<=x480)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x485 = 253;
	volatile int64_t x486 = INT64_MIN;
	uint16_t x487 = 57U;
	int8_t x488 = 0;

    t104 = (x485<=(x486-(x487<=x488)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x489 = 2758U;
	int32_t x490 = -132291852;
	int64_t x491 = INT64_MIN;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t105 = 829482;

    t105 = (x489<=(x490-(x491<=x492)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x493 = -1;
	uint16_t x494 = 795U;
	uint8_t x495 = 1U;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t106 = 1546235;

    t106 = (x493<=(x494-(x495<=x496)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x497 = -1;
	int64_t x499 = -1LL;
	int32_t x500 = INT32_MIN;
	volatile int32_t t107 = -7;

    t107 = (x497<=(x498-(x499<=x500)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = 56U;
	uint64_t x507 = 220054304LLU;
	int16_t x508 = INT16_MIN;
	volatile int32_t t108 = -386499;

    t108 = (x505<=(x506-(x507<=x508)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x514 = -1;
	int16_t x515 = 0;
	volatile int32_t t109 = 34;

    t109 = (x513<=(x514-(x515<=x516)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x517 = 194390236291344982LLU;
	uint8_t x518 = UINT8_MAX;

    t110 = (x517<=(x518-(x519<=x520)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x521 = 4324328106121204156LL;
	int16_t x522 = INT16_MAX;
	static uint32_t x523 = UINT32_MAX;
	static int16_t x524 = 1;
	int32_t t111 = 143866;

    t111 = (x521<=(x522-(x523<=x524)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x525 = 0;
	uint8_t x526 = UINT8_MAX;
	int64_t x527 = -1LL;
	int8_t x528 = INT8_MAX;
	static int32_t t112 = 1523823;

    t112 = (x525<=(x526-(x527<=x528)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x529 = 983757066658262LLU;
	static uint64_t x530 = 71965LLU;
	int16_t x532 = 0;
	volatile int32_t t113 = -1;

    t113 = (x529<=(x530-(x531<=x532)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x533 = INT16_MIN;
	volatile int8_t x534 = INT8_MIN;
	int16_t x536 = -136;
	static int32_t t114 = 109;

    t114 = (x533<=(x534-(x535<=x536)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x537 = INT32_MAX;
	int32_t x538 = INT32_MIN;
	int64_t x539 = INT64_MAX;
	int8_t x540 = INT8_MIN;
	static volatile int32_t t115 = 496;

    t115 = (x537<=(x538-(x539<=x540)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x541 = -56;
	static uint32_t x542 = UINT32_MAX;
	int32_t t116 = 507474;

    t116 = (x541<=(x542-(x543<=x544)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x545 = 43;
	int16_t x546 = INT16_MAX;
	int16_t x547 = INT16_MAX;
	uint8_t x548 = UINT8_MAX;
	int32_t t117 = -4409280;

    t117 = (x545<=(x546-(x547<=x548)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x550 = 1;
	uint16_t x551 = 26240U;
	static volatile int32_t x552 = 329;
	static int32_t t118 = -1772;

    t118 = (x549<=(x550-(x551<=x552)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x553 = UINT16_MAX;
	static int16_t x554 = INT16_MAX;
	static uint64_t x556 = UINT64_MAX;
	static int32_t t119 = 2035311;

    t119 = (x553<=(x554-(x555<=x556)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x557 = INT64_MAX;
	int64_t x558 = -1LL;
	static volatile int32_t x559 = INT32_MIN;
	int64_t x560 = -1LL;
	int32_t t120 = 342;

    t120 = (x557<=(x558-(x559<=x560)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x561 = UINT16_MAX;
	uint64_t x562 = UINT64_MAX;
	static uint64_t x563 = 338021882881146860LLU;
	int64_t x564 = INT64_MIN;
	volatile int32_t t121 = -427;

    t121 = (x561<=(x562-(x563<=x564)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x569 = 252671042483LLU;
	uint16_t x570 = 30579U;
	int16_t x571 = INT16_MIN;

    t122 = (x569<=(x570-(x571<=x572)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x573 = 315324506U;
	static int16_t x574 = -1;
	volatile uint8_t x575 = 103U;
	int64_t x576 = INT64_MAX;
	volatile int32_t t123 = -840810;

    t123 = (x573<=(x574-(x575<=x576)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x577 = INT32_MIN;
	int16_t x578 = 253;
	int16_t x579 = -1;
	int32_t t124 = -56906750;

    t124 = (x577<=(x578-(x579<=x580)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x581 = 62U;
	uint8_t x582 = UINT8_MAX;
	uint8_t x583 = UINT8_MAX;
	volatile int32_t t125 = -3;

    t125 = (x581<=(x582-(x583<=x584)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x587 = INT32_MAX;
	int64_t x588 = INT64_MIN;
	volatile int32_t t126 = 1;

    t126 = (x585<=(x586-(x587<=x588)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x589 = UINT32_MAX;
	int8_t x590 = INT8_MIN;
	int8_t x591 = -5;
	volatile uint8_t x592 = 18U;
	int32_t t127 = -62674;

    t127 = (x589<=(x590-(x591<=x592)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x593 = 51468743U;
	volatile int64_t x594 = INT64_MAX;
	int8_t x595 = INT8_MAX;
	static volatile int16_t x596 = 0;
	int32_t t128 = -8162077;

    t128 = (x593<=(x594-(x595<=x596)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x597 = 3848237954722285LLU;
	int8_t x598 = INT8_MIN;
	int8_t x599 = -1;
	int32_t t129 = -202;

    t129 = (x597<=(x598-(x599<=x600)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x602 = 322445763;
	int64_t x604 = INT64_MAX;
	volatile int32_t t130 = -232133;

    t130 = (x601<=(x602-(x603<=x604)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x605 = 49U;
	uint8_t x606 = 64U;
	int64_t x608 = -1LL;
	volatile int32_t t131 = 14;

    t131 = (x605<=(x606-(x607<=x608)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x610 = 11U;
	int64_t x611 = -57203LL;
	volatile uint64_t x612 = UINT64_MAX;
	volatile int32_t t132 = 0;

    t132 = (x609<=(x610-(x611<=x612)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x614 = -13LL;
	uint8_t x615 = 1U;
	int16_t x616 = INT16_MIN;
	int32_t t133 = 149078509;

    t133 = (x613<=(x614-(x615<=x616)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x617 = 3U;
	uint16_t x618 = UINT16_MAX;
	volatile int32_t x619 = INT32_MAX;
	int32_t x620 = INT32_MIN;
	static int32_t t134 = 69710;

    t134 = (x617<=(x618-(x619<=x620)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x621 = INT8_MIN;
	int64_t x623 = -1LL;
	int32_t t135 = 13187518;

    t135 = (x621<=(x622-(x623<=x624)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x625 = 0U;
	volatile int64_t x626 = INT64_MAX;
	uint64_t x627 = 1562737LLU;
	uint8_t x628 = 35U;
	volatile int32_t t136 = -2638;

    t136 = (x625<=(x626-(x627<=x628)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x629 = INT64_MIN;
	int64_t x631 = INT64_MIN;
	static int16_t x632 = -443;
	int32_t t137 = 939604;

    t137 = (x629<=(x630-(x631<=x632)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x637 = 13U;
	uint8_t x638 = 2U;
	static volatile int64_t x639 = -1LL;
	uint64_t x640 = 856641625057712LLU;
	volatile int32_t t138 = -2;

    t138 = (x637<=(x638-(x639<=x640)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x641 = INT64_MAX;
	static volatile int32_t x642 = INT32_MAX;
	int32_t x643 = -299478;
	int64_t x644 = INT64_MIN;
	volatile int32_t t139 = -12954;

    t139 = (x641<=(x642-(x643<=x644)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x645 = 21U;
	int64_t x647 = INT64_MIN;
	int8_t x648 = INT8_MIN;

    t140 = (x645<=(x646-(x647<=x648)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x649 = UINT32_MAX;
	int64_t x650 = INT64_MIN;
	volatile int32_t t141 = -156;

    t141 = (x649<=(x650-(x651<=x652)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x654 = 23U;
	int16_t x655 = 14147;
	volatile int32_t t142 = 1;

    t142 = (x653<=(x654-(x655<=x656)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x657 = INT16_MAX;
	static uint64_t x659 = UINT64_MAX;
	static int32_t x660 = INT32_MAX;
	static volatile int32_t t143 = 1;

    t143 = (x657<=(x658-(x659<=x660)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x662 = INT64_MIN;
	volatile uint32_t x663 = 1532214286U;
	int16_t x664 = 0;
	static int32_t t144 = -1;

    t144 = (x661<=(x662-(x663<=x664)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x669 = INT64_MIN;
	static uint16_t x670 = UINT16_MAX;
	static int64_t x671 = INT64_MIN;
	uint64_t x672 = 8655LLU;
	int32_t t145 = 32;

    t145 = (x669<=(x670-(x671<=x672)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x674 = 40819860U;
	int8_t x675 = -50;

    t146 = (x673<=(x674-(x675<=x676)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x677 = 107U;
	int32_t x678 = -452;
	volatile uint64_t x679 = 29154116900LLU;
	int16_t x680 = -265;
	int32_t t147 = 86;

    t147 = (x677<=(x678-(x679<=x680)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x681 = -1LL;
	uint8_t x682 = UINT8_MAX;
	uint64_t x683 = 22960853LLU;
	int64_t x684 = -20551495389321578LL;
	int32_t t148 = 3540245;

    t148 = (x681<=(x682-(x683<=x684)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x685 = -231021692;
	static uint8_t x686 = 23U;
	int8_t x687 = -1;
	uint32_t x688 = 716504U;
	volatile int32_t t149 = -360341958;

    t149 = (x685<=(x686-(x687<=x688)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x689 = -52;
	volatile uint64_t x690 = 1107934600961248LLU;
	int32_t x691 = INT32_MIN;
	volatile uint8_t x692 = 9U;
	int32_t t150 = -6280128;

    t150 = (x689<=(x690-(x691<=x692)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x693 = INT64_MIN;
	uint8_t x694 = UINT8_MAX;
	volatile int64_t x695 = 26501692991916LL;
	int8_t x696 = INT8_MIN;
	static int32_t t151 = -5159;

    t151 = (x693<=(x694-(x695<=x696)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = INT8_MIN;
	static uint64_t x700 = UINT64_MAX;
	volatile int32_t t152 = -28009071;

    t152 = (x697<=(x698-(x699<=x700)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x701 = INT8_MIN;
	int32_t x702 = 15507463;
	static int64_t x703 = INT64_MAX;
	int32_t t153 = 1;

    t153 = (x701<=(x702-(x703<=x704)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x705 = INT32_MAX;
	int16_t x706 = INT16_MIN;
	static int32_t x707 = INT32_MIN;
	int64_t x708 = INT64_MIN;
	volatile int32_t t154 = -5005;

    t154 = (x705<=(x706-(x707<=x708)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x709 = INT16_MIN;
	int8_t x710 = 0;
	static volatile int32_t x712 = INT32_MAX;

    t155 = (x709<=(x710-(x711<=x712)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x713 = INT32_MIN;
	int16_t x715 = 0;
	uint32_t x716 = 438U;

    t156 = (x713<=(x714-(x715<=x716)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x717 = INT64_MIN;
	int8_t x718 = 60;
	volatile int16_t x719 = INT16_MIN;
	volatile int32_t t157 = -14534083;

    t157 = (x717<=(x718-(x719<=x720)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x721 = 289U;
	int8_t x722 = INT8_MIN;
	int32_t t158 = 1808954;

    t158 = (x721<=(x722-(x723<=x724)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x725 = 10667U;
	int8_t x726 = 18;
	uint16_t x727 = 39U;
	int32_t x728 = 25916233;
	int32_t t159 = -33209938;

    t159 = (x725<=(x726-(x727<=x728)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x730 = UINT8_MAX;
	uint16_t x731 = 0U;
	uint32_t x732 = 2697U;
	volatile int32_t t160 = 175916;

    t160 = (x729<=(x730-(x731<=x732)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x738 = -1;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t161 = 39731;

    t161 = (x737<=(x738-(x739<=x740)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = -1;
	int8_t x742 = -1;
	uint32_t x743 = UINT32_MAX;
	int32_t t162 = -6;

    t162 = (x741<=(x742-(x743<=x744)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x745 = 6803U;
	static uint8_t x746 = 6U;
	int8_t x747 = -45;

    t163 = (x745<=(x746-(x747<=x748)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x750 = INT16_MIN;
	int8_t x751 = -15;
	uint64_t x752 = UINT64_MAX;
	int32_t t164 = 31080914;

    t164 = (x749<=(x750-(x751<=x752)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x753 = INT64_MIN;
	static int16_t x754 = -491;
	uint32_t x755 = 13U;
	int32_t t165 = -1052;

    t165 = (x753<=(x754-(x755<=x756)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x757 = 5U;
	volatile int8_t x759 = INT8_MAX;
	uint32_t x760 = 1710U;
	int32_t t166 = 155088;

    t166 = (x757<=(x758-(x759<=x760)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x761 = INT16_MAX;
	int8_t x763 = 0;
	uint8_t x764 = 1U;
	int32_t t167 = -94;

    t167 = (x761<=(x762-(x763<=x764)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x769 = UINT16_MAX;
	int32_t x770 = INT32_MAX;
	int16_t x771 = -1;
	uint32_t x772 = UINT32_MAX;
	static volatile int32_t t168 = -19;

    t168 = (x769<=(x770-(x771<=x772)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x773 = 141U;
	static int16_t x774 = -98;
	volatile uint32_t x775 = 1450955U;
	int64_t x776 = 11859097335127208LL;
	static int32_t t169 = 26;

    t169 = (x773<=(x774-(x775<=x776)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x777 = INT32_MAX;
	int32_t x778 = INT32_MIN;
	static int16_t x779 = INT16_MAX;
	int64_t x780 = -22999796683882292LL;
	static int32_t t170 = 8;

    t170 = (x777<=(x778-(x779<=x780)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x781 = UINT64_MAX;
	int8_t x782 = -1;
	uint32_t x784 = UINT32_MAX;
	int32_t t171 = 828;

    t171 = (x781<=(x782-(x783<=x784)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x787 = INT16_MIN;
	volatile uint64_t x788 = 4308610896LLU;
	volatile int32_t t172 = 191353;

    t172 = (x785<=(x786-(x787<=x788)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = -1;
	int8_t x790 = 2;
	int8_t x792 = 2;
	int32_t t173 = -8874;

    t173 = (x789<=(x790-(x791<=x792)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x793 = 4U;
	uint32_t x794 = UINT32_MAX;
	static int64_t x795 = INT64_MIN;

    t174 = (x793<=(x794-(x795<=x796)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x797 = 18255424;
	static int32_t x798 = INT32_MIN;
	volatile uint16_t x799 = 30894U;
	int8_t x800 = INT8_MIN;

    t175 = (x797<=(x798-(x799<=x800)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x805 = -1LL;
	uint16_t x806 = 33U;
	int16_t x807 = INT16_MIN;
	uint64_t x808 = UINT64_MAX;

    t176 = (x805<=(x806-(x807<=x808)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x809 = 51U;
	static int16_t x810 = INT16_MIN;
	int8_t x812 = 12;
	int32_t t177 = 1;

    t177 = (x809<=(x810-(x811<=x812)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x814 = 1;
	int32_t x816 = INT32_MIN;
	volatile int32_t t178 = -1;

    t178 = (x813<=(x814-(x815<=x816)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x817 = UINT16_MAX;
	static uint64_t x818 = UINT64_MAX;
	uint16_t x819 = 30508U;
	int8_t x820 = INT8_MAX;
	volatile int32_t t179 = 78;

    t179 = (x817<=(x818-(x819<=x820)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x821 = -1;
	static int16_t x823 = INT16_MIN;
	static int32_t t180 = 435512;

    t180 = (x821<=(x822-(x823<=x824)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x825 = INT32_MIN;
	int64_t x826 = INT64_MAX;
	static int64_t x828 = INT64_MAX;
	int32_t t181 = 347337902;

    t181 = (x825<=(x826-(x827<=x828)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x829 = 152487;
	uint8_t x830 = UINT8_MAX;
	int16_t x831 = -1;
	volatile int16_t x832 = INT16_MAX;
	volatile int32_t t182 = 15310;

    t182 = (x829<=(x830-(x831<=x832)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x833 = -253;
	int8_t x834 = INT8_MIN;
	static volatile int16_t x835 = -126;
	uint16_t x836 = 51U;
	volatile int32_t t183 = 4;

    t183 = (x833<=(x834-(x835<=x836)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x837 = INT32_MIN;
	int16_t x838 = INT16_MIN;
	int16_t x839 = -1;
	int8_t x840 = 34;
	volatile int32_t t184 = 387;

    t184 = (x837<=(x838-(x839<=x840)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x842 = 109U;
	uint32_t x843 = 405810U;
	uint16_t x844 = 1277U;
	int32_t t185 = 15672;

    t185 = (x841<=(x842-(x843<=x844)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x846 = 204U;
	volatile int8_t x847 = 0;
	int32_t t186 = 3554;

    t186 = (x845<=(x846-(x847<=x848)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = -8045;
	int64_t x850 = INT64_MIN;
	int16_t x852 = -108;
	volatile int32_t t187 = -2774;

    t187 = (x849<=(x850-(x851<=x852)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x853 = 15U;
	int8_t x854 = -1;
	uint8_t x855 = 0U;
	volatile int64_t x856 = 1962680185LL;
	int32_t t188 = -429277073;

    t188 = (x853<=(x854-(x855<=x856)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x857 = 212578931;
	static uint8_t x858 = UINT8_MAX;
	volatile int8_t x859 = -1;

    t189 = (x857<=(x858-(x859<=x860)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x861 = -1;
	int64_t x862 = INT64_MIN;
	static volatile int64_t x863 = 1584530703865LL;
	int8_t x864 = INT8_MIN;
	volatile int32_t t190 = 20;

    t190 = (x861<=(x862-(x863<=x864)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x865 = INT32_MIN;
	int32_t x866 = INT32_MIN;
	int32_t x867 = INT32_MAX;
	static int32_t t191 = 13822;

    t191 = (x865<=(x866-(x867<=x868)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = -1;
	uint8_t x870 = UINT8_MAX;
	int64_t x871 = INT64_MAX;
	uint16_t x872 = UINT16_MAX;

    t192 = (x869<=(x870-(x871<=x872)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x873 = INT32_MIN;
	int64_t x874 = INT64_MAX;
	uint32_t x876 = UINT32_MAX;
	int32_t t193 = -894;

    t193 = (x873<=(x874-(x875<=x876)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x877 = 4LL;
	static int16_t x878 = INT16_MIN;
	int32_t x880 = -1;
	int32_t t194 = -89619133;

    t194 = (x877<=(x878-(x879<=x880)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x889 = INT16_MIN;
	int64_t x890 = -1LL;
	uint16_t x891 = 5554U;
	static int16_t x892 = INT16_MAX;
	int32_t t195 = 10;

    t195 = (x889<=(x890-(x891<=x892)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x893 = UINT64_MAX;
	static int64_t x894 = INT64_MIN;
	uint32_t x895 = 36U;
	static int64_t x896 = -1LL;

    t196 = (x893<=(x894-(x895<=x896)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x897 = -1;
	uint8_t x898 = UINT8_MAX;
	volatile int64_t x899 = -1LL;

    t197 = (x897<=(x898-(x899<=x900)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x901 = INT16_MIN;
	int8_t x902 = -1;
	int64_t x903 = INT64_MIN;

    t198 = (x901<=(x902-(x903<=x904)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x906 = 2710LLU;
	volatile int8_t x907 = INT8_MIN;
	volatile int32_t t199 = -247;

    t199 = (x905<=(x906-(x907<=x908)));

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

