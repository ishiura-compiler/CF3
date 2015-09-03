#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 167675172434570946LL;
uint32_t x9 = 71436U;
volatile uint8_t x18 = 35U;
static int16_t x19 = INT16_MIN;
uint64_t x23 = UINT64_MAX;
int16_t x28 = INT16_MIN;
volatile int32_t x33 = 1200;
int8_t x34 = 1;
static int8_t x35 = 6;
static uint16_t x41 = 12U;
volatile int32_t t9 = 1813052;
int16_t x45 = INT16_MIN;
uint32_t x55 = 142U;
int8_t x56 = INT8_MAX;
volatile int32_t t12 = 7703;
int32_t x57 = -217;
int32_t x62 = INT32_MAX;
static int8_t x65 = INT8_MAX;
uint8_t x66 = UINT8_MAX;
static uint32_t t15 = 2103662U;
int32_t x72 = 36702;
static volatile int32_t t18 = -712;
static int64_t x82 = -1LL;
int64_t x85 = 0LL;
static int16_t x87 = INT16_MAX;
uint16_t x97 = 7050U;
int32_t t23 = -11060;
volatile uint64_t x103 = 7376632943289729LLU;
uint16_t x119 = 18731U;
static int32_t t29 = -1;
static int8_t x125 = -1;
int32_t t31 = -2714948;
static int16_t x133 = INT16_MIN;
volatile int32_t t32 = 1772;
static uint32_t x137 = UINT32_MAX;
static uint16_t x138 = UINT16_MAX;
int16_t x140 = -49;
int16_t x141 = 20;
int16_t x144 = INT16_MIN;
int8_t x151 = 27;
int32_t x154 = -1;
int64_t x158 = -92LL;
int32_t t38 = -8966573;
volatile uint8_t x161 = UINT8_MAX;
int32_t t41 = 2;
uint16_t x180 = 51U;
volatile int8_t x181 = INT8_MAX;
volatile int32_t x185 = -3130916;
volatile int32_t t46 = 3151;
int64_t x193 = -8145008563LL;
uint64_t x195 = UINT64_MAX;
int32_t t48 = -383400327;
static volatile int64_t x203 = INT64_MIN;
int64_t x208 = 11562LL;
volatile int64_t t50 = 7306146LL;
static int64_t x212 = INT64_MIN;
volatile int64_t x214 = -1LL;
int16_t x219 = -9830;
static volatile uint16_t x223 = 808U;
uint32_t x225 = 47328200U;
static int32_t t55 = 157;
int8_t x243 = INT8_MIN;
int32_t t59 = -3;
int16_t x258 = INT16_MIN;
int64_t x259 = INT64_MIN;
int64_t x261 = INT64_MIN;
int16_t x264 = 11;
int32_t t64 = -521188;
int16_t x271 = INT16_MIN;
uint32_t x273 = UINT32_MAX;
static volatile uint16_t x274 = 802U;
static volatile uint16_t x302 = UINT16_MAX;
static int32_t t75 = -3;
int64_t x314 = INT64_MIN;
uint16_t x315 = 5U;
volatile uint32_t t77 = 107U;
volatile int32_t t78 = 1071;
static int16_t x332 = -1;
uint16_t x338 = 50U;
int32_t x339 = -2;
static uint16_t x342 = 31685U;
volatile int8_t x344 = INT8_MAX;
volatile int32_t t85 = 582;
int16_t x349 = INT16_MIN;
static int8_t x357 = INT8_MIN;
int32_t x359 = INT32_MIN;
volatile int8_t x360 = INT8_MAX;
int16_t x362 = -1;
static int32_t t91 = 226957021;
static int32_t x376 = -1;
static int32_t t92 = -22163357;
uint64_t x386 = UINT64_MAX;
volatile uint32_t x387 = UINT32_MAX;
int64_t x388 = -1LL;
int64_t t95 = 0LL;
int16_t x389 = -1;
static int16_t x390 = INT16_MIN;
volatile int64_t x391 = -1LL;
volatile int32_t x396 = INT32_MAX;
static int16_t x397 = INT16_MIN;
volatile int16_t x402 = 2;


void f0(void) {
	int32_t x1 = -1;
	static int64_t x2 = 13LL;
	static int32_t x3 = INT32_MIN;
	int8_t x4 = 1;
	volatile int32_t t0 = -12869;

	t0 = (((x1/x2)<x3)^x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int64_t x7 = INT64_MAX;
	uint64_t x8 = 17744434456424123LLU;
	static uint64_t t1 = 3920636087442843399LLU;

	t1 = (((x5/x6)<x7)^x8);

	if (t1 != 17744434456424122LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	int8_t x11 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 16821;

	t2 = (((x9/x10)<x11)^x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 62U;
	volatile uint32_t x14 = 131U;
	uint64_t x15 = 564170974413173870LLU;
	int16_t x16 = -1;
	volatile int32_t t3 = 6;

	t3 = (((x13/x14)<x15)^x16);

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x20 = 0;
	static int32_t t4 = -6959649;

	t4 = (((x17/x18)<x19)^x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -3;
	int32_t x22 = 77;
	uint32_t x24 = 2800998U;
	uint32_t t5 = 105478U;

	t5 = (((x21/x22)<x23)^x24);

	if (t5 != 2800999U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int8_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t6 = 3511549;

	t6 = (((x25/x26)<x27)^x28);

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x36 = 9657U;
	int32_t t7 = -33;

	t7 = (((x33/x34)<x35)^x36);

	if (t7 != 9657) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = 1330LL;
	int16_t x38 = 1;
	int8_t x39 = 54;
	static volatile int8_t x40 = -2;
	int32_t t8 = 1131884;

	t8 = (((x37/x38)<x39)^x40);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -1LL;
	static volatile int32_t x43 = INT32_MAX;
	static int32_t x44 = INT32_MIN;

	t9 = (((x41/x42)<x43)^x44);

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 4104378LLU;
	volatile int64_t x48 = INT64_MIN;
	int64_t t10 = 56LL;

	t10 = (((x45/x46)<x47)^x48);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = -18104496;
	volatile uint32_t x52 = 595U;
	uint32_t t11 = 3585U;

	t11 = (((x49/x50)<x51)^x52);

	if (t11 != 595U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 175U;
	static int32_t x54 = INT32_MIN;

	t12 = (((x53/x54)<x55)^x56);

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = -213;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (((x57/x58)<x59)^x60);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int8_t x63 = -51;
	static uint64_t x64 = 3482977LLU;
	uint64_t t14 = 822222119780LLU;

	t14 = (((x61/x62)<x63)^x64);

	if (t14 != 3482977LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x67 = INT8_MIN;
	uint32_t x68 = 824898U;

	t15 = (((x65/x66)<x67)^x68);

	if (t15 != 824898U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 17U;
	static int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MAX;
	static volatile int32_t t16 = -6;

	t16 = (((x69/x70)<x71)^x72);

	if (t16 != 36703) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = 1949672901U;
	volatile int32_t x76 = 70;
	static volatile int32_t t17 = -988;

	t17 = (((x73/x74)<x75)^x76);

	if (t17 != 70) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = 30U;
	int16_t x80 = -1;

	t18 = (((x77/x78)<x79)^x80);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -154853LL;
	uint16_t x83 = 420U;
	int32_t x84 = -2025;
	volatile int32_t t19 = -289126094;

	t19 = (((x81/x82)<x83)^x84);

	if (t19 != -2025) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x86 = INT8_MIN;
	uint64_t x88 = 11344940856LLU;
	uint64_t t20 = 3126468966LLU;

	t20 = (((x85/x86)<x87)^x88);

	if (t20 != 11344940857LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 45U;
	static volatile int8_t x90 = INT8_MIN;
	int8_t x91 = -2;
	uint16_t x92 = 2611U;
	int32_t t21 = 1635408;

	t21 = (((x89/x90)<x91)^x92);

	if (t21 != 2610) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -5739933372LL;
	uint64_t x94 = UINT64_MAX;
	volatile int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t22 = 119073;

	t22 = (((x93/x94)<x95)^x96);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int32_t x100 = -1;

	t23 = (((x97/x98)<x99)^x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -282LL;
	volatile int8_t x102 = INT8_MAX;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t24 = INT32_MIN;

	t24 = (((x101/x102)<x103)^x104);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = UINT16_MAX;
	uint32_t x106 = 38U;
	volatile uint64_t x107 = 25970330LLU;
	int16_t x108 = -31;
	volatile int32_t t25 = 532696;

	t25 = (((x105/x106)<x107)^x108);

	if (t25 != -32) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = 179207205LL;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = -1;
	static volatile uint64_t x112 = 244308087997LLU;
	uint64_t t26 = 186527611264299519LLU;

	t26 = (((x109/x110)<x111)^x112);

	if (t26 != 244308087997LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = UINT64_MAX;
	int8_t x114 = -34;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = -57803562;

	t27 = (((x113/x114)<x115)^x116);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -1;
	int16_t x118 = 14915;
	static int8_t x120 = 13;
	static int32_t t28 = -7595623;

	t28 = (((x117/x118)<x119)^x120);

	if (t28 != 12) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = UINT64_MAX;
	static volatile int64_t x122 = -1LL;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = 94U;

	t29 = (((x121/x122)<x123)^x124);

	if (t29 != 95) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	volatile int64_t x128 = INT64_MAX;
	static volatile int64_t t30 = INT64_MAX;

	t30 = (((x125/x126)<x127)^x128);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = 2110;
	uint32_t x130 = 6458U;
	uint16_t x131 = 344U;
	int8_t x132 = 1;

	t31 = (((x129/x130)<x131)^x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x134 = 5U;
	int64_t x135 = 53122LL;
	int8_t x136 = 6;

	t32 = (((x133/x134)<x135)^x136);

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x139 = 11616;
	int32_t t33 = 372173465;

	t33 = (((x137/x138)<x139)^x140);

	if (t33 != -49) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x142 = INT16_MAX;
	int16_t x143 = -6;
	int32_t t34 = 1551;

	t34 = (((x141/x142)<x143)^x144);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = 428507919;
	uint16_t x146 = UINT16_MAX;
	uint64_t x147 = 3326LLU;
	int32_t x148 = -1;
	volatile int32_t t35 = 1415;

	t35 = (((x145/x146)<x147)^x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 3021U;
	uint16_t x150 = 7U;
	volatile int32_t x152 = 96693742;
	volatile int32_t t36 = 4;

	t36 = (((x149/x150)<x151)^x152);

	if (t36 != 96693742) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	int64_t x155 = INT64_MAX;
	volatile int64_t x156 = -6150LL;
	static int64_t t37 = -727140LL;

	t37 = (((x153/x154)<x155)^x156);

	if (t37 != -6149LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x157 = INT64_MIN;
	static uint64_t x159 = 9311205933LLU;
	int16_t x160 = -410;

	t38 = (((x157/x158)<x159)^x160);

	if (t38 != -410) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	int16_t x163 = -81;
	uint32_t x164 = 180U;
	uint32_t t39 = 414886U;

	t39 = (((x161/x162)<x163)^x164);

	if (t39 != 180U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = 8234161LL;
	int32_t x166 = INT32_MAX;
	int64_t x167 = INT64_MIN;
	static int64_t x168 = -1LL;
	volatile int64_t t40 = 532981441LL;

	t40 = (((x165/x166)<x167)^x168);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 842474971623LLU;
	int16_t x170 = -474;
	int16_t x171 = -1;
	int32_t x172 = 48668388;

	t41 = (((x169/x170)<x171)^x172);

	if (t41 != 48668389) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 1;
	static int16_t x174 = -8644;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -1LL;
	volatile int64_t t42 = -438LL;

	t42 = (((x173/x174)<x175)^x176);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 116U;
	int64_t x178 = INT64_MAX;
	uint32_t x179 = 1652153U;
	volatile int32_t t43 = 62808;

	t43 = (((x177/x178)<x179)^x180);

	if (t43 != 50) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x182 = UINT8_MAX;
	int64_t x183 = 32540692287347091LL;
	uint64_t x184 = 3203153069LLU;
	static uint64_t t44 = 53458364196173LLU;

	t44 = (((x181/x182)<x183)^x184);

	if (t44 != 3203153068LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = 2;
	int16_t x187 = 145;
	uint64_t x188 = 8253LLU;
	volatile uint64_t t45 = 1774234803534LLU;

	t45 = (((x185/x186)<x187)^x188);

	if (t45 != 8252LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	static uint8_t x190 = UINT8_MAX;
	uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 13U;

	t46 = (((x189/x190)<x191)^x192);

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x194 = INT16_MIN;
	static volatile int16_t x196 = INT16_MIN;
	volatile int32_t t47 = -132;

	t47 = (((x193/x194)<x195)^x196);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 4272282260LLU;
	uint8_t x198 = 24U;
	int8_t x199 = 3;
	int32_t x200 = 113512;

	t48 = (((x197/x198)<x199)^x200);

	if (t48 != 113512) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x201 = 1U;
	int16_t x202 = INT16_MAX;
	int16_t x204 = 43;
	static volatile int32_t t49 = -42489;

	t49 = (((x201/x202)<x203)^x204);

	if (t49 != 43) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x205 = INT8_MAX;
	volatile int32_t x206 = INT32_MIN;
	int64_t x207 = 9LL;

	t50 = (((x205/x206)<x207)^x208);

	if (t50 != 11563LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = UINT64_MAX;
	int64_t t51 = 496974239349829111LL;

	t51 = (((x209/x210)<x211)^x212);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x213 = 15U;
	static int8_t x215 = 1;
	int16_t x216 = INT16_MIN;
	int32_t t52 = 146736;

	t52 = (((x213/x214)<x215)^x216);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = UINT16_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t53 = 1;

	t53 = (((x217/x218)<x219)^x220);

	if (t53 != 126) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MAX;
	uint16_t x224 = 4924U;
	volatile int32_t t54 = 644246;

	t54 = (((x221/x222)<x223)^x224);

	if (t54 != 4925) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x226 = -479;
	int64_t x227 = -366002519403LL;
	int16_t x228 = -6534;

	t55 = (((x225/x226)<x227)^x228);

	if (t55 != -6534) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x229 = 0U;
	int16_t x230 = -1;
	volatile uint32_t x231 = UINT32_MAX;
	int64_t x232 = -1LL;
	volatile int64_t t56 = -11256776331LL;

	t56 = (((x229/x230)<x231)^x232);

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MIN;
	int16_t x234 = -71;
	int8_t x235 = INT8_MAX;
	static volatile int16_t x236 = INT16_MAX;
	int32_t t57 = -60;

	t57 = (((x233/x234)<x235)^x236);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	uint8_t x238 = 1U;
	int8_t x239 = -1;
	uint8_t x240 = 4U;
	volatile int32_t t58 = -724719684;

	t58 = (((x237/x238)<x239)^x240);

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = INT32_MIN;
	volatile uint64_t x242 = 94373LLU;
	int32_t x244 = INT32_MIN;

	t59 = (((x241/x242)<x243)^x244);

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 12LLU;
	volatile int32_t x246 = -32387;
	volatile int32_t x247 = INT32_MIN;
	int16_t x248 = -1;
	int32_t t60 = 732497090;

	t60 = (((x245/x246)<x247)^x248);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = 12;
	int8_t x250 = INT8_MIN;
	int8_t x251 = -1;
	static int8_t x252 = 21;
	volatile int32_t t61 = -1872;

	t61 = (((x249/x250)<x251)^x252);

	if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = INT16_MAX;
	static int16_t x254 = -1;
	volatile uint32_t x255 = 1239617923U;
	static volatile uint32_t x256 = 2096683U;
	static volatile uint32_t t62 = 5U;

	t62 = (((x253/x254)<x255)^x256);

	if (t62 != 2096683U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MAX;
	uint16_t x260 = 22U;
	int32_t t63 = 88233344;

	t63 = (((x257/x258)<x259)^x260);

	if (t63 != 22) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = -617;
	int16_t x263 = INT16_MIN;

	t64 = (((x261/x262)<x263)^x264);

	if (t64 != 11) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = 15534130268124043LLU;
	int32_t x267 = INT32_MAX;
	int64_t x268 = INT64_MAX;
	int64_t t65 = -296657403LL;

	t65 = (((x265/x266)<x267)^x268);

	if (t65 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (((x269/x270)<x271)^x272);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 15642U;
	volatile uint32_t t67 = 176278U;

	t67 = (((x273/x274)<x275)^x276);

	if (t67 != 15643U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x277 = 2U;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = 1;
	int64_t x280 = -1LL;
	volatile int64_t t68 = -1140380031447526LL;

	t68 = (((x277/x278)<x279)^x280);

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	volatile int64_t x282 = 1LL;
	int64_t x283 = -1LL;
	uint32_t x284 = 16208U;
	static uint32_t t69 = 1090660185U;

	t69 = (((x281/x282)<x283)^x284);

	if (t69 != 16209U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = -1;
	volatile int32_t t70 = -72;

	t70 = (((x285/x286)<x287)^x288);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MIN;
	volatile int64_t x290 = INT64_MIN;
	int64_t x291 = 66109859981295134LL;
	volatile int32_t x292 = INT32_MIN;
	int32_t t71 = 52;

	t71 = (((x289/x290)<x291)^x292);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 10U;
	static volatile uint32_t x294 = 113864U;
	volatile uint32_t x295 = 3133U;
	static int16_t x296 = INT16_MIN;
	int32_t t72 = 94290;

	t72 = (((x293/x294)<x295)^x296);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 1U;
	uint64_t x298 = 430953191963LLU;
	static uint64_t x299 = 295426LLU;
	int32_t x300 = -1;
	volatile int32_t t73 = 1458;

	t73 = (((x297/x298)<x299)^x300);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	int8_t x303 = 1;
	int32_t x304 = INT32_MIN;
	volatile int32_t t74 = -6;

	t74 = (((x301/x302)<x303)^x304);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = 357;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = 290LLU;
	static int32_t x308 = INT32_MAX;

	t75 = (((x305/x306)<x307)^x308);

	if (t75 != 2147483646) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x309 = 799;
	int32_t x310 = 539358;
	uint16_t x311 = 7U;
	int16_t x312 = 302;
	volatile int32_t t76 = -118;

	t76 = (((x309/x310)<x311)^x312);

	if (t76 != 303) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x313 = 1U;
	uint32_t x316 = 5984U;

	t77 = (((x313/x314)<x315)^x316);

	if (t77 != 5985U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = 84;
	volatile int32_t x318 = -1;
	volatile int16_t x319 = INT16_MIN;
	uint16_t x320 = 0U;

	t78 = (((x317/x318)<x319)^x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 990833U;
	int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t79 = 0;

	t79 = (((x321/x322)<x323)^x324);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 27105U;
	uint8_t x326 = 2U;
	static int8_t x327 = INT8_MAX;
	static int64_t x328 = -1LL;
	static volatile int64_t t80 = 1854772386278191LL;

	t80 = (((x325/x326)<x327)^x328);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = -12;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -195790;
	int32_t t81 = 35081;

	t81 = (((x329/x330)<x331)^x332);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = UINT16_MAX;
	int32_t x334 = -1;
	static uint16_t x335 = 24930U;
	uint8_t x336 = 9U;
	volatile int32_t t82 = -286;

	t82 = (((x333/x334)<x335)^x336);

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	int16_t x340 = INT16_MIN;
	static int32_t t83 = 7347492;

	t83 = (((x337/x338)<x339)^x340);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int64_t x343 = 37323LL;
	int32_t t84 = 1241563;

	t84 = (((x341/x342)<x343)^x344);

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = -6350;
	int8_t x347 = INT8_MIN;
	static int32_t x348 = INT32_MIN;

	t85 = (((x345/x346)<x347)^x348);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x350 = 811735004770LLU;
	static volatile uint16_t x351 = 15U;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t86 = -22323;

	t86 = (((x349/x350)<x351)^x352);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 2U;
	int16_t x356 = -1;
	volatile int32_t t87 = -128553;

	t87 = (((x353/x354)<x355)^x356);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x358 = 79U;
	static int32_t t88 = 467925;

	t88 = (((x357/x358)<x359)^x360);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MAX;
	int8_t x363 = INT8_MAX;
	int32_t x364 = -1;
	static int32_t t89 = 11971;

	t89 = (((x361/x362)<x363)^x364);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = -1;
	volatile int16_t x366 = -1;
	static int32_t x367 = 8609;
	static uint64_t x368 = 32976584680820363LLU;
	volatile uint64_t t90 = 1778337LLU;

	t90 = (((x365/x366)<x367)^x368);

	if (t90 != 32976584680820362LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = -231;
	static uint32_t x371 = UINT32_MAX;
	int16_t x372 = -5;

	t91 = (((x369/x370)<x371)^x372);

	if (t91 != -6) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = -24500435LL;
	static uint8_t x374 = UINT8_MAX;
	volatile int16_t x375 = INT16_MAX;

	t92 = (((x373/x374)<x375)^x376);

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x377 = 1860U;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (((x377/x378)<x379)^x380);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x381 = 7952046179864LLU;
	int64_t x382 = INT64_MAX;
	volatile int8_t x383 = -1;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t94 = 6951026;

	t94 = (((x381/x382)<x383)^x384);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x385 = 1U;

	t95 = (((x385/x386)<x387)^x388);

	if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x392 = INT64_MIN;
	volatile int64_t t96 = INT64_MIN;

	t96 = (((x389/x390)<x391)^x392);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x393 = 2U;
	volatile int64_t x394 = INT64_MAX;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t t97 = 2;

	t97 = (((x393/x394)<x395)^x396);

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x398 = 1141;
	uint64_t x399 = 40884171225873769LLU;
	static int16_t x400 = INT16_MIN;
	static int32_t t98 = -126;

	t98 = (((x397/x398)<x399)^x400);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x401 = INT16_MIN;
	int32_t x403 = 612605264;
	volatile int64_t x404 = INT64_MAX;
	int64_t t99 = 596866587308243LL;

	t99 = (((x401/x402)<x403)^x404);

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

