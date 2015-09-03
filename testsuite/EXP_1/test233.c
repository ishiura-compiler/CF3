#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 596245242490031794LL;
int64_t x7 = -1225048LL;
static volatile int8_t x9 = -10;
int64_t x11 = INT64_MAX;
uint64_t t2 = 8675335LLU;
int8_t x14 = INT8_MIN;
int64_t x29 = INT64_MAX;
static int64_t t7 = 91921010516LL;
uint16_t x38 = 30U;
volatile int32_t x39 = -1;
static volatile int64_t x48 = -1LL;
int32_t x49 = INT32_MAX;
uint32_t x52 = 3U;
volatile int32_t t12 = INT32_MAX;
volatile int8_t x58 = 3;
static volatile int16_t x62 = INT16_MAX;
int32_t x67 = -1;
int16_t x78 = INT16_MIN;
int64_t x80 = -53313230LL;
static int8_t x92 = INT8_MIN;
static int16_t x94 = INT16_MAX;
int16_t x96 = -35;
uint64_t t21 = 117374152803918863LLU;
volatile int64_t x99 = INT64_MIN;
volatile int8_t x106 = INT8_MIN;
static int16_t x126 = INT16_MAX;
volatile uint32_t x130 = 46U;
uint64_t t28 = 68478409055254LLU;
int16_t x138 = INT16_MIN;
int32_t x139 = INT32_MIN;
volatile int8_t x145 = -7;
static uint8_t x147 = UINT8_MAX;
uint8_t x149 = 12U;
uint8_t x151 = 44U;
int32_t t32 = -233297;
int8_t x159 = -1;
volatile int32_t x190 = -1;
int32_t x193 = -4951683;
volatile int32_t t40 = -37692;
int64_t x211 = -12568962LL;
uint32_t x212 = 10800U;
int64_t x221 = INT64_MIN;
uint16_t x230 = 15U;
int16_t x240 = INT16_MIN;
uint32_t x241 = 1616068544U;
int16_t x245 = 1003;
int64_t x252 = INT64_MIN;
int32_t x256 = -275155;
volatile uint32_t t51 = 349966851U;
int16_t x270 = INT16_MAX;
int32_t x278 = -1;
int64_t x279 = INT64_MIN;
int8_t x284 = -1;
int8_t x286 = INT8_MIN;
uint16_t x291 = 664U;
volatile int64_t x295 = INT64_MIN;
uint64_t t61 = 72324LLU;
int8_t x306 = INT8_MIN;
int16_t x310 = INT16_MIN;
volatile uint8_t x311 = 5U;
int16_t x327 = INT16_MAX;
int32_t x329 = INT32_MAX;
uint8_t x330 = UINT8_MAX;
uint16_t x333 = 0U;
volatile int32_t t70 = 101018;
volatile int32_t x343 = INT32_MIN;
static volatile uint64_t t71 = 81097707915LLU;
uint32_t x345 = UINT32_MAX;
static int64_t x350 = -1LL;
static int8_t x351 = INT8_MIN;
int32_t x352 = -1052312599;
int64_t t73 = 214LL;
int16_t x368 = INT16_MAX;
volatile int16_t x380 = -229;
uint64_t x381 = UINT64_MAX;
static volatile int32_t x382 = INT32_MIN;
volatile uint32_t x385 = 147U;
int8_t x393 = 0;
uint32_t x395 = 1207425491U;
int32_t x403 = -1;
int64_t t85 = 74852852LL;
int64_t t86 = -650708016319340639LL;
uint32_t x411 = 857U;
static volatile int32_t x426 = INT32_MIN;
int64_t x437 = INT64_MIN;
volatile int16_t x439 = -15;
static volatile uint64_t t94 = 0LLU;
int64_t x448 = INT64_MIN;
static int64_t t96 = 171630165849LL;
int32_t x458 = -1;
volatile uint64_t t98 = 901329LLU;
int16_t x463 = INT16_MIN;


void f0(void) {
	static uint16_t x1 = 23532U;
	static int64_t x2 = INT64_MAX;
	static int8_t x3 = -1;
	volatile int8_t x4 = -1;

	t0 = (((x1-x2)%x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile int32_t x6 = -81021235;
	uint16_t x8 = 1253U;
	int64_t t1 = 170902106531LL;

	t1 = (((x5-x6)%x7)|x8);

	if (t1 != 169447LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	int16_t x12 = 1;

	t2 = (((x9-x10)%x11)|x12);

	if (t2 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6312U;
	int64_t x15 = -1LL;
	uint32_t x16 = 15U;
	static int64_t t3 = -5LL;

	t3 = (((x13-x14)%x15)|x16);

	if (t3 != 15LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -234;
	volatile int8_t x18 = -1;
	static int32_t x19 = INT32_MIN;
	static volatile uint16_t x20 = 0U;
	int32_t t4 = -2075982;

	t4 = (((x17-x18)%x19)|x20);

	if (t4 != -233) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MIN;
	uint64_t x22 = 6396873302950974LLU;
	uint64_t x23 = 683077591LLU;
	int64_t x24 = INT64_MAX;
	uint64_t t5 = 52LLU;

	t5 = (((x21-x22)%x23)|x24);

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint8_t x26 = 2U;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = 170405251U;
	volatile int64_t t6 = -3573380081368388LL;

	t6 = (((x25-x26)%x27)|x28);

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x30 = UINT32_MAX;
	int8_t x31 = INT8_MAX;
	static int32_t x32 = INT32_MIN;

	t7 = (((x29-x30)%x31)|x32);

	if (t7 != -2147483536LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -2;
	int16_t x40 = INT16_MIN;
	int32_t t8 = -3;

	t8 = (((x37-x38)%x39)|x40);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 320LLU;
	int8_t x42 = INT8_MIN;
	volatile int32_t x43 = -1;
	static int16_t x44 = -1;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (((x41-x42)%x43)|x44);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	int32_t x47 = -3119925;
	int64_t t10 = -5LL;

	t10 = (((x45-x46)%x47)|x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = 6001305U;
	uint64_t x51 = UINT64_MAX;
	static volatile uint64_t t11 = 184256616752LLU;

	t11 = (((x49-x50)%x51)|x52);

	if (t11 != 2141482343LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	static int16_t x54 = INT16_MIN;
	int32_t x55 = -1;
	static volatile int32_t x56 = INT32_MAX;

	t12 = (((x53-x54)%x55)|x56);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	int16_t x59 = -55;
	int16_t x60 = -1;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (((x57-x58)%x59)|x60);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = UINT32_MAX;
	int16_t x63 = 2;
	uint32_t x64 = 0U;
	volatile uint32_t t14 = 188833551U;

	t14 = (((x61-x62)%x63)|x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	static int8_t x68 = -1;
	int32_t t15 = 781058;

	t15 = (((x65-x66)%x67)|x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	static volatile int16_t x70 = -1;
	uint16_t x71 = 5U;
	int64_t x72 = 134249581306574770LL;
	int64_t t16 = 89LL;

	t16 = (((x69-x70)%x71)|x72);

	if (t16 != 134249581306574770LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = 1;
	int16_t x79 = 13784;
	volatile int64_t t17 = 5293578098565373LL;

	t17 = (((x77-x78)%x79)|x80);

	if (t17 != -53308045LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 1;
	int8_t x82 = INT8_MAX;
	volatile int32_t x83 = INT32_MIN;
	volatile uint16_t x84 = 3137U;
	int32_t t18 = -54761679;

	t18 = (((x81-x82)%x83)|x84);

	if (t18 != -61) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 182U;
	uint32_t x86 = 15788893U;
	int64_t x87 = INT64_MIN;
	int16_t x88 = -1187;
	int64_t t19 = 11470657044604LL;

	t19 = (((x85-x86)%x87)|x88);

	if (t19 != -163LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x89 = -61;
	int32_t x90 = -29435;
	int16_t x91 = INT16_MAX;
	int32_t t20 = -2696;

	t20 = (((x89-x90)%x91)|x92);

	if (t20 != -66) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int16_t x95 = -1;

	t21 = (((x93-x94)%x95)|x96);

	if (t21 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x97 = UINT8_MAX;
	static uint8_t x98 = 66U;
	int32_t x100 = INT32_MIN;
	static int64_t t22 = -7704LL;

	t22 = (((x97-x98)%x99)|x100);

	if (t22 != -2147483459LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 1U;
	int16_t x107 = -244;
	int16_t x108 = INT16_MIN;
	int32_t t23 = -121880729;

	t23 = (((x105-x106)%x107)|x108);

	if (t23 != -32639) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -430;
	static uint8_t x114 = 0U;
	static int8_t x115 = -25;
	volatile int16_t x116 = -5;
	volatile int32_t t24 = -619;

	t24 = (((x113-x114)%x115)|x116);

	if (t24 != -5) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 27076360U;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t25 = 408LLU;

	t25 = (((x121-x122)%x123)|x124);

	if (t25 != 18446744073709541623LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x125 = UINT64_MAX;
	int16_t x127 = -1;
	volatile int64_t x128 = INT64_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = (((x125-x126)%x127)|x128);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MAX;
	int8_t x131 = -1;
	int64_t x132 = INT64_MAX;
	int64_t t27 = INT64_MAX;

	t27 = (((x129-x130)%x131)|x132);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 35080007370067LLU;
	uint64_t x134 = 43430348317109LLU;
	uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = INT8_MIN;

	t28 = (((x133-x134)%x135)|x136);

	if (t28 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	static int64_t x140 = INT64_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (((x137-x138)%x139)|x140);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -528;
	int8_t x142 = INT8_MAX;
	int32_t x143 = INT32_MIN;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t30 = 54963;

	t30 = (((x141-x142)%x143)|x144);

	if (t30 != -655) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x146 = -1527;
	static int16_t x148 = 965;
	volatile int32_t t31 = -9397;

	t31 = (((x145-x146)%x147)|x148);

	if (t31 != 1013) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x150 = INT16_MIN;
	volatile int16_t x152 = INT16_MIN;

	t32 = (((x149-x150)%x151)|x152);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = -103;
	int64_t x158 = INT64_MIN;
	int16_t x160 = 16107;
	int64_t t33 = 79809LL;

	t33 = (((x157-x158)%x159)|x160);

	if (t33 != 16107LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x165 = 830608722;
	volatile uint32_t x166 = 3156U;
	static volatile int64_t x167 = INT64_MAX;
	static volatile int16_t x168 = -2143;
	volatile int64_t t34 = 14LL;

	t34 = (((x165-x166)%x167)|x168);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x173 = -1LL;
	volatile int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = 125U;
	uint32_t x176 = 8U;
	int64_t t35 = 12091721430455LL;

	t35 = (((x173-x174)%x175)|x176);

	if (t35 != 10LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x177 = 27U;
	int32_t x178 = -306112;
	static volatile uint32_t x179 = 236640U;
	static int16_t x180 = -786;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (((x177-x178)%x179)|x180);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -1;
	volatile int16_t x182 = 13663;
	int32_t x183 = 548404328;
	static int16_t x184 = -1;
	int32_t t37 = -3257;

	t37 = (((x181-x182)%x183)|x184);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	uint16_t x187 = UINT16_MAX;
	int8_t x188 = INT8_MIN;
	int64_t t38 = -827128LL;

	t38 = (((x185-x186)%x187)|x188);

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x189 = 302;
	uint64_t x191 = 107405715333499LLU;
	int32_t x192 = -4792856;
	static volatile uint64_t t39 = 212167632896217432LLU;

	t39 = (((x189-x190)%x191)|x192);

	if (t39 != 18446744073704758767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x194 = INT32_MIN;
	uint8_t x195 = 91U;
	int32_t x196 = INT32_MIN;

	t40 = (((x193-x194)%x195)|x196);

	if (t40 != -2147483620) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = INT16_MAX;
	volatile int64_t x202 = 8147587LL;
	int16_t x203 = INT16_MIN;
	volatile uint8_t x204 = 48U;
	volatile int64_t t41 = -268260115LL;

	t41 = (((x201-x202)%x203)|x204);

	if (t41 != -21124LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x205 = 466U;
	int32_t x206 = -1;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x205-x206)%x207)|x208);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MAX;
	volatile int64_t x210 = 94275999LL;
	int64_t t43 = 2614121730686185301LL;

	t43 = (((x209-x210)%x211)|x212);

	if (t43 != -6259970LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = -1;
	int64_t x224 = INT64_MAX;
	int64_t t44 = INT64_MAX;

	t44 = (((x221-x222)%x223)|x224);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x229 = -33;
	int16_t x231 = -1;
	static int32_t x232 = INT32_MAX;
	static volatile int32_t t45 = INT32_MAX;

	t45 = (((x229-x230)%x231)|x232);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x233 = -295291621;
	int32_t x234 = -1;
	int16_t x235 = INT16_MIN;
	volatile uint16_t x236 = UINT16_MAX;
	volatile int32_t t46 = 740;

	t46 = (((x233-x234)%x235)|x236);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x237 = -1;
	static int64_t x238 = INT64_MAX;
	int16_t x239 = 23;
	static volatile int64_t t47 = -20425616605392173LL;

	t47 = (((x237-x238)%x239)|x240);

	if (t47 != -3LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x242 = INT16_MIN;
	static uint8_t x243 = 1U;
	int64_t x244 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = (((x241-x242)%x243)|x244);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x246 = 4017U;
	static int32_t x247 = -25;
	int64_t x248 = -121046LL;
	volatile int64_t t49 = 74055552431LL;

	t49 = (((x245-x246)%x247)|x248);

	if (t49 != -2246LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MAX;
	uint64_t x250 = 30203466620LLU;
	int16_t x251 = 1227;
	uint64_t t50 = 2490729459767815LLU;

	t50 = (((x249-x250)%x251)|x252);

	if (t50 != 9223372036854776567LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	volatile uint32_t x255 = 11U;

	t51 = (((x253-x254)%x255)|x256);

	if (t51 != 4294692141U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x261 = -1LL;
	volatile int64_t x262 = -20462596LL;
	int64_t x263 = 75511916971274LL;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (((x261-x262)%x263)|x264);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x265 = 9U;
	int8_t x266 = -17;
	static int64_t x267 = 9LL;
	int32_t x268 = -1;
	volatile int64_t t53 = -2366055627977700997LL;

	t53 = (((x265-x266)%x267)|x268);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x269 = -446LL;
	uint16_t x271 = 28U;
	int16_t x272 = -5;
	int64_t t54 = -5126LL;

	t54 = (((x269-x270)%x271)|x272);

	if (t54 != -5LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x273 = INT8_MIN;
	volatile int8_t x274 = -7;
	uint16_t x275 = 3U;
	volatile int16_t x276 = INT16_MAX;
	static int32_t t55 = -1;

	t55 = (((x273-x274)%x275)|x276);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x277 = UINT32_MAX;
	static uint32_t x280 = 227514U;
	int64_t t56 = 11476090486653LL;

	t56 = (((x277-x278)%x279)|x280);

	if (t56 != 227514LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = -3;
	int64_t x282 = -54137869114732122LL;
	uint64_t x283 = 5873897966686455435LLU;
	static uint64_t t57 = UINT64_MAX;

	t57 = (((x281-x282)%x283)|x284);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x285 = -1;
	uint16_t x287 = 40U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t58 = 5408;

	t58 = (((x285-x286)%x287)|x288);

	if (t58 != -121) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = -1;
	uint16_t x292 = 3439U;
	volatile int32_t t59 = 4225580;

	t59 = (((x289-x290)%x291)|x292);

	if (t59 != -129) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = -1;
	volatile uint16_t x294 = 122U;
	volatile int32_t x296 = INT32_MAX;
	volatile int64_t t60 = 15158524742LL;

	t60 = (((x293-x294)%x295)|x296);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = 5;
	int32_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	static uint16_t x304 = 4442U;

	t61 = (((x301-x302)%x303)|x304);

	if (t61 != 4446LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x305 = -1;
	int16_t x307 = INT16_MIN;
	static volatile int16_t x308 = INT16_MIN;
	volatile int32_t t62 = -38035;

	t62 = (((x305-x306)%x307)|x308);

	if (t62 != -32641) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x309 = 1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t63 = 1;

	t63 = (((x309-x310)%x311)|x312);

	if (t63 != -124) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x313 = -1LL;
	uint64_t x314 = 224540995509835LLU;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	uint64_t t64 = 2455LLU;

	t64 = (((x313-x314)%x315)|x316);

	if (t64 != 18446744073604276660LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = 44688;
	int8_t x318 = INT8_MIN;
	int8_t x319 = 15;
	static volatile int64_t x320 = INT64_MAX;
	volatile int64_t t65 = INT64_MAX;

	t65 = (((x317-x318)%x319)|x320);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = -1;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t66 = -6;

	t66 = (((x321-x322)%x323)|x324);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x325 = INT8_MIN;
	volatile uint32_t x326 = 177137398U;
	int8_t x328 = 11;
	volatile uint32_t t67 = 44U;

	t67 = (((x325-x326)%x327)|x328);

	if (t67 != 891U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x331 = INT64_MIN;
	volatile uint16_t x332 = 7362U;
	volatile int64_t t68 = 1LL;

	t68 = (((x329-x330)%x331)|x332);

	if (t68 != 2147483586LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x334 = -1;
	int8_t x335 = 56;
	int16_t x336 = INT16_MAX;
	volatile int32_t t69 = -1;

	t69 = (((x333-x334)%x335)|x336);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	static int8_t x340 = -1;

	t70 = (((x337-x338)%x339)|x340);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x341 = INT16_MIN;
	volatile uint64_t x342 = UINT64_MAX;
	int64_t x344 = -58LL;

	t71 = (((x341-x342)%x343)|x344);

	if (t71 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x346 = UINT32_MAX;
	static int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

	t72 = (((x345-x346)%x347)|x348);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x349 = 0U;

	t73 = (((x349-x350)%x351)|x352);

	if (t73 != -1052312599LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = 39186118615963LL;
	volatile int8_t x358 = 1;
	uint16_t x359 = 5791U;
	int16_t x360 = 0;
	int64_t t74 = -33790821001429LL;

	t74 = (((x357-x358)%x359)|x360);

	if (t74 != 5131LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x361 = 28;
	static uint64_t x362 = UINT64_MAX;
	volatile uint64_t x363 = 1474LLU;
	volatile int16_t x364 = -351;
	volatile uint64_t t75 = 1LLU;

	t75 = (((x361-x362)%x363)|x364);

	if (t75 != 18446744073709551293LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x365 = 12U;
	uint32_t x366 = 3U;
	static int64_t x367 = 130668682660LL;
	volatile int64_t t76 = -20LL;

	t76 = (((x365-x366)%x367)|x368);

	if (t76 != 32767LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MIN;
	volatile int16_t x370 = -1;
	int32_t x371 = -1;
	int16_t x372 = -1;
	static int32_t t77 = 2706099;

	t77 = (((x369-x370)%x371)|x372);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = -3860414;
	int32_t x374 = 857080;
	static uint16_t x375 = UINT16_MAX;
	static uint32_t x376 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x373-x374)%x375)|x376);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x377 = -1;
	int8_t x378 = INT8_MIN;
	volatile uint64_t x379 = 6243637804010535LLU;
	uint64_t t79 = 2248334LLU;

	t79 = (((x377-x378)%x379)|x380);

	if (t79 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x383 = 4;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t80 = 18418747LLU;

	t80 = (((x381-x382)%x383)|x384);

	if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x386 = 2837082055LLU;
	int8_t x387 = INT8_MAX;
	int64_t x388 = 46337516115522LL;
	volatile uint64_t t81 = 85LLU;

	t81 = (((x385-x386)%x387)|x388);

	if (t81 != 46337516115570LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x389 = -529147524475455LL;
	uint16_t x390 = UINT16_MAX;
	static uint32_t x391 = 27721U;
	volatile int32_t x392 = INT32_MAX;
	volatile int64_t t82 = 133561108880004382LL;

	t82 = (((x389-x390)%x391)|x392);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x394 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint32_t t83 = 59U;

	t83 = (((x393-x394)%x395)|x396);

	if (t83 != 2820174344U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = -44;
	volatile uint8_t x398 = 13U;
	int32_t x399 = INT32_MAX;
	static volatile uint64_t x400 = UINT64_MAX;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = (((x397-x398)%x399)|x400);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = -27275LL;
	uint8_t x402 = 1U;
	int16_t x404 = 1;

	t85 = (((x401-x402)%x403)|x404);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = -1;
	static volatile int8_t x406 = 2;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MIN;

	t86 = (((x405-x406)%x407)|x408);

	if (t86 != -3LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x409 = INT32_MAX;
	static uint8_t x410 = 0U;
	int16_t x412 = INT16_MIN;
	static uint32_t t87 = 45597U;

	t87 = (((x409-x410)%x411)|x412);

	if (t87 != 4294934720U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x413 = 3570U;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = 85;
	uint64_t x416 = 49057237187LLU;
	volatile uint64_t t88 = 26918113193428157LLU;

	t88 = (((x413-x414)%x415)|x416);

	if (t88 != 49057237187LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = INT8_MAX;
	volatile uint8_t x418 = 0U;
	volatile int64_t x419 = INT64_MIN;
	int64_t x420 = -1LL;
	static int64_t t89 = 1462437557LL;

	t89 = (((x417-x418)%x419)|x420);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = INT16_MAX;
	static int8_t x422 = 5;
	static uint16_t x423 = 4699U;
	int8_t x424 = INT8_MIN;
	static int32_t t90 = -5;

	t90 = (((x421-x422)%x423)|x424);

	if (t90 != -40) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = -3LL;
	static volatile uint8_t x427 = 1U;
	int16_t x428 = INT16_MAX;
	volatile int64_t t91 = 101LL;

	t91 = (((x425-x426)%x427)|x428);

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x429 = -54665;
	int8_t x430 = -1;
	static uint8_t x431 = 5U;
	uint8_t x432 = 10U;
	volatile int32_t t92 = -1144711;

	t92 = (((x429-x430)%x431)|x432);

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x433 = 1843LLU;
	uint8_t x434 = UINT8_MAX;
	uint16_t x435 = 419U;
	uint16_t x436 = 50U;
	uint64_t t93 = 115LLU;

	t93 = (((x433-x434)%x435)|x436);

	if (t93 != 379LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x438 = INT64_MIN;
	uint64_t x440 = 265089LLU;

	t94 = (((x437-x438)%x439)|x440);

	if (t94 != 265089LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -2;
	uint16_t x442 = 3U;
	uint8_t x443 = 91U;
	int16_t x444 = INT16_MIN;
	int32_t t95 = -1045529;

	t95 = (((x441-x442)%x443)|x444);

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	volatile int16_t x447 = 13;

	t96 = (((x445-x446)%x447)|x448);

	if (t96 != -3LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x453 = INT32_MIN;
	uint64_t x454 = 889439LLU;
	uint64_t x455 = 860LLU;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x453-x454)%x455)|x456);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x457 = UINT64_MAX;
	uint64_t x459 = UINT64_MAX;
	uint32_t x460 = 1581406U;

	t98 = (((x457-x458)%x459)|x460);

	if (t98 != 1581406LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = 0;
	int8_t x462 = INT8_MIN;
	static volatile int64_t x464 = INT64_MIN;
	int64_t t99 = 19895908392540104LL;

	t99 = (((x461-x462)%x463)|x464);

	if (t99 != -9223372036854775680LL) { NG(); } else { ; }
	
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

