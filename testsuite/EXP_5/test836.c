#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = INT8_MAX;
uint32_t x22 = 0U;
uint64_t t5 = 439934389895727LLU;
uint16_t x34 = UINT16_MAX;
uint8_t x35 = 72U;
int16_t x38 = -1008;
volatile int32_t t8 = -23;
volatile uint32_t t9 = 1U;
int16_t x50 = -1;
volatile int64_t t10 = -2005656748950371LL;
static int32_t x54 = INT32_MIN;
uint64_t x62 = UINT64_MAX;
uint64_t x69 = 4341828796873437838LLU;
static int8_t x71 = INT8_MAX;
static volatile uint64_t t15 = 2274294209352203LLU;
uint16_t x76 = UINT16_MAX;
volatile int8_t x78 = INT8_MIN;
volatile int8_t x82 = INT8_MIN;
int64_t x84 = -224417480LL;
int32_t x91 = 429966;
volatile int64_t t19 = 2085425887519LL;
static uint8_t x96 = UINT8_MAX;
int32_t x102 = INT32_MIN;
uint16_t x103 = 3U;
uint16_t x108 = 183U;
int32_t t23 = -12017;
int64_t x118 = INT64_MAX;
int64_t x132 = -1LL;
uint16_t x136 = 39U;
static volatile uint8_t x138 = 8U;
int32_t x139 = INT32_MIN;
volatile int32_t t31 = 467125761;
int8_t x143 = INT8_MAX;
int64_t x153 = -1LL;
volatile uint64_t x158 = 57810818350974LLU;
volatile uint32_t x160 = 271492708U;
int8_t x161 = INT8_MIN;
int64_t t38 = -1500119LL;
uint8_t x172 = UINT8_MAX;
int8_t x174 = -1;
static int64_t x176 = -375LL;
uint32_t x177 = 357755182U;
static int8_t x179 = INT8_MIN;
static volatile int64_t t42 = 39096377611LL;
uint64_t x193 = 1LLU;
int16_t x194 = -1;
uint32_t x198 = UINT32_MAX;
volatile int64_t t45 = -173594765847LL;
static volatile int32_t x205 = 12605358;
static uint64_t x206 = 303379988LLU;
volatile uint32_t x211 = UINT32_MAX;
volatile int64_t t48 = 429985419803LL;
uint64_t x222 = 3938LLU;
uint64_t x224 = 0LLU;
uint64_t t50 = 1620931704156926LLU;
uint32_t x225 = UINT32_MAX;
static uint8_t x227 = 11U;
volatile int32_t x237 = -1;
uint64_t t54 = 4LLU;
int32_t x245 = INT32_MIN;
uint8_t x251 = 14U;
int64_t x257 = -1LL;
static int8_t x259 = -1;
uint8_t x260 = 118U;
int16_t x267 = -279;
int8_t x272 = INT8_MAX;
int8_t x273 = INT8_MIN;
int8_t x279 = INT8_MAX;
uint64_t x282 = 22LLU;
volatile int64_t x292 = -4295593619203608LL;
int32_t x293 = 5362539;
int64_t t69 = 12317735346221LL;
uint8_t x302 = UINT8_MAX;
int8_t x305 = 1;
int32_t x307 = -1;
int32_t x328 = 19530;
static volatile int64_t x331 = -1LL;
int64_t t79 = 55688LL;
int64_t x353 = INT64_MIN;
static int32_t x354 = 459162;
int32_t x356 = INT32_MAX;
int16_t x357 = 0;
volatile uint64_t t84 = 14994509788LLU;
static int32_t x361 = INT32_MAX;
int64_t x362 = INT64_MAX;
volatile int64_t t85 = -12732679476052160LL;
uint32_t x365 = UINT32_MAX;
uint8_t x370 = 0U;
int16_t x373 = -1;
static int32_t x376 = INT32_MIN;
volatile uint32_t t89 = 125U;
int16_t x381 = INT16_MIN;
int16_t x386 = INT16_MIN;
int8_t x388 = INT8_MIN;
static volatile int16_t x391 = 14425;
int16_t x393 = 2378;
volatile int32_t x400 = INT32_MAX;
static int16_t x403 = INT16_MAX;
uint16_t x405 = 30U;
static uint64_t x407 = 991097600LLU;
static int16_t x410 = INT16_MIN;
int32_t x411 = 1066340294;


void f0(void) {
	int64_t x1 = 123LL;
	int32_t x2 = 2263;
	volatile uint32_t x3 = 123094451U;
	int32_t x4 = 3878264;
	static int64_t t0 = 213LL;

	t0 = (x1/((x2%x3)^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int64_t x6 = -13LL;
	volatile int8_t x7 = INT8_MAX;
	volatile int16_t x8 = 28;
	volatile int64_t t1 = -1LL;

	t1 = (x5/((x6%x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static volatile uint16_t x10 = UINT16_MAX;
	static volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 266759;

	t2 = (x9/((x10%x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 8100;
	int16_t x18 = INT16_MAX;
	int64_t x19 = INT64_MIN;
	static uint8_t x20 = 97U;
	static int64_t t3 = 1380630687990714LL;

	t3 = (x17/((x18%x19)^x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	int8_t x24 = -8;
	int64_t t4 = 4889LL;

	t4 = (x21/((x22%x23)^x24));

	if (t4 != 16LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	int32_t x27 = -989316;
	volatile int32_t x28 = INT32_MIN;

	t5 = (x25/((x26%x27)^x28));

	if (t5 != 8592607135LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -1;
	int16_t x30 = -1;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 4371399586768LLU;
	volatile uint64_t t6 = 14973LLU;

	t6 = (x29/((x30%x31)^x32));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	static uint8_t x36 = UINT8_MAX;
	int32_t t7 = 956229;

	t7 = (x33/((x34%x35)^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = 22;
	int32_t x40 = -329317601;

	t8 = (x37/((x38%x39)^x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 913U;
	static int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 757525111U;

	t9 = (x45/((x46%x47)^x48));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = 3304147713919728244LL;
	int32_t x51 = -1;
	int8_t x52 = -23;

	t10 = (x49/((x50%x51)^x52));

	if (t10 != -143658596257379488LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 0U;
	volatile int64_t x55 = 4075195167259611048LL;
	int64_t x56 = INT64_MAX;
	volatile int64_t t11 = 0LL;

	t11 = (x53/((x54%x55)^x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = 153300701;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MAX;
	int32_t x60 = -28031;
	int64_t t12 = -631233316LL;

	t12 = (x57/((x58%x59)^x60));

	if (t12 != 5468LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MAX;
	uint16_t x63 = 666U;
	uint16_t x64 = 1732U;
	uint64_t t13 = 1033800LLU;

	t13 = (x61/((x62%x63)^x64));

	if (t13 != 1319903LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	uint16_t x66 = 3922U;
	uint32_t x67 = 853292129U;
	uint64_t x68 = 24LLU;
	uint64_t t14 = 4104LLU;

	t14 = (x65/((x66%x67)^x68));

	if (t14 != 4713015859404586LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x70 = -1LL;
	uint64_t x72 = 0LLU;

	t15 = (x69/((x70%x71)^x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -62;
	volatile int64_t x74 = -1LL;
	int64_t x75 = -4370862154LL;
	volatile int64_t t16 = -2160172518795LL;

	t16 = (x73/((x74%x75)^x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 792202063LL;
	int8_t x79 = -2;
	int8_t x80 = -45;
	static int64_t t17 = -983LL;

	t17 = (x77/((x78%x79)^x80));

	if (t17 != -17604490LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x83 = 3;
	volatile int64_t t18 = -899295LL;

	t18 = (x81/((x82%x83)^x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MAX;

	t19 = (x89/((x90%x91)^x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = INT8_MAX;
	static int16_t x94 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	int32_t t20 = -598489591;

	t20 = (x93/((x94%x95)^x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	int64_t x98 = -1LL;
	int32_t x99 = 6380;
	int16_t x100 = INT16_MIN;
	volatile int64_t t21 = 54261377445LL;

	t21 = (x97/((x98%x99)^x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 6;
	int64_t x104 = INT64_MAX;
	int64_t t22 = 53144256475872LL;

	t22 = (x101/((x102%x103)^x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	static volatile uint8_t x106 = 86U;
	int16_t x107 = INT16_MIN;

	t23 = (x105/((x106%x107)^x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = INT8_MIN;
	int32_t x110 = -1;
	uint32_t x111 = 2U;
	volatile uint64_t x112 = 27LLU;
	uint64_t t24 = 95554981629207LLU;

	t24 = (x109/((x110%x111)^x112));

	if (t24 != 709490156681136595LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 1559053287904115807LLU;
	int8_t x114 = -1;
	volatile int16_t x115 = -816;
	uint64_t x116 = 30LLU;
	uint64_t t25 = 40603LLU;

	t25 = (x113/((x114%x115)^x116));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x117 = 104U;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -68167610334LL;
	volatile int64_t t26 = 16082934607771LL;

	t26 = (x117/((x118%x119)^x120));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x121 = 55U;
	int8_t x122 = -63;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;
	volatile int32_t t27 = -17;

	t27 = (x121/((x122%x123)^x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -1;
	volatile int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	int8_t x128 = -47;
	volatile int64_t t28 = 119738972LL;

	t28 = (x125/((x126%x127)^x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	uint16_t x130 = 5U;
	volatile int64_t x131 = INT64_MIN;
	int64_t t29 = 20LL;

	t29 = (x129/((x130%x131)^x132));

	if (t29 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 27137U;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -22741576;
	static volatile uint32_t t30 = 204051689U;

	t30 = (x133/((x134%x135)^x136));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = 0;
	int16_t x140 = -2;

	t31 = (x137/((x138%x139)^x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x141 = 15U;
	uint32_t x142 = UINT32_MAX;
	int64_t x144 = INT64_MAX;
	int64_t t32 = 2LL;

	t32 = (x141/((x142%x143)^x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = -13;
	int16_t x147 = -7;
	volatile uint8_t x148 = 53U;
	volatile int32_t t33 = -448732;

	t33 = (x145/((x146%x147)^x148));

	if (t33 != 668) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 15193LLU;
	uint64_t x150 = 3198512LLU;
	uint64_t x151 = 181765934481000LLU;
	int8_t x152 = -1;
	static uint64_t t34 = 56820891186253288LLU;

	t34 = (x149/((x150%x151)^x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = INT32_MAX;
	uint8_t x155 = 14U;
	static volatile int16_t x156 = INT16_MIN;
	int64_t t35 = 24103LL;

	t35 = (x153/((x154%x155)^x156));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -1;
	int16_t x159 = INT16_MAX;
	uint64_t t36 = 8524722732375LLU;

	t36 = (x157/((x158%x159)^x160));

	if (t36 != 67940789569LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x162 = 55864229492838506LLU;
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MAX;
	static volatile uint64_t t37 = 132695596882LLU;

	t37 = (x161/((x162%x163)^x164));

	if (t37 != 330LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = 6;
	volatile int16_t x168 = -579;

	t38 = (x165/((x166%x167)^x168));

	if (t38 != -3702558LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x169 = 1;
	int16_t x170 = -102;
	int64_t x171 = INT64_MAX;
	volatile int64_t t39 = -32831406LL;

	t39 = (x169/((x170%x171)^x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x173 = 111U;
	uint16_t x175 = 9U;
	volatile int64_t t40 = -3683627495317314028LL;

	t40 = (x173/((x174%x175)^x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = -8;
	int64_t x180 = INT64_MIN;
	volatile int64_t t41 = -101093009124992LL;

	t41 = (x177/((x178%x179)^x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MAX;
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = INT64_MIN;
	volatile uint8_t x192 = 1U;

	t42 = (x189/((x190%x191)^x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static uint64_t t43 = 7887223516348364072LLU;

	t43 = (x193/((x194%x195)^x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MIN;
	int16_t x199 = -56;
	volatile int32_t x200 = INT32_MIN;
	static volatile int64_t t44 = 128961231LL;

	t44 = (x197/((x198%x199)^x200));

	if (t44 != -4294967186LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	static volatile int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	static int64_t x204 = INT64_MIN;

	t45 = (x201/((x202%x203)^x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x207 = -1;
	static int16_t x208 = -7429;
	volatile uint64_t t46 = 106496004595LLU;

	t46 = (x205/((x206%x207)^x208));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int32_t x212 = -597815;
	volatile uint32_t t47 = 89U;

	t47 = (x209/((x210%x211)^x212));

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = -1;
	static volatile int32_t x215 = INT32_MIN;
	volatile int64_t x216 = INT64_MAX;

	t48 = (x213/((x214%x215)^x216));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile uint16_t x218 = 1U;
	static int32_t x219 = -1;
	static int8_t x220 = INT8_MIN;
	int64_t t49 = 8668636385533122LL;

	t49 = (x217/((x218%x219)^x220));

	if (t49 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 27829U;
	int64_t x223 = INT64_MIN;

	t50 = (x221/((x222%x223)^x224));

	if (t50 != 7LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x226 = 117831U;
	volatile int32_t x228 = -1;
	volatile uint32_t t51 = 197159481U;

	t51 = (x225/((x226%x227)^x228));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MIN;
	static int32_t x230 = INT32_MAX;
	int32_t x231 = -9;
	uint64_t x232 = UINT64_MAX;
	static uint64_t t52 = 972502577LLU;

	t52 = (x229/((x230%x231)^x232));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x233 = 637512LLU;
	int64_t x234 = 1861192LL;
	volatile int32_t x235 = -284685;
	int64_t x236 = -288242950516415123LL;
	uint64_t t53 = 6462120LLU;

	t53 = (x233/((x234%x235)^x236));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x238 = UINT64_MAX;
	uint8_t x239 = 3U;
	int16_t x240 = INT16_MIN;

	t54 = (x237/((x238%x239)^x240));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = -1LL;
	int16_t x242 = 833;
	volatile int16_t x243 = INT16_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	int64_t t55 = 120535LL;

	t55 = (x241/((x242%x243)^x244));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x246 = INT32_MAX;
	static uint32_t x247 = UINT32_MAX;
	int16_t x248 = 12;
	static volatile uint32_t t56 = 180703U;

	t56 = (x245/((x246%x247)^x248));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = 12637495749740LLU;
	int64_t x250 = -1LL;
	static volatile int32_t x252 = 7;
	uint64_t t57 = 98535LLU;

	t57 = (x249/((x250%x251)^x252));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -52;
	int16_t x254 = 0;
	int64_t x255 = 28637LL;
	int32_t x256 = INT32_MIN;
	int64_t t58 = 20618LL;

	t58 = (x253/((x254%x255)^x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x258 = INT8_MIN;
	static int64_t t59 = -12527046002647370LL;

	t59 = (x257/((x258%x259)^x260));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 6U;
	int32_t x263 = -1;
	volatile uint64_t x264 = UINT64_MAX;
	volatile uint64_t t60 = 305236557182708734LLU;

	t60 = (x261/((x262%x263)^x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = UINT64_MAX;
	uint16_t x266 = 12677U;
	int64_t x268 = -1LL;
	volatile uint64_t t61 = 68732402296947LLU;

	t61 = (x265/((x266%x267)^x268));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 63U;
	static volatile int32_t t62 = 7777205;

	t62 = (x269/((x270%x271)^x272));

	if (t62 != -17318416) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = 442LL;
	static int8_t x275 = -1;
	uint8_t x276 = 7U;
	volatile int64_t t63 = 8129681LL;

	t63 = (x273/((x274%x275)^x276));

	if (t63 != -18LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = 5U;
	uint64_t x278 = UINT64_MAX;
	static int16_t x280 = INT16_MIN;
	static uint64_t t64 = 10546LLU;

	t64 = (x277/((x278%x279)^x280));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x283 = 2653U;
	static uint64_t x284 = 423377207934618LLU;
	uint64_t t65 = 63960120246057LLU;

	t65 = (x281/((x282%x283)^x284));

	if (t65 != 43570LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = -14;
	int64_t x286 = -1LL;
	uint64_t x287 = 29LLU;
	static int16_t x288 = INT16_MIN;
	volatile uint64_t t66 = 1045871LLU;

	t66 = (x285/((x286%x287)^x288));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = UINT8_MAX;
	volatile int8_t x291 = 1;
	int64_t t67 = -332295115315349LL;

	t67 = (x289/((x290%x291)^x292));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x294 = 10125U;
	int16_t x295 = 422;
	int16_t x296 = INT16_MIN;
	volatile int32_t t68 = 7420753;

	t68 = (x293/((x294%x295)^x296));

	if (t68 != -165) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x297 = UINT8_MAX;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = 361636LL;
	int8_t x300 = 0;

	t69 = (x297/((x298%x299)^x300));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int8_t x303 = INT8_MIN;
	uint32_t x304 = 9U;
	uint32_t t70 = 19U;

	t70 = (x301/((x302%x303)^x304));

	if (t70 != 555U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x306 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;
	int64_t t71 = 64029515046LL;

	t71 = (x305/((x306%x307)^x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = -1;
	static uint8_t x310 = 0U;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t72 = -13694818;

	t72 = (x309/((x310%x311)^x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x313 = INT16_MAX;
	int16_t x314 = -2;
	int16_t x315 = -505;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t73 = -6425;

	t73 = (x313/((x314%x315)^x316));

	if (t73 != 260) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = UINT16_MAX;
	static volatile int8_t x318 = -4;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = 110438144141642LLU;
	volatile uint64_t t74 = 20LLU;

	t74 = (x317/((x318%x319)^x320));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = 6;
	volatile uint8_t x322 = 47U;
	int64_t x323 = 528330104878LL;
	int8_t x324 = INT8_MIN;
	static int64_t t75 = 34865258398LL;

	t75 = (x321/((x322%x323)^x324));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = -1LL;
	int64_t x326 = -265271209322179865LL;
	int8_t x327 = -1;
	volatile int64_t t76 = -14LL;

	t76 = (x325/((x326%x327)^x328));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = -1;
	int32_t x332 = -5;
	static int64_t t77 = 6852234LL;

	t77 = (x329/((x330%x331)^x332));

	if (t77 != 6553LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = 2981U;
	int8_t x335 = -5;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t78 = 1548115048805995474LLU;

	t78 = (x333/((x334%x335)^x336));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = 13U;
	int64_t x339 = INT64_MIN;
	static uint8_t x340 = UINT8_MAX;

	t79 = (x337/((x338%x339)^x340));

	if (t79 != -135LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x341 = INT8_MIN;
	uint32_t x342 = 4281827U;
	uint16_t x343 = 5U;
	static int32_t x344 = -1;
	volatile uint32_t t80 = 22372540U;

	t80 = (x341/((x342%x343)^x344));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	volatile int32_t x346 = INT32_MIN;
	uint32_t x347 = 553519504U;
	volatile int8_t x348 = -1;
	volatile int64_t t81 = -2498LL;

	t81 = (x345/((x346%x347)^x348));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = -1;
	uint64_t x350 = 13662434915274245LLU;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;
	static volatile uint64_t t82 = 100899808LLU;

	t82 = (x349/((x350%x351)^x352));

	if (t82 != 4367838961LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x355 = INT16_MIN;
	volatile int64_t t83 = 14413890667LL;

	t83 = (x353/((x354%x355)^x356));

	if (t83 != -4294968118LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x358 = -7421;
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 510701576227249875LLU;

	t84 = (x357/((x358%x359)^x360));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x363 = UINT16_MAX;
	static int32_t x364 = INT32_MIN;

	t85 = (x361/((x362%x363)^x364));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x366 = 234U;
	uint32_t x367 = 46644576U;
	static uint8_t x368 = 45U;
	volatile uint32_t t86 = 2855765U;

	t86 = (x365/((x366%x367)^x368));

	if (t86 != 21582750U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = 37036LL;
	static uint64_t x371 = UINT64_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t87 = 16977383988LLU;

	t87 = (x369/((x370%x371)^x372));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x374 = 1;
	int64_t x375 = INT64_MIN;
	static volatile int64_t t88 = -1051688LL;

	t88 = (x373/((x374%x375)^x376));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x377 = -1;
	int32_t x378 = INT32_MAX;
	int32_t x379 = 7912;
	uint32_t x380 = 664U;

	t89 = (x377/((x378%x379)^x380));

	if (t89 != 91382282U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x382 = 2342442169735781LL;
	int32_t x383 = INT32_MIN;
	int64_t x384 = 798742341791178LL;
	volatile int64_t t90 = -2345476245816LL;

	t90 = (x381/((x382%x383)^x384));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = 1;
	int64_t x387 = INT64_MIN;
	volatile int64_t t91 = 120681LL;

	t91 = (x385/((x386%x387)^x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MAX;
	volatile uint64_t x390 = 573252550962324LLU;
	int64_t x392 = 1405549LL;
	static uint64_t t92 = 7965LLU;

	t92 = (x389/((x390%x391)^x392));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x394 = UINT32_MAX;
	static int64_t x395 = INT64_MIN;
	int32_t x396 = -1;
	volatile int64_t t93 = 5741228964274119LL;

	t93 = (x393/((x394%x395)^x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = 3398643582798LLU;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 3U;
	volatile uint64_t t94 = 510213950878246LLU;

	t94 = (x397/((x398%x399)^x400));

	if (t94 != 1582LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -1LL;
	int64_t x402 = -2867LL;
	int64_t x404 = 546131343292LL;
	int64_t t95 = -5369694LL;

	t95 = (x401/((x402%x403)^x404));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x406 = INT8_MIN;
	volatile int8_t x408 = -5;
	volatile uint64_t t96 = 1196LLU;

	t96 = (x405/((x406%x407)^x408));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = -97070616LL;
	int8_t x412 = INT8_MAX;
	volatile int64_t t97 = -63657731138LL;

	t97 = (x409/((x410%x411)^x412));

	if (t97 != 2973LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = INT64_MIN;
	volatile int8_t x415 = INT8_MAX;
	int64_t x416 = INT64_MAX;
	static int64_t t98 = -212999074048LL;

	t98 = (x413/((x414%x415)^x416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x417 = INT16_MIN;
	int64_t x418 = -110LL;
	int32_t x419 = INT32_MAX;
	volatile int32_t x420 = INT32_MAX;
	int64_t t99 = -15822612091LL;

	t99 = (x417/((x418%x419)^x420));

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

