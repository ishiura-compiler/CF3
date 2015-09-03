#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
int16_t x11 = INT16_MIN;
int16_t x13 = -831;
uint32_t x15 = UINT32_MAX;
static int8_t x23 = -4;
volatile int32_t t5 = -12887;
int64_t x27 = 2651837884LL;
volatile int32_t t7 = 0;
uint32_t x37 = 10U;
uint64_t x44 = 896619336109LLU;
uint8_t x48 = UINT8_MAX;
int32_t x49 = -41050350;
uint64_t x51 = 14236LLU;
static int32_t t12 = -87357;
uint8_t x56 = 108U;
volatile int8_t x58 = -52;
int32_t t14 = -27;
volatile int64_t t17 = 547095034967017LL;
uint8_t x83 = UINT8_MAX;
int16_t x85 = INT16_MIN;
uint32_t x92 = UINT32_MAX;
int32_t x97 = INT32_MIN;
volatile int8_t x104 = -3;
volatile int32_t t24 = 153635759;
volatile int64_t x118 = INT64_MIN;
int16_t x120 = INT16_MAX;
int8_t x121 = -1;
static uint8_t x124 = UINT8_MAX;
volatile int64_t x126 = INT64_MAX;
static uint64_t x128 = 497822376003LLU;
static int32_t t32 = 54302226;
static volatile int8_t x138 = -1;
int64_t x139 = INT64_MIN;
int8_t x142 = -1;
static volatile int32_t t37 = -60604689;
volatile int8_t x161 = 44;
int64_t x164 = -971865027210685684LL;
volatile uint16_t x165 = UINT16_MAX;
static int16_t x169 = INT16_MAX;
int8_t x175 = -1;
volatile uint64_t x177 = 326292023LLU;
static int8_t x186 = INT8_MAX;
uint32_t t45 = 53344857U;
int8_t x190 = INT8_MIN;
volatile int8_t x192 = -14;
volatile uint8_t x199 = UINT8_MAX;
volatile int32_t t48 = 793;
uint64_t x201 = 7294721LLU;
int16_t x205 = INT16_MIN;
int64_t x207 = -1LL;
volatile int32_t t51 = 116;
int32_t t52 = -101947071;
volatile uint64_t x217 = UINT64_MAX;
int16_t x234 = -1;
static uint32_t x236 = UINT32_MAX;
volatile int32_t x237 = -1;
int32_t t58 = -1702;
int32_t x243 = INT32_MIN;
uint8_t x244 = UINT8_MAX;
static int8_t x249 = INT8_MIN;
int32_t x251 = 6;
int64_t x252 = -1LL;
static volatile int32_t x254 = INT32_MAX;
static uint16_t x257 = UINT16_MAX;
int32_t t63 = -15391;
int16_t x264 = INT16_MIN;
int64_t x273 = -1LL;
int32_t x276 = INT32_MAX;
uint16_t x280 = 72U;
volatile int64_t x285 = INT64_MAX;
static int16_t x290 = INT16_MAX;
int32_t x310 = -1;
static uint64_t x314 = UINT64_MAX;
uint64_t x318 = 7348231200LLU;
volatile uint32_t x320 = 28U;
volatile int32_t t81 = INT32_MIN;
int16_t x345 = -1;
int32_t x347 = INT32_MAX;
int8_t x353 = INT8_MIN;
int64_t x369 = INT64_MAX;
static volatile int16_t x374 = -144;
int16_t x376 = INT16_MAX;
uint8_t x377 = UINT8_MAX;
uint32_t t92 = 25190545U;
volatile int64_t x385 = 938599434LL;
uint16_t x387 = UINT16_MAX;
int16_t x388 = -1;
static volatile int32_t t94 = 2029117;
int8_t x389 = INT8_MIN;
uint32_t x390 = UINT32_MAX;
volatile uint64_t t95 = 44000545LLU;
uint8_t x394 = 2U;
volatile int32_t t96 = -27;
uint32_t x398 = 2U;
volatile int8_t x402 = INT8_MIN;
uint8_t x410 = 16U;


void f0(void) {
	static uint8_t x1 = 1U;
	uint64_t x2 = 226LLU;
	int8_t x3 = -1;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 402348783891LL;

	t0 = ((x1<(x2|x3))+x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 2538262711476589250LLU;
	static volatile uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 9;

	t1 = ((x5<(x6|x7))+x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int8_t x10 = INT8_MIN;
	volatile int32_t x12 = -85371;
	int32_t t2 = -3547;

	t2 = ((x9<(x10|x11))+x12);

	if (t2 != -85371) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	int16_t x16 = 1226;
	static int32_t t3 = -32518066;

	t3 = ((x13<(x14|x15))+x16);

	if (t3 != 1227) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 21;
	static int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	static int8_t x20 = 1;
	static int32_t t4 = 15850;

	t4 = ((x17<(x18|x19))+x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint64_t x22 = 1287683445896838LLU;
	int16_t x24 = INT16_MIN;

	t5 = ((x21<(x22|x23))+x24);

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = INT64_MIN;
	int32_t x28 = -69497;
	volatile int32_t t6 = -928300662;

	t6 = ((x25<(x26|x27))+x28);

	if (t6 != -69497) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 3352;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = 278U;
	static volatile uint8_t x32 = 2U;

	t7 = ((x29<(x30|x31))+x32);

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = 45U;
	int16_t x35 = 1;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 2;

	t8 = ((x33<(x34|x35))+x36);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	uint64_t x40 = 45915LLU;
	static volatile uint64_t t9 = 220360636526424000LLU;

	t9 = ((x37<(x38|x39))+x40);

	if (t9 != 45916LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int64_t x42 = -1LL;
	uint8_t x43 = UINT8_MAX;
	uint64_t t10 = 12131555LLU;

	t10 = ((x41<(x42|x43))+x44);

	if (t10 != 896619336109LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -6458388453731LL;
	int32_t x46 = INT32_MIN;
	static int64_t x47 = 1240005LL;
	int32_t t11 = 27;

	t11 = ((x45<(x46|x47))+x48);

	if (t11 != 256) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 110550;
	int16_t x52 = INT16_MAX;

	t12 = ((x49<(x50|x51))+x52);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -6383828;
	int16_t x54 = INT16_MAX;
	int32_t x55 = -1006;
	volatile int32_t t13 = 5;

	t13 = ((x53<(x54|x55))+x56);

	if (t13 != 109) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 298142828432LLU;
	uint16_t x59 = UINT16_MAX;
	static int32_t x60 = -1;

	t14 = ((x57<(x58|x59))+x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint16_t x62 = 1196U;
	int16_t x63 = 167;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = 29536694LL;

	t15 = ((x61<(x62|x63))+x64);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MAX;
	static int64_t x67 = INT64_MAX;
	int8_t x68 = -1;
	static int32_t t16 = 1;

	t16 = ((x65<(x66|x67))+x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 387373LLU;
	uint32_t x71 = UINT32_MAX;
	int64_t x72 = -22939LL;

	t17 = ((x69<(x70|x71))+x72);

	if (t17 != -22939LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1U;
	int16_t x74 = -4302;
	static int16_t x75 = -13;
	static uint8_t x76 = 21U;
	static volatile int32_t t18 = -103068835;

	t18 = ((x73<(x74|x75))+x76);

	if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 19639LL;
	int64_t x82 = -1LL;
	int32_t x84 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = ((x81<(x82|x83))+x84);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x86 = 1671U;
	int32_t x87 = -110900170;
	volatile int32_t x88 = INT32_MIN;
	static int32_t t20 = INT32_MIN;

	t20 = ((x85<(x86|x87))+x88);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 93U;
	int16_t x90 = INT16_MIN;
	int64_t x91 = 3518418LL;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x89<(x90|x91))+x92);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	static volatile int32_t x95 = INT32_MIN;
	static volatile int64_t x96 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = ((x93<(x94|x95))+x96);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x98 = 16156099950785736LLU;
	uint8_t x99 = UINT8_MAX;
	static uint16_t x100 = UINT16_MAX;
	int32_t t23 = -191927;

	t23 = ((x97<(x98|x99))+x100);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	volatile uint8_t x102 = 5U;
	int32_t x103 = -71;

	t24 = ((x101<(x102|x103))+x104);

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int8_t x106 = INT8_MAX;
	volatile int64_t x107 = INT64_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x105<(x106|x107))+x108);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 165273878LLU;
	int64_t x110 = INT64_MIN;
	static int16_t x111 = -399;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 9411LLU;

	t26 = ((x109<(x110|x111))+x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = -4409;
	uint32_t x115 = UINT32_MAX;
	uint8_t x116 = 0U;
	volatile int32_t t27 = -466;

	t27 = ((x113<(x114|x115))+x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x119 = 1843591614638LLU;
	int32_t t28 = -666380288;

	t28 = ((x117<(x118|x119))+x120);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x122 = 81;
	int8_t x123 = INT8_MIN;
	static int32_t t29 = -5923;

	t29 = ((x121<(x122|x123))+x124);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = -1;
	int8_t x127 = INT8_MIN;
	uint64_t t30 = 198119674004450529LLU;

	t30 = ((x125<(x126|x127))+x128);

	if (t30 != 497822376003LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = 9497884LL;
	volatile uint32_t x130 = 1U;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = ((x129<(x130|x131))+x132);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = INT8_MIN;
	static int64_t x134 = 131188924821444874LL;
	volatile int64_t x135 = -59554950662969LL;
	volatile int8_t x136 = 10;

	t32 = ((x133<(x134|x135))+x136);

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int16_t x140 = -9391;
	int32_t t33 = 1;

	t33 = ((x137<(x138|x139))+x140);

	if (t33 != -9391) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	volatile int32_t x143 = INT32_MIN;
	volatile uint32_t x144 = 134U;
	static uint32_t t34 = 21621909U;

	t34 = ((x141<(x142|x143))+x144);

	if (t34 != 134U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	uint8_t x146 = 0U;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = -1LL;
	int64_t t35 = 3923LL;

	t35 = ((x145<(x146|x147))+x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -25;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = 31U;
	int64_t x152 = -11133450661LL;
	static int64_t t36 = -1718830805LL;

	t36 = ((x149<(x150|x151))+x152);

	if (t36 != -11133450661LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int32_t x156 = -46;

	t37 = ((x153<(x154|x155))+x156);

	if (t37 != -46) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = -11442;
	volatile int16_t x158 = INT16_MIN;
	volatile uint32_t x159 = 39U;
	uint16_t x160 = 62U;
	volatile int32_t t38 = 0;

	t38 = ((x157<(x158|x159))+x160);

	if (t38 != 62) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x162 = 0;
	int8_t x163 = 37;
	int64_t t39 = 1LL;

	t39 = ((x161<(x162|x163))+x164);

	if (t39 != -971865027210685684LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x166 = INT8_MAX;
	volatile uint32_t x167 = 0U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = 1;

	t40 = ((x165<(x166|x167))+x168);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = INT32_MIN;
	volatile int8_t x171 = 49;
	int64_t x172 = -1LL;
	int64_t t41 = -380729LL;

	t41 = ((x169<(x170|x171))+x172);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = UINT16_MAX;
	static int32_t x174 = -52035;
	int64_t x176 = INT64_MIN;
	static volatile int64_t t42 = INT64_MIN;

	t42 = ((x173<(x174|x175))+x176);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x178 = INT32_MAX;
	int64_t x179 = -120LL;
	int8_t x180 = INT8_MAX;
	volatile int32_t t43 = -232325172;

	t43 = ((x177<(x178|x179))+x180);

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = -1;
	uint8_t x183 = 1U;
	static volatile int64_t x184 = INT64_MIN;
	int64_t t44 = -3036063190LL;

	t44 = ((x181<(x182|x183))+x184);

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MIN;
	static volatile int64_t x187 = INT64_MIN;
	volatile uint32_t x188 = 300U;

	t45 = ((x185<(x186|x187))+x188);

	if (t45 != 300U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 0U;
	int32_t x191 = INT32_MIN;
	static int32_t t46 = 3731817;

	t46 = ((x189<(x190|x191))+x192);

	if (t46 != -14) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = 25;
	uint64_t x194 = 4809962145005LLU;
	int64_t x195 = INT64_MAX;
	int16_t x196 = -1;
	volatile int32_t t47 = -521611;

	t47 = ((x193<(x194|x195))+x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 321435LLU;
	int16_t x198 = -388;
	int16_t x200 = -1;

	t48 = ((x197<(x198|x199))+x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = 4645LL;
	int8_t x203 = INT8_MAX;
	static int64_t x204 = INT64_MIN;
	static volatile int64_t t49 = INT64_MIN;

	t49 = ((x201<(x202|x203))+x204);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x206 = -1LL;
	uint8_t x208 = 0U;
	int32_t t50 = 3;

	t50 = ((x205<(x206|x207))+x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = 1;
	static int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = -14;

	t51 = ((x209<(x210|x211))+x212);

	if (t51 != -14) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 1326727917064606118LLU;
	static int64_t x215 = INT64_MAX;
	uint16_t x216 = 1U;

	t52 = ((x213<(x214|x215))+x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x218 = 371712173U;
	volatile int8_t x219 = INT8_MIN;
	int16_t x220 = -100;
	volatile int32_t t53 = -25878;

	t53 = ((x217<(x218|x219))+x220);

	if (t53 != -100) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	uint32_t x223 = 86709U;
	static int64_t x224 = -2550844556858552836LL;
	volatile int64_t t54 = 78780LL;

	t54 = ((x221<(x222|x223))+x224);

	if (t54 != -2550844556858552835LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 13701U;
	static int8_t x226 = INT8_MIN;
	uint8_t x227 = 4U;
	static uint8_t x228 = 15U;
	volatile int32_t t55 = 37257;

	t55 = ((x225<(x226|x227))+x228);

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = 1;
	uint16_t x230 = 3313U;
	uint32_t x231 = UINT32_MAX;
	volatile int32_t x232 = INT32_MIN;
	int32_t t56 = -9;

	t56 = ((x229<(x230|x231))+x232);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 3882235212869LLU;
	static volatile int8_t x235 = INT8_MAX;
	static uint32_t t57 = 8U;

	t57 = ((x233<(x234|x235))+x236);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x238 = 141824U;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;

	t58 = ((x237<(x238|x239))+x240);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = -1;
	int32_t t59 = 975;

	t59 = ((x241<(x242|x243))+x244);

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	volatile int8_t x247 = INT8_MAX;
	int64_t x248 = 703812640783LL;
	volatile int64_t t60 = -13384LL;

	t60 = ((x245<(x246|x247))+x248);

	if (t60 != 703812640784LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x250 = INT64_MIN;
	volatile int64_t t61 = -134324954LL;

	t61 = ((x249<(x250|x251))+x252);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 73U;
	static volatile uint32_t x255 = 10U;
	volatile int64_t x256 = -1LL;
	int64_t t62 = -348755LL;

	t62 = ((x253<(x254|x255))+x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x258 = INT8_MAX;
	int32_t x259 = -21987;
	volatile int32_t x260 = -10;

	t63 = ((x257<(x258|x259))+x260);

	if (t63 != -10) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x261 = -1;
	static int64_t x262 = 1LL;
	int16_t x263 = -1;
	static volatile int32_t t64 = 3;

	t64 = ((x261<(x262|x263))+x264);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x265 = 4464U;
	int8_t x266 = 0;
	volatile int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t65 = -52889833;

	t65 = ((x265<(x266|x267))+x268);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 31587U;
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = 2;
	int8_t x272 = INT8_MIN;
	volatile int32_t t66 = 3463;

	t66 = ((x269<(x270|x271))+x272);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x274 = -1;
	int8_t x275 = -1;
	int32_t t67 = INT32_MAX;

	t67 = ((x273<(x274|x275))+x276);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -16;
	volatile int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	int32_t t68 = 192413083;

	t68 = ((x277<(x278|x279))+x280);

	if (t68 != 73) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x281 = 517630580737LLU;
	volatile int64_t x282 = 525231LL;
	static int8_t x283 = 0;
	uint64_t x284 = 4LLU;
	volatile uint64_t t69 = 2217381859705LLU;

	t69 = ((x281<(x282|x283))+x284);

	if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x286 = 10684U;
	static uint16_t x287 = 39U;
	int64_t x288 = -1LL;
	volatile int64_t t70 = 555864051LL;

	t70 = ((x285<(x286|x287))+x288);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t71 = 1;

	t71 = ((x289<(x290|x291))+x292);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 48916472304LLU;
	int16_t x294 = INT16_MAX;
	static int32_t x295 = -1;
	volatile int16_t x296 = INT16_MAX;
	volatile int32_t t72 = 3009684;

	t72 = ((x293<(x294|x295))+x296);

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = 41264236317LL;
	int16_t x302 = INT16_MIN;
	volatile uint32_t x303 = 1U;
	volatile uint16_t x304 = 800U;
	int32_t t73 = 194;

	t73 = ((x301<(x302|x303))+x304);

	if (t73 != 800) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -1;
	uint32_t x306 = 286U;
	int8_t x307 = -50;
	static int32_t x308 = -29359479;
	int32_t t74 = 13;

	t74 = ((x305<(x306|x307))+x308);

	if (t74 != -29359479) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t75 = 180465LLU;

	t75 = ((x309<(x310|x311))+x312);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MAX;
	volatile int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t76 = -176;

	t76 = ((x313<(x314|x315))+x316);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	volatile uint32_t t77 = 94426U;

	t77 = ((x317<(x318|x319))+x320);

	if (t77 != 29U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = 7;
	uint64_t x322 = 1428439015LLU;
	int32_t x323 = -11827;
	int64_t x324 = 692250846738069261LL;
	int64_t t78 = 733176708LL;

	t78 = ((x321<(x322|x323))+x324);

	if (t78 != 692250846738069262LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x325 = 112U;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	int8_t x328 = 1;
	volatile int32_t t79 = 21;

	t79 = ((x325<(x326|x327))+x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x329 = 0U;
	int16_t x330 = 906;
	int64_t x331 = -5701792LL;
	int32_t x332 = INT32_MIN;
	int32_t t80 = INT32_MIN;

	t80 = ((x329<(x330|x331))+x332);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = UINT16_MAX;
	volatile int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = 67U;
	int32_t x336 = INT32_MIN;

	t81 = ((x333<(x334|x335))+x336);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x337 = 2002384;
	static volatile int8_t x338 = 51;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = 6231880LL;
	int64_t t82 = -17114143945705LL;

	t82 = ((x337<(x338|x339))+x340);

	if (t82 != 6231880LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = -1;
	volatile int64_t x342 = -1LL;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 68U;
	static volatile int32_t t83 = 4361030;

	t83 = ((x341<(x342|x343))+x344);

	if (t83 != 68) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x346 = -1;
	int8_t x348 = 1;
	static int32_t t84 = 8007;

	t84 = ((x345<(x346|x347))+x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = 1126342925262LL;
	uint32_t x350 = 108672145U;
	static uint32_t x351 = 1U;
	int64_t x352 = 1296735LL;
	int64_t t85 = 8852115867866LL;

	t85 = ((x349<(x350|x351))+x352);

	if (t85 != 1296735LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x354 = INT8_MAX;
	static int16_t x355 = -1;
	int16_t x356 = -1;
	int32_t t86 = -2;

	t86 = ((x353<(x354|x355))+x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x357 = 131U;
	uint32_t x358 = 169951U;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t87 = -3248698;

	t87 = ((x357<(x358|x359))+x360);

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x361 = 1057423LLU;
	uint32_t x362 = 87763736U;
	static volatile uint64_t x363 = 254104954LLU;
	uint16_t x364 = UINT16_MAX;
	static int32_t t88 = 789881;

	t88 = ((x361<(x362|x363))+x364);

	if (t88 != 65536) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x365 = 430079241LLU;
	static int32_t x366 = INT32_MIN;
	int64_t x367 = 12679LL;
	static int16_t x368 = 8427;
	volatile int32_t t89 = -148477649;

	t89 = ((x365<(x366|x367))+x368);

	if (t89 != 8428) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = -1;
	volatile uint8_t x371 = UINT8_MAX;
	int16_t x372 = 7;
	volatile int32_t t90 = 131045097;

	t90 = ((x369<(x370|x371))+x372);

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	int64_t x375 = INT64_MAX;
	volatile int32_t t91 = -2719;

	t91 = ((x373<(x374|x375))+x376);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x378 = INT64_MIN;
	static int16_t x379 = 6460;
	volatile uint32_t x380 = 230799810U;

	t92 = ((x377<(x378|x379))+x380);

	if (t92 != 230799810U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 9U;
	static int64_t x382 = 424846208LL;
	uint32_t x383 = 238U;
	static int16_t x384 = -1;
	static int32_t t93 = 189605348;

	t93 = ((x381<(x382|x383))+x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = -1;

	t94 = ((x385<(x386|x387))+x388);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 334393847812LLU;

	t95 = ((x389<(x390|x391))+x392);

	if (t95 != 334393847813LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = 78267956990LLU;
	int64_t x395 = INT64_MIN;
	int8_t x396 = -7;

	t96 = ((x393<(x394|x395))+x396);

	if (t96 != -6) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x397 = 523;
	static int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	int32_t t97 = 1;

	t97 = ((x397<(x398|x399))+x400);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 41U;
	int64_t x403 = 15314293889518740LL;
	volatile uint8_t x404 = 5U;
	int32_t t98 = 0;

	t98 = ((x401<(x402|x403))+x404);

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -153030626551424322LL;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = -1;
	int32_t t99 = 15303;

	t99 = ((x409<(x410|x411))+x412);

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

