#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
int32_t x5 = -1;
volatile int8_t x12 = INT8_MAX;
uint16_t x14 = 1U;
volatile int32_t x18 = INT32_MIN;
int64_t x27 = -1LL;
uint8_t x29 = 9U;
volatile int8_t x31 = INT8_MAX;
int8_t x34 = -1;
volatile uint64_t t8 = UINT64_MAX;
uint16_t x41 = UINT16_MAX;
static int8_t x42 = -1;
int32_t x43 = INT32_MIN;
int64_t x44 = -13889152418547753LL;
static int32_t t10 = 3868652;
volatile uint32_t t11 = 8U;
int64_t t12 = INT64_MIN;
static volatile uint32_t x56 = UINT32_MAX;
int8_t x58 = INT8_MAX;
int32_t x62 = 72770;
uint64_t x65 = 2LLU;
static volatile uint32_t x72 = 14U;
uint8_t x84 = 0U;
int64_t x85 = -49672435846LL;
int32_t x91 = INT32_MIN;
int16_t x97 = 733;
int32_t x102 = INT32_MIN;
volatile int32_t x103 = INT32_MIN;
uint64_t x107 = UINT64_MAX;
volatile int64_t t27 = 10425668246394338LL;
int32_t x113 = -5993089;
uint16_t x116 = 1605U;
volatile uint32_t t28 = 34552U;
static volatile int32_t x120 = -767157298;
int16_t x123 = 3;
volatile uint64_t t30 = 128996732478014LLU;
int16_t x130 = 7;
static int8_t x142 = INT8_MAX;
volatile int32_t x152 = -1;
static volatile int32_t t37 = 115;
volatile int8_t x154 = -4;
uint64_t x161 = 600LLU;
uint32_t x165 = 1647925018U;
volatile int16_t x167 = INT16_MIN;
volatile int8_t x169 = INT8_MAX;
int16_t x191 = INT16_MIN;
volatile int32_t t47 = 298601;
volatile uint8_t x197 = 0U;
int64_t x208 = INT64_MAX;
volatile int64_t t52 = 25925460100654LL;
static int8_t x214 = 1;
int8_t x219 = -1;
static int16_t x220 = INT16_MAX;
static int16_t x221 = INT16_MIN;
int32_t t58 = -49157;
int64_t x238 = -1LL;
static volatile uint8_t x245 = 15U;
uint32_t x246 = 3U;
int64_t x251 = INT64_MAX;
static volatile uint8_t x255 = 1U;
int32_t x257 = INT32_MIN;
uint8_t x259 = 0U;
volatile int32_t t64 = -703;
static uint64_t x263 = UINT64_MAX;
int64_t x267 = INT64_MAX;
static int64_t x276 = -1LL;
volatile int32_t t69 = -581439;
volatile int32_t x283 = -1;
volatile uint8_t x284 = 1U;
volatile int32_t t71 = 1516155;
volatile int64_t x292 = INT64_MAX;
int64_t t72 = -503438443277182LL;
static volatile int16_t x293 = -7136;
int16_t x299 = INT16_MIN;
uint64_t x301 = UINT64_MAX;
int64_t x302 = 191831508781LL;
uint64_t x305 = 274565422399604LLU;
int8_t x310 = 28;
volatile uint64_t t78 = UINT64_MAX;
int8_t x318 = INT8_MIN;
static uint16_t x319 = 22682U;
int8_t x322 = INT8_MIN;
int64_t x325 = INT64_MIN;
static int8_t x330 = INT8_MIN;
int16_t x331 = INT16_MAX;
int64_t x332 = -1LL;
int32_t x334 = INT32_MIN;
volatile int8_t x335 = -48;
static uint16_t x348 = 105U;
int8_t x356 = 9;
int8_t x359 = INT8_MIN;
volatile int32_t t89 = -28288414;
volatile int8_t x367 = INT8_MIN;
uint32_t x370 = 621U;
int64_t t93 = -458983897958913LL;
int64_t x379 = INT64_MIN;
volatile int32_t t96 = -263809873;
static int64_t x395 = INT64_MIN;
static int32_t x397 = -1;


void f0(void) {
	uint16_t x1 = 517U;
	int8_t x2 = INT8_MIN;
	static int32_t x3 = INT32_MIN;
	int32_t t0 = 14;

	t0 = ((x1|x2)^(x3<=x4));

	if (t0 != -124) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = 5;
	uint8_t x8 = 93U;
	volatile int32_t t1 = 219603;

	t1 = ((x5|x6)^(x7<=x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile int16_t x10 = -50;
	int32_t x11 = 29;
	int32_t t2 = -245;

	t2 = ((x9|x10)^(x11<=x12));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x15 = -5;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 177737483;

	t3 = ((x13|x14)^(x15<=x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int64_t x19 = -263377648499LL;
	static int32_t x20 = -1;
	volatile int32_t t4 = 21586;

	t4 = ((x17|x18)^(x19<=x20));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile uint64_t x22 = 170693701041837LLU;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	uint64_t t5 = 385795LLU;

	t5 = ((x21|x22)^(x23<=x24));

	if (t5 != 170693701041918LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = -1;
	int64_t x28 = INT64_MIN;
	static uint64_t t6 = UINT64_MAX;

	t6 = ((x25|x26)^(x27<=x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = 30647409LLU;
	volatile int16_t x32 = 3;
	static volatile uint64_t t7 = 6177271741LLU;

	t7 = ((x29|x30)^(x31<=x32));

	if (t7 != 30647417LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x35 = 1;
	static volatile int32_t x36 = -58248;

	t8 = ((x33|x34)^(x35<=x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	volatile uint8_t x38 = 13U;
	uint64_t x39 = 4803045980682086690LLU;
	int64_t x40 = -1LL;
	volatile int32_t t9 = -5;

	t9 = ((x37|x38)^(x39<=x40));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {


	t10 = ((x41|x42)^(x43<=x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 13742U;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = 0U;
	uint32_t x48 = 21121U;

	t11 = ((x45|x46)^(x47<=x48));

	if (t11 != 4294967215U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 1;
	int64_t x50 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	int8_t x52 = -1;

	t12 = ((x49|x50)^(x51<=x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -5;
	static uint64_t x54 = UINT64_MAX;
	int32_t x55 = INT32_MIN;
	volatile uint64_t t13 = 6049884875160LLU;

	t13 = ((x53|x54)^(x55<=x56));

	if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x59 = 1;
	int8_t x60 = -1;
	volatile int32_t t14 = 5019053;

	t14 = ((x57|x58)^(x59<=x60));

	if (t14 != -2147483521) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = 1;

	t15 = ((x61|x62)^(x63<=x64));

	if (t15 != 131071) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	int16_t x68 = 1555;
	uint64_t t16 = 769330391173226LLU;

	t16 = ((x65|x66)^(x67<=x68));

	if (t16 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x70 = -1014985125;
	int32_t x71 = -1;
	int64_t t17 = -801884098671052LL;

	t17 = ((x69|x70)^(x71<=x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = ((x73|x74)^(x75<=x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int32_t x78 = -1;
	volatile int16_t x79 = 342;
	int64_t x80 = INT64_MIN;
	volatile int64_t t19 = 31LL;

	t19 = ((x77|x78)^(x79<=x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	volatile int8_t x82 = INT8_MIN;
	volatile int16_t x83 = -145;
	volatile int32_t t20 = -29863;

	t20 = ((x81|x82)^(x83<=x84));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 36466U;
	int64_t x87 = -1LL;
	int64_t x88 = -1LL;
	int64_t t21 = -105136766LL;

	t21 = ((x85|x86)^(x87<=x88));

	if (t21 != -49672433797LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 44;
	static int64_t x90 = INT64_MIN;
	volatile int32_t x92 = -1;
	int64_t t22 = -22LL;

	t22 = ((x89|x90)^(x91<=x92));

	if (t22 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 92U;
	volatile int8_t x94 = 0;
	int64_t x95 = -52838445177270525LL;
	static volatile uint8_t x96 = 126U;
	volatile int32_t t23 = -1854037;

	t23 = ((x93|x94)^(x95<=x96));

	if (t23 != 93) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x98 = UINT8_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = 1LL;
	static int32_t t24 = -5;

	t24 = ((x97|x98)^(x99<=x100));

	if (t24 != 766) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int16_t x104 = INT16_MIN;
	int32_t t25 = -433026080;

	t25 = ((x101|x102)^(x103<=x104));

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -85183LL;
	int16_t x106 = 1;
	int64_t x108 = -1LL;
	volatile int64_t t26 = -7174354694LL;

	t26 = ((x105|x106)^(x107<=x108));

	if (t26 != -85184LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -6LL;
	volatile uint32_t x112 = UINT32_MAX;

	t27 = ((x109|x110)^(x111<=x112));

	if (t27 != -127LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 882190U;
	static uint8_t x115 = UINT8_MAX;

	t28 = ((x113|x114)^(x115<=x116));

	if (t28 != 4289593214U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -3214;
	uint8_t x119 = 9U;
	static int32_t t29 = 37592973;

	t29 = ((x117|x118)^(x119<=x120));

	if (t29 != -3214) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 24713LL;
	uint64_t x122 = 32185754391095LLU;
	int64_t x124 = INT64_MAX;

	t30 = ((x121|x122)^(x123<=x124));

	if (t30 != 32185754415806LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = 3566;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = -251443328278048LL;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x125|x126)^(x127<=x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	static int8_t x131 = -1;
	int16_t x132 = -1;
	static int64_t t32 = -203162622674484LL;

	t32 = ((x129|x130)^(x131<=x132));

	if (t32 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -46397384574LL;
	int16_t x134 = INT16_MIN;
	static volatile int16_t x135 = -5;
	int32_t x136 = -1;
	int64_t t33 = 317133263LL;

	t33 = ((x133|x134)^(x135<=x136));

	if (t33 != -26493LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 12U;
	static uint8_t x138 = 27U;
	int16_t x139 = INT16_MAX;
	static int8_t x140 = -1;
	static int32_t t34 = 1391662;

	t34 = ((x137|x138)^(x139<=x140));

	if (t34 != 31) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x143 = 14;
	int32_t x144 = 3;
	int32_t t35 = 53329385;

	t35 = ((x141|x142)^(x143<=x144));

	if (t35 != -32641) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int8_t x146 = -1;
	int8_t x147 = -1;
	int64_t x148 = INT64_MIN;
	static int32_t t36 = -180;

	t36 = ((x145|x146)^(x147<=x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = -1;
	uint32_t x151 = 123309U;

	t37 = ((x149|x150)^(x151<=x152));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -1;
	int8_t x155 = INT8_MAX;
	volatile uint64_t x156 = UINT64_MAX;
	int32_t t38 = 2457;

	t38 = ((x153|x154)^(x155<=x156));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int16_t x158 = -225;
	uint64_t x159 = 5948422350841LLU;
	static volatile int32_t x160 = INT32_MAX;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = ((x157|x158)^(x159<=x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -12462581;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = 44U;
	volatile uint64_t t40 = 188572255LLU;

	t40 = ((x161|x162)^(x163<=x164));

	if (t40 != 18446744073697089115LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = 0;
	volatile int16_t x168 = 1;
	volatile uint32_t t41 = 41654842U;

	t41 = ((x165|x166)^(x167<=x168));

	if (t41 != 1647925019U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	volatile int64_t x171 = INT64_MAX;
	int32_t x172 = -1;
	uint64_t t42 = UINT64_MAX;

	t42 = ((x169|x170)^(x171<=x172));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int64_t x174 = INT64_MIN;
	volatile int16_t x175 = INT16_MIN;
	uint16_t x176 = 32U;
	volatile int64_t t43 = -1786340311563089LL;

	t43 = ((x173|x174)^(x175<=x176));

	if (t43 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	uint32_t x178 = 17723623U;
	int32_t x179 = INT32_MIN;
	int64_t x180 = -1LL;
	uint32_t t44 = 463U;

	t44 = ((x177|x178)^(x179<=x180));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	static volatile int8_t x184 = -1;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = ((x181|x182)^(x183<=x184));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -20;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -57;

	t46 = ((x185|x186)^(x187<=x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static volatile int8_t x190 = -1;
	int8_t x192 = INT8_MIN;

	t47 = ((x189|x190)^(x191<=x192));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	static int64_t x194 = 23388687LL;
	volatile uint16_t x195 = 28148U;
	static int16_t x196 = -1;
	volatile int64_t t48 = -2505551796LL;

	t48 = ((x193|x194)^(x195<=x196));

	if (t48 != -113LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x198 = -455;
	volatile uint64_t x199 = 2LLU;
	uint8_t x200 = 6U;
	int32_t t49 = 30478;

	t49 = ((x197|x198)^(x199<=x200));

	if (t49 != -456) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 24107567;
	volatile int16_t x202 = INT16_MAX;
	volatile int64_t x203 = INT64_MIN;
	static volatile uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = -480020653;

	t50 = ((x201|x202)^(x203<=x204));

	if (t50 != 24117246) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 1;
	static int16_t x206 = -1;
	int64_t x207 = INT64_MIN;
	int32_t t51 = 7623406;

	t51 = ((x205|x206)^(x207<=x208));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint16_t x210 = 1570U;
	int64_t x211 = -1084706507096315436LL;
	uint16_t x212 = 5614U;

	t52 = ((x209|x210)^(x211<=x212));

	if (t52 != -9223372036854774237LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static int32_t x215 = 235;
	int16_t x216 = 214;
	volatile int32_t t53 = -3738714;

	t53 = ((x213|x214)^(x215<=x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 0U;
	int32_t x218 = 672477;
	volatile int32_t t54 = -79391;

	t54 = ((x217|x218)^(x219<=x220));

	if (t54 != 672476) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 583301818081559LLU;
	int64_t x223 = -32060546052861LL;
	int32_t x224 = -4681;
	volatile uint64_t t55 = 525221LLU;

	t55 = ((x221|x222)^(x223<=x224));

	if (t55 != 18446744073709543702LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static uint16_t x226 = 89U;
	int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t56 = 162056LLU;

	t56 = ((x225|x226)^(x227<=x228));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x229 = INT8_MAX;
	static int64_t x230 = -586732527LL;
	int32_t x231 = 9711;
	int64_t x232 = INT64_MIN;
	int64_t t57 = 140032044LL;

	t57 = ((x229|x230)^(x231<=x232));

	if (t57 != -586732417LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	static volatile int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MIN;
	int8_t x236 = -1;

	t58 = ((x233|x234)^(x235<=x236));

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	volatile uint32_t x239 = UINT32_MAX;
	volatile uint8_t x240 = 12U;
	volatile int64_t t59 = -532375442557442321LL;

	t59 = ((x237|x238)^(x239<=x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	volatile int8_t x242 = 34;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	volatile int32_t t60 = 9950547;

	t60 = ((x241|x242)^(x243<=x244));

	if (t60 != -93) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x247 = 88;
	static volatile int16_t x248 = -1;
	volatile uint32_t t61 = 471117829U;

	t61 = ((x245|x246)^(x247<=x248));

	if (t61 != 15U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 16417446906870490LLU;
	static int16_t x250 = -132;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t62 = 158175139188LLU;

	t62 = ((x249|x250)^(x251<=x252));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 25587U;
	int64_t x254 = INT64_MIN;
	int64_t x256 = -2897194536LL;
	static volatile int64_t t63 = -2119090850101LL;

	t63 = ((x253|x254)^(x255<=x256));

	if (t63 != -9223372036854750221LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = 49;
	uint64_t x260 = UINT64_MAX;

	t64 = ((x257|x258)^(x259<=x260));

	if (t64 != -2147483600) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 75U;
	int8_t x262 = -3;
	static uint64_t x264 = UINT64_MAX;
	int32_t t65 = -478463;

	t65 = ((x261|x262)^(x263<=x264));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	volatile int64_t x266 = 454266418385302111LL;
	static int16_t x268 = INT16_MIN;
	int64_t t66 = -127698004507246984LL;

	t66 = ((x265|x266)^(x267<=x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = INT64_MAX;
	uint64_t x271 = 431506569535LLU;
	static uint64_t x272 = 980383388885275431LLU;
	int64_t t67 = -2LL;

	t67 = ((x269|x270)^(x271<=x272));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	uint16_t x274 = 212U;
	int32_t x275 = INT32_MIN;
	volatile int32_t t68 = -30002;

	t68 = ((x273|x274)^(x275<=x276));

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static int8_t x278 = 1;
	int16_t x279 = INT16_MAX;
	int8_t x280 = -1;

	t69 = ((x277|x278)^(x279<=x280));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 346049669;
	int32_t x282 = INT32_MIN;
	int32_t t70 = 1;

	t70 = ((x281|x282)^(x283<=x284));

	if (t70 != -1801433980) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	int8_t x286 = -2;
	int32_t x287 = INT32_MAX;
	static int32_t x288 = INT32_MIN;

	t71 = ((x285|x286)^(x287<=x288));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	static uint32_t x290 = 210191U;
	static int16_t x291 = INT16_MIN;

	t72 = ((x289|x290)^(x291<=x292));

	if (t72 != -9223372036854565618LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x294 = 8U;
	volatile int16_t x295 = 0;
	static volatile int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -3242;

	t73 = ((x293|x294)^(x295<=x296));

	if (t73 != -7128) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 14U;
	int64_t x298 = 144071626771904384LL;
	uint16_t x300 = 0U;
	static volatile int64_t t74 = 6024807686LL;

	t74 = ((x297|x298)^(x299<=x300));

	if (t74 != 144071626771904399LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x303 = 884U;
	uint16_t x304 = 2247U;
	uint64_t t75 = 341446877912719894LLU;

	t75 = ((x301|x302)^(x303<=x304));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	static uint16_t x307 = 61U;
	int32_t x308 = INT32_MIN;
	uint64_t t76 = 302LLU;

	t76 = ((x305|x306)^(x307<=x308));

	if (t76 != 9223646602277175412LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -84LL;
	int32_t x311 = INT32_MIN;
	int8_t x312 = 0;
	volatile int64_t t77 = -3899LL;

	t77 = ((x309|x310)^(x311<=x312));

	if (t77 != -67LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	static volatile uint64_t x314 = 585841281746474LLU;
	int16_t x315 = -733;
	int64_t x316 = INT64_MIN;

	t78 = ((x313|x314)^(x315<=x316));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	int64_t x320 = -284672972LL;
	int32_t t79 = 3698581;

	t79 = ((x317|x318)^(x319<=x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = 4U;
	int32_t x323 = -1;
	int64_t x324 = INT64_MAX;
	int32_t t80 = 21;

	t80 = ((x321|x322)^(x323<=x324));

	if (t80 != -123) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x326 = 7905535LLU;
	static int64_t x327 = 196184LL;
	uint8_t x328 = 4U;
	volatile uint64_t t81 = 895LLU;

	t81 = ((x325|x326)^(x327<=x328));

	if (t81 != 9223372036862681343LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 4694U;
	static volatile int32_t t82 = 809;

	t82 = ((x329|x330)^(x331<=x332));

	if (t82 != -42) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static int64_t x336 = INT64_MAX;
	int32_t t83 = 72151;

	t83 = ((x333|x334)^(x335<=x336));

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 6U;
	static uint16_t x338 = 22400U;
	static int8_t x339 = INT8_MIN;
	volatile int64_t x340 = -1LL;
	volatile int32_t t84 = -4950393;

	t84 = ((x337|x338)^(x339<=x340));

	if (t84 != 22407) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = -157861;

	t85 = ((x341|x342)^(x343<=x344));

	if (t85 != -32514) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	int32_t t86 = -77414465;

	t86 = ((x345|x346)^(x347<=x348));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int32_t x350 = -1;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = 198U;
	static int32_t t87 = -16;

	t87 = ((x349|x350)^(x351<=x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	static int8_t x354 = -3;
	int16_t x355 = -1;
	static volatile int32_t t88 = -136;

	t88 = ((x353|x354)^(x355<=x356));

	if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	int32_t x358 = -117817;
	uint8_t x360 = 10U;

	t89 = ((x357|x358)^(x359<=x360));

	if (t89 != -19514) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = 328760692;
	volatile uint32_t x363 = 21U;
	int64_t x364 = -16293145116LL;
	volatile int32_t t90 = 1;

	t90 = ((x361|x362)^(x363<=x364));

	if (t90 != -1818722956) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MAX;
	volatile uint32_t x368 = 2U;
	volatile int64_t t91 = -4656302060267325LL;

	t91 = ((x365|x366)^(x367<=x368));

	if (t91 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x371 = -1;
	static int64_t x372 = INT64_MAX;
	volatile uint32_t t92 = 69637138U;

	t92 = ((x369|x370)^(x371<=x372));

	if (t92 != 65534U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -239600586116LL;
	int8_t x374 = -5;
	static uint8_t x375 = UINT8_MAX;
	int8_t x376 = -1;

	t93 = ((x373|x374)^(x375<=x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 1U;
	int8_t x378 = INT8_MIN;
	int64_t x380 = INT64_MAX;
	static volatile int32_t t94 = 66;

	t94 = ((x377|x378)^(x379<=x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	static int32_t x382 = -22;
	uint32_t x383 = 150U;
	int8_t x384 = 0;
	uint64_t t95 = UINT64_MAX;

	t95 = ((x381|x382)^(x383<=x384));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	static int8_t x386 = 1;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -2535017LL;

	t96 = ((x385|x386)^(x387<=x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 19U;
	uint16_t x390 = 24834U;
	uint16_t x391 = 2U;
	int32_t x392 = INT32_MAX;
	volatile int32_t t97 = -1053297280;

	t97 = ((x389|x390)^(x391<=x392));

	if (t97 != 24850) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	volatile int16_t x394 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 1;

	t98 = ((x393|x394)^(x395<=x396));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = -1LL;
	int16_t x399 = INT16_MAX;
	volatile int64_t x400 = 1948LL;
	static volatile int64_t t99 = 1966210032022208LL;

	t99 = ((x397|x398)^(x399<=x400));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

