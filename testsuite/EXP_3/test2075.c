#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int8_t x10 = -3;
volatile int32_t x12 = -1;
int32_t x19 = -109211650;
static int64_t x40 = INT64_MIN;
static volatile int32_t t10 = 129542753;
static volatile int64_t x45 = INT64_MIN;
int16_t x48 = -3;
volatile uint64_t x50 = 3271823225LLU;
volatile int32_t t13 = 10664733;
int16_t x57 = INT16_MAX;
int32_t t14 = -1115677;
volatile int64_t x61 = INT64_MIN;
static volatile int64_t x65 = 21958319382LL;
uint16_t x66 = 370U;
uint16_t x67 = 0U;
uint32_t x68 = 37420941U;
uint32_t x70 = 1782237U;
int32_t t17 = -69;
uint32_t x81 = 720U;
int32_t t20 = 2569;
int16_t x87 = 25;
int8_t x105 = INT8_MIN;
uint8_t x112 = 1U;
volatile int32_t t29 = -5526;
int16_t x121 = 38;
int32_t t30 = -68060;
static int8_t x126 = INT8_MIN;
volatile int32_t t31 = -58519;
int8_t x131 = INT8_MAX;
uint64_t x133 = 1LLU;
volatile int64_t x134 = INT64_MIN;
uint32_t x136 = UINT32_MAX;
int32_t t33 = 1233;
uint8_t x140 = 3U;
static int32_t x146 = INT32_MAX;
static volatile int16_t x151 = INT16_MIN;
int8_t x160 = INT8_MIN;
uint64_t x169 = 18783247LLU;
uint16_t x171 = 16U;
int8_t x176 = INT8_MIN;
static int64_t x180 = INT64_MIN;
uint32_t x188 = UINT32_MAX;
volatile int32_t t46 = 37509132;
volatile int64_t x196 = INT64_MIN;
volatile int32_t t50 = 194132;
int32_t t51 = 0;
int8_t x224 = -1;
int8_t x225 = INT8_MAX;
uint16_t x226 = 3U;
int8_t x227 = INT8_MAX;
uint16_t x231 = UINT16_MAX;
static int8_t x236 = -1;
static int32_t t57 = 3;
int8_t x237 = INT8_MIN;
uint32_t x240 = 13U;
volatile int32_t t58 = 6667;
uint64_t x242 = 783839727156894529LLU;
int16_t x249 = -1;
int64_t x259 = -1LL;
static int16_t x261 = INT16_MIN;
int32_t t64 = -166231;
volatile uint16_t x269 = 46U;
int32_t t66 = -27;
volatile int32_t t67 = 626;
static int8_t x277 = 27;
volatile int32_t t69 = 2;
int32_t t72 = -31;
volatile int16_t x303 = INT16_MIN;
volatile int64_t x306 = -290483407611469LL;
volatile int32_t t74 = -9;
uint16_t x310 = 22687U;
volatile int32_t t75 = 1150;
static volatile int8_t x313 = -1;
int64_t x321 = INT64_MIN;
uint16_t x322 = 1U;
uint64_t x325 = 901LLU;
uint8_t x327 = 13U;
int8_t x330 = INT8_MAX;
volatile int32_t t80 = 621;
int32_t x339 = INT32_MAX;
int8_t x340 = 8;
volatile int32_t t82 = 1816931;
static int8_t x350 = INT8_MAX;
volatile int32_t t87 = 7783;
static int64_t x363 = INT64_MIN;
uint64_t x366 = UINT64_MAX;
static int32_t x369 = INT32_MIN;
int64_t x370 = -1LL;
int64_t x377 = INT64_MIN;
volatile uint64_t x378 = 2760LLU;
int64_t x379 = 21171047899134786LL;
uint16_t x380 = 327U;
int32_t t93 = -158;
static uint64_t x385 = 14908163725628LLU;
int32_t x388 = -31347126;
uint64_t x393 = 644281789853180LLU;
volatile int32_t x398 = INT32_MIN;


void f0(void) {
	volatile uint16_t x2 = UINT16_MAX;
	int8_t x3 = INT8_MAX;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 263867;

	t0 = ((x1/x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int16_t x6 = -11;
	static int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -1895;

	t1 = ((x5/x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 2LLU;
	volatile int8_t x11 = -14;
	int32_t t2 = 50;

	t2 = ((x9/x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	volatile uint8_t x14 = 1U;
	volatile int32_t x15 = INT32_MIN;
	volatile int8_t x16 = 9;
	volatile int32_t t3 = 72109217;

	t3 = ((x13/x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MIN;
	static uint16_t x20 = 1781U;
	static volatile int32_t t4 = 5749;

	t4 = ((x17/x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	uint16_t x22 = 311U;
	int32_t x23 = 46143673;
	int16_t x24 = -1;
	static volatile int32_t t5 = 333;

	t5 = ((x21/x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 612;

	t6 = ((x25/x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MIN;
	static uint16_t x31 = 0U;
	static int64_t x32 = -883215LL;
	static int32_t t7 = 0;

	t7 = ((x29/x30)==(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 294;
	static int32_t x34 = 26;
	volatile int16_t x35 = -4;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 90470041;

	t8 = ((x33/x34)==(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int32_t x38 = -40;
	int8_t x39 = 13;
	volatile int32_t t9 = 15;

	t9 = ((x37/x38)==(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	volatile int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	static uint64_t x44 = 475928LLU;

	t10 = ((x41/x42)==(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x46 = 23U;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -1;

	t11 = ((x45/x46)==(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	static int32_t x51 = -1;
	uint16_t x52 = 1816U;
	int32_t t12 = 1994215;

	t12 = ((x49/x50)==(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	static int64_t x54 = -1LL;
	uint64_t x55 = 221659208200257LLU;
	static int32_t x56 = -1;

	t13 = ((x53/x54)==(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = INT16_MAX;
	static int64_t x59 = -1LL;
	int32_t x60 = -1;

	t14 = ((x57/x58)==(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = 23U;
	volatile uint8_t x63 = 116U;
	static int64_t x64 = -1LL;
	volatile int32_t t15 = 1517819;

	t15 = ((x61/x62)==(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t t16 = 6824227;

	t16 = ((x65/x66)==(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = INT16_MIN;

	t17 = ((x69/x70)==(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 1;
	int32_t x74 = 3431;
	int8_t x75 = 0;
	int32_t x76 = -118359;
	int32_t t18 = -55;

	t18 = ((x73/x74)==(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 398252U;
	int32_t x79 = INT32_MAX;
	volatile int64_t x80 = 1457972765LL;
	int32_t t19 = -4167095;

	t19 = ((x77/x78)==(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 13927U;
	static int8_t x83 = INT8_MAX;
	int8_t x84 = 41;

	t20 = ((x81/x82)==(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 267U;
	int64_t x86 = 8178804970688861LL;
	static uint64_t x88 = 268540620568995LLU;
	int32_t t21 = 24;

	t21 = ((x85/x86)==(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	static int8_t x90 = INT8_MIN;
	volatile int32_t x91 = 111804;
	int16_t x92 = 7;
	volatile int32_t t22 = 9;

	t22 = ((x89/x90)==(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = 576U;
	static int8_t x94 = INT8_MIN;
	int64_t x95 = -2861351754801451LL;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -98617331;

	t23 = ((x93/x94)==(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MAX;
	int64_t x99 = -83002026341LL;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 11424;

	t24 = ((x97/x98)==(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	volatile uint64_t x102 = 532320637401005966LLU;
	int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t25 = -230;

	t25 = ((x101/x102)==(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	int32_t x107 = 0;
	volatile int32_t x108 = -1;
	volatile int32_t t26 = 1;

	t26 = ((x105/x106)==(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	uint8_t x110 = 25U;
	volatile int64_t x111 = -1LL;
	int32_t t27 = -90456506;

	t27 = ((x109/x110)==(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	int16_t x115 = 114;
	int8_t x116 = -4;
	int32_t t28 = 0;

	t28 = ((x113/x114)==(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = -26;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = -35325124415274711LL;

	t29 = ((x117/x118)==(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MAX;

	t30 = ((x121/x122)==(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 3U;
	int64_t x127 = INT64_MAX;
	uint32_t x128 = UINT32_MAX;

	t31 = ((x125/x126)==(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -1;
	int16_t x130 = -1;
	int16_t x132 = INT16_MIN;
	static int32_t t32 = 15892566;

	t32 = ((x129/x130)==(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x135 = INT8_MIN;

	t33 = ((x133/x134)==(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = UINT64_MAX;
	static volatile int64_t x138 = INT64_MIN;
	uint8_t x139 = 120U;
	static volatile int32_t t34 = -7364204;

	t34 = ((x137/x138)==(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = 23U;
	static int8_t x142 = INT8_MAX;
	int8_t x143 = -4;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -7038;

	t35 = ((x141/x142)==(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x147 = INT64_MIN;
	volatile int16_t x148 = INT16_MAX;
	int32_t t36 = -16473088;

	t36 = ((x145/x146)==(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static uint16_t x150 = 1648U;
	uint16_t x152 = 4842U;
	int32_t t37 = -14494;

	t37 = ((x149/x150)==(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -546018031;
	uint32_t x154 = 29U;
	int8_t x155 = INT8_MIN;
	static volatile uint16_t x156 = 15041U;
	int32_t t38 = -276424;

	t38 = ((x153/x154)==(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	static volatile uint64_t x158 = 1LLU;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t39 = 1;

	t39 = ((x157/x158)==(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = -1;
	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = INT32_MIN;
	static uint16_t x168 = UINT16_MAX;
	volatile int32_t t40 = -429984;

	t40 = ((x165/x166)==(x167^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MAX;
	int64_t x172 = -1LL;
	volatile int32_t t41 = 3421;

	t41 = ((x169/x170)==(x171^x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = -1;
	int16_t x174 = 1;
	static volatile uint8_t x175 = UINT8_MAX;
	volatile int32_t t42 = 843139;

	t42 = ((x173/x174)==(x175^x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = 2809;
	uint64_t x179 = 806LLU;
	int32_t t43 = 193091;

	t43 = ((x177/x178)==(x179^x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -97;
	uint16_t x182 = 3U;
	int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t44 = -8832192;

	t44 = ((x181/x182)==(x183^x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	volatile uint32_t x186 = UINT32_MAX;
	int64_t x187 = -1LL;
	volatile int32_t t45 = 106;

	t45 = ((x185/x186)==(x187^x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = INT16_MIN;
	uint8_t x190 = 70U;
	int16_t x191 = -1;
	volatile int64_t x192 = 15LL;

	t46 = ((x189/x190)==(x191^x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	volatile uint16_t x194 = 14787U;
	int32_t x195 = INT32_MAX;
	volatile int32_t t47 = 124;

	t47 = ((x193/x194)==(x195^x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MAX;
	static int8_t x199 = -53;
	int16_t x200 = INT16_MIN;
	static int32_t t48 = -18811;

	t48 = ((x197/x198)==(x199^x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = 129566;
	int32_t x202 = INT32_MAX;
	int32_t x203 = -1;
	volatile uint32_t x204 = 44584U;
	int32_t t49 = -3;

	t49 = ((x201/x202)==(x203^x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = 0;
	int8_t x206 = 9;
	int64_t x207 = INT64_MAX;
	int8_t x208 = -58;

	t50 = ((x205/x206)==(x207^x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = -1LL;

	t51 = ((x209/x210)==(x211^x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = 9100003250978585LLU;
	int16_t x216 = -1;
	int32_t t52 = 6328;

	t52 = ((x213/x214)==(x215^x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MIN;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = 916LL;
	int8_t x220 = INT8_MIN;
	volatile int32_t t53 = -1142726;

	t53 = ((x217/x218)==(x219^x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = -37;
	static uint8_t x222 = 37U;
	volatile int16_t x223 = INT16_MIN;
	volatile int32_t t54 = -184245;

	t54 = ((x221/x222)==(x223^x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x228 = 2013U;
	static int32_t t55 = -38085;

	t55 = ((x225/x226)==(x227^x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	volatile int64_t x230 = 13373579LL;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t56 = -1;

	t56 = ((x229/x230)==(x231^x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = -12;
	int32_t x234 = INT32_MIN;
	uint16_t x235 = UINT16_MAX;

	t57 = ((x233/x234)==(x235^x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MAX;

	t58 = ((x237/x238)==(x239^x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	uint16_t x243 = UINT16_MAX;
	volatile uint8_t x244 = 31U;
	static int32_t t59 = -496001;

	t59 = ((x241/x242)==(x243^x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x245 = 2104774498932158680LLU;
	volatile uint64_t x246 = UINT64_MAX;
	static int64_t x247 = -31262778083062571LL;
	volatile int64_t x248 = -27159LL;
	volatile int32_t t60 = -45121902;

	t60 = ((x245/x246)==(x247^x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x250 = INT8_MIN;
	static uint16_t x251 = UINT16_MAX;
	static int8_t x252 = -1;
	int32_t t61 = -45;

	t61 = ((x249/x250)==(x251^x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 14235653LLU;
	volatile uint64_t x254 = 15537672LLU;
	static volatile int16_t x255 = INT16_MIN;
	static uint32_t x256 = UINT32_MAX;
	int32_t t62 = -1;

	t62 = ((x253/x254)==(x255^x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MIN;
	static int8_t x260 = INT8_MAX;
	volatile int32_t t63 = 400;

	t63 = ((x257/x258)==(x259^x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x262 = UINT16_MAX;
	uint8_t x263 = 8U;
	uint32_t x264 = 5U;

	t64 = ((x261/x262)==(x263^x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = 6107416968LL;
	static volatile int16_t x267 = 154;
	static int16_t x268 = 5657;
	static volatile int32_t t65 = -24716;

	t65 = ((x265/x266)==(x267^x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x270 = 123037U;
	int64_t x271 = -1LL;
	static volatile int8_t x272 = INT8_MIN;

	t66 = ((x269/x270)==(x271^x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	int16_t x274 = 1;
	volatile uint16_t x275 = 934U;
	uint32_t x276 = 88U;

	t67 = ((x273/x274)==(x275^x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x278 = 2U;
	int64_t x279 = 1564274586071967209LL;
	volatile int32_t x280 = -13502051;
	volatile int32_t t68 = 1060935789;

	t68 = ((x277/x278)==(x279^x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile int64_t x286 = -585737714145468080LL;
	int16_t x287 = INT16_MAX;
	int64_t x288 = -1213LL;

	t69 = ((x285/x286)==(x287^x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 3490453U;
	static volatile int16_t x290 = -6;
	static uint8_t x291 = 9U;
	int8_t x292 = -1;
	int32_t t70 = -24944566;

	t70 = ((x289/x290)==(x291^x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -1LL;
	volatile uint16_t x294 = 19U;
	int16_t x295 = -19;
	volatile uint16_t x296 = UINT16_MAX;
	static volatile int32_t t71 = 9;

	t71 = ((x293/x294)==(x295^x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -6692;
	int16_t x298 = -1;
	volatile int64_t x299 = -1046316249LL;
	static int8_t x300 = INT8_MAX;

	t72 = ((x297/x298)==(x299^x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = INT64_MIN;
	int64_t x302 = -3026021198659186LL;
	volatile uint64_t x304 = 59854711026LLU;
	volatile int32_t t73 = 29863;

	t73 = ((x301/x302)==(x303^x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = -127;

	t74 = ((x305/x306)==(x307^x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 9U;
	int64_t x311 = -1LL;
	uint8_t x312 = UINT8_MAX;

	t75 = ((x309/x310)==(x311^x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MIN;
	volatile uint64_t x316 = 10746166365759LLU;
	static volatile int32_t t76 = -129338;

	t76 = ((x313/x314)==(x315^x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -30;
	uint16_t x318 = UINT16_MAX;
	volatile int32_t x319 = 10299;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t77 = 0;

	t77 = ((x317/x318)==(x319^x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x323 = UINT16_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t78 = 536511422;

	t78 = ((x321/x322)==(x323^x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -1;
	uint16_t x328 = 13505U;
	volatile int32_t t79 = -2324563;

	t79 = ((x325/x326)==(x327^x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = 20;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MAX;

	t80 = ((x329/x330)==(x331^x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	static volatile uint16_t x334 = 31U;
	int16_t x335 = -1;
	static uint8_t x336 = 1U;
	volatile int32_t t81 = 2;

	t81 = ((x333/x334)==(x335^x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x337 = INT64_MAX;
	static uint32_t x338 = 189608956U;

	t82 = ((x337/x338)==(x339^x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	static uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 605U;
	int32_t t83 = -1;

	t83 = ((x341/x342)==(x343^x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MAX;
	uint32_t x346 = UINT32_MAX;
	volatile int64_t x347 = INT64_MIN;
	int16_t x348 = 236;
	static int32_t t84 = 218814;

	t84 = ((x345/x346)==(x347^x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = 3LL;
	int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	volatile int32_t t85 = -23363;

	t85 = ((x349/x350)==(x351^x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = -629897;
	volatile int32_t x355 = -1;
	volatile int8_t x356 = -1;
	int32_t t86 = 0;

	t86 = ((x353/x354)==(x355^x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -27685887LL;
	volatile uint16_t x358 = 8360U;
	int32_t x359 = -413;
	static int8_t x360 = INT8_MIN;

	t87 = ((x357/x358)==(x359^x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile int32_t x362 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	static volatile int32_t t88 = 23079;

	t88 = ((x361/x362)==(x363^x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x367 = 6U;
	static int8_t x368 = INT8_MIN;
	static volatile int32_t t89 = 32188827;

	t89 = ((x365/x366)==(x367^x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x371 = 244;
	static int8_t x372 = 1;
	static int32_t t90 = -49807416;

	t90 = ((x369/x370)==(x371^x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	static int64_t x374 = INT64_MIN;
	uint32_t x375 = 24695169U;
	int16_t x376 = INT16_MIN;
	int32_t t91 = -23936;

	t91 = ((x373/x374)==(x375^x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t t92 = -5141566;

	t92 = ((x377/x378)==(x379^x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x381 = -40609LL;
	int64_t x382 = -1LL;
	uint16_t x383 = 1688U;
	int16_t x384 = INT16_MIN;

	t93 = ((x381/x382)==(x383^x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x386 = INT8_MIN;
	int8_t x387 = 11;
	volatile int32_t t94 = -110324175;

	t94 = ((x385/x386)==(x387^x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x389 = 39U;
	uint8_t x390 = UINT8_MAX;
	static int8_t x391 = 33;
	volatile int8_t x392 = INT8_MIN;
	int32_t t95 = -729;

	t95 = ((x389/x390)==(x391^x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x394 = UINT16_MAX;
	volatile int16_t x395 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t96 = 376553;

	t96 = ((x393/x394)==(x395^x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = 177181794U;
	static int8_t x399 = INT8_MIN;
	static volatile int16_t x400 = -1;
	int32_t t97 = 1322355;

	t97 = ((x397/x398)==(x399^x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	static int16_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t98 = 99;

	t98 = ((x401/x402)==(x403^x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	uint16_t x406 = 112U;
	volatile int32_t x407 = INT32_MAX;
	static volatile int16_t x408 = 9;
	int32_t t99 = -26770793;

	t99 = ((x405/x406)==(x407^x408));

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

