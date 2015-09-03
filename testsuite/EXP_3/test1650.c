#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -952731451346234455LL;
static volatile uint16_t x4 = UINT16_MAX;
int64_t x8 = INT64_MAX;
int32_t t1 = 53209767;
int32_t x9 = INT32_MIN;
volatile int64_t x10 = 4884LL;
static volatile uint32_t x15 = 95U;
uint8_t x18 = 1U;
int64_t x22 = -1LL;
volatile int32_t t5 = 7507;
int64_t x33 = -2829396606LL;
int16_t x34 = INT16_MAX;
static int8_t x41 = -1;
static volatile int8_t x63 = 3;
uint32_t x67 = 265U;
volatile int32_t x71 = -8877;
static uint16_t x73 = UINT16_MAX;
volatile int8_t x75 = -53;
uint64_t x85 = 16089LLU;
int8_t x86 = INT8_MAX;
volatile int32_t t21 = 1960403;
volatile int8_t x90 = INT8_MIN;
uint64_t x92 = 1034272831471LLU;
volatile int32_t t22 = 1683;
static int32_t t25 = -2388402;
uint64_t x107 = 40905428LLU;
uint8_t x109 = UINT8_MAX;
int64_t x113 = 6745430257720LL;
int32_t x114 = INT32_MIN;
volatile uint64_t x119 = 93104702LLU;
uint8_t x121 = UINT8_MAX;
volatile int8_t x125 = INT8_MAX;
volatile int8_t x127 = INT8_MAX;
static int16_t x131 = INT16_MAX;
uint16_t x132 = 39U;
volatile int32_t t33 = 45;
uint16_t x141 = 12U;
uint64_t x143 = 277090404966155732LLU;
uint64_t x147 = 24524LLU;
int8_t x154 = INT8_MIN;
volatile int32_t t38 = 0;
uint8_t x162 = 125U;
int64_t x172 = 120184307927591LL;
int32_t t42 = 1279;
uint32_t x179 = UINT32_MAX;
static int8_t x184 = INT8_MIN;
uint32_t x187 = UINT32_MAX;
static int8_t x188 = -1;
int32_t t46 = -638;
static volatile int8_t x189 = 1;
int32_t x191 = INT32_MIN;
static int32_t t48 = 301;
int32_t t49 = -44966;
static uint8_t x204 = 7U;
static int32_t t50 = 0;
volatile int32_t x206 = INT32_MIN;
static uint8_t x207 = 21U;
int64_t x211 = -1LL;
int16_t x221 = INT16_MAX;
int16_t x224 = INT16_MIN;
static int8_t x230 = -1;
uint32_t x232 = UINT32_MAX;
uint16_t x240 = 28418U;
static uint64_t x247 = 138741LLU;
int16_t x249 = 84;
static int32_t t62 = -992729;
static volatile int32_t t63 = -303190;
int16_t x257 = 21;
int64_t x258 = 1792314777539842449LL;
int32_t x262 = 284939;
static int32_t x269 = INT32_MIN;
int32_t t68 = -82734553;
int16_t x280 = INT16_MIN;
int32_t x281 = -1;
static int16_t x284 = INT16_MAX;
int64_t x291 = INT64_MAX;
int32_t x292 = -1;
int32_t t72 = -50;
uint32_t x298 = 7U;
int64_t x299 = INT64_MIN;
int64_t x302 = INT64_MAX;
int8_t x306 = -1;
static int8_t x309 = 1;
volatile int32_t t78 = 1637791;
int8_t x319 = INT8_MIN;
int32_t x320 = -39;
static int32_t x321 = INT32_MIN;
int64_t x322 = -97803LL;
volatile int16_t x327 = INT16_MIN;
static int16_t x333 = INT16_MIN;
int16_t x334 = INT16_MIN;
volatile uint16_t x350 = 3U;
uint16_t x354 = UINT16_MAX;
int32_t x355 = INT32_MAX;
int32_t x370 = INT32_MAX;
static int64_t x372 = INT64_MAX;
uint64_t x376 = 103378574081LLU;
volatile int32_t t93 = -1;
volatile int32_t t94 = 28277938;
static uint64_t x385 = UINT64_MAX;
int8_t x388 = 0;
static uint32_t x392 = 6407830U;
int16_t x393 = INT16_MIN;
static int32_t x396 = INT32_MAX;
int32_t t98 = -370331;


void f0(void) {
	volatile uint64_t x1 = 1451355LLU;
	uint64_t x3 = UINT64_MAX;
	int32_t t0 = -258561653;

	t0 = ((x1<=x2)|(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 11;
	int8_t x6 = -7;
	static int16_t x7 = -6;

	t1 = ((x5<=x6)|(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = -1840;
	int64_t x12 = -1LL;
	static volatile int32_t t2 = -179;

	t2 = ((x9<=x10)|(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = -1;
	static int32_t x16 = INT32_MAX;
	int32_t t3 = -552454;

	t3 = ((x13<=x14)|(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	volatile int32_t x19 = 3532;
	uint16_t x20 = 4U;
	int32_t t4 = 1130;

	t4 = ((x17<=x18)|(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 108099LL;
	volatile uint32_t x23 = UINT32_MAX;
	static int32_t x24 = -1;

	t5 = ((x21<=x22)|(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 1U;
	static uint16_t x26 = 18U;
	static uint32_t x27 = 43121345U;
	static volatile int16_t x28 = -1;
	int32_t t6 = 397019099;

	t6 = ((x25<=x26)|(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -115149469556LL;
	static int8_t x30 = 7;
	int8_t x31 = -1;
	static int16_t x32 = -447;
	volatile int32_t t7 = 295;

	t7 = ((x29<=x30)|(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = 269LL;
	uint64_t x36 = 3404LLU;
	int32_t t8 = 99024;

	t8 = ((x33<=x34)|(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = 3;
	static int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MAX;
	uint8_t x40 = 13U;
	int32_t t9 = 19;

	t9 = ((x37<=x38)|(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 6745U;
	volatile uint32_t x43 = 40U;
	static uint64_t x44 = 254521979593LLU;
	static volatile int32_t t10 = -74731602;

	t10 = ((x41<=x42)|(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 10LLU;
	int32_t x46 = -214689;
	uint8_t x47 = 6U;
	uint16_t x48 = 5178U;
	int32_t t11 = -182194;

	t11 = ((x45<=x46)|(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	static volatile int64_t x51 = INT64_MAX;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 81626047;

	t12 = ((x49<=x50)|(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 395LLU;
	int8_t x54 = -25;
	volatile int8_t x55 = INT8_MIN;
	volatile int8_t x56 = -29;
	volatile int32_t t13 = 58;

	t13 = ((x53<=x54)|(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	int8_t x59 = 26;
	volatile int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = -451;

	t14 = ((x57<=x58)|(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1U;
	volatile int32_t x62 = 197752451;
	int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = -2;

	t15 = ((x61<=x62)|(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -5;
	int64_t x66 = INT64_MIN;
	volatile uint16_t x68 = 2U;
	static volatile int32_t t16 = 1863525;

	t16 = ((x65<=x66)|(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int64_t x70 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -720579518;

	t17 = ((x69<=x70)|(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 24U;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -837;

	t18 = ((x73<=x74)|(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	volatile uint64_t x78 = 101487862234052LLU;
	uint64_t x79 = 89390578LLU;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 14611;

	t19 = ((x77<=x78)|(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile int8_t x82 = -13;
	int8_t x83 = 60;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -1;

	t20 = ((x81<=x82)|(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x87 = INT8_MIN;
	static uint64_t x88 = 7372617LLU;

	t21 = ((x85<=x86)|(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 16186U;
	volatile int16_t x91 = INT16_MIN;

	t22 = ((x89<=x90)|(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 708;
	volatile int64_t x94 = -1LL;
	int32_t x95 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = -9;

	t23 = ((x93<=x94)|(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int32_t x98 = -66804975;
	static int16_t x99 = INT16_MIN;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t24 = 879012;

	t24 = ((x97<=x98)|(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MAX;

	t25 = ((x101<=x102)|(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1;
	int32_t x106 = INT32_MIN;
	static uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -29;

	t26 = ((x105<=x106)|(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 1U;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 1U;
	volatile int32_t t27 = 212;

	t27 = ((x109<=x110)|(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x115 = -23933;
	int32_t x116 = INT32_MIN;
	int32_t t28 = -15347;

	t28 = ((x113<=x114)|(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = 3;
	volatile int8_t x118 = -1;
	int32_t x120 = 227;
	static int32_t t29 = -4;

	t29 = ((x117<=x118)|(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = 1574;
	volatile int16_t x123 = INT16_MIN;
	uint64_t x124 = 0LLU;
	volatile int32_t t30 = -6475947;

	t30 = ((x121<=x122)|(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = -1;

	t31 = ((x125<=x126)|(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x130 = INT32_MAX;
	volatile int32_t t32 = -2348;

	t32 = ((x129<=x130)|(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MIN;
	volatile uint8_t x135 = 2U;
	uint64_t x136 = UINT64_MAX;

	t33 = ((x133<=x134)|(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -1LL;
	volatile int8_t x138 = 2;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 3509;

	t34 = ((x137<=x138)|(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x142 = INT16_MIN;
	volatile int16_t x144 = -1;
	volatile int32_t t35 = 55;

	t35 = ((x141<=x142)|(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 4391U;
	int64_t x146 = INT64_MAX;
	uint16_t x148 = 13783U;
	static volatile int32_t t36 = 497;

	t36 = ((x145<=x146)|(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 14;
	uint16_t x150 = 1U;
	static int64_t x151 = -129265646119LL;
	int16_t x152 = 15730;
	volatile int32_t t37 = -16;

	t37 = ((x149<=x150)|(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 10;
	volatile int64_t x155 = 57754068303921179LL;
	uint64_t x156 = 7313870979LLU;

	t38 = ((x153<=x154)|(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 38154U;
	uint8_t x159 = 31U;
	static int8_t x160 = 7;
	static volatile int32_t t39 = -379971231;

	t39 = ((x157<=x158)|(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	volatile int64_t x163 = 7332225LL;
	uint16_t x164 = 48U;
	int32_t t40 = -12;

	t40 = ((x161<=x162)|(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	int32_t x167 = 169021;
	static volatile int64_t x168 = 24665116663692LL;
	volatile int32_t t41 = -12801879;

	t41 = ((x165<=x166)|(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	volatile int16_t x170 = 1;
	uint32_t x171 = 18U;

	t42 = ((x169<=x170)|(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	uint32_t x174 = 27U;
	int32_t x175 = -1;
	int64_t x176 = -959156203562150LL;
	volatile int32_t t43 = -73708;

	t43 = ((x173<=x174)|(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1U;
	static int64_t x178 = -4725488651955592LL;
	uint64_t x180 = UINT64_MAX;
	int32_t t44 = -48;

	t44 = ((x177<=x178)|(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	int64_t x182 = 406434220590LL;
	volatile uint16_t x183 = UINT16_MAX;
	int32_t t45 = 69420;

	t45 = ((x181<=x182)|(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	volatile uint8_t x186 = 3U;

	t46 = ((x185<=x186)|(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = -5;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 2058313;

	t47 = ((x189<=x190)|(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int8_t x196 = -1;

	t48 = ((x193<=x194)|(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 15U;
	int16_t x199 = -1;
	static int64_t x200 = INT64_MAX;

	t49 = ((x197<=x198)|(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MIN;

	t50 = ((x201<=x202)|(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static uint8_t x208 = 16U;
	volatile int32_t t51 = -475;

	t51 = ((x205<=x206)|(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = 31;
	int8_t x212 = -1;
	volatile int32_t t52 = 6460;

	t52 = ((x209<=x210)|(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	volatile uint32_t x214 = 737300452U;
	int32_t x215 = INT32_MIN;
	int32_t x216 = -29990;
	static int32_t t53 = -11;

	t53 = ((x213<=x214)|(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 30157LLU;
	int64_t x218 = -2951LL;
	int16_t x219 = -1;
	uint8_t x220 = 0U;
	volatile int32_t t54 = -339943632;

	t54 = ((x217<=x218)|(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -37756872;
	int16_t x223 = INT16_MIN;
	int32_t t55 = -13407435;

	t55 = ((x221<=x222)|(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -2;
	uint16_t x226 = 0U;
	int8_t x227 = 0;
	static volatile int16_t x228 = 10;
	volatile int32_t t56 = -244939231;

	t56 = ((x225<=x226)|(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int64_t x231 = 31994708825203560LL;
	static volatile int32_t t57 = 189;

	t57 = ((x229<=x230)|(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MAX;
	int16_t x234 = INT16_MAX;
	static int16_t x235 = INT16_MAX;
	static int8_t x236 = -1;
	volatile int32_t t58 = -1212640;

	t58 = ((x233<=x234)|(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 4576399909349LLU;
	static volatile int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int32_t t59 = -129604;

	t59 = ((x237<=x238)|(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = 775325886704LLU;
	static uint64_t x243 = UINT64_MAX;
	int64_t x244 = -958182LL;
	int32_t t60 = 4135237;

	t60 = ((x241<=x242)|(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MAX;
	uint32_t x248 = 7U;
	int32_t t61 = -2;

	t61 = ((x245<=x246)|(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x250 = UINT64_MAX;
	int16_t x251 = INT16_MIN;
	int32_t x252 = -328;

	t62 = ((x249<=x250)|(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 1;
	static int32_t x254 = 1;
	int64_t x255 = INT64_MAX;
	static volatile uint64_t x256 = 148345774112990LLU;

	t63 = ((x253<=x254)|(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x259 = INT8_MIN;
	static int16_t x260 = -1;
	int32_t t64 = 289074575;

	t64 = ((x257<=x258)|(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -42;
	uint64_t x263 = 1474LLU;
	static uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = -360622698;

	t65 = ((x261<=x262)|(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int16_t x266 = 7920;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 7843656858024328416LLU;
	volatile int32_t t66 = -1955242;

	t66 = ((x265<=x266)|(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x270 = 19;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = -1;
	int32_t t67 = 3;

	t67 = ((x269<=x270)|(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 6;
	volatile int8_t x274 = INT8_MIN;
	static int8_t x275 = INT8_MAX;
	int8_t x276 = 1;

	t68 = ((x273<=x274)|(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	static volatile int32_t t69 = 0;

	t69 = ((x277<=x278)|(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x282 = -1;
	int64_t x283 = INT64_MIN;
	static int32_t t70 = 10059340;

	t70 = ((x281<=x282)|(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 746642LLU;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -451;

	t71 = ((x285<=x286)|(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x290 = 112U;

	t72 = ((x289<=x290)|(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MAX;
	uint64_t x294 = UINT64_MAX;
	volatile uint8_t x295 = 102U;
	int64_t x296 = -69405LL;
	volatile int32_t t73 = -149418316;

	t73 = ((x293<=x294)|(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	uint32_t x300 = 407U;
	volatile int32_t t74 = -1;

	t74 = ((x297<=x298)|(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 0U;
	uint16_t x303 = 24769U;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 71;

	t75 = ((x301<=x302)|(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -4008;

	t76 = ((x305<=x306)|(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 1U;
	int64_t x311 = INT64_MIN;
	static int64_t x312 = -2125205305LL;
	static int32_t t77 = -3196;

	t77 = ((x309<=x310)|(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	int8_t x316 = 7;

	t78 = ((x313<=x314)|(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static uint16_t x318 = 2422U;
	static int32_t t79 = -1754;

	t79 = ((x317<=x318)|(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MAX;
	static int64_t x324 = -1LL;
	int32_t t80 = 12633164;

	t80 = ((x321<=x322)|(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -557;
	int16_t x326 = -1;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = 1012;

	t81 = ((x325<=x326)|(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = 422076U;
	int32_t x331 = -248;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = 39657;

	t82 = ((x329<=x330)|(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x335 = INT32_MIN;
	static int8_t x336 = 7;
	int32_t t83 = -1;

	t83 = ((x333<=x334)|(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 1;
	int32_t x338 = 2381;
	uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = 101593087LL;
	volatile int32_t t84 = -23;

	t84 = ((x337<=x338)|(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = 0;
	static int64_t x343 = -7875881680LL;
	static int8_t x344 = 0;
	static int32_t t85 = 380;

	t85 = ((x341<=x342)|(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 1U;
	static int16_t x346 = -14630;
	uint8_t x347 = 0U;
	uint32_t x348 = UINT32_MAX;
	static int32_t t86 = -20400767;

	t86 = ((x345<=x346)|(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 18U;
	static uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MAX;
	static int32_t t87 = 30228;

	t87 = ((x349<=x350)|(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	uint64_t x356 = UINT64_MAX;
	int32_t t88 = 0;

	t88 = ((x353<=x354)|(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = 152LLU;
	volatile uint8_t x358 = 10U;
	int16_t x359 = -66;
	int16_t x360 = 6;
	int32_t t89 = -195745;

	t89 = ((x357<=x358)|(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x362 = 1193U;
	int16_t x363 = 1;
	volatile int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 1929333;

	t90 = ((x361<=x362)|(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = UINT32_MAX;
	static int8_t x366 = -1;
	volatile uint64_t x367 = 38044051LLU;
	volatile int16_t x368 = INT16_MIN;
	int32_t t91 = 33;

	t91 = ((x365<=x366)|(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 20U;
	static int32_t x371 = -1;
	int32_t t92 = 4;

	t92 = ((x369<=x370)|(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 233357;
	static uint8_t x374 = UINT8_MAX;
	int16_t x375 = -6;

	t93 = ((x373<=x374)|(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -23;
	volatile int8_t x378 = INT8_MAX;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;

	t94 = ((x377<=x378)|(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 1;
	static volatile int32_t x382 = -1;
	int16_t x383 = -22;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 1;

	t95 = ((x381<=x382)|(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -1;
	static volatile uint16_t x387 = 347U;
	volatile int32_t t96 = 0;

	t96 = ((x385<=x386)|(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MAX;
	int64_t x390 = INT64_MIN;
	int16_t x391 = 6662;
	volatile int32_t t97 = 1;

	t97 = ((x389<=x390)|(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	int32_t x395 = 130770;

	t98 = ((x393<=x394)|(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static int8_t x398 = -1;
	static int64_t x399 = 57065LL;
	int32_t x400 = -37299;
	volatile int32_t t99 = 6646;

	t99 = ((x397<=x398)|(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

