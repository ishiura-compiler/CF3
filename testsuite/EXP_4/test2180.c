
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

uint8_t x2 = UINT8_MAX;
int32_t t0 = 1;
static volatile uint32_t x8 = 1U;
int16_t x12 = -578;
int64_t x14 = INT64_MAX;
int8_t x15 = 0;
static int32_t t4 = 3;
static int32_t t5 = 202584;
uint8_t x30 = 10U;
static uint32_t x38 = 1U;
uint64_t x43 = UINT64_MAX;
int64_t x48 = -1LL;
int32_t t11 = -702759;
int16_t x52 = -47;
int64_t x61 = INT64_MIN;
volatile int32_t t14 = 23;
static int8_t x71 = INT8_MAX;
uint16_t x75 = 473U;
int32_t x79 = INT32_MIN;
uint8_t x83 = 0U;
volatile int32_t t19 = 117;
int32_t t21 = -99482006;
int64_t x94 = INT64_MIN;
int16_t x98 = -394;
volatile int8_t x103 = INT8_MIN;
int32_t x106 = -1;
static int64_t x107 = -1LL;
int16_t x109 = INT16_MAX;
uint8_t x110 = 106U;
int8_t x112 = INT8_MIN;
int16_t x132 = 2124;
int32_t t32 = -7911;
volatile int32_t t33 = -10402;
int64_t x144 = INT64_MAX;
uint16_t x147 = 27619U;
uint64_t x156 = 7841593LLU;
int32_t x158 = 7;
volatile int8_t x170 = -1;
int32_t x171 = INT32_MIN;
int32_t t41 = 3079615;
uint32_t x177 = UINT32_MAX;
static uint32_t x184 = UINT32_MAX;
static uint64_t x193 = 356956582039LLU;
uint32_t x200 = 233889943U;
int8_t x202 = -1;
static int32_t t48 = 32850;
static uint32_t x208 = 4550879U;
static int32_t t51 = 1909171;
int8_t x217 = INT8_MIN;
int16_t x220 = INT16_MIN;
volatile int32_t t52 = -6;
int64_t x225 = INT64_MAX;
static int32_t x230 = -1;
int32_t x235 = INT32_MIN;
static int16_t x252 = 1337;
int32_t x255 = 806;
uint16_t x258 = UINT16_MAX;
int32_t t61 = 0;
static int8_t x264 = -1;
int32_t t62 = -2594;
int16_t x267 = -1;
int64_t x273 = INT64_MIN;
static uint64_t x279 = 1607978448730533282LLU;
uint8_t x290 = 4U;
int32_t t67 = -14;
static uint64_t x296 = 21878LLU;
int32_t x298 = INT32_MIN;
uint8_t x300 = 1U;
volatile int32_t x303 = INT32_MIN;
uint64_t x309 = 2LLU;
int16_t x310 = INT16_MAX;
uint8_t x311 = 62U;
uint64_t x312 = 12274126079LLU;
static int32_t t72 = 1112924;
int8_t x313 = INT8_MIN;
static int8_t x317 = INT8_MIN;
volatile uint16_t x320 = 24499U;
static volatile int32_t t74 = -1;
int8_t x324 = INT8_MIN;
volatile uint16_t x325 = UINT16_MAX;
int8_t x328 = INT8_MIN;
volatile int32_t t77 = -52809093;
static volatile int8_t x335 = INT8_MIN;
uint32_t x347 = 3132U;
int64_t x349 = -55512323630335LL;
uint8_t x352 = 0U;
volatile int8_t x356 = 1;
static uint16_t x359 = 2868U;
int16_t x365 = 30;
int64_t x368 = -1LL;
volatile int8_t x387 = 2;
volatile uint8_t x388 = UINT8_MAX;
volatile int32_t t89 = 0;
volatile int16_t x396 = INT16_MAX;
int64_t x398 = -1LL;
int64_t x399 = -4656371447LL;
static int64_t x402 = -1LL;
uint8_t x403 = 3U;
uint64_t x404 = 3LLU;
volatile int32_t t92 = 16;
uint64_t x406 = 970716LLU;
int64_t x407 = INT64_MAX;
uint32_t x410 = 30990443U;
static int32_t t94 = -2267670;
volatile uint8_t x413 = UINT8_MAX;
volatile int8_t x419 = -1;
static volatile int32_t t96 = 61507;
static int8_t x422 = -1;
int32_t x424 = -1;
volatile int8_t x426 = INT8_MAX;
int8_t x438 = -1;
static volatile int32_t t100 = -509078;
int64_t x441 = INT64_MIN;
int8_t x443 = INT8_MAX;
int32_t t105 = -27;
volatile int8_t x461 = INT8_MIN;
int8_t x465 = -1;
volatile int32_t t107 = -43954;
static int64_t x473 = -3354967LL;
int32_t x476 = -78362460;
uint64_t x484 = UINT64_MAX;
int16_t x485 = INT16_MIN;
volatile int32_t t112 = -4800;
static volatile int16_t x497 = INT16_MAX;
int64_t x500 = -1LL;
volatile int8_t x504 = INT8_MIN;
volatile uint32_t x506 = 15242571U;
volatile int32_t t116 = 74206;
static int16_t x511 = INT16_MIN;
int32_t x518 = -86184;
int32_t x520 = INT32_MIN;
static volatile int16_t x526 = INT16_MAX;
int16_t x527 = 386;
uint8_t x529 = UINT8_MAX;
static int16_t x530 = INT16_MIN;
int32_t x532 = INT32_MIN;
uint64_t x535 = UINT64_MAX;
static volatile uint8_t x540 = 22U;
static volatile int64_t x542 = 35146759LL;
int8_t x549 = INT8_MAX;
uint16_t x551 = 1247U;
int16_t x552 = INT16_MIN;
uint16_t x556 = 519U;
int32_t t127 = 12751100;
int32_t x558 = INT32_MAX;
int32_t t129 = 108;
uint32_t x571 = UINT32_MAX;
int8_t x575 = 3;
volatile int32_t t132 = -35607;
volatile int8_t x577 = -1;
int8_t x580 = 7;
int32_t x581 = 119241;
uint64_t x583 = 12LLU;
uint32_t x588 = UINT32_MAX;
volatile int32_t x593 = 250198075;
int8_t x594 = -48;
volatile uint16_t x603 = 497U;
volatile int32_t x604 = 1854004;
uint8_t x606 = UINT8_MAX;
int32_t x607 = 1013;
int16_t x611 = 1973;
int32_t t140 = -4;
volatile uint8_t x617 = UINT8_MAX;
uint64_t x629 = 219360LLU;
int64_t x632 = INT64_MIN;
uint32_t x637 = 126U;
static int8_t x645 = 0;
uint64_t x646 = 530203623LLU;
int64_t x654 = -114465882895781796LL;
int64_t x659 = 7351354LL;
int16_t x664 = INT16_MAX;
int32_t t151 = -17;
int16_t x672 = 19;
static int16_t x682 = -12;
volatile int16_t x686 = 22;
uint32_t x688 = 5440U;
volatile int64_t x695 = -156711134LL;
uint32_t x696 = 11U;
int16_t x699 = INT16_MAX;
static int8_t x702 = INT8_MAX;
int8_t x710 = INT8_MAX;
static int32_t t163 = -87215;
int8_t x717 = -7;
int8_t x721 = 5;
int64_t x722 = -230776LL;
int32_t t165 = 16851405;
static int8_t x727 = INT8_MIN;
uint64_t x739 = 26839133294499LLU;
volatile uint64_t x741 = 21731385LLU;
volatile int32_t x742 = -147;
int64_t x746 = -2LL;
int32_t t171 = 37;
int64_t x749 = INT64_MIN;
volatile uint64_t x752 = 709809LLU;
int32_t t172 = -135;
uint16_t x755 = 1U;
uint64_t x756 = UINT64_MAX;
int32_t x760 = 3079;
volatile uint64_t x762 = 4020LLU;
int8_t x763 = INT8_MAX;
volatile uint16_t x765 = 15544U;
int64_t x768 = INT64_MIN;
int16_t x771 = -41;
volatile int32_t t177 = -1343010;
int64_t x773 = INT64_MIN;
static uint64_t x776 = 51626246317107LLU;
int16_t x782 = INT16_MAX;
volatile uint16_t x791 = UINT16_MAX;
volatile int32_t t181 = 69233666;
static int8_t x793 = INT8_MIN;
static uint32_t x796 = 371095878U;
int32_t t182 = 854310;
uint64_t x799 = 95582821984LLU;
static volatile uint16_t x802 = UINT16_MAX;
int8_t x804 = INT8_MIN;
int64_t x806 = 30367029LL;
int8_t x820 = INT8_MIN;
int32_t x821 = 12;
static volatile int32_t x824 = INT32_MIN;
int32_t t191 = 890722903;
volatile int32_t x859 = -1;
uint16_t x867 = 3275U;


void f0(void) {
    	uint16_t x1 = 165U;
	int8_t x3 = -1;
	int8_t x4 = -1;

    t0 = (x1<=(x2-(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = 0;
	volatile int32_t t1 = 35;

    t1 = (x5<=(x6-(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 51U;
	static int32_t x10 = INT32_MIN;
	static int8_t x11 = -4;
	static volatile int32_t t2 = -45698;

    t2 = (x9<=(x10-(x11&x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -1;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = 139889;

    t3 = (x13<=(x14-(x15&x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 58;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = INT8_MIN;
	static int64_t x20 = -7453LL;

    t4 = (x17<=(x18-(x19&x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 16223927LLU;
	volatile int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MAX;
	uint64_t x24 = 4686407398651411LLU;

    t5 = (x21<=(x22-(x23&x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int32_t x26 = 432571877;
	volatile uint32_t x27 = 15324482U;
	static uint64_t x28 = 15240LLU;
	int32_t t6 = -79;

    t6 = (x25<=(x26-(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 121U;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = 3062;

    t7 = (x29<=(x30-(x31&x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MAX;
	static volatile uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 7430U;
	volatile int32_t t8 = -33385682;

    t8 = (x33<=(x34-(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	static uint8_t x40 = UINT8_MAX;
	int32_t t9 = 1;

    t9 = (x37<=(x38-(x39&x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 20U;
	volatile int64_t x42 = -1LL;
	uint16_t x44 = 14851U;
	volatile int32_t t10 = -1187;

    t10 = (x41<=(x42-(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MAX;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = UINT32_MAX;

    t11 = (x45<=(x46-(x47&x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	static volatile int64_t x50 = -1LL;
	static volatile int16_t x51 = 1246;
	static volatile int32_t t12 = 64986455;

    t12 = (x49<=(x50-(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	uint8_t x58 = 115U;
	uint16_t x59 = UINT16_MAX;
	volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t13 = -104655639;

    t13 = (x57<=(x58-(x59&x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x62 = UINT32_MAX;
	static uint8_t x63 = 6U;
	int64_t x64 = -1LL;

    t14 = (x61<=(x62-(x63&x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = -1;
	int8_t x66 = 50;
	volatile int32_t x67 = -27972;
	static uint8_t x68 = 2U;
	volatile int32_t t15 = -4250;

    t15 = (x65<=(x66-(x67&x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 300260673127LLU;
	int32_t x70 = INT32_MIN;
	static volatile int16_t x72 = INT16_MIN;
	int32_t t16 = -137047;

    t16 = (x69<=(x70-(x71&x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	int32_t x74 = INT32_MIN;
	static int64_t x76 = -760514LL;
	int32_t t17 = -34;

    t17 = (x73<=(x74-(x75&x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	int32_t t18 = 114;

    t18 = (x77<=(x78-(x79&x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = -3882950478400LL;
	uint8_t x82 = UINT8_MAX;
	int16_t x84 = 202;

    t19 = (x81<=(x82-(x83&x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	int16_t x86 = 43;
	int8_t x87 = -1;
	int16_t x88 = INT16_MIN;
	static int32_t t20 = -306189885;

    t20 = (x85<=(x86-(x87&x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 2U;
	static int8_t x90 = INT8_MIN;
	static int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;

    t21 = (x89<=(x90-(x91&x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = UINT32_MAX;
	int8_t x95 = INT8_MIN;
	volatile uint8_t x96 = 1U;
	volatile int32_t t22 = 783331;

    t22 = (x93<=(x94-(x95&x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = UINT8_MAX;
	int64_t x99 = INT64_MAX;
	volatile int64_t x100 = 92933733246342222LL;
	int32_t t23 = 94;

    t23 = (x97<=(x98-(x99&x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MAX;
	static int8_t x102 = -1;
	int8_t x104 = INT8_MAX;
	int32_t t24 = 44;

    t24 = (x101<=(x102-(x103&x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -125986996LL;
	int64_t x108 = 169994641433LL;
	volatile int32_t t25 = 112;

    t25 = (x105<=(x106-(x107&x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x111 = -1;
	int32_t t26 = -3;

    t26 = (x109<=(x110-(x111&x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = 551392;
	uint64_t x114 = UINT64_MAX;
	volatile uint64_t x115 = 20LLU;
	int8_t x116 = -1;
	static int32_t t27 = -390732;

    t27 = (x113<=(x114-(x115&x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -6;
	int32_t x118 = -1;
	uint8_t x119 = 4U;
	static int64_t x120 = -1LL;
	static volatile int32_t t28 = -689348485;

    t28 = (x117<=(x118-(x119&x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = INT16_MIN;
	volatile int16_t x122 = INT16_MIN;
	int8_t x123 = -1;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t29 = 0;

    t29 = (x121<=(x122-(x123&x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -1;
	int16_t x126 = -139;
	int64_t x127 = -207LL;
	uint8_t x128 = 21U;
	int32_t t30 = -5797;

    t30 = (x125<=(x126-(x127&x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = 29893U;
	int8_t x130 = -27;
	volatile int64_t x131 = -1LL;
	int32_t t31 = 1;

    t31 = (x129<=(x130-(x131&x132)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = 828;
	uint32_t x134 = 106U;
	uint64_t x135 = 4409126LLU;
	int32_t x136 = INT32_MIN;

    t32 = (x133<=(x134-(x135&x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 256948U;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;
	int32_t x140 = 610745688;

    t33 = (x137<=(x138-(x139&x140)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 46U;
	int16_t x142 = -1508;
	uint16_t x143 = 0U;
	static volatile int32_t t34 = -106;

    t34 = (x141<=(x142-(x143&x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	uint64_t x148 = 8230931097708498788LLU;
	int32_t t35 = -2362;

    t35 = (x145<=(x146-(x147&x148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x153 = 9U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	volatile int32_t t36 = 1;

    t36 = (x153<=(x154-(x155&x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	int32_t x159 = -358;
	int64_t x160 = INT64_MAX;
	static volatile int32_t t37 = 519611;

    t37 = (x157<=(x158-(x159&x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 1LLU;
	int32_t x162 = INT32_MAX;
	static volatile uint64_t x163 = UINT64_MAX;
	volatile uint32_t x164 = UINT32_MAX;
	volatile int32_t t38 = 10013;

    t38 = (x161<=(x162-(x163&x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x165 = 1U;
	int64_t x166 = INT64_MAX;
	static uint8_t x167 = 1U;
	int32_t x168 = -1;
	static volatile int32_t t39 = -67088840;

    t39 = (x165<=(x166-(x167&x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = 7714U;
	int16_t x172 = -1;
	volatile int32_t t40 = 30;

    t40 = (x169<=(x170-(x171&x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = 652397245619LL;
	int64_t x174 = -1LL;
	static volatile int8_t x175 = -35;
	static volatile int16_t x176 = INT16_MIN;

    t41 = (x173<=(x174-(x175&x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x178 = -515771090842911018LL;
	static volatile int8_t x179 = INT8_MIN;
	volatile int32_t x180 = 62677;
	volatile int32_t t42 = 15040;

    t42 = (x177<=(x178-(x179&x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 26394060645LLU;
	volatile uint64_t x182 = 6516LLU;
	static int32_t x183 = -1;
	volatile int32_t t43 = 48050;

    t43 = (x181<=(x182-(x183&x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 31U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MAX;
	static volatile uint16_t x188 = UINT16_MAX;
	int32_t t44 = 9205540;

    t44 = (x185<=(x186-(x187&x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = INT32_MAX;
	int8_t x190 = -1;
	int8_t x191 = -1;
	int32_t x192 = -349614468;
	volatile int32_t t45 = -1;

    t45 = (x189<=(x190-(x191&x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x194 = INT16_MAX;
	int32_t x195 = -1;
	uint8_t x196 = 12U;
	int32_t t46 = -4404196;

    t46 = (x193<=(x194-(x195&x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	uint16_t x198 = 26665U;
	int32_t x199 = -1;
	int32_t t47 = -1;

    t47 = (x197<=(x198-(x199&x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = INT16_MAX;
	volatile uint8_t x203 = 0U;
	int8_t x204 = INT8_MIN;

    t48 = (x201<=(x202-(x203&x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 31U;
	int64_t x206 = INT64_MAX;
	int32_t x207 = INT32_MAX;
	int32_t t49 = 2570366;

    t49 = (x205<=(x206-(x207&x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t50 = -1;

    t50 = (x209<=(x210-(x211&x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = 3LL;
	int8_t x214 = -1;
	int64_t x215 = INT64_MAX;
	int64_t x216 = INT64_MIN;

    t51 = (x213<=(x214-(x215&x216)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x218 = INT8_MIN;
	uint32_t x219 = 177U;

    t52 = (x217<=(x218-(x219&x220)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	int64_t x222 = -23405483308LL;
	volatile int8_t x223 = 0;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t53 = -2;

    t53 = (x221<=(x222-(x223&x224)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t54 = -1122073;

    t54 = (x225<=(x226-(x227&x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MIN;
	uint16_t x231 = 18U;
	int16_t x232 = -33;
	volatile int32_t t55 = 331747494;

    t55 = (x229<=(x230-(x231&x232)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x233 = 97874071LLU;
	int32_t x234 = INT32_MIN;
	volatile int32_t x236 = -1525;
	static int32_t t56 = 144083;

    t56 = (x233<=(x234-(x235&x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x241 = UINT16_MAX;
	volatile int16_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	uint16_t x244 = 509U;
	int32_t t57 = 105661;

    t57 = (x241<=(x242-(x243&x244)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x245 = 9176100454362LLU;
	int8_t x246 = INT8_MAX;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 25358U;
	volatile int32_t t58 = 970820;

    t58 = (x245<=(x246-(x247&x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x249 = 6823005047958343LLU;
	int16_t x250 = -1;
	int32_t x251 = INT32_MAX;
	int32_t t59 = 19860093;

    t59 = (x249<=(x250-(x251&x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = 1194U;
	static volatile uint16_t x254 = 376U;
	int16_t x256 = INT16_MAX;
	static volatile int32_t t60 = 580641;

    t60 = (x253<=(x254-(x255&x256)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x257 = -1;
	volatile int8_t x259 = -1;
	uint32_t x260 = UINT32_MAX;

    t61 = (x257<=(x258-(x259&x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x261 = -60;
	int8_t x262 = INT8_MAX;
	uint32_t x263 = UINT32_MAX;

    t62 = (x261<=(x262-(x263&x264)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x265 = INT64_MIN;
	int32_t x266 = -1;
	int8_t x268 = INT8_MIN;
	int32_t t63 = 25236107;

    t63 = (x265<=(x266-(x267&x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x274 = INT32_MAX;
	int32_t x275 = 0;
	int16_t x276 = -7143;
	static volatile int32_t t64 = -411898;

    t64 = (x273<=(x274-(x275&x276)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = -62163LL;
	uint8_t x278 = 6U;
	volatile int32_t x280 = INT32_MIN;
	static volatile int32_t t65 = 4640653;

    t65 = (x277<=(x278-(x279&x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x285 = INT16_MIN;
	volatile int32_t x286 = -1;
	int64_t x287 = -12LL;
	static int32_t x288 = -5;
	int32_t t66 = 23481183;

    t66 = (x285<=(x286-(x287&x288)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x289 = 1787U;
	uint32_t x291 = 1U;
	volatile uint16_t x292 = 242U;

    t67 = (x289<=(x290-(x291&x292)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x293 = 47;
	int64_t x294 = INT64_MAX;
	int16_t x295 = 7820;
	volatile int32_t t68 = -758;

    t68 = (x293<=(x294-(x295&x296)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = INT64_MAX;
	volatile int64_t x299 = INT64_MIN;
	int32_t t69 = 4666993;

    t69 = (x297<=(x298-(x299&x300)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x301 = 4U;
	uint64_t x302 = 1977444866758178251LLU;
	volatile uint32_t x304 = 434565U;
	volatile int32_t t70 = 11453;

    t70 = (x301<=(x302-(x303&x304)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = -130;
	int32_t t71 = -3796;

    t71 = (x305<=(x306-(x307&x308)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    

    t72 = (x309<=(x310-(x311&x312)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x314 = -1;
	uint8_t x315 = 53U;
	int32_t x316 = -6073;
	volatile int32_t t73 = 23097;

    t73 = (x313<=(x314-(x315&x316)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x318 = -5541873LL;
	int8_t x319 = -5;

    t74 = (x317<=(x318-(x319&x320)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x321 = 1;
	uint16_t x322 = UINT16_MAX;
	static volatile int8_t x323 = -2;
	int32_t t75 = 27213;

    t75 = (x321<=(x322-(x323&x324)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x326 = INT8_MIN;
	int8_t x327 = -1;
	volatile int32_t t76 = 7223611;

    t76 = (x325<=(x326-(x327&x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x329 = INT8_MIN;
	static int64_t x330 = -1LL;
	volatile int8_t x331 = 1;
	int16_t x332 = -1;

    t77 = (x329<=(x330-(x331&x332)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x334 = -1LL;
	int64_t x336 = INT64_MAX;
	int32_t t78 = -3;

    t78 = (x333<=(x334-(x335&x336)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x341 = UINT8_MAX;
	static uint32_t x342 = UINT32_MAX;
	int64_t x343 = -1LL;
	int8_t x344 = -40;
	int32_t t79 = -9957;

    t79 = (x341<=(x342-(x343&x344)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x345 = 7857;
	uint32_t x346 = UINT32_MAX;
	static int64_t x348 = INT64_MIN;
	int32_t t80 = 5089;

    t80 = (x345<=(x346-(x347&x348)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x350 = -1;
	uint8_t x351 = 5U;
	volatile int32_t t81 = 243;

    t81 = (x349<=(x350-(x351&x352)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = 62;
	int32_t x355 = -1;
	static int32_t t82 = 7;

    t82 = (x353<=(x354-(x355&x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	uint8_t x360 = 13U;
	int32_t t83 = -614972;

    t83 = (x357<=(x358-(x359&x360)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x366 = INT8_MAX;
	int32_t x367 = INT32_MIN;
	volatile int32_t t84 = -228;

    t84 = (x365<=(x366-(x367&x368)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x369 = -1;
	int16_t x370 = 0;
	volatile int64_t x371 = -257239765456LL;
	volatile int8_t x372 = INT8_MIN;
	static int32_t t85 = 11503077;

    t85 = (x369<=(x370-(x371&x372)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x377 = -641771444LL;
	int32_t x378 = -269160;
	static int64_t x379 = INT64_MAX;
	static volatile int64_t x380 = 562817884LL;
	volatile int32_t t86 = 108867996;

    t86 = (x377<=(x378-(x379&x380)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x381 = 11U;
	volatile int8_t x382 = INT8_MAX;
	static volatile uint8_t x383 = UINT8_MAX;
	int8_t x384 = -1;
	static volatile int32_t t87 = 47056419;

    t87 = (x381<=(x382-(x383&x384)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x385 = INT8_MAX;
	int64_t x386 = INT64_MAX;
	volatile int32_t t88 = 72209504;

    t88 = (x385<=(x386-(x387&x388)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = -100;
	static volatile int8_t x390 = -2;
	uint16_t x391 = 12272U;
	uint8_t x392 = 0U;

    t89 = (x389<=(x390-(x391&x392)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x393 = 6U;
	static uint8_t x394 = 10U;
	int16_t x395 = -1;
	volatile int32_t t90 = -149;

    t90 = (x393<=(x394-(x395&x396)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x397 = 351274894585485934LL;
	int64_t x400 = INT64_MAX;
	volatile int32_t t91 = 4021;

    t91 = (x397<=(x398-(x399&x400)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x401 = -1;

    t92 = (x401<=(x402-(x403&x404)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x405 = 1;
	int16_t x408 = INT16_MIN;
	int32_t t93 = 14941;

    t93 = (x405<=(x406-(x407&x408)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x409 = UINT64_MAX;
	uint64_t x411 = 45881087LLU;
	int16_t x412 = INT16_MIN;

    t94 = (x409<=(x410-(x411&x412)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x414 = UINT64_MAX;
	int32_t x415 = -1;
	static int64_t x416 = INT64_MIN;
	static int32_t t95 = 808696;

    t95 = (x413<=(x414-(x415&x416)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x417 = 30003LLU;
	int16_t x418 = 1;
	static int16_t x420 = INT16_MIN;

    t96 = (x417<=(x418-(x419&x420)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x421 = -23LL;
	int16_t x423 = -5655;
	volatile int32_t t97 = -411;

    t97 = (x421<=(x422-(x423&x424)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x425 = -80174;
	static int16_t x427 = -7725;
	int64_t x428 = 111358686113004LL;
	int32_t t98 = 999054;

    t98 = (x425<=(x426-(x427&x428)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x433 = -1LL;
	int8_t x434 = -24;
	uint8_t x435 = 40U;
	static uint32_t x436 = 11563209U;
	volatile int32_t t99 = -27934334;

    t99 = (x433<=(x434-(x435&x436)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x437 = 47LLU;
	int32_t x439 = -27797559;
	int32_t x440 = INT32_MIN;

    t100 = (x437<=(x438-(x439&x440)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x442 = -4088062742LL;
	int64_t x444 = -1LL;
	volatile int32_t t101 = -435;

    t101 = (x441<=(x442-(x443&x444)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x445 = 14U;
	volatile int16_t x446 = INT16_MIN;
	static volatile int64_t x447 = -199716771044LL;
	volatile int16_t x448 = 0;
	int32_t t102 = -67;

    t102 = (x445<=(x446-(x447&x448)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x449 = -1;
	int16_t x450 = INT16_MAX;
	int8_t x451 = INT8_MIN;
	static uint32_t x452 = UINT32_MAX;
	static int32_t t103 = 1;

    t103 = (x449<=(x450-(x451&x452)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x453 = -9528;
	static int16_t x454 = 1;
	uint8_t x455 = UINT8_MAX;
	int16_t x456 = -10;
	static int32_t t104 = 4630255;

    t104 = (x453<=(x454-(x455&x456)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x457 = INT32_MAX;
	int16_t x458 = INT16_MIN;
	static uint16_t x459 = UINT16_MAX;
	uint64_t x460 = UINT64_MAX;

    t105 = (x457<=(x458-(x459&x460)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x462 = INT8_MIN;
	static volatile int64_t x463 = INT64_MIN;
	int64_t x464 = -1LL;
	volatile int32_t t106 = 3564206;

    t106 = (x461<=(x462-(x463&x464)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MAX;
	int8_t x468 = 0;

    t107 = (x465<=(x466-(x467&x468)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x469 = 6U;
	static int64_t x470 = -202022584917617616LL;
	volatile int16_t x471 = 15490;
	static uint16_t x472 = UINT16_MAX;
	int32_t t108 = -75788;

    t108 = (x469<=(x470-(x471&x472)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x474 = UINT64_MAX;
	volatile int8_t x475 = INT8_MIN;
	int32_t t109 = 1;

    t109 = (x473<=(x474-(x475&x476)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x477 = -1;
	int32_t x478 = -1;
	int32_t x479 = -1;
	uint32_t x480 = 0U;
	volatile int32_t t110 = -396111;

    t110 = (x477<=(x478-(x479&x480)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x481 = INT8_MIN;
	int16_t x482 = -1;
	int32_t x483 = INT32_MIN;
	int32_t t111 = -473730508;

    t111 = (x481<=(x482-(x483&x484)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x486 = 3652614158248985LLU;
	int64_t x487 = -1LL;
	int16_t x488 = INT16_MIN;

    t112 = (x485<=(x486-(x487&x488)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x494 = INT16_MIN;
	uint64_t x495 = UINT64_MAX;
	int16_t x496 = INT16_MIN;
	int32_t t113 = 0;

    t113 = (x493<=(x494-(x495&x496)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x498 = 72;
	volatile uint16_t x499 = 12U;
	volatile int32_t t114 = 1;

    t114 = (x497<=(x498-(x499&x500)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = -1;
	int8_t x502 = INT8_MIN;
	int16_t x503 = INT16_MAX;
	int32_t t115 = 1;

    t115 = (x501<=(x502-(x503&x504)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x505 = -19249026623451LL;
	int16_t x507 = -1;
	static int32_t x508 = INT32_MIN;

    t116 = (x505<=(x506-(x507&x508)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x509 = INT16_MAX;
	uint16_t x510 = 5U;
	int16_t x512 = INT16_MIN;
	volatile int32_t t117 = -54460;

    t117 = (x509<=(x510-(x511&x512)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x513 = -1;
	uint8_t x514 = 0U;
	uint32_t x515 = 4027U;
	int64_t x516 = INT64_MIN;
	volatile int32_t t118 = 291;

    t118 = (x513<=(x514-(x515&x516)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x517 = -1;
	volatile int8_t x519 = INT8_MAX;
	static volatile int32_t t119 = -590532853;

    t119 = (x517<=(x518-(x519&x520)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x521 = 1U;
	volatile uint32_t x522 = 10096492U;
	int64_t x523 = 11785329LL;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t120 = 83092;

    t120 = (x521<=(x522-(x523&x524)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x525 = 220LLU;
	int64_t x528 = -1676642LL;
	int32_t t121 = 225284570;

    t121 = (x525<=(x526-(x527&x528)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x531 = 15;
	int32_t t122 = 760;

    t122 = (x529<=(x530-(x531&x532)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x533 = 6U;
	int64_t x534 = INT64_MAX;
	int64_t x536 = INT64_MIN;
	static volatile int32_t t123 = -17209;

    t123 = (x533<=(x534-(x535&x536)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = -1LL;
	uint32_t x538 = 117249U;
	int32_t x539 = INT32_MAX;
	int32_t t124 = -465053083;

    t124 = (x537<=(x538-(x539&x540)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x541 = 116137889120553991LL;
	uint32_t x543 = 18704315U;
	static volatile uint16_t x544 = 20029U;
	int32_t t125 = 0;

    t125 = (x541<=(x542-(x543&x544)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x550 = 3358184;
	static int32_t t126 = 14208092;

    t126 = (x549<=(x550-(x551&x552)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x553 = 7035;
	volatile int64_t x554 = 16877869285906258LL;
	int8_t x555 = INT8_MAX;

    t127 = (x553<=(x554-(x555&x556)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x557 = INT8_MIN;
	static int64_t x559 = 144547091507LL;
	static volatile uint8_t x560 = UINT8_MAX;
	static int32_t t128 = -738;

    t128 = (x557<=(x558-(x559&x560)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x561 = INT8_MIN;
	volatile int64_t x562 = 27756503LL;
	static uint64_t x563 = 1108LLU;
	int8_t x564 = 2;

    t129 = (x561<=(x562-(x563&x564)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x565 = -17LL;
	int8_t x566 = INT8_MIN;
	volatile uint32_t x567 = UINT32_MAX;
	int64_t x568 = INT64_MAX;
	volatile int32_t t130 = 6855;

    t130 = (x565<=(x566-(x567&x568)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x569 = 0;
	uint32_t x570 = 4433U;
	uint64_t x572 = UINT64_MAX;
	int32_t t131 = 7262;

    t131 = (x569<=(x570-(x571&x572)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = -1LL;
	int8_t x576 = INT8_MIN;

    t132 = (x573<=(x574-(x575&x576)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x578 = UINT8_MAX;
	int32_t x579 = -4083;
	int32_t t133 = -1447;

    t133 = (x577<=(x578-(x579&x580)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x582 = INT64_MAX;
	int32_t x584 = INT32_MIN;
	int32_t t134 = -110290;

    t134 = (x581<=(x582-(x583&x584)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x585 = 53794257318512LL;
	int8_t x586 = 1;
	uint16_t x587 = UINT16_MAX;
	int32_t t135 = 1;

    t135 = (x585<=(x586-(x587&x588)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x595 = -1;
	int64_t x596 = -348884LL;
	volatile int32_t t136 = 5688;

    t136 = (x593<=(x594-(x595&x596)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x597 = 26U;
	volatile int16_t x598 = 23;
	uint16_t x599 = 4940U;
	uint8_t x600 = 92U;
	int32_t t137 = -171328;

    t137 = (x597<=(x598-(x599&x600)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x601 = UINT8_MAX;
	int8_t x602 = 1;
	static int32_t t138 = -48;

    t138 = (x601<=(x602-(x603&x604)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x605 = 1U;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t139 = -10561990;

    t139 = (x605<=(x606-(x607&x608)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x609 = -82966149553LL;
	int32_t x610 = -1;
	int64_t x612 = -370LL;

    t140 = (x609<=(x610-(x611&x612)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x613 = 228U;
	uint8_t x614 = UINT8_MAX;
	static uint16_t x615 = UINT16_MAX;
	uint64_t x616 = 108933700668LLU;
	int32_t t141 = -11265;

    t141 = (x613<=(x614-(x615&x616)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x618 = INT16_MIN;
	static int8_t x619 = -2;
	int8_t x620 = 4;
	static volatile int32_t t142 = -871481059;

    t142 = (x617<=(x618-(x619&x620)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x621 = 24U;
	int32_t x622 = -91506;
	int8_t x623 = INT8_MAX;
	int16_t x624 = INT16_MAX;
	static int32_t t143 = 0;

    t143 = (x621<=(x622-(x623&x624)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x630 = INT64_MAX;
	static uint64_t x631 = 11LLU;
	volatile int32_t t144 = -3;

    t144 = (x629<=(x630-(x631&x632)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x633 = 972U;
	volatile int16_t x634 = -3;
	int16_t x635 = INT16_MAX;
	static int32_t x636 = INT32_MAX;
	int32_t t145 = 12430;

    t145 = (x633<=(x634-(x635&x636)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x638 = -28;
	static int32_t x639 = INT32_MIN;
	volatile uint64_t x640 = 499725444179167401LLU;
	int32_t t146 = -1;

    t146 = (x637<=(x638-(x639&x640)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x641 = UINT16_MAX;
	int8_t x642 = INT8_MIN;
	static int16_t x643 = -14;
	volatile uint16_t x644 = 785U;
	volatile int32_t t147 = -1525;

    t147 = (x641<=(x642-(x643&x644)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x647 = UINT8_MAX;
	uint8_t x648 = 14U;
	volatile int32_t t148 = -110613;

    t148 = (x645<=(x646-(x647&x648)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x653 = 80U;
	int64_t x655 = INT64_MIN;
	static int32_t x656 = INT32_MIN;
	volatile int32_t t149 = 2019300;

    t149 = (x653<=(x654-(x655&x656)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x657 = INT64_MAX;
	int8_t x658 = -3;
	int64_t x660 = INT64_MAX;
	int32_t t150 = 335919;

    t150 = (x657<=(x658-(x659&x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x661 = 317;
	int64_t x662 = INT64_MIN;
	int16_t x663 = INT16_MIN;

    t151 = (x661<=(x662-(x663&x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x665 = -1LL;
	int32_t x666 = -2008;
	static uint32_t x667 = 212U;
	int32_t x668 = -125785138;
	int32_t t152 = -1;

    t152 = (x665<=(x666-(x667&x668)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x669 = INT64_MIN;
	int16_t x670 = -1;
	uint64_t x671 = 1024959172355LLU;
	int32_t t153 = -12;

    t153 = (x669<=(x670-(x671&x672)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x677 = INT64_MIN;
	volatile int16_t x678 = -10579;
	uint64_t x679 = 119LLU;
	volatile int64_t x680 = -1LL;
	int32_t t154 = -944923;

    t154 = (x677<=(x678-(x679&x680)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x681 = -1;
	int16_t x683 = INT16_MAX;
	int16_t x684 = -194;
	volatile int32_t t155 = 158247;

    t155 = (x681<=(x682-(x683&x684)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x685 = 1232647U;
	int32_t x687 = -1;
	static volatile int32_t t156 = 0;

    t156 = (x685<=(x686-(x687&x688)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x689 = 3219U;
	int8_t x690 = INT8_MAX;
	volatile uint16_t x691 = 2U;
	static int64_t x692 = INT64_MIN;
	volatile int32_t t157 = 82;

    t157 = (x689<=(x690-(x691&x692)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x693 = INT16_MIN;
	static uint32_t x694 = UINT32_MAX;
	int32_t t158 = 3635308;

    t158 = (x693<=(x694-(x695&x696)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x697 = INT64_MIN;
	volatile int64_t x698 = INT64_MIN;
	int16_t x700 = INT16_MIN;
	int32_t t159 = -84853371;

    t159 = (x697<=(x698-(x699&x700)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x701 = 52;
	volatile uint16_t x703 = 967U;
	int32_t x704 = 117;
	volatile int32_t t160 = -810826;

    t160 = (x701<=(x702-(x703&x704)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x705 = INT64_MIN;
	static volatile int64_t x706 = INT64_MIN;
	static int8_t x707 = INT8_MIN;
	volatile uint64_t x708 = UINT64_MAX;
	volatile int32_t t161 = -1;

    t161 = (x705<=(x706-(x707&x708)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x709 = 111203536028LLU;
	static uint32_t x711 = 4144199U;
	static int16_t x712 = INT16_MIN;
	volatile int32_t t162 = -22022;

    t162 = (x709<=(x710-(x711&x712)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x713 = INT8_MAX;
	static int8_t x714 = INT8_MIN;
	int16_t x715 = INT16_MAX;
	uint32_t x716 = 217148485U;

    t163 = (x713<=(x714-(x715&x716)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x718 = 5074371002LL;
	uint8_t x719 = UINT8_MAX;
	int16_t x720 = INT16_MIN;
	static volatile int32_t t164 = 148809;

    t164 = (x717<=(x718-(x719&x720)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x723 = INT64_MIN;
	int32_t x724 = 18;

    t165 = (x721<=(x722-(x723&x724)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x725 = UINT16_MAX;
	int32_t x726 = 46;
	int64_t x728 = INT64_MAX;
	volatile int32_t t166 = -63466711;

    t166 = (x725<=(x726-(x727&x728)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x729 = UINT8_MAX;
	static volatile int64_t x730 = INT64_MAX;
	uint8_t x731 = 14U;
	uint8_t x732 = 0U;
	volatile int32_t t167 = -28;

    t167 = (x729<=(x730-(x731&x732)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x733 = -1;
	volatile int32_t x734 = 14050152;
	int8_t x735 = INT8_MIN;
	static int64_t x736 = 650712783482467LL;
	int32_t t168 = -3781;

    t168 = (x733<=(x734-(x735&x736)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x737 = -1;
	uint16_t x738 = 7297U;
	static uint16_t x740 = 6605U;
	volatile int32_t t169 = 3;

    t169 = (x737<=(x738-(x739&x740)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x743 = -1804930196292LL;
	uint64_t x744 = 109586284478084LLU;
	int32_t t170 = 128073;

    t170 = (x741<=(x742-(x743&x744)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x745 = UINT8_MAX;
	uint32_t x747 = 0U;
	static volatile int64_t x748 = INT64_MIN;

    t171 = (x745<=(x746-(x747&x748)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x750 = -1;
	static volatile int64_t x751 = INT64_MIN;

    t172 = (x749<=(x750-(x751&x752)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x753 = INT8_MAX;
	uint32_t x754 = 64737U;
	int32_t t173 = 2;

    t173 = (x753<=(x754-(x755&x756)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x757 = INT8_MIN;
	int32_t x758 = -31794915;
	uint32_t x759 = UINT32_MAX;
	int32_t t174 = -6997;

    t174 = (x757<=(x758-(x759&x760)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x761 = 7966U;
	int16_t x764 = -11;
	volatile int32_t t175 = -2749;

    t175 = (x761<=(x762-(x763&x764)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x766 = INT16_MAX;
	static uint32_t x767 = UINT32_MAX;
	volatile int32_t t176 = -222;

    t176 = (x765<=(x766-(x767&x768)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x769 = -5002401;
	int16_t x770 = -1;
	uint8_t x772 = 62U;

    t177 = (x769<=(x770-(x771&x772)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x774 = 3U;
	static uint32_t x775 = UINT32_MAX;
	volatile int32_t t178 = 94795;

    t178 = (x773<=(x774-(x775&x776)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x781 = -1LL;
	static int16_t x783 = INT16_MIN;
	static uint8_t x784 = 93U;
	int32_t t179 = -241862;

    t179 = (x781<=(x782-(x783&x784)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x785 = -342;
	int32_t x786 = INT32_MIN;
	uint64_t x787 = 253164330458LLU;
	uint8_t x788 = 7U;
	volatile int32_t t180 = -385396535;

    t180 = (x785<=(x786-(x787&x788)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x789 = -1LL;
	uint32_t x790 = 1122932850U;
	uint64_t x792 = 457049895497912LLU;

    t181 = (x789<=(x790-(x791&x792)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x794 = 845055561133LLU;
	static uint16_t x795 = UINT16_MAX;

    t182 = (x793<=(x794-(x795&x796)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x797 = -1;
	int16_t x798 = 305;
	volatile int64_t x800 = 33109066335LL;
	static int32_t t183 = 1;

    t183 = (x797<=(x798-(x799&x800)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x801 = -1;
	static uint16_t x803 = 27430U;
	volatile int32_t t184 = 1;

    t184 = (x801<=(x802-(x803&x804)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x805 = UINT16_MAX;
	static uint32_t x807 = 1211398U;
	volatile uint16_t x808 = 368U;
	volatile int32_t t185 = -474128;

    t185 = (x805<=(x806-(x807&x808)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x809 = 0;
	uint32_t x810 = 646U;
	int64_t x811 = -1LL;
	int8_t x812 = -3;
	int32_t t186 = -1;

    t186 = (x809<=(x810-(x811&x812)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x817 = 3U;
	uint64_t x818 = 56576LLU;
	volatile uint8_t x819 = 27U;
	int32_t t187 = 5575;

    t187 = (x817<=(x818-(x819&x820)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x822 = 3007847130531197421LL;
	int16_t x823 = INT16_MIN;
	int32_t t188 = 662;

    t188 = (x821<=(x822-(x823&x824)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x825 = 3919990348731929114LL;
	volatile uint16_t x826 = UINT16_MAX;
	volatile int8_t x827 = INT8_MAX;
	int64_t x828 = -1LL;
	int32_t t189 = 77388;

    t189 = (x825<=(x826-(x827&x828)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x829 = INT16_MIN;
	int64_t x830 = INT64_MIN;
	volatile uint64_t x831 = 2391119117137775LLU;
	static int64_t x832 = 1000688654189170985LL;
	volatile int32_t t190 = 2278397;

    t190 = (x829<=(x830-(x831&x832)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x833 = 11U;
	int8_t x834 = -1;
	uint64_t x835 = UINT64_MAX;
	volatile int16_t x836 = INT16_MIN;

    t191 = (x833<=(x834-(x835&x836)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x837 = UINT16_MAX;
	int64_t x838 = INT64_MIN;
	static int16_t x839 = INT16_MIN;
	int8_t x840 = -1;
	volatile int32_t t192 = 2357469;

    t192 = (x837<=(x838-(x839&x840)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x841 = 31062U;
	static volatile int8_t x842 = -1;
	volatile int32_t x843 = INT32_MIN;
	static volatile int16_t x844 = INT16_MAX;
	volatile int32_t t193 = -1;

    t193 = (x841<=(x842-(x843&x844)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x845 = -2037;
	int8_t x846 = 0;
	int8_t x847 = 0;
	static int32_t x848 = -1;
	int32_t t194 = -19883899;

    t194 = (x845<=(x846-(x847&x848)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x849 = UINT64_MAX;
	volatile uint8_t x850 = UINT8_MAX;
	static int32_t x851 = -353;
	int8_t x852 = INT8_MAX;
	int32_t t195 = 23;

    t195 = (x849<=(x850-(x851&x852)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x853 = -5;
	volatile int16_t x854 = -1;
	static int32_t x855 = -31768;
	int8_t x856 = INT8_MIN;
	volatile int32_t t196 = -607430818;

    t196 = (x853<=(x854-(x855&x856)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x857 = 1535022;
	int32_t x858 = 19859928;
	uint8_t x860 = 0U;
	static int32_t t197 = -1638;

    t197 = (x857<=(x858-(x859&x860)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x861 = 127944;
	static int32_t x862 = INT32_MIN;
	static int8_t x863 = INT8_MIN;
	static int32_t x864 = -1;
	int32_t t198 = -1;

    t198 = (x861<=(x862-(x863&x864)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x865 = INT64_MIN;
	uint8_t x866 = 8U;
	int64_t x868 = -374647316400LL;
	volatile int32_t t199 = 4259;

    t199 = (x865<=(x866-(x867&x868)));

    if (t199 != 1) { NG(); } else { ; }
	
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

