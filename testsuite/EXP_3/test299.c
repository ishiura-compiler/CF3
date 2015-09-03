#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int64_t t0 = -2246159108438748094LL;
int32_t x6 = INT32_MIN;
int8_t x13 = -5;
uint64_t x16 = 733LLU;
volatile uint64_t t3 = 659LLU;
int64_t x20 = INT64_MIN;
uint32_t x25 = 4758028U;
int64_t x30 = INT64_MIN;
volatile uint32_t t7 = 11U;
uint64_t x37 = 131157651038173LLU;
uint64_t x38 = 51115935497059LLU;
static uint8_t x41 = 0U;
int32_t t10 = -11102837;
static volatile int64_t t11 = -251716846LL;
int64_t x58 = INT64_MAX;
int32_t x69 = INT32_MIN;
volatile int32_t t14 = -3194358;
uint32_t x73 = 97390004U;
uint64_t t15 = 9018106892LLU;
uint8_t x85 = 12U;
volatile int64_t x86 = -1LL;
int16_t x94 = INT16_MIN;
int32_t x97 = INT32_MIN;
int16_t x102 = INT16_MAX;
static int32_t x104 = INT32_MIN;
volatile int8_t x108 = -26;
uint32_t x120 = 232U;
uint64_t x127 = UINT64_MAX;
uint16_t x133 = UINT16_MAX;
int8_t x136 = INT8_MAX;
uint64_t x142 = UINT64_MAX;
int16_t x155 = 232;
static int8_t x161 = 23;
volatile int16_t x163 = -1;
int64_t x164 = INT64_MIN;
static volatile int64_t t33 = INT64_MAX;
uint64_t x173 = 20380886964316LLU;
volatile int64_t t35 = -5184542724LL;
int16_t x179 = -3;
int8_t x181 = INT8_MIN;
uint64_t x183 = 203741LLU;
static int8_t x190 = INT8_MIN;
static uint32_t x202 = 3159273U;
uint64_t x203 = 9278643329LLU;
uint64_t x213 = 12588090104187LLU;
volatile int64_t x214 = INT64_MIN;
uint16_t x217 = 182U;
uint8_t x219 = 117U;
int16_t x223 = -1;
uint32_t x233 = 855874U;
static volatile uint32_t x246 = 303U;
int64_t x250 = -1LL;
int64_t x257 = -13419237712057LL;
volatile uint8_t x260 = 52U;
volatile int32_t t51 = 185852;
int16_t x261 = -3;
static uint16_t x281 = 9898U;
uint8_t x286 = UINT8_MAX;
int32_t x290 = -596;
volatile int32_t t58 = 51;
uint8_t x296 = 3U;
int16_t x298 = INT16_MAX;
int16_t x299 = INT16_MIN;
int8_t x301 = INT8_MAX;
volatile uint32_t t61 = 1569346410U;
static int32_t x311 = 3;
volatile int16_t x323 = -258;
static int8_t x324 = -36;
uint32_t x331 = 134U;
uint8_t x332 = 0U;
volatile int32_t x342 = INT32_MIN;
uint64_t x344 = 7038934347157931LLU;
int16_t x350 = INT16_MIN;
static uint64_t x351 = UINT64_MAX;
static uint64_t x357 = 5105474LLU;
uint64_t x358 = UINT64_MAX;
uint64_t x359 = 170LLU;
int32_t x360 = INT32_MIN;
static int32_t x361 = INT32_MIN;
volatile uint64_t t73 = 9000728471LLU;
int8_t x365 = 1;
int16_t x372 = INT16_MAX;
static int32_t t75 = -47;
int32_t t77 = 3481542;
uint64_t x388 = UINT64_MAX;
volatile uint64_t t78 = 1050670899331874892LLU;
uint8_t x390 = 48U;
uint32_t t82 = 7U;
uint32_t x413 = 4763658U;
volatile int64_t x420 = -1LL;
volatile uint64_t x424 = UINT64_MAX;
uint16_t x426 = UINT16_MAX;
volatile uint32_t x432 = 10U;
int32_t t88 = -23;
int16_t x437 = INT16_MIN;
static int32_t x439 = INT32_MIN;
static uint64_t x440 = 5LLU;
int64_t x444 = -1294864175527LL;
volatile uint32_t x449 = UINT32_MAX;
int64_t x459 = -9047870976821170LL;
static volatile int64_t t94 = 10596682578LL;
int64_t x466 = INT64_MIN;
static volatile int64_t x472 = -1LL;
volatile int64_t t97 = -2383555280LL;
uint16_t x480 = 507U;
volatile int32_t t99 = -194908;


void f0(void) {
	int8_t x2 = -1;
	int64_t x3 = -86LL;
	int64_t x4 = -1LL;

	t0 = ((x1<=x2)^(x3-x4));

	if (t0 != -85LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 6101956U;
	volatile int32_t x7 = INT32_MIN;
	static volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -18;

	t1 = ((x5<=x6)^(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 46729U;
	int8_t x10 = 61;
	int32_t x11 = INT32_MAX;
	uint32_t x12 = 708407824U;
	uint32_t t2 = 22086U;

	t2 = ((x9<=x10)^(x11-x12));

	if (t2 != 1439075823U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 1U;
	static int32_t x15 = INT32_MIN;

	t3 = ((x13<=x14)^(x15-x16));

	if (t3 != 18446744071562067234LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile int64_t x18 = INT64_MIN;
	int16_t x19 = -984;
	static int64_t t4 = 43947323020LL;

	t4 = ((x17<=x18)^(x19-x20));

	if (t4 != 9223372036854774824LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 0U;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int32_t x24 = -1;
	int32_t t5 = -1;

	t5 = ((x21<=x22)^(x23-x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 0U;
	int64_t x27 = 1145850877892533386LL;
	int16_t x28 = INT16_MIN;
	static int64_t t6 = 3LL;

	t6 = ((x25<=x26)^(x27-x28));

	if (t6 != 1145850877892566154LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint32_t x31 = 12210U;
	int16_t x32 = INT16_MAX;

	t7 = ((x29<=x30)^(x31-x32));

	if (t7 != 4294946739U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x39 = INT32_MAX;
	uint64_t x40 = 112607532068LLU;
	uint64_t t8 = 29449925LLU;

	t8 = ((x37<=x38)^(x39-x40));

	if (t8 != 18446743963249503195LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = 86361709LL;
	int64_t x43 = -1LL;
	int32_t x44 = -15399;
	int64_t t9 = -60827538LL;

	t9 = ((x41<=x42)^(x43-x44));

	if (t9 != 15399LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 17U;
	int16_t x46 = 39;
	volatile int32_t x47 = 6428419;
	static uint8_t x48 = 4U;

	t10 = ((x45<=x46)^(x47-x48));

	if (t10 != 6428414) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 29U;
	int8_t x54 = INT8_MIN;
	static int64_t x55 = INT64_MIN;
	int32_t x56 = -1;

	t11 = ((x53<=x54)^(x55-x56));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 185U;
	int8_t x59 = -1;
	int32_t x60 = INT32_MAX;
	volatile int32_t t12 = -1069;

	t12 = ((x57<=x58)^(x59-x60));

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = UINT16_MAX;
	static uint8_t x62 = 1U;
	volatile uint64_t x63 = 1LLU;
	uint32_t x64 = 2989017U;
	uint64_t t13 = 207258722001014LLU;

	t13 = ((x61<=x62)^(x63-x64));

	if (t13 != 18446744073706562600LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x70 = UINT32_MAX;
	static int32_t x71 = -316661683;
	static int32_t x72 = -1684551;

	t14 = ((x69<=x70)^(x71-x72));

	if (t14 != -314977131) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = INT32_MIN;
	uint16_t x75 = 14U;
	static uint64_t x76 = 44924538LLU;

	t15 = ((x73<=x74)^(x75-x76));

	if (t15 != 18446744073664627093LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = INT64_MAX;
	uint32_t x78 = 33102U;
	int32_t x79 = 32254;
	uint64_t x80 = 872087LLU;
	uint64_t t16 = 37617LLU;

	t16 = ((x77<=x78)^(x79-x80));

	if (t16 != 18446744073708711783LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 1106041189689LLU;
	int16_t x82 = INT16_MAX;
	int32_t x83 = -20;
	uint8_t x84 = 3U;
	volatile int32_t t17 = -9425;

	t17 = ((x81<=x82)^(x83-x84));

	if (t17 != -23) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x87 = 19004U;
	static volatile int64_t x88 = -51068LL;
	volatile int64_t t18 = 16955903975380LL;

	t18 = ((x85<=x86)^(x87-x88));

	if (t18 != 70072LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	int8_t x96 = -1;
	static int64_t t19 = INT64_MIN;

	t19 = ((x93<=x94)^(x95-x96));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = 5LLU;
	volatile uint64_t t20 = 6LLU;

	t20 = ((x97<=x98)^(x99-x100));

	if (t20 != 18446744073709551482LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MAX;
	uint32_t x103 = 306189818U;
	uint32_t t21 = 495U;

	t21 = ((x101<=x102)^(x103-x104));

	if (t21 != 2453673466U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 6U;
	uint8_t x106 = UINT8_MAX;
	volatile int64_t x107 = -987617820871086868LL;
	int64_t t22 = 516261212848319LL;

	t22 = ((x105<=x106)^(x107-x108));

	if (t22 != -987617820871086841LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MIN;
	static volatile int16_t x115 = INT16_MIN;
	static int64_t x116 = 4092644941445282359LL;
	int64_t t23 = 34026965454826935LL;

	t23 = ((x113<=x114)^(x115-x116));

	if (t23 != -4092644941445315127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -1;
	static uint32_t x118 = UINT32_MAX;
	static int32_t x119 = -1;
	uint32_t t24 = 44U;

	t24 = ((x117<=x118)^(x119-x120));

	if (t24 != 4294967062U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x125 = 92U;
	uint16_t x126 = 4U;
	static int16_t x128 = -1;
	volatile uint64_t t25 = 42988289030LLU;

	t25 = ((x125<=x126)^(x127-x128));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = 125971324LLU;
	volatile int16_t x130 = INT16_MIN;
	uint8_t x131 = 2U;
	uint8_t x132 = 20U;
	int32_t t26 = -3;

	t26 = ((x129<=x130)^(x131-x132));

	if (t26 != -17) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x134 = INT16_MIN;
	static uint64_t x135 = UINT64_MAX;
	volatile uint64_t t27 = 16365554998LLU;

	t27 = ((x133<=x134)^(x135-x136));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MAX;
	static uint16_t x139 = 803U;
	int32_t x140 = -1;
	int32_t t28 = -32307;

	t28 = ((x137<=x138)^(x139-x140));

	if (t28 != 805) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = INT16_MIN;
	static uint16_t x143 = 1822U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t29 = 113;

	t29 = ((x141<=x142)^(x143-x144));

	if (t29 != 34591) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x145 = 197LLU;
	uint64_t x146 = 548LLU;
	static int64_t x147 = -1LL;
	int8_t x148 = -1;
	volatile int64_t t30 = 676808142032910LL;

	t30 = ((x145<=x146)^(x147-x148));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -126213LL;
	static uint32_t x154 = 0U;
	volatile uint64_t x156 = 443LLU;
	uint64_t t31 = 623584906LLU;

	t31 = ((x153<=x154)^(x155-x156));

	if (t31 != 18446744073709551404LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x157 = -1LL;
	static int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MAX;
	volatile uint8_t x160 = 32U;
	int64_t t32 = 14565160023910LL;

	t32 = ((x157<=x158)^(x159-x160));

	if (t32 != 9223372036854775774LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x162 = -379LL;

	t33 = ((x161<=x162)^(x163-x164));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = 1;
	static int32_t x170 = INT32_MIN;
	int32_t x171 = -1;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t34 = 1192;

	t34 = ((x169<=x170)^(x171-x172));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x174 = 7;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MIN;

	t35 = ((x173<=x174)^(x175-x176));

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = -1;
	uint8_t x178 = 7U;
	static volatile uint64_t x180 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x177<=x178)^(x179-x180));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x182 = 83LL;
	static int64_t x184 = -1LL;
	volatile uint64_t t37 = 7924LLU;

	t37 = ((x181<=x182)^(x183-x184));

	if (t37 != 203743LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = INT64_MAX;
	uint64_t x191 = 23LLU;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t38 = 7457210265LLU;

	t38 = ((x189<=x190)^(x191-x192));

	if (t38 != 18446744073709486104LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = 5U;
	int64_t x194 = INT64_MIN;
	volatile uint16_t x195 = 17481U;
	uint16_t x196 = 7U;
	int32_t t39 = -3147;

	t39 = ((x193<=x194)^(x195-x196));

	if (t39 != 17474) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x197 = -1;
	volatile int8_t x198 = INT8_MAX;
	int64_t x199 = -1LL;
	uint64_t x200 = 57122763LLU;
	static uint64_t t40 = 196283LLU;

	t40 = ((x197<=x198)^(x199-x200));

	if (t40 != 18446744073652428853LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = -14LL;
	int8_t x204 = 38;
	uint64_t t41 = 509LLU;

	t41 = ((x201<=x202)^(x203-x204));

	if (t41 != 9278643290LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x205 = UINT32_MAX;
	uint64_t x206 = UINT64_MAX;
	uint64_t x207 = 332151556280765LLU;
	int32_t x208 = INT32_MIN;
	uint64_t t42 = 8567903LLU;

	t42 = ((x205<=x206)^(x207-x208));

	if (t42 != 332153703764412LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x209 = 101U;
	static volatile int8_t x210 = -16;
	volatile int16_t x211 = 15893;
	int16_t x212 = -1;
	volatile int32_t t43 = -2491;

	t43 = ((x209<=x210)^(x211-x212));

	if (t43 != 15894) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x215 = -62;
	uint8_t x216 = 6U;
	int32_t t44 = -1;

	t44 = ((x213<=x214)^(x215-x216));

	if (t44 != -67) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x218 = -1780982LL;
	int64_t x220 = 15650492LL;
	int64_t t45 = -42054976317044274LL;

	t45 = ((x217<=x218)^(x219-x220));

	if (t45 != -15650375LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t46 = -15;

	t46 = ((x221<=x222)^(x223-x224));

	if (t46 != -65536) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = 55775230LLU;
	uint16_t x226 = 3767U;
	uint64_t x227 = 107LLU;
	int8_t x228 = INT8_MAX;
	uint64_t t47 = 206490618955667669LLU;

	t47 = ((x225<=x226)^(x227-x228));

	if (t47 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x234 = UINT8_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	volatile uint8_t x236 = 13U;
	volatile int32_t t48 = -98303;

	t48 = ((x233<=x234)^(x235-x236));

	if (t48 != 65522) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = INT32_MIN;
	int64_t x247 = 439886050677LL;
	uint32_t x248 = 29048U;
	volatile int64_t t49 = 34803561409770LL;

	t49 = ((x245<=x246)^(x247-x248));

	if (t49 != 439886021629LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = -1;
	int8_t x251 = 3;
	volatile uint32_t x252 = 0U;
	static volatile uint32_t t50 = 425505U;

	t50 = ((x249<=x250)^(x251-x252));

	if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x258 = INT32_MIN;
	int32_t x259 = 409486;

	t51 = ((x257<=x258)^(x259-x260));

	if (t51 != 409435) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	int16_t x264 = 1;
	static int32_t t52 = -424501447;

	t52 = ((x261<=x262)^(x263-x264));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x265 = 281LLU;
	static volatile int64_t x266 = -1LL;
	int16_t x267 = -1;
	static int32_t x268 = -21146;
	volatile int32_t t53 = -9;

	t53 = ((x265<=x266)^(x267-x268));

	if (t53 != 21144) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = -5380;
	static uint8_t x271 = 0U;
	volatile int32_t x272 = INT32_MAX;
	int32_t t54 = -908279255;

	t54 = ((x269<=x270)^(x271-x272));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x277 = -1LL;
	uint32_t x278 = UINT32_MAX;
	uint16_t x279 = 1U;
	int16_t x280 = INT16_MAX;
	int32_t t55 = 5;

	t55 = ((x277<=x278)^(x279-x280));

	if (t55 != -32765) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x282 = -98;
	uint8_t x283 = 122U;
	static int16_t x284 = -1;
	volatile int32_t t56 = 7952521;

	t56 = ((x281<=x282)^(x283-x284));

	if (t56 != 123) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = INT32_MIN;
	uint32_t x287 = 4304U;
	int8_t x288 = 49;
	static uint32_t t57 = 29920556U;

	t57 = ((x285<=x286)^(x287-x288));

	if (t57 != 4254U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x289 = -31;
	int32_t x291 = 1;
	volatile uint16_t x292 = UINT16_MAX;

	t58 = ((x289<=x290)^(x291-x292));

	if (t58 != -65534) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x293 = 0U;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int32_t t59 = 201267;

	t59 = ((x293<=x294)^(x295-x296));

	if (t59 != -131) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x297 = INT8_MAX;
	uint8_t x300 = 6U;
	int32_t t60 = 1;

	t60 = ((x297<=x298)^(x299-x300));

	if (t60 != -32773) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x302 = -49;
	volatile uint8_t x303 = UINT8_MAX;
	uint32_t x304 = UINT32_MAX;

	t61 = ((x301<=x302)^(x303-x304));

	if (t61 != 256U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = -1;
	volatile int8_t x310 = -1;
	static uint16_t x312 = 38U;
	int32_t t62 = -86;

	t62 = ((x309<=x310)^(x311-x312));

	if (t62 != -36) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = 0U;
	static int8_t x316 = -1;
	int32_t t63 = -7149310;

	t63 = ((x313<=x314)^(x315-x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -12108515230LL;
	int16_t x318 = 411;
	int32_t x319 = INT32_MIN;
	volatile int64_t x320 = -42633581350760LL;
	int64_t t64 = -7309528951020LL;

	t64 = ((x317<=x318)^(x319-x320));

	if (t64 != 42631433867113LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = 432314LL;
	static uint8_t x322 = 26U;
	volatile int32_t t65 = -15791;

	t65 = ((x321<=x322)^(x323-x324));

	if (t65 != -222) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x325 = -11;
	int64_t x326 = -2378405972LL;
	uint32_t x327 = 20866U;
	uint8_t x328 = UINT8_MAX;
	volatile uint32_t t66 = 589216924U;

	t66 = ((x325<=x326)^(x327-x328));

	if (t66 != 20611U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x329 = -1LL;
	volatile int8_t x330 = INT8_MAX;
	uint32_t t67 = 2781494U;

	t67 = ((x329<=x330)^(x331-x332));

	if (t67 != 135U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x341 = -1;
	int64_t x343 = 6508898LL;
	uint64_t t68 = 1LLU;

	t68 = ((x341<=x342)^(x343-x344));

	if (t68 != 18439705139368902583LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	volatile uint64_t x347 = UINT64_MAX;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t69 = 56533LLU;

	t69 = ((x345<=x346)^(x347-x348));

	if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x349 = INT16_MIN;
	static int8_t x352 = INT8_MIN;
	volatile uint64_t t70 = 63715605805LLU;

	t70 = ((x349<=x350)^(x351-x352));

	if (t70 != 126LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	static volatile int16_t x355 = -130;
	uint64_t x356 = 7715949754960234LLU;
	uint64_t t71 = 3002995LLU;

	t71 = ((x353<=x354)^(x355-x356));

	if (t71 != 18439028123954591252LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t t72 = 356159214648780LLU;

	t72 = ((x357<=x358)^(x359-x360));

	if (t72 != 2147483819LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x362 = INT64_MIN;
	volatile int16_t x363 = INT16_MIN;
	uint64_t x364 = 12005205025515472LLU;

	t73 = ((x361<=x362)^(x363-x364));

	if (t73 != 18434738868684003376LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x366 = UINT16_MAX;
	volatile int32_t x367 = 477088;
	static int16_t x368 = -26;
	volatile int32_t t74 = -5444;

	t74 = ((x365<=x366)^(x367-x368));

	if (t74 != 477115) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x369 = 3669U;
	static volatile uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MAX;

	t75 = ((x369<=x370)^(x371-x372));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = -408260700;
	uint32_t x374 = UINT32_MAX;
	volatile uint8_t x375 = 0U;
	int16_t x376 = INT16_MAX;
	int32_t t76 = -92129966;

	t76 = ((x373<=x374)^(x375-x376));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x377 = 61U;
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	volatile int16_t x380 = 12346;

	t77 = ((x377<=x378)^(x379-x380));

	if (t77 != -12347) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x385 = 51;
	int64_t x386 = 16185588397621LL;
	volatile int32_t x387 = -2;

	t78 = ((x385<=x386)^(x387-x388));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x391 = UINT32_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t79 = 1466U;

	t79 = ((x389<=x390)^(x391-x392));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x393 = 4U;
	int16_t x394 = INT16_MAX;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = -24842389;
	int32_t t80 = 250541;

	t80 = ((x393<=x394)^(x395-x396));

	if (t80 != 24842260) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x397 = 15U;
	static uint64_t x398 = 3431775LLU;
	uint8_t x399 = UINT8_MAX;
	static int32_t x400 = -1;
	static int32_t t81 = -26;

	t81 = ((x397<=x398)^(x399-x400));

	if (t81 != 257) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	uint16_t x404 = 248U;

	t82 = ((x401<=x402)^(x403-x404));

	if (t82 != 4294967046U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x414 = INT32_MAX;
	int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t83 = -10731;

	t83 = ((x413<=x414)^(x415-x416));

	if (t83 != -2147483519) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = -1LL;
	int32_t x418 = 16351519;
	static uint64_t x419 = UINT64_MAX;
	static uint64_t t84 = 8385924LLU;

	t84 = ((x417<=x418)^(x419-x420));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x421 = INT32_MIN;
	int32_t x422 = 40893;
	int16_t x423 = 173;
	uint64_t t85 = 123717802987084LLU;

	t85 = ((x421<=x422)^(x423-x424));

	if (t85 != 175LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x425 = 8U;
	static int32_t x427 = -1;
	int16_t x428 = INT16_MAX;
	int32_t t86 = -1317;

	t86 = ((x425<=x426)^(x427-x428));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = INT64_MIN;
	volatile int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	volatile uint32_t t87 = 61289670U;

	t87 = ((x429<=x430)^(x431-x432));

	if (t87 != 2147483639U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x433 = INT64_MIN;
	volatile int8_t x434 = INT8_MIN;
	static uint8_t x435 = UINT8_MAX;
	int32_t x436 = -7;

	t88 = ((x433<=x434)^(x435-x436));

	if (t88 != 263) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x438 = UINT16_MAX;
	uint64_t t89 = 11LLU;

	t89 = ((x437<=x438)^(x439-x440));

	if (t89 != 18446744071562067962LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x441 = UINT8_MAX;
	static volatile int64_t x442 = -13410LL;
	int32_t x443 = INT32_MAX;
	volatile int64_t t90 = -4764331302555LL;

	t90 = ((x441<=x442)^(x443-x444));

	if (t90 != 1297011659174LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = -22497676885370617LL;
	static volatile int32_t x446 = 184351932;
	static volatile uint8_t x447 = UINT8_MAX;
	volatile uint32_t x448 = 647849361U;
	uint32_t t91 = 11U;

	t91 = ((x445<=x446)^(x447-x448));

	if (t91 != 3647118191U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x450 = 1U;
	int64_t x451 = INT64_MIN;
	uint64_t x452 = UINT64_MAX;
	static volatile uint64_t t92 = 606942942262LLU;

	t92 = ((x449<=x450)^(x451-x452));

	if (t92 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x453 = -1LL;
	uint8_t x454 = 78U;
	static uint64_t x455 = 58288979LLU;
	int64_t x456 = -1LL;
	uint64_t t93 = 29275612595490530LLU;

	t93 = ((x453<=x454)^(x455-x456));

	if (t93 != 58288981LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x457 = -1;
	static int32_t x458 = 11156286;
	static int32_t x460 = -1;

	t94 = ((x457<=x458)^(x459-x460));

	if (t94 != -9047870976821170LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x461 = 241U;
	static uint16_t x462 = 88U;
	int32_t x463 = -15658;
	static int32_t x464 = -1573;
	int32_t t95 = -30966385;

	t95 = ((x461<=x462)^(x463-x464));

	if (t95 != -14085) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = 4;
	int32_t x467 = -1;
	static int32_t x468 = -1;
	int32_t t96 = -238441500;

	t96 = ((x465<=x466)^(x467-x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x469 = INT8_MIN;
	static uint64_t x470 = UINT64_MAX;
	int32_t x471 = INT32_MIN;

	t97 = ((x469<=x470)^(x471-x472));

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x473 = 240667039678671030LLU;
	static volatile int8_t x474 = INT8_MIN;
	uint16_t x475 = 0U;
	static int32_t x476 = INT32_MAX;
	volatile int32_t t98 = INT32_MIN;

	t98 = ((x473<=x474)^(x475-x476));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = -1LL;
	static uint32_t x478 = 1U;
	volatile int8_t x479 = INT8_MIN;

	t99 = ((x477<=x478)^(x479-x480));

	if (t99 != -636) { NG(); } else { ; }
	
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

