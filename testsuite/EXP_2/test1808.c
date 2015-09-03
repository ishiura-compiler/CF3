#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x2 = 380263U;
static volatile uint8_t x10 = 0U;
volatile int32_t x11 = INT32_MAX;
int16_t x39 = -2599;
volatile int64_t x40 = -1LL;
int64_t x44 = -47452312LL;
int64_t x52 = 251557724871489525LL;
int64_t t12 = -276824579LL;
int16_t x57 = INT16_MIN;
static uint16_t x73 = 226U;
int32_t t17 = -2542851;
static int16_t x77 = INT16_MAX;
int64_t x86 = INT64_MIN;
int16_t x87 = INT16_MIN;
int64_t x94 = -1LL;
volatile int64_t x101 = -1LL;
int64_t x104 = -195969LL;
static uint64_t x106 = UINT64_MAX;
static uint16_t x120 = UINT16_MAX;
int16_t x135 = -1;
uint64_t x142 = 12LLU;
int32_t t34 = -8;
int32_t x145 = 0;
uint32_t x150 = UINT32_MAX;
static int16_t x154 = INT16_MIN;
uint8_t x162 = UINT8_MAX;
uint8_t x164 = 22U;
volatile int32_t t40 = INT32_MIN;
int16_t x176 = -1;
volatile int32_t t42 = -15889674;
uint16_t x185 = 94U;
int32_t x192 = INT32_MIN;
int32_t t46 = INT32_MIN;
int32_t x196 = 1478;
volatile int32_t t47 = -3520;
uint16_t x200 = 775U;
static int16_t x203 = INT16_MIN;
int32_t x205 = INT32_MIN;
int16_t x206 = 2;
int16_t x208 = INT16_MIN;
volatile int16_t x209 = -13;
int8_t x217 = INT8_MIN;
int16_t x218 = INT16_MAX;
uint8_t x222 = UINT8_MAX;
int16_t x224 = 0;
static int8_t x225 = INT8_MAX;
static int8_t x227 = -1;
volatile int32_t t55 = 10586;
int64_t t56 = 1187326654678040LL;
int16_t x239 = 1539;
int8_t x252 = -1;
int16_t x255 = INT16_MIN;
int32_t x257 = INT32_MIN;
int64_t x264 = -24LL;
uint32_t x272 = 128116059U;
int8_t x280 = -1;
volatile int32_t t69 = -1021;
int16_t x299 = -31;
uint16_t x307 = UINT16_MAX;
int64_t x310 = INT64_MIN;
static int64_t x314 = 1568237630329LL;
volatile int32_t t76 = 137424;
int32_t x323 = INT32_MIN;
int32_t x324 = -1;
static int64_t x326 = -30LL;
int64_t x329 = -1LL;
volatile uint64_t t80 = 2249447172338476LLU;
int16_t x333 = INT16_MAX;
int64_t t81 = INT64_MIN;
uint8_t x351 = 1U;
int32_t x353 = INT32_MIN;
int16_t x354 = -7;
static int16_t x359 = INT16_MIN;
volatile int32_t t86 = 7776055;
int16_t x364 = INT16_MAX;
volatile int8_t x365 = INT8_MIN;
int64_t t88 = -3415895744921652LL;
int64_t x370 = 36088LL;
int64_t x372 = -895816527415LL;
static uint32_t x374 = 430U;
uint32_t t90 = 55U;
int8_t x378 = 0;
int64_t x379 = -1LL;
volatile uint64_t t91 = 27819446402931019LLU;
uint16_t x388 = 18U;
int8_t x389 = -1;
uint8_t x396 = 29U;
volatile int16_t x404 = INT16_MIN;
int8_t x408 = -52;
uint64_t x409 = UINT64_MAX;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static volatile uint32_t x3 = UINT32_MAX;
	int32_t x4 = 8;
	int32_t t0 = 70538644;

	t0 = ((x1<=(x2&x3))+x4);

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static uint32_t x6 = 2964046U;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x5<=(x6&x7))+x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -98037625867698LL;
	volatile int64_t x12 = 15649169LL;
	int64_t t2 = -683LL;

	t2 = ((x9<=(x10&x11))+x12);

	if (t2 != 15649170LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 1;
	int16_t x14 = INT16_MAX;
	static uint8_t x15 = UINT8_MAX;
	static int32_t x16 = INT32_MIN;
	int32_t t3 = -6587;

	t3 = ((x13<=(x14&x15))+x16);

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MIN;
	int64_t x18 = -1LL;
	uint32_t x19 = 0U;
	uint32_t x20 = UINT32_MAX;
	static uint32_t t4 = 170943494U;

	t4 = ((x17<=(x18&x19))+x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 85U;
	static int8_t x22 = -34;
	int16_t x23 = INT16_MIN;
	int8_t x24 = -4;
	int32_t t5 = 48978;

	t5 = ((x21<=(x22&x23))+x24);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	static volatile int16_t x28 = -2;
	int32_t t6 = 31873;

	t6 = ((x25<=(x26&x27))+x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1693524379LL;
	int64_t x30 = -108166660621027LL;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t7 = INT32_MIN;

	t7 = ((x29<=(x30&x31))+x32);

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int16_t x34 = -15016;
	int64_t x35 = INT64_MIN;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 19189;

	t8 = ((x33<=(x34&x35))+x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 14U;
	int8_t x38 = 0;
	int64_t t9 = 6737LL;

	t9 = ((x37<=(x38&x39))+x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 27;
	int32_t x42 = 45457;
	int8_t x43 = -10;
	volatile int64_t t10 = 86LL;

	t10 = ((x41<=(x42&x43))+x44);

	if (t10 != -47452311LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 2LLU;
	volatile uint8_t x46 = UINT8_MAX;
	static int64_t x47 = -1LL;
	uint8_t x48 = 8U;
	int32_t t11 = -73;

	t11 = ((x45<=(x46&x47))+x48);

	if (t11 != 9) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 79U;
	int64_t x50 = -1LL;
	static uint16_t x51 = 14083U;

	t12 = ((x49<=(x50&x51))+x52);

	if (t12 != 251557724871489526LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 275293880630LLU;
	int32_t x54 = 7;
	int16_t x55 = -1;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -1;

	t13 = ((x53<=(x54&x55))+x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x58 = INT64_MIN;
	static uint8_t x59 = 9U;
	static uint32_t x60 = 1U;
	uint32_t t14 = 235521U;

	t14 = ((x57<=(x58&x59))+x60);

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 505930109851035870LLU;
	uint16_t x66 = 21962U;
	volatile uint32_t x67 = 127U;
	static int8_t x68 = -1;
	volatile int32_t t15 = 5512416;

	t15 = ((x65<=(x66&x67))+x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	volatile int64_t x70 = INT64_MAX;
	uint64_t x71 = 4772403286LLU;
	int64_t x72 = INT64_MIN;
	static volatile int64_t t16 = 33152321361885LL;

	t16 = ((x69<=(x70&x71))+x72);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x74 = INT16_MIN;
	volatile int16_t x75 = 0;
	volatile int32_t x76 = 124375468;

	t17 = ((x73<=(x74&x75))+x76);

	if (t17 != 124375468) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x78 = 1;
	int64_t x79 = -1LL;
	uint32_t x80 = 17969700U;
	static uint32_t t18 = 546422U;

	t18 = ((x77<=(x78&x79))+x80);

	if (t18 != 17969700U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 25U;
	int16_t x82 = INT16_MAX;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = -1;
	int32_t t19 = 999;

	t19 = ((x81<=(x82&x83))+x84);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x88 = 21U;
	volatile int32_t t20 = 10;

	t20 = ((x85<=(x86&x87))+x88);

	if (t20 != 21) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = 7;
	int64_t x90 = 16038763670LL;
	static int8_t x91 = INT8_MIN;
	static int16_t x92 = -124;
	int32_t t21 = -1;

	t21 = ((x89<=(x90&x91))+x92);

	if (t21 != -123) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static int64_t x95 = INT64_MIN;
	static int32_t x96 = 6513;
	volatile int32_t t22 = -83117;

	t22 = ((x93<=(x94&x95))+x96);

	if (t22 != 6513) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = INT16_MIN;
	int64_t x98 = -7759LL;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	volatile int32_t t23 = 259524455;

	t23 = ((x97<=(x98&x99))+x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = 10;
	static int64_t x103 = -1LL;
	int64_t t24 = 381987466065LL;

	t24 = ((x101<=(x102&x103))+x104);

	if (t24 != -195968LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 2;
	static int16_t x107 = 0;
	int32_t x108 = INT32_MIN;
	int32_t t25 = INT32_MIN;

	t25 = ((x105<=(x106&x107))+x108);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x109 = -6;
	int16_t x110 = INT16_MIN;
	int16_t x111 = 67;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t26 = 196658926;

	t26 = ((x109<=(x110&x111))+x112);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = UINT64_MAX;
	static int32_t x114 = INT32_MAX;
	int64_t x115 = -1LL;
	volatile int16_t x116 = -1;
	int32_t t27 = -25;

	t27 = ((x113<=(x114&x115))+x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 485838852857341634LLU;
	uint16_t x118 = 3939U;
	int64_t x119 = -1LL;
	int32_t t28 = 8;

	t28 = ((x117<=(x118&x119))+x120);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 1353188226LL;
	uint8_t x122 = UINT8_MAX;
	uint64_t x123 = 6157LLU;
	int8_t x124 = 1;
	volatile int32_t t29 = -22332;

	t29 = ((x121<=(x122&x123))+x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	volatile uint8_t x128 = 3U;
	int32_t t30 = 0;

	t30 = ((x125<=(x126&x127))+x128);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	static uint8_t x130 = 7U;
	volatile uint16_t x131 = 37U;
	volatile int64_t x132 = 83502188940692751LL;
	int64_t t31 = -124477988093069LL;

	t31 = ((x129<=(x130&x131))+x132);

	if (t31 != 83502188940692751LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 6U;
	uint8_t x134 = 1U;
	int8_t x136 = 6;
	volatile int32_t t32 = 504138022;

	t32 = ((x133<=(x134&x135))+x136);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = 55833654LLU;
	volatile uint64_t t33 = 544916581LLU;

	t33 = ((x137<=(x138&x139))+x140);

	if (t33 != 55833655LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	volatile int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MAX;

	t34 = ((x141<=(x142&x143))+x144);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x146 = -69764268274448071LL;
	static int32_t x147 = INT32_MAX;
	int16_t x148 = -1;
	volatile int32_t t35 = 1653;

	t35 = ((x145<=(x146&x147))+x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 281;
	int64_t x151 = -2785LL;
	static volatile int64_t x152 = INT64_MIN;
	volatile int64_t t36 = -15LL;

	t36 = ((x149<=(x150&x151))+x152);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = -46;
	int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MIN;
	static int64_t t37 = 16134917998161LL;

	t37 = ((x153<=(x154&x155))+x156);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	static int64_t x158 = -275LL;
	int64_t x159 = -55695415833309LL;
	static uint16_t x160 = 1160U;
	int32_t t38 = 107628143;

	t38 = ((x157<=(x158&x159))+x160);

	if (t38 != 1160) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MAX;
	static int16_t x163 = INT16_MAX;
	static int32_t t39 = -144198141;

	t39 = ((x161<=(x162&x163))+x164);

	if (t39 != 23) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = INT16_MAX;
	uint64_t x166 = 68609904943749LLU;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MIN;

	t40 = ((x165<=(x166&x167))+x168);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x169 = 1862507445U;
	int32_t x170 = -1;
	volatile int8_t x171 = INT8_MAX;
	static volatile int16_t x172 = -1;
	int32_t t41 = -98;

	t41 = ((x169<=(x170&x171))+x172);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x173 = 13U;
	static volatile int64_t x174 = INT64_MIN;
	int32_t x175 = -1;

	t42 = ((x173<=(x174&x175))+x176);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 27787U;
	int16_t x178 = -1989;
	volatile int32_t x179 = INT32_MIN;
	static uint8_t x180 = 0U;
	volatile int32_t t43 = 14808407;

	t43 = ((x177<=(x178&x179))+x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = 482U;
	int64_t x184 = -2492478793655683LL;
	static volatile int64_t t44 = 324564LL;

	t44 = ((x181<=(x182&x183))+x184);

	if (t44 != -2492478793655683LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x186 = 816;
	volatile int16_t x187 = 4;
	int32_t x188 = -1;
	volatile int32_t t45 = -24;

	t45 = ((x185<=(x186&x187))+x188);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = 31914022LLU;

	t46 = ((x189<=(x190&x191))+x192);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 1219;
	static volatile int32_t x194 = 3880719;
	static int8_t x195 = 1;

	t47 = ((x193<=(x194&x195))+x196);

	if (t47 != 1478) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 225145062LLU;
	volatile int16_t x198 = INT16_MAX;
	volatile uint32_t x199 = 6229U;
	static int32_t t48 = -28499;

	t48 = ((x197<=(x198&x199))+x200);

	if (t48 != 775) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = INT8_MIN;
	volatile int32_t x204 = INT32_MAX;
	int32_t t49 = INT32_MAX;

	t49 = ((x201<=(x202&x203))+x204);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x207 = -1;
	int32_t t50 = 782;

	t50 = ((x205<=(x206&x207))+x208);

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = -1;
	volatile int8_t x211 = 1;
	uint16_t x212 = 408U;
	int32_t t51 = -1762;

	t51 = ((x209<=(x210&x211))+x212);

	if (t51 != 409) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MAX;
	static int8_t x214 = -23;
	volatile int16_t x215 = 226;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = ((x213<=(x214&x215))+x216);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = -1;
	int32_t t53 = -637;

	t53 = ((x217<=(x218&x219))+x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -1;
	int32_t x223 = -1;
	volatile int32_t t54 = 3032691;

	t54 = ((x221<=(x222&x223))+x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x226 = INT8_MIN;
	uint16_t x228 = 0U;

	t55 = ((x225<=(x226&x227))+x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int64_t x232 = -129629025297LL;

	t56 = ((x229<=(x230&x231))+x232);

	if (t56 != -129629025296LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MIN;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = -1;
	int16_t x236 = INT16_MAX;
	volatile int32_t t57 = 3756;

	t57 = ((x233<=(x234&x235))+x236);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	uint16_t x238 = 11U;
	int8_t x240 = 7;
	volatile int32_t t58 = 30;

	t58 = ((x237<=(x238&x239))+x240);

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = INT16_MAX;
	uint32_t x243 = 1341U;
	static int64_t x244 = -46152364LL;
	int64_t t59 = -295728455646410LL;

	t59 = ((x241<=(x242&x243))+x244);

	if (t59 != -46152363LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = -1;
	int16_t x248 = 0;
	int32_t t60 = -64041589;

	t60 = ((x245<=(x246&x247))+x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 36LLU;
	uint16_t x251 = 2U;
	volatile int32_t t61 = -1;

	t61 = ((x249<=(x250&x251))+x252);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 229802U;
	volatile int16_t x254 = INT16_MIN;
	static uint64_t x256 = UINT64_MAX;
	uint64_t t62 = 7320969790418LLU;

	t62 = ((x253<=(x254&x255))+x256);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x258 = INT64_MIN;
	int32_t x259 = -1;
	volatile uint16_t x260 = 4081U;
	volatile int32_t t63 = -441609357;

	t63 = ((x257<=(x258&x259))+x260);

	if (t63 != 4081) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 60U;
	static uint32_t x262 = UINT32_MAX;
	uint8_t x263 = 91U;
	volatile int64_t t64 = 1LL;

	t64 = ((x261<=(x262&x263))+x264);

	if (t64 != -23LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x265 = -1;
	int64_t x266 = -1LL;
	volatile int16_t x267 = INT16_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t65 = 10996219887LLU;

	t65 = ((x265<=(x266&x267))+x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = INT64_MAX;
	volatile int16_t x270 = -1;
	int64_t x271 = INT64_MAX;
	uint32_t t66 = 3U;

	t66 = ((x269<=(x270&x271))+x272);

	if (t66 != 128116060U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x274 = 7535U;
	uint8_t x275 = 22U;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t67 = -1160151;

	t67 = ((x273<=(x274&x275))+x276);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MIN;
	volatile uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	volatile int32_t t68 = 1;

	t68 = ((x277<=(x278&x279))+x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x281 = 1;
	volatile int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	static uint8_t x284 = 9U;

	t69 = ((x281<=(x282&x283))+x284);

	if (t69 != 9) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 178596427563LL;
	static uint64_t x286 = 11219336286LLU;
	volatile uint64_t x287 = 0LLU;
	int32_t x288 = 52772751;
	int32_t t70 = 30258;

	t70 = ((x285<=(x286&x287))+x288);

	if (t70 != 52772751) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x289 = 0U;
	int64_t x290 = INT64_MIN;
	volatile uint8_t x291 = 31U;
	static int16_t x292 = -1;
	int32_t t71 = -7995;

	t71 = ((x289<=(x290&x291))+x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = -1;
	static volatile int8_t x294 = -1;
	uint16_t x295 = 6U;
	int32_t x296 = -2870767;
	static volatile int32_t t72 = -6973828;

	t72 = ((x293<=(x294&x295))+x296);

	if (t72 != -2870766) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = UINT16_MAX;
	static int8_t x298 = INT8_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t73 = INT64_MIN;

	t73 = ((x297<=(x298&x299))+x300);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 23U;
	uint32_t x306 = 14450882U;
	int32_t x308 = INT32_MIN;
	volatile int32_t t74 = 30;

	t74 = ((x305<=(x306&x307))+x308);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	uint32_t x312 = 98744149U;
	volatile uint32_t t75 = 107U;

	t75 = ((x309<=(x310&x311))+x312);

	if (t75 != 98744149U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	volatile int16_t x315 = 1340;
	int8_t x316 = -5;

	t76 = ((x313<=(x314&x315))+x316);

	if (t76 != -4) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MAX;
	static uint16_t x318 = UINT16_MAX;
	uint8_t x319 = 1U;
	int16_t x320 = 232;
	static int32_t t77 = -28251190;

	t77 = ((x317<=(x318&x319))+x320);

	if (t77 != 232) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 40;
	int16_t x322 = -1;
	int32_t t78 = 131;

	t78 = ((x321<=(x322&x323))+x324);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x325 = 320U;
	int64_t x327 = -35958141794971LL;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t79 = 9804395;

	t79 = ((x325<=(x326&x327))+x328);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x330 = 374LLU;
	int32_t x331 = -1;
	uint64_t x332 = 52733LLU;

	t80 = ((x329<=(x330&x331))+x332);

	if (t80 != 52733LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x334 = -1;
	uint16_t x335 = 4780U;
	int64_t x336 = INT64_MIN;

	t81 = ((x333<=(x334&x335))+x336);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x337 = 0U;
	static int8_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t82 = -200421;

	t82 = ((x337<=(x338&x339))+x340);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1LL;
	volatile int64_t t83 = -13046693390845574LL;

	t83 = ((x341<=(x342&x343))+x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	volatile int64_t x352 = INT64_MIN;
	int64_t t84 = -107907811470731874LL;

	t84 = ((x349<=(x350&x351))+x352);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x355 = -1;
	static int16_t x356 = INT16_MIN;
	static volatile int32_t t85 = 3;

	t85 = ((x353<=(x354&x355))+x356);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x357 = -1398241150117250191LL;
	int8_t x358 = INT8_MAX;
	int16_t x360 = -316;

	t86 = ((x357<=(x358&x359))+x360);

	if (t86 != -315) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x361 = INT64_MIN;
	int32_t x362 = -1;
	volatile uint64_t x363 = 62797771860981352LLU;
	int32_t t87 = 20921266;

	t87 = ((x361<=(x362&x363))+x364);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x366 = 97U;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;

	t88 = ((x365<=(x366&x367))+x368);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x369 = UINT8_MAX;
	volatile int16_t x371 = -1;
	volatile int64_t t89 = 6066060512691LL;

	t89 = ((x369<=(x370&x371))+x372);

	if (t89 != -895816527414LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x373 = 0U;
	int8_t x375 = 48;
	uint32_t x376 = UINT32_MAX;

	t90 = ((x373<=(x374&x375))+x376);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = -1LL;
	volatile uint64_t x380 = 3216015LLU;

	t91 = ((x377<=(x378&x379))+x380);

	if (t91 != 3216016LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = 16324292LL;
	static int32_t x382 = -1;
	uint8_t x383 = 1U;
	static volatile int64_t x384 = -48LL;
	static int64_t t92 = -1LL;

	t92 = ((x381<=(x382&x383))+x384);

	if (t92 != -48LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = -9455539007343LL;
	uint16_t x386 = 15650U;
	volatile int16_t x387 = INT16_MIN;
	int32_t t93 = -38991;

	t93 = ((x385<=(x386&x387))+x388);

	if (t93 != 19) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MIN;
	int16_t x392 = -1;
	static volatile int32_t t94 = -688375387;

	t94 = ((x389<=(x390&x391))+x392);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	uint16_t x394 = 62U;
	volatile int64_t x395 = INT64_MAX;
	static volatile int32_t t95 = -756631;

	t95 = ((x393<=(x394&x395))+x396);

	if (t95 != 30) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x397 = INT16_MIN;
	static int64_t x398 = INT64_MAX;
	volatile int32_t x399 = INT32_MIN;
	int32_t x400 = 643;
	int32_t t96 = 26110;

	t96 = ((x397<=(x398&x399))+x400);

	if (t96 != 644) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 6568772492437761083LLU;
	int32_t x402 = INT32_MIN;
	uint32_t x403 = 21U;
	int32_t t97 = 21433062;

	t97 = ((x401<=(x402&x403))+x404);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = 6;
	uint64_t x407 = UINT64_MAX;
	int32_t t98 = 16047;

	t98 = ((x405<=(x406&x407))+x408);

	if (t98 != -52) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x410 = 28U;
	int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	int32_t t99 = 15967;

	t99 = ((x409<=(x410&x411))+x412);

	if (t99 != -32768) { NG(); } else { ; }
	
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

