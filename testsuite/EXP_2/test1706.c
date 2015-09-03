#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x24 = UINT32_MAX;
volatile int64_t t3 = 1881471801779644LL;
int8_t x30 = -10;
int8_t x35 = INT8_MIN;
int16_t x38 = -1;
int64_t x43 = -4082LL;
static int64_t t8 = 2081509859LL;
static volatile int64_t t10 = 2001598548173027297LL;
volatile uint16_t x62 = UINT16_MAX;
int16_t x69 = INT16_MIN;
int16_t x71 = -6;
volatile uint64_t x76 = 11526872273LLU;
int16_t x77 = 0;
int16_t x89 = INT16_MIN;
uint32_t x90 = 4968183U;
int64_t x93 = INT64_MAX;
static volatile uint64_t t17 = 5386LLU;
uint16_t x101 = 125U;
uint32_t x102 = 1169U;
volatile int64_t x103 = 62027244379LL;
volatile int8_t x106 = INT8_MAX;
static uint32_t t19 = 1U;
volatile int64_t t20 = -495555010621960522LL;
static volatile int16_t x120 = INT16_MAX;
uint16_t x128 = 15528U;
volatile int64_t t22 = 16208LL;
uint8_t x142 = 14U;
static int32_t x144 = 1;
volatile uint32_t t23 = 5U;
volatile uint8_t x157 = UINT8_MAX;
int8_t x166 = 0;
int32_t x170 = 6;
int64_t t27 = 12400025768989LL;
int16_t x184 = 1;
static volatile int64_t t28 = 11287051693529LL;
uint8_t x191 = 46U;
static int64_t t30 = -30577377330577LL;
volatile int32_t x194 = -6060410;
int16_t x195 = INT16_MIN;
int8_t x198 = INT8_MIN;
int16_t x214 = -444;
int64_t x216 = -1LL;
static volatile uint8_t x217 = 0U;
volatile int8_t x226 = -1;
uint16_t x230 = UINT16_MAX;
volatile uint64_t t39 = 58168040LLU;
uint16_t x239 = 8564U;
static uint8_t x251 = 9U;
static volatile uint16_t x267 = 494U;
uint16_t x280 = 3U;
int16_t x290 = INT16_MIN;
uint32_t t50 = 110U;
int32_t x294 = -1;
volatile uint64_t t52 = 287685182470868LLU;
static uint16_t x307 = 0U;
uint32_t x310 = UINT32_MAX;
static volatile int64_t x311 = -7LL;
int8_t x316 = 1;
uint32_t x317 = UINT32_MAX;
volatile uint64_t t59 = 1084776054958205LLU;
int64_t x330 = -69717824419LL;
uint8_t x335 = 118U;
volatile int32_t x337 = 13;
static int32_t x351 = 11373512;
uint64_t x357 = 1723LLU;
volatile uint8_t x369 = UINT8_MAX;
uint8_t x372 = 51U;
uint64_t x377 = 139617232LLU;
int8_t x379 = INT8_MIN;
volatile int32_t x395 = -2898428;
uint16_t x404 = 595U;
int64_t x407 = 24247886LL;
int32_t x412 = INT32_MAX;
volatile int32_t x413 = INT32_MIN;
int64_t t76 = -911897041293LL;
int32_t x419 = INT32_MAX;
volatile int16_t x420 = -1;
volatile int32_t x421 = INT32_MIN;
volatile int64_t x423 = INT64_MAX;
static int16_t x427 = INT16_MIN;
int32_t x442 = INT32_MAX;
int8_t x444 = 28;
int8_t x447 = -4;
int16_t x451 = INT16_MIN;
uint64_t x454 = UINT64_MAX;
volatile uint64_t t85 = 75LLU;
int32_t x474 = INT32_MIN;
int64_t x475 = 228919LL;
volatile int16_t x478 = INT16_MIN;
int16_t x488 = -1;
int64_t x489 = INT64_MAX;
int64_t t93 = -212245012386679LL;
volatile int8_t x494 = 47;
uint8_t x496 = 2U;
int16_t x504 = INT16_MAX;
int32_t t97 = -46775;
uint64_t x513 = 3225540889381LLU;


void f0(void) {
	uint64_t x1 = 1018457446852LLU;
	volatile int32_t x2 = 7859180;
	volatile int8_t x3 = 1;
	uint16_t x4 = 158U;
	volatile uint64_t t0 = 1160LLU;

	t0 = ((x1-(x2&x3))*x4);

	if (t0 != 160916276602616LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static volatile uint8_t x6 = 1U;
	int64_t x7 = 208857420082338736LL;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = -1762340919702725LL;

	t1 = ((x5-(x6&x7))*x8);

	if (t1 != 32385LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int32_t x14 = -1644;
	static int64_t x15 = INT64_MIN;
	int8_t x16 = 1;
	static int64_t t2 = INT64_MAX;

	t2 = ((x13-(x14&x15))*x16);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x21 = 19815U;
	int64_t x22 = -9944413280274LL;
	static int8_t x23 = 0;

	t3 = ((x21-(x22&x23))*x24);

	if (t3 != 85104776950425LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MAX;
	int64_t x27 = -1LL;
	int16_t x28 = 15;
	volatile int64_t t4 = -11620765637543595LL;

	t4 = ((x25-(x26&x27))*x28);

	if (t4 != -32211763200LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	int64_t x31 = 1303739131880665LL;
	int8_t x32 = -1;
	static int64_t t5 = -7LL;

	t5 = ((x29-(x30&x31))*x32);

	if (t5 != 1303739131880657LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	int16_t x34 = -1;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t6 = 585;

	t6 = ((x33-(x34&x35))*x36);

	if (t6 != 65025) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int16_t x39 = -1;
	int32_t x40 = -1;
	volatile int32_t t7 = -60;

	t7 = ((x37-(x38&x39))*x40);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -1;
	int32_t x42 = INT32_MIN;
	static int16_t x44 = INT16_MIN;

	t8 = ((x41-(x42&x43))*x44);

	if (t8 != -70368744144896LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 65734U;
	int16_t x50 = 1;
	volatile int32_t x51 = INT32_MAX;
	static int16_t x52 = 68;
	volatile uint32_t t9 = 151U;

	t9 = ((x49-(x50&x51))*x52);

	if (t9 != 4469844U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 37U;
	volatile int32_t x58 = 275437365;
	int64_t x59 = -6459552455LL;
	static int8_t x60 = -1;

	t10 = ((x57-(x58&x59))*x60);

	if (t10 != 275383564LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MAX;
	int16_t x63 = -494;
	volatile int16_t x64 = -18;
	volatile int32_t t11 = 0;

	t11 = ((x61-(x62&x63))*x64);

	if (t11 != 580950) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x70 = 304283U;
	int16_t x72 = -1;
	uint32_t t12 = 7U;

	t12 = ((x69-(x70&x71))*x72);

	if (t12 != 337050U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 6U;
	static volatile int8_t x75 = INT8_MIN;
	static volatile uint64_t t13 = 561957682043LLU;

	t13 = ((x73-(x74&x75))*x76);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x78 = UINT8_MAX;
	uint32_t x79 = UINT32_MAX;
	static int32_t x80 = INT32_MAX;
	uint32_t t14 = 2U;

	t14 = ((x77-(x78&x79))*x80);

	if (t14 != 2147483903U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MIN;
	int64_t x82 = -10199478LL;
	static int16_t x83 = 3;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t15 = 2014764599728786856LL;

	t15 = ((x81-(x82&x83))*x84);

	if (t15 != -140746078257150LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x91 = INT32_MIN;
	static int8_t x92 = INT8_MIN;
	volatile uint32_t t16 = 59055U;

	t16 = ((x89-(x90&x91))*x92);

	if (t16 != 4194304U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x94 = 15LLU;
	int8_t x95 = 12;
	uint64_t x96 = 5110148LLU;

	t17 = ((x93-(x94&x95))*x96);

	if (t17 != 18446744073643119692LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x104 = INT32_MAX;
	volatile int64_t t18 = -2730339001269846LL;

	t18 = ((x101-(x102&x103))*x104);

	if (t18 != 231928233876LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x105 = UINT8_MAX;
	int8_t x107 = 18;
	uint32_t x108 = UINT32_MAX;

	t19 = ((x105-(x106&x107))*x108);

	if (t19 != 4294967059U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MAX;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;

	t20 = ((x109-(x110&x111))*x112);

	if (t20 != -549755813760LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x117 = INT16_MAX;
	volatile int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	volatile int32_t t21 = 219104;

	t21 = ((x117-(x118&x119))*x120);

	if (t21 != 1077870465) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = 7;
	int16_t x126 = 82;
	int64_t x127 = INT64_MIN;

	t22 = ((x125-(x126&x127))*x128);

	if (t22 != 108696LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x141 = INT8_MIN;
	static volatile uint32_t x143 = 387U;

	t23 = ((x141-(x142&x143))*x144);

	if (t23 != 4294967166U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x149 = INT8_MAX;
	int32_t x150 = INT32_MIN;
	static uint64_t x151 = 30878960702394993LLU;
	volatile int16_t x152 = -973;
	uint64_t t24 = 9221892714150115590LLU;

	t24 = ((x149-(x150&x151))*x152);

	if (t24 != 11598483453984513357LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x158 = INT8_MAX;
	int64_t x159 = INT64_MAX;
	static int8_t x160 = INT8_MIN;
	static int64_t t25 = 515064663279LL;

	t25 = ((x157-(x158&x159))*x160);

	if (t25 != -16384LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	volatile int8_t x168 = 1;
	static uint64_t t26 = 178LLU;

	t26 = ((x165-(x166&x167))*x168);

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x169 = -27636720LL;
	volatile int32_t x171 = INT32_MIN;
	static int32_t x172 = -15;

	t27 = ((x169-(x170&x171))*x172);

	if (t27 != 414550800LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -1LL;
	uint8_t x183 = 2U;

	t28 = ((x181-(x182&x183))*x184);

	if (t28 != 65533LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x185 = 982231206LL;
	uint64_t x186 = 387LLU;
	uint64_t x187 = 2448892914LLU;
	int8_t x188 = -18;
	volatile uint64_t t29 = 396LLU;

	t29 = ((x185-(x186&x187))*x188);

	if (t29 != 18446744056029396856LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	volatile uint8_t x192 = 2U;

	t30 = ((x189-(x190&x191))*x192);

	if (t30 != 131070LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = INT8_MIN;
	static uint8_t x196 = 88U;
	int32_t t31 = 1;

	t31 = ((x193-(x194&x195))*x196);

	if (t31 != 533451776) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = 0;
	int8_t x199 = -1;
	int32_t x200 = 299;
	static int32_t t32 = -112;

	t32 = ((x197-(x198&x199))*x200);

	if (t32 != 38272) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x201 = -2;
	int16_t x202 = -8366;
	uint16_t x203 = 72U;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t33 = 31230;

	t33 = ((x201-(x202&x203))*x204);

	if (t33 != -2162622) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x209 = 70U;
	static int32_t x210 = 80257050;
	static int32_t x211 = INT32_MIN;
	volatile uint64_t x212 = 314444175016507271LLU;
	volatile uint64_t t34 = 4354460818924025LLU;

	t34 = ((x209-(x210&x211))*x212);

	if (t34 != 3564348177445957354LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x213 = -1;
	static volatile int16_t x215 = 66;
	volatile int64_t t35 = -32814996873320184LL;

	t35 = ((x213-(x214&x215))*x216);

	if (t35 != 65LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	volatile int32_t x220 = 41;
	int32_t t36 = -11116931;

	t36 = ((x217-(x218&x219))*x220);

	if (t36 != 1343488) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x225 = 658269394911LLU;
	volatile int8_t x227 = INT8_MIN;
	static volatile int8_t x228 = INT8_MIN;
	volatile uint64_t t37 = 2752898LLU;

	t37 = ((x225-(x226&x227))*x228);

	if (t37 != 18446659815226986624LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x229 = 1LL;
	int16_t x231 = INT16_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	int64_t t38 = -3869544LL;

	t38 = ((x229-(x230&x231))*x232);

	if (t38 != -2147385345LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x233 = 2417890125508LLU;
	uint64_t x234 = 19429144LLU;
	volatile int16_t x235 = INT16_MAX;
	int16_t x236 = -54;

	t39 = ((x233-(x234&x235))*x236);

	if (t39 != 18446613507644420536LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x237 = INT64_MAX;
	static int16_t x238 = 1006;
	int16_t x240 = -1;
	int64_t t40 = -526366435LL;

	t40 = ((x237-(x238&x239))*x240);

	if (t40 != -9223372036854775451LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = -3192499920250109LL;
	uint16_t x246 = 12U;
	static uint16_t x247 = UINT16_MAX;
	int8_t x248 = -63;
	volatile int64_t t41 = 17052159177942LL;

	t41 = ((x245-(x246&x247))*x248);

	if (t41 != 201127494975757623LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = UINT8_MAX;
	volatile int64_t x252 = -343457955LL;
	volatile int64_t t42 = -2607712LL;

	t42 = ((x249-(x250&x251))*x252);

	if (t42 != -11250995689890LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	static volatile uint16_t x255 = 1U;
	int64_t x256 = 12133LL;
	volatile int64_t t43 = -109918094LL;

	t43 = ((x253-(x254&x255))*x256);

	if (t43 != -26055419101184LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 89532192U;
	int64_t x259 = INT64_MIN;
	static volatile int32_t x260 = INT32_MIN;
	int64_t t44 = 2580LL;

	t44 = ((x257-(x258&x259))*x260);

	if (t44 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x265 = 1017;
	int32_t x266 = INT32_MIN;
	volatile uint64_t x268 = 211811151397165LLU;
	volatile uint64_t t45 = 5LLU;

	t45 = ((x265-(x266&x267))*x268);

	if (t45 != 215411940970916805LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x269 = 0;
	int32_t x270 = INT32_MAX;
	volatile int8_t x271 = INT8_MAX;
	int16_t x272 = 1379;
	volatile int32_t t46 = -29201;

	t46 = ((x269-(x270&x271))*x272);

	if (t46 != -175133) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x273 = 0;
	uint8_t x274 = 0U;
	static int32_t x275 = 225;
	int32_t x276 = -1;
	volatile int32_t t47 = -318;

	t47 = ((x273-(x274&x275))*x276);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = -1;
	static uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MAX;
	volatile uint64_t t48 = 1LLU;

	t48 = ((x277-(x278&x279))*x280);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x285 = 43;
	int8_t x286 = -1;
	volatile int16_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t49 = 102991423;

	t49 = ((x285-(x286&x287))*x288);

	if (t49 != -5632) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x289 = 183763217U;
	int8_t x291 = 9;
	int8_t x292 = INT8_MAX;

	t50 = ((x289-(x290&x291))*x292);

	if (t50 != 1863092079U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int32_t x295 = -391688;
	uint64_t x296 = 9LLU;
	volatile uint64_t t51 = 2866624LLU;

	t51 = ((x293-(x294&x295))*x296);

	if (t51 != 3230280LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = 7;
	int16_t x299 = -1;
	int64_t x300 = INT64_MIN;

	t52 = ((x297-(x298&x299))*x300);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x301 = 244U;
	uint8_t x302 = 125U;
	volatile uint64_t x303 = 532984LLU;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t53 = 2LLU;

	t53 = ((x301-(x302&x303))*x304);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = 6;
	uint16_t x306 = UINT16_MAX;
	int32_t x308 = 1193937;
	int32_t t54 = -671;

	t54 = ((x305-(x306&x307))*x308);

	if (t54 != 7163622) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x309 = 115U;
	uint64_t x312 = 1008LLU;
	uint64_t t55 = 4487062267470375LLU;

	t55 = ((x309-(x310&x311))*x312);

	if (t55 != 18446739744382640224LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x313 = INT16_MIN;
	static volatile int8_t x314 = INT8_MIN;
	int64_t x315 = -46998490197773803LL;
	static volatile int64_t t56 = -134220LL;

	t56 = ((x313-(x314&x315))*x316);

	if (t56 != 46998490197741056LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x318 = INT32_MAX;
	int16_t x319 = -21;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t57 = 1U;

	t57 = ((x317-(x318&x319))*x320);

	if (t57 != 4294964736U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x321 = -3854;
	static uint64_t x322 = 28LLU;
	static uint64_t x323 = 63946LLU;
	int32_t x324 = -8;
	uint64_t t58 = 9073507381213LLU;

	t58 = ((x321-(x322&x323))*x324);

	if (t58 != 30896LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x325 = -43;
	int16_t x326 = -1;
	uint64_t x327 = 703190LLU;
	int16_t x328 = -6688;

	t59 = ((x325-(x326&x327))*x328);

	if (t59 != 4703222304LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x329 = INT16_MIN;
	int8_t x331 = 1;
	int64_t x332 = -8134817245699LL;
	int64_t t60 = -38099678460LL;

	t60 = ((x329-(x330&x331))*x332);

	if (t60 != 266569826324310531LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = 4;
	uint8_t x336 = 1U;
	volatile int32_t t61 = -207;

	t61 = ((x333-(x334&x335))*x336);

	if (t61 != 32763) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x338 = 1;
	volatile uint64_t x339 = 500058436898LLU;
	int32_t x340 = -47686;
	static uint64_t t62 = 21637LLU;

	t62 = ((x337-(x338&x339))*x340);

	if (t62 != 18446744073708931698LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x345 = 597864814467LLU;
	static int64_t x346 = INT64_MAX;
	int32_t x347 = INT32_MAX;
	int16_t x348 = 2;
	uint64_t t63 = 13312LLU;

	t63 = ((x345-(x346&x347))*x348);

	if (t63 != 1191434661640LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x349 = 10346U;
	int64_t x350 = -1LL;
	int16_t x352 = INT16_MIN;
	volatile int64_t t64 = -1171LL;

	t64 = ((x349-(x350&x351))*x352);

	if (t64 != 372348223488LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x358 = -10;
	int16_t x359 = 1;
	int8_t x360 = INT8_MAX;
	static volatile uint64_t t65 = 2LLU;

	t65 = ((x357-(x358&x359))*x360);

	if (t65 != 218821LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x361 = UINT64_MAX;
	int8_t x362 = -1;
	int32_t x363 = -217330;
	static int8_t x364 = -62;
	volatile uint64_t t66 = 577LLU;

	t66 = ((x361-(x362&x363))*x364);

	if (t66 != 18446744073696077218LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x370 = INT16_MAX;
	int32_t x371 = -1;
	int32_t t67 = 156374867;

	t67 = ((x369-(x370&x371))*x372);

	if (t67 != -1658112) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x373 = 592093204U;
	int32_t x374 = 13;
	volatile int32_t x375 = INT32_MAX;
	uint64_t x376 = 485166215129823082LLU;
	uint64_t t68 = 6988782548LLU;

	t68 = ((x373-(x374&x375))*x376);

	if (t68 != 11740056727777477606LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x378 = -1;
	static int64_t x380 = INT64_MAX;
	static uint64_t t69 = 568194603LLU;

	t69 = ((x377-(x378&x379))*x380);

	if (t69 != 18446744073569934256LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x381 = 4;
	static uint64_t x382 = 12LLU;
	int32_t x383 = -1;
	uint64_t x384 = 1LLU;
	volatile uint64_t t70 = 561076812LLU;

	t70 = ((x381-(x382&x383))*x384);

	if (t70 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x385 = 493519458105367559LLU;
	int32_t x386 = INT32_MAX;
	static uint32_t x387 = 17264999U;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t71 = 113831LLU;

	t71 = ((x385-(x386&x387))*x388);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x393 = INT64_MIN;
	static uint64_t x394 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	uint64_t t72 = 110748021LLU;

	t72 = ((x393-(x394&x395))*x396);

	if (t72 != 9223372037222876164LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x401 = -3091;
	uint64_t x402 = 257515LLU;
	static int16_t x403 = -87;
	volatile uint64_t t73 = 4LLU;

	t73 = ((x401-(x402&x403))*x404);

	if (t73 != 18446744073554530316LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x405 = -1;
	static int64_t x406 = -91341289470755468LL;
	int8_t x408 = INT8_MIN;
	volatile int64_t t74 = -85497604897LL;

	t74 = ((x405-(x406&x407))*x408);

	if (t74 != 2692620928LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x409 = 88762070107LLU;
	volatile int8_t x410 = -1;
	static volatile uint32_t x411 = UINT32_MAX;
	uint64_t t75 = 8379747817869LLU;

	t75 = ((x409-(x410&x411))*x412);

	if (t75 != 15371025334851750820LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x414 = INT8_MAX;
	volatile int64_t x415 = -1LL;
	int32_t x416 = -1;

	t76 = ((x413-(x414&x415))*x416);

	if (t76 != 2147483775LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x417 = -1;
	static int64_t x418 = INT64_MIN;
	volatile int64_t t77 = 468LL;

	t77 = ((x417-(x418&x419))*x420);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x422 = 1;
	uint32_t x424 = 3244U;
	static int64_t t78 = 232169734603513009LL;

	t78 = ((x421-(x422&x423))*x424);

	if (t78 != -6966436957356LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x425 = -1;
	int8_t x426 = INT8_MAX;
	static int32_t x428 = 35464;
	int32_t t79 = -42070986;

	t79 = ((x425-(x426&x427))*x428);

	if (t79 != -35464) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = 364543620821640LL;
	uint8_t x434 = 1U;
	volatile uint64_t x435 = UINT64_MAX;
	int8_t x436 = -1;
	static volatile uint64_t t80 = 8239498680402346LLU;

	t80 = ((x433-(x434&x435))*x436);

	if (t80 != 18446379530088729977LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = 0U;
	static uint16_t x438 = UINT16_MAX;
	uint16_t x439 = UINT16_MAX;
	int64_t x440 = -1LL;
	volatile int64_t t81 = 8597410856229LL;

	t81 = ((x437-(x438&x439))*x440);

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MIN;
	volatile uint64_t x443 = UINT64_MAX;
	volatile uint64_t t82 = 2008727073LLU;

	t82 = ((x441-(x442&x443))*x444);

	if (t82 != 18446744013580005916LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x445 = 2702937LLU;
	int32_t x446 = INT32_MIN;
	static int8_t x448 = INT8_MIN;
	volatile uint64_t t83 = 879662LLU;

	t83 = ((x445-(x446&x447))*x448);

	if (t83 != 18446743798485668736LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x449 = UINT64_MAX;
	int32_t x450 = -120144;
	int32_t x452 = INT32_MAX;
	uint64_t t84 = 1147187611158303LLU;

	t84 = ((x449-(x450&x451))*x452);

	if (t84 != 281472829095937LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x453 = INT16_MIN;
	int16_t x455 = INT16_MIN;
	int32_t x456 = -8078573;

	t85 = ((x453-(x454&x455))*x456);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x457 = 136980818065LLU;
	int32_t x458 = -6;
	volatile int64_t x459 = -380360839937330LL;
	int16_t x460 = INT16_MAX;
	static volatile uint64_t t86 = 31027455290583LLU;

	t86 = ((x457-(x458&x459))*x460);

	if (t86 != 12467772092692159033LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x465 = -1;
	volatile int16_t x466 = INT16_MIN;
	uint64_t x467 = UINT64_MAX;
	int64_t x468 = INT64_MAX;
	uint64_t t87 = 51459585074914120LLU;

	t87 = ((x465-(x466&x467))*x468);

	if (t87 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x469 = -505LL;
	volatile int8_t x470 = INT8_MAX;
	int16_t x471 = 224;
	uint32_t x472 = 135U;
	volatile int64_t t88 = -121655939285LL;

	t88 = ((x469-(x470&x471))*x472);

	if (t88 != -81135LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x473 = 14320U;
	int32_t x476 = -1;
	int64_t t89 = 75360LL;

	t89 = ((x473-(x474&x475))*x476);

	if (t89 != -14320LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x477 = 1U;
	uint64_t x479 = 47LLU;
	int16_t x480 = INT16_MIN;
	static uint64_t t90 = 140721589638165137LLU;

	t90 = ((x477-(x478&x479))*x480);

	if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x481 = INT32_MIN;
	uint16_t x482 = 293U;
	int64_t x483 = INT64_MAX;
	static uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t91 = 30361682841865221LLU;

	t91 = ((x481-(x482&x483))*x484);

	if (t91 != 2147483941LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x485 = 3U;
	static uint16_t x486 = 0U;
	static int64_t x487 = INT64_MIN;
	int64_t t92 = 7139643115LL;

	t92 = ((x485-(x486&x487))*x488);

	if (t92 != -3LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x490 = -1;
	uint32_t x491 = 879411U;
	int64_t x492 = -1LL;

	t93 = ((x489-(x490&x491))*x492);

	if (t93 != -9223372036853896396LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x493 = INT16_MIN;
	int32_t x495 = -1;
	int32_t t94 = 135561;

	t94 = ((x493-(x494&x495))*x496);

	if (t94 != -65630) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x497 = INT32_MIN;
	int64_t x498 = INT64_MIN;
	uint8_t x499 = 14U;
	int16_t x500 = -1;
	volatile int64_t t95 = 3465796933LL;

	t95 = ((x497-(x498&x499))*x500);

	if (t95 != 2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x501 = UINT32_MAX;
	int32_t x502 = INT32_MAX;
	uint16_t x503 = 1066U;
	volatile uint32_t t96 = 62960U;

	t96 = ((x501-(x502&x503))*x504);

	if (t96 != 4260004907U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x505 = 3U;
	int16_t x506 = -1;
	int32_t x507 = 115;
	int8_t x508 = 1;

	t97 = ((x505-(x506&x507))*x508);

	if (t97 != -112) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = -33421046LL;
	volatile int16_t x510 = 1;
	int32_t x511 = INT32_MIN;
	static int8_t x512 = -1;
	volatile int64_t t98 = 140LL;

	t98 = ((x509-(x510&x511))*x512);

	if (t98 != 33421046LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x514 = 0;
	static int32_t x515 = 110;
	int32_t x516 = INT32_MAX;
	static uint64_t t99 = 1337831LLU;

	t99 = ((x513-(x514&x515))*x516);

	if (t99 != 9267285034451596507LLU) { NG(); } else { ; }
	
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

