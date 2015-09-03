#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
static uint8_t x7 = 0U;
int32_t x9 = INT32_MIN;
volatile int64_t x14 = -10116120787168415LL;
int16_t x15 = -1;
static uint64_t x16 = 578765331LLU;
static int16_t x17 = -1;
uint64_t x22 = UINT64_MAX;
int32_t x24 = -27339436;
uint64_t x28 = UINT64_MAX;
int16_t x31 = -76;
uint32_t x41 = 1822038932U;
int32_t x42 = INT32_MIN;
static volatile uint32_t t11 = 5U;
static int32_t x57 = INT32_MIN;
int16_t x61 = INT16_MAX;
volatile int32_t x67 = 26233284;
int64_t t15 = -815684302558889LL;
int8_t x70 = INT8_MIN;
uint64_t x72 = 8973169LLU;
uint32_t t16 = 790U;
int32_t x75 = INT32_MAX;
int16_t x86 = INT16_MIN;
int16_t x92 = -103;
int32_t x93 = INT32_MIN;
static volatile uint16_t x109 = UINT16_MAX;
int32_t x110 = 2;
int64_t x121 = INT64_MIN;
volatile int64_t t27 = 0LL;
static volatile int8_t x126 = -1;
int32_t t28 = -62;
uint32_t x129 = UINT32_MAX;
int64_t x131 = INT64_MAX;
volatile int64_t t29 = 3890193020228LL;
volatile int32_t x134 = INT32_MAX;
uint64_t x139 = UINT64_MAX;
int64_t x145 = -1LL;
uint32_t x146 = 2U;
static int8_t x147 = -1;
uint8_t x154 = UINT8_MAX;
int32_t t34 = 2394471;
int16_t x161 = 4;
volatile uint32_t t36 = 1708878578U;
static volatile uint64_t t37 = 639272567350140LLU;
int32_t x175 = INT32_MIN;
static volatile int32_t t40 = 255;
uint64_t x182 = UINT64_MAX;
int64_t x196 = -254816163157633LL;
uint32_t x200 = 4957U;
volatile uint8_t x212 = UINT8_MAX;
static int16_t x217 = 1;
int16_t x219 = INT16_MAX;
volatile int32_t x226 = INT32_MAX;
static uint16_t x241 = 100U;
volatile uint8_t x246 = 5U;
int32_t t55 = -292977;
int8_t x252 = INT8_MIN;
uint64_t x268 = 382807286LLU;
volatile uint32_t t59 = 2182U;
int8_t x274 = -1;
int32_t x286 = -1;
volatile int8_t x287 = -1;
uint32_t t63 = 1216425641U;
static int8_t x290 = -11;
int32_t x294 = -1658372;
volatile uint32_t x307 = 22321U;
static int16_t x308 = INT16_MIN;
int32_t t68 = 400;
int32_t x310 = -9470745;
static int32_t x317 = INT32_MAX;
int8_t x330 = INT8_MIN;
static volatile int32_t x331 = INT32_MIN;
volatile int32_t t74 = 1899;
static int8_t x335 = INT8_MIN;
volatile int32_t x344 = INT32_MIN;
int64_t x348 = INT64_MIN;
volatile int8_t x349 = 53;
uint8_t x353 = 0U;
int64_t x355 = INT64_MIN;
static int32_t x356 = -1;
static int64_t x367 = -1301900LL;
int8_t x374 = INT8_MIN;
int64_t x376 = -1LL;
int64_t x378 = INT64_MIN;
static uint32_t x382 = 1945408408U;
static volatile uint32_t t87 = 948U;
static volatile int16_t x387 = -698;
int32_t x390 = -1;
static int32_t x391 = INT32_MAX;
volatile uint32_t t89 = 6723U;
static int64_t x404 = -1LL;
uint8_t x407 = UINT8_MAX;
uint32_t x408 = 446U;
uint16_t x417 = UINT16_MAX;
uint32_t x418 = 65U;
static volatile uint32_t t95 = 31702815U;
volatile int64_t x429 = INT64_MIN;
int32_t x430 = -1;
int32_t x433 = 244;
int64_t x436 = INT64_MIN;


void f0(void) {
	volatile int32_t x1 = 1;
	volatile int16_t x2 = INT16_MIN;
	static uint8_t x3 = 20U;
	int32_t x4 = INT32_MIN;
	static int32_t t0 = -71784820;

	t0 = ((x1-x2)&(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 3082LLU;
	uint8_t x8 = UINT8_MAX;
	uint64_t t1 = 91202532392765924LLU;

	t1 = ((x5-x6)&(x7<=x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 31844U;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = UINT16_MAX;
	uint32_t t2 = 11985U;

	t2 = ((x9-x10)&(x11<=x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	static volatile int64_t t3 = 139323LL;

	t3 = ((x13-x14)&(x15<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint32_t x19 = 24U;
	volatile uint64_t x20 = 2954145136532714LLU;
	static int32_t t4 = -30642;

	t4 = ((x17-x18)&(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	static volatile uint64_t t5 = 251LLU;

	t5 = ((x21-x22)&(x23<=x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	static uint16_t x26 = 47U;
	uint64_t x27 = 54895105832LLU;
	static volatile int32_t t6 = -186871066;

	t6 = ((x25-x26)&(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	static int64_t x30 = 50937833113810LL;
	uint8_t x32 = 0U;
	volatile int64_t t7 = -61741943617LL;

	t7 = ((x29-x30)&(x31<=x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static uint8_t x34 = UINT8_MAX;
	int64_t x35 = -5489699LL;
	int32_t x36 = -1;
	static int32_t t8 = 507;

	t8 = ((x33-x34)&(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x43 = -1;
	static uint8_t x44 = 7U;
	volatile uint32_t t9 = 13084648U;

	t9 = ((x41-x42)&(x43<=x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	uint32_t x47 = 63239U;
	static int32_t x48 = -1;
	int32_t t10 = 3545;

	t10 = ((x45-x46)&(x47<=x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1635;
	uint32_t x50 = 1422U;
	static int8_t x51 = -1;
	static uint64_t x52 = UINT64_MAX;

	t11 = ((x49-x50)&(x51<=x52));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 50U;
	uint64_t x54 = 1LLU;
	int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MIN;
	volatile uint64_t t12 = 505LLU;

	t12 = ((x53-x54)&(x55<=x56));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x58 = INT32_MIN;
	static volatile int32_t x59 = -4;
	uint32_t x60 = 422U;
	int32_t t13 = -448885;

	t13 = ((x57-x58)&(x59<=x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = -3989164122926164774LL;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = -1;
	volatile int64_t t14 = 28648381186373938LL;

	t14 = ((x61-x62)&(x63<=x64));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x65 = -1;
	int64_t x66 = 62449907491381505LL;
	uint8_t x68 = UINT8_MAX;

	t15 = ((x65-x66)&(x67<=x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 20212U;
	uint8_t x71 = UINT8_MAX;

	t16 = ((x69-x70)&(x71<=x72));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -40534406;
	int64_t x74 = 2649698960863444407LL;
	int32_t x76 = INT32_MIN;
	volatile int64_t t17 = -77009181220LL;

	t17 = ((x73-x74)&(x75<=x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 0U;
	uint8_t x78 = UINT8_MAX;
	static int32_t x79 = INT32_MIN;
	volatile int16_t x80 = 1857;
	volatile int32_t t18 = 29759581;

	t18 = ((x77-x78)&(x79<=x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	static uint8_t x87 = UINT8_MAX;
	static int16_t x88 = 126;
	volatile int32_t t19 = -42;

	t19 = ((x85-x86)&(x87<=x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 22U;
	int16_t x90 = INT16_MAX;
	int16_t x91 = 11;
	int32_t t20 = -1532;

	t20 = ((x89-x90)&(x91<=x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x94 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	uint8_t x96 = 0U;
	volatile int32_t t21 = -1891581;

	t21 = ((x93-x94)&(x95<=x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = 3;
	int8_t x98 = -2;
	int16_t x99 = INT16_MAX;
	int8_t x100 = -1;
	int32_t t22 = -145662;

	t22 = ((x97-x98)&(x99<=x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = 0U;
	static uint8_t x103 = UINT8_MAX;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t23 = 7;

	t23 = ((x101-x102)&(x103<=x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x111 = INT64_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t24 = -38789380;

	t24 = ((x109-x110)&(x111<=x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	int8_t x114 = 7;
	int16_t x115 = INT16_MAX;
	volatile int32_t x116 = INT32_MAX;
	int32_t t25 = -3241136;

	t25 = ((x113-x114)&(x115<=x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 150671420LLU;
	volatile int64_t x118 = 657LL;
	int16_t x119 = 11158;
	volatile int32_t x120 = 0;
	uint64_t t26 = 92LLU;

	t26 = ((x117-x118)&(x119<=x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = 1;
	int64_t x124 = INT64_MIN;

	t27 = ((x121-x122)&(x123<=x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 3159;
	int64_t x127 = 423088071004264LL;
	static uint64_t x128 = 132724LLU;

	t28 = ((x125-x126)&(x127<=x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x130 = INT64_MAX;
	int32_t x132 = INT32_MAX;

	t29 = ((x129-x130)&(x131<=x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x133 = 1;
	uint16_t x135 = 5U;
	volatile uint64_t x136 = UINT64_MAX;
	int32_t t30 = -37936260;

	t30 = ((x133-x134)&(x135<=x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -2;
	int16_t x138 = INT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t31 = -570;

	t31 = ((x137-x138)&(x139<=x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x148 = INT8_MAX;
	static int64_t t32 = -5395988412LL;

	t32 = ((x145-x146)&(x147<=x148));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x149 = UINT64_MAX;
	volatile int32_t x150 = INT32_MAX;
	uint32_t x151 = 2064713702U;
	int32_t x152 = 290803028;
	static uint64_t t33 = 123697LLU;

	t33 = ((x149-x150)&(x151<=x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -51;
	uint16_t x155 = 0U;
	int32_t x156 = -1;

	t34 = ((x153-x154)&(x155<=x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -11315653601481645LL;
	int64_t x158 = 236325LL;
	int8_t x159 = INT8_MIN;
	volatile int16_t x160 = -1;
	volatile int64_t t35 = -134304232465899915LL;

	t35 = ((x157-x158)&(x159<=x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x162 = UINT32_MAX;
	static int16_t x163 = INT16_MIN;
	uint64_t x164 = 13191067568663LLU;

	t36 = ((x161-x162)&(x163<=x164));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = INT8_MAX;
	uint64_t x166 = 2568LLU;
	volatile int32_t x167 = INT32_MIN;
	volatile int8_t x168 = -6;

	t37 = ((x165-x166)&(x167<=x168));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = -3686582444235653LL;
	volatile uint32_t x170 = UINT32_MAX;
	uint64_t x171 = 1032643450592LLU;
	volatile uint64_t x172 = UINT64_MAX;
	volatile int64_t t38 = 14329948071851572LL;

	t38 = ((x169-x170)&(x171<=x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 70815760823LLU;
	volatile int16_t x174 = 0;
	static uint8_t x176 = 69U;
	volatile uint64_t t39 = 283408160353176299LLU;

	t39 = ((x173-x174)&(x175<=x176));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = 20;
	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MAX;
	volatile uint32_t x180 = UINT32_MAX;

	t40 = ((x177-x178)&(x179<=x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x183 = 8366854LLU;
	int32_t x184 = -715114;
	static volatile uint64_t t41 = 62412LLU;

	t41 = ((x181-x182)&(x183<=x184));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x185 = 3528369U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MIN;
	static int32_t x188 = INT32_MIN;
	uint32_t t42 = 48715U;

	t42 = ((x185-x186)&(x187<=x188));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = 8540769811090LLU;
	int32_t x190 = INT32_MIN;
	static uint32_t x191 = 56424279U;
	volatile int32_t x192 = 539;
	volatile uint64_t t43 = 1738LLU;

	t43 = ((x189-x190)&(x191<=x192));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 0U;
	static int64_t x194 = -1LL;
	static int8_t x195 = INT8_MIN;
	int64_t t44 = -166984213237LL;

	t44 = ((x193-x194)&(x195<=x196));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x197 = 690U;
	int8_t x198 = 28;
	uint8_t x199 = 44U;
	int32_t t45 = -5001;

	t45 = ((x197-x198)&(x199<=x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	static int32_t x202 = INT32_MIN;
	uint8_t x203 = 18U;
	int8_t x204 = 40;
	uint64_t t46 = 854LLU;

	t46 = ((x201-x202)&(x203<=x204));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 7088333602195890LLU;
	static int8_t x210 = INT8_MIN;
	uint8_t x211 = 43U;
	static uint64_t t47 = 1LLU;

	t47 = ((x209-x210)&(x211<=x212));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x213 = -50;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 2U;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t48 = 147700885;

	t48 = ((x213-x214)&(x215<=x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x218 = INT8_MAX;
	int8_t x220 = -1;
	int32_t t49 = -1;

	t49 = ((x217-x218)&(x219<=x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	int64_t x223 = -1LL;
	static int64_t x224 = INT64_MIN;
	volatile int32_t t50 = 1807379;

	t50 = ((x221-x222)&(x223<=x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = -1LL;
	volatile int8_t x227 = -1;
	volatile int64_t x228 = 0LL;
	static int64_t t51 = -3969LL;

	t51 = ((x225-x226)&(x227<=x228));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -1;
	volatile uint32_t x234 = 54117U;
	volatile int32_t x235 = INT32_MIN;
	int32_t x236 = 3197661;
	volatile uint32_t t52 = 298U;

	t52 = ((x233-x234)&(x235<=x236));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = 11202023U;
	int32_t x238 = -1;
	volatile int64_t x239 = 1437586LL;
	volatile uint64_t x240 = UINT64_MAX;
	volatile uint32_t t53 = 23704068U;

	t53 = ((x237-x238)&(x239<=x240));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x242 = -15;
	uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t54 = 34335204;

	t54 = ((x241-x242)&(x243<=x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = INT32_MAX;
	volatile int16_t x247 = -1;
	int8_t x248 = INT8_MIN;

	t55 = ((x245-x246)&(x247<=x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x249 = -1LL;
	static uint8_t x250 = 4U;
	uint64_t x251 = 607LLU;
	volatile int64_t t56 = 8065094128LL;

	t56 = ((x249-x250)&(x251<=x252));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x253 = 8744578449743054LLU;
	static volatile uint64_t x254 = 1301703670125347LLU;
	uint8_t x255 = 10U;
	static int64_t x256 = INT64_MIN;
	static volatile uint64_t t57 = 30LLU;

	t57 = ((x253-x254)&(x255<=x256));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -1;
	int8_t x258 = 0;
	volatile int64_t x259 = INT64_MIN;
	static uint16_t x260 = 7U;
	int32_t t58 = -1115;

	t58 = ((x257-x258)&(x259<=x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x265 = UINT8_MAX;
	uint32_t x266 = 4U;
	uint32_t x267 = UINT32_MAX;

	t59 = ((x265-x266)&(x267<=x268));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x271 = -109864463896875480LL;
	int16_t x272 = -1;
	volatile int64_t t60 = 20LL;

	t60 = ((x269-x270)&(x271<=x272));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = UINT8_MAX;
	static uint32_t x275 = 62699869U;
	uint8_t x276 = 107U;
	volatile int32_t t61 = 1656;

	t61 = ((x273-x274)&(x275<=x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x277 = -8;
	uint32_t x278 = 21600U;
	uint16_t x279 = 1U;
	uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t62 = 8038U;

	t62 = ((x277-x278)&(x279<=x280));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = 413173U;
	volatile int8_t x288 = -19;

	t63 = ((x285-x286)&(x287<=x288));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	int64_t x291 = -1LL;
	int64_t x292 = INT64_MIN;
	int64_t t64 = 287502LL;

	t64 = ((x289-x290)&(x291<=x292));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = INT8_MIN;
	static int32_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	static int32_t t65 = -8310;

	t65 = ((x293-x294)&(x295<=x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = -1LL;
	int32_t x299 = -1;
	volatile int16_t x300 = -1;
	volatile int64_t t66 = 1435213038LL;

	t66 = ((x297-x298)&(x299<=x300));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -1;
	uint8_t x302 = 18U;
	int32_t x303 = 0;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t67 = 1;

	t67 = ((x301-x302)&(x303<=x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -5;
	uint8_t x306 = 57U;

	t68 = ((x305-x306)&(x307<=x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x311 = 112836339054645447LLU;
	static int32_t x312 = INT32_MAX;
	volatile int64_t t69 = 11684248LL;

	t69 = ((x309-x310)&(x311<=x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x313 = -1;
	int64_t x314 = 10397765LL;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = UINT8_MAX;
	volatile int64_t t70 = -7311805LL;

	t70 = ((x313-x314)&(x315<=x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 5895U;
	volatile int16_t x320 = -1;
	static volatile uint32_t t71 = 5U;

	t71 = ((x317-x318)&(x319<=x320));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x321 = INT16_MIN;
	int64_t x322 = -176LL;
	int16_t x323 = INT16_MAX;
	volatile uint16_t x324 = UINT16_MAX;
	int64_t t72 = -478873552804418LL;

	t72 = ((x321-x322)&(x323<=x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -2858;
	int8_t x326 = INT8_MIN;
	int32_t x327 = -1;
	static int32_t x328 = -7;
	int32_t t73 = 8788268;

	t73 = ((x325-x326)&(x327<=x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = 28;
	int8_t x332 = INT8_MAX;

	t74 = ((x329-x330)&(x331<=x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x333 = 153U;
	uint64_t x334 = UINT64_MAX;
	static volatile uint8_t x336 = 1U;
	volatile uint64_t t75 = 310553LLU;

	t75 = ((x333-x334)&(x335<=x336));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = 898750549;
	static int64_t x338 = -66611853877LL;
	int8_t x339 = 1;
	uint16_t x340 = 3U;
	volatile int64_t t76 = -240108LL;

	t76 = ((x337-x338)&(x339<=x340));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MAX;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MIN;
	uint64_t t77 = 1597916506LLU;

	t77 = ((x341-x342)&(x343<=x344));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x345 = INT32_MAX;
	uint16_t x346 = 42U;
	int8_t x347 = 0;
	volatile int32_t t78 = -74106;

	t78 = ((x345-x346)&(x347<=x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x350 = 34370466558LL;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	static int64_t t79 = -113LL;

	t79 = ((x349-x350)&(x351<=x352));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x354 = 22;
	static int32_t t80 = 1;

	t80 = ((x353-x354)&(x355<=x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = 760603LL;
	int8_t x358 = -1;
	volatile int64_t x359 = INT64_MIN;
	static int16_t x360 = INT16_MIN;
	int64_t t81 = -234652992LL;

	t81 = ((x357-x358)&(x359<=x360));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x361 = 36U;
	uint32_t x362 = 1U;
	static int32_t x363 = -1;
	int32_t x364 = INT32_MIN;
	static volatile uint32_t t82 = 119640751U;

	t82 = ((x361-x362)&(x363<=x364));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x365 = INT8_MIN;
	int8_t x366 = -1;
	int16_t x368 = 0;
	int32_t t83 = 2414570;

	t83 = ((x365-x366)&(x367<=x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x369 = 340546971LL;
	int64_t x370 = 4641133784LL;
	int8_t x371 = -1;
	uint64_t x372 = 1405563370049555LLU;
	int64_t t84 = -1653670438277LL;

	t84 = ((x369-x370)&(x371<=x372));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -1;
	volatile int32_t x375 = 1;
	volatile int32_t t85 = -191955097;

	t85 = ((x373-x374)&(x375<=x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x377 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;
	static int8_t x380 = -29;
	volatile int64_t t86 = -549414707LL;

	t86 = ((x377-x378)&(x379<=x380));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x381 = UINT32_MAX;
	static int32_t x383 = -127;
	uint32_t x384 = UINT32_MAX;

	t87 = ((x381-x382)&(x383<=x384));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x386 = -1LL;
	int32_t x388 = -1;
	static int64_t t88 = -83LL;

	t88 = ((x385-x386)&(x387<=x388));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = 106U;
	static int16_t x392 = INT16_MIN;

	t89 = ((x389-x390)&(x391<=x392));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x393 = 810U;
	int32_t x394 = INT32_MAX;
	static int32_t x395 = 40;
	uint8_t x396 = 67U;
	volatile int32_t t90 = 14854554;

	t90 = ((x393-x394)&(x395<=x396));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x401 = 0U;
	int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MIN;
	static int64_t t91 = -296LL;

	t91 = ((x401-x402)&(x403<=x404));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = 9U;
	int16_t x406 = -157;
	static volatile uint32_t t92 = 3848U;

	t92 = ((x405-x406)&(x407<=x408));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x409 = -70;
	volatile int32_t x410 = -311774236;
	int16_t x411 = INT16_MIN;
	int16_t x412 = 3807;
	volatile int32_t t93 = -1015398223;

	t93 = ((x409-x410)&(x411<=x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x413 = 372733023771LLU;
	int32_t x414 = -24;
	int8_t x415 = -1;
	int16_t x416 = INT16_MAX;
	volatile uint64_t t94 = 935652107685LLU;

	t94 = ((x413-x414)&(x415<=x416));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x419 = INT8_MAX;
	static int64_t x420 = -49797252145LL;

	t95 = ((x417-x418)&(x419<=x420));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = -16689429580691LL;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = -1;
	volatile int64_t t96 = 30441917533LL;

	t96 = ((x421-x422)&(x423<=x424));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x425 = -1;
	uint64_t x426 = UINT64_MAX;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MAX;
	uint64_t t97 = 15571LLU;

	t97 = ((x425-x426)&(x427<=x428));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x431 = 716185122281LL;
	int64_t x432 = -62LL;
	volatile int64_t t98 = 2032824457161597669LL;

	t98 = ((x429-x430)&(x431<=x432));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x434 = UINT64_MAX;
	uint32_t x435 = 14U;
	volatile uint64_t t99 = 136048458567LLU;

	t99 = ((x433-x434)&(x435<=x436));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

