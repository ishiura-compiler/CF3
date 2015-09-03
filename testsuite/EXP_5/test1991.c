#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 4LLU;
int64_t x12 = -121553896640189LL;
uint64_t t5 = 36594802LLU;
int32_t x36 = -1;
uint16_t x37 = UINT16_MAX;
uint8_t x43 = 1U;
uint8_t x44 = 86U;
volatile int64_t t8 = -258561946594LL;
uint16_t x45 = 53U;
int32_t t9 = -103274430;
volatile int32_t x51 = INT32_MAX;
volatile int8_t x53 = 1;
uint64_t x59 = 8674732553462704LLU;
int32_t x61 = INT32_MIN;
volatile uint16_t x67 = 9U;
int64_t x72 = INT64_MIN;
int8_t x73 = INT8_MAX;
uint32_t x74 = UINT32_MAX;
int64_t x81 = INT64_MIN;
int8_t x83 = INT8_MIN;
int64_t x85 = -13742LL;
int64_t x91 = -1LL;
volatile int32_t t22 = -148;
volatile uint64_t t23 = 268245074165LLU;
int16_t x110 = -1284;
uint64_t x131 = 6LLU;
int64_t x147 = -1LL;
int64_t x156 = 6867122518LL;
volatile int8_t x164 = INT8_MIN;
int32_t x173 = 618;
static int64_t x175 = 12LL;
int16_t x182 = INT16_MIN;
uint32_t t40 = 53U;
int64_t x192 = -1LL;
volatile uint64_t t42 = 36993LLU;
volatile uint32_t x199 = UINT32_MAX;
int64_t t43 = -930175990LL;
int64_t x201 = -2082731654549LL;
int16_t x205 = -1;
static volatile int16_t x207 = -1;
static volatile uint64_t t46 = 4441516993720128393LLU;
int8_t x218 = INT8_MAX;
volatile int32_t t48 = 0;
int16_t x221 = -227;
static volatile int8_t x227 = INT8_MIN;
int64_t t50 = -50081LL;
static uint32_t x232 = 1757918276U;
uint32_t t51 = 19966138U;
static uint64_t t52 = 204557327794LLU;
int64_t x238 = -65431358LL;
static uint64_t x246 = UINT64_MAX;
uint64_t t55 = 41LLU;
int8_t x250 = -10;
int64_t x269 = INT64_MIN;
uint16_t x280 = 12056U;
int32_t x285 = INT32_MAX;
int8_t x293 = INT8_MAX;
int16_t x296 = -1;
uint64_t x303 = UINT64_MAX;
int8_t x308 = 1;
int16_t x309 = -2615;
static volatile uint32_t x312 = 209446U;
static int16_t x321 = 2;
volatile uint64_t x337 = 11909334LLU;
static int64_t x338 = INT64_MIN;
static volatile int16_t x339 = INT16_MIN;
int64_t x344 = -1LL;
uint16_t x346 = 0U;
uint8_t x350 = 111U;
int64_t x354 = -23165291873LL;
int64_t t81 = -7712LL;
volatile uint32_t t82 = 30U;
int32_t x368 = 48;
uint32_t x369 = 645529838U;
static int64_t t85 = -240529LL;
volatile int32_t t89 = -1221;
int64_t t90 = 1033551207888067LL;
int32_t t92 = 1;
int8_t x412 = -1;
uint64_t t93 = 9122634614536047LLU;
static int16_t x417 = -1;
volatile int16_t x421 = INT16_MIN;
int16_t x422 = INT16_MIN;
int32_t x423 = INT32_MAX;
int8_t x428 = -5;
volatile uint64_t x435 = UINT64_MAX;
volatile int16_t x436 = 8755;
uint64_t t98 = 2515LLU;
int16_t x438 = INT16_MAX;
static volatile int32_t x439 = INT32_MIN;


void f0(void) {
	static uint64_t x1 = 17593LLU;
	int32_t x2 = INT32_MAX;
	static int16_t x3 = INT16_MIN;
	uint64_t x4 = 0LLU;

	t0 = (x1-((x2|x3)&x4));

	if (t0 != 17593LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -1;
	static int32_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	volatile uint64_t t1 = 282316358860036821LLU;

	t1 = (x9-((x10|x11)&x12));

	if (t1 != 121553896640188LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 525590928LLU;
	volatile int8_t x14 = -1;
	int32_t x15 = INT32_MIN;
	static int64_t x16 = -2284851635LL;
	uint64_t t2 = 48988LLU;

	t2 = (x13-((x14|x15)&x16));

	if (t2 != 2810442563LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -45;
	volatile int16_t x18 = -1;
	int32_t x19 = 0;
	uint64_t x20 = 12621963015701LLU;
	volatile uint64_t t3 = 108229697LLU;

	t3 = (x17-((x18|x19)&x20));

	if (t3 != 18446731451746535870LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	volatile int32_t x22 = 1;
	static int64_t x23 = INT64_MIN;
	uint32_t x24 = 1966U;
	static int64_t t4 = -1LL;

	t4 = (x21-((x22|x23)&x24));

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = 8;
	static uint64_t x30 = 783231246LLU;
	volatile int8_t x31 = INT8_MIN;
	volatile int32_t x32 = 0;

	t5 = (x29-((x30|x31)&x32));

	if (t5 != 8LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = 13365270127LL;
	int16_t x34 = 16;
	static int32_t x35 = INT32_MIN;
	volatile int64_t t6 = -1692188577299916LL;

	t6 = (x33-((x34|x35)&x36));

	if (t6 != 15512753759LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = 78982531043LL;
	volatile int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t7 = 62728336775LL;

	t7 = (x37-((x38|x39)&x40));

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MAX;
	int64_t x42 = 6437502394LL;

	t8 = (x41-((x42|x43)&x44));

	if (t8 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	static int8_t x48 = INT8_MIN;

	t9 = (x45-((x46|x47)&x48));

	if (t9 != 181) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t10 = -1864;

	t10 = (x49-((x50|x51)&x52));

	if (t10 != -2147483520) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x54 = -222;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 56U;
	int32_t t11 = -332731811;

	t11 = (x53-((x54|x55)&x56));

	if (t11 != -31) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;
	uint64_t t12 = 80LLU;

	t12 = (x57-((x58|x59)&x60));

	if (t12 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x62 = 9U;
	int64_t x63 = -15553345541596306LL;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = 386961LL;

	t13 = (x61-((x62|x63)&x64));

	if (t13 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	static volatile int64_t x66 = -1LL;
	int16_t x68 = 396;
	static volatile int64_t t14 = 34LL;

	t14 = (x65-((x66|x67)&x68));

	if (t14 != -397LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = -1LL;
	uint8_t x70 = 0U;
	int16_t x71 = -1;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x69-((x70|x71)&x72));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	uint32_t t16 = 0U;

	t16 = (x73-((x74|x75)&x76));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -20;
	int16_t x78 = -63;
	uint8_t x79 = 1U;
	int8_t x80 = INT8_MIN;
	int32_t t17 = 68971745;

	t17 = (x77-((x78|x79)&x80));

	if (t17 != 108) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x82 = -1;
	static int8_t x84 = -14;
	int64_t t18 = 33394LL;

	t18 = (x81-((x82|x83)&x84));

	if (t18 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = UINT64_MAX;
	static volatile int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	uint64_t t19 = 111462203LLU;

	t19 = (x85-((x86|x87)&x88));

	if (t19 != 18446744073709505107LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	uint8_t x90 = 4U;
	int32_t x92 = 962363;
	volatile int64_t t20 = -2536160268093084LL;

	t20 = (x89-((x90|x91)&x92));

	if (t20 != -962236LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 891720LLU;
	int64_t x94 = -6LL;
	volatile int64_t x95 = 5752728569904LL;
	uint32_t x96 = UINT32_MAX;
	static volatile uint64_t t21 = 1981586692317LLU;

	t21 = (x93-((x94|x95)&x96));

	if (t21 != 18446744069415476046LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = -43;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;

	t22 = (x97-((x98|x99)&x100));

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 810012238LLU;
	static uint32_t x102 = 0U;
	int16_t x103 = INT16_MIN;
	int32_t x104 = -100;

	t23 = (x101-((x102|x103)&x104));

	if (t23 != 18446744070224629326LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = 41;
	int64_t x107 = 46261093377LL;
	uint8_t x108 = UINT8_MAX;
	static volatile int64_t t24 = -2LL;

	t24 = (x105-((x106|x107)&x108));

	if (t24 != 65494LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 523U;
	int8_t x111 = 0;
	static volatile uint64_t x112 = 28382LLU;
	uint64_t t25 = 2248134274819241217LLU;

	t25 = (x109-((x110|x111)&x112));

	if (t25 != 18446744073709524783LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -18;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MAX;
	static int8_t x116 = -1;
	volatile int32_t t26 = 8;

	t26 = (x113-((x114|x115)&x116));

	if (t26 != -273) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 0;
	volatile uint8_t x122 = 2U;
	static uint8_t x123 = 20U;
	static int32_t x124 = -1;
	int32_t t27 = -578;

	t27 = (x121-((x122|x123)&x124));

	if (t27 != -22) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	int32_t x130 = 253;
	int32_t x132 = INT32_MIN;
	static uint64_t t28 = UINT64_MAX;

	t28 = (x129-((x130|x131)&x132));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	volatile int16_t x138 = -18;
	static int8_t x139 = INT8_MIN;
	uint32_t x140 = 1700U;
	volatile uint32_t t29 = 5463U;

	t29 = (x137-((x138|x139)&x140));

	if (t29 != 4294965595U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x141 = 7LLU;
	int32_t x142 = INT32_MAX;
	volatile int16_t x143 = INT16_MIN;
	int64_t x144 = 55100207064166LL;
	static volatile uint64_t t30 = 0LLU;

	t30 = (x141-((x142|x143)&x144));

	if (t30 != 18446688973502487457LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 1U;
	int8_t x146 = -1;
	volatile int32_t x148 = INT32_MIN;
	volatile int64_t t31 = 83451207129037LL;

	t31 = (x145-((x146|x147)&x148));

	if (t31 != 2147483649LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	int64_t x151 = -1LL;
	static int64_t x152 = -13073LL;
	int64_t t32 = 449152507LL;

	t32 = (x149-((x150|x151)&x152));

	if (t32 != 13072LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 42U;
	int32_t x154 = INT32_MIN;
	int16_t x155 = 0;
	volatile int64_t t33 = -980357671546LL;

	t33 = (x153-((x154|x155)&x156));

	if (t33 != -6442450902LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x161 = 1141978152049837822LL;
	static int32_t x162 = INT32_MAX;
	static uint32_t x163 = 2U;
	static volatile int64_t t34 = 96LL;

	t34 = (x161-((x162|x163)&x164));

	if (t34 != 1141978149902354302LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	volatile int32_t x168 = 2283;
	static uint64_t t35 = 4076974428422745723LLU;

	t35 = (x165-((x166|x167)&x168));

	if (t35 != 18446744073709549332LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = UINT64_MAX;
	uint32_t x170 = UINT32_MAX;
	static int16_t x171 = 3016;
	volatile int64_t x172 = -3912LL;
	static volatile uint64_t t36 = 0LLU;

	t36 = (x169-((x170|x171)&x172));

	if (t36 != 18446744069414588231LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = INT16_MAX;
	int16_t x176 = 5;
	volatile int64_t t37 = 810802805404652LL;

	t37 = (x173-((x174|x175)&x176));

	if (t37 != 613LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = 86U;
	int64_t x178 = -1LL;
	int32_t x179 = 3457445;
	static uint16_t x180 = 26958U;
	static volatile int64_t t38 = 0LL;

	t38 = (x177-((x178|x179)&x180));

	if (t38 != -26872LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 968U;
	volatile int16_t x183 = -10;
	int32_t x184 = 1056;
	static uint32_t t39 = 888U;

	t39 = (x181-((x182|x183)&x184));

	if (t39 != 4294967208U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	static int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = 582546U;

	t40 = (x185-((x186|x187)&x188));

	if (t40 != 2146926592U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = 398;
	static volatile uint8_t x190 = 2U;
	uint16_t x191 = UINT16_MAX;
	int64_t t41 = 1265468169184338LL;

	t41 = (x189-((x190|x191)&x192));

	if (t41 != -65137LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 4241012097739117LLU;
	int64_t x194 = -5LL;
	volatile int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;

	t42 = (x193-((x194|x195)&x196));

	if (t42 != 4241012097739245LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = UINT16_MAX;
	static uint8_t x198 = 2U;
	int64_t x200 = INT64_MIN;

	t43 = (x197-((x198|x199)&x200));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = -1;
	uint8_t x203 = 0U;
	static uint32_t x204 = 343880U;
	volatile int64_t t44 = 787947LL;

	t44 = (x201-((x202|x203)&x204));

	if (t44 != -2082731998429LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x206 = 26U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t45 = INT32_MAX;

	t45 = (x205-((x206|x207)&x208));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x209 = INT32_MAX;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MAX;
	uint64_t x212 = 8403724348LLU;

	t46 = (x209-((x210|x211)&x212));

	if (t46 != 18446744067453310915LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x213 = 19U;
	volatile int8_t x214 = INT8_MAX;
	static int32_t x215 = INT32_MIN;
	volatile int16_t x216 = INT16_MAX;
	int32_t t47 = -662897;

	t47 = (x213-((x214|x215)&x216));

	if (t47 != -108) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x217 = -1;
	static int16_t x219 = -1;
	uint16_t x220 = 23562U;

	t48 = (x217-((x218|x219)&x220));

	if (t48 != -23563) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x222 = 0U;
	int32_t x223 = INT32_MIN;
	volatile int16_t x224 = INT16_MAX;
	uint32_t t49 = 88650U;

	t49 = (x221-((x222|x223)&x224));

	if (t49 != 4294967069U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = 0;
	int64_t x228 = 11237827LL;

	t50 = (x225-((x226|x227)&x228));

	if (t50 != -2158721408LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x229 = UINT8_MAX;
	static int16_t x230 = INT16_MIN;
	uint16_t x231 = 10921U;

	t51 = (x229-((x230|x231)&x232));

	if (t51 != 2537054463U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 28193U;
	int64_t x234 = -1LL;
	volatile int16_t x235 = -10;
	uint64_t x236 = 167219310991152LLU;

	t52 = (x233-((x234|x235)&x236));

	if (t52 != 18446576854398588657LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x237 = 13LL;
	int8_t x239 = 1;
	int8_t x240 = -1;
	volatile int64_t t53 = -8657854489841LL;

	t53 = (x237-((x238|x239)&x240));

	if (t53 != 65431370LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x241 = UINT16_MAX;
	int16_t x242 = 2492;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t54 = 170;

	t54 = (x241-((x242|x243)&x244));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = 58760;
	int64_t x247 = 293803083073220LL;
	uint64_t x248 = UINT64_MAX;

	t55 = (x245-((x246|x247)&x248));

	if (t55 != 58761LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MAX;
	static volatile int32_t x251 = INT32_MAX;
	int8_t x252 = -1;
	volatile int32_t t56 = 1;

	t56 = (x249-((x250|x251)&x252));

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = 6U;
	uint16_t x254 = 4U;
	volatile int8_t x255 = -1;
	int8_t x256 = -1;
	volatile int32_t t57 = 5;

	t57 = (x253-((x254|x255)&x256));

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -1;
	int32_t x258 = INT32_MIN;
	uint16_t x259 = 14U;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t58 = 17371730580883865LLU;

	t58 = (x257-((x258|x259)&x260));

	if (t58 != 2147483633LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = -2712;
	volatile int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 5U;
	volatile int32_t t59 = -17;

	t59 = (x265-((x266|x267)&x268));

	if (t59 != -2717) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 132U;
	int64_t t60 = INT64_MIN;

	t60 = (x269-((x270|x271)&x272));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 12592U;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	uint32_t t61 = 65341420U;

	t61 = (x273-((x274|x275)&x276));

	if (t61 != 2147470928U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -1;
	int64_t x278 = -1LL;
	volatile int16_t x279 = 483;
	static int64_t t62 = -153LL;

	t62 = (x277-((x278|x279)&x280));

	if (t62 != -12057LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = -1;
	int64_t x283 = 65459858LL;
	static volatile int64_t x284 = -29352298LL;
	int64_t t63 = 5016LL;

	t63 = (x281-((x282|x283)&x284));

	if (t63 != -2118131350LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x286 = -1LL;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = 2233097;
	int64_t t64 = -35529866LL;

	t64 = (x285-((x286|x287)&x288));

	if (t64 != 2145250550LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x289 = INT8_MAX;
	static uint8_t x290 = 7U;
	int32_t x291 = INT32_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	uint32_t t65 = 4641569U;

	t65 = (x289-((x290|x291)&x292));

	if (t65 != 2147483768U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x294 = INT64_MIN;
	static int32_t x295 = -1;
	volatile int64_t t66 = -125396LL;

	t66 = (x293-((x294|x295)&x296));

	if (t66 != 128LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = 3248U;
	static volatile uint32_t x298 = 7009U;
	uint32_t x299 = 2U;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t67 = 5LLU;

	t67 = (x297-((x298|x299)&x300));

	if (t67 != 18446744073709547853LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = -13;
	int8_t x302 = INT8_MIN;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t68 = 51253LLU;

	t68 = (x301-((x302|x303)&x304));

	if (t68 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MAX;
	int64_t x306 = 2243966654LL;
	int16_t x307 = -1;
	int64_t t69 = 17801024332LL;

	t69 = (x305-((x306|x307)&x308));

	if (t69 != 126LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x310 = 69056693246695369LL;
	int8_t x311 = INT8_MIN;
	int64_t t70 = -482438793LL;

	t70 = (x309-((x310|x311)&x312));

	if (t70 != -212023LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = -425;
	static int8_t x314 = INT8_MIN;
	static int32_t x315 = INT32_MAX;
	static volatile int8_t x316 = INT8_MAX;
	int32_t t71 = -1997;

	t71 = (x313-((x314|x315)&x316));

	if (t71 != -552) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	int64_t x319 = -1LL;
	int64_t x320 = -1LL;
	static volatile int64_t t72 = 131142LL;

	t72 = (x317-((x318|x319)&x320));

	if (t72 != 256LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x322 = -1LL;
	int8_t x323 = INT8_MIN;
	static int8_t x324 = -1;
	int64_t t73 = -75056673LL;

	t73 = (x321-((x322|x323)&x324));

	if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = UINT16_MAX;
	static int32_t t74 = 1;

	t74 = (x325-((x326|x327)&x328));

	if (t74 != -98303) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = 47;
	uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 48U;
	volatile int8_t x332 = 1;
	static uint32_t t75 = 120U;

	t75 = (x329-((x330|x331)&x332));

	if (t75 != 46U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = 62;
	int64_t x334 = 30962LL;
	uint32_t x335 = 139036U;
	int8_t x336 = INT8_MAX;
	static int64_t t76 = 114300366573LL;

	t76 = (x333-((x334|x335)&x336));

	if (t76 != -64LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x340 = INT64_MAX;
	volatile uint64_t t77 = 447192752831372272LLU;

	t77 = (x337-((x338|x339)&x340));

	if (t77 != 9223372036866717910LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = 1;
	uint32_t x342 = 162323U;
	int32_t x343 = 20711407;
	volatile int64_t t78 = 1254541611402LL;

	t78 = (x341-((x342|x343)&x344));

	if (t78 != -20873214LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = 439;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MIN;
	volatile int64_t t79 = -3890576976566749LL;

	t79 = (x345-((x346|x347)&x348));

	if (t79 != 567LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = 76U;
	uint32_t x351 = UINT32_MAX;
	static int16_t x352 = -1;
	volatile uint32_t t80 = 1127918U;

	t80 = (x349-((x350|x351)&x352));

	if (t80 != 77U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	static volatile int8_t x355 = 3;
	int64_t x356 = INT64_MIN;

	t81 = (x353-((x354|x355)&x356));

	if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = 8154;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = UINT16_MAX;

	t82 = (x357-((x358|x359)&x360));

	if (t82 != 4294909915U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = INT16_MIN;
	static int32_t x362 = INT32_MIN;
	uint8_t x363 = 0U;
	static uint8_t x364 = 56U;
	volatile int32_t t83 = 1398670;

	t83 = (x361-((x362|x363)&x364));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	volatile uint64_t t84 = 1731708606LLU;

	t84 = (x365-((x366|x367)&x368));

	if (t84 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x370 = 83166205U;
	int64_t x371 = INT64_MAX;
	uint32_t x372 = UINT32_MAX;

	t85 = (x369-((x370|x371)&x372));

	if (t85 != -3649437457LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x373 = 205;
	volatile uint64_t x374 = 6555851692304575692LLU;
	int8_t x375 = 3;
	int16_t x376 = 1354;
	static uint64_t t86 = 5952LLU;

	t86 = (x373-((x374|x375)&x376));

	if (t86 != 18446744073709550723LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MAX;
	static int64_t t87 = 3304286629014797265LL;

	t87 = (x377-((x378|x379)&x380));

	if (t87 != 2147483520LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = -1;
	int16_t x383 = 2100;
	int64_t x384 = INT64_MIN;
	static int64_t t88 = 1146284075805282498LL;

	t88 = (x381-((x382|x383)&x384));

	if (t88 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = 1;
	volatile int8_t x386 = INT8_MAX;
	static volatile int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;

	t89 = (x385-((x386|x387)&x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = -4752;
	int64_t x399 = -1LL;
	int32_t x400 = -1;

	t90 = (x397-((x398|x399)&x400));

	if (t90 != -2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -1;
	int16_t x402 = INT16_MAX;
	static volatile int64_t x403 = -1LL;
	uint16_t x404 = 12574U;
	static volatile int64_t t91 = 2053354LL;

	t91 = (x401-((x402|x403)&x404));

	if (t91 != -12575LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = -1;
	static int32_t x406 = INT32_MIN;
	volatile uint16_t x407 = 65U;
	int16_t x408 = -1;

	t92 = (x405-((x406|x407)&x408));

	if (t92 != 2147483582) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int64_t x410 = INT64_MIN;
	static uint64_t x411 = 99574LLU;

	t93 = (x409-((x410|x411)&x412));

	if (t93 != 9223372036854741769LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x418 = 1U;
	static int32_t x419 = INT32_MAX;
	int8_t x420 = INT8_MAX;
	uint32_t t94 = 28U;

	t94 = (x417-((x418|x419)&x420));

	if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x424 = INT32_MIN;
	volatile int32_t t95 = -63966855;

	t95 = (x421-((x422|x423)&x424));

	if (t95 != 2147450880) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = INT32_MIN;
	static int64_t x426 = -1LL;
	int8_t x427 = INT8_MIN;
	int64_t t96 = -1868423805736LL;

	t96 = (x425-((x426|x427)&x428));

	if (t96 != -2147483643LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 0U;
	uint8_t x430 = UINT8_MAX;
	uint32_t x431 = 45939902U;
	int8_t x432 = INT8_MIN;
	static uint32_t t97 = 2581015U;

	t97 = (x429-((x430|x431)&x432));

	if (t97 != 4249027456U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	volatile int16_t x434 = INT16_MIN;

	t98 = (x433-((x434|x435)&x436));

	if (t98 != 18446744073709542733LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = -4;
	uint8_t x440 = 15U;
	volatile int32_t t99 = -2;

	t99 = (x437-((x438|x439)&x440));

	if (t99 != -19) { NG(); } else { ; }
	
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

