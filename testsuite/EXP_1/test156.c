#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 7U;
volatile uint32_t t1 = 795337U;
static int32_t x9 = -297957907;
uint32_t t2 = 130U;
int8_t x16 = INT8_MIN;
static int8_t x21 = INT8_MIN;
static int16_t x22 = INT16_MIN;
uint32_t x24 = UINT32_MAX;
uint32_t t4 = 6254U;
uint16_t x33 = 2U;
int64_t t6 = 87377186861LL;
int8_t x38 = 7;
int16_t x44 = INT16_MAX;
int64_t x45 = INT64_MIN;
uint64_t x46 = 3LLU;
static uint32_t x47 = 903U;
static int16_t x61 = INT16_MAX;
volatile int8_t x63 = INT8_MAX;
volatile int64_t t12 = 27686505314629830LL;
uint32_t x95 = 15966377U;
int64_t x102 = -1LL;
int64_t t19 = 93LL;
static int16_t x105 = INT16_MIN;
uint8_t x112 = UINT8_MAX;
volatile uint64_t t22 = 1830749997826LLU;
uint64_t x119 = UINT64_MAX;
static int32_t x125 = -4;
int32_t x129 = INT32_MIN;
int8_t x130 = 0;
int32_t x132 = 32801;
volatile int64_t t26 = 2082211548507661LL;
uint16_t x137 = 0U;
int32_t x141 = 1;
volatile uint32_t t29 = 1842243641U;
volatile int32_t t31 = 2409;
int8_t x166 = 7;
volatile int64_t t33 = 348213827298LL;
uint64_t x172 = 8033893522305124739LLU;
int64_t x175 = -1LL;
int64_t x184 = INT64_MIN;
uint32_t x194 = 6990U;
int32_t x196 = 103;
volatile uint64_t t38 = 966725415LLU;
int8_t x204 = -1;
volatile int64_t t41 = 50LL;
volatile uint64_t x218 = 5LLU;
uint32_t x221 = 982115U;
volatile int16_t x227 = INT16_MIN;
volatile int32_t x244 = -1;
volatile int64_t t50 = 9848427212943316LL;
volatile uint8_t x259 = UINT8_MAX;
int64_t x265 = 3883LL;
int64_t x268 = -1LL;
int64_t t53 = -721553933LL;
uint32_t x270 = 1U;
int8_t x271 = -1;
int16_t x273 = -6;
volatile uint8_t x280 = 1U;
uint8_t x284 = 0U;
static volatile int32_t t58 = 300531;
uint64_t x311 = 792LLU;
static int16_t x312 = INT16_MIN;
static volatile int64_t x314 = -1928906543LL;
uint8_t x315 = 10U;
int64_t x324 = INT64_MAX;
static int16_t x328 = INT16_MIN;
int32_t x330 = INT32_MIN;
uint32_t x331 = 8060U;
static int32_t x334 = INT32_MIN;
static int16_t x342 = -20;
uint64_t x343 = 56532LLU;
static int16_t x344 = -1;
int64_t x346 = 183216134105LL;
int16_t x348 = INT16_MIN;
int16_t x352 = INT16_MAX;
int32_t x353 = INT32_MAX;
uint64_t x363 = UINT64_MAX;
int8_t x368 = -27;
int64_t t77 = -20266228LL;
volatile uint32_t x379 = 187U;
int8_t x384 = -1;
int16_t x389 = -1;
volatile int64_t x390 = -3255144LL;
uint16_t x391 = 13586U;
static int64_t x394 = 46446213694747LL;
uint32_t x396 = UINT32_MAX;
volatile int8_t x400 = -1;
volatile int8_t x405 = INT8_MAX;
int8_t x414 = INT8_MIN;
uint64_t t87 = 1771306LLU;
volatile uint8_t x418 = 1U;
static int8_t x423 = INT8_MIN;
uint64_t x434 = 387105205544940LLU;
int64_t t94 = 5274048LL;
int32_t x454 = INT32_MIN;
volatile uint16_t x456 = 1U;
uint32_t x460 = 7U;
volatile int32_t x462 = INT32_MAX;


void f0(void) {
	int64_t x2 = -1LL;
	int32_t x3 = -8045673;
	int64_t x4 = 2269482LL;
	int64_t t0 = 0LL;

	t0 = (((x1+x2)|x3)^x4);

	if (t0 != -5793091LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 17282U;
	static int8_t x6 = INT8_MAX;
	int32_t x7 = -226721825;
	static int16_t x8 = INT16_MIN;

	t1 = (((x5+x6)|x7)^x8);

	if (t1 != 226754527U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	uint32_t x11 = UINT32_MAX;
	static int32_t x12 = INT32_MIN;

	t2 = (((x9+x10)|x11)^x12);

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static volatile uint32_t x14 = 11913564U;
	int32_t x15 = INT32_MAX;
	uint32_t t3 = 81U;

	t3 = (((x13+x14)|x15)^x16);

	if (t3 != 2147483775U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = -7;

	t4 = (((x21+x22)|x23)^x24);

	if (t4 != 6U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint64_t x26 = 4946151LLU;
	volatile int8_t x27 = 9;
	uint16_t x28 = 155U;
	uint64_t t5 = 1007817623200LLU;

	t5 = (((x25+x26)|x27)^x28);

	if (t5 != 4946036LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = 10583U;
	int16_t x35 = 7804;
	volatile int64_t x36 = INT64_MIN;

	t6 = (((x33+x34)|x35)^x36);

	if (t6 != -9223372036854759555LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x37 = 3U;
	static volatile int16_t x39 = 4;
	volatile int8_t x40 = -1;
	volatile int32_t t7 = 1;

	t7 = (((x37+x38)|x39)^x40);

	if (t7 != -15) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -7;
	int32_t x42 = -1;
	int32_t x43 = INT32_MIN;
	int32_t t8 = 22962183;

	t8 = (((x41+x42)|x43)^x44);

	if (t8 != -32761) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x48 = -20;
	volatile uint64_t t9 = 64959219LLU;

	t9 = (((x45+x46)|x47)^x48);

	if (t9 != 9223372036854774891LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 50U;
	int16_t x56 = INT16_MAX;
	volatile int64_t t10 = -7701769029633LL;

	t10 = (((x53+x54)|x55)^x56);

	if (t10 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x58 = INT8_MIN;
	static uint8_t x59 = 0U;
	static volatile int8_t x60 = INT8_MAX;
	volatile int32_t t11 = 1220;

	t11 = (((x57+x58)|x59)^x60);

	if (t11 != -129) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x62 = 0U;
	int64_t x64 = INT64_MIN;

	t12 = (((x61+x62)|x63)^x64);

	if (t12 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = 5;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MAX;
	int32_t t13 = 1;

	t13 = (((x69+x70)|x71)^x72);

	if (t13 != 2147417856) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 262U;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 0LLU;
	int64_t x76 = INT64_MIN;
	static volatile uint64_t t14 = 329286LLU;

	t14 = (((x73+x74)|x75)^x76);

	if (t14 != 9223372036854776325LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	static uint64_t x78 = UINT64_MAX;
	volatile int16_t x79 = INT16_MAX;
	static int8_t x80 = -1;
	static volatile uint64_t t15 = 7245566268778LLU;

	t15 = (((x77+x78)|x79)^x80);

	if (t15 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = 6652U;
	volatile int16_t x83 = INT16_MIN;
	int16_t x84 = -1857;
	volatile int32_t t16 = 0;

	t16 = (((x81+x82)|x83)^x84);

	if (t16 != 24899) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = INT32_MIN;
	static volatile uint8_t x90 = 51U;
	int16_t x91 = INT16_MIN;
	static int64_t x92 = -1LL;
	volatile int64_t t17 = 3375809290517993LL;

	t17 = (((x89+x90)|x91)^x92);

	if (t17 != 32716LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = 5;
	int16_t x94 = INT16_MIN;
	int16_t x96 = 69;
	volatile uint32_t t18 = 1U;

	t18 = (((x93+x94)|x95)^x96);

	if (t18 != 4294942952U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -4;
	volatile uint32_t x103 = 6U;
	uint32_t x104 = 7452566U;

	t19 = (((x101+x102)|x103)^x104);

	if (t19 != -7452567LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x106 = 29455U;
	int16_t x107 = -374;
	int16_t x108 = INT16_MIN;
	volatile int32_t t20 = -283286;

	t20 = (((x105+x106)|x107)^x108);

	if (t20 != 32655) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = -1;
	volatile uint32_t x110 = 637675840U;
	static int8_t x111 = -4;
	static volatile uint32_t t21 = 20270351U;

	t21 = (((x109+x110)|x111)^x112);

	if (t21 != 4294967040U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = UINT64_MAX;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = 293662186LL;
	uint64_t x116 = 2373001LLU;

	t22 = (((x113+x114)|x115)^x116);

	if (t22 != 18446744073707178614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = 44582LL;
	int8_t x118 = INT8_MIN;
	uint16_t x120 = 3U;
	volatile uint64_t t23 = 1906435238809231LLU;

	t23 = (((x117+x118)|x119)^x120);

	if (t23 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x126 = 7U;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 616096160U;
	volatile uint32_t t24 = 143U;

	t24 = (((x125+x126)|x127)^x128);

	if (t24 != 2763579811U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x131 = INT16_MIN;
	volatile int32_t t25 = -30211306;

	t25 = (((x129+x130)|x131)^x132);

	if (t25 != -65503) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 4U;
	volatile int32_t x134 = INT32_MIN;
	int32_t x135 = 1;
	int64_t x136 = -575970509656990LL;

	t26 = (((x133+x134)|x135)^x136);

	if (t26 != 575971931384935LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MIN;
	uint16_t x140 = 0U;
	static volatile int32_t t27 = 315436348;

	t27 = (((x137+x138)|x139)^x140);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 2350U;
	volatile int64_t x144 = INT64_MIN;
	volatile int64_t t28 = 96433802530990162LL;

	t28 = (((x141+x142)|x143)^x144);

	if (t28 != 9223372036854775727LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x145 = INT8_MIN;
	int16_t x146 = -191;
	static int32_t x147 = INT32_MIN;
	volatile uint32_t x148 = 75874762U;

	t29 = (((x145+x146)|x147)^x148);

	if (t29 != 4219092747U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = 2377;
	volatile int32_t x155 = INT32_MIN;
	volatile int8_t x156 = -1;
	int32_t t30 = 458063;

	t30 = (((x153+x154)|x155)^x156);

	if (t30 != 30390) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = UINT16_MAX;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 0U;
	int32_t x160 = -1;

	t31 = (((x157+x158)|x159)^x160);

	if (t31 != -65791) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MIN;
	static uint8_t x162 = UINT8_MAX;
	static uint64_t x163 = 8LLU;
	int8_t x164 = INT8_MIN;
	uint64_t t32 = 16236695429660LLU;

	t32 = (((x161+x162)|x163)^x164);

	if (t32 != 2147483519LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x165 = 0U;
	int64_t x167 = -5655LL;
	uint8_t x168 = 0U;

	t33 = (((x165+x166)|x167)^x168);

	if (t33 != -5649LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = 360584974238LL;
	uint64_t t34 = 3477387806178980494LLU;

	t34 = (((x169+x170)|x171)^x172);

	if (t34 != 8033893712615470716LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint16_t x174 = UINT16_MAX;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t35 = 3681331109012402894LLU;

	t35 = (((x173+x174)|x175)^x176);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = 7530363;
	static uint16_t x178 = 3880U;
	volatile int64_t x179 = INT64_MAX;
	static int32_t x180 = 1715;
	volatile int64_t t36 = -3783170321350371LL;

	t36 = (((x177+x178)|x179)^x180);

	if (t36 != 9223372036854774092LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x181 = 381U;
	volatile int8_t x182 = -2;
	int64_t x183 = INT64_MAX;
	volatile int64_t t37 = -4248LL;

	t37 = (((x181+x182)|x183)^x184);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x193 = INT64_MIN;
	uint64_t x195 = 931LLU;

	t38 = (((x193+x194)|x195)^x196);

	if (t38 != 9223372036854782856LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x197 = 192000;
	uint8_t x198 = UINT8_MAX;
	static uint64_t x199 = 3412980LLU;
	uint32_t x200 = 245U;
	volatile uint64_t t39 = 5LLU;

	t39 = (((x197+x198)|x199)^x200);

	if (t39 != 3604234LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x201 = INT32_MIN;
	int64_t x202 = 387473LL;
	static volatile uint8_t x203 = 27U;
	int64_t t40 = 882828085LL;

	t40 = (((x201+x202)|x203)^x204);

	if (t40 != 2147096164LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = -1006646LL;
	int8_t x206 = 0;
	int16_t x207 = -111;
	int64_t x208 = -1LL;

	t41 = (((x205+x206)|x207)^x208);

	if (t41 != 36LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -1;
	int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;
	volatile int64_t t42 = -3LL;

	t42 = (((x209+x210)|x211)^x212);

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x217 = -110;
	uint32_t x219 = 28578392U;
	static volatile int32_t x220 = 10944;
	volatile uint64_t t43 = 11061980326LLU;

	t43 = (((x217+x218)|x219)^x220);

	if (t43 != 18446744073709540639LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x222 = UINT8_MAX;
	int32_t x223 = 30790531;
	int64_t x224 = INT64_MAX;
	static int64_t t44 = -3660628959LL;

	t44 = (((x221+x222)|x223)^x224);

	if (t44 != 9223372036823318556LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t45 = 42954618497461769LLU;

	t45 = (((x225+x226)|x227)^x228);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MAX;
	int32_t x231 = -1;
	uint16_t x232 = UINT16_MAX;
	static int64_t t46 = 741LL;

	t46 = (((x229+x230)|x231)^x232);

	if (t46 != -65536LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x233 = 2080U;
	static volatile int64_t x234 = -33673340726702LL;
	static volatile uint16_t x235 = UINT16_MAX;
	static uint8_t x236 = 3U;
	volatile int64_t t47 = 58LL;

	t47 = (((x233+x234)|x235)^x236);

	if (t47 != -33673340715012LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MAX;
	static volatile int16_t x238 = INT16_MIN;
	static uint64_t x239 = 0LLU;
	int64_t x240 = -297417LL;
	volatile uint64_t t48 = 137LLU;

	t48 = (((x237+x238)|x239)^x240);

	if (t48 != 297416LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = 3509;
	static int8_t x242 = -1;
	int64_t x243 = -1LL;
	volatile int64_t t49 = -18546076499LL;

	t49 = (((x241+x242)|x243)^x244);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x245 = 996255223U;
	volatile uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MAX;
	static int64_t x248 = -31611825073819LL;

	t50 = (((x245+x246)|x247)^x248);

	if (t50 != -31611109986662LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t51 = 28;

	t51 = (((x257+x258)|x259)^x260);

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x261 = 472;
	uint32_t x262 = 129010U;
	int8_t x263 = -1;
	static int16_t x264 = -191;
	volatile uint32_t t52 = 2038885U;

	t52 = (((x261+x262)|x263)^x264);

	if (t52 != 190U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x266 = 22358U;
	volatile uint16_t x267 = 3023U;

	t53 = (((x265+x266)|x267)^x268);

	if (t53 != -28624LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x269 = 3830777600LLU;
	int16_t x272 = -1;
	uint64_t t54 = 4031647599523974LLU;

	t54 = (((x269+x270)|x271)^x272);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x274 = UINT64_MAX;
	uint64_t x275 = 78155203LLU;
	int64_t x276 = 3901LL;
	uint64_t t55 = 6045863833149799415LLU;

	t55 = (((x273+x274)|x275)^x276);

	if (t55 != 18446744073709547718LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x277 = INT64_MAX;
	uint64_t x278 = UINT64_MAX;
	static uint8_t x279 = UINT8_MAX;
	static uint64_t t56 = 218LLU;

	t56 = (((x277+x278)|x279)^x280);

	if (t56 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = 828;
	int32_t t57 = 201589692;

	t57 = (((x281+x282)|x283)^x284);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = INT8_MIN;
	volatile int16_t x286 = 1936;
	static int16_t x287 = INT16_MIN;
	int16_t x288 = -196;

	t58 = (((x285+x286)|x287)^x288);

	if (t58 != 30764) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x297 = UINT32_MAX;
	uint64_t x298 = UINT64_MAX;
	uint64_t x299 = 166646530434603LLU;
	static int8_t x300 = INT8_MAX;
	static volatile uint64_t t59 = 438062272276504LLU;

	t59 = (((x297+x298)|x299)^x300);

	if (t59 != 166649026051968LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = 7959941;
	uint16_t x302 = 58U;
	int32_t x303 = -1;
	int32_t x304 = INT32_MIN;
	int32_t t60 = INT32_MAX;

	t60 = (((x301+x302)|x303)^x304);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x305 = -1;
	volatile uint32_t x306 = 215474U;
	static int16_t x307 = INT16_MIN;
	uint64_t x308 = 2781627334LLU;
	volatile uint64_t t61 = 271379255425996LLU;

	t61 = (((x305+x306)|x307)^x308);

	if (t61 != 1513327223LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x309 = 12LLU;
	int64_t x310 = -2LL;
	static volatile uint64_t t62 = 3271LLU;

	t62 = (((x309+x310)|x311)^x312);

	if (t62 != 18446744073709519642LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x313 = INT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile int64_t t63 = 6140LL;

	t63 = (((x313+x314)|x315)^x316);

	if (t63 != -218580774LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x321 = -1;
	volatile uint32_t x322 = 4976U;
	static int64_t x323 = 909530044933730091LL;
	static int64_t t64 = 90105498956234LL;

	t64 = (((x321+x322)|x323)^x324);

	if (t64 != 8313841991921041552LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = INT64_MAX;
	static int64_t x326 = INT64_MIN;
	static volatile int32_t x327 = INT32_MIN;
	int64_t t65 = -840497634382166LL;

	t65 = (((x325+x326)|x327)^x328);

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x329 = UINT64_MAX;
	static int32_t x332 = 1;
	volatile uint64_t t66 = 4558421559LLU;

	t66 = (((x329+x330)|x331)^x332);

	if (t66 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = INT64_MAX;
	uint8_t x335 = 1U;
	volatile int32_t x336 = -7917610;
	int64_t t67 = 9211517959795528LL;

	t67 = (((x333+x334)|x335)^x336);

	if (t67 != -9223372034699374551LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x337 = -1;
	static int64_t x338 = -1768255894202LL;
	uint32_t x339 = 565502U;
	uint16_t x340 = 1023U;
	volatile int64_t t68 = -1997859174208999LL;

	t68 = (((x337+x338)|x339)^x340);

	if (t68 != -1768255853056LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x341 = INT16_MAX;
	volatile uint64_t t69 = 21109817600857047LLU;

	t69 = (((x341+x342)|x343)^x344);

	if (t69 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x345 = -4;
	int32_t x347 = INT32_MIN;
	volatile int64_t t70 = -391784618421LL;

	t70 = (((x345+x346)|x347)^x348);

	if (t70 != 1467471829LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x349 = 5916450204164033LLU;
	int8_t x350 = -1;
	volatile uint32_t x351 = UINT32_MAX;
	volatile uint64_t t71 = 1894826401288LLU;

	t71 = (((x349+x350)|x351)^x352);

	if (t71 != 5916450594193408LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile int64_t t72 = 255328699767LL;

	t72 = (((x353+x354)|x355)^x356);

	if (t72 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x357 = -3247728860815664LL;
	static uint64_t x358 = 31LLU;
	int8_t x359 = -51;
	int8_t x360 = INT8_MIN;
	uint64_t t73 = 11581LLU;

	t73 = (((x357+x358)|x359)^x360);

	if (t73 != 111LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x361 = INT8_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	uint16_t x364 = UINT16_MAX;
	uint64_t t74 = 10210459180LLU;

	t74 = (((x361+x362)|x363)^x364);

	if (t74 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	static volatile uint64_t x367 = UINT64_MAX;
	volatile uint64_t t75 = 5470995LLU;

	t75 = (((x365+x366)|x367)^x368);

	if (t75 != 26LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = 549579005399LL;
	int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	static uint16_t x372 = 1U;
	int64_t t76 = -1063246770913034LL;

	t76 = (((x369+x370)|x371)^x372);

	if (t76 != 551726489086LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = INT64_MIN;
	static volatile int64_t x374 = INT64_MAX;
	static uint8_t x375 = UINT8_MAX;
	static int32_t x376 = -1;

	t77 = (((x373+x374)|x375)^x376);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x377 = 1;
	volatile int8_t x378 = 0;
	volatile uint32_t x380 = 209273200U;
	volatile uint32_t t78 = 1U;

	t78 = (((x377+x378)|x379)^x380);

	if (t78 != 209273291U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	static volatile uint64_t t79 = 17LLU;

	t79 = (((x381+x382)|x383)^x384);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x385 = 77U;
	int64_t x386 = -1LL;
	int64_t x387 = INT64_MIN;
	static int16_t x388 = INT16_MIN;
	int64_t t80 = -188578998LL;

	t80 = (((x385+x386)|x387)^x388);

	if (t80 != 9223372036854743116LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x392 = UINT8_MAX;
	int64_t t81 = -4196874697347602982LL;

	t81 = (((x389+x390)|x391)^x392);

	if (t81 != -3246744LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x395 = UINT8_MAX;
	volatile int64_t t82 = 181712178LL;

	t82 = (((x393+x394)|x395)^x396);

	if (t82 != 46443191499264LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = UINT32_MAX;
	static int64_t x399 = INT64_MIN;
	int64_t t83 = -101855997052409622LL;

	t83 = (((x397+x398)|x399)^x400);

	if (t83 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x401 = INT8_MAX;
	uint16_t x402 = 1768U;
	uint32_t x403 = UINT32_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t84 = 1350898697261LL;

	t84 = (((x401+x402)|x403)^x404);

	if (t84 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x406 = -1;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t85 = 313882598284904855LL;

	t85 = (((x405+x406)|x407)^x408);

	if (t85 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	static uint16_t x412 = 219U;
	int32_t t86 = 30294725;

	t86 = (((x409+x410)|x411)^x412);

	if (t86 != -220) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x415 = INT64_MAX;
	int64_t x416 = -1LL;

	t87 = (((x413+x414)|x415)^x416);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x417 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	volatile int64_t x420 = INT64_MIN;
	volatile int64_t t88 = -10443LL;

	t88 = (((x417+x418)|x419)^x420);

	if (t88 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = 267441;
	volatile int64_t x422 = INT64_MIN;
	static int16_t x424 = 255;
	volatile int64_t t89 = 722395LL;

	t89 = (((x421+x422)|x423)^x424);

	if (t89 != -178LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = 77925759812245LL;
	int8_t x426 = -1;
	uint64_t x427 = 471LLU;
	volatile int8_t x428 = 1;
	static volatile uint64_t t90 = 16LLU;

	t90 = (((x425+x426)|x427)^x428);

	if (t90 != 77925759812566LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MIN;
	uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 1261891LLU;
	uint32_t x432 = UINT32_MAX;
	volatile uint64_t t91 = 7437187264LLU;

	t91 = (((x429+x430)|x431)^x432);

	if (t91 != 4293656704LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = INT16_MIN;
	static uint16_t x435 = 3861U;
	static int16_t x436 = INT16_MIN;
	static uint64_t t92 = 342LLU;

	t92 = (((x433+x434)|x435)^x436);

	if (t92 != 18446356968504061949LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x441 = -1LL;
	int8_t x442 = 53;
	static int16_t x443 = -738;
	volatile uint64_t x444 = 217222322LLU;
	uint64_t t93 = 29260LLU;

	t93 = (((x441+x442)|x443)^x444);

	if (t93 != 18446744073492328844LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MAX;
	static int8_t x450 = 28;
	int16_t x451 = INT16_MIN;
	int64_t x452 = -1LL;

	t94 = (((x449+x450)|x451)^x452);

	if (t94 != 32740LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x453 = 57394U;
	int32_t x455 = INT32_MIN;
	uint32_t t95 = 24973U;

	t95 = (((x453+x454)|x455)^x456);

	if (t95 != 2147541043U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x457 = 197U;
	static int16_t x458 = 881;
	static uint32_t x459 = 1U;
	uint32_t t96 = 45153U;

	t96 = (((x457+x458)|x459)^x460);

	if (t96 != 1072U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x461 = 3U;
	volatile uint8_t x463 = UINT8_MAX;
	uint8_t x464 = 5U;
	uint32_t t97 = 55490U;

	t97 = (((x461+x462)|x463)^x464);

	if (t97 != 2147483898U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x465 = 1U;
	uint32_t x466 = 22U;
	int32_t x467 = INT32_MAX;
	int32_t x468 = -13;
	volatile uint32_t t98 = 102350U;

	t98 = (((x465+x466)|x467)^x468);

	if (t98 != 2147483660U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x469 = 5U;
	int8_t x470 = 1;
	static uint32_t x471 = 1U;
	static int16_t x472 = INT16_MAX;
	uint32_t t99 = 763818U;

	t99 = (((x469+x470)|x471)^x472);

	if (t99 != 32760U) { NG(); } else { ; }
	
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

