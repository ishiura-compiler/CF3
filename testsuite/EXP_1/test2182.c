#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
int16_t x10 = INT16_MAX;
volatile int8_t x12 = -1;
int8_t x21 = INT8_MIN;
int16_t x26 = 0;
volatile uint64_t x34 = 3650095361745376885LLU;
volatile uint64_t t9 = 98986098811330LLU;
volatile uint8_t x43 = UINT8_MAX;
volatile uint16_t x46 = 9U;
volatile uint8_t x47 = 0U;
volatile uint64_t t12 = 78230948LLU;
int64_t t13 = INT64_MIN;
uint16_t x57 = 368U;
volatile int32_t t14 = -13;
static int32_t t16 = -1909779;
int64_t x70 = -1LL;
volatile uint64_t t17 = 21448837831162LLU;
int64_t x73 = INT64_MAX;
volatile int8_t x82 = -3;
int64_t t20 = INT64_MAX;
volatile int64_t x87 = INT64_MIN;
int16_t x93 = -1;
uint16_t x96 = 18U;
static volatile int64_t x98 = INT64_MAX;
int8_t x100 = -1;
int32_t x105 = -1;
int32_t x106 = -1;
static int16_t x107 = -192;
volatile int64_t t27 = -747117155136855252LL;
static int32_t t29 = 30171;
uint32_t x124 = 264894U;
volatile int8_t x126 = INT8_MIN;
int64_t x128 = 0LL;
int32_t x132 = 1666972;
uint32_t x146 = 645U;
uint8_t x149 = UINT8_MAX;
static int16_t x153 = INT16_MIN;
static int8_t x155 = INT8_MIN;
int16_t x156 = 7;
int32_t t38 = 8053;
static uint32_t x157 = UINT32_MAX;
volatile uint32_t x159 = 68955477U;
int32_t x164 = -1;
uint64_t x167 = 609LLU;
int32_t x169 = 1892;
int8_t x173 = INT8_MIN;
uint8_t x174 = UINT8_MAX;
volatile int32_t t44 = -798348;
int16_t x181 = INT16_MIN;
int8_t x183 = 63;
int64_t x189 = INT64_MIN;
uint64_t x190 = 7577179LLU;
int16_t x191 = 2;
uint64_t t47 = 11LLU;
static int8_t x195 = -1;
uint8_t x196 = 10U;
int32_t x200 = 2;
int8_t x202 = INT8_MAX;
volatile int64_t x203 = INT64_MIN;
static uint32_t x211 = 24510U;
int16_t x212 = INT16_MIN;
static volatile int32_t x213 = -15;
static int64_t t53 = 347229187LL;
uint32_t x230 = 14507311U;
int16_t x234 = -1;
volatile int16_t x247 = INT16_MIN;
int32_t t61 = 1;
volatile uint64_t t62 = 6LLU;
static volatile int64_t x253 = 26LL;
int8_t x260 = -1;
int64_t t64 = 272039896LL;
uint8_t x268 = 4U;
uint16_t x269 = UINT16_MAX;
int64_t x271 = INT64_MAX;
uint64_t t68 = 34385LLU;
volatile uint64_t x279 = 123629719168LLU;
int8_t x289 = INT8_MIN;
volatile uint32_t x295 = 28U;
volatile int64_t t73 = -16500394776861LL;
volatile uint8_t x304 = 1U;
volatile uint16_t x312 = UINT16_MAX;
int64_t x316 = INT64_MIN;
volatile int64_t x317 = 6173LL;
int64_t x318 = -1LL;
volatile uint16_t x322 = 3569U;
static int64_t x323 = INT64_MAX;
uint32_t x334 = 5653984U;
int64_t t84 = 641718LL;
int64_t x343 = INT64_MIN;
static volatile int64_t x344 = -22226402736459953LL;
int8_t x345 = 1;
volatile int32_t x346 = INT32_MIN;
uint16_t x347 = 967U;
static int64_t x348 = -82299618553948LL;
static volatile int64_t x350 = INT64_MIN;
int32_t x351 = -1;
static int32_t x354 = -1;
volatile int64_t x357 = 3723140882LL;
static int8_t x359 = -1;
uint32_t x364 = 243U;
int64_t x366 = INT64_MIN;
int8_t x368 = 0;
volatile int32_t x370 = INT32_MIN;
uint64_t x371 = UINT64_MAX;
int16_t x372 = -1;
static int32_t t93 = -92308537;
volatile int16_t x378 = INT16_MIN;
int64_t x381 = INT64_MIN;
int16_t x389 = INT16_MIN;
int64_t x394 = -603974542794228LL;
int16_t x399 = -1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int8_t x3 = INT8_MIN;
	int16_t x4 = -582;
	volatile int64_t t0 = -13389LL;

	t0 = (((x1^x2)|x3)&x4);

	if (t0 != -582LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 0U;
	static int16_t x6 = INT16_MAX;
	uint32_t x7 = 648U;
	int16_t x8 = INT16_MIN;
	static volatile uint32_t t1 = 71U;

	t1 = (((x5^x6)|x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint64_t x11 = 944429887811LLU;
	uint64_t t2 = 133LLU;

	t2 = (((x9^x10)|x11)&x12);

	if (t2 != 18446744073709547843LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static int16_t x14 = 1;
	volatile int8_t x15 = 4;
	uint64_t x16 = 695LLU;
	uint64_t t3 = 32LLU;

	t3 = (((x13^x14)|x15)&x16);

	if (t3 != 694LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	uint64_t x18 = 447921LLU;
	static int8_t x19 = INT8_MIN;
	uint32_t x20 = 233419U;
	volatile uint64_t t4 = 47512358285207678LLU;

	t4 = (((x17^x18)|x19)&x20);

	if (t4 != 233345LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	int32_t x23 = 0;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = -294;

	t5 = (((x21^x22)|x23)&x24);

	if (t5 != -2147483521) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 354U;
	int64_t x27 = INT64_MIN;
	int8_t x28 = -1;
	int64_t t6 = -7179LL;

	t6 = (((x25^x26)|x27)&x28);

	if (t6 != -9223372036854775454LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = INT16_MIN;
	uint8_t x30 = 3U;
	int32_t x31 = INT32_MAX;
	uint64_t x32 = 472821630324498145LLU;
	volatile uint64_t t7 = 72418787751LLU;

	t7 = (((x29^x30)|x31)&x32);

	if (t7 != 472821630324498145LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 491049;
	int64_t x35 = INT64_MIN;
	int64_t x36 = -1LL;
	uint64_t t8 = 963785044038263806LLU;

	t8 = (((x33^x34)|x35)&x36);

	if (t8 != 12873467398600337500LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	volatile uint64_t x38 = 367726395700235LLU;
	static int64_t x39 = INT64_MIN;
	static int32_t x40 = -1;

	t9 = (((x37^x38)|x39)&x40);

	if (t9 != 9223739759184006132LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -3095515;
	int8_t x42 = -1;
	int32_t x44 = -22;
	static volatile int32_t t10 = 1;

	t10 = (((x41^x42)|x43)&x44);

	if (t10 != 3095530) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -15338;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -1;

	t11 = (((x45^x46)|x47)&x48);

	if (t11 != -15360) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 62LLU;
	int32_t x50 = -164834;
	uint16_t x51 = 990U;
	int16_t x52 = -1813;

	t12 = (((x49^x50)|x51)&x52);

	if (t12 != 18446744073709385962LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint8_t x54 = 6U;
	int16_t x55 = -1;
	int64_t x56 = INT64_MIN;

	t13 = (((x53^x54)|x55)&x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MAX;

	t14 = (((x57^x58)|x59)&x60);

	if (t14 != 32511) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	static int32_t x62 = -185839449;
	int64_t x63 = -21767229125810LL;
	static int64_t x64 = INT64_MAX;
	volatile int64_t t15 = 142LL;

	t15 = (((x61^x62)|x63)&x64);

	if (t15 != 9223372036803288047LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 20U;
	int32_t x68 = 8116171;

	t16 = (((x65^x66)|x67)&x68);

	if (t16 != 75) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x71 = INT8_MAX;
	volatile uint64_t x72 = 30324LLU;

	t17 = (((x69^x70)|x71)&x72);

	if (t17 != 116LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x74 = INT16_MIN;
	int16_t x75 = -1;
	uint64_t x76 = 23655LLU;
	volatile uint64_t t18 = 20993029486154676LLU;

	t18 = (((x73^x74)|x75)&x76);

	if (t18 != 23655LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	uint32_t x78 = 241253U;
	static int16_t x79 = 7;
	static uint32_t x80 = 26721124U;
	uint32_t t19 = 46U;

	t19 = (((x77^x78)|x79)&x80);

	if (t19 != 26480996U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 2U;
	int16_t x83 = -10;
	int64_t x84 = INT64_MAX;

	t20 = (((x81^x82)|x83)&x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 235143LL;
	int32_t x86 = INT32_MIN;
	int8_t x88 = INT8_MIN;
	int64_t t21 = 13753340889821LL;

	t21 = (((x85^x86)|x87)&x88);

	if (t21 != -2147248512LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 2U;
	uint8_t x90 = 57U;
	volatile int8_t x91 = -1;
	int8_t x92 = -1;
	uint32_t t22 = UINT32_MAX;

	t22 = (((x89^x90)|x91)&x92);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = -87887;
	uint64_t x95 = 119341823LLU;
	volatile uint64_t t23 = 139546742120114231LLU;

	t23 = (((x93^x94)|x95)&x96);

	if (t23 != 18LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MAX;
	int64_t x99 = INT64_MIN;
	static volatile int64_t t24 = INT64_MIN;

	t24 = (((x97^x98)|x99)&x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int32_t x102 = -1;
	uint16_t x103 = 228U;
	int32_t x104 = INT32_MIN;
	int32_t t25 = INT32_MIN;

	t25 = (((x101^x102)|x103)&x104);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x108 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = (((x105^x106)|x107)&x108);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 5U;
	volatile int64_t x110 = -1LL;
	static volatile int64_t x111 = -1LL;
	uint8_t x112 = 91U;

	t27 = (((x109^x110)|x111)&x112);

	if (t27 != 91LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 94U;
	int32_t x114 = INT32_MIN;
	volatile int64_t x115 = -1LL;
	uint8_t x116 = UINT8_MAX;
	int64_t t28 = -4451626446LL;

	t28 = (((x113^x114)|x115)&x116);

	if (t28 != 255LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	uint8_t x120 = 8U;

	t29 = (((x117^x118)|x119)&x120);

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile int32_t x122 = INT32_MAX;
	uint16_t x123 = 24U;
	static volatile int64_t t30 = 1679921739642529LL;

	t30 = (((x121^x122)|x123)&x124);

	if (t30 != 24LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 3U;
	int8_t x127 = 1;
	int64_t t31 = -5731853650580LL;

	t31 = (((x125^x126)|x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -681;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	volatile int64_t t32 = 0LL;

	t32 = (((x129^x130)|x131)&x132);

	if (t32 != 1666324LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 5727;
	volatile int32_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 22U;
	uint32_t t33 = 100371U;

	t33 = (((x133^x134)|x135)&x136);

	if (t33 != 22U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -63;
	static int8_t x138 = 32;
	int16_t x139 = 0;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 59;

	t34 = (((x137^x138)|x139)&x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -3435LL;
	uint32_t x142 = UINT32_MAX;
	uint32_t x143 = 1381U;
	int32_t x144 = INT32_MIN;
	int64_t t35 = -94944984807739LL;

	t35 = (((x141^x142)|x143)&x144);

	if (t35 != -4294967296LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -43LL;
	uint8_t x147 = 22U;
	volatile int8_t x148 = INT8_MIN;
	volatile int64_t t36 = 232511176LL;

	t36 = (((x145^x146)|x147)&x148);

	if (t36 != -768LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x150 = 3;
	static uint8_t x151 = 1U;
	int16_t x152 = -1;
	volatile int32_t t37 = 286;

	t37 = (((x149^x150)|x151)&x152);

	if (t37 != 253) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x154 = UINT16_MAX;

	t38 = (((x153^x154)|x155)&x156);

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x158 = -1;
	uint8_t x160 = 4U;
	static uint32_t t39 = 11297859U;

	t39 = (((x157^x158)|x159)&x160);

	if (t39 != 4U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	volatile uint16_t x162 = 5U;
	int8_t x163 = -1;
	int32_t t40 = 17591;

	t40 = (((x161^x162)|x163)&x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = -1;
	volatile int16_t x166 = INT16_MIN;
	volatile uint8_t x168 = 44U;
	uint64_t t41 = 41LLU;

	t41 = (((x165^x166)|x167)&x168);

	if (t41 != 44LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 709048LLU;
	int64_t x172 = INT64_MAX;
	static uint64_t t42 = 46047293487424432LLU;

	t42 = (((x169^x170)|x171)&x172);

	if (t42 != 9223372036854774268LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x175 = -1;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

	t43 = (((x173^x174)|x175)&x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 31U;
	static int32_t x178 = INT32_MIN;
	volatile uint8_t x179 = 27U;
	volatile uint16_t x180 = UINT16_MAX;

	t44 = (((x177^x178)|x179)&x180);

	if (t44 != 31) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = -1;
	static volatile int16_t x184 = -1;
	volatile int32_t t45 = -47;

	t45 = (((x181^x182)|x183)&x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 3165047LL;
	uint64_t x186 = 1254LLU;
	int32_t x187 = -1;
	int16_t x188 = -1;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (((x185^x186)|x187)&x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x192 = -1;

	t47 = (((x189^x190)|x191)&x192);

	if (t47 != 9223372036862352987LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	uint8_t x194 = UINT8_MAX;
	int32_t t48 = -599990057;

	t48 = (((x193^x194)|x195)&x196);

	if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 24U;
	int16_t x199 = INT16_MIN;
	volatile int32_t t49 = 49;

	t49 = (((x197^x198)|x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	volatile int64_t t50 = 7346313LL;

	t50 = (((x201^x202)|x203)&x204);

	if (t50 != -2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = 168083;
	static int8_t x206 = INT8_MAX;
	int64_t x207 = INT64_MAX;
	int64_t x208 = -84431992287LL;
	volatile int64_t t51 = 12962333224316158LL;

	t51 = (((x205^x206)|x207)&x208);

	if (t51 != 9223371952422783521LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 16U;
	int64_t x210 = -1LL;
	volatile int64_t t52 = 1961370279891339LL;

	t52 = (((x209^x210)|x211)&x212);

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MAX;
	int16_t x215 = 1;
	volatile uint8_t x216 = 5U;

	t53 = (((x213^x214)|x215)&x216);

	if (t53 != 5LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 12229;
	volatile uint16_t x218 = 30U;
	static uint32_t x219 = UINT32_MAX;
	int16_t x220 = -31;
	uint32_t t54 = 1U;

	t54 = (((x217^x218)|x219)&x220);

	if (t54 != 4294967265U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	int32_t x222 = 708676;
	volatile uint64_t x223 = 37LLU;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t55 = 101634695LLU;

	t55 = (((x221^x222)|x223)&x224);

	if (t55 != 101LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 1304LL;
	volatile int32_t x226 = -1;
	volatile int32_t x227 = -300170624;
	int8_t x228 = -4;
	int64_t t56 = -234220596LL;

	t56 = (((x225^x226)|x227)&x228);

	if (t56 != -1308LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 21859U;
	int64_t x231 = INT64_MIN;
	int16_t x232 = 8;
	int64_t t57 = -1901LL;

	t57 = (((x229^x230)|x231)&x232);

	if (t57 != 8LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 67034167756226LLU;
	int32_t x235 = -50244652;
	int32_t x236 = INT32_MIN;
	static volatile uint64_t t58 = 281821527035LLU;

	t58 = (((x233^x234)|x235)&x236);

	if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	int8_t x238 = -24;
	static int16_t x239 = -3;
	static uint16_t x240 = 489U;
	int32_t t59 = -8780;

	t59 = (((x237^x238)|x239)&x240);

	if (t59 != 489) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 88124991638088195LLU;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	int32_t x244 = 2270761;
	static volatile uint64_t t60 = 37737417289466LLU;

	t60 = (((x241^x242)|x243)&x244);

	if (t60 != 164905LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 222844986;
	volatile int16_t x246 = INT16_MAX;
	int32_t x248 = -8;

	t61 = (((x245^x246)|x247)&x248);

	if (t61 != -22592) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 595U;
	static volatile uint64_t x250 = 88830783LLU;
	static int64_t x251 = INT64_MAX;
	int64_t x252 = -189848LL;

	t62 = (((x249^x250)|x251)&x252);

	if (t62 != 9223372036854585960LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = -1LL;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	volatile int64_t t63 = 104945160434412376LL;

	t63 = (((x253^x254)|x255)&x256);

	if (t63 != 32741LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 37197827975019297LL;
	int32_t x258 = INT32_MIN;
	int64_t x259 = -596277630LL;

	t64 = (((x257^x258)|x259)&x260);

	if (t64 != -16908381LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 207153;
	static uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 5U;
	static volatile uint32_t x264 = UINT32_MAX;
	static uint64_t t65 = 4761730796341429LLU;

	t65 = (((x261^x262)|x263)&x264);

	if (t65 != 4294760143LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 57760U;
	uint8_t x266 = 19U;
	volatile uint8_t x267 = 1U;
	uint32_t t66 = 499772U;

	t66 = (((x265^x266)|x267)&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	int32_t x272 = INT32_MIN;
	volatile int64_t t67 = -16275464921LL;

	t67 = (((x269^x270)|x271)&x272);

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	static volatile int16_t x274 = INT16_MIN;
	volatile uint8_t x275 = 31U;
	volatile uint64_t x276 = 13827LLU;

	t68 = (((x273^x274)|x275)&x276);

	if (t68 != 13827LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 105;
	int16_t x278 = INT16_MIN;
	volatile int8_t x280 = INT8_MAX;
	static volatile uint64_t t69 = 1073275859283LLU;

	t69 = (((x277^x278)|x279)&x280);

	if (t69 != 105LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	static int32_t t70 = -112;

	t70 = (((x281^x282)|x283)&x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 885895023645398LLU;
	volatile int32_t x286 = -12457498;
	int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	static volatile uint64_t t71 = 5105042539290LLU;

	t71 = (((x285^x286)|x287)&x288);

	if (t71 != 18445858178679749376LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	int16_t x291 = -29;
	static volatile int8_t x292 = 7;
	int32_t t72 = -22193601;

	t72 = (((x289^x290)|x291)&x292);

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	int8_t x294 = -1;
	uint8_t x296 = 2U;

	t73 = (((x293^x294)|x295)&x296);

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = -1;
	int8_t x300 = -1;
	static int64_t t74 = 504LL;

	t74 = (((x297^x298)|x299)&x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	static volatile int64_t t75 = -244928426351LL;

	t75 = (((x301^x302)|x303)&x304);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = 1933LL;
	static uint16_t x307 = 2U;
	uint64_t x308 = 10129LLU;
	uint64_t t76 = 148LLU;

	t76 = (((x305^x306)|x307)&x308);

	if (t76 != 1921LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 75131U;
	int8_t x310 = -55;
	static volatile int32_t x311 = -1;
	uint32_t t77 = 2U;

	t77 = (((x309^x310)|x311)&x312);

	if (t77 != 65535U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	int32_t x314 = 3474;
	uint32_t x315 = 4190843U;
	volatile int64_t t78 = 21136643893567LL;

	t78 = (((x313^x314)|x315)&x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x319 = INT16_MIN;
	volatile uint64_t x320 = 376686502422161441LLU;
	uint64_t t79 = 110LLU;

	t79 = (((x317^x318)|x319)&x320);

	if (t79 != 376686502422159392LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 17423U;
	uint32_t x324 = UINT32_MAX;
	int64_t t80 = 115264098584LL;

	t80 = (((x321^x322)|x323)&x324);

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 272745420664296123LLU;
	int8_t x326 = -1;
	volatile int32_t x327 = -1;
	int16_t x328 = 28;
	volatile uint64_t t81 = 49249484616LLU;

	t81 = (((x325^x326)|x327)&x328);

	if (t81 != 28LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	int64_t t82 = -786LL;

	t82 = (((x329^x330)|x331)&x332);

	if (t82 != -32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	static uint64_t x335 = 279LLU;
	int64_t x336 = INT64_MIN;
	static volatile uint64_t t83 = 2318813LLU;

	t83 = (((x333^x334)|x335)&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static int32_t x338 = -5158;
	volatile uint32_t x339 = 37427880U;
	int16_t x340 = INT16_MAX;

	t84 = (((x337^x338)|x339)&x340);

	if (t84 != 7853LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 6U;
	static int32_t x342 = INT32_MAX;
	volatile int64_t t85 = -2311648299880651741LL;

	t85 = (((x341^x342)|x343)&x344);

	if (t85 != -9223372035374043319LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t t86 = -10991385472634LL;

	t86 = (((x345^x346)|x347)&x348);

	if (t86 != -82300163325052LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 27U;
	static uint16_t x352 = UINT16_MAX;
	int64_t t87 = -2656591432LL;

	t87 = (((x349^x350)|x351)&x352);

	if (t87 != 65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	volatile int32_t x355 = INT32_MIN;
	static volatile int64_t x356 = 1LL;
	static int64_t t88 = 7895LL;

	t88 = (((x353^x354)|x355)&x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -1LL;
	int8_t x360 = -24;
	int64_t t89 = -7018690LL;

	t89 = (((x357^x358)|x359)&x360);

	if (t89 != -24LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 5552092063563LLU;
	static int32_t x362 = -1;
	static int32_t x363 = INT32_MIN;
	volatile uint64_t t90 = 198712121721222LLU;

	t90 = (((x361^x362)|x363)&x364);

	if (t90 != 176LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 168;
	int64_t x367 = INT64_MIN;
	volatile int64_t t91 = 131321996714LL;

	t91 = (((x365^x366)|x367)&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x369^x370)|x371)&x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MAX;
	int32_t x375 = 48;
	static uint8_t x376 = UINT8_MAX;

	t93 = (((x373^x374)|x375)&x376);

	if (t93 != 48) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = INT16_MIN;
	static volatile int64_t t94 = -24LL;

	t94 = (((x377^x378)|x379)&x380);

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	int8_t x383 = INT8_MIN;
	volatile int32_t x384 = INT32_MIN;
	static int64_t t95 = -984908952609676LL;

	t95 = (((x381^x382)|x383)&x384);

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t96 = INT32_MIN;

	t96 = (((x385^x386)|x387)&x388);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	int64_t x391 = -3957LL;
	uint8_t x392 = UINT8_MAX;
	int64_t t97 = -4LL;

	t97 = (((x389^x390)|x391)&x392);

	if (t97 != 255LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int32_t x396 = 1;
	int64_t t98 = -1462233807844862162LL;

	t98 = (((x393^x394)|x395)&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = -87745;
	int64_t x400 = 542263261159087642LL;
	volatile int64_t t99 = -8478477088LL;

	t99 = (((x397^x398)|x399)&x400);

	if (t99 != 542263261159087642LL) { NG(); } else { ; }
	
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

