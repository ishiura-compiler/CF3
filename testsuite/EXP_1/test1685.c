#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x7 = UINT32_MAX;
uint32_t x12 = 7U;
static int32_t t2 = 959579;
uint16_t x16 = 2716U;
uint64_t x19 = 1758188577169404LLU;
uint16_t x21 = 10U;
volatile int32_t t5 = 30164598;
int16_t x25 = INT16_MAX;
static int32_t x31 = INT32_MAX;
uint16_t x32 = 27U;
static volatile int8_t x39 = -6;
int32_t x45 = INT32_MAX;
uint16_t x46 = 0U;
int32_t x52 = INT32_MAX;
static int32_t t12 = -75;
int8_t x54 = INT8_MIN;
volatile int16_t x55 = 24;
static int64_t x58 = INT64_MAX;
volatile int32_t t14 = 278239220;
int32_t t16 = 1;
int64_t x71 = INT64_MIN;
static uint64_t x72 = UINT64_MAX;
int32_t t17 = 35426;
static volatile int32_t t18 = 1273;
static uint8_t x77 = UINT8_MAX;
int16_t x83 = INT16_MIN;
static volatile int32_t t22 = 1817;
volatile int32_t t26 = -116;
int64_t x110 = -1LL;
int32_t x112 = -1751328;
volatile int32_t t27 = 10;
int32_t x113 = INT32_MIN;
volatile int64_t x115 = INT64_MIN;
uint64_t x116 = UINT64_MAX;
static int32_t x119 = INT32_MAX;
int64_t x120 = INT64_MIN;
static int32_t t29 = 140108;
uint32_t x122 = 1635844U;
static int64_t x127 = INT64_MAX;
int64_t x130 = INT64_MIN;
static int8_t x131 = INT8_MIN;
volatile int32_t x133 = -827447374;
uint8_t x135 = 0U;
int64_t x139 = INT64_MAX;
static int64_t x145 = INT64_MIN;
static uint8_t x151 = 2U;
volatile int32_t t39 = 4688765;
static int32_t x164 = 8498;
int32_t x169 = -1;
static int8_t x185 = 0;
static uint16_t x187 = UINT16_MAX;
volatile int32_t t46 = 989;
int8_t x189 = INT8_MIN;
volatile uint64_t x195 = 1099415993247499394LLU;
static uint16_t x197 = 13626U;
volatile int16_t x199 = INT16_MIN;
int32_t x201 = 7947;
int16_t x206 = INT16_MAX;
int64_t x211 = 118368925792709LL;
static int8_t x223 = 1;
volatile int32_t x226 = -121581;
volatile uint64_t x235 = 193271754716272LLU;
static int8_t x236 = 12;
volatile uint32_t x239 = 125956913U;
static int64_t x242 = INT64_MIN;
int16_t x246 = INT16_MIN;
int32_t t61 = 20532;
uint32_t x250 = 88550U;
int8_t x251 = -1;
uint16_t x253 = 101U;
int8_t x256 = -9;
int8_t x259 = -1;
int8_t x263 = INT8_MIN;
volatile int32_t t65 = -112267240;
static int64_t x267 = INT64_MAX;
int32_t t66 = -1928;
uint32_t x271 = 446U;
uint8_t x273 = UINT8_MAX;
volatile uint16_t x280 = 10U;
int64_t x282 = INT64_MIN;
int16_t x286 = INT16_MIN;
int16_t x288 = INT16_MIN;
uint64_t x289 = 3403244862584LLU;
volatile uint64_t x292 = 24357LLU;
volatile int32_t t73 = 574689;
uint32_t x297 = 5434723U;
int64_t x300 = -1LL;
volatile int32_t t75 = 383759516;
uint16_t x308 = UINT16_MAX;
volatile int8_t x313 = -1;
int32_t x316 = INT32_MIN;
static uint16_t x321 = UINT16_MAX;
uint64_t x325 = 123860348LLU;
int8_t x327 = INT8_MAX;
volatile int32_t x336 = INT32_MIN;
uint8_t x343 = 9U;
static int32_t t85 = 193180761;
int32_t t86 = -44;
volatile int32_t x353 = INT32_MAX;
uint64_t x364 = 312725714819679LLU;
volatile int32_t t93 = -13201397;
int64_t x377 = -3LL;
int32_t x379 = 13;
int32_t t94 = -146;
static int8_t x381 = INT8_MIN;
int16_t x382 = 13795;
int16_t x384 = -1;
int64_t x385 = 583702LL;
volatile int32_t t96 = -2991;
int16_t x389 = INT16_MIN;
static int16_t x390 = 4;
volatile int32_t t97 = -169;
uint8_t x394 = 3U;
int32_t x397 = -115245974;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	volatile uint16_t x2 = 129U;
	uint32_t x3 = 1U;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = -1652;

	t0 = (((x1<=x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -30;
	uint32_t x6 = 80994441U;
	static int64_t x8 = -539941025654322LL;
	volatile int32_t t1 = 2;

	t1 = (((x5<=x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int8_t x10 = -17;
	volatile int16_t x11 = -1;

	t2 = (((x9<=x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = 3U;
	volatile int16_t x15 = -1;
	int32_t t3 = 373597;

	t3 = (((x13<=x14)^x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint64_t x18 = UINT64_MAX;
	static int64_t x20 = -1LL;
	int32_t t4 = 645785;

	t4 = (((x17<=x18)^x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MIN;

	t5 = (((x21<=x22)^x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	volatile int32_t x27 = 15;
	uint16_t x28 = 121U;
	volatile int32_t t6 = -378163;

	t6 = (((x25<=x26)^x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	int32_t t7 = -1068170804;

	t7 = (((x29<=x30)^x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 4U;
	int8_t x34 = 0;
	static volatile uint16_t x35 = 3U;
	int8_t x36 = -25;
	int32_t t8 = 4169746;

	t8 = (((x33<=x34)^x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 1U;
	int16_t x38 = 28;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -658236869;

	t9 = (((x37<=x38)^x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	uint32_t x42 = 9U;
	volatile int16_t x43 = -1;
	volatile int8_t x44 = 8;
	volatile int32_t t10 = 2;

	t10 = (((x41<=x42)^x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1;
	volatile int32_t t11 = -8;

	t11 = (((x45<=x46)^x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -4;
	uint32_t x50 = 28261879U;
	int16_t x51 = -4048;

	t12 = (((x49<=x50)^x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 2U;
	int32_t x56 = 575074781;
	volatile int32_t t13 = 670361;

	t13 = (((x53<=x54)^x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 1U;

	t14 = (((x57<=x58)^x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 3891892443LL;
	volatile int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	int8_t x64 = -12;
	int32_t t15 = 0;

	t15 = (((x61<=x62)^x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 2;
	static uint32_t x66 = 50523416U;
	int32_t x67 = INT32_MIN;
	static int16_t x68 = 0;

	t16 = (((x65<=x66)^x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 410;
	static uint8_t x70 = 9U;

	t17 = (((x69<=x70)^x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MIN;
	static uint32_t x75 = 633360U;
	uint8_t x76 = 6U;

	t18 = (((x73<=x74)^x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = -6;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = 24113;

	t19 = (((x77<=x78)^x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 886U;
	int32_t x82 = 129598;
	int16_t x84 = -454;
	volatile int32_t t20 = 1284;

	t20 = (((x81<=x82)^x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	uint8_t x86 = 1U;
	static int8_t x87 = INT8_MIN;
	volatile int8_t x88 = 30;
	volatile int32_t t21 = -15;

	t21 = (((x85<=x86)^x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint16_t x90 = 9570U;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = 12;

	t22 = (((x89<=x90)^x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x93 = 116U;
	uint64_t x94 = 144LLU;
	static uint32_t x95 = 19U;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t23 = 2;

	t23 = (((x93<=x94)^x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 7621U;
	volatile int32_t t24 = -26251781;

	t24 = (((x97<=x98)^x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	volatile int16_t x102 = INT16_MAX;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MAX;
	int32_t t25 = 18;

	t25 = (((x101<=x102)^x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 198190106431773LLU;
	uint16_t x106 = UINT16_MAX;
	int32_t x107 = INT32_MAX;
	int32_t x108 = -1;

	t26 = (((x105<=x106)^x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = 10194LL;
	volatile uint32_t x111 = 18635U;

	t27 = (((x109<=x110)^x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 70U;
	volatile int32_t t28 = 10;

	t28 = (((x113<=x114)^x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	volatile int64_t x118 = -1845LL;

	t29 = (((x117<=x118)^x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = INT8_MIN;
	volatile uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = 1;

	t30 = (((x121<=x122)^x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	volatile int16_t x126 = -1;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 1355;

	t31 = (((x125<=x126)^x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -7;
	int16_t x132 = -743;
	int32_t t32 = 206;

	t32 = (((x129<=x130)^x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	volatile int8_t x136 = -1;
	static volatile int32_t t33 = 1;

	t33 = (((x133<=x134)^x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	static uint32_t x138 = 429767691U;
	volatile int32_t x140 = INT32_MIN;
	static volatile int32_t t34 = -3484444;

	t34 = (((x137<=x138)^x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile uint64_t x142 = 441647878331LLU;
	uint32_t x143 = 1696487U;
	int32_t x144 = INT32_MAX;
	volatile int32_t t35 = -60979843;

	t35 = (((x141<=x142)^x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 6;
	int8_t x147 = -3;
	uint64_t x148 = 11306481309LLU;
	int32_t t36 = -235361;

	t36 = (((x145<=x146)^x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	int32_t x152 = -1;
	int32_t t37 = 479420868;

	t37 = (((x149<=x150)^x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MAX;
	int64_t x154 = 536210LL;
	static volatile int8_t x155 = INT8_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t38 = -141752481;

	t38 = (((x153<=x154)^x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile uint32_t x158 = 1688893127U;
	uint32_t x159 = 11U;
	int8_t x160 = INT8_MIN;

	t39 = (((x157<=x158)^x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = -1;
	static int32_t x163 = INT32_MIN;
	volatile int32_t t40 = -11;

	t40 = (((x161<=x162)^x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -72;
	volatile uint64_t x166 = 59573802954LLU;
	int16_t x167 = INT16_MAX;
	int32_t x168 = 14;
	static volatile int32_t t41 = 7211934;

	t41 = (((x165<=x166)^x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MAX;
	static int32_t x171 = INT32_MAX;
	static uint16_t x172 = 29U;
	int32_t t42 = -7694;

	t42 = (((x169<=x170)^x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -3;
	static uint16_t x174 = 387U;
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 0;

	t43 = (((x173<=x174)^x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int8_t x178 = INT8_MIN;
	uint16_t x179 = 6U;
	uint16_t x180 = 5U;
	static int32_t t44 = 474672771;

	t44 = (((x177<=x178)^x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -5;
	volatile int8_t x182 = INT8_MIN;
	static uint64_t x183 = UINT64_MAX;
	static uint16_t x184 = 14349U;
	volatile int32_t t45 = -2;

	t45 = (((x181<=x182)^x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 125619903U;
	static int8_t x188 = -1;

	t46 = (((x185<=x186)^x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -1;
	int64_t x191 = -6446324307LL;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 315;

	t47 = (((x189<=x190)^x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x194 = -640117057;
	int32_t x196 = INT32_MIN;
	static volatile int32_t t48 = 88851;

	t48 = (((x193<=x194)^x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MAX;
	volatile int8_t x200 = INT8_MIN;
	static int32_t t49 = -1020;

	t49 = (((x197<=x198)^x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MAX;
	volatile int8_t x204 = 1;
	int32_t t50 = -269716364;

	t50 = (((x201<=x202)^x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int32_t x207 = -166;
	static volatile int16_t x208 = 5506;
	static int32_t t51 = -19;

	t51 = (((x205<=x206)^x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 3534261359LLU;
	int8_t x210 = INT8_MAX;
	int16_t x212 = -92;
	int32_t t52 = 14218499;

	t52 = (((x209<=x210)^x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 159182995413LLU;
	volatile int64_t x214 = -1LL;
	uint8_t x215 = 23U;
	int8_t x216 = -1;
	int32_t t53 = -883687;

	t53 = (((x213<=x214)^x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = -1879;
	int16_t x219 = INT16_MIN;
	int8_t x220 = -60;
	volatile int32_t t54 = -435;

	t54 = (((x217<=x218)^x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = UINT32_MAX;
	int16_t x222 = 6085;
	static int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = -121503059;

	t55 = (((x221<=x222)^x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 80U;
	static int32_t x227 = 7897794;
	volatile int32_t x228 = -1;
	volatile int32_t t56 = 7424;

	t56 = (((x225<=x226)^x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile int64_t x230 = 2605LL;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 6;

	t57 = (((x229<=x230)^x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = 13;
	uint16_t x234 = 1U;
	int32_t t58 = 188;

	t58 = (((x233<=x234)^x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MAX;
	int64_t x240 = -1LL;
	volatile int32_t t59 = 241;

	t59 = (((x237<=x238)^x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	uint16_t x243 = 13936U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -55025713;

	t60 = (((x241<=x242)^x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = 26LL;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MAX;

	t61 = (((x245<=x246)^x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	static uint8_t x252 = 59U;
	static volatile int32_t t62 = 1041;

	t62 = (((x249<=x250)^x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	volatile int64_t x255 = 32940LL;
	int32_t t63 = 12;

	t63 = (((x253<=x254)^x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	static uint32_t x258 = 2411940U;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t64 = -4206793;

	t64 = (((x257<=x258)^x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int32_t x262 = INT32_MIN;
	uint8_t x264 = 5U;

	t65 = (((x261<=x262)^x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = -1LL;
	int32_t x268 = INT32_MIN;

	t66 = (((x265<=x266)^x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 1U;
	int64_t x270 = INT64_MIN;
	int32_t x272 = -1;
	int32_t t67 = -71;

	t67 = (((x269<=x270)^x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = 7;
	int32_t x275 = INT32_MAX;
	uint8_t x276 = 0U;
	int32_t t68 = 14905;

	t68 = (((x273<=x274)^x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	static int64_t x278 = INT64_MAX;
	int64_t x279 = INT64_MAX;
	volatile int32_t t69 = 79765;

	t69 = (((x277<=x278)^x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 130383045;

	t70 = (((x281<=x282)^x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	int16_t x287 = -29;
	volatile int32_t t71 = 67;

	t71 = (((x285<=x286)^x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = 147U;
	int32_t t72 = -151954;

	t72 = (((x289<=x290)^x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MAX;
	static uint64_t x294 = 55229770757LLU;
	int8_t x295 = -1;
	int16_t x296 = 8050;

	t73 = (((x293<=x294)^x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = 37;

	t74 = (((x297<=x298)^x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MIN;

	t75 = (((x301<=x302)^x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	volatile uint16_t x307 = 0U;
	int32_t t76 = 181474304;

	t76 = (((x305<=x306)^x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -62;
	uint64_t x310 = 47859LLU;
	uint32_t x311 = 123773765U;
	int8_t x312 = -29;
	int32_t t77 = -2949;

	t77 = (((x309<=x310)^x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	int32_t x315 = -1;
	int32_t t78 = 15;

	t78 = (((x313<=x314)^x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	static volatile int64_t x320 = -1LL;
	int32_t t79 = -120;

	t79 = (((x317<=x318)^x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MIN;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -9;

	t80 = (((x321<=x322)^x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = 1;
	volatile int16_t x328 = -1;
	volatile int32_t t81 = 196151;

	t81 = (((x325<=x326)^x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MIN;
	volatile int16_t x330 = INT16_MIN;
	static int8_t x331 = -1;
	static volatile int8_t x332 = 6;
	volatile int32_t t82 = -838974;

	t82 = (((x329<=x330)^x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MIN;
	int8_t x334 = 2;
	uint16_t x335 = UINT16_MAX;
	int32_t t83 = 639;

	t83 = (((x333<=x334)^x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 120515006991302LLU;
	int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	volatile uint16_t x340 = 86U;
	volatile int32_t t84 = -98;

	t84 = (((x337<=x338)^x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 0;
	volatile int8_t x342 = 1;
	volatile int64_t x344 = INT64_MIN;

	t85 = (((x341<=x342)^x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = -4189;
	uint64_t x346 = 147141799135302663LLU;
	int16_t x347 = -3;
	uint64_t x348 = 4LLU;

	t86 = (((x345<=x346)^x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 5U;
	volatile int32_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	int8_t x352 = -1;
	volatile int32_t t87 = -6553;

	t87 = (((x349<=x350)^x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x354 = UINT16_MAX;
	volatile uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t88 = 528970394;

	t88 = (((x353<=x354)^x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 0;

	t89 = (((x357<=x358)^x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	uint16_t x363 = 1695U;
	int32_t t90 = 3129707;

	t90 = (((x361<=x362)^x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = 480;
	static volatile int16_t x367 = 5;
	static int8_t x368 = -1;
	volatile int32_t t91 = 33;

	t91 = (((x365<=x366)^x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 7U;
	volatile int8_t x370 = -1;
	int16_t x371 = -5;
	static volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = -20619;

	t92 = (((x369<=x370)^x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = 1;
	static int16_t x375 = INT16_MIN;
	volatile int8_t x376 = 1;

	t93 = (((x373<=x374)^x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 142U;
	static volatile int16_t x380 = INT16_MIN;

	t94 = (((x377<=x378)^x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x383 = 7319U;
	int32_t t95 = -23;

	t95 = (((x381<=x382)^x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x386 = 1230427875U;
	static uint16_t x387 = 99U;
	volatile int64_t x388 = INT64_MIN;

	t96 = (((x385<=x386)^x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x391 = -1;
	static uint32_t x392 = 101U;

	t97 = (((x389<=x390)^x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -1;
	uint64_t x395 = 1269081736LLU;
	volatile int64_t x396 = INT64_MIN;
	int32_t t98 = 591921;

	t98 = (((x393<=x394)^x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x398 = 65733767LL;
	uint32_t x399 = 4237959U;
	static volatile uint8_t x400 = UINT8_MAX;
	int32_t t99 = 2767494;

	t99 = (((x397<=x398)^x399)==x400);

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

