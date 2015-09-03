#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x12 = UINT16_MAX;
volatile int16_t x19 = -1;
int8_t x24 = 18;
static volatile int8_t x29 = INT8_MAX;
volatile uint16_t x32 = UINT16_MAX;
volatile int32_t t7 = -748;
int32_t x33 = -95385920;
int32_t x36 = -1;
uint16_t x44 = 1U;
uint16_t x46 = UINT16_MAX;
volatile int8_t x47 = -1;
static int32_t t11 = -502;
uint64_t x49 = UINT64_MAX;
volatile int32_t t13 = -22384132;
volatile int32_t x67 = INT32_MIN;
int16_t x68 = INT16_MAX;
static uint64_t x71 = UINT64_MAX;
int32_t t17 = 1010959;
volatile int32_t t18 = 10283963;
static volatile int32_t t19 = 3777247;
static volatile int16_t x81 = INT16_MIN;
int8_t x83 = INT8_MAX;
int32_t x92 = INT32_MIN;
uint32_t x93 = UINT32_MAX;
uint64_t x98 = 51475749519LLU;
volatile int64_t x99 = INT64_MIN;
int32_t t24 = 3;
static int64_t x101 = INT64_MIN;
int32_t x109 = -1;
int32_t x111 = -219187;
static int64_t x126 = INT64_MAX;
int8_t x128 = INT8_MAX;
static int32_t t31 = -12;
int64_t x134 = -1LL;
uint16_t x137 = UINT16_MAX;
int32_t x138 = -5;
int32_t x152 = -41;
int16_t x153 = -1;
static uint64_t x157 = 761820LLU;
int32_t t39 = -270633;
int32_t x163 = -1;
static int32_t t40 = -285;
int64_t x168 = 18730101243227LL;
int8_t x173 = INT8_MIN;
uint64_t x177 = 504443LLU;
uint32_t x179 = 1U;
int8_t x183 = INT8_MIN;
static int32_t t45 = -23494791;
int16_t x196 = INT16_MIN;
static int64_t x199 = 783LL;
int32_t t51 = 827534;
volatile int32_t x210 = -1;
uint32_t x212 = 53331U;
static volatile int32_t t52 = -24732532;
volatile int64_t x216 = INT64_MIN;
int32_t t53 = 119;
int8_t x218 = INT8_MAX;
int32_t x220 = -1;
int32_t t54 = 3507;
uint8_t x227 = 3U;
int32_t x231 = INT32_MIN;
uint32_t x235 = 474972556U;
volatile int8_t x241 = -13;
static uint16_t x242 = 11962U;
int32_t t62 = -562;
volatile uint16_t x253 = 431U;
int8_t x256 = INT8_MAX;
static int8_t x259 = INT8_MAX;
uint64_t x260 = UINT64_MAX;
int16_t x264 = -1;
volatile int8_t x266 = -1;
volatile int16_t x272 = INT16_MIN;
int64_t x280 = -1LL;
static int64_t x285 = INT64_MAX;
int16_t x290 = INT16_MAX;
int16_t x292 = INT16_MAX;
int16_t x296 = -433;
uint8_t x306 = UINT8_MAX;
volatile int8_t x307 = INT8_MAX;
uint64_t x308 = 1662LLU;
static volatile int32_t t76 = 5438;
uint64_t x314 = 190415LLU;
uint8_t x316 = UINT8_MAX;
int8_t x318 = INT8_MIN;
int32_t t79 = 3069013;
int64_t x324 = INT64_MIN;
static int32_t t80 = -2844;
int32_t x332 = -1;
static volatile int32_t t82 = -2097;
volatile uint32_t x334 = UINT32_MAX;
uint32_t x339 = 156U;
static int64_t x341 = 2973680188257042LL;
int32_t x344 = -1;
int32_t x345 = INT32_MIN;
volatile int32_t t86 = 1;
int8_t x356 = INT8_MAX;
volatile uint64_t x357 = 2LLU;
int32_t x358 = -1;
volatile int32_t t90 = -3851138;
static int16_t x371 = -1;
int32_t t93 = 0;
int8_t x378 = -2;
int32_t t94 = 954258;
int8_t x381 = INT8_MIN;
int8_t x383 = INT8_MAX;
static int32_t t97 = -104805016;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int32_t x2 = -1;
	int32_t x3 = 397650500;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = 3832;

	t0 = (((x1^x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static uint8_t x6 = 5U;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = -1;
	volatile int32_t t1 = -1;

	t1 = (((x5^x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int32_t x10 = -333;
	uint16_t x11 = 109U;
	int32_t t2 = 61587122;

	t2 = (((x9^x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int8_t x14 = -1;
	int8_t x15 = -1;
	static uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = -125472555;

	t3 = (((x13^x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = INT8_MAX;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 11;

	t4 = (((x17^x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 1;
	static int16_t x22 = -1;
	volatile int64_t x23 = INT64_MIN;
	volatile int32_t t5 = -105;

	t5 = (((x21^x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 10901U;
	volatile int16_t x26 = INT16_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -1217;

	t6 = (((x25^x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = -1;
	static int8_t x31 = INT8_MIN;

	t7 = (((x29^x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 672;
	static int32_t x35 = -1218060;
	static int32_t t8 = -6342363;

	t8 = (((x33^x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int16_t x38 = 7929;
	int16_t x39 = 49;
	volatile int64_t x40 = -14014LL;
	volatile int32_t t9 = -42401867;

	t9 = (((x37^x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 77967833LLU;
	int16_t x42 = 2837;
	int8_t x43 = 2;
	int32_t t10 = 13;

	t10 = (((x41^x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 1;
	volatile uint16_t x48 = UINT16_MAX;

	t11 = (((x45^x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -4227572LL;
	volatile int8_t x51 = INT8_MIN;
	uint64_t x52 = 1079373400393LLU;
	static int32_t t12 = 52259479;

	t12 = (((x49^x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 1;
	volatile int32_t x54 = INT32_MIN;
	volatile int16_t x55 = -1;
	uint16_t x56 = 1U;

	t13 = (((x53^x54)<=x55)==x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 7U;
	int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = -2502;

	t14 = (((x57^x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	int64_t x62 = INT64_MIN;
	static int8_t x63 = 1;
	int16_t x64 = -1;
	volatile int32_t t15 = 167872667;

	t15 = (((x61^x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 506U;
	int16_t x66 = 0;
	volatile int32_t t16 = -12;

	t16 = (((x65^x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	int8_t x72 = 24;

	t17 = (((x69^x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int8_t x74 = INT8_MAX;
	static int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MAX;

	t18 = (((x73^x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = UINT64_MAX;
	volatile uint64_t x80 = UINT64_MAX;

	t19 = (((x77^x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = 6957964;
	static uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = 0;

	t20 = (((x81^x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = -488;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -1;

	t21 = (((x85^x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	int8_t x90 = -20;
	int16_t x91 = 1;
	volatile int32_t t22 = 0;

	t22 = (((x89^x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = INT64_MIN;
	uint8_t x95 = 83U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 226814708;

	t23 = (((x93^x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static int8_t x100 = 14;

	t24 = (((x97^x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MAX;
	static int8_t x103 = INT8_MIN;
	static uint32_t x104 = 1586U;
	int32_t t25 = 262128317;

	t25 = (((x101^x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -6;
	int32_t x106 = -1;
	volatile uint16_t x107 = 502U;
	int64_t x108 = -1284525826LL;
	int32_t t26 = 1;

	t26 = (((x105^x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x110 = 3U;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = 369;

	t27 = (((x109^x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x114 = 21U;
	static uint32_t x115 = UINT32_MAX;
	int16_t x116 = 5;
	volatile int32_t t28 = -4;

	t28 = (((x113^x114)<=x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 166U;
	int8_t x118 = 1;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 401397;

	t29 = (((x117^x118)<=x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile int64_t x122 = -34840607195893LL;
	int32_t x123 = -1;
	int8_t x124 = -1;
	int32_t t30 = 986241865;

	t30 = (((x121^x122)<=x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x127 = -777846923;

	t31 = (((x125^x126)<=x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 724LLU;
	static int64_t x130 = INT64_MIN;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = -2;
	int32_t t32 = -104734;

	t32 = (((x129^x130)<=x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1;
	volatile int16_t x135 = 123;
	static int32_t x136 = INT32_MIN;
	static volatile int32_t t33 = 10;

	t33 = (((x133^x134)<=x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = -3;
	static int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = 1;

	t34 = (((x137^x138)<=x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	uint32_t x142 = UINT32_MAX;
	static uint32_t x143 = UINT32_MAX;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = -185471;

	t35 = (((x141^x142)<=x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x145 = INT8_MAX;
	uint16_t x146 = 5U;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 780;

	t36 = (((x145^x146)<=x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MAX;
	int64_t x151 = -14668446LL;
	static volatile int32_t t37 = 30075;

	t37 = (((x149^x150)<=x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = INT8_MIN;
	int8_t x155 = -1;
	int32_t x156 = -181445625;
	volatile int32_t t38 = -843;

	t38 = (((x153^x154)<=x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x158 = 114U;
	static volatile uint64_t x159 = 1937LLU;
	int32_t x160 = 1;

	t39 = (((x157^x158)<=x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	volatile uint16_t x162 = 616U;
	int32_t x164 = INT32_MIN;

	t40 = (((x161^x162)<=x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 15U;
	volatile uint64_t x166 = 957400974LLU;
	uint32_t x167 = 0U;
	static int32_t t41 = -220982;

	t41 = (((x165^x166)<=x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 457569;
	volatile int64_t x170 = 22782005449068642LL;
	int64_t x171 = 19232LL;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 239916;

	t42 = (((x169^x170)<=x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 116U;
	uint16_t x175 = UINT16_MAX;
	volatile int16_t x176 = INT16_MIN;
	int32_t t43 = -119486941;

	t43 = (((x173^x174)<=x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;
	int32_t t44 = 51198;

	t44 = (((x177^x178)<=x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 40587LLU;
	int64_t x182 = -461933LL;
	int32_t x184 = -1;

	t45 = (((x181^x182)<=x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x185 = INT32_MIN;
	int16_t x186 = -1;
	int32_t x187 = INT32_MIN;
	static int8_t x188 = 7;
	volatile int32_t t46 = 33897;

	t46 = (((x185^x186)<=x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile int64_t x190 = INT64_MIN;
	int16_t x191 = -1;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -3;

	t47 = (((x189^x190)<=x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	static int8_t x194 = 1;
	uint32_t x195 = 24441295U;
	static volatile int32_t t48 = 2;

	t48 = (((x193^x194)<=x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = 1546960216539061LL;
	static int32_t x198 = 838285;
	static int8_t x200 = INT8_MAX;
	int32_t t49 = 191416409;

	t49 = (((x197^x198)<=x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int8_t x202 = -49;
	int32_t x203 = -2350;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t50 = -32070;

	t50 = (((x201^x202)<=x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x205 = 42894614U;
	volatile int16_t x206 = INT16_MIN;
	uint16_t x207 = 1130U;
	static int8_t x208 = INT8_MAX;

	t51 = (((x205^x206)<=x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	int32_t x211 = -955;

	t52 = (((x209^x210)<=x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int8_t x214 = 0;
	uint64_t x215 = 7643015048281300304LLU;

	t53 = (((x213^x214)<=x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int32_t x219 = -1;

	t54 = (((x217^x218)<=x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint8_t x222 = 15U;
	int16_t x223 = -3922;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -3;

	t55 = (((x221^x222)<=x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x226 = -1LL;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t56 = -2;

	t56 = (((x225^x226)<=x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 4U;
	int64_t x230 = -1LL;
	int8_t x232 = -1;
	int32_t t57 = 111972394;

	t57 = (((x229^x230)<=x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	int8_t x234 = -10;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t58 = -1429;

	t58 = (((x233^x234)<=x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 3U;
	uint32_t x238 = 1U;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -46;
	int32_t t59 = -3;

	t59 = (((x237^x238)<=x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x243 = INT32_MIN;
	static int8_t x244 = -8;
	volatile int32_t t60 = -17;

	t60 = (((x241^x242)<=x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	int64_t x246 = INT64_MAX;
	int16_t x247 = -1;
	int64_t x248 = INT64_MIN;
	static volatile int32_t t61 = 454852;

	t61 = (((x245^x246)<=x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int8_t x252 = INT8_MIN;

	t62 = (((x249^x250)<=x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	static volatile int64_t x255 = -1LL;
	volatile int32_t t63 = 57896360;

	t63 = (((x253^x254)<=x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -11;
	int8_t x258 = INT8_MAX;
	int32_t t64 = 1;

	t64 = (((x257^x258)<=x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 43;
	int16_t x262 = INT16_MIN;
	volatile int32_t x263 = 2930681;
	static volatile int32_t t65 = -2237;

	t65 = (((x261^x262)<=x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -1;
	int32_t x267 = 818;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -74959;

	t66 = (((x265^x266)<=x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = UINT8_MAX;
	int16_t x270 = 0;
	volatile int16_t x271 = -1;
	static volatile int32_t t67 = 30;

	t67 = (((x269^x270)<=x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	int16_t x275 = -1;
	uint16_t x276 = 1U;
	volatile int32_t t68 = -805;

	t68 = (((x273^x274)<=x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MIN;
	volatile int32_t t69 = -10;

	t69 = (((x277^x278)<=x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 1354321263U;
	uint8_t x282 = 1U;
	int64_t x283 = INT64_MAX;
	int16_t x284 = 1841;
	int32_t t70 = 782085328;

	t70 = (((x281^x282)<=x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 7U;
	static volatile int64_t x288 = -1LL;
	int32_t t71 = -466553945;

	t71 = (((x285^x286)<=x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 34;
	volatile int32_t x291 = 107332210;
	volatile int32_t t72 = 147332901;

	t72 = (((x289^x290)<=x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 7264U;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 8552U;
	volatile int32_t t73 = 97064982;

	t73 = (((x293^x294)<=x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = -26;
	volatile uint8_t x299 = UINT8_MAX;
	static volatile int8_t x300 = INT8_MAX;
	static volatile int32_t t74 = -3062;

	t74 = (((x297^x298)<=x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 123588608831067667LLU;
	uint32_t x302 = 251U;
	uint64_t x303 = 1316800006145095466LLU;
	int64_t x304 = INT64_MIN;
	int32_t t75 = 38915244;

	t75 = (((x301^x302)<=x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;

	t76 = (((x305^x306)<=x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 46779017645127462LL;
	volatile int16_t x310 = 0;
	int16_t x311 = INT16_MIN;
	static int16_t x312 = -1;
	int32_t t77 = 210;

	t77 = (((x309^x310)<=x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	volatile int32_t t78 = -2379653;

	t78 = (((x313^x314)<=x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x319 = 3468679290517439LLU;
	int16_t x320 = 4871;

	t79 = (((x317^x318)<=x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MAX;

	t80 = (((x321^x322)<=x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = 8381021U;
	uint8_t x326 = 0U;
	static int64_t x327 = INT64_MAX;
	int64_t x328 = -2889785LL;
	static int32_t t81 = 0;

	t81 = (((x325^x326)<=x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	volatile int16_t x330 = 364;
	int64_t x331 = INT64_MIN;

	t82 = (((x329^x330)<=x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = UINT16_MAX;
	int16_t x335 = 2;
	volatile int8_t x336 = -5;
	static int32_t t83 = -638059;

	t83 = (((x333^x334)<=x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 3U;
	uint32_t x338 = UINT32_MAX;
	volatile uint64_t x340 = 18LLU;
	static volatile int32_t t84 = 66;

	t84 = (((x337^x338)<=x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1657418798477LL;
	int64_t x343 = 16653LL;
	volatile int32_t t85 = -124996488;

	t85 = (((x341^x342)<=x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	volatile uint32_t x348 = 4U;

	t86 = (((x345^x346)<=x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 394687LLU;
	uint32_t x350 = 1628188U;
	uint32_t x351 = UINT32_MAX;
	static int16_t x352 = INT16_MAX;
	volatile int32_t t87 = -2202098;

	t87 = (((x349^x350)<=x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -1LL;
	volatile int8_t x354 = INT8_MIN;
	int32_t x355 = 1345512;
	volatile int32_t t88 = -301100535;

	t88 = (((x353^x354)<=x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = 267331041;

	t89 = (((x357^x358)<=x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile int64_t x363 = 117961998063102LL;
	uint8_t x364 = UINT8_MAX;

	t90 = (((x361^x362)<=x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 72940962LL;
	int16_t x366 = -1;
	int32_t x367 = -1;
	static int16_t x368 = INT16_MAX;
	static int32_t t91 = -436;

	t91 = (((x365^x366)<=x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x369 = 1U;
	static uint64_t x370 = 158422728746LLU;
	int64_t x372 = -23123314039LL;
	volatile int32_t t92 = -254224515;

	t92 = (((x369^x370)<=x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 529309974U;
	static uint64_t x374 = UINT64_MAX;
	uint64_t x375 = 253127470162047709LLU;
	volatile uint8_t x376 = UINT8_MAX;

	t93 = (((x373^x374)<=x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 22U;
	static int32_t x379 = -1;
	int32_t x380 = INT32_MAX;

	t94 = (((x377^x378)<=x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	int32_t x384 = 1906671;
	int32_t t95 = 173776680;

	t95 = (((x381^x382)<=x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 14085300U;
	int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -31;

	t96 = (((x385^x386)<=x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 11694766;
	int16_t x390 = INT16_MAX;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;

	t97 = (((x389^x390)<=x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	static volatile int64_t x394 = 276619321382320LL;
	int16_t x395 = INT16_MAX;
	volatile int32_t x396 = INT32_MIN;
	int32_t t98 = -247;

	t98 = (((x393^x394)<=x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 317223;
	int8_t x398 = -1;
	static int16_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int32_t t99 = -334421486;

	t99 = (((x397^x398)<=x399)==x400);

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

