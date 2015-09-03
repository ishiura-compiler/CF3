#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = UINT32_MAX;
uint8_t x16 = 22U;
int8_t x18 = INT8_MIN;
volatile int16_t x19 = INT16_MAX;
int32_t x23 = -2026;
static int32_t t7 = 18583;
volatile int32_t t8 = -31;
uint32_t x39 = 321072U;
volatile int8_t x43 = -48;
int32_t x51 = INT32_MIN;
volatile int32_t t11 = -248671;
uint16_t x62 = 18107U;
volatile int32_t x64 = INT32_MIN;
int32_t x66 = INT32_MIN;
int64_t x69 = INT64_MIN;
int32_t x70 = -1;
uint32_t x74 = 64860084U;
int16_t x84 = -24;
volatile int32_t t18 = -3055;
int64_t x94 = INT64_MIN;
volatile uint64_t x95 = UINT64_MAX;
uint16_t x98 = 8U;
uint8_t x102 = 0U;
volatile int64_t x105 = INT64_MAX;
int16_t x110 = -435;
int32_t x111 = INT32_MAX;
volatile int32_t t25 = 0;
uint64_t x117 = UINT64_MAX;
uint64_t x129 = 1810063522083424LLU;
int32_t t29 = 1;
uint8_t x135 = 0U;
int8_t x136 = INT8_MAX;
int32_t x138 = -295;
static uint16_t x143 = 13U;
int32_t t32 = -906;
int32_t x146 = INT32_MIN;
volatile int64_t x147 = 123LL;
volatile int32_t t33 = -1136620;
volatile int32_t t36 = -1132;
static uint32_t x166 = UINT32_MAX;
int32_t t38 = 410;
int64_t x171 = -15LL;
int16_t x176 = INT16_MIN;
int16_t x181 = INT16_MAX;
int32_t x187 = 0;
uint8_t x188 = 78U;
static int32_t x190 = INT32_MIN;
int16_t x192 = INT16_MIN;
int8_t x195 = -1;
volatile int32_t t44 = -18452476;
int8_t x201 = 1;
uint64_t x205 = UINT64_MAX;
int16_t x208 = -100;
int8_t x211 = -1;
volatile int32_t t48 = 1;
volatile int8_t x213 = INT8_MAX;
int64_t x214 = 102988393323233476LL;
static int32_t x215 = -1;
static int32_t t49 = -24203264;
int32_t x217 = INT32_MAX;
int16_t x221 = INT16_MIN;
volatile int32_t t51 = 421095321;
int32_t x231 = INT32_MIN;
static volatile int32_t t52 = -3;
int16_t x241 = INT16_MIN;
static int64_t x247 = INT64_MIN;
int64_t x254 = INT64_MIN;
uint64_t x255 = 16766844949183498LLU;
static volatile uint32_t x258 = 1452251U;
volatile int32_t t59 = 2;
uint64_t x262 = 5LLU;
uint8_t x273 = 74U;
uint64_t x284 = 0LLU;
int64_t x290 = 228328178849LL;
static volatile int64_t x291 = INT64_MIN;
volatile int32_t t65 = 30936;
static int32_t x293 = -1;
static int8_t x295 = INT8_MIN;
int32_t t66 = 0;
int8_t x299 = -6;
volatile int32_t t69 = 1;
int64_t x310 = 1800917LL;
int32_t t71 = -616543819;
int32_t t72 = -3849712;
volatile uint16_t x322 = 501U;
static int32_t t73 = 84;
int64_t x327 = INT64_MIN;
static int8_t x329 = INT8_MAX;
static volatile int32_t x333 = -1385779;
int8_t x334 = INT8_MAX;
int16_t x338 = INT16_MIN;
int16_t x340 = 1830;
uint32_t x343 = 4077U;
uint64_t x348 = 0LLU;
int32_t x352 = -1;
static volatile int32_t t80 = 0;
int64_t x354 = 3LL;
uint64_t x355 = 30015857109991LLU;
int64_t x363 = INT64_MIN;
static volatile int16_t x365 = -252;
int8_t x370 = INT8_MIN;
uint64_t x375 = 17137708645065875LLU;
int32_t x377 = INT32_MAX;
uint32_t x378 = 5799348U;
uint8_t x390 = 3U;
volatile int32_t t89 = -7;
int32_t x393 = INT32_MAX;
int16_t x395 = -8490;
static int8_t x397 = INT8_MIN;
volatile int32_t x402 = -1;
volatile int32_t t93 = -966924168;
volatile int64_t x409 = INT64_MAX;
int8_t x422 = INT8_MIN;
int64_t x428 = INT64_MAX;
int64_t x429 = INT64_MAX;
int8_t x432 = 2;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	static volatile int16_t x3 = -441;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -71;

	t0 = ((x1%(x2^x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 18U;
	int8_t x6 = 0;
	int32_t x7 = -62702;
	uint32_t x8 = 21U;
	volatile int32_t t1 = 5;

	t1 = ((x5%(x6^x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = -470;
	volatile int16_t x11 = -1;
	int64_t x12 = 53917505LL;
	int32_t t2 = 12556257;

	t2 = ((x9%(x10^x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	static int16_t x14 = INT16_MIN;
	int32_t x15 = -952995;
	static int32_t t3 = -1089;

	t3 = ((x13%(x14^x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 25037U;
	volatile uint64_t x20 = 174199433772LLU;
	static volatile int32_t t4 = -7535;

	t4 = ((x17%(x18^x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int64_t x22 = 12903LL;
	static int64_t x24 = 54862LL;
	volatile int32_t t5 = -4438;

	t5 = ((x21%(x22^x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -15370;
	int64_t x26 = 156678734770LL;
	volatile int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 0;

	t6 = ((x25%(x26^x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x29 = 115939476U;
	int8_t x30 = 23;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = -1;

	t7 = ((x29%(x30^x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = 4234743463866977572LL;
	static int32_t x34 = -1325;
	int32_t x35 = -1;
	static int64_t x36 = INT64_MIN;

	t8 = ((x33%(x34^x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 10LL;
	volatile int64_t x38 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -30447019;

	t9 = ((x37%(x38^x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -1723;

	t10 = ((x41%(x42^x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 136464744U;
	int32_t x50 = -84;
	int32_t x52 = -830880575;

	t11 = ((x49%(x50^x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = UINT16_MAX;
	uint8_t x54 = 0U;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t12 = 81;

	t12 = ((x53%(x54^x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -10;
	uint32_t x58 = 917754097U;
	int64_t x59 = INT64_MAX;
	static int64_t x60 = -1LL;
	int32_t t13 = -355413;

	t13 = ((x57%(x58^x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	int8_t x63 = 1;
	static volatile int32_t t14 = -231101081;

	t14 = ((x61%(x62^x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	int32_t x68 = 45126;
	int32_t t15 = -449733;

	t15 = ((x65%(x66^x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x71 = INT32_MAX;
	uint16_t x72 = 0U;
	int32_t t16 = -408214299;

	t16 = ((x69%(x70^x71))==x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -19;
	int8_t x75 = 1;
	int32_t x76 = INT32_MIN;
	int32_t t17 = 247;

	t17 = ((x73%(x74^x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = 1U;
	volatile int32_t x83 = INT32_MAX;

	t18 = ((x81%(x82^x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	static volatile uint16_t x86 = 6184U;
	static int64_t x87 = 787986LL;
	volatile uint8_t x88 = 0U;
	int32_t t19 = -1;

	t19 = ((x85%(x86^x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 947LL;
	volatile uint8_t x90 = 90U;
	volatile int16_t x91 = INT16_MIN;
	static volatile int8_t x92 = INT8_MAX;
	static volatile int32_t t20 = 9954;

	t20 = ((x89%(x90^x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t21 = 46039633;

	t21 = ((x93%(x94^x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1017;
	volatile int8_t x99 = 0;
	int32_t x100 = 121;
	volatile int32_t t22 = 1;

	t22 = ((x97%(x98^x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x101 = 61U;
	uint8_t x103 = 14U;
	int64_t x104 = INT64_MAX;
	int32_t t23 = 16155821;

	t23 = ((x101%(x102^x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	volatile int16_t x108 = INT16_MIN;
	int32_t t24 = -20731549;

	t24 = ((x105%(x106^x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MAX;
	int16_t x112 = 7;

	t25 = ((x109%(x110^x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t26 = 85;

	t26 = ((x117%(x118^x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x121 = 1275LLU;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = -1;
	int8_t x124 = -1;
	int32_t t27 = 7;

	t27 = ((x121%(x122^x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -1;
	uint64_t x126 = 26677460LLU;
	static uint64_t x127 = UINT64_MAX;
	static volatile int32_t x128 = -1;
	volatile int32_t t28 = -5;

	t28 = ((x125%(x126^x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x130 = -27973770230631939LL;
	static uint64_t x131 = UINT64_MAX;
	static int8_t x132 = 1;

	t29 = ((x129%(x130^x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int32_t t30 = 8036;

	t30 = ((x133%(x134^x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 13U;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MAX;
	int32_t t31 = -116675;

	t31 = ((x137%(x138^x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x141 = -1083LL;
	int32_t x142 = INT32_MIN;
	volatile int8_t x144 = -49;

	t32 = ((x141%(x142^x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x148 = INT16_MAX;

	t33 = ((x145%(x146^x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	int32_t t34 = -38139260;

	t34 = ((x149%(x150^x151))==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	int8_t x156 = -8;
	volatile int32_t t35 = -3728;

	t35 = ((x153%(x154^x155))==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	static volatile int32_t x158 = INT32_MIN;
	volatile int16_t x159 = INT16_MIN;
	int8_t x160 = 1;

	t36 = ((x157%(x158^x159))==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = 6063957;
	int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -488619500;
	static volatile int32_t t37 = 224;

	t37 = ((x161%(x162^x163))==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 100U;
	volatile int16_t x167 = 6;
	static int16_t x168 = INT16_MIN;

	t38 = ((x165%(x166^x167))==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x169 = INT16_MIN;
	uint8_t x170 = UINT8_MAX;
	int8_t x172 = 0;
	volatile int32_t t39 = 4;

	t39 = ((x169%(x170^x171))==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = INT16_MAX;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t40 = 1043750634;

	t40 = ((x173%(x174^x175))==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x182 = 177U;
	static int16_t x183 = INT16_MIN;
	uint64_t x184 = UINT64_MAX;
	int32_t t41 = 430;

	t41 = ((x181%(x182^x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 1360720U;
	uint64_t x186 = UINT64_MAX;
	volatile int32_t t42 = 3446916;

	t42 = ((x185%(x186^x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = -198306LL;
	int64_t x191 = -1LL;
	volatile int32_t t43 = -2;

	t43 = ((x189%(x190^x191))==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -1242781564276LL;
	uint64_t x194 = 751LLU;
	int32_t x196 = INT32_MIN;

	t44 = ((x193%(x194^x195))==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = INT16_MAX;
	int8_t x198 = -23;
	int16_t x199 = -1;
	static volatile int8_t x200 = INT8_MAX;
	volatile int32_t t45 = -5;

	t45 = ((x197%(x198^x199))==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x202 = 303903LLU;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t46 = -2;

	t46 = ((x201%(x202^x203))==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = 409810LL;
	static int64_t x207 = INT64_MAX;
	volatile int32_t t47 = 3475;

	t47 = ((x205%(x206^x207))==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = 1;
	uint32_t x210 = 4411U;
	int16_t x212 = INT16_MIN;

	t48 = ((x209%(x210^x211))==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x216 = -23908;

	t49 = ((x213%(x214^x215))==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x218 = INT8_MIN;
	uint8_t x219 = 24U;
	int16_t x220 = -1;
	int32_t t50 = 1967745;

	t50 = ((x217%(x218^x219))==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x222 = 263161587764268LL;
	uint32_t x223 = 428612U;
	int8_t x224 = INT8_MIN;

	t51 = ((x221%(x222^x223))==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = 1U;
	int16_t x230 = INT16_MIN;
	int64_t x232 = INT64_MIN;

	t52 = ((x229%(x230^x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = 4LL;
	static int32_t x234 = INT32_MIN;
	static int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	int32_t t53 = -9;

	t53 = ((x233%(x234^x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = INT8_MAX;
	static int64_t x238 = INT64_MAX;
	int16_t x239 = 53;
	volatile uint16_t x240 = 1797U;
	int32_t t54 = 1;

	t54 = ((x237%(x238^x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x242 = INT16_MIN;
	volatile uint32_t x243 = UINT32_MAX;
	int16_t x244 = 7;
	volatile int32_t t55 = 28981;

	t55 = ((x241%(x242^x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x245 = 48086709LL;
	volatile int64_t x246 = -353936800557LL;
	int64_t x248 = INT64_MIN;
	int32_t t56 = -1440;

	t56 = ((x245%(x246^x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 4423055562651LLU;
	uint32_t x250 = UINT32_MAX;
	volatile int32_t x251 = 854;
	uint32_t x252 = 26943U;
	static int32_t t57 = -3;

	t57 = ((x249%(x250^x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 292804501484371393LLU;
	int8_t x256 = 2;
	volatile int32_t t58 = 40455211;

	t58 = ((x253%(x254^x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 16U;
	static int8_t x259 = INT8_MIN;
	uint32_t x260 = 4103138U;

	t59 = ((x257%(x258^x259))==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MAX;
	int8_t x263 = 1;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t60 = 301;

	t60 = ((x261%(x262^x263))==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = -2432LL;
	int32_t t61 = -3024;

	t61 = ((x265%(x266^x267))==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x274 = -1;
	static int16_t x275 = INT16_MIN;
	uint16_t x276 = 7172U;
	int32_t t62 = -26;

	t62 = ((x273%(x274^x275))==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	int64_t x282 = -1LL;
	static int64_t x283 = INT64_MAX;
	int32_t t63 = 1898300;

	t63 = ((x281%(x282^x283))==x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = 1LL;
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	int64_t x288 = INT64_MAX;
	int32_t t64 = -99102;

	t64 = ((x285%(x286^x287))==x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int8_t x292 = INT8_MIN;

	t65 = ((x289%(x290^x291))==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x294 = -1LL;
	int16_t x296 = 25;

	t66 = ((x293%(x294^x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = -6150;
	uint64_t x298 = 189087154740964208LLU;
	int8_t x300 = 1;
	volatile int32_t t67 = 18903133;

	t67 = ((x297%(x298^x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 6U;
	volatile uint16_t x303 = 1U;
	static uint32_t x304 = 49056U;
	static int32_t t68 = 3890;

	t68 = ((x301%(x302^x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = 9;
	int64_t x307 = INT64_MIN;
	uint32_t x308 = UINT32_MAX;

	t69 = ((x305%(x306^x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x309 = 2U;
	uint32_t x311 = 36U;
	static int8_t x312 = 6;
	static int32_t t70 = -6905;

	t70 = ((x309%(x310^x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = 40U;
	int32_t x315 = INT32_MIN;
	volatile int32_t x316 = -29;

	t71 = ((x313%(x314^x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -5747;
	static int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MAX;

	t72 = ((x317%(x318^x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MIN;
	int16_t x323 = -1;
	static uint64_t x324 = 19007371LLU;

	t73 = ((x321%(x322^x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MIN;
	int32_t x328 = INT32_MAX;
	volatile int32_t t74 = -16;

	t74 = ((x325%(x326^x327))==x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x330 = -183912;
	int64_t x331 = INT64_MIN;
	int8_t x332 = 0;
	volatile int32_t t75 = 720548770;

	t75 = ((x329%(x330^x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x335 = INT32_MAX;
	static volatile int32_t x336 = INT32_MIN;
	int32_t t76 = -100925823;

	t76 = ((x333%(x334^x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x339 = UINT16_MAX;
	int32_t t77 = -18509097;

	t77 = ((x337%(x338^x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 2U;
	uint16_t x342 = UINT16_MAX;
	static int32_t x344 = -3992;
	int32_t t78 = 680159;

	t78 = ((x341%(x342^x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = UINT16_MAX;
	static uint64_t x346 = 446LLU;
	int64_t x347 = INT64_MIN;
	int32_t t79 = -15;

	t79 = ((x345%(x346^x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;

	t80 = ((x349%(x350^x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = 49;
	uint64_t x356 = 118409LLU;
	static volatile int32_t t81 = 1455;

	t81 = ((x353%(x354^x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x361 = 54362593LLU;
	uint64_t x362 = 20504131165LLU;
	static int64_t x364 = -451338844519688246LL;
	int32_t t82 = -31;

	t82 = ((x361%(x362^x363))==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x366 = -1LL;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t83 = -1182;

	t83 = ((x365%(x366^x367))==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -1;
	static volatile int32_t x371 = 16732500;
	uint32_t x372 = 45879U;
	volatile int32_t t84 = 4;

	t84 = ((x369%(x370^x371))==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = -1LL;
	int16_t x374 = 3;
	static volatile int32_t x376 = INT32_MAX;
	int32_t t85 = -954785664;

	t85 = ((x373%(x374^x375))==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x379 = INT8_MIN;
	int16_t x380 = 11653;
	static int32_t t86 = 21536;

	t86 = ((x377%(x378^x379))==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = 4;
	uint16_t x382 = 0U;
	int8_t x383 = -1;
	static uint8_t x384 = 21U;
	int32_t t87 = -6553;

	t87 = ((x381%(x382^x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MAX;
	uint8_t x386 = 1U;
	volatile uint16_t x387 = 2909U;
	int16_t x388 = -1;
	int32_t t88 = 1;

	t88 = ((x385%(x386^x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = 116;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;

	t89 = ((x389%(x390^x391))==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x394 = 214876U;
	volatile int64_t x396 = INT64_MIN;
	static volatile int32_t t90 = -97848;

	t90 = ((x393%(x394^x395))==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x398 = -39;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 1U;
	volatile int32_t t91 = -2057540;

	t91 = ((x397%(x398^x399))==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x401 = 28047805U;
	int16_t x403 = INT16_MIN;
	static volatile uint16_t x404 = 1U;
	volatile int32_t t92 = 49;

	t92 = ((x401%(x402^x403))==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x405 = UINT64_MAX;
	int32_t x406 = 2008656;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;

	t93 = ((x405%(x406^x407))==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x410 = INT16_MIN;
	static volatile int32_t x411 = INT32_MIN;
	uint32_t x412 = 191617854U;
	static volatile int32_t t94 = 0;

	t94 = ((x409%(x410^x411))==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x418 = -14076244LL;
	uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MAX;
	volatile int32_t t95 = -8388909;

	t95 = ((x417%(x418^x419))==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = INT64_MIN;
	int16_t x423 = -1;
	uint64_t x424 = UINT64_MAX;
	static volatile int32_t t96 = 112163;

	t96 = ((x421%(x422^x423))==x424);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x425 = UINT32_MAX;
	static int16_t x426 = -1;
	int32_t x427 = INT32_MAX;
	int32_t t97 = -2470972;

	t97 = ((x425%(x426^x427))==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x430 = 4533;
	uint32_t x431 = 1983U;
	volatile int32_t t98 = 527498090;

	t98 = ((x429%(x430^x431))==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x433 = 900354U;
	int64_t x434 = INT64_MAX;
	volatile int8_t x435 = -1;
	volatile int64_t x436 = -76LL;
	static int32_t t99 = 33;

	t99 = ((x433%(x434^x435))==x436);

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

