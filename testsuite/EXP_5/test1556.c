#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = INT16_MIN;
static int32_t t2 = -1036669056;
static uint8_t x16 = UINT8_MAX;
static volatile int32_t t3 = 502361;
int16_t x22 = INT16_MAX;
int32_t x25 = -1039;
int16_t x29 = -1;
volatile int32_t t7 = 3284173;
static volatile int8_t x34 = INT8_MIN;
uint64_t x40 = UINT64_MAX;
uint16_t x41 = 7435U;
volatile int32_t t11 = 5;
int32_t t12 = 191675300;
int64_t x55 = -7LL;
int32_t x56 = 5451;
volatile int8_t x57 = -2;
volatile uint32_t x58 = 33292U;
volatile int32_t t14 = 1;
volatile uint16_t x61 = UINT16_MAX;
volatile uint8_t x62 = 21U;
static int16_t x63 = -1;
volatile int32_t t15 = -60849088;
int16_t x66 = INT16_MIN;
uint64_t x69 = 106LLU;
uint64_t x71 = 6572LLU;
volatile int32_t t18 = -117571395;
int16_t x82 = 1;
static volatile int64_t x89 = 48728674LL;
volatile uint64_t x95 = UINT64_MAX;
int32_t x100 = INT32_MIN;
volatile int32_t t25 = -3;
int8_t x106 = INT8_MIN;
uint8_t x112 = UINT8_MAX;
int64_t x116 = INT64_MAX;
static int32_t x121 = -1;
int8_t x125 = INT8_MIN;
uint32_t x139 = UINT32_MAX;
int64_t x140 = INT64_MIN;
volatile int32_t t36 = 1;
uint16_t x153 = 237U;
uint8_t x155 = UINT8_MAX;
static int64_t x156 = INT64_MAX;
int8_t x157 = INT8_MIN;
volatile int32_t t39 = -9678;
uint8_t x161 = 30U;
int32_t x169 = 7984;
volatile int32_t t42 = -91;
volatile int32_t x173 = INT32_MAX;
volatile int32_t t43 = -4;
int8_t x184 = INT8_MIN;
int64_t x204 = INT64_MAX;
int8_t x206 = -1;
static volatile int32_t t51 = -9;
int32_t x209 = 41725241;
volatile int32_t t53 = 1369717;
int32_t x220 = -275;
int32_t t54 = -7;
int8_t x229 = INT8_MIN;
uint16_t x231 = UINT16_MAX;
int8_t x242 = INT8_MIN;
volatile int32_t t61 = 329813;
int64_t x249 = INT64_MAX;
int64_t x250 = 24LL;
uint64_t x251 = 42342726247487503LLU;
int32_t x254 = -20435;
int8_t x258 = 4;
static volatile int32_t t64 = 37748440;
int32_t t66 = -162301649;
uint32_t x269 = 1433266U;
int8_t x270 = INT8_MIN;
static int16_t x275 = -1;
uint32_t x276 = 1U;
volatile int32_t t71 = 57;
int32_t t72 = 379947;
int64_t x294 = INT64_MIN;
uint16_t x297 = UINT16_MAX;
int8_t x302 = -1;
volatile uint64_t x303 = 9494971521776LLU;
int64_t x304 = INT64_MIN;
static int32_t t75 = 143969337;
static volatile int16_t x305 = -1;
int32_t x306 = INT32_MIN;
static int16_t x309 = INT16_MAX;
int64_t x316 = INT64_MIN;
uint8_t x318 = 4U;
uint8_t x322 = 54U;
int32_t t80 = -6;
uint32_t x327 = UINT32_MAX;
int8_t x328 = -59;
int64_t x330 = -1LL;
uint16_t x336 = UINT16_MAX;
int32_t t83 = 0;
int16_t x344 = -1;
static int8_t x352 = INT8_MIN;
static int16_t x354 = 1582;
uint16_t x359 = 2U;
volatile int16_t x360 = INT16_MIN;
uint64_t x365 = 3629351LLU;
volatile uint32_t x370 = 6978U;
volatile int32_t x386 = INT32_MAX;
static int32_t x391 = 7485;
volatile uint8_t x397 = 3U;
volatile int8_t x400 = INT8_MIN;


void f0(void) {
	static uint8_t x1 = 22U;
	int64_t x2 = 3404048868695479LL;
	int32_t x3 = 929534;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = -2531;

	t0 = (x1<((x2<=x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 232819652;
	static volatile int32_t x6 = -140657;
	static int8_t x7 = -1;
	volatile int32_t x8 = -1;
	static volatile int32_t t1 = 281078427;

	t1 = (x5<((x6<=x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 7U;
	int8_t x10 = 2;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9<((x10<=x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -405406LL;
	static int32_t x14 = -1;
	volatile uint32_t x15 = UINT32_MAX;

	t3 = (x13<((x14<=x15)*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	static volatile int64_t x18 = -1LL;
	int16_t x19 = 25;
	volatile int8_t x20 = -5;
	int32_t t4 = 733431610;

	t4 = (x17<((x18<=x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int64_t x23 = 4955421342992144LL;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 26512;

	t5 = (x21<((x22<=x23)*x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 614898079;
	int8_t x27 = INT8_MIN;
	static volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 1;

	t6 = (x25<((x26<=x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	int32_t x32 = INT32_MIN;

	t7 = (x29<((x30<=x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 409U;
	uint64_t x35 = 1288500238872257749LLU;
	static int64_t x36 = -72169632LL;
	volatile int32_t t8 = -418;

	t8 = (x33<((x34<=x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 16364332U;
	int16_t x38 = -1;
	int16_t x39 = INT16_MAX;
	volatile int32_t t9 = -1;

	t9 = (x37<((x38<=x39)*x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	int32_t x43 = -1;
	int64_t x44 = INT64_MAX;
	int32_t t10 = 892459552;

	t10 = (x41<((x42<=x43)*x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 16045LL;
	int32_t x46 = INT32_MAX;
	int16_t x47 = -1;
	static volatile uint16_t x48 = 3041U;

	t11 = (x45<((x46<=x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -1;
	static volatile int32_t x50 = -1;
	volatile uint16_t x51 = UINT16_MAX;
	static int16_t x52 = -1;

	t12 = (x49<((x50<=x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 9U;
	uint32_t x54 = 491325220U;
	volatile int32_t t13 = -3917762;

	t13 = (x53<((x54<=x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x59 = 12U;
	volatile int16_t x60 = 14;

	t14 = (x57<((x58<=x59)*x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x64 = UINT64_MAX;

	t15 = (x61<((x62<=x63)*x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MAX;
	static int32_t t16 = -1930;

	t16 = (x65<((x66<=x67)*x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 4U;
	int8_t x72 = 1;
	int32_t t17 = -178;

	t17 = (x69<((x70<=x71)*x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	uint64_t x74 = 2594117467237843LLU;
	uint8_t x75 = 9U;
	int32_t x76 = INT32_MIN;

	t18 = (x73<((x74<=x75)*x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile uint16_t x78 = UINT16_MAX;
	static int8_t x79 = INT8_MAX;
	volatile uint16_t x80 = 2895U;
	int32_t t19 = -1849;

	t19 = (x77<((x78<=x79)*x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 846349891118892198LL;
	volatile int16_t x83 = INT16_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 3;

	t20 = (x81<((x82<=x83)*x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -109115LL;
	uint32_t x86 = 0U;
	uint8_t x87 = 0U;
	int64_t x88 = -1LL;
	volatile int32_t t21 = 119375;

	t21 = (x85<((x86<=x87)*x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = INT16_MAX;
	int16_t x91 = 270;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = -85410147;

	t22 = (x89<((x90<=x91)*x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1;
	uint32_t x94 = 15U;
	static int8_t x96 = -1;
	int32_t t23 = -3569570;

	t23 = (x93<((x94<=x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	static uint64_t x99 = 848317198154268928LLU;
	volatile int32_t t24 = 912062;

	t24 = (x97<((x98<=x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = UINT32_MAX;
	int64_t x102 = INT64_MIN;
	volatile int32_t x103 = -2;
	uint16_t x104 = 66U;

	t25 = (x101<((x102<=x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	static volatile int16_t x107 = 5;
	uint32_t x108 = 2076227849U;
	int32_t t26 = -12;

	t26 = (x105<((x106<=x107)*x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -234;
	volatile int8_t x110 = -1;
	static uint64_t x111 = 3LLU;
	int32_t t27 = 19921217;

	t27 = (x109<((x110<=x111)*x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = 4576538104243008366LL;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = 13U;
	volatile int32_t t28 = -110;

	t28 = (x113<((x114<=x115)*x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	uint8_t x118 = 5U;
	int32_t x119 = 55455814;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t29 = 62;

	t29 = (x117<((x118<=x119)*x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MAX;
	int16_t x124 = -16;
	int32_t t30 = -3924586;

	t30 = (x121<((x122<=x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 6291U;
	static uint8_t x127 = 4U;
	uint16_t x128 = 16U;
	volatile int32_t t31 = -1;

	t31 = (x125<((x126<=x127)*x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static volatile int32_t x130 = INT32_MIN;
	static int16_t x131 = -1;
	static int32_t x132 = INT32_MAX;
	int32_t t32 = -23775;

	t32 = (x129<((x130<=x131)*x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 865LLU;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 2364130199LLU;
	uint16_t x136 = 42U;
	int32_t t33 = 0;

	t33 = (x133<((x134<=x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	volatile uint64_t x138 = 7325593546870LLU;
	int32_t t34 = -1;

	t34 = (x137<((x138<=x139)*x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -97;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = UINT64_MAX;
	static int32_t t35 = -39;

	t35 = (x141<((x142<=x143)*x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 1259237;
	uint16_t x146 = UINT16_MAX;
	volatile int32_t x147 = INT32_MIN;
	static int64_t x148 = -117858944LL;

	t36 = (x145<((x146<=x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 87;
	int32_t x150 = INT32_MIN;
	static int8_t x151 = 0;
	static int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 185999;

	t37 = (x149<((x150<=x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t t38 = 0;

	t38 = (x153<((x154<=x155)*x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = -1;

	t39 = (x157<((x158<=x159)*x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x162 = INT64_MAX;
	int32_t x163 = -1;
	static int32_t x164 = -1;
	static volatile int32_t t40 = 3192;

	t40 = (x161<((x162<=x163)*x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 510U;
	int16_t x166 = -31;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = 7;

	t41 = (x165<((x166<=x167)*x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	static int64_t x172 = INT64_MIN;

	t42 = (x169<((x170<=x171)*x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = 6909U;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -40;

	t43 = (x173<((x174<=x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = INT64_MIN;
	static uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = -1069446867;

	t44 = (x177<((x178<=x179)*x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 116U;
	uint16_t x182 = 30U;
	int32_t x183 = -1;
	static volatile int32_t t45 = 757073;

	t45 = (x181<((x182<=x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = 11592;
	uint32_t x187 = 1463U;
	int64_t x188 = -139LL;
	volatile int32_t t46 = -8481;

	t46 = (x185<((x186<=x187)*x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 29434U;
	int16_t x190 = -2;
	uint32_t x191 = 784U;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 13582470;

	t47 = (x189<((x190<=x191)*x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = INT8_MAX;
	static int64_t x194 = -1LL;
	int32_t x195 = -1705361;
	static int8_t x196 = INT8_MIN;
	int32_t t48 = 0;

	t48 = (x193<((x194<=x195)*x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	volatile uint16_t x198 = 19U;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = INT8_MIN;
	int32_t t49 = -928546184;

	t49 = (x197<((x198<=x199)*x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 5;
	volatile uint64_t x202 = 20205228959942LLU;
	int8_t x203 = 1;
	static int32_t t50 = 348;

	t50 = (x201<((x202<=x203)*x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	int8_t x207 = INT8_MAX;
	int32_t x208 = INT32_MAX;

	t51 = (x205<((x206<=x207)*x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = 121558744LL;
	static int16_t x211 = 81;
	static int8_t x212 = -2;
	int32_t t52 = 81549;

	t52 = (x209<((x210<=x211)*x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -232769617;
	volatile uint16_t x214 = 0U;
	volatile int16_t x215 = 109;
	int8_t x216 = 0;

	t53 = (x213<((x214<=x215)*x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = 0U;
	int16_t x218 = -803;
	uint32_t x219 = 16U;

	t54 = (x217<((x218<=x219)*x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -2;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -1;
	static int32_t t55 = -5;

	t55 = (x221<((x222<=x223)*x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = 25286LLU;
	int16_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	static volatile int32_t t56 = 15;

	t56 = (x225<((x226<=x227)*x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = 7994;

	t57 = (x229<((x230<=x231)*x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -47LL;
	int64_t x234 = 1LL;
	uint16_t x235 = 14748U;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 299;

	t58 = (x233<((x234<=x235)*x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	int8_t x238 = 1;
	static volatile int8_t x239 = 7;
	uint32_t x240 = UINT32_MAX;
	int32_t t59 = 28;

	t59 = (x237<((x238<=x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 441134LLU;
	uint8_t x243 = 32U;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 6263;

	t60 = (x241<((x242<=x243)*x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = -1;
	uint32_t x246 = 347U;
	int32_t x247 = -478183;
	int8_t x248 = 27;

	t61 = (x245<((x246<=x247)*x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -1376;

	t62 = (x249<((x250<=x251)*x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile int8_t x255 = INT8_MAX;
	uint8_t x256 = 0U;
	int32_t t63 = -441367659;

	t63 = (x253<((x254<=x255)*x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 8U;
	volatile int64_t x259 = -9522LL;
	int32_t x260 = -1;

	t64 = (x257<((x258<=x259)*x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 4U;
	int8_t x263 = INT8_MAX;
	uint64_t x264 = 1491481080160LLU;
	volatile int32_t t65 = -156798;

	t65 = (x261<((x262<=x263)*x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = 0;
	uint64_t x267 = 748642510353LLU;
	uint16_t x268 = 1U;

	t66 = (x265<((x266<=x267)*x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x271 = 970U;
	uint8_t x272 = 22U;
	volatile int32_t t67 = -8;

	t67 = (x269<((x270<=x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x273 = INT32_MIN;
	static volatile int8_t x274 = 23;
	volatile int32_t t68 = -3;

	t68 = (x273<((x274<=x275)*x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static uint8_t x279 = 1U;
	int64_t x280 = INT64_MIN;
	int32_t t69 = -77;

	t69 = (x277<((x278<=x279)*x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	volatile uint32_t x282 = 64785U;
	int16_t x283 = INT16_MAX;
	uint64_t x284 = UINT64_MAX;
	static volatile int32_t t70 = 681428990;

	t70 = (x281<((x282<=x283)*x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	static int16_t x286 = 173;
	uint8_t x287 = 26U;
	uint32_t x288 = 1U;

	t71 = (x285<((x286<=x287)*x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	static uint32_t x290 = 178062900U;
	uint64_t x291 = 172LLU;
	static int32_t x292 = INT32_MIN;

	t72 = (x289<((x290<=x291)*x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MAX;
	uint64_t x295 = 518510LLU;
	uint64_t x296 = 14754453320688488LLU;
	int32_t t73 = 21964169;

	t73 = (x293<((x294<=x295)*x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x298 = 0U;
	uint64_t x299 = 99589253312085LLU;
	volatile int16_t x300 = -1;
	static volatile int32_t t74 = 720452403;

	t74 = (x297<((x298<=x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 4U;

	t75 = (x301<((x302<=x303)*x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x307 = 60;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 602889;

	t76 = (x305<((x306<=x307)*x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x310 = 13U;
	volatile int16_t x311 = INT16_MIN;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 282;

	t77 = (x309<((x310<=x311)*x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 8847U;
	int8_t x314 = -6;
	static uint32_t x315 = 50U;
	volatile int32_t t78 = -9;

	t78 = (x313<((x314<=x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 33639284306471566LL;
	int16_t x319 = INT16_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = 240865674;

	t79 = (x317<((x318<=x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1LL;
	volatile int16_t x323 = -1;
	uint64_t x324 = 612822LLU;

	t80 = (x321<((x322<=x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = UINT16_MAX;
	static int8_t x326 = -1;
	int32_t t81 = 3371378;

	t81 = (x325<((x326<=x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 796714299U;
	int32_t x331 = INT32_MAX;
	int64_t x332 = 407174991479089LL;
	int32_t t82 = -581;

	t82 = (x329<((x330<=x331)*x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	uint16_t x334 = 12751U;
	static int32_t x335 = INT32_MIN;

	t83 = (x333<((x334<=x335)*x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = -1;
	int64_t x340 = INT64_MAX;
	static int32_t t84 = 1782004;

	t84 = (x337<((x338<=x339)*x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 10292591568850LL;
	int8_t x342 = 0;
	static int64_t x343 = 20532332538LL;
	volatile int32_t t85 = 13736;

	t85 = (x341<((x342<=x343)*x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	static int16_t x346 = INT16_MIN;
	static uint32_t x347 = UINT32_MAX;
	static int64_t x348 = 59LL;
	volatile int32_t t86 = -2;

	t86 = (x345<((x346<=x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	static volatile int32_t t87 = 46677;

	t87 = (x349<((x350<=x351)*x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	int64_t x356 = -437683312LL;
	int32_t t88 = -27919;

	t88 = (x353<((x354<=x355)*x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = 211U;
	int32_t t89 = -1;

	t89 = (x357<((x358<=x359)*x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static volatile int32_t x362 = 2117896;
	int16_t x363 = -146;
	static int16_t x364 = -1;
	static volatile int32_t t90 = -457298;

	t90 = (x361<((x362<=x363)*x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MAX;
	static int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MIN;
	static int32_t t91 = -270577;

	t91 = (x365<((x366<=x367)*x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 3U;
	uint64_t x371 = 4075967294LLU;
	int64_t x372 = 13578545491130LL;
	static int32_t t92 = 1334737;

	t92 = (x369<((x370<=x371)*x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MAX;
	volatile int8_t x375 = INT8_MAX;
	static int64_t x376 = INT64_MAX;
	static volatile int32_t t93 = 948059049;

	t93 = (x373<((x374<=x375)*x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -5;
	volatile int32_t x378 = INT32_MIN;
	volatile int16_t x379 = INT16_MAX;
	volatile uint64_t x380 = 2360701913LLU;
	volatile int32_t t94 = -5875838;

	t94 = (x377<((x378<=x379)*x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = 118;
	volatile int32_t x382 = INT32_MAX;
	volatile int64_t x383 = -17932066689168LL;
	int8_t x384 = 4;
	volatile int32_t t95 = -6248;

	t95 = (x381<((x382<=x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = 183;
	static volatile int16_t x387 = 1;
	int8_t x388 = INT8_MIN;
	int32_t t96 = -38699689;

	t96 = (x385<((x386<=x387)*x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 0U;
	static uint32_t x392 = 28112928U;
	static volatile int32_t t97 = 0;

	t97 = (x389<((x390<=x391)*x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	static int32_t x394 = -1;
	int64_t x395 = 236462532609208LL;
	static volatile int32_t x396 = -1;
	volatile int32_t t98 = 12202;

	t98 = (x393<((x394<=x395)*x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	static int8_t x399 = -1;
	static int32_t t99 = -26;

	t99 = (x397<((x398<=x399)*x400));

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

