#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x21 = -12218;
int8_t x22 = -41;
int8_t x30 = 55;
int32_t x36 = -1;
int8_t x37 = INT8_MIN;
static volatile int8_t x38 = INT8_MIN;
volatile int32_t x40 = -1;
volatile int32_t t7 = -175893;
volatile int8_t x51 = -1;
static uint8_t x67 = UINT8_MAX;
uint32_t x81 = 213437943U;
int32_t x84 = INT32_MIN;
int32_t x88 = INT32_MIN;
int64_t t15 = INT64_MIN;
static int64_t t16 = -939LL;
volatile int32_t x95 = -1;
int8_t x96 = INT8_MIN;
uint16_t x99 = 583U;
static int64_t t19 = -26016LL;
int32_t x108 = INT32_MIN;
int32_t t20 = 12055451;
uint32_t x110 = 60U;
uint8_t x112 = UINT8_MAX;
int16_t x114 = -1;
int32_t x117 = INT32_MAX;
volatile int32_t t25 = INT32_MIN;
volatile uint16_t x133 = 138U;
static int16_t x134 = 7697;
volatile int32_t x137 = INT32_MIN;
uint64_t x146 = 7916983831928579LLU;
static volatile int64_t t29 = 85142LL;
int64_t t30 = 3695LL;
static int16_t x177 = 495;
volatile uint32_t x179 = 254072628U;
int16_t x186 = -1;
volatile uint8_t x188 = 5U;
int8_t x190 = -1;
volatile uint64_t x192 = 4427304673830765LLU;
int32_t x197 = 1;
static int64_t x200 = INT64_MIN;
int64_t t37 = -113883LL;
uint64_t t38 = 50LLU;
uint16_t x212 = 381U;
int64_t x221 = -1LL;
int16_t x226 = -2;
int64_t t47 = 355140011965932LL;
int64_t t48 = 31941690544610LL;
int32_t x269 = INT32_MIN;
static int16_t x275 = -1;
volatile int64_t t51 = 563476073520LL;
int64_t x285 = INT64_MIN;
uint16_t x299 = 1196U;
volatile uint64_t t53 = 0LLU;
uint16_t x314 = 51U;
static uint8_t x315 = UINT8_MAX;
static int32_t x316 = -870;
int64_t x318 = INT64_MAX;
uint32_t x326 = 1001463661U;
int64_t x328 = 2359920622536410513LL;
uint64_t x331 = 11446LLU;
static volatile int64_t t61 = 9LL;
uint16_t x346 = 2648U;
volatile uint64_t x358 = UINT64_MAX;
uint32_t x366 = 4U;
int32_t x377 = -1;
uint16_t x387 = 347U;
uint32_t x391 = UINT32_MAX;
int8_t x406 = -1;
int32_t x407 = -3957;
volatile int8_t x412 = INT8_MAX;
static uint64_t x427 = 244290LLU;
int16_t x430 = INT16_MAX;
static uint64_t x432 = 55708851332735LLU;
volatile uint64_t t80 = 28428LLU;
int16_t x438 = INT16_MAX;
volatile uint64_t x440 = 265122548180LLU;
int16_t x445 = INT16_MIN;
int8_t x447 = INT8_MIN;
volatile int64_t x452 = INT64_MIN;
static volatile int64_t x482 = 7LL;
int32_t x483 = INT32_MIN;
volatile int8_t x485 = -3;
static volatile uint8_t x488 = UINT8_MAX;
uint64_t x489 = 2569964204578LLU;
int8_t x497 = -1;
int8_t x498 = -1;
uint32_t x503 = 5511U;
int64_t t94 = 447929708LL;
static uint64_t x518 = 751822LLU;
int32_t x520 = -1;
int32_t x536 = INT32_MAX;
int8_t x539 = 0;
volatile uint8_t x540 = UINT8_MAX;
int16_t x542 = INT16_MIN;
uint8_t x543 = 30U;


void f0(void) {
	static int32_t x1 = 7746699;
	int8_t x2 = -16;
	int16_t x3 = -1;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 86451625LL;

	t0 = (x1&((x2*x3)^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 498;
	volatile uint8_t x10 = 1U;
	static int64_t x11 = -231465LL;
	int16_t x12 = INT16_MIN;
	volatile int64_t t1 = 3205122LL;

	t1 = (x9&((x10*x11)^x12));

	if (t1 != 466LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	volatile int32_t x19 = -1;
	static int32_t x20 = -1;
	volatile int64_t t2 = INT64_MIN;

	t2 = (x17&((x18*x19)^x20));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x23 = 3493362U;
	static int16_t x24 = -1;
	uint32_t t3 = 113U;

	t3 = (x21&((x22*x23)^x24));

	if (t3 != 143216704U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MAX;
	static int16_t x26 = INT16_MAX;
	int16_t x27 = 1;
	uint8_t x28 = 2U;
	volatile int64_t t4 = -113757618085LL;

	t4 = (x25&((x26*x27)^x28));

	if (t4 != 32765LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	volatile uint64_t x31 = 13LLU;
	static int32_t x32 = -1;
	static volatile uint64_t t5 = 34351781374095781LLU;

	t5 = (x29&((x30*x31)^x32));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	int32_t x34 = 7;
	uint16_t x35 = UINT16_MAX;
	int32_t t6 = 758104;

	t6 = (x33&((x34*x35)^x36));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x39 = INT8_MIN;

	t7 = (x37&((x38*x39)^x40));

	if (t7 != -16512) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	static uint64_t x42 = UINT64_MAX;
	static uint64_t x43 = 899777189501771001LLU;
	static uint64_t x44 = 227LLU;
	uint64_t t8 = 729708542881305881LLU;

	t8 = (x41&((x42*x43)^x44));

	if (t8 != 25572LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	static volatile uint16_t x46 = 0U;
	volatile int32_t x47 = -1;
	static volatile int8_t x48 = INT8_MIN;
	volatile uint32_t t9 = 1736U;

	t9 = (x45&((x46*x47)^x48));

	if (t9 != 4294967168U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 1311150858LLU;
	static int8_t x50 = 59;
	int8_t x52 = -1;
	volatile uint64_t t10 = 14232418935LLU;

	t10 = (x49&((x50*x51)^x52));

	if (t10 != 10LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int16_t x58 = -88;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MAX;
	volatile uint64_t t11 = 3450LLU;

	t11 = (x57&((x58*x59)^x60));

	if (t11 != 2916351LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x61 = 2932346U;
	int64_t x62 = -3841825558931536LL;
	static int16_t x63 = -1;
	uint16_t x64 = 24415U;
	int64_t t12 = 2274877LL;

	t12 = (x61&((x62*x63)^x64));

	if (t12 != 2668042LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	volatile uint64_t x66 = UINT64_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t13 = 6LLU;

	t13 = (x65&((x66*x67)^x68));

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x82 = 183U;
	static int64_t x83 = -512883LL;
	volatile int64_t t14 = -82419811300463LL;

	t14 = (x81&((x82*x83)^x84));

	if (t14 != 136366275LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x85 = INT64_MIN;
	uint16_t x86 = 0U;
	int8_t x87 = -1;

	t15 = (x85&((x86*x87)^x88));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = -1;

	t16 = (x89&((x90*x91)^x92));

	if (t16 != 1073709055LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = UINT16_MAX;
	static volatile int8_t x94 = INT8_MAX;
	volatile int32_t t17 = 0;

	t17 = (x93&((x94*x95)^x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	uint8_t x100 = 11U;
	volatile int64_t t18 = -2152754089353553LL;

	t18 = (x97&((x98*x99)^x100));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = -422950676123657LL;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;

	t19 = (x101&((x102*x103)^x104));

	if (t19 != -9222949086178672640LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x105 = -1;
	uint16_t x106 = 813U;
	int16_t x107 = INT16_MIN;

	t20 = (x105&((x106*x107)^x108));

	if (t20 != 2120843264) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MAX;
	volatile uint32_t x111 = 37186550U;
	volatile uint32_t t21 = 127705265U;

	t21 = (x109&((x110*x111)^x112));

	if (t21 != 19799U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -1;
	int8_t x115 = INT8_MIN;
	static volatile uint64_t x116 = UINT64_MAX;
	uint64_t t22 = 400185993LLU;

	t22 = (x113&((x114*x115)^x116));

	if (t22 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t23 = -1;

	t23 = (x117&((x118*x119)^x120));

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = INT32_MIN;
	static uint8_t x126 = 3U;
	static int32_t x127 = 81;
	int64_t x128 = INT64_MAX;
	volatile int64_t t24 = -19109590230LL;

	t24 = (x125&((x126*x127)^x128));

	if (t24 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x129 = INT32_MIN;
	static uint8_t x130 = 1U;
	int16_t x131 = INT16_MIN;
	int8_t x132 = 3;

	t25 = (x129&((x130*x131)^x132));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x135 = 2U;
	uint8_t x136 = 40U;
	int32_t t26 = 0;

	t26 = (x133&((x134*x135)^x136));

	if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x138 = 15U;
	volatile int64_t x139 = -1LL;
	uint32_t x140 = UINT32_MAX;
	volatile int64_t t27 = 3970418655997886LL;

	t27 = (x137&((x138*x139)^x140));

	if (t27 != -4294967296LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x145 = INT64_MIN;
	static int32_t x147 = 1;
	int16_t x148 = -7332;
	static volatile uint64_t t28 = 4889243405LLU;

	t28 = (x145&((x146*x147)^x148));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = 10836;
	int8_t x158 = 2;
	uint16_t x159 = 2U;
	int64_t x160 = -15510847465LL;

	t29 = (x157&((x158*x159)^x160));

	if (t29 != 16LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = INT16_MIN;
	static volatile int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	volatile int32_t x164 = INT32_MIN;

	t30 = (x161&((x162*x163)^x164));

	if (t30 != -2147450880LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = -1;
	int16_t x166 = -246;
	int16_t x167 = INT16_MIN;
	static volatile int32_t x168 = 13;
	volatile int32_t t31 = 51453;

	t31 = (x165&((x166*x167)^x168));

	if (t31 != 8060941) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = -685;
	int64_t x172 = INT64_MIN;
	static volatile int64_t t32 = -6392221079345202LL;

	t32 = (x169&((x170*x171)^x172));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = -1275;
	int16_t x174 = -439;
	int32_t x175 = 3083982;
	int64_t x176 = -1LL;
	static volatile int64_t t33 = -435082LL;

	t33 = (x173&((x174*x175)^x176));

	if (t33 != 1353868033LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x178 = UINT64_MAX;
	static uint64_t x180 = 36203166468LLU;
	volatile uint64_t t34 = 194670092429LLU;

	t34 = (x177&((x178*x179)^x180));

	if (t34 != 456LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = 213124;
	int8_t x187 = -1;
	int32_t t35 = -83018;

	t35 = (x185&((x186*x187)^x188));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x189 = 96U;
	int32_t x191 = -1;
	volatile uint64_t t36 = 215506924LLU;

	t36 = (x189&((x190*x191)^x192));

	if (t36 != 96LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x198 = 5927080U;
	static int8_t x199 = INT8_MAX;

	t37 = (x197&((x198*x199)^x200));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = 7;
	int8_t x202 = 2;
	uint64_t x203 = 98215873179446LLU;
	int8_t x204 = -18;

	t38 = (x201&((x202*x203)^x204));

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile int32_t x206 = INT32_MIN;
	static int64_t x207 = 3LL;
	int8_t x208 = INT8_MIN;
	volatile int64_t t39 = -53501LL;

	t39 = (x205&((x206*x207)^x208));

	if (t39 != 4294967296LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = -1;
	static int8_t x210 = -1;
	int16_t x211 = INT16_MIN;
	volatile int32_t t40 = -470062;

	t40 = (x209&((x210*x211)^x212));

	if (t40 != 33149) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	static int16_t x216 = -1;
	int64_t t41 = INT64_MIN;

	t41 = (x213&((x214*x215)^x216));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x217 = 0U;
	volatile int8_t x218 = INT8_MAX;
	int16_t x219 = 2013;
	int8_t x220 = INT8_MIN;
	static int32_t t42 = 127565035;

	t42 = (x217&((x218*x219)^x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x222 = -1LL;
	volatile uint16_t x223 = 859U;
	int16_t x224 = INT16_MAX;
	volatile int64_t t43 = -138041126821823LL;

	t43 = (x221&((x222*x223)^x224));

	if (t43 != -31910LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = -456279;
	static volatile uint16_t x227 = 4U;
	int64_t x228 = INT64_MAX;
	int64_t t44 = 7LL;

	t44 = (x225&((x226*x227)^x228));

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = -63166;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = 50U;
	volatile int32_t t45 = -6814463;

	t45 = (x233&((x234*x235)^x236));

	if (t45 != -2069790720) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = -1;
	static uint8_t x238 = 42U;
	int64_t x239 = 853562LL;
	static int64_t x240 = INT64_MIN;
	int64_t t46 = 1880345674LL;

	t46 = (x237&((x238*x239)^x240));

	if (t46 != -9223372036818926204LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = INT32_MAX;
	volatile int16_t x246 = INT16_MIN;
	volatile int64_t x247 = -1LL;
	static int64_t x248 = INT64_MIN;

	t47 = (x245&((x246*x247)^x248));

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = -1LL;
	uint32_t x262 = 51789736U;
	static volatile int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

	t48 = (x261&((x262*x263)^x264));

	if (t48 != 4294967168LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x265 = 3767LLU;
	volatile uint8_t x266 = 13U;
	static int16_t x267 = INT16_MAX;
	volatile uint64_t x268 = 1719LLU;
	volatile uint64_t t49 = 181911212279644LLU;

	t49 = (x265&((x266*x267)^x268));

	if (t49 != 2052LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x270 = 12319U;
	static int16_t x271 = 2;
	int64_t x272 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = (x269&((x270*x271)^x272));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x273 = INT16_MIN;
	static int64_t x274 = INT64_MAX;
	volatile int32_t x276 = INT32_MIN;

	t51 = (x273&((x274*x275)^x276));

	if (t51 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 51U;
	uint64_t x288 = 15173221273200711LLU;
	static volatile uint64_t t52 = 365LLU;

	t52 = (x285&((x286*x287)^x288));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x297 = INT16_MAX;
	uint64_t x298 = 1LLU;
	uint32_t x300 = 38U;

	t53 = (x297&((x298*x299)^x300));

	if (t53 != 1162LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x305 = 877646740792LL;
	int64_t x306 = -1LL;
	int16_t x307 = INT16_MIN;
	volatile int8_t x308 = -25;
	int64_t t54 = 424709LL;

	t54 = (x305&((x306*x307)^x308));

	if (t54 != 877646740768LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x313 = INT64_MAX;
	static volatile int64_t t55 = 2867968LL;

	t55 = (x313&((x314*x315)^x316));

	if (t55 != 9223372036854763095LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x317 = -1;
	int64_t x319 = -1LL;
	int16_t x320 = INT16_MIN;
	volatile int64_t t56 = -18035221354LL;

	t56 = (x317&((x318*x319)^x320));

	if (t56 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x321 = INT32_MAX;
	static int8_t x322 = INT8_MAX;
	int8_t x323 = -1;
	int32_t x324 = INT32_MIN;
	volatile int32_t t57 = 1012125411;

	t57 = (x321&((x322*x323)^x324));

	if (t57 != 2147483521) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x325 = -11361894;
	int16_t x327 = -1;
	int64_t t58 = 533936336LL;

	t58 = (x325&((x326*x327)^x328));

	if (t58 != 2359920621388833026LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = -1;
	int8_t x332 = INT8_MIN;
	uint64_t t59 = 19382870213LLU;

	t59 = (x329&((x330*x331)^x332));

	if (t59 != 11466LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x333 = 13U;
	uint32_t x334 = 27U;
	volatile int16_t x335 = -1;
	uint64_t x336 = 61660528LLU;
	volatile uint64_t t60 = 19465819113LLU;

	t60 = (x333&((x334*x335)^x336));

	if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x337 = INT8_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -52;
	int64_t x340 = 0LL;

	t61 = (x337&((x338*x339)^x340));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 123U;
	uint32_t t62 = 187U;

	t62 = (x341&((x342*x343)^x344));

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x345 = 7U;
	static uint64_t x347 = UINT64_MAX;
	volatile uint16_t x348 = 342U;
	volatile uint64_t t63 = 13LLU;

	t63 = (x345&((x346*x347)^x348));

	if (t63 != 6LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x349 = INT32_MIN;
	static int16_t x350 = 0;
	int8_t x351 = -45;
	int64_t x352 = INT64_MAX;
	volatile int64_t t64 = 138LL;

	t64 = (x349&((x350*x351)^x352));

	if (t64 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x353 = -1;
	static volatile uint8_t x354 = UINT8_MAX;
	uint16_t x355 = 1U;
	int16_t x356 = INT16_MIN;
	int32_t t65 = 59;

	t65 = (x353&((x354*x355)^x356));

	if (t65 != -32513) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x357 = 176681009855338LLU;
	uint32_t x359 = 2758019U;
	uint32_t x360 = 1U;
	uint64_t t66 = 1LLU;

	t66 = (x357&((x358*x359)^x360));

	if (t66 != 176681009850984LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x361 = 103U;
	uint8_t x362 = 7U;
	int16_t x363 = -1;
	volatile uint64_t x364 = UINT64_MAX;
	uint64_t t67 = 32773415394153LLU;

	t67 = (x361&((x362*x363)^x364));

	if (t67 != 6LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = -1;
	volatile uint64_t x367 = 72900LLU;
	uint64_t x368 = 4305104062842LLU;
	volatile uint64_t t68 = 2012909LLU;

	t68 = (x365&((x366*x367)^x368));

	if (t68 != 4305104321130LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = INT32_MIN;
	static int8_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t69 = 1021265650;

	t69 = (x369&((x370*x371)^x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x373 = 13;
	volatile int32_t x374 = -1;
	int64_t x375 = INT64_MAX;
	int64_t x376 = INT64_MAX;
	int64_t t70 = -122LL;

	t70 = (x373&((x374*x375)^x376));

	if (t70 != 12LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x378 = INT16_MIN;
	int16_t x379 = -1;
	volatile uint8_t x380 = 12U;
	static int32_t t71 = 4211995;

	t71 = (x377&((x378*x379)^x380));

	if (t71 != 32780) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x381 = -1;
	volatile uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 39196638LLU;
	int64_t x384 = 7910LL;
	static uint64_t t72 = 182332074321688083LLU;

	t72 = (x381&((x382*x383)^x384));

	if (t72 != 2568751675076LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	int64_t x388 = INT64_MIN;
	int64_t t73 = INT64_MIN;

	t73 = (x385&((x386*x387)^x388));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x389 = 1;
	volatile uint32_t x390 = 834021U;
	static int32_t x392 = INT32_MIN;
	uint32_t t74 = 2071599452U;

	t74 = (x389&((x390*x391)^x392));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile uint16_t x400 = 7962U;
	volatile int64_t t75 = 39249079553LL;

	t75 = (x397&((x398*x399)^x400));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x405 = INT64_MIN;
	volatile uint64_t x408 = 817LLU;
	uint64_t t76 = 3LLU;

	t76 = (x405&((x406*x407)^x408));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x409 = INT64_MIN;
	static uint8_t x410 = 3U;
	volatile int8_t x411 = 1;
	int64_t t77 = 667016420264088LL;

	t77 = (x409&((x410*x411)^x412));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x413 = UINT64_MAX;
	int16_t x414 = 1264;
	int16_t x415 = INT16_MAX;
	uint16_t x416 = 2U;
	uint64_t t78 = 31LLU;

	t78 = (x413&((x414*x415)^x416));

	if (t78 != 41417490LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x425 = INT16_MIN;
	int8_t x426 = -1;
	volatile int8_t x428 = INT8_MIN;
	volatile uint64_t t79 = 235539920LLU;

	t79 = (x425&((x426*x427)^x428));

	if (t79 != 229376LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x429 = INT8_MIN;
	static int64_t x431 = -1LL;

	t80 = (x429&((x430*x431)^x432));

	if (t80 != 18446688364858238464LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x437 = INT32_MIN;
	uint8_t x439 = UINT8_MAX;
	uint64_t t81 = 1940885552182134045LLU;

	t81 = (x437&((x438*x439)^x440));

	if (t81 != 264140488704LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x441 = INT32_MIN;
	uint8_t x442 = UINT8_MAX;
	uint8_t x443 = 127U;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t82 = 930;

	t82 = (x441&((x442*x443)^x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x446 = INT8_MIN;
	volatile uint8_t x448 = 9U;
	volatile int32_t t83 = -84630898;

	t83 = (x445&((x446*x447)^x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x449 = 497U;
	static uint8_t x450 = 48U;
	int8_t x451 = INT8_MIN;
	volatile int64_t t84 = -22LL;

	t84 = (x449&((x450*x451)^x452));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x453 = 6;
	uint64_t x454 = UINT64_MAX;
	uint64_t x455 = 12884103752191365LLU;
	int32_t x456 = INT32_MIN;
	static uint64_t t85 = 24435925402382LLU;

	t85 = (x453&((x454*x455)^x456));

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x465 = -14;
	static uint16_t x466 = 155U;
	volatile int16_t x467 = INT16_MAX;
	static volatile int32_t x468 = -1;
	int32_t t86 = 14;

	t86 = (x465&((x466*x467)^x468));

	if (t86 != -5078894) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x473 = INT8_MIN;
	volatile int16_t x474 = INT16_MIN;
	int16_t x475 = -1;
	volatile int16_t x476 = -251;
	int32_t t87 = -7;

	t87 = (x473&((x474*x475)^x476));

	if (t87 != -33024) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x481 = UINT8_MAX;
	static int8_t x484 = INT8_MAX;
	volatile int64_t t88 = -74LL;

	t88 = (x481&((x482*x483)^x484));

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x486 = -1LL;
	int32_t x487 = -1;
	volatile int64_t t89 = -164LL;

	t89 = (x485&((x486*x487)^x488));

	if (t89 != 252LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x490 = INT8_MAX;
	volatile uint64_t x491 = UINT64_MAX;
	uint32_t x492 = 16605882U;
	volatile uint64_t t90 = 2883860758LLU;

	t90 = (x489&((x490*x491)^x492));

	if (t90 != 2569950760994LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x499 = 1275624U;
	int16_t x500 = 2499;
	volatile uint32_t t91 = 851180U;

	t91 = (x497&((x498*x499)^x500));

	if (t91 != 4293689563U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MIN;
	int32_t x504 = -1;
	uint32_t t92 = 24U;

	t92 = (x501&((x502*x503)^x504));

	if (t92 != 2147450880U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x509 = 1335812171U;
	int64_t x510 = 1278654359035LL;
	int32_t x511 = 1727;
	int8_t x512 = INT8_MIN;
	volatile int64_t t93 = 38LL;

	t93 = (x509&((x510*x511)^x512));

	if (t93 != 1218232385LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x513 = -1;
	static int64_t x514 = -1LL;
	uint8_t x515 = UINT8_MAX;
	int16_t x516 = INT16_MAX;

	t94 = (x513&((x514*x515)^x516));

	if (t94 != -32514LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x517 = UINT8_MAX;
	int32_t x519 = INT32_MIN;
	volatile uint64_t t95 = 70LLU;

	t95 = (x517&((x518*x519)^x520));

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x525 = -1;
	int16_t x526 = -1;
	static uint32_t x527 = 1107U;
	int8_t x528 = INT8_MIN;
	uint32_t t96 = 6639U;

	t96 = (x525&((x526*x527)^x528));

	if (t96 != 1069U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x533 = 108U;
	volatile uint16_t x534 = 433U;
	int8_t x535 = INT8_MAX;
	volatile int32_t t97 = 38;

	t97 = (x533&((x534*x535)^x536));

	if (t97 != 32) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x537 = INT8_MIN;
	static int8_t x538 = INT8_MIN;
	static int32_t t98 = -1;

	t98 = (x537&((x538*x539)^x540));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x541 = 1300731LLU;
	int64_t x544 = INT64_MIN;
	volatile uint64_t t99 = 100100768502LLU;

	t99 = (x541&((x542*x543)^x544));

	if (t99 != 1114112LLU) { NG(); } else { ; }
	
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

