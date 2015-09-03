#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = INT64_MAX;
static uint8_t x9 = UINT8_MAX;
int32_t x10 = -31200;
int8_t x18 = -1;
int16_t x24 = INT16_MIN;
volatile uint64_t x27 = 59553865901901LLU;
int64_t x35 = -1LL;
int32_t t9 = -1;
int16_t x44 = -27;
static volatile int32_t t15 = 2208;
volatile int32_t t16 = 685273;
int64_t x70 = -1LL;
volatile int32_t x71 = -3711;
int32_t t17 = 173;
static int16_t x79 = INT16_MIN;
volatile int32_t t20 = -15394;
uint8_t x101 = 3U;
int16_t x104 = -2055;
int32_t t24 = -6564;
static int64_t x108 = INT64_MIN;
static volatile int64_t x111 = INT64_MIN;
volatile int8_t x119 = INT8_MIN;
int32_t x121 = INT32_MAX;
int16_t x122 = -1;
int16_t x128 = 2;
volatile int16_t x129 = 30;
volatile int32_t t31 = -10;
int32_t t33 = 148;
int16_t x146 = 5;
uint64_t x153 = 15182LLU;
int16_t x157 = INT16_MIN;
int32_t t38 = -750;
int8_t x167 = -1;
volatile int16_t x171 = INT16_MIN;
volatile int8_t x173 = -1;
int64_t x176 = 164314321514727071LL;
volatile int32_t t42 = 794513;
volatile uint32_t x177 = 16465230U;
uint32_t x181 = UINT32_MAX;
int8_t x182 = INT8_MAX;
static volatile int16_t x190 = -1;
volatile int32_t t47 = -496126;
int16_t x208 = INT16_MAX;
int16_t x213 = -1;
int64_t x216 = INT64_MIN;
int32_t t51 = -4;
uint8_t x217 = 1U;
volatile int32_t t52 = -1079;
uint32_t x227 = UINT32_MAX;
int16_t x229 = INT16_MIN;
int8_t x236 = -1;
int16_t x239 = -2670;
static volatile int32_t t58 = -4028674;
static volatile int32_t t60 = -398;
int64_t x259 = 1LL;
static volatile int32_t t62 = -149874336;
int8_t x274 = INT8_MIN;
uint16_t x296 = 8312U;
int32_t t67 = -1;
static int32_t t68 = 293519;
uint16_t x302 = UINT16_MAX;
volatile uint64_t x303 = UINT64_MAX;
volatile int32_t x306 = 457851;
static int32_t t70 = -68951;
int16_t x325 = INT16_MAX;
int32_t t75 = -971423;
int8_t x331 = -57;
int32_t t78 = -55;
uint8_t x344 = UINT8_MAX;
volatile int64_t x353 = INT64_MAX;
int64_t x355 = -1LL;
static uint8_t x361 = 0U;
static int32_t x363 = INT32_MIN;
int8_t x364 = INT8_MAX;
static int32_t t86 = 15438168;
volatile int8_t x377 = -1;
int32_t t88 = -80633219;
volatile int16_t x384 = INT16_MIN;
volatile int32_t t89 = 2;
int16_t x386 = -8;
int64_t x388 = INT64_MIN;
int32_t t90 = -9365;
int16_t x389 = -1;
int32_t x390 = INT32_MAX;
volatile int32_t t91 = -11;
volatile int16_t x393 = INT16_MIN;
int64_t x398 = 3682005482356410703LL;
int32_t x400 = INT32_MIN;
int32_t x402 = INT32_MIN;
int8_t x418 = -15;
int64_t x421 = INT64_MAX;
volatile int8_t x425 = INT8_MIN;
int16_t x426 = 1;


void f0(void) {
	uint32_t x1 = 827U;
	uint8_t x2 = 3U;
	int8_t x3 = -11;
	volatile int8_t x4 = -1;
	int32_t t0 = -4452477;

	t0 = ((x1/x2)<=(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 117U;
	uint16_t x6 = 134U;
	int64_t x7 = -1253484120777345LL;
	int32_t t1 = -1880389;

	t1 = ((x5/x6)<=(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 103U;
	volatile int32_t t2 = -4850657;

	t2 = ((x9/x10)<=(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	uint32_t x14 = 12646767U;
	int64_t x15 = INT64_MIN;
	static uint16_t x16 = 776U;
	int32_t t3 = -417;

	t3 = ((x13/x14)<=(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -13;
	int8_t x19 = INT8_MAX;
	uint8_t x20 = 6U;
	int32_t t4 = -2005;

	t4 = ((x17/x18)<=(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -34226;
	int64_t x22 = -72LL;
	int64_t x23 = INT64_MAX;
	int32_t t5 = 4;

	t5 = ((x21/x22)<=(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 15558850U;
	int32_t x26 = -1;
	static int32_t x28 = INT32_MIN;
	int32_t t6 = -832355;

	t6 = ((x25/x26)<=(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 335;
	int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	uint64_t x32 = 27779384649714LLU;
	volatile int32_t t7 = 14117141;

	t7 = ((x29/x30)<=(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MIN;
	int16_t x36 = -1;
	int32_t t8 = -270946;

	t8 = ((x33/x34)<=(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -4006;
	volatile uint8_t x38 = 6U;
	uint8_t x39 = 23U;
	static uint8_t x40 = 4U;

	t9 = ((x37/x38)<=(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x42 = -1;
	uint32_t x43 = 889395U;
	volatile int32_t t10 = -38466180;

	t10 = ((x41/x42)<=(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x45 = 1U;
	int32_t x46 = INT32_MIN;
	int16_t x47 = -353;
	int64_t x48 = -1466420662LL;
	int32_t t11 = -146;

	t11 = ((x45/x46)<=(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	uint16_t x50 = 1928U;
	uint8_t x51 = 1U;
	uint32_t x52 = 1861560041U;
	int32_t t12 = -415020450;

	t12 = ((x49/x50)<=(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 766162LLU;
	uint32_t x54 = 2089957171U;
	int16_t x55 = -1;
	static uint32_t x56 = 3U;
	int32_t t13 = -24;

	t13 = ((x53/x54)<=(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 317673526U;
	uint8_t x58 = 63U;
	int8_t x59 = -1;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 944837;

	t14 = ((x57/x58)<=(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 3U;
	int64_t x62 = 1LL;
	int8_t x63 = -1;
	uint8_t x64 = 7U;

	t15 = ((x61/x62)<=(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	static int8_t x66 = -14;
	static volatile int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;

	t16 = ((x65/x66)<=(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	int8_t x72 = INT8_MAX;

	t17 = ((x69/x70)<=(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = -505277938;
	int8_t x74 = INT8_MIN;
	static int8_t x75 = -2;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 17171;

	t18 = ((x73/x74)<=(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	static uint16_t x78 = UINT16_MAX;
	static volatile int32_t x80 = INT32_MAX;
	volatile int32_t t19 = 6186;

	t19 = ((x77/x78)<=(x79/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MAX;
	static uint8_t x83 = 5U;
	volatile int32_t x84 = INT32_MAX;

	t20 = ((x81/x82)<=(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	volatile int16_t x87 = -125;
	static int64_t x88 = -1634936799342502926LL;
	volatile int32_t t21 = 132412150;

	t21 = ((x85/x86)<=(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 256508723;
	uint8_t x90 = 10U;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 762305545;

	t22 = ((x89/x90)<=(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 518;
	volatile int64_t x94 = -62509634451913LL;
	int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	int32_t t23 = -281492;

	t23 = ((x93/x94)<=(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = INT8_MIN;
	int8_t x103 = -17;

	t24 = ((x101/x102)<=(x103/x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -1;
	volatile int32_t t25 = -189093379;

	t25 = ((x105/x106)<=(x107/x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 56;
	int64_t x110 = -27212920403237808LL;
	static volatile int64_t x112 = INT64_MAX;
	volatile int32_t t26 = 72509824;

	t26 = ((x109/x110)<=(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MIN;
	volatile uint16_t x115 = 7995U;
	static volatile int32_t x116 = -458851048;
	int32_t t27 = -998;

	t27 = ((x113/x114)<=(x115/x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	volatile int8_t x120 = -17;
	int32_t t28 = -94812;

	t28 = ((x117/x118)<=(x119/x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x123 = INT32_MIN;
	uint32_t x124 = 29256U;
	int32_t t29 = -7858;

	t29 = ((x121/x122)<=(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int32_t x126 = 12164313;
	int8_t x127 = -1;
	static int32_t t30 = -25693;

	t30 = ((x125/x126)<=(x127/x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;

	t31 = ((x129/x130)<=(x131/x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	uint8_t x134 = 10U;
	uint8_t x135 = UINT8_MAX;
	volatile int16_t x136 = -1;
	static int32_t t32 = 345;

	t32 = ((x133/x134)<=(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = 2049149141387917LL;
	int64_t x138 = INT64_MIN;
	volatile int16_t x139 = -1;
	int32_t x140 = INT32_MAX;

	t33 = ((x137/x138)<=(x139/x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1;
	volatile int8_t x142 = INT8_MAX;
	int64_t x143 = INT64_MIN;
	uint8_t x144 = 16U;
	volatile int32_t t34 = -25524679;

	t34 = ((x141/x142)<=(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -268121188827455LL;
	volatile int32_t x147 = INT32_MAX;
	static volatile int32_t x148 = -7404838;
	volatile int32_t t35 = 59387;

	t35 = ((x145/x146)<=(x147/x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MIN;
	static int8_t x150 = 1;
	static int8_t x151 = -1;
	int16_t x152 = INT16_MAX;
	static int32_t t36 = 44288117;

	t36 = ((x149/x150)<=(x151/x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = 89U;
	volatile int64_t x155 = INT64_MAX;
	static int16_t x156 = -1;
	int32_t t37 = -25;

	t37 = ((x153/x154)<=(x155/x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x158 = INT16_MIN;
	uint64_t x159 = 12299233626071973LLU;
	volatile uint8_t x160 = 4U;

	t38 = ((x157/x158)<=(x159/x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = 193;
	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t39 = 5206;

	t39 = ((x161/x162)<=(x163/x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 17U;
	int32_t x166 = INT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	static volatile int32_t t40 = -27688575;

	t40 = ((x165/x166)<=(x167/x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x169 = 5911U;
	volatile int32_t x170 = 1;
	static uint64_t x172 = 41004046830945858LLU;
	int32_t t41 = 51146;

	t41 = ((x169/x170)<=(x171/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x174 = 1U;
	volatile int32_t x175 = -1;

	t42 = ((x173/x174)<=(x175/x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MAX;
	uint8_t x180 = 10U;
	volatile int32_t t43 = -1;

	t43 = ((x177/x178)<=(x179/x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x183 = INT8_MIN;
	int16_t x184 = 1918;
	volatile int32_t t44 = 0;

	t44 = ((x181/x182)<=(x183/x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = -2;
	int8_t x186 = INT8_MAX;
	uint16_t x187 = UINT16_MAX;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t45 = 351112090;

	t45 = ((x185/x186)<=(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 68897452682LLU;
	uint32_t x191 = 117U;
	volatile uint16_t x192 = UINT16_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x189/x190)<=(x191/x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MAX;
	volatile uint64_t x195 = 32309741059LLU;
	int32_t x196 = -15347350;

	t47 = ((x193/x194)<=(x195/x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 1007148U;
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MAX;
	static volatile int32_t t48 = 206;

	t48 = ((x197/x198)<=(x199/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	int32_t x206 = -1;
	int32_t x207 = -1;
	int32_t t49 = -1;

	t49 = ((x205/x206)<=(x207/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x209 = -1;
	int16_t x210 = -1;
	static volatile uint32_t x211 = 2123U;
	int32_t x212 = 1067258216;
	volatile int32_t t50 = -6;

	t50 = ((x209/x210)<=(x211/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = -1;
	volatile int16_t x215 = INT16_MIN;

	t51 = ((x213/x214)<=(x215/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x218 = INT16_MAX;
	int32_t x219 = -8996;
	int16_t x220 = 110;

	t52 = ((x217/x218)<=(x219/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MAX;
	volatile int8_t x222 = -1;
	static int16_t x223 = INT16_MIN;
	volatile int16_t x224 = -1;
	int32_t t53 = 98;

	t53 = ((x221/x222)<=(x223/x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = INT8_MIN;
	static uint8_t x226 = 1U;
	volatile uint16_t x228 = 6U;
	int32_t t54 = -788255046;

	t54 = ((x225/x226)<=(x227/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x230 = 329731U;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;
	int32_t t55 = -6171;

	t55 = ((x229/x230)<=(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	static uint16_t x235 = 1U;
	int32_t t56 = -66;

	t56 = ((x233/x234)<=(x235/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	static volatile uint8_t x240 = 1U;
	static int32_t t57 = 1065215025;

	t57 = ((x237/x238)<=(x239/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 3U;
	uint64_t x242 = 5440889903LLU;
	volatile int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;

	t58 = ((x241/x242)<=(x243/x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = INT32_MIN;
	volatile int16_t x246 = 89;
	static uint64_t x247 = 48LLU;
	static volatile int32_t x248 = INT32_MIN;
	static volatile int32_t t59 = -63;

	t59 = ((x245/x246)<=(x247/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 0U;
	int8_t x250 = 41;
	uint64_t x251 = 11682252LLU;
	int64_t x252 = -1LL;

	t60 = ((x249/x250)<=(x251/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MIN;
	volatile int32_t x260 = -23865;
	volatile int32_t t61 = 151;

	t61 = ((x257/x258)<=(x259/x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -1LL;
	int64_t x262 = 2904015125915LL;
	int8_t x263 = -1;
	int32_t x264 = -1;

	t62 = ((x261/x262)<=(x263/x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	volatile int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	volatile int32_t t63 = -11382;

	t63 = ((x265/x266)<=(x267/x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x273 = UINT8_MAX;
	uint64_t x275 = 434870LLU;
	static int16_t x276 = INT16_MIN;
	int32_t t64 = 74330;

	t64 = ((x273/x274)<=(x275/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = 95;
	static volatile uint32_t x282 = UINT32_MAX;
	int16_t x283 = 8349;
	int32_t x284 = -279461747;
	int32_t t65 = -851523;

	t65 = ((x281/x282)<=(x283/x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = 446U;
	int8_t x286 = 6;
	int16_t x287 = INT16_MIN;
	int64_t x288 = 17056069153040LL;
	int32_t t66 = -195;

	t66 = ((x285/x286)<=(x287/x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x293 = 577762153U;
	int32_t x294 = 46504971;
	int16_t x295 = -1;

	t67 = ((x293/x294)<=(x295/x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = 27;
	uint16_t x298 = 61U;
	int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MIN;

	t68 = ((x297/x298)<=(x299/x300));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -1;
	int8_t x304 = INT8_MAX;
	static volatile int32_t t69 = -626714259;

	t69 = ((x301/x302)<=(x303/x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 106688909835880508LLU;
	int8_t x307 = 47;
	int16_t x308 = INT16_MAX;

	t70 = ((x305/x306)<=(x307/x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	volatile int64_t x310 = -5269642629298LL;
	int32_t x311 = -1;
	int64_t x312 = -1LL;
	volatile int32_t t71 = -2125;

	t71 = ((x309/x310)<=(x311/x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x313 = 1;
	volatile int32_t x314 = -59409249;
	uint8_t x315 = 1U;
	int8_t x316 = -1;
	volatile int32_t t72 = -145;

	t72 = ((x313/x314)<=(x315/x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = 272326LLU;
	volatile uint64_t x318 = UINT64_MAX;
	static int16_t x319 = INT16_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t73 = -6155;

	t73 = ((x317/x318)<=(x319/x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	int16_t x323 = -1;
	int8_t x324 = -1;
	static int32_t t74 = -624;

	t74 = ((x321/x322)<=(x323/x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x326 = UINT8_MAX;
	uint64_t x327 = UINT64_MAX;
	static uint16_t x328 = UINT16_MAX;

	t75 = ((x325/x326)<=(x327/x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile int8_t x332 = -29;
	int32_t t76 = -40;

	t76 = ((x329/x330)<=(x331/x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x333 = -1;
	uint32_t x334 = 1U;
	int64_t x335 = INT64_MAX;
	int16_t x336 = -118;
	volatile int32_t t77 = 14803495;

	t77 = ((x333/x334)<=(x335/x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = -1LL;
	uint32_t x338 = 133288667U;
	int8_t x339 = -1;
	static uint32_t x340 = 3U;

	t78 = ((x337/x338)<=(x339/x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = 286;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -1;
	volatile int32_t t79 = 2;

	t79 = ((x341/x342)<=(x343/x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x345 = 16U;
	uint64_t x346 = 456744542297275069LLU;
	uint64_t x347 = 2416307367038LLU;
	int32_t x348 = -1754;
	static volatile int32_t t80 = -14032;

	t80 = ((x345/x346)<=(x347/x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = INT32_MAX;
	static volatile int8_t x350 = -1;
	volatile int64_t x351 = -1LL;
	int32_t x352 = INT32_MAX;
	static int32_t t81 = 5;

	t81 = ((x349/x350)<=(x351/x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x354 = -1;
	uint8_t x356 = 3U;
	volatile int32_t t82 = 2;

	t82 = ((x353/x354)<=(x355/x356));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x357 = 1871289389804LLU;
	uint32_t x358 = UINT32_MAX;
	static int64_t x359 = 8125704LL;
	static int8_t x360 = -1;
	volatile int32_t t83 = 0;

	t83 = ((x357/x358)<=(x359/x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x362 = -5890470;
	static int32_t t84 = 1828701;

	t84 = ((x361/x362)<=(x363/x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x365 = 1U;
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t85 = -1;

	t85 = ((x365/x366)<=(x367/x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = 0U;
	volatile uint64_t x370 = 23042691224LLU;
	uint8_t x371 = UINT8_MAX;
	volatile int64_t x372 = -4435696434221LL;

	t86 = ((x369/x370)<=(x371/x372));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MIN;
	volatile uint8_t x374 = 46U;
	volatile uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MAX;
	volatile int32_t t87 = 459061;

	t87 = ((x373/x374)<=(x375/x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x378 = INT64_MIN;
	uint8_t x379 = 1U;
	uint32_t x380 = UINT32_MAX;

	t88 = ((x377/x378)<=(x379/x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = -409;
	uint16_t x382 = 1192U;
	uint64_t x383 = UINT64_MAX;

	t89 = ((x381/x382)<=(x383/x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 8776;
	static int32_t x387 = 145132;

	t90 = ((x385/x386)<=(x387/x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x391 = 45;
	int16_t x392 = -527;

	t91 = ((x389/x390)<=(x391/x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x394 = INT16_MIN;
	uint32_t x395 = 976082U;
	static int8_t x396 = -1;
	volatile int32_t t92 = -1;

	t92 = ((x393/x394)<=(x395/x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MAX;
	uint8_t x399 = 0U;
	volatile int32_t t93 = -1478027;

	t93 = ((x397/x398)<=(x399/x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = 4;
	int16_t x403 = -1;
	int32_t x404 = -1;
	int32_t t94 = -183;

	t94 = ((x401/x402)<=(x403/x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x413 = 249;
	volatile uint64_t x414 = 114LLU;
	uint32_t x415 = UINT32_MAX;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t95 = 6688;

	t95 = ((x413/x414)<=(x415/x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = -1;
	int8_t x419 = -45;
	uint32_t x420 = 124484U;
	int32_t t96 = -1;

	t96 = ((x417/x418)<=(x419/x420));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x422 = 1U;
	volatile int64_t x423 = INT64_MIN;
	int16_t x424 = 1;
	static volatile int32_t t97 = -326371;

	t97 = ((x421/x422)<=(x423/x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x427 = 10U;
	int8_t x428 = INT8_MIN;
	int32_t t98 = -4496;

	t98 = ((x425/x426)<=(x427/x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x429 = 11U;
	int64_t x430 = 285LL;
	static int64_t x431 = -1LL;
	volatile int16_t x432 = INT16_MAX;
	int32_t t99 = -3;

	t99 = ((x429/x430)<=(x431/x432));

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

