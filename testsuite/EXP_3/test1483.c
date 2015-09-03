#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -1;
static int64_t x8 = 269388693576LL;
int32_t x11 = 4;
int64_t t2 = 26480820988LL;
int16_t x16 = -1;
int32_t t3 = -957660;
uint64_t t5 = 16273421175465383LLU;
static uint8_t x29 = UINT8_MAX;
uint32_t x31 = 4U;
volatile int64_t x34 = INT64_MIN;
static int64_t x35 = INT64_MIN;
int16_t x36 = 9500;
int64_t x37 = INT64_MIN;
int8_t x44 = 1;
volatile int64_t t10 = -297238LL;
int64_t x48 = -2119054809997749153LL;
volatile int16_t x50 = 15;
volatile int64_t x55 = INT64_MIN;
static int16_t x59 = -164;
int8_t x60 = INT8_MIN;
int32_t t14 = 119615;
uint16_t x61 = 0U;
volatile uint32_t t17 = 209U;
int8_t x75 = INT8_MAX;
volatile int8_t x80 = INT8_MIN;
static int64_t x81 = INT64_MIN;
volatile int64_t t20 = INT64_MIN;
static int16_t x85 = 0;
int32_t x86 = INT32_MIN;
uint16_t x87 = 1U;
volatile int64_t x92 = -136962193317479045LL;
int16_t x96 = -45;
static volatile int16_t x98 = INT16_MAX;
uint8_t x100 = 124U;
volatile int32_t t24 = -11721741;
int16_t x102 = INT16_MIN;
int8_t x103 = -1;
uint32_t t25 = 210855895U;
static uint16_t x107 = 20U;
volatile uint8_t x108 = UINT8_MAX;
volatile uint64_t x109 = UINT64_MAX;
int16_t x110 = -1;
volatile uint64_t t27 = UINT64_MAX;
volatile int16_t x116 = -1;
volatile uint64_t t29 = 8145LLU;
volatile int32_t x123 = 1020;
volatile uint64_t x124 = UINT64_MAX;
static uint32_t t31 = 5U;
uint16_t x132 = UINT16_MAX;
volatile int8_t x137 = INT8_MIN;
volatile int8_t x142 = -3;
volatile uint16_t x147 = 461U;
int16_t x149 = INT16_MIN;
int32_t t37 = 10293;
int16_t x165 = INT16_MAX;
volatile int16_t x170 = INT16_MAX;
int16_t x173 = INT16_MAX;
uint16_t x174 = 49U;
uint8_t x177 = 51U;
int16_t x184 = INT16_MIN;
volatile uint32_t t48 = 9U;
int32_t x204 = INT32_MIN;
int64_t x209 = 2465LL;
uint32_t x210 = 5128U;
static int8_t x214 = INT8_MAX;
uint32_t x219 = 5289966U;
uint64_t t53 = 155LLU;
int64_t t54 = -21303817538LL;
int32_t x228 = INT32_MAX;
int32_t t55 = 0;
uint8_t x233 = 1U;
uint64_t x236 = 9556066LLU;
uint16_t x246 = 11U;
uint8_t x247 = UINT8_MAX;
volatile uint32_t t60 = 2267U;
uint32_t x251 = 11793U;
volatile uint64_t t62 = 245LLU;
int16_t x258 = 0;
volatile int16_t x259 = INT16_MIN;
int32_t x275 = -39;
uint32_t x283 = UINT32_MAX;
volatile int16_t x289 = 5;
int8_t x296 = 15;
static uint64_t t77 = 2489027426LLU;
int16_t x317 = INT16_MIN;
static volatile int8_t x320 = INT8_MAX;
int64_t x321 = -1LL;
static int32_t x323 = -14;
int64_t t80 = 853820777016707760LL;
volatile int32_t t81 = -414414061;
uint32_t x336 = 9988780U;
static volatile int32_t x337 = INT32_MAX;
uint16_t x341 = UINT16_MAX;
uint16_t x342 = 14285U;
uint32_t x354 = UINT32_MAX;
static int8_t x358 = INT8_MIN;
uint64_t t88 = 965248785993189727LLU;
int64_t x365 = INT64_MAX;
static int64_t t90 = -7096906443490LL;
uint8_t x375 = 10U;
static int16_t x376 = INT16_MAX;
static uint64_t t93 = 25LLU;
int16_t x385 = 0;
volatile int64_t t95 = -20653373LL;
int16_t x391 = -1;
volatile uint8_t x392 = 0U;
volatile int32_t x402 = 306440;
int64_t x403 = -1LL;


void f0(void) {
	volatile int64_t x1 = 942164627313016495LL;
	int16_t x2 = INT16_MAX;
	static volatile uint32_t x3 = UINT32_MAX;
	volatile int8_t x4 = INT8_MAX;
	volatile int64_t t0 = -6209LL;

	t0 = ((x1&x2)+(x3<x4));

	if (t0 != 16047LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = 50U;
	volatile int32_t t1 = -24697667;

	t1 = ((x5&x6)+(x7<x8));

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 122094U;
	int64_t x10 = -1LL;
	int16_t x12 = INT16_MIN;

	t2 = ((x9&x10)+(x11<x12));

	if (t2 != 122094LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MIN;

	t3 = ((x13&x14)+(x15<x16));

	if (t3 != 65409) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint8_t x18 = 120U;
	int16_t x19 = -1;
	int8_t x20 = 11;
	volatile int32_t t4 = 489;

	t4 = ((x17&x18)+(x19<x20));

	if (t4 != 121) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 23U;
	volatile uint64_t x22 = 21LLU;
	int16_t x23 = INT16_MIN;
	static uint64_t x24 = 139398388721LLU;

	t5 = ((x21&x22)+(x23<x24));

	if (t5 != 21LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	volatile int16_t x26 = -1;
	static volatile uint32_t x27 = UINT32_MAX;
	static int32_t x28 = INT32_MAX;
	int32_t t6 = -1769841;

	t6 = ((x25&x26)+(x27<x28));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x30 = INT16_MAX;
	int8_t x32 = -1;
	int32_t t7 = -12316;

	t7 = ((x29&x30)+(x31<x32));

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int64_t t8 = 432LL;

	t8 = ((x33&x34)+(x35<x36));

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x38 = UINT8_MAX;
	uint16_t x39 = UINT16_MAX;
	static uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = -61LL;

	t9 = ((x37&x38)+(x39<x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -58388121LL;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;

	t10 = ((x41&x42)+(x43<x44));

	if (t10 != -58388223LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -999579;
	uint16_t x46 = 6883U;
	int8_t x47 = -1;
	int32_t t11 = -1;

	t11 = ((x45&x46)+(x47<x48));

	if (t11 != 6753) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 36;
	static int32_t x51 = INT32_MIN;
	uint64_t x52 = 4028LLU;
	volatile int32_t t12 = 376859;

	t12 = ((x49&x50)+(x51<x52));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 2;
	int32_t x54 = INT32_MIN;
	uint16_t x56 = 7236U;
	int32_t t13 = 2697;

	t13 = ((x53&x54)+(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -2;
	int32_t x58 = -1060545519;

	t14 = ((x57&x58)+(x59<x60));

	if (t14 != -1060545519) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 4;
	int64_t x63 = -563254147694728LL;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = -120789;

	t15 = ((x61&x62)+(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MIN;
	static uint32_t x67 = 10U;
	uint16_t x68 = 8216U;
	int32_t t16 = -53;

	t16 = ((x65&x66)+(x67<x68));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 12190438U;
	int16_t x70 = -46;
	volatile int64_t x71 = 330739048LL;
	uint64_t x72 = 771750639130788985LLU;

	t17 = ((x69&x70)+(x71<x72));

	if (t17 != 12190403U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = 119096678024706308LL;
	uint8_t x76 = 54U;
	static volatile int64_t t18 = -896063719364803880LL;

	t18 = ((x73&x74)+(x75<x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 10862489U;
	volatile uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 4964U;
	uint64_t t19 = 1814697LLU;

	t19 = ((x77&x78)+(x79<x80));

	if (t19 != 10862489LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = -768;
	int32_t x83 = -246;
	static int16_t x84 = INT16_MIN;

	t20 = ((x81&x82)+(x83<x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x88 = -1LL;
	volatile int32_t t21 = 499;

	t21 = ((x85&x86)+(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile int64_t x90 = 55899162300454LL;
	int16_t x91 = -1;
	volatile int64_t t22 = -2111968799091LL;

	t22 = ((x89&x90)+(x91<x92));

	if (t22 != 55899162279936LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = 245200599U;
	int8_t x95 = -12;
	volatile uint32_t t23 = 472604U;

	t23 = ((x93&x94)+(x95<x96));

	if (t23 != 245170176U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int64_t x99 = INT64_MAX;

	t24 = ((x97&x98)+(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	volatile int64_t x104 = INT64_MIN;

	t25 = ((x101&x102)+(x103<x104));

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 54U;
	static volatile uint32_t x106 = UINT32_MAX;
	static volatile uint32_t t26 = 1507989160U;

	t26 = ((x105&x106)+(x107<x108));

	if (t26 != 55U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MAX;

	t27 = ((x109&x110)+(x111<x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint64_t x114 = UINT64_MAX;
	static int32_t x115 = INT32_MIN;
	volatile uint64_t t28 = 50LLU;

	t28 = ((x113&x114)+(x115<x116));

	if (t28 != 256LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 226LLU;
	uint64_t x118 = 648420LLU;
	int16_t x119 = INT16_MIN;
	int64_t x120 = -189866590037094LL;

	t29 = ((x117&x118)+(x119<x120));

	if (t29 != 224LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 16U;
	volatile int32_t x122 = -1;
	uint32_t t30 = 31612U;

	t30 = ((x121&x122)+(x123<x124));

	if (t30 != 17U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -14171;
	uint32_t x126 = 2018614U;
	volatile int64_t x127 = 1819LL;
	uint64_t x128 = UINT64_MAX;

	t31 = ((x125&x126)+(x127<x128));

	if (t31 != 2017317U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 3727206006344LLU;
	uint64_t x130 = 1253483479LLU;
	int16_t x131 = INT16_MIN;
	volatile uint64_t t32 = 3924904729674LLU;

	t32 = ((x129&x130)+(x131<x132));

	if (t32 != 1250042433LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 1726933430239125LLU;
	int16_t x134 = 3;
	int16_t x135 = -9;
	int8_t x136 = INT8_MAX;
	volatile uint64_t t33 = 190LLU;

	t33 = ((x133&x134)+(x135<x136));

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1LL;
	uint16_t x139 = 5U;
	int32_t x140 = INT32_MIN;
	static int64_t t34 = -68LL;

	t34 = ((x137&x138)+(x139<x140));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = 983LLU;
	int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	uint64_t t35 = 2449570493LLU;

	t35 = ((x141&x142)+(x143<x144));

	if (t35 != 982LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	volatile uint32_t x146 = 342068485U;
	static uint16_t x148 = 2U;
	static volatile uint32_t t36 = 155987661U;

	t36 = ((x145&x146)+(x147<x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x150 = -1;
	int8_t x151 = 1;
	static volatile int8_t x152 = 0;

	t37 = ((x149&x150)+(x151<x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 6;
	int8_t x154 = 1;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	volatile int32_t t38 = -213664204;

	t38 = ((x153&x154)+(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 99U;
	static volatile int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	uint64_t x160 = 1LLU;
	int64_t t39 = 401373628411871LL;

	t39 = ((x157&x158)+(x159<x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 5879LLU;
	static int16_t x162 = 2;
	int16_t x163 = INT16_MIN;
	int32_t x164 = 13;
	uint64_t t40 = 380LLU;

	t40 = ((x161&x162)+(x163<x164));

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 0U;
	uint16_t x167 = 487U;
	volatile uint64_t x168 = UINT64_MAX;
	int32_t t41 = -35946;

	t41 = ((x165&x166)+(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 346;

	t42 = ((x169&x170)+(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 6034673;

	t43 = ((x173&x174)+(x175<x176));

	if (t43 != 50) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 53578626LLU;
	int8_t x179 = INT8_MAX;
	volatile int16_t x180 = -281;
	uint64_t t44 = 1168545436186LLU;

	t44 = ((x177&x178)+(x179<x180));

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x181 = 13U;
	uint8_t x182 = 12U;
	int32_t x183 = -1;
	volatile int32_t t45 = 53961;

	t45 = ((x181&x182)+(x183<x184));

	if (t45 != 12) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = 43;
	int16_t x186 = -1;
	static int64_t x187 = INT64_MIN;
	static uint8_t x188 = 64U;
	int32_t t46 = -7399132;

	t46 = ((x185&x186)+(x187<x188));

	if (t46 != 44) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 23813U;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 8U;
	static uint64_t x192 = UINT64_MAX;
	volatile uint32_t t47 = 5589U;

	t47 = ((x189&x190)+(x191<x192));

	if (t47 != 6U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = -1LL;
	int16_t x196 = INT16_MAX;

	t48 = ((x193&x194)+(x195<x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -7300;
	int64_t x202 = -499617568001398779LL;
	volatile int8_t x203 = -38;
	int64_t t49 = -2988553817220LL;

	t49 = ((x201&x202)+(x203<x204));

	if (t49 != -499617568001400828LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	int32_t x206 = -1;
	uint32_t x207 = UINT32_MAX;
	static int16_t x208 = -1;
	volatile int32_t t50 = INT32_MIN;

	t50 = ((x205&x206)+(x207<x208));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 598U;
	volatile int64_t t51 = -1689808745252LL;

	t51 = ((x209&x210)+(x211<x212));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 61U;
	volatile uint32_t x215 = 21440U;
	uint8_t x216 = 4U;
	static volatile int32_t t52 = 8650;

	t52 = ((x213&x214)+(x215<x216));

	if (t52 != 61) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x217 = INT16_MAX;
	uint64_t x218 = 24186508933535LLU;
	int32_t x220 = -130789453;

	t53 = ((x217&x218)+(x219<x220));

	if (t53 != 31136LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 298U;
	volatile int64_t x222 = INT64_MIN;
	static int16_t x223 = -1;
	int32_t x224 = INT32_MIN;

	t54 = ((x221&x222)+(x223<x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x225 = 1703U;
	int32_t x226 = -480;
	volatile uint64_t x227 = 93LLU;

	t55 = ((x225&x226)+(x227<x228));

	if (t55 != 1569) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x229 = UINT32_MAX;
	volatile uint8_t x230 = UINT8_MAX;
	static int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;
	uint32_t t56 = 526093352U;

	t56 = ((x229&x230)+(x231<x232));

	if (t56 != 255U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = -1LL;
	int32_t x235 = INT32_MIN;
	int64_t t57 = 34026313246526999LL;

	t57 = ((x233&x234)+(x235<x236));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = UINT32_MAX;
	static int32_t x238 = 14861;
	static int8_t x239 = -1;
	int16_t x240 = -1;
	volatile uint32_t t58 = 1182554981U;

	t58 = ((x237&x238)+(x239<x240));

	if (t58 != 14861U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 366576LLU;
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = 1;
	static int16_t x244 = INT16_MIN;
	uint64_t t59 = 61158880122139LLU;

	t59 = ((x241&x242)+(x243<x244));

	if (t59 != 240LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x245 = 74480328U;
	int16_t x248 = -1;

	t60 = ((x245&x246)+(x247<x248));

	if (t60 != 8U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = 43637U;
	static volatile int64_t x250 = INT64_MIN;
	int16_t x252 = INT16_MIN;
	volatile int64_t t61 = -64168979724LL;

	t61 = ((x249&x250)+(x251<x252));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 274990128470651259LLU;
	static int16_t x254 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	static int64_t x256 = INT64_MAX;

	t62 = ((x253&x254)+(x255<x256));

	if (t62 != 274990128470622209LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x257 = INT16_MAX;
	int32_t x260 = INT32_MAX;
	int32_t t63 = -187320774;

	t63 = ((x257&x258)+(x259<x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 4459541962402332LLU;
	int32_t x262 = -1;
	static int32_t x263 = INT32_MIN;
	volatile int32_t x264 = INT32_MIN;
	uint64_t t64 = 41863957855LLU;

	t64 = ((x261&x262)+(x263<x264));

	if (t64 != 4459541962402332LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x265 = -6LL;
	volatile uint32_t x266 = UINT32_MAX;
	uint32_t x267 = 8816905U;
	static uint32_t x268 = 69385U;
	int64_t t65 = 11713144599028LL;

	t65 = ((x265&x266)+(x267<x268));

	if (t65 != 4294967290LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MAX;
	uint8_t x270 = 81U;
	static int8_t x271 = -9;
	uint8_t x272 = 0U;
	volatile int32_t t66 = -9322;

	t66 = ((x269&x270)+(x271<x272));

	if (t66 != 82) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 11011U;
	int64_t x274 = INT64_MIN;
	volatile int16_t x276 = -42;
	volatile int64_t t67 = -1012207039878LL;

	t67 = ((x273&x274)+(x275<x276));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	uint32_t x278 = 15093U;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t68 = 497932069U;

	t68 = ((x277&x278)+(x279<x280));

	if (t68 != 15094U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MAX;
	static int16_t x282 = -1;
	int8_t x284 = INT8_MIN;
	int32_t t69 = -1637;

	t69 = ((x281&x282)+(x283<x284));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 0LLU;
	volatile int64_t t70 = -134593LL;

	t70 = ((x285&x286)+(x287<x288));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x290 = -5;
	static int8_t x291 = INT8_MAX;
	static int16_t x292 = INT16_MAX;
	static int32_t t71 = 584;

	t71 = ((x289&x290)+(x291<x292));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = INT32_MAX;
	uint32_t x294 = 47785837U;
	int8_t x295 = INT8_MIN;
	uint32_t t72 = 27453264U;

	t72 = ((x293&x294)+(x295<x296));

	if (t72 != 47785838U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -18;
	int32_t x298 = INT32_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t73 = -995;

	t73 = ((x297&x298)+(x299<x300));

	if (t73 != 2147483631) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = 3508358157386687004LLU;
	static volatile uint32_t x303 = 16677U;
	static volatile int8_t x304 = INT8_MIN;
	uint64_t t74 = 0LLU;

	t74 = ((x301&x302)+(x303<x304));

	if (t74 != 3508358157386686977LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = 6U;
	uint64_t x306 = 124687LLU;
	int8_t x307 = INT8_MAX;
	uint32_t x308 = 20U;
	uint64_t t75 = 93LLU;

	t75 = ((x305&x306)+(x307<x308));

	if (t75 != 6LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = 57;
	int16_t x310 = 1;
	int32_t x311 = -1;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t76 = 0;

	t76 = ((x309&x310)+(x311<x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MIN;
	volatile int32_t x315 = INT32_MAX;
	uint8_t x316 = UINT8_MAX;

	t77 = ((x313&x314)+(x315<x316));

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x318 = 1053709737902545326LLU;
	volatile int64_t x319 = -131619030195LL;
	volatile uint64_t t78 = 3LLU;

	t78 = ((x317&x318)+(x319<x320));

	if (t78 != 1053709737902538753LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x322 = 35897811361336767LL;
	int32_t x324 = INT32_MAX;
	volatile int64_t t79 = 886571886864067LL;

	t79 = ((x321&x322)+(x323<x324));

	if (t79 != 35897811361336768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -13992231639LL;
	int8_t x326 = 7;
	volatile int64_t x327 = -1LL;
	int16_t x328 = INT16_MIN;

	t80 = ((x325&x326)+(x327<x328));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x329 = 1;
	volatile int8_t x330 = INT8_MAX;
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = 1352U;

	t81 = ((x329&x330)+(x331<x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	static uint16_t x335 = UINT16_MAX;
	volatile int32_t t82 = 0;

	t82 = ((x333&x334)+(x335<x336));

	if (t82 != 256) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x338 = -3361;
	uint64_t x339 = UINT64_MAX;
	uint64_t x340 = 6099LLU;
	volatile int32_t t83 = -15055297;

	t83 = ((x337&x338)+(x339<x340));

	if (t83 != 2147480287) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x343 = 462956U;
	int8_t x344 = 4;
	int32_t t84 = 245;

	t84 = ((x341&x342)+(x343<x344));

	if (t84 != 14285) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x345 = 97987LLU;
	int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = UINT8_MAX;
	volatile uint64_t t85 = 338682647160LLU;

	t85 = ((x345&x346)+(x347<x348));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MAX;
	volatile int32_t x350 = INT32_MAX;
	static uint16_t x351 = 173U;
	int8_t x352 = -43;
	static int32_t t86 = INT32_MAX;

	t86 = ((x349&x350)+(x351<x352));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x353 = -7;
	static volatile uint64_t x355 = 6180814LLU;
	static int32_t x356 = INT32_MIN;
	volatile uint32_t t87 = 563U;

	t87 = ((x353&x354)+(x355<x356));

	if (t87 != 4294967290U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	int64_t x360 = -763635873816LL;

	t88 = ((x357&x358)+(x359<x360));

	if (t88 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x361 = 0U;
	volatile uint64_t x362 = UINT64_MAX;
	uint16_t x363 = 92U;
	uint64_t x364 = 104622862712429535LLU;
	volatile uint64_t t89 = 23187LLU;

	t89 = ((x361&x362)+(x363<x364));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x366 = -92277643826LL;
	int32_t x367 = 20;
	static int8_t x368 = -1;

	t90 = ((x365&x366)+(x367<x368));

	if (t90 != 9223371944577131982LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = INT16_MAX;
	static int32_t x371 = 105785045;
	volatile int16_t x372 = -2345;
	int32_t t91 = -2;

	t91 = ((x369&x370)+(x371<x372));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = 7146122890123474LL;
	static int8_t x374 = -46;
	volatile int64_t t92 = 233LL;

	t92 = ((x373&x374)+(x375<x376));

	if (t92 != 7146122890123475LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x377 = UINT64_MAX;
	int16_t x378 = -1452;
	uint64_t x379 = 171790858586850LLU;
	volatile uint16_t x380 = 462U;

	t93 = ((x377&x378)+(x379<x380));

	if (t93 != 18446744073709550164LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -1;
	int8_t x382 = INT8_MAX;
	volatile uint32_t x383 = 89652098U;
	uint64_t x384 = 32858672LLU;
	int32_t t94 = -686219236;

	t94 = ((x381&x382)+(x383<x384));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x386 = INT64_MIN;
	static int64_t x387 = 3215125183582363082LL;
	static volatile int16_t x388 = INT16_MIN;

	t95 = ((x385&x386)+(x387<x388));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = 0U;
	uint16_t x390 = UINT16_MAX;
	volatile int32_t t96 = -9089424;

	t96 = ((x389&x390)+(x391<x392));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	static volatile int8_t x395 = 12;
	static int8_t x396 = -13;
	int32_t t97 = INT32_MIN;

	t97 = ((x393&x394)+(x395<x396));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x397 = -23;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MAX;
	static int16_t x400 = INT16_MAX;
	volatile uint32_t t98 = 6067U;

	t98 = ((x397&x398)+(x399<x400));

	if (t98 != 4294967273U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 56693896520672475LLU;
	volatile uint8_t x404 = 7U;
	uint64_t t99 = 4LLU;

	t99 = ((x401&x402)+(x403<x404));

	if (t99 != 271369LLU) { NG(); } else { ; }
	
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

