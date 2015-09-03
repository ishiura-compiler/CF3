#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x17 = -1;
uint16_t x18 = UINT16_MAX;
int8_t x19 = -1;
volatile int32_t x25 = -1;
static volatile uint16_t x26 = 16U;
uint64_t t4 = 141891140LLU;
static uint16_t x41 = 251U;
uint16_t x48 = 1U;
int64_t t8 = -5152383LL;
volatile uint16_t x50 = 9222U;
int16_t x56 = -3;
static int32_t x58 = INT32_MAX;
int64_t x60 = INT64_MIN;
int32_t x72 = INT32_MIN;
uint8_t x76 = 86U;
int32_t t14 = 1;
volatile uint32_t t16 = 10365U;
volatile uint64_t t17 = 168LLU;
static uint32_t x103 = UINT32_MAX;
volatile int8_t x106 = INT8_MAX;
volatile int8_t x107 = 6;
static uint64_t x109 = 85741343478324798LLU;
static uint64_t t20 = 869163344LLU;
int64_t t21 = 11983698704082681LL;
uint32_t x122 = 1756060712U;
volatile uint64_t t23 = 4455545363364272LLU;
volatile int64_t x126 = -1LL;
uint16_t x130 = 411U;
uint8_t x134 = UINT8_MAX;
static int64_t x135 = -2304170LL;
volatile int64_t t26 = 256159413014422LL;
uint8_t x139 = 1U;
static int64_t t28 = -1743884LL;
int16_t x152 = INT16_MAX;
int16_t x157 = INT16_MAX;
static volatile uint64_t x159 = UINT64_MAX;
uint8_t x167 = 120U;
volatile uint64_t t34 = 5LLU;
uint16_t x194 = UINT16_MAX;
static int8_t x195 = -1;
int32_t x199 = INT32_MAX;
uint64_t t37 = 21685470361343LLU;
volatile int8_t x205 = 0;
static uint64_t x206 = UINT64_MAX;
uint64_t x209 = 2963278199514536526LLU;
volatile uint64_t x214 = 223356263853972LLU;
volatile uint32_t t42 = 20U;
int16_t x231 = INT16_MAX;
uint64_t x232 = UINT64_MAX;
int8_t x239 = -21;
int16_t x242 = INT16_MIN;
uint64_t t46 = 20012693837217088LLU;
uint16_t x250 = UINT16_MAX;
static int16_t x277 = 1;
volatile int32_t t53 = -979666914;
int8_t x287 = INT8_MIN;
uint64_t x289 = 1052297717844469327LLU;
static volatile uint64_t x291 = UINT64_MAX;
static int8_t x293 = INT8_MIN;
int16_t x300 = -3;
static int64_t t57 = -229700LL;
int8_t x304 = INT8_MIN;
uint64_t t58 = 29814LLU;
int32_t x305 = -1;
volatile int8_t x306 = INT8_MIN;
int8_t x307 = INT8_MAX;
int32_t x309 = INT32_MIN;
uint8_t x320 = 3U;
uint32_t x323 = 1614013U;
int32_t x325 = -6339433;
int8_t x332 = INT8_MIN;
volatile uint32_t t65 = 32780445U;
static uint8_t x338 = 51U;
uint64_t x342 = 109LLU;
static int8_t x345 = -1;
int8_t x351 = INT8_MIN;
static int64_t x357 = INT64_MIN;
int32_t t73 = 545102787;
int8_t x378 = INT8_MAX;
int64_t x393 = INT64_MIN;
uint8_t x396 = UINT8_MAX;
static uint16_t x398 = UINT16_MAX;
int16_t x399 = -1;
uint32_t x402 = 15U;
volatile uint64_t x411 = UINT64_MAX;
volatile int32_t t83 = INT32_MIN;
int8_t x421 = -5;
uint32_t x423 = 335U;
uint64_t x434 = 94LLU;
static volatile int64_t x435 = 1290317322191LL;
int8_t x437 = -48;
volatile uint64_t x441 = UINT64_MAX;
uint64_t x444 = 89486825330672LLU;
uint16_t x453 = 3U;
int32_t x456 = 27065;
int64_t x457 = INT64_MIN;
volatile int64_t x461 = -1LL;
volatile int16_t x463 = 981;
static uint64_t x464 = 17LLU;
volatile uint64_t t94 = 3105741845854149951LLU;
uint32_t x474 = 4719698U;
volatile int16_t x475 = -1;
volatile int16_t x476 = INT16_MIN;
int16_t x480 = INT16_MIN;
int64_t x481 = INT64_MIN;
int32_t x484 = 18601;
int32_t x485 = INT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = -367;
	int8_t x3 = INT8_MIN;
	int32_t x4 = 47878891;
	int64_t t0 = -2504LL;

	t0 = ((x1/(x2-x3))&x4);

	if (t0 != 46694539LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MAX;
	static int8_t x11 = -1;
	uint16_t x12 = 1U;
	uint64_t t1 = 2805387362LLU;

	t1 = ((x9/(x10-x11))&x12);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t2 = 1;

	t2 = ((x17/(x18-x19))&x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x27 = 7;
	int16_t x28 = INT16_MAX;
	volatile int32_t t3 = 0;

	t3 = ((x25/(x26-x27))&x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x29 = 5U;
	uint32_t x30 = 20U;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 278554LLU;

	t4 = ((x29/(x30-x31))&x32);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = -1;
	int32_t x35 = 9745;
	uint64_t x36 = 481LLU;
	volatile uint64_t t5 = 1857143608483LLU;

	t5 = ((x33/(x34-x35))&x36);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x37 = 86LL;
	int16_t x38 = INT16_MIN;
	volatile int8_t x39 = -1;
	int8_t x40 = -1;
	volatile int64_t t6 = -1899638577128482009LL;

	t6 = ((x37/(x38-x39))&x40);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x42 = INT32_MIN;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;
	volatile int64_t t7 = -28803775LL;

	t7 = ((x41/(x42-x43))&x44);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = INT32_MAX;
	int8_t x46 = 3;
	int64_t x47 = INT64_MAX;

	t8 = ((x45/(x46-x47))&x48);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x49 = 1U;
	volatile uint8_t x51 = 4U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t9 = 497520;

	t9 = ((x49/(x50-x51))&x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 0U;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MAX;
	volatile int64_t t10 = 5044070165177802LL;

	t10 = ((x53/(x54-x55))&x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int8_t x59 = 20;
	int64_t t11 = INT64_MIN;

	t11 = ((x57/(x58-x59))&x60);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x61 = 0U;
	static uint64_t x62 = UINT64_MAX;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = 36LLU;
	volatile uint64_t t12 = 342055804156LLU;

	t12 = ((x61/(x62-x63))&x64);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	uint16_t x71 = 303U;
	static int32_t t13 = 3;

	t13 = ((x69/(x70-x71))&x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = UINT8_MAX;
	static volatile int32_t x74 = -2371480;
	int8_t x75 = INT8_MIN;

	t14 = ((x73/(x74-x75))&x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	static uint16_t x78 = 10U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	static int32_t t15 = INT32_MIN;

	t15 = ((x77/(x78-x79))&x80);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 385U;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = -3;

	t16 = ((x81/(x82-x83))&x84);

	if (t16 != 84U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	static int16_t x99 = INT16_MIN;
	uint64_t x100 = 177798147040LLU;

	t17 = ((x97/(x98-x99))&x100);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 20295786U;
	volatile int16_t x102 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	static volatile uint32_t t18 = 133U;

	t18 = ((x101/(x102-x103))&x104);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MAX;
	int8_t x108 = -29;
	volatile int32_t t19 = 202530611;

	t19 = ((x105/(x106-x107))&x108);

	if (t19 != 258) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x110 = -12957;
	static uint16_t x111 = UINT16_MAX;
	int8_t x112 = -1;

	t20 = ((x109/(x110-x111))&x112);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -1;
	int8_t x114 = INT8_MIN;
	static int64_t x115 = -1LL;
	int8_t x116 = -1;

	t21 = ((x113/(x114-x115))&x116);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = 7;
	int32_t x118 = -65002344;
	static uint64_t x119 = 73639644LLU;
	uint32_t x120 = 3U;
	volatile uint64_t t22 = 568987465499LLU;

	t22 = ((x117/(x118-x119))&x120);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	uint64_t x123 = 26990664LLU;
	int16_t x124 = INT16_MIN;

	t23 = ((x121/(x122-x123))&x124);

	if (t23 != 10668572672LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -1816971;
	volatile int16_t x127 = INT16_MIN;
	int64_t x128 = INT64_MAX;
	volatile int64_t t24 = 623291220103261LL;

	t24 = ((x125/(x126-x127))&x128);

	if (t24 != 9223372036854775753LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = -56;
	int32_t x131 = -1;
	int64_t x132 = 1070979592LL;
	int64_t t25 = 53023320LL;

	t25 = ((x129/(x130-x131))&x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = 77U;
	uint8_t x136 = 1U;

	t26 = ((x133/(x134-x135))&x136);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = 564189;
	int32_t x138 = -433;
	uint64_t x140 = 498353LLU;
	volatile uint64_t t27 = 1034114LLU;

	t27 = ((x137/(x138-x139))&x140);

	if (t27 != 498337LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x146 = -3;
	int32_t x147 = -28;
	int64_t x148 = INT64_MAX;

	t28 = ((x145/(x146-x147))&x148);

	if (t28 != 2621LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = -2;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = 9U;
	int32_t t29 = -54863564;

	t29 = ((x149/(x150-x151))&x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x158 = UINT32_MAX;
	static int64_t x160 = INT64_MIN;
	volatile uint64_t t30 = 9025091638177856196LLU;

	t30 = ((x157/(x158-x159))&x160);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x161 = -4608424;
	int8_t x162 = INT8_MIN;
	int32_t x163 = 4;
	static int16_t x164 = 728;
	volatile int32_t t31 = 0;

	t31 = ((x161/(x162-x163))&x164);

	if (t31 != 64) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = -3;
	static int32_t x166 = INT32_MAX;
	int8_t x168 = 52;
	int32_t t32 = 3;

	t32 = ((x165/(x166-x167))&x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x169 = INT8_MIN;
	int32_t x170 = -1956;
	uint32_t x171 = UINT32_MAX;
	int32_t x172 = INT32_MIN;
	uint32_t t33 = 4359U;

	t33 = ((x169/(x170-x171))&x172);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x177 = INT32_MIN;
	uint64_t x178 = 7LLU;
	uint8_t x179 = 3U;
	uint64_t x180 = 2280822968LLU;

	t34 = ((x177/(x178-x179))&x180);

	if (t34 != 2147483648LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x189 = UINT8_MAX;
	uint16_t x190 = UINT16_MAX;
	static uint32_t x191 = 231321U;
	int32_t x192 = -15830083;
	volatile uint32_t t35 = 913888347U;

	t35 = ((x189/(x190-x191))&x192);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x193 = 6486537632344763316LLU;
	uint32_t x196 = UINT32_MAX;
	static uint64_t t36 = 3154333082166199LLU;

	t36 = ((x193/(x194-x195))&x196);

	if (t36 != 3483108892LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = 31716LLU;
	volatile uint64_t x200 = 70552765395LLU;

	t37 = ((x197/(x198-x199))&x200);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	uint64_t x204 = 15665LLU;
	volatile uint64_t t38 = 5958204423419085LLU;

	t38 = ((x201/(x202-x203))&x204);

	if (t38 != 257LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x207 = INT32_MAX;
	int64_t x208 = INT64_MAX;
	uint64_t t39 = 1682652809442826LLU;

	t39 = ((x205/(x206-x207))&x208);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x210 = -119140160;
	int16_t x211 = -1;
	int64_t x212 = 15589487991277LL;
	static volatile uint64_t t40 = 127007500180192449LLU;

	t40 = ((x209/(x210-x211))&x212);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = INT64_MIN;
	static uint64_t x215 = 7229858351LLU;
	int32_t x216 = INT32_MAX;
	volatile uint64_t t41 = 5600LLU;

	t41 = ((x213/(x214-x215))&x216);

	if (t41 != 41295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x221 = INT32_MIN;
	uint32_t x222 = 305U;
	uint8_t x223 = 28U;
	int16_t x224 = INT16_MIN;

	t42 = ((x221/(x222-x223))&x224);

	if (t42 != 7733248U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = -46;
	uint64_t x230 = 17406478072506LLU;
	uint64_t t43 = 90289445177893144LLU;

	t43 = ((x229/(x230-x231))&x232);

	if (t43 != 1059763LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x233 = 27611LLU;
	uint32_t x234 = UINT32_MAX;
	volatile uint16_t x235 = 73U;
	int8_t x236 = INT8_MIN;
	uint64_t t44 = 13475857464834LLU;

	t44 = ((x233/(x234-x235))&x236);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x237 = -1LL;
	static int32_t x238 = 290;
	volatile uint64_t x240 = 65279LLU;
	uint64_t t45 = 61309526090LLU;

	t45 = ((x237/(x238-x239))&x240);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x241 = -274883865384LL;
	uint64_t x243 = 5113976099808877LLU;
	volatile int16_t x244 = -16287;

	t46 = ((x241/(x242-x243))&x244);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = -1;
	int16_t x246 = -1;
	uint32_t x247 = 4145401U;
	static uint32_t x248 = 1U;
	uint32_t t47 = 1874U;

	t47 = ((x245/(x246-x247))&x248);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x249 = 47U;
	uint8_t x251 = UINT8_MAX;
	uint8_t x252 = 15U;
	volatile int32_t t48 = -5950;

	t48 = ((x249/(x250-x251))&x252);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x265 = 1;
	int16_t x266 = INT16_MIN;
	volatile int64_t x267 = 2932485651609LL;
	volatile int16_t x268 = INT16_MIN;
	volatile int64_t t49 = -4521425678303900LL;

	t49 = ((x265/(x266-x267))&x268);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = 29;
	int32_t x270 = -1;
	uint32_t x271 = 15U;
	uint32_t x272 = 155149839U;
	uint32_t t50 = 157744U;

	t50 = ((x269/(x270-x271))&x272);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x273 = INT8_MAX;
	static int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t51 = 0;

	t51 = ((x273/(x274-x275))&x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x278 = 2;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	volatile int32_t t52 = 2;

	t52 = ((x277/(x278-x279))&x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x281 = INT16_MIN;
	static int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MAX;

	t53 = ((x281/(x282-x283))&x284);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = INT16_MAX;
	uint32_t x286 = 1U;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t54 = 3U;

	t54 = ((x285/(x286-x287))&x288);

	if (t54 != 254U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x290 = INT64_MIN;
	uint8_t x292 = 0U;
	uint64_t t55 = 63433LLU;

	t55 = ((x289/(x290-x291))&x292);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x294 = 1097430;
	uint8_t x295 = 48U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t56 = -1280781;

	t56 = ((x293/(x294-x295))&x296);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x297 = INT64_MAX;
	volatile int8_t x298 = INT8_MIN;
	int16_t x299 = 2;

	t57 = ((x297/(x298-x299))&x300);

	if (t57 != -70949015668113660LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x301 = 216129983829732LLU;
	static int64_t x302 = -1LL;
	int8_t x303 = INT8_MAX;

	t58 = ((x301/(x302-x303))&x304);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x308 = 493684LLU;
	static uint64_t t59 = 22828626LLU;

	t59 = ((x305/(x306-x307))&x308);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	int64_t x312 = 724192215LL;
	int64_t t60 = -25658794112LL;

	t60 = ((x309/(x310-x311))&x312);

	if (t60 != 724192215LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MIN;
	int8_t x316 = 0;
	uint32_t t61 = 2429203U;

	t61 = ((x313/(x314-x315))&x316);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x317 = 29U;
	volatile uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MIN;
	static volatile uint64_t t62 = 2232985778096974LLU;

	t62 = ((x317/(x318-x319))&x320);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = INT64_MAX;
	int8_t x322 = 1;
	int8_t x324 = -1;
	static volatile int64_t t63 = 144883512LL;

	t63 = ((x321/(x322-x323))&x324);

	if (t63 != 2148290957LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x326 = 31750627U;
	int8_t x327 = 26;
	int8_t x328 = INT8_MIN;
	uint32_t t64 = 202969886U;

	t64 = ((x325/(x326-x327))&x328);

	if (t64 != 128U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x329 = 33U;
	int32_t x330 = -1;
	uint16_t x331 = UINT16_MAX;

	t65 = ((x329/(x330-x331))&x332);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MAX;
	int64_t t66 = 373696617380130LL;

	t66 = ((x337/(x338-x339))&x340);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x343 = 260636755444300LLU;
	int16_t x344 = INT16_MIN;
	volatile uint64_t t67 = 285867044LLU;

	t67 = ((x341/(x342-x343))&x344);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x346 = 185;
	static volatile uint32_t x347 = 32U;
	volatile int8_t x348 = INT8_MAX;
	volatile uint32_t t68 = 4052U;

	t68 = ((x345/(x346-x347))&x348);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x349 = INT8_MIN;
	volatile uint8_t x350 = 0U;
	uint8_t x352 = 50U;
	volatile int32_t t69 = -336;

	t69 = ((x349/(x350-x351))&x352);

	if (t69 != 50) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x358 = UINT16_MAX;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = INT32_MAX;
	volatile int64_t t70 = -211488436119188329LL;

	t70 = ((x357/(x358-x359))&x360);

	if (t70 != 2139062144LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x361 = -118427;
	uint16_t x362 = 1U;
	uint16_t x363 = 818U;
	static uint32_t x364 = 759769505U;
	static volatile uint32_t t71 = 191112U;

	t71 = ((x361/(x362-x363))&x364);

	if (t71 != 128U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x369 = -8382615567LL;
	static volatile uint64_t x370 = UINT64_MAX;
	volatile int64_t x371 = INT64_MIN;
	uint64_t x372 = 968779699146045LLU;
	volatile uint64_t t72 = 30201062383578LLU;

	t72 = ((x369/(x370-x371))&x372);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -1;
	volatile uint16_t x376 = UINT16_MAX;

	t73 = ((x373/(x374-x375))&x376);

	if (t73 != 1032) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x377 = -5;
	uint16_t x379 = 4U;
	static volatile int16_t x380 = 0;
	volatile int32_t t74 = 26379021;

	t74 = ((x377/(x378-x379))&x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = 1;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = 40U;
	int32_t t75 = 61;

	t75 = ((x381/(x382-x383))&x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	volatile int16_t x387 = -1;
	int32_t x388 = -342952326;
	int32_t t76 = 1;

	t76 = ((x385/(x386-x387))&x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = 1064;
	int64_t t77 = 30449432018LL;

	t77 = ((x393/(x394-x395))&x396);

	if (t77 != 177LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x397 = 15U;
	int32_t x400 = 2;
	uint32_t t78 = 0U;

	t78 = ((x397/(x398-x399))&x400);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = 1618278LL;
	int32_t x403 = INT32_MIN;
	int32_t x404 = -1;
	int64_t t79 = -3631568959395090105LL;

	t79 = ((x401/(x402-x403))&x404);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x405 = -1;
	volatile uint64_t x406 = 2353089820199097251LLU;
	int16_t x407 = INT16_MAX;
	volatile int16_t x408 = INT16_MIN;
	volatile uint64_t t80 = 21330LLU;

	t80 = ((x405/(x406-x407))&x408);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MIN;
	volatile int64_t x412 = -14633968966358LL;
	volatile uint64_t t81 = 6662981707203682690LLU;

	t81 = ((x409/(x410-x411))&x412);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = INT16_MAX;
	uint8_t x414 = UINT8_MAX;
	int64_t x415 = 11606083518431709LL;
	int64_t x416 = INT64_MAX;
	int64_t t82 = 773043006834LL;

	t82 = ((x413/(x414-x415))&x416);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x417 = INT32_MAX;
	volatile int8_t x418 = INT8_MIN;
	uint8_t x419 = 1U;
	int32_t x420 = INT32_MIN;

	t83 = ((x417/(x418-x419))&x420);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x422 = 365080559U;
	volatile int32_t x424 = INT32_MIN;
	static uint32_t t84 = 2U;

	t84 = ((x421/(x422-x423))&x424);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x425 = 23;
	int64_t x426 = 57101093LL;
	uint16_t x427 = 20U;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t85 = 7884844517752LLU;

	t85 = ((x425/(x426-x427))&x428);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x433 = 2U;
	static int64_t x436 = INT64_MIN;
	static volatile uint64_t t86 = 865LLU;

	t86 = ((x433/(x434-x435))&x436);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x438 = -1LL;
	int64_t x439 = INT64_MIN;
	static int32_t x440 = INT32_MIN;
	volatile int64_t t87 = -13392099856289998LL;

	t87 = ((x437/(x438-x439))&x440);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x442 = 3263U;
	int64_t x443 = 26026962LL;
	uint64_t t88 = 18063LLU;

	t88 = ((x441/(x442-x443))&x444);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x445 = 14U;
	static volatile int32_t x446 = -1;
	int64_t x447 = INT64_MIN;
	volatile int32_t x448 = 1367853;
	volatile int64_t t89 = 787586LL;

	t89 = ((x445/(x446-x447))&x448);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x449 = 844565U;
	uint8_t x450 = 9U;
	static int16_t x451 = -4;
	int64_t x452 = INT64_MAX;
	volatile int64_t t90 = 36202LL;

	t90 = ((x449/(x450-x451))&x452);

	if (t90 != 64966LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x454 = 1117092LLU;
	int8_t x455 = 0;
	uint64_t t91 = 110727525LLU;

	t91 = ((x453/(x454-x455))&x456);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x458 = 0U;
	volatile uint32_t x459 = 4106U;
	volatile int16_t x460 = -101;
	static int64_t t92 = -79902232651LL;

	t92 = ((x457/(x458-x459))&x460);

	if (t92 != -2147485797LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x462 = -778;
	volatile uint64_t t93 = 78237LLU;

	t93 = ((x461/(x462-x463))&x464);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x465 = UINT8_MAX;
	volatile int64_t x466 = -1LL;
	uint64_t x467 = 8655047303646802LLU;
	volatile int8_t x468 = -1;

	t94 = ((x465/(x466-x467))&x468);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x469 = INT8_MIN;
	int16_t x470 = 169;
	uint32_t x471 = UINT32_MAX;
	int8_t x472 = -1;
	uint32_t t95 = 1U;

	t95 = ((x469/(x470-x471))&x472);

	if (t95 != 25264512U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = -1;
	static uint32_t t96 = 117227106U;

	t96 = ((x473/(x474-x475))&x476);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x477 = UINT32_MAX;
	int64_t x478 = -1LL;
	volatile uint16_t x479 = 0U;
	static int64_t t97 = -22LL;

	t97 = ((x477/(x478-x479))&x480);

	if (t97 != -4294967296LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x482 = -1;
	uint64_t x483 = 1614852101739483LLU;
	volatile uint64_t t98 = 452LLU;

	t98 = ((x481/(x482-x483))&x484);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x486 = -86553;
	int32_t x487 = 7;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t99 = 1;

	t99 = ((x485/(x486-x487))&x488);

	if (t99 != -32768) { NG(); } else { ; }
	
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

