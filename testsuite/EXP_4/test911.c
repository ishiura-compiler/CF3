
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

int32_t x2 = 44;
uint32_t x6 = 1U;
static int8_t x8 = INT8_MAX;
static int32_t t1 = 491099;
uint32_t x9 = UINT32_MAX;
static int32_t x10 = -7;
static int16_t x16 = INT16_MIN;
int64_t x20 = INT64_MIN;
volatile int32_t t4 = 6;
uint8_t x21 = 11U;
static uint16_t x23 = 117U;
volatile int8_t x25 = 1;
volatile uint64_t x29 = 310293517185LLU;
uint64_t x38 = 51758495LLU;
uint64_t t9 = 14LLU;
int16_t x51 = 3060;
int32_t x53 = 1066;
int16_t x56 = -204;
int32_t x57 = 1419581;
volatile int32_t t16 = 697496;
int32_t x70 = -27976;
uint32_t t17 = 21361338U;
uint32_t x73 = 39U;
int64_t x79 = -14245763359596215LL;
volatile int32_t t19 = INT32_MAX;
int32_t t21 = INT32_MIN;
int64_t x104 = INT64_MIN;
uint8_t x109 = UINT8_MAX;
int32_t x113 = INT32_MIN;
uint64_t x120 = 496LLU;
volatile int32_t x122 = -226;
int32_t x123 = -15528;
static volatile int64_t x124 = INT64_MAX;
int16_t x126 = INT16_MIN;
volatile int32_t t32 = 482;
static uint64_t x133 = UINT64_MAX;
int16_t x135 = 27;
static uint64_t x138 = 546225338905729LLU;
volatile int32_t x143 = INT32_MAX;
volatile int64_t t35 = 0LL;
uint64_t x145 = UINT64_MAX;
int64_t x147 = 8772838361976251LL;
int16_t x148 = -28;
static int64_t x149 = -7503LL;
int16_t x152 = INT16_MAX;
uint16_t x154 = 13118U;
int8_t x159 = 5;
int32_t t39 = 0;
static int64_t x170 = -7LL;
volatile uint8_t x186 = UINT8_MAX;
volatile int32_t t46 = 461195;
int16_t x192 = INT16_MIN;
volatile int32_t x195 = INT32_MAX;
int64_t x212 = 13LL;
volatile int32_t t52 = -53;
int32_t x216 = 222822487;
static uint8_t x219 = 5U;
static int32_t x223 = -1;
int32_t t56 = INT32_MAX;
static int32_t x230 = 37391;
uint8_t x234 = UINT8_MAX;
volatile uint16_t x236 = 24U;
uint32_t x238 = 1662103508U;
int8_t x240 = INT8_MIN;
int32_t x244 = -27029;
volatile int32_t t60 = -432945179;
static uint8_t x255 = 8U;
int64_t x260 = INT64_MIN;
int32_t t65 = 3;
int16_t x271 = INT16_MIN;
int64_t x273 = -15658789846825LL;
volatile int32_t t71 = INT32_MAX;
int8_t x293 = INT8_MIN;
int64_t x296 = INT64_MIN;
static int32_t t73 = -524584567;
int64_t t77 = INT64_MIN;
uint16_t x317 = 798U;
int64_t x326 = INT64_MAX;
volatile int16_t x329 = -1;
int32_t x333 = -1;
static uint8_t x336 = 12U;
int64_t x338 = 21129383303610LL;
static uint16_t x340 = UINT16_MAX;
int16_t x348 = -1;
volatile int32_t t86 = 125195459;
int32_t x349 = INT32_MAX;
int16_t x356 = INT16_MIN;
volatile int64_t x357 = 57552LL;
uint64_t x365 = 79LLU;
volatile int64_t x375 = INT64_MIN;
static volatile uint8_t x378 = 5U;
uint64_t x387 = UINT64_MAX;
int64_t x404 = -291936271281902208LL;
int16_t x405 = -1;
uint16_t x408 = UINT16_MAX;
static int32_t t101 = -31629502;
int64_t t105 = -1063949966605576LL;
static int16_t x426 = -25;
int16_t x427 = -1;
volatile int32_t t106 = 311;
int64_t x434 = 965110985499LL;
static uint32_t x437 = 1009U;
uint8_t x441 = 0U;
volatile int64_t x442 = -1LL;
int32_t t110 = 11593;
volatile uint16_t x452 = UINT16_MAX;
int32_t x455 = -450128430;
int64_t x460 = INT64_MIN;
int32_t t115 = 851049;
int32_t t118 = 26;
int8_t x479 = INT8_MAX;
static uint8_t x480 = UINT8_MAX;
int32_t t120 = -50406;
int32_t x486 = INT32_MIN;
volatile int32_t t121 = -3;
static uint8_t x491 = 6U;
int8_t x494 = -1;
static volatile int32_t t123 = 0;
uint16_t x498 = UINT16_MAX;
volatile int16_t x499 = -7;
int16_t x502 = 0;
int16_t x505 = 5;
static volatile int32_t t127 = 5;
int8_t x516 = -1;
int8_t x522 = INT8_MAX;
static int64_t x531 = INT64_MAX;
int8_t x532 = INT8_MIN;
int64_t x539 = INT64_MAX;
uint64_t x540 = UINT64_MAX;
volatile int32_t t132 = 227598;
static int8_t x541 = INT8_MIN;
uint64_t x543 = UINT64_MAX;
volatile int32_t t133 = -54877;
int8_t x545 = -1;
uint32_t x546 = 12U;
volatile int32_t t134 = 42269768;
int32_t t136 = -10;
int8_t x557 = -1;
int16_t x562 = -7178;
static int8_t x574 = -51;
volatile int32_t t140 = -990;
int32_t x577 = INT32_MAX;
int8_t x584 = 1;
int16_t x587 = INT16_MAX;
static int16_t x588 = -12069;
uint8_t x590 = 0U;
int32_t t145 = 12187;
volatile uint8_t x598 = UINT8_MAX;
volatile int8_t x601 = -1;
int64_t x615 = INT64_MIN;
static volatile uint8_t x624 = 36U;
volatile int32_t t151 = 4243;
int32_t x626 = INT32_MIN;
volatile int64_t t152 = INT64_MIN;
static int64_t x629 = -5445295048186402LL;
int64_t t153 = -157382455700LL;
uint32_t x636 = 313832080U;
volatile int32_t t154 = -1756;
static int64_t x639 = 45LL;
static volatile int32_t t156 = -507860;
int16_t x651 = INT16_MIN;
static int64_t x653 = INT64_MAX;
int16_t x656 = -1;
static int16_t x662 = 190;
volatile uint64_t x673 = UINT64_MAX;
uint64_t t164 = UINT64_MAX;
volatile uint32_t x678 = 1161U;
volatile uint16_t x680 = UINT16_MAX;
volatile int32_t t165 = 1;
volatile uint64_t x688 = 2444LLU;
int16_t x694 = INT16_MIN;
int32_t x698 = 15;
static uint64_t x699 = 29110564LLU;
volatile int32_t t172 = INT32_MAX;
int16_t x711 = INT16_MIN;
int64_t x712 = INT64_MIN;
volatile uint64_t x716 = UINT64_MAX;
int8_t x719 = 12;
int64_t x727 = -1LL;
static uint32_t x733 = 22363218U;
int32_t x734 = INT32_MIN;
int16_t x735 = -1;
int64_t x736 = 47279302971354684LL;
uint32_t t179 = 1622U;
uint16_t x739 = 3137U;
int16_t x741 = -1;
int16_t x746 = -1;
static volatile int64_t t182 = -2406306051976160LL;
static volatile int32_t t183 = -504;
int16_t x755 = 1038;
int8_t x756 = INT8_MIN;
static int32_t x759 = INT32_MIN;
int64_t x761 = INT64_MIN;
static uint8_t x762 = 18U;
volatile uint16_t x768 = 1871U;
int32_t t188 = INT32_MIN;
int32_t t189 = 58;
volatile int32_t t190 = -575;
static int16_t x781 = INT16_MAX;
volatile int8_t x782 = -1;
int16_t x785 = INT16_MIN;
int8_t x787 = INT8_MIN;
int8_t x790 = -7;
volatile int32_t t194 = 953934;
volatile uint8_t x801 = UINT8_MAX;
int64_t x810 = INT64_MIN;
volatile int32_t x811 = 45133725;
uint8_t x812 = UINT8_MAX;
uint64_t x819 = 13256337943LLU;


void f0(void) {
    	int16_t x1 = -1;
	uint32_t x3 = 54006U;
	int16_t x4 = 9;
	int32_t t0 = 99388;

    t0 = (x1+(x2<=(x3%x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x5 = 3627U;
	uint32_t x7 = 1270527U;

    t1 = (x5+(x6<=(x7%x8)));

    if (t1 != 3628) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = -7;
	int32_t x12 = -1;
	volatile uint32_t t2 = 175212U;

    t2 = (x9+(x10<=(x11%x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MIN;
	static volatile int16_t x15 = 288;
	volatile int32_t t3 = 0;

    t3 = (x13+(x14<=(x15%x16)));

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 985U;
	static volatile int64_t x19 = INT64_MAX;

    t4 = (x17+(x18<=(x19%x20)));

    if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -15641205LL;
	volatile int8_t x24 = INT8_MAX;
	int32_t t5 = -1043065283;

    t5 = (x21+(x22<=(x23%x24)));

    if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 207U;
	volatile int8_t x28 = INT8_MIN;
	int32_t t6 = 214623;

    t6 = (x25+(x26<=(x27%x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	int32_t x31 = INT32_MIN;
	static volatile int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = 7758LLU;

    t7 = (x29+(x30<=(x31%x32)));

    if (t7 != 310293517185LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -18;
	volatile int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = 25LL;
	static int32_t t8 = 8946674;

    t8 = (x33+(x34<=(x35%x36)));

    if (t8 != -17) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 1336168367LLU;
	volatile int8_t x39 = INT8_MIN;
	volatile uint16_t x40 = UINT16_MAX;

    t9 = (x37+(x38<=(x39%x40)));

    if (t9 != 1336168368LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = 9;

    t10 = (x41+(x42<=(x43%x44)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1LLU;
	uint8_t x46 = UINT8_MAX;
	volatile int64_t x47 = -2007494LL;
	volatile uint8_t x48 = 29U;
	volatile uint64_t t11 = 1191269837647LLU;

    t11 = (x45+(x46<=(x47%x48)));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 123114740269LLU;
	int16_t x50 = INT16_MIN;
	static volatile uint16_t x52 = 52U;
	uint64_t t12 = 3861004600LLU;

    t12 = (x49+(x50<=(x51%x52)));

    if (t12 != 123114740270LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = INT16_MIN;
	uint32_t x55 = 449225588U;
	int32_t t13 = -4132170;

    t13 = (x53+(x54<=(x55%x56)));

    if (t13 != 1066) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = UINT32_MAX;
	static int64_t x59 = INT64_MAX;
	int16_t x60 = 200;
	int32_t t14 = 12433;

    t14 = (x57+(x58<=(x59%x60)));

    if (t14 != 1419581) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = 4U;
	uint8_t x62 = 38U;
	int8_t x63 = 2;
	int8_t x64 = 3;
	static volatile int32_t t15 = 39716468;

    t15 = (x61+(x62<=(x63%x64)));

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = 65015536LLU;
	int16_t x68 = -10098;

    t16 = (x65+(x66<=(x67%x68)));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = UINT32_MAX;
	volatile uint32_t x71 = 250274074U;
	int64_t x72 = -172197785LL;

    t17 = (x69+(x70<=(x71%x72)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	volatile int64_t x76 = INT64_MAX;
	volatile uint32_t t18 = 383027U;

    t18 = (x73+(x74<=(x75%x76)));

    if (t18 != 39U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MAX;
	volatile int64_t x78 = -1LL;
	volatile int8_t x80 = INT8_MIN;

    t19 = (x77+(x78<=(x79%x80)));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 0U;
	uint32_t x83 = 1047U;
	int32_t x84 = -1;
	volatile uint64_t t20 = 711163315LLU;

    t20 = (x81+(x82<=(x83%x84)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	static volatile int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;

    t21 = (x85+(x86<=(x87%x88)));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = 1074508LL;
	volatile int32_t t22 = 1;

    t22 = (x89+(x90<=(x91%x92)));

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = 1U;
	int16_t x94 = 33;
	uint32_t x95 = 1U;
	static volatile int8_t x96 = INT8_MAX;
	int32_t t23 = -11046;

    t23 = (x93+(x94<=(x95%x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint32_t x98 = 4U;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MAX;
	int32_t t24 = -15;

    t24 = (x97+(x98<=(x99%x100)));

    if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	uint64_t x102 = 2148480948517LLU;
	static int32_t x103 = INT32_MIN;
	int32_t t25 = -599;

    t25 = (x101+(x102<=(x103%x104)));

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	uint8_t x107 = UINT8_MAX;
	static int16_t x108 = INT16_MAX;
	static int32_t t26 = 164568;

    t26 = (x105+(x106<=(x107%x108)));

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x110 = 6U;
	int32_t x111 = INT32_MIN;
	int8_t x112 = -29;
	int32_t t27 = 1570288;

    t27 = (x109+(x110<=(x111%x112)));

    if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = 41668848798633269LL;
	uint16_t x115 = 1421U;
	int8_t x116 = -36;
	int32_t t28 = INT32_MIN;

    t28 = (x113+(x114<=(x115%x116)));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = 6454LLU;
	int32_t t29 = 471737781;

    t29 = (x117+(x118<=(x119%x120)));

    if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = INT32_MAX;
	int32_t t30 = INT32_MAX;

    t30 = (x121+(x122<=(x123%x124)));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	static uint16_t x127 = 631U;
	int32_t x128 = 709100;
	static volatile int32_t t31 = -1;

    t31 = (x125+(x126<=(x127%x128)));

    if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -454;
	int16_t x130 = -7;
	int8_t x131 = -3;
	volatile uint64_t x132 = 560LLU;

    t32 = (x129+(x130<=(x131%x132)));

    if (t32 != -454) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x134 = 27U;
	static int16_t x136 = INT16_MIN;
	volatile uint64_t t33 = 36LLU;

    t33 = (x133+(x134<=(x135%x136)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 47474611;
	static int64_t x139 = 11942LL;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = 6922;

    t34 = (x137+(x138<=(x139%x140)));

    if (t34 != 47474611) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 61761273374LL;
	int32_t x142 = INT32_MIN;
	int8_t x144 = INT8_MIN;

    t35 = (x141+(x142<=(x143%x144)));

    if (t35 != 61761273375LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = -1;
	uint64_t t36 = 2LLU;

    t36 = (x145+(x146<=(x147%x148)));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 29U;
	int32_t x151 = INT32_MIN;
	int64_t t37 = -3620450LL;

    t37 = (x149+(x150<=(x151%x152)));

    if (t37 != -7503LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x153 = 10U;
	static volatile uint16_t x155 = UINT16_MAX;
	int8_t x156 = -1;
	int32_t t38 = -29955;

    t38 = (x153+(x154<=(x155%x156)));

    if (t38 != 10) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x157 = 0U;
	int16_t x158 = INT16_MIN;
	static uint64_t x160 = 1366277983740936LLU;

    t39 = (x157+(x158<=(x159%x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1LL;
	int32_t x162 = -1399;
	int8_t x163 = INT8_MAX;
	static uint8_t x164 = 6U;
	static int64_t t40 = -2328119860592190LL;

    t40 = (x161+(x162<=(x163%x164)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int16_t x166 = -292;
	int64_t x167 = -6636544290124212LL;
	int8_t x168 = -1;
	volatile int32_t t41 = -72900;

    t41 = (x165+(x166<=(x167%x168)));

    if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 7U;
	int64_t x171 = -1LL;
	uint32_t x172 = 14U;
	volatile uint32_t t42 = 1U;

    t42 = (x169+(x170<=(x171%x172)));

    if (t42 != 8U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 12U;
	uint16_t x174 = UINT16_MAX;
	uint64_t x175 = 10639001059511852LLU;
	uint32_t x176 = 921423641U;
	static uint32_t t43 = 59307956U;

    t43 = (x173+(x174<=(x175%x176)));

    if (t43 != 13U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MAX;
	uint64_t x178 = 336546731631216971LLU;
	int16_t x179 = -16204;
	int32_t x180 = -1;
	volatile int32_t t44 = 3138;

    t44 = (x177+(x178<=(x179%x180)));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	int64_t x183 = 4263443183902868LL;
	int64_t x184 = -1LL;
	static volatile int32_t t45 = INT32_MIN;

    t45 = (x181+(x182<=(x183%x184)));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x185 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	static int64_t x188 = -1663831022LL;

    t46 = (x185+(x186<=(x187%x188)));

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = 2655624;
	volatile int16_t x190 = 225;
	int8_t x191 = -1;
	int32_t t47 = 10299607;

    t47 = (x189+(x190<=(x191%x192)));

    if (t47 != 2655624) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x193 = UINT8_MAX;
	uint8_t x194 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 3254;

    t48 = (x193+(x194<=(x195%x196)));

    if (t48 != 256) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -62;
	uint32_t x198 = 1325945637U;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = 48U;
	volatile int32_t t49 = -262058;

    t49 = (x197+(x198<=(x199%x200)));

    if (t49 != -61) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = -2062807850229662LL;
	int32_t x203 = INT32_MAX;
	int16_t x204 = -106;
	int32_t t50 = 186653007;

    t50 = (x201+(x202<=(x203%x204)));

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	static uint16_t x207 = 14041U;
	static int64_t x208 = 80545551008LL;
	volatile uint32_t t51 = 2804U;

    t51 = (x205+(x206<=(x207%x208)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MAX;
	uint64_t x210 = 323871114LLU;
	int32_t x211 = INT32_MIN;

    t52 = (x209+(x210<=(x211%x212)));

    if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MAX;
	volatile int32_t t53 = -162636024;

    t53 = (x213+(x214<=(x215%x216)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	uint64_t x218 = 5813686672LLU;
	int16_t x220 = INT16_MIN;
	int32_t t54 = INT32_MIN;

    t54 = (x217+(x218<=(x219%x220)));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 14U;
	volatile int8_t x222 = -1;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = -236352346;

    t55 = (x221+(x222<=(x223%x224)));

    if (t55 != 14) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	static int16_t x226 = INT16_MAX;
	uint16_t x227 = 0U;
	int8_t x228 = -1;

    t56 = (x225+(x226<=(x227%x228)));

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x229 = 100873594LLU;
	uint64_t x231 = 0LLU;
	int32_t x232 = INT32_MIN;
	static uint64_t t57 = 2138052780377784LLU;

    t57 = (x229+(x230<=(x231%x232)));

    if (t57 != 100873594LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	volatile int16_t x235 = -1;
	static int64_t t58 = INT64_MIN;

    t58 = (x233+(x234<=(x235%x236)));

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	int32_t x239 = INT32_MIN;
	int32_t t59 = 769110;

    t59 = (x237+(x238<=(x239%x240)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = 37;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -1LL;

    t60 = (x241+(x242<=(x243%x244)));

    if (t60 != 37) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x245 = INT64_MIN;
	int64_t x246 = 125196776LL;
	int16_t x247 = -41;
	int16_t x248 = INT16_MIN;
	static volatile int64_t t61 = INT64_MIN;

    t61 = (x245+(x246<=(x247%x248)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	static int16_t x250 = INT16_MIN;
	static int16_t x251 = INT16_MIN;
	int64_t x252 = 27859670LL;
	int32_t t62 = 197046;

    t62 = (x249+(x250<=(x251%x252)));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = INT8_MIN;
	static volatile int32_t x254 = 6228872;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -898352720;

    t63 = (x253+(x254<=(x255%x256)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 120149210300545LLU;
	uint32_t x258 = 126U;
	int8_t x259 = INT8_MIN;
	uint64_t t64 = 1410700172540865LLU;

    t64 = (x257+(x258<=(x259%x260)));

    if (t64 != 120149210300545LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 0;
	volatile int64_t x262 = 1LL;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

    t65 = (x261+(x262<=(x263%x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 88LLU;
	volatile int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MAX;
	static uint8_t x268 = 91U;
	uint64_t t66 = 31217358LLU;

    t66 = (x265+(x266<=(x267%x268)));

    if (t66 != 89LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = 0;
	int16_t x270 = INT16_MAX;
	volatile int8_t x272 = 26;
	volatile int32_t t67 = -181547092;

    t67 = (x269+(x270<=(x271%x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = -1;
	uint64_t x275 = 8646146LLU;
	int32_t x276 = -1;
	static volatile int64_t t68 = -47430756043130LL;

    t68 = (x273+(x274<=(x275%x276)));

    if (t68 != -15658789846825LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 1;
	static uint64_t x278 = 868264198059619364LLU;
	int8_t x279 = INT8_MIN;
	static volatile int16_t x280 = -1;
	volatile int32_t t69 = -8;

    t69 = (x277+(x278<=(x279%x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -3;
	uint32_t x282 = 243729259U;
	volatile int8_t x283 = 13;
	int32_t x284 = -15346899;
	volatile int32_t t70 = -423531;

    t70 = (x281+(x282<=(x283%x284)));

    if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = INT32_MAX;
	uint8_t x286 = 4U;
	int64_t x287 = -1LL;
	int32_t x288 = INT32_MAX;

    t71 = (x285+(x286<=(x287%x288)));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x290 = -1;
	static int16_t x291 = INT16_MAX;
	volatile uint16_t x292 = 1U;
	int32_t t72 = -22264;

    t72 = (x289+(x290<=(x291%x292)));

    if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;

    t73 = (x293+(x294<=(x295%x296)));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -1;
	static int8_t x298 = 1;
	uint32_t x299 = 63829U;
	uint8_t x300 = 105U;
	static int32_t t74 = -1679506;

    t74 = (x297+(x298<=(x299%x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 133;
	static volatile uint32_t x302 = 3474419U;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = 2923013328635050LLU;
	static int32_t t75 = 31561817;

    t75 = (x301+(x302<=(x303%x304)));

    if (t75 != 133) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x306 = 5875845U;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = -1LL;
	static volatile int32_t t76 = 2229;

    t76 = (x305+(x306<=(x307%x308)));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = INT64_MIN;
	uint64_t x310 = 4632274LLU;
	volatile uint32_t x311 = 240U;
	volatile uint64_t x312 = 17522981LLU;

    t77 = (x309+(x310<=(x311%x312)));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -13;
	volatile int64_t x314 = -1913425LL;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = 6;
	volatile int32_t t78 = 5871212;

    t78 = (x313+(x314<=(x315%x316)));

    if (t78 != -12) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x318 = 3U;
	volatile int8_t x319 = INT8_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -193996;

    t79 = (x317+(x318<=(x319%x320)));

    if (t79 != 799) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x323 = 10LL;
	int32_t x324 = 451014994;
	static volatile int32_t t80 = -3719006;

    t80 = (x321+(x322<=(x323%x324)));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = -15952;
	int16_t x327 = 5;
	uint16_t x328 = 88U;
	int32_t t81 = -3660078;

    t81 = (x325+(x326<=(x327%x328)));

    if (t81 != -15952) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x330 = 2U;
	volatile int8_t x331 = -5;
	uint64_t x332 = 4LLU;
	volatile int32_t t82 = -55277305;

    t82 = (x329+(x330<=(x331%x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -1;
	int16_t x335 = -1;
	volatile int32_t t83 = 14861087;

    t83 = (x333+(x334<=(x335%x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = 4830;
	volatile int8_t x339 = -1;
	volatile int32_t t84 = 0;

    t84 = (x337+(x338<=(x339%x340)));

    if (t84 != 4830) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	uint32_t x342 = 1202330U;
	int64_t x343 = INT64_MIN;
	static int32_t x344 = -824;
	int64_t t85 = INT64_MAX;

    t85 = (x341+(x342<=(x343%x344)));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	static int64_t x346 = INT64_MAX;
	uint64_t x347 = 7LLU;

    t86 = (x345+(x346<=(x347%x348)));

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = -22;
	int16_t x351 = INT16_MIN;
	int64_t x352 = 7721729LL;
	volatile int32_t t87 = INT32_MAX;

    t87 = (x349+(x350<=(x351%x352)));

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 18354U;
	uint32_t x354 = 611396686U;
	int32_t x355 = INT32_MIN;
	int32_t t88 = 47976011;

    t88 = (x353+(x354<=(x355%x356)));

    if (t88 != 18354) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x358 = 273518997168LL;
	int8_t x359 = INT8_MAX;
	volatile int8_t x360 = 2;
	volatile int64_t t89 = -1249LL;

    t89 = (x357+(x358<=(x359%x360)));

    if (t89 != 57552LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	volatile uint64_t x362 = UINT64_MAX;
	static int64_t x363 = -452630LL;
	volatile int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 2;

    t90 = (x361+(x362<=(x363%x364)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = INT16_MIN;
	uint16_t x367 = 16U;
	static int32_t x368 = INT32_MAX;
	static volatile uint64_t t91 = 65195LLU;

    t91 = (x365+(x366<=(x367%x368)));

    if (t91 != 80LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	static int32_t x370 = 1608;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = 34439447LLU;
	volatile int32_t t92 = -7198949;

    t92 = (x369+(x370<=(x371%x372)));

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	static volatile int64_t x374 = -5LL;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t93 = 990887;

    t93 = (x373+(x374<=(x375%x376)));

    if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = -1;
	static uint16_t x379 = 264U;
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 7212;

    t94 = (x377+(x378<=(x379%x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = 7306;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	volatile int32_t x384 = -356638;
	static volatile int32_t t95 = 309139548;

    t95 = (x381+(x382<=(x383%x384)));

    if (t95 != 7306) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 14;

    t96 = (x385+(x386<=(x387%x388)));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 8U;
	volatile int32_t x390 = 347869647;
	uint32_t x391 = 119030579U;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 77;

    t97 = (x389+(x390<=(x391%x392)));

    if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int8_t x394 = -22;
	int8_t x395 = -1;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -755408;

    t98 = (x393+(x394<=(x395%x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -1;
	volatile uint32_t x398 = 1U;
	int32_t x399 = INT32_MAX;
	volatile int32_t x400 = 15;
	volatile int32_t t99 = -785651365;

    t99 = (x397+(x398<=(x399%x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = INT32_MIN;
	volatile int32_t t100 = INT32_MIN;

    t100 = (x401+(x402<=(x403%x404)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x406 = 109U;
	int8_t x407 = -1;

    t101 = (x405+(x406<=(x407%x408)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 65837367;
	uint64_t x410 = 97621561210387730LLU;
	static int64_t x411 = -1LL;
	uint64_t x412 = UINT64_MAX;
	int32_t t102 = -753;

    t102 = (x409+(x410<=(x411%x412)));

    if (t102 != 65837367) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	int8_t x414 = -10;
	int32_t x415 = 485280;
	static int64_t x416 = -1LL;
	int32_t t103 = -5;

    t103 = (x413+(x414<=(x415%x416)));

    if (t103 != 128) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	volatile int64_t x418 = -13060504415LL;
	static int8_t x419 = INT8_MIN;
	static int32_t x420 = -1;
	int32_t t104 = -11919;

    t104 = (x417+(x418<=(x419%x420)));

    if (t104 != 65536) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	volatile int64_t x422 = -1054821431LL;
	int64_t x423 = INT64_MIN;
	uint8_t x424 = UINT8_MAX;

    t105 = (x421+(x422<=(x423%x424)));

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	int64_t x428 = -1LL;

    t106 = (x425+(x426<=(x427%x428)));

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 19708U;
	int32_t x430 = INT32_MIN;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t107 = 3;

    t107 = (x429+(x430<=(x431%x432)));

    if (t107 != 19709) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x433 = 1737293805LLU;
	int8_t x435 = INT8_MAX;
	int64_t x436 = 2971013LL;
	uint64_t t108 = 10LLU;

    t108 = (x433+(x434<=(x435%x436)));

    if (t108 != 1737293805LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = UINT32_MAX;
	static int8_t x439 = INT8_MIN;
	uint32_t x440 = 13153686U;
	static volatile uint32_t t109 = 7U;

    t109 = (x437+(x438<=(x439%x440)));

    if (t109 != 1009U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x443 = 0LLU;
	int64_t x444 = 7263LL;

    t110 = (x441+(x442<=(x443%x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	static int8_t x446 = -1;
	volatile uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MAX;
	int32_t t111 = 80725;

    t111 = (x445+(x446<=(x447%x448)));

    if (t111 != 128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	uint16_t x450 = 30U;
	uint64_t x451 = 252107355783LLU;
	static volatile uint64_t t112 = 4707929232291LLU;

    t112 = (x449+(x450<=(x451%x452)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -692;
	uint64_t x454 = 3282820LLU;
	int16_t x456 = 15102;
	int32_t t113 = 5;

    t113 = (x453+(x454<=(x455%x456)));

    if (t113 != -691) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 2U;
	int64_t x458 = -1LL;
	static volatile uint64_t x459 = UINT64_MAX;
	int32_t t114 = -2085062;

    t114 = (x457+(x458<=(x459%x460)));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	volatile int8_t x462 = -47;
	uint32_t x463 = UINT32_MAX;
	static int8_t x464 = 12;

    t115 = (x461+(x462<=(x463%x464)));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = 0;
	static int16_t x466 = -1;
	static int16_t x467 = 5;
	volatile int16_t x468 = -1;
	volatile int32_t t116 = -14963951;

    t116 = (x465+(x466<=(x467%x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 23800U;
	int32_t x470 = -9118;
	static volatile int8_t x471 = -1;
	uint8_t x472 = 4U;
	uint32_t t117 = 8536U;

    t117 = (x469+(x470<=(x471%x472)));

    if (t117 != 23801U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	uint64_t x474 = 44LLU;
	uint32_t x475 = 1000U;
	static volatile int64_t x476 = INT64_MAX;

    t118 = (x473+(x474<=(x475%x476)));

    if (t118 != 256) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x477 = 3416U;
	uint16_t x478 = UINT16_MAX;
	static int32_t t119 = 1;

    t119 = (x477+(x478<=(x479%x480)));

    if (t119 != 3416) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	static volatile uint16_t x482 = UINT16_MAX;
	int16_t x483 = -1;
	uint32_t x484 = 7969809U;

    t120 = (x481+(x482<=(x483%x484)));

    if (t120 != 65536) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int64_t x487 = -63714767391147LL;
	int32_t x488 = INT32_MAX;

    t121 = (x485+(x486<=(x487%x488)));

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	int64_t x490 = -1LL;
	uint64_t x492 = UINT64_MAX;
	int32_t t122 = -30852665;

    t122 = (x489+(x490<=(x491%x492)));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 125;
	uint16_t x495 = 1405U;
	int16_t x496 = 856;

    t123 = (x493+(x494<=(x495%x496)));

    if (t123 != 126) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	static uint32_t x500 = 28U;
	volatile int32_t t124 = -6587931;

    t124 = (x497+(x498<=(x499%x500)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x501 = INT8_MAX;
	static uint8_t x503 = 0U;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 44557;

    t125 = (x501+(x502<=(x503%x504)));

    if (t125 != 128) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x506 = 152;
	int32_t x507 = INT32_MIN;
	volatile int32_t x508 = INT32_MIN;
	int32_t t126 = 41;

    t126 = (x505+(x506<=(x507%x508)));

    if (t126 != 5) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 22;
	static uint8_t x510 = 22U;
	int16_t x511 = 13;
	uint64_t x512 = UINT64_MAX;

    t127 = (x509+(x510<=(x511%x512)));

    if (t127 != 22) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	uint8_t x514 = UINT8_MAX;
	int32_t x515 = -1;
	static volatile int32_t t128 = INT32_MIN;

    t128 = (x513+(x514<=(x515%x516)));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x521 = -4;
	static volatile int8_t x523 = INT8_MIN;
	uint32_t x524 = 9327570U;
	static volatile int32_t t129 = -6;

    t129 = (x521+(x522<=(x523%x524)));

    if (t129 != -3) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x529 = UINT8_MAX;
	uint32_t x530 = UINT32_MAX;
	volatile int32_t t130 = 904;

    t130 = (x529+(x530<=(x531%x532)));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = INT32_MIN;
	uint32_t x534 = 4745184U;
	int16_t x535 = -1;
	uint32_t x536 = UINT32_MAX;
	static int32_t t131 = INT32_MIN;

    t131 = (x533+(x534<=(x535%x536)));

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MIN;

    t132 = (x537+(x538<=(x539%x540)));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x542 = -1;
	uint32_t x544 = UINT32_MAX;

    t133 = (x541+(x542<=(x543%x544)));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x547 = 3U;
	uint32_t x548 = UINT32_MAX;

    t134 = (x545+(x546<=(x547%x548)));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x549 = INT16_MAX;
	int8_t x550 = -1;
	uint64_t x551 = 7276871266570591LLU;
	int8_t x552 = INT8_MAX;
	volatile int32_t t135 = 2653;

    t135 = (x549+(x550<=(x551%x552)));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x553 = 1U;
	uint8_t x554 = 2U;
	uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MIN;

    t136 = (x553+(x554<=(x555%x556)));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	uint64_t x560 = 7198688726453LLU;
	volatile int32_t t137 = -40937987;

    t137 = (x557+(x558<=(x559%x560)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x561 = INT64_MIN;
	int32_t x563 = 77026548;
	int8_t x564 = INT8_MAX;
	volatile int64_t t138 = 6938643LL;

    t138 = (x561+(x562<=(x563%x564)));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 3LLU;
	static int8_t x567 = -18;
	int64_t x568 = INT64_MIN;
	volatile int32_t t139 = -1160469;

    t139 = (x565+(x566<=(x567%x568)));

    if (t139 != 65536) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = UINT16_MAX;
	uint32_t x575 = 1486276U;
	int8_t x576 = -1;

    t140 = (x573+(x574<=(x575%x576)));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x578 = 49572U;
	volatile uint8_t x579 = 4U;
	volatile uint8_t x580 = UINT8_MAX;
	volatile int32_t t141 = INT32_MAX;

    t141 = (x577+(x578<=(x579%x580)));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = -30781284004919396LL;
	int8_t x583 = 0;
	int32_t t142 = -37;

    t142 = (x581+(x582<=(x583%x584)));

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = 6;
	volatile uint8_t x586 = 3U;
	volatile int32_t t143 = 505708369;

    t143 = (x585+(x586<=(x587%x588)));

    if (t143 != 7) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x589 = 0U;
	int16_t x591 = INT16_MIN;
	int32_t x592 = INT32_MIN;
	int32_t t144 = 166643424;

    t144 = (x589+(x590<=(x591%x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x593 = 3;
	int8_t x594 = 13;
	int32_t x595 = INT32_MAX;
	volatile uint8_t x596 = 3U;

    t145 = (x593+(x594<=(x595%x596)));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x597 = 7949;
	int8_t x599 = INT8_MIN;
	int32_t x600 = INT32_MIN;
	static int32_t t146 = 4829;

    t146 = (x597+(x598<=(x599%x600)));

    if (t146 != 7949) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x602 = -1LL;
	uint32_t x603 = 1710U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t147 = 6792;

    t147 = (x601+(x602<=(x603%x604)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x605 = 4142675U;
	volatile uint64_t x606 = 73976917LLU;
	int16_t x607 = INT16_MAX;
	int16_t x608 = INT16_MIN;
	volatile uint32_t t148 = 2493U;

    t148 = (x605+(x606<=(x607%x608)));

    if (t148 != 4142675U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x613 = INT32_MAX;
	uint16_t x614 = UINT16_MAX;
	uint8_t x616 = UINT8_MAX;
	int32_t t149 = INT32_MAX;

    t149 = (x613+(x614<=(x615%x616)));

    if (t149 != INT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x617 = INT8_MIN;
	int8_t x618 = -1;
	int8_t x619 = 7;
	int32_t x620 = 111775359;
	volatile int32_t t150 = 30823;

    t150 = (x617+(x618<=(x619%x620)));

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x621 = INT16_MIN;
	static int8_t x622 = 0;
	static int8_t x623 = INT8_MIN;

    t151 = (x621+(x622<=(x623%x624)));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x625 = INT64_MIN;
	static int32_t x627 = INT32_MAX;
	uint32_t x628 = 176615994U;

    t152 = (x625+(x626<=(x627%x628)));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x630 = 0U;
	int8_t x631 = 61;
	uint16_t x632 = 61U;

    t153 = (x629+(x630<=(x631%x632)));

    if (t153 != -5445295048186401LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = 0;
	static volatile int64_t x634 = 7488LL;
	int64_t x635 = 2176472903647406LL;

    t154 = (x633+(x634<=(x635%x636)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = INT64_MIN;
	int64_t x638 = INT64_MAX;
	volatile int64_t x640 = -1LL;
	int64_t t155 = INT64_MIN;

    t155 = (x637+(x638<=(x639%x640)));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x641 = 1;
	uint32_t x642 = 229688671U;
	int64_t x643 = -1LL;
	int16_t x644 = INT16_MIN;

    t156 = (x641+(x642<=(x643%x644)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x645 = UINT64_MAX;
	uint8_t x646 = UINT8_MAX;
	int64_t x647 = 110165106052131LL;
	volatile int64_t x648 = -11LL;
	uint64_t t157 = UINT64_MAX;

    t157 = (x645+(x646<=(x647%x648)));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x649 = INT64_MIN;
	volatile int8_t x650 = INT8_MIN;
	volatile uint32_t x652 = 820826U;
	volatile int64_t t158 = INT64_MIN;

    t158 = (x649+(x650<=(x651%x652)));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x654 = UINT64_MAX;
	volatile int8_t x655 = -1;
	static volatile int64_t t159 = INT64_MAX;

    t159 = (x653+(x654<=(x655%x656)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x657 = 32U;
	uint8_t x658 = UINT8_MAX;
	volatile int64_t x659 = -168641708694234617LL;
	int8_t x660 = -1;
	volatile int32_t t160 = 0;

    t160 = (x657+(x658<=(x659%x660)));

    if (t160 != 32) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x661 = 31;
	volatile int32_t x663 = -1;
	volatile int16_t x664 = -26;
	int32_t t161 = 0;

    t161 = (x661+(x662<=(x663%x664)));

    if (t161 != 31) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x665 = 30854U;
	volatile uint8_t x666 = 0U;
	static int64_t x667 = 231595997LL;
	static int64_t x668 = 4343LL;
	static volatile int32_t t162 = -3892905;

    t162 = (x665+(x666<=(x667%x668)));

    if (t162 != 30855) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x670 = -1908266958533LL;
	int16_t x671 = INT16_MIN;
	static int16_t x672 = 20;
	uint64_t t163 = 1327689LLU;

    t163 = (x669+(x670<=(x671%x672)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x674 = -14;
	volatile int16_t x675 = INT16_MIN;
	uint64_t x676 = 1181059739LLU;

    t164 = (x673+(x674<=(x675%x676)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x677 = -1;
	volatile int16_t x679 = -1;

    t165 = (x677+(x678<=(x679%x680)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x681 = -1LL;
	uint32_t x682 = 13835005U;
	static int64_t x683 = -30995897299LL;
	uint8_t x684 = 31U;
	static volatile int64_t t166 = -590LL;

    t166 = (x681+(x682<=(x683%x684)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x685 = 571075U;
	int8_t x686 = -2;
	volatile int32_t x687 = 933860;
	volatile uint32_t t167 = 10976U;

    t167 = (x685+(x686<=(x687%x688)));

    if (t167 != 571075U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x689 = 110U;
	static int64_t x690 = INT64_MIN;
	int16_t x691 = INT16_MIN;
	volatile int32_t x692 = INT32_MAX;
	volatile int32_t t168 = 3218;

    t168 = (x689+(x690<=(x691%x692)));

    if (t168 != 111) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x693 = -1LL;
	uint32_t x695 = 1488877U;
	static volatile int64_t x696 = -1LL;
	static int64_t t169 = -778896192302LL;

    t169 = (x693+(x694<=(x695%x696)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x697 = -38;
	int32_t x700 = -1;
	volatile int32_t t170 = 0;

    t170 = (x697+(x698<=(x699%x700)));

    if (t170 != -37) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x701 = -2;
	int16_t x702 = INT16_MIN;
	int8_t x703 = -29;
	int32_t x704 = 487095884;
	static volatile int32_t t171 = -635;

    t171 = (x701+(x702<=(x703%x704)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = INT32_MAX;
	uint16_t x706 = UINT16_MAX;
	int8_t x707 = 48;
	int32_t x708 = INT32_MIN;

    t172 = (x705+(x706<=(x707%x708)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x709 = UINT16_MAX;
	int32_t x710 = -4247;
	int32_t t173 = 6710;

    t173 = (x709+(x710<=(x711%x712)));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x713 = 847717834466LLU;
	uint64_t x714 = UINT64_MAX;
	uint8_t x715 = 54U;
	static volatile uint64_t t174 = 11LLU;

    t174 = (x713+(x714<=(x715%x716)));

    if (t174 != 847717834466LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x717 = UINT8_MAX;
	static uint16_t x718 = 185U;
	static uint8_t x720 = 29U;
	static int32_t t175 = -3701114;

    t175 = (x717+(x718<=(x719%x720)));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x721 = UINT8_MAX;
	int8_t x722 = 0;
	int16_t x723 = INT16_MAX;
	volatile uint64_t x724 = 737841108568352LLU;
	static int32_t t176 = -479;

    t176 = (x721+(x722<=(x723%x724)));

    if (t176 != 256) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 704509260U;
	int64_t x726 = -157LL;
	int16_t x728 = INT16_MIN;
	volatile uint32_t t177 = 4217U;

    t177 = (x725+(x726<=(x727%x728)));

    if (t177 != 704509261U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = -1;
	int64_t x730 = -1LL;
	volatile int64_t x731 = 57823LL;
	static int16_t x732 = INT16_MAX;
	int32_t t178 = 1009;

    t178 = (x729+(x730<=(x731%x732)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    

    t179 = (x733+(x734<=(x735%x736)));

    if (t179 != 22363219U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x737 = INT16_MAX;
	uint32_t x738 = 50991998U;
	volatile uint64_t x740 = UINT64_MAX;
	static int32_t t180 = -226197;

    t180 = (x737+(x738<=(x739%x740)));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x742 = -7983409;
	volatile int32_t x743 = INT32_MIN;
	volatile int64_t x744 = INT64_MIN;
	volatile int32_t t181 = -21456883;

    t181 = (x741+(x742<=(x743%x744)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x745 = 243158128215926LL;
	static volatile uint8_t x747 = UINT8_MAX;
	int8_t x748 = INT8_MIN;

    t182 = (x745+(x746<=(x747%x748)));

    if (t182 != 243158128215927LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x749 = 0;
	volatile int32_t x750 = INT32_MAX;
	int64_t x751 = INT64_MIN;
	static uint64_t x752 = UINT64_MAX;

    t183 = (x749+(x750<=(x751%x752)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x753 = -6;
	int16_t x754 = INT16_MIN;
	volatile int32_t t184 = 328;

    t184 = (x753+(x754<=(x755%x756)));

    if (t184 != -5) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x757 = 8218480138512237666LLU;
	int64_t x758 = INT64_MIN;
	int64_t x760 = -153368396LL;
	volatile uint64_t t185 = 20218531706526LLU;

    t185 = (x757+(x758<=(x759%x760)));

    if (t185 != 8218480138512237667LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x763 = UINT8_MAX;
	int8_t x764 = INT8_MIN;
	volatile int64_t t186 = -310812LL;

    t186 = (x761+(x762<=(x763%x764)));

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x765 = 30U;
	int8_t x766 = -1;
	volatile int64_t x767 = INT64_MIN;
	uint32_t t187 = 3287U;

    t187 = (x765+(x766<=(x767%x768)));

    if (t187 != 30U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = INT32_MIN;
	uint8_t x770 = UINT8_MAX;
	int64_t x771 = -328541LL;
	int64_t x772 = INT64_MIN;

    t188 = (x769+(x770<=(x771%x772)));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x773 = 1;
	int32_t x774 = INT32_MIN;
	uint8_t x775 = UINT8_MAX;
	volatile uint64_t x776 = 2019516LLU;

    t189 = (x773+(x774<=(x775%x776)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x777 = 109465388;
	uint32_t x778 = 4006714U;
	int32_t x779 = INT32_MIN;
	int64_t x780 = -11554112LL;

    t190 = (x777+(x778<=(x779%x780)));

    if (t190 != 109465388) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x783 = 62976995U;
	int8_t x784 = -1;
	volatile int32_t t191 = 3942093;

    t191 = (x781+(x782<=(x783%x784)));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x786 = INT16_MIN;
	uint32_t x788 = UINT32_MAX;
	volatile int32_t t192 = -92330;

    t192 = (x785+(x786<=(x787%x788)));

    if (t192 != -32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = 1;
	int32_t x791 = 18;
	int32_t x792 = -1;
	static volatile int32_t t193 = -45;

    t193 = (x789+(x790<=(x791%x792)));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x797 = -16681;
	static int8_t x798 = 0;
	int8_t x799 = INT8_MIN;
	uint32_t x800 = UINT32_MAX;

    t194 = (x797+(x798<=(x799%x800)));

    if (t194 != -16680) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x802 = 64179257003LL;
	int8_t x803 = INT8_MIN;
	volatile int8_t x804 = INT8_MAX;
	volatile int32_t t195 = -43;

    t195 = (x801+(x802<=(x803%x804)));

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x805 = UINT8_MAX;
	int32_t x806 = INT32_MIN;
	volatile uint16_t x807 = UINT16_MAX;
	static int16_t x808 = 524;
	volatile int32_t t196 = -6;

    t196 = (x805+(x806<=(x807%x808)));

    if (t196 != 256) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x809 = 92U;
	static volatile int32_t t197 = 402;

    t197 = (x809+(x810<=(x811%x812)));

    if (t197 != 93) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x813 = 307U;
	volatile uint16_t x814 = 0U;
	int16_t x815 = INT16_MIN;
	uint16_t x816 = 999U;
	int32_t t198 = -14;

    t198 = (x813+(x814<=(x815%x816)));

    if (t198 != 307) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x817 = -37941525;
	int16_t x818 = INT16_MIN;
	volatile int32_t x820 = INT32_MIN;
	int32_t t199 = 79754987;

    t199 = (x817+(x818<=(x819%x820)));

    if (t199 != -37941525) { NG(); } else { ; }
	
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

