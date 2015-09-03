#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = -48;
int32_t x6 = -243260;
volatile int32_t t1 = 29138575;
static int32_t x16 = INT32_MIN;
int16_t x18 = INT16_MIN;
int16_t x25 = INT16_MIN;
volatile int64_t t7 = -1011424719935LL;
volatile uint32_t x41 = 1418963U;
volatile uint64_t x46 = 2929358506229468LLU;
uint32_t x58 = UINT32_MAX;
int64_t x59 = INT64_MAX;
int8_t x69 = INT8_MAX;
uint32_t t12 = 10035U;
int32_t t13 = 107;
uint32_t x80 = 210752U;
uint8_t x92 = UINT8_MAX;
uint8_t x98 = 7U;
int64_t x100 = -2844174384LL;
static volatile int64_t t19 = -116185554LL;
int8_t x108 = 50;
uint32_t t20 = 4373779U;
int16_t x129 = -46;
uint8_t x134 = UINT8_MAX;
int64_t x136 = INT64_MAX;
volatile int64_t x151 = 120LL;
uint64_t x158 = 0LLU;
int8_t x159 = INT8_MAX;
int8_t x166 = INT8_MIN;
int16_t x167 = -3447;
static volatile int8_t x169 = INT8_MAX;
static volatile uint8_t x178 = 5U;
static int64_t x181 = INT64_MIN;
uint64_t x182 = 247130537393616643LLU;
static volatile uint64_t t35 = 46301622526131LLU;
volatile int64_t x188 = INT64_MIN;
uint16_t x195 = 69U;
uint64_t x196 = 5500LLU;
uint32_t x198 = 93190336U;
uint16_t x202 = UINT16_MAX;
volatile uint16_t x214 = 2U;
int32_t x226 = 101;
uint8_t x230 = 1U;
static uint64_t x232 = 28927LLU;
int32_t x238 = -1;
uint32_t x245 = UINT32_MAX;
int64_t x246 = INT64_MIN;
int64_t x248 = INT64_MAX;
volatile int32_t t50 = -571876;
volatile uint64_t t52 = 1357407724581543LLU;
int8_t x271 = -4;
static int64_t x284 = INT64_MAX;
volatile int32_t t55 = 261555705;
int64_t x291 = 712499530949067LL;
uint32_t x292 = UINT32_MAX;
uint64_t t57 = 5LLU;
int32_t x298 = -3;
int64_t x302 = -7LL;
uint16_t x304 = 216U;
int32_t x309 = INT32_MAX;
uint8_t x322 = 47U;
int32_t x323 = -219;
volatile int8_t x333 = 1;
uint64_t x337 = UINT64_MAX;
uint16_t x345 = 928U;
volatile int16_t x348 = INT16_MIN;
int16_t x358 = -1;
int64_t x360 = -1LL;
uint64_t t72 = 13951920150335975LLU;
static uint16_t x362 = 3981U;
static int64_t x364 = INT64_MIN;
volatile int64_t t73 = -1454902606849LL;
static int16_t x375 = INT16_MIN;
static volatile uint64_t x386 = 212995976625LLU;
int16_t x411 = INT16_MAX;
uint8_t x426 = 1U;
static volatile int64_t t83 = -5067742179630185LL;
int32_t x434 = 340628183;
int8_t x438 = -1;
volatile uint8_t x440 = 2U;
static volatile uint8_t x441 = 0U;
volatile int32_t t86 = -3443;
int8_t x448 = INT8_MIN;
static volatile uint64_t t88 = 24355LLU;
volatile int32_t t90 = -178491290;
uint32_t x477 = 2061322715U;
int8_t x478 = INT8_MIN;
int64_t t92 = 108680087270LL;
int32_t x489 = -24638128;
uint64_t x490 = 28232214791LLU;
uint16_t x500 = 3U;
volatile int32_t t95 = -7;
static int32_t t99 = -3486;


void f0(void) {
	volatile int64_t x1 = -1LL;
	static volatile int8_t x2 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 43LLU;

	t0 = (((x1+x2)-x3)%x4);

	if (t0 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MIN;

	t1 = (((x5+x6)-x7)%x8);

	if (t1 != 2147273155) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 3U;
	int8_t x10 = INT8_MIN;
	int32_t x11 = -96;
	static uint64_t x12 = 2597962287LLU;
	uint64_t t2 = 3980948641LLU;

	t2 = (((x9+x10)-x11)%x12);

	if (t2 != 913006715LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	volatile int16_t x14 = -1;
	int16_t x15 = -2;
	volatile int32_t t3 = 86;

	t3 = (((x13+x14)-x15)%x16);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 9U;
	uint32_t x19 = 230367097U;
	uint64_t x20 = 241465539030LLU;
	static volatile uint64_t t4 = 31165259162LLU;

	t4 = (((x17+x18)-x19)%x20);

	if (t4 != 4064567440LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 0U;
	int8_t x22 = INT8_MAX;
	uint64_t x23 = 206831561LLU;
	int64_t x24 = INT64_MIN;
	static uint64_t t5 = 117392LLU;

	t5 = (((x21+x22)-x23)%x24);

	if (t5 != 9223372036647944374LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 1;
	int64_t x27 = -1LL;
	volatile int32_t x28 = INT32_MAX;
	int64_t t6 = 23936251583LL;

	t6 = (((x25+x26)-x27)%x28);

	if (t6 != -32766LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = -94710LL;
	uint8_t x34 = 71U;
	int8_t x35 = -1;
	static int16_t x36 = INT16_MAX;

	t7 = (((x33+x34)-x35)%x36);

	if (t7 != -29104LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x42 = -1LL;
	volatile int16_t x43 = INT16_MAX;
	volatile int32_t x44 = -14118969;
	int64_t t8 = -14123514471869LL;

	t8 = (((x41+x42)-x43)%x44);

	if (t8 != 1386195LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MAX;
	int8_t x47 = 11;
	volatile int32_t x48 = INT32_MAX;
	volatile uint64_t t9 = 14903260831449LLU;

	t9 = (((x45+x46)-x47)%x48);

	if (t9 != 1833160648LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	static uint32_t x60 = 1U;
	uint64_t t10 = 4805LLU;

	t10 = (((x57+x58)-x59)%x60);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	uint32_t x66 = 23U;
	int16_t x67 = INT16_MAX;
	static int16_t x68 = INT16_MIN;
	uint32_t t11 = 64U;

	t11 = (((x65+x66)-x67)%x68);

	if (t11 != 4294901784U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x70 = INT32_MIN;
	static uint32_t x71 = UINT32_MAX;
	int16_t x72 = -1;

	t12 = (((x69+x70)-x71)%x72);

	if (t12 != 2147483776U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MIN;
	int32_t x75 = 11726;
	static volatile int8_t x76 = 61;

	t13 = (((x73+x74)-x75)%x76);

	if (t13 != 57) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 1797U;
	volatile int32_t x78 = 733106643;
	int32_t x79 = INT32_MAX;
	uint32_t t14 = 48309763U;

	t14 = (((x77+x78)-x79)%x80);

	if (t14 != 33753U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x82 = 6U;
	int64_t x83 = 1428363325482783LL;
	volatile int64_t x84 = 15863090994366626LL;
	volatile int64_t t15 = 0LL;

	t15 = (((x81+x82)-x83)%x84);

	if (t15 != -1428363325417242LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x85 = -909;
	int32_t x86 = INT32_MAX;
	uint32_t x87 = 2131320U;
	int8_t x88 = -1;
	uint32_t t16 = 570205U;

	t16 = (((x85+x86)-x87)%x88);

	if (t16 != 2145351418U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = -1LL;
	static int8_t x91 = INT8_MIN;
	int64_t t17 = -1946540713947LL;

	t17 = (((x89+x90)-x91)%x92);

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x97 = UINT8_MAX;
	static volatile int16_t x99 = INT16_MIN;
	static volatile int64_t t18 = -100864964766153651LL;

	t18 = (((x97+x98)-x99)%x100);

	if (t18 != 33030LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 14407U;
	int64_t x102 = -4290931002568455LL;
	int16_t x103 = INT16_MAX;
	int64_t x104 = 10683572892124LL;

	t19 = (((x101+x102)-x103)%x104);

	if (t19 != -6818272845091LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = 9U;
	uint32_t x106 = 251U;
	uint16_t x107 = 22U;

	t20 = (((x105+x106)-x107)%x108);

	if (t20 != 38U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x110 = UINT64_MAX;
	static int16_t x111 = INT16_MAX;
	int64_t x112 = -1LL;
	volatile uint64_t t21 = 12631948686312434LLU;

	t21 = (((x109+x110)-x111)%x112);

	if (t21 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = -159544610874LL;
	volatile int16_t x114 = INT16_MAX;
	static int8_t x115 = 56;
	int32_t x116 = -113319;
	volatile int64_t t22 = -247723466105LL;

	t22 = (((x113+x114)-x115)%x116);

	if (t22 != -38407LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = UINT16_MAX;
	static uint16_t x126 = 2U;
	uint64_t x127 = 8091655305986881759LLU;
	static volatile int16_t x128 = 12;
	volatile uint64_t t23 = 758209LLU;

	t23 = (((x125+x126)-x127)%x128);

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x130 = UINT8_MAX;
	int64_t x131 = INT64_MAX;
	int16_t x132 = INT16_MAX;
	volatile int64_t t24 = -80181899LL;

	t24 = (((x129+x130)-x131)%x132);

	if (t24 != -32565LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 11586626LLU;
	volatile int64_t x135 = INT64_MAX;
	volatile uint64_t t25 = 2927058LLU;

	t25 = (((x133+x134)-x135)%x136);

	if (t25 != 11586883LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x137 = 50944507U;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 18U;
	volatile uint64_t t26 = 249440810784LLU;

	t26 = (((x137+x138)-x139)%x140);

	if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = INT8_MIN;
	static int32_t x150 = -9667;
	volatile int32_t x152 = 8525916;
	int64_t t27 = 73374527292978543LL;

	t27 = (((x149+x150)-x151)%x152);

	if (t27 != -9915LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x153 = INT8_MIN;
	static volatile uint32_t x154 = UINT32_MAX;
	int8_t x155 = 2;
	int16_t x156 = INT16_MAX;
	uint32_t t28 = 96834U;

	t28 = (((x153+x154)-x155)%x156);

	if (t28 != 32640U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = -1;
	uint32_t x160 = UINT32_MAX;
	uint64_t t29 = 480LLU;

	t29 = (((x157+x158)-x159)%x160);

	if (t29 != 4294967168LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x161 = UINT64_MAX;
	volatile int32_t x162 = INT32_MIN;
	static uint64_t x163 = UINT64_MAX;
	volatile int32_t x164 = INT32_MAX;
	static volatile uint64_t t30 = 3821337998LLU;

	t30 = (((x161+x162)-x163)%x164);

	if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MAX;
	uint16_t x168 = UINT16_MAX;
	int32_t t31 = -6611;

	t31 = (((x165+x166)-x167)%x168);

	if (t31 != 3446) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x170 = -1;
	int32_t x171 = 84921409;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t32 = -4167503;

	t32 = (((x169+x170)-x171)%x172);

	if (t32 != -163) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int64_t x176 = 546785797504666LL;
	volatile int64_t t33 = 947714381960511LL;

	t33 = (((x173+x174)-x175)%x176);

	if (t33 != -2147483393LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x177 = 6131U;
	int64_t x179 = 2962LL;
	uint16_t x180 = 19436U;
	volatile int64_t t34 = -3LL;

	t34 = (((x177+x178)-x179)%x180);

	if (t34 != 3174LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x183 = 30U;
	int16_t x184 = 130;

	t35 = (((x181+x182)-x183)%x184);

	if (t35 != 121LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MIN;
	static uint64_t x186 = UINT64_MAX;
	uint8_t x187 = 1U;
	uint64_t t36 = 7424193079785LLU;

	t36 = (((x185+x186)-x187)%x188);

	if (t36 != 9223372034707292158LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = -8019362720611LL;
	int8_t x190 = INT8_MIN;
	int8_t x191 = 24;
	uint16_t x192 = 150U;
	static volatile int64_t t37 = 208146283LL;

	t37 = (((x189+x190)-x191)%x192);

	if (t37 != -63LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x193 = 246888375U;
	static int32_t x194 = -19;
	volatile uint64_t t38 = 22112778LLU;

	t38 = (((x193+x194)-x195)%x196);

	if (t38 != 4287LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x197 = 0U;
	static int32_t x199 = INT32_MIN;
	volatile uint8_t x200 = UINT8_MAX;
	uint32_t t39 = 1U;

	t39 = (((x197+x198)-x199)%x200);

	if (t39 != 204U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = -5;
	int16_t x203 = INT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t40 = 6240;

	t40 = (((x201+x202)-x203)%x204);

	if (t40 != 32763) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = -291;
	volatile uint16_t x206 = 3250U;
	int16_t x207 = -3303;
	int64_t x208 = INT64_MAX;
	static int64_t t41 = 871817073584463682LL;

	t41 = (((x205+x206)-x207)%x208);

	if (t41 != 6262LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x213 = 36950LL;
	int8_t x215 = -1;
	int32_t x216 = -2528120;
	int64_t t42 = 1LL;

	t42 = (((x213+x214)-x215)%x216);

	if (t42 != 36953LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x217 = 3U;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	volatile int8_t x220 = INT8_MIN;
	uint32_t t43 = 119863U;

	t43 = (((x217+x218)-x219)%x220);

	if (t43 != 4U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x221 = UINT8_MAX;
	static uint8_t x222 = 9U;
	volatile uint16_t x223 = 1053U;
	static int32_t x224 = -3;
	volatile int32_t t44 = -1868;

	t44 = (((x221+x222)-x223)%x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x225 = 10;
	volatile int16_t x227 = -2;
	int8_t x228 = -1;
	int32_t t45 = 5012;

	t45 = (((x225+x226)-x227)%x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x229 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	static volatile uint64_t t46 = 26483873829LLU;

	t46 = (((x229+x230)-x231)%x232);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MAX;
	int64_t x239 = -1LL;
	int32_t x240 = 1777;
	static volatile int64_t t47 = -4915LL;

	t47 = (((x237+x238)-x239)%x240);

	if (t47 != 1317LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int32_t x242 = -1;
	static int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	static volatile uint32_t t48 = 23894U;

	t48 = (((x241+x242)-x243)%x244);

	if (t48 != 126U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x247 = UINT32_MAX;
	static int64_t t49 = 534950906284930LL;

	t49 = (((x245+x246)-x247)%x248);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x249 = 18U;
	int16_t x250 = 18;
	int16_t x251 = INT16_MAX;
	static int8_t x252 = INT8_MAX;

	t50 = (((x249+x250)-x251)%x252);

	if (t50 != -92) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x257 = 13;
	int32_t x258 = 108246;
	volatile uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 1475947638U;
	uint32_t t51 = 168158U;

	t51 = (((x257+x258)-x259)%x260);

	if (t51 != 108004U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = 47;
	static volatile uint8_t x262 = UINT8_MAX;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;

	t52 = (((x261+x262)-x263)%x264);

	if (t52 != 303LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = 0;
	int8_t x270 = INT8_MIN;
	int16_t x272 = -1;
	int32_t t53 = -14829;

	t53 = (((x269+x270)-x271)%x272);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = 28;
	uint64_t x283 = UINT64_MAX;
	uint64_t t54 = 227172670238109LLU;

	t54 = (((x281+x282)-x283)%x284);

	if (t54 != 9223372034707292190LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = -1;
	int16_t x286 = INT16_MAX;
	static uint8_t x287 = 0U;
	volatile int8_t x288 = INT8_MIN;

	t55 = (((x285+x286)-x287)%x288);

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	int64_t t56 = 87429699798255LL;

	t56 = (((x289+x290)-x291)%x292);

	if (t56 != -3111414478LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x293 = -1;
	static uint64_t x294 = UINT64_MAX;
	int64_t x295 = -498428740547203LL;
	static volatile uint16_t x296 = 3U;

	t57 = (((x293+x294)-x295)%x296);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x299 = INT64_MIN;
	static uint8_t x300 = 30U;
	volatile uint64_t t58 = 331498766468375881LLU;

	t58 = (((x297+x298)-x299)%x300);

	if (t58 != 4LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x303 = -1;
	static int64_t t59 = 3201488245871937LL;

	t59 = (((x301+x302)-x303)%x304);

	if (t59 != 33LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = -1;
	static uint16_t x306 = 1U;
	static int64_t x307 = 1LL;
	volatile uint8_t x308 = 43U;
	volatile int64_t t60 = -127LL;

	t60 = (((x305+x306)-x307)%x308);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x310 = 950463410524575751LLU;
	int32_t x311 = 122571;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t61 = 1630744387LLU;

	t61 = (((x309+x310)-x311)%x312);

	if (t61 != 950463412671936827LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = 0;
	uint32_t x314 = UINT32_MAX;
	static int8_t x315 = INT8_MAX;
	static int8_t x316 = INT8_MIN;
	uint32_t t62 = 207126U;

	t62 = (((x313+x314)-x315)%x316);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x317 = -1;
	static int32_t x318 = INT32_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	static uint32_t x320 = UINT32_MAX;
	uint32_t t63 = 1523U;

	t63 = (((x317+x318)-x319)%x320);

	if (t63 != 2147418111U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x324 = INT64_MAX;
	volatile uint64_t t64 = 3083LLU;

	t64 = (((x321+x322)-x323)%x324);

	if (t64 != 265LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x325 = 8U;
	uint16_t x326 = 443U;
	static int64_t x327 = 161983LL;
	volatile int64_t x328 = INT64_MIN;
	int64_t t65 = 33760060951901LL;

	t65 = (((x325+x326)-x327)%x328);

	if (t65 != -161532LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 9257U;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = 4346U;
	volatile uint32_t t66 = 31128674U;

	t66 = (((x329+x330)-x331)%x332);

	if (t66 != 3924U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x334 = 415196416253267LLU;
	int32_t x335 = -1;
	int16_t x336 = INT16_MIN;
	uint64_t t67 = 1520168887LLU;

	t67 = (((x333+x334)-x335)%x336);

	if (t67 != 415196416253269LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x338 = UINT8_MAX;
	static volatile uint8_t x339 = 2U;
	int32_t x340 = -73;
	uint64_t t68 = 20636695541468LLU;

	t68 = (((x337+x338)-x339)%x340);

	if (t68 != 252LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x346 = UINT64_MAX;
	volatile int32_t x347 = 0;
	uint64_t t69 = 141164718248274542LLU;

	t69 = (((x345+x346)-x347)%x348);

	if (t69 != 927LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = 6692;
	static int32_t x351 = -1;
	int8_t x352 = -3;
	static int32_t t70 = 273;

	t70 = (((x349+x350)-x351)%x352);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x353 = 1LLU;
	int32_t x354 = -1;
	int64_t x355 = -1LL;
	static uint64_t x356 = 206112794LLU;
	volatile uint64_t t71 = 7327012694468082LLU;

	t71 = (((x353+x354)-x355)%x356);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x357 = INT8_MAX;
	volatile uint64_t x359 = 279809942730053LLU;

	t72 = (((x357+x358)-x359)%x360);

	if (t72 != 18446464263766821689LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x361 = INT32_MIN;
	static int16_t x363 = INT16_MIN;

	t73 = (((x361+x362)-x363)%x364);

	if (t73 != -2147446899LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x373 = 3563LLU;
	volatile int64_t x374 = INT64_MIN;
	static uint64_t x376 = 14794958690529LLU;
	volatile uint64_t t74 = 34917033764653476LLU;

	t74 = (((x373+x374)-x375)%x376);

	if (t74 != 2454716056662LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x381 = INT16_MAX;
	uint32_t x382 = 712362159U;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t75 = 61627301882975050LLU;

	t75 = (((x381+x382)-x383)%x384);

	if (t75 != 2859878574LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x385 = -1LL;
	uint32_t x387 = 4108160U;
	uint8_t x388 = UINT8_MAX;
	volatile uint64_t t76 = 17964829577064LLU;

	t76 = (((x385+x386)-x387)%x388);

	if (t76 != 69LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int64_t x390 = INT64_MIN;
	int64_t x391 = -1LL;
	volatile int32_t x392 = -1;
	volatile uint64_t t77 = 487569645337LLU;

	t77 = (((x389+x390)-x391)%x392);

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x393 = 56U;
	uint64_t x394 = 1LLU;
	int64_t x395 = 409025LL;
	int64_t x396 = 228563036720LL;
	volatile uint64_t t78 = 14274216592587LLU;

	t78 = (((x393+x394)-x395)%x396);

	if (t78 != 101646917688LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = -53668981052986650LL;
	static uint64_t x402 = 22LLU;
	volatile int64_t x403 = INT64_MIN;
	int32_t x404 = 391514541;
	uint64_t t79 = 120156209409582LLU;

	t79 = (((x401+x402)-x403)%x404);

	if (t79 != 251375562LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = 3048;
	int8_t x410 = -1;
	int8_t x412 = INT8_MIN;
	int32_t t80 = 3;

	t80 = (((x409+x410)-x411)%x412);

	if (t80 != -24) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x421 = 245167696900811259LLU;
	static int16_t x422 = -1;
	int64_t x423 = 63LL;
	static int8_t x424 = INT8_MAX;
	volatile uint64_t t81 = 2235601057065007981LLU;

	t81 = (((x421+x422)-x423)%x424);

	if (t81 != 122LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x425 = UINT32_MAX;
	int8_t x427 = INT8_MIN;
	uint32_t x428 = 1803U;
	static uint32_t t82 = 13433U;

	t82 = (((x425+x426)-x427)%x428);

	if (t82 != 128U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x429 = 6047LL;
	int32_t x430 = 10678;
	int64_t x431 = INT64_MAX;
	volatile int64_t x432 = INT64_MAX;

	t83 = (((x429+x430)-x431)%x432);

	if (t83 != -9223372036854759082LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x433 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	int64_t x436 = -32512431203LL;
	int64_t t84 = 256655792425LL;

	t84 = (((x433+x434)-x435)%x436);

	if (t84 != 340661078LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x437 = UINT16_MAX;
	uint8_t x439 = 4U;
	int32_t t85 = -1;

	t85 = (((x437+x438)-x439)%x440);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x442 = INT16_MIN;
	volatile int32_t x443 = -1;
	int8_t x444 = 2;

	t86 = (((x441+x442)-x443)%x444);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x445 = 1528;
	volatile int32_t x446 = -64002722;
	int8_t x447 = -1;
	volatile int32_t t87 = 44;

	t87 = (((x445+x446)-x447)%x448);

	if (t87 != -41) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x453 = 4013567LLU;
	int8_t x454 = -1;
	volatile uint64_t x455 = 80810126415683LLU;
	static int32_t x456 = INT32_MIN;

	t88 = (((x453+x454)-x455)%x456);

	if (t88 != 18446663263587149499LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x457 = INT32_MAX;
	uint64_t x458 = 29261600599711238LLU;
	int8_t x459 = INT8_MIN;
	volatile int32_t x460 = INT32_MAX;
	volatile uint64_t t89 = 243826513581353LLU;

	t89 = (((x457+x458)-x459)%x460);

	if (t89 != 1310591248LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x465 = -1;
	int16_t x466 = INT16_MIN;
	int32_t x467 = -20449628;
	volatile int16_t x468 = INT16_MAX;

	t90 = (((x465+x466)-x467)%x468);

	if (t90 != 3018) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x469 = 1152418477179505LL;
	volatile int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MAX;
	uint16_t x472 = UINT16_MAX;
	volatile int64_t t91 = 53970040856LL;

	t91 = (((x469+x470)-x471)%x472);

	if (t91 != 28810LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x479 = 4U;
	int64_t x480 = -1LL;

	t92 = (((x477+x478)-x479)%x480);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x481 = UINT64_MAX;
	int32_t x482 = 31;
	static int64_t x483 = INT64_MAX;
	volatile int32_t x484 = -1;
	volatile uint64_t t93 = 64162LLU;

	t93 = (((x481+x482)-x483)%x484);

	if (t93 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x491 = INT64_MIN;
	static volatile uint16_t x492 = UINT16_MAX;
	volatile uint64_t t94 = 223347LLU;

	t94 = (((x489+x490)-x491)%x492);

	if (t94 != 34731LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x497 = INT16_MAX;
	int8_t x498 = 1;
	int16_t x499 = INT16_MAX;

	t95 = (((x497+x498)-x499)%x500);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x505 = UINT64_MAX;
	int8_t x506 = -42;
	int8_t x507 = -6;
	uint64_t x508 = 80630568718501LLU;
	volatile uint64_t t96 = 35949184032442459LLU;

	t96 = (((x505+x506)-x507)%x508);

	if (t96 != 1931722174298LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x509 = 5940;
	volatile int8_t x510 = INT8_MIN;
	int64_t x511 = -1LL;
	int16_t x512 = 122;
	int64_t t97 = -71451118LL;

	t97 = (((x509+x510)-x511)%x512);

	if (t97 != 79LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x513 = -6;
	int8_t x514 = -1;
	uint8_t x515 = 2U;
	uint8_t x516 = UINT8_MAX;
	int32_t t98 = -7;

	t98 = (((x513+x514)-x515)%x516);

	if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x517 = UINT8_MAX;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 38U;
	int16_t x520 = INT16_MAX;

	t99 = (((x517+x518)-x519)%x520);

	if (t99 != -32551) { NG(); } else { ; }
	
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

