#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
volatile uint32_t t0 = 16178U;
static int64_t x10 = INT64_MIN;
volatile uint32_t x12 = 1273584155U;
volatile int64_t t3 = -1232383889LL;
int64_t x20 = INT64_MIN;
int32_t t4 = -33104596;
volatile int32_t t5 = -29142;
uint16_t x37 = 7669U;
int16_t x42 = -1;
volatile int32_t x43 = INT32_MIN;
static volatile int64_t x44 = INT64_MIN;
static volatile uint64_t t10 = 2482932378762LLU;
uint64_t x52 = UINT64_MAX;
int32_t t13 = 23173211;
uint32_t x59 = 336543U;
volatile int32_t x60 = INT32_MAX;
uint64_t x61 = UINT64_MAX;
static uint32_t x62 = 9475U;
static volatile int8_t x65 = INT8_MIN;
volatile int16_t x75 = INT16_MIN;
int8_t x76 = -25;
volatile int64_t t19 = 11792LL;
volatile int64_t x84 = INT64_MAX;
uint8_t x85 = 42U;
uint8_t x89 = UINT8_MAX;
static volatile int32_t t25 = 13805;
uint64_t x110 = 21LLU;
volatile int8_t x115 = INT8_MIN;
volatile int32_t t28 = 362;
volatile uint32_t x118 = 8248005U;
int64_t x124 = -1LL;
static int32_t t30 = 1;
int8_t x131 = -16;
volatile int32_t x133 = INT32_MIN;
int32_t x142 = -3039585;
volatile int64_t x144 = INT64_MIN;
int8_t x146 = INT8_MIN;
volatile uint64_t t37 = 2485573973248LLU;
static uint32_t x153 = 41267U;
volatile int32_t x155 = -1;
int32_t x162 = 145;
int32_t x165 = 15872;
uint64_t x166 = 53241LLU;
int64_t x181 = -1LL;
int16_t x183 = INT16_MIN;
int32_t x184 = INT32_MIN;
uint16_t x186 = 5338U;
int8_t x190 = 30;
static volatile int16_t x195 = 5;
volatile int64_t x206 = INT64_MIN;
uint8_t x218 = 119U;
int64_t x220 = -1LL;
int16_t x222 = INT16_MAX;
int64_t x225 = INT64_MIN;
int8_t x229 = -1;
volatile int32_t x240 = INT32_MIN;
int8_t x243 = INT8_MIN;
static int32_t x244 = INT32_MIN;
int64_t t61 = -6811LL;
static volatile int8_t x250 = INT8_MIN;
int16_t x252 = INT16_MIN;
int32_t t63 = 1822455;
volatile int64_t x258 = INT64_MAX;
volatile uint16_t x259 = 10U;
static int8_t x263 = -1;
static uint32_t t65 = UINT32_MAX;
volatile int8_t x266 = -1;
volatile int32_t t66 = 974912;
uint8_t x269 = UINT8_MAX;
volatile uint16_t x272 = 12632U;
uint8_t x273 = 0U;
volatile int32_t t68 = -61;
volatile int32_t x281 = INT32_MIN;
int8_t x285 = 0;
static int64_t x287 = -1LL;
volatile int32_t t71 = -215;
int16_t x305 = -2700;
static volatile int32_t t76 = 62654;
uint16_t x309 = 48U;
int8_t x311 = 62;
volatile int16_t x316 = 18;
static volatile int32_t t78 = -530477494;
uint8_t x319 = 0U;
static uint32_t t80 = 14161U;
volatile int32_t x325 = 34529793;
int64_t x338 = INT64_MIN;
uint16_t x339 = 0U;
volatile uint16_t x374 = 3U;
int16_t x375 = -1;
int8_t x384 = 0;
static int8_t x389 = 13;
int8_t x396 = -6;
uint8_t x399 = 19U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	static int16_t x4 = INT16_MIN;

	t0 = ((x1/x2)-(x3<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 762U;
	static volatile uint8_t x7 = 32U;
	int32_t x8 = -1;
	int32_t t1 = -1;

	t1 = ((x5/x6)-(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1969U;
	volatile uint8_t x11 = UINT8_MAX;
	volatile int64_t t2 = -2158903140306LL;

	t2 = ((x9/x10)-(x11<x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 6U;
	int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MIN;
	volatile uint64_t x16 = 1596LLU;

	t3 = ((x13/x14)-(x15<x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	volatile uint8_t x18 = UINT8_MAX;
	int8_t x19 = INT8_MIN;

	t4 = ((x17/x18)-(x19<x20));

	if (t4 != 257) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int8_t x22 = -22;
	volatile int8_t x23 = 0;
	int32_t x24 = INT32_MIN;

	t5 = ((x21/x22)-(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 26U;
	static uint16_t x26 = UINT16_MAX;
	static int16_t x27 = -102;
	volatile uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -909018121;

	t6 = ((x25/x26)-(x27<x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	int32_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int32_t x32 = -1;
	volatile int32_t t7 = -6683466;

	t7 = ((x29/x30)-(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint64_t x34 = 13797684761510860LLU;
	int16_t x35 = 2829;
	volatile int16_t x36 = INT16_MIN;
	volatile uint64_t t8 = 2092275613LLU;

	t8 = ((x33/x34)-(x35<x36));

	if (t8 != 668LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = 1;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 30;

	t9 = ((x37/x38)-(x39<x40));

	if (t9 != 7669) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;

	t10 = ((x41/x42)-(x43<x44));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint8_t x46 = UINT8_MAX;
	uint8_t x47 = 2U;
	int32_t x48 = -56891;
	volatile int64_t t11 = 1181LL;

	t11 = ((x45/x46)-(x47<x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = 1030;
	static uint64_t t12 = UINT64_MAX;

	t12 = ((x49/x50)-(x51<x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 5;
	int32_t x54 = INT32_MIN;
	int32_t x55 = 47569826;
	int64_t x56 = INT64_MAX;

	t13 = ((x53/x54)-(x55<x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = 518368658408217LL;
	int64_t t14 = 39618250099LL;

	t14 = ((x57/x58)-(x59<x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = UINT8_MAX;
	volatile uint64_t t15 = 201317LLU;

	t15 = ((x61/x62)-(x63<x64));

	if (t15 != 1946885918069608LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 4U;
	volatile int8_t x67 = INT8_MAX;
	volatile uint32_t x68 = UINT32_MAX;
	int32_t t16 = -3410;

	t16 = ((x65/x66)-(x67<x68));

	if (t16 != -33) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 630U;
	uint64_t x70 = 30449LLU;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = 718;
	uint64_t t17 = 7LLU;

	t17 = ((x69/x70)-(x71<x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MAX;
	volatile int32_t t18 = -665150;

	t18 = ((x73/x74)-(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MIN;
	static int64_t x78 = 789LL;
	volatile uint64_t x79 = UINT64_MAX;
	int32_t x80 = -1;

	t19 = ((x77/x78)-(x79<x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int32_t x82 = -366;
	static int8_t x83 = INT8_MAX;
	int64_t t20 = -220797422LL;

	t20 = ((x81/x82)-(x83<x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 6206659U;
	volatile int8_t x87 = -23;
	volatile uint8_t x88 = 6U;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x85/x86)-(x87<x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = INT16_MIN;
	volatile int32_t x91 = -1;
	static int32_t x92 = 194239;
	int32_t t22 = -668761502;

	t22 = ((x89/x90)-(x91<x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 3U;
	volatile uint8_t x94 = UINT8_MAX;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = 292311;

	t23 = ((x93/x94)-(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = 32899819;

	t24 = ((x97/x98)-(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = UINT16_MAX;
	static int64_t x104 = -1LL;

	t25 = ((x101/x102)-(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -44;
	int64_t x106 = 20825661LL;
	volatile int32_t x107 = INT32_MAX;
	static int8_t x108 = INT8_MIN;
	static volatile int64_t t26 = 14LL;

	t26 = ((x105/x106)-(x107<x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MAX;
	int64_t x111 = 3LL;
	uint16_t x112 = 5173U;
	uint64_t t27 = 10LLU;

	t27 = ((x109/x110)-(x111<x112));

	if (t27 != 1559LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint8_t x114 = 45U;
	int64_t x116 = 7645LL;

	t28 = ((x113/x114)-(x115<x116));

	if (t28 != -729) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 65733258755744LLU;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MAX;
	uint64_t t29 = 5367LLU;

	t29 = ((x117/x118)-(x119<x120));

	if (t29 != 7969593LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	int8_t x123 = -1;

	t30 = ((x121/x122)-(x123<x124));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile uint64_t x126 = 8708855LLU;
	static int32_t x127 = INT32_MAX;
	static int8_t x128 = INT8_MAX;
	volatile uint64_t t31 = 968573926594097LLU;

	t31 = ((x125/x126)-(x127<x128));

	if (t31 != 2118159513932LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 35;
	int32_t x130 = 102996;
	static volatile int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -26949;

	t32 = ((x129/x130)-(x131<x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MIN;
	volatile uint32_t x136 = 429144735U;
	static volatile int32_t t33 = -395677;

	t33 = ((x133/x134)-(x135<x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static uint16_t x138 = 13520U;
	uint16_t x139 = 446U;
	int64_t x140 = INT64_MAX;
	volatile uint32_t t34 = 158U;

	t34 = ((x137/x138)-(x139<x140));

	if (t34 != 317674U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	static uint16_t x143 = 4U;
	volatile int64_t t35 = 9375226647351LL;

	t35 = ((x141/x142)-(x143<x144));

	if (t35 != 3034418197502LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x147 = 1177U;
	int64_t x148 = INT64_MIN;
	int32_t t36 = 110939;

	t36 = ((x145/x146)-(x147<x148));

	if (t36 != 16777216) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 3U;
	uint64_t x150 = 7478100LLU;
	static int16_t x151 = -334;
	uint64_t x152 = 70885880LLU;

	t37 = ((x149/x150)-(x151<x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = INT8_MAX;
	int32_t x156 = INT32_MAX;
	uint32_t t38 = 442523U;

	t38 = ((x153/x154)-(x155<x156));

	if (t38 != 323U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	static volatile uint8_t x158 = 66U;
	int16_t x159 = -1;
	int32_t x160 = 230;
	static int32_t t39 = -115;

	t39 = ((x157/x158)-(x159<x160));

	if (t39 != -497) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -971409;
	int16_t x163 = 46;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -44072;

	t40 = ((x161/x162)-(x163<x164));

	if (t40 != -6700) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x167 = INT8_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = ((x165/x166)-(x167<x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -413399LL;
	static int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	volatile int8_t x172 = -1;
	int64_t t42 = 2123673536465065425LL;

	t42 = ((x169/x170)-(x171<x172));

	if (t42 != 11LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 40846840U;
	uint64_t x174 = 47LLU;
	int64_t x175 = -1265249947LL;
	volatile int8_t x176 = 3;
	static volatile uint64_t t43 = 18625367186075044LLU;

	t43 = ((x173/x174)-(x175<x176));

	if (t43 != 869080LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = 136355;
	uint64_t x179 = 880613LLU;
	int8_t x180 = 1;
	int32_t t44 = 182;

	t44 = ((x177/x178)-(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = UINT64_MAX;
	volatile uint64_t t45 = 2211420LLU;

	t45 = ((x181/x182)-(x183<x184));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 0;
	static uint16_t x187 = 0U;
	uint32_t x188 = 14338U;
	int32_t t46 = -13782;

	t46 = ((x185/x186)-(x187<x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 0U;
	volatile uint16_t x191 = 191U;
	int64_t x192 = 175074984456166994LL;
	static int32_t t47 = 11867144;

	t47 = ((x189/x190)-(x191<x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = -69LL;
	int16_t x196 = INT16_MIN;
	volatile int64_t t48 = -534445918373LL;

	t48 = ((x193/x194)-(x195<x196));

	if (t48 != 133672058505141678LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int64_t x198 = INT64_MAX;
	static volatile int8_t x199 = -1;
	volatile int32_t x200 = INT32_MIN;
	int64_t t49 = 865LL;

	t49 = ((x197/x198)-(x199<x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -372;
	uint32_t x204 = 1490613U;
	volatile int64_t t50 = -5835773634LL;

	t50 = ((x201/x202)-(x203<x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 97U;
	int16_t x207 = INT16_MIN;
	int64_t x208 = 2756LL;
	int64_t t51 = 1LL;

	t51 = ((x205/x206)-(x207<x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 112U;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = 61U;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x209/x210)-(x211<x212));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MIN;
	int8_t x215 = -5;
	int32_t x216 = 82084;
	int32_t t53 = 26348657;

	t53 = ((x213/x214)-(x215<x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	static volatile int32_t t54 = 111275534;

	t54 = ((x217/x218)-(x219<x220));

	if (t54 != -18046082) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 6147373829031048LLU;
	uint8_t x223 = 2U;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t55 = 230LLU;

	t55 = ((x221/x222)-(x223<x224));

	if (t55 != 187608686453LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = 62;
	volatile int64_t x227 = INT64_MIN;
	uint8_t x228 = UINT8_MAX;
	static volatile int64_t t56 = -1LL;

	t56 = ((x225/x226)-(x227<x228));

	if (t56 != -148764065110560901LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = INT32_MAX;
	static int16_t x231 = -1;
	int32_t x232 = -1119;
	int32_t t57 = -213;

	t57 = ((x229/x230)-(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	int32_t x234 = -1;
	int32_t x235 = INT32_MAX;
	volatile int8_t x236 = -1;
	static volatile int32_t t58 = -193;

	t58 = ((x233/x234)-(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -3630;
	int64_t x238 = -333178471261LL;
	int8_t x239 = INT8_MIN;
	volatile int64_t t59 = -1LL;

	t59 = ((x237/x238)-(x239<x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	static int8_t x242 = 11;
	volatile int64_t t60 = 55716LL;

	t60 = ((x241/x242)-(x243<x244));

	if (t60 != 838488366986797800LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;

	t61 = ((x245/x246)-(x247<x248));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 160;
	static uint8_t x251 = 7U;
	int32_t t62 = 4918;

	t62 = ((x249/x250)-(x251<x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	static uint8_t x254 = UINT8_MAX;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = 166;

	t63 = ((x253/x254)-(x255<x256));

	if (t63 != 8421504) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MAX;
	static uint16_t x260 = UINT16_MAX;
	volatile int64_t t64 = -22353877051193964LL;

	t64 = ((x257/x258)-(x259<x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 476510634U;
	static int16_t x262 = INT16_MIN;
	int64_t x264 = INT64_MAX;

	t65 = ((x261/x262)-(x263<x264));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;

	t66 = ((x265/x266)-(x267<x268));

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MAX;
	static int32_t x271 = INT32_MIN;
	int32_t t67 = 610653;

	t67 = ((x269/x270)-(x271<x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int16_t x276 = 175;

	t68 = ((x273/x274)-(x275<x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -126444;
	int16_t x278 = INT16_MAX;
	uint8_t x279 = 10U;
	static volatile int16_t x280 = INT16_MAX;
	int32_t t69 = 419;

	t69 = ((x277/x278)-(x279<x280));

	if (t69 != -4) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	int8_t x283 = 0;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = -3;

	t70 = ((x281/x282)-(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MAX;
	volatile uint32_t x288 = 405U;

	t71 = ((x285/x286)-(x287<x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 53U;
	static uint64_t x290 = 1181LLU;
	static int64_t x291 = 977796295LL;
	int16_t x292 = -1;
	static uint64_t t72 = 5LLU;

	t72 = ((x289/x290)-(x291<x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 7;
	volatile int64_t x294 = -1LL;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 63U;
	static int64_t t73 = 442343346956721195LL;

	t73 = ((x293/x294)-(x295<x296));

	if (t73 != -7LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	volatile uint8_t x299 = UINT8_MAX;
	uint8_t x300 = 1U;
	static volatile int64_t t74 = 814267368LL;

	t74 = ((x297/x298)-(x299<x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MAX;
	int64_t x302 = 1849212LL;
	uint32_t x303 = 1410418U;
	uint8_t x304 = 0U;
	int64_t t75 = -1337298397095LL;

	t75 = ((x301/x302)-(x303<x304));

	if (t75 != 4987731010211LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x306 = INT32_MIN;
	static uint16_t x307 = 78U;
	int16_t x308 = INT16_MAX;

	t76 = ((x305/x306)-(x307<x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MAX;
	uint16_t x312 = 4797U;
	int32_t t77 = -1016;

	t77 = ((x309/x310)-(x311<x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 22U;
	static volatile int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;

	t78 = ((x313/x314)-(x315<x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 50244U;
	int32_t x318 = -1;
	static uint64_t x320 = 22206LLU;
	uint32_t t79 = UINT32_MAX;

	t79 = ((x317/x318)-(x319<x320));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 116746861U;
	int16_t x322 = -1;
	volatile int32_t x323 = 1049;
	static int8_t x324 = -1;

	t80 = ((x321/x322)-(x323<x324));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = 613396;
	int32_t x327 = -1;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = -1441649;

	t81 = ((x325/x326)-(x327<x328));

	if (t81 != 55) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 2U;
	int32_t x330 = 3;
	uint64_t x331 = 11686712383559LLU;
	int64_t x332 = -4216885LL;
	volatile int32_t t82 = 240790;

	t82 = ((x329/x330)-(x331<x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 8147841688011450LLU;
	volatile uint8_t x334 = UINT8_MAX;
	int32_t x335 = INT32_MAX;
	static uint32_t x336 = 13788161U;
	volatile uint64_t t83 = 5889898823813792519LLU;

	t83 = ((x333/x334)-(x335<x336));

	if (t83 != 31952320345142LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int16_t x340 = INT16_MIN;
	volatile int64_t t84 = -197470560LL;

	t84 = ((x337/x338)-(x339<x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 1039330367;
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = 6;

	t85 = ((x341/x342)-(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -651LL;
	int32_t x346 = -1;
	int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	static int64_t t86 = 19393656LL;

	t86 = ((x345/x346)-(x347<x348));

	if (t86 != 651LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 3;
	int8_t x350 = -3;
	int8_t x351 = -1;
	uint16_t x352 = 49U;
	volatile int32_t t87 = 199813;

	t87 = ((x349/x350)-(x351<x352));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 1LLU;
	int16_t x356 = INT16_MAX;
	int64_t t88 = 1686322LL;

	t88 = ((x353/x354)-(x355<x356));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 7U;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MIN;
	uint8_t x360 = 3U;
	int32_t t89 = 0;

	t89 = ((x357/x358)-(x359<x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	static volatile int32_t x362 = INT32_MIN;
	volatile int16_t x363 = INT16_MAX;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -2510567;

	t90 = ((x361/x362)-(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -3827;
	volatile uint64_t x366 = 333759LLU;
	int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	volatile uint64_t t91 = 1469547530666778418LLU;

	t91 = ((x365/x366)-(x367<x368));

	if (t91 != 55269652874407LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 980521614564087LLU;
	volatile int16_t x370 = INT16_MIN;
	uint64_t x371 = UINT64_MAX;
	uint8_t x372 = UINT8_MAX;
	uint64_t t92 = 513819369844960LLU;

	t92 = ((x369/x370)-(x371<x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	static volatile int8_t x376 = -1;
	int32_t t93 = 30;

	t93 = ((x373/x374)-(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile uint8_t x378 = 43U;
	int64_t x379 = 1796592406223LL;
	static int8_t x380 = INT8_MIN;
	static int32_t t94 = -845;

	t94 = ((x377/x378)-(x379<x380));

	if (t94 != -762) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MAX;
	uint8_t x382 = 1U;
	int8_t x383 = INT8_MIN;
	int32_t t95 = -2527;

	t95 = ((x381/x382)-(x383<x384));

	if (t95 != 126) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = 170373;
	static uint16_t x387 = UINT16_MAX;
	int8_t x388 = -1;
	volatile int32_t t96 = -531291394;

	t96 = ((x385/x386)-(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x390 = 2316215LLU;
	static volatile int32_t x391 = INT32_MAX;
	static int32_t x392 = 95;
	uint64_t t97 = 9503224114949164LLU;

	t97 = ((x389/x390)-(x391<x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 0;
	int32_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	int32_t t98 = -76701;

	t98 = ((x393/x394)-(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = UINT32_MAX;
	uint8_t x398 = 114U;
	int16_t x400 = -1;
	volatile uint32_t t99 = 33U;

	t99 = ((x397/x398)-(x399<x400));

	if (t99 != 37675151U) { NG(); } else { ; }
	
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

