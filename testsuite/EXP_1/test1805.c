#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint32_t x4 = 53376591U;
volatile int8_t x8 = INT8_MAX;
uint16_t x9 = 1U;
volatile int64_t t6 = 194LL;
volatile int64_t x45 = -11052LL;
int64_t x50 = INT64_MIN;
static int32_t x51 = INT32_MIN;
static uint32_t t12 = 2084871U;
static int8_t x54 = INT8_MAX;
uint32_t x58 = 4072760U;
volatile int64_t t14 = 230142LL;
int32_t x63 = 4509474;
volatile int8_t x65 = 17;
uint32_t x66 = 9U;
int32_t x68 = INT32_MAX;
int16_t x70 = 72;
int8_t x76 = -4;
volatile int64_t x79 = -16346346LL;
volatile int32_t t19 = -14863;
uint16_t x81 = 219U;
int8_t x85 = -1;
uint64_t x89 = UINT64_MAX;
int16_t x91 = INT16_MIN;
static int16_t x92 = INT16_MIN;
volatile int16_t x94 = 252;
int32_t t23 = 106259250;
volatile int8_t x100 = INT8_MIN;
int32_t x103 = INT32_MIN;
int64_t x104 = -131462037058387755LL;
static int8_t x107 = -1;
volatile int32_t t26 = 12276;
int32_t x116 = 10943399;
static volatile int8_t x119 = INT8_MAX;
static int32_t t29 = -163491;
int8_t x121 = INT8_MIN;
static int16_t x128 = INT16_MIN;
int8_t x132 = 1;
uint16_t x134 = 52U;
int32_t x144 = -203132786;
int8_t x147 = INT8_MIN;
int16_t x149 = -990;
static uint32_t x161 = 1U;
int32_t t40 = 127580573;
int8_t x168 = INT8_MIN;
volatile uint32_t x175 = UINT32_MAX;
static uint16_t x180 = UINT16_MAX;
int32_t t44 = 1;
int32_t x187 = INT32_MAX;
volatile uint32_t x197 = 106U;
int32_t x202 = -1;
volatile int64_t t50 = -26125LL;
int16_t x208 = INT16_MIN;
int32_t x210 = -855377331;
volatile uint64_t x212 = 56403485LLU;
int16_t x219 = -1;
volatile uint64_t x225 = 3LLU;
volatile int8_t x231 = INT8_MAX;
uint8_t x232 = 7U;
int16_t x235 = INT16_MIN;
uint32_t x238 = 20U;
int32_t x241 = -1;
static int8_t x244 = INT8_MAX;
static uint64_t x252 = UINT64_MAX;
static uint32_t x256 = UINT32_MAX;
volatile uint32_t x257 = 108U;
volatile int64_t x258 = -1LL;
int8_t x266 = -1;
int16_t x269 = 1;
int8_t x273 = INT8_MIN;
int8_t x275 = INT8_MAX;
static volatile int16_t x280 = -1;
static uint32_t x283 = UINT32_MAX;
volatile uint64_t x287 = 418209304401841129LLU;
uint16_t x288 = UINT16_MAX;
uint64_t x294 = UINT64_MAX;
int8_t x298 = INT8_MAX;
volatile int16_t x299 = INT16_MAX;
int32_t t74 = -5231542;
int8_t x303 = -1;
int64_t x304 = INT64_MIN;
static uint16_t x307 = UINT16_MAX;
volatile uint64_t t76 = 98861LLU;
volatile int32_t t77 = -3822081;
uint8_t x314 = UINT8_MAX;
int32_t x317 = -1;
volatile int16_t x320 = INT16_MIN;
int32_t x332 = -1;
volatile uint32_t t83 = 105648820U;
static int64_t x355 = INT64_MIN;
static uint16_t x357 = 26U;
int32_t x358 = INT32_MIN;
volatile int32_t t89 = -3020;
static volatile uint8_t x362 = 91U;
int32_t x368 = INT32_MAX;
volatile int32_t t91 = -779545457;
uint16_t x369 = 9U;
int16_t x379 = INT16_MAX;
int16_t x380 = 3;
int16_t x381 = 206;
int16_t x383 = -1;
int16_t x386 = INT16_MIN;
static int16_t x390 = INT16_MAX;
static int16_t x392 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 60U;
	int32_t x3 = INT32_MIN;
	static volatile uint32_t t0 = 240773U;

	t0 = (((x1&x2)<x3)&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -4152LL;
	volatile int32_t x6 = 44;
	static uint64_t x7 = UINT64_MAX;
	int32_t t1 = -71724;

	t1 = (((x5&x6)<x7)&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = -2973;
	static volatile int8_t x12 = INT8_MIN;
	int32_t t2 = 1;

	t2 = (((x9&x10)<x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 437951465351LLU;
	int16_t x14 = 43;
	int8_t x15 = 0;
	volatile int16_t x16 = 389;
	static volatile int32_t t3 = -10437;

	t3 = (((x13&x14)<x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 3210U;
	uint16_t x18 = 3230U;
	volatile int64_t x19 = INT64_MAX;
	static int16_t x20 = -2;
	static volatile int32_t t4 = -2237;

	t4 = (((x17&x18)<x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	int64_t x23 = -877376423LL;
	static volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 0LL;

	t5 = (((x21&x22)<x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 126U;
	static uint32_t x26 = 2U;
	static int16_t x27 = -1;
	static volatile int64_t x28 = INT64_MIN;

	t6 = (((x25&x26)<x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -352;

	t7 = (((x29&x30)<x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 142831107;
	uint32_t x34 = 109375U;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -1;
	static int32_t t8 = -56703;

	t8 = (((x33&x34)<x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static volatile uint8_t x38 = 6U;
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 122531;

	t9 = (((x37&x38)<x39)&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	static uint16_t x42 = 605U;
	static int8_t x43 = -1;
	int32_t x44 = -25430145;
	volatile int32_t t10 = 1;

	t10 = (((x41&x42)<x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = 131;
	volatile int8_t x47 = -1;
	static volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -36781;

	t11 = (((x45&x46)<x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	uint32_t x52 = 29867U;

	t12 = (((x49&x50)<x51)&x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	volatile int32_t x55 = 63370945;
	static volatile int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = 426612;

	t13 = (((x53&x54)<x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile int16_t x59 = INT16_MIN;
	static int64_t x60 = -1LL;

	t14 = (((x57&x58)<x59)&x60);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -17;
	int8_t x62 = -3;
	uint16_t x64 = 0U;
	static int32_t t15 = -24;

	t15 = (((x61&x62)<x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x67 = 849520473;
	int32_t t16 = -163;

	t16 = (((x65&x66)<x67)&x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -1;
	int64_t x71 = -1LL;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 36;

	t17 = (((x69&x70)<x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 1459683769851686LLU;
	int32_t t18 = -4;

	t18 = (((x73&x74)<x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int16_t x78 = 679;
	uint16_t x80 = UINT16_MAX;

	t19 = (((x77&x78)<x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	static uint16_t x83 = UINT16_MAX;
	uint16_t x84 = 138U;
	static volatile int32_t t20 = 3;

	t20 = (((x81&x82)<x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 16U;
	uint64_t x87 = 5LLU;
	static int16_t x88 = 0;
	int32_t t21 = -70;

	t21 = (((x85&x86)<x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MAX;
	volatile int32_t t22 = -343;

	t22 = (((x89&x90)<x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	static uint8_t x95 = 119U;
	int32_t x96 = INT32_MIN;

	t23 = (((x93&x94)<x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	volatile int8_t x98 = INT8_MIN;
	static int64_t x99 = INT64_MIN;
	static volatile int32_t t24 = -2318768;

	t24 = (((x97&x98)<x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 27;
	int16_t x102 = INT16_MIN;
	int64_t t25 = -13160561204895LL;

	t25 = (((x101&x102)<x103)&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	volatile int64_t x106 = -1LL;
	static int8_t x108 = -1;

	t26 = (((x105&x106)<x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 5U;
	uint16_t x112 = 31U;
	volatile int32_t t27 = 14819;

	t27 = (((x109&x110)<x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	int32_t x114 = -5681202;
	int64_t x115 = INT64_MIN;
	volatile int32_t t28 = -13;

	t28 = (((x113&x114)<x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile int32_t x118 = INT32_MAX;
	int8_t x120 = INT8_MIN;

	t29 = (((x117&x118)<x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MAX;
	uint64_t x123 = 1404271LLU;
	uint32_t x124 = 63U;
	volatile uint32_t t30 = 0U;

	t30 = (((x121&x122)<x123)&x124);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	volatile int32_t t31 = -311;

	t31 = (((x125&x126)<x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint64_t x130 = 1529008532LLU;
	volatile int32_t x131 = -1;
	volatile int32_t t32 = 268;

	t32 = (((x129&x130)<x131)&x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 18516U;
	int64_t x135 = INT64_MAX;
	uint64_t x136 = UINT64_MAX;
	uint64_t t33 = 1346003594707LLU;

	t33 = (((x133&x134)<x135)&x136);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1;
	static int8_t x138 = -1;
	int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 242675977;

	t34 = (((x137&x138)<x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile uint8_t x142 = 25U;
	static uint8_t x143 = 52U;
	volatile int32_t t35 = -121444036;

	t35 = (((x141&x142)<x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -2815434013LL;
	static uint32_t x146 = 5U;
	static uint16_t x148 = 871U;
	int32_t t36 = -933851727;

	t36 = (((x145&x146)<x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = 4008U;
	int8_t x151 = -1;
	volatile int32_t x152 = -1;
	volatile int32_t t37 = -381334336;

	t37 = (((x149&x150)<x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = -104940LL;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 1390270342582383105LL;

	t38 = (((x153&x154)<x155)&x156);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -389317;
	uint64_t x158 = UINT64_MAX;
	static int32_t x159 = -1;
	int16_t x160 = 30;
	int32_t t39 = 43;

	t39 = (((x157&x158)<x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = -1LL;
	static int32_t x163 = INT32_MAX;
	volatile int8_t x164 = 1;

	t40 = (((x161&x162)<x163)&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = 31U;
	int64_t x167 = -30310LL;
	static int32_t t41 = 82;

	t41 = (((x165&x166)<x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int64_t x170 = -2492LL;
	volatile int64_t x171 = INT64_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -3570;

	t42 = (((x169&x170)<x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 1117683946652987715LL;
	volatile int16_t x174 = -1;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = 154773;

	t43 = (((x173&x174)<x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -7;
	static int32_t x178 = INT32_MAX;
	int16_t x179 = INT16_MIN;

	t44 = (((x177&x178)<x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -5LL;
	int32_t x182 = INT32_MIN;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t x184 = -1;
	static volatile int32_t t45 = 67092725;

	t45 = (((x181&x182)<x183)&x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 191963003803338175LL;
	uint16_t x186 = 6U;
	volatile uint64_t x188 = 208807545LLU;
	uint64_t t46 = 13488475494LLU;

	t46 = (((x185&x186)<x187)&x188);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 10U;
	int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	volatile int64_t x192 = INT64_MIN;
	static volatile int64_t t47 = 3374259437420LL;

	t47 = (((x189&x190)<x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 17447U;
	int32_t x194 = -19512;
	int8_t x195 = 38;
	int16_t x196 = INT16_MIN;
	int32_t t48 = 6477979;

	t48 = (((x193&x194)<x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = -1LL;
	int16_t x199 = INT16_MAX;
	volatile int16_t x200 = INT16_MIN;
	int32_t t49 = 177581247;

	t49 = (((x197&x198)<x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;

	t50 = (((x201&x202)<x203)&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = -22;
	volatile int8_t x207 = 33;
	volatile int32_t t51 = -902;

	t51 = (((x205&x206)<x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	int32_t x211 = -2776;
	static uint64_t t52 = 11979LLU;

	t52 = (((x209&x210)<x211)&x212);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = 1103;
	static uint16_t x215 = 0U;
	static volatile uint8_t x216 = 121U;
	volatile int32_t t53 = 21523;

	t53 = (((x213&x214)<x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -21144682770LL;
	static int64_t x218 = INT64_MIN;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t54 = 6969899093729LLU;

	t54 = (((x217&x218)<x219)&x220);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 2U;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MIN;
	volatile int64_t x224 = -298518LL;
	volatile int64_t t55 = 7238636001841811LL;

	t55 = (((x221&x222)<x223)&x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x226 = 12U;
	volatile int8_t x227 = -7;
	int16_t x228 = -1;
	volatile int32_t t56 = -919419;

	t56 = (((x225&x226)<x227)&x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	volatile int8_t x230 = -31;
	volatile int32_t t57 = 5572;

	t57 = (((x229&x230)<x231)&x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = 859580119;
	static uint8_t x236 = 0U;
	volatile int32_t t58 = 9237;

	t58 = (((x233&x234)<x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static int32_t x239 = -22;
	volatile int64_t x240 = INT64_MAX;
	int64_t t59 = -2018869536LL;

	t59 = (((x237&x238)<x239)&x240);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	int32_t t60 = 355590975;

	t60 = (((x241&x242)<x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 1912340055U;
	static uint64_t x246 = 1196LLU;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = 7LLU;
	volatile uint64_t t61 = 48179LLU;

	t61 = (((x245&x246)<x247)&x248);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = 0U;
	static uint16_t x250 = 26294U;
	int64_t x251 = 1LL;
	volatile uint64_t t62 = 35596311439225LLU;

	t62 = (((x249&x250)<x251)&x252);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = 103425597LL;
	int8_t x254 = INT8_MIN;
	volatile int16_t x255 = INT16_MAX;
	volatile uint32_t t63 = 4039U;

	t63 = (((x253&x254)<x255)&x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x259 = 72U;
	uint8_t x260 = 94U;
	static volatile int32_t t64 = 11637163;

	t64 = (((x257&x258)<x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	int16_t x263 = 44;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 42;

	t65 = (((x261&x262)<x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 14404336LL;
	volatile uint8_t x267 = 2U;
	volatile uint16_t x268 = 13U;
	int32_t t66 = 4;

	t66 = (((x265&x266)<x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -241528;
	volatile int32_t x271 = INT32_MIN;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 5022965;

	t67 = (((x269&x270)<x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -1;
	static volatile int64_t x276 = 20441LL;
	int64_t t68 = -266512833LL;

	t68 = (((x273&x274)<x275)&x276);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int32_t t69 = 52;

	t69 = (((x277&x278)<x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	volatile int8_t x282 = -30;
	int8_t x284 = -11;
	static volatile int32_t t70 = 1;

	t70 = (((x281&x282)<x283)&x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int64_t x286 = INT64_MIN;
	static volatile int32_t t71 = -769;

	t71 = (((x285&x286)<x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	uint64_t x291 = 183940747234387424LLU;
	uint16_t x292 = 1188U;
	static int32_t t72 = -7544278;

	t72 = (((x289&x290)<x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = -1LL;
	int64_t t73 = 28184LL;

	t73 = (((x293&x294)<x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -8932436458497661LL;
	int32_t x300 = INT32_MAX;

	t74 = (((x297&x298)<x299)&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = INT64_MIN;
	volatile int64_t t75 = -20524841473152LL;

	t75 = (((x301&x302)<x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int16_t x306 = 105;
	uint64_t x308 = 601891927679896LLU;

	t76 = (((x305&x306)<x307)&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	volatile uint32_t x310 = UINT32_MAX;
	volatile int64_t x311 = -2LL;
	static int8_t x312 = -18;

	t77 = (((x309&x310)<x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 7;
	volatile uint8_t x315 = 13U;
	int8_t x316 = INT8_MAX;
	int32_t t78 = -90;

	t78 = (((x313&x314)<x315)&x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MIN;
	static int64_t x319 = INT64_MIN;
	static volatile int32_t t79 = -10;

	t79 = (((x317&x318)<x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -1LL;
	static uint64_t x322 = 3LLU;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = -1;
	volatile int32_t t80 = 6607;

	t80 = (((x321&x322)<x323)&x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = INT64_MAX;
	static volatile int16_t x327 = -1517;
	static int64_t x328 = -27338317381122LL;
	int64_t t81 = -1297677843484093LL;

	t81 = (((x325&x326)<x327)&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	volatile int32_t x330 = INT32_MIN;
	uint16_t x331 = 330U;
	int32_t t82 = 1367;

	t82 = (((x329&x330)<x331)&x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -1;
	int32_t x334 = 76078764;
	int64_t x335 = 826LL;
	static uint32_t x336 = 1315U;

	t83 = (((x333&x334)<x335)&x336);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x337 = 0U;
	uint16_t x338 = 393U;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = UINT32_MAX;
	uint32_t t84 = 74U;

	t84 = (((x337&x338)<x339)&x340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	static int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t85 = -3816185;

	t85 = (((x341&x342)<x343)&x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile uint32_t x346 = 774736U;
	int16_t x347 = INT16_MIN;
	int32_t x348 = 338524;
	int32_t t86 = -172963573;

	t86 = (((x345&x346)<x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 61U;
	int64_t x350 = INT64_MAX;
	int64_t x351 = -1063071270570LL;
	int32_t x352 = INT32_MAX;
	int32_t t87 = 2;

	t87 = (((x349&x350)<x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	static uint32_t x354 = 90U;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -995198;

	t88 = (((x353&x354)<x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = 1;
	volatile uint8_t x360 = 3U;

	t89 = (((x357&x358)<x359)&x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	static int32_t x363 = -1;
	int16_t x364 = 0;
	int32_t t90 = 0;

	t90 = (((x361&x362)<x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -1;
	static uint64_t x366 = 3417512054LLU;
	int64_t x367 = -1LL;

	t91 = (((x365&x366)<x367)&x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	volatile int64_t x371 = 169917719711271136LL;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -10;

	t92 = (((x369&x370)<x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MIN;
	int16_t x374 = 3;
	static int8_t x375 = INT8_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 316055;

	t93 = (((x373&x374)<x375)&x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = -1;
	int32_t t94 = 219607595;

	t94 = (((x377&x378)<x379)&x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -83;
	static uint32_t x384 = 238580944U;
	volatile uint32_t t95 = 516228524U;

	t95 = (((x381&x382)<x383)&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -1LL;
	uint64_t x387 = 736899312LLU;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = -3102;

	t96 = (((x385&x386)<x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -49017011088813LL;
	int32_t x391 = -156306653;
	int32_t t97 = -10923465;

	t97 = (((x389&x390)<x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = 1323LL;
	static volatile int64_t x394 = -1973904872859LL;
	int16_t x395 = INT16_MIN;
	static uint64_t x396 = 2792303481257LLU;
	volatile uint64_t t98 = 45842174665LLU;

	t98 = (((x393&x394)<x395)&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -3;
	int16_t x398 = INT16_MAX;
	static uint64_t x399 = 6LLU;
	int16_t x400 = -8393;
	static int32_t t99 = 185;

	t99 = (((x397&x398)<x399)&x400);

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

