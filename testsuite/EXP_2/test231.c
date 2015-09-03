#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int32_t t0 = -993860;
int32_t t2 = -4387;
static volatile int8_t x22 = INT8_MIN;
uint8_t x24 = 77U;
int16_t x29 = 452;
int8_t x33 = -1;
int16_t x34 = INT16_MIN;
volatile int32_t x35 = INT32_MIN;
uint16_t x39 = 4542U;
static uint8_t x46 = 6U;
volatile int32_t t10 = -122347906;
int64_t x57 = -1LL;
static int16_t x60 = INT16_MIN;
uint32_t x61 = 3618U;
volatile uint8_t x69 = 20U;
int32_t t14 = 6262562;
int16_t x76 = INT16_MIN;
volatile int32_t t15 = 1;
volatile int32_t t16 = -3;
int64_t x81 = INT64_MIN;
uint16_t x86 = 119U;
uint16_t x100 = UINT16_MAX;
uint8_t x101 = UINT8_MAX;
volatile int8_t x104 = INT8_MIN;
int16_t x105 = INT16_MAX;
int64_t x106 = -1LL;
uint32_t x107 = 1U;
volatile int32_t t24 = 24343;
int8_t x117 = -3;
int64_t x119 = INT64_MIN;
int8_t x121 = INT8_MAX;
volatile int32_t t26 = 2;
static int16_t x147 = INT16_MAX;
uint8_t x148 = UINT8_MAX;
volatile uint32_t x149 = UINT32_MAX;
int32_t t34 = -5602;
volatile int16_t x161 = -7;
uint8_t x164 = 0U;
int8_t x166 = INT8_MIN;
int32_t x189 = INT32_MAX;
static int16_t x199 = INT16_MIN;
static uint32_t x203 = 1192208567U;
volatile int32_t t44 = 3;
static uint16_t x213 = 3081U;
static int32_t x229 = INT32_MIN;
int64_t x231 = INT64_MIN;
uint64_t x237 = 114453803LLU;
uint32_t x240 = 383554U;
int64_t x244 = -1LL;
int32_t x246 = -1;
volatile int32_t t52 = 15351128;
static int8_t x258 = INT8_MIN;
int32_t x281 = -1;
static uint32_t x289 = 405U;
uint16_t x294 = UINT16_MAX;
static volatile int32_t x302 = -110;
uint64_t x305 = UINT64_MAX;
int32_t t64 = 52606574;
uint32_t x322 = UINT32_MAX;
int32_t x333 = INT32_MAX;
volatile uint8_t x334 = 0U;
uint16_t x345 = 8U;
int16_t x346 = INT16_MIN;
static int64_t x352 = -470LL;
static int16_t x354 = 2535;
static uint64_t x357 = UINT64_MAX;
static uint8_t x360 = 1U;
int64_t x361 = INT64_MIN;
volatile int32_t t77 = -15941255;
int16_t x373 = INT16_MIN;
static volatile int32_t t78 = 39162302;
static uint64_t x378 = 8454082906LLU;
uint16_t x380 = 1U;
uint64_t x381 = UINT64_MAX;
volatile int64_t x382 = 449136788LL;
int64_t x383 = -6355276665906399LL;
int64_t x384 = -1LL;
int16_t x399 = -1;
int8_t x400 = -1;
volatile int8_t x412 = INT8_MIN;
volatile int32_t t85 = -7819;
static int16_t x413 = 5;
volatile uint8_t x415 = UINT8_MAX;
volatile int16_t x424 = -1;
volatile int32_t t88 = 23;
volatile int16_t x427 = -3;
int64_t x428 = -1LL;
volatile int32_t t90 = -224713;
int8_t x436 = INT8_MAX;
volatile int16_t x441 = -1;
uint8_t x443 = UINT8_MAX;
int64_t x448 = -1LL;
static volatile int32_t t94 = -65013;
uint64_t x452 = 149605LLU;


void f0(void) {
	volatile int32_t x1 = 5;
	uint64_t x3 = UINT64_MAX;
	volatile uint32_t x4 = UINT32_MAX;

	t0 = ((x1%(x2-x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	static int8_t x6 = INT8_MIN;
	volatile uint16_t x7 = UINT16_MAX;
	volatile uint16_t x8 = 891U;
	static volatile int32_t t1 = 1402;

	t1 = ((x5%(x6-x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = -28;
	int32_t x15 = -183286301;
	static int64_t x16 = 3867LL;

	t2 = ((x13%(x14-x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = UINT8_MAX;
	static int32_t x18 = -31572;
	int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	static int32_t t3 = -6328;

	t3 = ((x17%(x18-x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 30U;
	uint32_t x23 = UINT32_MAX;
	volatile int32_t t4 = 84890993;

	t4 = ((x21%(x22-x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = -17;
	int8_t x31 = INT8_MIN;
	int8_t x32 = -1;
	int32_t t5 = -5;

	t5 = ((x29%(x30-x31))<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t6 = 4;

	t6 = ((x33%(x34-x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 6;
	uint16_t x38 = 478U;
	static int32_t x40 = INT32_MIN;
	static int32_t t7 = 5;

	t7 = ((x37%(x38-x39))<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 6U;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 72199963U;
	int64_t x44 = -1LL;
	static int32_t t8 = 97204242;

	t8 = ((x41%(x42-x43))<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	static int8_t x47 = INT8_MIN;
	uint32_t x48 = 110U;
	volatile int32_t t9 = 97;

	t9 = ((x45%(x46-x47))<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MAX;
	int16_t x50 = -1;
	static int32_t x51 = INT32_MAX;
	static int32_t x52 = -71792;

	t10 = ((x49%(x50-x51))<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -180303544;
	static int64_t x54 = INT64_MAX;
	volatile uint64_t x55 = UINT64_MAX;
	int8_t x56 = -1;
	int32_t t11 = -6;

	t11 = ((x53%(x54-x55))<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x58 = 9498818818383136LL;
	uint64_t x59 = 14478LLU;
	static volatile int32_t t12 = 121772827;

	t12 = ((x57%(x58-x59))<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = -3;
	int64_t x63 = -64760682484255LL;
	uint16_t x64 = 2U;
	int32_t t13 = 455283282;

	t13 = ((x61%(x62-x63))<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x70 = INT16_MAX;
	int16_t x71 = 1183;
	int16_t x72 = INT16_MIN;

	t14 = ((x69%(x70-x71))<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	static int64_t x74 = INT64_MIN;
	volatile int32_t x75 = -1;

	t15 = ((x73%(x74-x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 185992551;
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 4914401638678875207LLU;
	int64_t x80 = 4373077192LL;

	t16 = ((x77%(x78-x79))<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x82 = 179LLU;
	int64_t x83 = INT64_MIN;
	int32_t x84 = -1;
	int32_t t17 = 24188147;

	t17 = ((x81%(x82-x83))<=x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 414U;
	static uint8_t x87 = 14U;
	static int16_t x88 = 0;
	int32_t t18 = -989;

	t18 = ((x85%(x86-x87))<=x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x94 = 63756651599930668LL;
	int16_t x95 = 13;
	int32_t x96 = -1;
	int32_t t19 = 1;

	t19 = ((x93%(x94-x95))<=x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 5387;
	uint32_t x98 = 47482606U;
	volatile int8_t x99 = -1;
	volatile int32_t t20 = -16830;

	t20 = ((x97%(x98-x99))<=x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = INT32_MIN;
	int32_t t21 = -1707;

	t21 = ((x101%(x102-x103))<=x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x108 = -1;
	int32_t t22 = 735766;

	t22 = ((x105%(x106-x107))<=x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	static uint16_t x111 = 21678U;
	int16_t x112 = -1330;
	int32_t t23 = -1;

	t23 = ((x109%(x110-x111))<=x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MAX;
	volatile int16_t x114 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 22621789U;

	t24 = ((x113%(x114-x115))<=x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = INT8_MIN;
	uint16_t x120 = 3459U;
	int32_t t25 = -8174;

	t25 = ((x117%(x118-x119))<=x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x122 = 12U;
	int8_t x123 = -1;
	volatile int8_t x124 = 0;

	t26 = ((x121%(x122-x123))<=x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = 1;
	int16_t x126 = -1;
	volatile int32_t x127 = INT32_MIN;
	int16_t x128 = -491;
	volatile int32_t t27 = 38;

	t27 = ((x125%(x126-x127))<=x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = 105;
	uint8_t x130 = 13U;
	int32_t x131 = -1;
	volatile int8_t x132 = INT8_MIN;
	int32_t t28 = -969454;

	t28 = ((x129%(x130-x131))<=x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int64_t x134 = -48139081507359LL;
	volatile int16_t x135 = -1;
	uint8_t x136 = 15U;
	int32_t t29 = 48;

	t29 = ((x133%(x134-x135))<=x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	static uint32_t x142 = 387U;
	uint8_t x143 = 0U;
	int16_t x144 = INT16_MAX;
	int32_t t30 = 43891319;

	t30 = ((x141%(x142-x143))<=x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -1LL;
	static uint64_t x146 = UINT64_MAX;
	volatile int32_t t31 = 29;

	t31 = ((x145%(x146-x147))<=x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x150 = UINT16_MAX;
	static int16_t x151 = INT16_MAX;
	int8_t x152 = -57;
	int32_t t32 = -49514;

	t32 = ((x149%(x150-x151))<=x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x153 = 85U;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 3U;
	volatile int8_t x156 = -1;
	static int32_t t33 = -6;

	t33 = ((x153%(x154-x155))<=x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 15U;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 211741877LLU;
	int16_t x160 = -1;

	t34 = ((x157%(x158-x159))<=x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x162 = 61;
	uint32_t x163 = UINT32_MAX;
	int32_t t35 = -727;

	t35 = ((x161%(x162-x163))<=x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = 4286036731LL;
	int64_t x167 = INT64_MIN;
	volatile int16_t x168 = 0;
	volatile int32_t t36 = 440968;

	t36 = ((x165%(x166-x167))<=x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x169 = 143227;
	static int16_t x170 = INT16_MAX;
	int16_t x171 = -5326;
	int64_t x172 = INT64_MIN;
	int32_t t37 = -48498;

	t37 = ((x169%(x170-x171))<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = 53767371379LLU;
	volatile int16_t x176 = 1;
	static int32_t t38 = 7;

	t38 = ((x173%(x174-x175))<=x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int16_t x187 = -1;
	int64_t x188 = -1LL;
	static int32_t t39 = 64725;

	t39 = ((x185%(x186-x187))<=x188);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x190 = 1334;
	static uint16_t x191 = 125U;
	volatile int8_t x192 = -58;
	volatile int32_t t40 = 488427;

	t40 = ((x189%(x190-x191))<=x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t41 = 7936033;

	t41 = ((x193%(x194-x195))<=x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = 1424;
	volatile uint32_t x198 = 1883U;
	int64_t x200 = -270201325365095LL;
	int32_t t42 = 101;

	t42 = ((x197%(x198-x199))<=x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -2273;
	int8_t x202 = INT8_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t43 = 15;

	t43 = ((x201%(x202-x203))<=x204);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = 8189;
	int32_t x211 = -1;
	static volatile int32_t x212 = 1;

	t44 = ((x209%(x210-x211))<=x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x214 = -1;
	volatile uint8_t x215 = 39U;
	int64_t x216 = INT64_MAX;
	int32_t t45 = 146176015;

	t45 = ((x213%(x214-x215))<=x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x217 = INT16_MAX;
	int16_t x218 = -1;
	uint32_t x219 = 308U;
	static int64_t x220 = 6322680076LL;
	int32_t t46 = 13912017;

	t46 = ((x217%(x218-x219))<=x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x221 = 3U;
	uint32_t x222 = 8U;
	int32_t x223 = -1;
	uint8_t x224 = 111U;
	volatile int32_t t47 = 1005913;

	t47 = ((x221%(x222-x223))<=x224);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x230 = -1LL;
	static int16_t x232 = -6291;
	volatile int32_t t48 = 13370;

	t48 = ((x229%(x230-x231))<=x232);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	int32_t t49 = -163;

	t49 = ((x237%(x238-x239))<=x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = -105833461LL;
	int64_t x242 = -1LL;
	int8_t x243 = 1;
	int32_t t50 = 1;

	t50 = ((x241%(x242-x243))<=x244);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = 21LLU;
	static int8_t x247 = INT8_MIN;
	uint32_t x248 = 3489U;
	int32_t t51 = -871582;

	t51 = ((x245%(x246-x247))<=x248);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 782642438336LLU;
	uint8_t x250 = 72U;
	static int8_t x251 = -1;
	int8_t x252 = INT8_MIN;

	t52 = ((x249%(x250-x251))<=x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = 3U;
	int64_t x259 = -6729650LL;
	volatile int16_t x260 = -1;
	int32_t t53 = -14172100;

	t53 = ((x257%(x258-x259))<=x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = 21214649847LL;
	uint16_t x262 = 380U;
	int16_t x263 = -1;
	uint8_t x264 = 0U;
	int32_t t54 = -33060534;

	t54 = ((x261%(x262-x263))<=x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = INT64_MIN;
	static int16_t x270 = INT16_MAX;
	volatile uint32_t x271 = UINT32_MAX;
	int8_t x272 = 6;
	int32_t t55 = 71;

	t55 = ((x269%(x270-x271))<=x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int64_t x274 = INT64_MAX;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MAX;
	volatile int32_t t56 = -3196395;

	t56 = ((x273%(x274-x275))<=x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = 176LL;
	int8_t x278 = 45;
	static uint16_t x279 = UINT16_MAX;
	int16_t x280 = -1;
	int32_t t57 = -2866;

	t57 = ((x277%(x278-x279))<=x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x282 = 296207615LL;
	uint16_t x283 = 1296U;
	int32_t x284 = INT32_MIN;
	static int32_t t58 = -696799652;

	t58 = ((x281%(x282-x283))<=x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t59 = -113723;

	t59 = ((x289%(x290-x291))<=x292);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x293 = -46744543;
	int8_t x295 = -1;
	static int16_t x296 = -13091;
	static volatile int32_t t60 = -66;

	t60 = ((x293%(x294-x295))<=x296);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = 2132666166815LLU;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = 7122232360452038815LLU;
	uint8_t x300 = 48U;
	volatile int32_t t61 = -468;

	t61 = ((x297%(x298-x299))<=x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = UINT64_MAX;
	uint32_t x303 = 7U;
	int16_t x304 = -928;
	volatile int32_t t62 = -4397941;

	t62 = ((x301%(x302-x303))<=x304);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x306 = -1;
	int32_t x307 = 1665275;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t63 = 81414023;

	t63 = ((x305%(x306-x307))<=x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x309 = 11338U;
	volatile uint8_t x310 = UINT8_MAX;
	uint16_t x311 = UINT16_MAX;
	static uint32_t x312 = UINT32_MAX;

	t64 = ((x309%(x310-x311))<=x312);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x313 = 51398U;
	int8_t x314 = 0;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = 0U;
	static volatile int32_t t65 = 29;

	t65 = ((x313%(x314-x315))<=x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x317 = INT32_MIN;
	uint32_t x318 = 24U;
	volatile int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	int32_t t66 = -223;

	t66 = ((x317%(x318-x319))<=x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x321 = 46942LLU;
	static int16_t x323 = INT16_MIN;
	static int32_t x324 = 1633263;
	static volatile int32_t t67 = 7059572;

	t67 = ((x321%(x322-x323))<=x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MAX;
	volatile int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MAX;
	int64_t x328 = -24LL;
	int32_t t68 = -440238485;

	t68 = ((x325%(x326-x327))<=x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x335 = UINT8_MAX;
	static uint16_t x336 = 354U;
	static volatile int32_t t69 = 236561471;

	t69 = ((x333%(x334-x335))<=x336);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x341 = 29;
	volatile uint8_t x342 = UINT8_MAX;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 7686U;
	static volatile int32_t t70 = 1;

	t70 = ((x341%(x342-x343))<=x344);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x347 = UINT32_MAX;
	int8_t x348 = -50;
	int32_t t71 = -2141;

	t71 = ((x345%(x346-x347))<=x348);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = INT32_MAX;
	int8_t x350 = 9;
	uint8_t x351 = 0U;
	int32_t t72 = 0;

	t72 = ((x349%(x350-x351))<=x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x353 = -1;
	int64_t x355 = INT64_MAX;
	int32_t x356 = -4;
	int32_t t73 = 1;

	t73 = ((x353%(x354-x355))<=x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x358 = -1;
	uint16_t x359 = 12U;
	int32_t t74 = 105922196;

	t74 = ((x357%(x358-x359))<=x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x362 = 12;
	int64_t x363 = INT64_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t75 = -21;

	t75 = ((x361%(x362-x363))<=x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = -1;
	static int32_t x366 = -1;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = 5U;
	volatile int32_t t76 = 1;

	t76 = ((x365%(x366-x367))<=x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x369 = INT8_MIN;
	static int64_t x370 = -1LL;
	static int16_t x371 = INT16_MIN;
	static uint64_t x372 = UINT64_MAX;

	t77 = ((x369%(x370-x371))<=x372);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x374 = 1U;
	volatile int16_t x375 = -1;
	int64_t x376 = INT64_MIN;

	t78 = ((x373%(x374-x375))<=x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x379 = 19248245;
	int32_t t79 = 27181;

	t79 = ((x377%(x378-x379))<=x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t t80 = -42;

	t80 = ((x381%(x382-x383))<=x384);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = 6U;
	uint32_t x386 = UINT32_MAX;
	volatile int8_t x387 = INT8_MAX;
	uint32_t x388 = 8U;
	volatile int32_t t81 = -64177536;

	t81 = ((x385%(x386-x387))<=x388);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = -1LL;
	int64_t x394 = -30770874LL;
	static int64_t x395 = INT64_MIN;
	uint16_t x396 = 225U;
	static volatile int32_t t82 = -389;

	t82 = ((x393%(x394-x395))<=x396);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x397 = 7U;
	volatile uint16_t x398 = UINT16_MAX;
	volatile int32_t t83 = 0;

	t83 = ((x397%(x398-x399))<=x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x401 = 11U;
	uint64_t x402 = 487708LLU;
	volatile int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MIN;
	static int32_t t84 = -24589904;

	t84 = ((x401%(x402-x403))<=x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = 1;
	volatile int64_t x410 = 88631906103LL;
	int16_t x411 = 426;

	t85 = ((x409%(x410-x411))<=x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x414 = 2U;
	uint32_t x416 = 593U;
	int32_t t86 = -2760;

	t86 = ((x413%(x414-x415))<=x416);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x417 = INT32_MAX;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = UINT32_MAX;
	static uint8_t x420 = 19U;
	int32_t t87 = -59249327;

	t87 = ((x417%(x418-x419))<=x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = INT8_MIN;
	volatile int32_t x422 = INT32_MAX;
	static int64_t x423 = 1681LL;

	t88 = ((x421%(x422-x423))<=x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x425 = -1;
	int64_t x426 = 228486420LL;
	volatile int32_t t89 = 680568999;

	t89 = ((x425%(x426-x427))<=x428);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x429 = 0U;
	int16_t x430 = -1;
	int16_t x431 = INT16_MAX;
	int64_t x432 = 1LL;

	t90 = ((x429%(x430-x431))<=x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = INT8_MIN;
	volatile int32_t x434 = 30230825;
	uint16_t x435 = 1427U;
	int32_t t91 = -80;

	t91 = ((x433%(x434-x435))<=x436);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = INT16_MIN;
	volatile int64_t x438 = -2880628981013153LL;
	uint16_t x439 = 3162U;
	static int64_t x440 = -1LL;
	volatile int32_t t92 = -1073;

	t92 = ((x437%(x438-x439))<=x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x442 = 95262991224504LLU;
	uint64_t x444 = UINT64_MAX;
	int32_t t93 = 651994480;

	t93 = ((x441%(x442-x443))<=x444);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x445 = 5906064256101995922LLU;
	uint64_t x446 = UINT64_MAX;
	uint8_t x447 = UINT8_MAX;

	t94 = ((x445%(x446-x447))<=x448);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x449 = INT32_MIN;
	int32_t x450 = 26;
	int16_t x451 = INT16_MIN;
	static int32_t t95 = 217435;

	t95 = ((x449%(x450-x451))<=x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = -4;
	int64_t x454 = 3960859706607LL;
	volatile uint64_t x455 = 7124LLU;
	int16_t x456 = -1;
	int32_t t96 = -334;

	t96 = ((x453%(x454-x455))<=x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x457 = INT8_MIN;
	static uint64_t x458 = 51LLU;
	volatile int16_t x459 = INT16_MIN;
	int32_t x460 = -36;
	static volatile int32_t t97 = 486791;

	t97 = ((x457%(x458-x459))<=x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = 3U;
	volatile uint8_t x462 = UINT8_MAX;
	volatile int32_t x463 = 764965803;
	static uint16_t x464 = 2U;
	int32_t t98 = -1685;

	t98 = ((x461%(x462-x463))<=x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x465 = 7607;
	uint32_t x466 = UINT32_MAX;
	int32_t x467 = 0;
	int16_t x468 = 477;
	int32_t t99 = 933;

	t99 = ((x465%(x466-x467))<=x468);

	if (t99 != 0) { NG(); } else { ; }
	
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

