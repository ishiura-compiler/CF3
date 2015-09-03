#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -3;
int64_t x5 = INT64_MIN;
static volatile uint8_t x6 = 3U;
int64_t x9 = 28486297971LL;
static int32_t x12 = -1;
int64_t t2 = -161545683191358LL;
int16_t x13 = -3862;
int64_t x14 = -274845303062385534LL;
int16_t x16 = INT16_MIN;
int16_t x18 = INT16_MAX;
volatile int16_t x44 = INT16_MIN;
int8_t x45 = INT8_MAX;
int32_t t9 = -1;
static int16_t x49 = -16;
uint64_t x51 = 22385115486373LLU;
volatile uint64_t t10 = 140845634LLU;
volatile uint16_t x54 = 56U;
volatile int64_t t12 = -34700954195LL;
uint64_t x65 = 13258LLU;
int32_t x69 = INT32_MIN;
uint8_t x72 = 14U;
uint16_t x75 = 13806U;
static int16_t x77 = INT16_MAX;
volatile int64_t x86 = 3531644928LL;
int32_t x93 = INT32_MIN;
int64_t x95 = INT64_MIN;
uint16_t x97 = UINT16_MAX;
volatile int8_t x98 = INT8_MAX;
int32_t x99 = 68;
static volatile uint64_t t21 = 1026340LLU;
static volatile int8_t x115 = -11;
int16_t x119 = INT16_MIN;
static int16_t x127 = INT16_MAX;
int32_t x135 = INT32_MIN;
uint64_t t28 = 679344905876726LLU;
static int16_t x145 = INT16_MAX;
static uint8_t x151 = 1U;
static volatile uint16_t x153 = 1U;
int32_t x156 = INT32_MIN;
uint16_t x166 = UINT16_MAX;
uint64_t t35 = 460LLU;
uint32_t x183 = UINT32_MAX;
volatile int64_t t37 = 289583824731LL;
int16_t x189 = INT16_MIN;
int8_t x192 = INT8_MAX;
int16_t x194 = INT16_MAX;
int16_t x195 = INT16_MIN;
volatile uint8_t x201 = 3U;
uint8_t x209 = UINT8_MAX;
static uint32_t x214 = 1244U;
static uint64_t x215 = 7695LLU;
static volatile uint64_t t43 = 61387727596LLU;
uint64_t x223 = UINT64_MAX;
int32_t x224 = INT32_MAX;
uint64_t x225 = 246LLU;
int32_t x227 = INT32_MAX;
int64_t x232 = INT64_MIN;
static int16_t x234 = -1;
static int64_t x241 = -1LL;
volatile int16_t x247 = INT16_MIN;
volatile uint16_t x251 = 3339U;
static int8_t x264 = -1;
uint32_t x267 = UINT32_MAX;
static int8_t x268 = INT8_MIN;
uint32_t t56 = 687U;
volatile int64_t x271 = INT64_MIN;
static volatile int64_t t57 = 67620LL;
int16_t x275 = INT16_MIN;
static uint32_t t58 = 399U;
int8_t x294 = -1;
int32_t x295 = INT32_MAX;
static uint32_t x296 = UINT32_MAX;
uint32_t t62 = 104842U;
uint32_t x297 = UINT32_MAX;
uint8_t x303 = 11U;
static uint64_t x314 = 2LLU;
int64_t x315 = INT64_MIN;
uint64_t x316 = 13157971292455933LLU;
int16_t x317 = 6816;
static int8_t x319 = INT8_MIN;
int64_t x323 = INT64_MIN;
static int64_t t69 = -11380LL;
uint64_t x329 = 9630480LLU;
uint64_t t70 = 337448938LLU;
int16_t x335 = INT16_MAX;
int64_t x340 = -43855LL;
uint64_t t73 = 977066533LLU;
int8_t x349 = INT8_MIN;
int32_t t75 = 53;
int64_t x359 = -483026704107340LL;
int64_t x366 = -1LL;
int32_t x368 = INT32_MIN;
static int64_t x370 = -1LL;
static int8_t x371 = 0;
int64_t t80 = 12121LL;
uint8_t x382 = 6U;
int32_t x383 = INT32_MAX;
volatile uint64_t t83 = 1656114669066162887LLU;
volatile uint8_t x394 = 20U;
static volatile uint64_t t85 = 23717LLU;
int32_t x411 = -1;
volatile int32_t x418 = INT32_MIN;
volatile int64_t t88 = -9986LL;
volatile int8_t x422 = INT8_MIN;
uint32_t x446 = UINT32_MAX;
uint8_t x450 = 14U;
volatile int64_t t96 = 415LL;
int8_t x465 = 14;
static int32_t t98 = 93;
uint32_t x472 = 409750243U;


void f0(void) {
	int64_t x1 = 877LL;
	volatile uint64_t x2 = 31535800920585LLU;
	volatile int8_t x4 = -1;
	static uint64_t t0 = 12378LLU;

	t0 = ((x1+x2)%(x3|x4));

	if (t0 != 31535800921462LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int64_t t1 = -929LL;

	t1 = ((x5+x6)%(x7|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 1686U;
	int32_t x11 = -27358267;

	t2 = ((x9+x10)%(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = 1;
	int64_t t3 = 224914895008LL;

	t3 = ((x13+x14)%(x15|x16));

	if (t3 != -27882LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	uint8_t x19 = 35U;
	int64_t x20 = -9581LL;
	volatile int64_t t4 = -45LL;

	t4 = ((x17+x18)%(x19|x20));

	if (t4 != 4119LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 280;
	uint16_t x22 = UINT16_MAX;
	uint16_t x23 = 2063U;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = -3;

	t5 = ((x21+x22)%(x23|x24));

	if (t5 != 1331) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 7718564U;
	int64_t x26 = INT64_MIN;
	int16_t x27 = -154;
	uint8_t x28 = 6U;
	int64_t t6 = 233380LL;

	t6 = ((x25+x26)%(x27|x28));

	if (t6 != -78LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 72;
	uint16_t x30 = 227U;
	static int16_t x31 = -613;
	static int64_t x32 = INT64_MIN;
	int64_t t7 = -104648810312620760LL;

	t7 = ((x29+x30)%(x31|x32));

	if (t7 != 299LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint32_t x42 = 4787U;
	static int8_t x43 = INT8_MIN;
	volatile uint32_t t8 = 46254790U;

	t8 = ((x41+x42)%(x43|x44));

	if (t8 != 4786U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x46 = -1;
	volatile uint16_t x47 = 14U;
	int8_t x48 = INT8_MIN;

	t9 = ((x45+x46)%(x47|x48));

	if (t9 != 12) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x50 = INT16_MIN;
	static uint8_t x52 = UINT8_MAX;

	t10 = ((x49+x50)%(x51|x52));

	if (t10 != 21035703846126LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = -222997716386LL;
	static int8_t x55 = 1;
	int16_t x56 = -1;
	int64_t t11 = 140291077LL;

	t11 = ((x53+x54)%(x55|x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	volatile int16_t x63 = -1;
	static int64_t x64 = INT64_MAX;

	t12 = ((x61+x62)%(x63|x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x66 = 1;
	volatile uint8_t x67 = UINT8_MAX;
	int8_t x68 = -1;
	uint64_t t13 = 3668344LLU;

	t13 = ((x65+x66)%(x67|x68));

	if (t13 != 13259LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = INT32_MAX;
	int8_t x71 = -7;
	static volatile int32_t t14 = -2387;

	t14 = ((x69+x70)%(x71|x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = -3;
	uint16_t x74 = 316U;
	volatile uint8_t x76 = 28U;
	int32_t t15 = -739836;

	t15 = ((x73+x74)%(x75|x76));

	if (t15 != 313) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x78 = -1;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = 2722LL;
	int64_t t16 = 5821888447818LL;

	t16 = ((x77+x78)%(x79|x80));

	if (t16 != 2720LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x85 = 3103457809LLU;
	int8_t x87 = INT8_MAX;
	int32_t x88 = INT32_MAX;
	static volatile uint64_t t17 = 656494638170499256LLU;

	t17 = ((x85+x86)%(x87|x88));

	if (t17 != 192651796LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int32_t x92 = 267;
	int64_t t18 = -55LL;

	t18 = ((x89+x90)%(x91|x92));

	if (t18 != -32769LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x94 = 6U;
	uint8_t x96 = UINT8_MAX;
	volatile int64_t t19 = 5860LL;

	t19 = ((x93+x94)%(x95|x96));

	if (t19 != -2147483642LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x100 = -430361700;
	volatile int32_t t20 = 15541;

	t20 = ((x97+x98)%(x99|x100));

	if (t20 != 65662) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = 1158240;
	static int8_t x102 = 2;
	static uint64_t x103 = 1123768359669LLU;
	volatile uint32_t x104 = UINT32_MAX;

	t21 = ((x101+x102)%(x103|x104));

	if (t21 != 1158242LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -1;
	volatile int32_t x114 = -1;
	int32_t x116 = -2;
	int32_t t22 = -375181;

	t22 = ((x113+x114)%(x115|x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	uint8_t x120 = 14U;
	int32_t t23 = -1;

	t23 = ((x117+x118)%(x119|x120));

	if (t23 != -265) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x121 = -1;
	int32_t x122 = 15066630;
	static uint16_t x123 = 1U;
	static int16_t x124 = -9;
	volatile int32_t t24 = -310492776;

	t24 = ((x121+x122)%(x123|x124));

	if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	uint32_t x126 = 5U;
	int64_t x128 = 2303031LL;
	static volatile int64_t t25 = -130217409235903LL;

	t25 = ((x125+x126)%(x127|x128));

	if (t25 != 99232LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -2;
	int64_t x130 = INT64_MAX;
	static int64_t x131 = INT64_MIN;
	uint64_t x132 = 13588LLU;
	uint64_t t26 = 23153109LLU;

	t26 = ((x129+x130)%(x131|x132));

	if (t26 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x133 = -306;
	uint8_t x134 = 2U;
	uint16_t x136 = 920U;
	volatile int32_t t27 = 833642;

	t27 = ((x133+x134)%(x135|x136));

	if (t27 != -304) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;

	t28 = ((x137+x138)%(x139|x140));

	if (t28 != 2147483646LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = 0;
	int32_t x142 = -1;
	uint8_t x143 = 11U;
	uint32_t x144 = UINT32_MAX;
	uint32_t t29 = 82392U;

	t29 = ((x141+x142)%(x143|x144));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x146 = 0U;
	static uint32_t x147 = UINT32_MAX;
	int64_t x148 = INT64_MIN;
	static int64_t t30 = -6LL;

	t30 = ((x145+x146)%(x147|x148));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -511LL;
	uint8_t x150 = 1U;
	static int16_t x152 = INT16_MIN;
	static int64_t t31 = 2074733LL;

	t31 = ((x149+x150)%(x151|x152));

	if (t31 != -510LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x154 = UINT16_MAX;
	int16_t x155 = -1;
	static volatile int32_t t32 = -9446454;

	t32 = ((x153+x154)%(x155|x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t33 = -2;

	t33 = ((x157+x158)%(x159|x160));

	if (t33 != 126) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 1969477LLU;
	static int32_t x162 = -8823;
	volatile uint16_t x163 = 232U;
	int8_t x164 = -1;
	volatile uint64_t t34 = 479092932903972663LLU;

	t34 = ((x161+x162)%(x163|x164));

	if (t34 != 1960654LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 11982LLU;
	int64_t x167 = 116936713LL;
	volatile int32_t x168 = INT32_MIN;

	t35 = ((x165+x166)%(x167|x168));

	if (t35 != 77517LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x177 = -1;
	uint32_t x178 = 12580U;
	int32_t x179 = INT32_MAX;
	int32_t x180 = -1;
	static uint32_t t36 = 23907U;

	t36 = ((x177+x178)%(x179|x180));

	if (t36 != 12579U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = 459;
	uint16_t x182 = 19U;
	int64_t x184 = INT64_MIN;

	t37 = ((x181+x182)%(x183|x184));

	if (t37 != 478LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x190 = -1LL;
	uint64_t x191 = 197LLU;
	volatile uint64_t t38 = 322976LLU;

	t38 = ((x189+x190)%(x191|x192));

	if (t38 != 127LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = -1;
	volatile int8_t x196 = 29;
	int32_t t39 = 638153698;

	t39 = ((x193+x194)%(x195|x196));

	if (t39 != 27) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = INT16_MIN;
	static int64_t x198 = -1708623LL;
	int64_t x199 = -1LL;
	int16_t x200 = -1;
	volatile int64_t t40 = -1300790617LL;

	t40 = ((x197+x198)%(x199|x200));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x202 = 1;
	static int16_t x203 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t41 = 494;

	t41 = ((x201+x202)%(x203|x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x210 = 118U;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -2509750905LL;
	int64_t t42 = -112438078LL;

	t42 = ((x209+x210)%(x211|x212));

	if (t42 != 373LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	static int32_t x216 = INT32_MAX;

	t43 = ((x213+x214)%(x215|x216));

	if (t43 != 1116LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = 30293285754LLU;
	int64_t x219 = INT64_MIN;
	volatile int32_t x220 = -1;
	uint64_t t44 = 28LLU;

	t44 = ((x217+x218)%(x219|x220));

	if (t44 != 30293252986LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x221 = 11630U;
	uint64_t x222 = UINT64_MAX;
	uint64_t t45 = 109886274LLU;

	t45 = ((x221+x222)%(x223|x224));

	if (t45 != 11629LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x226 = UINT16_MAX;
	static volatile int8_t x228 = 2;
	volatile uint64_t t46 = 13949213968LLU;

	t46 = ((x225+x226)%(x227|x228));

	if (t46 != 65781LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x229 = -1LL;
	uint8_t x230 = UINT8_MAX;
	volatile uint64_t x231 = 1018414941574775526LLU;
	uint64_t t47 = 199783908875080LLU;

	t47 = ((x229+x230)%(x231|x232));

	if (t47 != 254LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x235 = 76096LLU;
	uint8_t x236 = UINT8_MAX;
	volatile uint64_t t48 = 1152701265836232LLU;

	t48 = ((x233+x234)%(x235|x236));

	if (t48 != 126LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x237 = 256867569LLU;
	static int16_t x238 = INT16_MAX;
	static int16_t x239 = 17;
	uint32_t x240 = UINT32_MAX;
	volatile uint64_t t49 = 6LLU;

	t49 = ((x237+x238)%(x239|x240));

	if (t49 != 256900336LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x242 = INT32_MIN;
	static uint64_t x243 = 409551482769LLU;
	static volatile int8_t x244 = -1;
	uint64_t t50 = 1118LLU;

	t50 = ((x241+x242)%(x243|x244));

	if (t50 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x245 = 1129553;
	volatile int16_t x246 = INT16_MIN;
	volatile uint32_t x248 = 1568605U;
	volatile uint32_t t51 = 1390U;

	t51 = ((x245+x246)%(x247|x248));

	if (t51 != 1096785U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 756LL;
	int16_t x250 = 113;
	volatile uint32_t x252 = 70U;
	volatile int64_t t52 = 15257LL;

	t52 = ((x249+x250)%(x251|x252));

	if (t52 != 869LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x253 = 14U;
	volatile int64_t x254 = INT64_MIN;
	uint32_t x255 = 61U;
	int64_t x256 = -1LL;
	int64_t t53 = -79057851929739LL;

	t53 = ((x253+x254)%(x255|x256));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 7U;
	int16_t x258 = INT16_MIN;
	static int64_t x259 = -7592306968LL;
	static uint16_t x260 = 779U;
	static int64_t t54 = 464735047415498425LL;

	t54 = ((x257+x258)%(x259|x260));

	if (t54 != -32761LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x261 = 225U;
	static int32_t x262 = INT32_MIN;
	uint32_t x263 = 4964U;
	uint32_t t55 = 451946U;

	t55 = ((x261+x262)%(x263|x264));

	if (t55 != 2147483873U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x265 = UINT16_MAX;
	static int16_t x266 = 4;

	t56 = ((x265+x266)%(x267|x268));

	if (t56 != 65539U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x269 = INT32_MAX;
	volatile int8_t x270 = INT8_MIN;
	int8_t x272 = INT8_MIN;

	t57 = ((x269+x270)%(x271|x272));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x273 = 16612740U;
	int16_t x274 = 0;
	uint32_t x276 = 445498U;

	t58 = ((x273+x274)%(x275|x276));

	if (t58 != 16612740U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x277 = 2122971348422184808LLU;
	int32_t x278 = -1;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t59 = 30772LLU;

	t59 = ((x277+x278)%(x279|x280));

	if (t59 != 2122971348422184807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = 68344602966579LLU;
	int32_t x286 = INT32_MAX;
	volatile uint8_t x287 = 106U;
	static uint8_t x288 = UINT8_MAX;
	uint64_t t60 = 716859LLU;

	t60 = ((x285+x286)%(x287|x288));

	if (t60 != 211LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = -1;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t61 = -375298;

	t61 = ((x289+x290)%(x291|x292));

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x293 = 12U;

	t62 = ((x293+x294)%(x295|x296));

	if (t62 != 11U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x298 = -433899;
	int8_t x299 = INT8_MAX;
	static volatile int64_t x300 = -1LL;
	volatile int64_t t63 = -1745155372625212871LL;

	t63 = ((x297+x298)%(x299|x300));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = 699513219LLU;
	int8_t x302 = INT8_MIN;
	static uint16_t x304 = 2U;
	volatile uint64_t t64 = 3088LLU;

	t64 = ((x301+x302)%(x303|x304));

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x305 = 650U;
	int8_t x306 = INT8_MAX;
	static int16_t x307 = 309;
	int8_t x308 = 33;
	int32_t t65 = 1947;

	t65 = ((x305+x306)%(x307|x308));

	if (t65 != 159) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x309 = 1LLU;
	int16_t x310 = -1;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = INT64_MIN;
	uint64_t t66 = 7862808934796173LLU;

	t66 = ((x309+x310)%(x311|x312));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x313 = 171U;
	static volatile uint64_t t67 = 4139503453LLU;

	t67 = ((x313+x314)%(x315|x316));

	if (t67 != 173LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x318 = -55;
	static uint64_t x320 = 367303305633LLU;
	volatile uint64_t t68 = 77214964990LLU;

	t68 = ((x317+x318)%(x319|x320));

	if (t68 != 6761LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = -1LL;
	uint8_t x322 = 10U;
	static volatile int64_t x324 = 156707651LL;

	t69 = ((x321+x322)%(x323|x324));

	if (t69 != 9LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x330 = 4544341002275916LLU;
	volatile int16_t x331 = INT16_MIN;
	volatile int16_t x332 = INT16_MAX;

	t70 = ((x329+x330)%(x331|x332));

	if (t70 != 4544341011906396LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = INT16_MAX;
	static uint16_t x334 = 669U;
	int32_t x336 = 1;
	int32_t t71 = -5269;

	t71 = ((x333+x334)%(x335|x336));

	if (t71 != 669) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 43U;
	int8_t x338 = INT8_MIN;
	static int8_t x339 = -7;
	int64_t t72 = -133476567505530LL;

	t72 = ((x337+x338)%(x339|x340));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	uint16_t x344 = UINT16_MAX;

	t73 = ((x341+x342)%(x343|x344));

	if (t73 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x350 = 695;
	uint64_t x351 = 2448931719295752LLU;
	volatile int64_t x352 = -1LL;
	uint64_t t74 = 12026334201096LLU;

	t74 = ((x349+x350)%(x351|x352));

	if (t74 != 567LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = -1;
	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -1;

	t75 = ((x353+x354)%(x355|x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = -1;
	volatile uint8_t x358 = 70U;
	int32_t x360 = 185870576;
	volatile int64_t t76 = 48LL;

	t76 = ((x357+x358)%(x359|x360));

	if (t76 != 69LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x361 = 2382973U;
	int32_t x362 = INT32_MIN;
	volatile int64_t x363 = -82148LL;
	uint32_t x364 = 6851U;
	int64_t t77 = -7131LL;

	t77 = ((x361+x362)%(x363|x364));

	if (t77 != 75525LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint64_t x367 = 25600LLU;
	uint64_t t78 = 2442764372951799LLU;

	t78 = ((x365+x366)%(x367|x368));

	if (t78 != 65534LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x369 = -18;
	int32_t x372 = -1;
	volatile int64_t t79 = 7307432LL;

	t79 = ((x369+x370)%(x371|x372));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MIN;
	volatile int8_t x375 = -60;
	static int16_t x376 = INT16_MAX;

	t80 = ((x373+x374)%(x375|x376));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = 216;
	uint16_t x384 = 237U;
	static int32_t t81 = 3799;

	t81 = ((x381+x382)%(x383|x384));

	if (t81 != 222) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x385 = INT16_MIN;
	uint8_t x386 = UINT8_MAX;
	volatile int16_t x387 = 590;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t82 = 5568882;

	t82 = ((x385+x386)%(x387|x388));

	if (t82 != -13) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MAX;
	uint64_t x391 = 1093869449174957LLU;
	int64_t x392 = 440LL;

	t83 = ((x389+x390)%(x391|x392));

	if (t83 != 823552271981916LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x393 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	static int64_t x396 = INT64_MIN;
	static volatile int64_t t84 = 2988959133LL;

	t84 = ((x393+x394)%(x395|x396));

	if (t84 != -32748LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = 29256739LLU;
	int32_t x398 = 0;
	uint32_t x399 = 959U;
	int8_t x400 = INT8_MIN;

	t85 = ((x397+x398)%(x399|x400));

	if (t85 != 29256739LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 1U;
	int64_t x402 = -336LL;
	volatile int32_t x403 = -1;
	int32_t x404 = -1527462;
	volatile int64_t t86 = -8041959124526476LL;

	t86 = ((x401+x402)%(x403|x404));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x409 = -1;
	int16_t x410 = -599;
	volatile int8_t x412 = INT8_MIN;
	int32_t t87 = 1;

	t87 = ((x409+x410)%(x411|x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x417 = INT64_MAX;
	volatile int64_t x419 = -10454LL;
	int16_t x420 = -1;

	t88 = ((x417+x418)%(x419|x420));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x421 = UINT16_MAX;
	int16_t x423 = -1;
	uint64_t x424 = 236LLU;
	volatile uint64_t t89 = 45867255LLU;

	t89 = ((x421+x422)%(x423|x424));

	if (t89 != 65407LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x425 = UINT32_MAX;
	uint32_t x426 = 1957U;
	static uint32_t x427 = 30499618U;
	int8_t x428 = INT8_MIN;
	volatile uint32_t t90 = 3009U;

	t90 = ((x425+x426)%(x427|x428));

	if (t90 != 1956U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = 1U;
	int32_t x434 = INT32_MIN;
	static int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MAX;
	int64_t t91 = 0LL;

	t91 = ((x433+x434)%(x435|x436));

	if (t91 != -2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = 1;
	uint8_t x438 = 8U;
	int64_t x439 = -30406601LL;
	static int16_t x440 = INT16_MIN;
	int64_t t92 = 205136354335LL;

	t92 = ((x437+x438)%(x439|x440));

	if (t92 != 9LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x441 = 58;
	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = 3U;
	volatile int64_t t93 = 1888245765966094LL;

	t93 = ((x441+x442)%(x443|x444));

	if (t93 != -70LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x445 = 1U;
	int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MIN;
	volatile int64_t t94 = -3625567LL;

	t94 = ((x445+x446)%(x447|x448));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = UINT64_MAX;
	static int32_t x451 = INT32_MIN;
	int16_t x452 = -14;
	static uint64_t t95 = 5806453747668300005LLU;

	t95 = ((x449+x450)%(x451|x452));

	if (t95 != 13LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x453 = UINT32_MAX;
	int32_t x454 = 1;
	int64_t x455 = INT64_MIN;
	int8_t x456 = INT8_MAX;

	t96 = ((x453+x454)%(x455|x456));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x461 = 12;
	int8_t x462 = INT8_MIN;
	static int16_t x463 = INT16_MIN;
	int8_t x464 = 0;
	int32_t t97 = -12147;

	t97 = ((x461+x462)%(x463|x464));

	if (t97 != -116) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x466 = INT8_MIN;
	volatile int8_t x467 = INT8_MIN;
	static int8_t x468 = -20;

	t98 = ((x465+x466)%(x467|x468));

	if (t98 != -14) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x469 = -13961;
	uint16_t x470 = UINT16_MAX;
	int16_t x471 = -3795;
	uint32_t t99 = 322489846U;

	t99 = ((x469+x470)%(x471|x472));

	if (t99 != 51574U) { NG(); } else { ; }
	
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

