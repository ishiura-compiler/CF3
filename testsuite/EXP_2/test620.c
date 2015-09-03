#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3258;
static volatile uint16_t x6 = UINT16_MAX;
volatile int32_t x8 = -843075993;
volatile int32_t t2 = -2;
int32_t t3 = -2092316;
static int64_t x18 = 15LL;
volatile uint64_t x19 = 49428742LLU;
int32_t x21 = -1;
uint16_t x24 = 221U;
volatile uint32_t x30 = 52584U;
static int64_t x34 = INT64_MAX;
int32_t x37 = INT32_MAX;
volatile int32_t t10 = -3;
uint8_t x47 = 1U;
int16_t x48 = INT16_MIN;
int16_t x54 = INT16_MIN;
static volatile uint16_t x59 = UINT16_MAX;
int64_t x60 = -58590220LL;
static volatile int32_t t14 = -138;
uint16_t x71 = UINT16_MAX;
volatile int32_t t17 = -18016;
uint8_t x76 = 0U;
static int32_t x83 = INT32_MIN;
static uint32_t x91 = UINT32_MAX;
int64_t x98 = -1LL;
static int32_t x109 = INT32_MAX;
volatile int64_t x111 = INT64_MIN;
volatile int32_t x114 = INT32_MAX;
int8_t x116 = -1;
volatile int32_t t27 = -165234047;
volatile int8_t x117 = -1;
volatile int64_t x136 = -38LL;
volatile int8_t x138 = 3;
uint8_t x141 = 17U;
int16_t x151 = -6361;
int8_t x153 = -7;
volatile int16_t x159 = INT16_MIN;
static int16_t x165 = INT16_MIN;
static volatile uint8_t x173 = 1U;
int32_t x174 = 305;
int16_t x178 = INT16_MIN;
int64_t x181 = INT64_MIN;
uint32_t x187 = 1U;
volatile int32_t x194 = INT32_MIN;
volatile uint8_t x199 = 4U;
int32_t x205 = -1;
int16_t x208 = INT16_MAX;
int8_t x209 = INT8_MIN;
int32_t x217 = 6410769;
int8_t x221 = INT8_MAX;
uint32_t x222 = 1850522U;
uint8_t x228 = UINT8_MAX;
uint64_t x229 = 3260413LLU;
int8_t x235 = INT8_MIN;
volatile int32_t t57 = 191189763;
volatile int32_t x239 = 1256;
int32_t x242 = INT32_MIN;
static int32_t t59 = -55771911;
uint16_t x248 = 25761U;
volatile uint32_t x249 = 95U;
static int16_t x250 = INT16_MIN;
int64_t x254 = INT64_MIN;
uint16_t x262 = 17U;
uint8_t x265 = 45U;
static int8_t x268 = INT8_MIN;
volatile int32_t t65 = -23804;
int32_t t67 = 17713;
volatile int32_t x281 = INT32_MIN;
volatile int32_t t69 = 11492104;
int32_t x289 = -1;
int16_t x292 = -45;
volatile int32_t x296 = 255;
static int64_t x301 = INT64_MIN;
static int32_t x311 = INT32_MIN;
volatile int32_t x317 = -12;
int16_t x320 = -1;
volatile uint8_t x326 = 45U;
uint32_t x328 = 116677222U;
uint32_t x331 = UINT32_MAX;
int16_t x344 = INT16_MIN;
int8_t x347 = -1;
int32_t t85 = 3630;
volatile int64_t x353 = INT64_MIN;
static uint16_t x354 = 83U;
int8_t x358 = INT8_MIN;
uint8_t x369 = UINT8_MAX;
int8_t x370 = INT8_MAX;
int8_t x373 = INT8_MIN;
uint16_t x375 = UINT16_MAX;
uint64_t x376 = UINT64_MAX;
volatile uint32_t x378 = 934128779U;
static uint8_t x383 = UINT8_MAX;
static int8_t x385 = INT8_MIN;
int16_t x392 = 294;
int32_t t95 = 500;
static int8_t x405 = INT8_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = 1U;
	static uint32_t x3 = 181336154U;
	static int32_t x4 = -1;

	t0 = ((x1<(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 4;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 0;

	t1 = ((x5<(x6/x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int32_t x10 = -4;
	uint64_t x11 = UINT64_MAX;
	static uint64_t x12 = UINT64_MAX;

	t2 = ((x9<(x10/x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	volatile int16_t x14 = -7466;
	static volatile int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MAX;

	t3 = ((x13<(x14/x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 116761149620LL;
	static uint64_t x20 = UINT64_MAX;
	int32_t t4 = -24009693;

	t4 = ((x17<(x18/x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MAX;
	volatile uint16_t x23 = 42U;
	int32_t t5 = 1032190;

	t5 = ((x21<(x22/x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 7969U;
	int16_t x26 = -499;
	uint32_t x27 = 7464U;
	int16_t x28 = -13238;
	static volatile int32_t t6 = 2315895;

	t6 = ((x25<(x26/x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	int8_t x31 = INT8_MAX;
	int32_t x32 = 4;
	volatile int32_t t7 = -918354459;

	t7 = ((x29<(x30/x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = UINT32_MAX;
	uint32_t x35 = 192U;
	uint64_t x36 = 190LLU;
	int32_t t8 = -123;

	t8 = ((x33<(x34/x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int64_t x39 = INT64_MIN;
	int8_t x40 = 2;
	static volatile int32_t t9 = -7;

	t9 = ((x37<(x38/x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x41 = 363U;
	uint64_t x42 = 3783023798230686LLU;
	uint16_t x43 = 797U;
	int64_t x44 = -4120607545251LL;

	t10 = ((x41<(x42/x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	uint64_t x46 = 4712087049024799LLU;
	volatile int32_t t11 = 788490826;

	t11 = ((x45<(x46/x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int8_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 11515969;

	t12 = ((x49<(x50/x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile uint64_t x55 = 304568LLU;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = -324737822;

	t13 = ((x53<(x54/x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	static int32_t x58 = INT32_MIN;

	t14 = ((x57<(x58/x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int64_t x62 = -1LL;
	uint8_t x63 = UINT8_MAX;
	static uint32_t x64 = 245316U;
	int32_t t15 = 342;

	t15 = ((x61<(x62/x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 8272527U;
	volatile int32_t x66 = -1;
	int32_t x67 = -1;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -3473;

	t16 = ((x65<(x66/x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 10177U;
	volatile int64_t x70 = -1LL;
	int64_t x72 = INT64_MAX;

	t17 = ((x69<(x70/x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 5LLU;
	static int16_t x74 = -1;
	int32_t x75 = INT32_MAX;
	volatile int32_t t18 = 1000302844;

	t18 = ((x73<(x74/x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	int32_t x78 = INT32_MAX;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = 128854772;
	volatile int32_t t19 = -26357286;

	t19 = ((x77<(x78/x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 24;
	volatile uint32_t x82 = 3261U;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = -123182783;

	t20 = ((x81<(x82/x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -121441707LL;
	int32_t x90 = -1;
	int64_t x92 = INT64_MIN;
	volatile int32_t t21 = 183500911;

	t21 = ((x89<(x90/x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -2596;
	int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t22 = -2630325;

	t22 = ((x93<(x94/x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MAX;
	volatile uint8_t x99 = 104U;
	uint32_t x100 = 6170363U;
	volatile int32_t t23 = 1;

	t23 = ((x97<(x98/x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	static uint8_t x103 = UINT8_MAX;
	uint64_t x104 = UINT64_MAX;
	static volatile int32_t t24 = 809963923;

	t24 = ((x101<(x102/x103))<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = 29U;
	int16_t x108 = 6302;
	int32_t t25 = -20487745;

	t25 = ((x105<(x106/x107))<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = INT16_MIN;
	int8_t x112 = -1;
	int32_t t26 = -3;

	t26 = ((x109<(x110/x111))<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x115 = 1;

	t27 = ((x113<(x114/x115))<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = 45;
	volatile int32_t t28 = -98935512;

	t28 = ((x117<(x118/x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	volatile int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MAX;
	int32_t t29 = 53093;

	t29 = ((x121<(x122/x123))<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;
	static volatile int32_t t30 = 187325391;

	t30 = ((x125<(x126/x127))<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = -3787160LL;
	int64_t x130 = INT64_MAX;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = 43;
	volatile int32_t t31 = 42756;

	t31 = ((x129<(x130/x131))<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	static uint16_t x135 = 2261U;
	volatile int32_t t32 = 65;

	t32 = ((x133<(x134/x135))<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -54;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = 3LL;
	volatile int32_t t33 = -2528;

	t33 = ((x137<(x138/x139))<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = -11291;
	static int8_t x144 = -7;
	int32_t t34 = 1;

	t34 = ((x141<(x142/x143))<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = -20628500942845LL;
	int16_t x146 = -1;
	int32_t x147 = INT32_MIN;
	static int32_t x148 = INT32_MAX;
	int32_t t35 = 5;

	t35 = ((x145<(x146/x147))<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 787414LL;
	static uint32_t x150 = UINT32_MAX;
	uint8_t x152 = 28U;
	static int32_t t36 = -384656633;

	t36 = ((x149<(x150/x151))<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MAX;
	int32_t t37 = 403;

	t37 = ((x153<(x154/x155))<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x157 = -19;
	uint8_t x158 = 43U;
	volatile int16_t x160 = 10;
	volatile int32_t t38 = 86;

	t38 = ((x157<(x158/x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MAX;
	static int64_t x162 = -1LL;
	int16_t x163 = -14171;
	int8_t x164 = -1;
	static volatile int32_t t39 = -22;

	t39 = ((x161<(x162/x163))<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MAX;
	volatile int16_t x168 = -509;
	volatile int32_t t40 = -336285236;

	t40 = ((x165<(x166/x167))<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	volatile uint8_t x172 = 1U;
	int32_t t41 = -15788369;

	t41 = ((x169<(x170/x171))<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x175 = INT8_MAX;
	uint64_t x176 = 15749528777087LLU;
	volatile int32_t t42 = -11566;

	t42 = ((x173<(x174/x175))<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 158U;
	volatile uint8_t x179 = 20U;
	int64_t x180 = 31LL;
	static int32_t t43 = -701813968;

	t43 = ((x177<(x178/x179))<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = -1;
	static int16_t x183 = INT16_MIN;
	uint16_t x184 = 391U;
	volatile int32_t t44 = -798;

	t44 = ((x181<(x182/x183))<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x186 = INT64_MIN;
	uint64_t x188 = 1699LLU;
	int32_t t45 = -117;

	t45 = ((x185<(x186/x187))<x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	static int8_t x190 = INT8_MIN;
	static uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t46 = -5712;

	t46 = ((x189<(x190/x191))<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -32;
	volatile uint8_t x195 = UINT8_MAX;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t47 = 3980;

	t47 = ((x193<(x194/x195))<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 242765U;
	uint32_t x200 = 15554996U;
	volatile int32_t t48 = -48320987;

	t48 = ((x197<(x198/x199))<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = UINT32_MAX;
	static int64_t x202 = INT64_MIN;
	uint16_t x203 = UINT16_MAX;
	static uint16_t x204 = 5U;
	volatile int32_t t49 = -165;

	t49 = ((x201<(x202/x203))<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x206 = INT8_MAX;
	volatile uint8_t x207 = 3U;
	static int32_t t50 = -1816;

	t50 = ((x205<(x206/x207))<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x210 = UINT16_MAX;
	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = UINT64_MAX;
	int32_t t51 = 203942360;

	t51 = ((x209<(x210/x211))<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	int16_t x215 = -1;
	int32_t x216 = INT32_MIN;
	volatile int32_t t52 = 26;

	t52 = ((x213<(x214/x215))<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	uint64_t x220 = 133LLU;
	volatile int32_t t53 = -1;

	t53 = ((x217<(x218/x219))<x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x223 = INT64_MAX;
	volatile uint32_t x224 = 960U;
	int32_t t54 = -218;

	t54 = ((x221<(x222/x223))<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	static int16_t x226 = -2;
	uint64_t x227 = UINT64_MAX;
	volatile int32_t t55 = -35059;

	t55 = ((x225<(x226/x227))<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x230 = INT64_MAX;
	uint16_t x231 = UINT16_MAX;
	volatile int16_t x232 = INT16_MIN;
	int32_t t56 = 2935;

	t56 = ((x229<(x230/x231))<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = -1;
	static uint16_t x236 = 0U;

	t57 = ((x233<(x234/x235))<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t58 = -194896;

	t58 = ((x237<(x238/x239))<x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 120137U;
	int32_t x243 = INT32_MAX;
	static uint64_t x244 = 31222LLU;

	t59 = ((x241<(x242/x243))<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int32_t x246 = -1039614847;
	static int16_t x247 = 4375;
	static int32_t t60 = -547581;

	t60 = ((x245<(x246/x247))<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x251 = INT32_MIN;
	static int64_t x252 = -1LL;
	int32_t t61 = -59141;

	t61 = ((x249<(x250/x251))<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = UINT16_MAX;
	static uint8_t x255 = UINT8_MAX;
	volatile int64_t x256 = INT64_MIN;
	int32_t t62 = -49744214;

	t62 = ((x253<(x254/x255))<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x257 = INT8_MIN;
	int32_t x258 = -1;
	int8_t x259 = -1;
	static int8_t x260 = INT8_MIN;
	static volatile int32_t t63 = 5782330;

	t63 = ((x257<(x258/x259))<x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x261 = INT64_MAX;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -1;
	static volatile int32_t t64 = -54094977;

	t64 = ((x261<(x262/x263))<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MIN;

	t65 = ((x265<(x266/x267))<x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = 2;
	static int32_t x270 = INT32_MIN;
	volatile int16_t x271 = -2693;
	int32_t x272 = -1;
	static int32_t t66 = -226;

	t66 = ((x269<(x270/x271))<x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	int16_t x276 = -1;

	t67 = ((x273<(x274/x275))<x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x277 = 0U;
	int64_t x278 = INT64_MAX;
	int32_t x279 = 41178104;
	uint8_t x280 = 10U;
	volatile int32_t t68 = -6040;

	t68 = ((x277<(x278/x279))<x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MAX;
	int16_t x284 = -2309;

	t69 = ((x281<(x282/x283))<x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int8_t x287 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t70 = 6049;

	t70 = ((x285<(x286/x287))<x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x290 = 30624703584271LL;
	int8_t x291 = -1;
	int32_t t71 = 114145475;

	t71 = ((x289<(x290/x291))<x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = 39U;
	uint64_t x295 = 15680118837337153LLU;
	static int32_t t72 = -788;

	t72 = ((x293<(x294/x295))<x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x297 = -195;
	static volatile uint8_t x298 = 24U;
	uint32_t x299 = 3288U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t73 = 1568235;

	t73 = ((x297<(x298/x299))<x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x302 = INT8_MIN;
	static int16_t x303 = 6;
	int64_t x304 = INT64_MAX;
	int32_t t74 = -72;

	t74 = ((x301<(x302/x303))<x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -61024313237412560LL;
	int32_t x306 = -89195658;
	static volatile uint16_t x307 = 9U;
	volatile int32_t x308 = -1;
	int32_t t75 = 779;

	t75 = ((x305<(x306/x307))<x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x309 = UINT32_MAX;
	int64_t x310 = INT64_MIN;
	volatile int32_t x312 = -1;
	volatile int32_t t76 = -59;

	t76 = ((x309<(x310/x311))<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = 74668685LLU;
	uint64_t x314 = UINT64_MAX;
	uint8_t x315 = 14U;
	static volatile int32_t x316 = INT32_MAX;
	static volatile int32_t t77 = 656980665;

	t77 = ((x313<(x314/x315))<x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x318 = UINT32_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	int32_t t78 = -37;

	t78 = ((x317<(x318/x319))<x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -24;
	int8_t x323 = 2;
	int64_t x324 = 6042133456323LL;
	volatile int32_t t79 = -351902;

	t79 = ((x321<(x322/x323))<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 2U;
	static uint8_t x327 = 3U;
	int32_t t80 = -24865223;

	t80 = ((x325<(x326/x327))<x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = -1;
	volatile int8_t x330 = 4;
	volatile int8_t x332 = INT8_MIN;
	int32_t t81 = 399;

	t81 = ((x329<(x330/x331))<x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = 31;
	uint64_t x334 = 6LLU;
	static uint64_t x335 = UINT64_MAX;
	uint16_t x336 = 62U;
	volatile int32_t t82 = 322;

	t82 = ((x333<(x334/x335))<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 14U;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	int32_t t83 = -328;

	t83 = ((x341<(x342/x343))<x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 882LLU;
	uint64_t x346 = 1733403872451342LLU;
	uint16_t x348 = 4302U;
	volatile int32_t t84 = -12749703;

	t84 = ((x345<(x346/x347))<x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -3LL;
	int32_t x350 = INT32_MIN;
	int16_t x351 = 16;
	uint32_t x352 = 416088749U;

	t85 = ((x349<(x350/x351))<x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x355 = 3U;
	uint32_t x356 = 18236025U;
	static volatile int32_t t86 = 2441;

	t86 = ((x353<(x354/x355))<x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -1051289688332931374LL;
	volatile int32_t x359 = INT32_MIN;
	static int8_t x360 = -2;
	int32_t t87 = 125;

	t87 = ((x357<(x358/x359))<x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MAX;
	static int16_t x363 = INT16_MIN;
	volatile int64_t x364 = INT64_MIN;
	static int32_t t88 = -29801634;

	t88 = ((x361<(x362/x363))<x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = 3934275;
	volatile int32_t x366 = 34;
	int8_t x367 = INT8_MAX;
	int64_t x368 = -22550925554LL;
	static int32_t t89 = -72;

	t89 = ((x365<(x366/x367))<x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x371 = -2;
	int16_t x372 = 491;
	volatile int32_t t90 = 3013959;

	t90 = ((x369<(x370/x371))<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = 0;
	int32_t t91 = 0;

	t91 = ((x373<(x374/x375))<x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x377 = UINT32_MAX;
	volatile int8_t x379 = -1;
	int8_t x380 = 11;
	volatile int32_t t92 = -547;

	t92 = ((x377<(x378/x379))<x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x381 = 0U;
	uint8_t x382 = UINT8_MAX;
	static int16_t x384 = -1187;
	volatile int32_t t93 = -1;

	t93 = ((x381<(x382/x383))<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x386 = 10750754298336725LLU;
	uint64_t x387 = 42929639LLU;
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t94 = 1;

	t94 = ((x385<(x386/x387))<x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = 195336546U;
	static uint64_t x390 = 1988005105915140547LLU;
	int32_t x391 = 695854;

	t95 = ((x389<(x390/x391))<x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile int64_t x396 = -1LL;
	static int32_t t96 = 1032;

	t96 = ((x393<(x394/x395))<x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = 0;
	uint32_t x398 = 45U;
	static int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MAX;
	int32_t t97 = 707093324;

	t97 = ((x397<(x398/x399))<x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MIN;
	volatile int32_t x404 = INT32_MAX;
	volatile int32_t t98 = -10782;

	t98 = ((x401<(x402/x403))<x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x406 = -1LL;
	static int16_t x407 = -503;
	static int16_t x408 = INT16_MIN;
	int32_t t99 = -5;

	t99 = ((x405<(x406/x407))<x408);

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

