#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
static int16_t x19 = INT16_MIN;
int8_t x26 = -2;
int8_t x27 = INT8_MIN;
uint32_t x28 = 1630560571U;
int32_t x31 = -1;
static int8_t x41 = INT8_MIN;
static int8_t x69 = -1;
int32_t t11 = 32;
static uint64_t x73 = UINT64_MAX;
int16_t x76 = INT16_MIN;
volatile uint64_t t13 = UINT64_MAX;
uint64_t x94 = UINT64_MAX;
int8_t x98 = INT8_MIN;
volatile int16_t x103 = -1828;
uint8_t x115 = UINT8_MAX;
static uint16_t x117 = UINT16_MAX;
uint8_t x123 = 0U;
static int64_t x124 = -96796856219182LL;
int32_t x136 = 261;
static int16_t x141 = -56;
int16_t x143 = -15;
uint16_t x147 = 373U;
static int32_t t24 = -152;
static volatile int64_t x153 = -67997587143323LL;
int8_t x157 = -1;
int64_t t27 = -15428906LL;
uint8_t x184 = 2U;
uint16_t x187 = 17763U;
static int8_t x190 = INT8_MIN;
volatile int64_t t33 = INT64_MAX;
int32_t x193 = INT32_MIN;
volatile int8_t x199 = INT8_MAX;
uint16_t x206 = 55U;
uint16_t x207 = UINT16_MAX;
int16_t x210 = 5;
uint64_t x214 = 496426299380847LLU;
int32_t x215 = 9525;
uint16_t x216 = 0U;
static uint64_t x228 = UINT64_MAX;
uint8_t x234 = 10U;
uint8_t x238 = UINT8_MAX;
uint32_t x239 = 1405U;
volatile int32_t x240 = INT32_MIN;
volatile int8_t x250 = 25;
int8_t x251 = 1;
uint64_t x262 = 35588313LLU;
volatile int8_t x272 = INT8_MIN;
int16_t x274 = INT16_MAX;
static volatile int64_t t49 = 303LL;
static volatile int64_t x277 = INT64_MIN;
uint64_t x279 = 2887381058LLU;
uint64_t x292 = 4294524452199LLU;
static volatile int8_t x295 = -21;
uint32_t x297 = 25073750U;
int8_t x300 = INT8_MIN;
uint32_t t55 = 1015U;
volatile uint32_t t56 = UINT32_MAX;
int16_t x311 = INT16_MIN;
int16_t x312 = INT16_MAX;
volatile int64_t t59 = -1LL;
int32_t x319 = INT32_MIN;
int64_t t60 = 8437620963876821LL;
static int32_t x328 = INT32_MAX;
uint32_t t62 = UINT32_MAX;
int64_t x331 = -664019LL;
int16_t x337 = 0;
int16_t x341 = INT16_MIN;
volatile int16_t x343 = INT16_MIN;
int64_t t68 = -263468530169LL;
volatile uint64_t x357 = 963272376LLU;
int32_t x360 = -18;
static volatile int8_t x362 = INT8_MAX;
static int16_t x366 = INT16_MIN;
volatile uint64_t x367 = UINT64_MAX;
uint64_t t72 = 2LLU;
int16_t x369 = INT16_MAX;
int8_t x370 = INT8_MIN;
int8_t x388 = 0;
volatile uint64_t t76 = 95771154258363446LLU;
static uint32_t x391 = UINT32_MAX;
int8_t x394 = INT8_MIN;
uint32_t x403 = UINT32_MAX;
volatile uint64_t x404 = UINT64_MAX;
uint8_t x437 = 0U;
volatile int8_t x441 = INT8_MIN;
static uint64_t x443 = 109295733690412582LLU;
volatile int8_t x444 = INT8_MAX;
int8_t x445 = -1;
int64_t x455 = -1LL;
volatile uint64_t t90 = 35762LLU;
int64_t x462 = 5497587LL;
volatile int8_t x465 = INT8_MIN;
int64_t x467 = -1LL;
static int32_t x477 = INT32_MAX;
volatile uint64_t t94 = 6994277451LLU;
int16_t x489 = -7;
uint16_t x494 = 5165U;


void f0(void) {
	int8_t x2 = INT8_MAX;
	int64_t x3 = -8908424LL;
	int16_t x4 = -1;
	int64_t t0 = 7048337294018819LL;

	t0 = ((x1-(x2+x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	static int32_t x6 = 28;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = 793;
	uint64_t t1 = 40LLU;

	t1 = ((x5-(x6+x7))|x8);

	if (t1 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = UINT32_MAX;
	volatile int8_t x11 = 44;
	int16_t x12 = 937;
	static uint32_t t2 = 9U;

	t2 = ((x9-(x10+x11))|x12);

	if (t2 != 4294967293U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = INT64_MIN;
	static int8_t x18 = -2;
	volatile int8_t x20 = INT8_MAX;
	int64_t t3 = 3739493192263LL;

	t3 = ((x17-(x18+x19))|x20);

	if (t3 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 24760LL;
	volatile int64_t t4 = -413605041443169441LL;

	t4 = ((x25-(x26+x27))|x28);

	if (t4 != 1630560571LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -12659854443LL;
	volatile uint64_t x30 = 90938999251836LLU;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t5 = 33521LLU;

	t5 = ((x29-(x30+x31))|x32);

	if (t5 != 18446744072277905434LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 759;
	static int32_t x34 = INT32_MAX;
	int32_t x35 = -12;
	int64_t x36 = -3744944520819435LL;
	volatile int64_t t6 = -2425573057078786LL;

	t6 = ((x33-(x34+x35))|x36);

	if (t6 != -1474162923LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x42 = INT16_MIN;
	static uint64_t x43 = 10913LLU;
	static int64_t x44 = -1LL;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x41-(x42+x43))|x44);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x49 = INT32_MIN;
	uint8_t x50 = 1U;
	int64_t x51 = INT64_MIN;
	volatile uint32_t x52 = 13U;
	int64_t t8 = -296703112263295LL;

	t8 = ((x49-(x50+x51))|x52);

	if (t8 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	volatile uint64_t x54 = 106LLU;
	int8_t x55 = INT8_MIN;
	static volatile int64_t x56 = INT64_MIN;
	static uint64_t t9 = 52322125295729052LLU;

	t9 = ((x53-(x54+x55))|x56);

	if (t9 != 18446744071562067990LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = 15;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = -1LL;
	volatile int32_t x64 = 7845100;
	uint64_t t10 = 27924989220LLU;

	t10 = ((x61-(x62+x63))|x64);

	if (t10 != 7845117LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x70 = -1;
	volatile uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MIN;

	t11 = ((x69-(x70+x71))|x72);

	if (t11 != -255) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	uint64_t t12 = 1LLU;

	t12 = ((x73-(x74+x75))|x76);

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x89 = 1U;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	int32_t x92 = -1;

	t13 = ((x89-(x90+x91))|x92);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x93 = INT32_MIN;
	uint8_t x95 = 45U;
	int16_t x96 = 3;
	uint64_t t14 = 186218050LLU;

	t14 = ((x93-(x94+x95))|x96);

	if (t14 != 18446744071562067927LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x97 = INT32_MIN;
	int32_t x99 = -8;
	volatile uint16_t x100 = 0U;
	static int32_t t15 = 365;

	t15 = ((x97-(x98+x99))|x100);

	if (t15 != -2147483512) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = -1154548;
	uint32_t x102 = UINT32_MAX;
	static volatile int16_t x104 = INT16_MAX;
	volatile uint32_t t16 = 91U;

	t16 = ((x101-(x102+x103))|x104);

	if (t16 != 4293820415U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = 1423;
	uint8_t x114 = 3U;
	int16_t x116 = -1;
	volatile int32_t t17 = -51755;

	t17 = ((x113-(x114+x115))|x116);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x118 = -1;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = -1;
	int32_t t18 = 967593534;

	t18 = ((x117-(x118+x119))|x120);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x121 = 22037U;
	int8_t x122 = INT8_MIN;
	int64_t t19 = -60613LL;

	t19 = ((x121-(x122+x123))|x124);

	if (t19 != -96796856197161LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x133 = 0U;
	uint16_t x134 = 3U;
	int16_t x135 = -1;
	int32_t t20 = -81519;

	t20 = ((x133-(x134+x135))|x136);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x137 = INT16_MIN;
	static volatile int8_t x138 = INT8_MIN;
	static int64_t x139 = -269472343466846343LL;
	volatile int64_t x140 = INT64_MAX;
	int64_t t21 = INT64_MAX;

	t21 = ((x137-(x138+x139))|x140);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x142 = 1U;
	int8_t x144 = INT8_MAX;
	int32_t t22 = -21195554;

	t22 = ((x141-(x142+x143))|x144);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x145 = UINT8_MAX;
	int32_t x146 = INT32_MIN;
	int32_t x148 = -5864;
	int32_t t23 = 433385;

	t23 = ((x145-(x146+x147))|x148);

	if (t23 != -102) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x149 = 58U;
	int32_t x150 = -201361;
	int8_t x151 = 5;
	uint16_t x152 = UINT16_MAX;

	t24 = ((x149-(x150+x151))|x152);

	if (t24 != 262143) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x154 = INT16_MAX;
	int32_t x155 = -1;
	int32_t x156 = 2607365;
	int64_t t25 = 7998198178374962LL;

	t25 = ((x153-(x154+x155))|x156);

	if (t25 != -67997586698905LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x158 = INT16_MIN;
	static int16_t x159 = -1;
	static uint64_t x160 = UINT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = ((x157-(x158+x159))|x160);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = -1;
	int8_t x162 = -1;
	int64_t x163 = -12141330501LL;
	uint8_t x164 = UINT8_MAX;

	t27 = ((x161-(x162+x163))|x164);

	if (t27 != 12141330687LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = -2;
	int16_t x171 = 246;
	int32_t x172 = -676937;
	volatile int32_t t28 = -13759039;

	t28 = ((x169-(x170+x171))|x172);

	if (t28 != -655425) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x173 = 1U;
	int8_t x174 = -20;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MIN;
	int64_t t29 = -997020LL;

	t29 = ((x173-(x174+x175))|x176);

	if (t29 != -106LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x177 = 12200640U;
	uint64_t x178 = 103LLU;
	int8_t x179 = INT8_MIN;
	static int32_t x180 = INT32_MIN;
	volatile uint64_t t30 = 643LLU;

	t30 = ((x177-(x178+x179))|x180);

	if (t30 != 18446744071574268633LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x181 = UINT16_MAX;
	static int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	static volatile int32_t t31 = -3;

	t31 = ((x181-(x182+x183))|x184);

	if (t31 != 98431) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x185 = 39855LLU;
	static int64_t x186 = INT64_MIN;
	uint32_t x188 = 4031U;
	volatile uint64_t t32 = 93280106543539210LLU;

	t32 = ((x185-(x186+x187))|x188);

	if (t32 != 9223372036854800383LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x189 = INT32_MIN;
	uint32_t x191 = 778U;
	int64_t x192 = INT64_MAX;

	t33 = ((x189-(x190+x191))|x192);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x194 = -1;
	int64_t x195 = -36052454558258LL;
	uint8_t x196 = 21U;
	volatile int64_t t34 = -30345545226LL;

	t34 = ((x193-(x194+x195))|x196);

	if (t34 != 36050307074615LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x197 = 918LLU;
	int64_t x198 = INT64_MIN;
	static volatile int64_t x200 = -1LL;
	static uint64_t t35 = UINT64_MAX;

	t35 = ((x197-(x198+x199))|x200);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x205 = 31U;
	int64_t x208 = INT64_MIN;
	volatile int64_t t36 = 110535282775661LL;

	t36 = ((x205-(x206+x207))|x208);

	if (t36 != -65559LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x209 = INT32_MIN;
	volatile uint32_t x211 = 2U;
	int32_t x212 = INT32_MIN;
	uint32_t t37 = 1U;

	t37 = ((x209-(x210+x211))|x212);

	if (t37 != 4294967289U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = 3908;
	uint64_t t38 = 9LLU;

	t38 = ((x213-(x214+x215))|x216);

	if (t38 != 18446247647410165152LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = -1;
	int8_t x227 = INT8_MAX;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x225-(x226+x227))|x228);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x233 = 0;
	uint32_t x235 = 164026U;
	int16_t x236 = 0;
	uint32_t t40 = 1020916U;

	t40 = ((x233-(x234+x235))|x236);

	if (t40 != 4294803260U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = INT32_MIN;
	static volatile uint32_t t41 = 35817735U;

	t41 = ((x237-(x238+x239))|x240);

	if (t41 != 4294965636U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x241 = 29152617177LLU;
	uint64_t x242 = 2305LLU;
	static int32_t x243 = INT32_MAX;
	uint32_t x244 = 498751549U;
	uint64_t t42 = 39LLU;

	t42 = ((x241-(x242+x243))|x244);

	if (t42 != 27342395901LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 10574LLU;
	int8_t x248 = INT8_MIN;
	uint64_t t43 = 94609792065830073LLU;

	t43 = ((x245-(x246+x247))|x248);

	if (t43 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x249 = INT64_MAX;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t44 = 1LL;

	t44 = ((x249-(x250+x251))|x252);

	if (t44 != -27LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x257 = -1;
	uint64_t x258 = 3788598067260448280LLU;
	int64_t x259 = 7LL;
	int32_t x260 = INT32_MIN;
	uint64_t t45 = 161849637LLU;

	t45 = ((x257-(x258+x259))|x260);

	if (t45 != 18446744073511739872LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x261 = 49U;
	int16_t x263 = -1;
	static int8_t x264 = INT8_MIN;
	volatile uint64_t t46 = 345278075141340LLU;

	t46 = ((x261-(x262+x263))|x264);

	if (t46 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x265 = 952893U;
	static volatile int32_t x266 = INT32_MIN;
	volatile uint16_t x267 = 32351U;
	volatile uint32_t x268 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = ((x265-(x266+x267))|x268);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x269 = INT16_MIN;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = -1;
	static uint64_t t48 = 1487386621312LLU;

	t48 = ((x269-(x270+x271))|x272);

	if (t48 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x273 = -51;
	int64_t x275 = 51790788697007454LL;
	uint32_t x276 = UINT32_MAX;

	t49 = ((x273-(x274+x275))|x276);

	if (t49 != -51790785829404673LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x278 = UINT32_MAX;
	static volatile int16_t x280 = -6;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = ((x277-(x278+x279))|x280);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x281 = UINT16_MAX;
	static int8_t x282 = 0;
	uint16_t x283 = 911U;
	int64_t x284 = INT64_MIN;
	volatile int64_t t51 = 6722LL;

	t51 = ((x281-(x282+x283))|x284);

	if (t51 != -9223372036854711184LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x285 = 10037U;
	int8_t x286 = -9;
	uint16_t x287 = 8U;
	volatile uint32_t x288 = 42673U;
	uint32_t t52 = 8U;

	t52 = ((x285-(x286+x287))|x288);

	if (t52 != 42935U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -3;
	static volatile int8_t x291 = -1;
	uint64_t t53 = 27877342066803204LLU;

	t53 = ((x289-(x290+x291))|x292);

	if (t53 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x293 = INT8_MIN;
	uint32_t x294 = 1U;
	int32_t x296 = -1;
	static volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x293-(x294+x295))|x296);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x298 = INT16_MAX;
	volatile uint16_t x299 = 18U;

	t55 = ((x297-(x298+x299))|x300);

	if (t55 != 4294967237U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x301 = -2839;
	uint32_t x302 = 13108209U;
	int8_t x303 = -6;
	int8_t x304 = -3;

	t56 = ((x301-(x302+x303))|x304);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x305 = 4U;
	int8_t x306 = INT8_MIN;
	volatile int8_t x307 = -1;
	int32_t x308 = 27;
	volatile int32_t t57 = 79820419;

	t57 = ((x305-(x306+x307))|x308);

	if (t57 != 159) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x309 = UINT32_MAX;
	int8_t x310 = -34;
	volatile uint32_t t58 = 3877103U;

	t58 = ((x309-(x310+x311))|x312);

	if (t58 != 65535U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x313 = UINT16_MAX;
	volatile int64_t x314 = -277621829LL;
	int32_t x315 = -42;
	uint8_t x316 = UINT8_MAX;

	t59 = ((x313-(x314+x315))|x316);

	if (t59 != 277687551LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = 22817634LL;
	int64_t x318 = 57266533878LL;
	uint8_t x320 = 3U;

	t60 = ((x317-(x318+x319))|x320);

	if (t60 != -55096232593LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x321 = -1LL;
	volatile int64_t x322 = INT64_MIN;
	int8_t x323 = 1;
	int32_t x324 = -1;
	volatile int64_t t61 = -896LL;

	t61 = ((x321-(x322+x323))|x324);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = -1;
	static uint32_t x326 = 2046049438U;
	int8_t x327 = 3;

	t62 = ((x325-(x326+x327))|x328);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x329 = 2177U;
	volatile int16_t x330 = INT16_MIN;
	volatile uint8_t x332 = 24U;
	int64_t t63 = 14LL;

	t63 = ((x329-(x330+x331))|x332);

	if (t63 != 698972LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x333 = 515810312LLU;
	uint8_t x334 = 74U;
	static int16_t x335 = -1;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t64 = 61LLU;

	t64 = ((x333-(x334+x335))|x336);

	if (t64 != 515810303LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x338 = 4232LLU;
	int64_t x339 = INT64_MAX;
	uint32_t x340 = 1223253902U;
	volatile uint64_t t65 = 213808258252726444LLU;

	t65 = ((x337-(x338+x339))|x340);

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x342 = -6;
	int16_t x344 = -4917;
	volatile int32_t t66 = 140925371;

	t66 = ((x341-(x342+x343))|x344);

	if (t66 != -4913) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x345 = UINT64_MAX;
	static uint16_t x346 = UINT16_MAX;
	uint8_t x347 = 113U;
	uint16_t x348 = 12130U;
	volatile uint64_t t67 = 1644999938284LLU;

	t67 = ((x345-(x346+x347))|x348);

	if (t67 != 18446744073709486063LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x349 = INT8_MAX;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MIN;

	t68 = ((x349-(x350+x351))|x352);

	if (t68 != -65408LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = -1;
	static int16_t x354 = -1;
	int8_t x355 = INT8_MAX;
	int16_t x356 = -1;
	static int32_t t69 = 450;

	t69 = ((x353-(x354+x355))|x356);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = -1;
	volatile uint64_t t70 = 1LLU;

	t70 = ((x357-(x358+x359))|x360);

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x361 = -1LL;
	uint8_t x363 = UINT8_MAX;
	volatile int16_t x364 = -3;
	volatile int64_t t71 = 3LL;

	t71 = ((x361-(x362+x363))|x364);

	if (t71 != -3LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x365 = -1;
	volatile int8_t x368 = 8;

	t72 = ((x365-(x366+x367))|x368);

	if (t72 != 32776LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	static volatile int32_t t73 = 1444;

	t73 = ((x369-(x370+x371))|x372);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x377 = -1115;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x379 = 101U;
	uint64_t x380 = 15826987LLU;
	static volatile uint64_t t74 = 0LLU;

	t74 = ((x377-(x378+x379))|x380);

	if (t74 != 18446744073709550571LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = INT8_MIN;
	volatile uint64_t x382 = 1648386LLU;
	static uint16_t x383 = 11730U;
	uint16_t x384 = 147U;
	static volatile uint64_t t75 = 41005229816LLU;

	t75 = ((x381-(x382+x383))|x384);

	if (t75 != 18446744073707891391LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x385 = -1;
	uint16_t x386 = 2512U;
	uint64_t x387 = UINT64_MAX;

	t76 = ((x385-(x386+x387))|x388);

	if (t76 != 18446744073709549104LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x389 = -1;
	static volatile uint64_t x390 = UINT64_MAX;
	uint8_t x392 = UINT8_MAX;
	uint64_t t77 = 92857723516LLU;

	t77 = ((x389-(x390+x391))|x392);

	if (t77 != 18446744069414584575LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x393 = -61LL;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	volatile int64_t t78 = -3062403022LL;

	t78 = ((x393-(x394+x395))|x396);

	if (t78 != -61LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x397 = INT16_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MIN;
	static int64_t x400 = INT64_MAX;
	uint64_t t79 = 13115LLU;

	t79 = ((x397-(x398+x399))|x400);

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x401 = UINT32_MAX;
	uint8_t x402 = 0U;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x401-(x402+x403))|x404);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x405 = 12;
	uint32_t x406 = 1U;
	static int32_t x407 = -14333;
	int8_t x408 = 6;
	volatile uint32_t t81 = 1520U;

	t81 = ((x405-(x406+x407))|x408);

	if (t81 != 14350U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x417 = 242990U;
	int32_t x418 = -83;
	volatile int8_t x419 = INT8_MAX;
	volatile int32_t x420 = INT32_MIN;
	volatile uint32_t t82 = 26030U;

	t82 = ((x417-(x418+x419))|x420);

	if (t82 != 2147726594U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x425 = 26530LLU;
	uint32_t x426 = 77U;
	uint32_t x427 = 14U;
	int32_t x428 = 57735869;
	volatile uint64_t t83 = 3LLU;

	t83 = ((x425-(x426+x427))|x428);

	if (t83 != 57737215LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x433 = 17U;
	int32_t x434 = -1;
	uint8_t x435 = 52U;
	int32_t x436 = -1;
	int32_t t84 = -15;

	t84 = ((x433-(x434+x435))|x436);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x438 = 3499112340LLU;
	static int32_t x439 = -1;
	static uint16_t x440 = 898U;
	volatile uint64_t t85 = 1297843248894124LLU;

	t85 = ((x437-(x438+x439))|x440);

	if (t85 != 18446744070210440175LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x442 = INT32_MAX;
	static uint64_t t86 = 697905138LLU;

	t86 = ((x441-(x442+x443))|x444);

	if (t86 != 18337448337871655295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = -1;
	static volatile uint8_t x448 = 27U;
	static int32_t t87 = -501761;

	t87 = ((x445-(x446+x447))|x448);

	if (t87 != -229) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x449 = -1;
	int32_t x450 = 2004;
	int64_t x451 = 1847LL;
	uint16_t x452 = 27U;
	int64_t t88 = 50518420649LL;

	t88 = ((x449-(x450+x451))|x452);

	if (t88 != -3841LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x453 = INT32_MIN;
	static int8_t x454 = INT8_MIN;
	volatile int32_t x456 = INT32_MAX;
	volatile int64_t t89 = 2252LL;

	t89 = ((x453-(x454+x455))|x456);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = INT16_MAX;
	int32_t x458 = INT32_MAX;
	uint64_t x459 = 340379366064780LLU;
	int64_t x460 = INT64_MIN;

	t90 = ((x457-(x458+x459))|x460);

	if (t90 != 18446403692196035956LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x461 = 3986U;
	uint8_t x463 = 50U;
	static uint16_t x464 = 29733U;
	int64_t t91 = 12943LL;

	t91 = ((x461-(x462+x463))|x464);

	if (t91 != -5473171LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x466 = INT16_MAX;
	int16_t x468 = -5089;
	volatile int64_t t92 = -5807192761788LL;

	t92 = ((x465-(x466+x467))|x468);

	if (t92 != -97LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x469 = 56797081LL;
	static int8_t x470 = 0;
	int64_t x471 = 1980997935775LL;
	uint8_t x472 = 1U;
	volatile int64_t t93 = -110LL;

	t93 = ((x469-(x470+x471))|x472);

	if (t93 != -1980941138693LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x478 = -8;
	uint64_t x479 = 8001848842773LLU;
	int16_t x480 = INT16_MIN;

	t94 = ((x477-(x478+x479))|x480);

	if (t94 != 18446744073709544946LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x485 = -7;
	static uint32_t x486 = 619841750U;
	int32_t x487 = -1;
	int8_t x488 = INT8_MIN;
	uint32_t t95 = 26706U;

	t95 = ((x485-(x486+x487))|x488);

	if (t95 != 4294967204U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x490 = INT8_MIN;
	static uint8_t x491 = 39U;
	volatile int32_t x492 = -1;
	int32_t t96 = -25456;

	t96 = ((x489-(x490+x491))|x492);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x493 = INT8_MIN;
	int32_t x495 = -1;
	int32_t x496 = INT32_MIN;
	volatile int32_t t97 = -315980247;

	t97 = ((x493-(x494+x495))|x496);

	if (t97 != -5292) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x497 = 4U;
	int32_t x498 = INT32_MIN;
	uint16_t x499 = UINT16_MAX;
	volatile uint16_t x500 = 351U;
	volatile int32_t t98 = 13317;

	t98 = ((x497-(x498+x499))|x500);

	if (t98 != 2147418463) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x501 = 98869050;
	uint32_t x502 = 93U;
	int16_t x503 = INT16_MIN;
	static int32_t x504 = 6035028;
	volatile uint32_t t99 = 5U;

	t99 = ((x501-(x502+x503))|x504);

	if (t99 != 100474589U) { NG(); } else { ; }
	
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

