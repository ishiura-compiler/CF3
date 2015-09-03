#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -106037375;
uint64_t x7 = UINT64_MAX;
static int8_t x19 = -1;
int8_t x22 = -1;
volatile int64_t x33 = INT64_MIN;
uint64_t x34 = 1LLU;
int32_t t7 = 0;
volatile int16_t x49 = -1;
volatile int32_t x58 = -1;
uint16_t x71 = 1372U;
volatile uint64_t x89 = 1005LLU;
volatile uint16_t x91 = 39U;
int64_t x92 = 1LL;
static uint64_t t14 = 31678674615717LLU;
uint32_t x94 = 1048216U;
static int32_t x96 = 3741615;
static uint32_t t15 = 1924067U;
volatile int8_t x99 = -1;
uint32_t t16 = 56207U;
int32_t x123 = -200893;
volatile int32_t x128 = 1143;
int16_t x131 = -1;
volatile int32_t t22 = INT32_MAX;
volatile int8_t x147 = -1;
volatile int8_t x148 = -1;
int64_t x161 = -3662265LL;
uint16_t x170 = 1U;
int64_t x171 = -4223704586LL;
static int16_t x176 = 0;
int8_t x177 = INT8_MIN;
int32_t x180 = INT32_MIN;
int32_t t30 = 463989;
volatile uint32_t x181 = 22828475U;
uint16_t x199 = UINT16_MAX;
volatile uint64_t t34 = 515128180041692580LLU;
static uint64_t x205 = 52LLU;
static int8_t x206 = 7;
uint8_t x207 = UINT8_MAX;
uint32_t x210 = UINT32_MAX;
int16_t x212 = INT16_MIN;
static int8_t x226 = INT8_MAX;
volatile int64_t x227 = 640509LL;
volatile int8_t x228 = INT8_MIN;
uint8_t x229 = 1U;
static volatile uint64_t x242 = UINT64_MAX;
volatile int8_t x244 = INT8_MIN;
static int16_t x253 = INT16_MIN;
volatile int8_t x256 = INT8_MIN;
int16_t x258 = INT16_MIN;
int16_t x260 = INT16_MIN;
static int64_t x269 = 953851LL;
int64_t t44 = -3566208588438LL;
int32_t t45 = -30328;
uint64_t x287 = UINT64_MAX;
uint32_t x292 = UINT32_MAX;
volatile uint8_t x304 = UINT8_MAX;
volatile uint64_t t49 = 335553486556165LLU;
int64_t x308 = -10743LL;
int8_t x314 = 3;
int32_t t51 = -524;
int16_t x321 = -3702;
uint64_t x322 = 55LLU;
static uint64_t t52 = 139LLU;
static uint16_t x337 = 41U;
int32_t x340 = INT32_MIN;
int16_t x343 = 0;
static volatile int8_t x345 = INT8_MIN;
int8_t x350 = INT8_MIN;
uint32_t x354 = UINT32_MAX;
static volatile int8_t x356 = INT8_MIN;
int32_t x360 = 260;
volatile int64_t x363 = -1LL;
int8_t x366 = INT8_MIN;
int16_t x367 = INT16_MAX;
uint16_t x384 = UINT16_MAX;
static int8_t x395 = INT8_MIN;
volatile uint32_t t64 = 19874880U;
int16_t x398 = INT16_MIN;
int16_t x402 = INT16_MIN;
uint32_t x403 = UINT32_MAX;
int64_t x408 = INT64_MAX;
int16_t x414 = INT16_MAX;
uint8_t x422 = 22U;
int64_t x427 = -47073092292155886LL;
volatile uint64_t t71 = 801997LLU;
static int16_t x429 = -1;
static uint64_t x431 = 4646556056863LLU;
int16_t x438 = INT16_MAX;
static int16_t x439 = INT16_MIN;
uint32_t x451 = 114667U;
static volatile uint32_t t75 = 192474921U;
volatile uint64_t x456 = UINT64_MAX;
static uint16_t x465 = UINT16_MAX;
uint64_t t79 = 11492LLU;
static int16_t x478 = INT16_MIN;
volatile int32_t x479 = -193;
volatile int8_t x480 = INT8_MIN;
int32_t x482 = -1;
int8_t x483 = -1;
static uint8_t x484 = 6U;
uint64_t t82 = 89770443881LLU;
volatile int32_t x492 = -1;
int16_t x496 = 580;
volatile int64_t x503 = 311LL;
int8_t x509 = 3;
int8_t x511 = -1;
uint32_t x514 = 3624952U;
volatile int8_t x515 = 1;
uint32_t x519 = 14U;
int8_t x520 = 4;
static int32_t x527 = 2516450;
volatile uint64_t x536 = UINT64_MAX;
int16_t x558 = 99;


void f0(void) {
	volatile int8_t x1 = -1;
	static int8_t x2 = -1;
	int16_t x3 = -1;
	volatile int32_t x4 = 347869486;

	t0 = ((x1|(x2*x3))-x4);

	if (t0 != -347869487) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 5;
	static int32_t x6 = -763;
	uint16_t x8 = 61U;
	static uint64_t t1 = 19745200417636LLU;

	t1 = ((x5|(x6*x7))-x8);

	if (t1 != 706LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 3;
	volatile uint8_t x14 = UINT8_MAX;
	static volatile int8_t x15 = -1;
	volatile int64_t x16 = -6660681LL;
	volatile int64_t t2 = -1946330LL;

	t2 = ((x13|(x14*x15))-x16);

	if (t2 != 6660428LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 2128039238087790757LLU;
	int8_t x18 = INT8_MAX;
	static uint32_t x20 = 191739U;
	uint64_t t3 = 58311014733LLU;

	t3 = ((x17|(x18*x19))-x20);

	if (t3 != 18446744073709359786LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int64_t x23 = 5515892573061LL;
	int16_t x24 = INT16_MIN;
	static int64_t t4 = -3247583097272584LL;

	t4 = ((x21|(x22*x23))-x24);

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 95U;
	volatile uint64_t t5 = 3287868561LLU;

	t5 = ((x33|(x34*x35))-x36);

	if (t5 != 9223372041149743008LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 113U;
	uint8_t x38 = 0U;
	int32_t x39 = INT32_MIN;
	static uint64_t x40 = 1852LLU;
	volatile uint64_t t6 = 943422LLU;

	t6 = ((x37|(x38*x39))-x40);

	if (t6 != 18446744073709549877LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = INT16_MIN;
	static volatile uint16_t x42 = 1U;
	volatile int32_t x43 = INT32_MAX;
	static int16_t x44 = -1;

	t7 = ((x41|(x42*x43))-x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x50 = INT16_MAX;
	static volatile int32_t x51 = 50;
	volatile uint32_t x52 = 105733544U;
	volatile uint32_t t8 = 13U;

	t8 = ((x49|(x50*x51))-x52);

	if (t8 != 4189233751U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x57 = -1LL;
	int64_t x59 = -60152LL;
	uint16_t x60 = UINT16_MAX;
	volatile int64_t t9 = -1034946LL;

	t9 = ((x57|(x58*x59))-x60);

	if (t9 != -65536LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -8668;
	uint64_t x62 = 49923LLU;
	int64_t x63 = 337699LL;
	uint8_t x64 = 1U;
	volatile uint64_t t10 = 22234LLU;

	t10 = ((x61|(x62*x63))-x64);

	if (t10 != 18446744073709543020LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 3915U;
	static int16_t x70 = INT16_MIN;
	static volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t11 = 1106196693521654LLU;

	t11 = ((x69|(x70*x71))-x72);

	if (t11 != 18446744073664597836LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x73 = -24754LL;
	uint16_t x74 = 1551U;
	int8_t x75 = -1;
	volatile int8_t x76 = -1;
	volatile int64_t t12 = -216LL;

	t12 = ((x73|(x74*x75))-x76);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = -1;
	volatile int64_t x87 = -1LL;
	uint64_t x88 = UINT64_MAX;
	uint64_t t13 = 458319163499550LLU;

	t13 = ((x85|(x86*x87))-x88);

	if (t13 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x90 = INT8_MIN;

	t14 = ((x89|(x90*x91))-x92);

	if (t14 != 18446744073709547500LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = 0U;
	volatile int8_t x95 = INT8_MIN;

	t15 = ((x93|(x94*x95))-x96);

	if (t15 != 4157054033U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x97 = INT32_MIN;
	uint32_t x98 = 72984U;
	int16_t x100 = INT16_MIN;

	t16 = ((x97|(x98*x99))-x100);

	if (t16 != 4294927080U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x101 = INT8_MIN;
	uint32_t x102 = 883433U;
	int32_t x103 = INT32_MIN;
	static int16_t x104 = 8;
	uint32_t t17 = 1940749484U;

	t17 = ((x101|(x102*x103))-x104);

	if (t17 != 4294967160U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = INT32_MIN;
	static uint16_t x118 = 8U;
	int8_t x119 = -17;
	int16_t x120 = INT16_MIN;
	volatile int32_t t18 = -1738897;

	t18 = ((x117|(x118*x119))-x120);

	if (t18 != 32632) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x121 = UINT16_MAX;
	static uint16_t x122 = 1484U;
	uint8_t x124 = 0U;
	static int32_t t19 = 994919281;

	t19 = ((x121|(x122*x123))-x124);

	if (t19 != -298123265) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = -41;
	int32_t x126 = INT32_MIN;
	uint32_t x127 = UINT32_MAX;
	uint32_t t20 = 30U;

	t20 = ((x125|(x126*x127))-x128);

	if (t20 != 4294966112U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x129 = -15336793;
	int64_t x130 = INT64_MAX;
	int32_t x132 = INT32_MAX;
	static volatile int64_t t21 = -18251444322LL;

	t21 = ((x129|(x130*x131))-x132);

	if (t21 != -2162820440LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x137 = -1;
	int16_t x138 = -2874;
	volatile int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MIN;

	t22 = ((x137|(x138*x139))-x140);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x141 = 1582;
	uint8_t x142 = UINT8_MAX;
	static int32_t x143 = -1;
	uint8_t x144 = 101U;
	volatile int32_t t23 = 0;

	t23 = ((x141|(x142*x143))-x144);

	if (t23 != -310) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = 1;
	uint16_t x146 = 899U;
	volatile int32_t t24 = -155131273;

	t24 = ((x145|(x146*x147))-x148);

	if (t24 != -898) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = -1;
	static int16_t x154 = -1;
	static int8_t x155 = 0;
	volatile int64_t x156 = INT64_MIN;
	int64_t t25 = INT64_MAX;

	t25 = ((x153|(x154*x155))-x156);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = 1;
	int64_t x159 = INT64_MIN;
	static int16_t x160 = 17;
	volatile int64_t t26 = -39428087LL;

	t26 = ((x157|(x158*x159))-x160);

	if (t26 != -145LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x162 = 0U;
	uint8_t x163 = 0U;
	uint32_t x164 = 266479955U;
	static volatile int64_t t27 = 518100714599LL;

	t27 = ((x161|(x162*x163))-x164);

	if (t27 != -270142220LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x169 = 0;
	int16_t x172 = -1;
	int64_t t28 = 4061831LL;

	t28 = ((x169|(x170*x171))-x172);

	if (t28 != -4223704585LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = 5074527LLU;
	uint64_t x174 = 66511721416LLU;
	volatile int8_t x175 = 5;
	volatile uint64_t t29 = 279064LLU;

	t29 = ((x173|(x174*x175))-x176);

	if (t29 != 332563083007LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x178 = 2153;
	static int32_t x179 = 100;

	t30 = ((x177|(x178*x179))-x180);

	if (t30 != 2147483524) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x182 = -1;
	volatile int64_t x183 = INT64_MAX;
	int64_t x184 = -33611495LL;
	static int64_t t31 = 13405663LL;

	t31 = ((x181|(x182*x183))-x184);

	if (t31 != -9223372036798335838LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x189 = 11U;
	volatile uint16_t x190 = UINT16_MAX;
	uint64_t x191 = 28890574LLU;
	uint16_t x192 = 27905U;
	volatile uint64_t t32 = 11109344LLU;

	t32 = ((x189|(x190*x191))-x192);

	if (t32 != 1893343739194LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x197 = UINT16_MAX;
	static uint8_t x198 = 0U;
	int32_t x200 = 1872;
	int32_t t33 = 71330730;

	t33 = ((x197|(x198*x199))-x200);

	if (t33 != 63663) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = 497374;
	volatile uint64_t x203 = UINT64_MAX;
	static uint64_t x204 = UINT64_MAX;

	t34 = ((x201|(x202*x203))-x204);

	if (t34 != 18446744073709054336LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x208 = INT16_MAX;
	static volatile uint64_t t35 = 0LLU;

	t35 = ((x205|(x206*x207))-x208);

	if (t35 != 18446744073709520638LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x209 = 2U;
	uint64_t x211 = UINT64_MAX;
	volatile uint64_t t36 = 1879169729206LLU;

	t36 = ((x209|(x210*x211))-x212);

	if (t36 != 18446744069414617091LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x213 = 2LL;
	static uint64_t x214 = 5637434997065502LLU;
	int64_t x215 = INT64_MAX;
	uint16_t x216 = 0U;
	uint64_t t37 = 9149871573LLU;

	t37 = ((x213|(x214*x215))-x216);

	if (t37 != 18441106638712486114LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x225 = INT16_MIN;
	volatile int64_t t38 = -121844343357LL;

	t38 = ((x225|(x226*x227))-x228);

	if (t38 != -18173LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x230 = -1;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	static int64_t t39 = 2401383434086945LL;

	t39 = ((x229|(x230*x231))-x232);

	if (t39 != 129LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = -1;
	uint64_t t40 = 48668971LLU;

	t40 = ((x241|(x242*x243))-x244);

	if (t40 != 18446744071562068097LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x254 = 3;
	volatile uint16_t x255 = 390U;
	int32_t t41 = 7229;

	t41 = ((x253|(x254*x255))-x256);

	if (t41 != -31470) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x257 = UINT32_MAX;
	uint16_t x259 = 727U;
	uint32_t t42 = 117785239U;

	t42 = ((x257|(x258*x259))-x260);

	if (t42 != 32767U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x265 = 6U;
	static int64_t x266 = -2580378711479LL;
	int16_t x267 = INT16_MAX;
	static volatile int8_t x268 = INT8_MIN;
	static int64_t t43 = -58510LL;

	t43 = ((x265|(x266*x267))-x268);

	if (t43 != -84551269239032265LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x270 = INT16_MAX;
	uint16_t x271 = 20U;
	volatile int8_t x272 = INT8_MAX;

	t44 = ((x269|(x270*x271))-x272);

	if (t44 != 1048448LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int32_t x274 = -107632015;
	static volatile int32_t x275 = -1;
	int32_t x276 = INT32_MAX;

	t45 = ((x273|(x274*x275))-x276);

	if (t45 != -2039808000) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x285 = INT64_MIN;
	static int64_t x286 = 11336146LL;
	uint8_t x288 = 0U;
	static uint64_t t46 = 1320704377675LLU;

	t46 = ((x285|(x286*x287))-x288);

	if (t46 != 18446744073698215470LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x289 = 1;
	volatile int64_t x290 = -1LL;
	int32_t x291 = 5578768;
	static int64_t t47 = 1LL;

	t47 = ((x289|(x290*x291))-x292);

	if (t47 != -4300546062LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x293 = INT32_MAX;
	int8_t x294 = -1;
	volatile int16_t x295 = INT16_MIN;
	static volatile int64_t x296 = 13LL;
	int64_t t48 = -16798925034713LL;

	t48 = ((x293|(x294*x295))-x296);

	if (t48 != 2147483634LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	volatile int16_t x303 = -1;

	t49 = ((x301|(x302*x303))-x304);

	if (t49 != 9223372036854775554LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x305 = 3388589U;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = 429U;
	int64_t t50 = 798090542221118414LL;

	t50 = ((x305|(x306*x307))-x308);

	if (t50 != 4282113700LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x313 = INT16_MIN;
	volatile int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;

	t51 = ((x313|(x314*x315))-x316);

	if (t51 != -639) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x323 = 0;
	uint8_t x324 = UINT8_MAX;

	t52 = ((x321|(x322*x323))-x324);

	if (t52 != 18446744073709547659LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x325 = 467U;
	static int16_t x326 = INT16_MAX;
	static int64_t x327 = -1LL;
	volatile int64_t x328 = 1LL;
	volatile int64_t t53 = 2316153849825LL;

	t53 = ((x325|(x326*x327))-x328);

	if (t53 != -32302LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x329 = 14U;
	static int64_t x330 = -6670LL;
	static int16_t x331 = -2;
	static volatile uint8_t x332 = UINT8_MAX;
	int64_t t54 = -17489LL;

	t54 = ((x329|(x330*x331))-x332);

	if (t54 != 13087LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x338 = 47575126281LL;
	uint32_t x339 = 2843U;
	int64_t t55 = -303988748939193LL;

	t55 = ((x337|(x338*x339))-x340);

	if (t55 != 135258231500539LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	uint64_t t56 = 46494LLU;

	t56 = ((x341|(x342*x343))-x344);

	if (t56 != 32768LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x346 = INT16_MIN;
	int32_t x347 = 1;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t57 = -227841;

	t57 = ((x345|(x346*x347))-x348);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x349 = INT8_MIN;
	static int16_t x351 = -1446;
	int32_t x352 = INT32_MIN;
	volatile int32_t t58 = -4620;

	t58 = ((x349|(x350*x351))-x352);

	if (t58 != 2147483520) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x353 = -1020195LL;
	uint32_t x355 = 45753823U;
	int64_t t59 = 12747369431434939LL;

	t59 = ((x353|(x354*x355))-x356);

	if (t59 != -655491LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x357 = -82;
	static int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	volatile int32_t t60 = 509;

	t60 = ((x357|(x358*x359))-x360);

	if (t60 != -342) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x361 = -1;
	static int32_t x362 = 834958;
	int8_t x364 = -1;
	int64_t t61 = 5LL;

	t61 = ((x361|(x362*x363))-x364);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x365 = UINT8_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t62 = 3U;

	t62 = ((x365|(x366*x367))-x368);

	if (t62 != 4290773248U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x381 = INT32_MIN;
	static uint16_t x382 = 24830U;
	static int16_t x383 = -1;
	volatile int32_t t63 = 13684316;

	t63 = ((x381|(x382*x383))-x384);

	if (t63 != -90365) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x393 = 112U;
	int8_t x394 = -1;
	volatile int8_t x396 = 12;

	t64 = ((x393|(x394*x395))-x396);

	if (t64 != 228U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x397 = INT32_MIN;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = UINT64_MAX;
	uint64_t t65 = 27LLU;

	t65 = ((x397|(x398*x399))-x400);

	if (t65 != 18446744072635842561LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x401 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	static uint32_t t66 = 99U;

	t66 = ((x401|(x402*x403))-x404);

	if (t66 != 2147516289U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x405 = -1;
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = ((x405|(x406*x407))-x408);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x409 = 103436550U;
	uint16_t x410 = 577U;
	volatile int16_t x411 = INT16_MAX;
	int16_t x412 = 2177;
	uint32_t t68 = 7U;

	t68 = ((x409|(x410*x411))-x412);

	if (t68 != 120223038U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x413 = INT64_MIN;
	int16_t x415 = -1;
	int32_t x416 = INT32_MAX;
	int64_t t69 = -244007000LL;

	t69 = ((x413|(x414*x415))-x416);

	if (t69 != -2147516414LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x421 = 2985631LL;
	int16_t x423 = 11;
	uint16_t x424 = UINT16_MAX;
	int64_t t70 = -222601218598LL;

	t70 = ((x421|(x422*x423))-x424);

	if (t70 != 2920192LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x425 = 32907LL;
	static volatile uint64_t x426 = 1LLU;
	static uint8_t x428 = 0U;

	t71 = ((x425|(x426*x427))-x428);

	if (t71 != 18399670981417428635LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x430 = INT64_MAX;
	uint8_t x432 = 1U;
	volatile uint64_t t72 = 12LLU;

	t72 = ((x429|(x430*x431))-x432);

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x433 = INT16_MAX;
	static uint8_t x434 = 83U;
	volatile int16_t x435 = INT16_MIN;
	int16_t x436 = 208;
	static int32_t t73 = -28;

	t73 = ((x433|(x434*x435))-x436);

	if (t73 != -2687185) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x437 = INT64_MIN;
	uint8_t x440 = 7U;
	int64_t t74 = -96680160116042LL;

	t74 = ((x437|(x438*x439))-x440);

	if (t74 != -1073709063LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x449 = -2132;
	static uint32_t x450 = 48U;
	uint8_t x452 = 26U;

	t75 = ((x449|(x450*x451))-x452);

	if (t75 != 4294967202U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x453 = 8U;
	int16_t x454 = INT16_MIN;
	static int64_t x455 = -79840088604454LL;
	uint64_t t76 = 979450LLU;

	t76 = ((x453|(x454*x455))-x456);

	if (t76 != 2616200023390748681LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = -3308342116807LL;
	static uint8_t x459 = UINT8_MAX;
	uint32_t x460 = 496114U;
	volatile int64_t t77 = -1LL;

	t77 = ((x457|(x458*x459))-x460);

	if (t77 != -843627240281899LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x461 = INT16_MIN;
	int64_t x462 = INT64_MAX;
	uint64_t x463 = 155680105LLU;
	int8_t x464 = INT8_MIN;
	volatile uint64_t t78 = 478319635804554603LLU;

	t78 = ((x461|(x462*x463))-x464);

	if (t78 != 18446744073709519639LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x466 = INT64_MIN;
	uint64_t x467 = 9405467369784LLU;
	int8_t x468 = INT8_MIN;

	t79 = ((x465|(x466*x467))-x468);

	if (t79 != 65663LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x477 = -2055;
	int32_t t80 = -20;

	t80 = ((x477|(x478*x479))-x480);

	if (t80 != -1927) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x481 = 11452045U;
	uint32_t t81 = 111718266U;

	t81 = ((x481|(x482*x483))-x484);

	if (t81 != 11452039U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x485 = -1;
	int64_t x486 = -37LL;
	uint64_t x487 = 5989948951LLU;
	int16_t x488 = -9976;

	t82 = ((x485|(x486*x487))-x488);

	if (t82 != 9975LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x489 = INT16_MIN;
	volatile int8_t x490 = INT8_MIN;
	volatile uint8_t x491 = 8U;
	volatile int32_t t83 = 465599999;

	t83 = ((x489|(x490*x491))-x492);

	if (t83 != -1023) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x493 = -1;
	volatile int8_t x494 = INT8_MIN;
	uint64_t x495 = 156LLU;
	volatile uint64_t t84 = 790952937771160LLU;

	t84 = ((x493|(x494*x495))-x496);

	if (t84 != 18446744073709551035LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x497 = INT64_MIN;
	int8_t x498 = INT8_MIN;
	static uint8_t x499 = UINT8_MAX;
	static volatile uint16_t x500 = UINT16_MAX;
	int64_t t85 = -91144319LL;

	t85 = ((x497|(x498*x499))-x500);

	if (t85 != -98175LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MAX;
	uint64_t x504 = UINT64_MAX;
	uint64_t t86 = 155LLU;

	t86 = ((x501|(x502*x503))-x504);

	if (t86 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x510 = 0U;
	int8_t x512 = INT8_MIN;
	volatile int32_t t87 = 1999;

	t87 = ((x509|(x510*x511))-x512);

	if (t87 != 131) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x513 = UINT64_MAX;
	int32_t x516 = 1955694;
	volatile uint64_t t88 = 522349164LLU;

	t88 = ((x513|(x514*x515))-x516);

	if (t88 != 18446744073707595921LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x517 = -1;
	static uint16_t x518 = 6U;
	static uint32_t t89 = 27U;

	t89 = ((x517|(x518*x519))-x520);

	if (t89 != 4294967291U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x521 = -3;
	int16_t x522 = INT16_MAX;
	uint16_t x523 = 3U;
	volatile uint16_t x524 = 2U;
	volatile int32_t t90 = -43352;

	t90 = ((x521|(x522*x523))-x524);

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x525 = -1881135531404490LL;
	static uint8_t x526 = UINT8_MAX;
	uint64_t x528 = UINT64_MAX;
	uint64_t t91 = 2446830346LLU;

	t91 = ((x525|(x526*x527))-x528);

	if (t91 != 18444862938817724223LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x529 = INT8_MIN;
	uint8_t x530 = UINT8_MAX;
	uint8_t x531 = 42U;
	static int16_t x532 = INT16_MIN;
	int32_t t92 = -62014;

	t92 = ((x529|(x530*x531))-x532);

	if (t92 != 32726) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x533 = INT8_MIN;
	uint32_t x534 = 25926U;
	int32_t x535 = INT32_MIN;
	uint64_t t93 = 113836LLU;

	t93 = ((x533|(x534*x535))-x536);

	if (t93 != 4294967169LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x537 = INT16_MIN;
	volatile int16_t x538 = -1;
	int32_t x539 = 41735804;
	int32_t x540 = 234;
	int32_t t94 = 3769;

	t94 = ((x537|(x538*x539))-x540);

	if (t94 != -22374) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x541 = 3U;
	uint32_t x542 = 74U;
	int64_t x543 = 6002224768951495LL;
	uint16_t x544 = UINT16_MAX;
	int64_t t95 = 14LL;

	t95 = ((x541|(x542*x543))-x544);

	if (t95 != 444164632902345096LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x549 = 15U;
	int16_t x550 = -541;
	uint64_t x551 = UINT64_MAX;
	int16_t x552 = 2;
	volatile uint64_t t96 = 1091719829525LLU;

	t96 = ((x549|(x550*x551))-x552);

	if (t96 != 541LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x557 = INT32_MAX;
	int16_t x559 = 0;
	int16_t x560 = INT16_MAX;
	static int32_t t97 = 51433802;

	t97 = ((x557|(x558*x559))-x560);

	if (t97 != 2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x561 = UINT16_MAX;
	int8_t x562 = INT8_MAX;
	static int16_t x563 = -1;
	int8_t x564 = INT8_MIN;
	int32_t t98 = 342;

	t98 = ((x561|(x562*x563))-x564);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x565 = -492849509031LL;
	int64_t x566 = 1LL;
	volatile int8_t x567 = 6;
	static int16_t x568 = INT16_MAX;
	volatile int64_t t99 = 490LL;

	t99 = ((x565|(x566*x567))-x568);

	if (t99 != -492849541792LL) { NG(); } else { ; }
	
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

