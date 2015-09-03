#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = 370;
static uint64_t t2 = 3056776088279683LLU;
uint16_t x18 = 1U;
uint8_t x19 = 1U;
volatile int32_t t3 = -11111605;
int16_t x22 = INT16_MAX;
int8_t x48 = INT8_MIN;
int16_t x64 = -1;
static uint16_t x78 = UINT16_MAX;
uint32_t t9 = 220U;
uint16_t x84 = UINT16_MAX;
int64_t t12 = 435248576294LL;
int8_t x97 = INT8_MIN;
static int32_t x99 = INT32_MAX;
static volatile int64_t x103 = -1LL;
int32_t x109 = -1;
uint16_t x115 = 6066U;
uint8_t x117 = 1U;
uint8_t x123 = UINT8_MAX;
static int64_t x124 = INT64_MIN;
static volatile uint64_t x125 = 53875399603945LLU;
volatile int64_t x127 = INT64_MIN;
int16_t x138 = INT16_MIN;
static int32_t x139 = -496508363;
uint64_t x141 = 103310411164LLU;
int64_t t27 = 40045627LL;
uint64_t x165 = 489022LLU;
uint64_t t29 = 13572510LLU;
int64_t x189 = 40363347LL;
static uint16_t x199 = UINT16_MAX;
int16_t x200 = -3541;
uint8_t x202 = 54U;
static volatile uint32_t x203 = 33484185U;
int8_t x209 = 2;
int16_t x213 = -1;
uint32_t x223 = 565U;
int16_t x232 = 195;
uint64_t x256 = 284975386576903095LLU;
volatile int64_t x261 = 3637LL;
int64_t x262 = -1LL;
int64_t x267 = INT64_MIN;
volatile int32_t x268 = 319523;
int64_t x274 = -1LL;
volatile int64_t t48 = -1863LL;
uint64_t x286 = UINT64_MAX;
volatile int64_t x289 = 557LL;
int16_t x300 = INT16_MIN;
volatile uint64_t t54 = 97743212LLU;
volatile uint8_t x313 = 2U;
int32_t x319 = INT32_MIN;
volatile uint8_t x329 = UINT8_MAX;
int8_t x348 = 6;
static volatile uint64_t t61 = 1225317LLU;
int16_t x350 = INT16_MIN;
int16_t x357 = -5883;
int16_t x370 = 9;
static volatile int16_t x377 = -1;
static int64_t x387 = -1LL;
static uint64_t x388 = 62906913149446LLU;
uint64_t t70 = 482067606298LLU;
int64_t t71 = -15507LL;
volatile int8_t x403 = 56;
int8_t x406 = 15;
uint64_t x408 = 338716785LLU;
uint16_t x410 = 643U;
volatile int16_t x414 = -1;
uint16_t x416 = UINT16_MAX;
volatile int32_t t75 = 0;
volatile int64_t t76 = 21464075LL;
int8_t x429 = INT8_MIN;
int16_t x430 = -1;
static int8_t x431 = -1;
int64_t x432 = INT64_MIN;
int64_t t79 = INT64_MIN;
int8_t x434 = -1;
static int64_t x436 = INT64_MAX;
volatile uint32_t t81 = 20U;
uint64_t x450 = UINT64_MAX;
static int32_t x451 = -1;
volatile int64_t t83 = 1118028659972LL;
uint16_t x464 = 7U;
int16_t x466 = INT16_MIN;
int64_t x478 = 47707613778237055LL;
int16_t x479 = INT16_MIN;
uint16_t x480 = 29308U;
int64_t t89 = 682112928836LL;
static volatile uint16_t x485 = 3996U;
int8_t x490 = 5;
volatile int32_t t92 = -29344497;
static volatile int32_t x497 = -7;
volatile int8_t x498 = INT8_MAX;
int8_t x502 = INT8_MIN;
uint32_t x505 = 11U;
int8_t x507 = INT8_MIN;
static int8_t x508 = INT8_MAX;
int16_t x509 = -130;
int16_t x515 = -15023;
static uint64_t x516 = 40580583LLU;
static int32_t x519 = -1;
uint16_t x520 = 0U;
int8_t x533 = INT8_MIN;
uint32_t x535 = UINT32_MAX;
volatile int8_t x536 = 20;
static volatile uint32_t t99 = 1993658U;


void f0(void) {
	uint32_t x1 = 0U;
	int16_t x2 = INT16_MAX;
	static int16_t x3 = INT16_MIN;
	static volatile int16_t x4 = -59;
	volatile uint32_t t0 = 1U;

	t0 = (((x1*x2)%x3)|x4);

	if (t0 != 4294967237U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 2151920851340839LLU;
	int8_t x12 = INT8_MAX;
	volatile uint64_t t1 = 3861938639841LLU;

	t1 = (((x9*x10)%x11)|x12);

	if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = -1;
	int64_t x15 = 1468415709593LL;
	volatile uint64_t x16 = 94626070LLU;

	t2 = (((x13*x14)%x15)|x16);

	if (t2 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	static int16_t x20 = -1;

	t3 = (((x17*x18)%x19)|x20);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x23 = 25LLU;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t4 = 691962560LLU;

	t4 = (((x21*x22)%x23)|x24);

	if (t4 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	volatile int32_t t5 = -13264;

	t5 = (((x45*x46)%x47)|x48);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x49 = 5464685LL;
	int8_t x50 = -1;
	static uint8_t x51 = 84U;
	int64_t x52 = INT64_MIN;
	int64_t t6 = 1226355LL;

	t6 = (((x49*x50)%x51)|x52);

	if (t6 != -65LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x61 = 19308602732553551LLU;
	int64_t x62 = INT64_MIN;
	volatile int64_t x63 = -1LL;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x61*x62)%x63)|x64);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x73 = 1277860U;
	uint8_t x74 = UINT8_MAX;
	volatile int64_t x75 = -7810782525538137LL;
	int64_t x76 = -10409LL;
	int64_t t8 = 1568544370LL;

	t8 = (((x73*x74)%x75)|x76);

	if (t8 != -2209LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x77 = 5U;
	volatile uint32_t x79 = UINT32_MAX;
	uint16_t x80 = UINT16_MAX;

	t9 = (((x77*x78)%x79)|x80);

	if (t9 != 327679U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = -1;
	volatile int64_t x83 = INT64_MIN;
	volatile int64_t t10 = 382371403LL;

	t10 = (((x81*x82)%x83)|x84);

	if (t10 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = 4062770205299LLU;
	uint32_t x86 = 74735U;
	static int64_t x87 = INT64_MIN;
	static int64_t x88 = -5LL;
	static uint64_t t11 = UINT64_MAX;

	t11 = (((x85*x86)%x87)|x88);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = 6;
	static uint16_t x90 = 120U;
	int32_t x91 = INT32_MAX;
	static int64_t x92 = -454LL;

	t12 = (((x89*x90)%x91)|x92);

	if (t12 != -262LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x98 = UINT32_MAX;
	int32_t x100 = INT32_MAX;
	volatile uint32_t t13 = 0U;

	t13 = (((x97*x98)%x99)|x100);

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x101 = -23005027885528907LL;
	int8_t x102 = INT8_MIN;
	volatile uint8_t x104 = 3U;
	volatile int64_t t14 = -59961165636985856LL;

	t14 = (((x101*x102)%x103)|x104);

	if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = INT16_MIN;
	uint8_t x106 = 0U;
	static int8_t x107 = 6;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (((x105*x106)%x107)|x108);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x110 = -1;
	uint32_t x111 = 5U;
	int8_t x112 = INT8_MIN;
	volatile uint32_t t16 = 1U;

	t16 = (((x109*x110)%x111)|x112);

	if (t16 != 4294967169U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x113 = UINT8_MAX;
	static int16_t x114 = -1;
	volatile int32_t x116 = -1;
	volatile int32_t t17 = -13001;

	t17 = (((x113*x114)%x115)|x116);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MAX;
	int64_t x120 = -1LL;
	volatile int64_t t18 = 149716LL;

	t18 = (((x117*x118)%x119)|x120);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x121 = 0LL;
	int8_t x122 = -1;
	int64_t t19 = INT64_MIN;

	t19 = (((x121*x122)%x123)|x124);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x126 = INT16_MAX;
	int8_t x128 = 7;
	volatile uint64_t t20 = 54294014429647LLU;

	t20 = (((x125*x126)%x127)|x128);

	if (t20 != 1765335218822465815LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x129 = 30745099917LLU;
	volatile int64_t x130 = 59569LL;
	int16_t x131 = 1;
	static int32_t x132 = INT32_MIN;
	static volatile uint64_t t21 = 5363944216LLU;

	t21 = (((x129*x130)%x131)|x132);

	if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x137 = -1;
	int64_t x140 = -1LL;
	volatile int64_t t22 = 100461990480841LL;

	t22 = (((x137*x138)%x139)|x140);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x142 = -61;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = 117391486901086306LLU;
	uint64_t t23 = 3391330471367216LLU;

	t23 = (((x141*x142)%x143)|x144);

	if (t23 != 117391489098968187LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x145 = 314472068999LLU;
	int16_t x146 = INT16_MIN;
	static uint64_t x147 = 7058595798424368046LLU;
	uint64_t x148 = 20LLU;
	volatile uint64_t t24 = 232926184000LLU;

	t24 = (((x145*x146)%x147)|x148);

	if (t24 != 4319247856103856308LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = INT16_MIN;
	static uint32_t x150 = 1U;
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = 30573378285LLU;
	static uint64_t t25 = 122990966LLU;

	t25 = (((x149*x150)%x151)|x152);

	if (t25 != 34359720685LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x153 = 1359U;
	int32_t x154 = -1;
	static uint16_t x155 = 21U;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t26 = -40;

	t26 = (((x153*x154)%x155)|x156);

	if (t26 != -15) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x157 = 317440058U;
	static int64_t x158 = 1860LL;
	int16_t x159 = -72;
	volatile int8_t x160 = INT8_MAX;

	t27 = (((x157*x158)%x159)|x160);

	if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x166 = 1706168665LLU;
	uint32_t x167 = UINT32_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile uint64_t t28 = 171LLU;

	t28 = (((x165*x166)%x167)|x168);

	if (t28 != 781267199LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = 2141499467116LLU;
	uint8_t x174 = 117U;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = 3U;

	t29 = (((x173*x174)%x175)|x176);

	if (t29 != 250555437652575LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x190 = 6U;
	int16_t x191 = -1;
	int16_t x192 = 117;
	int64_t t30 = -24898098LL;

	t30 = (((x189*x190)%x191)|x192);

	if (t30 != 117LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x193 = 56979604LLU;
	int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	uint8_t x196 = 45U;
	static uint64_t t31 = 2316651142LLU;

	t31 = (((x193*x194)%x195)|x196);

	if (t31 != 18446744066416162349LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x197 = 0LLU;
	static int8_t x198 = INT8_MIN;
	volatile uint64_t t32 = 9722LLU;

	t32 = (((x197*x198)%x199)|x200);

	if (t32 != 18446744073709548075LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x201 = 37420417;
	uint16_t x204 = 233U;
	static volatile uint32_t t33 = 4854U;

	t33 = (((x201*x202)%x203)|x204);

	if (t33 != 11651579U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x210 = -1LL;
	int32_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static int64_t t34 = -268978669996901LL;

	t34 = (((x209*x210)%x211)|x212);

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x214 = 432;
	int32_t x215 = INT32_MIN;
	int16_t x216 = 1;
	volatile int32_t t35 = 0;

	t35 = (((x213*x214)%x215)|x216);

	if (t35 != -431) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x221 = INT16_MIN;
	volatile int16_t x222 = -1;
	static uint32_t x224 = UINT32_MAX;
	uint32_t t36 = UINT32_MAX;

	t36 = (((x221*x222)%x223)|x224);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x225 = -1LL;
	int32_t x226 = -13707987;
	volatile int64_t x227 = -5LL;
	int32_t x228 = -1520457;
	static volatile int64_t t37 = 1LL;

	t37 = (((x225*x226)%x227)|x228);

	if (t37 != -1520457LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = -130887474179LL;
	static uint16_t x230 = 2U;
	uint32_t x231 = 538U;
	volatile int64_t t38 = -1603554606627415474LL;

	t38 = (((x229*x230)%x231)|x232);

	if (t38 != -525LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x237 = -18;
	int64_t x238 = -1LL;
	int16_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	int64_t t39 = 1926615300375LL;

	t39 = (((x237*x238)%x239)|x240);

	if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x241 = -1LL;
	volatile uint32_t x242 = 1003U;
	int32_t x243 = -37489;
	int8_t x244 = -1;
	int64_t t40 = -254192519858LL;

	t40 = (((x241*x242)%x243)|x244);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x245 = INT32_MIN;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -1;
	int32_t x248 = 0;
	uint64_t t41 = 461LLU;

	t41 = (((x245*x246)%x247)|x248);

	if (t41 != 2147483648LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = -1LL;
	volatile uint64_t x250 = 2LLU;
	int16_t x251 = INT16_MAX;
	static int64_t x252 = INT64_MIN;
	static uint64_t t42 = 725LLU;

	t42 = (((x249*x250)%x251)|x252);

	if (t42 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x253 = 1;
	uint64_t x254 = 23458138741130LLU;
	volatile int64_t x255 = INT64_MIN;
	uint64_t t43 = 14507938352486LLU;

	t43 = (((x253*x254)%x255)|x256);

	if (t43 != 284993276189596607LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x257 = UINT16_MAX;
	static uint64_t x258 = 2749085284776345LLU;
	int16_t x259 = 49;
	int64_t x260 = INT64_MAX;
	uint64_t t44 = 84809321834LLU;

	t44 = (((x257*x258)%x259)|x260);

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x263 = UINT64_MAX;
	static uint64_t x264 = 548250192786989LLU;
	static uint64_t t45 = 115895099320877407LLU;

	t45 = (((x261*x262)%x263)|x264);

	if (t45 != 18446744073709549551LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = -125094;
	uint64_t x266 = 518LLU;
	uint64_t t46 = 1252079811591692634LLU;

	t46 = (((x265*x266)%x267)|x268);

	if (t46 != 9223372036790280255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x269 = 4469156388145164371LLU;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -13;
	volatile int16_t x272 = 10;
	static volatile uint64_t t47 = 623LLU;

	t47 = (((x269*x270)%x271)|x272);

	if (t47 != 18243792676124612234LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x273 = 3U;
	static uint32_t x275 = 15380U;
	int64_t x276 = INT64_MAX;

	t48 = (((x273*x274)%x275)|x276);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	static int64_t x279 = -218405012982553817LL;
	uint32_t x280 = 146773U;
	static volatile int64_t t49 = -36238515896LL;

	t49 = (((x277*x278)%x279)|x280);

	if (t49 != 179541LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x281 = INT8_MIN;
	static uint8_t x282 = 38U;
	uint8_t x283 = 57U;
	uint16_t x284 = 165U;
	int32_t t50 = -12;

	t50 = (((x281*x282)%x283)|x284);

	if (t50 != -19) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x285 = -14;
	uint64_t x287 = 199793648LLU;
	int64_t x288 = 4671045977247LL;
	volatile uint64_t t51 = 52886295LLU;

	t51 = (((x285*x286)%x287)|x288);

	if (t51 != 4671045977247LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x290 = 31338210557659LL;
	volatile int32_t x291 = -8;
	static volatile int8_t x292 = -1;
	int64_t t52 = -319428633LL;

	t52 = (((x289*x290)%x291)|x292);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x293 = 59;
	uint64_t x294 = 129613650LLU;
	static volatile int32_t x295 = 990755011;
	static volatile int32_t x296 = INT32_MIN;
	volatile uint64_t t53 = 32016LLU;

	t53 = (((x293*x294)%x295)|x296);

	if (t53 != 18446744072273988241LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = INT64_MIN;
	static uint64_t x298 = 86227LLU;
	static int32_t x299 = -1;

	t54 = (((x297*x298)%x299)|x300);

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x305 = -1LL;
	uint64_t x306 = 952436083LLU;
	volatile int16_t x307 = INT16_MIN;
	volatile int32_t x308 = INT32_MIN;
	uint64_t t55 = 10016200778381341LLU;

	t55 = (((x305*x306)%x307)|x308);

	if (t55 != 18446744072757115533LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x314 = -1LL;
	int32_t x315 = -100612;
	int16_t x316 = 40;
	static int64_t t56 = 6LL;

	t56 = (((x313*x314)%x315)|x316);

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x317 = INT16_MIN;
	static int8_t x318 = INT8_MIN;
	uint16_t x320 = 1827U;
	volatile int32_t t57 = -3400354;

	t57 = (((x317*x318)%x319)|x320);

	if (t57 != 4196131) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x330 = INT16_MAX;
	uint8_t x331 = 12U;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t58 = 2;

	t58 = (((x329*x330)%x331)|x332);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	static int32_t x340 = -29;
	volatile int32_t t59 = 379682382;

	t59 = (((x337*x338)%x339)|x340);

	if (t59 != -29) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x341 = 1317U;
	uint16_t x342 = 158U;
	int16_t x343 = INT16_MIN;
	static int8_t x344 = 0;
	uint32_t t60 = 3993U;

	t60 = (((x341*x342)%x343)|x344);

	if (t60 != 208086U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 334903026343065LLU;
	int8_t x347 = INT8_MAX;

	t61 = (((x345*x346)%x347)|x348);

	if (t61 != 54LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x349 = 234U;
	int64_t x351 = -325004418LL;
	int64_t x352 = INT64_MAX;
	int64_t t62 = INT64_MAX;

	t62 = (((x349*x350)%x351)|x352);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x358 = 1;
	volatile uint64_t x359 = 312215147796LLU;
	int64_t x360 = 22878076105621110LL;
	volatile uint64_t t63 = 24934020786987267LLU;

	t63 = (((x357*x358)%x359)|x360);

	if (t63 != 22878078521573111LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x361 = 5715593000406686LLU;
	static int16_t x362 = INT16_MAX;
	uint32_t x363 = 1479682U;
	static volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (((x361*x362)%x363)|x364);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x365 = 1;
	int8_t x366 = 16;
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = 42193563LL;
	int64_t t65 = 135439668022198LL;

	t65 = (((x365*x366)%x367)|x368);

	if (t65 != 42193563LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x369 = 102U;
	static uint8_t x371 = 42U;
	int32_t x372 = -812392;
	static volatile int32_t t66 = -97492;

	t66 = (((x369*x370)%x371)|x372);

	if (t66 != -812356) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x378 = 373694U;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	static uint32_t t67 = 188U;

	t67 = (((x377*x378)%x379)|x380);

	if (t67 != 4294954050U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 476602007U;
	static uint16_t x386 = UINT16_MAX;
	uint64_t t68 = 6993670214860519911LLU;

	t68 = (((x385*x386)%x387)|x388);

	if (t68 != 62906913149446LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x389 = -1LL;
	static int16_t x390 = -12485;
	static volatile int16_t x391 = -11308;
	int64_t x392 = INT64_MIN;
	static int64_t t69 = -5519709764LL;

	t69 = (((x389*x390)%x391)|x392);

	if (t69 != -9223372036854774631LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x393 = 30099LLU;
	volatile int8_t x394 = INT8_MIN;
	static volatile uint8_t x395 = UINT8_MAX;
	uint32_t x396 = 62551U;

	t70 = (((x393*x394)%x395)|x396);

	if (t70 != 62591LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = 0;
	int64_t x399 = -1LL;
	uint16_t x400 = 245U;

	t71 = (((x397*x398)%x399)|x400);

	if (t71 != 245LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x401 = UINT32_MAX;
	int8_t x402 = -8;
	static int64_t x404 = 57606588714429LL;
	static int64_t t72 = -1945021901012075827LL;

	t72 = (((x401*x402)%x403)|x404);

	if (t72 != 57606588714429LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x405 = UINT32_MAX;
	static uint64_t x407 = UINT64_MAX;
	uint64_t t73 = 6156824088808LLU;

	t73 = (((x405*x406)%x407)|x408);

	if (t73 != 4294967281LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = -1;
	static int16_t x411 = -7;
	int64_t x412 = INT64_MIN;
	int64_t t74 = -557948378LL;

	t74 = (((x409*x410)%x411)|x412);

	if (t74 != -6LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x413 = 185U;
	uint16_t x415 = 1130U;

	t75 = (((x413*x414)%x415)|x416);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x417 = 19516118;
	int32_t x418 = -1;
	int8_t x419 = -34;
	int64_t x420 = INT64_MIN;

	t76 = (((x417*x418)%x419)|x420);

	if (t76 != -16LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = INT32_MAX;
	int64_t x422 = 1654LL;
	static int16_t x423 = -1;
	static uint8_t x424 = 111U;
	int64_t t77 = -3497LL;

	t77 = (((x421*x422)%x423)|x424);

	if (t77 != 111LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x425 = -6073LL;
	int8_t x426 = INT8_MAX;
	uint32_t x427 = 955542412U;
	int8_t x428 = INT8_MAX;
	static volatile int64_t t78 = 344981578LL;

	t78 = (((x425*x426)%x427)|x428);

	if (t78 != -771201LL) { NG(); } else { ; }
	
}

void f79(void) {


	t79 = (((x429*x430)%x431)|x432);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = INT64_MAX;
	uint32_t x435 = UINT32_MAX;
	volatile int64_t t80 = -164388233390836952LL;

	t80 = (((x433*x434)%x435)|x436);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x437 = UINT32_MAX;
	int16_t x438 = -4719;
	int16_t x439 = 4216;
	uint8_t x440 = 61U;

	t81 = (((x437*x438)%x439)|x440);

	if (t81 != 511U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x449 = INT16_MAX;
	static uint64_t x452 = 1096227019091992005LLU;
	volatile uint64_t t82 = 4801810579LLU;

	t82 = (((x449*x450)%x451)|x452);

	if (t82 != 18446744073709542853LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x453 = UINT16_MAX;
	int16_t x454 = INT16_MIN;
	int16_t x455 = -8862;
	static int64_t x456 = INT64_MAX;

	t83 = (((x453*x454)%x455)|x456);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = 6766;
	uint64_t x458 = 10LLU;
	int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MIN;
	uint64_t t84 = 6097155LLU;

	t84 = (((x457*x458)%x459)|x460);

	if (t84 != 18446744073709520972LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x461 = 1U;
	uint8_t x462 = 1U;
	volatile uint64_t x463 = 3933662LLU;
	uint64_t t85 = 748044848856LLU;

	t85 = (((x461*x462)%x463)|x464);

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x465 = UINT16_MAX;
	uint32_t x467 = UINT32_MAX;
	static int64_t x468 = 12455473LL;
	int64_t t86 = 658833LL;

	t86 = (((x465*x466)%x467)|x468);

	if (t86 != 2159971889LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x469 = 69790970U;
	static uint16_t x470 = 0U;
	static int64_t x471 = INT64_MIN;
	volatile uint8_t x472 = 4U;
	volatile int64_t t87 = -79168266308801520LL;

	t87 = (((x469*x470)%x471)|x472);

	if (t87 != 4LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x473 = 8133753U;
	int32_t x474 = -1;
	int16_t x475 = INT16_MAX;
	static int8_t x476 = INT8_MIN;
	uint32_t t88 = 6220U;

	t88 = (((x473*x474)%x475)|x476);

	if (t88 != 4294967186U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x477 = 20U;

	t89 = (((x477*x478)%x479)|x480);

	if (t89 != 29692LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x481 = -1;
	static int8_t x482 = INT8_MIN;
	volatile int16_t x483 = -2201;
	volatile uint32_t x484 = 84721734U;
	volatile uint32_t t90 = 187U;

	t90 = (((x481*x482)%x483)|x484);

	if (t90 != 84721862U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x486 = INT16_MIN;
	static volatile int16_t x487 = INT16_MIN;
	static volatile int64_t x488 = INT64_MIN;
	static int64_t t91 = INT64_MIN;

	t91 = (((x485*x486)%x487)|x488);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x489 = 4U;
	volatile int8_t x491 = INT8_MIN;
	int8_t x492 = -1;

	t92 = (((x489*x490)%x491)|x492);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x499 = -1;
	static volatile int16_t x500 = INT16_MIN;
	int32_t t93 = 1226;

	t93 = (((x497*x498)%x499)|x500);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 47299911U;
	int64_t x503 = -1LL;
	static int8_t x504 = INT8_MAX;
	volatile int64_t t94 = 28544004261611850LL;

	t94 = (((x501*x502)%x503)|x504);

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x506 = UINT32_MAX;
	volatile uint32_t t95 = 20227U;

	t95 = (((x505*x506)%x507)|x508);

	if (t95 != 127U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x510 = INT16_MAX;
	int8_t x511 = -1;
	static uint8_t x512 = 13U;
	volatile int32_t t96 = 115;

	t96 = (((x509*x510)%x511)|x512);

	if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x513 = INT32_MAX;
	uint32_t x514 = UINT32_MAX;
	uint64_t t97 = 45531665838127LLU;

	t97 = (((x513*x514)%x515)|x516);

	if (t97 != 2188064231LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x517 = -1;
	uint8_t x518 = 103U;
	int32_t t98 = -4446822;

	t98 = (((x517*x518)%x519)|x520);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x534 = -1;

	t99 = (((x533*x534)%x535)|x536);

	if (t99 != 148U) { NG(); } else { ; }
	
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

