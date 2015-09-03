#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 1190;
int64_t x8 = 501075124604053LL;
uint32_t x12 = 70U;
static volatile int16_t x16 = 1;
int32_t t3 = 52;
uint8_t x22 = UINT8_MAX;
int16_t x29 = INT16_MIN;
int8_t x31 = 8;
static int32_t x32 = -1119;
uint32_t x41 = UINT32_MAX;
uint64_t x42 = 5979LLU;
uint32_t x48 = 74306U;
uint32_t x50 = 2600871U;
int32_t t12 = 26;
int32_t x53 = INT32_MIN;
volatile int32_t x54 = -197881;
uint16_t x64 = 21437U;
int32_t t15 = -426745862;
volatile int8_t x68 = INT8_MIN;
static int8_t x74 = 12;
int16_t x76 = -1;
uint8_t x83 = UINT8_MAX;
uint32_t x85 = 31U;
uint64_t x93 = 755026LLU;
uint32_t x95 = 318527U;
int8_t x96 = -1;
volatile uint64_t x97 = 352152428742645LLU;
static uint64_t x99 = 16441379311874058LLU;
static int8_t x101 = INT8_MIN;
uint64_t x110 = 929208782LLU;
uint32_t x116 = 4U;
volatile int32_t t28 = 3298;
static int16_t x125 = INT16_MAX;
int16_t x139 = INT16_MIN;
uint16_t x141 = 1U;
volatile int64_t x156 = 172086LL;
int16_t x157 = 3745;
int64_t x159 = INT64_MIN;
static int32_t t39 = -1298;
uint64_t x161 = 4421223609269728957LLU;
static int32_t x166 = INT32_MIN;
int8_t x171 = -56;
int32_t x181 = -1;
uint32_t x182 = 200036409U;
int32_t t45 = 1;
int32_t x192 = -978;
int8_t x198 = -1;
int32_t t50 = 733509;
int32_t t51 = -25922971;
int64_t x217 = -2448064461LL;
static int32_t t54 = -3180959;
int16_t x221 = 6;
int32_t x224 = -1;
uint8_t x232 = 0U;
uint32_t x233 = 2U;
static int16_t x235 = 1;
uint32_t x240 = UINT32_MAX;
int16_t x246 = INT16_MAX;
static volatile uint64_t x249 = UINT64_MAX;
int32_t x253 = INT32_MAX;
volatile int32_t x256 = INT32_MIN;
static volatile int32_t t64 = 46;
int64_t x262 = INT64_MAX;
static volatile int8_t x264 = -1;
static int16_t x265 = INT16_MIN;
int32_t x267 = -1;
volatile int32_t t67 = -119671;
volatile int32_t t68 = -63064866;
uint16_t x285 = UINT16_MAX;
static int8_t x289 = -1;
int32_t x295 = INT32_MIN;
int64_t x301 = 48029LL;
int64_t x307 = INT64_MIN;
volatile int32_t t76 = -646781329;
uint64_t x316 = 187183858278979LLU;
int8_t x319 = INT8_MAX;
int8_t x323 = -1;
int32_t t80 = -30;
int8_t x327 = INT8_MAX;
int32_t t81 = 1527804;
volatile int8_t x330 = INT8_MAX;
int16_t x332 = INT16_MIN;
int16_t x333 = INT16_MIN;
uint16_t x336 = 48U;
int64_t x337 = -1LL;
volatile int32_t t84 = -17654238;
uint16_t x342 = 390U;
volatile int32_t t85 = -76743855;
uint64_t x348 = UINT64_MAX;
int8_t x349 = INT8_MIN;
volatile int32_t t87 = 1303;
volatile int16_t x364 = INT16_MIN;
volatile int32_t t90 = -96;
static int8_t x365 = INT8_MAX;
volatile int32_t t91 = 326936;
uint32_t x369 = 7U;
volatile uint8_t x382 = 1U;
volatile int8_t x387 = 22;
static int32_t t96 = -562;
static int64_t x389 = -1LL;
volatile uint8_t x391 = 1U;
static int16_t x394 = 1;
static int8_t x395 = -6;


void f0(void) {
	int32_t x1 = 7480;
	int32_t x2 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 28692693;

	t0 = (x1<(x2|(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1324;
	int64_t x6 = INT64_MAX;
	static int8_t x7 = INT8_MAX;
	int32_t t1 = -2760;

	t1 = (x5<(x6|(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -15969784LL;
	int16_t x10 = INT16_MAX;
	int16_t x11 = 5;
	static volatile int32_t t2 = 0;

	t2 = (x9<(x10|(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1649U;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = INT32_MIN;

	t3 = (x13<(x14|(x15<=x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -476;
	static uint64_t x18 = 30LLU;
	uint32_t x19 = 59460U;
	static int32_t x20 = 13;
	volatile int32_t t4 = -505;

	t4 = (x17<(x18|(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 1U;
	volatile uint64_t x23 = 1588520067131455027LLU;
	int32_t x24 = 54541;
	int32_t t5 = -4088;

	t5 = (x21<(x22|(x23<=x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 936206;

	t6 = (x25<(x26|(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 0;
	static volatile int32_t t7 = 266064872;

	t7 = (x29<(x30|(x31<=x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 12323718U;
	volatile int16_t x34 = -1;
	static int8_t x35 = -3;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = 2028219;

	t8 = (x33<(x34|(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint64_t x38 = 3086085657253LLU;
	int8_t x39 = 1;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -816867527;

	t9 = (x37<(x38|(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 115U;
	int32_t t10 = -34;

	t10 = (x41<(x42|(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -14;
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	volatile int32_t t11 = -126388;

	t11 = (x45<(x46|(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	volatile int32_t x52 = 319644437;

	t12 = (x49<(x50|(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x55 = 3464797166969846502LLU;
	static uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 352258418;

	t13 = (x53<(x54|(x55<=x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	volatile uint16_t x58 = UINT16_MAX;
	int16_t x59 = 1;
	volatile int64_t x60 = -1LL;
	int32_t t14 = 978939535;

	t14 = (x57<(x58|(x59<=x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1150;
	uint32_t x62 = 255808655U;
	volatile uint16_t x63 = 13U;

	t15 = (x61<(x62|(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	int16_t x66 = INT16_MIN;
	int64_t x67 = 97421373286076LL;
	int32_t t16 = -194672765;

	t16 = (x65<(x66|(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = -31;
	uint64_t x72 = 90LLU;
	volatile int32_t t17 = 27629888;

	t17 = (x69<(x70|(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int16_t x75 = -2982;
	static volatile int32_t t18 = -30108;

	t18 = (x73<(x74|(x75<=x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 2012473725750772LLU;
	volatile int16_t x78 = 6;
	int16_t x79 = INT16_MIN;
	volatile uint64_t x80 = UINT64_MAX;
	static int32_t t19 = 612;

	t19 = (x77<(x78|(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	uint16_t x84 = 32U;
	static volatile int32_t t20 = 374188441;

	t20 = (x81<(x82|(x83<=x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = -1;
	volatile uint32_t x87 = UINT32_MAX;
	volatile uint32_t x88 = 319U;
	int32_t t21 = 10942;

	t21 = (x85<(x86|(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 1U;
	int16_t x90 = -4;
	uint8_t x91 = 13U;
	static volatile uint32_t x92 = 3158380U;
	volatile int32_t t22 = 400297027;

	t22 = (x89<(x90|(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MAX;
	int32_t t23 = 1446811;

	t23 = (x93<(x94|(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x98 = 9U;
	uint8_t x100 = 50U;
	int32_t t24 = 10375743;

	t24 = (x97<(x98|(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -34745987329894578LL;
	uint32_t x103 = UINT32_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = -62238075;

	t25 = (x101<(x102|(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile uint64_t x106 = 27353523LLU;
	static volatile int8_t x107 = -1;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 1579037;

	t26 = (x105<(x106|(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -2;
	int16_t x111 = -1;
	int16_t x112 = -796;
	static volatile int32_t t27 = -16622;

	t27 = (x109<(x110|(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	volatile uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;

	t28 = (x113<(x114|(x115<=x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = 73821U;
	static int16_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 2;

	t29 = (x117<(x118|(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x121 = UINT32_MAX;
	uint16_t x122 = 6623U;
	static int16_t x123 = INT16_MIN;
	volatile uint32_t x124 = 0U;
	int32_t t30 = -16546763;

	t30 = (x121<(x122|(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 62U;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = 2;
	volatile int32_t t31 = -2757707;

	t31 = (x125<(x126|(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = -47350268;

	t32 = (x129<(x130|(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MIN;
	int64_t x135 = -190582450LL;
	int8_t x136 = -1;
	static int32_t t33 = -48;

	t33 = (x133<(x134|(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 3LL;
	int64_t x138 = -27LL;
	uint8_t x140 = 24U;
	int32_t t34 = 72032001;

	t34 = (x137<(x138|(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 2344;
	int16_t x143 = -1;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -1;

	t35 = (x141<(x142|(x143<=x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x146 = 6U;
	volatile int8_t x147 = INT8_MAX;
	static uint32_t x148 = UINT32_MAX;
	int32_t t36 = -5;

	t36 = (x145<(x146|(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = -7597;
	uint8_t x151 = 0U;
	uint64_t x152 = UINT64_MAX;
	static int32_t t37 = -15134;

	t37 = (x149<(x150|(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 93;
	static int64_t x154 = INT64_MAX;
	uint16_t x155 = 17216U;
	int32_t t38 = 98669;

	t38 = (x153<(x154|(x155<=x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = UINT64_MAX;
	volatile int64_t x160 = INT64_MAX;

	t39 = (x157<(x158|(x159<=x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 6115;

	t40 = (x161<(x162|(x163<=x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MAX;
	static int16_t x167 = 1;
	int16_t x168 = -7514;
	static int32_t t41 = -7273;

	t41 = (x165<(x166|(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = 3U;
	int8_t x172 = INT8_MAX;
	int32_t t42 = -580992376;

	t42 = (x169<(x170|(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	static volatile int32_t x174 = -514;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = -31564083;
	int32_t t43 = -27249;

	t43 = (x173<(x174|(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	volatile int32_t x178 = -1;
	int64_t x179 = INT64_MAX;
	volatile int8_t x180 = INT8_MIN;
	int32_t t44 = 10679;

	t44 = (x177<(x178|(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x183 = -1;
	static int64_t x184 = INT64_MIN;

	t45 = (x181<(x182|(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = 59084240LL;
	uint8_t x187 = 56U;
	int8_t x188 = -12;
	volatile int32_t t46 = -835644;

	t46 = (x185<(x186|(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	uint32_t x190 = 1044122445U;
	int64_t x191 = 2729352LL;
	volatile int32_t t47 = -74746011;

	t47 = (x189<(x190|(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	uint64_t x194 = 3749LLU;
	volatile uint16_t x195 = 87U;
	volatile int8_t x196 = -5;
	int32_t t48 = 322941023;

	t48 = (x193<(x194|(x195<=x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	static int8_t x199 = -1;
	volatile uint8_t x200 = 30U;
	volatile int32_t t49 = 3;

	t49 = (x197<(x198|(x199<=x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static int32_t x202 = -498;
	static volatile int64_t x203 = 6788556LL;
	uint32_t x204 = 15U;

	t50 = (x201<(x202|(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = -1;
	static int8_t x207 = INT8_MIN;
	uint16_t x208 = 14182U;

	t51 = (x205<(x206|(x207<=x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 48818493986LLU;
	uint64_t x210 = 492107LLU;
	volatile uint16_t x211 = 27729U;
	int16_t x212 = -145;
	volatile int32_t t52 = -95908200;

	t52 = (x209<(x210|(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	int32_t x214 = -41550848;
	int32_t x215 = -1;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 143456;

	t53 = (x213<(x214|(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x218 = 38U;
	volatile int32_t x219 = INT32_MAX;
	int32_t x220 = -1;

	t54 = (x217<(x218|(x219<=x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = INT32_MIN;
	static int8_t x223 = -1;
	volatile int32_t t55 = -9281906;

	t55 = (x221<(x222|(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -766;
	uint64_t x226 = 159800934203604LLU;
	int64_t x227 = INT64_MIN;
	static int64_t x228 = -754210106937LL;
	static int32_t t56 = -533;

	t56 = (x225<(x226|(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = 1063;
	int64_t x231 = INT64_MIN;
	int32_t t57 = 95110;

	t57 = (x229<(x230|(x231<=x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	uint8_t x236 = UINT8_MAX;
	static int32_t t58 = 115980;

	t58 = (x233<(x234|(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MAX;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	int32_t t59 = 126661190;

	t59 = (x237<(x238|(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 1270LLU;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MAX;
	static volatile int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 294064695;

	t60 = (x241<(x242|(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MAX;
	int8_t x247 = -1;
	int32_t x248 = INT32_MAX;
	volatile int32_t t61 = 31;

	t61 = (x245<(x246|(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 3LLU;
	uint8_t x251 = 20U;
	int8_t x252 = 47;
	volatile int32_t t62 = -7231035;

	t62 = (x249<(x250|(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MIN;
	uint32_t x255 = 372851442U;
	static volatile int32_t t63 = 1044329;

	t63 = (x253<(x254|(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	volatile uint8_t x258 = 6U;
	volatile int16_t x259 = INT16_MIN;
	static int64_t x260 = -305LL;

	t64 = (x257<(x258|(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t x263 = -1;
	volatile int32_t t65 = -1833043;

	t65 = (x261<(x262|(x263<=x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = 0;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = 836374;

	t66 = (x265<(x266|(x267<=x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int16_t x270 = 29;
	volatile uint64_t x271 = 42038987947932LLU;
	int64_t x272 = 9915379750LL;

	t67 = (x269<(x270|(x271<=x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 18468549871503LLU;
	int8_t x274 = 4;
	int64_t x275 = INT64_MIN;
	static uint64_t x276 = 161LLU;

	t68 = (x273<(x274|(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	int32_t x278 = -1;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 2040249308U;
	int32_t t69 = 994118;

	t69 = (x277<(x278|(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int16_t x282 = -39;
	volatile int64_t x283 = -33279457203006LL;
	static volatile uint32_t x284 = 164654267U;
	volatile int32_t t70 = 885;

	t70 = (x281<(x282|(x283<=x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = 1;
	int8_t x287 = INT8_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -225459886;

	t71 = (x285<(x286|(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x290 = 1;
	int8_t x291 = 5;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = -13652;

	t72 = (x289<(x290|(x291<=x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile uint8_t x294 = UINT8_MAX;
	volatile int32_t x296 = INT32_MIN;
	int32_t t73 = -13721039;

	t73 = (x293<(x294|(x295<=x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	uint16_t x298 = UINT16_MAX;
	volatile int8_t x299 = 0;
	int64_t x300 = -1LL;
	static int32_t t74 = -187503241;

	t74 = (x297<(x298|(x299<=x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x302 = 4414U;
	static int32_t x303 = INT32_MAX;
	int32_t x304 = -1;
	static volatile int32_t t75 = -679057311;

	t75 = (x301<(x302|(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -6349586;
	int16_t x306 = INT16_MIN;
	int16_t x308 = -1;

	t76 = (x305<(x306|(x307<=x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	static int32_t x310 = INT32_MIN;
	int8_t x311 = -1;
	uint16_t x312 = UINT16_MAX;
	static int32_t t77 = -32;

	t77 = (x309<(x310|(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 1;
	uint32_t x314 = 4U;
	uint64_t x315 = 1777147230305473LLU;
	int32_t t78 = 1;

	t78 = (x313<(x314|(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = -2119;

	t79 = (x317<(x318|(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	volatile int64_t x324 = INT64_MIN;

	t80 = (x321<(x322|(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	static int32_t x326 = INT32_MIN;
	uint32_t x328 = UINT32_MAX;

	t81 = (x325<(x326|(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	volatile uint32_t x331 = 535967U;
	volatile int32_t t82 = -357667;

	t82 = (x329<(x330|(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	int32_t t83 = -30503268;

	t83 = (x333<(x334|(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x338 = INT8_MAX;
	uint16_t x339 = UINT16_MAX;
	static volatile uint16_t x340 = 9U;

	t84 = (x337<(x338|(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -13586;
	uint64_t x343 = UINT64_MAX;
	volatile int16_t x344 = INT16_MIN;

	t85 = (x341<(x342|(x343<=x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = 0;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 8U;
	int32_t t86 = -29114;

	t86 = (x345<(x346|(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MAX;
	static int32_t x352 = -1;

	t87 = (x349<(x350|(x351<=x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = -1;
	static int64_t x355 = -1LL;
	int32_t x356 = -57;
	volatile int32_t t88 = -502;

	t88 = (x353<(x354|(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 11789LLU;
	volatile int16_t x358 = 28;
	static int32_t x359 = 217;
	volatile int16_t x360 = 0;
	int32_t t89 = 0;

	t89 = (x357<(x358|(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	uint8_t x362 = 14U;
	static int32_t x363 = INT32_MAX;

	t90 = (x361<(x362|(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	volatile int8_t x368 = -1;

	t91 = (x365<(x366|(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = 6682LLU;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = -250175;
	int32_t t92 = 16;

	t92 = (x369<(x370|(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MIN;
	volatile int16_t x375 = INT16_MIN;
	static int16_t x376 = -1;
	int32_t t93 = 12771517;

	t93 = (x373<(x374|(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MAX;
	static int16_t x379 = -1;
	static int32_t x380 = 5950;
	volatile int32_t t94 = -1939;

	t94 = (x377<(x378|(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MAX;
	static int32_t t95 = 2250;

	t95 = (x381<(x382|(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = -152144902155LL;
	int64_t x386 = 22LL;
	uint64_t x388 = 83874047LLU;

	t96 = (x385<(x386|(x387<=x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t97 = -19268;

	t97 = (x389<(x390|(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	static int16_t x396 = INT16_MIN;
	int32_t t98 = 3118;

	t98 = (x393<(x394|(x395<=x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = UINT32_MAX;
	volatile uint8_t x398 = 1U;
	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -75548303;

	t99 = (x397<(x398|(x399<=x400)));

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

