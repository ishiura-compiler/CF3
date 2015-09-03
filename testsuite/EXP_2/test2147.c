#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = 1890141;
uint16_t x22 = UINT16_MAX;
int64_t x24 = -22553LL;
int64_t t3 = -13112073LL;
uint64_t t4 = 9LLU;
uint8_t x40 = UINT8_MAX;
volatile int32_t t7 = 5;
int32_t x41 = INT32_MAX;
int64_t x43 = 1977LL;
uint32_t t8 = 109496515U;
uint16_t x50 = 1308U;
volatile uint32_t x52 = 3621U;
int8_t x56 = INT8_MIN;
int64_t x62 = INT64_MIN;
static int16_t x78 = -246;
int64_t x82 = INT64_MIN;
int16_t x86 = INT16_MIN;
static int32_t x87 = INT32_MAX;
static int64_t x88 = -1LL;
uint64_t x90 = UINT64_MAX;
static int8_t x91 = INT8_MIN;
int32_t t17 = -35111;
volatile int8_t x105 = 1;
static volatile int32_t t19 = 83434106;
int8_t x109 = INT8_MAX;
static uint16_t x114 = 21876U;
int64_t x118 = INT64_MIN;
volatile int16_t x119 = 26;
uint64_t x120 = 45977059353441244LLU;
volatile int16_t x121 = INT16_MIN;
static int16_t x123 = -873;
static uint64_t x131 = 2552956938LLU;
int16_t x137 = INT16_MIN;
static int16_t x151 = -19;
static int64_t t30 = 5499951287050LL;
volatile int64_t x153 = -1LL;
uint16_t x154 = 2U;
int64_t x157 = 4294151097LL;
uint8_t x165 = 54U;
static int64_t x178 = INT64_MIN;
uint8_t x180 = 4U;
static int8_t x182 = -1;
uint32_t x187 = 5516794U;
uint32_t x188 = 16112U;
volatile int64_t t43 = 12079LL;
static volatile int32_t x211 = 567;
int64_t x213 = 4455131338LL;
int64_t x217 = 7550557LL;
uint64_t x252 = 5545194388398105403LLU;
static volatile uint64_t x257 = UINT64_MAX;
int32_t t54 = 42;
int16_t x262 = 1217;
uint16_t x263 = UINT16_MAX;
int8_t x267 = INT8_MIN;
static uint64_t x270 = 11877LLU;
uint32_t x272 = 49U;
volatile uint32_t t57 = 588016U;
volatile uint16_t x273 = UINT16_MAX;
volatile int16_t x278 = 10677;
int8_t x280 = 1;
int16_t x281 = 0;
int8_t x282 = INT8_MIN;
static volatile int32_t x287 = INT32_MAX;
static uint16_t x291 = UINT16_MAX;
volatile int8_t x297 = -9;
int32_t x301 = INT32_MIN;
volatile int32_t x302 = INT32_MIN;
static int16_t x305 = INT16_MAX;
uint8_t x311 = 6U;
uint64_t x317 = 23412LLU;
int64_t t69 = -50478LL;
int64_t x325 = INT64_MAX;
volatile uint64_t x331 = UINT64_MAX;
int64_t x341 = INT64_MAX;
uint32_t x343 = 85036U;
int64_t x344 = -46281429354LL;
uint64_t x358 = UINT64_MAX;
int8_t x360 = -13;
static volatile int32_t t76 = 161782;
static int8_t x362 = INT8_MIN;
static int8_t x364 = 19;
static volatile int32_t t77 = -560246;
static int64_t t78 = 97732260921LL;
int64_t x369 = INT64_MIN;
int64_t x371 = INT64_MIN;
int8_t x372 = INT8_MIN;
static volatile uint64_t t80 = 267836431LLU;
int8_t x379 = INT8_MIN;
int64_t x387 = INT64_MIN;
int16_t x392 = -3247;
static int16_t x399 = -1;
static int32_t x412 = 8;
int64_t x417 = INT64_MAX;
uint32_t x436 = UINT32_MAX;
uint64_t x450 = UINT64_MAX;
int16_t x451 = INT16_MIN;
int16_t x454 = -1;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint32_t x2 = 85996307U;
	static uint64_t x3 = 10LLU;
	int16_t x4 = -1;
	volatile int32_t t0 = -735;

	t0 = ((x1<=(x2^x3))-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 5LL;
	volatile uint16_t x6 = UINT16_MAX;
	volatile int32_t x7 = 125460931;
	volatile uint16_t x8 = 6947U;

	t1 = ((x5<=(x6^x7))-x8);

	if (t1 != -6946) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int16_t x14 = -1;
	static int32_t x15 = 14915;
	int8_t x16 = 0;
	volatile int32_t t2 = -7345189;

	t2 = ((x13<=(x14^x15))-x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x23 = -20632143122LL;

	t3 = ((x21<=(x22^x23))-x24);

	if (t3 != 22553LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	static int32_t x26 = INT32_MIN;
	volatile int32_t x27 = 3;
	uint64_t x28 = 338LLU;

	t4 = ((x25<=(x26^x27))-x28);

	if (t4 != 18446744073709551278LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	static volatile int64_t x31 = INT64_MIN;
	static int64_t x32 = INT64_MAX;
	int64_t t5 = -34870569661721973LL;

	t5 = ((x29<=(x30^x31))-x32);

	if (t5 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = -2;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MAX;
	int32_t t6 = -10148;

	t6 = ((x33<=(x34^x35))-x36);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 1U;
	volatile int64_t x38 = -1LL;
	int16_t x39 = 54;

	t7 = ((x37<=(x38^x39))-x40);

	if (t7 != -255) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = -1;
	uint32_t x44 = 37771169U;

	t8 = ((x41<=(x42^x43))-x44);

	if (t8 != 4257196127U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = INT16_MIN;
	static int8_t x47 = -53;
	int16_t x48 = INT16_MAX;
	volatile int32_t t9 = 47568;

	t9 = ((x45<=(x46^x47))-x48);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	uint8_t x51 = 1U;
	volatile uint32_t t10 = 67050499U;

	t10 = ((x49<=(x50^x51))-x52);

	if (t10 != 4294963676U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MIN;
	volatile int32_t t11 = 19;

	t11 = ((x53<=(x54^x55))-x56);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = 775;
	volatile int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = 7519LLU;

	t12 = ((x61<=(x62^x63))-x64);

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x77 = -7;
	uint64_t x79 = 7899674466769LLU;
	int8_t x80 = 49;
	int32_t t13 = 771263435;

	t13 = ((x77<=(x78^x79))-x80);

	if (t13 != -49) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -1101546901006144LL;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MAX;
	volatile int64_t t14 = 804963LL;

	t14 = ((x81<=(x82^x83))-x84);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x85 = -1LL;
	volatile int64_t t15 = -1190155792885204LL;

	t15 = ((x85<=(x86^x87))-x88);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -1758;
	int16_t x92 = INT16_MIN;
	volatile int32_t t16 = 57794535;

	t16 = ((x89<=(x90^x91))-x92);

	if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1LL;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MAX;

	t17 = ((x97<=(x98^x99))-x100);

	if (t17 != -126) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	volatile uint64_t x102 = 0LLU;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = 13382U;
	int32_t t18 = 172174;

	t18 = ((x101<=(x102^x103))-x104);

	if (t18 != -13381) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x106 = INT8_MAX;
	int64_t x107 = 5LL;
	uint16_t x108 = 3070U;

	t19 = ((x105<=(x106^x107))-x108);

	if (t19 != -3069) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x110 = UINT8_MAX;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	int32_t t20 = 4292;

	t20 = ((x109<=(x110^x111))-x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x113 = 1U;
	uint8_t x115 = 0U;
	int32_t x116 = -1;
	int32_t t21 = -518635;

	t21 = ((x113<=(x114^x115))-x116);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x117 = INT16_MIN;
	static volatile uint64_t t22 = 3649342682074459LLU;

	t22 = ((x117<=(x118^x119))-x120);

	if (t22 != 18400767014356110372LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x122 = 46U;
	int32_t x124 = -466205;
	volatile int32_t t23 = -2;

	t23 = ((x121<=(x122^x123))-x124);

	if (t23 != 466206) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x125 = 23386U;
	static int64_t x126 = INT64_MAX;
	static int8_t x127 = -1;
	int64_t x128 = -1LL;
	int64_t t24 = -4218427627522849LL;

	t24 = ((x125<=(x126^x127))-x128);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	static uint64_t x132 = 304LLU;
	volatile uint64_t t25 = 5242881503683191548LLU;

	t25 = ((x129<=(x130^x131))-x132);

	if (t25 != 18446744073709551312LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	static volatile uint16_t x134 = 4U;
	int64_t x135 = 138061395021LL;
	static volatile int16_t x136 = -1;
	int32_t t26 = 3214976;

	t26 = ((x133<=(x134^x135))-x136);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x138 = UINT32_MAX;
	static int8_t x139 = INT8_MIN;
	int32_t x140 = -220;
	int32_t t27 = -169216;

	t27 = ((x137<=(x138^x139))-x140);

	if (t27 != 220) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x141 = -1;
	volatile int16_t x142 = INT16_MAX;
	static int64_t x143 = -1LL;
	uint8_t x144 = 3U;
	int32_t t28 = -65225;

	t28 = ((x141<=(x142^x143))-x144);

	if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = 54;
	int32_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int64_t x148 = -18975856226581592LL;
	static int64_t t29 = -113501LL;

	t29 = ((x145<=(x146^x147))-x148);

	if (t29 != 18975856226581593LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x149 = INT64_MIN;
	int8_t x150 = -1;
	int64_t x152 = INT64_MAX;

	t30 = ((x149<=(x150^x151))-x152);

	if (t30 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x155 = 12U;
	static uint16_t x156 = 3937U;
	static volatile int32_t t31 = -188272;

	t31 = ((x153<=(x154^x155))-x156);

	if (t31 != -3936) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x158 = 3542;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = -1;
	int32_t t32 = 16558;

	t32 = ((x157<=(x158^x159))-x160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 2388U;
	int32_t t33 = -62726069;

	t33 = ((x165<=(x166^x167))-x168);

	if (t33 != -2387) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = -1LL;
	volatile int8_t x170 = -2;
	int32_t x171 = -1;
	int32_t x172 = -1;
	volatile int32_t t34 = 3;

	t34 = ((x169<=(x170^x171))-x172);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 488454398807373971LLU;
	static uint8_t x174 = 56U;
	uint32_t x175 = UINT32_MAX;
	static int64_t x176 = 12LL;
	volatile int64_t t35 = -15900LL;

	t35 = ((x173<=(x174^x175))-x176);

	if (t35 != -12LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = UINT64_MAX;
	static int16_t x179 = -45;
	volatile int32_t t36 = -4;

	t36 = ((x177<=(x178^x179))-x180);

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x181 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	volatile int64_t x184 = 1149118880779455LL;
	volatile int64_t t37 = 2LL;

	t37 = ((x181<=(x182^x183))-x184);

	if (t37 != -1149118880779454LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = UINT32_MAX;
	static volatile int8_t x186 = INT8_MAX;
	volatile uint32_t t38 = 120673852U;

	t38 = ((x185<=(x186^x187))-x188);

	if (t38 != 4294951184U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 38548733582174214LLU;
	int64_t x190 = INT64_MIN;
	int8_t x191 = 1;
	int16_t x192 = -6906;
	static volatile int32_t t39 = 24724;

	t39 = ((x189<=(x190^x191))-x192);

	if (t39 != 6907) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x193 = -26181147;
	static int8_t x194 = -41;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MAX;
	int32_t t40 = 1593582;

	t40 = ((x193<=(x194^x195))-x196);

	if (t40 != -126) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MAX;
	int16_t x199 = INT16_MIN;
	int32_t x200 = 250;
	volatile int32_t t41 = 447068635;

	t41 = ((x197<=(x198^x199))-x200);

	if (t41 != -249) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x201 = 3363U;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int64_t x204 = 713573LL;
	volatile int64_t t42 = -1840105309984390671LL;

	t42 = ((x201<=(x202^x203))-x204);

	if (t42 != -713572LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = -337;
	volatile int16_t x206 = INT16_MIN;
	static uint32_t x207 = 1979U;
	static int64_t x208 = -1LL;

	t43 = ((x205<=(x206^x207))-x208);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	static int8_t x212 = -2;
	int32_t t44 = 1;

	t44 = ((x209<=(x210^x211))-x212);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x214 = 16694846LL;
	volatile uint16_t x215 = UINT16_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t45 = 44203;

	t45 = ((x213<=(x214^x215))-x216);

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	uint16_t x220 = 238U;
	int32_t t46 = -280;

	t46 = ((x217<=(x218^x219))-x220);

	if (t46 != -238) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = 55416U;
	int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MIN;
	int32_t t47 = -8851383;

	t47 = ((x221<=(x222^x223))-x224);

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = INT8_MIN;
	volatile uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MIN;
	volatile uint32_t x232 = 1850512888U;
	volatile uint32_t t48 = 95173U;

	t48 = ((x229<=(x230^x231))-x232);

	if (t48 != 2444454408U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MAX;
	uint8_t x239 = UINT8_MAX;
	uint8_t x240 = 11U;
	int32_t t49 = 21;

	t49 = ((x237<=(x238^x239))-x240);

	if (t49 != -11) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 75U;
	uint64_t x244 = UINT64_MAX;
	uint64_t t50 = 41929837417875LLU;

	t50 = ((x241<=(x242^x243))-x244);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x245 = -12;
	uint16_t x246 = 195U;
	int64_t x247 = -1LL;
	int64_t x248 = -25942000915608859LL;
	int64_t t51 = -283075LL;

	t51 = ((x245<=(x246^x247))-x248);

	if (t51 != 25942000915608859LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x249 = INT32_MIN;
	int16_t x250 = -12;
	uint32_t x251 = UINT32_MAX;
	volatile uint64_t t52 = 103950477047LLU;

	t52 = ((x249<=(x250^x251))-x252);

	if (t52 != 12901549685311446213LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = 511700LLU;
	int8_t x254 = -1;
	static int16_t x255 = 428;
	int32_t x256 = -19;
	volatile int32_t t53 = 213;

	t53 = ((x253<=(x254^x255))-x256);

	if (t53 != 20) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x258 = 0LL;
	uint64_t x259 = 1647520464636091901LLU;
	volatile int16_t x260 = -1;

	t54 = ((x257<=(x258^x259))-x260);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = -1;
	int16_t x264 = -1;
	volatile int32_t t55 = 2214435;

	t55 = ((x261<=(x262^x263))-x264);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x268 = -13567749;
	volatile int32_t t56 = -36721264;

	t56 = ((x265<=(x266^x267))-x268);

	if (t56 != 13567749) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = UINT16_MAX;
	uint8_t x271 = 1U;

	t57 = ((x269<=(x270^x271))-x272);

	if (t57 != 4294967247U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x274 = INT64_MIN;
	volatile uint64_t x275 = 1366060682166284LLU;
	static int32_t x276 = 0;
	volatile int32_t t58 = 11;

	t58 = ((x273<=(x274^x275))-x276);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x277 = INT16_MAX;
	int64_t x279 = INT64_MIN;
	int32_t t59 = -6;

	t59 = ((x277<=(x278^x279))-x280);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x283 = 92;
	static volatile uint32_t x284 = 14462625U;
	uint32_t t60 = 0U;

	t60 = ((x281<=(x282^x283))-x284);

	if (t60 != 4280504671U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x285 = -1;
	volatile int64_t x286 = INT64_MAX;
	int16_t x288 = INT16_MAX;
	int32_t t61 = -37788;

	t61 = ((x285<=(x286^x287))-x288);

	if (t61 != -32766) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = -25;
	int8_t x290 = INT8_MIN;
	int16_t x292 = -476;
	static volatile int32_t t62 = 13;

	t62 = ((x289<=(x290^x291))-x292);

	if (t62 != 476) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = -10;
	static int8_t x294 = -1;
	int8_t x295 = -1;
	volatile uint16_t x296 = UINT16_MAX;
	int32_t t63 = -34995;

	t63 = ((x293<=(x294^x295))-x296);

	if (t63 != -65534) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x298 = 49U;
	volatile int16_t x299 = INT16_MIN;
	volatile int64_t x300 = -1LL;
	volatile int64_t t64 = 3768833LL;

	t64 = ((x297<=(x298^x299))-x300);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x303 = -1;
	int16_t x304 = -15918;
	volatile int32_t t65 = -474;

	t65 = ((x301<=(x302^x303))-x304);

	if (t65 != 15919) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x306 = 5235283182625395453LLU;
	uint64_t x307 = 915LLU;
	volatile int8_t x308 = INT8_MIN;
	int32_t t66 = -42103537;

	t66 = ((x305<=(x306^x307))-x308);

	if (t66 != 129) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x309 = 120776351U;
	volatile int16_t x310 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	int32_t t67 = -106294531;

	t67 = ((x309<=(x310^x311))-x312);

	if (t67 != 129) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x313 = -1;
	static int32_t x314 = -393;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = 513102U;
	static uint32_t t68 = 29906U;

	t68 = ((x313<=(x314^x315))-x316);

	if (t68 != 4294454195U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x318 = 57U;
	int16_t x319 = INT16_MIN;
	volatile int64_t x320 = -1LL;

	t69 = ((x317<=(x318^x319))-x320);

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x326 = 39U;
	int8_t x327 = -1;
	volatile uint32_t x328 = UINT32_MAX;
	static uint32_t t70 = 30664U;

	t70 = ((x325<=(x326^x327))-x328);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = -1LL;
	uint32_t x330 = 1858339360U;
	int64_t x332 = INT64_MAX;
	int64_t t71 = -30909893LL;

	t71 = ((x329<=(x330^x331))-x332);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	int64_t x338 = 213953423LL;
	int64_t x339 = -1LL;
	int8_t x340 = 1;
	int32_t t72 = 522;

	t72 = ((x337<=(x338^x339))-x340);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x342 = -1LL;
	int64_t t73 = 4694LL;

	t73 = ((x341<=(x342^x343))-x344);

	if (t73 != 46281429354LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x349 = 165762U;
	int32_t x350 = INT32_MIN;
	uint16_t x351 = 5U;
	int64_t x352 = 1569531703998LL;
	static volatile int64_t t74 = -531472054843470847LL;

	t74 = ((x349<=(x350^x351))-x352);

	if (t74 != -1569531703997LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = 57778785200648LLU;
	volatile int64_t x354 = INT64_MIN;
	static int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t75 = 48;

	t75 = ((x353<=(x354^x355))-x356);

	if (t75 != 32769) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x357 = UINT64_MAX;
	uint64_t x359 = 7834076871471LLU;

	t76 = ((x357<=(x358^x359))-x360);

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = INT8_MAX;
	volatile int32_t x363 = 412;

	t77 = ((x361<=(x362^x363))-x364);

	if (t77 != -19) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = 47U;
	int64_t x368 = -12LL;

	t78 = ((x365<=(x366^x367))-x368);

	if (t78 != 12LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x370 = 88U;
	int32_t t79 = 0;

	t79 = ((x369<=(x370^x371))-x372);

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	volatile int64_t x375 = INT64_MIN;
	uint64_t x376 = 11946487755LLU;

	t80 = ((x373<=(x374^x375))-x376);

	if (t80 != 18446744061763063861LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	int32_t x380 = 104;
	int32_t t81 = 1;

	t81 = ((x377<=(x378^x379))-x380);

	if (t81 != -103) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = -181264;
	uint64_t x383 = 34087LLU;
	int64_t x384 = -1LL;
	volatile int64_t t82 = 1LL;

	t82 = ((x381<=(x382^x383))-x384);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = 845160356U;
	int8_t x386 = -4;
	int8_t x388 = -8;
	int32_t t83 = 88;

	t83 = ((x385<=(x386^x387))-x388);

	if (t83 != 9) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x389 = UINT8_MAX;
	int32_t x390 = -1;
	int64_t x391 = INT64_MAX;
	static int32_t t84 = -201;

	t84 = ((x389<=(x390^x391))-x392);

	if (t84 != 3247) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t85 = -72426;

	t85 = ((x393<=(x394^x395))-x396);

	if (t85 != -254) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x397 = 793427264U;
	uint16_t x398 = UINT16_MAX;
	int8_t x400 = 29;
	int32_t t86 = -10763;

	t86 = ((x397<=(x398^x399))-x400);

	if (t86 != -28) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = INT8_MIN;
	int16_t x402 = 4;
	uint32_t x403 = 397U;
	uint8_t x404 = 6U;
	static volatile int32_t t87 = 851168;

	t87 = ((x401<=(x402^x403))-x404);

	if (t87 != -6) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = -113278;
	static int16_t x406 = -1;
	int8_t x407 = 12;
	int16_t x408 = 4;
	int32_t t88 = 6981;

	t88 = ((x405<=(x406^x407))-x408);

	if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MAX;
	uint64_t x411 = 660673598LLU;
	int32_t t89 = -14130533;

	t89 = ((x409<=(x410^x411))-x412);

	if (t89 != -8) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = -15670;
	uint64_t x414 = 10235LLU;
	uint8_t x415 = UINT8_MAX;
	uint8_t x416 = 6U;
	volatile int32_t t90 = 47246355;

	t90 = ((x413<=(x414^x415))-x416);

	if (t90 != -6) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x418 = INT64_MIN;
	uint64_t x419 = 14383455258847LLU;
	int16_t x420 = INT16_MAX;
	int32_t t91 = -123;

	t91 = ((x417<=(x418^x419))-x420);

	if (t91 != -32766) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MIN;
	uint16_t x423 = 3U;
	uint32_t x424 = UINT32_MAX;
	volatile uint32_t t92 = 21966621U;

	t92 = ((x421<=(x422^x423))-x424);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x425 = -17;
	int32_t x426 = INT32_MAX;
	uint8_t x427 = 1U;
	int32_t x428 = INT32_MAX;
	static int32_t t93 = 12761579;

	t93 = ((x425<=(x426^x427))-x428);

	if (t93 != -2147483646) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x433 = -1LL;
	static int8_t x434 = INT8_MAX;
	static uint32_t x435 = UINT32_MAX;
	uint32_t t94 = 1U;

	t94 = ((x433<=(x434^x435))-x436);

	if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x441 = INT32_MIN;
	uint16_t x442 = 104U;
	int8_t x443 = 0;
	uint32_t x444 = 3U;
	static uint32_t t95 = 5447478U;

	t95 = ((x441<=(x442^x443))-x444);

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x445 = 213U;
	volatile int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MAX;
	int64_t x448 = -1LL;
	volatile int64_t t96 = -26598796030LL;

	t96 = ((x445<=(x446^x447))-x448);

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x449 = UINT32_MAX;
	static uint16_t x452 = 1U;
	volatile int32_t t97 = 140842;

	t97 = ((x449<=(x450^x451))-x452);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = 3341;
	volatile int16_t x455 = -1;
	int8_t x456 = INT8_MIN;
	int32_t t98 = -51388398;

	t98 = ((x453<=(x454^x455))-x456);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MIN;
	volatile int32_t x459 = INT32_MIN;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t99 = -12;

	t99 = ((x457<=(x458^x459))-x460);

	if (t99 != -65534) { NG(); } else { ; }
	
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

