#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 55390916LLU;
int8_t x11 = INT8_MIN;
int8_t x13 = 1;
int32_t x17 = -1;
uint8_t x19 = UINT8_MAX;
int64_t t5 = 16275644LL;
int64_t x26 = -21241620996493637LL;
int64_t t6 = 15291233LL;
uint64_t x35 = UINT64_MAX;
uint64_t t8 = UINT64_MAX;
static volatile int8_t x37 = INT8_MIN;
volatile int8_t x49 = INT8_MIN;
int8_t x61 = 1;
uint32_t x64 = 5971U;
int64_t x68 = INT64_MIN;
int32_t x72 = -442;
uint16_t x74 = 16567U;
uint64_t x75 = 94230211026043LLU;
int32_t t18 = 485988969;
volatile uint8_t x83 = UINT8_MAX;
uint64_t t24 = UINT64_MAX;
int16_t x108 = INT16_MIN;
static int32_t x109 = -3271;
volatile int64_t x119 = -1LL;
int64_t x121 = -166747152919365133LL;
uint32_t x133 = UINT32_MAX;
int16_t x149 = INT16_MAX;
volatile int32_t x151 = -1;
int16_t x153 = INT16_MIN;
int32_t x154 = INT32_MIN;
uint16_t x163 = UINT16_MAX;
int32_t x164 = -1;
int32_t x166 = INT32_MIN;
uint32_t x172 = UINT32_MAX;
int16_t x190 = INT16_MAX;
int8_t x196 = -5;
int8_t x200 = 18;
int16_t x203 = INT16_MIN;
volatile uint32_t x219 = 9U;
volatile uint64_t t52 = 521111117616LLU;
static int16_t x230 = INT16_MIN;
volatile int16_t x235 = 13;
int64_t t54 = -42120561LL;
int32_t x239 = -1;
int64_t x244 = 35112609378719494LL;
int8_t x245 = 1;
int8_t x246 = INT8_MIN;
static uint8_t x250 = 1U;
int64_t x257 = -1LL;
static uint8_t x259 = UINT8_MAX;
volatile uint8_t x269 = 15U;
int32_t x271 = INT32_MIN;
static uint32_t t65 = 689U;
uint64_t x286 = 5225451609196855266LLU;
uint8_t x288 = 1U;
int64_t x292 = -1LL;
int16_t x299 = -1;
uint16_t x300 = 10U;
volatile int64_t t70 = -145168512371LL;
static int16_t x307 = INT16_MIN;
uint64_t t78 = UINT64_MAX;
int32_t x347 = -1;
int16_t x348 = -498;
volatile uint64_t t79 = 63498399437LLU;
uint64_t x359 = 34LLU;
uint64_t x361 = UINT64_MAX;
static volatile int64_t x367 = 2871311LL;
uint16_t x369 = UINT16_MAX;
uint32_t x375 = 78115174U;
static volatile int64_t t85 = 8835974LL;
uint32_t x379 = 236U;
int16_t x380 = INT16_MAX;
volatile int16_t x388 = INT16_MAX;
int16_t x389 = -450;
int64_t t89 = 3LL;
static int64_t t91 = -1859602841LL;
int64_t x404 = -1LL;
volatile int64_t t92 = 3217023392LL;
uint16_t x412 = UINT16_MAX;
static volatile uint64_t x413 = 3964050LLU;
int8_t x420 = -63;
uint64_t x428 = UINT64_MAX;
static int64_t x435 = INT64_MIN;


void f0(void) {
	uint64_t x2 = 2242911995538939LLU;
	int64_t x3 = 188229LL;
	int32_t x4 = INT32_MAX;
	static volatile uint64_t t0 = 2133243923856LLU;

	t0 = ((x1-(x2^x3))|x4);

	if (t0 != 18444501162330685439LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	int16_t x6 = INT16_MAX;
	int32_t x7 = INT32_MAX;
	int8_t x8 = 0;
	volatile int32_t t1 = -178;

	t1 = ((x5-(x6^x7))|x8);

	if (t1 != -2147450877) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile int64_t x10 = INT64_MIN;
	volatile int16_t x12 = INT16_MIN;
	int64_t t2 = -205940744430799LL;

	t2 = ((x9-(x10^x11))|x12);

	if (t2 != -32641LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MIN;
	static int16_t x16 = 1824;
	volatile int64_t t3 = 127471513LL;

	t3 = ((x13-(x14^x15))|x16);

	if (t3 != 9223372036854744866LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	static uint16_t x20 = 8034U;
	static int32_t t4 = -1955;

	t4 = ((x17-(x18^x19))|x20);

	if (t4 != 8191) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 489349997LL;
	volatile int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	volatile int8_t x24 = INT8_MIN;

	t5 = ((x21-(x22^x23))|x24);

	if (t5 != -18LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 1U;
	int64_t x27 = -1LL;
	static volatile int16_t x28 = INT16_MIN;

	t6 = ((x25-(x26^x27))|x28);

	if (t6 != -4419LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = 480;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 424505084U;
	volatile uint32_t t7 = 21U;

	t7 = ((x29-(x30^x31))|x32);

	if (t7 != 2147483391U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int16_t x36 = -1;

	t8 = ((x33-(x34^x35))|x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = -1;
	static uint64_t x39 = UINT64_MAX;
	int64_t x40 = INT64_MAX;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37-(x38^x39))|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 238582946840074421LL;
	uint32_t x42 = 218244189U;
	int8_t x43 = -1;
	int32_t x44 = INT32_MIN;
	int64_t t10 = -21275051803LL;

	t10 = ((x41-(x42^x43))|x44);

	if (t10 != -1595900653LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x46 = 15LLU;
	static uint64_t x47 = 30007841LLU;
	uint16_t x48 = UINT16_MAX;
	volatile uint64_t t11 = 19082LLU;

	t11 = ((x45-(x46^x47))|x48);

	if (t11 != 18446744073679536127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = INT64_MAX;
	volatile int16_t x51 = INT16_MAX;
	static volatile int8_t x52 = -1;
	int64_t t12 = 12213LL;

	t12 = ((x49-(x50^x51))|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 16U;
	int64_t x54 = 4914LL;
	volatile uint32_t x55 = 386063U;
	volatile int8_t x56 = INT8_MIN;
	int64_t t13 = -12607495LL;

	t13 = ((x53-(x54^x55))|x56);

	if (t13 != -45LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = UINT8_MAX;
	volatile int64_t x63 = INT64_MAX;
	int64_t t14 = -260484405LL;

	t14 = ((x61-(x62^x63))|x64);

	if (t14 != -9223372036854769837LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 31U;
	int16_t x66 = INT16_MAX;
	static int8_t x67 = INT8_MAX;
	int64_t t15 = 923409402323439LL;

	t15 = ((x65-(x66^x67))|x68);

	if (t15 != -32609LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = 76LL;
	int16_t x71 = 88;
	int64_t t16 = 28661LL;

	t16 = ((x69-(x70^x71))|x72);

	if (t16 != -17LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int16_t x76 = INT16_MIN;
	uint64_t t17 = 5224959LLU;

	t17 = ((x73-(x74^x75))|x76);

	if (t17 != 18446744073709544244LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static int32_t x78 = -1;
	uint16_t x79 = 1466U;
	uint16_t x80 = UINT16_MAX;

	t18 = ((x77-(x78^x79))|x80);

	if (t18 != -2147418113) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	uint16_t x82 = 800U;
	int32_t x84 = -3;
	volatile int32_t t19 = -533;

	t19 = ((x81-(x82^x83))|x84);

	if (t19 != -3) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	static uint32_t x86 = 1018U;
	int8_t x87 = INT8_MIN;
	volatile uint64_t x88 = 228257963178655276LLU;
	uint64_t t20 = 1506979454LLU;

	t20 = ((x85-(x86^x87))|x88);

	if (t20 != 228257963178655661LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	static int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MAX;
	int8_t x92 = -49;
	int32_t t21 = 0;

	t21 = ((x89-(x90^x91))|x92);

	if (t21 != -49) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x94 = 3913209508597972LLU;
	static int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MAX;
	uint64_t t22 = 2LLU;

	t22 = ((x93-(x94^x95))|x96);

	if (t22 != 18442830862814875775LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 324511121LLU;
	int32_t x98 = 2380482;
	int16_t x99 = -1;
	int32_t x100 = -18;
	static uint64_t t23 = 28LLU;

	t23 = ((x97-(x98^x99))|x100);

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = 674397LLU;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	int8_t x104 = -1;

	t24 = ((x101-(x102^x103))|x104);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 25660541U;
	uint32_t x106 = 35U;
	uint32_t x107 = UINT32_MAX;
	uint32_t t25 = 14247004U;

	t25 = ((x105-(x106^x107))|x108);

	if (t25 != 4294937761U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = 305462303883LL;
	static int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	int64_t t26 = -15695353152622LL;

	t26 = ((x109-(x110^x111))|x112);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = -1LL;
	int64_t x120 = -1LL;
	int64_t t27 = 756952LL;

	t27 = ((x117-(x118^x119))|x120);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 28092644U;
	static int16_t x124 = 15004;
	static int64_t t28 = 434885990382627LL;

	t28 = ((x121-(x122^x123))|x124);

	if (t28 != 9056624883907328927LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 6459931578LLU;
	int16_t x126 = INT16_MAX;
	int32_t x127 = -3;
	volatile int8_t x128 = -1;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x125-(x126^x127))|x128);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	uint16_t x130 = 0U;
	static uint8_t x131 = UINT8_MAX;
	volatile int8_t x132 = -1;
	static volatile int64_t t30 = 105482914623771LL;

	t30 = ((x129-(x130^x131))|x132);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x134 = UINT64_MAX;
	uint8_t x135 = 17U;
	volatile int64_t x136 = 6474LL;
	volatile uint64_t t31 = 418625LLU;

	t31 = ((x133-(x134^x135))|x136);

	if (t31 != 4294973787LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 5U;
	static uint8_t x138 = UINT8_MAX;
	static volatile int32_t x139 = -1;
	volatile int64_t x140 = INT64_MAX;
	int64_t t32 = INT64_MAX;

	t32 = ((x137-(x138^x139))|x140);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1648LL;
	int64_t x142 = 5142287197LL;
	int64_t x143 = INT64_MAX;
	int8_t x144 = INT8_MIN;
	volatile int64_t t33 = 26057095023LL;

	t33 = ((x141-(x142^x143))|x144);

	if (t33 != -18LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x150 = UINT32_MAX;
	int8_t x152 = -26;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x149-(x150^x151))|x152);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x155 = 0;
	int64_t x156 = INT64_MIN;
	int64_t t35 = -485161818LL;

	t35 = ((x153-(x154^x155))|x156);

	if (t35 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	static uint64_t x159 = 7337LLU;
	int64_t x160 = -1LL;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x157-(x158^x159))|x160);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	int32_t t37 = 16;

	t37 = ((x161-(x162^x163))|x164);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -264415481401LL;
	int32_t x167 = 1;
	int8_t x168 = INT8_MIN;
	volatile int64_t t38 = 8572577002005708LL;

	t38 = ((x165-(x166^x167))|x168);

	if (t38 != -58LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 0LLU;
	uint16_t x170 = UINT16_MAX;
	volatile uint64_t x171 = 1LLU;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x169-(x170^x171))|x172);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x173 = INT16_MAX;
	volatile uint8_t x174 = 0U;
	uint64_t x175 = 37LLU;
	int8_t x176 = -1;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x173-(x174^x175))|x176);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = UINT32_MAX;
	static int32_t x178 = INT32_MAX;
	uint32_t x179 = 150474959U;
	int64_t x180 = INT64_MAX;
	int64_t t41 = INT64_MAX;

	t41 = ((x177-(x178^x179))|x180);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x181 = -24672LL;
	volatile int32_t x182 = -1;
	int16_t x183 = 6;
	uint64_t x184 = 53020222779139LLU;
	uint64_t t42 = 427LLU;

	t42 = ((x181-(x182^x183))|x184);

	if (t42 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -10;
	uint64_t x186 = 47889261706LLU;
	int16_t x187 = -1;
	volatile int8_t x188 = -13;
	uint64_t t43 = 155514869LLU;

	t43 = ((x185-(x186^x187))|x188);

	if (t43 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	int64_t x191 = -194869062197181569LL;
	static int16_t x192 = INT16_MIN;
	int64_t t44 = 51071982607373165LL;

	t44 = ((x189-(x190^x191))|x192);

	if (t44 != -31873LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = INT16_MIN;
	uint32_t x194 = 892015190U;
	int16_t x195 = -1;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x193-(x194^x195))|x196);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 3373296912065931LLU;
	uint8_t x198 = 1U;
	uint8_t x199 = 5U;
	uint64_t t46 = 8652272423534521243LLU;

	t46 = ((x197-(x198^x199))|x200);

	if (t46 != 3373296912065943LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = ((x201-(x202^x203))|x204);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x205 = 88U;
	volatile uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MAX;
	int32_t x208 = -216840;
	volatile uint64_t t48 = 21597555238081LLU;

	t48 = ((x205-(x206^x207))|x208);

	if (t48 != 18446744073709334776LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int8_t x210 = -8;
	uint32_t x211 = 122757U;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x209-(x210^x211))|x212);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = -1LL;
	volatile uint64_t x214 = 7161368934LLU;
	volatile int32_t x215 = 26;
	volatile int8_t x216 = INT8_MAX;
	volatile uint64_t t50 = 109403826144055LLU;

	t50 = ((x213-(x214^x215))|x216);

	if (t50 != 18446744066548182783LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = 6964;
	int8_t x218 = -1;
	uint32_t x220 = 4U;
	volatile uint32_t t51 = 379592U;

	t51 = ((x217-(x218^x219))|x220);

	if (t51 != 6974U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 329869799454LLU;
	volatile uint8_t x226 = 15U;
	int8_t x227 = -1;
	uint8_t x228 = UINT8_MAX;

	t52 = ((x225-(x226^x227))|x228);

	if (t52 != 329869799679LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	int8_t x231 = INT8_MAX;
	int64_t x232 = -1LL;
	int64_t t53 = 0LL;

	t53 = ((x229-(x230^x231))|x232);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = -1;
	int32_t x234 = 9139740;
	volatile int64_t x236 = -53073576755LL;

	t54 = ((x233-(x234^x235))|x236);

	if (t54 != -655889LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 1;
	static volatile int64_t x238 = -1LL;
	static int32_t x240 = INT32_MIN;
	int64_t t55 = -122314100070313LL;

	t55 = ((x237-(x238^x239))|x240);

	if (t55 != -2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint16_t x242 = 51U;
	int8_t x243 = INT8_MAX;
	static volatile int64_t t56 = 1216818442426058237LL;

	t56 = ((x241-(x242^x243))|x244);

	if (t56 != 35112609378729911LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x247 = -1;
	volatile uint8_t x248 = 0U;
	int32_t t57 = 0;

	t57 = ((x245-(x246^x247))|x248);

	if (t57 != -126) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 5LLU;
	static uint64_t x251 = 242LLU;
	volatile uint8_t x252 = 102U;
	volatile uint64_t t58 = 128269635LLU;

	t58 = ((x249-(x250^x251))|x252);

	if (t58 != 18446744073709551478LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = 15805;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	volatile int64_t t59 = -1104902687016620291LL;

	t59 = ((x253-(x254^x255))|x256);

	if (t59 != -66LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x258 = 67LLU;
	volatile uint16_t x260 = 1U;
	volatile uint64_t t60 = 64421013852102485LLU;

	t60 = ((x257-(x258^x259))|x260);

	if (t60 != 18446744073709551427LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = -1;
	int64_t x262 = 537130012170533418LL;
	int64_t x263 = -1LL;
	uint8_t x264 = 8U;
	volatile int64_t t61 = 231785344439662LL;

	t61 = ((x261-(x262^x263))|x264);

	if (t61 != 537130012170533418LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -1;
	uint32_t x266 = 120238U;
	static volatile int32_t x267 = INT32_MAX;
	uint64_t x268 = 69895132312487324LLU;
	volatile uint64_t t62 = 248170LLU;

	t62 = ((x265-(x266^x267))|x268);

	if (t62 != 69895132312491454LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x270 = -1;
	volatile int16_t x272 = -1;
	volatile int32_t t63 = 139417657;

	t63 = ((x269-(x270^x271))|x272);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x273 = UINT16_MAX;
	volatile int64_t x274 = -62137424LL;
	int8_t x275 = INT8_MIN;
	volatile int64_t x276 = 758332883332141LL;
	volatile int64_t t64 = -6758411280439635LL;

	t64 = ((x273-(x274^x275))|x276);

	if (t64 != -26345489LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x281 = 294920745U;
	int16_t x282 = INT16_MIN;
	int32_t x283 = -1;
	int32_t x284 = -24755479;

	t65 = ((x281-(x282^x283))|x284);

	if (t65 != 4288144107U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = -86089811130LL;
	uint8_t x287 = 0U;
	uint64_t t66 = 2218883107950507LLU;

	t66 = ((x285-(x286^x287))|x288);

	if (t66 != 13221292378422885221LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = 3;
	static int64_t x290 = INT64_MIN;
	int32_t x291 = 1250;
	volatile int64_t t67 = 756284LL;

	t67 = ((x289-(x290^x291))|x292);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = 2;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t68 = 13033094536822LLU;

	t68 = ((x293-(x294^x295))|x296);

	if (t68 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	static volatile int64_t t69 = 171LL;

	t69 = ((x297-(x298^x299))|x300);

	if (t69 != -2147483638LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = -3953158246LL;
	int32_t x302 = -1;
	static uint16_t x303 = 8577U;
	uint32_t x304 = UINT32_MAX;

	t70 = ((x301-(x302^x303))|x304);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = -28;
	static volatile int32_t x306 = 31;
	static int16_t x308 = INT16_MIN;
	static volatile int32_t t71 = -2518584;

	t71 = ((x305-(x306^x307))|x308);

	if (t71 != -59) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MAX;
	volatile uint64_t x310 = 1753576LLU;
	volatile uint8_t x311 = UINT8_MAX;
	volatile int64_t x312 = 3444LL;
	static volatile uint64_t t72 = 7679323265230265658LLU;

	t72 = ((x309-(x310^x311))|x312);

	if (t72 != 9223372036853022716LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = 3460357372815LLU;
	int32_t x314 = 16550;
	volatile int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	static uint64_t t73 = UINT64_MAX;

	t73 = ((x313-(x314^x315))|x316);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x317 = UINT16_MAX;
	volatile uint64_t x318 = 26463197760LLU;
	int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x317-(x318^x319))|x320);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -1;
	static int16_t x322 = -1;
	volatile uint8_t x323 = UINT8_MAX;
	int16_t x324 = INT16_MIN;
	volatile int32_t t75 = -145285000;

	t75 = ((x321-(x322^x323))|x324);

	if (t75 != -32513) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 0U;
	volatile uint8_t x326 = 8U;
	int32_t x327 = -35067750;
	int64_t x328 = INT64_MIN;
	volatile int64_t t76 = -1050797609860197LL;

	t76 = ((x325-(x326^x327))|x328);

	if (t76 != -9223372036819708050LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x337 = INT64_MAX;
	static uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MAX;
	int32_t x340 = -1;
	uint64_t t77 = UINT64_MAX;

	t77 = ((x337-(x338^x339))|x340);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x341 = 49671604298LLU;
	int8_t x342 = -1;
	int16_t x343 = 1071;
	int16_t x344 = -1;

	t78 = ((x341-(x342^x343))|x344);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x345 = 34183552LLU;
	static int64_t x346 = INT64_MIN;

	t79 = ((x345-(x346^x347))|x348);

	if (t79 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	volatile int64_t x354 = -1LL;
	static uint8_t x355 = 24U;
	volatile int32_t x356 = -13695676;
	static volatile int64_t t80 = -38237442622LL;

	t80 = ((x353-(x354^x355))|x356);

	if (t80 != -31395LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MAX;
	int32_t x358 = -1;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t81 = 36862LLU;

	t81 = ((x357-(x358^x359))|x360);

	if (t81 != 18446744073709519010LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x362 = 3U;
	int8_t x363 = -29;
	int8_t x364 = INT8_MAX;
	volatile uint64_t t82 = 1223233560960196LLU;

	t82 = ((x361-(x362^x363))|x364);

	if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 2745U;
	static int8_t x366 = -1;
	int16_t x368 = -1;
	int64_t t83 = -5LL;

	t83 = ((x365-(x366^x367))|x368);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x370 = 59;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = -1;
	volatile int32_t t84 = -157719;

	t84 = ((x369-(x370^x371))|x372);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;

	t85 = ((x373-(x374^x375))|x376);

	if (t85 != -2225537025LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x377 = 0LLU;
	int64_t x378 = INT64_MIN;
	volatile uint64_t t86 = 219410619579507LLU;

	t86 = ((x377-(x378^x379))|x380);

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x381 = 62U;
	volatile int8_t x382 = 55;
	uint8_t x383 = 98U;
	uint64_t x384 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x381-(x382^x383))|x384);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MIN;
	uint8_t x387 = 1U;
	static volatile int64_t t88 = INT64_MAX;

	t88 = ((x385-(x386^x387))|x388);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x390 = 1;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;

	t89 = ((x389-(x390^x391))|x392);

	if (t89 != -9223372034707292611LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = -21;
	static int16_t x395 = INT16_MAX;
	uint64_t x396 = UINT64_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x393-(x394^x395))|x396);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x397 = 1U;
	int32_t x398 = -1;
	int8_t x399 = 0;
	int64_t x400 = -45146344390767980LL;

	t91 = ((x397-(x398^x399))|x400);

	if (t91 != -45146344390767978LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = -1;
	int64_t x402 = INT64_MIN;
	static int32_t x403 = 7980773;

	t92 = ((x401-(x402^x403))|x404);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x405 = -4909;
	volatile int8_t x406 = -3;
	int8_t x407 = -1;
	int64_t x408 = -234860445LL;
	static int64_t t93 = 105887074LL;

	t93 = ((x405-(x406^x407))|x408);

	if (t93 != -781LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x409 = 73482060938LL;
	int16_t x410 = INT16_MIN;
	int32_t x411 = -13652315;
	int64_t t94 = -259LL;

	t94 = ((x409-(x410^x411))|x412);

	if (t94 != 73468477439LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x414 = 27561293LLU;
	uint8_t x415 = 65U;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t95 = 110012887987547LLU;

	t95 = ((x413-(x414^x415))|x416);

	if (t95 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MIN;
	volatile uint64_t x418 = 0LLU;
	int16_t x419 = -11391;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x417-(x418^x419))|x420);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x421 = INT32_MIN;
	volatile int8_t x422 = INT8_MAX;
	int32_t x423 = -5576514;
	static int16_t x424 = INT16_MAX;
	int32_t t97 = 15050;

	t97 = ((x421-(x422^x423))|x424);

	if (t97 != -2141880321) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x425 = -5;
	static volatile uint16_t x426 = 3928U;
	uint8_t x427 = UINT8_MAX;
	static volatile uint64_t t98 = UINT64_MAX;

	t98 = ((x425-(x426^x427))|x428);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = -1;
	volatile uint8_t x434 = 3U;
	volatile uint64_t x436 = UINT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x433-(x434^x435))|x436);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

