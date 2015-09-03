#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 52U;
uint8_t x6 = UINT8_MAX;
int32_t x7 = INT32_MIN;
uint32_t x16 = 14319611U;
volatile int32_t t3 = 1632;
static int8_t x17 = INT8_MIN;
int32_t x23 = -1;
int16_t x34 = -503;
int32_t t8 = 7801490;
uint32_t x60 = UINT32_MAX;
volatile uint64_t x69 = 105LLU;
volatile int32_t x80 = INT32_MIN;
int16_t x81 = INT16_MAX;
static int16_t x82 = -1;
int64_t x105 = -1LL;
uint64_t x108 = UINT64_MAX;
static int32_t x111 = -5;
static int16_t x132 = INT16_MAX;
int8_t x136 = INT8_MAX;
int32_t t22 = 507217;
int8_t x143 = INT8_MIN;
int32_t t28 = 1404;
int8_t x169 = 0;
volatile int32_t t29 = 5390;
uint16_t x174 = 10U;
volatile int32_t t30 = -46013;
uint32_t x178 = UINT32_MAX;
uint16_t x189 = 3567U;
static int16_t x201 = -1;
volatile int8_t x203 = -1;
static volatile uint16_t x215 = 4728U;
int16_t x216 = INT16_MIN;
int32_t t35 = -19545;
volatile uint64_t x252 = 271485030058728LLU;
volatile int16_t x254 = INT16_MIN;
uint8_t x258 = 29U;
int8_t x274 = INT8_MIN;
static uint32_t x276 = 132086695U;
volatile uint64_t x283 = 114716LLU;
uint16_t x286 = UINT16_MAX;
volatile int32_t x287 = INT32_MIN;
volatile int32_t t47 = 7590;
static int32_t x294 = INT32_MIN;
volatile int64_t x295 = -1LL;
volatile int16_t x304 = INT16_MIN;
uint8_t x305 = 1U;
int32_t x306 = -39161;
volatile uint64_t x309 = 7374LLU;
volatile int16_t x311 = INT16_MAX;
static int8_t x319 = INT8_MAX;
int16_t x324 = INT16_MAX;
int16_t x329 = -1;
uint16_t x332 = 19U;
volatile uint64_t x337 = 55774330LLU;
uint64_t x341 = UINT64_MAX;
static int32_t x345 = 145;
int16_t x348 = INT16_MIN;
int16_t x351 = 73;
int64_t x352 = -1222LL;
volatile int32_t x358 = 256918;
int64_t x359 = INT64_MIN;
int8_t x365 = -1;
int16_t x370 = 1;
int16_t x371 = -6023;
volatile int32_t t65 = -403556148;
uint32_t x384 = 2U;
int8_t x386 = INT8_MIN;
uint16_t x388 = 2U;
volatile uint32_t x390 = 825794898U;
int16_t x391 = 3404;
uint64_t x397 = UINT64_MAX;
volatile int32_t t69 = 6564013;
static uint64_t x402 = 6787886047980LLU;
static uint8_t x405 = UINT8_MAX;
int32_t t71 = -154704;
int16_t x413 = INT16_MIN;
int32_t x415 = INT32_MIN;
volatile int32_t x416 = INT32_MAX;
uint32_t x417 = 1895U;
uint16_t x420 = 1U;
int32_t x423 = INT32_MIN;
volatile uint32_t x438 = UINT32_MAX;
uint8_t x439 = UINT8_MAX;
static uint32_t x440 = 63U;
uint64_t x441 = 571829663643920LLU;
int8_t x442 = INT8_MIN;
uint8_t x446 = 7U;
int8_t x453 = -1;
static uint64_t x457 = 29LLU;
int64_t x461 = -1LL;
uint8_t x462 = 52U;
int8_t x465 = INT8_MAX;
int32_t x474 = -1716576;
int32_t t86 = -87558;
uint8_t x477 = UINT8_MAX;
uint8_t x480 = 14U;
static uint16_t x482 = UINT16_MAX;
volatile int8_t x488 = -14;
int8_t x497 = -1;
int16_t x498 = INT16_MAX;
int16_t x509 = 241;
uint16_t x515 = 2913U;
static volatile int64_t x517 = -7239096LL;
int32_t t94 = -7775;
volatile int16_t x531 = -1;
volatile int32_t t97 = 3;
uint64_t x556 = 1946215703423802LLU;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MAX;
	static int64_t x4 = -1LL;
	volatile int32_t t0 = -1;

	t0 = (((x1*x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 65197U;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 54399803;

	t1 = (((x5*x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -8623038844475LL;
	int32_t x10 = -1;
	uint32_t x11 = 85U;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -421449;

	t2 = (((x9*x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 94605U;
	int64_t x14 = -769465964041LL;
	int64_t x15 = INT64_MAX;

	t3 = (((x13*x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = 1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 5;

	t4 = (((x17*x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int32_t x22 = -1;
	volatile int64_t x24 = 8217271LL;
	int32_t t5 = 211;

	t5 = (((x21*x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int32_t x26 = -32;
	int64_t x27 = 1271858736LL;
	volatile int8_t x28 = 60;
	volatile int32_t t6 = 0;

	t6 = (((x25*x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -2654LL;
	volatile uint8_t x30 = 117U;
	static volatile int8_t x31 = INT8_MAX;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -113;

	t7 = (((x29*x30)%x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 3U;
	int64_t x35 = INT64_MAX;
	uint32_t x36 = UINT32_MAX;

	t8 = (((x33*x34)%x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x58 = 0U;
	uint32_t x59 = 4U;
	int32_t t9 = 13361;

	t9 = (((x57*x58)%x59)==x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 17U;
	uint16_t x66 = UINT16_MAX;
	uint8_t x67 = UINT8_MAX;
	uint16_t x68 = 1507U;
	volatile int32_t t10 = -1310691;

	t10 = (((x65*x66)%x67)==x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MIN;
	volatile uint64_t x72 = 46895776355LLU;
	int32_t t11 = 894652;

	t11 = (((x69*x70)%x71)==x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 3990824045344465493LLU;
	static uint32_t x75 = UINT32_MAX;
	int16_t x76 = -38;
	int32_t t12 = 0;

	t12 = (((x73*x74)%x75)==x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = 33719U;
	int8_t x78 = 0;
	int32_t x79 = -1;
	int32_t t13 = -176254324;

	t13 = (((x77*x78)%x79)==x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x83 = -1;
	uint32_t x84 = 16785U;
	volatile int32_t t14 = 10383470;

	t14 = (((x81*x82)%x83)==x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -3;
	static int32_t x86 = -39;
	static uint64_t x87 = 150834427824LLU;
	static volatile uint16_t x88 = UINT16_MAX;
	static volatile int32_t t15 = -728686;

	t15 = (((x85*x86)%x87)==x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x90 = 13308567535837670LLU;
	int8_t x91 = -2;
	int16_t x92 = INT16_MIN;
	volatile int32_t t16 = 15690365;

	t16 = (((x89*x90)%x91)==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = 0;
	uint16_t x94 = 51U;
	volatile uint16_t x95 = 3832U;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t17 = 4917133;

	t17 = (((x93*x94)%x95)==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x106 = -1LL;
	uint64_t x107 = 6430939473171702LLU;
	int32_t t18 = 1;

	t18 = (((x105*x106)%x107)==x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = -4069800007216LL;
	volatile int64_t x112 = -1LL;
	int32_t t19 = 78318610;

	t19 = (((x109*x110)%x111)==x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x121 = INT32_MAX;
	static int64_t x122 = -388116LL;
	volatile uint8_t x123 = UINT8_MAX;
	static uint8_t x124 = 12U;
	int32_t t20 = 32236208;

	t20 = (((x121*x122)%x123)==x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = 7;
	int16_t x130 = -1;
	static uint16_t x131 = UINT16_MAX;
	int32_t t21 = -564460105;

	t21 = (((x129*x130)%x131)==x132);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x133 = 257181LLU;
	uint64_t x134 = 118306724LLU;
	int8_t x135 = 1;

	t22 = (((x133*x134)%x135)==x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x141 = UINT8_MAX;
	uint32_t x142 = 91U;
	uint64_t x144 = 9696583LLU;
	volatile int32_t t23 = 2861087;

	t23 = (((x141*x142)%x143)==x144);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x145 = 3776144679144378LLU;
	static int8_t x146 = 6;
	static int32_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	int32_t t24 = 119;

	t24 = (((x145*x146)%x147)==x148);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = 76U;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = INT32_MIN;
	volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t25 = 238297733;

	t25 = (((x149*x150)%x151)==x152);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x153 = 126;
	int16_t x154 = 1;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = 133101236U;
	int32_t t26 = -474;

	t26 = (((x153*x154)%x155)==x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = 1587LL;
	int64_t x163 = 10211824LL;
	static volatile int16_t x164 = INT16_MIN;
	static int32_t t27 = 361697;

	t27 = (((x161*x162)%x163)==x164);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x165 = 0U;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -491;
	int64_t x168 = -17527372LL;

	t28 = (((x165*x166)%x167)==x168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x170 = 1712979310818064181LLU;
	static uint64_t x171 = 225589442397279LLU;
	static int32_t x172 = INT32_MAX;

	t29 = (((x169*x170)%x171)==x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x173 = 38U;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;

	t30 = (((x173*x174)%x175)==x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x177 = 1;
	static int16_t x179 = INT16_MIN;
	uint64_t x180 = UINT64_MAX;
	int32_t t31 = -3107;

	t31 = (((x177*x178)%x179)==x180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x190 = -1;
	static int64_t x191 = -260165693822187438LL;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t32 = -6778;

	t32 = (((x189*x190)%x191)==x192);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x202 = INT16_MAX;
	int8_t x204 = INT8_MAX;
	int32_t t33 = -1545147;

	t33 = (((x201*x202)%x203)==x204);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x205 = 9070301;
	int16_t x206 = 125;
	uint8_t x207 = 7U;
	uint32_t x208 = 30808861U;
	volatile int32_t t34 = 391;

	t34 = (((x205*x206)%x207)==x208);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = -1;

	t35 = (((x213*x214)%x215)==x216);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x225 = INT16_MAX;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	int32_t t36 = -383570;

	t36 = (((x225*x226)%x227)==x228);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x229 = -1;
	int8_t x230 = -1;
	static int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t37 = -1487;

	t37 = (((x229*x230)%x231)==x232);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x233 = 1;
	int32_t x234 = 105;
	volatile int64_t x235 = INT64_MIN;
	int64_t x236 = -279819266843336LL;
	int32_t t38 = -525302;

	t38 = (((x233*x234)%x235)==x236);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x237 = -1LL;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = -30;
	static volatile int32_t t39 = -1;

	t39 = (((x237*x238)%x239)==x240);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	int16_t x243 = 908;
	int8_t x244 = INT8_MIN;
	volatile int32_t t40 = 61253302;

	t40 = (((x241*x242)%x243)==x244);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x249 = 1538LL;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -2415517LL;
	volatile int32_t t41 = 902;

	t41 = (((x249*x250)%x251)==x252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x253 = 10647738U;
	uint32_t x255 = UINT32_MAX;
	static int8_t x256 = -1;
	volatile int32_t t42 = -44328117;

	t42 = (((x253*x254)%x255)==x256);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x257 = -1;
	int8_t x259 = -1;
	int32_t x260 = INT32_MAX;
	int32_t t43 = -1;

	t43 = (((x257*x258)%x259)==x260);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x269 = 31103698LL;
	uint32_t x270 = 11669912U;
	uint8_t x271 = 5U;
	static int32_t x272 = INT32_MIN;
	int32_t t44 = 836737499;

	t44 = (((x269*x270)%x271)==x272);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x273 = 1U;
	volatile int8_t x275 = INT8_MAX;
	int32_t t45 = -113431944;

	t45 = (((x273*x274)%x275)==x276);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x281 = 14441U;
	static uint64_t x282 = 89443503704774LLU;
	uint16_t x284 = 113U;
	static volatile int32_t t46 = 11674291;

	t46 = (((x281*x282)%x283)==x284);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x285 = INT16_MIN;
	uint32_t x288 = 21175U;

	t47 = (((x285*x286)%x287)==x288);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x293 = 8U;
	int32_t x296 = INT32_MIN;
	int32_t t48 = -4835903;

	t48 = (((x293*x294)%x295)==x296);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x301 = INT16_MIN;
	uint64_t x302 = 126862324590LLU;
	static uint32_t x303 = 4707909U;
	int32_t t49 = 1;

	t49 = (((x301*x302)%x303)==x304);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x307 = INT32_MIN;
	int32_t x308 = -177798;
	volatile int32_t t50 = -761428536;

	t50 = (((x305*x306)%x307)==x308);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x310 = INT8_MAX;
	uint64_t x312 = 10341292745850LLU;
	volatile int32_t t51 = -1;

	t51 = (((x309*x310)%x311)==x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x317 = 2288458208LLU;
	uint8_t x318 = 0U;
	volatile int32_t x320 = -13839;
	int32_t t52 = 20;

	t52 = (((x317*x318)%x319)==x320);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = 39;
	int16_t x323 = 842;
	int32_t t53 = 14188220;

	t53 = (((x321*x322)%x323)==x324);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x325 = 384081524U;
	uint16_t x326 = 1U;
	static int64_t x327 = -50321LL;
	uint64_t x328 = UINT64_MAX;
	static volatile int32_t t54 = -328428624;

	t54 = (((x325*x326)%x327)==x328);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x330 = 2057831748449506994LLU;
	uint16_t x331 = UINT16_MAX;
	static volatile int32_t t55 = -14;

	t55 = (((x329*x330)%x331)==x332);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x333 = -56857;
	uint64_t x334 = UINT64_MAX;
	static volatile uint64_t x335 = 3052068LLU;
	static int32_t x336 = -3;
	int32_t t56 = -121;

	t56 = (((x333*x334)%x335)==x336);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x338 = 10359U;
	volatile int32_t x339 = -1;
	static int8_t x340 = -1;
	int32_t t57 = 889440;

	t57 = (((x337*x338)%x339)==x340);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x342 = INT8_MAX;
	int64_t x343 = -1LL;
	uint64_t x344 = 7LLU;
	volatile int32_t t58 = 24;

	t58 = (((x341*x342)%x343)==x344);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x346 = INT16_MAX;
	volatile uint8_t x347 = 6U;
	static int32_t t59 = 10653;

	t59 = (((x345*x346)%x347)==x348);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x349 = -1;
	uint8_t x350 = 2U;
	volatile int32_t t60 = 14734;

	t60 = (((x349*x350)%x351)==x352);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x353 = INT16_MIN;
	static int16_t x354 = INT16_MIN;
	int32_t x355 = -20588;
	static uint8_t x356 = 7U;
	int32_t t61 = -680533;

	t61 = (((x353*x354)%x355)==x356);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x357 = 1568U;
	volatile int16_t x360 = INT16_MAX;
	static int32_t t62 = -19613517;

	t62 = (((x357*x358)%x359)==x360);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x366 = 3318319LLU;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;
	int32_t t63 = -490929;

	t63 = (((x365*x366)%x367)==x368);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x369 = INT8_MIN;
	volatile uint8_t x372 = UINT8_MAX;
	int32_t t64 = -32;

	t64 = (((x369*x370)%x371)==x372);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = INT16_MAX;
	static int32_t x374 = 1;
	uint32_t x375 = 842U;
	uint32_t x376 = 80211868U;

	t65 = (((x373*x374)%x375)==x376);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x381 = INT16_MIN;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = -4;
	volatile int32_t t66 = -9474;

	t66 = (((x381*x382)%x383)==x384);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x385 = -13;
	volatile int64_t x387 = 29750347946LL;
	volatile int32_t t67 = -109177327;

	t67 = (((x385*x386)%x387)==x388);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x389 = INT16_MIN;
	int16_t x392 = -1;
	volatile int32_t t68 = -244;

	t68 = (((x389*x390)%x391)==x392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x398 = INT16_MIN;
	int32_t x399 = 18192118;
	int32_t x400 = INT32_MIN;

	t69 = (((x397*x398)%x399)==x400);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x401 = INT32_MIN;
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t70 = 113208428;

	t70 = (((x401*x402)%x403)==x404);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x406 = 25729U;
	volatile int8_t x407 = INT8_MAX;
	int16_t x408 = -6761;

	t71 = (((x405*x406)%x407)==x408);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x409 = 0U;
	int64_t x410 = INT64_MIN;
	uint64_t x411 = UINT64_MAX;
	uint8_t x412 = 15U;
	static volatile int32_t t72 = 48190;

	t72 = (((x409*x410)%x411)==x412);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x414 = -965;
	int32_t t73 = -10;

	t73 = (((x413*x414)%x415)==x416);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 994U;
	int32_t t74 = -7;

	t74 = (((x417*x418)%x419)==x420);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x421 = 1345;
	int32_t x422 = -202945;
	volatile uint64_t x424 = 3121876299513824LLU;
	static int32_t t75 = 380440058;

	t75 = (((x421*x422)%x423)==x424);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x429 = 0;
	volatile uint8_t x430 = 0U;
	int16_t x431 = -1;
	int64_t x432 = INT64_MAX;
	int32_t t76 = 5;

	t76 = (((x429*x430)%x431)==x432);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x437 = UINT64_MAX;
	volatile int32_t t77 = 30;

	t77 = (((x437*x438)%x439)==x440);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x443 = -1;
	int32_t x444 = -81839159;
	static int32_t t78 = -391912;

	t78 = (((x441*x442)%x443)==x444);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x445 = -378609LL;
	int32_t x447 = INT32_MAX;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t79 = 627495544;

	t79 = (((x445*x446)%x447)==x448);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x449 = -1LL;
	int8_t x450 = INT8_MIN;
	volatile int16_t x451 = INT16_MIN;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t80 = 3991;

	t80 = (((x449*x450)%x451)==x452);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x454 = 369237629LL;
	static int16_t x455 = -764;
	static int16_t x456 = 0;
	volatile int32_t t81 = 446;

	t81 = (((x453*x454)%x455)==x456);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x458 = 1579;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MIN;
	int32_t t82 = -1;

	t82 = (((x457*x458)%x459)==x460);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x463 = -1;
	static int32_t x464 = INT32_MAX;
	int32_t t83 = -1817;

	t83 = (((x461*x462)%x463)==x464);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x466 = 77385250LL;
	int32_t x467 = INT32_MIN;
	int8_t x468 = 2;
	volatile int32_t t84 = -959;

	t84 = (((x465*x466)%x467)==x468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x469 = -56;
	uint8_t x470 = 3U;
	static volatile uint32_t x471 = UINT32_MAX;
	static uint64_t x472 = 201990771195580LLU;
	volatile int32_t t85 = 3343;

	t85 = (((x469*x470)%x471)==x472);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x473 = 184U;
	volatile int32_t x475 = INT32_MIN;
	int32_t x476 = -13377;

	t86 = (((x473*x474)%x475)==x476);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x478 = 202643U;
	int32_t x479 = INT32_MAX;
	int32_t t87 = 597376;

	t87 = (((x477*x478)%x479)==x480);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x481 = 487U;
	int16_t x483 = 9;
	volatile int8_t x484 = -1;
	volatile int32_t t88 = -1183;

	t88 = (((x481*x482)%x483)==x484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x485 = INT8_MAX;
	int8_t x486 = INT8_MAX;
	int64_t x487 = -1LL;
	volatile int32_t t89 = 1;

	t89 = (((x485*x486)%x487)==x488);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x499 = -1;
	static uint8_t x500 = 9U;
	int32_t t90 = -343966002;

	t90 = (((x497*x498)%x499)==x500);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x505 = UINT16_MAX;
	static int8_t x506 = -2;
	static uint32_t x507 = 113318U;
	int32_t x508 = 16301584;
	volatile int32_t t91 = 0;

	t91 = (((x505*x506)%x507)==x508);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x510 = 137185U;
	uint16_t x511 = UINT16_MAX;
	int16_t x512 = INT16_MIN;
	int32_t t92 = -30284176;

	t92 = (((x509*x510)%x511)==x512);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = 11;
	volatile int32_t x514 = -1;
	int64_t x516 = -1226870905607248644LL;
	static int32_t t93 = 1498443;

	t93 = (((x513*x514)%x515)==x516);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x518 = 56674183U;
	int8_t x519 = INT8_MAX;
	static int64_t x520 = INT64_MIN;

	t94 = (((x517*x518)%x519)==x520);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x529 = INT8_MAX;
	uint64_t x530 = 28776181162406LLU;
	uint16_t x532 = UINT16_MAX;
	static volatile int32_t t95 = -899;

	t95 = (((x529*x530)%x531)==x532);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x537 = -1;
	uint32_t x538 = 3U;
	static uint64_t x539 = UINT64_MAX;
	volatile uint8_t x540 = 2U;
	volatile int32_t t96 = 0;

	t96 = (((x537*x538)%x539)==x540);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x545 = INT16_MIN;
	static volatile int8_t x546 = -1;
	static uint8_t x547 = 80U;
	volatile uint16_t x548 = 1U;

	t97 = (((x545*x546)%x547)==x548);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x553 = 205213LLU;
	uint32_t x554 = UINT32_MAX;
	uint32_t x555 = 465U;
	static int32_t t98 = -2037967;

	t98 = (((x553*x554)%x555)==x556);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x561 = 266635589U;
	int64_t x562 = -1LL;
	static int16_t x563 = -1;
	volatile int16_t x564 = -13;
	static volatile int32_t t99 = -146786;

	t99 = (((x561*x562)%x563)==x564);

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

