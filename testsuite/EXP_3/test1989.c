#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x3 = 0;
int16_t x4 = INT16_MIN;
static volatile int64_t x15 = INT64_MIN;
int8_t x16 = -1;
uint16_t x43 = UINT16_MAX;
int32_t x48 = INT32_MIN;
volatile int32_t x54 = 6918;
volatile int8_t x58 = -1;
int8_t x59 = 0;
uint16_t x66 = 1U;
static int64_t x74 = 1385010LL;
static int32_t x77 = -1;
int16_t x79 = -7852;
int16_t x82 = INT16_MIN;
uint32_t x84 = 37418791U;
uint16_t x85 = 0U;
static uint32_t x86 = 50797U;
volatile int32_t x87 = INT32_MIN;
int64_t x90 = INT64_MIN;
uint32_t x96 = 8861713U;
volatile int8_t x99 = 12;
volatile int32_t t24 = -211;
static uint64_t x105 = UINT64_MAX;
int16_t x108 = INT16_MAX;
int8_t x112 = INT8_MIN;
static int16_t x121 = INT16_MIN;
int8_t x122 = INT8_MAX;
volatile uint8_t x136 = UINT8_MAX;
int64_t t33 = INT64_MAX;
static int8_t x148 = INT8_MIN;
int64_t x151 = INT64_MIN;
int32_t x155 = INT32_MIN;
int32_t x157 = -1;
int8_t x169 = INT8_MIN;
static int16_t x170 = -94;
int32_t x178 = INT32_MIN;
int32_t t45 = -516;
uint8_t x186 = UINT8_MAX;
volatile int16_t x191 = 116;
uint16_t x192 = 54U;
int64_t x193 = INT64_MIN;
int16_t x195 = -27;
uint32_t x198 = UINT32_MAX;
int8_t x206 = -1;
volatile uint8_t x207 = 48U;
int64_t x211 = 1627324278333090LL;
volatile int64_t t53 = 15568LL;
volatile uint8_t x217 = 6U;
int8_t x229 = INT8_MAX;
int32_t t57 = 25500;
uint8_t x234 = 3U;
volatile int8_t x236 = -1;
int32_t x238 = -1;
static int32_t t60 = 474568698;
int8_t x249 = -1;
volatile int8_t x250 = INT8_MIN;
static volatile uint64_t x251 = 325609LLU;
int32_t x257 = INT32_MIN;
volatile uint8_t x261 = 9U;
int8_t x265 = -25;
uint32_t x272 = 253533049U;
volatile uint32_t t67 = 5860U;
uint32_t x279 = UINT32_MAX;
int16_t x281 = INT16_MIN;
uint8_t x288 = 45U;
uint32_t x291 = UINT32_MAX;
uint64_t x293 = UINT64_MAX;
int8_t x296 = INT8_MAX;
uint16_t x307 = UINT16_MAX;
uint32_t x308 = 556574U;
volatile uint32_t t76 = 68335388U;
static uint64_t t77 = 1148838613587102627LLU;
static volatile uint64_t x316 = 137585753746070LLU;
int32_t x320 = INT32_MAX;
volatile int64_t t79 = -22934716286LL;
int32_t x324 = INT32_MIN;
uint8_t x328 = 101U;
uint32_t x335 = 0U;
uint16_t x341 = 1U;
static uint64_t x345 = 3399871LLU;
static int8_t x356 = -15;
int64_t t88 = -106639736LL;
static uint8_t x359 = 106U;
volatile int32_t t89 = 144832;
int32_t t90 = -17287274;
int16_t x368 = -1;
int8_t x376 = INT8_MIN;
uint16_t x377 = UINT16_MAX;
int64_t x387 = INT64_MAX;
volatile int64_t t96 = INT64_MAX;
static int64_t x393 = INT64_MIN;
static uint8_t x395 = UINT8_MAX;
int8_t x397 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 1687362930U;
	int8_t x2 = 6;
	static int32_t t0 = -1;

	t0 = ((x1<=x2)^(x3|x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = 3U;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -89LL;

	t1 = ((x5<=x6)^(x7|x8));

	if (t1 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 44329235777687985LL;
	volatile int8_t x10 = INT8_MIN;
	static int8_t x11 = 0;
	int8_t x12 = -1;
	static volatile int32_t t2 = 791928;

	t2 = ((x9<=x10)^(x11|x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint16_t x14 = 3230U;
	volatile int64_t t3 = -4495472905600220745LL;

	t3 = ((x13<=x14)^(x15|x16));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = -54839485LL;
	volatile int64_t x19 = INT64_MIN;
	uint16_t x20 = 9U;
	int64_t t4 = 12221416804583129LL;

	t4 = ((x17<=x18)^(x19|x20));

	if (t4 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 60902920399221LLU;
	volatile int64_t x22 = -1LL;
	int32_t x23 = INT32_MAX;
	volatile uint8_t x24 = 47U;
	int32_t t5 = 6906;

	t5 = ((x21<=x22)^(x23|x24));

	if (t5 != 2147483646) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 57552LLU;
	volatile uint32_t x26 = 32U;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = 7U;
	static volatile int32_t t6 = 7;

	t6 = ((x25<=x26)^(x27|x28));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	uint16_t x30 = 15034U;
	int16_t x31 = INT16_MAX;
	volatile uint8_t x32 = 2U;
	int32_t t7 = -80046177;

	t7 = ((x29<=x30)^(x31|x32));

	if (t7 != 32766) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	int32_t x34 = -9041;
	volatile int64_t x35 = -1LL;
	volatile int8_t x36 = INT8_MIN;
	volatile int64_t t8 = -14772389755LL;

	t8 = ((x33<=x34)^(x35|x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 54048582277674LLU;
	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = 1;
	uint64_t x40 = 300805318861LLU;
	volatile uint64_t t9 = 478598LLU;

	t9 = ((x37<=x38)^(x39|x40));

	if (t9 != 300805318860LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 2953218179LLU;
	int16_t x42 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	static uint64_t t10 = 200186673LLU;

	t10 = ((x41<=x42)^(x43|x44));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint8_t x46 = 1U;
	static int32_t x47 = 3522;
	int32_t t11 = -1;

	t11 = ((x45<=x46)^(x47|x48));

	if (t11 != -2147480125) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	static uint8_t x50 = 1U;
	volatile int32_t x51 = -1;
	static uint32_t x52 = 4374150U;
	uint32_t t12 = UINT32_MAX;

	t12 = ((x49<=x50)^(x51|x52));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int16_t x55 = 5;
	int64_t x56 = -1LL;
	static int64_t t13 = 7291800LL;

	t13 = ((x53<=x54)^(x55|x56));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 0U;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 1;

	t14 = ((x57<=x58)^(x59|x60));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int64_t x62 = INT64_MIN;
	uint8_t x63 = 0U;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -130154734;

	t15 = ((x61<=x62)^(x63|x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MIN;
	uint32_t t16 = 373769208U;

	t16 = ((x65<=x66)^(x67|x68));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 0;
	volatile int64_t x70 = INT64_MIN;
	static uint32_t x71 = 1770628208U;
	int32_t x72 = INT32_MIN;
	static uint32_t t17 = 26914742U;

	t17 = ((x69<=x70)^(x71|x72));

	if (t17 != 3918111856U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = -720;

	t18 = ((x73<=x74)^(x75|x76));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = 2098;
	int64_t x80 = INT64_MIN;
	static int64_t t19 = -9156LL;

	t19 = ((x77<=x78)^(x79|x80));

	if (t19 != -7851LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x83 = 0;
	uint32_t t20 = 3U;

	t20 = ((x81<=x82)^(x83|x84));

	if (t20 != 37418791U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x88 = 12;
	volatile int32_t t21 = -1642;

	t21 = ((x85<=x86)^(x87|x88));

	if (t21 != -2147483635) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = ((x89<=x90)^(x91|x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = 1;
	uint16_t x94 = 43U;
	int32_t x95 = INT32_MIN;
	uint32_t t23 = 35628383U;

	t23 = ((x93<=x94)^(x95|x96));

	if (t23 != 2156345360U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x97 = 117095802LLU;
	int64_t x98 = INT64_MAX;
	int32_t x100 = INT32_MIN;

	t24 = ((x97<=x98)^(x99|x100));

	if (t24 != -2147483635) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -611980586140LL;
	volatile int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -49454377;

	t25 = ((x101<=x102)^(x103|x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	static uint16_t x107 = 24U;
	volatile int32_t t26 = 34535;

	t26 = ((x105<=x106)^(x107|x108));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 7436271307LLU;
	int16_t x110 = 12643;
	volatile uint16_t x111 = 7070U;
	volatile int32_t t27 = -15823;

	t27 = ((x109<=x110)^(x111|x112));

	if (t27 != -98) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = 26;
	int64_t x114 = -1LL;
	static volatile int16_t x115 = INT16_MIN;
	volatile int8_t x116 = 1;
	int32_t t28 = -12;

	t28 = ((x113<=x114)^(x115|x116));

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -113;
	static int16_t x120 = -1;
	volatile int32_t t29 = -195;

	t29 = ((x117<=x118)^(x119|x120));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x123 = -1;
	static volatile uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 8U;

	t30 = ((x121<=x122)^(x123|x124));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 58640181;
	int8_t x126 = -1;
	volatile uint64_t x127 = 2LLU;
	volatile uint32_t x128 = 32387U;
	uint64_t t31 = 1080984568828LLU;

	t31 = ((x125<=x126)^(x127|x128));

	if (t31 != 32387LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	static int16_t x130 = -1;
	uint8_t x131 = 5U;
	int8_t x132 = -1;
	volatile int32_t t32 = 59976463;

	t32 = ((x129<=x130)^(x131|x132));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	static uint8_t x134 = 3U;
	int64_t x135 = INT64_MAX;

	t33 = ((x133<=x134)^(x135|x136));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int8_t x138 = -1;
	int16_t x139 = -1;
	int16_t x140 = INT16_MAX;
	int32_t t34 = -1860;

	t34 = ((x137<=x138)^(x139|x140));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	static uint8_t x143 = UINT8_MAX;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = 385540U;

	t35 = ((x141<=x142)^(x143|x144));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 286U;
	int64_t x146 = -13864713399256015LL;
	uint32_t x147 = 64U;
	volatile uint32_t t36 = 5U;

	t36 = ((x145<=x146)^(x147|x148));

	if (t36 != 4294967232U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 0;
	int32_t x150 = -1;
	uint16_t x152 = 4U;
	int64_t t37 = 270199707693LL;

	t37 = ((x149<=x150)^(x151|x152));

	if (t37 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 439060396U;
	int16_t x154 = -1;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 57008685;

	t38 = ((x153<=x154)^(x155|x156));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MAX;
	static int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -145811755;

	t39 = ((x157<=x158)^(x159|x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	uint8_t x162 = UINT8_MAX;
	static uint32_t x163 = 7800U;
	volatile int32_t x164 = INT32_MIN;
	volatile uint32_t t40 = 2U;

	t40 = ((x161<=x162)^(x163|x164));

	if (t40 != 2147491449U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	static volatile int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	volatile int64_t t41 = 222643921954591LL;

	t41 = ((x165<=x166)^(x167|x168));

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = INT8_MAX;
	volatile uint16_t x172 = 364U;
	int32_t t42 = 103;

	t42 = ((x169<=x170)^(x171|x172));

	if (t42 != 382) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 0;
	static int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	static int8_t x176 = -6;
	int32_t t43 = 27455;

	t43 = ((x173<=x174)^(x175|x176));

	if (t43 != -5) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -592033229;
	uint64_t x179 = UINT64_MAX;
	volatile int32_t x180 = INT32_MIN;
	uint64_t t44 = UINT64_MAX;

	t44 = ((x177<=x178)^(x179|x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 7294U;
	int64_t x182 = -21LL;
	int32_t x183 = -2;
	volatile int16_t x184 = -1;

	t45 = ((x181<=x182)^(x183|x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 4397U;
	uint64_t x187 = 6LLU;
	uint8_t x188 = UINT8_MAX;
	volatile uint64_t t46 = 43LLU;

	t46 = ((x185<=x186)^(x187|x188));

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	static int32_t x190 = INT32_MAX;
	volatile int32_t t47 = 122270;

	t47 = ((x189<=x190)^(x191|x192));

	if (t47 != 119) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 0U;
	volatile int8_t x196 = -1;
	int32_t t48 = 794312;

	t48 = ((x193<=x194)^(x195|x196));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = 38329252837LL;
	static int8_t x199 = -35;
	volatile int64_t x200 = 360LL;
	int64_t t49 = -23262286818731900LL;

	t49 = ((x197<=x198)^(x199|x200));

	if (t49 != -3LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -26;
	static int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	int8_t x204 = -1;
	int32_t t50 = -1471;

	t50 = ((x201<=x202)^(x203|x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 15790317433940903LL;
	int16_t x208 = -1;
	int32_t t51 = 1;

	t51 = ((x205<=x206)^(x207|x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -1LL;
	volatile int16_t x210 = 3;
	int64_t x212 = -573LL;
	static int64_t t52 = 6555937304LL;

	t52 = ((x209<=x210)^(x211|x212));

	if (t52 != -30LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 16829325U;
	static int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;

	t53 = ((x213<=x214)^(x215|x216));

	if (t53 != -32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 3180U;
	uint64_t x219 = 15LLU;
	static int64_t x220 = INT64_MIN;
	uint64_t t54 = 3966728227134LLU;

	t54 = ((x217<=x218)^(x219|x220));

	if (t54 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 1111U;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 410233708756936LLU;
	uint64_t x224 = 216LLU;
	static uint64_t t55 = 66LLU;

	t55 = ((x221<=x222)^(x223|x224));

	if (t55 != 410233708756952LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 28U;
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t56 = 65148299U;

	t56 = ((x225<=x226)^(x227|x228));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x230 = -3;
	static int32_t x231 = -1358950;
	static uint16_t x232 = 7223U;

	t57 = ((x229<=x230)^(x231|x232));

	if (t57 != -1351745) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 413U;
	int16_t x235 = -11;
	int32_t t58 = 1041660;

	t58 = ((x233<=x234)^(x235|x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static uint32_t x239 = 496174U;
	volatile int64_t x240 = 1LL;
	int64_t t59 = -217256LL;

	t59 = ((x237<=x238)^(x239|x240));

	if (t59 != 496175LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	int8_t x243 = -1;
	uint16_t x244 = 0U;

	t60 = ((x241<=x242)^(x243|x244));

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 31923267921480865LLU;
	uint32_t x247 = UINT32_MAX;
	static int64_t x248 = INT64_MAX;
	static int64_t t61 = INT64_MAX;

	t61 = ((x245<=x246)^(x247|x248));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x252 = INT32_MIN;
	volatile uint64_t t62 = 549068LLU;

	t62 = ((x249<=x250)^(x251|x252));

	if (t62 != 18446744071562393577LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	int64_t x254 = 3LL;
	volatile uint32_t x255 = 3382321U;
	int64_t x256 = INT64_MIN;
	int64_t t63 = -255LL;

	t63 = ((x253<=x254)^(x255|x256));

	if (t63 != -9223372036851393488LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -1LL;
	static int16_t x259 = -2855;
	static int64_t x260 = INT64_MAX;
	volatile int64_t t64 = 3111LL;

	t64 = ((x257<=x258)^(x259|x260));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = 94;
	static int32_t x263 = INT32_MIN;
	volatile int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -5584478;

	t65 = ((x261<=x262)^(x263|x264));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x266 = UINT16_MAX;
	int16_t x267 = -7;
	int32_t x268 = -2;
	volatile int32_t t66 = 886904;

	t66 = ((x265<=x266)^(x267|x268));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -2649789998204073LL;
	int8_t x270 = -4;
	volatile int8_t x271 = INT8_MIN;

	t67 = ((x269<=x270)^(x271|x272));

	if (t67 != 4294967288U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 13684019247347LLU;
	uint8_t x274 = 127U;
	int16_t x275 = INT16_MAX;
	volatile int16_t x276 = 4960;
	volatile int32_t t68 = -2;

	t68 = ((x273<=x274)^(x275|x276));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	int32_t x280 = -1;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x277<=x278)^(x279|x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x282 = 160LLU;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	int64_t t70 = 500364090LL;

	t70 = ((x281<=x282)^(x283|x284));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 967178133492444425LLU;
	volatile uint64_t t71 = 6844LLU;

	t71 = ((x285<=x286)^(x287|x288));

	if (t71 != 967178133492444460LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	int64_t x290 = 8016LL;
	static volatile int8_t x292 = 0;
	static uint32_t t72 = 106492080U;

	t72 = ((x289<=x290)^(x291|x292));

	if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x294 = 1LLU;
	static int16_t x295 = -9492;
	volatile int32_t t73 = 957201338;

	t73 = ((x293<=x294)^(x295|x296));

	if (t73 != -9473) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int8_t x298 = 14;
	volatile uint32_t x299 = 21286U;
	volatile int32_t x300 = -1;
	static volatile uint32_t t74 = 3359798U;

	t74 = ((x297<=x298)^(x299|x300));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	int32_t x303 = INT32_MAX;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 1;

	t75 = ((x301<=x302)^(x303|x304));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static int8_t x306 = INT8_MIN;

	t76 = ((x305<=x306)^(x307|x308));

	if (t76 != 589822U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	uint64_t x311 = 12LLU;
	int64_t x312 = INT64_MAX;

	t77 = ((x309<=x310)^(x311|x312));

	if (t77 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	volatile int32_t x314 = -52516;
	int64_t x315 = INT64_MAX;
	uint64_t t78 = 2469941919953970LLU;

	t78 = ((x313<=x314)^(x315|x316));

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MAX;
	int64_t x319 = -1LL;

	t79 = ((x317<=x318)^(x319|x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 0U;
	int32_t x322 = INT32_MAX;
	int32_t x323 = -31284439;
	static int32_t t80 = 56;

	t80 = ((x321<=x322)^(x323|x324));

	if (t80 != -31284440) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 100612637693LLU;
	uint32_t x326 = UINT32_MAX;
	volatile int64_t x327 = -1LL;
	volatile int64_t t81 = -3LL;

	t81 = ((x325<=x326)^(x327|x328));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 6U;
	int16_t x330 = INT16_MAX;
	static int8_t x331 = 57;
	int64_t x332 = INT64_MAX;
	static volatile int64_t t82 = -26689110029LL;

	t82 = ((x329<=x330)^(x331|x332));

	if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x333 = INT8_MAX;
	volatile int16_t x334 = INT16_MIN;
	int64_t x336 = INT64_MAX;
	static int64_t t83 = INT64_MAX;

	t83 = ((x333<=x334)^(x335|x336));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int32_t x338 = -1;
	int32_t x339 = INT32_MIN;
	volatile int64_t x340 = 131206231LL;
	int64_t t84 = 77082541LL;

	t84 = ((x337<=x338)^(x339|x340));

	if (t84 != -2016277418LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 937U;
	static int32_t t85 = -924;

	t85 = ((x341<=x342)^(x343|x344));

	if (t85 != 1022) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 1U;
	int64_t x347 = -1LL;
	uint32_t x348 = 416262492U;
	int64_t t86 = -154694308214LL;

	t86 = ((x345<=x346)^(x347|x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 79;
	static volatile int8_t x350 = 1;
	int8_t x351 = INT8_MAX;
	uint8_t x352 = 2U;
	static volatile int32_t t87 = 3762440;

	t87 = ((x349<=x350)^(x351|x352));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int64_t x354 = -1LL;
	static int64_t x355 = INT64_MIN;

	t88 = ((x353<=x354)^(x355|x356));

	if (t88 != -16LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	volatile int64_t x358 = -1LL;
	uint16_t x360 = 104U;

	t89 = ((x357<=x358)^(x359|x360));

	if (t89 != 107) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x361 = INT8_MIN;
	volatile int32_t x362 = INT32_MAX;
	static int8_t x363 = 0;
	volatile uint16_t x364 = UINT16_MAX;

	t90 = ((x361<=x362)^(x363|x364));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MAX;
	int8_t x366 = 1;
	int8_t x367 = INT8_MIN;
	static int32_t t91 = 17612;

	t91 = ((x365<=x366)^(x367|x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -1LL;
	int64_t x370 = -70326LL;
	uint32_t x371 = 122825U;
	int16_t x372 = -1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = ((x369<=x370)^(x371|x372));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 11355282114896185LLU;
	int8_t x374 = -1;
	static uint64_t x375 = 1196645468210405022LLU;
	volatile uint64_t t93 = 754LLU;

	t93 = ((x373<=x374)^(x375|x376));

	if (t93 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;
	static uint64_t t94 = 17070901163915061LLU;

	t94 = ((x377<=x378)^(x379|x380));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	static int64_t x382 = -1883LL;
	int8_t x383 = -27;
	static int32_t x384 = 822289;
	int32_t t95 = 4117;

	t95 = ((x381<=x382)^(x383|x384));

	if (t95 != -11) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static volatile uint32_t x386 = 1259445U;
	int8_t x388 = 0;

	t96 = ((x385<=x386)^(x387|x388));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 115455608041LLU;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	int8_t x392 = 0;
	static volatile int32_t t97 = -502954;

	t97 = ((x389<=x390)^(x391|x392));

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x394 = 6;
	static uint8_t x396 = UINT8_MAX;
	int32_t t98 = 154499977;

	t98 = ((x393<=x394)^(x395|x396));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MIN;
	volatile int8_t x399 = INT8_MIN;
	static uint32_t x400 = 134733U;
	volatile uint32_t t99 = 108592675U;

	t99 = ((x397<=x398)^(x399|x400));

	if (t99 != 4294967245U) { NG(); } else { ; }
	
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

