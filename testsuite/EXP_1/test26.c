#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -22842049271956028LL;
volatile uint64_t t0 = 40401LLU;
uint64_t x11 = UINT64_MAX;
volatile uint64_t t2 = 1080478153937943444LLU;
int16_t x26 = -1;
uint64_t t5 = 154625190LLU;
static int64_t x36 = 120563647LL;
uint64_t t7 = 28130LLU;
uint64_t x42 = 1568305535288000820LLU;
volatile uint64_t t8 = 425405223LLU;
uint64_t x51 = 14226LLU;
uint8_t x54 = UINT8_MAX;
static volatile uint16_t x60 = 412U;
int8_t x64 = -1;
int32_t x68 = -17736;
int8_t x69 = -1;
static volatile int8_t x71 = 0;
volatile int32_t x72 = -1;
int16_t x74 = INT16_MAX;
uint16_t x76 = UINT16_MAX;
int8_t x79 = -1;
uint8_t x81 = UINT8_MAX;
int16_t x82 = INT16_MIN;
static int32_t t19 = 0;
int16_t x89 = -20;
int32_t x91 = INT32_MAX;
static volatile uint64_t x93 = 719224899LLU;
int16_t x94 = INT16_MIN;
int64_t x99 = INT64_MAX;
static int8_t x112 = -1;
volatile int16_t x116 = INT16_MAX;
static int32_t t26 = 2;
uint16_t x121 = 54U;
uint32_t x126 = UINT32_MAX;
int32_t x147 = INT32_MAX;
uint16_t x158 = 12U;
static volatile int64_t t35 = -173774LL;
int64_t x169 = 6149440365780LL;
uint8_t x171 = UINT8_MAX;
int16_t x179 = -3357;
int32_t x180 = 0;
int16_t x183 = -1;
volatile uint32_t t38 = 1012848U;
int16_t x188 = -12;
static uint16_t x198 = 18732U;
int8_t x200 = -18;
int16_t x206 = INT16_MIN;
int64_t x207 = INT64_MIN;
int16_t x211 = INT16_MIN;
int64_t x212 = -49486318650508LL;
int64_t t43 = 25230273474LL;
int64_t t45 = 0LL;
int8_t x235 = INT8_MIN;
int32_t t47 = 3791638;
int8_t x244 = -25;
int16_t x246 = -910;
int8_t x247 = -1;
uint64_t x267 = 43291873750LLU;
int8_t x274 = INT8_MIN;
uint64_t x275 = 42754LLU;
uint64_t t54 = 6LLU;
int8_t x280 = INT8_MAX;
volatile int64_t t55 = 15689857752510LL;
int64_t x284 = -34LL;
uint8_t x286 = 20U;
volatile int16_t x297 = INT16_MAX;
int64_t x312 = INT64_MAX;
int16_t x314 = INT16_MAX;
volatile uint16_t x317 = 0U;
uint16_t x332 = 3U;
int32_t x334 = INT32_MIN;
volatile int64_t t67 = -2276753LL;
int8_t x340 = INT8_MAX;
volatile int32_t t68 = 70047;
int8_t x341 = INT8_MAX;
static int8_t x351 = -23;
static volatile uint64_t x369 = UINT64_MAX;
static uint16_t x373 = 18U;
volatile int8_t x385 = INT8_MIN;
int64_t x404 = -1LL;
int8_t x407 = -1;
int64_t x408 = -1LL;
volatile int64_t t80 = -949375744LL;
int32_t x415 = 1518601;
int16_t x432 = INT16_MAX;
uint8_t x447 = UINT8_MAX;
volatile int64_t t87 = 286367545LL;
static volatile int64_t x452 = INT64_MIN;
int64_t t90 = 740983841884LL;
static volatile int16_t x464 = 3;
static uint64_t t92 = 659255796546LLU;
static int32_t x482 = -347;
uint8_t x494 = 100U;
static int64_t x500 = INT64_MIN;
uint32_t x501 = UINT32_MAX;
uint64_t x503 = UINT64_MAX;
uint64_t t98 = 169873055851065558LLU;
int32_t x514 = 251;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x3 = 17513184288934329LLU;
	volatile int16_t x4 = INT16_MIN;

	t0 = (((x1+x2)-x3)^x4);

	if (t0 != 40355233560949771LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	int8_t x10 = 7;
	int8_t x12 = INT8_MIN;
	uint64_t t1 = 26109563141LLU;

	t1 = (((x9+x10)-x11)^x12);

	if (t1 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 448U;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = INT64_MAX;

	t2 = (((x13+x14)-x15)^x16);

	if (t2 != 9223372036854775232LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MAX;
	int16_t x23 = -13943;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t3 = -10186;

	t3 = (((x21+x22)-x23)^x24);

	if (t3 != 2147464950) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 1;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 13U;
	int32_t t4 = -721661;

	t4 = (((x25+x26)-x27)^x28);

	if (t4 != 141) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	int16_t x30 = 1632;
	static uint64_t x31 = 33890150113096252LLU;
	int32_t x32 = INT32_MAX;

	t5 = (((x29+x30)-x31)^x32);

	if (t5 != 18412853925437778908LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -3096198048663479142LL;
	uint16_t x34 = 1U;
	volatile int64_t x35 = -1LL;
	volatile int64_t t6 = -4498165153882819LL;

	t6 = (((x33+x34)-x35)^x36);

	if (t6 != -3096198048648758493LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MAX;
	uint64_t x38 = 31482012798465376LLU;
	static int8_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;

	t7 = (((x37+x38)-x39)^x40);

	if (t7 != 9191890024514893152LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 0;
	volatile uint16_t x43 = 0U;
	static int32_t x44 = -15189;

	t8 = (((x41+x42)-x43)^x44);

	if (t8 != 16878438538421536159LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = UINT16_MAX;
	static volatile int16_t x46 = 3004;
	int8_t x47 = INT8_MAX;
	int8_t x48 = -1;
	volatile int32_t t9 = 216172510;

	t9 = (((x45+x46)-x47)^x48);

	if (t9 != -68413) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x49 = 1;
	static int8_t x50 = -1;
	int32_t x52 = -24932;
	uint64_t t10 = 32545693375896LLU;

	t10 = (((x49+x50)-x51)^x52);

	if (t10 != 22258LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = 125703217735116LLU;
	int16_t x55 = INT16_MIN;
	int16_t x56 = 898;
	volatile uint64_t t11 = 24273LLU;

	t11 = (((x53+x54)-x55)^x56);

	if (t11 != 125703217767753LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 13693171332LLU;
	int64_t x58 = -27039455730LL;
	static volatile int8_t x59 = INT8_MIN;
	static uint64_t t12 = 875LLU;

	t12 = (((x57+x58)-x59)^x60);

	if (t12 != 18446744060363267214LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -44887136692464808LL;
	static int8_t x62 = INT8_MAX;
	uint32_t x63 = 167544U;
	volatile int64_t t13 = -215LL;

	t13 = (((x61+x62)-x63)^x64);

	if (t13 != 44887136692632224LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = 29242U;
	int8_t x66 = INT8_MIN;
	int16_t x67 = -1;
	uint32_t t14 = 2U;

	t14 = (((x65+x66)-x67)^x68);

	if (t14 != 4294953731U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x70 = UINT32_MAX;
	uint32_t t15 = 30298U;

	t15 = (((x69+x70)-x71)^x72);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 233739229U;
	static uint8_t x75 = 31U;
	uint32_t t16 = 108479992U;

	t16 = (((x73+x74)-x75)^x76);

	if (t16 != 233827394U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 1191914604970LLU;
	int8_t x78 = 6;
	int32_t x80 = 2;
	uint64_t t17 = 128321LLU;

	t17 = (((x77+x78)-x79)^x80);

	if (t17 != 1191914604979LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x83 = UINT64_MAX;
	static int64_t x84 = -1LL;
	static uint64_t t18 = 80LLU;

	t18 = (((x81+x82)-x83)^x84);

	if (t18 != 32511LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x85 = 6U;
	int8_t x86 = -1;
	static int32_t x87 = -11;
	uint8_t x88 = 3U;

	t19 = (((x85+x86)-x87)^x88);

	if (t19 != 19) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = 397U;
	int64_t x92 = -341563LL;
	volatile int64_t t20 = -2221326453LL;

	t20 = (((x89+x90)-x91)^x92);

	if (t20 != 2147141823LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x95 = UINT16_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile uint64_t t21 = 5LLU;

	t21 = (((x93+x94)-x95)^x96);

	if (t21 != 18446744072990392388LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	uint32_t x98 = 807095U;
	volatile int16_t x100 = 41;
	volatile int64_t t22 = 10416357419392969LL;

	t22 = (((x97+x98)-x99)^x100);

	if (t22 != -9223372036853968738LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x101 = 889747479031581961LL;
	int32_t x102 = INT32_MAX;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = 1;
	volatile int64_t t23 = -24799749519LL;

	t23 = (((x101+x102)-x103)^x104);

	if (t23 != 889747481179000072LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 60LLU;
	int64_t x110 = -1LL;
	volatile int64_t x111 = INT64_MIN;
	uint64_t t24 = 58947388983988814LLU;

	t24 = (((x109+x110)-x111)^x112);

	if (t24 != 9223372036854775748LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = -4LL;
	uint32_t x114 = 766274624U;
	volatile int16_t x115 = INT16_MIN;
	volatile int64_t t25 = 553LL;

	t25 = (((x113+x114)-x115)^x116);

	if (t25 != 766284739LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	volatile int8_t x118 = -2;
	int8_t x119 = -5;
	int32_t x120 = -1;

	t26 = (((x117+x118)-x119)^x120);

	if (t26 != -32771) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = -4786LL;
	volatile int64_t x123 = 95533160677552938LL;
	volatile uint8_t x124 = UINT8_MAX;
	int64_t t27 = -44210623620LL;

	t27 = (((x121+x122)-x123)^x124);

	if (t27 != -95533160677557595LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 41U;
	int8_t x127 = 30;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t28 = 6LL;

	t28 = (((x125+x126)-x127)^x128);

	if (t28 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = -1;
	int16_t x130 = -1;
	uint8_t x131 = 7U;
	int32_t x132 = INT32_MAX;
	static int32_t t29 = 947513;

	t29 = (((x129+x130)-x131)^x132);

	if (t29 != -2147483640) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = UINT32_MAX;
	static volatile uint32_t x134 = 1250959418U;
	int8_t x135 = INT8_MIN;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t30 = -2608581LL;

	t30 = (((x133+x134)-x135)^x136);

	if (t30 != -9223372035603816263LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x137 = 60U;
	static uint64_t x138 = 106LLU;
	uint64_t x139 = 0LLU;
	uint8_t x140 = 2U;
	volatile uint64_t t31 = 2788LLU;

	t31 = (((x137+x138)-x139)^x140);

	if (t31 != 164LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = 18185158;
	int8_t x142 = INT8_MAX;
	int32_t x143 = -3767;
	int64_t x144 = -1LL;
	int64_t t32 = 846LL;

	t32 = (((x141+x142)-x143)^x144);

	if (t32 != -18189053LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	volatile int16_t x146 = INT16_MIN;
	int8_t x148 = -21;
	static uint32_t t33 = 51313U;

	t33 = (((x145+x146)-x147)^x148);

	if (t33 != 2147516395U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = 14;
	static int64_t x159 = -1LL;
	int16_t x160 = INT16_MAX;
	volatile int64_t t34 = -3456473024040LL;

	t34 = (((x157+x158)-x159)^x160);

	if (t34 != 32740LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MAX;
	static volatile int32_t x167 = 6920973;
	int64_t x168 = -2144745LL;

	t35 = (((x165+x166)-x167)^x168);

	if (t35 != -2142592283LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x170 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	static volatile int64_t t36 = -1781LL;

	t36 = (((x169+x170)-x171)^x172);

	if (t36 != -9223365887414428630LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x177 = INT8_MIN;
	static int32_t x178 = -1363;
	int32_t t37 = 74323249;

	t37 = (((x177+x178)-x179)^x180);

	if (t37 != 1866) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -10968041;
	int32_t x182 = -13934143;
	volatile uint32_t x184 = UINT32_MAX;

	t38 = (((x181+x182)-x183)^x184);

	if (t38 != 24902182U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = -48LL;
	int32_t x186 = INT32_MAX;
	int32_t x187 = -1;
	int64_t t39 = -17LL;

	t39 = (((x185+x186)-x187)^x188);

	if (t39 != -2147483612LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x197 = 1U;
	int16_t x199 = -1;
	volatile int32_t t40 = 9367;

	t40 = (((x197+x198)-x199)^x200);

	if (t40 != -18752) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = 40U;
	int16_t x202 = 6;
	volatile int64_t x203 = 24072801118625387LL;
	volatile int64_t x204 = INT64_MIN;
	int64_t t41 = 1LL;

	t41 = (((x201+x202)-x203)^x204);

	if (t41 != 9199299235736150467LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = -1LL;
	int8_t x208 = -1;
	volatile int64_t t42 = -2958LL;

	t42 = (((x205+x206)-x207)^x208);

	if (t42 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x209 = INT8_MAX;
	uint16_t x210 = 8084U;

	t43 = (((x209+x210)-x211)^x212);

	if (t43 != -49486318625945LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x217 = 0U;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = 10;
	int64_t x220 = -1LL;
	uint64_t t44 = 20598190LLU;

	t44 = (((x217+x218)-x219)^x220);

	if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x225 = INT32_MAX;
	uint32_t x226 = 106807U;
	int64_t x227 = 32686363LL;
	volatile uint32_t x228 = 192918863U;

	t45 = (((x225+x226)-x227)^x228);

	if (t45 != 1970361684LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x229 = UINT8_MAX;
	volatile uint64_t x230 = 75LLU;
	uint8_t x231 = 14U;
	static int16_t x232 = INT16_MAX;
	uint64_t t46 = 354892184100116LLU;

	t46 = (((x229+x230)-x231)^x232);

	if (t46 != 32451LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -399511047;
	int8_t x234 = INT8_MIN;
	int8_t x236 = -1;

	t47 = (((x233+x234)-x235)^x236);

	if (t47 != 399511046) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int64_t x238 = -78015LL;
	uint8_t x239 = 126U;
	volatile uint8_t x240 = UINT8_MAX;
	uint64_t t48 = 1633759995LLU;

	t48 = (((x237+x238)-x239)^x240);

	if (t48 != 18446744073709473341LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x241 = 26364283U;
	int16_t x242 = -1;
	static uint16_t x243 = 191U;
	volatile uint32_t t49 = 11155U;

	t49 = (((x241+x242)-x243)^x244);

	if (t49 != 4268603228U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = 767U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t50 = -1;

	t50 = (((x245+x246)-x247)^x248);

	if (t50 != 32626) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = 385;
	uint64_t x250 = 4113911734LLU;
	int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	uint64_t t51 = 75183834708333494LLU;

	t51 = (((x249+x250)-x251)^x252);

	if (t51 != 9223372034526236984LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x253 = 7246145;
	int8_t x254 = INT8_MIN;
	static uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MAX;
	volatile uint32_t t52 = 190875015U;

	t52 = (((x253+x254)-x255)^x256);

	if (t52 != 2140237629U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = 3509;
	static uint16_t x266 = 28591U;
	int64_t x268 = 181757LL;
	uint64_t t53 = 2355457044014LLU;

	t53 = (((x265+x266)-x267)^x268);

	if (t53 != 18446744030417530483LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x273 = -1;
	volatile uint32_t x276 = 1641U;

	t54 = (((x273+x274)-x275)^x276);

	if (t54 != 18446744073709510164LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = -1;
	int16_t x278 = 937;
	int64_t x279 = INT64_MAX;

	t55 = (((x277+x278)-x279)^x280);

	if (t55 != -9223372036854774826LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x281 = 16146U;
	int32_t x282 = -69570;
	uint8_t x283 = UINT8_MAX;
	volatile int64_t t56 = 265235088793710367LL;

	t56 = (((x281+x282)-x283)^x284);

	if (t56 != -4294913649LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = UINT8_MAX;
	uint32_t x287 = 2591U;
	uint16_t x288 = 3084U;
	volatile uint32_t t57 = 211381351U;

	t57 = (((x285+x286)-x287)^x288);

	if (t57 != 4294966008U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x293 = 1134887522LLU;
	int16_t x294 = -6;
	int32_t x295 = INT32_MIN;
	static uint32_t x296 = UINT32_MAX;
	uint64_t t58 = 11633892603LLU;

	t58 = (((x293+x294)-x295)^x296);

	if (t58 != 1012596131LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x298 = 5U;
	int16_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	int32_t t59 = 13;

	t59 = (((x297+x298)-x299)^x300);

	if (t59 != 33018) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x301 = 8604U;
	int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MIN;
	int32_t x304 = -1;
	volatile int64_t t60 = 445278LL;

	t60 = (((x301+x302)-x303)^x304);

	if (t60 != -8605LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x305 = 557004U;
	volatile int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MAX;
	int64_t t61 = -79244256887917679LL;

	t61 = (((x305+x306)-x307)^x308);

	if (t61 != 9223372034706702387LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = 10609843U;
	int16_t x311 = INT16_MAX;
	volatile int64_t t62 = 1LL;

	t62 = (((x309+x310)-x311)^x312);

	if (t62 != 9223372036844231499LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x315 = 0;
	static uint32_t x316 = 3410U;
	static volatile uint32_t t63 = 19U;

	t63 = (((x313+x314)-x315)^x316);

	if (t63 != 36268U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x318 = 223U;
	volatile int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MAX;
	static uint32_t t64 = 59861416U;

	t64 = (((x317+x318)-x319)^x320);

	if (t64 != 32671U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = -275LL;
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t65 = 1293771694LLU;

	t65 = (((x321+x322)-x323)^x324);

	if (t65 != 2147417837LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x329 = 27572U;
	volatile int16_t x330 = INT16_MAX;
	int16_t x331 = -10985;
	uint32_t t66 = 1419554268U;

	t66 = (((x329+x330)-x331)^x332);

	if (t66 != 71327U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = -1LL;
	volatile uint8_t x335 = 1U;
	int64_t x336 = -39404751507LL;

	t67 = (((x333+x334)-x335)^x336);

	if (t67 != 41552235155LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x337 = INT8_MIN;
	static int16_t x338 = -1;
	int16_t x339 = -1;

	t68 = (((x337+x338)-x339)^x340);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x342 = INT16_MAX;
	static int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t69 = -1594;

	t69 = (((x341+x342)-x343)^x344);

	if (t69 != -65282) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x345 = 8U;
	int16_t x346 = INT16_MIN;
	volatile int16_t x347 = -1779;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t70 = 14162U;

	t70 = (((x345+x346)-x347)^x348);

	if (t70 != 30980U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x349 = INT32_MAX;
	uint32_t x350 = 204140559U;
	uint32_t x352 = UINT32_MAX;
	static uint32_t t71 = 619933U;

	t71 = (((x349+x350)-x351)^x352);

	if (t71 != 1943343066U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x361 = 7U;
	int64_t x362 = 1322094289569LL;
	static int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t72 = 56LLU;

	t72 = (((x361+x362)-x363)^x364);

	if (t72 != 18446742751615229271LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	int8_t x372 = INT8_MIN;
	uint64_t t73 = 3584058671LLU;

	t73 = (((x369+x370)-x371)^x372);

	if (t73 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x374 = 1724U;
	static uint8_t x375 = UINT8_MAX;
	int16_t x376 = -1;
	int32_t t74 = 72384748;

	t74 = (((x373+x374)-x375)^x376);

	if (t74 != -1488) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MIN;
	int32_t x380 = -1;
	int32_t t75 = INT32_MIN;

	t75 = (((x377+x378)-x379)^x380);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x386 = 29U;
	volatile uint64_t x387 = 54390637LLU;
	int32_t x388 = INT32_MAX;
	uint64_t t76 = 277429726LLU;

	t76 = (((x385+x386)-x387)^x388);

	if (t76 != 18446744071616458703LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x393 = 11U;
	int16_t x394 = 1;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 357U;
	volatile uint32_t t77 = 25678895U;

	t77 = (((x393+x394)-x395)^x396);

	if (t77 != 489U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x397 = 686U;
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MAX;
	volatile int32_t t78 = -60059;

	t78 = (((x397+x398)-x399)^x400);

	if (t78 != 32081) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = 5852355902050647LL;
	int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MIN;
	int64_t t79 = 39769LL;

	t79 = (((x401+x402)-x403)^x404);

	if (t79 != 9217519680952692392LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x405 = -9521506;
	int16_t x406 = -1;

	t80 = (((x405+x406)-x407)^x408);

	if (t80 != 9521505LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x409 = 208U;
	uint8_t x410 = 33U;
	volatile int16_t x411 = INT16_MAX;
	int64_t x412 = -30949LL;
	int64_t t81 = 1021098474625LL;

	t81 = (((x409+x410)-x411)^x412);

	if (t81 != 2025LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x413 = UINT64_MAX;
	int16_t x414 = -1;
	static int8_t x416 = INT8_MIN;
	static uint64_t t82 = 35LLU;

	t82 = (((x413+x414)-x415)^x416);

	if (t82 != 1518709LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x417 = UINT64_MAX;
	uint64_t x418 = 2966LLU;
	int8_t x419 = INT8_MIN;
	static int32_t x420 = -1;
	volatile uint64_t t83 = 81154088055459915LLU;

	t83 = (((x417+x418)-x419)^x420);

	if (t83 != 18446744073709548522LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x425 = 42U;
	static int16_t x426 = INT16_MAX;
	uint64_t x427 = 22443838258LLU;
	static uint8_t x428 = 14U;
	volatile uint64_t t84 = 29LLU;

	t84 = (((x425+x426)-x427)^x428);

	if (t84 != 18446744051265746169LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x429 = INT8_MIN;
	int64_t x430 = 27646478072LL;
	volatile uint8_t x431 = UINT8_MAX;
	static volatile int64_t t85 = 426734998041012LL;

	t85 = (((x429+x430)-x431)^x432);

	if (t85 != 27646474886LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = INT32_MAX;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = 472248;
	int64_t x436 = INT64_MIN;
	static int64_t t86 = -124LL;

	t86 = (((x433+x434)-x435)^x436);

	if (t86 != -9223372034707764537LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x445 = -1;
	volatile int64_t x446 = -97861LL;
	int8_t x448 = -1;

	t87 = (((x445+x446)-x447)^x448);

	if (t87 != 98116LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x449 = 651U;
	static int8_t x450 = 15;
	int8_t x451 = INT8_MIN;
	volatile int64_t t88 = 1779LL;

	t88 = (((x449+x450)-x451)^x452);

	if (t88 != -9223372036854775014LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MAX;
	static volatile int32_t x454 = -30;
	uint8_t x455 = 5U;
	int8_t x456 = -1;
	int32_t t89 = 1047179;

	t89 = (((x453+x454)-x455)^x456);

	if (t89 != -93) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = 4;
	static int8_t x458 = 9;
	volatile int64_t x459 = -1LL;
	int8_t x460 = -2;

	t90 = (((x457+x458)-x459)^x460);

	if (t90 != -16LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x461 = -1;
	int8_t x462 = -1;
	static int8_t x463 = INT8_MIN;
	static volatile int32_t t91 = 663788489;

	t91 = (((x461+x462)-x463)^x464);

	if (t91 != 125) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x469 = -3867;
	static int16_t x470 = 3;
	int64_t x471 = INT64_MIN;
	uint64_t x472 = UINT64_MAX;

	t92 = (((x469+x470)-x471)^x472);

	if (t92 != 9223372036854779671LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x473 = 3538;
	int32_t x474 = 2002;
	int16_t x475 = INT16_MIN;
	static volatile int64_t x476 = INT64_MAX;
	static volatile int64_t t93 = 16638252419301LL;

	t93 = (((x473+x474)-x475)^x476);

	if (t93 != 9223372036854737499LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = INT8_MIN;
	static volatile uint8_t x478 = 51U;
	int8_t x479 = INT8_MIN;
	int8_t x480 = 1;
	static volatile int32_t t94 = 2246;

	t94 = (((x477+x478)-x479)^x480);

	if (t94 != 50) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x481 = -1LL;
	static uint8_t x483 = 2U;
	uint16_t x484 = 0U;
	int64_t t95 = 8398145445220727LL;

	t95 = (((x481+x482)-x483)^x484);

	if (t95 != -350LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x493 = 449104LL;
	volatile uint16_t x495 = 29683U;
	int16_t x496 = INT16_MIN;
	volatile int64_t t96 = -132584748064748659LL;

	t96 = (((x493+x494)-x495)^x496);

	if (t96 != -399679LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x497 = -104;
	uint32_t x498 = 77792U;
	int8_t x499 = -1;
	static int64_t t97 = 3LL;

	t97 = (((x497+x498)-x499)^x500);

	if (t97 != -9223372036854698119LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x502 = INT32_MIN;
	int16_t x504 = -1;

	t98 = (((x501+x502)-x503)^x504);

	if (t98 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x513 = 28704611388751434LLU;
	volatile int64_t x515 = INT64_MIN;
	uint16_t x516 = 30U;
	volatile uint64_t t99 = 282494635231LLU;

	t99 = (((x513+x514)-x515)^x516);

	if (t99 != 9252076648243527515LLU) { NG(); } else { ; }
	
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

