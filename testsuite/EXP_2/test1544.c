#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int64_t x4 = INT64_MAX;
int32_t t0 = 101211553;
int16_t x9 = INT16_MIN;
uint16_t x11 = 12U;
int32_t t2 = -411284120;
uint16_t x17 = UINT16_MAX;
int64_t x19 = INT64_MAX;
static int16_t x24 = -3;
int32_t t4 = 302;
uint64_t x26 = 799LLU;
uint64_t x30 = 3788805691024479LLU;
static int16_t x32 = -1;
volatile int32_t t6 = -1826723;
volatile int16_t x37 = 3678;
int32_t t8 = 116547;
volatile int32_t x43 = -1;
int64_t x46 = INT64_MIN;
static volatile int32_t t10 = 1502;
volatile int16_t x56 = INT16_MIN;
volatile uint64_t x59 = UINT64_MAX;
int32_t x60 = -2231;
volatile int32_t t13 = -26946328;
volatile int8_t x64 = INT8_MAX;
volatile int32_t t16 = 12290573;
int8_t x79 = INT8_MAX;
static int8_t x83 = -1;
int8_t x85 = 0;
volatile int32_t x86 = INT32_MIN;
int8_t x91 = -1;
volatile int32_t t22 = -13521;
static int64_t x99 = INT64_MIN;
uint64_t x103 = 194666301LLU;
static uint16_t x104 = UINT16_MAX;
static volatile int32_t t24 = 4;
int16_t x107 = -1;
volatile int64_t x108 = INT64_MIN;
uint16_t x109 = UINT16_MAX;
int32_t t26 = -32850014;
int32_t x113 = -1;
static int8_t x120 = -11;
uint8_t x121 = 2U;
int32_t x126 = INT32_MIN;
static int32_t x127 = INT32_MAX;
int64_t x131 = INT64_MIN;
int32_t t31 = 216273414;
volatile uint64_t x134 = 3175411LLU;
int32_t t32 = -29;
static uint16_t x139 = 6557U;
uint32_t x145 = UINT32_MAX;
int64_t x146 = INT64_MAX;
volatile int8_t x158 = -1;
int8_t x163 = -1;
volatile int8_t x166 = INT8_MIN;
int64_t x172 = -2LL;
int8_t x177 = INT8_MAX;
int16_t x180 = 49;
uint32_t x182 = 2U;
volatile int32_t t44 = -644260;
int8_t x197 = 0;
int8_t x198 = 6;
uint32_t x202 = UINT32_MAX;
int64_t x204 = INT64_MAX;
volatile int32_t t47 = 49193522;
static uint32_t x205 = UINT32_MAX;
int32_t x206 = INT32_MAX;
static int8_t x209 = -1;
static int64_t x212 = INT64_MAX;
static uint8_t x213 = 0U;
uint64_t x214 = 11622LLU;
volatile int16_t x216 = 240;
int32_t t50 = 10;
uint8_t x218 = 13U;
int8_t x222 = INT8_MIN;
volatile int64_t x223 = 12222849022LL;
volatile int32_t t53 = -2053;
uint64_t x236 = 1018081160LLU;
volatile int32_t t55 = -81752;
volatile int8_t x239 = INT8_MAX;
int8_t x240 = -1;
volatile int16_t x241 = INT16_MIN;
uint64_t x243 = UINT64_MAX;
int32_t t57 = 397637715;
volatile uint32_t x247 = 42821U;
static volatile int32_t t59 = -3212;
int64_t x260 = -282737227LL;
static int8_t x262 = -1;
volatile int16_t x263 = INT16_MIN;
volatile int32_t t61 = -50545648;
int16_t x265 = INT16_MIN;
int32_t x267 = -933;
static uint16_t x272 = 1499U;
int64_t x273 = -485LL;
int8_t x287 = 30;
int32_t t67 = -3733;
uint64_t x296 = 27769175237LLU;
int8_t x301 = INT8_MIN;
int32_t t71 = -79330;
static volatile int32_t x307 = -1;
int32_t t73 = 66225846;
int16_t x314 = -6362;
int16_t x327 = 0;
static int32_t t78 = -61069;
int8_t x333 = 0;
static uint32_t x337 = 108U;
int32_t t80 = -1608963;
int64_t x341 = INT64_MIN;
volatile uint32_t x345 = 42404452U;
int16_t x347 = -13846;
static uint16_t x354 = 3079U;
volatile int32_t t84 = 43665474;
uint8_t x357 = UINT8_MAX;
static uint16_t x358 = UINT16_MAX;
int64_t x368 = INT64_MAX;
int8_t x372 = INT8_MAX;
int8_t x377 = 8;
int8_t x379 = 19;
volatile int32_t t89 = -60155;
uint8_t x383 = UINT8_MAX;
volatile int8_t x388 = INT8_MIN;
volatile int32_t t91 = 335;
int32_t x391 = 1;
static int32_t t92 = -890;
int8_t x397 = INT8_MIN;
static int64_t x402 = -2217535635402562LL;
int64_t x404 = -1215564LL;
volatile int32_t t96 = 40;
int16_t x410 = INT16_MIN;
int16_t x416 = INT16_MAX;
int64_t x417 = INT64_MAX;
volatile uint16_t x418 = 1548U;
uint64_t x419 = 1330LLU;


void f0(void) {
	volatile uint8_t x1 = 55U;
	int32_t x3 = 3964;

	t0 = ((x1-(x2<=x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = -1;
	static uint16_t x12 = 0U;
	int32_t t1 = -5484;

	t1 = ((x9-(x10<=x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 44U;
	uint16_t x14 = UINT16_MAX;
	static uint16_t x15 = 2U;
	int64_t x16 = -1LL;

	t2 = ((x13-(x14<=x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t3 = -84468813;

	t3 = ((x17-(x18<=x19))<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = -1739539450095357112LL;
	volatile int16_t x23 = INT16_MIN;

	t4 = ((x21-(x22<=x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = -4;

	t5 = ((x25-(x26<=x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	uint16_t x31 = 629U;

	t6 = ((x29-(x30<=x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = 5;
	int8_t x34 = 33;
	volatile int16_t x35 = -16;
	int32_t x36 = -1;
	volatile int32_t t7 = -598;

	t7 = ((x33-(x34<=x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = INT64_MIN;
	int16_t x39 = -2390;
	int16_t x40 = INT16_MIN;

	t8 = ((x37-(x38<=x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 2;
	int64_t x42 = INT64_MIN;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -522;

	t9 = ((x41-(x42<=x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 1U;
	int32_t x47 = -1;
	volatile int8_t x48 = -1;

	t10 = ((x45-(x46<=x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = UINT64_MAX;
	uint64_t x50 = 71048695335751425LLU;
	volatile int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 907295;

	t11 = ((x49-(x50<=x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -1;
	static int8_t x54 = INT8_MIN;
	static volatile int16_t x55 = -1;
	static volatile int32_t t12 = 0;

	t12 = ((x53-(x54<=x55))<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x57 = UINT8_MAX;
	int8_t x58 = -1;

	t13 = ((x57-(x58<=x59))<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 6667060LLU;
	static uint16_t x62 = UINT16_MAX;
	volatile int64_t x63 = -1LL;
	volatile int32_t t14 = -85754285;

	t14 = ((x61-(x62<=x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1U;
	volatile uint16_t x66 = 185U;
	int32_t x67 = -1;
	int32_t x68 = 228910;
	int32_t t15 = 48;

	t15 = ((x65-(x66<=x67))<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MAX;
	uint8_t x71 = 24U;
	int32_t x72 = INT32_MIN;

	t16 = ((x69-(x70<=x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MAX;
	int32_t t17 = 39545038;

	t17 = ((x73-(x74<=x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = -1;
	volatile uint64_t x80 = 10031460607977845LLU;
	static int32_t t18 = 1608590;

	t18 = ((x77-(x78<=x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	uint64_t x82 = 3LLU;
	static uint8_t x84 = UINT8_MAX;
	int32_t t19 = 12113;

	t19 = ((x81-(x82<=x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	int32_t t20 = 1;

	t20 = ((x85-(x86<=x87))<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x89 = UINT32_MAX;
	static int32_t x90 = INT32_MAX;
	int8_t x92 = INT8_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x89-(x90<=x91))<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x93 = UINT16_MAX;
	int64_t x94 = -1LL;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = 36868087484LL;

	t22 = ((x93-(x94<=x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x97 = -1499631652129524LL;
	int16_t x98 = -1;
	uint8_t x100 = 85U;
	static int32_t t23 = -1056201;

	t23 = ((x97-(x98<=x99))<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x101 = 64LLU;
	int8_t x102 = INT8_MIN;

	t24 = ((x101-(x102<=x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 0U;
	int8_t x106 = -1;
	int32_t t25 = -109;

	t25 = ((x105-(x106<=x107))<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = -2;
	int8_t x111 = INT8_MAX;
	uint16_t x112 = 1333U;

	t26 = ((x109-(x110<=x111))<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = 5;
	static volatile uint8_t x115 = UINT8_MAX;
	uint16_t x116 = 1961U;
	int32_t t27 = -34;

	t27 = ((x113-(x114<=x115))<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = 4;
	static int16_t x118 = -1;
	static uint8_t x119 = 24U;
	static int32_t t28 = -154044;

	t28 = ((x117-(x118<=x119))<=x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x122 = UINT64_MAX;
	static volatile int32_t x123 = INT32_MIN;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t29 = -3;

	t29 = ((x121-(x122<=x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 1U;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t30 = -166607;

	t30 = ((x125-(x126<=x127))<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -74;
	int8_t x130 = INT8_MAX;
	int16_t x132 = 55;

	t31 = ((x129-(x130<=x131))<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 8281U;
	int64_t x135 = 22000070669LL;
	int64_t x136 = -5154161675LL;

	t32 = ((x133-(x134<=x135))<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 1832U;
	int32_t x138 = INT32_MAX;
	volatile int16_t x140 = INT16_MIN;
	int32_t t33 = 1;

	t33 = ((x137-(x138<=x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x147 = INT32_MIN;
	volatile int16_t x148 = 99;
	volatile int32_t t34 = 506;

	t34 = ((x145-(x146<=x147))<=x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 148U;
	int16_t x150 = 25;
	int32_t x151 = INT32_MAX;
	static volatile uint16_t x152 = UINT16_MAX;
	int32_t t35 = 0;

	t35 = ((x149-(x150<=x151))<=x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	volatile int8_t x159 = INT8_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	volatile int32_t t36 = 1;

	t36 = ((x157-(x158<=x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	static volatile int8_t x162 = INT8_MIN;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 126;

	t37 = ((x161-(x162<=x163))<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = -4;
	static int32_t x167 = -167;
	volatile uint8_t x168 = 89U;
	int32_t t38 = 127551971;

	t38 = ((x165-(x166<=x167))<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	uint8_t x170 = 8U;
	static volatile int64_t x171 = -1LL;
	volatile int32_t t39 = 42180058;

	t39 = ((x169-(x170<=x171))<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 28LLU;
	uint8_t x175 = 5U;
	int16_t x176 = -1;
	int32_t t40 = 554577493;

	t40 = ((x173-(x174<=x175))<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x178 = -3263600;
	int8_t x179 = -1;
	int32_t t41 = -65;

	t41 = ((x177-(x178<=x179))<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = 388041632835193848LL;
	static int16_t x183 = -1;
	int16_t x184 = 1;
	int32_t t42 = -4504;

	t42 = ((x181-(x182<=x183))<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MAX;
	static int16_t x186 = -1;
	int8_t x187 = 12;
	static uint16_t x188 = 1U;
	volatile int32_t t43 = 841748078;

	t43 = ((x185-(x186<=x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = 20;
	volatile uint32_t x190 = UINT32_MAX;
	int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MIN;

	t44 = ((x189-(x190<=x191))<=x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = 1587;
	uint8_t x195 = 2U;
	uint32_t x196 = 255U;
	static int32_t t45 = 1027737;

	t45 = ((x193-(x194<=x195))<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x199 = 903640545644LLU;
	int8_t x200 = -1;
	volatile int32_t t46 = 93628123;

	t46 = ((x197-(x198<=x199))<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	volatile uint16_t x203 = 1U;

	t47 = ((x201-(x202<=x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x207 = 11230LLU;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t48 = 0;

	t48 = ((x205-(x206<=x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x210 = 6;
	uint32_t x211 = 3943670U;
	volatile int32_t t49 = -385;

	t49 = ((x209-(x210<=x211))<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x215 = 136453LL;

	t50 = ((x213-(x214<=x215))<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	volatile int16_t x219 = -11;
	static int32_t x220 = INT32_MAX;
	int32_t t51 = -71713;

	t51 = ((x217-(x218<=x219))<=x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x221 = INT16_MAX;
	volatile int16_t x224 = -1042;
	static volatile int32_t t52 = 285727;

	t52 = ((x221-(x222<=x223))<=x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	volatile int16_t x227 = -1624;
	uint16_t x228 = 0U;

	t53 = ((x225-(x226<=x227))<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = 1446LL;
	int8_t x230 = 44;
	static uint8_t x231 = 65U;
	static int32_t x232 = 17152;
	int32_t t54 = -85;

	t54 = ((x229-(x230<=x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 0U;
	int32_t x234 = -1;
	int64_t x235 = INT64_MIN;

	t55 = ((x233-(x234<=x235))<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = 4U;
	static int8_t x238 = INT8_MAX;
	int32_t t56 = -850;

	t56 = ((x237-(x238<=x239))<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x242 = 36U;
	uint32_t x244 = UINT32_MAX;

	t57 = ((x241-(x242<=x243))<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 833494LLU;
	int16_t x246 = INT16_MAX;
	volatile int8_t x248 = -1;
	int32_t t58 = 1556007;

	t58 = ((x245-(x246<=x247))<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -1LL;
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = 2881751LLU;
	static int8_t x256 = -1;

	t59 = ((x253-(x254<=x255))<=x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x257 = INT8_MIN;
	int64_t x258 = 372831986LL;
	static volatile int64_t x259 = -227529LL;
	volatile int32_t t60 = -1851219;

	t60 = ((x257-(x258<=x259))<=x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = INT64_MIN;
	static uint32_t x264 = UINT32_MAX;

	t61 = ((x261-(x262<=x263))<=x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x266 = -1;
	volatile uint64_t x268 = 24LLU;
	volatile int32_t t62 = 7;

	t62 = ((x265-(x266<=x267))<=x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x269 = 1U;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	volatile int32_t t63 = 8586067;

	t63 = ((x269-(x270<=x271))<=x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x274 = INT8_MIN;
	int64_t x275 = -2465769306230490LL;
	int32_t x276 = INT32_MIN;
	volatile int32_t t64 = -19306;

	t64 = ((x273-(x274<=x275))<=x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x277 = INT64_MAX;
	static int32_t x278 = -269521;
	static uint64_t x279 = UINT64_MAX;
	uint16_t x280 = UINT16_MAX;
	int32_t t65 = 69680;

	t65 = ((x277-(x278<=x279))<=x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MAX;
	static volatile uint32_t x282 = UINT32_MAX;
	static int64_t x283 = INT64_MIN;
	static int32_t x284 = -1;
	static int32_t t66 = 1;

	t66 = ((x281-(x282<=x283))<=x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MAX;
	static int8_t x288 = INT8_MIN;

	t67 = ((x285-(x286<=x287))<=x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 2U;
	static uint8_t x290 = UINT8_MAX;
	int8_t x291 = 0;
	int16_t x292 = INT16_MIN;
	volatile int32_t t68 = -74;

	t68 = ((x289-(x290<=x291))<=x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 435U;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = UINT32_MAX;
	int32_t t69 = 153;

	t69 = ((x293-(x294<=x295))<=x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	volatile uint8_t x299 = 60U;
	uint64_t x300 = 1286990384913LLU;
	static int32_t t70 = 394851;

	t70 = ((x297-(x298<=x299))<=x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x302 = INT64_MIN;
	volatile uint64_t x303 = 12994904476LLU;
	static volatile int16_t x304 = INT16_MIN;

	t71 = ((x301-(x302<=x303))<=x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = 7;
	uint32_t x306 = UINT32_MAX;
	uint8_t x308 = 7U;
	int32_t t72 = -743;

	t72 = ((x305-(x306<=x307))<=x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = 3867020;
	uint8_t x311 = 10U;
	int8_t x312 = INT8_MIN;

	t73 = ((x309-(x310<=x311))<=x312);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 516392714627LLU;
	int64_t x315 = -1LL;
	int8_t x316 = -1;
	static volatile int32_t t74 = 605;

	t74 = ((x313-(x314<=x315))<=x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x318 = -112;
	static int32_t x319 = INT32_MIN;
	int32_t x320 = -392630582;
	int32_t t75 = 61921738;

	t75 = ((x317-(x318<=x319))<=x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = 20916U;
	uint64_t x322 = UINT64_MAX;
	static int8_t x323 = -3;
	static uint16_t x324 = 24U;
	static int32_t t76 = -21;

	t76 = ((x321-(x322<=x323))<=x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -1;
	uint16_t x326 = 198U;
	int32_t x328 = -146397;
	int32_t t77 = 9;

	t77 = ((x325-(x326<=x327))<=x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -1;
	volatile uint64_t x330 = 16308LLU;
	int64_t x331 = 4132187752769233700LL;
	int16_t x332 = INT16_MIN;

	t78 = ((x329-(x330<=x331))<=x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x334 = 249539U;
	uint16_t x335 = UINT16_MAX;
	uint8_t x336 = 0U;
	int32_t t79 = 268983;

	t79 = ((x333-(x334<=x335))<=x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x338 = 341854U;
	int64_t x339 = INT64_MAX;
	uint32_t x340 = UINT32_MAX;

	t80 = ((x337-(x338<=x339))<=x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x342 = UINT64_MAX;
	volatile int16_t x343 = 1800;
	int32_t x344 = INT32_MIN;
	int32_t t81 = -418698232;

	t81 = ((x341-(x342<=x343))<=x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = INT32_MIN;
	int64_t x348 = -1LL;
	volatile int32_t t82 = -288627852;

	t82 = ((x345-(x346<=x347))<=x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = 29964595870235LL;
	static int8_t x350 = INT8_MIN;
	uint32_t x351 = UINT32_MAX;
	uint64_t x352 = 13035770395LLU;
	volatile int32_t t83 = -4809;

	t83 = ((x349-(x350<=x351))<=x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 6997U;
	uint16_t x355 = 4534U;
	int32_t x356 = INT32_MAX;

	t84 = ((x353-(x354<=x355))<=x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x359 = INT8_MIN;
	uint32_t x360 = 72U;
	volatile int32_t t85 = -1961;

	t85 = ((x357-(x358<=x359))<=x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 966009724701LLU;
	int16_t x362 = INT16_MIN;
	static volatile int64_t x363 = -10LL;
	static uint32_t x364 = UINT32_MAX;
	static volatile int32_t t86 = 1;

	t86 = ((x361-(x362<=x363))<=x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = -7916440423713558LL;
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = 333725LL;
	volatile int32_t t87 = -1;

	t87 = ((x365-(x366<=x367))<=x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -1;
	static uint8_t x370 = UINT8_MAX;
	int16_t x371 = -13;
	volatile int32_t t88 = -198530;

	t88 = ((x369-(x370<=x371))<=x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x378 = INT8_MIN;
	static uint8_t x380 = 4U;

	t89 = ((x377-(x378<=x379))<=x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = 53;
	int32_t x382 = INT32_MAX;
	uint64_t x384 = UINT64_MAX;
	int32_t t90 = -63;

	t90 = ((x381-(x382<=x383))<=x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x385 = 79887;
	static uint64_t x386 = UINT64_MAX;
	static int16_t x387 = -27;

	t91 = ((x385-(x386<=x387))<=x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = UINT64_MAX;
	uint64_t x390 = UINT64_MAX;
	int8_t x392 = -1;

	t92 = ((x389-(x390<=x391))<=x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = -1;
	int32_t x394 = INT32_MAX;
	static int8_t x395 = INT8_MIN;
	int64_t x396 = -1LL;
	int32_t t93 = 29493253;

	t93 = ((x393-(x394<=x395))<=x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x398 = 6U;
	uint64_t x399 = UINT64_MAX;
	static uint64_t x400 = 55435252847LLU;
	static volatile int32_t t94 = -111;

	t94 = ((x397-(x398<=x399))<=x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 8492508U;
	volatile uint32_t x403 = 70660698U;
	volatile int32_t t95 = -524011531;

	t95 = ((x401-(x402<=x403))<=x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x405 = 32629U;
	int64_t x406 = 342273228610525031LL;
	uint8_t x407 = 55U;
	int16_t x408 = INT16_MIN;

	t96 = ((x405-(x406<=x407))<=x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x409 = -24;
	int64_t x411 = INT64_MAX;
	uint8_t x412 = 17U;
	volatile int32_t t97 = 38;

	t97 = ((x409-(x410<=x411))<=x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x413 = -1LL;
	static int64_t x414 = INT64_MIN;
	uint64_t x415 = 548LLU;
	volatile int32_t t98 = -194427275;

	t98 = ((x413-(x414<=x415))<=x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x420 = INT8_MIN;
	static int32_t t99 = -73;

	t99 = ((x417-(x418<=x419))<=x420);

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

