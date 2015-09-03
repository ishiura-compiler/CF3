#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 0U;
int32_t x14 = INT32_MIN;
volatile int64_t x19 = INT64_MIN;
int32_t t5 = 17561244;
static volatile uint64_t x26 = UINT64_MAX;
int64_t t6 = 120535335785733030LL;
volatile int64_t x30 = INT64_MIN;
volatile int32_t x34 = INT32_MIN;
uint32_t x35 = UINT32_MAX;
volatile uint8_t x36 = UINT8_MAX;
uint64_t x40 = UINT64_MAX;
static uint64_t x41 = UINT64_MAX;
uint64_t x43 = 39661LLU;
int32_t x48 = INT32_MIN;
static volatile int32_t t11 = 1895;
int8_t x50 = 16;
static volatile uint8_t x54 = 4U;
volatile int16_t x56 = -1;
int32_t t13 = -47684;
volatile int32_t t14 = 10405754;
static int64_t x62 = INT64_MIN;
uint8_t x73 = 14U;
uint16_t x75 = UINT16_MAX;
int16_t x77 = 54;
uint32_t x79 = 7U;
volatile uint32_t t21 = 27656U;
static volatile int32_t t22 = 55094233;
int64_t x93 = 15231037LL;
uint32_t t23 = 1098573687U;
int8_t x110 = INT8_MIN;
int16_t x114 = 1;
static int32_t t28 = -124545942;
int64_t x118 = INT64_MIN;
int64_t t29 = -7742LL;
uint16_t x121 = 13U;
uint32_t x125 = 4911680U;
int32_t x127 = 3155398;
int32_t x128 = -1;
volatile uint32_t x129 = 257410U;
uint32_t x132 = 12715108U;
int16_t x138 = INT16_MIN;
int8_t x142 = -43;
int8_t x144 = 0;
int32_t t35 = 2;
int32_t t36 = 5579;
volatile int64_t x149 = INT64_MIN;
int16_t x150 = 60;
int32_t x151 = INT32_MIN;
static uint16_t x152 = 14U;
int16_t x154 = INT16_MIN;
volatile int8_t x155 = -1;
volatile int32_t x171 = INT32_MAX;
int64_t x175 = INT64_MAX;
static int16_t x179 = INT16_MIN;
volatile int8_t x180 = INT8_MAX;
volatile int8_t x182 = 14;
int8_t x185 = INT8_MAX;
volatile int32_t x189 = 6483190;
int32_t t47 = -66;
uint8_t x195 = 6U;
uint8_t x198 = 1U;
int16_t x202 = INT16_MIN;
volatile int64_t x203 = INT64_MAX;
int64_t x215 = INT64_MIN;
int32_t t53 = 47194850;
volatile int32_t x219 = INT32_MAX;
volatile int64_t x223 = INT64_MIN;
uint32_t x235 = 410U;
uint32_t x238 = 7U;
int16_t x242 = INT16_MIN;
uint16_t x258 = 2U;
volatile uint64_t x259 = UINT64_MAX;
int32_t x263 = INT32_MAX;
volatile int32_t t66 = -118414914;
int64_t x272 = INT64_MIN;
int32_t x276 = -1;
static int32_t t69 = -459561;
static int64_t x285 = INT64_MAX;
static volatile int32_t x293 = 151321;
uint8_t x294 = 13U;
static int8_t x307 = INT8_MIN;
volatile int64_t t76 = -1772405LL;
uint64_t x310 = 4LLU;
volatile int8_t x313 = -1;
volatile int32_t t78 = 1021740835;
static uint64_t x321 = UINT64_MAX;
int64_t x323 = -1023279LL;
static volatile int32_t t80 = -1522964;
static uint16_t x326 = UINT16_MAX;
volatile int32_t t81 = -8402898;
static int32_t x329 = INT32_MAX;
volatile int32_t t82 = 7730;
uint8_t x334 = 2U;
int64_t x337 = INT64_MIN;
uint16_t x345 = 123U;
int64_t x348 = -3068259LL;
static volatile int32_t t87 = -29;
volatile uint32_t x353 = 92766638U;
int16_t x358 = -1;
uint8_t x361 = 3U;
uint32_t x362 = UINT32_MAX;
static int32_t t93 = 631;
volatile int64_t x377 = 382579365472668987LL;
volatile uint8_t x379 = 0U;
uint64_t x380 = 0LLU;
static volatile uint64_t x381 = 46567638LLU;
int32_t x384 = INT32_MAX;
uint16_t x385 = 15102U;
static int32_t x387 = INT32_MIN;
volatile int32_t t96 = -69517;
uint16_t x390 = UINT16_MAX;
int8_t x391 = -30;
volatile uint8_t x393 = 1U;
int64_t x398 = INT64_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static uint8_t x2 = 14U;
	int16_t x3 = 10;
	int16_t x4 = -1;
	int32_t t0 = 32882;

	t0 = ((x1<=(x2==x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint8_t x6 = 34U;
	uint8_t x7 = 1U;
	volatile uint32_t x8 = 352003U;

	t1 = ((x5<=(x6==x7))|x8);

	if (t1 != 352003U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 19057444;

	t2 = ((x9<=(x10==x11))|x12);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	uint64_t x15 = 51204034591LLU;
	volatile int32_t x16 = INT32_MIN;
	int32_t t3 = 335;

	t3 = ((x13<=(x14==x15))|x16);

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 24;
	static int8_t x18 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 23969030;

	t4 = ((x17<=(x18==x19))|x20);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 10U;
	uint32_t x22 = 77U;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = -1;

	t5 = ((x21<=(x22==x23))|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int16_t x27 = INT16_MAX;
	static int64_t x28 = -1LL;

	t6 = ((x25<=(x26==x27))|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int8_t x31 = 0;
	int32_t x32 = 61;
	volatile int32_t t7 = 30953;

	t7 = ((x29<=(x30==x31))|x32);

	if (t7 != 61) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 32U;
	int32_t t8 = -33;

	t8 = ((x33<=(x34==x35))|x36);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	volatile int32_t x39 = -28250615;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37<=(x38==x39))|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 556822328LLU;
	volatile uint64_t x44 = 1122881596701519LLU;
	volatile uint64_t t10 = 175593710431604LLU;

	t10 = ((x41<=(x42==x43))|x44);

	if (t10 != 1122881596701519LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = 1;
	static int32_t x47 = -1215489;

	t11 = ((x45<=(x46==x47))|x48);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = 3849563LL;
	static int64_t t12 = -64435769LL;

	t12 = ((x49<=(x50==x51))|x52);

	if (t12 != 3849563LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x55 = INT32_MAX;

	t13 = ((x53<=(x54==x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -4189143394385LL;
	volatile int32_t x58 = -1;
	int16_t x59 = -1;
	uint8_t x60 = 1U;

	t14 = ((x57<=(x58==x59))|x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	static volatile int32_t x63 = INT32_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = ((x61<=(x62==x63))|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	int32_t x66 = INT32_MAX;
	int8_t x67 = 25;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = ((x65<=(x66==x67))|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 8176506LLU;
	int16_t x70 = -1;
	volatile uint64_t x71 = 1LLU;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 46185;

	t17 = ((x69<=(x70==x71))|x72);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = UINT16_MAX;
	volatile uint64_t x76 = 7LLU;
	volatile uint64_t t18 = 55373094034014292LLU;

	t18 = ((x73<=(x74==x75))|x76);

	if (t18 != 7LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	int64_t x80 = INT64_MAX;
	int64_t t19 = INT64_MAX;

	t19 = ((x77<=(x78==x79))|x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -60;
	uint16_t x82 = 9U;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = INT32_MAX;

	t20 = ((x81<=(x82==x83))|x84);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	volatile uint64_t x87 = 613353275791359474LLU;
	uint32_t x88 = 10U;

	t21 = ((x85<=(x86==x87))|x88);

	if (t21 != 11U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	static int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;

	t22 = ((x89<=(x90==x91))|x92);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	int64_t x95 = -3488931496LL;
	volatile uint32_t x96 = 114U;

	t23 = ((x93<=(x94==x95))|x96);

	if (t23 != 114U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MIN;
	int16_t x99 = -3232;
	static int32_t x100 = INT32_MIN;
	int32_t t24 = INT32_MIN;

	t24 = ((x97<=(x98==x99))|x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -189318;
	volatile uint32_t x102 = 58109451U;
	uint16_t x103 = 9841U;
	uint64_t x104 = UINT64_MAX;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x101<=(x102==x103))|x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	volatile int8_t x106 = -3;
	volatile uint16_t x107 = 23U;
	int8_t x108 = 0;
	volatile int32_t t26 = -1;

	t26 = ((x105<=(x106==x107))|x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	static int64_t x112 = INT64_MIN;
	int64_t t27 = 231LL;

	t27 = ((x109<=(x110==x111))|x112);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 1LLU;
	int32_t x115 = 32941108;
	uint8_t x116 = UINT8_MAX;

	t28 = ((x113<=(x114==x115))|x116);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -175463847LL;
	static volatile int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;

	t29 = ((x117<=(x118==x119))|x120);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x122 = 3LLU;
	volatile int16_t x123 = INT16_MIN;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x121<=(x122==x123))|x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = 0;
	static volatile int32_t t31 = 63845;

	t31 = ((x125<=(x126==x127))|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MAX;
	volatile int32_t x131 = 0;
	uint32_t t32 = 21062891U;

	t32 = ((x129<=(x130==x131))|x132);

	if (t32 != 12715108U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 987266LLU;
	int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MAX;
	volatile uint32_t x136 = 3675U;
	volatile uint32_t t33 = 6091554U;

	t33 = ((x133<=(x134==x135))|x136);

	if (t33 != 3675U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 0U;
	int32_t x139 = INT32_MIN;
	static int32_t x140 = -1;
	int32_t t34 = 6711488;

	t34 = ((x137<=(x138==x139))|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x143 = 1;

	t35 = ((x141<=(x142==x143))|x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	static uint32_t x146 = 888659U;
	volatile int16_t x147 = -2;
	int32_t x148 = 4533189;

	t36 = ((x145<=(x146==x147))|x148);

	if (t36 != 4533189) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t t37 = 13;

	t37 = ((x149<=(x150==x151))|x152);

	if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static volatile uint32_t x156 = 5899034U;
	static volatile uint32_t t38 = 16681U;

	t38 = ((x153<=(x154==x155))|x156);

	if (t38 != 5899035U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 103636254LLU;
	int64_t x158 = 278009262840013804LL;
	static int8_t x159 = INT8_MIN;
	int64_t x160 = -40547552078LL;
	static int64_t t39 = -25770LL;

	t39 = ((x157<=(x158==x159))|x160);

	if (t39 != -40547552078LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 25095911LLU;
	int32_t x162 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t40 = 113829405;

	t40 = ((x161<=(x162==x163))|x164);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -2651454;
	volatile int16_t x166 = -1;
	static int64_t x167 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -13;

	t41 = ((x165<=(x166==x167))|x168);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MAX;
	volatile int64_t x170 = 134LL;
	int16_t x172 = 0;
	volatile int32_t t42 = 16362;

	t42 = ((x169<=(x170==x171))|x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint64_t x174 = 5313568855LLU;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -28;

	t43 = ((x173<=(x174==x175))|x176);

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	int32_t x178 = 9898;
	static volatile int32_t t44 = -198;

	t44 = ((x177<=(x178==x179))|x180);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	uint8_t x183 = 23U;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = 552;

	t45 = ((x181<=(x182==x183))|x184);

	if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MAX;
	volatile int32_t x188 = 0;
	static int32_t t46 = -450825296;

	t46 = ((x185<=(x186==x187))|x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x190 = UINT16_MAX;
	static volatile int32_t x191 = INT32_MIN;
	static int8_t x192 = INT8_MIN;

	t47 = ((x189<=(x190==x191))|x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 12U;
	uint32_t x194 = 4460669U;
	volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x193<=(x194==x195))|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MAX;
	int64_t x199 = -4096LL;
	volatile uint16_t x200 = UINT16_MAX;
	static volatile int32_t t49 = 221;

	t49 = ((x197<=(x198==x199))|x200);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x201<=(x202==x203))|x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MIN;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = INT32_MIN;

	t51 = ((x205<=(x206==x207))|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int32_t x211 = 785247;
	volatile int64_t x212 = INT64_MIN;
	int64_t t52 = 362LL;

	t52 = ((x209<=(x210==x211))|x212);

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = 1011141889108240639LLU;
	volatile int32_t x216 = 5519169;

	t53 = ((x213<=(x214==x215))|x216);

	if (t53 != 5519169) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 941U;
	static int64_t x218 = -8329153075009LL;
	int32_t x220 = -1;
	static volatile int32_t t54 = 1681;

	t54 = ((x217<=(x218==x219))|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	static int8_t x222 = INT8_MAX;
	int32_t x224 = 26073020;
	volatile int32_t t55 = -85307811;

	t55 = ((x221<=(x222==x223))|x224);

	if (t55 != 26073020) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	static int32_t x226 = -1;
	uint32_t x227 = 260997U;
	uint32_t x228 = 54U;
	static uint32_t t56 = 26U;

	t56 = ((x225<=(x226==x227))|x228);

	if (t56 != 55U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 1213536LLU;
	static uint8_t x230 = 0U;
	static int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 738970;

	t57 = ((x229<=(x230==x231))|x232);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MAX;
	int16_t x236 = -1;
	int32_t t58 = 122;

	t58 = ((x233<=(x234==x235))|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	static int64_t x239 = -1LL;
	volatile int32_t x240 = INT32_MIN;
	int32_t t59 = INT32_MIN;

	t59 = ((x237<=(x238==x239))|x240);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -3;
	static uint16_t x243 = 3730U;
	int16_t x244 = INT16_MAX;
	static int32_t t60 = -17;

	t60 = ((x241<=(x242==x243))|x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	volatile int16_t x246 = INT16_MIN;
	static int8_t x247 = INT8_MIN;
	volatile int32_t x248 = 2226;
	int32_t t61 = 1;

	t61 = ((x245<=(x246==x247))|x248);

	if (t61 != 2227) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	static int8_t x250 = INT8_MAX;
	int64_t x251 = -1LL;
	int64_t x252 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = ((x249<=(x250==x251))|x252);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 4966;
	static int64_t x254 = INT64_MAX;
	static int64_t x255 = INT64_MIN;
	int8_t x256 = -3;
	volatile int32_t t63 = -53054267;

	t63 = ((x253<=(x254==x255))|x256);

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t64 = 22438667724458LL;

	t64 = ((x257<=(x258==x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static uint16_t x262 = 182U;
	uint64_t x264 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x261<=(x262==x263))|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 12967U;
	int8_t x266 = INT8_MIN;
	volatile int32_t x267 = INT32_MAX;
	int16_t x268 = -1;

	t66 = ((x265<=(x266==x267))|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	int64_t t67 = 829LL;

	t67 = ((x269<=(x270==x271))|x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -7204;
	static uint32_t x274 = 210041U;
	int16_t x275 = 15927;
	int32_t t68 = 70353;

	t68 = ((x273<=(x274==x275))|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	int32_t x278 = 2;
	int16_t x279 = INT16_MAX;
	int32_t x280 = -175309102;

	t69 = ((x277<=(x278==x279))|x280);

	if (t69 != -175309101) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 54U;
	int64_t x282 = INT64_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint64_t x284 = 10218218863952LLU;
	volatile uint64_t t70 = 291086LLU;

	t70 = ((x281<=(x282==x283))|x284);

	if (t70 != 10218218863952LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = 31U;
	int32_t t71 = -53;

	t71 = ((x285<=(x286==x287))|x288);

	if (t71 != 31) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 16LL;
	int32_t x290 = -1;
	volatile int16_t x291 = INT16_MIN;
	uint32_t x292 = 12125U;
	volatile uint32_t t72 = 13U;

	t72 = ((x289<=(x290==x291))|x292);

	if (t72 != 12125U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x295 = -1;
	uint64_t x296 = 7135188579529LLU;
	uint64_t t73 = 309LLU;

	t73 = ((x293<=(x294==x295))|x296);

	if (t73 != 7135188579529LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	uint8_t x298 = 19U;
	static volatile int64_t x299 = INT64_MIN;
	static int8_t x300 = -1;
	volatile int32_t t74 = 261039058;

	t74 = ((x297<=(x298==x299))|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = -1;
	uint64_t x303 = 1002379351597653645LLU;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 43;

	t75 = ((x301<=(x302==x303))|x304);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int64_t x306 = INT64_MIN;
	int64_t x308 = -6725984284LL;

	t76 = ((x305<=(x306==x307))|x308);

	if (t76 != -6725984283LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 594U;
	static uint64_t x311 = 247697650132LLU;
	uint64_t x312 = 273159863755635949LLU;
	static uint64_t t77 = 0LLU;

	t77 = ((x309<=(x310==x311))|x312);

	if (t77 != 273159863755635949LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x314 = UINT16_MAX;
	static int16_t x315 = INT16_MAX;
	volatile uint16_t x316 = 640U;

	t78 = ((x313<=(x314==x315))|x316);

	if (t78 != 641) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MIN;
	volatile int16_t x319 = INT16_MIN;
	static uint8_t x320 = 55U;
	int32_t t79 = -7;

	t79 = ((x317<=(x318==x319))|x320);

	if (t79 != 55) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -1;
	volatile uint8_t x324 = UINT8_MAX;

	t80 = ((x321<=(x322==x323))|x324);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 785;
	int16_t x327 = 0;
	uint8_t x328 = 72U;

	t81 = ((x325<=(x326==x327))|x328);

	if (t81 != 72) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -2622;

	t82 = ((x329<=(x330==x331))|x332);

	if (t82 != -2622) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -3;
	uint8_t x335 = UINT8_MAX;
	static volatile uint8_t x336 = UINT8_MAX;
	int32_t t83 = -125;

	t83 = ((x333<=(x334==x335))|x336);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x338 = UINT8_MAX;
	uint16_t x339 = 26152U;
	uint8_t x340 = 14U;
	static volatile int32_t t84 = -537;

	t84 = ((x337<=(x338==x339))|x340);

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	uint8_t x342 = 3U;
	int32_t x343 = 4;
	int16_t x344 = -1;
	volatile int32_t t85 = 1031;

	t85 = ((x341<=(x342==x343))|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x346 = -1;
	int32_t x347 = INT32_MAX;
	volatile int64_t t86 = -4848502300770LL;

	t86 = ((x345<=(x346==x347))|x348);

	if (t86 != -3068259LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -818;
	int16_t x350 = INT16_MIN;
	uint8_t x351 = UINT8_MAX;
	uint8_t x352 = 6U;

	t87 = ((x349<=(x350==x351))|x352);

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x354 = -1LL;
	static uint32_t x355 = UINT32_MAX;
	static volatile int32_t x356 = INT32_MIN;
	int32_t t88 = INT32_MIN;

	t88 = ((x353<=(x354==x355))|x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 2U;
	volatile int32_t x359 = -217084;
	static int32_t x360 = INT32_MAX;
	volatile int32_t t89 = INT32_MAX;

	t89 = ((x357<=(x358==x359))|x360);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = INT32_MAX;

	t90 = ((x361<=(x362==x363))|x364);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	static volatile int32_t x367 = INT32_MIN;
	int8_t x368 = -1;
	volatile int32_t t91 = 255590774;

	t91 = ((x365<=(x366==x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x370 = 30U;
	int32_t x371 = 205259;
	volatile int64_t x372 = INT64_MAX;
	static volatile int64_t t92 = INT64_MAX;

	t92 = ((x369<=(x370==x371))|x372);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	uint8_t x375 = 6U;
	volatile int8_t x376 = INT8_MIN;

	t93 = ((x373<=(x374==x375))|x376);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	volatile uint64_t t94 = 3971988LLU;

	t94 = ((x377<=(x378==x379))|x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = UINT16_MAX;
	volatile uint32_t x383 = 13121U;
	volatile int32_t t95 = INT32_MAX;

	t95 = ((x381<=(x382==x383))|x384);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = 1074780LLU;
	int8_t x388 = -1;

	t96 = ((x385<=(x386==x387))|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = UINT16_MAX;
	static int64_t x392 = -1LL;
	int64_t t97 = -49844875453923153LL;

	t97 = ((x389<=(x390==x391))|x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x394 = 2U;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = -1;
	int32_t t98 = -1425604;

	t98 = ((x393<=(x394==x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 20001U;
	static int32_t x399 = INT32_MAX;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

	t99 = ((x397<=(x398==x399))|x400);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

