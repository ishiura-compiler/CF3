
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

int32_t x2 = -32278740;
volatile uint8_t x3 = 1U;
static int8_t x4 = -1;
uint16_t x5 = UINT16_MAX;
volatile int32_t x6 = INT32_MAX;
int16_t x11 = INT16_MIN;
volatile int16_t x15 = INT16_MIN;
int16_t x18 = -223;
static int32_t x21 = -37;
volatile int8_t x23 = INT8_MAX;
uint32_t x27 = 20132181U;
int8_t x29 = -1;
int32_t x31 = INT32_MIN;
volatile int32_t t7 = -26;
static int32_t x35 = -1;
int64_t x37 = INT64_MAX;
uint64_t x40 = 153839459846121995LLU;
volatile int32_t t10 = 72;
uint64_t x49 = 107347448701608748LLU;
static uint8_t x56 = UINT8_MAX;
volatile uint32_t x60 = 9847U;
int64_t x67 = -1LL;
int16_t x75 = -1;
uint64_t x76 = UINT64_MAX;
int16_t x81 = INT16_MIN;
volatile int8_t x83 = 0;
int32_t t20 = -467;
int16_t x85 = -1;
int32_t x86 = INT32_MIN;
int32_t t21 = -188840;
uint32_t x90 = 7086815U;
static int16_t x91 = INT16_MIN;
static volatile int32_t t22 = -740841;
volatile uint64_t x101 = UINT64_MAX;
static int16_t x103 = INT16_MAX;
int32_t t26 = 0;
static int16_t x109 = -1;
static int32_t t27 = -10767;
int32_t t28 = 23186432;
static int32_t x118 = INT32_MAX;
uint8_t x128 = 1U;
volatile uint32_t x129 = 7808878U;
uint8_t x131 = 6U;
volatile int32_t t32 = -84;
int16_t x134 = INT16_MIN;
static volatile int32_t t33 = -42904;
static volatile int32_t x137 = INT32_MAX;
volatile uint8_t x140 = 1U;
int64_t x141 = INT64_MIN;
int16_t x145 = 12550;
uint64_t x147 = 259LLU;
int64_t x149 = INT64_MIN;
uint32_t x151 = 82340U;
volatile uint64_t x158 = 3517754763221150LLU;
volatile int64_t x159 = INT64_MAX;
volatile int32_t t41 = -525859956;
int8_t x174 = 1;
static uint64_t x176 = 281044493LLU;
int32_t t43 = 673928179;
uint32_t x180 = UINT32_MAX;
volatile uint16_t x181 = 30748U;
int16_t x185 = INT16_MIN;
uint8_t x188 = 9U;
volatile uint32_t x192 = 16U;
volatile int32_t t47 = 6;
static int16_t x193 = 377;
volatile int16_t x196 = INT16_MIN;
volatile int16_t x204 = INT16_MIN;
static volatile int32_t t50 = 1404733;
uint32_t x220 = UINT32_MAX;
uint32_t x222 = 12602892U;
int64_t x224 = INT64_MIN;
int8_t x228 = 1;
uint32_t x229 = 21564U;
int32_t x231 = INT32_MIN;
uint8_t x242 = 104U;
uint16_t x243 = 2844U;
static uint8_t x248 = 9U;
int8_t x249 = 2;
volatile int32_t x251 = -4;
volatile int8_t x252 = -1;
int32_t t62 = 6;
int64_t x254 = 1LL;
uint64_t x255 = UINT64_MAX;
int32_t x256 = 725;
int32_t t63 = -21943;
volatile uint64_t x260 = 1528724084LLU;
static int8_t x263 = INT8_MIN;
int32_t t65 = -31910456;
int8_t x270 = INT8_MAX;
int16_t x271 = -1;
int16_t x273 = -3615;
int64_t x276 = 1481792713716992LL;
volatile int32_t t68 = -3290619;
volatile uint16_t x277 = UINT16_MAX;
volatile int32_t t69 = 15454;
int8_t x284 = INT8_MIN;
int16_t x286 = -1;
int16_t x288 = INT16_MAX;
uint64_t x295 = 255LLU;
int16_t x298 = -1;
volatile int8_t x299 = INT8_MAX;
volatile int32_t x300 = -20;
uint8_t x304 = 33U;
uint8_t x305 = 6U;
int16_t x308 = INT16_MIN;
int32_t t76 = 397;
int32_t t78 = -227073693;
int32_t t79 = 199232902;
uint8_t x327 = 3U;
int32_t x329 = -655;
volatile int32_t x333 = INT32_MAX;
uint8_t x335 = UINT8_MAX;
static int16_t x336 = INT16_MAX;
static volatile int8_t x339 = -26;
volatile uint32_t x340 = UINT32_MAX;
static uint32_t x343 = 46543505U;
uint64_t x345 = UINT64_MAX;
volatile int16_t x346 = INT16_MIN;
int32_t t87 = 116;
int8_t x354 = -1;
uint32_t x355 = 9290331U;
volatile int32_t t88 = 26808;
int32_t x359 = INT32_MIN;
static int16_t x363 = INT16_MAX;
int8_t x365 = INT8_MAX;
int32_t x369 = 173;
int16_t x377 = INT16_MAX;
static uint32_t x380 = 3268U;
static int8_t x382 = 0;
static int64_t x396 = INT64_MIN;
int16_t x408 = -1;
static int64_t x412 = 912036809644149636LL;
static uint16_t x416 = 15U;
int8_t x422 = 6;
int16_t x423 = INT16_MIN;
volatile int32_t t105 = -165;
static int32_t x427 = -1843;
volatile uint32_t x429 = 965087U;
int8_t x430 = INT8_MIN;
int32_t t107 = 3;
static volatile int16_t x441 = INT16_MIN;
int32_t x443 = -1;
volatile int32_t t110 = -32171;
static int32_t t111 = -872309352;
volatile int32_t t112 = -28;
volatile uint16_t x455 = 1916U;
int8_t x458 = INT8_MAX;
uint16_t x459 = UINT16_MAX;
uint8_t x463 = 1U;
uint16_t x467 = UINT16_MAX;
int32_t t117 = 149;
int8_t x475 = 11;
int32_t t118 = -579289399;
volatile int32_t t119 = -86;
static uint8_t x482 = UINT8_MAX;
static int64_t x485 = INT64_MIN;
static int8_t x486 = INT8_MAX;
volatile int32_t t122 = -883975359;
static uint16_t x496 = 120U;
int32_t x501 = INT32_MIN;
uint16_t x502 = UINT16_MAX;
volatile int64_t x509 = INT64_MIN;
int64_t x511 = -1LL;
static int32_t t129 = -11895;
uint16_t x526 = 6420U;
int32_t t132 = 309;
static uint32_t x534 = 1024951639U;
volatile int32_t t135 = -15087;
volatile int32_t t137 = -3;
volatile int32_t x555 = -1;
int8_t x557 = INT8_MIN;
static volatile int32_t t139 = 130210694;
int64_t x561 = -1LL;
int16_t x573 = INT16_MIN;
uint32_t x576 = UINT32_MAX;
static uint64_t x579 = 647453604LLU;
int32_t x589 = 16;
int32_t x590 = INT32_MIN;
uint8_t x592 = UINT8_MAX;
uint16_t x593 = 10080U;
volatile int64_t x594 = INT64_MIN;
volatile int64_t x597 = INT64_MIN;
static uint64_t x599 = UINT64_MAX;
int32_t x604 = INT32_MIN;
static int64_t x607 = 29402LL;
volatile int64_t x610 = INT64_MAX;
volatile uint16_t x611 = 20U;
int32_t t153 = -7;
static int32_t x617 = 76;
int32_t x620 = -242997528;
int8_t x622 = INT8_MAX;
volatile uint8_t x625 = 1U;
int8_t x627 = INT8_MIN;
static uint32_t x640 = 313893U;
static int32_t x641 = INT32_MIN;
int32_t x642 = -7477;
volatile int32_t t161 = -24448;
volatile int32_t t162 = 21190776;
uint64_t x654 = UINT64_MAX;
static uint64_t x657 = UINT64_MAX;
uint32_t x659 = 56491U;
volatile int32_t t164 = 7;
static int64_t x667 = 31616541267LL;
int8_t x670 = INT8_MIN;
uint16_t x671 = 3U;
int32_t t167 = -47;
int16_t x674 = -1;
static int8_t x676 = INT8_MIN;
int32_t x679 = -1;
volatile int64_t x692 = INT64_MIN;
int16_t x696 = INT16_MIN;
volatile int32_t t173 = 299;
static volatile int8_t x697 = INT8_MAX;
int32_t t174 = 5;
int64_t x702 = INT64_MIN;
int32_t t175 = 2219;
volatile int64_t x711 = INT64_MIN;
int16_t x724 = -1;
int64_t x725 = INT64_MIN;
int32_t x729 = 3169;
int8_t x735 = INT8_MIN;
int16_t x738 = INT16_MIN;
static uint8_t x740 = 41U;
int32_t t184 = 114;
uint16_t x748 = 29U;
int32_t t186 = 27354863;
static int32_t t189 = 0;
int32_t x767 = -1886207;
volatile uint8_t x777 = UINT8_MAX;
int8_t x779 = INT8_MIN;
volatile int32_t t194 = -29813449;
uint32_t x783 = 122301U;
uint64_t x789 = 2LLU;
volatile uint32_t x792 = 10810U;
int16_t x796 = 464;
static volatile int32_t t199 = 258;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static volatile int32_t t0 = 180060;

    t0 = ((x1<=x2)==(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -4657;

    t1 = ((x5<=x6)==(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint16_t x10 = 0U;
	uint8_t x12 = 10U;
	static volatile int32_t t2 = -3184254;

    t2 = ((x9<=x10)==(x11^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static int32_t x14 = INT32_MAX;
	int64_t x16 = INT64_MAX;
	static int32_t t3 = -1;

    t3 = ((x13<=x14)==(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int32_t x19 = -7678237;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -1;

    t4 = ((x17<=x18)==(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x22 = -3;
	static uint8_t x24 = UINT8_MAX;
	int32_t t5 = 2;

    t5 = ((x21<=x22)==(x23^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	uint16_t x26 = 26U;
	static volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -1267;

    t6 = ((x25<=x26)==(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x30 = 7423U;
	uint16_t x32 = 2382U;

    t7 = ((x29<=x30)==(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 8087U;
	uint64_t x34 = UINT64_MAX;
	volatile int32_t x36 = -4081187;
	int32_t t8 = -71070;

    t8 = ((x33<=x34)==(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x38 = INT16_MAX;
	uint64_t x39 = 30531217LLU;
	int32_t t9 = 955123977;

    t9 = ((x37<=x38)==(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int8_t x42 = -1;
	int8_t x43 = -1;
	volatile int8_t x44 = 4;

    t10 = ((x41<=x42)==(x43^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	volatile int32_t x46 = INT32_MAX;
	volatile int16_t x47 = -358;
	static volatile int32_t x48 = 66125129;
	int32_t t11 = -617299518;

    t11 = ((x45<=x46)==(x47^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = UINT16_MAX;
	int16_t x51 = -1;
	int16_t x52 = -1;
	volatile int32_t t12 = -1014844;

    t12 = ((x49<=x50)==(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int8_t x54 = -24;
	static int32_t x55 = -1;
	static volatile int32_t t13 = 63;

    t13 = ((x53<=x54)==(x55^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 2683113446216LL;
	int32_t x58 = 1006575500;
	static volatile int8_t x59 = 1;
	static int32_t t14 = 123332463;

    t14 = ((x57<=x58)==(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 407178763U;
	int16_t x62 = -556;
	uint64_t x63 = 58LLU;
	uint8_t x64 = 2U;
	static volatile int32_t t15 = -112640;

    t15 = ((x61<=x62)==(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	int32_t x66 = -1;
	int16_t x68 = 2436;
	int32_t t16 = -378947997;

    t16 = ((x65<=x66)==(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x69 = 26146U;
	int64_t x70 = -88890652400LL;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = 67522U;
	volatile int32_t t17 = 1066;

    t17 = ((x69<=x70)==(x71^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -588998890;
	uint32_t x74 = UINT32_MAX;
	volatile int32_t t18 = -2062432;

    t18 = ((x73<=x74)==(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = 6;
	int16_t x80 = 6490;
	static int32_t t19 = -2;

    t19 = ((x77<=x78)==(x79^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = -56;
	static uint32_t x84 = UINT32_MAX;

    t20 = ((x81<=x82)==(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x87 = 1U;
	uint8_t x88 = UINT8_MAX;

    t21 = ((x85<=x86)==(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = 0;
	uint8_t x92 = UINT8_MAX;

    t22 = ((x89<=x90)==(x91^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = 7U;
	uint64_t x94 = UINT64_MAX;
	static int8_t x95 = INT8_MIN;
	int8_t x96 = 9;
	volatile int32_t t23 = -267267;

    t23 = ((x93<=x94)==(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	int32_t x98 = 7;
	int8_t x99 = 54;
	int8_t x100 = -28;
	volatile int32_t t24 = -171;

    t24 = ((x97<=x98)==(x99^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MIN;
	int16_t x104 = -1;
	volatile int32_t t25 = 3;

    t25 = ((x101<=x102)==(x103^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	volatile int16_t x106 = -1;
	int16_t x107 = -6132;
	volatile int64_t x108 = -1LL;

    t26 = ((x105<=x106)==(x107^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = 70;
	int32_t x111 = INT32_MIN;
	int8_t x112 = -1;

    t27 = ((x109<=x110)==(x111^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int32_t x114 = -1;
	volatile int64_t x115 = INT64_MAX;
	uint8_t x116 = UINT8_MAX;

    t28 = ((x113<=x114)==(x115^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -1;
	int16_t x119 = 3;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t29 = -3949;

    t29 = ((x117<=x118)==(x119^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = 1;
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = 103U;
	int32_t t30 = 9254099;

    t30 = ((x121<=x122)==(x123^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 6513U;
	uint64_t x126 = UINT64_MAX;
	uint8_t x127 = 3U;
	int32_t t31 = -66;

    t31 = ((x125<=x126)==(x127^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x130 = -3800;
	volatile uint32_t x132 = UINT32_MAX;

    t32 = ((x129<=x130)==(x131^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = UINT8_MAX;
	volatile int64_t x135 = -896426113LL;
	int64_t x136 = 828464583LL;

    t33 = ((x133<=x134)==(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	int32_t t34 = 7495;

    t34 = ((x137<=x138)==(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x142 = 1;
	volatile int8_t x143 = INT8_MAX;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t35 = 96;

    t35 = ((x141<=x142)==(x143^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x146 = UINT16_MAX;
	static int32_t x148 = -393477388;
	volatile int32_t t36 = -60793;

    t36 = ((x145<=x146)==(x147^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 289U;
	static uint8_t x152 = 1U;
	volatile int32_t t37 = -11;

    t37 = ((x149<=x150)==(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	uint64_t x154 = 135890484173LLU;
	volatile uint16_t x155 = 464U;
	static volatile int16_t x156 = -14;
	volatile int32_t t38 = 1827;

    t38 = ((x153<=x154)==(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	uint8_t x160 = 1U;
	int32_t t39 = 805099;

    t39 = ((x157<=x158)==(x159^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint32_t x164 = 4U;
	int32_t t40 = 434;

    t40 = ((x161<=x162)==(x163^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	uint32_t x166 = 444193U;
	int64_t x167 = INT64_MAX;
	static int64_t x168 = -1LL;

    t41 = ((x165<=x166)==(x167^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	volatile int16_t x170 = 14;
	uint8_t x171 = 0U;
	int8_t x172 = 5;
	volatile int32_t t42 = -1;

    t42 = ((x169<=x170)==(x171^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = INT64_MIN;
	int8_t x175 = -1;

    t43 = ((x173<=x174)==(x175^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = 64014391808184101LL;
	int64_t x178 = INT64_MAX;
	int32_t x179 = INT32_MIN;
	static int32_t t44 = -1;

    t44 = ((x177<=x178)==(x179^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x182 = 0U;
	static int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 16733621;

    t45 = ((x181<=x182)==(x183^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = INT32_MAX;
	volatile int16_t x187 = -1087;
	static int32_t t46 = -28328701;

    t46 = ((x185<=x186)==(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	volatile int64_t x190 = INT64_MIN;
	volatile uint16_t x191 = UINT16_MAX;

    t47 = ((x189<=x190)==(x191^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = INT8_MAX;
	static int8_t x195 = INT8_MAX;
	volatile int32_t t48 = -4;

    t48 = ((x193<=x194)==(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = -1;
	int64_t x198 = -1LL;
	volatile uint32_t x199 = 380338U;
	uint32_t x200 = 0U;
	int32_t t49 = 337567392;

    t49 = ((x197<=x198)==(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -11;
	uint16_t x202 = 14519U;
	volatile int64_t x203 = -92758466LL;

    t50 = ((x201<=x202)==(x203^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MIN;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = 1071619260LL;
	uint16_t x208 = 13880U;
	int32_t t51 = 3201;

    t51 = ((x205<=x206)==(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	static volatile uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 293U;
	static volatile int32_t t52 = 187;

    t52 = ((x209<=x210)==(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = 0;
	uint32_t x214 = 2U;
	int32_t x215 = INT32_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -321674;

    t53 = ((x213<=x214)==(x215^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 1028886732166331LLU;
	int8_t x218 = 14;
	volatile int16_t x219 = -11477;
	int32_t t54 = 10;

    t54 = ((x217<=x218)==(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 63U;
	uint16_t x223 = 88U;
	volatile int32_t t55 = -6828;

    t55 = ((x221<=x222)==(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = -4410571106518048LL;
	static int32_t x226 = 82733;
	int64_t x227 = INT64_MIN;
	int32_t t56 = 339;

    t56 = ((x225<=x226)==(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x230 = INT32_MIN;
	static uint16_t x232 = 2U;
	int32_t t57 = 176144;

    t57 = ((x229<=x230)==(x231^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	static volatile int32_t x234 = -1;
	int8_t x235 = -1;
	volatile int64_t x236 = 174970LL;
	static int32_t t58 = -291;

    t58 = ((x233<=x234)==(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	static uint64_t x238 = 39628LLU;
	int32_t x239 = -1;
	volatile int8_t x240 = INT8_MIN;
	int32_t t59 = 934396290;

    t59 = ((x237<=x238)==(x239^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 104U;
	static uint64_t x244 = 1906911090LLU;
	int32_t t60 = -13;

    t60 = ((x241<=x242)==(x243^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = 27758U;
	volatile uint16_t x246 = 102U;
	int64_t x247 = INT64_MIN;
	static int32_t t61 = -2440867;

    t61 = ((x245<=x246)==(x247^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -1;

    t62 = ((x249<=x250)==(x251^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 1U;

    t63 = ((x253<=x254)==(x255^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MAX;
	int8_t x259 = -1;
	int32_t t64 = -191;

    t64 = ((x257<=x258)==(x259^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = 1U;
	uint64_t x262 = 7013774436LLU;
	uint32_t x264 = UINT32_MAX;

    t65 = ((x261<=x262)==(x263^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x265 = -1;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	int32_t t66 = -396173;

    t66 = ((x265<=x266)==(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 10;

    t67 = ((x269<=x270)==(x271^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x274 = INT16_MIN;
	uint64_t x275 = 12325793468332LLU;

    t68 = ((x273<=x274)==(x275^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	static uint16_t x280 = 3712U;

    t69 = ((x277<=x278)==(x279^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = 126U;
	static int32_t x282 = 540963275;
	volatile int64_t x283 = INT64_MIN;
	volatile int32_t t70 = 62424775;

    t70 = ((x281<=x282)==(x283^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 87U;
	uint64_t x287 = 241325087723820564LLU;
	int32_t t71 = 30;

    t71 = ((x285<=x286)==(x287^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	uint16_t x290 = 4138U;
	static volatile int64_t x291 = -18723696LL;
	volatile int8_t x292 = 3;
	volatile int32_t t72 = 4003;

    t72 = ((x289<=x290)==(x291^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	int32_t x294 = INT32_MAX;
	static volatile int64_t x296 = -288748633758239LL;
	volatile int32_t t73 = 21203798;

    t73 = ((x293<=x294)==(x295^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = 1U;
	volatile int32_t t74 = 262445;

    t74 = ((x297<=x298)==(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 2U;
	static uint8_t x302 = 109U;
	volatile int64_t x303 = INT64_MIN;
	int32_t t75 = -356818;

    t75 = ((x301<=x302)==(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x306 = 0U;
	uint64_t x307 = 44370373287LLU;

    t76 = ((x305<=x306)==(x307^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	int16_t x310 = 1233;
	int8_t x311 = -21;
	int8_t x312 = INT8_MIN;
	static int32_t t77 = -674;

    t77 = ((x309<=x310)==(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 26U;
	int64_t x314 = -1LL;
	uint32_t x315 = 655910U;
	int16_t x316 = INT16_MIN;

    t78 = ((x313<=x314)==(x315^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -2175556052507732LL;
	uint64_t x318 = 8192256525126LLU;
	static uint64_t x319 = UINT64_MAX;
	uint32_t x320 = 18519516U;

    t79 = ((x317<=x318)==(x319^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = INT64_MAX;
	uint16_t x322 = 12122U;
	static int16_t x323 = 5;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 363866322;

    t80 = ((x321<=x322)==(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = 122813110684958LL;
	volatile uint64_t x326 = 50449LLU;
	static int32_t x328 = -1;
	volatile int32_t t81 = 777546327;

    t81 = ((x325<=x326)==(x327^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = 314498LL;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = 0;

    t82 = ((x329<=x330)==(x331^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x334 = 59828461U;
	volatile int32_t t83 = -45124524;

    t83 = ((x333<=x334)==(x335^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 355U;
	volatile int8_t x338 = 0;
	int32_t t84 = -7124;

    t84 = ((x337<=x338)==(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = 0;
	uint8_t x342 = 15U;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 61062943;

    t85 = ((x341<=x342)==(x343^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x347 = -1;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 223714;

    t86 = ((x345<=x346)==(x347^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	volatile int8_t x351 = INT8_MIN;
	uint8_t x352 = 2U;

    t87 = ((x349<=x350)==(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 29610U;
	int64_t x356 = INT64_MIN;

    t88 = ((x353<=x354)==(x355^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 4100376U;
	volatile uint32_t x358 = 124173848U;
	int64_t x360 = INT64_MAX;
	int32_t t89 = 3988;

    t89 = ((x357<=x358)==(x359^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 1;
	int16_t x362 = INT16_MAX;
	uint64_t x364 = 12167237LLU;
	volatile int32_t t90 = -3;

    t90 = ((x361<=x362)==(x363^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x366 = -118;
	volatile int8_t x367 = INT8_MAX;
	static uint16_t x368 = 3U;
	int32_t t91 = -10921;

    t91 = ((x365<=x366)==(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x370 = 47U;
	int32_t x371 = 3;
	int16_t x372 = -1;
	volatile int32_t t92 = 31290253;

    t92 = ((x369<=x370)==(x371^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 462;
	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = 3U;
	volatile int32_t x376 = -1;
	static volatile int32_t t93 = 5;

    t93 = ((x373<=x374)==(x375^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -6LL;
	volatile int8_t x379 = 1;
	static volatile int32_t t94 = -327870;

    t94 = ((x377<=x378)==(x379^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = INT64_MIN;
	int32_t t95 = -433939;

    t95 = ((x381<=x382)==(x383^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MAX;
	uint32_t x387 = 15266U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = -1270;

    t96 = ((x385<=x386)==(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	volatile int16_t x390 = INT16_MAX;
	uint8_t x391 = 1U;
	static int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = 127951563;

    t97 = ((x389<=x390)==(x391^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MAX;
	static uint32_t x394 = 29U;
	uint16_t x395 = UINT16_MAX;
	volatile int32_t t98 = 119754330;

    t98 = ((x393<=x394)==(x395^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -154149563LL;
	static int16_t x398 = INT16_MAX;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -24050;

    t99 = ((x397<=x398)==(x399^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	static int16_t x402 = -9;
	int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	volatile int32_t t100 = 458222;

    t100 = ((x401<=x402)==(x403^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = 14021012;
	static int64_t x406 = 98367382540LL;
	uint16_t x407 = 0U;
	int32_t t101 = 61;

    t101 = ((x405<=x406)==(x407^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	static int32_t x410 = 264830;
	int16_t x411 = 848;
	static volatile int32_t t102 = 0;

    t102 = ((x409<=x410)==(x411^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MAX;
	int64_t x415 = INT64_MIN;
	int32_t t103 = -8552387;

    t103 = ((x413<=x414)==(x415^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -3;
	int64_t x418 = -1LL;
	static volatile int32_t x419 = -153;
	int8_t x420 = 1;
	static int32_t t104 = -30094422;

    t104 = ((x417<=x418)==(x419^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = -1;
	uint16_t x424 = 48U;

    t105 = ((x421<=x422)==(x423^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -12145081;
	uint64_t x426 = 946575643405203471LLU;
	int16_t x428 = -103;
	int32_t t106 = 23703;

    t106 = ((x425<=x426)==(x427^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x431 = UINT16_MAX;
	uint64_t x432 = 1LLU;

    t107 = ((x429<=x430)==(x431^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 3102401LL;
	int16_t x434 = -1;
	uint32_t x435 = 33U;
	int64_t x436 = 60649801LL;
	int32_t t108 = 18;

    t108 = ((x433<=x434)==(x435^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 3;
	volatile int32_t x438 = -1325855;
	volatile int8_t x439 = -1;
	volatile int64_t x440 = INT64_MIN;
	volatile int32_t t109 = 884438;

    t109 = ((x437<=x438)==(x439^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = UINT8_MAX;
	int8_t x444 = 3;

    t110 = ((x441<=x442)==(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	int16_t x448 = -1;

    t111 = ((x445<=x446)==(x447^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x449 = -127013676719LL;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 0U;
	volatile uint8_t x452 = 1U;

    t112 = ((x449<=x450)==(x451^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = 766U;
	int8_t x454 = -3;
	volatile int32_t x456 = INT32_MAX;
	volatile int32_t t113 = 16777915;

    t113 = ((x453<=x454)==(x455^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x457 = 206478U;
	int16_t x460 = -712;
	int32_t t114 = -370109019;

    t114 = ((x457<=x458)==(x459^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x461 = 106U;
	int8_t x462 = -1;
	int64_t x464 = 130213LL;
	int32_t t115 = 88798;

    t115 = ((x461<=x462)==(x463^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 6687889409384LLU;
	int64_t x466 = -64809607654573888LL;
	int8_t x468 = INT8_MIN;
	volatile int32_t t116 = 0;

    t116 = ((x465<=x466)==(x467^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x469 = 1909896038LLU;
	int32_t x470 = INT32_MIN;
	volatile int32_t x471 = -59951;
	static uint8_t x472 = UINT8_MAX;

    t117 = ((x469<=x470)==(x471^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 454;
	int16_t x474 = INT16_MAX;
	uint64_t x476 = 1901727832LLU;

    t118 = ((x473<=x474)==(x475^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = 1;
	int32_t x478 = -1;
	int16_t x479 = -1;
	volatile int8_t x480 = INT8_MIN;

    t119 = ((x477<=x478)==(x479^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 1779;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = -1;
	static volatile int32_t t120 = -371;

    t120 = ((x481<=x482)==(x483^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x487 = 120;
	int32_t x488 = 1;
	volatile int32_t t121 = -11478;

    t121 = ((x485<=x486)==(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	uint64_t x490 = 460884368924LLU;
	int16_t x491 = INT16_MIN;
	int64_t x492 = -459869401LL;

    t122 = ((x489<=x490)==(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	volatile int64_t x494 = INT64_MIN;
	volatile uint16_t x495 = 61U;
	int32_t t123 = 260;

    t123 = ((x493<=x494)==(x495^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x498 = -44;
	int64_t x499 = INT64_MIN;
	int16_t x500 = -1;
	volatile int32_t t124 = 1277;

    t124 = ((x497<=x498)==(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x503 = UINT8_MAX;
	volatile int16_t x504 = INT16_MAX;
	volatile int32_t t125 = 31;

    t125 = ((x501<=x502)==(x503^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 0U;
	static uint8_t x506 = 4U;
	int32_t x507 = 30120442;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = 816878091;

    t126 = ((x505<=x506)==(x507^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x510 = -1;
	static uint32_t x512 = UINT32_MAX;
	volatile int32_t t127 = 21608520;

    t127 = ((x509<=x510)==(x511^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	static volatile int32_t x514 = INT32_MAX;
	volatile int16_t x515 = 1984;
	int8_t x516 = INT8_MIN;
	int32_t t128 = -3438;

    t128 = ((x513<=x514)==(x515^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = 1;
	int32_t x518 = INT32_MIN;
	uint64_t x519 = 34117LLU;
	int8_t x520 = INT8_MAX;

    t129 = ((x517<=x518)==(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 0U;
	uint8_t x522 = 1U;
	int64_t x523 = 237560LL;
	uint16_t x524 = 1U;
	volatile int32_t t130 = 840;

    t130 = ((x521<=x522)==(x523^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint64_t x527 = UINT64_MAX;
	volatile int8_t x528 = INT8_MIN;
	static volatile int32_t t131 = 52;

    t131 = ((x525<=x526)==(x527^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -14478500;
	uint64_t x530 = UINT64_MAX;
	int16_t x531 = INT16_MAX;
	volatile int32_t x532 = INT32_MIN;

    t132 = ((x529<=x530)==(x531^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 63;
	volatile uint32_t x535 = 17U;
	int32_t x536 = -1;
	volatile int32_t t133 = 0;

    t133 = ((x533<=x534)==(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = -1;
	int64_t x538 = 10247900LL;
	int32_t x539 = -1;
	static int32_t x540 = INT32_MIN;
	volatile int32_t t134 = 2471;

    t134 = ((x537<=x538)==(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = INT16_MAX;
	volatile int64_t x542 = -80312102741029LL;
	int32_t x543 = INT32_MIN;
	uint64_t x544 = UINT64_MAX;

    t135 = ((x541<=x542)==(x543^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = UINT8_MAX;
	static int8_t x546 = -1;
	static volatile int64_t x547 = -1720673672LL;
	uint16_t x548 = UINT16_MAX;
	static volatile int32_t t136 = -179;

    t136 = ((x545<=x546)==(x547^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile uint8_t x550 = 7U;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = INT16_MIN;

    t137 = ((x549<=x550)==(x551^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	uint8_t x554 = 1U;
	static int32_t x556 = 1;
	int32_t t138 = 316;

    t138 = ((x553<=x554)==(x555^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x558 = -1;
	uint64_t x559 = UINT64_MAX;
	volatile uint32_t x560 = UINT32_MAX;

    t139 = ((x557<=x558)==(x559^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -1;
	int16_t x563 = 3212;
	static int64_t x564 = 500340LL;
	int32_t t140 = 18;

    t140 = ((x561<=x562)==(x563^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	uint64_t x566 = UINT64_MAX;
	int32_t x567 = -20122385;
	int16_t x568 = -1;
	volatile int32_t t141 = -322317;

    t141 = ((x565<=x566)==(x567^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MAX;
	uint16_t x570 = UINT16_MAX;
	int8_t x571 = INT8_MIN;
	uint32_t x572 = 4280U;
	int32_t t142 = -168981411;

    t142 = ((x569<=x570)==(x571^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MIN;
	static volatile uint64_t x575 = 3673LLU;
	int32_t t143 = -1;

    t143 = ((x573<=x574)==(x575^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	static int32_t x578 = INT32_MIN;
	static int32_t x580 = INT32_MAX;
	volatile int32_t t144 = 577;

    t144 = ((x577<=x578)==(x579^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	uint16_t x582 = UINT16_MAX;
	static int64_t x583 = -1LL;
	uint64_t x584 = 55791438569LLU;
	int32_t t145 = -52256;

    t145 = ((x581<=x582)==(x583^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -98;
	int16_t x586 = INT16_MIN;
	int64_t x587 = -1LL;
	int64_t x588 = INT64_MIN;
	volatile int32_t t146 = -1371;

    t146 = ((x585<=x586)==(x587^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x591 = -1;
	static int32_t t147 = 6754776;

    t147 = ((x589<=x590)==(x591^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x595 = -3;
	uint16_t x596 = 1867U;
	volatile int32_t t148 = 33093;

    t148 = ((x593<=x594)==(x595^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = INT16_MIN;
	uint16_t x600 = UINT16_MAX;
	static int32_t t149 = 65321814;

    t149 = ((x597<=x598)==(x599^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = 1524U;
	volatile int32_t x602 = -1;
	static int64_t x603 = INT64_MIN;
	int32_t t150 = 7576;

    t150 = ((x601<=x602)==(x603^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	uint16_t x606 = UINT16_MAX;
	static volatile int64_t x608 = -332LL;
	volatile int32_t t151 = 3964;

    t151 = ((x605<=x606)==(x607^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint32_t x612 = UINT32_MAX;
	int32_t t152 = 147888;

    t152 = ((x609<=x610)==(x611^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	volatile uint32_t x614 = 43831792U;
	uint64_t x615 = 134978052LLU;
	int32_t x616 = INT32_MIN;

    t153 = ((x613<=x614)==(x615^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x618 = 1U;
	uint16_t x619 = 1775U;
	static volatile int32_t t154 = -4880701;

    t154 = ((x617<=x618)==(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	int32_t x623 = 0;
	uint32_t x624 = 14630124U;
	static volatile int32_t t155 = -855096100;

    t155 = ((x621<=x622)==(x623^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x626 = -875;
	int16_t x628 = -1;
	int32_t t156 = 2;

    t156 = ((x625<=x626)==(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 4618LLU;
	int16_t x630 = -5;
	int32_t x631 = -492;
	uint64_t x632 = UINT64_MAX;
	static int32_t t157 = 50511;

    t157 = ((x629<=x630)==(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = INT8_MAX;
	int32_t x634 = -1;
	int64_t x635 = INT64_MIN;
	int32_t x636 = -1;
	int32_t t158 = 942415464;

    t158 = ((x633<=x634)==(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = 63110082;
	int64_t x638 = -1688436970604103769LL;
	int32_t x639 = -1;
	volatile int32_t t159 = 4;

    t159 = ((x637<=x638)==(x639^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x643 = UINT64_MAX;
	uint64_t x644 = UINT64_MAX;
	static volatile int32_t t160 = 2813;

    t160 = ((x641<=x642)==(x643^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 434LL;
	int8_t x646 = INT8_MAX;
	int32_t x647 = -3566872;
	int64_t x648 = INT64_MIN;

    t161 = ((x645<=x646)==(x647^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	volatile uint16_t x650 = 568U;
	int8_t x651 = 15;
	volatile uint32_t x652 = UINT32_MAX;

    t162 = ((x649<=x650)==(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x653 = UINT8_MAX;
	uint64_t x655 = 15274340098503LLU;
	static volatile uint8_t x656 = 1U;
	int32_t t163 = 0;

    t163 = ((x653<=x654)==(x655^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x658 = INT8_MIN;
	uint64_t x660 = UINT64_MAX;

    t164 = ((x657<=x658)==(x659^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = UINT8_MAX;
	uint64_t x662 = UINT64_MAX;
	static int8_t x663 = INT8_MIN;
	int64_t x664 = 22369LL;
	volatile int32_t t165 = -213199293;

    t165 = ((x661<=x662)==(x663^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	uint8_t x666 = 24U;
	uint32_t x668 = UINT32_MAX;
	int32_t t166 = -6133;

    t166 = ((x665<=x666)==(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 368U;
	int8_t x672 = -1;

    t167 = ((x669<=x670)==(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MIN;
	static volatile int32_t x675 = -1;
	static int32_t t168 = 280;

    t168 = ((x673<=x674)==(x675^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	int8_t x678 = INT8_MIN;
	uint64_t x680 = 6287906610013LLU;
	volatile int32_t t169 = -35440928;

    t169 = ((x677<=x678)==(x679^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 30;
	int16_t x682 = INT16_MAX;
	int8_t x683 = INT8_MAX;
	volatile int32_t x684 = INT32_MAX;
	int32_t t170 = 6;

    t170 = ((x681<=x682)==(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	static uint8_t x686 = 82U;
	volatile int64_t x687 = INT64_MAX;
	int16_t x688 = -1;
	int32_t t171 = -14676;

    t171 = ((x685<=x686)==(x687^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 5624074877464LLU;
	int16_t x690 = INT16_MAX;
	volatile int8_t x691 = INT8_MIN;
	static int32_t t172 = -776276;

    t172 = ((x689<=x690)==(x691^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 898961193394025030LLU;
	static uint32_t x694 = UINT32_MAX;
	int32_t x695 = INT32_MIN;

    t173 = ((x693<=x694)==(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = INT32_MAX;
	static volatile uint16_t x699 = 12505U;
	uint16_t x700 = UINT16_MAX;

    t174 = ((x697<=x698)==(x699^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 32908393LLU;
	static volatile uint64_t x703 = 249070878133LLU;
	int64_t x704 = -16547253LL;

    t175 = ((x701<=x702)==(x703^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -3;
	int16_t x706 = 1180;
	uint64_t x707 = 1750978984LLU;
	int64_t x708 = INT64_MIN;
	int32_t t176 = -110590858;

    t176 = ((x705<=x706)==(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x709 = 115U;
	int8_t x710 = INT8_MIN;
	static volatile int8_t x712 = -1;
	int32_t t177 = 3153002;

    t177 = ((x709<=x710)==(x711^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -4366538817845856990LL;
	static int32_t x714 = 274309919;
	uint64_t x715 = UINT64_MAX;
	int32_t x716 = 1315;
	static volatile int32_t t178 = -7480;

    t178 = ((x713<=x714)==(x715^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = -56963418312048465LL;
	static uint16_t x718 = UINT16_MAX;
	volatile int16_t x719 = INT16_MIN;
	int64_t x720 = INT64_MAX;
	int32_t t179 = -2;

    t179 = ((x717<=x718)==(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MAX;
	volatile int64_t x722 = -1LL;
	int32_t x723 = 400;
	int32_t t180 = -61786848;

    t180 = ((x721<=x722)==(x723^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x726 = 11U;
	uint32_t x727 = 232U;
	int8_t x728 = -22;
	volatile int32_t t181 = -2;

    t181 = ((x725<=x726)==(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x730 = 8U;
	int8_t x731 = INT8_MIN;
	int16_t x732 = INT16_MIN;
	volatile int32_t t182 = 27;

    t182 = ((x729<=x730)==(x731^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 40U;
	uint64_t x734 = UINT64_MAX;
	int16_t x736 = INT16_MIN;
	static int32_t t183 = -5;

    t183 = ((x733<=x734)==(x735^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	static int16_t x739 = 9;

    t184 = ((x737<=x738)==(x739^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 5016U;
	volatile int32_t x742 = 0;
	int64_t x743 = -103368442778701LL;
	static volatile uint8_t x744 = 9U;
	volatile int32_t t185 = -1;

    t185 = ((x741<=x742)==(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	int8_t x746 = -1;
	volatile int64_t x747 = INT64_MIN;

    t186 = ((x745<=x746)==(x747^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 51U;
	uint64_t x750 = UINT64_MAX;
	volatile uint64_t x751 = 1811752LLU;
	volatile uint64_t x752 = UINT64_MAX;
	int32_t t187 = 4447795;

    t187 = ((x749<=x750)==(x751^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	static int32_t x754 = INT32_MAX;
	uint32_t x755 = 33304228U;
	int16_t x756 = INT16_MAX;
	volatile int32_t t188 = -972783;

    t188 = ((x753<=x754)==(x755^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MIN;
	uint32_t x758 = 244537U;
	static int64_t x759 = -1LL;
	int32_t x760 = INT32_MIN;

    t189 = ((x757<=x758)==(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 0U;
	volatile int64_t x762 = INT64_MIN;
	volatile int16_t x763 = -1;
	int32_t x764 = INT32_MAX;
	int32_t t190 = -951217;

    t190 = ((x761<=x762)==(x763^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	static int16_t x766 = 25;
	volatile uint64_t x768 = 4780544392653378002LLU;
	int32_t t191 = -333622;

    t191 = ((x765<=x766)==(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 18;
	int32_t x770 = -1;
	uint8_t x771 = UINT8_MAX;
	volatile int32_t x772 = -1;
	volatile int32_t t192 = -219179;

    t192 = ((x769<=x770)==(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	volatile int32_t x774 = INT32_MIN;
	volatile int64_t x775 = -1LL;
	int16_t x776 = INT16_MAX;
	int32_t t193 = -574948193;

    t193 = ((x773<=x774)==(x775^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = 252U;
	int16_t x780 = 8415;

    t194 = ((x777<=x778)==(x779^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	uint8_t x782 = 89U;
	static int8_t x784 = 0;
	int32_t t195 = 20730;

    t195 = ((x781<=x782)==(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 8099LLU;
	int64_t x786 = -260728265472LL;
	static uint8_t x787 = 19U;
	static int8_t x788 = -1;
	static volatile int32_t t196 = -3355341;

    t196 = ((x785<=x786)==(x787^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = INT8_MIN;
	uint16_t x791 = 404U;
	volatile int32_t t197 = 1618792;

    t197 = ((x789<=x790)==(x791^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = -1LL;
	int32_t x794 = -1;
	volatile int32_t x795 = 5;
	volatile int32_t t198 = -1;

    t198 = ((x793<=x794)==(x795^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	int16_t x798 = INT16_MAX;
	static volatile uint64_t x799 = 1758363910LLU;
	int64_t x800 = INT64_MAX;

    t199 = ((x797<=x798)==(x799^x800));

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

