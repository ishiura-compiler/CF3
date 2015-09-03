#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
volatile uint8_t x12 = 1U;
static volatile int64_t t2 = -5LL;
uint64_t x13 = 7572LLU;
uint8_t x24 = 28U;
int64_t t5 = 512313765012940LL;
static volatile int64_t t6 = 123499137LL;
static int32_t x37 = INT32_MIN;
int16_t x38 = INT16_MIN;
int32_t t8 = 8232;
static int64_t x50 = INT64_MIN;
int32_t x52 = -907;
uint8_t x53 = UINT8_MAX;
int32_t x56 = 0;
int16_t x62 = INT16_MIN;
int16_t x65 = 220;
static uint8_t x74 = 39U;
int32_t t16 = -1;
volatile int32_t t17 = 1;
int32_t t18 = INT32_MAX;
int32_t x86 = -1;
uint8_t x99 = 1U;
static int64_t x111 = 236597LL;
volatile int32_t x125 = -1;
static volatile uint32_t t29 = 31422742U;
static int64_t x133 = -352497593LL;
int64_t x145 = INT64_MIN;
int16_t x160 = 0;
int8_t x165 = -3;
static uint16_t x166 = 10U;
static int16_t x168 = INT16_MIN;
volatile uint16_t x178 = 989U;
int64_t x186 = INT64_MIN;
int32_t x187 = INT32_MAX;
static int64_t t42 = 18LL;
static int32_t x207 = 1;
volatile int32_t t46 = -7658;
static int8_t x215 = -1;
uint8_t x221 = 1U;
volatile uint16_t x223 = UINT16_MAX;
static uint64_t x233 = 55LLU;
int32_t x235 = INT32_MIN;
static int32_t x243 = INT32_MAX;
static int64_t x246 = INT64_MAX;
uint16_t x247 = 7587U;
int32_t x252 = -1;
volatile int64_t t57 = -1644LL;
int64_t x257 = -4587177LL;
static int8_t x259 = INT8_MAX;
int32_t x260 = 1;
int32_t x261 = INT32_MAX;
static uint8_t x270 = 2U;
int32_t x271 = INT32_MAX;
int8_t x274 = -3;
int64_t x278 = -273LL;
static volatile int32_t t62 = 55026;
static volatile int64_t x295 = -8462791812LL;
volatile uint8_t x296 = 1U;
static int8_t x297 = INT8_MAX;
volatile uint8_t x299 = UINT8_MAX;
uint32_t x308 = 1562U;
int32_t t72 = -465449468;
int32_t t73 = -854915;
volatile uint32_t x325 = 820U;
uint32_t t74 = 2317998U;
uint16_t x330 = 6U;
int64_t x335 = -1LL;
int64_t x342 = INT64_MIN;
int8_t x359 = INT8_MIN;
volatile int32_t x360 = 11;
static volatile int32_t t83 = 1;
volatile uint8_t x368 = 4U;
int32_t t84 = 4;
volatile int64_t x369 = INT64_MIN;
int8_t x372 = 2;
uint64_t x373 = UINT64_MAX;
static uint8_t x375 = UINT8_MAX;
uint8_t x378 = UINT8_MAX;
int64_t x383 = -7251LL;
static volatile int8_t x386 = -38;
volatile int64_t t89 = 1924536090933833228LL;
static int16_t x391 = 11904;
static volatile uint8_t x402 = 7U;
uint32_t x404 = 12853U;
uint64_t x407 = UINT64_MAX;
static uint8_t x409 = 3U;
volatile uint64_t x412 = 815131282402861LLU;
int8_t x414 = -7;
uint32_t x415 = 1965U;
int32_t t96 = 670289890;
int8_t x417 = INT8_MIN;
uint32_t x418 = 247873U;
int32_t x422 = INT32_MAX;
int64_t x423 = INT64_MIN;
int32_t t98 = 1;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MAX;
	static int64_t x3 = -1685LL;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 1;

	t0 = (x1^((x2/x3)<=x4));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int64_t x6 = INT64_MIN;
	static volatile int64_t x7 = INT64_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 175314682514438LLU;

	t1 = (x5^((x6/x7)<=x8));

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int8_t x11 = INT8_MAX;

	t2 = (x9^((x10/x11)<=x12));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	volatile int32_t x15 = INT32_MIN;
	int64_t x16 = -3893146LL;
	uint64_t t3 = 5LLU;

	t3 = (x13^((x14/x15)<=x16));

	if (t3 != 7572LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	uint16_t x18 = 20837U;
	volatile uint32_t x19 = 474989165U;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 44;

	t4 = (x17^((x18/x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 28220708204LL;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MIN;

	t5 = (x21^((x22/x23)<=x24));

	if (t5 != 28220708204LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -4113882LL;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = -644288873;
	static int64_t x28 = INT64_MIN;

	t6 = (x25^((x26/x27)<=x28));

	if (t6 != -4113882LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x30 = 0U;
	int8_t x31 = -4;
	int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = -2;

	t7 = (x29^((x30/x31)<=x32));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x39 = -982335419839477LL;
	uint16_t x40 = 164U;

	t8 = (x37^((x38/x39)<=x40));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -2;
	int64_t x42 = INT64_MAX;
	uint16_t x43 = 480U;
	static int32_t x44 = INT32_MIN;
	int32_t t9 = 245398;

	t9 = (x41^((x42/x43)<=x44));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -42074797;
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MIN;
	volatile int32_t x48 = INT32_MIN;
	int32_t t10 = -746061638;

	t10 = (x45^((x46/x47)<=x48));

	if (t10 != -42074797) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = 27;
	int64_t x51 = INT64_MIN;
	static volatile int32_t t11 = -1764;

	t11 = (x49^((x50/x51)<=x52));

	if (t11 != 27) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = -1;
	static int16_t x55 = 58;
	volatile int32_t t12 = 37951;

	t12 = (x53^((x54/x55)<=x56));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 6U;
	int32_t x58 = 9005484;
	static volatile int64_t x59 = -182LL;
	int32_t x60 = -1;
	int32_t t13 = -110098;

	t13 = (x57^((x58/x59)<=x60));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 0U;
	static uint16_t x63 = UINT16_MAX;
	int32_t x64 = INT32_MAX;
	int32_t t14 = 381364872;

	t14 = (x61^((x62/x63)<=x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = UINT8_MAX;
	static uint16_t x67 = UINT16_MAX;
	volatile uint32_t x68 = UINT32_MAX;
	static volatile int32_t t15 = -96;

	t15 = (x65^((x66/x67)<=x68));

	if (t15 != 221) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	int64_t x75 = -218671082332778261LL;
	static volatile int8_t x76 = INT8_MIN;

	t16 = (x73^((x74/x75)<=x76));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 107474491;
	volatile int8_t x78 = 0;
	static uint8_t x79 = UINT8_MAX;
	int16_t x80 = -50;

	t17 = (x77^((x78/x79)<=x80));

	if (t17 != 107474491) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MAX;
	int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	static int16_t x84 = -383;

	t18 = (x81^((x82/x83)<=x84));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	int32_t t19 = -21177;

	t19 = (x85^((x86/x87)<=x88));

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x89 = 73U;
	int16_t x90 = INT16_MAX;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 61U;
	volatile int32_t t20 = 490;

	t20 = (x89^((x90/x91)<=x92));

	if (t20 != 72) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -73;
	static int32_t x94 = INT32_MIN;
	int16_t x95 = 3574;
	static int8_t x96 = INT8_MIN;
	int32_t t21 = 17122;

	t21 = (x93^((x94/x95)<=x96));

	if (t21 != -74) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MIN;
	int16_t x100 = 114;
	int32_t t22 = 1;

	t22 = (x97^((x98/x99)<=x100));

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = -1;
	uint64_t x102 = 3452106LLU;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = -1;
	volatile int32_t t23 = -15033353;

	t23 = (x101^((x102/x103)<=x104));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	volatile int16_t x107 = INT16_MAX;
	int64_t x108 = INT64_MAX;
	volatile int32_t t24 = -10004437;

	t24 = (x105^((x106/x107)<=x108));

	if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static int8_t x112 = INT8_MIN;
	int32_t t25 = -2102331;

	t25 = (x109^((x110/x111)<=x112));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	volatile int64_t x115 = -44469LL;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t26 = -732;

	t26 = (x113^((x114/x115)<=x116));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 0;
	uint8_t x118 = 22U;
	static int32_t x119 = -469;
	volatile uint16_t x120 = 108U;
	static int32_t t27 = -15;

	t27 = (x117^((x118/x119)<=x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x126 = UINT32_MAX;
	static int16_t x127 = INT16_MIN;
	uint8_t x128 = 2U;
	static int32_t t28 = -2382;

	t28 = (x125^((x126/x127)<=x128));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 6657U;
	volatile int32_t x131 = -1;
	int32_t x132 = -1;

	t29 = (x129^((x130/x131)<=x132));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = -1;
	int8_t x135 = INT8_MIN;
	uint64_t x136 = 828345477561301LLU;
	static int64_t t30 = 56750968862614LL;

	t30 = (x133^((x134/x135)<=x136));

	if (t30 != -352497594LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = -156668;
	uint32_t x147 = 53679438U;
	int8_t x148 = -1;
	int64_t t31 = -48337LL;

	t31 = (x145^((x146/x147)<=x148));

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = -15166311;
	volatile uint64_t x152 = UINT64_MAX;
	volatile int32_t t32 = 317;

	t32 = (x149^((x150/x151)<=x152));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x153 = -1;
	static uint64_t x154 = 1362548309LLU;
	uint8_t x155 = 51U;
	static int64_t x156 = INT64_MIN;
	int32_t t33 = -1430438;

	t33 = (x153^((x154/x155)<=x156));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x158 = 5U;
	static int64_t x159 = INT64_MAX;
	volatile int32_t t34 = -31137;

	t34 = (x157^((x158/x159)<=x160));

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 623U;
	static uint64_t x162 = UINT64_MAX;
	static int32_t x163 = 10228393;
	int64_t x164 = 50LL;
	int32_t t35 = 4363657;

	t35 = (x161^((x162/x163)<=x164));

	if (t35 != 623) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x167 = INT16_MIN;
	static int32_t t36 = 22025;

	t36 = (x165^((x166/x167)<=x168));

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x169 = 29306U;
	static int32_t x170 = INT32_MIN;
	static volatile int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t37 = 471531780;

	t37 = (x169^((x170/x171)<=x172));

	if (t37 != 29307) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MIN;
	volatile uint16_t x174 = 671U;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;
	volatile int32_t t38 = 1;

	t38 = (x173^((x174/x175)<=x176));

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MIN;
	static volatile uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;
	static int32_t t39 = 0;

	t39 = (x177^((x178/x179)<=x180));

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	static volatile uint16_t x183 = 10U;
	static volatile int32_t x184 = INT32_MIN;
	uint32_t t40 = UINT32_MAX;

	t40 = (x181^((x182/x183)<=x184));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = 467;
	int16_t x188 = -1;
	int32_t t41 = 55;

	t41 = (x185^((x186/x187)<=x188));

	if (t41 != 466) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x190 = 149484886318LLU;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = INT32_MAX;

	t42 = (x189^((x190/x191)<=x192));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	int8_t x194 = -1;
	static int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	int64_t t43 = -6693753070015LL;

	t43 = (x193^((x194/x195)<=x196));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x198 = INT32_MIN;
	int8_t x199 = 1;
	volatile uint64_t x200 = 752707LLU;
	volatile int32_t t44 = -73;

	t44 = (x197^((x198/x199)<=x200));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 5U;
	int8_t x202 = INT8_MAX;
	static int32_t x203 = INT32_MAX;
	int16_t x204 = 13;
	volatile uint32_t t45 = 1U;

	t45 = (x201^((x202/x203)<=x204));

	if (t45 != 4U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = 24;
	uint8_t x206 = 56U;
	int8_t x208 = -49;

	t46 = (x205^((x206/x207)<=x208));

	if (t46 != 24) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MIN;
	uint64_t x211 = 868LLU;
	static volatile int16_t x212 = -1;
	uint64_t t47 = 226924401624LLU;

	t47 = (x209^((x210/x211)<=x212));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	int8_t x214 = 1;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t48 = 1;

	t48 = (x213^((x214/x215)<=x216));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MIN;
	volatile int32_t x219 = INT32_MIN;
	volatile int16_t x220 = INT16_MIN;
	int32_t t49 = -549;

	t49 = (x217^((x218/x219)<=x220));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x222 = 1593592LL;
	int32_t x224 = -1503808;
	static int32_t t50 = 4;

	t50 = (x221^((x222/x223)<=x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -17;
	volatile int8_t x226 = -1;
	uint16_t x227 = 59U;
	uint32_t x228 = UINT32_MAX;
	int32_t t51 = -1;

	t51 = (x225^((x226/x227)<=x228));

	if (t51 != -18) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x229 = 87;
	volatile int16_t x230 = INT16_MAX;
	uint16_t x231 = 86U;
	int8_t x232 = INT8_MAX;
	int32_t t52 = 275;

	t52 = (x229^((x230/x231)<=x232));

	if (t52 != 87) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x234 = -1LL;
	static int16_t x236 = -1;
	uint64_t t53 = 32815890LLU;

	t53 = (x233^((x234/x235)<=x236));

	if (t53 != 55LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 57U;
	uint64_t x238 = 617174151788320591LLU;
	volatile uint32_t x239 = 1816U;
	static volatile uint64_t x240 = UINT64_MAX;
	static volatile int32_t t54 = 818562;

	t54 = (x237^((x238/x239)<=x240));

	if (t54 != 56) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x241 = INT32_MAX;
	static volatile int16_t x242 = INT16_MIN;
	static int64_t x244 = 20488143680859LL;
	volatile int32_t t55 = -8288;

	t55 = (x241^((x242/x243)<=x244));

	if (t55 != 2147483646) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x248 = 214U;
	int32_t t56 = -24;

	t56 = (x245^((x246/x247)<=x248));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x249 = -166360LL;
	uint32_t x250 = 133U;
	uint16_t x251 = 2655U;

	t57 = (x249^((x250/x251)<=x252));

	if (t57 != -166359LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x258 = -1;
	static volatile int64_t t58 = 236663LL;

	t58 = (x257^((x258/x259)<=x260));

	if (t58 != -4587178LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x262 = INT16_MIN;
	volatile uint8_t x263 = 30U;
	int64_t x264 = -65116LL;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x261^((x262/x263)<=x264));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x269 = -1630272LL;
	volatile int32_t x272 = 2395540;
	int64_t t60 = -70946128LL;

	t60 = (x269^((x270/x271)<=x272));

	if (t60 != -1630271LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 245648991934624LLU;
	uint8_t x275 = 13U;
	int32_t x276 = INT32_MIN;
	static volatile uint64_t t61 = 42375664570LLU;

	t61 = (x273^((x274/x275)<=x276));

	if (t61 != 245648991934624LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = INT32_MIN;
	uint8_t x279 = 29U;
	int8_t x280 = -1;

	t62 = (x277^((x278/x279)<=x280));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -1;
	static int64_t x282 = -1LL;
	int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	static int32_t t63 = 662;

	t63 = (x281^((x282/x283)<=x284));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = -51985057735776LL;
	volatile int64_t x286 = INT64_MIN;
	volatile uint64_t x287 = 11501LLU;
	static volatile int16_t x288 = -189;
	static volatile int64_t t64 = -95299920313266282LL;

	t64 = (x285^((x286/x287)<=x288));

	if (t64 != -51985057735775LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -1;
	static volatile uint16_t x290 = 43U;
	int8_t x291 = -1;
	int32_t x292 = -12;
	volatile int32_t t65 = -3798326;

	t65 = (x289^((x290/x291)<=x292));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x293 = 17175;
	uint32_t x294 = 4479U;
	int32_t t66 = 23176907;

	t66 = (x293^((x294/x295)<=x296));

	if (t66 != 17174) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x298 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t67 = -21;

	t67 = (x297^((x298/x299)<=x300));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x301 = INT16_MAX;
	uint32_t x302 = 28U;
	int64_t x303 = -1LL;
	int8_t x304 = -9;
	int32_t t68 = 178;

	t68 = (x301^((x302/x303)<=x304));

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = 23466U;
	static uint16_t x306 = 108U;
	int16_t x307 = 588;
	int32_t t69 = -34534110;

	t69 = (x305^((x306/x307)<=x308));

	if (t69 != 23467) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x309 = 15396023U;
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = -1;
	int64_t x312 = 242172324420LL;
	static uint32_t t70 = 278613U;

	t70 = (x309^((x310/x311)<=x312));

	if (t70 != 15396022U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x313 = 12U;
	int16_t x314 = INT16_MAX;
	static int64_t x315 = INT64_MIN;
	static volatile int16_t x316 = INT16_MIN;
	volatile int32_t t71 = -1094699;

	t71 = (x313^((x314/x315)<=x316));

	if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x317 = 395;
	uint16_t x318 = UINT16_MAX;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;

	t72 = (x317^((x318/x319)<=x320));

	if (t72 != 394) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x321 = INT8_MIN;
	static uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	int64_t x324 = -1LL;

	t73 = (x321^((x322/x323)<=x324));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x326 = -1;
	int16_t x327 = -1;
	static int64_t x328 = 13820LL;

	t74 = (x325^((x326/x327)<=x328));

	if (t74 != 821U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = -1341227;
	int8_t x331 = -3;
	int8_t x332 = -2;
	static volatile int32_t t75 = 5112;

	t75 = (x329^((x330/x331)<=x332));

	if (t75 != -1341228) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 1296754LL;
	uint32_t x334 = 3912665U;
	int64_t x336 = INT64_MIN;
	volatile int64_t t76 = 180915723LL;

	t76 = (x333^((x334/x335)<=x336));

	if (t76 != 1296754LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x337 = 3U;
	int8_t x338 = -1;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -1LL;
	volatile int32_t t77 = -55;

	t77 = (x337^((x338/x339)<=x340));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x341 = 18;
	volatile int64_t x343 = 33694LL;
	int16_t x344 = -1033;
	int32_t t78 = 1000;

	t78 = (x341^((x342/x343)<=x344));

	if (t78 != 19) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = 3;
	int16_t x346 = -1;
	uint32_t x347 = 135442U;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t79 = -71;

	t79 = (x345^((x346/x347)<=x348));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = 1;
	int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t80 = -1;

	t80 = (x349^((x350/x351)<=x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = 4U;
	int32_t x354 = INT32_MIN;
	volatile int32_t x355 = INT32_MIN;
	int32_t x356 = -1;
	volatile int32_t t81 = 7515820;

	t81 = (x353^((x354/x355)<=x356));

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = UINT16_MAX;
	static int16_t x358 = INT16_MIN;
	volatile int32_t t82 = 31;

	t82 = (x357^((x358/x359)<=x360));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x361 = -1;
	int16_t x362 = INT16_MAX;
	uint16_t x363 = 626U;
	static uint64_t x364 = 8LLU;

	t83 = (x361^((x362/x363)<=x364));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = INT8_MAX;
	uint8_t x366 = UINT8_MAX;
	static volatile int64_t x367 = 8901971970LL;

	t84 = (x365^((x366/x367)<=x368));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x370 = INT64_MAX;
	static int16_t x371 = INT16_MIN;
	volatile int64_t t85 = -1750LL;

	t85 = (x369^((x370/x371)<=x372));

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x374 = 33U;
	int64_t x376 = 6956905721986LL;
	volatile uint64_t t86 = 2254169402214487LLU;

	t86 = (x373^((x374/x375)<=x376));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = UINT32_MAX;
	uint64_t x379 = UINT64_MAX;
	static int64_t x380 = INT64_MAX;
	uint32_t t87 = 2U;

	t87 = (x377^((x378/x379)<=x380));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x381 = 1164375285U;
	int16_t x382 = 3;
	int16_t x384 = 0;
	static volatile uint32_t t88 = 1U;

	t88 = (x381^((x382/x383)<=x384));

	if (t88 != 1164375284U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = 29240187242760557LL;
	int32_t x387 = -1;
	uint32_t x388 = 46U;

	t89 = (x385^((x386/x387)<=x388));

	if (t89 != 29240187242760556LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x389 = 142197265U;
	int16_t x390 = INT16_MIN;
	static int64_t x392 = -1LL;
	uint32_t t90 = 4U;

	t90 = (x389^((x390/x391)<=x392));

	if (t90 != 142197264U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x393 = UINT8_MAX;
	uint8_t x394 = 27U;
	volatile uint16_t x395 = 1343U;
	static uint16_t x396 = 1U;
	volatile int32_t t91 = -12;

	t91 = (x393^((x394/x395)<=x396));

	if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x397 = 34U;
	uint16_t x398 = 55U;
	uint64_t x399 = 990723698042LLU;
	uint32_t x400 = 35654660U;
	volatile int32_t t92 = 1;

	t92 = (x397^((x398/x399)<=x400));

	if (t92 != 35) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = UINT16_MAX;
	static int32_t x403 = INT32_MIN;
	volatile int32_t t93 = -1;

	t93 = (x401^((x402/x403)<=x404));

	if (t93 != 65534) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x405 = 2U;
	int32_t x406 = -931014;
	int64_t x408 = INT64_MAX;
	volatile int32_t t94 = 21749024;

	t94 = (x405^((x406/x407)<=x408));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x410 = 27U;
	static uint64_t x411 = 1224LLU;
	int32_t t95 = -83558;

	t95 = (x409^((x410/x411)<=x412));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 820U;
	static int8_t x416 = -15;

	t96 = (x413^((x414/x415)<=x416));

	if (t96 != 821) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x419 = -30558062;
	volatile int32_t x420 = INT32_MIN;
	int32_t t97 = -37255084;

	t97 = (x417^((x418/x419)<=x420));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MAX;
	volatile int32_t x424 = -1;

	t98 = (x421^((x422/x423)<=x424));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = UINT16_MAX;
	volatile uint32_t x427 = 1531430247U;
	int16_t x428 = -1915;
	static int32_t t99 = 39;

	t99 = (x425^((x426/x427)<=x428));

	if (t99 != -127) { NG(); } else { ; }
	
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

