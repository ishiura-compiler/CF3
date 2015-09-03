#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint16_t x6 = 186U;
static int8_t x7 = INT8_MIN;
uint32_t x9 = 87U;
int64_t x20 = 19509884195LL;
uint32_t x27 = 56103950U;
static int8_t x28 = INT8_MIN;
static uint32_t x29 = 12458U;
static int64_t x30 = INT64_MAX;
volatile uint32_t x31 = UINT32_MAX;
static int16_t x39 = INT16_MAX;
volatile int64_t t9 = -2467254LL;
int32_t x43 = -151;
int16_t x50 = -1;
int32_t x59 = INT32_MAX;
uint64_t t13 = 6885LLU;
int16_t x61 = INT16_MIN;
static volatile uint8_t x65 = 7U;
static uint16_t x67 = UINT16_MAX;
static int16_t x71 = -983;
volatile int32_t x89 = INT32_MIN;
uint32_t x92 = 648234U;
int64_t x99 = -642191326696LL;
volatile uint64_t x104 = 480310376LLU;
int64_t x108 = INT64_MIN;
uint8_t x116 = 23U;
volatile int64_t x121 = INT64_MAX;
volatile int64_t t27 = 882556187LL;
static int32_t x135 = INT32_MIN;
int32_t x136 = -2855;
int64_t t29 = 2702895776LL;
int64_t t30 = -1094988672LL;
static volatile int64_t x141 = INT64_MIN;
int64_t t31 = 141925556167187261LL;
uint8_t x150 = 1U;
volatile int16_t x152 = INT16_MIN;
uint64_t t35 = 2098625074482LLU;
volatile int32_t x172 = 63;
volatile uint32_t x175 = UINT32_MAX;
int64_t x176 = INT64_MAX;
uint32_t x177 = UINT32_MAX;
uint64_t t40 = 197363LLU;
static int8_t x208 = INT8_MIN;
static volatile int32_t t44 = 828754111;
int64_t x214 = INT64_MIN;
volatile int16_t x222 = INT16_MAX;
int8_t x226 = INT8_MIN;
int16_t x227 = INT16_MIN;
volatile uint64_t t48 = 26958144LLU;
int64_t t49 = 47145399458345LL;
uint16_t x242 = UINT16_MAX;
int64_t x243 = 225LL;
uint8_t x244 = 10U;
int8_t x257 = INT8_MIN;
uint64_t x266 = 16152LLU;
volatile int8_t x267 = -21;
int16_t x268 = -8694;
static volatile int8_t x285 = -1;
volatile int8_t x287 = INT8_MAX;
int16_t x288 = INT16_MIN;
int16_t x289 = -3856;
int8_t x292 = INT8_MIN;
static int64_t t61 = 168563006034132672LL;
int32_t x301 = INT32_MAX;
volatile int32_t x303 = -158;
int32_t x306 = INT32_MIN;
uint16_t x314 = UINT16_MAX;
int64_t x315 = -54540LL;
int64_t t65 = 119271103255823LL;
int8_t x320 = INT8_MAX;
volatile int64_t t66 = 36047477856LL;
uint16_t x341 = 0U;
volatile int16_t x345 = -1;
uint64_t x348 = 2547641901867934783LLU;
static volatile uint64_t t72 = 924082021303564LLU;
volatile int32_t t74 = 32570;
volatile uint64_t x363 = UINT64_MAX;
int32_t x364 = 2628;
volatile uint64_t t75 = 8280883894596612430LLU;
volatile uint64_t t77 = 60442LLU;
int32_t x376 = INT32_MAX;
volatile int8_t x378 = 0;
volatile uint16_t x380 = 13469U;
uint64_t x382 = 1LLU;
int16_t x385 = -1;
static int64_t t82 = 6243688425555744LL;
int32_t x397 = INT32_MIN;
int32_t x400 = -827253918;
int32_t x407 = INT32_MIN;
int64_t x411 = INT64_MIN;
int32_t x414 = -1;
static volatile int8_t x417 = -1;
uint8_t x418 = UINT8_MAX;
uint8_t x419 = 24U;
static volatile int64_t x422 = -1LL;
int64_t t89 = 266993702LL;
int32_t x428 = INT32_MIN;
uint8_t x434 = 5U;
uint8_t x435 = 1U;
int8_t x441 = -1;
uint16_t x443 = 1007U;
int16_t x444 = INT16_MIN;
int32_t t95 = -5835;
volatile int64_t x450 = INT64_MIN;
int64_t x451 = -455561317265491LL;
volatile int32_t x454 = INT32_MAX;
static volatile int32_t x457 = INT32_MIN;
int16_t x459 = INT16_MAX;


void f0(void) {
	int8_t x1 = 0;
	uint64_t x2 = 79535495578558811LLU;
	int32_t x4 = -1;
	uint64_t t0 = 11380620354010LLU;

	t0 = (x1%((x2|x3)%x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 142197LLU;

	t1 = (x5%((x6|x7)%x8));

	if (t1 != 69LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 72U;
	int64_t x11 = 118921265969115904LL;
	volatile uint64_t x12 = 31868966175445688LLU;
	volatile uint64_t t2 = 26165429953078LLU;

	t2 = (x9%((x10|x11)%x12));

	if (t2 != 87LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1076;
	volatile int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	static volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 37031418LL;

	t3 = (x13%((x14|x15)%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 8;
	int8_t x18 = 4;
	volatile int64_t x19 = -38274LL;
	int64_t t4 = -27136346194LL;

	t4 = (x17%((x18|x19)%x20));

	if (t4 != 8LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 6U;
	static int8_t x22 = -14;
	int16_t x23 = -1;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -3345422;

	t5 = (x21%((x22|x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint16_t x26 = UINT16_MAX;
	int64_t t6 = 26LL;

	t6 = (x25%((x26|x27)%x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x32 = INT64_MIN;
	static int64_t t7 = -29563306329LL;

	t7 = (x29%((x30|x31)%x32));

	if (t7 != 12458LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int64_t x34 = 93LL;
	int8_t x35 = INT8_MIN;
	int32_t x36 = 253701;
	int64_t t8 = -2499263LL;

	t8 = (x33%((x34|x35)%x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 2499U;
	uint32_t x38 = UINT32_MAX;
	int64_t x40 = INT64_MIN;

	t9 = (x37%((x38|x39)%x40));

	if (t9 != 2499LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int8_t x42 = 0;
	int8_t x44 = INT8_MIN;
	int64_t t10 = 14982326779741138LL;

	t10 = (x41%((x42|x43)%x44));

	if (t10 != -3LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = -1;
	static uint32_t x47 = 27593539U;
	uint16_t x48 = 12U;
	uint32_t t11 = 80551U;

	t11 = (x45%((x46|x47)%x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	uint32_t x51 = 162U;
	uint64_t x52 = 1114327492LLU;
	volatile uint64_t t12 = 844LLU;

	t12 = (x49%((x50|x51)%x52));

	if (t12 != 187581851LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 360802U;
	int32_t x58 = -4781938;
	uint64_t x60 = 14717717267932LLU;

	t13 = (x57%((x58|x59)%x60));

	if (t13 != 360802LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	static int32_t x64 = -8;
	volatile int32_t t14 = 109;

	t14 = (x61%((x62|x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 28;

	t15 = (x65%((x66|x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MAX;
	uint16_t x70 = 1U;
	uint16_t x72 = 3U;
	int64_t t16 = 38LL;

	t16 = (x69%((x70|x71)%x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	static volatile int64_t x79 = 577388485809668LL;
	static uint16_t x80 = UINT16_MAX;
	static int64_t t17 = 3254712076LL;

	t17 = (x77%((x78|x79)%x80));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = UINT8_MAX;
	uint32_t x82 = 11579U;
	uint32_t x83 = 232U;
	uint64_t x84 = 2130580178492606LLU;
	static volatile uint64_t t18 = 951514366788041LLU;

	t18 = (x81%((x82|x83)%x84));

	if (t18 != 255LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -13;
	static int16_t x86 = INT16_MIN;
	int16_t x87 = -52;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t19 = -5116;

	t19 = (x85%((x86|x87)%x88));

	if (t19 != -13) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	static volatile uint32_t t20 = 3728657U;

	t20 = (x89%((x90|x91)%x92));

	if (t20 != 251376U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 77990282LLU;
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = 3250890;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t21 = 200530398LLU;

	t21 = (x93%((x94|x95)%x96));

	if (t21 != 90LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MAX;
	int16_t x100 = INT16_MIN;
	volatile int64_t t22 = -55560604LL;

	t22 = (x97%((x98|x99)%x100));

	if (t22 != 13416LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x101 = 0;
	static volatile uint64_t x102 = 5627LLU;
	volatile int8_t x103 = INT8_MIN;
	uint64_t t23 = 60767517LLU;

	t23 = (x101%((x102|x103)%x104));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -4;
	volatile int64_t x106 = -1LL;
	static int64_t x107 = -24109LL;
	static volatile int64_t t24 = -19249275508LL;

	t24 = (x105%((x106|x107)%x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	static int64_t x114 = -1LL;
	int16_t x115 = 0;
	static int64_t t25 = -3822396489268999LL;

	t25 = (x113%((x114|x115)%x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t26 = 3393815;

	t26 = (x117%((x118|x119)%x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x122 = 1;
	int16_t x123 = INT16_MIN;
	volatile int64_t x124 = INT64_MIN;

	t27 = (x121%((x122|x123)%x124));

	if (t27 != 7LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 4U;
	volatile uint16_t x130 = 11U;
	uint8_t x131 = 49U;
	volatile int64_t x132 = -22917048LL;
	volatile int64_t t28 = -401933780362266LL;

	t28 = (x129%((x130|x131)%x132));

	if (t28 != 4LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 238680989616966506LL;
	uint16_t x134 = 2032U;

	t29 = (x133%((x134|x135)%x136));

	if (t29 != 776LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	uint16_t x138 = 20094U;
	int64_t x139 = 1084486835492069LL;
	static int16_t x140 = INT16_MAX;

	t30 = (x137%((x138|x139)%x140));

	if (t30 != -8648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = 1;
	int8_t x143 = -1;
	int64_t x144 = -200923638LL;

	t31 = (x141%((x142|x143)%x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x146 = -25319;
	uint64_t x147 = 8364295640LLU;
	uint8_t x148 = UINT8_MAX;
	volatile uint64_t t32 = 3960697550965LLU;

	t32 = (x145%((x146|x147)%x148));

	if (t32 != 85LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 4908;
	int16_t x151 = 12;
	int32_t t33 = 1;

	t33 = (x149%((x150|x151)%x152));

	if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = 2763742U;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = 17207378LL;
	int32_t x156 = INT32_MAX;
	int64_t t34 = -10604345168LL;

	t34 = (x153%((x154|x155)%x156));

	if (t34 != 2763742LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = INT32_MIN;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = 26;
	volatile int16_t x160 = -10786;

	t35 = (x157%((x158|x159)%x160));

	if (t35 != 2693LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x165 = 24U;
	uint32_t x166 = 21812U;
	int8_t x167 = -1;
	static uint8_t x168 = 11U;
	uint32_t t36 = 907U;

	t36 = (x165%((x166|x167)%x168));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = -1;
	uint16_t x171 = UINT16_MAX;
	static volatile int32_t t37 = -1;

	t37 = (x169%((x170|x171)%x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x173 = 1U;
	int16_t x174 = -8706;
	int64_t t38 = 459LL;

	t38 = (x173%((x174|x175)%x176));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x178 = 94U;
	int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MIN;
	static volatile int64_t t39 = 912682174118LL;

	t39 = (x177%((x178|x179)%x180));

	if (t39 != 2669LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = -8126;
	uint64_t x186 = 903512214372LLU;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;

	t40 = (x185%((x186|x187)%x188));

	if (t40 != 16958LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = 17;
	int64_t x194 = -360961966LL;
	volatile int32_t x195 = -1;
	volatile int64_t x196 = INT64_MAX;
	int64_t t41 = 44476LL;

	t41 = (x193%((x194|x195)%x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x201 = INT32_MIN;
	uint8_t x202 = 9U;
	int16_t x203 = 45;
	int8_t x204 = INT8_MIN;
	volatile int32_t t42 = 5852;

	t42 = (x201%((x202|x203)%x204));

	if (t42 != -38) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x205 = -1LL;
	static uint32_t x206 = 452U;
	volatile int64_t x207 = 20LL;
	int64_t t43 = -13740133236382LL;

	t43 = (x205%((x206|x207)%x208));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = INT16_MAX;
	int16_t x210 = -1;
	uint16_t x211 = UINT16_MAX;
	uint16_t x212 = 4331U;

	t44 = (x209%((x210|x211)%x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x213 = 17U;
	uint16_t x215 = 9U;
	int8_t x216 = INT8_MIN;
	int64_t t45 = 6664215045703LL;

	t45 = (x213%((x214|x215)%x216));

	if (t45 != 17LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = 1U;
	int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	static uint64_t x220 = 10768517756519LLU;
	volatile uint64_t t46 = 1LLU;

	t46 = (x217%((x218|x219)%x220));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -35536354290407610LL;
	volatile int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	int64_t t47 = -29554751548LL;

	t47 = (x221%((x222|x223)%x224));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = 48287098871LLU;
	static int8_t x228 = -17;

	t48 = (x225%((x226|x227)%x228));

	if (t48 != 48287098871LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = -1;
	int64_t x238 = 10249881636LL;
	uint8_t x239 = 68U;
	volatile uint32_t x240 = UINT32_MAX;

	t49 = (x237%((x238|x239)%x240));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = -572928;
	volatile int64_t t50 = -20027467034848LL;

	t50 = (x241%((x242|x243)%x244));

	if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x245 = -5;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 15U;
	int16_t x248 = INT16_MAX;
	volatile int32_t t51 = -15859748;

	t51 = (x245%((x246|x247)%x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = 114U;
	int32_t x252 = INT32_MAX;
	volatile uint32_t t52 = 354816644U;

	t52 = (x249%((x250|x251)%x252));

	if (t52 != 13U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = INT32_MIN;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 3310551LLU;
	int8_t x256 = INT8_MIN;
	uint64_t t53 = 61086LLU;

	t53 = (x253%((x254|x255)%x256));

	if (t53 != 9223372034703981609LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -85;
	volatile int16_t x260 = INT16_MIN;
	uint32_t t54 = 0U;

	t54 = (x257%((x258|x259)%x260));

	if (t54 != 32643U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 534197LLU;
	uint32_t x264 = 6733590U;
	volatile uint64_t t55 = 644LLU;

	t55 = (x261%((x262|x263)%x264));

	if (t55 != 424455LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = 1U;
	volatile uint64_t t56 = 1184671102563910267LLU;

	t56 = (x265%((x266|x267)%x268));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x273 = INT16_MIN;
	volatile uint16_t x274 = 2U;
	int32_t x275 = INT32_MIN;
	static uint8_t x276 = UINT8_MAX;
	static volatile int32_t t57 = -5174;

	t57 = (x273%((x274|x275)%x276));

	if (t57 != -8) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MAX;
	volatile uint16_t x282 = 25U;
	uint64_t x283 = 42391596LLU;
	int32_t x284 = -966832849;
	volatile uint64_t t58 = 47089423LLU;

	t58 = (x281%((x282|x283)%x284));

	if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x286 = INT32_MIN;
	volatile int32_t t59 = -55381199;

	t59 = (x285%((x286|x287)%x288));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x290 = UINT64_MAX;
	static volatile int32_t x291 = INT32_MIN;
	volatile uint64_t t60 = 260559591114LLU;

	t60 = (x289%((x290|x291)%x292));

	if (t60 != 83LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = -1;
	volatile int32_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	uint16_t x296 = 705U;

	t61 = (x293%((x294|x295)%x296));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = 4001001LLU;
	int64_t x298 = -47852084357LL;
	uint32_t x299 = UINT32_MAX;
	static int64_t x300 = INT64_MAX;
	volatile uint64_t t62 = 272775820685505LLU;

	t62 = (x297%((x298|x299)%x300));

	if (t62 != 4001001LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x302 = 429U;
	int64_t x304 = -48LL;
	int64_t t63 = -2570880464760LL;

	t63 = (x301%((x302|x303)%x304));

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -2;
	static volatile uint64_t x307 = UINT64_MAX;
	static int32_t x308 = INT32_MAX;
	volatile uint64_t t64 = 123043777LLU;

	t64 = (x305%((x306|x307)%x308));

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = -1659402;
	volatile int16_t x316 = INT16_MAX;

	t65 = (x313%((x314|x315)%x316));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = -1;
	volatile int8_t x318 = INT8_MAX;
	static int64_t x319 = INT64_MIN;

	t66 = (x317%((x318|x319)%x320));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x321 = 1;
	int16_t x322 = 0;
	int8_t x323 = INT8_MIN;
	static uint32_t x324 = 414195U;
	uint32_t t67 = 409944U;

	t67 = (x321%((x322|x323)%x324));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x325 = 50U;
	static int64_t x326 = INT64_MIN;
	uint64_t x327 = 658760LLU;
	int8_t x328 = INT8_MIN;
	uint64_t t68 = 12256697358960148LLU;

	t68 = (x325%((x326|x327)%x328));

	if (t68 != 50LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x333 = 10;
	static volatile int8_t x334 = INT8_MIN;
	int8_t x335 = -1;
	int8_t x336 = INT8_MAX;
	volatile int32_t t69 = 2591625;

	t69 = (x333%((x334|x335)%x336));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x337 = INT8_MAX;
	uint64_t x338 = 29050240337736LLU;
	int16_t x339 = 1929;
	volatile int64_t x340 = INT64_MIN;
	uint64_t t70 = 47883LLU;

	t70 = (x337%((x338|x339)%x340));

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x342 = 32U;
	static int8_t x343 = -4;
	static uint8_t x344 = 45U;
	int32_t t71 = 12862203;

	t71 = (x341%((x342|x343)%x344));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = UINT8_MAX;

	t72 = (x345%((x346|x347)%x348));

	if (t72 != 49221254689307595LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x353 = INT32_MIN;
	static int32_t x354 = INT32_MAX;
	volatile uint16_t x355 = 12953U;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t73 = 30U;

	t73 = (x353%((x354|x355)%x356));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -3;
	int16_t x358 = -161;
	volatile int16_t x359 = -2772;
	int32_t x360 = INT32_MIN;

	t74 = (x357%((x358|x359)%x360));

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x361 = UINT32_MAX;
	static int64_t x362 = INT64_MIN;

	t75 = (x361%((x362|x363)%x364));

	if (t75 != 3LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = INT16_MAX;
	static int32_t x366 = -1;
	uint64_t x367 = 56455139970564LLU;
	int8_t x368 = INT8_MIN;
	uint64_t t76 = 1LLU;

	t76 = (x365%((x366|x367)%x368));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 5770LLU;
	int64_t x372 = 52080070LL;

	t77 = (x369%((x370|x371)%x372));

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MIN;
	static volatile int32_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	volatile uint64_t t78 = 67247219482LLU;

	t78 = (x373%((x374|x375)%x376));

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x377 = -1LL;
	static volatile uint32_t x379 = UINT32_MAX;
	static volatile int64_t t79 = 499LL;

	t79 = (x377%((x378|x379)%x380));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = 4LLU;
	uint16_t x383 = UINT16_MAX;
	volatile int8_t x384 = -2;
	uint64_t t80 = 7840345601LLU;

	t80 = (x381%((x382|x383)%x384));

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	volatile uint16_t x388 = 3293U;
	static int64_t t81 = -936122229841737042LL;

	t81 = (x385%((x386|x387)%x388));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = 1;
	int16_t x390 = 4149;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;

	t82 = (x389%((x390|x391)%x392));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x398 = INT16_MIN;
	static int32_t x399 = -599;
	volatile int32_t t83 = -3515;

	t83 = (x397%((x398|x399)%x400));

	if (t83 != -362) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x401 = 66076U;
	volatile int64_t x402 = 1291015LL;
	int8_t x403 = INT8_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t84 = 377069098404810688LLU;

	t84 = (x401%((x402|x403)%x404));

	if (t84 != 66076LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = INT16_MAX;
	static int8_t x406 = 1;
	uint8_t x408 = 46U;
	static volatile int32_t t85 = -4;

	t85 = (x405%((x406|x407)%x408));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MAX;
	int8_t x412 = 18;
	int64_t t86 = -10581LL;

	t86 = (x409%((x410|x411)%x412));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x413 = -2LL;
	uint16_t x415 = 2598U;
	volatile int64_t x416 = -315673411LL;
	volatile int64_t t87 = 0LL;

	t87 = (x413%((x414|x415)%x416));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x420 = UINT16_MAX;
	int32_t t88 = -458214;

	t88 = (x417%((x418|x419)%x420));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = INT16_MAX;

	t89 = (x421%((x422|x423)%x424));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = -21340500LL;
	int64_t x427 = -1LL;
	volatile int64_t t90 = -168619LL;

	t90 = (x425%((x426|x427)%x428));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x429 = 4U;
	int16_t x430 = INT16_MAX;
	int64_t x431 = -1LL;
	uint16_t x432 = 26U;
	volatile int64_t t91 = -3967076LL;

	t91 = (x429%((x430|x431)%x432));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x433 = 51LL;
	uint16_t x436 = 363U;
	int64_t t92 = 134895092632628746LL;

	t92 = (x433%((x434|x435)%x436));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = -1;
	int16_t x438 = 384;
	int16_t x439 = -1;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t93 = 3;

	t93 = (x437%((x438|x439)%x440));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x442 = 0;
	int32_t t94 = -13887;

	t94 = (x441%((x442|x443)%x444));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = INT16_MAX;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	volatile int16_t x448 = INT16_MAX;

	t95 = (x445%((x446|x447)%x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x449 = 4888356491LL;
	int64_t x452 = 1916970LL;
	int64_t t96 = 276201657693925LL;

	t96 = (x449%((x450|x451)%x452));

	if (t96 != 514689LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = INT64_MAX;
	uint16_t x455 = 309U;
	static int32_t x456 = INT32_MIN;
	volatile int64_t t97 = -12461LL;

	t97 = (x453%((x454|x455)%x456));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x458 = INT64_MIN;
	volatile uint16_t x460 = 347U;
	volatile int64_t t98 = 4291498767885304LL;

	t98 = (x457%((x458|x459)%x460));

	if (t98 != -92LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = INT64_MAX;
	volatile int64_t x462 = -1LL;
	static int32_t x463 = 3;
	int8_t x464 = 26;
	volatile int64_t t99 = -1198196LL;

	t99 = (x461%((x462|x463)%x464));

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

