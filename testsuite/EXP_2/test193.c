#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = INT32_MIN;
int64_t t0 = -705762LL;
int16_t x5 = INT16_MIN;
uint32_t x8 = 50583U;
volatile uint32_t t1 = 1U;
int16_t x13 = INT16_MAX;
int16_t x17 = -25;
static int8_t x18 = -1;
int64_t x25 = INT64_MIN;
int64_t t5 = 152669LL;
int32_t x30 = -3781;
volatile uint64_t t6 = 5256589600145973LLU;
uint16_t x33 = 157U;
int32_t x48 = 83394;
int16_t x54 = -1;
static uint32_t x56 = UINT32_MAX;
uint64_t t13 = 637LLU;
int16_t x71 = INT16_MIN;
uint16_t x75 = 1U;
uint32_t t15 = 3U;
int8_t x78 = INT8_MIN;
int64_t x81 = INT64_MAX;
int16_t x92 = INT16_MAX;
uint32_t x94 = 1214U;
uint64_t t21 = 58679103898934LLU;
uint32_t t22 = 5113513U;
volatile uint32_t x108 = UINT32_MAX;
int32_t x118 = -1;
uint32_t t26 = 3U;
uint32_t x127 = UINT32_MAX;
int32_t x141 = INT32_MIN;
uint32_t t30 = 35932822U;
int64_t x153 = 1335910207LL;
int64_t t33 = 4703074481131526LL;
volatile int16_t x159 = INT16_MIN;
int8_t x160 = INT8_MAX;
static volatile uint64_t t34 = 12557191LLU;
static int64_t x171 = INT64_MIN;
volatile int64_t t36 = 696094LL;
volatile int16_t x183 = INT16_MAX;
int16_t x189 = 3;
int64_t x191 = -1LL;
int16_t x195 = -1;
int32_t t41 = -818990964;
int64_t x208 = INT64_MIN;
uint8_t x217 = UINT8_MAX;
int32_t x221 = -1;
volatile int64_t t46 = 110772815272LL;
int32_t x228 = 229;
int32_t x235 = INT32_MAX;
volatile int16_t x236 = INT16_MIN;
volatile uint32_t t48 = 16U;
volatile uint64_t t50 = 479293LLU;
static uint16_t x247 = 16U;
static uint64_t x250 = UINT64_MAX;
int8_t x264 = 2;
volatile int32_t t54 = 2;
int64_t x267 = -76207110846LL;
static uint8_t x272 = 3U;
int16_t x283 = -389;
static volatile int64_t t59 = 1566357502428393LL;
uint32_t x288 = 5348U;
int32_t t65 = -20522;
static uint64_t x316 = UINT64_MAX;
uint32_t x329 = 3915U;
int16_t x331 = INT16_MIN;
uint32_t x341 = 13282464U;
int64_t x343 = -1LL;
int8_t x354 = 1;
int32_t t73 = 1129;
uint32_t t74 = 1719279U;
int64_t x361 = -1LL;
int64_t x362 = -1LL;
volatile uint16_t x363 = 5374U;
static uint8_t x365 = UINT8_MAX;
static uint8_t x371 = 53U;
int64_t t77 = -1396098928338999244LL;
static int32_t x373 = INT32_MAX;
volatile uint16_t x380 = UINT16_MAX;
uint64_t x394 = UINT64_MAX;
int32_t t83 = -35169856;
int8_t x412 = 3;
static uint32_t x419 = UINT32_MAX;
int32_t x439 = INT32_MAX;
int8_t x446 = 37;
int64_t x447 = 41766592069293656LL;
static volatile int16_t x454 = INT16_MIN;
int64_t x463 = 466352533890449LL;
int32_t x489 = -1;
int64_t x491 = INT64_MAX;
static volatile int8_t x492 = 1;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	static int32_t x3 = -3426993;

	t0 = ((x1-(x2-x3))&x4);

	if (t0 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = -1;
	uint16_t x7 = 8577U;

	t1 = ((x5-(x6-x7))&x8);

	if (t1 != 33154U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int64_t x10 = 8020649375834LL;
	volatile int64_t x11 = 204LL;
	int8_t x12 = INT8_MIN;
	int64_t t2 = -981920116LL;

	t2 = ((x9-(x10-x11))&x12);

	if (t2 != -8020649375744LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = UINT16_MAX;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 314;

	t3 = ((x13-(x14-x15))&x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x19 = 111U;
	int32_t x20 = 2836585;
	int32_t t4 = 5;

	t4 = ((x17-(x18-x19))&x20);

	if (t4 != 65) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	volatile int16_t x27 = -1;
	uint32_t x28 = 1U;

	t5 = ((x25-(x26-x27))&x28);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = -1;
	uint16_t x31 = 46U;
	uint64_t x32 = 34502531414320LLU;

	t6 = ((x29-(x30-x31))&x32);

	if (t6 != 2096LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x34 = 89323071U;
	int16_t x35 = -1;
	int8_t x36 = -1;
	volatile uint32_t t7 = 883U;

	t7 = ((x33-(x34-x35))&x36);

	if (t7 != 4205644381U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	static uint32_t x38 = 2087919953U;
	int8_t x39 = INT8_MAX;
	int16_t x40 = -1;
	volatile uint32_t t8 = 530566739U;

	t8 = ((x37-(x38-x39))&x40);

	if (t8 != 2207047597U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	int32_t x46 = -1;
	int8_t x47 = INT8_MIN;
	volatile int64_t t9 = 607022885759947658LL;

	t9 = ((x45-(x46-x47))&x48);

	if (t9 != 83328LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 11637U;
	static int16_t x50 = INT16_MIN;
	int8_t x51 = 2;
	static uint8_t x52 = 1U;
	volatile int32_t t10 = -121328;

	t10 = ((x49-(x50-x51))&x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 44848540U;
	uint16_t x55 = UINT16_MAX;
	volatile uint32_t t11 = 50U;

	t11 = ((x53-(x54-x55))&x56);

	if (t11 != 44914076U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = 182;
	uint8_t x58 = 6U;
	uint32_t x59 = 4974U;
	static volatile uint32_t x60 = 109411U;
	uint32_t t12 = 145098U;

	t12 = ((x57-(x58-x59))&x60);

	if (t12 != 2U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	static int64_t x66 = 6439367646LL;
	uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MAX;

	t13 = ((x65-(x66-x67))&x68);

	if (t13 != 3105LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = INT16_MAX;
	int32_t x70 = 198316525;
	int8_t x72 = -21;
	static volatile int32_t t14 = 41124522;

	t14 = ((x69-(x70-x71))&x72);

	if (t14 != -198316542) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 229U;
	int16_t x74 = INT16_MIN;
	int16_t x76 = INT16_MAX;

	t15 = ((x73-(x74-x75))&x76);

	if (t15 != 230U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -106757418;
	volatile int16_t x79 = -28;
	int16_t x80 = -1;
	volatile int32_t t16 = -1487;

	t16 = ((x77-(x78-x79))&x80);

	if (t16 != -106757318) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x82 = UINT8_MAX;
	volatile uint8_t x83 = 110U;
	uint64_t x84 = 131011920018589877LLU;
	volatile uint64_t t17 = 95473330LLU;

	t17 = ((x81-(x82-x83))&x84);

	if (t17 != 131011920018589732LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 772628420460762911LL;
	static volatile int8_t x86 = INT8_MIN;
	uint64_t x87 = UINT64_MAX;
	static volatile uint32_t x88 = 1U;
	static volatile uint64_t t18 = 21LLU;

	t18 = ((x85-(x86-x87))&x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	static uint32_t x90 = UINT32_MAX;
	static volatile int8_t x91 = 2;
	volatile uint32_t t19 = 71992655U;

	t19 = ((x89-(x90-x91))&x92);

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -11;
	int16_t x95 = INT16_MIN;
	static int8_t x96 = 31;
	static uint32_t t20 = 29U;

	t20 = ((x93-(x94-x95))&x96);

	if (t20 != 23U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MIN;
	int64_t x100 = -1LL;

	t21 = ((x97-(x98-x99))&x100);

	if (t21 != 2147483648LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = 12715;
	int8_t x103 = INT8_MIN;
	static int8_t x104 = 1;

	t22 = ((x101-(x102-x103))&x104);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 2497742637323864LL;
	uint8_t x106 = 41U;
	int64_t x107 = -1LL;
	volatile int64_t t23 = -3499494016866171590LL;

	t23 = ((x105-(x106-x107))&x108);

	if (t23 != 111367726LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = UINT64_MAX;
	volatile int64_t x110 = -1LL;
	int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MIN;
	uint64_t t24 = 6867551642904LLU;

	t24 = ((x109-(x110-x111))&x112);

	if (t24 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	uint32_t x114 = 59698690U;
	volatile uint32_t x115 = 1026547235U;
	volatile uint16_t x116 = 6637U;
	volatile uint32_t t25 = 499U;

	t25 = ((x113-(x114-x115))&x116);

	if (t25 != 4129U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x117 = -1;
	static int32_t x119 = -106679;
	uint32_t x120 = 3294U;

	t26 = ((x117-(x118-x119))&x120);

	if (t26 != 3144U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 20U;
	static int64_t x126 = -1LL;
	static int16_t x128 = INT16_MIN;
	static volatile int64_t t27 = 890LL;

	t27 = ((x125-(x126-x127))&x128);

	if (t27 != 4294967296LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	int32_t x130 = 1;
	int64_t x131 = -1LL;
	int8_t x132 = -3;
	volatile int64_t t28 = 1303376017699LL;

	t28 = ((x129-(x130-x131))&x132);

	if (t28 != -3LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = 874075LLU;
	uint64_t x134 = UINT64_MAX;
	static uint16_t x135 = UINT16_MAX;
	int32_t x136 = 5;
	static uint64_t t29 = 135633427140443LLU;

	t29 = ((x133-(x134-x135))&x136);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x142 = 124982309U;
	uint8_t x143 = UINT8_MAX;
	int32_t x144 = 41954;

	t30 = ((x141-(x142-x143))&x144);

	if (t30 != 41154U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -1;
	uint32_t x146 = 1390405U;
	int32_t x147 = INT32_MIN;
	volatile uint16_t x148 = UINT16_MAX;
	uint32_t t31 = 1344760063U;

	t31 = ((x145-(x146-x147))&x148);

	if (t31 != 51386U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 850415086U;
	static volatile uint32_t x150 = 73601U;
	uint8_t x151 = 7U;
	int64_t x152 = INT64_MAX;
	int64_t t32 = 74002556LL;

	t32 = ((x149-(x150-x151))&x152);

	if (t32 != 850341492LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = -11694946480LL;
	volatile int64_t x155 = 94740347315102LL;
	static uint16_t x156 = 0U;

	t33 = ((x153-(x154-x155))&x156);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	uint64_t x158 = 1120469569LLU;

	t34 = ((x157-(x158-x159))&x160);

	if (t34 != 63LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -19;
	uint16_t x166 = 2U;
	volatile int16_t x167 = INT16_MIN;
	static int8_t x168 = INT8_MIN;
	static int32_t t35 = 4556;

	t35 = ((x165-(x166-x167))&x168);

	if (t35 != -32896) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 39345884U;
	int32_t x170 = INT32_MIN;
	static int16_t x172 = 1;

	t36 = ((x169-(x170-x171))&x172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x173 = 392054382039511LL;
	uint8_t x174 = UINT8_MAX;
	volatile uint8_t x175 = UINT8_MAX;
	int32_t x176 = -7362483;
	static volatile int64_t t37 = 1613855921529847LL;

	t37 = ((x173-(x174-x175))&x176);

	if (t37 != 392054379937861LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = INT8_MIN;
	static uint64_t x178 = 2471385725LLU;
	int32_t x179 = INT32_MIN;
	static int32_t x180 = INT32_MAX;
	volatile uint64_t t38 = 59639443806752300LLU;

	t38 = ((x177-(x178-x179))&x180);

	if (t38 != 1823581443LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x181 = 8359960LL;
	uint32_t x182 = 6U;
	uint8_t x184 = 18U;
	volatile int64_t t39 = -102458641442LL;

	t39 = ((x181-(x182-x183))&x184);

	if (t39 != 16LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x190 = INT32_MIN;
	int16_t x192 = 0;
	volatile int64_t t40 = 33204013LL;

	t40 = ((x189-(x190-x191))&x192);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x193 = -825486473;
	int32_t x194 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;

	t41 = ((x193-(x194-x195))&x196);

	if (t41 != 4982) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = INT32_MAX;
	volatile uint16_t x206 = UINT16_MAX;
	volatile uint32_t x207 = 504378U;
	int64_t t42 = -11325819936459LL;

	t42 = ((x205-(x206-x207))&x208);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = -5;
	static uint32_t x210 = 252U;
	int64_t x211 = 63792558705329075LL;
	int8_t x212 = INT8_MIN;
	int64_t t43 = -21828583957LL;

	t43 = ((x209-(x210-x211))&x212);

	if (t43 != 63792558705328768LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x213 = INT16_MIN;
	volatile uint8_t x214 = 5U;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MAX;
	uint64_t t44 = 4359685LLU;

	t44 = ((x213-(x214-x215))&x216);

	if (t44 != 32762LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x218 = 3;
	volatile int8_t x219 = INT8_MIN;
	volatile int64_t x220 = INT64_MAX;
	volatile int64_t t45 = 372971405LL;

	t45 = ((x217-(x218-x219))&x220);

	if (t45 != 124LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x222 = -1LL;
	int32_t x223 = INT32_MAX;
	volatile int8_t x224 = -1;

	t46 = ((x221-(x222-x223))&x224);

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = -1LL;
	uint8_t x226 = UINT8_MAX;
	uint16_t x227 = UINT16_MAX;
	int64_t t47 = -103221122211806LL;

	t47 = ((x225-(x226-x227))&x228);

	if (t47 != 229LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MIN;
	volatile uint32_t x234 = 2543086U;

	t48 = ((x233-(x234-x235))&x236);

	if (t48 != 2144894976U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = 0U;
	uint32_t x238 = 2U;
	static volatile int8_t x239 = INT8_MIN;
	int32_t x240 = 23300;
	uint32_t t49 = 435U;

	t49 = ((x237-(x238-x239))&x240);

	if (t49 != 23300U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x241 = UINT64_MAX;
	volatile int64_t x242 = -1446546897763768783LL;
	int16_t x243 = -56;
	static uint8_t x244 = 124U;

	t50 = ((x241-(x242-x243))&x244);

	if (t50 != 20LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = 5;
	static int8_t x246 = -1;
	int16_t x248 = -1;
	static int32_t t51 = 101;

	t51 = ((x245-(x246-x247))&x248);

	if (t51 != 22) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile int32_t x251 = -1;
	int32_t x252 = INT32_MIN;
	uint64_t t52 = 6440371382367367932LLU;

	t52 = ((x249-(x250-x251))&x252);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = 100U;
	int64_t x258 = 4417LL;
	int64_t x259 = INT64_MAX;
	int16_t x260 = 1404;
	volatile int64_t t53 = -1959479954LL;

	t53 = ((x257-(x258-x259))&x260);

	if (t53 != 1312LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = 7U;
	static uint8_t x262 = UINT8_MAX;
	uint8_t x263 = 72U;

	t54 = ((x261-(x262-x263))&x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x265 = INT16_MIN;
	int32_t x266 = 1221256;
	int32_t x268 = INT32_MIN;
	int64_t t55 = -4195276833LL;

	t55 = ((x265-(x266-x267))&x268);

	if (t55 != -77309411328LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x269 = -1LL;
	uint64_t x270 = 1061010LLU;
	static int8_t x271 = 27;
	uint64_t t56 = 1986364LLU;

	t56 = ((x269-(x270-x271))&x272);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x273 = 35U;
	uint8_t x274 = 0U;
	uint8_t x275 = 7U;
	static int32_t x276 = INT32_MIN;
	static volatile uint32_t t57 = 82684072U;

	t57 = ((x273-(x274-x275))&x276);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = -3;
	int8_t x278 = -1;
	int8_t x279 = 14;
	uint8_t x280 = 30U;
	int32_t t58 = 1;

	t58 = ((x277-(x278-x279))&x280);

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -1LL;
	static int16_t x282 = INT16_MIN;
	int32_t x284 = -454675;

	t59 = ((x281-(x282-x283))&x284);

	if (t59 != 3688LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x285 = INT32_MIN;
	uint32_t x286 = 969444173U;
	uint16_t x287 = 3U;
	volatile uint32_t t60 = 332361U;

	t60 = ((x285-(x286-x287))&x288);

	if (t60 != 5284U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	static int8_t x296 = INT8_MAX;
	volatile int64_t t61 = -6172362448601792LL;

	t61 = ((x293-(x294-x295))&x296);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = 20526017899LL;
	int16_t x298 = INT16_MIN;
	volatile int8_t x299 = -1;
	int32_t x300 = INT32_MIN;
	static int64_t t62 = 469172081LL;

	t62 = ((x297-(x298-x299))&x300);

	if (t62 != 19327352832LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	static uint16_t x304 = 1142U;
	volatile int32_t t63 = 82272;

	t63 = ((x301-(x302-x303))&x304);

	if (t63 != 118) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 1542LLU;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t64 = 186069025789203171LLU;

	t64 = ((x305-(x306-x307))&x308);

	if (t64 != 4294965632LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x309 = 779U;
	int16_t x310 = -7812;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = 189;

	t65 = ((x309-(x310-x311))&x312);

	if (t65 != 140) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x313 = INT8_MIN;
	static uint16_t x314 = UINT16_MAX;
	volatile int32_t x315 = -1;
	uint64_t t66 = 629374072LLU;

	t66 = ((x313-(x314-x315))&x316);

	if (t66 != 18446744073709485952LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x321 = 92534590U;
	volatile uint32_t x322 = 25258U;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	uint32_t t67 = 1250023510U;

	t67 = ((x321-(x322-x323))&x324);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x330 = INT16_MIN;
	volatile int64_t x332 = INT64_MAX;
	int64_t t68 = -17184592810LL;

	t68 = ((x329-(x330-x331))&x332);

	if (t68 != 3915LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x333 = 257U;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t69 = 3829512330522881814LLU;

	t69 = ((x333-(x334-x335))&x336);

	if (t69 != 18446744071562068353LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x342 = -1;
	int32_t x344 = INT32_MAX;
	int64_t t70 = 55LL;

	t70 = ((x341-(x342-x343))&x344);

	if (t70 != 13282464LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x345 = 448;
	static uint32_t x346 = UINT32_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	static volatile int32_t x348 = INT32_MIN;
	uint32_t t71 = 1124389328U;

	t71 = ((x345-(x346-x347))&x348);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x349 = -35718898830423LL;
	static int16_t x350 = 1979;
	int32_t x351 = -1;
	static volatile int8_t x352 = -23;
	volatile int64_t t72 = -30542639162371225LL;

	t72 = ((x349-(x350-x351))&x352);

	if (t72 != -35718898832407LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = -1;
	int8_t x355 = INT8_MAX;
	uint16_t x356 = 11U;

	t73 = ((x353-(x354-x355))&x356);

	if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x357 = INT16_MAX;
	int16_t x358 = 0;
	uint32_t x359 = 35644021U;
	int32_t x360 = -1;

	t74 = ((x357-(x358-x359))&x360);

	if (t74 != 35676788U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x364 = UINT64_MAX;
	uint64_t t75 = 203343692LLU;

	t75 = ((x361-(x362-x363))&x364);

	if (t75 != 5374LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x366 = -91979009266187103LL;
	int32_t x367 = 34572;
	int32_t x368 = INT32_MAX;
	int64_t t76 = -61361LL;

	t76 = ((x365-(x366-x367))&x368);

	if (t76 != 1847264106LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = -51LL;
	uint32_t x370 = 44644029U;
	int16_t x372 = INT16_MAX;

	t77 = ((x369-(x370-x371))&x372);

	if (t77 != 18757LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x374 = -3;
	volatile int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	static volatile int64_t t78 = 28259218825384LL;

	t78 = ((x373-(x374-x375))&x376);

	if (t78 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x377 = INT8_MAX;
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 505620LLU;
	uint64_t t79 = 14399456229LLU;

	t79 = ((x377-(x378-x379))&x380);

	if (t79 != 46996LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = -1;
	int32_t x382 = -1;
	volatile int64_t x383 = INT64_MAX;
	static volatile int8_t x384 = INT8_MIN;
	int64_t t80 = -732282268046LL;

	t80 = ((x381-(x382-x383))&x384);

	if (t80 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = 16U;
	static int64_t x386 = -268161LL;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t81 = 751219260LLU;

	t81 = ((x385-(x386-x387))&x388);

	if (t81 != 268049LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = INT32_MIN;
	int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t82 = 57819488343464287LLU;

	t82 = ((x393-(x394-x395))&x396);

	if (t82 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x397 = -1;
	int8_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	volatile int16_t x400 = 0;

	t83 = ((x397-(x398-x399))&x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = -1;
	int8_t x410 = INT8_MIN;
	volatile int32_t x411 = -624;
	int32_t t84 = -495639;

	t84 = ((x409-(x410-x411))&x412);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x413 = 1141786710782LLU;
	int8_t x414 = 7;
	int32_t x415 = -249995359;
	static int16_t x416 = 4053;
	volatile uint64_t t85 = 19347860695230753LLU;

	t85 = ((x413-(x414-x415))&x416);

	if (t85 != 656LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = -5;
	int16_t x418 = 0;
	int64_t x420 = -1LL;
	volatile int64_t t86 = -617097530902222022LL;

	t86 = ((x417-(x418-x419))&x420);

	if (t86 != 4294967290LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x421 = INT32_MIN;
	uint32_t x422 = 1350094719U;
	uint8_t x423 = UINT8_MAX;
	int32_t x424 = -1;
	uint32_t t87 = 250945348U;

	t87 = ((x421-(x422-x423))&x424);

	if (t87 != 797389184U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x429 = INT8_MAX;
	static volatile int16_t x430 = INT16_MAX;
	volatile int16_t x431 = -2;
	int64_t x432 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = ((x429-(x430-x431))&x432);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = -1;
	int8_t x438 = -1;
	int8_t x440 = -1;
	volatile int32_t t89 = INT32_MAX;

	t89 = ((x437-(x438-x439))&x440);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x441 = 107U;
	uint64_t x442 = 9641558279LLU;
	uint32_t x443 = UINT32_MAX;
	int64_t x444 = INT64_MIN;
	uint64_t t90 = 225036103222LLU;

	t90 = ((x441-(x442-x443))&x444);

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x445 = INT8_MIN;
	int16_t x448 = INT16_MIN;
	int64_t t91 = -13597LL;

	t91 = ((x445-(x446-x447))&x448);

	if (t91 != 41766592069271552LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x449 = 38U;
	volatile int8_t x450 = INT8_MAX;
	int16_t x451 = -13;
	static uint8_t x452 = UINT8_MAX;
	volatile int32_t t92 = -817171884;

	t92 = ((x449-(x450-x451))&x452);

	if (t92 != 154) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x453 = UINT16_MAX;
	int8_t x455 = INT8_MAX;
	volatile uint16_t x456 = UINT16_MAX;
	int32_t t93 = 230;

	t93 = ((x453-(x454-x455))&x456);

	if (t93 != 32894) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x461 = UINT32_MAX;
	int16_t x462 = INT16_MIN;
	int32_t x464 = 3;
	volatile int64_t t94 = 2204345059941LL;

	t94 = ((x461-(x462-x463))&x464);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x469 = INT16_MAX;
	static int64_t x470 = INT64_MAX;
	volatile uint32_t x471 = UINT32_MAX;
	uint64_t x472 = UINT64_MAX;
	uint64_t t95 = 9558LLU;

	t95 = ((x469-(x470-x471))&x472);

	if (t95 != 9223372041149775871LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MAX;
	int32_t x475 = 513980802;
	uint64_t x476 = 85087255LLU;
	volatile uint64_t t96 = 96144455877137LLU;

	t96 = ((x473-(x474-x475))&x476);

	if (t96 != 67244034LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x481 = UINT8_MAX;
	static volatile int8_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	volatile uint8_t x484 = 87U;
	volatile int32_t t97 = 582264053;

	t97 = ((x481-(x482-x483))&x484);

	if (t97 != 87) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x485 = 3;
	int8_t x486 = INT8_MIN;
	uint8_t x487 = UINT8_MAX;
	volatile uint32_t x488 = UINT32_MAX;
	uint32_t t98 = 2704773U;

	t98 = ((x485-(x486-x487))&x488);

	if (t98 != 386U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x490 = INT16_MAX;
	volatile int64_t t99 = -15LL;

	t99 = ((x489-(x490-x491))&x492);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

