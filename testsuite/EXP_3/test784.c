#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 49013264U;
int32_t x6 = INT32_MIN;
int16_t x14 = 3;
static volatile int64_t x17 = 22194102829237307LL;
uint32_t x18 = 1056845811U;
uint8_t x19 = 42U;
int64_t x20 = -3656973499047LL;
volatile int32_t t5 = -17612885;
uint64_t x26 = 127764496LLU;
static uint8_t x27 = 1U;
uint32_t x36 = UINT32_MAX;
static uint32_t t8 = 829264466U;
volatile int32_t x43 = 1796750;
uint32_t x49 = UINT32_MAX;
int64_t x52 = INT64_MIN;
volatile uint16_t x60 = 3194U;
volatile int8_t x66 = 48;
uint8_t x70 = UINT8_MAX;
volatile int8_t x71 = -1;
int32_t x72 = INT32_MAX;
uint32_t x80 = 1487U;
uint16_t x91 = 832U;
uint8_t x92 = 80U;
static volatile int32_t x97 = INT32_MIN;
volatile uint64_t x98 = 9172410275169394LLU;
volatile uint32_t x100 = 194U;
static int16_t x105 = INT16_MAX;
uint64_t x108 = 786272319482LLU;
uint16_t x111 = UINT16_MAX;
static int64_t t23 = 24346LL;
int64_t x119 = INT64_MIN;
static int32_t t26 = -907;
uint64_t x147 = UINT64_MAX;
static volatile uint32_t t32 = 321387422U;
static volatile int32_t t34 = -523513;
static int32_t x186 = INT32_MAX;
int64_t x187 = INT64_MAX;
int16_t x193 = INT16_MIN;
int32_t x195 = -1;
volatile int32_t x196 = -40;
volatile int16_t x198 = INT16_MAX;
uint32_t x199 = UINT32_MAX;
uint32_t t41 = 1529U;
static int16_t x206 = -1;
int16_t x207 = INT16_MIN;
uint16_t x208 = 9714U;
int64_t x229 = INT64_MIN;
int32_t t48 = 5674278;
static volatile int32_t t49 = -406;
volatile uint16_t x241 = 109U;
int16_t x242 = 1;
int64_t x244 = INT64_MIN;
uint32_t x251 = 52521989U;
static int64_t x259 = -1LL;
static volatile int8_t x261 = -1;
uint16_t x263 = 427U;
uint32_t x265 = 15413551U;
volatile int32_t x266 = INT32_MAX;
volatile int32_t t55 = 5;
uint32_t t57 = 486412968U;
uint32_t x290 = 44U;
uint32_t x293 = 1518454609U;
volatile int16_t x298 = INT16_MIN;
volatile uint64_t x301 = 59LLU;
static volatile int64_t x302 = INT64_MIN;
uint16_t x304 = 10U;
uint32_t x314 = 189644U;
volatile uint64_t t65 = 2093396492902542LLU;
int64_t x323 = -1LL;
volatile int32_t x325 = INT32_MAX;
uint8_t x335 = 8U;
static int64_t x337 = INT64_MIN;
int16_t x346 = -2828;
static int64_t x358 = -1LL;
int8_t x365 = INT8_MIN;
int64_t x369 = INT64_MAX;
int64_t x375 = INT64_MIN;
static int64_t x378 = INT64_MIN;
static int32_t t77 = 1130;
int16_t x390 = -1;
uint64_t x392 = 413696371LLU;
static uint64_t t79 = 73270LLU;
volatile int16_t x395 = -2612;
volatile int32_t x396 = INT32_MAX;
int32_t x399 = -87526;
static int16_t x404 = INT16_MIN;
int32_t t83 = 76525523;
volatile uint64_t x414 = UINT64_MAX;
static volatile int64_t t85 = -1LL;
static int64_t x420 = INT64_MAX;
int64_t t86 = -14407929LL;
static int64_t x428 = -865147054708LL;
int64_t t87 = 1LL;
uint32_t x434 = 23117U;
static int32_t x438 = INT32_MIN;
int64_t x442 = INT64_MIN;
uint32_t x444 = 26U;
uint64_t x454 = 1LLU;
volatile uint8_t x455 = 66U;
static uint32_t x476 = UINT32_MAX;
volatile uint32_t t97 = 2952407U;
int16_t x477 = 8360;
uint16_t x488 = 163U;


void f0(void) {
	static volatile uint32_t x1 = UINT32_MAX;
	uint64_t x2 = UINT64_MAX;
	volatile int8_t x3 = 45;
	volatile uint32_t x4 = 348638U;

	t0 = ((x1<x2)/(x3%x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x7 = -1LL;
	int8_t x8 = INT8_MAX;
	int64_t t1 = -27LL;

	t1 = ((x5<x6)/(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 43U;
	int8_t x11 = INT8_MAX;
	volatile int8_t x12 = 4;
	static volatile int32_t t2 = -18;

	t2 = ((x9<x10)/(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int16_t x15 = -4009;
	int32_t x16 = -7808;
	volatile int32_t t3 = -3;

	t3 = ((x13<x14)/(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t t4 = -94LL;

	t4 = ((x17<x18)/(x19%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int16_t x22 = -273;
	uint16_t x23 = UINT16_MAX;
	static int16_t x24 = INT16_MIN;

	t5 = ((x21<x22)/(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 1;

	t6 = ((x25<x26)/(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	static uint64_t x31 = 215864LLU;
	uint64_t x32 = 15253758LLU;
	uint64_t t7 = 215039503550747593LLU;

	t7 = ((x29<x30)/(x31%x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 127U;
	int8_t x34 = -1;
	int16_t x35 = -1927;

	t8 = ((x33<x34)/(x35%x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = 1286095;
	int16_t x39 = 70;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 357;

	t9 = ((x37<x38)/(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 2134U;
	int8_t x42 = -1;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t10 = 352481;

	t10 = ((x41<x42)/(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 837721516LLU;
	int32_t x51 = INT32_MIN;
	int64_t t11 = -1845580596860206063LL;

	t11 = ((x49<x50)/(x51%x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	static uint32_t x58 = 54041U;
	volatile uint8_t x59 = UINT8_MAX;
	volatile int32_t t12 = 36;

	t12 = ((x57<x58)/(x59%x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 1U;
	uint32_t x67 = 234U;
	volatile int64_t x68 = 442537060132LL;
	int64_t t13 = -3LL;

	t13 = ((x65<x66)/(x67%x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	static volatile int32_t t14 = 91531704;

	t14 = ((x69<x70)/(x71%x72));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x77 = 13998U;
	uint32_t x78 = 0U;
	uint32_t x79 = 6U;
	uint32_t t15 = 1U;

	t15 = ((x77<x78)/(x79%x80));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = UINT8_MAX;
	static uint32_t x82 = 7U;
	uint8_t x83 = 121U;
	static volatile uint32_t x84 = 1091204299U;
	volatile uint32_t t16 = 17146222U;

	t16 = ((x81<x82)/(x83%x84));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -1;
	int8_t x86 = 5;
	int64_t x87 = INT64_MAX;
	uint32_t x88 = UINT32_MAX;
	volatile int64_t t17 = -416263571764034LL;

	t17 = ((x85<x86)/(x87%x88));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 17U;
	uint8_t x90 = 81U;
	int32_t t18 = 22618;

	t18 = ((x89<x90)/(x91%x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x99 = -3395;
	volatile uint32_t t19 = 104543U;

	t19 = ((x97<x98)/(x99%x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 0;
	volatile int16_t x102 = -1;
	static int32_t x103 = -14;
	uint16_t x104 = 1015U;
	static int32_t t20 = -59;

	t20 = ((x101<x102)/(x103%x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = INT32_MIN;
	static int8_t x107 = INT8_MIN;
	volatile uint64_t t21 = 32893895002747181LLU;

	t21 = ((x105<x106)/(x107%x108));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = 3259071000642872513LL;
	volatile uint16_t x110 = 71U;
	uint32_t x112 = 14248090U;
	uint32_t t22 = 101132U;

	t22 = ((x109<x110)/(x111%x112));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = 1;
	int64_t x115 = INT64_MIN;
	static uint16_t x116 = UINT16_MAX;

	t23 = ((x113<x114)/(x115%x116));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 5272208LLU;
	int16_t x118 = INT16_MIN;
	int16_t x120 = -26;
	volatile int64_t t24 = -1130854LL;

	t24 = ((x117<x118)/(x119%x120));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = 1;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = -198;
	static int8_t x124 = INT8_MIN;
	static int32_t t25 = 706;

	t25 = ((x121<x122)/(x123%x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x125 = -1;
	uint8_t x126 = 92U;
	uint8_t x127 = 1U;
	volatile uint16_t x128 = UINT16_MAX;

	t26 = ((x125<x126)/(x127%x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x133 = 199LL;
	int32_t x134 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	static volatile int32_t x136 = 788641383;
	static volatile int32_t t27 = -7;

	t27 = ((x133<x134)/(x135%x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x137 = INT32_MIN;
	int32_t x138 = 1703328;
	static uint32_t x139 = 54172877U;
	int8_t x140 = INT8_MAX;
	volatile uint32_t t28 = 40057U;

	t28 = ((x137<x138)/(x139%x140));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -3420716440780614951LL;
	int8_t x142 = -1;
	int8_t x143 = -1;
	int16_t x144 = 4930;
	static volatile int32_t t29 = 21590027;

	t29 = ((x141<x142)/(x143%x144));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x145 = INT64_MIN;
	volatile int16_t x146 = -6042;
	int32_t x148 = 196;
	uint64_t t30 = 103660012134LLU;

	t30 = ((x145<x146)/(x147%x148));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint8_t x150 = 81U;
	static int32_t x151 = INT32_MIN;
	uint64_t x152 = 121013LLU;
	volatile uint64_t t31 = 16450179491800543LLU;

	t31 = ((x149<x150)/(x151%x152));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MAX;
	static volatile int8_t x155 = INT8_MAX;
	static uint32_t x156 = 158196U;

	t32 = ((x153<x154)/(x155%x156));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x161 = -3;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 30LLU;
	int64_t x164 = INT64_MAX;
	uint64_t t33 = 19067142496LLU;

	t33 = ((x161<x162)/(x163%x164));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = 127935490664LL;
	volatile int8_t x171 = INT8_MIN;
	int16_t x172 = -5477;

	t34 = ((x169<x170)/(x171%x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = 0;
	int32_t x178 = 933237;
	int16_t x179 = INT16_MIN;
	volatile int64_t x180 = INT64_MAX;
	volatile int64_t t35 = -1494699LL;

	t35 = ((x177<x178)/(x179%x180));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = 0;
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 45949217LLU;
	volatile uint64_t x184 = 66304LLU;
	volatile uint64_t t36 = 2531539711789581663LLU;

	t36 = ((x181<x182)/(x183%x184));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x185 = INT64_MAX;
	uint16_t x188 = UINT16_MAX;
	int64_t t37 = -1363039526337858130LL;

	t37 = ((x185<x186)/(x187%x188));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = 3032U;
	int16_t x190 = INT16_MAX;
	uint8_t x191 = UINT8_MAX;
	static int64_t x192 = -620054583425514LL;
	int64_t t38 = 0LL;

	t38 = ((x189<x190)/(x191%x192));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x194 = 18080727892LL;
	int32_t t39 = 0;

	t39 = ((x193<x194)/(x195%x196));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x197 = -411572425334606LL;
	static int16_t x200 = INT16_MAX;
	uint32_t t40 = 607288U;

	t40 = ((x197<x198)/(x199%x200));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	volatile uint16_t x202 = 911U;
	uint32_t x203 = 29548363U;
	static uint32_t x204 = 441U;

	t41 = ((x201<x202)/(x203%x204));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x205 = INT32_MAX;
	int32_t t42 = -7361;

	t42 = ((x205<x206)/(x207%x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MIN;
	uint64_t x210 = 7639LLU;
	int16_t x211 = -1;
	uint8_t x212 = 5U;
	volatile int32_t t43 = 2180;

	t43 = ((x209<x210)/(x211%x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x213 = 14831;
	static uint32_t x214 = 29U;
	int16_t x215 = 1;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t44 = 1740202410LL;

	t44 = ((x213<x214)/(x215%x216));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = 1;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	volatile uint16_t x220 = 15250U;
	volatile int32_t t45 = -660291;

	t45 = ((x217<x218)/(x219%x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = 48760910U;
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = 3LLU;
	static volatile uint64_t t46 = 383LLU;

	t46 = ((x225<x226)/(x227%x228));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x230 = UINT64_MAX;
	uint32_t x231 = 143839U;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t47 = 0U;

	t47 = ((x229<x230)/(x231%x232));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x233 = 10930U;
	uint8_t x234 = 1U;
	volatile int16_t x235 = 3;
	int8_t x236 = 4;

	t48 = ((x233<x234)/(x235%x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x237 = -20;
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = 1;
	int8_t x240 = INT8_MAX;

	t49 = ((x237<x238)/(x239%x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x243 = INT32_MIN;
	volatile int64_t t50 = 3765699948LL;

	t50 = ((x241<x242)/(x243%x244));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x245 = 11;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 106U;
	uint8_t x248 = 20U;
	static int32_t t51 = -7459763;

	t51 = ((x245<x246)/(x247%x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = 79U;
	int64_t x252 = 1252540473954515LL;
	static volatile int64_t t52 = -136352012456768442LL;

	t52 = ((x249<x250)/(x251%x252));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -196405503;
	uint32_t x258 = 3953U;
	volatile int32_t x260 = INT32_MIN;
	static volatile int64_t t53 = 1407779730525198082LL;

	t53 = ((x257<x258)/(x259%x260));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x262 = INT32_MAX;
	int32_t x264 = INT32_MAX;
	volatile int32_t t54 = -427277370;

	t54 = ((x261<x262)/(x263%x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x267 = 4U;
	uint8_t x268 = 75U;

	t55 = ((x265<x266)/(x267%x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = INT16_MIN;
	static int16_t x270 = -62;
	uint32_t x271 = 1U;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t56 = 2236760U;

	t56 = ((x269<x270)/(x271%x272));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x273 = 631176U;
	uint8_t x274 = 10U;
	uint32_t x275 = 3104112U;
	static int32_t x276 = INT32_MIN;

	t57 = ((x273<x274)/(x275%x276));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	static volatile int64_t x283 = 220018LL;
	volatile int32_t x284 = INT32_MIN;
	volatile int64_t t58 = 1332473569035063LL;

	t58 = ((x281<x282)/(x283%x284));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x289 = 2U;
	int64_t x291 = INT64_MAX;
	int32_t x292 = 757766948;
	volatile int64_t t59 = 109LL;

	t59 = ((x289<x290)/(x291%x292));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x294 = INT8_MIN;
	uint8_t x295 = 5U;
	static uint32_t x296 = UINT32_MAX;
	volatile uint32_t t60 = 1606361061U;

	t60 = ((x293<x294)/(x295%x296));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x297 = INT32_MIN;
	int8_t x299 = 2;
	int8_t x300 = 5;
	volatile int32_t t61 = -28593;

	t61 = ((x297<x298)/(x299%x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x303 = 21U;
	static volatile int32_t t62 = -213927;

	t62 = ((x301<x302)/(x303%x304));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x305 = -968909;
	static int64_t x306 = 9280LL;
	volatile uint16_t x307 = 4567U;
	int64_t x308 = INT64_MAX;
	int64_t t63 = 429700103LL;

	t63 = ((x305<x306)/(x307%x308));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x313 = INT64_MAX;
	int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MIN;
	int64_t t64 = -6731369390LL;

	t64 = ((x313<x314)/(x315%x316));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = 177292623LL;
	uint64_t x318 = 192160LLU;
	volatile uint64_t x319 = 47667570788092658LLU;
	uint64_t x320 = 1948954034LLU;

	t65 = ((x317<x318)/(x319%x320));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x321 = 5153189U;
	uint32_t x322 = 673U;
	int16_t x324 = INT16_MIN;
	static volatile int64_t t66 = -1631450973816152498LL;

	t66 = ((x321<x322)/(x323%x324));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x326 = UINT32_MAX;
	volatile uint32_t x327 = 1543113U;
	int8_t x328 = -1;
	volatile uint32_t t67 = 2U;

	t67 = ((x325<x326)/(x327%x328));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x329 = INT16_MIN;
	int32_t x330 = 220012254;
	int64_t x331 = -154633227LL;
	static uint64_t x332 = UINT64_MAX;
	volatile uint64_t t68 = 2301185619798640375LLU;

	t68 = ((x329<x330)/(x331%x332));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = -1;
	int32_t x334 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t69 = 140655291904621725LLU;

	t69 = ((x333<x334)/(x335%x336));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 69346LLU;
	int16_t x340 = 6277;
	uint64_t t70 = 1578LLU;

	t70 = ((x337<x338)/(x339%x340));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = -11;
	uint16_t x342 = 28U;
	int16_t x343 = -6700;
	int16_t x344 = INT16_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x341<x342)/(x343%x344));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	volatile uint64_t x347 = 3262081077302482597LLU;
	static uint16_t x348 = UINT16_MAX;
	volatile uint64_t t72 = 505403773347576LLU;

	t72 = ((x345<x346)/(x347%x348));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x357 = INT16_MIN;
	volatile int16_t x359 = 2307;
	volatile int16_t x360 = INT16_MIN;
	int32_t t73 = 5;

	t73 = ((x357<x358)/(x359%x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x366 = INT8_MIN;
	static uint32_t x367 = 258469U;
	volatile uint16_t x368 = UINT16_MAX;
	uint32_t t74 = 7U;

	t74 = ((x365<x366)/(x367%x368));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x370 = -1LL;
	volatile uint16_t x371 = UINT16_MAX;
	static int16_t x372 = INT16_MIN;
	int32_t t75 = 675;

	t75 = ((x369<x370)/(x371%x372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x373 = 5U;
	volatile int8_t x374 = -1;
	static uint32_t x376 = 65460U;
	int64_t t76 = -27996830548415035LL;

	t76 = ((x373<x374)/(x375%x376));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = 1365519;
	int32_t x379 = INT32_MAX;
	static int32_t x380 = 1841;

	t77 = ((x377<x378)/(x379%x380));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x385 = -1LL;
	int64_t x386 = -26816LL;
	static int64_t x387 = 5LL;
	volatile uint32_t x388 = UINT32_MAX;
	int64_t t78 = -146999480302291LL;

	t78 = ((x385<x386)/(x387%x388));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x389 = INT16_MIN;
	static int64_t x391 = 4708LL;

	t79 = ((x389<x390)/(x391%x392));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = 5U;
	int16_t x394 = INT16_MIN;
	int32_t t80 = 1;

	t80 = ((x393<x394)/(x395%x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x398 = -11976;
	int8_t x400 = 5;
	int32_t t81 = -54758567;

	t81 = ((x397<x398)/(x399%x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x401 = -1;
	uint64_t x402 = UINT64_MAX;
	static int8_t x403 = -1;
	volatile int32_t t82 = 1052786;

	t82 = ((x401<x402)/(x403%x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x405 = 242279180U;
	uint16_t x406 = 24U;
	int32_t x407 = INT32_MIN;
	uint16_t x408 = 7U;

	t83 = ((x405<x406)/(x407%x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x409 = UINT64_MAX;
	uint32_t x410 = 4155257U;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	static int32_t t84 = 225;

	t84 = ((x409<x410)/(x411%x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x413 = INT8_MIN;
	int16_t x415 = INT16_MAX;
	int64_t x416 = INT64_MIN;

	t85 = ((x413<x414)/(x415%x416));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = INT32_MIN;
	volatile int16_t x418 = INT16_MIN;
	int64_t x419 = 2578501664587176297LL;

	t86 = ((x417<x418)/(x419%x420));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = INT8_MAX;
	static int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;

	t87 = ((x425<x426)/(x427%x428));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x433 = 106349842309901LLU;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	volatile int64_t t88 = 3580775682722384LL;

	t88 = ((x433<x434)/(x435%x436));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x437 = 4;
	static int32_t x439 = -49777302;
	uint8_t x440 = UINT8_MAX;
	int32_t t89 = -443199700;

	t89 = ((x437<x438)/(x439%x440));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x441 = -1;
	volatile int32_t x443 = 1;
	volatile uint32_t t90 = 264133U;

	t90 = ((x441<x442)/(x443%x444));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = 3874;
	uint16_t x446 = UINT16_MAX;
	volatile int32_t x447 = 45;
	static int32_t x448 = 6391;
	static int32_t t91 = -211327;

	t91 = ((x445<x446)/(x447%x448));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x449 = -137531321688712035LL;
	static int8_t x450 = 54;
	static volatile int8_t x451 = -1;
	volatile int16_t x452 = INT16_MIN;
	int32_t t92 = 953;

	t92 = ((x449<x450)/(x451%x452));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x453 = 319LLU;
	static int64_t x456 = INT64_MAX;
	static volatile int64_t t93 = 1570874893235026LL;

	t93 = ((x453<x454)/(x455%x456));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = -17LL;
	uint8_t x462 = 1U;
	volatile int64_t x463 = -159159LL;
	int8_t x464 = INT8_MIN;
	int64_t t94 = 102109656245634LL;

	t94 = ((x461<x462)/(x463%x464));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x465 = 0;
	volatile int16_t x466 = 0;
	uint32_t x467 = 113305U;
	int64_t x468 = -288058LL;
	int64_t t95 = -1LL;

	t95 = ((x465<x466)/(x467%x468));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x469 = -491;
	int8_t x470 = -1;
	volatile uint16_t x471 = 305U;
	int8_t x472 = INT8_MAX;
	volatile int32_t t96 = -253759;

	t96 = ((x469<x470)/(x471%x472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	static int16_t x475 = INT16_MAX;

	t97 = ((x473<x474)/(x475%x476));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x478 = -6;
	static volatile int16_t x479 = -1;
	int8_t x480 = 3;
	volatile int32_t t98 = 936530;

	t98 = ((x477<x478)/(x479%x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = 7U;
	volatile int32_t x486 = INT32_MIN;
	int64_t x487 = INT64_MIN;
	int64_t t99 = 16LL;

	t99 = ((x485<x486)/(x487%x488));

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

