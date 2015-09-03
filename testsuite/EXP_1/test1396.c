#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -59;
int64_t x5 = -51292238994215LL;
int16_t x8 = INT16_MIN;
int32_t x9 = INT32_MIN;
int32_t x22 = INT32_MAX;
int64_t x28 = -1LL;
int64_t x36 = INT64_MIN;
static uint32_t x44 = UINT32_MAX;
int64_t x57 = -1LL;
int8_t x59 = 1;
int64_t x60 = -15742613088348876LL;
uint32_t x62 = 1914U;
volatile int8_t x64 = -1;
static uint64_t x65 = 476302455282LLU;
uint64_t t15 = 1917LLU;
static int16_t x79 = -1;
volatile int16_t x80 = INT16_MIN;
static volatile int32_t t16 = 7819112;
uint16_t x88 = 1U;
int64_t x98 = INT64_MIN;
volatile uint32_t t21 = 0U;
int32_t x101 = -1;
uint32_t x105 = UINT32_MAX;
int64_t x110 = INT64_MIN;
volatile int64_t x122 = INT64_MIN;
static int32_t x140 = INT32_MAX;
uint64_t t31 = 1LLU;
int64_t x147 = 58125746228384000LL;
static volatile int64_t t32 = 49284619311LL;
static int64_t t33 = -1192693230663860LL;
volatile int8_t x163 = 11;
int32_t x167 = INT32_MIN;
int16_t x169 = INT16_MIN;
uint64_t x172 = 7700172936LLU;
volatile int16_t x176 = INT16_MIN;
volatile int64_t t38 = 3LL;
static int32_t x183 = INT32_MIN;
static volatile uint16_t x186 = 17367U;
int8_t x187 = -3;
volatile int8_t x191 = 1;
int8_t x195 = INT8_MIN;
volatile uint32_t t45 = 1U;
uint64_t x207 = UINT64_MAX;
volatile uint64_t t46 = 1114166959076197271LLU;
int64_t x211 = -1LL;
uint64_t x213 = 2602LLU;
int32_t x223 = INT32_MIN;
uint64_t x225 = 4193LLU;
uint64_t x230 = 115835936438105434LLU;
int16_t x231 = 1655;
uint64_t x232 = 2414LLU;
int64_t x233 = -234LL;
int8_t x240 = 1;
volatile int32_t t54 = 7;
int64_t x242 = INT64_MIN;
static uint32_t x243 = UINT32_MAX;
int16_t x245 = -2765;
volatile int32_t x246 = 12;
int32_t t58 = 2;
int32_t x259 = 29732228;
int32_t x260 = INT32_MIN;
volatile int32_t t59 = -17;
uint64_t x263 = UINT64_MAX;
int32_t t61 = -1;
volatile int64_t t62 = -84LL;
uint8_t x280 = 3U;
int64_t x282 = INT64_MAX;
int32_t x283 = INT32_MAX;
int32_t t65 = -874486132;
int32_t t66 = -593142547;
volatile int8_t x294 = 6;
volatile uint16_t x299 = 6U;
uint16_t x309 = UINT16_MAX;
volatile int16_t x312 = INT16_MIN;
int32_t x314 = INT32_MIN;
int16_t x316 = INT16_MIN;
volatile int64_t t73 = -2LL;
int32_t x325 = INT32_MAX;
int16_t x326 = 0;
static uint32_t t74 = 9471339U;
int32_t x338 = 34;
volatile int16_t x340 = -1;
volatile int64_t x348 = INT64_MAX;
volatile int32_t t81 = -26941571;
static volatile uint8_t x359 = UINT8_MAX;
int32_t t82 = 16149;
volatile int32_t t83 = 13650395;
static int32_t x367 = 2675999;
int8_t x375 = -1;
uint32_t x386 = UINT32_MAX;
volatile uint64_t t88 = 827145270833617LLU;
volatile int8_t x391 = INT8_MIN;
int16_t x392 = -46;
int8_t x403 = 19;
uint32_t x404 = UINT32_MAX;
static int64_t x412 = -3LL;
int64_t t93 = -35LL;
uint64_t x413 = 1991377204653LLU;
int8_t x417 = INT8_MIN;
int64_t x418 = INT64_MIN;
int16_t x423 = -1;
volatile int32_t t96 = -163399813;
volatile int64_t t98 = -7742LL;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint64_t x2 = UINT64_MAX;
	uint64_t x4 = 734936LLU;
	uint64_t t0 = 11893011658492LLU;

	t0 = (((x1<x2)/x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 1715881853059528524LLU;
	volatile int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -2580;

	t1 = (((x5<x6)/x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x10 = UINT16_MAX;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 1;

	t2 = (((x9<x10)/x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = UINT8_MAX;
	static uint32_t x16 = 521403932U;
	uint32_t t3 = 4518U;

	t3 = (((x13<x14)/x15)%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 15U;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 8650776296938LLU;

	t4 = (((x21<x22)/x23)%x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 46;
	static int64_t x26 = INT64_MAX;
	static int8_t x27 = INT8_MIN;
	int64_t t5 = 39189201576LL;

	t5 = (((x25<x26)/x27)%x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 2631508LL;
	int8_t x30 = INT8_MIN;
	static int32_t x31 = -498954912;
	volatile int8_t x32 = INT8_MIN;
	int32_t t6 = 123;

	t6 = (((x29<x30)/x31)%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	static int32_t x34 = -21427359;
	int8_t x35 = INT8_MAX;
	static volatile int64_t t7 = -128549708613LL;

	t7 = (((x33<x34)/x35)%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	static int64_t x38 = -44LL;
	int8_t x39 = INT8_MIN;
	volatile uint8_t x40 = 28U;
	static int32_t t8 = 22;

	t8 = (((x37<x38)/x39)%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 3;
	static int16_t x42 = -1;
	volatile int64_t x43 = -1LL;
	int64_t t9 = 0LL;

	t9 = (((x41<x42)/x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x53 = 270322U;
	int64_t x54 = INT64_MIN;
	int8_t x55 = -1;
	uint64_t x56 = UINT64_MAX;
	uint64_t t10 = 1041301532LLU;

	t10 = (((x53<x54)/x55)%x56);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x58 = UINT8_MAX;
	static int64_t t11 = -32127181522952308LL;

	t11 = (((x57<x58)/x59)%x60);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x61 = 78LLU;
	int16_t x63 = INT16_MAX;
	int32_t t12 = -1;

	t12 = (((x61<x62)/x63)%x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x66 = UINT8_MAX;
	int8_t x67 = INT8_MAX;
	int32_t x68 = -6867;
	int32_t t13 = 1930049;

	t13 = (((x65<x66)/x67)%x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	static uint32_t x71 = 421319467U;
	static volatile int64_t x72 = INT64_MIN;
	int64_t t14 = -804868611895LL;

	t14 = (((x69<x70)/x71)%x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MAX;
	volatile int16_t x74 = -5644;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = UINT64_MAX;

	t15 = (((x73<x74)/x75)%x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = 4039U;
	volatile uint8_t x78 = 0U;

	t16 = (((x77<x78)/x79)%x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = 43;
	volatile uint8_t x82 = 27U;
	int16_t x83 = 3;
	volatile int64_t x84 = INT64_MIN;
	static volatile int64_t t17 = -1LL;

	t17 = (((x81<x82)/x83)%x84);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = -5392122100LL;
	int16_t x87 = INT16_MIN;
	int32_t t18 = 14;

	t18 = (((x85<x86)/x87)%x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x89 = INT64_MAX;
	int64_t x90 = INT64_MAX;
	static uint64_t x91 = 11635340LLU;
	static int16_t x92 = INT16_MIN;
	volatile uint64_t t19 = 81345144286LLU;

	t19 = (((x89<x90)/x91)%x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x93 = UINT16_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = -1;
	static volatile int32_t t20 = 1086;

	t20 = (((x93<x94)/x95)%x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	static uint8_t x99 = 3U;
	static uint32_t x100 = UINT32_MAX;

	t21 = (((x97<x98)/x99)%x100);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 1275007774U;
	int16_t x104 = -19;
	volatile uint32_t t22 = 122897870U;

	t22 = (((x101<x102)/x103)%x104);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x106 = -41;
	volatile int16_t x107 = 6;
	int64_t x108 = INT64_MIN;
	int64_t t23 = -796LL;

	t23 = (((x105<x106)/x107)%x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -3920;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	volatile int64_t t24 = -1386578985LL;

	t24 = (((x109<x110)/x111)%x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = UINT32_MAX;
	int32_t x114 = -1;
	int16_t x115 = 3589;
	int16_t x116 = INT16_MIN;
	volatile int32_t t25 = 14;

	t25 = (((x113<x114)/x115)%x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -1;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 221U;
	int32_t x120 = INT32_MIN;
	volatile int32_t t26 = 765;

	t26 = (((x117<x118)/x119)%x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	int64_t x123 = 61100187127572146LL;
	uint16_t x124 = 3U;
	volatile int64_t t27 = -1613701974865581376LL;

	t27 = (((x121<x122)/x123)%x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 14597689239956780LLU;
	int64_t x126 = INT64_MIN;
	static volatile int16_t x127 = -6;
	int64_t x128 = INT64_MIN;
	volatile int64_t t28 = 1177865651252055LL;

	t28 = (((x125<x126)/x127)%x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -1;
	static uint32_t x130 = UINT32_MAX;
	int64_t x131 = INT64_MAX;
	volatile int32_t x132 = INT32_MIN;
	static volatile int64_t t29 = -285669317243694305LL;

	t29 = (((x129<x130)/x131)%x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = -5;
	uint32_t x139 = 910U;
	volatile uint32_t t30 = 48105U;

	t30 = (((x137<x138)/x139)%x140);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x141 = 8441108252380038480LLU;
	uint32_t x142 = 723U;
	uint64_t x143 = 11866384128LLU;
	int32_t x144 = -1;

	t31 = (((x141<x142)/x143)%x144);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 603446900LLU;
	uint16_t x146 = 11326U;
	volatile int32_t x148 = -1;

	t32 = (((x145<x146)/x147)%x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = INT32_MIN;
	int64_t x150 = -3908174856680289822LL;
	int64_t x151 = -1LL;
	int32_t x152 = 775293478;

	t33 = (((x149<x150)/x151)%x152);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x157 = INT64_MAX;
	int16_t x158 = INT16_MIN;
	static volatile int16_t x159 = 37;
	int16_t x160 = INT16_MIN;
	int32_t t34 = -15;

	t34 = (((x157<x158)/x159)%x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x161 = -1;
	volatile uint64_t x162 = UINT64_MAX;
	static int64_t x164 = 9515153LL;
	int64_t t35 = -1968156340935LL;

	t35 = (((x161<x162)/x163)%x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -327;
	volatile int32_t x166 = -1;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t36 = -1864273;

	t36 = (((x165<x166)/x167)%x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x170 = INT8_MIN;
	int32_t x171 = -50814124;
	uint64_t t37 = 11556628568LLU;

	t37 = (((x169<x170)/x171)%x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MAX;
	volatile uint16_t x174 = 19944U;
	int64_t x175 = INT64_MAX;

	t38 = (((x173<x174)/x175)%x176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MAX;
	static volatile int32_t x178 = INT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = 1U;
	int64_t t39 = -367695949LL;

	t39 = (((x177<x178)/x179)%x180);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = -6722;
	int64_t x182 = -145847065869LL;
	uint16_t x184 = 216U;
	volatile int32_t t40 = 65188;

	t40 = (((x181<x182)/x183)%x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x185 = INT64_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t41 = 108995U;

	t41 = (((x185<x186)/x187)%x188);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	static uint16_t x190 = UINT16_MAX;
	int32_t x192 = INT32_MAX;
	int32_t t42 = -1914886;

	t42 = (((x189<x190)/x191)%x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x193 = UINT8_MAX;
	static int32_t x194 = -5408872;
	uint16_t x196 = 204U;
	int32_t t43 = 2644;

	t43 = (((x193<x194)/x195)%x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = -1841;
	static uint8_t x199 = 63U;
	static volatile uint8_t x200 = 1U;
	volatile int32_t t44 = -745009489;

	t44 = (((x197<x198)/x199)%x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = INT16_MIN;
	int16_t x202 = 15;
	uint32_t x203 = 28608591U;
	volatile int32_t x204 = -149;

	t45 = (((x201<x202)/x203)%x204);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 2U;
	int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MAX;

	t46 = (((x205<x206)/x207)%x208);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = 34;
	static uint32_t x210 = UINT32_MAX;
	volatile int16_t x212 = INT16_MIN;
	int64_t t47 = 22304LL;

	t47 = (((x209<x210)/x211)%x212);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x214 = 11046U;
	int64_t x215 = INT64_MIN;
	int32_t x216 = -453;
	int64_t t48 = 0LL;

	t48 = (((x213<x214)/x215)%x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x217 = INT32_MIN;
	uint32_t x218 = UINT32_MAX;
	volatile int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t49 = 608439LL;

	t49 = (((x217<x218)/x219)%x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	volatile int16_t x222 = INT16_MIN;
	int32_t x224 = -1;
	int32_t t50 = 1;

	t50 = (((x221<x222)/x223)%x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	int16_t x228 = -1;
	int32_t t51 = 407;

	t51 = (((x225<x226)/x227)%x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = -1;
	static uint64_t t52 = 3464247LLU;

	t52 = (((x229<x230)/x231)%x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x234 = -62737114223615LL;
	volatile int16_t x235 = -1;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t53 = -3926126044LL;

	t53 = (((x233<x234)/x235)%x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -59741;
	static uint32_t x238 = UINT32_MAX;
	static int16_t x239 = -1;

	t54 = (((x237<x238)/x239)%x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 1U;
	uint16_t x244 = 348U;
	volatile uint32_t t55 = 92U;

	t55 = (((x241<x242)/x243)%x244);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x247 = INT16_MAX;
	uint8_t x248 = 6U;
	int32_t t56 = 46049188;

	t56 = (((x245<x246)/x247)%x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = 3297997LL;
	uint32_t x250 = 1794618976U;
	uint64_t x251 = UINT64_MAX;
	uint32_t x252 = 3380U;
	static volatile uint64_t t57 = 1LLU;

	t57 = (((x249<x250)/x251)%x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = -1LL;
	int8_t x254 = 1;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;

	t58 = (((x253<x254)/x255)%x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 0U;
	uint32_t x258 = 31303U;

	t59 = (((x257<x258)/x259)%x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = -58;
	int32_t x262 = INT32_MAX;
	static uint8_t x264 = 5U;
	uint64_t t60 = 995999085LLU;

	t60 = (((x261<x262)/x263)%x264);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = INT32_MAX;
	volatile int16_t x271 = INT16_MIN;
	volatile int32_t x272 = -756;

	t61 = (((x269<x270)/x271)%x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = -3;
	int8_t x274 = 0;
	int8_t x275 = INT8_MAX;
	static int64_t x276 = 49903492910727710LL;

	t62 = (((x273<x274)/x275)%x276);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MAX;
	uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 497821388U;
	volatile uint32_t t63 = 801537172U;

	t63 = (((x277<x278)/x279)%x280);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = -22;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t64 = 1;

	t64 = (((x281<x282)/x283)%x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = -1LL;
	volatile int16_t x286 = INT16_MAX;
	int16_t x287 = -1;
	int32_t x288 = INT32_MIN;

	t65 = (((x285<x286)/x287)%x288);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = -1;
	int8_t x290 = 0;
	int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MAX;

	t66 = (((x289<x290)/x291)%x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x293 = 1;
	uint64_t x295 = UINT64_MAX;
	static volatile int16_t x296 = INT16_MIN;
	uint64_t t67 = 635799091292569LLU;

	t67 = (((x293<x294)/x295)%x296);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = 2017898716343341369LLU;
	int32_t x298 = -1;
	uint8_t x300 = 1U;
	int32_t t68 = -108;

	t68 = (((x297<x298)/x299)%x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = INT8_MAX;
	static volatile int32_t x306 = -3;
	int16_t x307 = -9;
	volatile int64_t x308 = -1LL;
	volatile int64_t t69 = 0LL;

	t69 = (((x305<x306)/x307)%x308);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x310 = INT16_MAX;
	int8_t x311 = INT8_MIN;
	volatile int32_t t70 = 68350;

	t70 = (((x309<x310)/x311)%x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x313 = INT32_MAX;
	int64_t x315 = INT64_MIN;
	int64_t t71 = -1509873839883LL;

	t71 = (((x313<x314)/x315)%x316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 54697373144LLU;
	uint32_t x318 = 7311U;
	int32_t x319 = 1;
	volatile int16_t x320 = 4;
	int32_t t72 = -124087;

	t72 = (((x317<x318)/x319)%x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = -12LL;
	int64_t x323 = -1LL;
	volatile int8_t x324 = INT8_MAX;

	t73 = (((x321<x322)/x323)%x324);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x327 = INT32_MAX;
	uint32_t x328 = 1042U;

	t74 = (((x325<x326)/x327)%x328);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MAX;
	static int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MAX;
	int64_t t75 = -948627872841122696LL;

	t75 = (((x329<x330)/x331)%x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = INT64_MAX;
	volatile int16_t x334 = -938;
	static int16_t x335 = -1;
	int16_t x336 = INT16_MIN;
	int32_t t76 = 23;

	t76 = (((x333<x334)/x335)%x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x337 = 36977443LL;
	volatile uint64_t x339 = 43887573LLU;
	static uint64_t t77 = 5973502855263195928LLU;

	t77 = (((x337<x338)/x339)%x340);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x341 = INT64_MAX;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = 1;
	static int32_t x344 = INT32_MIN;
	int32_t t78 = 4;

	t78 = (((x341<x342)/x343)%x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 10929LLU;
	static uint64_t t79 = 91513361162104660LLU;

	t79 = (((x345<x346)/x347)%x348);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x349 = 132U;
	volatile int16_t x350 = 0;
	int32_t x351 = -1;
	int16_t x352 = -5800;
	volatile int32_t t80 = 84871;

	t80 = (((x349<x350)/x351)%x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x353 = -29996694LL;
	int8_t x354 = INT8_MIN;
	uint8_t x355 = 1U;
	uint8_t x356 = 62U;

	t81 = (((x353<x354)/x355)%x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 12U;
	volatile int32_t x358 = INT32_MIN;
	static uint16_t x360 = 893U;

	t82 = (((x357<x358)/x359)%x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x361 = -1;
	int16_t x362 = -1;
	static volatile uint8_t x363 = UINT8_MAX;
	static int32_t x364 = INT32_MIN;

	t83 = (((x361<x362)/x363)%x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x365 = 29U;
	static volatile uint32_t x366 = 15355732U;
	int16_t x368 = INT16_MIN;
	int32_t t84 = -467328;

	t84 = (((x365<x366)/x367)%x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = -508158039;
	static volatile int64_t x371 = -1LL;
	int8_t x372 = INT8_MAX;
	int64_t t85 = -1LL;

	t85 = (((x369<x370)/x371)%x372);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = 60088941527330LL;
	volatile int32_t x374 = INT32_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t86 = 56097578081LL;

	t86 = (((x373<x374)/x375)%x376);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x381 = INT32_MIN;
	volatile int32_t x382 = INT32_MIN;
	volatile int64_t x383 = INT64_MIN;
	static volatile int8_t x384 = 1;
	int64_t t87 = 7LL;

	t87 = (((x381<x382)/x383)%x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = 0;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = INT32_MIN;

	t88 = (((x385<x386)/x387)%x388);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = -1673LL;
	volatile int32_t t89 = -5;

	t89 = (((x389<x390)/x391)%x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	static int8_t x400 = INT8_MAX;
	int32_t t90 = 1092;

	t90 = (((x397<x398)/x399)%x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x401 = UINT64_MAX;
	int64_t x402 = -1LL;
	uint32_t t91 = 365U;

	t91 = (((x401<x402)/x403)%x404);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = 56;
	uint32_t x406 = 0U;
	int64_t x407 = INT64_MIN;
	uint64_t x408 = 746568LLU;
	uint64_t t92 = 891LLU;

	t92 = (((x405<x406)/x407)%x408);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = INT64_MIN;
	uint32_t x410 = 0U;
	int32_t x411 = -1;

	t93 = (((x409<x410)/x411)%x412);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x414 = INT8_MAX;
	int8_t x415 = INT8_MIN;
	int64_t x416 = 281791661LL;
	int64_t t94 = 0LL;

	t94 = (((x413<x414)/x415)%x416);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x419 = UINT16_MAX;
	int32_t x420 = -1;
	volatile int32_t t95 = -3596593;

	t95 = (((x417<x418)/x419)%x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x421 = 630051975794369LL;
	uint8_t x422 = UINT8_MAX;
	int8_t x424 = -33;

	t96 = (((x421<x422)/x423)%x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = 591111889;
	uint64_t x426 = 845821LLU;
	int8_t x427 = -1;
	uint16_t x428 = 15833U;
	int32_t t97 = 1752;

	t97 = (((x425<x426)/x427)%x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MIN;
	static volatile int32_t x430 = INT32_MAX;
	uint32_t x431 = 6685977U;
	int64_t x432 = -30314LL;

	t98 = (((x429<x430)/x431)%x432);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x433 = INT16_MIN;
	int64_t x434 = INT64_MIN;
	uint8_t x435 = 53U;
	int16_t x436 = 61;
	int32_t t99 = -35294373;

	t99 = (((x433<x434)/x435)%x436);

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

