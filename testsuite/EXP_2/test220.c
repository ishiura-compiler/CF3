#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = UINT8_MAX;
uint16_t x11 = UINT16_MAX;
int16_t x15 = INT16_MAX;
static int32_t t1 = 7632;
static volatile int8_t x17 = 0;
int32_t x18 = INT32_MIN;
int64_t x30 = INT64_MAX;
uint32_t x36 = 10236U;
int8_t x37 = -1;
volatile int8_t x46 = -1;
int8_t x47 = INT8_MIN;
volatile int32_t t7 = -3;
int16_t x49 = INT16_MIN;
int64_t x53 = -2039485950487LL;
static uint32_t x56 = 40U;
uint32_t x58 = 7U;
uint16_t x61 = 289U;
int16_t x86 = -167;
volatile int8_t x94 = 52;
int64_t x96 = -1LL;
uint32_t x102 = UINT32_MAX;
int16_t x104 = -1;
static volatile uint8_t x111 = 1U;
volatile int64_t t18 = 404947785063115LL;
volatile int64_t t20 = -790063099300994LL;
int64_t x125 = INT64_MAX;
int64_t x128 = 23051538377LL;
static int64_t x134 = INT64_MIN;
int16_t x137 = -89;
volatile int8_t x146 = 54;
static int16_t x157 = 4;
int8_t x159 = -1;
static volatile uint32_t x164 = 1528239962U;
static volatile uint64_t t28 = 103618463049375350LLU;
uint16_t x173 = 3654U;
volatile int32_t x177 = INT32_MAX;
uint8_t x178 = 28U;
uint64_t x182 = UINT64_MAX;
int16_t x184 = 0;
static uint64_t t33 = 128237383LLU;
int16_t x188 = -1;
volatile int32_t x189 = INT32_MIN;
uint32_t t35 = 59950960U;
int64_t x193 = -1LL;
int16_t x204 = -1;
int8_t x209 = 20;
int64_t t38 = -1LL;
int8_t x215 = INT8_MAX;
static uint32_t x216 = 5968941U;
int32_t x218 = -14;
volatile uint64_t t41 = 125972595LLU;
static uint16_t x225 = UINT16_MAX;
uint16_t x226 = 9601U;
int64_t x232 = -1LL;
volatile uint32_t x235 = UINT32_MAX;
static int32_t x239 = INT32_MIN;
int64_t x242 = -143635411571LL;
uint64_t x245 = 111189818LLU;
uint64_t x246 = UINT64_MAX;
volatile uint32_t x252 = 118175U;
static int16_t x260 = -3;
int16_t x264 = INT16_MIN;
uint64_t x276 = 355234575LLU;
volatile int16_t x278 = 18;
int8_t x282 = -1;
static volatile uint64_t t55 = UINT64_MAX;
static int64_t x289 = 5873676487589LL;
int8_t x291 = INT8_MIN;
int16_t x295 = 5349;
static uint32_t x304 = 2122344766U;
static int64_t t59 = 441252856947736054LL;
static int32_t x313 = INT32_MAX;
int16_t x321 = INT16_MIN;
int16_t x330 = -48;
volatile uint64_t x348 = 1400319372173910907LLU;
volatile int8_t x349 = INT8_MIN;
uint32_t x350 = UINT32_MAX;
int32_t x359 = INT32_MAX;
int16_t x374 = -358;
volatile uint16_t x389 = 38U;
static volatile uint8_t x395 = 2U;
volatile int16_t x400 = -1;
int32_t t75 = -241900;
int32_t x401 = -1;
int32_t t76 = -22;
uint64_t t78 = UINT64_MAX;
static int64_t x414 = 14694425904LL;
int32_t x421 = -48161;
uint32_t x424 = 1U;
static uint64_t x429 = UINT64_MAX;
int8_t x432 = INT8_MIN;
uint32_t x439 = 6954330U;
int8_t x446 = -1;
volatile int8_t x448 = 1;
uint32_t x449 = 25039U;
volatile uint16_t x452 = 2U;
static volatile uint8_t x453 = 4U;
int8_t x461 = 14;
static int16_t x480 = INT16_MIN;
static int64_t x484 = INT64_MAX;
static int64_t x494 = 13090381LL;
static int8_t x501 = INT8_MIN;
volatile int32_t x502 = -3232004;
int32_t t97 = 94917;
uint32_t t98 = 83267U;


void f0(void) {
	int32_t x9 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t0 = 912;

	t0 = ((x9/(x10-x11))|x12);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 116U;
	static int8_t x14 = INT8_MIN;
	int32_t x16 = 202033;

	t1 = ((x13/(x14-x15))|x16);

	if (t1 != 202033) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 930U;
	int32_t t2 = 21;

	t2 = ((x17/(x18-x19))|x20);

	if (t2 != 930) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	static volatile uint16_t x27 = UINT16_MAX;
	static uint16_t x28 = UINT16_MAX;
	volatile int32_t t3 = 1026;

	t3 = ((x25/(x26-x27))|x28);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -8581785LL;
	int64_t x31 = 115701LL;
	int32_t x32 = INT32_MAX;
	int64_t t4 = -8034944064LL;

	t4 = ((x29/(x30-x31))|x32);

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = -1;
	int64_t x35 = 26379712LL;
	volatile int64_t t5 = 652LL;

	t5 = ((x33/(x34-x35))|x36);

	if (t5 != 349638832127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 7368U;
	int16_t x40 = INT16_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x37/(x38-x39))|x40);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x48 = 4U;

	t7 = ((x45/(x46-x47))|x48);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x50 = 0;
	int8_t x51 = INT8_MIN;
	static int64_t x52 = -1LL;
	static int64_t t8 = 1014216382298001098LL;

	t8 = ((x49/(x50-x51))|x52);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x54 = INT64_MIN;
	int64_t x55 = -1044LL;
	int64_t t9 = 110502LL;

	t9 = ((x53/(x54-x55))|x56);

	if (t9 != 40LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 1;
	uint16_t x59 = UINT16_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile uint32_t t10 = 5U;

	t10 = ((x57/(x58-x59))|x60);

	if (t10 != 4294967168U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x62 = 255;
	volatile int8_t x63 = -36;
	int8_t x64 = -10;
	volatile int32_t t11 = 215;

	t11 = ((x61/(x62-x63))|x64);

	if (t11 != -10) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = -1;
	static uint32_t x66 = 2056981439U;
	uint16_t x67 = UINT16_MAX;
	uint16_t x68 = 6312U;
	uint32_t t12 = 1779U;

	t12 = ((x65/(x66-x67))|x68);

	if (t12 != 6314U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	int8_t x87 = -1;
	static uint8_t x88 = 25U;
	int32_t t13 = 17749;

	t13 = ((x85/(x86-x87))|x88);

	if (t13 != 221) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x93 = INT8_MIN;
	static volatile int32_t x95 = 647;
	volatile int64_t t14 = 32082LL;

	t14 = ((x93/(x94-x95))|x96);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x97 = -1LL;
	uint8_t x98 = 13U;
	int8_t x99 = INT8_MIN;
	static int64_t x100 = 715451421LL;
	volatile int64_t t15 = -3314905750018369LL;

	t15 = ((x97/(x98-x99))|x100);

	if (t15 != 715451421LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = INT16_MAX;
	volatile uint64_t x103 = 308LLU;
	uint64_t t16 = UINT64_MAX;

	t16 = ((x101/(x102-x103))|x104);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x109 = 57713040047988LL;
	volatile uint64_t x110 = 250445LLU;
	static int8_t x112 = INT8_MAX;
	static volatile uint64_t t17 = 69177446056736665LLU;

	t17 = ((x109/(x110-x111))|x112);

	if (t17 != 230443007LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = INT64_MAX;
	int32_t x114 = -9;
	int32_t x115 = -20877193;
	int8_t x116 = -1;

	t18 = ((x113/(x114-x115))|x116);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = 454707794LL;
	int8_t x118 = -1;
	int32_t x119 = INT32_MIN;
	uint32_t x120 = 1U;
	int64_t t19 = -3LL;

	t19 = ((x117/(x118-x119))|x120);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x121 = 0U;
	int8_t x122 = 1;
	static int64_t x123 = 825678183LL;
	int16_t x124 = -1;

	t20 = ((x121/(x122-x123))|x124);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x126 = -9;
	int16_t x127 = INT16_MAX;
	int64_t t21 = 12901491546057LL;

	t21 = ((x125/(x126-x127))|x128);

	if (t21 != -281406257586231LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x133 = 7LLU;
	int16_t x135 = -1;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t22 = 696555491451219LLU;

	t22 = ((x133/(x134-x135))|x136);

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x138 = 0U;
	uint16_t x139 = 60U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t23 = -2973;

	t23 = ((x137/(x138-x139))|x140);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = 3;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	volatile int32_t t24 = 19566099;

	t24 = ((x145/(x146-x147))|x148);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x149 = INT64_MIN;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = 240;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t25 = -3958238874174006LL;

	t25 = ((x149/(x150-x151))|x152);

	if (t25 != 279430572277759LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = -203874462;
	volatile int64_t x154 = INT64_MIN;
	static volatile int64_t x155 = -1LL;
	int64_t x156 = INT64_MIN;
	volatile int64_t t26 = INT64_MIN;

	t26 = ((x153/(x154-x155))|x156);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x158 = -14549;
	int8_t x160 = INT8_MIN;
	volatile int32_t t27 = 419201;

	t27 = ((x157/(x158-x159))|x160);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x161 = 9491058319053LLU;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -54635803632277LL;

	t28 = ((x161/(x162-x163))|x164);

	if (t28 != 1528239962LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x165 = UINT32_MAX;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = -2LL;
	static int16_t x168 = 1660;
	uint64_t t29 = 13649554866374LLU;

	t29 = ((x165/(x166-x167))|x168);

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = -45983475;
	int32_t x171 = -31481;
	int32_t x172 = INT32_MAX;
	volatile int32_t t30 = INT32_MAX;

	t30 = ((x169/(x170-x171))|x172);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x174 = INT8_MIN;
	volatile uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x173/(x174-x175))|x176);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x179 = -1LL;
	uint16_t x180 = UINT16_MAX;
	int64_t t32 = 663184LL;

	t32 = ((x177/(x178-x179))|x180);

	if (t32 != 74055679LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = INT64_MAX;
	int64_t x183 = -419LL;

	t33 = ((x181/(x182-x183))|x184);

	if (t33 != 22065483341757836LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	static uint64_t x187 = UINT64_MAX;
	static uint64_t t34 = UINT64_MAX;

	t34 = ((x185/(x186-x187))|x188);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x190 = 39U;
	volatile uint16_t x191 = 828U;
	static volatile uint8_t x192 = UINT8_MAX;

	t35 = ((x189/(x190-x191))|x192);

	if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x194 = -13;
	int16_t x195 = INT16_MIN;
	volatile int64_t x196 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = ((x193/(x194-x195))|x196);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x201 = UINT16_MAX;
	static volatile int32_t x202 = -1;
	volatile int32_t x203 = 4011;
	int32_t t37 = 64253081;

	t37 = ((x201/(x202-x203))|x204);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x210 = INT64_MIN;
	volatile int16_t x211 = -116;
	uint16_t x212 = 6U;

	t38 = ((x209/(x210-x211))|x212);

	if (t38 != 6LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = INT16_MAX;
	static uint64_t x214 = UINT64_MAX;
	volatile uint64_t t39 = 1LLU;

	t39 = ((x213/(x214-x215))|x216);

	if (t39 != 5968941LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x217 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	volatile int8_t x220 = 1;
	static int32_t t40 = -2;

	t40 = ((x217/(x218-x219))|x220);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x221 = 1U;
	volatile uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MIN;
	static int32_t x224 = INT32_MIN;

	t41 = ((x221/(x222-x223))|x224);

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x227 = INT16_MIN;
	uint8_t x228 = UINT8_MAX;
	int32_t t42 = -3611719;

	t42 = ((x225/(x226-x227))|x228);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x229 = -1;
	volatile int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int64_t t43 = -234325536323546LL;

	t43 = ((x229/(x230-x231))|x232);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x233 = 125074581620LLU;
	volatile uint16_t x234 = 21U;
	static uint64_t x236 = 50LLU;
	uint64_t t44 = 1921150224088914889LLU;

	t44 = ((x233/(x234-x235))|x236);

	if (t44 != 5685208255LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x237 = INT64_MIN;
	static int8_t x238 = -28;
	static int64_t x240 = 1704423867LL;
	volatile int64_t t45 = 28815178954958022LL;

	t45 = ((x237/(x238-x239))|x240);

	if (t45 != -4294967301LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x241 = 2503802920251025LLU;
	volatile uint8_t x243 = 57U;
	volatile uint32_t x244 = 36633U;
	uint64_t t46 = 120745504693229LLU;

	t46 = ((x241/(x242-x243))|x244);

	if (t46 != 36633LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x247 = 2401559362373LL;
	static int32_t x248 = -63844099;
	volatile uint64_t t47 = 14041697317LLU;

	t47 = ((x245/(x246-x247))|x248);

	if (t47 != 18446744073645707517LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = INT64_MAX;
	static int16_t x250 = INT16_MAX;
	volatile int8_t x251 = -11;
	int64_t t48 = -114757764994386LL;

	t48 = ((x249/(x250-x251))|x252);

	if (t48 != 281389103574495LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x257 = 1774427680U;
	volatile uint32_t x258 = 1U;
	int32_t x259 = -1;
	static volatile uint32_t t49 = 20103U;

	t49 = ((x257/(x258-x259))|x260);

	if (t49 != 4294967293U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int16_t x262 = -1;
	static uint32_t x263 = 19U;
	volatile uint32_t t50 = 676857U;

	t50 = ((x261/(x262-x263))|x264);

	if (t50 != 4294934529U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = 44;
	int16_t x266 = 0;
	volatile int16_t x267 = 78;
	static volatile uint64_t x268 = 133524689064LLU;
	volatile uint64_t t51 = 92706LLU;

	t51 = ((x265/(x266-x267))|x268);

	if (t51 != 133524689064LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = INT16_MIN;
	static int32_t x274 = 338316;
	static int8_t x275 = -23;
	uint64_t t52 = 11173388LLU;

	t52 = ((x273/(x274-x275))|x276);

	if (t52 != 355234575LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x277 = 0;
	uint64_t x279 = 100928014724536044LLU;
	volatile int32_t x280 = INT32_MIN;
	volatile uint64_t t53 = 10710010500594143LLU;

	t53 = ((x277/(x278-x279))|x280);

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;
	int64_t t54 = 4951282860LL;

	t54 = ((x281/(x282-x283))|x284);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x285 = 1974U;
	volatile int64_t x286 = INT64_MIN;
	static uint64_t x287 = 834087072813290LLU;
	static int64_t x288 = -1LL;

	t55 = ((x285/(x286-x287))|x288);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x290 = 76U;
	static uint8_t x292 = 8U;
	volatile int64_t t56 = 181173047543LL;

	t56 = ((x289/(x290-x291))|x292);

	if (t56 != 28792531801LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x293 = 88392248LLU;
	int32_t x294 = INT32_MAX;
	int8_t x296 = INT8_MAX;
	uint64_t t57 = 865004LLU;

	t57 = ((x293/(x294-x295))|x296);

	if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	volatile int64_t t58 = -3728386LL;

	t58 = ((x301/(x302-x303))|x304);

	if (t58 != 2122344766LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	volatile uint8_t x311 = UINT8_MAX;
	static volatile uint16_t x312 = 4U;

	t59 = ((x309/(x310-x311))|x312);

	if (t59 != 8388612LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x314 = -1;
	static int64_t x315 = 105253LL;
	int64_t x316 = 3914032412497LL;
	static int64_t t60 = -997427LL;

	t60 = ((x313/(x314-x315))|x316);

	if (t60 != -2209LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x317 = 0U;
	volatile uint16_t x318 = UINT16_MAX;
	int16_t x319 = -4058;
	int64_t x320 = 12710385561055688LL;
	int64_t t61 = -1219551032LL;

	t61 = ((x317/(x318-x319))|x320);

	if (t61 != 12710385561055688LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x322 = -1;
	int16_t x323 = INT16_MAX;
	static int64_t x324 = -26369138208LL;
	int64_t t62 = 8885162809LL;

	t62 = ((x321/(x322-x323))|x324);

	if (t62 != -26369138207LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x325 = 447177;
	volatile int16_t x326 = INT16_MAX;
	uint8_t x327 = 4U;
	static uint32_t x328 = UINT32_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x325/(x326-x327))|x328);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x331 = 3U;
	volatile int32_t x332 = 1;
	volatile int32_t t64 = 801;

	t64 = ((x329/(x330-x331))|x332);

	if (t64 != 643) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = 1;
	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MAX;
	int16_t x340 = -708;
	int32_t t65 = -266160070;

	t65 = ((x337/(x338-x339))|x340);

	if (t65 != -708) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x345 = -1;
	int64_t x346 = -1LL;
	volatile uint8_t x347 = 3U;
	uint64_t t66 = 1381906620904LLU;

	t66 = ((x345/(x346-x347))|x348);

	if (t66 != 1400319372173910907LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x351 = 135U;
	volatile uint8_t x352 = 3U;
	static uint32_t t67 = 19535U;

	t67 = ((x349/(x350-x351))|x352);

	if (t67 != 3U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x353 = UINT64_MAX;
	volatile uint64_t x354 = 928431LLU;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = 0U;
	uint64_t t68 = 13231218152915942LLU;

	t68 = ((x353/(x354-x355))|x356);

	if (t68 != 19865990285711LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x357 = UINT64_MAX;
	uint16_t x358 = UINT16_MAX;
	volatile int32_t x360 = INT32_MIN;
	uint64_t t69 = 5077131738447045LLU;

	t69 = ((x357/(x358-x359))|x360);

	if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x361 = -1;
	static int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = 3351;
	volatile int32_t t70 = -131344;

	t70 = ((x361/(x362-x363))|x364);

	if (t70 != 3351) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x365 = INT16_MAX;
	volatile int8_t x366 = INT8_MIN;
	int16_t x367 = 0;
	volatile uint64_t x368 = 605621802075LLU;
	static volatile uint64_t t71 = 329784394993450053LLU;

	t71 = ((x365/(x366-x367))|x368);

	if (t71 != 18446744073709551451LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x373 = INT16_MIN;
	int16_t x375 = 29;
	volatile uint32_t x376 = UINT32_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x373/(x374-x375))|x376);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x390 = INT8_MAX;
	static uint8_t x391 = 3U;
	uint16_t x392 = 10190U;
	static volatile int32_t t73 = 3;

	t73 = ((x389/(x390-x391))|x392);

	if (t73 != 10190) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x393 = 177753708LLU;
	uint8_t x394 = UINT8_MAX;
	uint32_t x396 = UINT32_MAX;
	uint64_t t74 = 1184246498520764476LLU;

	t74 = ((x393/(x394-x395))|x396);

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x397 = 16;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MAX;

	t75 = ((x397/(x398-x399))|x400);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x402 = UINT16_MAX;
	static int8_t x403 = -38;
	volatile int16_t x404 = 0;

	t76 = ((x401/(x402-x403))|x404);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x405 = UINT64_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	int32_t x407 = -803695;
	int64_t x408 = INT64_MAX;
	uint64_t t77 = 781605374895370303LLU;

	t77 = ((x405/(x406-x407))|x408);

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x409 = INT32_MAX;
	int8_t x410 = 0;
	uint32_t x411 = UINT32_MAX;
	uint64_t x412 = UINT64_MAX;

	t78 = ((x409/(x410-x411))|x412);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x413 = INT32_MAX;
	static int8_t x415 = INT8_MIN;
	static uint64_t x416 = 298446LLU;
	volatile uint64_t t79 = 1911005068LLU;

	t79 = ((x413/(x414-x415))|x416);

	if (t79 != 298446LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = 665;
	volatile int64_t x418 = -1LL;
	volatile uint16_t x419 = 12U;
	int8_t x420 = -1;
	volatile int64_t t80 = -2907888900LL;

	t80 = ((x417/(x418-x419))|x420);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x422 = 14U;
	int8_t x423 = 33;
	volatile uint32_t t81 = 0U;

	t81 = ((x421/(x422-x423))|x424);

	if (t81 != 2535U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x425 = 1293;
	volatile uint32_t x426 = UINT32_MAX;
	static int32_t x427 = INT32_MAX;
	uint8_t x428 = 62U;
	volatile uint32_t t82 = 372880881U;

	t82 = ((x425/(x426-x427))|x428);

	if (t82 != 62U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x430 = INT8_MAX;
	uint16_t x431 = 7105U;
	volatile uint64_t t83 = 50058LLU;

	t83 = ((x429/(x430-x431))|x432);

	if (t83 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x437 = INT32_MIN;
	uint8_t x438 = 1U;
	int16_t x440 = INT16_MIN;
	static volatile uint32_t t84 = 25288U;

	t84 = ((x437/(x438-x439))|x440);

	if (t84 != 4294934528U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x441 = INT64_MIN;
	volatile uint8_t x442 = 0U;
	volatile uint32_t x443 = 10U;
	int32_t x444 = INT32_MIN;
	int64_t t85 = 53067539166LL;

	t85 = ((x441/(x442-x443))|x444);

	if (t85 != -5LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x445 = INT64_MIN;
	volatile int16_t x447 = INT16_MIN;
	volatile int64_t t86 = -7690872202705LL;

	t86 = ((x445/(x446-x447))|x448);

	if (t86 != -281483566907399LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x450 = 15446U;
	int64_t x451 = -1LL;
	int64_t t87 = 15234LL;

	t87 = ((x449/(x450-x451))|x452);

	if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x454 = 3LLU;
	static int64_t x455 = -1LL;
	int8_t x456 = INT8_MAX;
	uint64_t t88 = 3851375735004LLU;

	t88 = ((x453/(x454-x455))|x456);

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x462 = INT8_MIN;
	volatile int8_t x463 = 4;
	int16_t x464 = -8868;
	volatile int32_t t89 = -3;

	t89 = ((x461/(x462-x463))|x464);

	if (t89 != -8868) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x465 = -1;
	static int32_t x466 = 1275297;
	int16_t x467 = INT16_MIN;
	static int64_t x468 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x465/(x466-x467))|x468);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x473 = UINT8_MAX;
	static int16_t x474 = 0;
	static int32_t x475 = -7338;
	int64_t x476 = -1LL;
	static volatile int64_t t91 = 98752377LL;

	t91 = ((x473/(x474-x475))|x476);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x477 = INT64_MIN;
	static int64_t x478 = INT64_MIN;
	int64_t x479 = -19480672567849797LL;
	int64_t t92 = 101371360192469LL;

	t92 = ((x477/(x478-x479))|x480);

	if (t92 != -32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x481 = -1;
	int32_t x482 = 0;
	static int8_t x483 = INT8_MIN;
	volatile int64_t t93 = INT64_MAX;

	t93 = ((x481/(x482-x483))|x484);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x485 = UINT16_MAX;
	static volatile uint8_t x486 = UINT8_MAX;
	volatile int64_t x487 = -3614LL;
	static volatile uint8_t x488 = 0U;
	int64_t t94 = 4008481140450185127LL;

	t94 = ((x485/(x486-x487))|x488);

	if (t94 != 16LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x493 = 3708LLU;
	static int64_t x495 = -1LL;
	volatile uint8_t x496 = 92U;
	uint64_t t95 = 19957167303036627LLU;

	t95 = ((x493/(x494-x495))|x496);

	if (t95 != 92LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x497 = -1;
	uint16_t x498 = 2U;
	static int64_t x499 = -1004152531325231506LL;
	uint16_t x500 = 5U;
	static volatile int64_t t96 = -1241604LL;

	t96 = ((x497/(x498-x499))|x500);

	if (t96 != 5LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x503 = -1;
	int32_t x504 = -1;

	t97 = ((x501/(x502-x503))|x504);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x509 = 33449023U;
	uint8_t x510 = UINT8_MAX;
	volatile uint32_t x511 = 3185618U;
	int32_t x512 = -10661;

	t98 = ((x509/(x510-x511))|x512);

	if (t98 != 4294956635U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x517 = -1;
	uint64_t x518 = UINT64_MAX;
	static int16_t x519 = INT16_MAX;
	int8_t x520 = INT8_MIN;
	volatile uint64_t t99 = 1334316351989302LLU;

	t99 = ((x517/(x518-x519))|x520);

	if (t99 != 18446744073709551489LLU) { NG(); } else { ; }
	
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

