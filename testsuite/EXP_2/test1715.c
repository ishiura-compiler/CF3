#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 5647U;
int16_t x3 = INT16_MIN;
int16_t x4 = INT16_MIN;
static int64_t t1 = 30451394154054317LL;
int64_t x9 = 4533364267LL;
int64_t t3 = 755060539630367439LL;
uint32_t x17 = 7U;
volatile int32_t t5 = -3191103;
static int32_t x31 = -761531468;
volatile int32_t x35 = 1882930;
volatile uint16_t x57 = 922U;
uint32_t t14 = UINT32_MAX;
static uint8_t x61 = 18U;
static volatile int64_t t15 = -1757640128211904275LL;
int8_t x65 = INT8_MIN;
int16_t x67 = 2;
static volatile uint64_t t17 = 61LLU;
int16_t x86 = INT16_MIN;
uint32_t x87 = 52303993U;
static volatile uint64_t t20 = 965576291983098LLU;
int16_t x94 = INT16_MIN;
uint32_t x97 = 192U;
volatile uint16_t x101 = 12706U;
int16_t x103 = 1;
volatile int64_t t23 = -46727656428438LL;
int16_t x108 = INT16_MIN;
volatile uint8_t x113 = UINT8_MAX;
uint32_t x117 = 12U;
static int16_t x128 = -1;
uint64_t t29 = UINT64_MAX;
static uint16_t x136 = 112U;
uint32_t t31 = 257U;
uint64_t x147 = 43LLU;
volatile int8_t x148 = INT8_MIN;
uint8_t x150 = UINT8_MAX;
int8_t x157 = -1;
int32_t t36 = 18307671;
int32_t x166 = 1037;
static int32_t x167 = 1041449;
int32_t x168 = INT32_MIN;
static int16_t x174 = INT16_MAX;
int16_t x176 = -1;
volatile uint32_t x179 = 2449162U;
uint32_t t39 = 102408U;
static uint8_t x183 = 1U;
static uint64_t x185 = 193722285684980534LLU;
volatile int64_t x190 = -1LL;
static uint32_t x192 = 691736U;
volatile int64_t x194 = 3613960021262606LL;
static int64_t t44 = 799LL;
uint16_t x202 = 2U;
volatile int16_t x211 = -1;
volatile int16_t x212 = -1485;
static volatile int32_t t47 = -3923;
static volatile int32_t x216 = -1;
int64_t x225 = INT64_MAX;
int32_t x231 = -1;
volatile int32_t t53 = -126128;
volatile uint32_t t55 = UINT32_MAX;
static uint8_t x268 = 21U;
int32_t x278 = -1;
static int64_t t62 = -568LL;
int32_t x282 = INT32_MAX;
static uint32_t x294 = UINT32_MAX;
int32_t t65 = -1222;
uint32_t x306 = UINT32_MAX;
int8_t x308 = INT8_MAX;
int16_t x310 = -1634;
int32_t x317 = -1;
int32_t x318 = INT32_MIN;
volatile uint16_t x319 = 31879U;
volatile int32_t t69 = -15546;
static int32_t x322 = INT32_MAX;
int16_t x323 = -30;
static uint16_t x324 = UINT16_MAX;
volatile int64_t x326 = INT64_MIN;
int16_t x328 = INT16_MAX;
int8_t x333 = 0;
static int8_t x338 = INT8_MIN;
uint32_t x352 = 23U;
uint64_t x355 = UINT64_MAX;
int32_t x360 = INT32_MAX;
volatile uint16_t x362 = 5285U;
uint8_t x363 = 114U;
volatile int16_t x369 = INT16_MIN;
int32_t x372 = INT32_MAX;
static int32_t x380 = 196396;
volatile int16_t x382 = INT16_MIN;
int16_t x397 = INT16_MIN;
int32_t x398 = -86266721;
volatile uint32_t t87 = 159242946U;
uint8_t x406 = 0U;
static uint8_t x409 = UINT8_MAX;
static uint16_t x411 = 11U;
int64_t x419 = INT64_MIN;
uint8_t x423 = 72U;
int8_t x426 = -1;
static volatile int32_t t94 = 7;
volatile uint64_t x440 = 391347078990414LLU;
uint64_t x443 = 56649120401347LLU;
uint16_t x448 = UINT16_MAX;


void f0(void) {
	uint32_t x1 = 372298285U;
	static volatile uint32_t t0 = 104368U;

	t0 = ((x1-(x2&x3))|x4);

	if (t0 != 4294955565U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -24;
	uint32_t x6 = 348055670U;
	int64_t x7 = 104435LL;
	int16_t x8 = -1;

	t1 = ((x5-(x6&x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -1LL;
	volatile int64_t t2 = -369817506LL;

	t2 = ((x9-(x10&x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	int64_t x14 = -14960LL;
	int8_t x15 = INT8_MIN;
	int8_t x16 = 3;

	t3 = ((x13-(x14&x15))|x16);

	if (t3 != 14979LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -15;
	uint64_t x19 = 0LLU;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = ((x17-(x18&x19))|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	int16_t x22 = -12041;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = -1;

	t5 = ((x21-(x22&x23))|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 44U;
	uint64_t x26 = 2LLU;
	static uint32_t x27 = 1U;
	uint64_t x28 = 38436517268LLU;
	volatile uint64_t t6 = 21069LLU;

	t6 = ((x25-(x26&x27))|x28);

	if (t6 != 38436517308LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	volatile uint64_t x30 = 0LLU;
	volatile int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29-(x30&x31))|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -2122;
	static uint64_t x34 = UINT64_MAX;
	int64_t x36 = INT64_MIN;
	static uint64_t t8 = 7292657207040317654LLU;

	t8 = ((x33-(x34&x35))|x36);

	if (t8 != 18446744073707666564LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 2322169476403329LLU;
	int32_t x38 = INT32_MIN;
	int16_t x39 = -46;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 18619935951LLU;

	t9 = ((x37-(x38&x39))|x40);

	if (t9 != 9225694208478662785LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 22U;
	static int16_t x42 = INT16_MIN;
	volatile int8_t x43 = INT8_MAX;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -605;

	t10 = ((x41-(x42&x43))|x44);

	if (t10 != -106) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int64_t x46 = -31914LL;
	uint8_t x47 = UINT8_MAX;
	static int64_t x48 = -275866004296LL;
	static volatile int64_t t11 = 524228644142749LL;

	t11 = ((x45-(x46&x47))|x48);

	if (t11 != -70LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	volatile int8_t x51 = INT8_MIN;
	int16_t x52 = -2;
	volatile int64_t t12 = -2289777LL;

	t12 = ((x49-(x50&x51))|x52);

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -500064937;
	static uint64_t x54 = UINT64_MAX;
	int32_t x55 = INT32_MIN;
	int32_t x56 = -1;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x53-(x54&x55))|x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x58 = 4U;
	int8_t x59 = 5;
	int8_t x60 = -1;

	t14 = ((x57-(x58&x59))|x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = -61508LL;
	uint8_t x64 = UINT8_MAX;

	t15 = ((x61-(x62&x63))|x64);

	if (t15 != -4294905601LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -504;
	static volatile uint32_t x68 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x65-(x66&x67))|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 269480569266LLU;
	static volatile int64_t x70 = -1LL;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;

	t17 = ((x69-(x70&x71))|x72);

	if (t17 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MAX;
	int8_t x84 = 8;
	volatile int32_t t18 = -1971325;

	t18 = ((x81-(x82&x83))|x84);

	if (t18 != -2147483640) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 57022758LLU;
	int8_t x88 = -1;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x85-(x86&x87))|x88);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 17U;
	int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 23297LLU;

	t20 = ((x89-(x90&x91))|x92);

	if (t20 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint32_t x95 = 2U;
	static volatile uint64_t x96 = 17823973481564LLU;
	uint64_t t21 = 5804213070886407459LLU;

	t21 = ((x93-(x94&x95))|x96);

	if (t21 != 17824114278399LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -1LL;
	static volatile uint16_t x99 = 2U;
	int32_t x100 = INT32_MIN;
	int64_t t22 = 211122LL;

	t22 = ((x97-(x98&x99))|x100);

	if (t22 != -2147483458LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x102 = INT64_MIN;
	static volatile int32_t x104 = INT32_MIN;

	t23 = ((x101-(x102&x103))|x104);

	if (t23 != -2147470942LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	static uint16_t x106 = 1366U;
	uint8_t x107 = 49U;
	static uint32_t t24 = 5273632U;

	t24 = ((x105-(x106&x107))|x108);

	if (t24 != 4294967279U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MAX;
	int32_t x110 = -13301;
	static int16_t x111 = 1;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t25 = INT32_MAX;

	t25 = ((x109-(x110&x111))|x112);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x114 = -1664LL;
	uint64_t x115 = 0LLU;
	static uint16_t x116 = 938U;
	volatile uint64_t t26 = 32383LLU;

	t26 = ((x113-(x114&x115))|x116);

	if (t26 != 1023LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x118 = 1681U;
	int8_t x119 = INT8_MIN;
	volatile int64_t x120 = INT64_MAX;
	int64_t t27 = INT64_MAX;

	t27 = ((x117-(x118&x119))|x120);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -15517;
	int64_t x122 = INT64_MIN;
	volatile int8_t x123 = -1;
	static volatile uint16_t x124 = 5U;
	int64_t t28 = 2633673071729901642LL;

	t28 = ((x121-(x122&x123))|x124);

	if (t28 != 9223372036854760295LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x125 = 386228688615163LLU;
	int8_t x126 = INT8_MIN;
	static uint8_t x127 = 8U;

	t29 = ((x125-(x126&x127))|x128);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	int32_t t30 = -50161;

	t30 = ((x133-(x134&x135))|x136);

	if (t30 != -32911) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 132556U;

	t31 = ((x137-(x138&x139))|x140);

	if (t31 != 2147616255U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 12;
	uint64_t x146 = UINT64_MAX;
	static uint64_t t32 = 1436940205072LLU;

	t32 = ((x145-(x146&x147))|x148);

	if (t32 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -149957556;
	volatile int64_t t33 = -179LL;

	t33 = ((x149-(x150&x151))|x152);

	if (t33 != -180LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MIN;
	volatile uint8_t x155 = UINT8_MAX;
	int32_t x156 = INT32_MIN;
	volatile int32_t t34 = -121;

	t34 = ((x153-(x154&x155))|x156);

	if (t34 != -2147450881) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x158 = -1;
	int16_t x159 = 3526;
	static int64_t x160 = -1LL;
	int64_t t35 = 3250079470876LL;

	t35 = ((x157-(x158&x159))|x160);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x161 = -1;
	int8_t x162 = -7;
	uint8_t x163 = UINT8_MAX;
	int16_t x164 = INT16_MAX;

	t36 = ((x161-(x162&x163))|x164);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MIN;
	volatile int32_t t37 = -39065479;

	t37 = ((x165-(x166&x167))|x168);

	if (t37 != -1161) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x173 = INT32_MIN;
	int64_t x175 = -4994387068173888LL;
	int64_t t38 = 1101LL;

	t38 = ((x173-(x174&x175))|x176);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	static int32_t x178 = INT32_MIN;
	int16_t x180 = -13079;

	t39 = ((x177-(x178&x179))|x180);

	if (t39 != 4294954239U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	volatile int8_t x184 = INT8_MAX;
	int32_t t40 = 54164;

	t40 = ((x181-(x182&x183))|x184);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x186 = -39208836599272LL;
	uint32_t x187 = 628651U;
	volatile int8_t x188 = INT8_MIN;
	uint64_t t41 = 2LLU;

	t41 = ((x185-(x186&x187))|x188);

	if (t41 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x189 = INT8_MAX;
	int32_t x191 = -3;
	static volatile int64_t t42 = -11418306LL;

	t42 = ((x189-(x190&x191))|x192);

	if (t42 != 691866LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MIN;
	static uint8_t x195 = 89U;
	volatile int8_t x196 = INT8_MAX;
	int64_t t43 = -5724701LL;

	t43 = ((x193-(x194&x195))|x196);

	if (t43 != -32769LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -1;
	static volatile int64_t x198 = 55135953438LL;
	volatile int16_t x199 = 5;
	volatile int64_t x200 = INT64_MAX;

	t44 = ((x197-(x198&x199))|x200);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 2U;
	int64_t x203 = -1LL;
	static int8_t x204 = 30;
	static int64_t t45 = -47720324904076LL;

	t45 = ((x201-(x202&x203))|x204);

	if (t45 != 30LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = 1;
	uint8_t x206 = 16U;
	uint8_t x207 = 2U;
	int32_t x208 = 632;
	static int32_t t46 = 9188960;

	t46 = ((x205-(x206&x207))|x208);

	if (t46 != 633) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = 1;
	int8_t x210 = -1;

	t47 = ((x209-(x210&x211))|x212);

	if (t47 != -1485) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x213 = INT32_MIN;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = 2252395056105LL;
	static volatile int64_t t48 = 57684712735719LL;

	t48 = ((x213-(x214&x215))|x216);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MIN;
	volatile int64_t x222 = INT64_MIN;
	static volatile int64_t x223 = INT64_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int64_t t49 = -28531489756918525LL;

	t49 = ((x221-(x222&x223))|x224);

	if (t49 != 65535LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x226 = 28772140U;
	int64_t x227 = 19106LL;
	int16_t x228 = INT16_MAX;
	int64_t t50 = INT64_MAX;

	t50 = ((x225-(x226&x227))|x228);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 4502U;
	uint64_t x230 = UINT64_MAX;
	int32_t x232 = 7751;
	static uint64_t t51 = 5796056LLU;

	t51 = ((x229-(x230&x231))|x232);

	if (t51 != 8151LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = 1LLU;
	uint16_t x235 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile uint64_t t52 = 43679996LLU;

	t52 = ((x233-(x234&x235))|x236);

	if (t52 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = 0;
	int16_t x243 = -1;
	int32_t x244 = INT32_MIN;

	t53 = ((x241-(x242&x243))|x244);

	if (t53 != -2147483521) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = 560251650401LL;
	int64_t x246 = -1LL;
	static int32_t x247 = INT32_MAX;
	static volatile int64_t x248 = -1LL;
	static volatile int64_t t54 = -73647518815LL;

	t54 = ((x245-(x246&x247))|x248);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x249 = 430U;
	static int32_t x250 = 986409;
	static int32_t x251 = -1;
	volatile uint32_t x252 = UINT32_MAX;

	t55 = ((x249-(x250&x251))|x252);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MAX;
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	static volatile uint64_t t56 = 5605139260LLU;

	t56 = ((x253-(x254&x255))|x256);

	if (t56 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x257 = 59U;
	volatile uint8_t x258 = 2U;
	int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	int32_t t57 = 1;

	t57 = ((x257-(x258&x259))|x260);

	if (t57 != -32711) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 7LLU;
	uint64_t x262 = 183315LLU;
	uint16_t x263 = UINT16_MAX;
	volatile int64_t x264 = 11959267LL;
	uint64_t t58 = 414LLU;

	t58 = ((x261-(x262&x263))|x264);

	if (t58 != 18446744073709517815LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x265 = 203U;
	static int8_t x266 = INT8_MIN;
	uint16_t x267 = 8168U;
	int32_t t59 = 500;

	t59 = ((x265-(x266&x267))|x268);

	if (t59 != -7841) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x269 = UINT16_MAX;
	uint32_t x270 = 57150359U;
	volatile int16_t x271 = -18;
	uint16_t x272 = UINT16_MAX;
	volatile uint32_t t60 = 21663U;

	t60 = ((x269-(x270&x271))|x272);

	if (t60 != 4237885439U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = 67U;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 1240388341028949076LLU;
	static uint8_t x276 = 84U;
	volatile uint64_t t61 = 549685066581176LLU;

	t61 = ((x273-(x274&x275))|x276);

	if (t61 != 17206355732680605783LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x277 = 9585213687LL;
	int32_t x279 = INT32_MIN;
	uint32_t x280 = 181174473U;

	t62 = ((x277-(x278&x279))|x280);

	if (t62 != 11741872383LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x283 = INT32_MAX;
	volatile int8_t x284 = -47;
	uint64_t t63 = 70LLU;

	t63 = ((x281-(x282&x283))|x284);

	if (t63 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = UINT64_MAX;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 1U;
	uint64_t t64 = 128957570829984648LLU;

	t64 = ((x293-(x294&x295))|x296);

	if (t64 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = -977;
	uint16_t x298 = 4U;
	int16_t x299 = INT16_MIN;
	volatile uint8_t x300 = 48U;

	t65 = ((x297-(x298&x299))|x300);

	if (t65 != -961) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = 0;
	int8_t x302 = -1;
	uint64_t x303 = 896LLU;
	static int32_t x304 = -1;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x301-(x302&x303))|x304);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x305 = -1;
	int32_t x307 = INT32_MIN;
	volatile uint32_t t67 = 297508134U;

	t67 = ((x305-(x306&x307))|x308);

	if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x309 = UINT8_MAX;
	uint8_t x311 = UINT8_MAX;
	volatile int8_t x312 = INT8_MIN;
	int32_t t68 = -10;

	t68 = ((x309-(x310&x311))|x312);

	if (t68 != -31) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x320 = -1;

	t69 = ((x317-(x318&x319))|x320);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x321 = UINT32_MAX;
	volatile uint32_t t70 = 783036189U;

	t70 = ((x321-(x322&x323))|x324);

	if (t70 != 2147549183U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x325 = -1;
	volatile int64_t x327 = 605LL;
	int64_t t71 = 383899414415376LL;

	t71 = ((x325-(x326&x327))|x328);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = UINT64_MAX;
	volatile uint16_t x330 = 2U;
	volatile uint32_t x331 = UINT32_MAX;
	uint64_t x332 = 251LLU;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x329-(x330&x331))|x332);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x334 = INT16_MAX;
	static volatile int32_t x335 = 11347551;
	uint8_t x336 = 0U;
	static int32_t t73 = 0;

	t73 = ((x333-(x334&x335))|x336);

	if (t73 != -9823) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 6U;
	static int32_t x339 = -1;
	int64_t x340 = INT64_MAX;
	int64_t t74 = INT64_MAX;

	t74 = ((x337-(x338&x339))|x340);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x341 = INT16_MIN;
	static uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MAX;
	static uint16_t x344 = UINT16_MAX;
	volatile uint64_t t75 = 18789LLU;

	t75 = ((x341-(x342&x343))|x344);

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MAX;
	volatile int64_t t76 = INT64_MAX;

	t76 = ((x345-(x346&x347))|x348);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x349 = 5192193U;
	int16_t x350 = -1;
	int64_t x351 = 163882219841368LL;
	volatile int64_t t77 = -7LL;

	t77 = ((x349-(x350&x351))|x352);

	if (t77 != -163882214649153LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x353 = UINT32_MAX;
	volatile int32_t x354 = INT32_MIN;
	int16_t x356 = -1;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = ((x353-(x354&x355))|x356);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = -6;
	static volatile int64_t x358 = INT64_MIN;
	uint32_t x359 = 140U;
	int64_t t79 = 14LL;

	t79 = ((x357-(x358&x359))|x360);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MAX;
	volatile int32_t x364 = -1;
	int32_t t80 = -7;

	t80 = ((x361-(x362&x363))|x364);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = 229;
	int8_t x366 = -1;
	uint64_t x367 = 5949012441461229397LLU;
	volatile int16_t x368 = INT16_MAX;
	volatile uint64_t t81 = 24575832378223922LLU;

	t81 = ((x365-(x366&x367))|x368);

	if (t81 != 12497731632248324095LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x370 = -1;
	uint8_t x371 = 37U;
	volatile int32_t t82 = 0;

	t82 = ((x369-(x370&x371))|x372);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x373 = -985677;
	int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MAX;
	volatile int64_t t83 = -2699LL;

	t83 = ((x373-(x374&x375))|x376);

	if (t83 != 9223372036853790207LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x377 = 97888024496501886LLU;
	static int64_t x378 = INT64_MAX;
	int16_t x379 = -1979;
	uint64_t t84 = 30407860215LLU;

	t84 = ((x377-(x378&x379))|x380);

	if (t84 != 9321260061351411517LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 4674U;
	volatile int64_t x383 = -1LL;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t85 = -3141428926LL;

	t85 = ((x381-(x382&x383))|x384);

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x393 = -1;
	int64_t x394 = INT64_MIN;
	static uint8_t x395 = UINT8_MAX;
	static volatile uint16_t x396 = 401U;
	static volatile int64_t t86 = 2095308854536477524LL;

	t86 = ((x393-(x394&x395))|x396);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 27U;

	t87 = ((x397-(x398&x399))|x400);

	if (t87 != 86233979U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -1;
	volatile int8_t x402 = -11;
	static int8_t x403 = -1;
	int16_t x404 = -9;
	volatile int32_t t88 = -240704;

	t88 = ((x401-(x402&x403))|x404);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = UINT16_MAX;
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = 49U;
	volatile uint32_t t89 = 639066545U;

	t89 = ((x405-(x406&x407))|x408);

	if (t89 != 65535U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x410 = 9U;
	int16_t x412 = INT16_MAX;
	volatile int32_t t90 = -2020;

	t90 = ((x409-(x410&x411))|x412);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = 38;
	static uint8_t x414 = UINT8_MAX;
	int32_t x415 = -1;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = ((x413-(x414&x415))|x416);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = 12559232228251304LL;
	uint16_t x418 = 200U;
	volatile int64_t x420 = -1LL;
	int64_t t92 = -1758053220LL;

	t92 = ((x417-(x418&x419))|x420);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = INT8_MIN;
	volatile int32_t x422 = 1839543;
	volatile int64_t x424 = INT64_MIN;
	int64_t t93 = 1265LL;

	t93 = ((x421-(x422&x423))|x424);

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 3253U;
	volatile int16_t x427 = 14050;
	uint16_t x428 = 17U;

	t94 = ((x425-(x426&x427))|x428);

	if (t94 != -10797) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x429 = 656585U;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = 308413775242694LLU;
	uint64_t x432 = 16156385981163946LLU;
	uint64_t t95 = 0LLU;

	t95 = ((x429-(x430&x431))|x432);

	if (t95 != 18446717135670930923LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x433 = 1239978179U;
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = INT16_MAX;
	static uint16_t x436 = 434U;
	volatile uint32_t t96 = 1U;

	t96 = ((x433-(x434&x435))|x436);

	if (t96 != 1239977974U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = INT32_MIN;
	int32_t x438 = -1;
	int16_t x439 = -1;
	static uint64_t t97 = 788614LLU;

	t97 = ((x437-(x438&x439))|x440);

	if (t97 != 18446744071958465103LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = INT64_MIN;
	static volatile int16_t x442 = INT16_MAX;
	static int8_t x444 = -1;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = ((x441-(x442&x443))|x444);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x445 = -1;
	int8_t x446 = INT8_MIN;
	int32_t x447 = -1;
	volatile int32_t t99 = -1547205;

	t99 = ((x445-(x446&x447))|x448);

	if (t99 != 65535) { NG(); } else { ; }
	
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

