#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x8 = -1;
uint64_t x9 = 376096683419534663LLU;
uint64_t t3 = 1LLU;
volatile int32_t x17 = INT32_MAX;
uint32_t x18 = 243750U;
volatile uint64_t t4 = 32300145467208341LLU;
int8_t x26 = 1;
static int32_t x28 = -1;
volatile int64_t t6 = -1LL;
uint64_t x37 = 14482LLU;
int16_t x43 = -1;
int8_t x56 = 33;
int16_t x57 = -1;
uint8_t x71 = 0U;
int64_t x73 = INT64_MIN;
static uint8_t x76 = 32U;
uint8_t x77 = UINT8_MAX;
uint64_t x78 = 1LLU;
int8_t x79 = -1;
uint64_t t13 = 7000LLU;
volatile uint64_t x87 = 17LLU;
uint64_t t15 = 17964900952452114LLU;
int64_t x97 = -1LL;
uint32_t x108 = 398475U;
volatile int32_t x120 = INT32_MAX;
int16_t x122 = INT16_MIN;
uint16_t x124 = 3U;
int32_t x125 = 8;
volatile uint64_t t23 = 9501LLU;
uint8_t x142 = 63U;
uint32_t t24 = 75801960U;
int8_t x150 = 5;
uint16_t x158 = 117U;
int32_t t29 = 212;
uint64_t x178 = 32451229LLU;
volatile uint32_t x180 = 7093471U;
uint64_t t30 = 185LLU;
static int64_t x181 = INT64_MIN;
int16_t x183 = INT16_MIN;
volatile int8_t x189 = 5;
volatile int32_t t33 = 31459;
uint64_t x198 = UINT64_MAX;
int16_t x220 = INT16_MIN;
uint64_t t40 = 52512LLU;
volatile uint64_t t41 = 5659764773LLU;
volatile uint32_t t42 = UINT32_MAX;
static volatile uint32_t x241 = UINT32_MAX;
volatile uint32_t t45 = UINT32_MAX;
int32_t x253 = 463608187;
uint16_t x259 = 1424U;
uint8_t x260 = 21U;
int16_t x264 = INT16_MIN;
int8_t x282 = -1;
int32_t x283 = INT32_MIN;
static volatile int64_t t51 = 797137LL;
int64_t x285 = INT64_MIN;
uint64_t x286 = 66151292892681560LLU;
static uint8_t x287 = 8U;
static int16_t x290 = -7993;
volatile int8_t x295 = INT8_MAX;
int32_t x296 = 6;
static volatile int64_t t55 = 527LL;
volatile int64_t x337 = -513500730LL;
int8_t x339 = -17;
volatile int64_t t60 = -1432LL;
int16_t x341 = INT16_MIN;
int32_t x349 = INT32_MAX;
static uint16_t x350 = 22U;
uint64_t t63 = 149940824LLU;
static int16_t x380 = 515;
volatile uint16_t x384 = 1872U;
volatile int8_t x393 = INT8_MIN;
int16_t x394 = INT16_MIN;
volatile int64_t x398 = INT64_MIN;
volatile int64_t t71 = -309375907752946978LL;
int8_t x408 = INT8_MIN;
volatile int64_t t72 = -25LL;
volatile uint16_t x412 = 146U;
static volatile int32_t x420 = INT32_MAX;
volatile int16_t x425 = INT16_MIN;
volatile int64_t x427 = INT64_MIN;
uint64_t x433 = 1007927199140744LLU;
int32_t x435 = 1917;
int8_t x440 = -63;
int8_t x441 = INT8_MIN;
int32_t x442 = INT32_MIN;
static uint64_t t82 = 1458LLU;
static uint32_t x473 = UINT32_MAX;
static volatile uint32_t t85 = 0U;
uint64_t t86 = 1687810097LLU;
static uint64_t x484 = 273LLU;
int16_t x489 = INT16_MAX;
volatile int64_t x490 = -1LL;
uint64_t x492 = 28973LLU;
int16_t x493 = INT16_MAX;
uint8_t x499 = 6U;
int16_t x500 = INT16_MIN;
uint64_t x501 = 2464608518467812LLU;
int64_t x504 = -1LL;
uint32_t t92 = 37933U;
static int32_t x509 = 50581;
static int64_t x511 = 790169343LL;
volatile uint16_t x513 = 4473U;
static volatile uint8_t x514 = 3U;
uint64_t x517 = 2991833LLU;
int32_t x524 = INT32_MIN;
volatile uint8_t x528 = UINT8_MAX;
uint64_t t97 = 3632172114305805467LLU;
volatile uint8_t x531 = 12U;
volatile int64_t x542 = -118105841LL;
static int64_t x544 = INT64_MAX;


void f0(void) {
	static uint8_t x1 = 12U;
	uint64_t x2 = UINT64_MAX;
	volatile int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MAX;
	uint64_t t0 = 383LLU;

	t0 = ((x1%(x2-x3))*x4);

	if (t0 != 393204LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int64_t x6 = 1067130572LL;
	int32_t x7 = 17072;
	volatile int64_t t1 = 24302229016723LL;

	t1 = ((x5%(x6-x7))*x8);

	if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	volatile uint8_t x11 = UINT8_MAX;
	uint8_t x12 = 3U;
	uint64_t t2 = 12365165LLU;

	t2 = ((x9%(x10-x11))*x12);

	if (t2 != 1128290050258603989LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 6U;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = 226179242832112842LLU;

	t3 = ((x13%(x14-x15))*x16);

	if (t3 != 1357075456992677052LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x19 = 3U;
	volatile uint64_t x20 = 565804014460772344LLU;

	t4 = ((x17%(x18-x19))*x20);

	if (t4 != 1905649442012513272LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	uint16_t x27 = 259U;
	int32_t t5 = 41055;

	t5 = ((x25%(x26-x27))*x28);

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = -929232779158892LL;
	static int16_t x34 = INT16_MIN;
	static int8_t x35 = -1;
	int16_t x36 = 0;

	t6 = ((x33%(x34-x35))*x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x38 = 29U;
	volatile uint16_t x39 = UINT16_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile uint64_t t7 = 1383629212LLU;

	t7 = ((x37%(x38-x39))*x40);

	if (t7 != 949077870LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -163792;
	int32_t x42 = -46889;
	int32_t x44 = -1;
	int32_t t8 = -372;

	t8 = ((x41%(x42-x43))*x44);

	if (t8 != 23128) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 1824U;
	uint64_t x54 = 4LLU;
	static int8_t x55 = -3;
	volatile uint64_t t9 = 1264LLU;

	t9 = ((x53%(x54-x55))*x56);

	if (t9 != 132LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x58 = 814466LL;
	int8_t x59 = INT8_MAX;
	int8_t x60 = 56;
	int64_t t10 = 8526099710294LL;

	t10 = ((x57%(x58-x59))*x60);

	if (t10 != -56LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = -1;
	uint8_t x72 = 8U;
	volatile int32_t t11 = -865207;

	t11 = ((x69%(x70-x71))*x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x74 = INT8_MIN;
	static int32_t x75 = -1;
	int64_t t12 = 26199694107962LL;

	t12 = ((x73%(x74-x75))*x76);

	if (t12 != -32LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x80 = INT32_MIN;

	t13 = ((x77%(x78-x79))*x80);

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x81 = 2950;
	int64_t x82 = -2718284LL;
	int16_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t14 = 692441813LLU;

	t14 = ((x81%(x82-x83))*x84);

	if (t14 != 18446744073709548666LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = -2437;
	int64_t x86 = -32869LL;
	uint8_t x88 = 40U;

	t15 = ((x85%(x86-x87))*x88);

	if (t15 != 1217960LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = INT64_MAX;
	volatile int8_t x90 = INT8_MIN;
	int8_t x91 = -4;
	uint32_t x92 = UINT32_MAX;
	int64_t t16 = 25743663861984548LL;

	t16 = ((x89%(x90-x91))*x92);

	if (t16 != 30064771065LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x98 = 52469571659643242LL;
	uint64_t x99 = UINT64_MAX;
	int64_t x100 = -1LL;
	uint64_t t17 = 260053367459LLU;

	t17 = ((x97%(x98-x99))*x100);

	if (t17 != 18416819652534778294LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = 1;
	int8_t x106 = -1;
	int32_t x107 = -523446;
	uint32_t t18 = 41U;

	t18 = ((x105%(x106-x107))*x108);

	if (t18 != 398475U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = INT32_MAX;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 1U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x113%(x114-x115))*x116);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = -483779LL;
	int64_t x118 = INT64_MAX;
	uint32_t x119 = UINT32_MAX;
	volatile int64_t t20 = 10370290LL;

	t20 = ((x117%(x118-x119))*x120);

	if (t20 != -1038907491262013LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x121 = 1;
	volatile int32_t x123 = INT32_MIN;
	int32_t t21 = 163423145;

	t21 = ((x121%(x122-x123))*x124);

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x126 = 30U;
	uint64_t x127 = 2LLU;
	int16_t x128 = INT16_MAX;
	static volatile uint64_t t22 = 2LLU;

	t22 = ((x125%(x126-x127))*x128);

	if (t22 != 262136LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x129 = 488258597LLU;
	uint32_t x130 = 108391U;
	int16_t x131 = -453;
	int8_t x132 = -1;

	t23 = ((x129%(x130-x131))*x132);

	if (t23 != 18446744073709458359LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = 5054455;
	volatile uint32_t x143 = UINT32_MAX;
	volatile int32_t x144 = 262073;

	t24 = ((x141%(x142-x143))*x144);

	if (t24 != 14414015U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x149 = UINT8_MAX;
	static volatile int16_t x151 = INT16_MAX;
	uint32_t x152 = UINT32_MAX;
	uint32_t t25 = 23742162U;

	t25 = ((x149%(x150-x151))*x152);

	if (t25 != 4294967041U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x157 = UINT32_MAX;
	static int8_t x159 = 3;
	static uint16_t x160 = UINT16_MAX;
	volatile uint32_t t26 = 312135U;

	t26 = ((x157%(x158-x159))*x160);

	if (t26 != 5308335U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x161 = UINT32_MAX;
	int16_t x162 = -28;
	static uint64_t x163 = 109105491538LLU;
	static int32_t x164 = INT32_MAX;
	volatile uint64_t t27 = 21311466002758LLU;

	t27 = ((x161%(x162-x163))*x164);

	if (t27 != 9223372030412324865LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = -1;
	int16_t x167 = -1607;
	static int16_t x168 = INT16_MIN;
	volatile int32_t t28 = -1735;

	t28 = ((x165%(x166-x167))*x168);

	if (t28 != 48365568) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = -3209;
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	int8_t x172 = -54;

	t29 = ((x169%(x170-x171))*x172);

	if (t29 != 173286) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x177 = 0U;
	volatile uint64_t x179 = 75939277000LLU;

	t30 = ((x177%(x178-x179))*x180);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x182 = INT8_MIN;
	volatile uint8_t x184 = 20U;
	volatile int64_t t31 = 5483110747758LL;

	t31 = ((x181%(x182-x183))*x184);

	if (t31 != -2560LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x185 = 574449288992LLU;
	int32_t x186 = INT32_MIN;
	static uint32_t x187 = 346U;
	int8_t x188 = INT8_MAX;
	volatile uint64_t t32 = 2070462947LLU;

	t32 = ((x185%(x186-x187))*x188);

	if (t32 != 136048414466LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x190 = 4321U;
	static int16_t x191 = INT16_MIN;
	static int32_t x192 = 2470519;

	t33 = ((x189%(x190-x191))*x192);

	if (t33 != 12352595) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = UINT32_MAX;
	static int64_t x194 = -1LL;
	uint32_t x195 = 2002566U;
	uint8_t x196 = 95U;
	volatile int64_t t34 = -879LL;

	t34 = ((x193%(x194-x195))*x196);

	if (t34 != 139046465LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x197 = INT64_MIN;
	static uint8_t x199 = 0U;
	int64_t x200 = -9284188775LL;
	volatile uint64_t t35 = 1485LLU;

	t35 = ((x197%(x198-x199))*x200);

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = -1;
	volatile uint32_t x203 = 5102U;
	uint32_t x204 = UINT32_MAX;
	uint32_t t36 = 319984U;

	t36 = ((x201%(x202-x203))*x204);

	if (t36 != 4294962321U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x205 = -70918904LL;
	uint8_t x206 = 39U;
	static volatile int64_t x207 = INT64_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t37 = 353536275737LLU;

	t37 = ((x205%(x206-x207))*x208);

	if (t37 != 70918904LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	static int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = 6497382LLU;
	volatile uint64_t t38 = 122884287619393LLU;

	t38 = ((x213%(x214-x215))*x216);

	if (t38 != 13953020787636786LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = 137958066934LL;
	static int32_t x218 = -1488176;
	volatile int32_t x219 = INT32_MIN;
	volatile int64_t t39 = -3LL;

	t39 = ((x217%(x218-x219))*x220);

	if (t39 != -20131241197568LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x221 = UINT32_MAX;
	static uint64_t x222 = 48LLU;
	volatile int64_t x223 = -1LL;
	int16_t x224 = -5;

	t40 = ((x221%(x222-x223))*x224);

	if (t40 != 18446744073709551426LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = 567U;
	int32_t x234 = INT32_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	uint64_t x236 = 1991115811548985LLU;

	t41 = ((x233%(x234-x235))*x236);

	if (t41 != 1128962665148274495LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x237 = 1;
	volatile uint32_t x238 = 262U;
	int16_t x239 = 1;
	static volatile uint32_t x240 = UINT32_MAX;

	t42 = ((x237%(x238-x239))*x240);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MAX;
	uint32_t t43 = 49863U;

	t43 = ((x241%(x242-x243))*x244);

	if (t43 != 2147451137U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x245 = INT32_MIN;
	volatile int8_t x246 = -1;
	int16_t x247 = INT16_MAX;
	static int64_t x248 = -19986775877LL;
	volatile int64_t t44 = 3LL;

	t44 = ((x245%(x246-x247))*x248);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x249 = 1U;
	static uint32_t x250 = 37055497U;
	static int32_t x251 = 130776503;
	int16_t x252 = -1;

	t45 = ((x249%(x250-x251))*x252);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	int32_t x256 = -1;
	volatile int64_t t46 = -1149102512641981410LL;

	t46 = ((x253%(x254-x255))*x256);

	if (t46 != -463608187LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x257 = UINT32_MAX;
	static volatile int16_t x258 = -1;
	volatile uint32_t t47 = 967178224U;

	t47 = ((x257%(x258-x259))*x260);

	if (t47 != 29904U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x261 = -1;
	static volatile int64_t x262 = INT64_MIN;
	uint64_t x263 = 1948LLU;
	uint64_t t48 = 49941698LLU;

	t48 = ((x261%(x262-x263))*x264);

	if (t48 != 18446744073581920256LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x269 = -1;
	int32_t x270 = -1;
	volatile int8_t x271 = INT8_MAX;
	static int64_t x272 = 523522857690LL;
	volatile int64_t t49 = -4LL;

	t49 = ((x269%(x270-x271))*x272);

	if (t49 != -523522857690LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MIN;
	volatile uint64_t x275 = UINT64_MAX;
	int64_t x276 = -126LL;
	uint64_t t50 = 132616753LLU;

	t50 = ((x273%(x274-x275))*x276);

	if (t50 != 126LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x281 = 177828112U;
	int64_t x284 = 199904LL;

	t51 = ((x281%(x282-x283))*x284);

	if (t51 != 35548550901248LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x288 = INT64_MIN;
	uint64_t t52 = 51776479937LLU;

	t52 = ((x285%(x286-x287))*x288);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x291 = 0;
	volatile int32_t x292 = -993790;
	volatile int32_t t53 = 9916;

	t53 = ((x289%(x290-x291))*x292);

	if (t53 != 127205120) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x293 = -20986;
	static uint8_t x294 = UINT8_MAX;
	static volatile int32_t t54 = -28687;

	t54 = ((x293%(x294-x295))*x296);

	if (t54 != -732) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -1;
	static int64_t x302 = 23653LL;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;

	t55 = ((x301%(x302-x303))*x304);

	if (t55 != 128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = INT8_MIN;
	static uint16_t x306 = 21479U;
	uint16_t x307 = 8056U;
	int64_t x308 = -1772556192LL;
	volatile int64_t t56 = -3034244757963337LL;

	t56 = ((x305%(x306-x307))*x308);

	if (t56 != 226887192576LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x317 = 2100315829739005056LL;
	uint64_t x318 = 378303757731LLU;
	int8_t x319 = -7;
	static int64_t x320 = INT64_MIN;
	volatile uint64_t t57 = 477LLU;

	t57 = ((x317%(x318-x319))*x320);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	volatile uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 207LLU;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t58 = 24417309778636710LLU;

	t58 = ((x321%(x322-x323))*x324);

	if (t58 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x333 = 205128336LLU;
	int32_t x334 = 22346212;
	int16_t x335 = 3516;
	volatile int8_t x336 = -1;
	volatile uint64_t t59 = 3009107360025LLU;

	t59 = ((x333%(x334-x335))*x336);

	if (t59 != 18446744073705507544LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x338 = 472820948LL;
	static int32_t x340 = 137039;

	t60 = ((x337%(x338-x339))*x340);

	if (t60 != -5574714315835LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x342 = 502843048829799081LLU;
	int16_t x343 = INT16_MAX;
	static int16_t x344 = -1;
	volatile uint64_t t61 = 24538179800455503LLU;

	t61 = ((x341%(x342-x343))*x344);

	if (t61 != 18102349757871620072LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x345 = 116352985192289LLU;
	int16_t x346 = 0;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = -1;
	static volatile uint64_t t62 = 5228675661LLU;

	t62 = ((x345%(x346-x347))*x348);

	if (t62 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x351 = 832733921;
	volatile uint64_t x352 = 24822LLU;

	t63 = ((x349%(x350-x351))*x352);

	if (t63 != 11964597403878LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -92547896013052423LL;
	uint8_t x360 = 62U;
	volatile int64_t t64 = 549612622081LL;

	t64 = ((x357%(x358-x359))*x360);

	if (t64 != -3790080556679203876LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x369 = 317674U;
	static int32_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	int16_t x372 = 0;
	volatile uint32_t t65 = 78U;

	t65 = ((x369%(x370-x371))*x372);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x377 = 25743U;
	int16_t x378 = INT16_MAX;
	int64_t x379 = -1LL;
	volatile int64_t t66 = 4LL;

	t66 = ((x377%(x378-x379))*x380);

	if (t66 != 13257645LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x381 = 14U;
	int32_t x382 = INT32_MAX;
	static int8_t x383 = 33;
	int32_t t67 = 3556;

	t67 = ((x381%(x382-x383))*x384);

	if (t67 != 26208) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x385 = 56953675;
	int32_t x386 = INT32_MAX;
	uint8_t x387 = UINT8_MAX;
	static uint64_t x388 = 3714868977LLU;
	uint64_t t68 = 544602706LLU;

	t68 = ((x385%(x386-x387))*x388);

	if (t68 != 211575440383640475LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x395 = 99LLU;
	uint16_t x396 = 492U;
	volatile uint64_t t69 = 7528000777223070142LLU;

	t69 = ((x393%(x394-x395))*x396);

	if (t69 != 16107588LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x397 = -1LL;
	static int32_t x399 = INT32_MIN;
	uint8_t x400 = UINT8_MAX;
	static int64_t t70 = -2945602963828623LL;

	t70 = ((x397%(x398-x399))*x400);

	if (t70 != -255LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x401 = INT64_MAX;
	static int8_t x402 = 0;
	int16_t x403 = 3;
	uint8_t x404 = 5U;

	t71 = ((x401%(x402-x403))*x404);

	if (t71 != 5LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = -1444525071737LL;
	static int16_t x407 = INT16_MIN;

	t72 = ((x405%(x406-x407))*x408);

	if (t72 != 27412552641664LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = 0;
	volatile int8_t x411 = INT8_MIN;
	static volatile int32_t t73 = 1;

	t73 = ((x409%(x410-x411))*x412);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x417 = UINT64_MAX;
	static int32_t x418 = INT32_MIN;
	static volatile int16_t x419 = INT16_MIN;
	static volatile uint64_t t74 = 45269899369LLU;

	t74 = ((x417%(x418-x419))*x420);

	if (t74 != 4611615645388275713LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x421 = INT64_MIN;
	volatile int32_t x422 = 1017;
	int16_t x423 = INT16_MIN;
	int16_t x424 = -1;
	int64_t t75 = 1170LL;

	t75 = ((x421%(x422-x423))*x424);

	if (t75 != 15643LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x426 = -1;
	static volatile uint32_t x428 = 109043U;
	static volatile int64_t t76 = -1103LL;

	t76 = ((x425%(x426-x427))*x428);

	if (t76 != -3573121024LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x429 = -892;
	uint64_t x430 = 97367078LLU;
	static uint32_t x431 = UINT32_MAX;
	static int32_t x432 = -18;
	uint64_t t77 = 6LLU;

	t77 = ((x429%(x430-x431))*x432);

	if (t77 != 18446743998152763766LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x434 = INT8_MAX;
	int64_t x436 = -1LL;
	uint64_t t78 = 320LLU;

	t78 = ((x433%(x434-x435))*x436);

	if (t78 != 18445736146510410872LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x437 = -3033;
	uint32_t x438 = UINT32_MAX;
	static int32_t x439 = INT32_MIN;
	volatile uint32_t t79 = 144311U;

	t79 = ((x437%(x438-x439))*x440);

	if (t79 != 2147674664U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x443 = 116LLU;
	int8_t x444 = INT8_MIN;
	static volatile uint64_t t80 = 263872847264LLU;

	t80 = ((x441%(x442-x443))*x444);

	if (t80 != 18446743798831646208LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x445 = UINT16_MAX;
	int8_t x446 = INT8_MIN;
	uint8_t x447 = 26U;
	uint32_t x448 = 59U;
	volatile uint32_t t81 = 18U;

	t81 = ((x445%(x446-x447))*x448);

	if (t81 != 5015U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = 45583U;
	uint64_t x450 = UINT64_MAX;
	int64_t x451 = -139383937550596LL;
	static int8_t x452 = INT8_MIN;

	t82 = ((x449%(x450-x451))*x452);

	if (t82 != 18446744073703716992LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x453 = -1;
	volatile uint8_t x454 = 77U;
	uint16_t x455 = 112U;
	static uint16_t x456 = UINT16_MAX;
	volatile int32_t t83 = -13;

	t83 = ((x453%(x454-x455))*x456);

	if (t83 != -65535) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x457 = -33804110794294514LL;
	int32_t x458 = -1;
	static volatile int32_t x459 = INT32_MIN;
	static uint32_t x460 = 926U;
	volatile int64_t t84 = -19836261197168402LL;

	t84 = ((x457%(x458-x459))*x460);

	if (t84 != -1503547180634LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x474 = INT32_MAX;
	uint32_t x475 = 1510316U;
	uint8_t x476 = 44U;

	t85 = ((x473%(x474-x475))*x476);

	if (t85 != 132907852U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x477 = 1;
	int32_t x478 = -11745;
	static volatile uint64_t x479 = 5931854775LLU;
	static volatile int32_t x480 = 993133;

	t86 = ((x477%(x478-x479))*x480);

	if (t86 != 993133LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x481 = INT16_MAX;
	uint32_t x482 = 12039U;
	static int16_t x483 = INT16_MIN;
	volatile uint64_t t87 = 981425994995658LLU;

	t87 = ((x481%(x482-x483))*x484);

	if (t87 != 8945391LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x491 = 3;
	static uint64_t t88 = 7398974160LLU;

	t88 = ((x489%(x490-x491))*x492);

	if (t88 != 86919LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x494 = -219235577945857548LL;
	static int16_t x495 = INT16_MAX;
	volatile uint32_t x496 = UINT32_MAX;
	int64_t t89 = 2LL;

	t89 = ((x493%(x494-x495))*x496);

	if (t89 != 140733193355265LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x497 = -1LL;
	uint16_t x498 = 7U;
	volatile int64_t t90 = -77176LL;

	t90 = ((x497%(x498-x499))*x500);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x502 = INT64_MIN;
	volatile int32_t x503 = INT32_MIN;
	volatile uint64_t t91 = 922165924LLU;

	t91 = ((x501%(x502-x503))*x504);

	if (t91 != 18444279465191083804LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x505 = 79136U;
	volatile int32_t x506 = -1;
	int16_t x507 = -1296;
	int32_t x508 = -1;

	t92 = ((x505%(x506-x507))*x508);

	if (t92 != 4294967155U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x510 = -1;
	int64_t x512 = -1LL;
	int64_t t93 = -16663039851LL;

	t93 = ((x509%(x510-x511))*x512);

	if (t93 != -50581LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x515 = 1;
	volatile uint16_t x516 = 6154U;
	volatile int32_t t94 = -2471183;

	t94 = ((x513%(x514-x515))*x516);

	if (t94 != 6154) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x518 = 60196U;
	static int32_t x519 = -510;
	int64_t x520 = 1LL;
	uint64_t t95 = 473432233LLU;

	t95 = ((x517%(x518-x519))*x520);

	if (t95 != 17239LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x521 = UINT16_MAX;
	uint16_t x522 = 15U;
	int64_t x523 = -1LL;
	volatile int64_t t96 = -5775565350668734LL;

	t96 = ((x521%(x522-x523))*x524);

	if (t96 != -32212254720LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x525 = 81U;
	static uint64_t x526 = 0LLU;
	volatile int8_t x527 = INT8_MAX;

	t97 = ((x525%(x526-x527))*x528);

	if (t97 != 20655LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x529 = 88;
	int8_t x530 = INT8_MIN;
	int64_t x532 = -2841892586151LL;
	int64_t t98 = -111723LL;

	t98 = ((x529%(x530-x531))*x532);

	if (t98 != -250086547581288LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x541 = 0U;
	int32_t x543 = 45313;
	volatile int64_t t99 = -2201803267575LL;

	t99 = ((x541%(x542-x543))*x544);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

