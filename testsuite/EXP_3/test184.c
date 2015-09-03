#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
volatile uint32_t t1 = 340U;
int32_t x9 = INT32_MIN;
volatile uint32_t x10 = 3721601U;
int8_t x11 = 6;
int32_t x14 = 5552769;
int8_t x16 = INT8_MAX;
int16_t x26 = INT16_MIN;
int64_t x28 = 30159769448LL;
volatile int64_t x42 = INT64_MIN;
uint16_t x46 = 28436U;
int64_t x52 = 4629595874276689LL;
uint64_t t10 = 1864892303397712LLU;
int64_t x64 = INT64_MIN;
volatile int8_t x65 = INT8_MIN;
volatile int16_t x66 = INT16_MIN;
static volatile int64_t t13 = 18403537517LL;
int8_t x83 = -2;
static uint32_t x85 = UINT32_MAX;
uint32_t x90 = UINT32_MAX;
static int16_t x93 = -157;
int8_t x109 = 22;
int8_t x120 = -1;
volatile int16_t x164 = INT16_MAX;
int64_t x166 = INT64_MIN;
int64_t t34 = 1719130950LL;
int64_t x180 = INT64_MIN;
int32_t x187 = -1;
uint16_t x191 = 1387U;
static int8_t x192 = -3;
int8_t x200 = -1;
uint16_t x201 = 2U;
int64_t x212 = 4427018359942553LL;
int64_t x213 = 2353813306LL;
int64_t x220 = 182072391LL;
uint32_t x221 = UINT32_MAX;
uint32_t t46 = 7155U;
uint32_t x234 = 3783081U;
static uint8_t x240 = UINT8_MAX;
static int64_t x246 = INT64_MAX;
int64_t t50 = 477LL;
int16_t x270 = 1;
int16_t x285 = -8;
uint64_t x286 = UINT64_MAX;
static volatile int32_t t58 = -64068252;
int8_t x305 = INT8_MIN;
static int8_t x315 = -1;
static uint32_t x356 = 1913U;
int16_t x364 = INT16_MIN;
uint64_t x370 = UINT64_MAX;
uint8_t x380 = 4U;
volatile uint64_t t70 = 8565162836LLU;
static uint32_t x386 = 21491959U;
int32_t x388 = INT32_MIN;
int16_t x396 = INT16_MIN;
uint64_t t73 = 286LLU;
int16_t x405 = INT16_MAX;
static int8_t x406 = -46;
int16_t x412 = 13;
uint64_t x414 = UINT64_MAX;
static uint32_t t77 = 17118U;
int32_t x423 = 4505;
int64_t t79 = -3264590806LL;
volatile int16_t x431 = INT16_MIN;
uint8_t x436 = UINT8_MAX;
int8_t x455 = INT8_MIN;
int32_t x456 = 0;
uint64_t x459 = 3587446512431876109LLU;
uint32_t x473 = 3U;
uint8_t x484 = 7U;
volatile int32_t t87 = -52;
int32_t x486 = -1;
static volatile int64_t t88 = -2595789688031844LL;
int32_t x492 = -676;
volatile int8_t x503 = 1;
int8_t x505 = 43;
static uint32_t x515 = 8897U;
static int64_t x534 = -354LL;
static int32_t x536 = -1;
volatile int32_t x540 = -1;
static uint64_t t99 = 3LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint8_t x2 = 3U;
	static uint32_t x3 = 2566474U;
	volatile int32_t x4 = -85858083;
	volatile uint32_t t0 = 50U;

	t0 = ((x1-x2)-(x3-x4));

	if (t0 != 4206542608U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = 205558U;
	int8_t x6 = INT8_MIN;
	int8_t x8 = 0;

	t1 = ((x5-x6)-(x7-x8));

	if (t1 != 172919U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x12 = INT16_MAX;
	volatile uint32_t t2 = 9U;

	t2 = ((x9-x10)-(x11-x12));

	if (t2 != 2143794808U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 3U;
	uint16_t x15 = 586U;
	volatile uint32_t t3 = 735620417U;

	t3 = ((x13-x14)-(x15-x16));

	if (t3 != 4289414071U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 3U;
	int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = 405122964880LLU;
	volatile uint64_t t4 = 1821788694990LLU;

	t4 = ((x21-x22)-(x23-x24));

	if (t4 != 405122866581LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x27 = -1LL;
	int64_t t5 = 16094LL;

	t5 = ((x25-x26)-(x27-x28));

	if (t5 != 28012318569LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = UINT8_MAX;
	static uint8_t x34 = 3U;
	static uint32_t x35 = UINT32_MAX;
	uint16_t x36 = 1U;
	volatile uint32_t t6 = 67U;

	t6 = ((x33-x34)-(x35-x36));

	if (t6 != 254U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 203LLU;
	uint16_t x43 = 2U;
	static uint16_t x44 = 3U;
	uint64_t t7 = 6LLU;

	t7 = ((x41-x42)-(x43-x44));

	if (t7 != 9223372036854776012LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 0U;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	static volatile int64_t t8 = 119461392873201LL;

	t8 = ((x45-x46)-(x47-x48));

	if (t8 != 9223372036854714604LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MAX;
	int32_t x51 = -1;
	int64_t t9 = -14213518358109LL;

	t9 = ((x49-x50)-(x51-x52));

	if (t9 != 4629598021760210LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	static volatile uint64_t x55 = 209778214LLU;
	static uint64_t x56 = UINT64_MAX;

	t10 = ((x53-x54)-(x55-x56));

	if (t10 != 1937705432LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = 24805654;
	int16_t x58 = -115;
	int8_t x59 = -21;
	volatile int8_t x60 = INT8_MAX;
	int32_t t11 = -464159;

	t11 = ((x57-x58)-(x59-x60));

	if (t11 != 24805917) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	static volatile int32_t x62 = INT32_MIN;
	static int32_t x63 = -34921739;
	static volatile int64_t t12 = -2LL;

	t12 = ((x61-x62)-(x63-x64));

	if (t12 != -9223372034672370422LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x67 = -22961LL;
	int8_t x68 = -12;

	t13 = ((x65-x66)-(x67-x68));

	if (t13 != 55589LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = 44;
	int8_t x70 = 6;
	int32_t x71 = 4419;
	uint16_t x72 = 11526U;
	int32_t t14 = 12;

	t14 = ((x69-x70)-(x71-x72));

	if (t14 != 7145) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = 622LL;
	int8_t x74 = -1;
	static volatile int8_t x75 = INT8_MIN;
	int16_t x76 = 21;
	volatile int64_t t15 = 6811196943LL;

	t15 = ((x73-x74)-(x75-x76));

	if (t15 != 772LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	int32_t x78 = -1;
	int16_t x79 = INT16_MAX;
	volatile int16_t x80 = 0;
	static volatile int32_t t16 = 122;

	t16 = ((x77-x78)-(x79-x80));

	if (t16 != -32511) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x81 = 21511699896LLU;
	int16_t x82 = INT16_MIN;
	volatile uint32_t x84 = 404834U;
	volatile uint64_t t17 = 21217742816940LLU;

	t17 = ((x81-x82)-(x83-x84));

	if (t17 != 17217170204LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x86 = INT32_MIN;
	static uint32_t x87 = 2125381U;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t18 = 2557LLU;

	t18 = ((x85-x86)-(x87-x88));

	if (t18 != 2145358265LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = 79;
	int16_t x91 = -1;
	int32_t x92 = INT32_MAX;
	volatile uint32_t t19 = 12942U;

	t19 = ((x89-x90)-(x91-x92));

	if (t19 != 2147483728U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x94 = -114772;
	int8_t x95 = INT8_MIN;
	volatile int16_t x96 = -7297;
	int32_t t20 = 12;

	t20 = ((x93-x94)-(x95-x96));

	if (t20 != 107446) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = 205;
	int8_t x98 = INT8_MAX;
	uint64_t x99 = 239974114770LLU;
	uint32_t x100 = UINT32_MAX;
	static volatile uint64_t t21 = 13549014142350117LLU;

	t21 = ((x97-x98)-(x99-x100));

	if (t21 != 18446743838030404219LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = UINT8_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	volatile int64_t x103 = -6884612617058938LL;
	uint32_t x104 = 132475044U;
	volatile int64_t t22 = -869317LL;

	t22 = ((x101-x102)-(x103-x104));

	if (t22 != 6884612749533982LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	static int32_t x107 = INT32_MAX;
	int64_t x108 = -1LL;
	volatile uint64_t t23 = 3LLU;

	t23 = ((x105-x106)-(x107-x108));

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x110 = INT8_MAX;
	uint32_t x111 = 30020U;
	uint64_t x112 = 821221LLU;
	uint64_t t24 = 123LLU;

	t24 = ((x109-x110)-(x111-x112));

	if (t24 != 791096LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = 7;
	uint32_t x114 = 3336486U;
	int8_t x115 = INT8_MIN;
	static int32_t x116 = 4418908;
	volatile uint32_t t25 = 152259U;

	t25 = ((x113-x114)-(x115-x116));

	if (t25 != 1082557U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 3682;
	static uint32_t x118 = 0U;
	uint16_t x119 = 6550U;
	volatile uint32_t t26 = 4U;

	t26 = ((x117-x118)-(x119-x120));

	if (t26 != 4294964427U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = INT16_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = 12474;
	int8_t x128 = INT8_MIN;
	uint32_t t27 = 260337U;

	t27 = ((x125-x126)-(x127-x128));

	if (t27 != 20166U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	volatile int8_t x134 = 2;
	uint32_t x135 = 1659366U;
	static int16_t x136 = -134;
	volatile uint32_t t28 = 2890U;

	t28 = ((x133-x134)-(x135-x136));

	if (t28 != 4293307793U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = -333061LL;
	uint16_t x146 = 5333U;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile int64_t t29 = 20LL;

	t29 = ((x145-x146)-(x147-x148));

	if (t29 != -2147822043LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MIN;
	int16_t x155 = -1;
	static uint8_t x156 = UINT8_MAX;
	static volatile int32_t t30 = -1988162;

	t30 = ((x153-x154)-(x155-x156));

	if (t30 != 256) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MIN;
	static volatile int64_t x158 = INT64_MIN;
	int16_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	int64_t t31 = -3856LL;

	t31 = ((x157-x158)-(x159-x160));

	if (t31 != 9223372036854742913LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = 29U;
	volatile int32_t t32 = -2013171;

	t32 = ((x161-x162)-(x163-x164));

	if (t32 != -2147418142) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	static volatile int8_t x168 = 0;
	int64_t t33 = 1LL;

	t33 = ((x165-x166)-(x167-x168));

	if (t33 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x169 = 0U;
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = -69295692816678LL;
	int8_t x172 = INT8_MIN;

	t34 = ((x169-x170)-(x171-x172));

	if (t34 != 69295692816295LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -15711;
	volatile uint64_t x178 = UINT64_MAX;
	volatile int32_t x179 = -95020522;
	static uint64_t t35 = 46855319846LLU;

	t35 = ((x177-x178)-(x179-x180));

	if (t35 != 9223372036949780620LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x181 = 6074325642944000LLU;
	volatile uint64_t x182 = 702958LLU;
	int32_t x183 = -3909234;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t36 = 951LLU;

	t36 = ((x181-x182)-(x183-x184));

	if (t36 != 9229446362500926084LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -1LL;
	uint8_t x186 = UINT8_MAX;
	static int64_t x188 = -1LL;
	volatile int64_t t37 = -77LL;

	t37 = ((x185-x186)-(x187-x188));

	if (t37 != -256LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x189 = 1199U;
	static uint8_t x190 = UINT8_MAX;
	uint32_t t38 = 1170292022U;

	t38 = ((x189-x190)-(x191-x192));

	if (t38 != 4294966850U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int64_t x198 = -1LL;
	volatile int64_t x199 = 3LL;
	int64_t t39 = -279LL;

	t39 = ((x197-x198)-(x199-x200));

	if (t39 != 252LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x202 = 431494854080598190LL;
	volatile int64_t x203 = -2663333332215LL;
	static int8_t x204 = 1;
	volatile int64_t t40 = 280080708208LL;

	t40 = ((x201-x202)-(x203-x204));

	if (t40 != -431492190747265972LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = 7;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = UINT32_MAX;
	static volatile uint8_t x208 = UINT8_MAX;
	volatile uint32_t t41 = 203890U;

	t41 = ((x205-x206)-(x207-x208));

	if (t41 != 33031U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = -1;
	int16_t x211 = 1;
	static volatile int64_t t42 = 316721357220596LL;

	t42 = ((x209-x210)-(x211-x212));

	if (t42 != 4427018359942680LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x214 = INT16_MIN;
	uint16_t x215 = 4043U;
	static int8_t x216 = INT8_MIN;
	int64_t t43 = 348587387008LL;

	t43 = ((x213-x214)-(x215-x216));

	if (t43 != 2353841903LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 54818349944LLU;
	int16_t x219 = INT16_MAX;
	uint64_t t44 = 14183LLU;

	t44 = ((x217-x218)-(x219-x220));

	if (t44 != 18446744019073241168LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x222 = UINT8_MAX;
	static uint8_t x223 = 38U;
	int8_t x224 = 2;
	uint32_t t45 = 39433669U;

	t45 = ((x221-x222)-(x223-x224));

	if (t45 != 4294967004U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = 448U;
	uint32_t x226 = 0U;
	volatile uint8_t x227 = 22U;
	int32_t x228 = -1;

	t46 = ((x225-x226)-(x227-x228));

	if (t46 != 425U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	volatile int64_t x230 = INT64_MIN;
	int8_t x231 = 0;
	static uint64_t x232 = 1744867260315LLU;
	static volatile uint64_t t47 = 5122853210LLU;

	t47 = ((x229-x230)-(x231-x232));

	if (t47 != 9223373779574552475LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MAX;
	volatile int16_t x235 = INT16_MIN;
	uint8_t x236 = UINT8_MAX;
	uint32_t t48 = 311150U;

	t48 = ((x233-x234)-(x235-x236));

	if (t48 != 2143733589U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x237 = -1;
	static int16_t x238 = INT16_MIN;
	int16_t x239 = -1;
	int32_t t49 = 20;

	t49 = ((x237-x238)-(x239-x240));

	if (t49 != 33023) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x245 = INT16_MAX;
	static int16_t x247 = INT16_MAX;
	uint16_t x248 = 20U;

	t50 = ((x245-x246)-(x247-x248));

	if (t50 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x249 = 110769041LLU;
	volatile uint32_t x250 = 14963203U;
	static volatile uint32_t x251 = 272875U;
	uint8_t x252 = 1U;
	uint64_t t51 = 2503LLU;

	t51 = ((x249-x250)-(x251-x252));

	if (t51 != 95532964LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = 1;
	int16_t x258 = -14;
	static volatile uint8_t x259 = 2U;
	int64_t x260 = -20997811323597LL;
	int64_t t52 = -111004LL;

	t52 = ((x257-x258)-(x259-x260));

	if (t52 != -20997811323584LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = 6667;
	int64_t x271 = 7LL;
	static uint64_t x272 = 173268081525676932LLU;
	static volatile uint64_t t53 = 875456LLU;

	t53 = ((x269-x270)-(x271-x272));

	if (t53 != 173268081525683591LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x273 = 1757936U;
	int64_t x274 = -408424207813LL;
	uint32_t x275 = 2536732U;
	uint16_t x276 = 805U;
	int64_t t54 = -17388250731975LL;

	t54 = ((x273-x274)-(x275-x276));

	if (t54 != 408423429822LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x277 = 7U;
	static int32_t x278 = INT32_MIN;
	static int32_t x279 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t55 = 0LLU;

	t55 = ((x277-x278)-(x279-x280));

	if (t55 != 4294967302LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x281 = INT8_MAX;
	volatile uint16_t x282 = 0U;
	int16_t x283 = INT16_MAX;
	static int16_t x284 = 10849;
	volatile int32_t t56 = -3556317;

	t56 = ((x281-x282)-(x283-x284));

	if (t56 != -21791) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x287 = -30385LL;
	uint16_t x288 = 1U;
	uint64_t t57 = 1086077893032447LLU;

	t57 = ((x285-x286)-(x287-x288));

	if (t57 != 30379LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x301 = INT32_MIN;
	volatile int32_t x302 = -1;
	uint8_t x303 = 9U;
	uint16_t x304 = UINT16_MAX;

	t58 = ((x301-x302)-(x303-x304));

	if (t58 != -2147418121) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x306 = 1051745896U;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MAX;
	volatile uint64_t t59 = 89993369LLU;

	t59 = ((x305-x306)-(x307-x308));

	if (t59 != 3243221400LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 1635U;
	int8_t x311 = INT8_MIN;
	volatile uint32_t x312 = 24940045U;
	volatile uint32_t t60 = 80209998U;

	t60 = ((x309-x310)-(x311-x312));

	if (t60 != 24938793U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x313 = -23;
	int32_t x314 = -1;
	uint64_t x316 = 107LLU;
	uint64_t t61 = 10186902312069898LLU;

	t61 = ((x313-x314)-(x315-x316));

	if (t61 != 86LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = 1374LLU;
	int8_t x323 = -29;
	int16_t x324 = -54;
	static volatile uint64_t t62 = 81937993006115LLU;

	t62 = ((x321-x322)-(x323-x324));

	if (t62 != 18446744071562066569LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = 1;
	int16_t x326 = 0;
	volatile int16_t x327 = 154;
	volatile int16_t x328 = -1;
	int32_t t63 = 972443891;

	t63 = ((x325-x326)-(x327-x328));

	if (t63 != -154) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x329 = 69762697586601LLU;
	int64_t x330 = 1155622397763928LL;
	static volatile uint64_t x331 = 93614465307LLU;
	int32_t x332 = INT32_MIN;
	uint64_t t64 = 59542869607944LLU;

	t64 = ((x329-x330)-(x331-x332));

	if (t64 != 18445658118247425334LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x345 = -65;
	volatile int64_t x346 = -1447760381270851162LL;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MAX;
	volatile int64_t t65 = -806LL;

	t65 = ((x345-x346)-(x347-x348));

	if (t65 != 1447760381270883992LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x353 = 7;
	uint64_t x354 = 890129LLU;
	uint16_t x355 = 1U;
	uint64_t t66 = 3LLU;

	t66 = ((x353-x354)-(x355-x356));

	if (t66 != 18446744069413696110LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x357 = 3U;
	int8_t x358 = INT8_MIN;
	int8_t x359 = 0;
	static uint16_t x360 = 24U;
	int32_t t67 = -8;

	t67 = ((x357-x358)-(x359-x360));

	if (t67 != 155) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x361 = UINT16_MAX;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	volatile uint32_t t68 = 14U;

	t68 = ((x361-x362)-(x363-x364));

	if (t68 != 65536U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x369 = 2U;
	static volatile uint32_t x371 = 47894U;
	uint16_t x372 = 344U;
	volatile uint64_t t69 = 244185LLU;

	t69 = ((x369-x370)-(x371-x372));

	if (t69 != 18446744073709504069LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x377 = 25U;
	static volatile int32_t x378 = -1;
	static uint64_t x379 = UINT64_MAX;

	t70 = ((x377-x378)-(x379-x380));

	if (t70 != 31LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x381 = UINT64_MAX;
	static volatile int8_t x382 = -3;
	int16_t x383 = 3477;
	volatile uint16_t x384 = UINT16_MAX;
	uint64_t t71 = 1326789LLU;

	t71 = ((x381-x382)-(x383-x384));

	if (t71 != 62060LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x385 = 1U;
	int32_t x387 = -1;
	volatile uint32_t t72 = 832505U;

	t72 = ((x385-x386)-(x387-x388));

	if (t72 != 2125991691U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x393 = 38LLU;
	static volatile int8_t x394 = INT8_MIN;
	static uint16_t x395 = 139U;

	t73 = ((x393-x394)-(x395-x396));

	if (t73 != 18446744073709518875LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x407 = INT64_MAX;
	static volatile uint16_t x408 = UINT16_MAX;
	static volatile int64_t t74 = 50604522695LL;

	t74 = ((x405-x406)-(x407-x408));

	if (t74 != -9223372036854677459LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x409 = INT8_MAX;
	int16_t x410 = -1;
	static uint8_t x411 = UINT8_MAX;
	volatile int32_t t75 = 26;

	t75 = ((x409-x410)-(x411-x412));

	if (t75 != -114) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x413 = 12165983334092LLU;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	uint64_t t76 = 0LLU;

	t76 = ((x413-x414)-(x415-x416));

	if (t76 != 9223384202838110029LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = INT16_MAX;
	uint32_t x418 = 149U;
	uint32_t x419 = 56863U;
	uint32_t x420 = 410U;

	t77 = ((x417-x418)-(x419-x420));

	if (t77 != 4294943461U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = INT16_MIN;
	volatile uint16_t x422 = 1U;
	volatile int64_t x424 = -1LL;
	volatile int64_t t78 = -2445685103909077LL;

	t78 = ((x421-x422)-(x423-x424));

	if (t78 != -37275LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x425 = INT32_MAX;
	static int32_t x426 = 147;
	int64_t x427 = -98534804226458933LL;
	int8_t x428 = INT8_MAX;

	t79 = ((x425-x426)-(x427-x428));

	if (t79 != 98534806373942560LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = 0;
	uint32_t x430 = UINT32_MAX;
	int64_t x432 = INT64_MIN;
	volatile int64_t t80 = -439400010884LL;

	t80 = ((x429-x430)-(x431-x432));

	if (t80 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x433 = UINT32_MAX;
	int32_t x434 = 315;
	static int8_t x435 = INT8_MAX;
	volatile uint32_t t81 = 0U;

	t81 = ((x433-x434)-(x435-x436));

	if (t81 != 4294967108U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x453 = -1LL;
	volatile int64_t x454 = -1LL;
	int64_t t82 = 412254851627469LL;

	t82 = ((x453-x454)-(x455-x456));

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x457 = UINT16_MAX;
	volatile uint64_t x458 = 3LLU;
	int16_t x460 = INT16_MIN;
	uint64_t t83 = 132020866421LLU;

	t83 = ((x457-x458)-(x459-x460));

	if (t83 != 14859297561277708271LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x469 = INT32_MIN;
	int64_t x470 = 342667750682LL;
	uint32_t x471 = UINT32_MAX;
	int64_t x472 = -21LL;
	volatile int64_t t84 = 107523891455LL;

	t84 = ((x469-x470)-(x471-x472));

	if (t84 != -349110201646LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x474 = -956;
	int16_t x475 = INT16_MIN;
	volatile uint32_t x476 = UINT32_MAX;
	uint32_t t85 = 0U;

	t85 = ((x473-x474)-(x475-x476));

	if (t85 != 33726U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x477 = 7474735604028019718LLU;
	static int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	uint64_t t86 = 7819269624902823LLU;

	t86 = ((x477-x478)-(x479-x480));

	if (t86 != 7474735604028019974LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x481 = INT16_MAX;
	int8_t x482 = -22;
	volatile int16_t x483 = 35;

	t87 = ((x481-x482)-(x483-x484));

	if (t87 != 32761) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x485 = INT16_MIN;
	int64_t x487 = INT64_MIN;
	int64_t x488 = -1LL;

	t88 = ((x485-x486)-(x487-x488));

	if (t88 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x489 = INT8_MIN;
	static volatile int32_t x490 = INT32_MIN;
	uint16_t x491 = UINT16_MAX;
	static volatile int32_t t89 = 24;

	t89 = ((x489-x490)-(x491-x492));

	if (t89 != 2147417309) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x493 = INT32_MIN;
	static int32_t x494 = INT32_MIN;
	volatile uint8_t x495 = 3U;
	int32_t x496 = -1;
	int32_t t90 = 401151310;

	t90 = ((x493-x494)-(x495-x496));

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = -388;
	volatile int16_t x502 = 4146;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t91 = -892813;

	t91 = ((x501-x502)-(x503-x504));

	if (t91 != -37303) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x506 = 3699U;
	int16_t x507 = INT16_MIN;
	static uint8_t x508 = 1U;
	uint32_t t92 = 1873U;

	t92 = ((x505-x506)-(x507-x508));

	if (t92 != 29113U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = -5;
	int16_t x514 = 34;
	int32_t x516 = INT32_MAX;
	uint32_t t93 = 60U;

	t93 = ((x513-x514)-(x515-x516));

	if (t93 != 2147474711U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x529 = INT16_MAX;
	uint32_t x530 = 4372U;
	int8_t x531 = -3;
	uint16_t x532 = 1301U;
	volatile uint32_t t94 = 36298U;

	t94 = ((x529-x530)-(x531-x532));

	if (t94 != 29699U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x533 = 58;
	static int8_t x535 = INT8_MIN;
	int64_t t95 = 3695319391521441LL;

	t95 = ((x533-x534)-(x535-x536));

	if (t95 != 539LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x537 = 28697786LL;
	int16_t x538 = -1;
	int32_t x539 = -1;
	volatile int64_t t96 = 19307889413908076LL;

	t96 = ((x537-x538)-(x539-x540));

	if (t96 != 28697787LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x541 = 2;
	uint64_t x542 = 498429357187107169LLU;
	int32_t x543 = -2902803;
	static int32_t x544 = 40508423;
	volatile uint64_t t97 = 32001897315LLU;

	t97 = ((x541-x542)-(x543-x544));

	if (t97 != 17948314716565855675LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x545 = INT64_MAX;
	static uint64_t x546 = 35269LLU;
	uint16_t x547 = 0U;
	int64_t x548 = 27233LL;
	volatile uint64_t t98 = 11938733LLU;

	t98 = ((x545-x546)-(x547-x548));

	if (t98 != 9223372036854767771LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x549 = INT16_MIN;
	int64_t x550 = -7151LL;
	volatile uint64_t x551 = 5LLU;
	static int16_t x552 = 1;

	t99 = ((x549-x550)-(x551-x552));

	if (t99 != 18446744073709525995LLU) { NG(); } else { ; }
	
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

