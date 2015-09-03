#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MAX;
int8_t x16 = INT8_MIN;
static int8_t x35 = INT8_MIN;
int32_t x36 = -1;
volatile int32_t t4 = 0;
uint64_t t5 = 83830LLU;
uint64_t x42 = 227794LLU;
static uint32_t x53 = 3155196U;
volatile uint64_t t9 = 6644595210LLU;
int8_t x62 = -1;
int64_t t10 = -2719888322703663LL;
static uint8_t x67 = UINT8_MAX;
static uint8_t x70 = UINT8_MAX;
volatile int32_t t14 = -9321480;
static int8_t x81 = 0;
volatile int32_t t15 = -1;
uint32_t x90 = 30337726U;
volatile uint32_t x101 = 1334631136U;
static int8_t x103 = 59;
int8_t x104 = INT8_MAX;
uint16_t x109 = 30U;
uint32_t x112 = 109U;
int8_t x116 = 8;
int8_t x127 = INT8_MIN;
static volatile uint64_t t23 = 3955938171LLU;
int8_t x133 = -12;
volatile uint64_t t27 = 299546362063LLU;
volatile uint32_t x150 = 9U;
volatile int8_t x154 = INT8_MIN;
static int16_t x157 = -14;
int16_t x166 = INT16_MIN;
volatile int16_t x168 = INT16_MIN;
static int32_t t31 = 296;
static volatile int64_t x174 = -1LL;
uint64_t x175 = 13702265LLU;
uint64_t t33 = 254960769841LLU;
static int32_t t34 = -12991;
int8_t x182 = INT8_MIN;
int32_t x184 = -65905334;
int64_t t35 = 9384197348663LL;
int64_t x191 = INT64_MIN;
int8_t x198 = INT8_MIN;
int8_t x201 = -45;
int64_t x204 = -294026668LL;
uint8_t x206 = UINT8_MAX;
uint8_t x218 = UINT8_MAX;
uint8_t x227 = UINT8_MAX;
static uint64_t x238 = UINT64_MAX;
volatile int32_t x246 = INT32_MIN;
volatile int64_t x249 = -1LL;
int8_t x252 = INT8_MIN;
uint32_t x262 = UINT32_MAX;
int64_t x269 = -19865267881429LL;
int64_t x271 = -1LL;
static uint8_t x276 = 31U;
int32_t t57 = -1;
volatile int64_t x290 = INT64_MAX;
static volatile int32_t x293 = -1;
uint32_t t61 = 236416U;
uint32_t x299 = UINT32_MAX;
int8_t x301 = INT8_MIN;
int32_t t64 = INT32_MAX;
int8_t x313 = INT8_MIN;
int16_t x314 = INT16_MIN;
int32_t x315 = 454528;
int8_t x317 = INT8_MAX;
static int8_t x322 = -1;
int16_t x323 = 140;
int8_t x324 = INT8_MIN;
volatile uint64_t x326 = 251560348689773LLU;
uint64_t x329 = 12LLU;
int8_t x331 = INT8_MAX;
volatile int64_t x332 = 218LL;
static uint64_t t69 = 620294071646804LLU;
int32_t x334 = INT32_MAX;
static int64_t t70 = 12LL;
int32_t x338 = 181;
int16_t x339 = 245;
volatile uint64_t t72 = 49163LLU;
uint32_t x347 = 31979042U;
volatile int8_t x349 = INT8_MAX;
volatile uint16_t x351 = 3141U;
uint8_t x357 = 38U;
volatile int32_t x360 = INT32_MIN;
static int64_t x362 = INT64_MIN;
volatile int64_t x367 = INT64_MIN;
uint16_t x377 = 799U;
volatile int32_t x386 = -1;
uint16_t x392 = UINT16_MAX;
static int16_t x395 = INT16_MAX;
volatile int32_t x399 = 1860;
int16_t x404 = 64;
static int64_t x406 = -1LL;
static uint8_t x407 = 3U;
volatile uint8_t x408 = UINT8_MAX;
volatile uint64_t t87 = 14733718300059779LLU;
int64_t x409 = INT64_MAX;
uint16_t x411 = 14U;
static int8_t x417 = -1;
volatile uint8_t x419 = 112U;
int8_t x421 = -1;
static volatile int8_t x425 = 1;
int16_t x427 = INT16_MIN;
int8_t x434 = -1;
int8_t x435 = -1;
static int8_t x460 = INT8_MIN;
static uint16_t x463 = 15U;
volatile int32_t x466 = INT32_MAX;


void f0(void) {
	static uint32_t x5 = 1616U;
	int8_t x6 = INT8_MAX;
	static volatile int16_t x7 = INT16_MIN;
	uint32_t t0 = 14388148U;

	t0 = (((x5/x6)-x7)/x8);

	if (t0 != 258U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x13 = 13;
	static int16_t x14 = -1;
	int8_t x15 = INT8_MIN;
	volatile int32_t t1 = 2660;

	t1 = (((x13/x14)-x15)/x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 15600096466863LLU;
	volatile int32_t x22 = -1;
	static volatile int64_t x23 = -1LL;
	uint64_t x24 = UINT64_MAX;
	uint64_t t2 = 182879093060737LLU;

	t2 = (((x21/x22)-x23)/x24);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = -112;
	static int32_t x30 = 12;
	int64_t x31 = -1LL;
	uint16_t x32 = UINT16_MAX;
	static volatile int64_t t3 = -4528992796789LL;

	t3 = (((x29/x30)-x31)/x32);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x33 = UINT8_MAX;
	int8_t x34 = -2;

	t4 = (((x33/x34)-x35)/x36);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x37 = UINT64_MAX;
	int16_t x38 = -1;
	int16_t x39 = INT16_MAX;
	volatile int32_t x40 = 1040398103;

	t5 = (((x37/x38)-x39)/x40);

	if (t5 != 17730466847LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x41 = UINT8_MAX;
	int16_t x43 = 3333;
	volatile int64_t x44 = INT64_MIN;
	uint64_t t6 = 198214LLU;

	t6 = (((x41/x42)-x43)/x44);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = 5234205944LL;
	volatile int64_t x46 = -1LL;
	volatile uint16_t x47 = UINT16_MAX;
	static int16_t x48 = -3;
	int64_t t7 = 1046842LL;

	t7 = (((x45/x46)-x47)/x48);

	if (t7 != 1744757159LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = -5698536053LL;
	uint16_t x55 = 62U;
	int32_t x56 = INT32_MIN;
	volatile int64_t t8 = -117372LL;

	t8 = (((x53/x54)-x55)/x56);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MAX;
	static int64_t x58 = 152136188465LL;
	int8_t x59 = -1;
	static uint64_t x60 = 6907472630359861593LLU;

	t9 = (((x57/x58)-x59)/x60);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -1;
	int64_t x63 = INT64_MAX;
	static int16_t x64 = INT16_MIN;

	t10 = (((x61/x62)-x63)/x64);

	if (t10 != 281474976710655LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -1LL;
	int8_t x66 = -1;
	volatile int32_t x68 = INT32_MIN;
	int64_t t11 = -21676465165866882LL;

	t11 = (((x65/x66)-x67)/x68);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x69 = 2371U;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = -1;
	volatile uint32_t t12 = 77958832U;

	t12 = (((x69/x70)-x71)/x72);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x73 = 1472652U;
	static uint32_t x74 = UINT32_MAX;
	volatile int16_t x75 = -1;
	static uint32_t x76 = UINT32_MAX;
	uint32_t t13 = 22618U;

	t13 = (((x73/x74)-x75)/x76);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = -1;
	static int16_t x79 = -3;
	static int32_t x80 = -1;

	t14 = (((x77/x78)-x79)/x80);

	if (t14 != -131) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;

	t15 = (((x81/x82)-x83)/x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int16_t x92 = 575;
	volatile int64_t t16 = -950LL;

	t16 = (((x89/x90)-x91)/x92);

	if (t16 != -528735914LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x97 = 3U;
	int16_t x98 = INT16_MAX;
	int32_t x99 = -1;
	int8_t x100 = -1;
	static int32_t t17 = 9409558;

	t17 = (((x97/x98)-x99)/x100);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x102 = INT16_MIN;
	uint32_t t18 = 1U;

	t18 = (((x101/x102)-x103)/x104);

	if (t18 != 33818639U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x110 = INT16_MIN;
	int8_t x111 = -26;
	uint32_t t19 = 1970U;

	t19 = (((x109/x110)-x111)/x112);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x113 = INT64_MIN;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MAX;
	volatile int64_t t20 = -99LL;

	t20 = (((x113/x114)-x115)/x116);

	if (t20 != -17592454483983LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x117 = UINT8_MAX;
	static int8_t x118 = -1;
	int16_t x119 = 23;
	int32_t x120 = -929320393;
	int32_t t21 = -7472085;

	t21 = (((x117/x118)-x119)/x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x121 = INT64_MIN;
	uint32_t x122 = 123U;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MAX;
	volatile int64_t t22 = 390580395394523LL;

	t22 = (((x121/x122)-x123)/x124);

	if (t22 != -590446964781688LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	static int32_t x126 = 5026886;
	volatile uint64_t x128 = 23954LLU;

	t23 = (((x125/x126)-x127)/x128);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x134 = 17;
	volatile uint8_t x135 = 5U;
	uint16_t x136 = UINT16_MAX;
	int32_t t24 = -12;

	t24 = (((x133/x134)-x135)/x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = -1859;
	int8_t x138 = INT8_MAX;
	int16_t x139 = INT16_MAX;
	volatile uint16_t x140 = 9U;
	static volatile int32_t t25 = 863756931;

	t25 = (((x137/x138)-x139)/x140);

	if (t25 != -3642) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = INT64_MIN;
	volatile int64_t x142 = -123413189LL;
	int8_t x143 = INT8_MIN;
	volatile uint64_t x144 = 506374380765939LLU;
	volatile uint64_t t26 = 195479123669LLU;

	t26 = (((x141/x142)-x143)/x144);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x145 = -1;
	uint64_t x146 = 1039481479970686088LLU;
	volatile uint32_t x147 = 13U;
	uint32_t x148 = UINT32_MAX;

	t27 = (((x145/x146)-x147)/x148);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x151 = UINT32_MAX;
	static volatile int16_t x152 = INT16_MAX;
	uint32_t t28 = 112U;

	t28 = (((x149/x150)-x151)/x152);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x153 = 0U;
	static int64_t x155 = -1184635LL;
	int8_t x156 = INT8_MIN;
	static int64_t t29 = -4140694553LL;

	t29 = (((x153/x154)-x155)/x156);

	if (t29 != -9254LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x158 = -1;
	int16_t x159 = INT16_MAX;
	volatile uint8_t x160 = 17U;
	static int32_t t30 = -7084672;

	t30 = (((x157/x158)-x159)/x160);

	if (t30 != -1926) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = 45U;
	static int32_t x167 = -967358001;

	t31 = (((x165/x166)-x167)/x168);

	if (t31 != -29521) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	int8_t x171 = -1;
	int16_t x172 = -1;
	volatile int32_t t32 = -695;

	t32 = (((x169/x170)-x171)/x172);

	if (t32 != -16777217) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 741754LLU;
	static int8_t x176 = INT8_MIN;

	t33 = (((x173/x174)-x175)/x176);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MAX;
	int16_t x179 = -1;
	volatile int32_t x180 = -1;

	t34 = (((x177/x178)-x179)/x180);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x181 = 315U;
	static int64_t x183 = -779460LL;

	t35 = (((x181/x182)-x183)/x184);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MAX;
	static uint64_t x186 = 1LLU;
	int64_t x187 = INT64_MIN;
	volatile uint8_t x188 = 1U;
	uint64_t t36 = 4319802624402442850LLU;

	t36 = (((x185/x186)-x187)/x188);

	if (t36 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	uint16_t x190 = 2U;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t37 = -47644229963500376LL;

	t37 = (((x189/x190)-x191)/x192);

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile int64_t x194 = INT64_MAX;
	volatile uint32_t x195 = 428U;
	static int16_t x196 = INT16_MIN;
	volatile int64_t t38 = -223LL;

	t38 = (((x193/x194)-x195)/x196);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x197 = 63U;
	volatile int8_t x199 = 17;
	volatile int32_t x200 = INT32_MIN;
	int32_t t39 = 23;

	t39 = (((x197/x198)-x199)/x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x202 = INT16_MAX;
	int32_t x203 = 71;
	static volatile int64_t t40 = 525798211406832309LL;

	t40 = (((x201/x202)-x203)/x204);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = 5187837426LL;
	uint64_t x207 = 276736685414868LLU;
	int32_t x208 = -1;
	uint64_t t41 = 19954LLU;

	t41 = (((x205/x206)-x207)/x208);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x209 = -93555685488426LL;
	int64_t x210 = -16740616779228LL;
	int32_t x211 = INT32_MIN;
	int16_t x212 = 44;
	int64_t t42 = 13609790LL;

	t42 = (((x209/x210)-x211)/x212);

	if (t42 != 48806446LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x213 = 1;
	static int32_t x214 = -1;
	int64_t x215 = -1494387LL;
	static int8_t x216 = INT8_MAX;
	volatile int64_t t43 = -118046611LL;

	t43 = (((x213/x214)-x215)/x216);

	if (t43 != 11766LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x217 = 547533770U;
	int8_t x219 = -12;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t44 = 1533U;

	t44 = (((x217/x218)-x219)/x220);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x225 = 2798206844465850558LL;
	static int8_t x226 = -16;
	int32_t x228 = -5543;
	static int64_t t45 = 2495LL;

	t45 = (((x225/x226)-x227)/x228);

	if (t45 != 31551132559826LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int16_t x230 = -1;
	uint32_t x231 = 2718U;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t46 = 2663744U;

	t46 = (((x229/x230)-x231)/x232);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -1;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = -1;
	static volatile int8_t x236 = INT8_MAX;
	volatile int32_t t47 = 1010;

	t47 = (((x233/x234)-x235)/x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = 0;
	uint8_t x239 = 9U;
	int16_t x240 = -12;
	uint64_t t48 = 1572404854842142925LLU;

	t48 = (((x237/x238)-x239)/x240);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = UINT64_MAX;
	volatile uint32_t x242 = 664971228U;
	volatile uint8_t x243 = 1U;
	volatile uint32_t x244 = 309U;
	static volatile uint64_t t49 = 40486152378603620LLU;

	t49 = (((x241/x242)-x243)/x244);

	if (t49 != 89775614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x247 = 32616U;
	static int32_t x248 = -572668;
	volatile uint32_t t50 = 87460U;

	t50 = (((x245/x246)-x247)/x248);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x250 = -10654;
	uint8_t x251 = 46U;
	int64_t t51 = 89LL;

	t51 = (((x249/x250)-x251)/x252);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x253 = INT64_MIN;
	static volatile uint32_t x254 = 21U;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = 7;
	static int64_t t52 = 112684505753345LL;

	t52 = (((x253/x254)-x255)/x256);

	if (t52 != -62744027461597150LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = 157;
	static int8_t x258 = -1;
	int8_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	int32_t t53 = 70344;

	t53 = (((x257/x258)-x259)/x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x261 = -1;
	uint64_t x263 = 21788168LLU;
	static int32_t x264 = INT32_MIN;
	volatile uint64_t t54 = 61661LLU;

	t54 = (((x261/x262)-x263)/x264);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x270 = UINT32_MAX;
	int64_t x272 = INT64_MAX;
	int64_t t55 = 29LL;

	t55 = (((x269/x270)-x271)/x272);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x273 = UINT64_MAX;
	volatile uint32_t x274 = 423554781U;
	int64_t x275 = INT64_MIN;
	uint64_t t56 = 0LLU;

	t56 = (((x273/x274)-x275)/x276);

	if (t56 != 297528131626031595LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = 4405;
	int32_t x278 = -199;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 1U;

	t57 = (((x277/x278)-x279)/x280);

	if (t57 != 2147483626) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x281 = INT8_MAX;
	int8_t x282 = -1;
	static int8_t x283 = 14;
	static volatile uint64_t x284 = UINT64_MAX;
	uint64_t t58 = 13118976356340LLU;

	t58 = (((x281/x282)-x283)/x284);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x285 = INT8_MIN;
	static int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	static int16_t x288 = INT16_MAX;
	volatile int64_t t59 = 8998359492832050LL;

	t59 = (((x285/x286)-x287)/x288);

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = 6;
	static int16_t x291 = 0;
	volatile uint8_t x292 = 14U;
	volatile int64_t t60 = -978914565LL;

	t60 = (((x289/x290)-x291)/x292);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x294 = 1;
	static uint32_t x295 = 30659U;
	int16_t x296 = INT16_MIN;

	t61 = (((x293/x294)-x295)/x296);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = UINT64_MAX;
	uint64_t x298 = UINT64_MAX;
	int64_t x300 = INT64_MAX;
	uint64_t t62 = 878647248931422LLU;

	t62 = (((x297/x298)-x299)/x300);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x302 = 8448202221984398730LLU;
	int8_t x303 = -8;
	uint64_t x304 = 45577286003LLU;
	uint64_t t63 = 1073437302LLU;

	t63 = (((x301/x302)-x303)/x304);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = 1;
	int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MAX;
	static volatile int16_t x308 = -1;

	t64 = (((x305/x306)-x307)/x308);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x316 = INT64_MIN;
	volatile int64_t t65 = 14500LL;

	t65 = (((x313/x314)-x315)/x316);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x318 = INT32_MAX;
	uint8_t x319 = 5U;
	static volatile int64_t x320 = 4LL;
	int64_t t66 = -30309LL;

	t66 = (((x317/x318)-x319)/x320);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x321 = 87U;
	volatile int32_t t67 = 20254489;

	t67 = (((x321/x322)-x323)/x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x325 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	static int8_t x328 = 53;
	volatile uint64_t t68 = 43LLU;

	t68 = (((x325/x326)-x327)/x328);

	if (t68 != 1310LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x330 = 22148U;

	t69 = (((x329/x330)-x331)/x332);

	if (t69 != 84618092081236474LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = 2LL;
	int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;

	t70 = (((x333/x334)-x335)/x336);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x337 = INT8_MIN;
	int32_t x340 = 1;
	int32_t t71 = 4159382;

	t71 = (((x337/x338)-x339)/x340);

	if (t71 != -245) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x341 = UINT16_MAX;
	int64_t x342 = -1LL;
	uint64_t x343 = 93LLU;
	volatile int16_t x344 = 203;

	t72 = (((x341/x342)-x343)/x344);

	if (t72 != 90870660461623083LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int8_t x346 = INT8_MIN;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t73 = 0LL;

	t73 = (((x345/x346)-x347)/x348);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x350 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t74 = -358635;

	t74 = (((x349/x350)-x351)/x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x358 = INT32_MAX;
	int16_t x359 = -1;
	volatile int32_t t75 = -965081546;

	t75 = (((x357/x358)-x359)/x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x361 = -1;
	static int8_t x363 = INT8_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile int64_t t76 = -17008592050521570LL;

	t76 = (((x361/x362)-x363)/x364);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = 107992627;
	int16_t x366 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	volatile int64_t t77 = -135771525913682LL;

	t77 = (((x365/x366)-x367)/x368);

	if (t77 != -281474976710655LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x369 = 17U;
	uint8_t x370 = UINT8_MAX;
	static uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 684U;
	volatile uint32_t t78 = 864501U;

	t78 = (((x369/x370)-x371)/x372);

	if (t78 != 6279096U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = 264247113334LLU;
	uint64_t x374 = 48770359LLU;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MAX;
	volatile uint64_t t79 = 269814727159470LLU;

	t79 = (((x373/x374)-x375)/x376);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x378 = -2101;
	static uint8_t x379 = 52U;
	int8_t x380 = INT8_MIN;
	volatile int32_t t80 = -92053227;

	t80 = (((x377/x378)-x379)/x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x381 = 52891625U;
	static int32_t x382 = -1;
	static int16_t x383 = -3501;
	static volatile int8_t x384 = -1;
	volatile uint32_t t81 = 1U;

	t81 = (((x381/x382)-x383)/x384);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x387 = -2479939LL;
	int8_t x388 = INT8_MIN;
	uint64_t t82 = 384LLU;

	t82 = (((x385/x386)-x387)/x388);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x389 = 3566;
	uint32_t x390 = UINT32_MAX;
	static int16_t x391 = INT16_MIN;
	static volatile uint32_t t83 = 2U;

	t83 = (((x389/x390)-x391)/x392);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = 22U;
	static int16_t x396 = -1;
	volatile int32_t t84 = 2835375;

	t84 = (((x393/x394)-x395)/x396);

	if (t84 != 34256) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MAX;
	static uint8_t x400 = 3U;
	volatile int32_t t85 = 885698;

	t85 = (((x397/x398)-x399)/x400);

	if (t85 != -619) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = 198602216565LL;
	volatile int64_t x402 = -1LL;
	static int32_t x403 = INT32_MIN;
	volatile int64_t t86 = -2690810514768867151LL;

	t86 = (((x401/x402)-x403)/x404);

	if (t86 != -3069605201LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 163223763803LLU;

	t87 = (((x405/x406)-x407)/x408);

	if (t87 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x410 = 24U;
	int32_t x412 = INT32_MIN;
	int64_t t88 = 1LL;

	t88 = (((x409/x410)-x411)/x412);

	if (t88 != -178956970LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x418 = -1;
	static volatile int32_t x420 = INT32_MAX;
	int32_t t89 = -93;

	t89 = (((x417/x418)-x419)/x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x422 = 2756U;
	static int8_t x423 = -1;
	int32_t x424 = -624;
	int32_t t90 = 679;

	t90 = (((x421/x422)-x423)/x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x426 = -1LL;
	int32_t x428 = INT32_MAX;
	volatile int64_t t91 = 25449696343173254LL;

	t91 = (((x425/x426)-x427)/x428);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x433 = 2002276282000746105LLU;
	static int16_t x436 = INT16_MIN;
	volatile uint64_t t92 = 217689633LLU;

	t92 = (((x433/x434)-x435)/x436);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = -125;
	static int64_t x438 = 424LL;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MIN;
	uint64_t t93 = 59789342655254LLU;

	t93 = (((x437/x438)-x439)/x440);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x441 = UINT8_MAX;
	uint64_t x442 = UINT64_MAX;
	static volatile uint64_t x443 = 16140751204330791LLU;
	int8_t x444 = -1;
	volatile uint64_t t94 = 41LLU;

	t94 = (((x441/x442)-x443)/x444);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x449 = -35;
	uint16_t x450 = UINT16_MAX;
	static volatile uint64_t x451 = UINT64_MAX;
	int32_t x452 = -27;
	uint64_t t95 = 25LLU;

	t95 = (((x449/x450)-x451)/x452);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x453 = -1LL;
	int32_t x454 = INT32_MIN;
	uint8_t x455 = 0U;
	int32_t x456 = 156;
	int64_t t96 = 13798280276720LL;

	t96 = (((x453/x454)-x455)/x456);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x457 = INT16_MIN;
	int64_t x458 = INT64_MIN;
	int32_t x459 = 57282260;
	static int64_t t97 = 1124778789227423135LL;

	t97 = (((x457/x458)-x459)/x460);

	if (t97 != 447517LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MAX;
	int8_t x462 = INT8_MIN;
	volatile int16_t x464 = INT16_MAX;
	volatile int32_t t98 = -36277139;

	t98 = (((x461/x462)-x463)/x464);

	if (t98 != -512) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x465 = INT16_MAX;
	static int32_t x467 = -1;
	uint16_t x468 = 1620U;
	volatile int32_t t99 = 5;

	t99 = (((x465/x466)-x467)/x468);

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

