#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x14 = -1;
int8_t x18 = INT8_MIN;
volatile int32_t t3 = 1;
int64_t x25 = INT64_MIN;
int8_t x30 = INT8_MIN;
static int8_t x32 = -41;
int32_t t6 = -57822;
int16_t x35 = INT16_MIN;
int32_t x36 = -456;
static int8_t x42 = INT8_MIN;
volatile int32_t x52 = INT32_MAX;
static volatile int32_t x58 = -1;
int8_t x61 = -1;
int32_t x76 = -1;
int32_t x82 = -1;
int32_t x83 = -8492;
int32_t x85 = -4;
int16_t x86 = INT16_MIN;
static uint16_t x87 = UINT16_MAX;
int32_t t17 = -20578;
static volatile uint32_t x89 = 1282U;
static int64_t x90 = INT64_MIN;
static int8_t x97 = 19;
static volatile int32_t t20 = 20722;
volatile int8_t x105 = -1;
volatile int16_t x112 = -1;
int32_t x116 = -1;
int32_t t23 = 24338443;
int32_t t24 = -839449504;
int16_t x131 = INT16_MAX;
int64_t x132 = INT64_MAX;
int64_t x137 = INT64_MIN;
int64_t x140 = 71845912187993LL;
volatile int64_t t26 = -378272535173169015LL;
volatile int8_t x147 = INT8_MIN;
int16_t x151 = INT16_MAX;
static int16_t x164 = INT16_MAX;
uint8_t x169 = 47U;
uint8_t x172 = UINT8_MAX;
static int8_t x176 = 36;
uint64_t x179 = UINT64_MAX;
int8_t x191 = 19;
static int32_t x194 = INT32_MIN;
int16_t x197 = -1;
volatile uint32_t x200 = 10171U;
int16_t x219 = INT16_MIN;
volatile int16_t x226 = -1;
static int8_t x227 = INT8_MIN;
uint8_t x228 = UINT8_MAX;
volatile int32_t t44 = 866559;
int8_t x237 = 42;
int32_t x238 = -1;
uint64_t x245 = 93516994LLU;
uint8_t x248 = UINT8_MAX;
int16_t x255 = INT16_MIN;
int32_t t48 = 1;
static volatile int32_t x258 = -54094;
static volatile uint8_t x260 = 4U;
uint8_t x264 = UINT8_MAX;
uint16_t x265 = 3U;
static uint16_t x266 = UINT16_MAX;
int32_t x273 = INT32_MIN;
volatile int64_t t52 = -383264578709638077LL;
static volatile int32_t x278 = -1;
uint64_t x284 = UINT64_MAX;
uint16_t x288 = 3U;
volatile int32_t x289 = 25;
int16_t x296 = INT16_MIN;
int32_t x297 = 11482963;
static int16_t x300 = -4;
int32_t t59 = -19310;
int32_t t61 = -351;
static uint8_t x340 = 6U;
static int8_t x343 = 6;
int8_t x357 = INT8_MAX;
int8_t x359 = INT8_MIN;
uint16_t x364 = 1808U;
uint64_t x379 = 2651818832LLU;
volatile uint16_t x387 = 22U;
uint32_t t71 = 128U;
int64_t x392 = 21466LL;
static int64_t t72 = -66LL;
int8_t x395 = INT8_MIN;
volatile int32_t t73 = -14;
uint64_t x405 = 873212875835539671LLU;
int32_t t76 = -461;
int8_t x415 = INT8_MIN;
volatile uint32_t x424 = UINT32_MAX;
int64_t x425 = INT64_MAX;
uint32_t x428 = 23484U;
int16_t x434 = INT16_MIN;
int32_t x443 = INT32_MIN;
static volatile int32_t t82 = -403056;
uint16_t x448 = 1U;
int16_t x452 = -447;
uint16_t x453 = 28U;
uint16_t x457 = 3573U;
volatile int64_t x462 = 0LL;
uint32_t x464 = 92183U;
static uint16_t x470 = 1519U;
int8_t x477 = 3;
int16_t x485 = -1;
volatile int32_t t92 = 198;
int8_t x492 = 0;
int8_t x500 = -24;
uint64_t x514 = 92630070544LLU;
uint64_t x518 = UINT64_MAX;
uint8_t x526 = 40U;
static volatile int64_t t98 = 6230LL;
static int64_t x530 = -1LL;
int64_t x531 = 84928LL;


void f0(void) {
	uint8_t x5 = 0U;
	int64_t x6 = 6LL;
	volatile uint8_t x7 = 2U;
	volatile uint32_t x8 = 13790216U;
	volatile uint32_t t0 = 2013062180U;

	t0 = ((x5<=(x6+x7))-x8);

	if (t0 != 4281177081U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 3057LLU;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t1 = -33;

	t1 = ((x9<=(x10+x11))-x12);

	if (t1 != -126) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 2889;
	int32_t x15 = INT32_MAX;
	volatile int32_t x16 = -315;
	volatile int32_t t2 = 621121;

	t2 = ((x13<=(x14+x15))-x16);

	if (t2 != 316) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = UINT8_MAX;
	volatile int64_t x19 = INT64_MAX;
	uint16_t x20 = 4U;

	t3 = ((x17<=(x18+x19))-x20);

	if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x21 = -1;
	volatile int16_t x22 = -1;
	int8_t x23 = INT8_MAX;
	int16_t x24 = 121;
	volatile int32_t t4 = -4;

	t4 = ((x21<=(x22+x23))-x24);

	if (t4 != -120) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int64_t x27 = 131351836839928839LL;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 1;

	t5 = ((x25<=(x26+x27))-x28);

	if (t5 != 129) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 57754354379936659LL;
	static int16_t x31 = INT16_MIN;

	t6 = ((x29<=(x30+x31))-x32);

	if (t6 != 41) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MAX;
	int64_t x34 = -5949735042LL;
	static int32_t t7 = -96884533;

	t7 = ((x33<=(x34+x35))-x36);

	if (t7 != 456) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 0U;
	volatile uint32_t x43 = UINT32_MAX;
	static int32_t x44 = 3;
	volatile int32_t t8 = -36406590;

	t8 = ((x41<=(x42+x43))-x44);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 1;
	int8_t x50 = INT8_MAX;
	int8_t x51 = -1;
	int32_t t9 = 62;

	t9 = ((x49<=(x50+x51))-x52);

	if (t9 != -2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 19U;
	uint64_t x54 = 29031123708550522LLU;
	int8_t x55 = INT8_MIN;
	int64_t x56 = 1742618100850LL;
	static volatile int64_t t10 = 4202LL;

	t10 = ((x53<=(x54+x55))-x56);

	if (t10 != -1742618100849LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	static int32_t t11 = -98509;

	t11 = ((x57<=(x58+x59))-x60);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = 18788340108312695LLU;
	volatile int32_t x63 = INT32_MIN;
	int8_t x64 = -1;
	volatile int32_t t12 = -441;

	t12 = ((x61<=(x62+x63))-x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 0U;
	volatile int8_t x66 = 5;
	int16_t x67 = 38;
	uint64_t x68 = UINT64_MAX;
	uint64_t t13 = 8665LLU;

	t13 = ((x65<=(x66+x67))-x68);

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = 47;
	int16_t x74 = INT16_MIN;
	static uint16_t x75 = 444U;
	int32_t t14 = -287;

	t14 = ((x73<=(x74+x75))-x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x77 = UINT64_MAX;
	static uint32_t x78 = UINT32_MAX;
	int16_t x79 = 8;
	int64_t x80 = -1LL;
	int64_t t15 = -542600309913169LL;

	t15 = ((x77<=(x78+x79))-x80);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	uint8_t x84 = 0U;
	int32_t t16 = 1456880;

	t16 = ((x81<=(x82+x83))-x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x88 = INT8_MIN;

	t17 = ((x85<=(x86+x87))-x88);

	if (t17 != 129) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x91 = 960174;
	static int16_t x92 = INT16_MAX;
	static volatile int32_t t18 = -6917618;

	t18 = ((x89<=(x90+x91))-x92);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = UINT32_MAX;
	static uint64_t x94 = 2750622LLU;
	volatile uint32_t x95 = UINT32_MAX;
	uint8_t x96 = 3U;
	int32_t t19 = -1;

	t19 = ((x93<=(x94+x95))-x96);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x98 = 1958;
	volatile uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MAX;

	t20 = ((x97<=(x98+x99))-x100);

	if (t20 != -126) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x106 = -1LL;
	static uint16_t x107 = 5315U;
	uint8_t x108 = 72U;
	int32_t t21 = 333473503;

	t21 = ((x105<=(x106+x107))-x108);

	if (t21 != -71) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MIN;
	static int64_t x111 = 4087884768234003748LL;
	int32_t t22 = 49367469;

	t22 = ((x109<=(x110+x111))-x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 30408273971367291LL;
	uint64_t x114 = UINT64_MAX;
	static int16_t x115 = -1;

	t23 = ((x113<=(x114+x115))-x116);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x125 = UINT32_MAX;
	int64_t x126 = 3446001LL;
	volatile int16_t x127 = INT16_MIN;
	volatile int32_t x128 = INT32_MAX;

	t24 = ((x125<=(x126+x127))-x128);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x129 = INT32_MIN;
	static uint16_t x130 = 1102U;
	volatile int64_t t25 = -20770424165LL;

	t25 = ((x129<=(x130+x131))-x132);

	if (t25 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x138 = 485125516U;
	volatile int64_t x139 = INT64_MIN;

	t26 = ((x137<=(x138+x139))-x140);

	if (t26 != -71845912187992LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = -1;
	uint16_t x146 = 1U;
	volatile uint64_t x148 = UINT64_MAX;
	static uint64_t t27 = 621832083789764434LLU;

	t27 = ((x145<=(x146+x147))-x148);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x149 = -1;
	int32_t x150 = -84865666;
	int8_t x152 = INT8_MIN;
	int32_t t28 = 9;

	t28 = ((x149<=(x150+x151))-x152);

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x157 = -1LL;
	uint8_t x158 = 0U;
	int16_t x159 = -998;
	static int32_t x160 = -1;
	int32_t t29 = -6;

	t29 = ((x157<=(x158+x159))-x160);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = 1;
	int8_t x163 = -1;
	static int32_t t30 = 123508;

	t30 = ((x161<=(x162+x163))-x164);

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x170 = 23U;
	static int16_t x171 = INT16_MAX;
	static volatile int32_t t31 = -210795;

	t31 = ((x169<=(x170+x171))-x172);

	if (t31 != -254) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	int32_t t32 = -274025018;

	t32 = ((x173<=(x174+x175))-x176);

	if (t32 != -35) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = -11;
	int32_t x178 = -1;
	uint16_t x180 = 0U;
	volatile int32_t t33 = -1006;

	t33 = ((x177<=(x178+x179))-x180);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = 6863;
	uint8_t x184 = 1U;
	static int32_t t34 = 1;

	t34 = ((x181<=(x182+x183))-x184);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	static int32_t x190 = -57684;
	int64_t x192 = 417788393082015331LL;
	static int64_t t35 = -47775388316015LL;

	t35 = ((x189<=(x190+x191))-x192);

	if (t35 != -417788393082015330LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x193 = UINT16_MAX;
	volatile int64_t x195 = 614LL;
	static volatile int16_t x196 = INT16_MIN;
	static volatile int32_t t36 = -220;

	t36 = ((x193<=(x194+x195))-x196);

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	uint32_t t37 = 983728042U;

	t37 = ((x197<=(x198+x199))-x200);

	if (t37 != 4294957126U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = -1;
	int32_t x206 = -1;
	int8_t x207 = INT8_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t38 = 26407;

	t38 = ((x205<=(x206+x207))-x208);

	if (t38 != -32766) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x209 = 932251723445LL;
	int16_t x210 = INT16_MAX;
	int64_t x211 = 30LL;
	volatile int8_t x212 = INT8_MIN;
	int32_t t39 = -32;

	t39 = ((x209<=(x210+x211))-x212);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x213 = 23559U;
	static uint16_t x214 = UINT16_MAX;
	static int32_t x215 = -4739522;
	int64_t x216 = INT64_MAX;
	static int64_t t40 = 9549568LL;

	t40 = ((x213<=(x214+x215))-x216);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x217 = -1;
	int8_t x218 = INT8_MIN;
	int64_t x220 = -1LL;
	int64_t t41 = -7501489314LL;

	t41 = ((x217<=(x218+x219))-x220);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = 6838308LLU;
	int16_t x222 = INT16_MAX;
	volatile uint16_t x223 = 2U;
	static uint64_t x224 = 1280993137LLU;
	volatile uint64_t t42 = 296672890122335077LLU;

	t42 = ((x221<=(x222+x223))-x224);

	if (t42 != 18446744072428558479LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = -1;
	volatile int32_t t43 = -4;

	t43 = ((x225<=(x226+x227))-x228);

	if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x233 = 55U;
	int16_t x234 = -1;
	volatile int16_t x235 = INT16_MIN;
	uint8_t x236 = UINT8_MAX;

	t44 = ((x233<=(x234+x235))-x236);

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x239 = 5829359941LL;
	int32_t x240 = -9062305;
	int32_t t45 = -1;

	t45 = ((x237<=(x238+x239))-x240);

	if (t45 != 9062306) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	static int8_t x242 = INT8_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile uint32_t x244 = UINT32_MAX;
	static volatile uint32_t t46 = 1U;

	t46 = ((x241<=(x242+x243))-x244);

	if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 7766833U;
	int32_t t47 = -3889;

	t47 = ((x245<=(x246+x247))-x248);

	if (t47 != -254) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	uint8_t x256 = 14U;

	t48 = ((x253<=(x254+x255))-x256);

	if (t48 != -13) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x257 = -29;
	volatile uint64_t x259 = 26LLU;
	volatile int32_t t49 = -7681;

	t49 = ((x257<=(x258+x259))-x260);

	if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = -3;
	int64_t x262 = INT64_MIN;
	static uint64_t x263 = 23989LLU;
	volatile int32_t t50 = 12331264;

	t50 = ((x261<=(x262+x263))-x264);

	if (t50 != -255) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x267 = INT64_MIN;
	uint8_t x268 = 126U;
	volatile int32_t t51 = 0;

	t51 = ((x265<=(x266+x267))-x268);

	if (t51 != -126) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	int64_t x276 = 31017LL;

	t52 = ((x273<=(x274+x275))-x276);

	if (t52 != -31016LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x277 = 22246718073LL;
	int8_t x279 = INT8_MAX;
	int16_t x280 = 7;
	int32_t t53 = -20608;

	t53 = ((x277<=(x278+x279))-x280);

	if (t53 != -7) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = 13;
	int8_t x282 = 0;
	volatile int64_t x283 = INT64_MAX;
	uint64_t t54 = 7185975937486LLU;

	t54 = ((x281<=(x282+x283))-x284);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = 538860664961972337LL;
	int16_t x286 = -103;
	static volatile int32_t x287 = 131933295;
	int32_t t55 = -31;

	t55 = ((x285<=(x286+x287))-x288);

	if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MAX;
	int64_t x292 = -1LL;
	int64_t t56 = -987618873890537228LL;

	t56 = ((x289<=(x290+x291))-x292);

	if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 110U;
	int32_t t57 = 8;

	t57 = ((x293<=(x294+x295))-x296);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x298 = 603568022260LL;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t t58 = 16;

	t58 = ((x297<=(x298+x299))-x300);

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = -2053;
	int8_t x302 = 32;
	int64_t x303 = -1LL;
	uint16_t x304 = 1U;

	t59 = ((x301<=(x302+x303))-x304);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x305 = INT64_MIN;
	static int8_t x306 = 1;
	static int8_t x307 = 0;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t60 = -530777501;

	t60 = ((x305<=(x306+x307))-x308);

	if (t60 != 129) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = -650;
	volatile int16_t x310 = INT16_MAX;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;

	t61 = ((x309<=(x310+x311))-x312);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x325 = 33214502605994982LL;
	uint32_t x326 = 0U;
	volatile int64_t x327 = -1LL;
	uint32_t x328 = UINT32_MAX;
	static uint32_t t62 = 383351103U;

	t62 = ((x325<=(x326+x327))-x328);

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x333 = 71;
	int32_t x334 = -1;
	volatile int32_t x335 = INT32_MAX;
	uint32_t x336 = 41424292U;
	uint32_t t63 = 683U;

	t63 = ((x333<=(x334+x335))-x336);

	if (t63 != 4253543005U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x337 = -53;
	int32_t x338 = INT32_MAX;
	int32_t x339 = -92;
	int32_t t64 = -21979;

	t64 = ((x337<=(x338+x339))-x340);

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x341 = 37U;
	volatile int16_t x342 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	static int32_t t65 = -193296635;

	t65 = ((x341<=(x342+x343))-x344);

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x349 = INT16_MIN;
	static int16_t x350 = INT16_MIN;
	uint8_t x351 = 7U;
	static int64_t x352 = INT64_MAX;
	volatile int64_t t66 = 0LL;

	t66 = ((x349<=(x350+x351))-x352);

	if (t66 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x358 = 6;
	int32_t x360 = 664;
	int32_t t67 = -50419142;

	t67 = ((x357<=(x358+x359))-x360);

	if (t67 != -664) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int32_t x362 = -1;
	volatile int16_t x363 = INT16_MAX;
	volatile int32_t t68 = 1;

	t68 = ((x361<=(x362+x363))-x364);

	if (t68 != -1808) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = INT32_MAX;
	volatile int32_t x374 = INT32_MIN;
	uint8_t x375 = UINT8_MAX;
	static volatile int8_t x376 = INT8_MIN;
	volatile int32_t t69 = -7811913;

	t69 = ((x373<=(x374+x375))-x376);

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x377 = 368848634LL;
	static int32_t x378 = INT32_MIN;
	uint32_t x380 = 17484U;
	uint32_t t70 = 227U;

	t70 = ((x377<=(x378+x379))-x380);

	if (t70 != 4294949813U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;

	t71 = ((x385<=(x386+x387))-x388);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x389 = -1LL;
	uint32_t x390 = 21U;
	uint16_t x391 = UINT16_MAX;

	t72 = ((x389<=(x390+x391))-x392);

	if (t72 != -21465LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x393 = UINT32_MAX;
	int32_t x394 = -1;
	static uint8_t x396 = UINT8_MAX;

	t73 = ((x393<=(x394+x395))-x396);

	if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x397 = -1;
	volatile uint8_t x398 = 9U;
	static int8_t x399 = -1;
	static uint16_t x400 = 76U;
	volatile int32_t t74 = -29;

	t74 = ((x397<=(x398+x399))-x400);

	if (t74 != -75) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x406 = 1;
	int64_t x407 = 3799794LL;
	volatile int32_t x408 = INT32_MAX;
	volatile int32_t t75 = 1;

	t75 = ((x405<=(x406+x407))-x408);

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x409 = 1;
	static int64_t x410 = 381569033LL;
	int16_t x411 = 244;
	static uint8_t x412 = 1U;

	t76 = ((x409<=(x410+x411))-x412);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x413 = 41734U;
	int16_t x414 = INT16_MIN;
	uint32_t x416 = UINT32_MAX;
	static volatile uint32_t t77 = 430988668U;

	t77 = ((x413<=(x414+x415))-x416);

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = -1;
	int32_t x423 = -1;
	uint32_t t78 = 8605736U;

	t78 = ((x421<=(x422+x423))-x424);

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x426 = -46112576;
	uint64_t x427 = 193475025117496LLU;
	uint32_t t79 = 639U;

	t79 = ((x425<=(x426+x427))-x428);

	if (t79 != 4294943812U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x429 = INT8_MIN;
	uint16_t x430 = 150U;
	static int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t80 = 1;

	t80 = ((x429<=(x430+x431))-x432);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x433 = 27U;
	static uint16_t x435 = 1861U;
	int16_t x436 = INT16_MIN;
	volatile int32_t t81 = 3419787;

	t81 = ((x433<=(x434+x435))-x436);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x441 = -1;
	int16_t x442 = 4253;
	static volatile int32_t x444 = -2497833;

	t82 = ((x441<=(x442+x443))-x444);

	if (t82 != 2497833) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x445 = 106U;
	volatile int8_t x446 = INT8_MIN;
	int64_t x447 = -776436482LL;
	int32_t t83 = -7804581;

	t83 = ((x445<=(x446+x447))-x448);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x449 = INT32_MIN;
	int16_t x450 = -1;
	int64_t x451 = -83175668736LL;
	volatile int32_t t84 = -2130;

	t84 = ((x449<=(x450+x451))-x452);

	if (t84 != 447) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x454 = 9;
	int32_t x455 = -1;
	volatile int8_t x456 = INT8_MIN;
	int32_t t85 = -1;

	t85 = ((x453<=(x454+x455))-x456);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x458 = UINT64_MAX;
	int32_t x459 = -1;
	uint64_t x460 = 161446263766LLU;
	volatile uint64_t t86 = 130701899096LLU;

	t86 = ((x457<=(x458+x459))-x460);

	if (t86 != 18446743912263287851LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x461 = INT8_MIN;
	int8_t x463 = -1;
	uint32_t t87 = 84714U;

	t87 = ((x461<=(x462+x463))-x464);

	if (t87 != 4294875114U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = -14207416;
	int16_t x466 = INT16_MAX;
	volatile uint64_t x467 = 2LLU;
	int8_t x468 = -1;
	volatile int32_t t88 = 1;

	t88 = ((x465<=(x466+x467))-x468);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x469 = 293462144U;
	uint16_t x471 = 21445U;
	uint16_t x472 = 14658U;
	int32_t t89 = -3;

	t89 = ((x469<=(x470+x471))-x472);

	if (t89 != -14658) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x473 = 8529979434330197LL;
	static int64_t x474 = -1LL;
	static uint32_t x475 = 380094277U;
	static uint64_t x476 = UINT64_MAX;
	volatile uint64_t t90 = 4560036829204124LLU;

	t90 = ((x473<=(x474+x475))-x476);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x478 = INT8_MIN;
	volatile int16_t x479 = -1;
	uint8_t x480 = UINT8_MAX;
	int32_t t91 = -35;

	t91 = ((x477<=(x478+x479))-x480);

	if (t91 != -255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x486 = INT8_MAX;
	static int32_t x487 = INT32_MIN;
	int32_t x488 = 24;

	t92 = ((x485<=(x486+x487))-x488);

	if (t92 != -24) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x489 = INT64_MAX;
	int32_t x490 = -116262;
	static uint8_t x491 = UINT8_MAX;
	volatile int32_t t93 = -45765;

	t93 = ((x489<=(x490+x491))-x492);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x497 = 14U;
	int32_t x498 = 37199;
	int64_t x499 = INT64_MIN;
	static int32_t t94 = -2;

	t94 = ((x497<=(x498+x499))-x500);

	if (t94 != 24) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x513 = -1LL;
	uint8_t x515 = UINT8_MAX;
	static uint64_t x516 = 50682LLU;
	volatile uint64_t t95 = 608LLU;

	t95 = ((x513<=(x514+x515))-x516);

	if (t95 != 18446744073709500934LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x517 = -1;
	int16_t x519 = -1;
	static uint16_t x520 = UINT16_MAX;
	volatile int32_t t96 = 106208;

	t96 = ((x517<=(x518+x519))-x520);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x521 = 31LL;
	uint64_t x522 = 2586072577994LLU;
	int16_t x523 = 0;
	int32_t x524 = 1955;
	volatile int32_t t97 = -357361;

	t97 = ((x521<=(x522+x523))-x524);

	if (t97 != -1954) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x525 = 2;
	int16_t x527 = -2401;
	int64_t x528 = INT64_MAX;

	t98 = ((x525<=(x526+x527))-x528);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x529 = 4787;
	int16_t x532 = -1;
	static int32_t t99 = -1;

	t99 = ((x529<=(x530+x531))-x532);

	if (t99 != 2) { NG(); } else { ; }
	
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

