#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x13 = INT8_MAX;
static volatile int64_t t0 = INT64_MAX;
volatile uint8_t x18 = UINT8_MAX;
volatile int8_t x22 = -1;
static int8_t x28 = INT8_MIN;
volatile int64_t x29 = -1LL;
int16_t x39 = -1;
static int32_t x41 = 367163002;
int64_t x43 = -1LL;
int8_t x79 = -43;
int8_t x85 = INT8_MIN;
int32_t x91 = -1;
static volatile int32_t x95 = INT32_MIN;
int32_t x97 = -1;
volatile uint16_t x98 = 120U;
uint16_t x99 = 1U;
static int32_t x105 = INT32_MIN;
int16_t x117 = INT16_MIN;
volatile uint64_t t23 = 11903567314305LLU;
uint16_t x129 = 1387U;
volatile uint8_t x130 = UINT8_MAX;
int64_t x131 = INT64_MAX;
static volatile int8_t x140 = INT8_MAX;
volatile uint64_t t27 = UINT64_MAX;
int32_t x143 = -1;
uint32_t t28 = 941480U;
int8_t x148 = -1;
uint16_t x154 = UINT16_MAX;
uint8_t x161 = 2U;
uint64_t x162 = UINT64_MAX;
uint32_t x170 = 15093U;
uint8_t x178 = 18U;
int32_t x187 = INT32_MAX;
volatile uint64_t x188 = 77422558LLU;
volatile int32_t x191 = INT32_MIN;
uint64_t x198 = 8LLU;
volatile int16_t x199 = 3992;
int8_t x202 = 7;
volatile int64_t t41 = -343432386LL;
int8_t x209 = INT8_MIN;
int32_t t43 = -1026875499;
uint32_t x219 = 929479U;
uint8_t x230 = 0U;
uint16_t x232 = 0U;
uint32_t x236 = UINT32_MAX;
uint32_t t47 = UINT32_MAX;
static uint64_t x252 = 371903LLU;
int64_t x268 = -2123600055884LL;
int64_t x281 = INT64_MIN;
volatile int64_t t55 = 2060199583316401LL;
uint64_t x292 = 553577LLU;
static uint32_t x294 = 119673917U;
volatile uint32_t t57 = 1U;
int16_t x299 = -273;
uint64_t x307 = UINT64_MAX;
static uint32_t x313 = UINT32_MAX;
int32_t x315 = 1838927;
uint64_t t62 = UINT64_MAX;
volatile int8_t x335 = -22;
volatile int32_t t64 = -28357;
volatile uint64_t x337 = 1194861702923LLU;
volatile uint64_t t65 = UINT64_MAX;
uint64_t x341 = 1648LLU;
static volatile uint64_t t68 = 1393350510LLU;
static uint8_t x358 = UINT8_MAX;
uint64_t x361 = 12490149833723834LLU;
int32_t x362 = INT32_MIN;
uint8_t x364 = UINT8_MAX;
uint64_t t71 = 174LLU;
int32_t x367 = -1;
int64_t t72 = -10810515675765LL;
uint32_t x372 = 1U;
static int64_t x378 = INT64_MAX;
uint16_t x389 = 26062U;
int16_t x393 = INT16_MAX;
int64_t x402 = -55691591785784LL;
int8_t x403 = INT8_MAX;
uint16_t x405 = UINT16_MAX;
int8_t x413 = -1;
uint32_t x416 = 49940U;
int64_t x424 = INT64_MAX;
static int64_t x425 = 3072276609808268LL;
int64_t x429 = INT64_MIN;
int16_t x430 = -1;
uint64_t x431 = 50104659LLU;
volatile uint64_t t84 = UINT64_MAX;
int32_t x433 = INT32_MIN;
volatile uint64_t t88 = 220426490LLU;
int8_t x459 = INT8_MAX;
static int32_t x467 = -1;
int8_t x473 = -1;
uint32_t x479 = 690U;
uint8_t x484 = 69U;
int8_t x489 = INT8_MAX;
volatile int8_t x493 = INT8_MIN;
uint32_t x496 = UINT32_MAX;
uint32_t t97 = UINT32_MAX;
static int32_t x501 = -67511297;


void f0(void) {
	int64_t x14 = INT64_MAX;
	int16_t x15 = -672;
	int64_t x16 = -1LL;

	t0 = ((x13|x14)|(x15*x16));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x17 = 14125717U;
	static int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	static uint32_t t1 = 84891694U;

	t1 = ((x17|x18)|(x19*x20));

	if (t1 != 4294937343U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MAX;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = 0;
	int32_t t2 = 3714;

	t2 = ((x21|x22)|(x23*x24));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -6357LL;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MIN;
	static volatile int64_t t3 = -12346LL;

	t3 = ((x25|x26)|(x27*x28));

	if (t3 != -6145LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x30 = INT32_MAX;
	int64_t x31 = 1LL;
	int32_t x32 = INT32_MIN;
	static volatile int64_t t4 = 231833LL;

	t4 = ((x29|x30)|(x31*x32));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	static uint64_t x34 = 3198791709084LLU;
	uint32_t x35 = 291167U;
	volatile int8_t x36 = -1;
	uint64_t t5 = 71665736LLU;

	t5 = ((x33|x34)|(x35*x36));

	if (t5 != 3199750635519LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	static uint64_t x38 = 11202497344LLU;
	uint16_t x40 = 930U;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x37|x38)|(x39*x40));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x42 = INT64_MAX;
	int8_t x44 = -1;
	volatile int64_t t7 = INT64_MAX;

	t7 = ((x41|x42)|(x43*x44));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -4087212;
	static int32_t x46 = INT32_MAX;
	uint8_t x47 = 0U;
	uint64_t x48 = 64236LLU;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x45|x46)|(x47*x48));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = 572201551;
	uint16_t x50 = 3U;
	uint8_t x51 = 82U;
	uint16_t x52 = 1091U;
	static int32_t t9 = -681278249;

	t9 = ((x49|x50)|(x51*x52));

	if (t9 != 572219263) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 2;
	int64_t x58 = INT64_MIN;
	int32_t x59 = -1;
	int64_t x60 = 16824386487289998LL;
	static volatile int64_t t10 = -32946LL;

	t10 = ((x57|x58)|(x59*x60));

	if (t10 != -16824386487289998LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = 112885917LL;
	int16_t x62 = 43;
	static int16_t x63 = INT16_MIN;
	uint16_t x64 = UINT16_MAX;
	static int64_t t11 = 2177464644500132971LL;

	t11 = ((x61|x62)|(x63*x64));

	if (t11 != -2034597697LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 61U;
	static uint8_t x66 = 41U;
	int8_t x67 = INT8_MAX;
	volatile int64_t x68 = 26453058571835949LL;
	volatile int64_t t12 = 549LL;

	t12 = ((x65|x66)|(x67*x68));

	if (t12 != 3359538438623165567LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 393154269U;
	static int8_t x70 = -1;
	int16_t x71 = 81;
	uint8_t x72 = UINT8_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x69|x70)|(x71*x72));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = 834342587075291LL;
	int16_t x74 = -6;
	int32_t x75 = 0;
	static int32_t x76 = INT32_MAX;
	int64_t t14 = -956LL;

	t14 = ((x73|x74)|(x75*x76));

	if (t14 != -5LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x77 = 11U;
	uint8_t x78 = 0U;
	static uint8_t x80 = 37U;
	int32_t t15 = -1343;

	t15 = ((x77|x78)|(x79*x80));

	if (t15 != -1589) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x81 = INT8_MIN;
	static int32_t x82 = INT32_MIN;
	uint16_t x83 = 86U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t16 = 15;

	t16 = ((x81|x82)|(x83*x84));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = 109U;
	int8_t x87 = 0;
	uint16_t x88 = 141U;
	int32_t t17 = 294573505;

	t17 = ((x85|x86)|(x87*x88));

	if (t17 != -19) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -1;
	volatile int16_t x90 = 502;
	uint16_t x92 = UINT16_MAX;
	static int32_t t18 = 1;

	t18 = ((x89|x90)|(x91*x92));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 101U;
	int32_t x94 = 3608972;
	int64_t x96 = -1LL;
	int64_t t19 = 1856385817924914649LL;

	t19 = ((x93|x94)|(x95*x96));

	if (t19 != 2151092717LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x100 = 1891071023966586LLU;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x97|x98)|(x99*x100));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = 6;
	uint16_t x103 = 303U;
	int16_t x104 = INT16_MIN;
	int32_t t21 = -550501094;

	t21 = ((x101|x102)|(x103*x104));

	if (t21 != -32762) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x106 = -1;
	int16_t x107 = 249;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x105|x106)|(x107*x108));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x118 = 28657U;
	uint32_t x119 = 44U;
	volatile uint64_t x120 = UINT64_MAX;

	t23 = ((x117|x118)|(x119*x120));

	if (t23 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 20U;
	static int8_t x122 = INT8_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	volatile int32_t x124 = -1;
	static volatile uint64_t t24 = 1482LLU;

	t24 = ((x121|x122)|(x123*x124));

	if (t24 != 4294967189LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = -1;
	static uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = ((x125|x126)|(x127*x128));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x132 = -1LL;
	int64_t t26 = -23059130LL;

	t26 = ((x129|x130)|(x131*x132));

	if (t26 != -9223372036854774273LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = -29;
	static volatile uint16_t x138 = 3406U;
	uint64_t x139 = 1969358LLU;

	t27 = ((x137|x138)|(x139*x140));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = 0U;
	uint16_t x142 = 29508U;
	int32_t x144 = -1;

	t28 = ((x141|x142)|(x143*x144));

	if (t28 != 29509U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = 19221546384LLU;
	int16_t x146 = 19;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t t29 = 2943081758LLU;

	t29 = ((x145|x146)|(x147*x148));

	if (t29 != 19221546387LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = -1LL;
	uint8_t x155 = 1U;
	uint32_t x156 = 12637467U;
	volatile int64_t t30 = -29458193543LL;

	t30 = ((x153|x154)|(x155*x156));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x163 = 491463338439366LLU;
	uint64_t x164 = UINT64_MAX;
	static volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x161|x162)|(x163*x164));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	static volatile uint64_t x168 = 484266437LLU;
	uint64_t t32 = 67416429471LLU;

	t32 = ((x165|x166)|(x167*x168));

	if (t32 != 18446744073709530683LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x169 = INT64_MAX;
	static uint8_t x171 = 1U;
	uint32_t x172 = 856260511U;
	int64_t t33 = INT64_MAX;

	t33 = ((x169|x170)|(x171*x172));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = -1;
	int64_t x174 = -4238361909454251837LL;
	int16_t x175 = -111;
	static uint8_t x176 = UINT8_MAX;
	static int64_t t34 = -471990425956760069LL;

	t34 = ((x173|x174)|(x175*x176));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x177 = 971U;
	int8_t x179 = INT8_MIN;
	int64_t x180 = 1185876426LL;
	int64_t t35 = 313774069LL;

	t35 = ((x177|x178)|(x179*x180));

	if (t35 != -151792182309LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x181 = 11260LL;
	uint16_t x182 = 1U;
	volatile int16_t x183 = -4;
	uint32_t x184 = 4682U;
	static int64_t t36 = -8LL;

	t36 = ((x181|x182)|(x183*x184));

	if (t36 != 4294950909LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 10U;
	int64_t x186 = -142592321LL;
	uint64_t t37 = 77548832LLU;

	t37 = ((x185|x186)|(x187*x188));

	if (t37 != 18446744073707632319LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x189 = INT32_MAX;
	int8_t x190 = -1;
	uint64_t x192 = 3060133538277854992LLU;
	uint64_t t38 = UINT64_MAX;

	t38 = ((x189|x190)|(x191*x192));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = INT16_MIN;
	static volatile int64_t x194 = INT64_MAX;
	static int8_t x195 = -2;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t39 = UINT64_MAX;

	t39 = ((x193|x194)|(x195*x196));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = 36U;
	int16_t x200 = -36;
	volatile uint64_t t40 = 81258877194452LLU;

	t40 = ((x197|x198)|(x199*x200));

	if (t40 != 18446744073709407916LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = 57U;
	int32_t x203 = INT32_MIN;
	volatile int64_t x204 = -6LL;

	t41 = ((x201|x202)|(x203*x204));

	if (t41 != 12884901951LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = 0;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 0U;
	int64_t x208 = -2LL;
	volatile int64_t t42 = 681663759728206988LL;

	t42 = ((x205|x206)|(x207*x208));

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x210 = INT16_MAX;
	volatile int8_t x211 = 1;
	volatile uint16_t x212 = 7U;

	t43 = ((x209|x210)|(x211*x212));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = -1;
	volatile int64_t x218 = -1LL;
	int32_t x220 = INT32_MAX;
	static volatile int64_t t44 = -3419LL;

	t44 = ((x217|x218)|(x219*x220));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x225 = 422785775870805LLU;
	volatile uint16_t x226 = 4U;
	static volatile uint8_t x227 = 2U;
	static volatile uint64_t x228 = 1347007249LLU;
	uint64_t t45 = 66485LLU;

	t45 = ((x225|x226)|(x227*x228));

	if (t45 != 422787923568503LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = 815709726;
	int64_t x231 = INT64_MAX;
	int64_t t46 = 431LL;

	t46 = ((x229|x230)|(x231*x232));

	if (t46 != 815709726LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MAX;
	static int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MAX;

	t47 = ((x233|x234)|(x235*x236));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x245 = 220469LL;
	volatile int32_t x246 = 9010;
	int32_t x247 = -1;
	int8_t x248 = -3;
	volatile int64_t t48 = 3361LL;

	t48 = ((x245|x246)|(x247*x248));

	if (t48 != 229175LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x249 = 0U;
	volatile int64_t x250 = -1LL;
	int16_t x251 = -12;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x249|x250)|(x251*x252));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x257 = 1U;
	volatile uint16_t x258 = 13671U;
	int8_t x259 = -11;
	static int16_t x260 = -1;
	int32_t t50 = -2;

	t50 = ((x257|x258)|(x259*x260));

	if (t50 != 13679) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	volatile uint64_t x267 = UINT64_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x265|x266)|(x267*x268));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -2360;
	static uint8_t x270 = UINT8_MAX;
	uint16_t x271 = 10U;
	volatile uint8_t x272 = UINT8_MAX;
	int32_t t52 = 34077442;

	t52 = ((x269|x270)|(x271*x272));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint64_t x274 = 15964398LLU;
	int64_t x275 = -1LL;
	int8_t x276 = 0;
	uint64_t t53 = UINT64_MAX;

	t53 = ((x273|x274)|(x275*x276));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 2U;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t54 = 10290055;

	t54 = ((x277|x278)|(x279*x280));

	if (t54 != -2147450625) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x282 = 2;
	uint8_t x283 = 33U;
	int16_t x284 = -1;

	t55 = ((x281|x282)|(x283*x284));

	if (t55 != -33LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = -1;
	int16_t x290 = INT16_MAX;
	int64_t x291 = 67525331290LL;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x289|x290)|(x291*x292));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x293 = 0U;
	uint8_t x295 = 115U;
	int8_t x296 = INT8_MIN;

	t57 = ((x293|x294)|(x295*x296));

	if (t57 != 4294956733U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x297 = -1;
	int64_t x298 = 26325953920LL;
	volatile uint32_t x300 = 1504954834U;
	int64_t t58 = -5630LL;

	t58 = ((x297|x298)|(x299*x300));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MAX;
	static uint8_t x303 = 1U;
	int64_t x304 = 0LL;
	static volatile int64_t t59 = 4144749087442LL;

	t59 = ((x301|x302)|(x303*x304));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x305 = 5402LLU;
	volatile int64_t x306 = 13236313615275LL;
	volatile uint8_t x308 = 17U;
	uint64_t t60 = UINT64_MAX;

	t60 = ((x305|x306)|(x307*x308));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x314 = 653349U;
	static volatile uint8_t x316 = UINT8_MAX;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x313|x314)|(x315*x316));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = INT8_MIN;
	volatile uint64_t x318 = UINT64_MAX;
	int32_t x319 = -29678;
	uint32_t x320 = 26U;

	t62 = ((x317|x318)|(x319*x320));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x325 = 732608535LLU;
	uint8_t x326 = 79U;
	uint32_t x327 = UINT32_MAX;
	volatile int8_t x328 = 7;
	volatile uint64_t t63 = 2LLU;

	t63 = ((x325|x326)|(x327*x328));

	if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = -1;
	uint8_t x334 = 126U;
	int8_t x336 = -1;

	t64 = ((x333|x334)|(x335*x336));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x338 = -1;
	int32_t x339 = -1;
	int64_t x340 = -44100938LL;

	t65 = ((x337|x338)|(x339*x340));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	static int64_t x344 = -134542309694865LL;
	uint64_t t66 = 376101LLU;

	t66 = ((x341|x342)|(x343*x344));

	if (t66 != 9240593452495720176LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x345 = 407130754U;
	int32_t x346 = INT32_MIN;
	int8_t x347 = -1;
	int16_t x348 = INT16_MAX;
	uint32_t t67 = 2690243U;

	t67 = ((x345|x346)|(x347*x348));

	if (t67 != 4294955651U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = INT16_MIN;
	static volatile uint64_t x350 = 164825509215LLU;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MAX;

	t68 = ((x349|x350)|(x351*x352));

	if (t68 != 18446744073709530463LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x353 = INT32_MAX;
	static uint8_t x354 = UINT8_MAX;
	static int8_t x355 = INT8_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	uint32_t t69 = 21U;

	t69 = ((x353|x354)|(x355*x356));

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x359 = 3429U;
	uint64_t x360 = 1553562593LLU;
	uint64_t t70 = 7327881LLU;

	t70 = ((x357|x358)|(x359*x360));

	if (t70 != 18446744072968752383LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x363 = 2;

	t71 = ((x361|x362)|(x363*x364));

	if (t71 != 18446744072099450878LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x365 = 32;
	static int8_t x366 = 5;
	volatile int64_t x368 = -1LL;

	t72 = ((x365|x366)|(x367*x368));

	if (t72 != 37LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = -2242430195849992643LL;
	static int64_t x371 = -14099987945LL;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x369|x370)|(x371*x372));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x377 = INT32_MAX;
	int32_t x379 = -1;
	volatile int64_t x380 = -30853LL;
	static volatile int64_t t74 = INT64_MAX;

	t74 = ((x377|x378)|(x379*x380));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x381 = 20171;
	volatile int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	static uint8_t x384 = UINT8_MAX;
	static int32_t t75 = -12526;

	t75 = ((x381|x382)|(x383*x384));

	if (t75 != -12597) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x390 = -1LL;
	int32_t x391 = -181;
	uint64_t x392 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = ((x389|x390)|(x391*x392));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x394 = -1;
	int32_t x395 = -1;
	static volatile int16_t x396 = INT16_MAX;
	int32_t t77 = 5790;

	t77 = ((x393|x394)|(x395*x396));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = 13U;
	int32_t x399 = INT32_MAX;
	int8_t x400 = -1;
	volatile int32_t t78 = -3963593;

	t78 = ((x397|x398)|(x399*x400));

	if (t78 != -32755) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = INT64_MIN;
	static int16_t x404 = 7215;
	int64_t t79 = -416773271LL;

	t79 = ((x401|x402)|(x403*x404));

	if (t79 != -55691591156775LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x406 = 0U;
	int8_t x407 = -1;
	int16_t x408 = -2;
	volatile int32_t t80 = -121774150;

	t80 = ((x405|x406)|(x407*x408));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x414 = -1;
	int64_t x415 = -47LL;
	int64_t t81 = -12532978211119LL;

	t81 = ((x413|x414)|(x415*x416));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x421 = 1U;
	int64_t x422 = INT64_MAX;
	int16_t x423 = -1;
	int64_t t82 = -893743272LL;

	t82 = ((x421|x422)|(x423*x424));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	volatile int16_t x428 = INT16_MIN;
	int64_t t83 = -31970889LL;

	t83 = ((x425|x426)|(x427*x428));

	if (t83 != -346228LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x432 = INT8_MIN;

	t84 = ((x429|x430)|(x431*x432));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x434 = -3;
	static volatile int32_t x435 = -1;
	int16_t x436 = -1;
	int32_t t85 = 896008327;

	t85 = ((x433|x434)|(x435*x436));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x441 = UINT64_MAX;
	int8_t x442 = -59;
	uint64_t x443 = 811344349707LLU;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x441|x442)|(x443*x444));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x445 = -1;
	static uint16_t x446 = 221U;
	static uint64_t x447 = 19330472056LLU;
	static volatile int8_t x448 = -12;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x445|x446)|(x447*x448));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x449 = 161224523;
	int16_t x450 = INT16_MIN;
	static volatile int64_t x451 = INT64_MIN;
	volatile uint64_t x452 = 2607927LLU;

	t88 = ((x449|x450)|(x451*x452));

	if (t88 != 18446744073709524811LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x457 = INT16_MAX;
	int64_t x458 = INT64_MIN;
	static volatile int8_t x460 = INT8_MIN;
	int64_t t89 = 868802292138998LL;

	t89 = ((x457|x458)|(x459*x460));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x461 = 84U;
	int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	static volatile int8_t x464 = -58;
	int64_t t90 = 15LL;

	t90 = ((x461|x462)|(x463*x464));

	if (t90 != -2147483522LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x465 = INT8_MIN;
	int8_t x466 = INT8_MIN;
	int8_t x468 = -1;
	volatile int32_t t91 = 1;

	t91 = ((x465|x466)|(x467*x468));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = 20607202494LLU;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x473|x474)|(x475*x476));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x477 = INT32_MIN;
	static int32_t x478 = -1;
	static volatile int16_t x480 = -7;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x477|x478)|(x479*x480));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x481 = INT64_MAX;
	static volatile int32_t x482 = 145556173;
	static uint16_t x483 = 0U;
	int64_t t94 = INT64_MAX;

	t94 = ((x481|x482)|(x483*x484));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x485 = INT8_MIN;
	volatile uint32_t x486 = UINT32_MAX;
	static int8_t x487 = -2;
	volatile uint64_t x488 = 6144LLU;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x485|x486)|(x487*x488));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x490 = -1;
	int16_t x491 = INT16_MIN;
	static uint8_t x492 = 49U;
	int32_t t96 = -227;

	t96 = ((x489|x490)|(x491*x492));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x494 = UINT32_MAX;
	int8_t x495 = -3;

	t97 = ((x493|x494)|(x495*x496));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x497 = INT32_MIN;
	int64_t x498 = 301649509LL;
	uint64_t x499 = 13LLU;
	static volatile int64_t x500 = INT64_MIN;
	volatile uint64_t t98 = 15813LLU;

	t98 = ((x497|x498)|(x499*x500));

	if (t98 != 18446744071863717477LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x502 = INT8_MAX;
	static int8_t x503 = -14;
	int16_t x504 = INT16_MIN;
	static volatile int32_t t99 = 172707615;

	t99 = ((x501|x502)|(x503*x504));

	if (t99 != -67118081) { NG(); } else { ; }
	
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

