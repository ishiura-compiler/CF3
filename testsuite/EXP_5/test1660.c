#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1766U;
static uint64_t x4 = 21LLU;
int64_t x5 = 65877458217422LL;
int16_t x6 = -15796;
volatile uint16_t x8 = UINT16_MAX;
volatile int32_t t3 = -328864585;
uint32_t x30 = 331U;
volatile int32_t t8 = -455968681;
int8_t x40 = 0;
int32_t x42 = INT32_MIN;
static uint32_t x44 = 27119536U;
int64_t x48 = INT64_MAX;
int64_t x49 = INT64_MAX;
volatile int32_t t12 = -10;
volatile int16_t x54 = -8886;
uint32_t x58 = 6U;
int8_t x76 = -7;
int32_t x89 = INT32_MAX;
int32_t t22 = 3140440;
volatile int32_t t23 = -16246923;
volatile int8_t x97 = 1;
int32_t x109 = INT32_MIN;
static int64_t x110 = 1698700734LL;
uint16_t x117 = 338U;
int32_t x125 = 58;
int64_t x126 = -165970445LL;
uint8_t x130 = UINT8_MAX;
int64_t x140 = 62466408LL;
int16_t x141 = INT16_MAX;
volatile int8_t x152 = 0;
volatile int8_t x156 = INT8_MIN;
int32_t t38 = -1;
int16_t x162 = INT16_MAX;
int8_t x175 = INT8_MIN;
uint32_t x176 = UINT32_MAX;
volatile uint8_t x184 = 3U;
volatile int32_t t45 = -129189829;
static int8_t x186 = INT8_MAX;
uint32_t x188 = UINT32_MAX;
uint16_t x191 = UINT16_MAX;
int32_t t47 = -233448;
static volatile int16_t x194 = INT16_MIN;
volatile int32_t t49 = -48;
int32_t x203 = INT32_MAX;
volatile int8_t x204 = -1;
volatile int32_t x209 = INT32_MIN;
volatile int32_t t52 = 950731;
int64_t x214 = -1426763340851LL;
volatile int16_t x218 = 13;
int32_t x222 = 114463;
uint32_t x225 = UINT32_MAX;
static int64_t x230 = -1LL;
int16_t x236 = INT16_MIN;
uint8_t x240 = UINT8_MAX;
volatile int32_t t60 = 218437024;
static int8_t x246 = INT8_MAX;
static uint16_t x247 = 12U;
int32_t x250 = INT32_MAX;
int32_t t63 = -1725;
int8_t x257 = INT8_MIN;
volatile int32_t t64 = 214483;
int8_t x269 = INT8_MIN;
int32_t x276 = INT32_MIN;
int64_t x283 = -590571925642604758LL;
int16_t x286 = INT16_MIN;
uint16_t x290 = 10U;
int64_t x291 = 925200105470LL;
int64_t x294 = -1LL;
int64_t x297 = INT64_MIN;
uint8_t x301 = 72U;
uint32_t x307 = 272378941U;
uint64_t x308 = 101103893667517405LLU;
static int8_t x310 = INT8_MAX;
int16_t x311 = -1;
int8_t x313 = INT8_MAX;
int8_t x317 = INT8_MAX;
int64_t x321 = INT64_MIN;
volatile uint16_t x326 = 15821U;
int64_t x339 = INT64_MAX;
int32_t t84 = -1673;
int16_t x344 = INT16_MIN;
int32_t t85 = -6853086;
static int32_t x345 = INT32_MAX;
int16_t x349 = -20;
int16_t x351 = 5;
int64_t x352 = -1LL;
int32_t t91 = 3;
int8_t x376 = -1;
int16_t x378 = 4611;
int32_t x379 = 46318;
uint64_t x386 = 17LLU;
uint64_t x387 = 5375734228LLU;
int8_t x390 = INT8_MAX;
uint16_t x399 = 10U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static int32_t x3 = INT32_MAX;
	int32_t t0 = -11576;

	t0 = (x1<((x2<=x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = 1LL;
	static volatile int32_t t1 = 255240056;

	t1 = (x5<((x6<=x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 27507U;
	volatile uint8_t x10 = UINT8_MAX;
	static uint32_t x11 = 1U;
	volatile int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 64950;

	t2 = (x9<((x10<=x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2U;
	static int32_t x14 = INT32_MAX;
	static int8_t x15 = 12;
	int8_t x16 = -1;

	t3 = (x13<((x14<=x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint8_t x18 = 14U;
	static uint8_t x19 = 44U;
	volatile int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -7628857;

	t4 = (x17<((x18<=x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = 1U;
	static int64_t x23 = INT64_MIN;
	uint16_t x24 = 30784U;
	int32_t t5 = -7399294;

	t5 = (x21<((x22<=x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = 93U;
	static uint32_t x26 = 45526262U;
	static int8_t x27 = -45;
	static int64_t x28 = 3476250583547LL;
	static int32_t t6 = -19795980;

	t6 = (x25<((x26<=x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 27768LLU;
	int32_t x31 = -3117;
	static int64_t x32 = -31844484768111854LL;
	volatile int32_t t7 = 13;

	t7 = (x29<((x30<=x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 175LLU;
	int8_t x34 = INT8_MIN;
	static int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MAX;

	t8 = (x33<((x34<=x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	volatile int16_t x38 = -1;
	uint32_t x39 = 25697060U;
	int32_t t9 = -445610967;

	t9 = (x37<((x38<=x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 555;
	static int64_t x43 = 68LL;
	static int32_t t10 = -1735633;

	t10 = (x41<((x42<=x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int64_t x46 = -1LL;
	int64_t x47 = INT64_MAX;
	int32_t t11 = -912822;

	t11 = (x45<((x46<=x47)&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	volatile int16_t x51 = -1;
	static volatile uint16_t x52 = UINT16_MAX;

	t12 = (x49<((x50<=x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 56U;
	static int8_t x55 = -7;
	int32_t x56 = -399510740;
	int32_t t13 = 1531;

	t13 = (x53<((x54<=x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 152168815U;
	int16_t x59 = INT16_MAX;
	int16_t x60 = -1;
	volatile int32_t t14 = -82908;

	t14 = (x57<((x58<=x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	static int32_t x62 = 136682;
	volatile uint8_t x63 = UINT8_MAX;
	uint64_t x64 = 26653LLU;
	volatile int32_t t15 = 93674;

	t15 = (x61<((x62<=x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 13U;
	volatile int16_t x66 = -1;
	volatile int32_t x67 = 0;
	volatile int64_t x68 = -1LL;
	int32_t t16 = 152;

	t16 = (x65<((x66<=x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static int32_t x70 = -59718;
	int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 3056905;

	t17 = (x69<((x70<=x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint8_t x74 = 33U;
	int8_t x75 = -2;
	int32_t t18 = 19585;

	t18 = (x73<((x74<=x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = 7U;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = -6;
	volatile int32_t t19 = 11516206;

	t19 = (x77<((x78<=x79)&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	volatile uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 15417U;
	volatile int32_t t20 = -307;

	t20 = (x81<((x82<=x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1004610;
	int16_t x86 = INT16_MAX;
	int16_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 20533554;

	t21 = (x85<((x86<=x87)&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = UINT32_MAX;
	int32_t x91 = 19247069;
	volatile int16_t x92 = -1;

	t22 = (x89<((x90<=x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 24U;
	volatile int8_t x94 = -1;
	static int8_t x95 = -1;
	uint64_t x96 = UINT64_MAX;

	t23 = (x93<((x94<=x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 129870746557531890LLU;
	uint8_t x99 = 1U;
	volatile uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = -5401;

	t24 = (x97<((x98<=x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = -1;
	static uint16_t x104 = UINT16_MAX;
	static volatile int32_t t25 = -258676;

	t25 = (x101<((x102<=x103)&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 1;
	int64_t x106 = 99711809531LL;
	static uint8_t x107 = 21U;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 8;

	t26 = (x105<((x106<=x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x111 = 40712LLU;
	int32_t x112 = -25373;
	static int32_t t27 = 44278270;

	t27 = (x109<((x110<=x111)&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 1;
	static int8_t x114 = -61;
	int8_t x115 = 1;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 19;

	t28 = (x113<((x114<=x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = -1;
	volatile uint64_t x119 = 4675461504070LLU;
	static int32_t x120 = 1047532864;
	int32_t t29 = -1561792;

	t29 = (x117<((x118<=x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MIN;
	int8_t x124 = 0;
	volatile int32_t t30 = 237;

	t30 = (x121<((x122<=x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x127 = INT8_MIN;
	static uint8_t x128 = 8U;
	volatile int32_t t31 = 55067;

	t31 = (x125<((x126<=x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -2167LL;
	uint64_t x131 = 13722LLU;
	int8_t x132 = INT8_MIN;
	int32_t t32 = -97;

	t32 = (x129<((x130<=x131)&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 7U;
	uint16_t x134 = 1817U;
	int32_t x135 = -437;
	int16_t x136 = -92;
	volatile int32_t t33 = 15671005;

	t33 = (x133<((x134<=x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 945U;
	int64_t x138 = -1LL;
	static int16_t x139 = INT16_MAX;
	volatile int32_t t34 = 0;

	t34 = (x137<((x138<=x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MAX;
	int64_t x143 = 4175LL;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 0;

	t35 = (x141<((x142<=x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	int32_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = 1;
	volatile int32_t t36 = 6137;

	t36 = (x145<((x146<=x147)&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 8015;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MAX;
	volatile int32_t t37 = 67619;

	t37 = (x149<((x150<=x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	static volatile uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;

	t38 = (x153<((x154<=x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = 4;
	int32_t x159 = INT32_MAX;
	volatile int8_t x160 = INT8_MAX;
	int32_t t39 = 96263;

	t39 = (x157<((x158<=x159)&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	static volatile uint32_t x163 = 125185U;
	static uint32_t x164 = 1474U;
	volatile int32_t t40 = 12480279;

	t40 = (x161<((x162<=x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = 1;
	volatile uint8_t x166 = 0U;
	int32_t x167 = 24;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -320394;

	t41 = (x165<((x166<=x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1310;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 257424838;

	t42 = (x169<((x170<=x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	uint64_t x174 = 12649338LLU;
	int32_t t43 = 10775199;

	t43 = (x173<((x174<=x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MIN;
	int16_t x178 = -1;
	static volatile uint32_t x179 = 782U;
	int32_t x180 = INT32_MIN;
	static int32_t t44 = 939070;

	t44 = (x177<((x178<=x179)&x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	volatile int8_t x182 = 5;
	volatile int64_t x183 = INT64_MIN;

	t45 = (x181<((x182<=x183)&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x187 = UINT64_MAX;
	int32_t t46 = -552993;

	t46 = (x185<((x186<=x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = UINT32_MAX;
	uint16_t x190 = 0U;
	int16_t x192 = 41;

	t47 = (x189<((x190<=x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1LL;
	static uint32_t x195 = 83U;
	int16_t x196 = -7;
	volatile int32_t t48 = -604;

	t48 = (x193<((x194<=x195)&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	uint8_t x198 = 10U;
	volatile int8_t x199 = -1;
	int64_t x200 = -1LL;

	t49 = (x197<((x198<=x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 332003435U;
	int64_t x202 = -1LL;
	int32_t t50 = -1;

	t50 = (x201<((x202<=x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = UINT16_MAX;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = 3125;
	uint16_t x208 = 7144U;
	int32_t t51 = 33132471;

	t51 = (x205<((x206<=x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x210 = UINT32_MAX;
	int8_t x211 = -45;
	int8_t x212 = INT8_MAX;

	t52 = (x209<((x210<=x211)&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x213 = 0U;
	volatile uint8_t x215 = UINT8_MAX;
	int8_t x216 = 8;
	volatile int32_t t53 = -41;

	t53 = (x213<((x214<=x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 11U;
	volatile int8_t x219 = 0;
	uint64_t x220 = 22391489983024LLU;
	volatile int32_t t54 = 1589342;

	t54 = (x217<((x218<=x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	uint8_t x223 = 74U;
	volatile int8_t x224 = -1;
	int32_t t55 = 6;

	t55 = (x221<((x222<=x223)&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -1;
	volatile int32_t t56 = -72;

	t56 = (x225<((x226<=x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = UINT16_MAX;
	static int16_t x231 = INT16_MIN;
	uint32_t x232 = 27U;
	volatile int32_t t57 = 30;

	t57 = (x229<((x230<=x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile int16_t x234 = -1;
	volatile int8_t x235 = INT8_MIN;
	volatile int32_t t58 = -8423;

	t58 = (x233<((x234<=x235)&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	static int32_t x238 = -1;
	int64_t x239 = -149243LL;
	volatile int32_t t59 = -5;

	t59 = (x237<((x238<=x239)&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = 616LL;
	int64_t x242 = -1LL;
	int32_t x243 = INT32_MAX;
	int8_t x244 = INT8_MIN;

	t60 = (x241<((x242<=x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	uint32_t x248 = UINT32_MAX;
	int32_t t61 = -5257990;

	t61 = (x245<((x246<=x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x251 = 3115853718LLU;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t62 = 51067;

	t62 = (x249<((x250<=x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MAX;
	uint32_t x255 = 208U;
	static int32_t x256 = 32975478;

	t63 = (x253<((x254<=x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MAX;
	volatile uint16_t x260 = 0U;

	t64 = (x257<((x258<=x259)&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 4U;
	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 9054790;

	t65 = (x261<((x262<=x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	int16_t x267 = -470;
	int64_t x268 = -214831LL;
	volatile int32_t t66 = -1050;

	t66 = (x265<((x266<=x267)&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	static int64_t x271 = 21LL;
	static int8_t x272 = -1;
	volatile int32_t t67 = -179316923;

	t67 = (x269<((x270<=x271)&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	int32_t t68 = -20127025;

	t68 = (x273<((x274<=x275)&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 18794050482610LLU;
	volatile int32_t x278 = -1;
	uint16_t x279 = 17487U;
	static volatile uint16_t x280 = 1U;
	volatile int32_t t69 = -3;

	t69 = (x277<((x278<=x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MAX;
	int16_t x284 = 1594;
	int32_t t70 = 14;

	t70 = (x281<((x282<=x283)&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -7;
	int8_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t71 = -13064;

	t71 = (x285<((x286<=x287)&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x289 = -80;
	volatile int64_t x292 = INT64_MIN;
	int32_t t72 = -44900;

	t72 = (x289<((x290<=x291)&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MAX;
	int64_t x295 = 317611830053LL;
	uint32_t x296 = 7194U;
	int32_t t73 = 29881;

	t73 = (x293<((x294<=x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -1;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 79157633;

	t74 = (x297<((x298<=x299)&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x302 = 0;
	int32_t x303 = -1;
	int32_t x304 = INT32_MIN;
	int32_t t75 = 816;

	t75 = (x301<((x302<=x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	static uint64_t x306 = 755796577664113LLU;
	volatile int32_t t76 = -107;

	t76 = (x305<((x306<=x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x312 = INT32_MAX;
	volatile int32_t t77 = 1485;

	t77 = (x309<((x310<=x311)&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 25995U;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 3U;
	int32_t t78 = -5304033;

	t78 = (x313<((x314<=x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = UINT32_MAX;
	static int16_t x319 = 120;
	int8_t x320 = -1;
	static volatile int32_t t79 = 2242535;

	t79 = (x317<((x318<=x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MAX;
	uint64_t x323 = 105909732090LLU;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = -302;

	t80 = (x321<((x322<=x323)&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x325 = 0U;
	volatile int16_t x327 = 1;
	int32_t x328 = INT32_MAX;
	int32_t t81 = 10084193;

	t81 = (x325<((x326<=x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	volatile uint64_t x330 = 1467369950281993135LLU;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = 3U;
	static volatile int32_t t82 = 920420;

	t82 = (x329<((x330<=x331)&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	static volatile uint8_t x334 = 0U;
	uint32_t x335 = 411683U;
	int8_t x336 = 21;
	volatile int32_t t83 = -46;

	t83 = (x333<((x334<=x335)&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;

	t84 = (x337<((x338<=x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	static volatile int64_t x343 = -1LL;

	t85 = (x341<((x342<=x343)&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 79U;
	volatile int16_t x348 = -1;
	int32_t t86 = 7;

	t86 = (x345<((x346<=x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	int32_t t87 = -4139;

	t87 = (x349<((x350<=x351)&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	volatile uint32_t x354 = UINT32_MAX;
	static uint64_t x355 = 337567337852LLU;
	int32_t x356 = INT32_MAX;
	int32_t t88 = 235;

	t88 = (x353<((x354<=x355)&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -380604393285649LL;
	static int32_t x358 = INT32_MIN;
	volatile int8_t x359 = INT8_MAX;
	int32_t x360 = -469;
	int32_t t89 = 233534;

	t89 = (x357<((x358<=x359)&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 23U;
	uint64_t x362 = 2623LLU;
	static int64_t x363 = INT64_MAX;
	static int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 10;

	t90 = (x361<((x362<=x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 3109246U;
	int64_t x367 = INT64_MAX;
	uint8_t x368 = 58U;

	t91 = (x365<((x366<=x367)&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int64_t x370 = -1LL;
	static volatile int32_t x371 = -52;
	int64_t x372 = 1190529953572646279LL;
	volatile int32_t t92 = -9287;

	t92 = (x369<((x370<=x371)&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 13U;
	volatile uint8_t x374 = 1U;
	int64_t x375 = INT64_MAX;
	volatile int32_t t93 = 29;

	t93 = (x373<((x374<=x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x377 = INT8_MIN;
	static int16_t x380 = -1;
	volatile int32_t t94 = -57948;

	t94 = (x377<((x378<=x379)&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 3119LL;
	uint8_t x382 = 5U;
	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t95 = 269139;

	t95 = (x381<((x382<=x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	static volatile int64_t x388 = INT64_MIN;
	volatile int32_t t96 = -171;

	t96 = (x385<((x386<=x387)&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	int16_t x391 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -128460;

	t97 = (x389<((x390<=x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 1518767287587814369LLU;
	int8_t x394 = INT8_MIN;
	volatile int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;
	int32_t t98 = -3;

	t98 = (x393<((x394<=x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x397 = 455U;
	uint64_t x398 = 18268134525664833LLU;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -38;

	t99 = (x397<((x398<=x399)&x400));

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

