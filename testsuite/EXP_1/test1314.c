#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 8083926654426LLU;
uint32_t x6 = UINT32_MAX;
int8_t x9 = INT8_MIN;
static uint16_t x13 = 65U;
uint32_t t3 = UINT32_MAX;
volatile int16_t x18 = INT16_MIN;
uint8_t x25 = 102U;
int64_t x34 = INT64_MAX;
int16_t x37 = INT16_MIN;
int8_t x40 = INT8_MIN;
static int64_t x43 = INT64_MAX;
static int8_t x47 = INT8_MIN;
int16_t x51 = INT16_MIN;
volatile uint64_t x61 = 14349322623LLU;
int32_t t15 = -3298;
uint64_t x66 = 3989022725829442725LLU;
static int64_t x80 = INT64_MAX;
static volatile int8_t x83 = INT8_MIN;
int32_t x88 = INT32_MIN;
volatile uint16_t x90 = 14U;
static uint64_t x100 = 61049885064LLU;
volatile uint32_t t25 = UINT32_MAX;
int32_t x105 = -1;
int8_t x106 = INT8_MIN;
volatile uint32_t t26 = 38U;
uint32_t x111 = 7071U;
static int32_t x115 = 55;
uint8_t x122 = UINT8_MAX;
volatile int32_t t30 = -1;
uint64_t t32 = 231283905478LLU;
static volatile int64_t x134 = -1LL;
int32_t t33 = 873;
uint8_t x143 = 16U;
uint64_t x146 = UINT64_MAX;
int8_t x150 = INT8_MAX;
int32_t x155 = INT32_MIN;
int64_t x158 = INT64_MAX;
uint16_t x160 = 37U;
uint8_t x167 = 40U;
static uint8_t x168 = 16U;
int16_t x174 = -1;
uint16_t x184 = 3U;
static volatile int64_t t45 = -11675530095557103LL;
uint8_t x189 = 51U;
int32_t t47 = -357283253;
uint16_t x197 = UINT16_MAX;
volatile int16_t x201 = 3695;
uint64_t x207 = UINT64_MAX;
uint32_t x208 = 423U;
uint16_t x212 = UINT16_MAX;
volatile int32_t x214 = -1;
volatile int64_t t53 = 30155013413LL;
volatile int32_t t54 = 2885026;
int64_t t55 = INT64_MIN;
volatile int32_t t56 = 723;
static volatile int16_t x243 = -1;
uint8_t x244 = 1U;
int32_t t60 = -1746;
int64_t x246 = INT64_MAX;
volatile uint64_t t62 = 691279447LLU;
volatile int8_t x256 = INT8_MAX;
int32_t t63 = -382;
uint8_t x258 = 2U;
int16_t x259 = INT16_MIN;
static volatile uint32_t t64 = UINT32_MAX;
volatile uint8_t x263 = 18U;
int16_t x278 = -1;
uint16_t x283 = 106U;
uint64_t x292 = 11LLU;
int16_t x294 = INT16_MIN;
uint16_t x295 = 1972U;
int32_t x314 = INT32_MIN;
int64_t x315 = -1LL;
int16_t x318 = INT16_MIN;
int64_t x323 = INT64_MAX;
uint64_t x326 = 52187172386LLU;
volatile int32_t t81 = 109;
int8_t x333 = 2;
int32_t x335 = 232282;
static uint8_t x337 = UINT8_MAX;
volatile int64_t t84 = -5501512LL;
uint64_t x343 = 7827785132657999478LLU;
int32_t x347 = INT32_MIN;
static int8_t x352 = 2;
uint8_t x361 = UINT8_MAX;
volatile uint16_t x364 = UINT16_MAX;
uint64_t x375 = 6896LLU;
uint64_t t93 = 12172LLU;
int32_t x379 = INT32_MIN;
uint32_t x387 = 1093609U;
static int8_t x388 = 0;
int32_t t97 = -37;
uint64_t x397 = UINT64_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	static int32_t x2 = INT32_MAX;
	volatile uint64_t x3 = UINT64_MAX;
	volatile uint16_t x4 = 2812U;

	t0 = (((x1==x2)&x3)+x4);

	if (t0 != 2812LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 60U;
	int16_t x7 = -1;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = -25865;

	t1 = (((x5==x6)&x7)+x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = INT8_MIN;
	int32_t x11 = -1722466;
	int32_t x12 = -1;
	int32_t t2 = 324173058;

	t2 = (((x9==x10)&x11)+x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = 288539416414LL;
	uint32_t x15 = 2177U;
	int16_t x16 = -1;

	t3 = (((x13==x14)&x15)+x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint64_t x19 = 203LLU;
	static volatile int32_t x20 = INT32_MIN;
	uint64_t t4 = 9224932031471LLU;

	t4 = (((x17==x18)&x19)+x20);

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MIN;
	volatile int32_t x23 = INT32_MIN;
	volatile uint16_t x24 = 3260U;
	volatile int32_t t5 = 22551939;

	t5 = (((x21==x22)&x23)+x24);

	if (t5 != 3260) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -8;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = -360329722;

	t6 = (((x25==x26)&x27)+x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	uint64_t x30 = 679268680054043683LLU;
	int32_t x31 = INT32_MAX;
	volatile uint64_t x32 = 253660LLU;
	uint64_t t7 = 12LLU;

	t7 = (((x29==x30)&x31)+x32);

	if (t7 != 253660LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 6276U;
	static uint64_t t8 = 934913821002764LLU;

	t8 = (((x33==x34)&x35)+x36);

	if (t8 != 6276LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	volatile uint16_t x39 = 315U;
	int32_t t9 = 17913990;

	t9 = (((x37==x38)&x39)+x40);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static int16_t x42 = -1;
	static int8_t x44 = INT8_MAX;
	int64_t t10 = -2LL;

	t10 = (((x41==x42)&x43)+x44);

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 17819978869686LLU;
	int32_t x46 = -1;
	uint64_t x48 = 19397696849091771LLU;
	volatile uint64_t t11 = 66260860LLU;

	t11 = (((x45==x46)&x47)+x48);

	if (t11 != 19397696849091771LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 0U;
	uint64_t x52 = 11LLU;
	volatile uint64_t t12 = 3LLU;

	t12 = (((x49==x50)&x51)+x52);

	if (t12 != 11LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 11721U;
	static int64_t x54 = INT64_MIN;
	int64_t x55 = 267620265LL;
	int16_t x56 = -1;
	volatile int64_t t13 = 5994085212LL;

	t13 = (((x53==x54)&x55)+x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 5643U;
	static volatile int16_t x58 = -1;
	int16_t x59 = 7;
	int64_t x60 = INT64_MIN;
	static int64_t t14 = INT64_MIN;

	t14 = (((x57==x58)&x59)+x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	int16_t x63 = INT16_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (((x61==x62)&x63)+x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 1;
	uint64_t x67 = UINT64_MAX;
	volatile int8_t x68 = -4;
	volatile uint64_t t16 = 9035038338009255175LLU;

	t16 = (((x65==x66)&x67)+x68);

	if (t16 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int8_t x70 = -22;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = -1;

	t17 = (((x69==x70)&x71)+x72);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1LL;
	int32_t x75 = 80;
	uint8_t x76 = 87U;
	int32_t t18 = -1;

	t18 = (((x73==x74)&x75)+x76);

	if (t18 != 87) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	volatile uint32_t x78 = 0U;
	int16_t x79 = INT16_MIN;
	static int64_t t19 = INT64_MAX;

	t19 = (((x77==x78)&x79)+x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int16_t x82 = 7983;
	volatile int64_t x84 = -161823134LL;
	int64_t t20 = 21126LL;

	t20 = (((x81==x82)&x83)+x84);

	if (t20 != -161823134LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1080;
	volatile int16_t x86 = 12;
	int32_t x87 = -1;
	int32_t t21 = INT32_MIN;

	t21 = (((x85==x86)&x87)+x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static volatile int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t22 = UINT64_MAX;

	t22 = (((x89==x90)&x91)+x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MAX;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MAX;
	static int32_t t23 = INT32_MAX;

	t23 = (((x93==x94)&x95)+x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	static uint32_t x98 = UINT32_MAX;
	volatile int8_t x99 = INT8_MAX;
	uint64_t t24 = 77712797083LLU;

	t24 = (((x97==x98)&x99)+x100);

	if (t24 != 61049885064LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 312372U;
	int16_t x102 = 7;
	uint32_t x103 = 31504709U;
	int8_t x104 = -1;

	t25 = (((x101==x102)&x103)+x104);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x107 = 115U;
	uint16_t x108 = 1106U;

	t26 = (((x105==x106)&x107)+x108);

	if (t26 != 1106U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 130LL;
	volatile int8_t x110 = INT8_MAX;
	int8_t x112 = -1;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (((x109==x110)&x111)+x112);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 6U;
	int8_t x114 = -4;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -4788988;

	t28 = (((x113==x114)&x115)+x116);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MAX;
	int8_t x119 = 0;
	static uint8_t x120 = 3U;
	static volatile int32_t t29 = -9487;

	t29 = (((x117==x118)&x119)+x120);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x121 = 4U;
	int16_t x123 = INT16_MAX;
	uint16_t x124 = UINT16_MAX;

	t30 = (((x121==x122)&x123)+x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	volatile int8_t x127 = 2;
	static int64_t x128 = -1LL;
	int64_t t31 = 149506110214991716LL;

	t31 = (((x125==x126)&x127)+x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 0U;
	uint16_t x130 = 24U;
	int32_t x131 = -87247;
	uint64_t x132 = 64850421089244LLU;

	t32 = (((x129==x130)&x131)+x132);

	if (t32 != 64850421089244LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	static int16_t x135 = INT16_MAX;
	volatile int16_t x136 = -3;

	t33 = (((x133==x134)&x135)+x136);

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	uint64_t x138 = 60520643274861LLU;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = (((x137==x138)&x139)+x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 101U;
	volatile int64_t x142 = 6411715LL;
	uint32_t x144 = UINT32_MAX;
	static uint32_t t35 = UINT32_MAX;

	t35 = (((x141==x142)&x143)+x144);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MIN;
	uint32_t x147 = 619U;
	int32_t x148 = -2476051;
	uint32_t t36 = 6U;

	t36 = (((x145==x146)&x147)+x148);

	if (t36 != 4292491245U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 5749997309107LLU;
	static uint32_t x151 = UINT32_MAX;
	volatile uint32_t x152 = 7334393U;
	uint32_t t37 = 17240880U;

	t37 = (((x149==x150)&x151)+x152);

	if (t37 != 7334393U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	volatile uint64_t x154 = 211070701070LLU;
	volatile int32_t x156 = INT32_MIN;
	int32_t t38 = INT32_MIN;

	t38 = (((x153==x154)&x155)+x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint16_t x159 = 2609U;
	int32_t t39 = -18095050;

	t39 = (((x157==x158)&x159)+x160);

	if (t39 != 37) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static int32_t x162 = -1;
	int32_t x163 = INT32_MIN;
	static volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 6498;

	t40 = (((x161==x162)&x163)+x164);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	static int32_t x166 = INT32_MIN;
	static int32_t t41 = 1;

	t41 = (((x165==x166)&x167)+x168);

	if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int64_t x170 = INT64_MIN;
	volatile uint32_t x171 = 836U;
	int32_t x172 = -4730834;
	volatile uint32_t t42 = 162U;

	t42 = (((x169==x170)&x171)+x172);

	if (t42 != 4290236462U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 738U;
	uint64_t x175 = 2663088610706LLU;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t43 = 5617282027LLU;

	t43 = (((x173==x174)&x175)+x176);

	if (t43 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = -1;
	volatile uint32_t x179 = 505300U;
	int16_t x180 = 0;
	volatile uint32_t t44 = 276883657U;

	t44 = (((x177==x178)&x179)+x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 211LLU;
	static volatile int8_t x182 = -3;
	static int64_t x183 = INT64_MAX;

	t45 = (((x181==x182)&x183)+x184);

	if (t45 != 3LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int32_t x186 = -1;
	static uint32_t x187 = UINT32_MAX;
	int16_t x188 = INT16_MIN;
	volatile uint32_t t46 = 1470017U;

	t46 = (((x185==x186)&x187)+x188);

	if (t46 != 4294934529U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = 4583350410038908LL;
	uint16_t x191 = 2043U;
	int8_t x192 = INT8_MIN;

	t47 = (((x189==x190)&x191)+x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile int64_t x194 = -10482LL;
	int8_t x195 = -27;
	uint16_t x196 = 325U;
	static volatile int32_t t48 = 93516043;

	t48 = (((x193==x194)&x195)+x196);

	if (t48 != 325) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -3563LL;
	int32_t x199 = -62268457;
	volatile int64_t x200 = INT64_MIN;
	static int64_t t49 = INT64_MIN;

	t49 = (((x197==x198)&x199)+x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 57U;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 1;

	t50 = (((x201==x202)&x203)+x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	volatile int16_t x206 = INT16_MIN;
	uint64_t t51 = 1975548LLU;

	t51 = (((x205==x206)&x207)+x208);

	if (t51 != 423LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = 0;
	volatile uint16_t x211 = 129U;
	volatile int32_t t52 = 30;

	t52 = (((x209==x210)&x211)+x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	static volatile int32_t x215 = -2;
	int64_t x216 = -1409191592811997LL;

	t53 = (((x213==x214)&x215)+x216);

	if (t53 != -1409191592811997LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int32_t x218 = -1;
	static int8_t x219 = -1;
	int16_t x220 = 12736;

	t54 = (((x217==x218)&x219)+x220);

	if (t54 != 12737) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	uint64_t x222 = 155030LLU;
	int16_t x223 = -1;
	static int64_t x224 = INT64_MIN;

	t55 = (((x221==x222)&x223)+x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 14U;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = 3124U;
	volatile uint8_t x228 = UINT8_MAX;

	t56 = (((x225==x226)&x227)+x228);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x230 = 63324U;
	volatile int16_t x231 = -4;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 133;

	t57 = (((x229==x230)&x231)+x232);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x233 = INT32_MIN;
	uint8_t x234 = 55U;
	uint32_t x235 = 115304U;
	int64_t x236 = -1LL;
	volatile int64_t t58 = 321687624245909LL;

	t58 = (((x233==x234)&x235)+x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	volatile int64_t x238 = INT64_MAX;
	static int64_t x239 = -65202LL;
	int8_t x240 = INT8_MIN;
	volatile int64_t t59 = -6548496836LL;

	t59 = (((x237==x238)&x239)+x240);

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 2U;
	int64_t x242 = INT64_MIN;

	t60 = (((x241==x242)&x243)+x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	uint64_t x247 = 434219493LLU;
	static volatile int8_t x248 = INT8_MAX;
	static volatile uint64_t t61 = 54022686627953LLU;

	t61 = (((x245==x246)&x247)+x248);

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 37U;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = 60719839434513846LLU;

	t62 = (((x249==x250)&x251)+x252);

	if (t62 != 60719839434513846LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -7475;
	static int32_t x254 = INT32_MAX;
	int32_t x255 = INT32_MAX;

	t63 = (((x253==x254)&x255)+x256);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = 1;
	uint32_t x260 = UINT32_MAX;

	t64 = (((x257==x258)&x259)+x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	int32_t x264 = INT32_MAX;
	static int32_t t65 = INT32_MAX;

	t65 = (((x261==x262)&x263)+x264);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static volatile int64_t x266 = -37532902LL;
	uint8_t x267 = 1U;
	int32_t x268 = -1;
	int32_t t66 = 13;

	t66 = (((x265==x266)&x267)+x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 15596U;
	uint32_t x270 = 2487U;
	volatile uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 5224971635LLU;
	volatile uint64_t t67 = 463726082LLU;

	t67 = (((x269==x270)&x271)+x272);

	if (t67 != 5224971635LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	volatile uint32_t x274 = 4U;
	uint8_t x275 = 61U;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x273==x274)&x275)+x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	static uint8_t x279 = UINT8_MAX;
	int64_t x280 = -1LL;
	int64_t t69 = -91458177689042672LL;

	t69 = (((x277==x278)&x279)+x280);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = -1;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -8779129;

	t70 = (((x281==x282)&x283)+x284);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 3;
	int8_t x286 = INT8_MAX;
	static volatile int8_t x287 = INT8_MIN;
	static int8_t x288 = -1;
	int32_t t71 = 11;

	t71 = (((x285==x286)&x287)+x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	volatile uint64_t t72 = 19841LLU;

	t72 = (((x289==x290)&x291)+x292);

	if (t72 != 11LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 0U;
	volatile uint8_t x296 = 29U;
	int32_t t73 = 0;

	t73 = (((x293==x294)&x295)+x296);

	if (t73 != 29) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t x300 = INT32_MAX;
	volatile int32_t t74 = INT32_MAX;

	t74 = (((x297==x298)&x299)+x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -3;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 3207672702LLU;
	static int64_t x304 = -160055065594966LL;
	static uint64_t t75 = 319526297386LLU;

	t75 = (((x301==x302)&x303)+x304);

	if (t75 != 18446584018643956650LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	static int64_t x306 = -4961799863LL;
	volatile int16_t x307 = -1;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (((x305==x306)&x307)+x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 105U;
	int16_t x310 = 2203;
	static int64_t x311 = 7786920LL;
	int8_t x312 = INT8_MIN;
	static volatile int64_t t77 = -3784098011LL;

	t77 = (((x309==x310)&x311)+x312);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;
	static int64_t t78 = 981772288740078537LL;

	t78 = (((x313==x314)&x315)+x316);

	if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 27U;
	volatile int64_t x319 = -1LL;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (((x317==x318)&x319)+x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int32_t x322 = -1;
	volatile int32_t x324 = -1;
	int64_t t80 = 2431892LL;

	t80 = (((x321==x322)&x323)+x324);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 926814750959051LLU;
	int32_t x327 = 260;
	int8_t x328 = -1;

	t81 = (((x325==x326)&x327)+x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MIN;
	volatile int64_t x330 = INT64_MIN;
	static uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MAX;
	static volatile uint32_t t82 = 5U;

	t82 = (((x329==x330)&x331)+x332);

	if (t82 != 128U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 3U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -5617995;

	t83 = (((x333==x334)&x335)+x336);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = -123089782626409LL;
	int32_t x340 = INT32_MIN;

	t84 = (((x337==x338)&x339)+x340);

	if (t84 != -2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -3;
	uint8_t x342 = 81U;
	int16_t x344 = INT16_MIN;
	static uint64_t t85 = 814775551319077485LLU;

	t85 = (((x341==x342)&x343)+x344);

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x346 = 30U;
	int32_t x348 = INT32_MAX;
	int32_t t86 = INT32_MAX;

	t86 = (((x345==x346)&x347)+x348);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MIN;
	volatile int64_t t87 = -554LL;

	t87 = (((x349==x350)&x351)+x352);

	if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	volatile uint32_t x354 = 1036084023U;
	static int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	int32_t t88 = 502381605;

	t88 = (((x353==x354)&x355)+x356);

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 1;
	int16_t x358 = -1583;
	int64_t x359 = INT64_MAX;
	int8_t x360 = -1;
	int64_t t89 = 8458300205LL;

	t89 = (((x357==x358)&x359)+x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 0U;
	int64_t x363 = INT64_MIN;
	volatile int64_t t90 = -285LL;

	t90 = (((x361==x362)&x363)+x364);

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	volatile int64_t x367 = INT64_MIN;
	uint16_t x368 = UINT16_MAX;
	int64_t t91 = 1LL;

	t91 = (((x365==x366)&x367)+x368);

	if (t91 != 65535LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x369 = -1LL;
	int16_t x370 = INT16_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = 113;

	t92 = (((x369==x370)&x371)+x372);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 3U;
	int64_t x374 = -1LL;
	uint8_t x376 = UINT8_MAX;

	t93 = (((x373==x374)&x375)+x376);

	if (t93 != 255LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 2409U;
	volatile int8_t x378 = -7;
	int8_t x380 = -14;
	static int32_t t94 = 14;

	t94 = (((x377==x378)&x379)+x380);

	if (t94 != -14) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	static int64_t x382 = -1LL;
	int8_t x383 = -11;
	int64_t x384 = 14623315236LL;
	volatile int64_t t95 = 41202660032798116LL;

	t95 = (((x381==x382)&x383)+x384);

	if (t95 != 14623315236LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int16_t x386 = INT16_MAX;
	uint32_t t96 = 985908U;

	t96 = (((x385==x386)&x387)+x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = -1;

	t97 = (((x389==x390)&x391)+x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int8_t x394 = INT8_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	static int32_t x396 = INT32_MIN;
	uint64_t t98 = 3739718113975227LLU;

	t98 = (((x393==x394)&x395)+x396);

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = INT16_MIN;
	volatile int16_t x399 = -3;
	uint16_t x400 = UINT16_MAX;
	int32_t t99 = 12;

	t99 = (((x397==x398)&x399)+x400);

	if (t99 != 65535) { NG(); } else { ; }
	
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


    return 0;
}

