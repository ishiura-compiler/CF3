#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = INT32_MAX;
int64_t x11 = 5811220108LL;
int64_t x12 = INT64_MAX;
volatile uint64_t x13 = UINT64_MAX;
uint64_t x14 = UINT64_MAX;
int16_t x22 = 2;
uint8_t x24 = 3U;
int64_t x27 = 44712457LL;
int64_t t6 = 269253743505417568LL;
static uint64_t t8 = 58400718578LLU;
volatile uint16_t x45 = UINT16_MAX;
static int8_t x47 = -1;
int32_t t11 = -997;
int16_t x53 = INT16_MIN;
volatile int8_t x54 = INT8_MIN;
static int8_t x56 = 0;
static int64_t x59 = -1604228238774800825LL;
int32_t x62 = INT32_MAX;
volatile int64_t t17 = 262303459393LL;
int32_t x81 = 13581;
static int8_t x89 = -1;
uint8_t x97 = 1U;
uint64_t x98 = 2111907LLU;
uint64_t t23 = 785983LLU;
uint8_t x101 = 6U;
int32_t x105 = -12913;
int64_t x108 = INT64_MAX;
static volatile uint16_t x115 = 22797U;
int32_t x122 = -1;
volatile int8_t x126 = INT8_MIN;
int32_t x130 = -219;
int64_t x131 = -2044515329LL;
uint64_t t31 = 23714468LLU;
int8_t x140 = INT8_MAX;
static volatile int16_t x147 = INT16_MIN;
uint32_t x149 = UINT32_MAX;
uint32_t x154 = 453085U;
int64_t x155 = -1LL;
int32_t x156 = INT32_MIN;
static uint16_t x166 = 1U;
uint32_t x177 = UINT32_MAX;
int64_t x186 = -6181LL;
int32_t x188 = INT32_MAX;
uint64_t t43 = 31631326348470395LLU;
uint64_t t46 = 900290942688093LLU;
volatile int64_t x208 = -1LL;
static int8_t x213 = INT8_MAX;
uint8_t x226 = UINT8_MAX;
static volatile int16_t x228 = 799;
uint64_t t50 = 897840LLU;
uint32_t x229 = 7966502U;
static volatile int64_t t53 = 48727885784LL;
int32_t x245 = -318;
int32_t x252 = INT32_MAX;
volatile int64_t t55 = -693145468LL;
static int32_t x253 = 27011;
static uint64_t x257 = 167380083714LLU;
static volatile uint64_t x260 = UINT64_MAX;
uint16_t x263 = 5U;
uint64_t x266 = UINT64_MAX;
volatile int64_t x267 = -1LL;
volatile uint64_t x273 = 616970717LLU;
uint32_t x280 = UINT32_MAX;
static int16_t x288 = 14;
uint32_t x289 = 259198U;
int16_t x290 = -21;
volatile uint8_t x296 = UINT8_MAX;
static int8_t x298 = INT8_MIN;
int8_t x300 = INT8_MAX;
static int32_t x304 = INT32_MIN;
static int8_t x306 = INT8_MIN;
uint16_t x310 = 5070U;
int32_t x311 = -1;
uint8_t x314 = UINT8_MAX;
static int64_t x328 = -1LL;
static int16_t x329 = INT16_MIN;
int16_t x333 = -466;
volatile uint64_t t74 = 240578761LLU;
uint64_t x337 = 53308502501275LLU;
int16_t x338 = -1;
volatile int64_t x342 = 818842300301235529LL;
volatile uint16_t x344 = 27U;
volatile uint64_t t76 = 64535845837524398LLU;
int64_t x356 = -2LL;
uint32_t x359 = UINT32_MAX;
static volatile uint16_t x364 = 4034U;
volatile int16_t x369 = INT16_MIN;
int32_t x370 = INT32_MIN;
uint32_t x373 = UINT32_MAX;
volatile int32_t x378 = INT32_MIN;
int64_t x380 = -2212260LL;
int64_t x386 = 89528510LL;
int64_t x391 = INT64_MIN;
int64_t x394 = -1LL;
int64_t t88 = 9578LL;
volatile int64_t t89 = -33416862072969LL;
uint32_t x403 = UINT32_MAX;
volatile int16_t x412 = -4786;
static int64_t x423 = INT64_MIN;
int32_t x425 = 27;
volatile int64_t t97 = -1655068460LL;
uint64_t x437 = 19549845LLU;
static uint64_t t98 = 10362LLU;


void f0(void) {
	static int32_t x1 = -1;
	uint8_t x2 = 25U;
	uint64_t x3 = 594712144LLU;
	int32_t x4 = -875004;
	uint64_t t0 = 1LLU;

	t0 = (x1-((x2%x3)^x4));

	if (t0 != 874978LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -5LL;
	int8_t x7 = INT8_MAX;
	static int8_t x8 = -1;
	volatile int64_t t1 = 524956309051812238LL;

	t1 = (x5-((x6%x7)^x8));

	if (t1 != 3LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -21;
	int16_t x10 = INT16_MIN;
	int64_t t2 = -10615181711LL;

	t2 = (x9-((x10%x11)^x12));

	if (t2 != 9223372036854743020LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = -1;
	uint32_t x16 = 8009U;
	volatile uint64_t t3 = 195644722986991357LLU;

	t3 = (x13-((x14%x15)^x16));

	if (t3 != 18446744073709543606LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static volatile int64_t x18 = INT64_MIN;
	static uint32_t x19 = 63U;
	int16_t x20 = INT16_MAX;
	int64_t t4 = 47295620LL;

	t4 = (x17-((x18%x19)^x20));

	if (t4 != 32633LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 29U;
	int32_t x23 = -495269942;
	int32_t t5 = -392622;

	t5 = (x21-((x22%x23)^x24));

	if (t5 != 28) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 0;
	volatile int8_t x26 = INT8_MIN;
	int32_t x28 = -1;

	t6 = (x25-((x26%x27)^x28));

	if (t6 != -127LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	volatile uint16_t x30 = 2805U;
	int64_t x31 = 736LL;
	uint64_t x32 = 411966521949LLU;
	uint64_t t7 = 47199803619170LLU;

	t7 = (x29-((x30%x31)^x32));

	if (t7 != 18446743661743095799LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 145U;
	int64_t x34 = INT64_MIN;
	static uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 262568269994LLU;

	t8 = (x33-((x34%x35)^x36));

	if (t8 != 263565223911LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = 15753LL;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = -1;
	volatile int64_t t9 = -31155LL;

	t9 = (x37-((x38%x39)^x40));

	if (t9 != -2147483449LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint32_t x42 = UINT32_MAX;
	uint8_t x43 = 43U;
	static volatile int8_t x44 = INT8_MIN;
	uint32_t t10 = 95565U;

	t10 = (x41-((x42%x43)^x44));

	if (t10 != 368U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 15U;
	int16_t x48 = INT16_MIN;

	t11 = (x45-((x46%x47)^x48));

	if (t11 != 98303) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	int8_t x50 = 14;
	int64_t x51 = -1LL;
	static int16_t x52 = INT16_MAX;
	volatile int64_t t12 = -990LL;

	t12 = (x49-((x50%x51)^x52));

	if (t12 != -32766LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = INT32_MAX;
	static int32_t t13 = 1134;

	t13 = (x53-((x54%x55)^x56));

	if (t13 != -32640) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = -23;
	int8_t x60 = -2;
	static volatile int64_t t14 = -329636LL;

	t14 = (x57-((x58%x59)^x60));

	if (t14 != -2147483671LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int16_t x63 = 787;
	uint16_t x64 = UINT16_MAX;
	int64_t t15 = 455306826654LL;

	t15 = (x61-((x62%x63)^x64));

	if (t15 != 9223372036854710954LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MAX;
	volatile uint32_t x67 = 86589814U;
	int64_t x68 = 5939279517957389LL;
	int64_t t16 = -318770009LL;

	t16 = (x65-((x66%x67)^x68));

	if (t16 != -5939279448662243LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = -1LL;
	static volatile int32_t x72 = -42;

	t17 = (x69-((x70%x71)^x72));

	if (t17 != 169LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = 858U;
	int16_t x74 = 223;
	uint16_t x75 = UINT16_MAX;
	static uint32_t x76 = 2221717U;
	static volatile uint32_t t18 = 910535U;

	t18 = (x73-((x74%x75)^x76));

	if (t18 != 4292746512U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x82 = INT32_MAX;
	uint16_t x83 = 553U;
	static uint64_t x84 = 66829638428510581LLU;
	volatile uint64_t t19 = 3LLU;

	t19 = (x81-((x82%x83)^x84));

	if (t19 != 18379914435281054854LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MAX;
	static int16_t x86 = -7;
	int8_t x87 = INT8_MAX;
	static int32_t x88 = INT32_MIN;
	int32_t t20 = 329727271;

	t20 = (x85-((x86%x87)^x88));

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = INT8_MAX;
	volatile uint32_t x92 = 2873U;
	uint32_t t21 = 401386212U;

	t21 = (x89-((x90%x91)^x92));

	if (t21 != 4294964423U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	uint16_t x94 = 13U;
	int64_t x95 = -14LL;
	uint16_t x96 = 0U;
	static volatile int64_t t22 = 2LL;

	t22 = (x93-((x94%x95)^x96));

	if (t22 != -14LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x99 = INT8_MIN;
	static uint64_t x100 = 441LLU;

	t23 = (x97-((x98%x99)^x100));

	if (t23 != 18446744073707440103LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = 1;
	uint16_t x103 = UINT16_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t24 = 0;

	t24 = (x101-((x102%x103)^x104));

	if (t24 != -248) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	volatile int64_t t25 = 2262791922LL;

	t25 = (x105-((x106%x107)^x108));

	if (t25 != -9223372036854755953LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	volatile int16_t x114 = INT16_MIN;
	int16_t x116 = -1;
	volatile int32_t t26 = 83400899;

	t26 = (x113-((x114%x115)^x116));

	if (t26 != -42738) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	volatile int32_t x118 = INT32_MAX;
	static int32_t x119 = 2553133;
	uint8_t x120 = 2U;
	volatile int32_t t27 = 452508338;

	t27 = (x117-((x118%x119)^x120));

	if (t27 != -298793) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x123 = 408U;
	static uint32_t x124 = 7U;
	uint32_t t28 = 7110783U;

	t28 = (x121-((x122%x123)^x124));

	if (t28 != 7U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x125 = 1U;
	int32_t x127 = INT32_MIN;
	int16_t x128 = -1;
	volatile int32_t t29 = -8;

	t29 = (x125-((x126%x127)^x128));

	if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -1;
	int32_t x132 = -1;
	volatile int64_t t30 = 3433615345882130LL;

	t30 = (x129-((x130%x131)^x132));

	if (t30 != -219LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = 1LL;
	static uint16_t x134 = 0U;
	volatile uint64_t x135 = UINT64_MAX;
	volatile int64_t x136 = INT64_MAX;

	t31 = (x133-((x134%x135)^x136));

	if (t31 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	int32_t t32 = -360728084;

	t32 = (x137-((x138%x139)^x140));

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -1LL;
	int64_t x146 = INT64_MIN;
	uint16_t x148 = 19573U;
	int64_t t33 = 19368323284811820LL;

	t33 = (x145-((x146%x147)^x148));

	if (t33 != -19574LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x150 = 2;
	static uint8_t x151 = UINT8_MAX;
	int8_t x152 = -1;
	volatile uint32_t t34 = 866395633U;

	t34 = (x149-((x150%x151)^x152));

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = 129812445734LL;
	static int64_t t35 = -472196360866186LL;

	t35 = (x153-((x154%x155)^x156));

	if (t35 != 131959929382LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -7;
	int16_t x162 = INT16_MAX;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MAX;
	int64_t t36 = -146827093664692583LL;

	t36 = (x161-((x162%x163)^x164));

	if (t36 != -9223372036854743047LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = UINT32_MAX;
	int64_t x167 = 809869694671LL;
	uint8_t x168 = 0U;
	volatile int64_t t37 = 14959LL;

	t37 = (x165-((x166%x167)^x168));

	if (t37 != 4294967294LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	volatile int8_t x172 = INT8_MIN;
	volatile int64_t t38 = -16073226LL;

	t38 = (x169-((x170%x171)^x172));

	if (t38 != 2147451007LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint32_t x174 = UINT32_MAX;
	int64_t x175 = -1LL;
	static uint8_t x176 = 66U;
	volatile int64_t t39 = 124LL;

	t39 = (x173-((x174%x175)^x176));

	if (t39 != 4294967229LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = -1;
	int32_t x179 = 18335;
	uint16_t x180 = 786U;
	uint32_t t40 = 8024643U;

	t40 = (x177-((x178%x179)^x180));

	if (t40 != 786U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	volatile uint32_t x182 = 1195770U;
	int64_t x183 = INT64_MAX;
	static int16_t x184 = -2;
	static int64_t t41 = 158545LL;

	t41 = (x181-((x182%x183)^x184));

	if (t41 != -2146287876LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = UINT16_MAX;
	static uint64_t x187 = UINT64_MAX;
	uint64_t t42 = 210639585338038799LLU;

	t42 = (x185-((x186%x187)^x188));

	if (t42 != 2147543003LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MAX;
	volatile uint8_t x190 = 6U;
	int8_t x191 = INT8_MAX;
	uint64_t x192 = UINT64_MAX;

	t43 = (x189-((x190%x191)^x192));

	if (t43 != 2147483654LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 1653557285U;
	static uint8_t x194 = 28U;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MAX;
	volatile uint32_t t44 = 249124U;

	t44 = (x193-((x194%x195)^x196));

	if (t44 != 1653524546U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x197 = 1U;
	int32_t x198 = -17616093;
	uint32_t x199 = 150811003U;
	int64_t x200 = -1LL;
	volatile int64_t t45 = -2947LL;

	t45 = (x197-((x198%x199)^x200));

	if (t45 != 54643121LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = 391U;
	uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = -1;

	t46 = (x201-((x202%x203)^x204));

	if (t46 != 18446744071562068360LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x206 = 110991;
	static int16_t x207 = INT16_MIN;
	volatile int64_t t47 = -1699162230553056LL;

	t47 = (x205-((x206%x207)^x208));

	if (t47 != -20080LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = INT32_MIN;
	volatile int8_t x210 = -1;
	int16_t x211 = -11898;
	int32_t x212 = 385;
	volatile int32_t t48 = -114338;

	t48 = (x209-((x210%x211)^x212));

	if (t48 != -2147483262) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = -1;
	uint32_t x215 = 3198893U;
	int8_t x216 = 0;
	static uint32_t t49 = 211507602U;

	t49 = (x213-((x214%x215)^x216));

	if (t49 != 4292914534U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 6U;
	uint64_t x227 = UINT64_MAX;

	t50 = (x225-((x226%x227)^x228));

	if (t50 != 18446744073709550630LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x230 = 3645740136319770LLU;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -5673;
	volatile uint64_t t51 = 15LLU;

	t51 = (x229-((x230%x231)^x232));

	if (t51 != 3645740144290905LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 88209079U;
	int8_t x238 = -1;
	int64_t x239 = INT64_MIN;
	volatile int32_t x240 = 2;
	int64_t t52 = -125018596508LL;

	t52 = (x237-((x238%x239)^x240));

	if (t52 != 88209082LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x241 = -5;
	int64_t x242 = -53681LL;
	uint32_t x243 = 2U;
	volatile uint32_t x244 = 2460U;

	t53 = (x241-((x242%x243)^x244));

	if (t53 != 2456LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x246 = 6578872U;
	static uint8_t x247 = UINT8_MAX;
	static int16_t x248 = -1;
	volatile uint32_t t54 = 668U;

	t54 = (x245-((x246%x247)^x248));

	if (t54 != 4294967106U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x249 = INT32_MAX;
	uint8_t x250 = 0U;
	volatile int64_t x251 = INT64_MIN;

	t55 = (x249-((x250%x251)^x252));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = -1LL;
	static volatile int64_t x255 = -1LL;
	int64_t x256 = INT64_MAX;
	int64_t t56 = 988180858899231LL;

	t56 = (x253-((x254%x255)^x256));

	if (t56 != -9223372036854748796LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = -18054LL;
	uint64_t t57 = 59421958747134551LLU;

	t57 = (x257-((x258%x259)^x260));

	if (t57 != 167380094680LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -3193919525365LL;
	int16_t x262 = -11;
	volatile uint64_t x264 = 215751162174885LLU;
	uint64_t t58 = 727868814775964448LLU;

	t58 = (x261-((x262%x263)^x264));

	if (t58 != 212557242649521LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x265 = 2U;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t59 = 501643LLU;

	t59 = (x265-((x266%x267)^x268));

	if (t59 != 32770LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x274 = -1;
	uint8_t x275 = 3U;
	int16_t x276 = -1;
	volatile uint64_t t60 = 6361272LLU;

	t60 = (x273-((x274%x275)^x276));

	if (t60 != 616970717LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	static uint8_t x278 = 27U;
	uint32_t x279 = UINT32_MAX;
	uint32_t t61 = 278788242U;

	t61 = (x277-((x278%x279)^x280));

	if (t61 != 27U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -1LL;
	static int8_t x282 = 4;
	int32_t x283 = -1;
	int32_t x284 = INT32_MAX;
	volatile int64_t t62 = 67532732621LL;

	t62 = (x281-((x282%x283)^x284));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = 336803U;
	uint32_t x286 = UINT32_MAX;
	static volatile int16_t x287 = INT16_MIN;
	volatile uint32_t t63 = 202U;

	t63 = (x285-((x286%x287)^x288));

	if (t63 != 304050U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x291 = UINT32_MAX;
	uint16_t x292 = 25565U;
	volatile uint32_t t64 = 10286U;

	t64 = (x289-((x290%x291)^x292));

	if (t64 != 284744U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = 14;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = INT16_MIN;
	volatile int32_t t65 = -35331;

	t65 = (x293-((x294%x295)^x296));

	if (t65 != -241) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x297 = UINT16_MAX;
	static volatile uint32_t x299 = 870823U;
	static volatile uint32_t t66 = 801532U;

	t66 = (x297-((x298%x299)^x300));

	if (t66 != 4294964644U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x301 = INT16_MIN;
	int64_t x302 = 933104922144LL;
	int8_t x303 = INT8_MIN;
	volatile int64_t t67 = -5741303LL;

	t67 = (x301-((x302%x303)^x304));

	if (t67 != 2147450848LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x305 = 664U;
	int32_t x307 = INT32_MIN;
	int16_t x308 = 18;
	int32_t t68 = 158;

	t68 = (x305-((x306%x307)^x308));

	if (t68 != 774) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MAX;
	int32_t x312 = -1;
	int32_t t69 = -64418741;

	t69 = (x309-((x310%x311)^x312));

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x313 = 131U;
	static int32_t x315 = 30868756;
	volatile int8_t x316 = -1;
	int32_t t70 = 203;

	t70 = (x313-((x314%x315)^x316));

	if (t70 != 387) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x317 = -48;
	uint16_t x318 = 1057U;
	volatile int8_t x319 = 25;
	static volatile int64_t x320 = INT64_MIN;
	volatile int64_t t71 = -3519026LL;

	t71 = (x317-((x318%x319)^x320));

	if (t71 != 9223372036854775753LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x325 = 29829;
	uint8_t x326 = UINT8_MAX;
	uint64_t x327 = 897LLU;
	uint64_t t72 = 41863LLU;

	t72 = (x325-((x326%x327)^x328));

	if (t72 != 30085LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x330 = 8548U;
	static int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	uint32_t t73 = 1817295534U;

	t73 = (x329-((x330%x331)^x332));

	if (t73 != 4294958748U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x334 = 0;
	volatile uint32_t x335 = 11U;
	uint64_t x336 = UINT64_MAX;

	t74 = (x333-((x334%x335)^x336));

	if (t74 != 18446744073709551151LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x339 = UINT32_MAX;
	int16_t x340 = -1;
	uint64_t t75 = 224151036766288139LLU;

	t75 = (x337-((x338%x339)^x340));

	if (t75 != 53304207533980LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = INT64_MAX;
	uint64_t x343 = 2685LLU;

	t76 = (x341-((x342%x343)^x344));

	if (t76 != 9223372036854775704LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = 178;
	uint16_t x347 = 10530U;
	uint16_t x348 = 67U;
	volatile int32_t t77 = 7252;

	t77 = (x345-((x346%x347)^x348));

	if (t77 != -33009) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 22725U;
	volatile int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	uint32_t t78 = 12U;

	t78 = (x349-((x350%x351)^x352));

	if (t78 != 22587U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x353 = INT64_MIN;
	int64_t x354 = 8070215690LL;
	int64_t x355 = -1LL;
	int64_t t79 = -53968370LL;

	t79 = (x353-((x354%x355)^x356));

	if (t79 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = 4;
	int16_t x358 = -3608;
	int16_t x360 = 886;
	volatile uint32_t t80 = 189122U;

	t80 = (x357-((x358%x359)^x360));

	if (t80 != 3430U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = 19;
	uint16_t x362 = UINT16_MAX;
	int8_t x363 = 2;
	int32_t t81 = 1;

	t81 = (x361-((x362%x363)^x364));

	if (t81 != -4016) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x371 = 887384U;
	static int8_t x372 = INT8_MIN;
	static uint32_t t82 = 230627U;

	t82 = (x369-((x370%x371)^x372));

	if (t82 != 4294948960U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	uint32_t t83 = 37056446U;

	t83 = (x373-((x374%x375)^x376));

	if (t83 != 32767U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x377 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	static int64_t t84 = 3LL;

	t84 = (x377-((x378%x379)^x380));

	if (t84 != -2145271388LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = 56;
	int8_t x382 = INT8_MAX;
	volatile int16_t x383 = INT16_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t85 = -1078559;

	t85 = (x381-((x382%x383)^x384));

	if (t85 != -65352) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x385 = 9U;
	int32_t x387 = INT32_MIN;
	volatile uint32_t x388 = UINT32_MAX;
	volatile int64_t t86 = -31457507LL;

	t86 = (x385-((x386%x387)^x388));

	if (t86 != -4205438776LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	static int16_t x392 = INT16_MIN;
	int64_t t87 = -242989065677LL;

	t87 = (x389-((x390%x391)^x392));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x393 = 5518662963362478LL;
	int32_t x395 = 568;
	int16_t x396 = INT16_MIN;

	t88 = (x393-((x394%x395)^x396));

	if (t88 != 5518662963329711LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = -1LL;
	int8_t x399 = -12;
	uint8_t x400 = 11U;

	t89 = (x397-((x398%x399)^x400));

	if (t89 != -116LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = -1;
	int32_t x402 = -4156995;
	static int8_t x404 = 10;
	volatile uint32_t t90 = 369031397U;

	t90 = (x401-((x402%x403)^x404));

	if (t90 != 4157000U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x409 = 89U;
	static int64_t x410 = 27010384LL;
	static uint32_t x411 = UINT32_MAX;
	int64_t t91 = 290674306043320LL;

	t91 = (x409-((x410%x411)^x412));

	if (t91 != 27015227LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x413 = UINT8_MAX;
	volatile uint64_t x414 = UINT64_MAX;
	static volatile int64_t x415 = INT64_MIN;
	static int16_t x416 = INT16_MIN;
	static volatile uint64_t t92 = 131LLU;

	t92 = (x413-((x414%x415)^x416));

	if (t92 != 9223372036854743296LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x417 = 0U;
	int32_t x418 = INT32_MAX;
	int8_t x419 = 1;
	int16_t x420 = 0;
	volatile uint32_t t93 = 35698U;

	t93 = (x417-((x418%x419)^x420));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x421 = -1LL;
	uint16_t x422 = 0U;
	int16_t x424 = -58;
	volatile int64_t t94 = 19019943029309LL;

	t94 = (x421-((x422%x423)^x424));

	if (t94 != 57LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x426 = UINT32_MAX;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = 21915U;
	uint32_t t95 = 7U;

	t95 = (x425-((x426%x427)^x428));

	if (t95 != 4294956471U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = INT16_MAX;
	int32_t x430 = INT32_MIN;
	int32_t x431 = -20238210;
	uint16_t x432 = UINT16_MAX;
	static volatile int32_t t96 = -631125720;

	t96 = (x429-((x430%x431)^x432));

	if (t96 != 2321364) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = 52;
	int64_t x434 = -5150134455415LL;
	int64_t x435 = 55167770316382LL;
	static uint32_t x436 = UINT32_MAX;

	t97 = (x433-((x434%x435)^x436));

	if (t97 != 5153492087742LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x438 = 1U;
	uint16_t x439 = 212U;
	static int16_t x440 = -1;

	t98 = (x437-((x438%x439)^x440));

	if (t98 != 19549847LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MIN;
	int64_t x443 = 3058570434137329679LL;
	int64_t x444 = INT64_MIN;
	static int64_t t99 = INT64_MIN;

	t99 = (x441-((x442%x443)^x444));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

