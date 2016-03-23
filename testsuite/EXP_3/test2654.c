
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

int8_t x3 = 0;
uint16_t x5 = 34U;
int16_t x9 = -1;
int16_t x10 = INT16_MIN;
volatile int16_t x11 = 7007;
volatile uint64_t x12 = 9303039959335091LLU;
uint8_t x17 = UINT8_MAX;
int64_t x20 = INT64_MAX;
uint16_t x22 = UINT16_MAX;
volatile int32_t t5 = -2058474;
int64_t x33 = INT64_MIN;
int8_t x36 = -50;
int32_t t8 = -817842;
static int32_t x38 = INT32_MIN;
static volatile uint8_t x41 = UINT8_MAX;
uint64_t x42 = 7127985903LLU;
volatile int8_t x44 = INT8_MIN;
int64_t x53 = -1LL;
volatile uint16_t x54 = 4105U;
static int32_t x60 = -384;
int32_t t14 = -456935;
static int8_t x63 = INT8_MIN;
int32_t t16 = 7;
volatile int64_t x74 = INT64_MIN;
int32_t x80 = INT32_MIN;
volatile uint32_t x84 = 99595128U;
int16_t x89 = INT16_MAX;
int16_t x90 = 1;
uint64_t x95 = 464363LLU;
uint64_t x96 = 31414064700LLU;
int32_t x101 = -1160;
int16_t x109 = INT16_MIN;
static uint16_t x126 = 81U;
uint64_t x127 = UINT64_MAX;
int32_t t35 = -75;
int32_t x154 = 1;
uint32_t x155 = 4786U;
static int32_t x159 = INT32_MIN;
int8_t x162 = -29;
volatile uint64_t x164 = 3LLU;
static int32_t x166 = INT32_MAX;
int32_t t41 = -894;
static uint16_t x173 = 346U;
static uint64_t x175 = 3412LLU;
static volatile int32_t x182 = INT32_MIN;
int16_t x189 = INT16_MIN;
uint8_t x198 = 76U;
volatile int32_t t49 = 88;
int32_t t50 = 1;
int64_t x208 = INT64_MIN;
uint32_t x209 = 436948U;
int16_t x215 = -1;
static volatile int32_t t53 = 534035;
uint64_t x222 = 1013642175LLU;
int32_t x223 = 0;
int16_t x240 = INT16_MAX;
int32_t x244 = -3973;
uint16_t x247 = 63U;
uint16_t x249 = 70U;
int8_t x250 = INT8_MIN;
int8_t x254 = INT8_MIN;
uint64_t x259 = UINT64_MAX;
volatile int16_t x266 = 6;
int8_t x268 = INT8_MIN;
volatile int32_t t66 = -753;
int16_t x271 = -31;
int32_t x273 = INT32_MIN;
uint16_t x275 = UINT16_MAX;
uint64_t x284 = UINT64_MAX;
uint16_t x289 = 1794U;
int32_t t72 = 83;
int32_t t73 = 1013358;
int64_t x298 = -1LL;
static int32_t x299 = INT32_MIN;
static int32_t t74 = -906;
int16_t x305 = -1;
int64_t x310 = -3064461916475LL;
int64_t x312 = -1LL;
volatile uint32_t x321 = 319U;
int32_t t84 = 1;
volatile int64_t x342 = INT64_MAX;
int32_t t85 = 39152;
volatile int8_t x346 = INT8_MIN;
volatile int8_t x350 = -1;
static int32_t x352 = INT32_MAX;
uint16_t x354 = UINT16_MAX;
uint32_t x355 = 1697U;
int16_t x375 = INT16_MIN;
static int32_t x383 = -1;
int8_t x384 = INT8_MIN;
volatile uint8_t x387 = UINT8_MAX;
int16_t x393 = INT16_MIN;
static volatile int32_t t98 = -914010;
volatile int16_t x397 = -1;
static int16_t x398 = INT16_MIN;
int16_t x399 = INT16_MAX;
volatile int32_t t99 = -205893402;
int32_t x401 = -1;
int8_t x402 = -1;
volatile int8_t x403 = -1;
int8_t x409 = 23;
int32_t t103 = -7053672;
volatile int64_t x418 = 115LL;
int16_t x422 = -1;
volatile uint32_t x429 = 12013U;
int32_t t109 = -44948700;
uint32_t x454 = 124589U;
int32_t t113 = -14897913;
int8_t x459 = INT8_MAX;
uint64_t x465 = UINT64_MAX;
static volatile int32_t t117 = -115;
int8_t x476 = INT8_MAX;
int32_t t118 = -6925311;
int8_t x484 = INT8_MIN;
static volatile uint8_t x487 = 60U;
volatile int32_t t123 = 79;
int8_t x501 = -1;
uint64_t x502 = UINT64_MAX;
int32_t x503 = -1;
volatile int32_t x508 = -1;
volatile int64_t x512 = INT64_MIN;
uint8_t x518 = 12U;
int16_t x526 = -1;
static volatile int32_t t131 = 3;
volatile uint16_t x529 = 1794U;
int32_t x531 = INT32_MAX;
int32_t t132 = 48302363;
static uint64_t x535 = UINT64_MAX;
uint16_t x542 = 19018U;
int8_t x549 = INT8_MAX;
int32_t x564 = INT32_MIN;
int8_t x565 = INT8_MIN;
uint16_t x569 = 12U;
int8_t x572 = -1;
static int32_t t143 = 4799918;
int16_t x580 = 3312;
int64_t x581 = INT64_MAX;
volatile int32_t t145 = -15025;
int32_t x586 = INT32_MIN;
int32_t x587 = -1;
static volatile int64_t x589 = -1LL;
uint16_t x591 = 8169U;
uint16_t x595 = UINT16_MAX;
int32_t x597 = INT32_MIN;
int32_t x598 = 3;
int16_t x606 = -123;
static int32_t x613 = INT32_MIN;
int16_t x619 = INT16_MIN;
int8_t x621 = INT8_MIN;
int32_t t155 = 24295;
static int16_t x625 = INT16_MIN;
int64_t x627 = INT64_MIN;
static int64_t x631 = INT64_MAX;
int64_t x636 = -17713902079344724LL;
uint64_t x640 = UINT64_MAX;
volatile int32_t t159 = -110;
uint64_t x642 = 3LLU;
int8_t x644 = INT8_MIN;
uint8_t x645 = 97U;
uint8_t x649 = UINT8_MAX;
static int32_t x658 = INT32_MIN;
int16_t x662 = INT16_MIN;
int8_t x664 = INT8_MIN;
int64_t x667 = -1LL;
int32_t t166 = -23280230;
uint8_t x674 = UINT8_MAX;
uint8_t x675 = 8U;
int32_t x681 = INT32_MAX;
uint64_t x706 = UINT64_MAX;
int32_t t179 = 163;
uint16_t x723 = 488U;
volatile int32_t t180 = -125531019;
uint32_t x731 = 15023U;
uint32_t x733 = 3555298U;
int32_t x750 = INT32_MAX;
volatile int32_t t187 = 0;
static uint8_t x757 = 109U;
volatile int32_t t189 = -95076366;
uint16_t x761 = 4U;
int32_t t190 = -12170;
int64_t x770 = -114868LL;
uint8_t x778 = 45U;
uint8_t x779 = UINT8_MAX;
int16_t x781 = INT16_MAX;
int8_t x789 = -1;
int16_t x790 = INT16_MIN;
uint8_t x794 = 7U;
int8_t x795 = 0;
int32_t x796 = INT32_MAX;
int8_t x797 = 0;
static int16_t x800 = INT16_MAX;
int32_t t199 = 14298997;


void f0(void) {
    	static volatile uint8_t x1 = 1U;
	uint64_t x2 = 3LLU;
	uint16_t x4 = 4321U;
	int32_t t0 = -433573509;

    t0 = ((x1==x2)==(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x6 = 43U;
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = -1724195;

    t1 = ((x5==x6)==(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t t2 = -473834048;

    t2 = ((x9==x10)==(x11^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static int64_t x14 = INT64_MIN;
	static uint8_t x15 = 2U;
	uint8_t x16 = 99U;
	volatile int32_t t3 = 89533;

    t3 = ((x13==x14)==(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 2720423346981LLU;
	static int8_t x19 = -27;
	static int32_t t4 = 1065625678;

    t4 = ((x17==x18)==(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 51950322101560LLU;
	static volatile int16_t x23 = INT16_MAX;
	static int32_t x24 = INT32_MIN;

    t5 = ((x21==x22)==(x23^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int64_t x26 = -499156165LL;
	volatile int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t6 = -90948233;

    t6 = ((x25==x26)==(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	volatile uint16_t x30 = UINT16_MAX;
	static volatile uint8_t x31 = 10U;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = -1038655;

    t7 = ((x29==x30)==(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = 31;
	volatile uint32_t x35 = 2050552U;

    t8 = ((x33==x34)==(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 37U;
	uint64_t x39 = 3LLU;
	volatile int32_t x40 = INT32_MAX;
	static volatile int32_t t9 = 507165336;

    t9 = ((x37==x38)==(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x43 = 881941816147LLU;
	volatile int32_t t10 = 50149045;

    t10 = ((x41==x42)==(x43^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 98U;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = INT16_MIN;
	int32_t x48 = -1;
	int32_t t11 = 581;

    t11 = ((x45==x46)==(x47^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -3;
	volatile uint8_t x50 = UINT8_MAX;
	static volatile int64_t x51 = -397757567368912LL;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = 5779;

    t12 = ((x49==x50)==(x51^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x55 = INT8_MAX;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -55;

    t13 = ((x53==x54)==(x55^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = 42;
	int16_t x59 = INT16_MIN;

    t14 = ((x57==x58)==(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 47751178U;
	int64_t x62 = 1991329700196659LL;
	int32_t x64 = -202782;
	int32_t t15 = -466;

    t15 = ((x61==x62)==(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -206846LL;
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	static int8_t x68 = INT8_MIN;

    t16 = ((x65==x66)==(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	volatile int32_t x70 = -114662;
	int32_t x71 = -6629887;
	int64_t x72 = INT64_MAX;
	int32_t t17 = 273883;

    t17 = ((x69==x70)==(x71^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	int32_t x75 = INT32_MAX;
	static int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 14;

    t18 = ((x73==x74)==(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int8_t x78 = -28;
	volatile int32_t x79 = -1;
	int32_t t19 = -2;

    t19 = ((x77==x78)==(x79^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 483LLU;
	int64_t x82 = 131782497919LL;
	uint16_t x83 = 42U;
	int32_t t20 = 646771305;

    t20 = ((x81==x82)==(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 2228U;
	int64_t x86 = INT64_MIN;
	static int8_t x87 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = 19086857;

    t21 = ((x85==x86)==(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x91 = -108068101164700834LL;
	volatile int16_t x92 = -1;
	int32_t t22 = -1;

    t22 = ((x89==x90)==(x91^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = 3951U;
	uint64_t x94 = 740828001LLU;
	int32_t t23 = 249487;

    t23 = ((x93==x94)==(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MAX;
	int64_t x98 = INT64_MIN;
	volatile int64_t x99 = 37884592753869170LL;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -11829;

    t24 = ((x97==x98)==(x99^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = 392U;
	uint16_t x103 = 4U;
	static volatile int8_t x104 = INT8_MAX;
	int32_t t25 = -312;

    t25 = ((x101==x102)==(x103^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 31778U;
	volatile int32_t x106 = INT32_MIN;
	static uint8_t x107 = UINT8_MAX;
	volatile int8_t x108 = -1;
	volatile int32_t t26 = 8011920;

    t26 = ((x105==x106)==(x107^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 67658888LLU;
	int8_t x111 = INT8_MAX;
	static uint32_t x112 = 12U;
	int32_t t27 = 23635;

    t27 = ((x109==x110)==(x111^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 214633U;
	volatile int32_t x114 = -6;
	int64_t x115 = 0LL;
	volatile uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 544738;

    t28 = ((x113==x114)==(x115^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 53744359934992788LL;
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 861507207607728LLU;
	uint32_t x120 = 0U;
	int32_t t29 = 4;

    t29 = ((x117==x118)==(x119^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 160952LLU;
	static uint64_t x122 = UINT64_MAX;
	static int64_t x123 = -1LL;
	int64_t x124 = INT64_MIN;
	int32_t t30 = -5;

    t30 = ((x121==x122)==(x123^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -997;

    t31 = ((x125==x126)==(x127^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	static int8_t x130 = -1;
	volatile uint32_t x131 = 83943681U;
	int64_t x132 = -32LL;
	int32_t t32 = -162043624;

    t32 = ((x129==x130)==(x131^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 0U;
	uint64_t x134 = UINT64_MAX;
	uint8_t x135 = 12U;
	volatile int32_t x136 = -22;
	volatile int32_t t33 = 8;

    t33 = ((x133==x134)==(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 6473;
	static int16_t x138 = -1;
	int8_t x139 = INT8_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -46848951;

    t34 = ((x137==x138)==(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	int16_t x142 = INT16_MAX;
	int16_t x143 = 25;
	int64_t x144 = INT64_MAX;

    t35 = ((x141==x142)==(x143^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = 0LLU;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = -10605557582LL;
	static int16_t x148 = 1380;
	static int32_t t36 = 316234363;

    t36 = ((x145==x146)==(x147^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	static int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -288;

    t37 = ((x149==x150)==(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 73958003U;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -9;

    t38 = ((x153==x154)==(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 38;
	int16_t x158 = INT16_MAX;
	int64_t x160 = INT64_MAX;
	int32_t t39 = -32337656;

    t39 = ((x157==x158)==(x159^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -2;
	volatile int8_t x163 = INT8_MIN;
	volatile int32_t t40 = -11535847;

    t40 = ((x161==x162)==(x163^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	int8_t x167 = -3;
	uint64_t x168 = UINT64_MAX;

    t41 = ((x165==x166)==(x167^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 680262567U;
	int32_t x170 = -2529;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = 353733U;
	volatile int32_t t42 = -145577370;

    t42 = ((x169==x170)==(x171^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = UINT32_MAX;
	uint16_t x176 = 0U;
	volatile int32_t t43 = -485;

    t43 = ((x173==x174)==(x175^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MAX;
	static int16_t x178 = INT16_MAX;
	uint32_t x179 = 2704329U;
	int8_t x180 = INT8_MAX;
	int32_t t44 = -138736;

    t44 = ((x177==x178)==(x179^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 45399LL;
	static volatile uint8_t x183 = 4U;
	static uint64_t x184 = UINT64_MAX;
	static int32_t t45 = 167646510;

    t45 = ((x181==x182)==(x183^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 1533268LLU;
	static int8_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -249864;

    t46 = ((x185==x186)==(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = INT64_MAX;
	int32_t x191 = 26128;
	static int32_t x192 = 18;
	volatile int32_t t47 = -231;

    t47 = ((x189==x190)==(x191^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 255;
	int16_t x194 = INT16_MIN;
	static int16_t x195 = -1;
	volatile int16_t x196 = 3758;
	volatile int32_t t48 = 7533934;

    t48 = ((x193==x194)==(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 1U;
	uint16_t x199 = UINT16_MAX;
	volatile int64_t x200 = INT64_MAX;

    t49 = ((x197==x198)==(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = 1;
	uint8_t x202 = UINT8_MAX;
	int16_t x203 = -4;
	int8_t x204 = INT8_MAX;

    t50 = ((x201==x202)==(x203^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 445;
	static int64_t x206 = INT64_MIN;
	static int8_t x207 = 1;
	volatile int32_t t51 = 190;

    t51 = ((x205==x206)==(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = 0U;
	volatile uint16_t x211 = 3U;
	int16_t x212 = -2252;
	volatile int32_t t52 = -2364;

    t52 = ((x209==x210)==(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static uint64_t x214 = 238768924924388946LLU;
	int32_t x216 = 7;

    t53 = ((x213==x214)==(x215^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int32_t x218 = 77654;
	uint32_t x219 = 88U;
	static uint8_t x220 = 0U;
	volatile int32_t t54 = -489830;

    t54 = ((x217==x218)==(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x221 = 1286476169721467477LL;
	int64_t x224 = -1LL;
	int32_t t55 = 34681;

    t55 = ((x221==x222)==(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = 0U;
	int32_t x226 = INT32_MIN;
	int64_t x227 = -1743379LL;
	volatile uint8_t x228 = 12U;
	static int32_t t56 = 162237;

    t56 = ((x225==x226)==(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = 518496398;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = INT32_MIN;
	static volatile int64_t x232 = INT64_MIN;
	int32_t t57 = -255639;

    t57 = ((x229==x230)==(x231^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	uint64_t x234 = 4LLU;
	uint16_t x235 = 714U;
	int16_t x236 = 7;
	volatile int32_t t58 = 425764645;

    t58 = ((x233==x234)==(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 543506U;
	int8_t x238 = 9;
	uint16_t x239 = 11105U;
	static volatile int32_t t59 = -57549958;

    t59 = ((x237==x238)==(x239^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	volatile int8_t x242 = 0;
	uint16_t x243 = 21U;
	int32_t t60 = 43316;

    t60 = ((x241==x242)==(x243^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 33;

    t61 = ((x245==x246)==(x247^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x251 = 9U;
	volatile int32_t x252 = 32346609;
	int32_t t62 = -51;

    t62 = ((x249==x250)==(x251^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 24U;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = 916U;
	volatile int32_t t63 = -8688;

    t63 = ((x253==x254)==(x255^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x258 = 44;
	int16_t x260 = 98;
	int32_t t64 = 44;

    t64 = ((x257==x258)==(x259^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = -1;
	int8_t x264 = 0;
	volatile int32_t t65 = -119893717;

    t65 = ((x261==x262)==(x263^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -8;
	int16_t x267 = 22;

    t66 = ((x265==x266)==(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 52412LLU;
	int8_t x270 = 1;
	volatile int32_t x272 = -1;
	int32_t t67 = 5;

    t67 = ((x269==x270)==(x271^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x274 = -1LL;
	int8_t x276 = INT8_MIN;
	int32_t t68 = -891;

    t68 = ((x273==x274)==(x275^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = 11;
	uint64_t x280 = 752LLU;
	volatile int32_t t69 = 2;

    t69 = ((x277==x278)==(x279^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = 4285066U;
	uint16_t x282 = 5769U;
	volatile int16_t x283 = -1991;
	int32_t t70 = -125087129;

    t70 = ((x281==x282)==(x283^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	int16_t x286 = -122;
	int16_t x287 = 2;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = 5;

    t71 = ((x285==x286)==(x287^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x290 = 565736LLU;
	int64_t x291 = 36156LL;
	int8_t x292 = INT8_MAX;

    t72 = ((x289==x290)==(x291^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -7707425LL;
	int64_t x294 = INT64_MIN;
	static uint64_t x295 = UINT64_MAX;
	volatile uint32_t x296 = 4330U;

    t73 = ((x293==x294)==(x295^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	volatile int64_t x300 = INT64_MAX;

    t74 = ((x297==x298)==(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	volatile uint64_t x302 = UINT64_MAX;
	static int8_t x303 = -23;
	int8_t x304 = 1;
	int32_t t75 = -187;

    t75 = ((x301==x302)==(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -941840463;

    t76 = ((x305==x306)==(x307^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int8_t x311 = 0;
	volatile int32_t t77 = 679249;

    t77 = ((x309==x310)==(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	int16_t x315 = -14991;
	int32_t x316 = INT32_MAX;
	int32_t t78 = 1;

    t78 = ((x313==x314)==(x315^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 358256450;
	volatile int8_t x318 = -2;
	uint8_t x319 = UINT8_MAX;
	volatile int64_t x320 = INT64_MIN;
	int32_t t79 = -45;

    t79 = ((x317==x318)==(x319^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MIN;
	uint8_t x323 = 16U;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = 92779;

    t80 = ((x321==x322)==(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MIN;
	int32_t x326 = -48;
	int8_t x327 = 1;
	int32_t x328 = 95076326;
	static int32_t t81 = 0;

    t81 = ((x325==x326)==(x327^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -18LL;
	static int64_t x332 = INT64_MIN;
	int32_t t82 = -626;

    t82 = ((x329==x330)==(x331^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	static int64_t x334 = 610971692255LL;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = 9U;
	int32_t t83 = -35;

    t83 = ((x333==x334)==(x335^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MAX;
	volatile uint8_t x338 = 21U;
	static uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;

    t84 = ((x337==x338)==(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile int8_t x343 = 11;
	int32_t x344 = INT32_MIN;

    t85 = ((x341==x342)==(x343^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	int64_t x347 = -20831802991228410LL;
	int64_t x348 = INT64_MIN;
	int32_t t86 = -452509023;

    t86 = ((x345==x346)==(x347^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x349 = 109U;
	volatile uint32_t x351 = UINT32_MAX;
	static volatile int32_t t87 = -1573;

    t87 = ((x349==x350)==(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	uint64_t x356 = 15178092247LLU;
	int32_t t88 = -1001230;

    t88 = ((x353==x354)==(x355^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	int64_t x358 = INT64_MIN;
	static int8_t x359 = 30;
	uint16_t x360 = 2044U;
	volatile int32_t t89 = 58;

    t89 = ((x357==x358)==(x359^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x361 = 40U;
	int32_t x362 = 1240;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = 1U;
	static volatile int32_t t90 = 15;

    t90 = ((x361==x362)==(x363^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	uint16_t x366 = UINT16_MAX;
	uint64_t x367 = 3LLU;
	volatile int64_t x368 = 255882084500LL;
	int32_t t91 = -727212;

    t91 = ((x365==x366)==(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -4863502471LL;
	int32_t x370 = INT32_MIN;
	uint64_t x371 = 3594953365LLU;
	int32_t x372 = -1;
	volatile int32_t t92 = -7270824;

    t92 = ((x369==x370)==(x371^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = 1;
	static int8_t x374 = INT8_MIN;
	static int32_t x376 = INT32_MIN;
	int32_t t93 = 2;

    t93 = ((x373==x374)==(x375^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	static volatile uint64_t x378 = 193132950LLU;
	static uint8_t x379 = 2U;
	static uint64_t x380 = 21486733LLU;
	int32_t t94 = 360;

    t94 = ((x377==x378)==(x379^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 2U;
	volatile int16_t x382 = -510;
	int32_t t95 = 145;

    t95 = ((x381==x382)==(x383^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = INT16_MIN;
	volatile int8_t x386 = INT8_MAX;
	static uint16_t x388 = 12U;
	volatile int32_t t96 = -265398247;

    t96 = ((x385==x386)==(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = 81U;
	volatile int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MAX;
	static uint64_t x392 = 2464LLU;
	volatile int32_t t97 = 10471910;

    t97 = ((x389==x390)==(x391^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x394 = -1;
	uint64_t x395 = 3632045650LLU;
	int8_t x396 = 44;

    t98 = ((x393==x394)==(x395^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x400 = UINT64_MAX;

    t99 = ((x397==x398)==(x399^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x404 = INT8_MIN;
	int32_t t100 = -135503484;

    t100 = ((x401==x402)==(x403^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MAX;
	static int8_t x407 = INT8_MIN;
	volatile uint32_t x408 = 991184U;
	volatile int32_t t101 = -1366;

    t101 = ((x405==x406)==(x407^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = 5525U;
	volatile uint16_t x411 = 63U;
	int32_t x412 = -1;
	volatile int32_t t102 = -8494;

    t102 = ((x409==x410)==(x411^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 1;
	volatile uint16_t x414 = 48U;
	int32_t x415 = 156235;
	uint64_t x416 = 4832669009525205LLU;

    t103 = ((x413==x414)==(x415^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MIN;
	volatile int16_t x419 = -1;
	int16_t x420 = INT16_MIN;
	int32_t t104 = -7585;

    t104 = ((x417==x418)==(x419^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	uint16_t x423 = 38U;
	static volatile uint16_t x424 = 15U;
	volatile int32_t t105 = 416996119;

    t105 = ((x421==x422)==(x423^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint64_t x426 = 11LLU;
	int16_t x427 = 15;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t106 = -156678159;

    t106 = ((x425==x426)==(x427^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MAX;
	int64_t x431 = -61214561802102LL;
	int32_t x432 = INT32_MAX;
	static volatile int32_t t107 = 20973;

    t107 = ((x429==x430)==(x431^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MAX;
	uint64_t x434 = 139191800053234LLU;
	static volatile int32_t x435 = INT32_MIN;
	volatile int16_t x436 = 0;
	int32_t t108 = -30804102;

    t108 = ((x433==x434)==(x435^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = 2LLU;
	static volatile uint32_t x438 = 4308U;
	int8_t x439 = INT8_MIN;
	static uint16_t x440 = 874U;

    t109 = ((x437==x438)==(x439^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 0U;
	uint32_t x442 = UINT32_MAX;
	static uint16_t x443 = 1U;
	int32_t x444 = INT32_MIN;
	volatile int32_t t110 = 6;

    t110 = ((x441==x442)==(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = INT16_MIN;
	int8_t x446 = 1;
	static int16_t x447 = -1;
	uint64_t x448 = 1229878LLU;
	static volatile int32_t t111 = -362004529;

    t111 = ((x445==x446)==(x447^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	volatile int32_t x450 = INT32_MIN;
	static volatile uint8_t x451 = 81U;
	int64_t x452 = INT64_MAX;
	int32_t t112 = 105;

    t112 = ((x449==x450)==(x451^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int64_t x455 = -1LL;
	int64_t x456 = INT64_MIN;

    t113 = ((x453==x454)==(x455^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	static int64_t x458 = -307LL;
	int8_t x460 = INT8_MIN;
	int32_t t114 = 637;

    t114 = ((x457==x458)==(x459^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 192LL;
	int32_t x462 = INT32_MIN;
	uint16_t x463 = 26U;
	static int32_t x464 = -1;
	volatile int32_t t115 = -108624761;

    t115 = ((x461==x462)==(x463^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = -1;
	uint16_t x467 = 3U;
	int8_t x468 = INT8_MAX;
	volatile int32_t t116 = 470;

    t116 = ((x465==x466)==(x467^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x469 = UINT8_MAX;
	static uint16_t x470 = UINT16_MAX;
	uint32_t x471 = 576849U;
	int64_t x472 = INT64_MIN;

    t117 = ((x469==x470)==(x471^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	uint16_t x474 = UINT16_MAX;
	static volatile int8_t x475 = INT8_MAX;

    t118 = ((x473==x474)==(x475^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x477 = INT16_MAX;
	volatile int16_t x478 = INT16_MIN;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = -132;
	static int32_t t119 = -152;

    t119 = ((x477==x478)==(x479^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 15U;
	int16_t x482 = INT16_MAX;
	int16_t x483 = INT16_MIN;
	static int32_t t120 = 97577;

    t120 = ((x481==x482)==(x483^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static volatile int16_t x486 = INT16_MIN;
	uint16_t x488 = 24U;
	static volatile int32_t t121 = -3066;

    t121 = ((x485==x486)==(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 111384029100072LLU;
	uint64_t x490 = UINT64_MAX;
	uint16_t x491 = 61U;
	int64_t x492 = INT64_MIN;
	int32_t t122 = 275675;

    t122 = ((x489==x490)==(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x493 = 880405895914120043LLU;
	int32_t x494 = -10;
	int64_t x495 = -25921083854628LL;
	static int32_t x496 = INT32_MIN;

    t123 = ((x493==x494)==(x495^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	uint8_t x498 = UINT8_MAX;
	int16_t x499 = INT16_MAX;
	int64_t x500 = INT64_MAX;
	static volatile int32_t t124 = 658068;

    t124 = ((x497==x498)==(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x504 = 122U;
	int32_t t125 = 36;

    t125 = ((x501==x502)==(x503^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 5272U;
	int8_t x506 = -7;
	volatile uint32_t x507 = UINT32_MAX;
	int32_t t126 = -90036;

    t126 = ((x505==x506)==(x507^x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -748655557;
	static int16_t x510 = INT16_MIN;
	uint8_t x511 = 10U;
	int32_t t127 = -1048213;

    t127 = ((x509==x510)==(x511^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 22LL;
	int32_t x514 = INT32_MAX;
	static int8_t x515 = 2;
	volatile int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -5042803;

    t128 = ((x513==x514)==(x515^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 25055159LLU;
	int8_t x519 = INT8_MIN;
	volatile int32_t x520 = 20087901;
	int32_t t129 = -38371;

    t129 = ((x517==x518)==(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = INT8_MIN;
	volatile int64_t x522 = INT64_MIN;
	int64_t x523 = INT64_MIN;
	uint16_t x524 = 108U;
	static volatile int32_t t130 = 589;

    t130 = ((x521==x522)==(x523^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MAX;
	volatile uint8_t x527 = 20U;
	int32_t x528 = 190893;

    t131 = ((x525==x526)==(x527^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = UINT16_MAX;
	uint32_t x532 = 108087231U;

    t132 = ((x529==x530)==(x531^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 1;
	static uint16_t x534 = UINT16_MAX;
	int64_t x536 = INT64_MIN;
	volatile int32_t t133 = 299;

    t133 = ((x533==x534)==(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MIN;
	static int8_t x538 = INT8_MIN;
	int16_t x539 = INT16_MAX;
	uint64_t x540 = UINT64_MAX;
	static int32_t t134 = 814765;

    t134 = ((x537==x538)==(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	int16_t x543 = -1;
	static int16_t x544 = -1;
	int32_t t135 = -58496;

    t135 = ((x541==x542)==(x543^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	static uint32_t x546 = 43680U;
	int16_t x547 = INT16_MAX;
	int32_t x548 = -25;
	volatile int32_t t136 = -17458;

    t136 = ((x545==x546)==(x547^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = -1LL;
	static volatile uint64_t x551 = 5301075859LLU;
	int8_t x552 = -3;
	int32_t t137 = 1;

    t137 = ((x549==x550)==(x551^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x553 = 911LLU;
	int32_t x554 = INT32_MAX;
	static int32_t x555 = -31;
	int16_t x556 = INT16_MIN;
	static volatile int32_t t138 = -1676;

    t138 = ((x553==x554)==(x555^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	static volatile uint8_t x558 = UINT8_MAX;
	volatile uint32_t x559 = 1422U;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = 335;

    t139 = ((x557==x558)==(x559^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	int16_t x562 = INT16_MIN;
	uint32_t x563 = UINT32_MAX;
	volatile int32_t t140 = 2863;

    t140 = ((x561==x562)==(x563^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x566 = INT8_MAX;
	uint16_t x567 = UINT16_MAX;
	static int64_t x568 = 598714092606359100LL;
	static int32_t t141 = -3057789;

    t141 = ((x565==x566)==(x567^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = 20;
	static volatile int64_t x571 = INT64_MIN;
	static volatile int32_t t142 = -1784;

    t142 = ((x569==x570)==(x571^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = -145978LL;
	volatile uint8_t x574 = UINT8_MAX;
	int16_t x575 = 2;
	int32_t x576 = INT32_MAX;

    t143 = ((x573==x574)==(x575^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	int16_t x578 = -16;
	static int8_t x579 = -1;
	volatile int32_t t144 = -502;

    t144 = ((x577==x578)==(x579^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = INT64_MIN;
	uint8_t x583 = 73U;
	static int8_t x584 = -1;

    t145 = ((x581==x582)==(x583^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 7248348738134126LLU;
	static uint8_t x588 = UINT8_MAX;
	volatile int32_t t146 = -3605;

    t146 = ((x585==x586)==(x587^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = -1;
	uint64_t x592 = 28062184303LLU;
	volatile int32_t t147 = -186;

    t147 = ((x589==x590)==(x591^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	static volatile uint32_t x594 = UINT32_MAX;
	int16_t x596 = INT16_MIN;
	int32_t t148 = 3322;

    t148 = ((x593==x594)==(x595^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x599 = UINT32_MAX;
	static uint8_t x600 = 14U;
	volatile int32_t t149 = -29789;

    t149 = ((x597==x598)==(x599^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 246962851405908520LLU;
	volatile int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	int16_t x604 = INT16_MIN;
	volatile int32_t t150 = 0;

    t150 = ((x601==x602)==(x603^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x605 = -1693;
	int64_t x607 = 27LL;
	int16_t x608 = -1;
	volatile int32_t t151 = 13;

    t151 = ((x605==x606)==(x607^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int64_t x610 = INT64_MIN;
	int16_t x611 = INT16_MIN;
	int8_t x612 = 0;
	static int32_t t152 = 1;

    t152 = ((x609==x610)==(x611^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MAX;
	volatile int64_t x615 = INT64_MIN;
	int64_t x616 = INT64_MIN;
	int32_t t153 = 241;

    t153 = ((x613==x614)==(x615^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = INT16_MAX;
	uint16_t x618 = 31U;
	int8_t x620 = INT8_MIN;
	int32_t t154 = -540214845;

    t154 = ((x617==x618)==(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x622 = 71270U;
	volatile int32_t x623 = -1;
	static int64_t x624 = INT64_MIN;

    t155 = ((x621==x622)==(x623^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x626 = 7163U;
	int16_t x628 = 16332;
	volatile int32_t t156 = 13;

    t156 = ((x625==x626)==(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 0;
	static int64_t x630 = INT64_MIN;
	int64_t x632 = INT64_MIN;
	int32_t t157 = -483645;

    t157 = ((x629==x630)==(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x633 = 1LL;
	int32_t x634 = 4850582;
	volatile int32_t x635 = INT32_MIN;
	int32_t t158 = -374243;

    t158 = ((x633==x634)==(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = 3;
	int16_t x639 = INT16_MAX;

    t159 = ((x637==x638)==(x639^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	uint64_t x643 = 19830009320LLU;
	static volatile int32_t t160 = 52290;

    t160 = ((x641==x642)==(x643^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = 1;
	static uint8_t x647 = 14U;
	volatile int64_t x648 = INT64_MIN;
	volatile int32_t t161 = 27;

    t161 = ((x645==x646)==(x647^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = -1;
	volatile uint16_t x651 = 5905U;
	int16_t x652 = INT16_MIN;
	int32_t t162 = 867615523;

    t162 = ((x649==x650)==(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = -1;
	static volatile int64_t x654 = -1LL;
	uint8_t x655 = UINT8_MAX;
	uint8_t x656 = 57U;
	volatile int32_t t163 = 5;

    t163 = ((x653==x654)==(x655^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	static uint32_t x659 = UINT32_MAX;
	int32_t x660 = INT32_MIN;
	volatile int32_t t164 = -1;

    t164 = ((x657==x658)==(x659^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	volatile int64_t x663 = 8140184511365LL;
	volatile int32_t t165 = 0;

    t165 = ((x661==x662)==(x663^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -4;
	static int64_t x666 = -171LL;
	int64_t x668 = 1LL;

    t166 = ((x665==x666)==(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -588567118639737595LL;
	int32_t x670 = -32356044;
	volatile int64_t x671 = -24830355902LL;
	volatile int8_t x672 = INT8_MIN;
	int32_t t167 = -1;

    t167 = ((x669==x670)==(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 163LLU;
	int16_t x676 = 5;
	static volatile int32_t t168 = 7;

    t168 = ((x673==x674)==(x675^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 7U;
	volatile int32_t x678 = INT32_MIN;
	int32_t x679 = -1;
	uint64_t x680 = 55LLU;
	int32_t t169 = -1142183;

    t169 = ((x677==x678)==(x679^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x682 = INT8_MAX;
	int64_t x683 = -1LL;
	int8_t x684 = 3;
	static int32_t t170 = -25512;

    t170 = ((x681==x682)==(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 59U;
	uint32_t x686 = UINT32_MAX;
	int16_t x687 = 30;
	uint8_t x688 = 1U;
	volatile int32_t t171 = -567963;

    t171 = ((x685==x686)==(x687^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 0U;
	int8_t x690 = INT8_MAX;
	int16_t x691 = -1;
	int64_t x692 = -1062497148777798275LL;
	static volatile int32_t t172 = 13342;

    t172 = ((x689==x690)==(x691^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x693 = INT8_MIN;
	uint16_t x694 = 73U;
	int64_t x695 = INT64_MAX;
	static int8_t x696 = INT8_MIN;
	int32_t t173 = -644653491;

    t173 = ((x693==x694)==(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x697 = -3390153;
	static uint64_t x698 = 21250685LLU;
	static int16_t x699 = 46;
	uint32_t x700 = 55059U;
	volatile int32_t t174 = 1693905;

    t174 = ((x697==x698)==(x699^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	uint16_t x702 = 1U;
	int64_t x703 = 140LL;
	int64_t x704 = 11304LL;
	volatile int32_t t175 = -782746272;

    t175 = ((x701==x702)==(x703^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	int16_t x707 = 164;
	static int8_t x708 = 1;
	int32_t t176 = -87170;

    t176 = ((x705==x706)==(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	int8_t x710 = INT8_MAX;
	int64_t x711 = INT64_MAX;
	uint16_t x712 = UINT16_MAX;
	static volatile int32_t t177 = -5223275;

    t177 = ((x709==x710)==(x711^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x713 = 14U;
	int8_t x714 = -7;
	int64_t x715 = -118307831488LL;
	static uint64_t x716 = UINT64_MAX;
	volatile int32_t t178 = 1;

    t178 = ((x713==x714)==(x715^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -6722;
	uint32_t x718 = 1681U;
	static uint64_t x719 = 1013LLU;
	int64_t x720 = -1LL;

    t179 = ((x717==x718)==(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = -1;
	int32_t x724 = INT32_MIN;

    t180 = ((x721==x722)==(x723^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x725 = UINT32_MAX;
	int8_t x726 = INT8_MIN;
	static uint32_t x727 = 121349551U;
	int8_t x728 = 0;
	volatile int32_t t181 = -117;

    t181 = ((x725==x726)==(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = INT64_MIN;
	int64_t x730 = -287734698748892606LL;
	uint8_t x732 = 16U;
	int32_t t182 = 36;

    t182 = ((x729==x730)==(x731^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = INT8_MIN;
	int16_t x735 = INT16_MAX;
	static uint32_t x736 = UINT32_MAX;
	int32_t t183 = -1625;

    t183 = ((x733==x734)==(x735^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	volatile int64_t x738 = INT64_MIN;
	uint32_t x739 = 1599904257U;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = -2460;

    t184 = ((x737==x738)==(x739^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x741 = 202568LLU;
	int16_t x742 = 1;
	int64_t x743 = INT64_MIN;
	int64_t x744 = 43721003232021963LL;
	volatile int32_t t185 = -403756117;

    t185 = ((x741==x742)==(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	volatile int64_t x746 = -1LL;
	int16_t x747 = -1;
	int32_t x748 = 532582495;
	int32_t t186 = -809330;

    t186 = ((x745==x746)==(x747^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MAX;
	int8_t x751 = INT8_MIN;
	static uint16_t x752 = UINT16_MAX;

    t187 = ((x749==x750)==(x751^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 1U;
	int16_t x754 = INT16_MIN;
	volatile uint32_t x755 = 1113119375U;
	int64_t x756 = INT64_MIN;
	int32_t t188 = -3;

    t188 = ((x753==x754)==(x755^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x758 = -1;
	int64_t x759 = INT64_MAX;
	int16_t x760 = INT16_MIN;

    t189 = ((x757==x758)==(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x762 = 339408901U;
	int8_t x763 = INT8_MIN;
	static uint32_t x764 = 162293926U;

    t190 = ((x761==x762)==(x763^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	int64_t x766 = -1LL;
	uint32_t x767 = UINT32_MAX;
	uint32_t x768 = 14965U;
	static volatile int32_t t191 = 74556;

    t191 = ((x765==x766)==(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	static int8_t x771 = INT8_MIN;
	int32_t x772 = INT32_MAX;
	int32_t t192 = -506028;

    t192 = ((x769==x770)==(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	volatile int32_t x774 = -7;
	int8_t x775 = -1;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t193 = 81005958;

    t193 = ((x773==x774)==(x775^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MIN;
	int8_t x780 = INT8_MAX;
	int32_t t194 = 221662006;

    t194 = ((x777==x778)==(x779^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x782 = 2U;
	static uint8_t x783 = 17U;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t195 = -3;

    t195 = ((x781==x782)==(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = 4841;
	volatile int8_t x786 = INT8_MIN;
	static int16_t x787 = -3;
	int64_t x788 = INT64_MIN;
	static volatile int32_t t196 = 47217975;

    t196 = ((x785==x786)==(x787^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x791 = INT16_MIN;
	static uint16_t x792 = 8798U;
	static int32_t t197 = 500;

    t197 = ((x789==x790)==(x791^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 365477U;
	int32_t t198 = 188;

    t198 = ((x793==x794)==(x795^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x798 = INT32_MAX;
	uint16_t x799 = 6U;

    t199 = ((x797==x798)==(x799^x800));

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

