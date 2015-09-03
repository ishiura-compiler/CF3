#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = INT64_MIN;
uint8_t x7 = 5U;
static int32_t x13 = INT32_MAX;
static volatile int32_t x14 = INT32_MAX;
volatile uint64_t x15 = 100944495322315LLU;
int16_t x18 = -1224;
static int8_t x19 = 11;
int16_t x20 = -1;
int16_t x30 = -1;
static int8_t x34 = -1;
static int16_t x40 = INT16_MIN;
static int8_t x43 = 1;
int64_t x51 = INT64_MAX;
volatile uint16_t x54 = 67U;
static int32_t x60 = INT32_MIN;
static volatile int8_t x65 = 1;
int8_t x66 = INT8_MAX;
static uint8_t x67 = UINT8_MAX;
int8_t x73 = INT8_MAX;
static volatile int32_t t18 = -158701;
static int16_t x78 = INT16_MIN;
static int32_t x82 = INT32_MIN;
uint32_t x84 = UINT32_MAX;
volatile int8_t x89 = INT8_MAX;
int16_t x91 = -1;
static uint64_t x101 = 4147228802295647LLU;
static uint64_t x102 = 14838296979203536LLU;
static uint16_t x103 = 2523U;
uint32_t x108 = 936769709U;
int8_t x109 = INT8_MIN;
volatile int32_t t27 = -12792950;
int32_t x113 = INT32_MIN;
uint32_t x123 = 1782U;
volatile int8_t x135 = 3;
int64_t x143 = INT64_MIN;
volatile int32_t t34 = -880687;
static int8_t x145 = 4;
volatile int32_t t35 = 699;
volatile uint16_t x150 = UINT16_MAX;
int32_t x151 = -1;
int16_t x152 = INT16_MAX;
int64_t x156 = INT64_MAX;
volatile int8_t x159 = 2;
static int32_t t38 = -5;
int64_t x163 = INT64_MIN;
static int8_t x168 = -1;
int32_t x170 = -1;
uint8_t x171 = UINT8_MAX;
int16_t x175 = INT16_MAX;
static uint64_t x176 = 4682237712LLU;
int64_t x182 = INT64_MAX;
static uint8_t x185 = UINT8_MAX;
int64_t x189 = INT64_MAX;
int16_t x192 = 857;
volatile int32_t t46 = -1107295;
static int32_t x196 = INT32_MAX;
int64_t x203 = INT64_MIN;
uint8_t x205 = 10U;
int16_t x211 = 4;
int16_t x213 = INT16_MAX;
int8_t x218 = -1;
int64_t x223 = -9452490LL;
static int32_t x227 = 449927;
volatile int32_t t56 = -1612176;
uint16_t x242 = 4383U;
int8_t x248 = INT8_MIN;
static int64_t x257 = 953945741823866LL;
int16_t x260 = -8100;
volatile int32_t t63 = -449;
int32_t t65 = 52;
static uint16_t x269 = 0U;
volatile uint8_t x270 = UINT8_MAX;
uint16_t x290 = 1570U;
volatile int32_t t72 = 332;
int64_t x311 = -1LL;
int32_t x312 = -1924;
int8_t x315 = -5;
int32_t t77 = -10362015;
static volatile int8_t x322 = INT8_MIN;
volatile int32_t t79 = 0;
int64_t x330 = -1586LL;
uint16_t x336 = 2078U;
volatile int32_t x345 = INT32_MAX;
int8_t x350 = -1;
uint32_t x353 = UINT32_MAX;
static uint16_t x356 = 456U;
static volatile int32_t t86 = -6858;
volatile int8_t x373 = INT8_MIN;
int8_t x379 = INT8_MAX;
volatile int32_t t92 = -216419531;
uint16_t x383 = UINT16_MAX;
int32_t t93 = -2997;
int16_t x385 = INT16_MIN;
uint16_t x387 = 26U;
static volatile int32_t t94 = -438;
int8_t x391 = 41;
int64_t x395 = INT64_MAX;
uint32_t x396 = 14785172U;
int16_t x401 = INT16_MIN;
uint16_t x402 = UINT16_MAX;
uint32_t x407 = UINT32_MAX;


void f0(void) {
	int8_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	volatile int32_t x3 = INT32_MIN;
	uint64_t x4 = 99091LLU;
	int32_t t0 = -947319;

	t0 = (((x1%x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -20;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 1;

	t1 = (((x5%x6)<x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 126764045970093439LL;
	static uint16_t x10 = 1U;
	static uint64_t x11 = 16LLU;
	int16_t x12 = 1;
	int32_t t2 = 209422126;

	t2 = (((x9%x10)<x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 92352;

	t3 = (((x13%x14)<x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t t4 = 101;

	t4 = (((x17%x18)<x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = 36928383;

	t5 = (((x21%x22)<x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	volatile uint8_t x27 = 91U;
	static int64_t x28 = INT64_MAX;
	int32_t t6 = 7;

	t6 = (((x25%x26)<x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;
	int32_t x32 = 23192;
	int32_t t7 = 183069;

	t7 = (((x29%x30)<x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	static volatile int8_t x35 = -1;
	volatile int32_t x36 = -1;
	volatile int32_t t8 = 128177;

	t8 = (((x33%x34)<x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	uint32_t x38 = UINT32_MAX;
	volatile int16_t x39 = -1;
	volatile int32_t t9 = -4;

	t9 = (((x37%x38)<x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	static volatile uint16_t x42 = UINT16_MAX;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -58;

	t10 = (((x41%x42)<x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int64_t x46 = -1LL;
	static uint64_t x47 = 3685LLU;
	int32_t x48 = 0;
	volatile int32_t t11 = -869544;

	t11 = (((x45%x46)<x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int16_t x50 = INT16_MIN;
	uint8_t x52 = 2U;
	int32_t t12 = -34260;

	t12 = (((x49%x50)<x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 458U;
	volatile int64_t x55 = 12902059731LL;
	uint16_t x56 = 14U;
	static int32_t t13 = 86187114;

	t13 = (((x53%x54)<x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = 10U;
	volatile int32_t t14 = 134500037;

	t14 = (((x57%x58)<x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 4377;
	static int16_t x62 = -2;
	int16_t x63 = -1;
	int32_t x64 = INT32_MAX;
	int32_t t15 = -79883;

	t15 = (((x61%x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x68 = -8;
	volatile int32_t t16 = 9193965;

	t16 = (((x65%x66)<x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 0U;
	int16_t x70 = INT16_MIN;
	static int8_t x71 = INT8_MAX;
	static volatile uint8_t x72 = UINT8_MAX;
	int32_t t17 = -9110;

	t17 = (((x69%x70)<x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -12027LL;
	uint8_t x75 = UINT8_MAX;
	static uint16_t x76 = UINT16_MAX;

	t18 = (((x73%x74)<x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 4405U;
	int64_t x79 = -529571095208717432LL;
	static int16_t x80 = -1;
	static volatile int32_t t19 = 1959;

	t19 = (((x77%x78)<x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = 51224LLU;
	static uint64_t x83 = UINT64_MAX;
	int32_t t20 = -1481681;

	t20 = (((x81%x82)<x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MIN;
	static volatile uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -1;

	t21 = (((x85%x86)<x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x90 = -1;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = 1378;

	t22 = (((x89%x90)<x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int32_t x94 = INT32_MAX;
	int64_t x95 = 29607094528571530LL;
	int64_t x96 = 4317847307928LL;
	volatile int32_t t23 = 108590;

	t23 = (((x93%x94)<x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	static uint64_t x99 = UINT64_MAX;
	int64_t x100 = 135948643695122552LL;
	volatile int32_t t24 = -15;

	t24 = (((x97%x98)<x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x104 = -102;
	int32_t t25 = -15;

	t25 = (((x101%x102)<x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 1077U;
	uint16_t x106 = UINT16_MAX;
	uint8_t x107 = UINT8_MAX;
	volatile int32_t t26 = -257453581;

	t26 = (((x105%x106)<x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 1;
	int8_t x111 = -3;
	volatile uint32_t x112 = UINT32_MAX;

	t27 = (((x109%x110)<x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 12853U;
	static int64_t x115 = INT64_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = -33183;

	t28 = (((x113%x114)<x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = 478241703584132LLU;
	uint8_t x120 = 0U;
	volatile int32_t t29 = 97;

	t29 = (((x117%x118)<x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = 73;
	static uint32_t x124 = 2442U;
	static int32_t t30 = 0;

	t30 = (((x121%x122)<x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 2LLU;
	int16_t x130 = -1;
	volatile int8_t x131 = INT8_MIN;
	uint16_t x132 = 0U;
	volatile int32_t t31 = 96;

	t31 = (((x129%x130)<x131)<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = 5LLU;
	volatile uint8_t x134 = UINT8_MAX;
	int64_t x136 = -1LL;
	volatile int32_t t32 = 7842866;

	t32 = (((x133%x134)<x135)<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MAX;
	uint8_t x138 = 3U;
	uint64_t x139 = UINT64_MAX;
	static int16_t x140 = INT16_MIN;
	int32_t t33 = 0;

	t33 = (((x137%x138)<x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -817083952;
	int64_t x142 = -1LL;
	volatile int32_t x144 = INT32_MIN;

	t34 = (((x141%x142)<x143)<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	static int8_t x147 = -1;
	uint32_t x148 = UINT32_MAX;

	t35 = (((x145%x146)<x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	volatile int32_t t36 = -1;

	t36 = (((x149%x150)<x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile int64_t x154 = INT64_MAX;
	int8_t x155 = -1;
	int32_t t37 = 248564737;

	t37 = (((x153%x154)<x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	static uint64_t x158 = 7515134962098550468LLU;
	int16_t x160 = 8312;

	t38 = (((x157%x158)<x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = 0;
	int32_t x162 = -8039800;
	volatile uint8_t x164 = 4U;
	int32_t t39 = -700339292;

	t39 = (((x161%x162)<x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 0;
	int64_t x166 = -212533LL;
	uint8_t x167 = 0U;
	volatile int32_t t40 = -267;

	t40 = (((x165%x166)<x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int64_t x172 = -1LL;
	volatile int32_t t41 = -959140283;

	t41 = (((x169%x170)<x171)<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -41;
	static uint32_t x174 = 724597U;
	volatile int32_t t42 = -609152;

	t42 = (((x173%x174)<x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x177 = UINT16_MAX;
	int8_t x178 = INT8_MIN;
	volatile int16_t x179 = -1;
	volatile uint16_t x180 = 163U;
	volatile int32_t t43 = 6;

	t43 = (((x177%x178)<x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MIN;
	int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	static int32_t t44 = -15;

	t44 = (((x181%x182)<x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = INT8_MAX;
	static uint8_t x187 = 18U;
	static uint32_t x188 = 504003141U;
	int32_t t45 = 1367395;

	t45 = (((x185%x186)<x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x190 = 6;
	int8_t x191 = INT8_MAX;

	t46 = (((x189%x190)<x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 56388529;
	int32_t x194 = -1599625;
	uint16_t x195 = 31U;
	int32_t t47 = -83209;

	t47 = (((x193%x194)<x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = 3;
	int16_t x198 = -37;
	int16_t x199 = 1;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t48 = 120408353;

	t48 = (((x197%x198)<x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 1;
	int32_t x202 = 1149054;
	volatile uint64_t x204 = UINT64_MAX;
	static volatile int32_t t49 = 1306584;

	t49 = (((x201%x202)<x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = 38;
	volatile uint8_t x208 = UINT8_MAX;
	static volatile int32_t t50 = 2815;

	t50 = (((x205%x206)<x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = 3U;
	int8_t x210 = -57;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t51 = -55028;

	t51 = (((x209%x210)<x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t52 = -2266106;

	t52 = (((x213%x214)<x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	int32_t x219 = INT32_MAX;
	static uint64_t x220 = UINT64_MAX;
	static int32_t t53 = 200;

	t53 = (((x217%x218)<x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	static int16_t x224 = INT16_MIN;
	static volatile int32_t t54 = 12062051;

	t54 = (((x221%x222)<x223)<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 1U;
	int32_t x226 = INT32_MIN;
	static uint16_t x228 = 48U;
	volatile int32_t t55 = -856;

	t55 = (((x225%x226)<x227)<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	uint64_t x230 = 26LLU;
	int16_t x231 = -82;
	int16_t x232 = 1;

	t56 = (((x229%x230)<x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 36U;
	static int64_t x236 = INT64_MIN;
	volatile int32_t t57 = 1;

	t57 = (((x233%x234)<x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = 9849;
	uint32_t x238 = UINT32_MAX;
	int32_t x239 = -1;
	volatile int64_t x240 = INT64_MAX;
	int32_t t58 = -7568;

	t58 = (((x237%x238)<x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 5387U;
	int16_t x243 = 6;
	int8_t x244 = INT8_MAX;
	static int32_t t59 = -13;

	t59 = (((x241%x242)<x243)<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -1;
	volatile int32_t t60 = -1007;

	t60 = (((x245%x246)<x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MIN;
	int16_t x250 = -1;
	static int64_t x251 = -28469743247926LL;
	uint32_t x252 = 373U;
	static volatile int32_t t61 = -13;

	t61 = (((x249%x250)<x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MIN;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MAX;
	volatile int32_t t62 = 1;

	t62 = (((x253%x254)<x255)<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x258 = 96449096585446882LLU;
	uint32_t x259 = UINT32_MAX;

	t63 = (((x257%x258)<x259)<=x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 15U;
	volatile uint32_t x262 = 87U;
	int8_t x263 = -22;
	int16_t x264 = 1934;
	int32_t t64 = -74023;

	t64 = (((x261%x262)<x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = -777;
	volatile int32_t x267 = -239;
	volatile uint8_t x268 = 23U;

	t65 = (((x265%x266)<x267)<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x271 = INT8_MIN;
	static uint64_t x272 = 3735LLU;
	int32_t t66 = -1215;

	t66 = (((x269%x270)<x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	static int32_t x274 = 174;
	int64_t x275 = 15288666686317983LL;
	uint16_t x276 = 18U;
	static int32_t t67 = -60029611;

	t67 = (((x273%x274)<x275)<=x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 510674464U;
	int16_t x282 = -28;
	int16_t x283 = -1;
	uint64_t x284 = 862LLU;
	volatile int32_t t68 = 1;

	t68 = (((x281%x282)<x283)<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x285 = UINT32_MAX;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 32463242749LLU;
	static volatile int64_t x288 = INT64_MIN;
	int32_t t69 = -1;

	t69 = (((x285%x286)<x287)<=x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -27209615LL;
	int64_t x291 = 15883052LL;
	static int64_t x292 = -1LL;
	int32_t t70 = -660;

	t70 = (((x289%x290)<x291)<=x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -545698551991343LL;
	static uint32_t x294 = 791U;
	int64_t x295 = -1LL;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t71 = -1;

	t71 = (((x293%x294)<x295)<=x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x297 = 1;
	static int16_t x298 = 3760;
	uint64_t x299 = 0LLU;
	int64_t x300 = INT64_MIN;

	t72 = (((x297%x298)<x299)<=x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int8_t x303 = 13;
	volatile int64_t x304 = INT64_MIN;
	int32_t t73 = -40788;

	t73 = (((x301%x302)<x303)<=x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 0U;
	static volatile int32_t x306 = INT32_MIN;
	static volatile int32_t x307 = INT32_MIN;
	volatile int16_t x308 = -23;
	volatile int32_t t74 = 699517;

	t74 = (((x305%x306)<x307)<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = 0;
	static volatile int16_t x310 = 13;
	int32_t t75 = 285692837;

	t75 = (((x309%x310)<x311)<=x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x313 = 52517U;
	int8_t x314 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	static volatile int32_t t76 = -115160559;

	t76 = (((x313%x314)<x315)<=x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = 9389113971LL;
	uint32_t x318 = UINT32_MAX;
	int8_t x319 = -1;
	uint16_t x320 = 10U;

	t77 = (((x317%x318)<x319)<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x323 = 3647718756LLU;
	int64_t x324 = 320962628LL;
	int32_t t78 = 3758;

	t78 = (((x321%x322)<x323)<=x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 6U;
	volatile int8_t x326 = 1;
	int32_t x327 = 126102966;
	uint8_t x328 = 52U;

	t79 = (((x325%x326)<x327)<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -1;
	uint32_t x331 = UINT32_MAX;
	static int8_t x332 = INT8_MAX;
	volatile int32_t t80 = 199782;

	t80 = (((x329%x330)<x331)<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	volatile int64_t x334 = INT64_MAX;
	int32_t x335 = 2;
	volatile int32_t t81 = 2890036;

	t81 = (((x333%x334)<x335)<=x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = -1;
	volatile uint32_t x339 = UINT32_MAX;
	int16_t x340 = 7;
	int32_t t82 = 21770940;

	t82 = (((x337%x338)<x339)<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -62LL;
	static int16_t x342 = -1;
	volatile int8_t x343 = -49;
	int64_t x344 = INT64_MIN;
	volatile int32_t t83 = -372;

	t83 = (((x341%x342)<x343)<=x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = INT64_MAX;
	static uint64_t x347 = 472357207399069248LLU;
	uint8_t x348 = 114U;
	int32_t t84 = 2239896;

	t84 = (((x345%x346)<x347)<=x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1LL;
	static volatile uint64_t x351 = 24LLU;
	static uint32_t x352 = 7U;
	static volatile int32_t t85 = -27437019;

	t85 = (((x349%x350)<x351)<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x354 = INT16_MIN;
	int64_t x355 = -38340796LL;

	t86 = (((x353%x354)<x355)<=x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	int64_t x359 = INT64_MAX;
	static uint8_t x360 = 1U;
	int32_t t87 = 121;

	t87 = (((x357%x358)<x359)<=x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = -22;
	volatile int16_t x363 = INT16_MAX;
	volatile int32_t x364 = -29780027;
	volatile int32_t t88 = 95;

	t88 = (((x361%x362)<x363)<=x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x365 = 235982249U;
	int8_t x366 = INT8_MIN;
	static int32_t x367 = 1;
	int64_t x368 = INT64_MAX;
	int32_t t89 = -5;

	t89 = (((x365%x366)<x367)<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = -1;
	int64_t x370 = 90826905597109LL;
	volatile int64_t x371 = -2724656146LL;
	static uint16_t x372 = 15954U;
	volatile int32_t t90 = -1;

	t90 = (((x369%x370)<x371)<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x374 = 230643LLU;
	uint8_t x375 = 3U;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t91 = 497470902;

	t91 = (((x373%x374)<x375)<=x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 779857967213LLU;
	int32_t x378 = 39739115;
	int32_t x380 = 13;

	t92 = (((x377%x378)<x379)<=x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 400820454568893LLU;
	int32_t x382 = INT32_MIN;
	uint32_t x384 = UINT32_MAX;

	t93 = (((x381%x382)<x383)<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x386 = INT32_MAX;
	int8_t x388 = INT8_MIN;

	t94 = (((x385%x386)<x387)<=x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = -1LL;
	int16_t x390 = -217;
	int8_t x392 = INT8_MIN;
	volatile int32_t t95 = 207;

	t95 = (((x389%x390)<x391)<=x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	volatile int16_t x394 = INT16_MIN;
	int32_t t96 = 11581;

	t96 = (((x393%x394)<x395)<=x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = -47;
	int32_t x398 = -1;
	static int16_t x399 = -6;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t97 = 0;

	t97 = (((x397%x398)<x399)<=x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MIN;
	int32_t t98 = -7;

	t98 = (((x401%x402)<x403)<=x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	static int32_t x406 = 98741840;
	int8_t x408 = INT8_MAX;
	int32_t t99 = -243668396;

	t99 = (((x405%x406)<x407)<=x408);

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

