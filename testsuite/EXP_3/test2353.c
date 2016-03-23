
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

static int8_t x1 = -2;
volatile uint16_t x4 = 5652U;
volatile int32_t x13 = 67;
int16_t x14 = -1;
int16_t x20 = INT16_MIN;
volatile uint64_t t5 = 111896826279LLU;
int64_t t6 = 45738235005666033LL;
int64_t x37 = INT64_MAX;
static uint8_t x42 = 0U;
volatile int8_t x48 = INT8_MIN;
uint32_t x51 = 166004U;
int64_t t11 = -422LL;
volatile int8_t x55 = INT8_MIN;
volatile int64_t x58 = -1LL;
uint32_t x60 = 0U;
volatile int32_t t14 = -59;
volatile uint64_t t15 = 12464636538LLU;
int16_t x69 = INT16_MIN;
volatile int64_t t20 = 1061711719772556275LL;
int8_t x92 = -1;
volatile int8_t x95 = INT8_MAX;
uint8_t x96 = UINT8_MAX;
int64_t t22 = -9778255LL;
uint8_t x97 = 32U;
static int16_t x98 = 10953;
static int32_t t23 = 11236;
uint16_t x124 = UINT16_MAX;
static volatile int32_t x129 = INT32_MIN;
volatile int32_t x140 = INT32_MAX;
volatile uint64_t t33 = 71LLU;
static int16_t x153 = 63;
uint8_t x155 = UINT8_MAX;
volatile uint8_t x158 = 57U;
uint32_t t36 = 2527U;
int16_t x162 = 1;
static int8_t x164 = -2;
uint64_t x183 = 69867257693143709LLU;
int16_t x187 = -14;
uint16_t x188 = UINT16_MAX;
int16_t x189 = INT16_MIN;
int8_t x190 = INT8_MIN;
int64_t x193 = INT64_MAX;
int64_t t43 = -11LL;
uint8_t x200 = 1U;
uint8_t x201 = UINT8_MAX;
static int8_t x202 = -1;
static int16_t x219 = 227;
int64_t t52 = 39LL;
int16_t x250 = INT16_MAX;
uint32_t x255 = 48216U;
int8_t x256 = -5;
volatile uint64_t x260 = 5427838761223991LLU;
uint64_t t56 = 793LLU;
uint8_t x265 = 34U;
int32_t x266 = INT32_MIN;
uint8_t x275 = 2U;
volatile int16_t x276 = -6;
uint16_t x277 = 27U;
int8_t x281 = -1;
volatile uint16_t x282 = 4U;
int32_t t60 = 39914;
volatile int8_t x294 = 9;
volatile int8_t x296 = INT8_MAX;
uint64_t t62 = 5195566160868651LLU;
static int8_t x304 = 6;
int32_t t63 = -36;
volatile uint64_t x306 = 446229681719750129LLU;
int16_t x307 = -3506;
static volatile uint64_t t64 = 964533137LLU;
uint16_t x310 = 13U;
static int16_t x311 = INT16_MIN;
int64_t t65 = -63LL;
int8_t x313 = INT8_MIN;
uint32_t x317 = 44929857U;
int16_t x322 = INT16_MIN;
int64_t x330 = -1294LL;
volatile int64_t x331 = 0LL;
int32_t x334 = -1;
int8_t x335 = -25;
static volatile uint64_t x338 = UINT64_MAX;
uint8_t x356 = 29U;
volatile int64_t t77 = 518729059326100098LL;
int8_t x368 = -1;
uint32_t x370 = UINT32_MAX;
int16_t x374 = 6599;
static int8_t x384 = INT8_MAX;
static volatile uint64_t t81 = 14999LLU;
static uint8_t x386 = 1U;
int64_t t84 = 19769LL;
static volatile uint16_t x402 = 10325U;
volatile int64_t x407 = 5740842LL;
uint32_t x409 = 11895439U;
static int16_t x418 = -15341;
int16_t x438 = 40;
uint64_t t93 = 12849977LLU;
int64_t x442 = -1LL;
static uint32_t x452 = 2599638U;
volatile uint32_t t96 = 100736944U;
volatile int8_t x457 = -1;
int8_t x461 = INT8_MIN;
uint64_t x465 = 114221850322LLU;
volatile uint64_t x473 = UINT64_MAX;
static volatile int8_t x502 = -1;
uint8_t x504 = UINT8_MAX;
static int64_t x505 = INT64_MIN;
static volatile int32_t x523 = INT32_MIN;
int16_t x524 = -1;
int8_t x534 = INT8_MIN;
uint16_t x538 = UINT16_MAX;
uint32_t x540 = UINT32_MAX;
uint32_t x543 = 98600U;
volatile int64_t t115 = 19LL;
uint8_t x565 = 16U;
uint8_t x574 = UINT8_MAX;
uint64_t x580 = 3293385644LLU;
static int64_t x584 = INT64_MIN;
uint64_t x585 = UINT64_MAX;
int8_t x587 = INT8_MAX;
int16_t x597 = INT16_MIN;
uint32_t x612 = UINT32_MAX;
int32_t x613 = 0;
uint32_t x618 = 216013U;
uint8_t x619 = UINT8_MAX;
uint64_t t127 = 79584433LLU;
int16_t x625 = INT16_MAX;
uint8_t x626 = 4U;
int32_t x639 = -1;
volatile uint64_t t132 = 98813893LLU;
uint32_t x647 = UINT32_MAX;
volatile int8_t x648 = INT8_MIN;
int16_t x654 = 8;
int16_t x656 = INT16_MIN;
int8_t x660 = INT8_MIN;
int16_t x667 = 113;
uint8_t x670 = UINT8_MAX;
uint8_t x672 = 15U;
static volatile uint64_t t138 = 31425423LLU;
int16_t x678 = 0;
int32_t x687 = -344;
static uint64_t t145 = 15578624223484718LLU;
volatile int64_t t147 = -10202LL;
volatile int8_t x733 = 51;
int32_t x735 = INT32_MAX;
int64_t t150 = 877LL;
int32_t x739 = -2;
int8_t x743 = -12;
uint32_t t152 = 37262232U;
static int32_t x750 = INT32_MIN;
static uint64_t x751 = 545174995973LLU;
uint64_t t153 = 2367978LLU;
volatile uint8_t x760 = UINT8_MAX;
int8_t x776 = INT8_MIN;
int8_t x777 = 1;
int16_t x781 = -1518;
uint64_t t159 = 340LLU;
uint8_t x787 = 56U;
volatile uint32_t t161 = 1597U;
uint8_t x795 = 1U;
int16_t x800 = 1;
volatile int64_t t163 = 21141LL;
static uint32_t x801 = UINT32_MAX;
static uint8_t x812 = 46U;
volatile uint64_t x816 = UINT64_MAX;
volatile uint16_t x822 = UINT16_MAX;
int8_t x823 = -1;
static uint16_t x824 = UINT16_MAX;
uint64_t t170 = 231LLU;
static uint64_t t173 = 468LLU;
int64_t x852 = -259123285694315593LL;
uint16_t x854 = 0U;
static volatile int8_t x856 = INT8_MIN;
volatile uint32_t t177 = 723U;
int64_t t180 = -260930985LL;
volatile int32_t x886 = 267571;
volatile uint8_t x888 = UINT8_MAX;
uint16_t x898 = 4U;
volatile uint64_t t183 = 2679496384004LLU;
static volatile uint16_t x902 = 23U;
volatile int8_t x905 = INT8_MIN;
int16_t x913 = INT16_MIN;
int64_t x915 = INT64_MIN;
volatile uint32_t t187 = 58271622U;
int64_t x925 = 65LL;
int16_t x926 = -2604;
volatile int64_t t189 = 6525044539697506LL;
int64_t x931 = INT64_MIN;
int64_t x938 = INT64_MIN;
int64_t x940 = -1LL;
int16_t x943 = -1;
int32_t x948 = -2740;
int32_t x953 = -138418366;
int8_t x955 = 0;
uint64_t t197 = 13754LLU;
static int8_t x965 = INT8_MIN;


void f0(void) {
    	volatile int16_t x2 = INT16_MAX;
	uint8_t x3 = 50U;
	int32_t t0 = -1;

    t0 = ((x1+x2)+(x3|x4));

    if (t0 != 38451) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MIN;
	static uint8_t x11 = 22U;
	int8_t x12 = -1;
	volatile int32_t t1 = 18;

    t1 = ((x9+x10)+(x11|x12));

    if (t1 != -32897) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x15 = UINT16_MAX;
	volatile int64_t x16 = -1LL;
	int64_t t2 = -969392344824LL;

    t2 = ((x13+x14)+(x15|x16));

    if (t2 != 65LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 66U;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 11389U;
	int32_t t3 = -64850;

    t3 = ((x17+x18)+(x19|x20));

    if (t3 != -54081) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 425U;
	uint16_t x22 = 368U;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -53;
	int32_t t4 = -2963886;

    t4 = ((x21+x22)+(x23|x24));

    if (t4 != 740) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x25 = 14;
	uint64_t x26 = 286656470128620108LLU;
	int16_t x27 = -87;
	volatile int16_t x28 = INT16_MAX;

    t5 = ((x25+x26)+(x27|x28));

    if (t5 != 286656470128620121LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MAX;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = INT64_MAX;
	int64_t x32 = -1LL;

    t6 = ((x29+x30)+(x31|x32));

    if (t6 != 2147450878LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 13331859789516LLU;
	static uint64_t x34 = 8207LLU;
	static int32_t x35 = -1;
	int64_t x36 = -19799880020221LL;
	volatile uint64_t t7 = 1249245183458LLU;

    t7 = ((x33+x34)+(x35|x36));

    if (t7 != 13331859797722LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = 7U;
	static int16_t x40 = INT16_MAX;
	volatile int64_t t8 = -627927969223651478LL;

    t8 = ((x37+x38)+(x39|x40));

    if (t8 != 9223372034707324926LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x41 = UINT32_MAX;
	uint32_t x43 = 225276504U;
	uint32_t x44 = 22279U;
	static uint32_t t9 = 59640149U;

    t9 = ((x41+x42)+(x43|x44));

    if (t9 != 225277790U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 515U;
	uint32_t x46 = 261U;
	static int16_t x47 = INT16_MIN;
	volatile uint32_t t10 = 225005464U;

    t10 = ((x45+x46)+(x47|x48));

    if (t10 != 648U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MAX;
	uint8_t x52 = UINT8_MAX;

    t11 = ((x49+x50)+(x51|x52));

    if (t11 != 9223372034707458302LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	int16_t x54 = INT16_MIN;
	static uint64_t x56 = 24982LLU;
	static uint64_t t12 = 57955LLU;

    t12 = ((x53+x54)+(x55|x56));

    if (t12 != 18446744073709518741LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = -1;
	int32_t x59 = INT32_MIN;
	volatile int64_t t13 = 314489381772LL;

    t13 = ((x57+x58)+(x59|x60));

    if (t13 != 2147483646LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = 23;
	volatile int16_t x62 = 7;
	volatile uint16_t x63 = 25U;
	int32_t x64 = INT32_MIN;

    t14 = ((x61+x62)+(x63|x64));

    if (t14 != -2147483593) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 84U;
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = -34403202801LL;
	static uint64_t x68 = 480615682LLU;

    t15 = ((x65+x66)+(x67|x68));

    if (t15 != 18446744039315070306LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x70 = INT64_MAX;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile int64_t t16 = -3095870372566123161LL;

    t16 = ((x69+x70)+(x71|x72));

    if (t16 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -2645;
	volatile uint64_t x74 = 1912762516784032477LLU;
	static int8_t x75 = -1;
	int8_t x76 = -1;
	volatile uint64_t t17 = 61952305151326LLU;

    t17 = ((x73+x74)+(x75|x76));

    if (t17 != 1912762516784029831LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = 329U;
	static int64_t x78 = INT64_MIN;
	int64_t x79 = -1LL;
	uint32_t x80 = UINT32_MAX;
	volatile int64_t t18 = -10882610249278246LL;

    t18 = ((x77+x78)+(x79|x80));

    if (t18 != -9223372036854775480LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = -5861LL;
	int64_t x82 = 14342428356544338LL;
	int8_t x83 = INT8_MAX;
	static uint8_t x84 = 61U;
	static int64_t t19 = -30254272784649669LL;

    t19 = ((x81+x82)+(x83|x84));

    if (t19 != 14342428356538604LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	volatile int64_t x86 = 429133211060537LL;
	int64_t x87 = -1LL;
	int8_t x88 = 0;

    t20 = ((x85+x86)+(x87|x88));

    if (t20 != 429133211060535LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MAX;
	int64_t x91 = INT64_MIN;
	int64_t t21 = -20082874248LL;

    t21 = ((x89+x90)+(x91|x92));

    if (t21 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -1LL;
	uint8_t x94 = UINT8_MAX;

    t22 = ((x93+x94)+(x95|x96));

    if (t22 != 509LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x99 = -1;
	static uint8_t x100 = 8U;

    t23 = ((x97+x98)+(x99|x100));

    if (t23 != 10984) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MIN;
	static int16_t x102 = 1;
	uint32_t x103 = 7335055U;
	uint16_t x104 = UINT16_MAX;
	uint32_t t24 = 91163837U;

    t24 = ((x101+x102)+(x103|x104));

    if (t24 != 7307264U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = -1;
	int64_t x107 = 79926LL;
	uint64_t x108 = 244539375LLU;
	uint64_t t25 = 0LLU;

    t25 = ((x105+x106)+(x107|x108));

    if (t25 != 244514814LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	int32_t x110 = 11397;
	int64_t x111 = INT64_MIN;
	static int16_t x112 = -16;
	int64_t t26 = 3LL;

    t26 = ((x109+x110)+(x111|x112));

    if (t26 != 11508LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x117 = 0;
	int16_t x118 = INT16_MIN;
	static uint16_t x119 = 12U;
	int16_t x120 = INT16_MIN;
	volatile int32_t t27 = 1647571;

    t27 = ((x117+x118)+(x119|x120));

    if (t27 != -65524) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x121 = INT64_MIN;
	volatile int64_t x122 = INT64_MAX;
	int16_t x123 = -1;
	int64_t t28 = -749092157LL;

    t28 = ((x121+x122)+(x123|x124));

    if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x130 = INT16_MAX;
	static volatile int8_t x131 = -1;
	volatile int32_t x132 = 0;
	int32_t t29 = 2063228;

    t29 = ((x129+x130)+(x131|x132));

    if (t29 != -2147450882) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = INT64_MAX;
	int32_t x134 = -11318322;
	static uint16_t x135 = 1245U;
	int32_t x136 = -1;
	int64_t t30 = 2289383245924226310LL;

    t30 = ((x133+x134)+(x135|x136));

    if (t30 != 9223372036843457484LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	static int32_t x139 = 0;
	volatile int32_t t31 = -8060337;

    t31 = ((x137+x138)+(x139|x140));

    if (t31 != 2147450751) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = 1658;
	uint64_t x142 = 404493485LLU;
	volatile uint32_t x143 = 61285U;
	static int8_t x144 = -1;
	volatile uint64_t t32 = 1102863198126216LLU;

    t32 = ((x141+x142)+(x143|x144));

    if (t32 != 4699462438LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x145 = 15U;
	static int64_t x146 = -10478LL;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;

    t33 = ((x145+x146)+(x147|x148));

    if (t33 != 18446744073709541152LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = -232;
	static uint8_t x150 = UINT8_MAX;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 3U;
	int32_t t34 = 30;

    t34 = ((x149+x150)+(x151|x152));

    if (t34 != -32742) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x154 = UINT64_MAX;
	uint8_t x156 = 1U;
	uint64_t t35 = 7731395LLU;

    t35 = ((x153+x154)+(x155|x156));

    if (t35 != 317LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = 248605216U;
	static volatile int8_t x159 = INT8_MIN;
	static int16_t x160 = INT16_MIN;

    t36 = ((x157+x158)+(x159|x160));

    if (t36 != 248605145U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = UINT8_MAX;
	int64_t x163 = INT64_MIN;
	int64_t t37 = -11892628876LL;

    t37 = ((x161+x162)+(x163|x164));

    if (t37 != 254LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x165 = INT32_MAX;
	static volatile uint64_t x166 = 511709827LLU;
	int64_t x167 = -665706009LL;
	static int8_t x168 = -1;
	volatile uint64_t t38 = 17674019565LLU;

    t38 = ((x165+x166)+(x167|x168));

    if (t38 != 2659193473LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x177 = UINT16_MAX;
	int16_t x178 = INT16_MIN;
	volatile int8_t x179 = -1;
	int32_t x180 = -434;
	volatile int32_t t39 = -599441598;

    t39 = ((x177+x178)+(x179|x180));

    if (t39 != 32766) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x181 = 0;
	static uint64_t x182 = UINT64_MAX;
	uint8_t x184 = 0U;
	static volatile uint64_t t40 = 6797LLU;

    t40 = ((x181+x182)+(x183|x184));

    if (t40 != 69867257693143708LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = -1LL;
	static volatile int64_t t41 = 2141073429450842373LL;

    t41 = ((x185+x186)+(x187|x188));

    if (t41 != 65533LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 275946U;
	uint32_t t42 = 490935851U;

    t42 = ((x189+x190)+(x191|x192));

    if (t42 != 4294934399U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x194 = INT64_MIN;
	static int8_t x195 = 1;
	int8_t x196 = INT8_MIN;

    t43 = ((x193+x194)+(x195|x196));

    if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x197 = 58;
	volatile uint8_t x198 = 20U;
	int32_t x199 = -1;
	static volatile int32_t t44 = 439679405;

    t44 = ((x197+x198)+(x199|x200));

    if (t44 != 77) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x203 = INT8_MIN;
	uint64_t x204 = 0LLU;
	volatile uint64_t t45 = 125982865760734LLU;

    t45 = ((x201+x202)+(x203|x204));

    if (t45 != 126LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = INT16_MIN;
	static uint8_t x210 = 0U;
	uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MIN;
	static volatile uint64_t t46 = 19304608293733420LLU;

    t46 = ((x209+x210)+(x211|x212));

    if (t46 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = INT16_MAX;
	volatile int64_t x214 = -374754LL;
	uint16_t x215 = 5U;
	static volatile uint32_t x216 = 215723951U;
	volatile int64_t t47 = 1LL;

    t47 = ((x213+x214)+(x215|x216));

    if (t47 != 215381964LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x217 = INT16_MAX;
	volatile int32_t x218 = 504464833;
	uint32_t x220 = 1117U;
	uint32_t t48 = 1979U;

    t48 = ((x217+x218)+(x219|x220));

    if (t48 != 504498879U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x221 = INT32_MAX;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = INT64_MIN;
	int64_t x224 = -1LL;
	int64_t t49 = -16822782181022907LL;

    t49 = ((x221+x222)+(x223|x224));

    if (t49 != 2147483645LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x225 = INT64_MIN;
	int8_t x226 = 1;
	int8_t x227 = INT8_MIN;
	static uint32_t x228 = 86U;
	int64_t t50 = -988841238893412LL;

    t50 = ((x225+x226)+(x227|x228));

    if (t50 != -9223372032559808553LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x229 = 14290017LLU;
	uint16_t x230 = 2042U;
	int32_t x231 = -736908274;
	uint16_t x232 = 132U;
	uint64_t t51 = 240008970LLU;

    t51 = ((x229+x230)+(x231|x232));

    if (t51 != 18446744072986935529LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	static volatile int64_t x239 = -354LL;
	int16_t x240 = INT16_MIN;

    t52 = ((x237+x238)+(x239|x240));

    if (t52 != 4294966940LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x249 = 8;
	volatile uint64_t x251 = 84328190LLU;
	static int32_t x252 = INT32_MAX;
	uint64_t t53 = 371813997442401LLU;

    t53 = ((x249+x250)+(x251|x252));

    if (t53 != 2147516422LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x253 = 530U;
	uint8_t x254 = 40U;
	volatile uint32_t t54 = 48812918U;

    t54 = ((x253+x254)+(x255|x256));

    if (t54 != 565U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x257 = -212;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = 54LL;
	volatile uint64_t t55 = 4230503038352840LLU;

    t55 = ((x257+x258)+(x259|x260));

    if (t55 != 5427838761224034LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x261 = 943727739542696143LLU;
	static int32_t x262 = -1;
	int64_t x263 = -60LL;
	volatile int64_t x264 = INT64_MIN;

    t56 = ((x261+x262)+(x263|x264));

    if (t56 != 943727739542696082LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int32_t t57 = 1171;

    t57 = ((x265+x266)+(x267|x268));

    if (t57 != -2147483615) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x273 = 2;
	uint64_t x274 = UINT64_MAX;
	volatile uint64_t t58 = 313331LLU;

    t58 = ((x273+x274)+(x275|x276));

    if (t58 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x278 = -6;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = 11977972054LLU;
	static uint64_t t59 = 5972LLU;

    t59 = ((x277+x278)+(x279|x280));

    if (t59 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x283 = UINT8_MAX;
	int32_t x284 = 113;

    t60 = ((x281+x282)+(x283|x284));

    if (t60 != 258) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x285 = 7U;
	static int64_t x286 = -1LL;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = 29U;
	static volatile int64_t t61 = 51744922397931554LL;

    t61 = ((x285+x286)+(x287|x288));

    if (t61 != -2147483613LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x293 = 14LLU;
	volatile int32_t x295 = -1;

    t62 = ((x293+x294)+(x295|x296));

    if (t62 != 22LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x301 = -3;
	int8_t x302 = INT8_MIN;
	volatile int8_t x303 = INT8_MAX;

    t63 = ((x301+x302)+(x303|x304));

    if (t63 != -4) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x305 = INT16_MIN;
	volatile int32_t x308 = -1025893;

    t64 = ((x305+x306)+(x307|x308));

    if (t64 != 446229681719716048LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = INT32_MIN;
	int64_t x312 = INT64_MIN;

    t65 = ((x309+x310)+(x311|x312));

    if (t65 != -2147516403LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x314 = -3;
	static uint64_t x315 = 2089911447789LLU;
	volatile int32_t x316 = INT32_MIN;
	volatile uint64_t t66 = 8LLU;

    t66 = ((x313+x314)+(x315|x316));

    if (t66 != 18446744071971926122LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x318 = INT16_MIN;
	volatile int64_t x319 = INT64_MAX;
	int8_t x320 = INT8_MIN;
	static int64_t t67 = 0LL;

    t67 = ((x317+x318)+(x319|x320));

    if (t67 != 44897088LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x321 = 13;
	int64_t x323 = -5790852419030LL;
	uint64_t x324 = 832LLU;
	volatile uint64_t t68 = 56898570165543157LLU;

    t68 = ((x321+x322)+(x323|x324));

    if (t68 != 18446738282857100151LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x325 = -2040032898778LL;
	static int64_t x326 = -1LL;
	uint64_t x327 = 58LLU;
	int32_t x328 = -1;
	uint64_t t69 = 3331750624LLU;

    t69 = ((x325+x326)+(x327|x328));

    if (t69 != 18446742033676652836LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x329 = -1;
	volatile uint16_t x332 = UINT16_MAX;
	int64_t t70 = -6819619527LL;

    t70 = ((x329+x330)+(x331|x332));

    if (t70 != 64240LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x333 = -1;
	int32_t x336 = INT32_MIN;
	volatile int32_t t71 = 199997674;

    t71 = ((x333+x334)+(x335|x336));

    if (t71 != -27) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x337 = 46U;
	int64_t x339 = INT64_MAX;
	uint16_t x340 = 7U;
	volatile uint64_t t72 = 24LLU;

    t72 = ((x337+x338)+(x339|x340));

    if (t72 != 9223372036854775852LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x341 = UINT64_MAX;
	static int8_t x342 = -1;
	int8_t x343 = 0;
	int32_t x344 = -38;
	volatile uint64_t t73 = 344812398815589LLU;

    t73 = ((x341+x342)+(x343|x344));

    if (t73 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x345 = 122236380U;
	int32_t x346 = INT32_MIN;
	static int64_t x347 = INT64_MIN;
	int16_t x348 = -12592;
	static volatile int64_t t74 = -2149277097017798816LL;

    t74 = ((x345+x346)+(x347|x348));

    if (t74 != 2269707436LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x349 = 21U;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = -1;
	static uint64_t x352 = 9047422367863305389LLU;
	static uint64_t t75 = 8549317021040119LLU;

    t75 = ((x349+x350)+(x351|x352));

    if (t75 != 19LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x353 = 5270U;
	static int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	static volatile uint32_t t76 = 257U;

    t76 = ((x353+x354)+(x355|x356));

    if (t76 != 5043U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = INT8_MIN;
	volatile uint16_t x362 = 1778U;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;

    t77 = ((x361+x362)+(x363|x364));

    if (t77 != -9223372036854774158LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x365 = 1;
	int16_t x366 = 108;
	int8_t x367 = 0;
	volatile int32_t t78 = -17575;

    t78 = ((x365+x366)+(x367|x368));

    if (t78 != 108) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x369 = 24;
	volatile int64_t x371 = -1LL;
	int16_t x372 = INT16_MIN;
	volatile int64_t t79 = -711717460666673LL;

    t79 = ((x369+x370)+(x371|x372));

    if (t79 != 22LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x373 = 503U;
	int16_t x375 = -1;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t80 = 0;

    t80 = ((x373+x374)+(x375|x376));

    if (t80 != 7101) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x381 = INT8_MIN;
	volatile uint64_t x382 = UINT64_MAX;
	static volatile int64_t x383 = 391556388LL;

    t81 = ((x381+x382)+(x383|x384));

    if (t81 != 391556350LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x385 = INT8_MIN;
	int16_t x387 = -1;
	int32_t x388 = INT32_MAX;
	volatile int32_t t82 = -29317;

    t82 = ((x385+x386)+(x387|x388));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x393 = UINT8_MAX;
	volatile int16_t x394 = -1;
	static int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t83 = 251LLU;

    t83 = ((x393+x394)+(x395|x396));

    if (t83 != 253LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x397 = -1;
	uint32_t x398 = 1934591927U;
	volatile int64_t x399 = -2LL;
	int16_t x400 = INT16_MIN;

    t84 = ((x397+x398)+(x399|x400));

    if (t84 != 1934591924LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x401 = 8U;
	int16_t x403 = -1;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t85 = 2728403LLU;

    t85 = ((x401+x402)+(x403|x404));

    if (t85 != 10332LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x405 = UINT16_MAX;
	uint8_t x406 = 70U;
	static volatile int32_t x408 = INT32_MIN;
	volatile int64_t t86 = 2969371210805378516LL;

    t86 = ((x405+x406)+(x407|x408));

    if (t86 != -2141677201LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x410 = -5;
	volatile int16_t x411 = INT16_MAX;
	static uint32_t x412 = UINT32_MAX;
	static uint32_t t87 = 28U;

    t87 = ((x409+x410)+(x411|x412));

    if (t87 != 11895433U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x413 = INT64_MIN;
	volatile uint32_t x414 = 1893816878U;
	int32_t x415 = -2444;
	volatile int32_t x416 = INT32_MIN;
	int64_t t88 = -1LL;

    t88 = ((x413+x414)+(x415|x416));

    if (t88 != -9223372034960961374LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x417 = UINT16_MAX;
	volatile int64_t x419 = INT64_MAX;
	int64_t x420 = INT64_MIN;
	static volatile int64_t t89 = -2267307065798047380LL;

    t89 = ((x417+x418)+(x419|x420));

    if (t89 != 50193LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x421 = UINT64_MAX;
	int32_t x422 = INT32_MAX;
	int8_t x423 = -1;
	volatile uint8_t x424 = 1U;
	volatile uint64_t t90 = 54926436541LLU;

    t90 = ((x421+x422)+(x423|x424));

    if (t90 != 2147483645LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x429 = 19652266LLU;
	volatile uint16_t x430 = 2845U;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	volatile uint64_t t91 = 465154848LLU;

    t91 = ((x429+x430)+(x431|x432));

    if (t91 != 19654983LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x433 = 387U;
	uint32_t x434 = 1U;
	uint8_t x435 = UINT8_MAX;
	int32_t x436 = 20644610;
	uint32_t t92 = 371U;

    t92 = ((x433+x434)+(x435|x436));

    if (t92 != 20645251U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x437 = 4U;
	static uint64_t x439 = 9175354672737LLU;
	static int16_t x440 = -1;

    t93 = ((x437+x438)+(x439|x440));

    if (t93 != 43LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x441 = 663U;
	static uint16_t x443 = 6192U;
	uint8_t x444 = UINT8_MAX;
	volatile int64_t t94 = -4295871047480821LL;

    t94 = ((x441+x442)+(x443|x444));

    if (t94 != 7061LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x445 = -6;
	int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MIN;
	volatile uint8_t x448 = 0U;
	static int32_t t95 = -20202401;

    t95 = ((x445+x446)+(x447|x448));

    if (t95 != -2147450887) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x449 = 1U;
	volatile int16_t x450 = -1;
	volatile uint8_t x451 = 2U;

    t96 = ((x449+x450)+(x451|x452));

    if (t96 != 2599638U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x453 = INT16_MAX;
	int8_t x454 = -1;
	uint64_t x455 = UINT64_MAX;
	uint64_t x456 = 63LLU;
	static uint64_t t97 = 8341174436LLU;

    t97 = ((x453+x454)+(x455|x456));

    if (t97 != 32765LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x458 = UINT32_MAX;
	uint16_t x459 = 2602U;
	int16_t x460 = INT16_MAX;
	uint32_t t98 = 1090U;

    t98 = ((x457+x458)+(x459|x460));

    if (t98 != 32765U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x462 = 37;
	volatile uint16_t x463 = 3U;
	int16_t x464 = -1;
	volatile int32_t t99 = 4;

    t99 = ((x461+x462)+(x463|x464));

    if (t99 != -92) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x466 = -197196398;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = INT32_MIN;
	uint64_t t100 = 754466113LLU;

    t100 = ((x465+x466)+(x467|x468));

    if (t100 != 114024653796LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x474 = INT64_MAX;
	int16_t x475 = INT16_MIN;
	uint8_t x476 = 48U;
	volatile uint64_t t101 = 7LLU;

    t101 = ((x473+x474)+(x475|x476));

    if (t101 != 9223372036854743086LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x477 = -1;
	int64_t x478 = -2680297104884LL;
	volatile int32_t x479 = 47582;
	static int8_t x480 = INT8_MIN;
	static int64_t t102 = -10511584757826LL;

    t102 = ((x477+x478)+(x479|x480));

    if (t102 != -2680297104919LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x481 = INT8_MAX;
	volatile int8_t x482 = INT8_MIN;
	uint64_t x483 = 6769990795413924944LLU;
	static uint8_t x484 = 2U;
	uint64_t t103 = 55700024LLU;

    t103 = ((x481+x482)+(x483|x484));

    if (t103 != 6769990795413924945LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x485 = -494;
	int16_t x486 = INT16_MIN;
	uint16_t x487 = 1152U;
	int16_t x488 = -1;
	int32_t t104 = -4444;

    t104 = ((x485+x486)+(x487|x488));

    if (t104 != -33263) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x497 = 0U;
	static volatile int64_t x498 = 520058593191774331LL;
	volatile int64_t x499 = -1039258LL;
	uint8_t x500 = 13U;
	static int64_t t105 = -2414LL;

    t105 = ((x497+x498)+(x499|x500));

    if (t105 != 520058593190735082LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x501 = 1;
	uint64_t x503 = 2264018839LLU;
	uint64_t t106 = 3148550053322LLU;

    t106 = ((x501+x502)+(x503|x504));

    if (t106 != 2264018943LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x506 = UINT64_MAX;
	volatile int16_t x507 = INT16_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile uint64_t t107 = 11642LLU;

    t107 = ((x505+x506)+(x507|x508));

    if (t107 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x509 = 360;
	volatile int16_t x510 = INT16_MAX;
	int32_t x511 = 521717032;
	static uint16_t x512 = 3U;
	volatile int32_t t108 = -663655073;

    t108 = ((x509+x510)+(x511|x512));

    if (t108 != 521750162) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x521 = INT16_MAX;
	volatile int64_t x522 = INT64_MIN;
	int64_t t109 = -174946LL;

    t109 = ((x521+x522)+(x523|x524));

    if (t109 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x525 = 13098U;
	int64_t x526 = -1LL;
	uint16_t x527 = UINT16_MAX;
	int8_t x528 = INT8_MIN;
	volatile int64_t t110 = 45303LL;

    t110 = ((x525+x526)+(x527|x528));

    if (t110 != 13096LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x529 = 1580U;
	int64_t x530 = 20248728676573592LL;
	uint64_t x531 = 20522321LLU;
	uint32_t x532 = UINT32_MAX;
	static volatile uint64_t t111 = 2143940647934638LLU;

    t111 = ((x529+x530)+(x531|x532));

    if (t111 != 20248732971542467LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x533 = 113U;
	uint16_t x535 = UINT16_MAX;
	volatile uint8_t x536 = 0U;
	static int32_t t112 = -500601473;

    t112 = ((x533+x534)+(x535|x536));

    if (t112 != 65520) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x537 = -1LL;
	static uint32_t x539 = 22368922U;
	int64_t t113 = -78145973726914295LL;

    t113 = ((x537+x538)+(x539|x540));

    if (t113 != 4295032829LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x541 = 6852U;
	uint64_t x542 = 26LLU;
	int64_t x544 = -1LL;
	uint64_t t114 = 470057060321LLU;

    t114 = ((x541+x542)+(x543|x544));

    if (t114 != 6877LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x549 = UINT8_MAX;
	int8_t x550 = 15;
	int8_t x551 = 1;
	int64_t x552 = -993LL;

    t115 = ((x549+x550)+(x551|x552));

    if (t115 != -723LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x566 = -1;
	uint8_t x567 = 17U;
	uint64_t x568 = 3943013LLU;
	volatile uint64_t t116 = 246925294810LLU;

    t116 = ((x565+x566)+(x567|x568));

    if (t116 != 3943044LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x573 = -2;
	int16_t x575 = INT16_MAX;
	static int64_t x576 = -68464080591732607LL;
	static volatile int64_t t117 = 325LL;

    t117 = ((x573+x574)+(x575|x576));

    if (t117 != -68464080591716100LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x577 = -1;
	uint32_t x578 = 5541684U;
	int64_t x579 = INT64_MIN;
	volatile uint64_t t118 = 22LLU;

    t118 = ((x577+x578)+(x579|x580));

    if (t118 != 9223372040153703135LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x581 = INT32_MIN;
	uint32_t x582 = 1254357263U;
	uint64_t x583 = 840304LLU;
	uint64_t t119 = 16308738LLU;

    t119 = ((x581+x582)+(x583|x584));

    if (t119 != 9223372040257457023LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x586 = 18897U;
	volatile int16_t x588 = INT16_MIN;
	volatile uint64_t t120 = 162913986921869LLU;

    t120 = ((x585+x586)+(x587|x588));

    if (t120 != 18446744073709537871LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x589 = 110U;
	static int64_t x590 = INT64_MIN;
	static uint32_t x591 = UINT32_MAX;
	int32_t x592 = INT32_MAX;
	int64_t t121 = -696237324LL;

    t121 = ((x589+x590)+(x591|x592));

    if (t121 != -9223372032559808403LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x598 = 0;
	int64_t x599 = 29854506009385458LL;
	static uint8_t x600 = 13U;
	volatile int64_t t122 = 817752LL;

    t122 = ((x597+x598)+(x599|x600));

    if (t122 != 29854506009352703LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x605 = INT16_MAX;
	static int16_t x606 = INT16_MIN;
	uint64_t x607 = 4284738254188LLU;
	static int32_t x608 = 4103994;
	static volatile uint64_t t123 = 2324670661LLU;

    t123 = ((x605+x606)+(x607|x608));

    if (t123 != 4284741566333LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x609 = -10068;
	int32_t x610 = 11742173;
	int8_t x611 = INT8_MIN;
	static uint32_t t124 = 4U;

    t124 = ((x609+x610)+(x611|x612));

    if (t124 != 11732104U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x614 = 28U;
	static volatile int16_t x615 = 5;
	uint16_t x616 = 4U;
	static int32_t t125 = -153761039;

    t125 = ((x613+x614)+(x615|x616));

    if (t125 != 33) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	uint32_t x620 = UINT32_MAX;
	volatile uint32_t t126 = 242230U;

    t126 = ((x617+x618)+(x619|x620));

    if (t126 != 281547U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x621 = INT16_MAX;
	uint64_t x622 = UINT64_MAX;
	int64_t x623 = -1LL;
	uint8_t x624 = 0U;

    t127 = ((x621+x622)+(x623|x624));

    if (t127 != 32765LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x627 = 6015808U;
	int8_t x628 = -1;
	volatile uint32_t t128 = 2078817U;

    t128 = ((x625+x626)+(x627|x628));

    if (t128 != 32770U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x629 = -153741;
	static uint16_t x630 = UINT16_MAX;
	int64_t x631 = -1LL;
	static uint64_t x632 = 234636095347888LLU;
	uint64_t t129 = 599913LLU;

    t129 = ((x629+x630)+(x631|x632));

    if (t129 != 18446744073709463409LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x633 = 26;
	int16_t x634 = 7615;
	uint64_t x635 = UINT64_MAX;
	int8_t x636 = INT8_MIN;
	uint64_t t130 = 14739LLU;

    t130 = ((x633+x634)+(x635|x636));

    if (t130 != 7640LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x637 = 0;
	uint8_t x638 = 22U;
	uint32_t x640 = 1904U;
	uint32_t t131 = 167055532U;

    t131 = ((x637+x638)+(x639|x640));

    if (t131 != 21U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x641 = 5U;
	volatile uint64_t x642 = 134694128LLU;
	int16_t x643 = -69;
	int32_t x644 = INT32_MIN;

    t132 = ((x641+x642)+(x643|x644));

    if (t132 != 134694064LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x645 = -1LL;
	int16_t x646 = INT16_MAX;
	int64_t t133 = -320722127475229LL;

    t133 = ((x645+x646)+(x647|x648));

    if (t133 != 4295000061LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x653 = UINT64_MAX;
	int16_t x655 = INT16_MAX;
	volatile uint64_t t134 = 80290LLU;

    t134 = ((x653+x654)+(x655|x656));

    if (t134 != 6LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x657 = INT8_MIN;
	uint32_t x658 = 138571U;
	static int32_t x659 = INT32_MAX;
	static volatile uint32_t t135 = 7877176U;

    t135 = ((x657+x658)+(x659|x660));

    if (t135 != 138442U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x665 = 8531125;
	static int64_t x666 = INT64_MIN;
	int8_t x668 = -4;
	volatile int64_t t136 = 278LL;

    t136 = ((x665+x666)+(x667|x668));

    if (t136 != -9223372036846244686LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x669 = INT16_MAX;
	int64_t x671 = 192316114362781LL;
	volatile int64_t t137 = 1LL;

    t137 = ((x669+x670)+(x671|x672));

    if (t137 != 192316114395805LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x673 = -1;
	volatile int8_t x674 = INT8_MIN;
	volatile int32_t x675 = INT32_MIN;
	uint64_t x676 = 18286LLU;

    t138 = ((x673+x674)+(x675|x676));

    if (t138 != 18446744071562086125LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x677 = INT32_MAX;
	uint64_t x679 = 123058LLU;
	int16_t x680 = -1;
	uint64_t t139 = 3400LLU;

    t139 = ((x677+x678)+(x679|x680));

    if (t139 != 2147483646LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x681 = INT32_MIN;
	uint64_t x682 = 47903997257303LLU;
	int64_t x683 = INT64_MIN;
	int8_t x684 = -4;
	static uint64_t t140 = 1973858406210165698LLU;

    t140 = ((x681+x682)+(x683|x684));

    if (t140 != 47901849773651LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x685 = 22717U;
	uint8_t x686 = 29U;
	int64_t x688 = -639LL;
	int64_t t141 = 34977185799516LL;

    t141 = ((x685+x686)+(x687|x688));

    if (t141 != 22659LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x689 = UINT64_MAX;
	int32_t x690 = 2026585;
	volatile uint8_t x691 = 3U;
	int8_t x692 = INT8_MIN;
	static uint64_t t142 = 7783783809LLU;

    t142 = ((x689+x690)+(x691|x692));

    if (t142 != 2026459LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x697 = UINT16_MAX;
	uint32_t x698 = UINT32_MAX;
	int16_t x699 = INT16_MAX;
	int8_t x700 = -61;
	uint32_t t143 = 13U;

    t143 = ((x697+x698)+(x699|x700));

    if (t143 != 65533U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x701 = UINT8_MAX;
	uint32_t x702 = 5U;
	volatile uint16_t x703 = 3U;
	uint32_t x704 = 9195U;
	volatile uint32_t t144 = 346U;

    t144 = ((x701+x702)+(x703|x704));

    if (t144 != 9455U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MAX;
	volatile uint64_t x711 = 1255201LLU;
	volatile int64_t x712 = INT64_MIN;

    t145 = ((x709+x710)+(x711|x712));

    if (t145 != 9223372036856031263LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x713 = INT32_MIN;
	static int64_t x714 = -134000163261LL;
	uint64_t x715 = UINT64_MAX;
	int32_t x716 = -1;
	static uint64_t t146 = 46LLU;

    t146 = ((x713+x714)+(x715|x716));

    if (t146 != 18446743937561904706LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x717 = 231138615U;
	uint32_t x718 = 172U;
	volatile int16_t x719 = -1;
	int64_t x720 = INT64_MIN;

    t147 = ((x717+x718)+(x719|x720));

    if (t147 != 231138786LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x721 = INT64_MAX;
	int64_t x722 = -1LL;
	int16_t x723 = -1;
	volatile uint8_t x724 = UINT8_MAX;
	int64_t t148 = -18564119367916LL;

    t148 = ((x721+x722)+(x723|x724));

    if (t148 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x725 = 335;
	int32_t x726 = -1479368;
	uint16_t x727 = 115U;
	uint8_t x728 = UINT8_MAX;
	int32_t t149 = -1;

    t149 = ((x725+x726)+(x727|x728));

    if (t149 != -1478778) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x734 = INT64_MIN;
	int16_t x736 = INT16_MIN;

    t150 = ((x733+x734)+(x735|x736));

    if (t150 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x737 = -1;
	static int64_t x738 = INT64_MAX;
	int16_t x740 = INT16_MIN;
	int64_t t151 = 4LL;

    t151 = ((x737+x738)+(x739|x740));

    if (t151 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x741 = INT8_MIN;
	uint32_t x742 = UINT32_MAX;
	int8_t x744 = INT8_MIN;

    t152 = ((x741+x742)+(x743|x744));

    if (t152 != 4294967155U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x749 = 15U;
	int8_t x752 = INT8_MIN;

    t153 = ((x749+x750)+(x751|x752));

    if (t153 != 18446744071562067860LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x757 = 310523LLU;
	int64_t x758 = 2212354845LL;
	int32_t x759 = 212759857;
	uint64_t t154 = 5514556341341279410LLU;

    t154 = ((x757+x758)+(x759|x760));

    if (t154 != 2425425431LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x765 = INT64_MIN;
	static volatile uint32_t x766 = 7293U;
	int64_t x767 = -494LL;
	volatile int64_t x768 = INT64_MAX;
	volatile int64_t t155 = -174442674398LL;

    t155 = ((x765+x766)+(x767|x768));

    if (t155 != -9223372036854768516LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x769 = UINT16_MAX;
	int8_t x770 = INT8_MAX;
	uint16_t x771 = 1937U;
	int8_t x772 = -1;
	int32_t t156 = -16;

    t156 = ((x769+x770)+(x771|x772));

    if (t156 != 65661) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x773 = INT8_MIN;
	int16_t x774 = -15;
	int8_t x775 = -1;
	volatile int32_t t157 = 6;

    t157 = ((x773+x774)+(x775|x776));

    if (t157 != -144) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x778 = 1;
	static volatile uint8_t x779 = 1U;
	int32_t x780 = 13323;
	int32_t t158 = 1;

    t158 = ((x777+x778)+(x779|x780));

    if (t158 != 13325) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x782 = UINT16_MAX;
	volatile uint64_t x783 = 8766LLU;
	static uint32_t x784 = 70137U;

    t159 = ((x781+x782)+(x783|x784));

    if (t159 != 142864LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x785 = UINT32_MAX;
	int16_t x786 = INT16_MIN;
	int64_t x788 = INT64_MIN;
	static int64_t t160 = 24068LL;

    t160 = ((x785+x786)+(x787|x788));

    if (t160 != -9223372032559841225LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x789 = -1;
	uint16_t x790 = UINT16_MAX;
	volatile uint32_t x791 = UINT32_MAX;
	int16_t x792 = -1;

    t161 = ((x789+x790)+(x791|x792));

    if (t161 != 65533U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x793 = 2370U;
	volatile int16_t x794 = INT16_MIN;
	static int16_t x796 = INT16_MIN;
	volatile int32_t t162 = 107915;

    t162 = ((x793+x794)+(x795|x796));

    if (t162 != -63165) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x797 = 40327643;
	static int32_t x798 = -922177070;
	static volatile int64_t x799 = -1LL;

    t163 = ((x797+x798)+(x799|x800));

    if (t163 != -881849428LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x802 = UINT64_MAX;
	int16_t x803 = INT16_MAX;
	int16_t x804 = 490;
	uint64_t t164 = 6LLU;

    t164 = ((x801+x802)+(x803|x804));

    if (t164 != 4295000061LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x809 = INT16_MIN;
	uint32_t x810 = 251U;
	int16_t x811 = INT16_MIN;
	uint32_t t165 = 2123U;

    t165 = ((x809+x810)+(x811|x812));

    if (t165 != 4294902057U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x813 = INT32_MAX;
	static volatile int8_t x814 = -1;
	int64_t x815 = INT64_MIN;
	volatile uint64_t t166 = 352046321560726703LLU;

    t166 = ((x813+x814)+(x815|x816));

    if (t166 != 2147483645LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x817 = UINT16_MAX;
	int16_t x818 = -1;
	uint16_t x819 = 9U;
	static int32_t x820 = -356;
	static volatile int32_t t167 = -1;

    t167 = ((x817+x818)+(x819|x820));

    if (t167 != 65179) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x821 = 15169756U;
	uint32_t t168 = 1040203U;

    t168 = ((x821+x822)+(x823|x824));

    if (t168 != 15235290U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x825 = 0;
	volatile int64_t x826 = INT64_MIN;
	volatile uint64_t x827 = 265645LLU;
	int64_t x828 = 88LL;
	volatile uint64_t t169 = 2342487734LLU;

    t169 = ((x825+x826)+(x827|x828));

    if (t169 != 9223372036855041533LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x833 = UINT16_MAX;
	static uint64_t x834 = 763LLU;
	static int8_t x835 = 60;
	int32_t x836 = 8321796;

    t170 = ((x833+x834)+(x835|x836));

    if (t170 != 8388150LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x837 = -1LL;
	static int8_t x838 = 1;
	uint32_t x839 = 2U;
	static int16_t x840 = -3;
	volatile int64_t t171 = 259LL;

    t171 = ((x837+x838)+(x839|x840));

    if (t171 != 4294967295LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x841 = INT32_MIN;
	int16_t x842 = 59;
	uint16_t x843 = UINT16_MAX;
	uint8_t x844 = 3U;
	int32_t t172 = -3704629;

    t172 = ((x841+x842)+(x843|x844));

    if (t172 != -2147418054) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x845 = 3;
	static uint64_t x846 = 142258935LLU;
	static uint16_t x847 = 11339U;
	volatile int64_t x848 = INT64_MIN;

    t173 = ((x845+x846)+(x847|x848));

    if (t173 != 9223372036997046085LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x849 = 23;
	volatile uint16_t x850 = 506U;
	static int32_t x851 = 33294;
	volatile int64_t t174 = 224634906873285853LL;

    t174 = ((x849+x850)+(x851|x852));

    if (t174 != -259123285694315056LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x853 = 86LLU;
	static uint64_t x855 = UINT64_MAX;
	uint64_t t175 = 1774110966LLU;

    t175 = ((x853+x854)+(x855|x856));

    if (t175 != 85LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x857 = 14U;
	int8_t x858 = INT8_MIN;
	volatile int8_t x859 = INT8_MAX;
	uint16_t x860 = UINT16_MAX;
	static int32_t t176 = -2;

    t176 = ((x857+x858)+(x859|x860));

    if (t176 != 65421) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x865 = UINT16_MAX;
	uint32_t x866 = 3U;
	static uint32_t x867 = 1891207U;
	int16_t x868 = INT16_MIN;

    t177 = ((x865+x866)+(x867|x868));

    if (t177 != 56201U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x873 = INT16_MIN;
	static volatile uint16_t x874 = 1814U;
	volatile int64_t x875 = -15748419302LL;
	volatile uint16_t x876 = UINT16_MAX;
	static int64_t t178 = -15922915436905LL;

    t178 = ((x873+x874)+(x875|x876));

    if (t178 != -15748397291LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x877 = -91449088107LL;
	int16_t x878 = -501;
	static int64_t x879 = INT64_MAX;
	uint16_t x880 = 5U;
	int64_t t179 = 1472084531856LL;

    t179 = ((x877+x878)+(x879|x880));

    if (t179 != 9223371945405687199LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x881 = -1LL;
	int64_t x882 = -1LL;
	static uint8_t x883 = 1U;
	static uint32_t x884 = 15922U;

    t180 = ((x881+x882)+(x883|x884));

    if (t180 != 15921LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x885 = INT32_MIN;
	static uint16_t x887 = 111U;
	static int32_t t181 = 1;

    t181 = ((x885+x886)+(x887|x888));

    if (t181 != -2147215822) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x893 = INT64_MIN;
	uint32_t x894 = 12996U;
	uint64_t x895 = UINT64_MAX;
	volatile int64_t x896 = INT64_MAX;
	uint64_t t182 = 36LLU;

    t182 = ((x893+x894)+(x895|x896));

    if (t182 != 9223372036854788803LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x897 = INT16_MAX;
	uint64_t x899 = 13195993474585995LLU;
	int8_t x900 = INT8_MIN;

    t183 = ((x897+x898)+(x899|x900));

    if (t183 != 32654LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x901 = -26;
	uint16_t x903 = 15U;
	int64_t x904 = -2680554258141LL;
	static volatile int64_t t184 = 200516276958LL;

    t184 = ((x901+x902)+(x903|x904));

    if (t184 != -2680554258132LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x906 = -67;
	static int16_t x907 = -1256;
	static uint32_t x908 = 218372249U;
	static volatile uint32_t t185 = 24U;

    t185 = ((x905+x906)+(x907|x908));

    if (t185 != 4294965974U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x914 = 90191992399143LLU;
	static int8_t x916 = 3;
	volatile uint64_t t186 = 122295LLU;

    t186 = ((x913+x914)+(x915|x916));

    if (t186 != 9223462228847142186LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x917 = 321;
	uint16_t x918 = UINT16_MAX;
	uint8_t x919 = 6U;
	uint32_t x920 = 21U;

    t187 = ((x917+x918)+(x919|x920));

    if (t187 != 65879U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x921 = 890LL;
	volatile int16_t x922 = 125;
	static volatile int64_t x923 = 34752059793LL;
	volatile uint16_t x924 = 0U;
	int64_t t188 = -9629LL;

    t188 = ((x921+x922)+(x923|x924));

    if (t188 != 34752060808LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x927 = UINT32_MAX;
	uint16_t x928 = 3341U;

    t189 = ((x925+x926)+(x927|x928));

    if (t189 != 4294964756LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x929 = 231418U;
	uint8_t x930 = UINT8_MAX;
	volatile uint16_t x932 = UINT16_MAX;
	int64_t t190 = -123442380778LL;

    t190 = ((x929+x930)+(x931|x932));

    if (t190 != -9223372036854478600LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x933 = 11U;
	int16_t x934 = -37;
	static uint8_t x935 = UINT8_MAX;
	uint32_t x936 = UINT32_MAX;
	uint32_t t191 = 83U;

    t191 = ((x933+x934)+(x935|x936));

    if (t191 != 4294967269U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x937 = 5542;
	int64_t x939 = INT64_MIN;
	static int64_t t192 = -239697997LL;

    t192 = ((x937+x938)+(x939|x940));

    if (t192 != -9223372036854770267LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x941 = UINT64_MAX;
	volatile int32_t x942 = -1464300;
	static int16_t x944 = INT16_MIN;
	volatile uint64_t t193 = 31229980421LLU;

    t193 = ((x941+x942)+(x943|x944));

    if (t193 != 18446744073708087314LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x945 = 12LLU;
	volatile uint16_t x946 = 18732U;
	static uint32_t x947 = 12U;
	static volatile uint64_t t194 = 740920040844LLU;

    t194 = ((x945+x946)+(x947|x948));

    if (t194 != 4294983300LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x949 = 1;
	static int32_t x950 = INT32_MIN;
	static uint32_t x951 = 4895441U;
	static uint32_t x952 = 66860U;
	volatile uint32_t t195 = 424U;

    t195 = ((x949+x950)+(x951|x952));

    if (t195 != 2152445950U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x954 = 2739466655LLU;
	int8_t x956 = INT8_MIN;
	volatile uint64_t t196 = 30090857LLU;

    t196 = ((x953+x954)+(x955|x956));

    if (t196 != 2601048161LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x957 = 214525641LLU;
	static int32_t x958 = INT32_MIN;
	int16_t x959 = -1;
	static int32_t x960 = INT32_MIN;

    t197 = ((x957+x958)+(x959|x960));

    if (t197 != 18446744071776593608LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x961 = INT8_MAX;
	int8_t x962 = INT8_MIN;
	uint16_t x963 = UINT16_MAX;
	int64_t x964 = 3LL;
	int64_t t198 = 249062955596416LL;

    t198 = ((x961+x962)+(x963|x964));

    if (t198 != 65534LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x966 = INT8_MAX;
	int8_t x967 = INT8_MIN;
	int16_t x968 = INT16_MIN;
	int32_t t199 = -5741683;

    t199 = ((x965+x966)+(x967|x968));

    if (t199 != -129) { NG(); } else { ; }
	
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

