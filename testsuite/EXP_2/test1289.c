#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
volatile uint16_t x8 = 12782U;
static uint64_t x9 = 30571103LLU;
uint64_t x11 = UINT64_MAX;
int32_t x12 = INT32_MAX;
int32_t t2 = 2784138;
volatile int16_t x16 = INT16_MIN;
volatile int32_t t5 = -5;
int16_t x28 = INT16_MAX;
int64_t x29 = 179303LL;
int32_t x37 = INT32_MAX;
int16_t x39 = INT16_MIN;
uint64_t t10 = 1LLU;
volatile int32_t x46 = INT32_MIN;
static uint64_t x52 = 4486156848LLU;
int8_t x56 = INT8_MIN;
int32_t t13 = -1;
int64_t x66 = INT64_MAX;
uint8_t x68 = 113U;
int32_t x75 = INT32_MIN;
int16_t x82 = INT16_MIN;
static int32_t t20 = -33427;
int64_t x93 = INT64_MIN;
volatile int64_t t24 = -25373139862LL;
int32_t t25 = -106027;
int8_t x113 = 0;
uint16_t x114 = UINT16_MAX;
int16_t x115 = INT16_MAX;
uint8_t x121 = 7U;
static volatile uint64_t t28 = 2103221479787916LLU;
int32_t x128 = INT32_MAX;
int32_t x139 = INT32_MIN;
int64_t x141 = 13872LL;
volatile uint32_t x144 = UINT32_MAX;
static int8_t x145 = -20;
int64_t x146 = INT64_MAX;
static int32_t t34 = -2;
volatile int32_t x159 = INT32_MIN;
volatile uint8_t x167 = 10U;
static uint8_t x170 = UINT8_MAX;
int8_t x171 = -1;
static int32_t t38 = 98585;
static uint8_t x173 = 8U;
uint64_t x175 = 10904135943LLU;
static volatile uint8_t x176 = 14U;
int32_t t40 = -1;
uint64_t x183 = 68843LLU;
volatile int32_t t41 = -1;
uint32_t x194 = 6U;
uint32_t t45 = 44734U;
uint8_t x208 = 31U;
int8_t x212 = INT8_MIN;
int32_t t47 = 1;
uint32_t x215 = 4751U;
static int64_t x220 = INT64_MAX;
int16_t x225 = INT16_MIN;
int32_t t50 = 9;
int32_t x239 = INT32_MIN;
int16_t x242 = INT16_MIN;
uint16_t x243 = 0U;
int32_t t52 = 389230;
uint16_t x250 = 13U;
int8_t x252 = 13;
uint8_t x255 = UINT8_MAX;
int32_t x262 = INT32_MIN;
static volatile uint64_t t59 = 45148619604380804LLU;
static int32_t x285 = -72;
static int16_t x287 = -9135;
volatile int16_t x290 = 2890;
int8_t x296 = -1;
int32_t t63 = -418348153;
int32_t x302 = -4018495;
volatile int32_t t64 = 510089;
int16_t x305 = INT16_MIN;
int8_t x314 = -1;
int64_t x326 = -1LL;
uint32_t t71 = 1165U;
int32_t x341 = -8295;
static int16_t x353 = INT16_MIN;
int64_t x355 = INT64_MIN;
static volatile int32_t t75 = -1222;
static int16_t x357 = INT16_MIN;
int64_t x359 = -1LL;
static volatile int32_t t76 = -26;
volatile uint64_t x381 = 70772612LLU;
volatile int32_t t81 = 2098666;
static int64_t x388 = 6710LL;
int64_t x390 = INT64_MAX;
int8_t x391 = INT8_MIN;
int32_t t83 = -119325;
int8_t x395 = -1;
static volatile uint8_t x396 = 5U;
volatile int32_t t84 = 10364;
int32_t t86 = 1150;
int64_t x413 = -1LL;
uint32_t x415 = 71198U;
volatile uint8_t x416 = UINT8_MAX;
static int32_t x425 = INT32_MIN;
static int32_t x432 = -2;
int32_t t92 = 454127;
int8_t x437 = 6;
int16_t x458 = 243;
int8_t x459 = INT8_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = -1;
	int64_t x4 = -15117614LL;
	int64_t t0 = -2LL;

	t0 = ((x1<(x2==x3))-x4);

	if (t0 != 15117614LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int64_t x6 = 1049641493LL;
	int16_t x7 = -4;
	volatile int32_t t1 = -13;

	t1 = ((x5<(x6==x7))-x8);

	if (t1 != -12782) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = INT32_MIN;

	t2 = ((x9<(x10==x11))-x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 127885726849235516LLU;
	int32_t x14 = INT32_MIN;
	int16_t x15 = 1009;
	static int32_t t3 = -158115;

	t3 = ((x13<(x14==x15))-x16);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 312695620U;
	volatile int64_t x18 = -53605046899727LL;
	static uint8_t x19 = UINT8_MAX;
	int32_t x20 = -164108;
	int32_t t4 = 2076;

	t4 = ((x17<(x18==x19))-x20);

	if (t4 != 164108) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3U;
	uint32_t x22 = 112365U;
	uint32_t x23 = 86180U;
	int8_t x24 = -1;

	t5 = ((x21<(x22==x23))-x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static int64_t x26 = -1LL;
	uint64_t x27 = 1353146913962140LLU;
	int32_t t6 = 706;

	t6 = ((x25<(x26==x27))-x28);

	if (t6 != -32766) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x30 = 5U;
	uint64_t x31 = 18104LLU;
	static int8_t x32 = 1;
	volatile int32_t t7 = 5456963;

	t7 = ((x29<(x30==x31))-x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	int8_t x34 = -50;
	static int64_t x35 = -1LL;
	static volatile int32_t x36 = 3484706;
	volatile int32_t t8 = -34;

	t8 = ((x33<(x34==x35))-x36);

	if (t8 != -3484706) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -229069260;
	volatile int32_t x40 = -1;
	static int32_t t9 = 768;

	t9 = ((x37<(x38==x39))-x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 239U;
	static int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = UINT64_MAX;

	t10 = ((x41<(x42==x43))-x44);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	static uint32_t t11 = 90U;

	t11 = ((x45<(x46==x47))-x48);

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = 0;
	int64_t x51 = INT64_MIN;
	volatile uint64_t t12 = 19793LLU;

	t12 = ((x49<(x50==x51))-x52);

	if (t12 != 18446744069223394769LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 3U;
	uint16_t x54 = 1U;
	uint16_t x55 = 1U;

	t13 = ((x53<(x54==x55))-x56);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 2U;
	volatile int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -3817;
	static volatile int32_t t14 = 8535;

	t14 = ((x57<(x58==x59))-x60);

	if (t14 != 3817) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x62 = INT64_MAX;
	int16_t x63 = -56;
	uint8_t x64 = 19U;
	int32_t t15 = 185;

	t15 = ((x61<(x62==x63))-x64);

	if (t15 != -18) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 2;
	int8_t x67 = INT8_MIN;
	volatile int32_t t16 = -1125;

	t16 = ((x65<(x66==x67))-x68);

	if (t16 != -113) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 1LL;
	volatile int8_t x74 = -1;
	volatile int16_t x76 = INT16_MAX;
	volatile int32_t t17 = 131861;

	t17 = ((x73<(x74==x75))-x76);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 2335U;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = 73;
	int32_t t18 = -1;

	t18 = ((x81<(x82==x83))-x84);

	if (t18 != -73) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -8;
	int32_t x86 = 79758973;
	volatile uint32_t x87 = 226U;
	static volatile uint64_t x88 = 411889012160183605LLU;
	static volatile uint64_t t19 = 420LLU;

	t19 = ((x85<(x86==x87))-x88);

	if (t19 != 18034855061549368012LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = -1;
	uint8_t x92 = 1U;

	t20 = ((x89<(x90==x91))-x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x94 = UINT64_MAX;
	uint8_t x95 = 36U;
	uint8_t x96 = 6U;
	int32_t t21 = -22851;

	t21 = ((x93<(x94==x95))-x96);

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = INT16_MIN;
	static volatile int32_t x98 = -1;
	int8_t x99 = -22;
	volatile uint32_t x100 = 239U;
	static volatile uint32_t t22 = 3280638U;

	t22 = ((x97<(x98==x99))-x100);

	if (t22 != 4294967058U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 1;
	int32_t x102 = INT32_MIN;
	int8_t x103 = -1;
	int64_t x104 = 1863787992676117LL;
	volatile int64_t t23 = -9415284LL;

	t23 = ((x101<(x102==x103))-x104);

	if (t23 != -1863787992676117LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MIN;
	uint16_t x106 = 1985U;
	int64_t x107 = 516707332483454LL;
	static int64_t x108 = INT64_MAX;

	t24 = ((x105<(x106==x107))-x108);

	if (t24 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = 3824;
	int8_t x110 = INT8_MIN;
	int8_t x111 = -9;
	uint16_t x112 = UINT16_MAX;

	t25 = ((x109<(x110==x111))-x112);

	if (t25 != -65535) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x116 = -963LL;
	int64_t t26 = -539586765015272786LL;

	t26 = ((x113<(x114==x115))-x116);

	if (t26 != 963LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = UINT16_MAX;
	uint32_t x118 = 104592U;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -1;
	volatile int32_t t27 = 2083;

	t27 = ((x117<(x118==x119))-x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = 996830624LLU;

	t28 = ((x121<(x122==x123))-x124);

	if (t28 != 18446744072712720992LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -103613216715127LL;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t t29 = -46705;

	t29 = ((x125<(x126==x127))-x128);

	if (t29 != -2147483646) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	static int64_t x130 = 1291659LL;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t30 = -250795;

	t30 = ((x129<(x130==x131))-x132);

	if (t30 != 32769) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = -1;
	int64_t x134 = -34397728227552LL;
	volatile int16_t x135 = INT16_MIN;
	int16_t x136 = 2;
	volatile int32_t t31 = -346;

	t31 = ((x133<(x134==x135))-x136);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	static uint8_t x140 = UINT8_MAX;
	static int32_t t32 = 4457130;

	t32 = ((x137<(x138==x139))-x140);

	if (t32 != -254) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x142 = 7U;
	int32_t x143 = INT32_MIN;
	volatile uint32_t t33 = 2296U;

	t33 = ((x141<(x142==x143))-x144);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 6435U;

	t34 = ((x145<(x146==x147))-x148);

	if (t34 != -6434) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -1;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = -7;
	uint16_t x156 = 40U;
	int32_t t35 = 5536978;

	t35 = ((x153<(x154==x155))-x156);

	if (t35 != -39) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t36 = 10628963;

	t36 = ((x157<(x158==x159))-x160);

	if (t36 != -255) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -3177LL;
	static uint64_t x166 = 534337084189095LLU;
	int64_t x168 = -1LL;
	volatile int64_t t37 = -346574761LL;

	t37 = ((x165<(x166==x167))-x168);

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	static uint8_t x172 = 7U;

	t38 = ((x169<(x170==x171))-x172);

	if (t38 != -6) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = INT32_MIN;
	int32_t t39 = 1804;

	t39 = ((x173<(x174==x175))-x176);

	if (t39 != -14) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;

	t40 = ((x177<(x178==x179))-x180);

	if (t40 != -255) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x181 = 18818U;
	volatile int64_t x182 = 2LL;
	static int32_t x184 = -1;

	t41 = ((x181<(x182==x183))-x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x185 = 119063982LL;
	static int64_t x186 = -1LL;
	int32_t x187 = INT32_MIN;
	static uint8_t x188 = UINT8_MAX;
	volatile int32_t t42 = -1;

	t42 = ((x185<(x186==x187))-x188);

	if (t42 != -255) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	int8_t x195 = INT8_MIN;
	int16_t x196 = -395;
	static volatile int32_t t43 = -1;

	t43 = ((x193<(x194==x195))-x196);

	if (t43 != 396) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -365805351;
	int32_t x198 = INT32_MIN;
	int64_t x199 = INT64_MIN;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t44 = -60085;

	t44 = ((x197<(x198==x199))-x200);

	if (t44 != 32769) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x201 = 8721;
	uint32_t x202 = 289U;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;

	t45 = ((x201<(x202==x203))-x204);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = -11484;
	volatile uint16_t x207 = 24U;
	volatile int32_t t46 = 15;

	t46 = ((x205<(x206==x207))-x208);

	if (t46 != -30) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MAX;
	static uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 13368352120LLU;

	t47 = ((x209<(x210==x211))-x212);

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x213 = 364U;
	int32_t x214 = INT32_MIN;
	volatile int32_t x216 = -1;
	int32_t t48 = 574;

	t48 = ((x213<(x214==x215))-x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = INT16_MAX;
	int64_t x218 = INT64_MAX;
	int32_t x219 = INT32_MAX;
	int64_t t49 = 122LL;

	t49 = ((x217<(x218==x219))-x220);

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x226 = UINT16_MAX;
	volatile int32_t x227 = 21443;
	int16_t x228 = 13;

	t50 = ((x225<(x226==x227))-x228);

	if (t50 != -12) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = INT32_MAX;
	uint16_t x240 = 2550U;
	static int32_t t51 = 2;

	t51 = ((x237<(x238==x239))-x240);

	if (t51 != -2550) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x241 = -1;
	volatile int16_t x244 = INT16_MAX;

	t52 = ((x241<(x242==x243))-x244);

	if (t52 != -32766) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x251 = 32704U;
	int32_t t53 = -46;

	t53 = ((x249<(x250==x251))-x252);

	if (t53 != -12) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = 63U;
	uint32_t x254 = 3338357U;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t54 = 337305320;

	t54 = ((x253<(x254==x255))-x256);

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = -12050;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -399;
	int32_t t55 = -39160;

	t55 = ((x261<(x262==x263))-x264);

	if (t55 != 400) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x265 = 17736313;
	static uint64_t x266 = 3772073428510741207LLU;
	static uint64_t x267 = 167465LLU;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t56 = -11984;

	t56 = ((x265<(x266==x267))-x268);

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = -1;
	uint32_t x270 = 193075U;
	volatile int64_t x271 = INT64_MIN;
	static uint16_t x272 = 588U;
	volatile int32_t t57 = 5;

	t57 = ((x269<(x270==x271))-x272);

	if (t57 != -587) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x273 = 15235114U;
	uint64_t x274 = UINT64_MAX;
	uint32_t x275 = 52917542U;
	volatile uint8_t x276 = 1U;
	volatile int32_t t58 = -4;

	t58 = ((x273<(x274==x275))-x276);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = INT64_MAX;
	uint64_t x284 = UINT64_MAX;

	t59 = ((x281<(x282==x283))-x284);

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x286 = -1LL;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t60 = 13;

	t60 = ((x285<(x286==x287))-x288);

	if (t60 != -254) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x289 = -1;
	int64_t x291 = -65850781LL;
	volatile int16_t x292 = INT16_MAX;
	int32_t t61 = 196055110;

	t61 = ((x289<(x290==x291))-x292);

	if (t61 != -32766) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x293 = 35;
	static int16_t x294 = INT16_MIN;
	uint64_t x295 = 40LLU;
	volatile int32_t t62 = 48296;

	t62 = ((x293<(x294==x295))-x296);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = -5183887;
	static int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MAX;

	t63 = ((x297<(x298==x299))-x300);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;

	t64 = ((x301<(x302==x303))-x304);

	if (t64 != 129) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x306 = UINT16_MAX;
	static int8_t x307 = INT8_MIN;
	uint32_t x308 = 14764U;
	volatile uint32_t t65 = 2248U;

	t65 = ((x305<(x306==x307))-x308);

	if (t65 != 4294952533U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x309 = 39362503144487LLU;
	volatile int16_t x310 = INT16_MIN;
	int8_t x311 = -1;
	uint8_t x312 = 107U;
	volatile int32_t t66 = 12;

	t66 = ((x309<(x310==x311))-x312);

	if (t66 != -107) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = 1;
	int8_t x315 = -3;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t67 = -624098;

	t67 = ((x313<(x314==x315))-x316);

	if (t67 != -65535) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x317 = 32U;
	int64_t x318 = 12563068LL;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = UINT8_MAX;
	static int32_t t68 = 7101936;

	t68 = ((x317<(x318==x319))-x320);

	if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x325 = UINT32_MAX;
	uint32_t x327 = 365379763U;
	volatile int32_t x328 = INT32_MAX;
	int32_t t69 = -1;

	t69 = ((x325<(x326==x327))-x328);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = -421807;
	static int32_t x330 = -9153323;
	uint8_t x331 = 32U;
	int32_t x332 = -1;
	volatile int32_t t70 = 4350419;

	t70 = ((x329<(x330==x331))-x332);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = 94U;
	int64_t x334 = 1326333LL;
	int64_t x335 = -1LL;
	static uint32_t x336 = 91U;

	t71 = ((x333<(x334==x335))-x336);

	if (t71 != 4294967205U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x338 = 11480495U;
	uint16_t x339 = 3545U;
	volatile int8_t x340 = INT8_MAX;
	static volatile int32_t t72 = 1;

	t72 = ((x337<(x338==x339))-x340);

	if (t72 != -126) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	int64_t x344 = -4111179265406847602LL;
	int64_t t73 = 2628303006627684834LL;

	t73 = ((x341<(x342==x343))-x344);

	if (t73 != 4111179265406847603LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x349 = -18;
	int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MAX;
	int64_t x352 = -1LL;
	volatile int64_t t74 = -16915LL;

	t74 = ((x349<(x350==x351))-x352);

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x354 = INT8_MAX;
	volatile int16_t x356 = -23;

	t75 = ((x353<(x354==x355))-x356);

	if (t75 != 24) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x358 = UINT8_MAX;
	static int32_t x360 = -53936;

	t76 = ((x357<(x358==x359))-x360);

	if (t76 != 53937) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = 120U;
	static int16_t x364 = 5745;
	static int32_t t77 = -75308491;

	t77 = ((x361<(x362==x363))-x364);

	if (t77 != -5744) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = -4;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = -1;
	volatile int32_t t78 = 10838;

	t78 = ((x365<(x366==x367))-x368);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = -1;
	int8_t x370 = 23;
	int8_t x371 = 10;
	int8_t x372 = INT8_MAX;
	volatile int32_t t79 = -32413655;

	t79 = ((x369<(x370==x371))-x372);

	if (t79 != -126) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = -1;
	uint8_t x378 = 86U;
	int16_t x379 = INT16_MIN;
	volatile uint32_t x380 = 1U;
	uint32_t t80 = 5U;

	t80 = ((x377<(x378==x379))-x380);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x382 = 25U;
	volatile int32_t x383 = INT32_MAX;
	int16_t x384 = INT16_MIN;

	t81 = ((x381<(x382==x383))-x384);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x385 = INT64_MIN;
	static int32_t x386 = INT32_MAX;
	uint64_t x387 = 91181071057469929LLU;
	volatile int64_t t82 = 273825074550LL;

	t82 = ((x385<(x386==x387))-x388);

	if (t82 != -6709LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x389 = INT16_MIN;
	int16_t x392 = -322;

	t83 = ((x389<(x390==x391))-x392);

	if (t83 != 323) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = -1;

	t84 = ((x393<(x394==x395))-x396);

	if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = -13472388194947150LL;
	uint32_t x399 = 851201514U;
	int8_t x400 = INT8_MIN;
	static int32_t t85 = -46;

	t85 = ((x397<(x398==x399))-x400);

	if (t85 != 129) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = 7;
	uint32_t x406 = 431999U;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = 87;

	t86 = ((x405<(x406==x407))-x408);

	if (t86 != -87) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x409 = 2U;
	int8_t x410 = 1;
	int16_t x411 = 71;
	volatile int64_t x412 = 90171332589LL;
	volatile int64_t t87 = 21216826737LL;

	t87 = ((x409<(x410==x411))-x412);

	if (t87 != -90171332589LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x414 = 0U;
	static int32_t t88 = 14823766;

	t88 = ((x413<(x414==x415))-x416);

	if (t88 != -254) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = INT8_MIN;
	static int64_t x418 = -1LL;
	uint16_t x419 = 1U;
	static int16_t x420 = -1;
	volatile int32_t t89 = 1;

	t89 = ((x417<(x418==x419))-x420);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x426 = 123201900251163LL;
	int32_t x427 = INT32_MAX;
	int16_t x428 = INT16_MIN;
	volatile int32_t t90 = -244;

	t90 = ((x425<(x426==x427))-x428);

	if (t90 != 32769) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = -1;
	static uint64_t x431 = UINT64_MAX;
	static int32_t t91 = 390103511;

	t91 = ((x429<(x430==x431))-x432);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = 41U;
	uint8_t x434 = 7U;
	volatile int16_t x435 = -1;
	int8_t x436 = 1;

	t92 = ((x433<(x434==x435))-x436);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = -1;
	int16_t x440 = -1;
	static volatile int32_t t93 = -238443884;

	t93 = ((x437<(x438==x439))-x440);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = -6117;
	int8_t x446 = 25;
	int16_t x447 = 1;
	int8_t x448 = -1;
	volatile int32_t t94 = -69140;

	t94 = ((x445<(x446==x447))-x448);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = INT8_MAX;
	static int64_t x450 = -36LL;
	static volatile int8_t x451 = -1;
	volatile uint32_t x452 = 370745U;
	uint32_t t95 = 979261U;

	t95 = ((x449<(x450==x451))-x452);

	if (t95 != 4294596551U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x453 = 0LL;
	int16_t x454 = -11;
	int8_t x455 = INT8_MIN;
	static volatile int8_t x456 = -4;
	volatile int32_t t96 = 14693542;

	t96 = ((x453<(x454==x455))-x456);

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x457 = INT32_MIN;
	uint16_t x460 = 961U;
	static volatile int32_t t97 = -926500;

	t97 = ((x457<(x458==x459))-x460);

	if (t97 != -960) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = 8;
	static volatile uint8_t x462 = 3U;
	uint32_t x463 = UINT32_MAX;
	volatile uint16_t x464 = 1601U;
	int32_t t98 = -1125;

	t98 = ((x461<(x462==x463))-x464);

	if (t98 != -1601) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	static int64_t x466 = -1LL;
	int16_t x467 = -1;
	volatile uint8_t x468 = 1U;
	volatile int32_t t99 = -531225;

	t99 = ((x465<(x466==x467))-x468);

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

