#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MAX;
static uint8_t x22 = UINT8_MAX;
uint32_t x23 = UINT32_MAX;
uint8_t x26 = UINT8_MAX;
int8_t x39 = INT8_MIN;
static uint64_t x45 = UINT64_MAX;
static int8_t x49 = -1;
int32_t t8 = -8;
static int16_t x55 = -5;
uint16_t x64 = 6335U;
uint32_t x68 = 1946473U;
int16_t x77 = INT16_MIN;
volatile int32_t t15 = 6627;
volatile int16_t x87 = -1;
volatile uint8_t x91 = UINT8_MAX;
volatile int16_t x94 = 11;
uint32_t x102 = 325U;
volatile int64_t x104 = INT64_MAX;
int8_t x112 = 8;
static int32_t t23 = 60547632;
int32_t x117 = INT32_MAX;
static volatile int32_t t24 = -14300465;
int64_t x121 = INT64_MIN;
volatile uint32_t x126 = 99063865U;
uint8_t x128 = UINT8_MAX;
volatile int32_t x143 = 1;
int64_t x144 = -2189702472154518206LL;
int8_t x146 = 2;
volatile int32_t x152 = INT32_MAX;
static uint32_t x153 = 169U;
volatile int16_t x156 = INT16_MIN;
static int8_t x158 = -1;
uint32_t x160 = 82U;
volatile int32_t x167 = -633667;
int8_t x169 = -1;
volatile int32_t t36 = 144001501;
static uint64_t x184 = UINT64_MAX;
uint64_t x188 = 1088748101LLU;
volatile int32_t x194 = INT32_MIN;
static uint8_t x196 = 11U;
volatile uint8_t x204 = 63U;
volatile int32_t t43 = -923678;
static int8_t x214 = INT8_MIN;
uint32_t x216 = 2843U;
uint64_t x226 = UINT64_MAX;
int8_t x232 = INT8_MIN;
int8_t x236 = -1;
int32_t t49 = -631405;
uint64_t x244 = UINT64_MAX;
int32_t x253 = INT32_MAX;
int8_t x255 = INT8_MIN;
volatile int32_t t56 = 118;
uint64_t x279 = UINT64_MAX;
uint32_t x281 = 1728U;
int16_t x287 = -7;
volatile int8_t x288 = INT8_MIN;
volatile int16_t x289 = INT16_MAX;
int16_t x303 = -1;
uint8_t x306 = 2U;
static int8_t x307 = 1;
uint8_t x310 = 122U;
int32_t x313 = INT32_MIN;
volatile uint16_t x317 = UINT16_MAX;
int64_t x327 = INT64_MIN;
int32_t x328 = 28;
int64_t x329 = -33959091014037715LL;
uint16_t x331 = 21079U;
int16_t x336 = -681;
volatile int32_t x339 = 10693543;
volatile int16_t x340 = INT16_MIN;
volatile int32_t t71 = 8806262;
int8_t x344 = 4;
static int16_t x346 = 374;
int32_t x356 = INT32_MAX;
int64_t x357 = 1677959343353255324LL;
volatile int32_t t75 = -21701368;
int32_t x365 = 132;
int32_t t76 = -97959860;
volatile int8_t x372 = INT8_MIN;
volatile int16_t x373 = INT16_MIN;
int8_t x374 = -47;
uint8_t x375 = 7U;
static volatile uint32_t x384 = 370601U;
int64_t x389 = INT64_MIN;
int16_t x396 = INT16_MIN;
volatile uint64_t x397 = 406284586179LLU;
int32_t x403 = INT32_MIN;
int8_t x405 = 1;
volatile int8_t x410 = INT8_MIN;
int32_t t86 = 284;
uint8_t x418 = 0U;
uint32_t x432 = 1870095163U;
volatile int32_t t90 = 940;
static uint8_t x451 = 1U;
volatile uint64_t x453 = 149549LLU;
uint32_t x454 = 1789903072U;
int32_t x462 = 13618482;
uint64_t x467 = 6647LLU;
static int32_t t98 = 335772217;


void f0(void) {
	int64_t x9 = INT64_MIN;
	static int8_t x10 = -1;
	static int64_t x12 = -58478739461LL;
	int32_t t0 = -2878112;

	t0 = ((x9&x10)<=(x11+x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = INT16_MIN;
	int32_t x14 = 33980926;
	volatile int8_t x15 = INT8_MAX;
	static uint16_t x16 = 1030U;
	int32_t t1 = 60252;

	t1 = ((x13&x14)<=(x15+x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x21 = INT32_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t2 = -247722438;

	t2 = ((x21&x22)<=(x23+x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x25 = INT16_MIN;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MIN;
	volatile int32_t t3 = 12;

	t3 = ((x25&x26)<=(x27+x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = -7583;
	uint64_t x30 = 63561283596369LLU;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t4 = -1322757;

	t4 = ((x29&x30)<=(x31+x32));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MAX;
	volatile int32_t t5 = 1066685013;

	t5 = ((x33&x34)<=(x35+x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -22;
	int64_t x38 = INT64_MAX;
	static int32_t x40 = -1;
	volatile int32_t t6 = 12561044;

	t6 = ((x37&x38)<=(x39+x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x46 = 0;
	int32_t x47 = INT32_MIN;
	static uint16_t x48 = UINT16_MAX;
	static int32_t t7 = -200249818;

	t7 = ((x45&x46)<=(x47+x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x50 = 767U;
	uint64_t x51 = 163154723362230LLU;
	uint16_t x52 = 0U;

	t8 = ((x49&x50)<=(x51+x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = 274U;
	int32_t x56 = 929;
	volatile int32_t t9 = -1485;

	t9 = ((x53&x54)<=(x55+x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = -6274408659537201LL;
	static volatile int16_t x58 = INT16_MIN;
	uint32_t x59 = 65861U;
	int32_t x60 = INT32_MIN;
	int32_t t10 = -53762374;

	t10 = ((x57&x58)<=(x59+x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = 0;
	volatile int32_t t11 = 288163250;

	t11 = ((x61&x62)<=(x63+x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = UINT32_MAX;
	uint32_t x66 = 0U;
	uint16_t x67 = 3603U;
	int32_t t12 = 0;

	t12 = ((x65&x66)<=(x67+x68));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t13 = -218267409;

	t13 = ((x69&x70)<=(x71+x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MAX;
	volatile uint16_t x74 = 379U;
	static int64_t x75 = -1LL;
	uint16_t x76 = UINT16_MAX;
	int32_t t14 = 13124;

	t14 = ((x73&x74)<=(x75+x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x78 = UINT32_MAX;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = -1;

	t15 = ((x77&x78)<=(x79+x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = 1U;
	volatile uint32_t x82 = 303717287U;
	uint32_t x83 = 17209U;
	uint16_t x84 = 14U;
	volatile int32_t t16 = 1016500;

	t16 = ((x81&x82)<=(x83+x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	uint8_t x86 = 2U;
	int32_t x88 = 30132;
	static volatile int32_t t17 = -8380;

	t17 = ((x85&x86)<=(x87+x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = 19521255LLU;
	volatile int8_t x92 = INT8_MIN;
	static volatile int32_t t18 = 2;

	t18 = ((x89&x90)<=(x91+x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = UINT32_MAX;
	static volatile int8_t x95 = 0;
	static int32_t x96 = INT32_MIN;
	int32_t t19 = 496;

	t19 = ((x93&x94)<=(x95+x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = 451072133469966273LL;
	static int64_t x98 = -1LL;
	uint64_t x99 = 85023585367096LLU;
	int32_t x100 = -1;
	volatile int32_t t20 = 162;

	t20 = ((x97&x98)<=(x99+x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 6U;
	volatile int64_t x103 = -261LL;
	static int32_t t21 = -8185933;

	t21 = ((x101&x102)<=(x103+x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = INT16_MIN;
	int16_t x106 = -6904;
	int64_t x107 = -1LL;
	static volatile uint64_t x108 = 32235922074LLU;
	volatile int32_t t22 = 1;

	t22 = ((x105&x106)<=(x107+x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	static int16_t x110 = INT16_MIN;
	uint32_t x111 = 1570U;

	t23 = ((x109&x110)<=(x111+x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x118 = -1;
	static uint16_t x119 = UINT16_MAX;
	static volatile int8_t x120 = 59;

	t24 = ((x117&x118)<=(x119+x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x122 = 7;
	int64_t x123 = INT64_MAX;
	int8_t x124 = -1;
	static volatile int32_t t25 = -263189150;

	t25 = ((x121&x122)<=(x123+x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	static int32_t x127 = INT32_MIN;
	int32_t t26 = 0;

	t26 = ((x125&x126)<=(x127+x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x129 = 2LL;
	uint64_t x130 = 7162144102297606LLU;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	static int32_t t27 = -51;

	t27 = ((x129&x130)<=(x131+x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	volatile int32_t t28 = -445240;

	t28 = ((x141&x142)<=(x143+x144));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = -1;
	uint16_t x147 = 5987U;
	volatile int8_t x148 = -2;
	volatile int32_t t29 = -301;

	t29 = ((x145&x146)<=(x147+x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = 3460;
	int64_t x151 = -142599734LL;
	volatile int32_t t30 = -242446;

	t30 = ((x149&x150)<=(x151+x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x154 = INT64_MIN;
	int16_t x155 = 1439;
	int32_t t31 = -47308833;

	t31 = ((x153&x154)<=(x155+x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 3U;
	uint32_t x159 = 532495541U;
	volatile int32_t t32 = 189830;

	t32 = ((x157&x158)<=(x159+x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t33 = -507;

	t33 = ((x165&x166)<=(x167+x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x170 = INT32_MIN;
	volatile uint64_t x171 = UINT64_MAX;
	static int64_t x172 = INT64_MAX;
	int32_t t34 = -4405729;

	t34 = ((x169&x170)<=(x171+x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x173 = 2104016U;
	volatile int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = 2U;
	int64_t x176 = -1LL;
	int32_t t35 = -96904;

	t35 = ((x173&x174)<=(x175+x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -1;
	int32_t x178 = -1;
	static int64_t x179 = -1217LL;
	int64_t x180 = INT64_MAX;

	t36 = ((x177&x178)<=(x179+x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = 17;
	int16_t x182 = INT16_MIN;
	volatile int16_t x183 = INT16_MAX;
	int32_t t37 = 14;

	t37 = ((x181&x182)<=(x183+x184));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = -104824;
	uint16_t x186 = 178U;
	int8_t x187 = 0;
	int32_t t38 = 483;

	t38 = ((x185&x186)<=(x187+x188));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int8_t x190 = 21;
	uint16_t x191 = 0U;
	int8_t x192 = 1;
	static int32_t t39 = 301507517;

	t39 = ((x189&x190)<=(x191+x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MAX;
	volatile int64_t x195 = INT64_MIN;
	int32_t t40 = 15828316;

	t40 = ((x193&x194)<=(x195+x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = 274673380854188LL;
	int32_t x202 = -1;
	int32_t x203 = 29;
	int32_t t41 = 40;

	t41 = ((x201&x202)<=(x203+x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MIN;
	int8_t x207 = -1;
	uint32_t x208 = 4U;
	static volatile int32_t t42 = 505592;

	t42 = ((x205&x206)<=(x207+x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x209 = 1U;
	static uint32_t x210 = 493U;
	static uint32_t x211 = UINT32_MAX;
	int64_t x212 = 19769465461784199LL;

	t43 = ((x209&x210)<=(x211+x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x213 = INT64_MIN;
	int16_t x215 = -1;
	volatile int32_t t44 = -2639;

	t44 = ((x213&x214)<=(x215+x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = INT64_MIN;
	uint16_t x222 = UINT16_MAX;
	static int64_t x223 = INT64_MIN;
	volatile uint64_t x224 = 799952947LLU;
	volatile int32_t t45 = -936;

	t45 = ((x221&x222)<=(x223+x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = INT64_MIN;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 6U;
	volatile int32_t t46 = -3400;

	t46 = ((x225&x226)<=(x227+x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = 25U;
	int64_t x230 = INT64_MIN;
	static int16_t x231 = 10755;
	int32_t t47 = -5;

	t47 = ((x229&x230)<=(x231+x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -1;
	int32_t x234 = 821310617;
	static int8_t x235 = -1;
	static int32_t t48 = -395787;

	t48 = ((x233&x234)<=(x235+x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = 1;
	int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	int64_t x240 = -1LL;

	t49 = ((x237&x238)<=(x239+x240));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	volatile int8_t x243 = INT8_MIN;
	volatile int32_t t50 = 7;

	t50 = ((x241&x242)<=(x243+x244));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -1;
	static uint16_t x250 = 3U;
	int8_t x251 = INT8_MAX;
	volatile uint32_t x252 = 35759U;
	int32_t t51 = 1001866907;

	t51 = ((x249&x250)<=(x251+x252));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x254 = 13115U;
	volatile int32_t x256 = 92;
	int32_t t52 = 2518224;

	t52 = ((x253&x254)<=(x255+x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = -7140;
	int16_t x262 = INT16_MAX;
	static int8_t x263 = INT8_MIN;
	int16_t x264 = -1;
	static volatile int32_t t53 = -6;

	t53 = ((x261&x262)<=(x263+x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x265 = 27U;
	int64_t x266 = INT64_MIN;
	uint64_t x267 = 282LLU;
	int8_t x268 = INT8_MAX;
	volatile int32_t t54 = 15197;

	t54 = ((x265&x266)<=(x267+x268));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = 1338656212097571LLU;
	static int32_t x271 = INT32_MIN;
	int8_t x272 = 0;
	static volatile int32_t t55 = -67;

	t55 = ((x269&x270)<=(x271+x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 5;
	static volatile int16_t x274 = INT16_MIN;
	int32_t x275 = -1;
	uint8_t x276 = UINT8_MAX;

	t56 = ((x273&x274)<=(x275+x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	int8_t x280 = -40;
	volatile int32_t t57 = -7;

	t57 = ((x277&x278)<=(x279+x280));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x282 = INT32_MIN;
	int32_t x283 = -513171911;
	uint16_t x284 = 114U;
	volatile int32_t t58 = 329804;

	t58 = ((x281&x282)<=(x283+x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x285 = INT32_MIN;
	volatile uint32_t x286 = UINT32_MAX;
	volatile int32_t t59 = -848;

	t59 = ((x285&x286)<=(x287+x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x290 = INT16_MIN;
	int8_t x291 = 12;
	uint8_t x292 = 7U;
	int32_t t60 = 12;

	t60 = ((x289&x290)<=(x291+x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = UINT8_MAX;
	static int32_t x294 = INT32_MIN;
	int16_t x295 = -3039;
	uint32_t x296 = 52U;
	int32_t t61 = -6555679;

	t61 = ((x293&x294)<=(x295+x296));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x301 = 12U;
	static volatile int8_t x302 = -1;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t62 = 92;

	t62 = ((x301&x302)<=(x303+x304));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = INT32_MIN;
	volatile int16_t x308 = INT16_MIN;
	int32_t t63 = 3134788;

	t63 = ((x305&x306)<=(x307+x308));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x309 = INT64_MIN;
	uint8_t x311 = 48U;
	int64_t x312 = -24507439381LL;
	int32_t t64 = -3329193;

	t64 = ((x309&x310)<=(x311+x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x314 = 0;
	static volatile uint32_t x315 = UINT32_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t65 = -43;

	t65 = ((x313&x314)<=(x315+x316));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x318 = 333218LLU;
	int16_t x319 = -1;
	uint64_t x320 = 412460986LLU;
	volatile int32_t t66 = -610324;

	t66 = ((x317&x318)<=(x319+x320));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x321 = 320026016LL;
	int64_t x322 = -1LL;
	static volatile uint16_t x323 = 4U;
	int8_t x324 = -13;
	volatile int32_t t67 = 9;

	t67 = ((x321&x322)<=(x323+x324));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x325 = 728922;
	volatile uint8_t x326 = 104U;
	static volatile int32_t t68 = -2882;

	t68 = ((x325&x326)<=(x327+x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x330 = INT64_MAX;
	static volatile uint32_t x332 = 1737U;
	int32_t t69 = -509;

	t69 = ((x329&x330)<=(x331+x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = 38;
	int8_t x335 = INT8_MIN;
	volatile int32_t t70 = -9493435;

	t70 = ((x333&x334)<=(x335+x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -48;

	t71 = ((x337&x338)<=(x339+x340));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -1LL;
	volatile int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MIN;
	static volatile int32_t t72 = -33742;

	t72 = ((x341&x342)<=(x343+x344));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = 15148U;
	static int64_t x347 = INT64_MIN;
	volatile uint64_t x348 = UINT64_MAX;
	volatile int32_t t73 = -115;

	t73 = ((x345&x346)<=(x347+x348));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = -1;
	uint64_t x354 = UINT64_MAX;
	volatile int16_t x355 = -1;
	int32_t t74 = -37489;

	t74 = ((x353&x354)<=(x355+x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x358 = 116483274424657LLU;
	volatile uint32_t x359 = 6U;
	volatile int8_t x360 = -1;

	t75 = ((x357&x358)<=(x359+x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x366 = 3U;
	int32_t x367 = INT32_MIN;
	uint64_t x368 = 8172LLU;

	t76 = ((x365&x366)<=(x367+x368));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = 2;
	int64_t x371 = -1LL;
	volatile int32_t t77 = -473;

	t77 = ((x369&x370)<=(x371+x372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x376 = 1310U;
	volatile int32_t t78 = -23;

	t78 = ((x373&x374)<=(x375+x376));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = INT64_MIN;
	volatile int32_t t79 = -286859;

	t79 = ((x381&x382)<=(x383+x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = -1LL;
	int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MIN;
	uint64_t x388 = 450342458465730760LLU;
	int32_t t80 = -51034689;

	t80 = ((x385&x386)<=(x387+x388));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = 9971LLU;
	volatile int32_t t81 = 6;

	t81 = ((x389&x390)<=(x391+x392));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = -1;
	volatile uint16_t x394 = 31349U;
	static uint8_t x395 = 4U;
	int32_t t82 = 32260;

	t82 = ((x393&x394)<=(x395+x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x398 = UINT32_MAX;
	static uint8_t x399 = 77U;
	int16_t x400 = INT16_MIN;
	int32_t t83 = 1748640;

	t83 = ((x397&x398)<=(x399+x400));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x401 = 13U;
	int64_t x402 = -4378277248037989154LL;
	volatile uint64_t x404 = UINT64_MAX;
	int32_t t84 = -56329926;

	t84 = ((x401&x402)<=(x403+x404));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x406 = -1;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = 10666;
	volatile int32_t t85 = 13900272;

	t85 = ((x405&x406)<=(x407+x408));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x409 = 1683LLU;
	uint8_t x411 = UINT8_MAX;
	static uint32_t x412 = UINT32_MAX;

	t86 = ((x409&x410)<=(x411+x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = UINT64_MAX;
	int8_t x414 = -1;
	volatile uint16_t x415 = UINT16_MAX;
	uint16_t x416 = 1U;
	static int32_t t87 = -1349584;

	t87 = ((x413&x414)<=(x415+x416));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x417 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = 78U;
	int32_t t88 = 6;

	t88 = ((x417&x418)<=(x419+x420));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x429 = INT32_MIN;
	uint64_t x430 = 719545855LLU;
	static int16_t x431 = INT16_MIN;
	int32_t t89 = -11283263;

	t89 = ((x429&x430)<=(x431+x432));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x433 = 281438U;
	int16_t x434 = INT16_MIN;
	int64_t x435 = 4587922604LL;
	int16_t x436 = INT16_MIN;

	t90 = ((x433&x434)<=(x435+x436));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x437 = -637;
	int32_t x438 = -4408;
	volatile uint64_t x439 = UINT64_MAX;
	int16_t x440 = INT16_MAX;
	static int32_t t91 = 600112;

	t91 = ((x437&x438)<=(x439+x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x441 = 12141;
	volatile int16_t x442 = INT16_MIN;
	int64_t x443 = -1LL;
	int8_t x444 = 38;
	volatile int32_t t92 = -74257;

	t92 = ((x441&x442)<=(x443+x444));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x445 = 0;
	volatile int32_t x446 = INT32_MIN;
	static uint16_t x447 = 62U;
	int64_t x448 = -2LL;
	static int32_t t93 = 47545680;

	t93 = ((x445&x446)<=(x447+x448));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x449 = -1;
	int32_t x450 = INT32_MIN;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t94 = -202;

	t94 = ((x449&x450)<=(x451+x452));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x455 = -768;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t95 = 14382526;

	t95 = ((x453&x454)<=(x455+x456));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x457 = -1;
	static uint32_t x458 = 25417U;
	int8_t x459 = INT8_MIN;
	int16_t x460 = -1;
	int32_t t96 = 1;

	t96 = ((x457&x458)<=(x459+x460));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x461 = 110U;
	volatile int32_t x463 = 82544822;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t97 = 15976147;

	t97 = ((x461&x462)<=(x463+x464));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x465 = 7842;
	int64_t x466 = INT64_MIN;
	volatile int16_t x468 = -16;

	t98 = ((x465&x466)<=(x467+x468));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = -9235643603225LL;
	static int8_t x470 = -9;
	int16_t x471 = INT16_MAX;
	volatile int64_t x472 = INT64_MIN;
	static volatile int32_t t99 = 49155;

	t99 = ((x469&x470)<=(x471+x472));

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

