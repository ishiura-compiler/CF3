#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -13;
int64_t x3 = INT64_MAX;
int64_t x7 = -1LL;
int32_t t1 = INT32_MIN;
static int64_t x13 = -3847727318821932359LL;
static int16_t x14 = 3;
uint8_t x18 = 4U;
static volatile uint32_t x21 = 519338U;
int8_t x30 = -1;
int32_t t7 = -32656398;
static volatile int16_t x34 = INT16_MAX;
uint8_t x35 = 60U;
static uint16_t x39 = 865U;
static volatile int64_t x41 = INT64_MAX;
int64_t x49 = -1LL;
uint32_t x51 = 177739U;
int64_t x54 = INT64_MAX;
static int8_t x66 = INT8_MAX;
int16_t x81 = -1;
int8_t x83 = 8;
uint8_t x86 = 39U;
uint64_t x89 = UINT64_MAX;
volatile int32_t t22 = 0;
static volatile int16_t x96 = -1;
int32_t t23 = 21761;
uint16_t x99 = 50U;
int64_t x100 = INT64_MIN;
volatile int8_t x106 = 0;
uint8_t x110 = 54U;
static uint64_t x117 = UINT64_MAX;
static int64_t x120 = 37LL;
uint32_t x125 = 586914U;
static int8_t x126 = 1;
int8_t x132 = INT8_MIN;
static int32_t x133 = INT32_MAX;
uint8_t x135 = 0U;
uint64_t x155 = 190371553688976615LLU;
static uint32_t x156 = 27290U;
int32_t t41 = -120017;
int16_t x170 = INT16_MIN;
static int16_t x172 = -10;
int64_t x174 = INT64_MAX;
int8_t x176 = -1;
int8_t x178 = INT8_MAX;
int16_t x183 = 14;
uint32_t x186 = 3U;
int16_t x192 = INT16_MAX;
static int8_t x196 = INT8_MIN;
uint32_t x200 = 7U;
uint32_t x202 = 58335812U;
int32_t t50 = INT32_MAX;
int16_t x205 = INT16_MIN;
int8_t x209 = -3;
uint16_t x210 = 4U;
int32_t x211 = INT32_MAX;
int32_t x212 = -210155966;
int8_t x213 = INT8_MIN;
uint32_t x214 = 102884108U;
static volatile uint64_t x219 = UINT64_MAX;
int32_t t54 = 37251914;
uint32_t x222 = 203653492U;
uint8_t x228 = 3U;
int16_t x229 = INT16_MAX;
static uint64_t x238 = UINT64_MAX;
volatile int64_t t61 = -50094613000LL;
int64_t x255 = -1234263654631419LL;
uint32_t x258 = UINT32_MAX;
int32_t x259 = INT32_MIN;
static int64_t x260 = -1LL;
volatile int64_t t63 = -1839880494700LL;
volatile uint16_t x262 = UINT16_MAX;
int64_t x264 = 205790450183040LL;
uint32_t x268 = 31694619U;
volatile int8_t x274 = -5;
int8_t x275 = -22;
int32_t x283 = 904;
volatile int16_t x290 = INT16_MIN;
uint64_t x295 = UINT64_MAX;
volatile int32_t t73 = -1921;
volatile uint64_t x304 = 4589737599LLU;
int32_t x307 = 2729;
volatile int8_t x308 = INT8_MIN;
int32_t t75 = -256515398;
int64_t x309 = 1088855775703052LL;
int8_t x311 = 5;
int8_t x312 = INT8_MIN;
int8_t x313 = INT8_MAX;
uint64_t x329 = 6632591LLU;
int64_t x341 = -85414674LL;
int8_t x347 = -1;
static int32_t t85 = INT32_MIN;
static int8_t x357 = -1;
volatile uint64_t x358 = UINT64_MAX;
int8_t x360 = 8;
volatile int64_t x361 = 4862714189964447LL;
int32_t x362 = INT32_MIN;
int32_t x364 = -8315574;
static int16_t x369 = -33;
int64_t x371 = 5840572LL;
volatile uint32_t x372 = 118835517U;
int32_t x374 = 3185392;
uint64_t x375 = UINT64_MAX;
int64_t x376 = -815LL;
static uint16_t x377 = UINT16_MAX;
int32_t t93 = -6364;
int64_t x389 = -1LL;
int32_t x390 = -10913;
static int32_t x391 = 8794;
uint8_t x398 = 46U;


void f0(void) {
	int32_t x1 = -1;
	int64_t x4 = -24709464LL;
	int64_t t0 = -14LL;

	t0 = ((x1<=(x2<=x3))+x4);

	if (t0 != -24709463LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1852342453U;
	int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5<=(x6<=x7))+x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = -1;
	static uint32_t x11 = UINT32_MAX;
	volatile int64_t x12 = 252348591513574LL;
	volatile int64_t t2 = -10109789LL;

	t2 = ((x9<=(x10<=x11))+x12);

	if (t2 != 252348591513575LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x15 = 1979LLU;
	volatile uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 69LLU;

	t3 = ((x13<=(x14<=x15))+x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int64_t x19 = -119627625LL;
	static int8_t x20 = 17;
	int32_t t4 = 631255394;

	t4 = ((x17<=(x18<=x19))+x20);

	if (t4 != 18) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = -1;
	static uint8_t x23 = 1U;
	volatile int16_t x24 = -1;
	int32_t t5 = 492;

	t5 = ((x21<=(x22<=x23))+x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2U;
	int8_t x26 = 0;
	int32_t x27 = -1;
	uint8_t x28 = 25U;
	volatile int32_t t6 = -15789258;

	t6 = ((x25<=(x26<=x27))+x28);

	if (t6 != 25) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -18LL;
	uint64_t x31 = 241424174043730347LLU;
	int8_t x32 = 1;

	t7 = ((x29<=(x30<=x31))+x32);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 16487;
	static int64_t x36 = INT64_MAX;
	int64_t t8 = INT64_MAX;

	t8 = ((x33<=(x34<=x35))+x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -11706299;
	volatile int16_t x38 = -1;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t9 = 6820671071987LL;

	t9 = ((x37<=(x38<=x39))+x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 81U;
	int32_t x43 = -4584321;
	static int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = -261;

	t10 = ((x41<=(x42<=x43))+x44);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 1;
	int16_t x46 = -1;
	static volatile uint64_t x47 = UINT64_MAX;
	int64_t x48 = -86LL;
	volatile int64_t t11 = -8390813745814180LL;

	t11 = ((x45<=(x46<=x47))+x48);

	if (t11 != -85LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int16_t x52 = -6396;
	static volatile int32_t t12 = -582560412;

	t12 = ((x49<=(x50<=x51))+x52);

	if (t12 != -6395) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -4257;
	int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t13 = -3769987290LL;

	t13 = ((x53<=(x54<=x55))+x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = 725;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 88189;

	t14 = ((x57<=(x58<=x59))+x60);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	volatile uint64_t x62 = 57705661128LLU;
	int32_t x63 = -246792862;
	static volatile int32_t x64 = 1364;
	int32_t t15 = 8905711;

	t15 = ((x61<=(x62<=x63))+x64);

	if (t15 != 1365) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 36;
	uint8_t x67 = 0U;
	int8_t x68 = 0;
	static volatile int32_t t16 = -308;

	t16 = ((x65<=(x66<=x67))+x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	uint16_t x70 = 20139U;
	static volatile int16_t x71 = INT16_MIN;
	static int8_t x72 = INT8_MIN;
	int32_t t17 = 16;

	t17 = ((x69<=(x70<=x71))+x72);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 84U;
	static uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 1072U;

	t18 = ((x73<=(x74<=x75))+x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	static uint8_t x79 = 28U;
	volatile uint8_t x80 = 6U;
	static volatile int32_t t19 = -4;

	t19 = ((x77<=(x78<=x79))+x80);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x82 = INT16_MAX;
	int64_t x84 = 14339LL;
	volatile int64_t t20 = 47726828874067774LL;

	t20 = ((x81<=(x82<=x83))+x84);

	if (t20 != 14340LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 2U;
	static volatile uint8_t x87 = 84U;
	volatile uint64_t x88 = UINT64_MAX;
	uint64_t t21 = UINT64_MAX;

	t21 = ((x85<=(x86<=x87))+x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x90 = 10U;
	int8_t x91 = INT8_MAX;
	int16_t x92 = INT16_MAX;

	t22 = ((x89<=(x90<=x91))+x92);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static uint64_t x94 = UINT64_MAX;
	uint64_t x95 = 311077127565LLU;

	t23 = ((x93<=(x94<=x95))+x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	static volatile int8_t x98 = 13;
	volatile int64_t t24 = INT64_MIN;

	t24 = ((x97<=(x98<=x99))+x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int16_t x102 = -1;
	static int8_t x103 = -1;
	static volatile int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 0LL;

	t25 = ((x101<=(x102<=x103))+x104);

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static int64_t x107 = 2293769753410504LL;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t26 = 1;

	t26 = ((x105<=(x106<=x107))+x108);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	uint8_t x111 = 10U;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -489;

	t27 = ((x109<=(x110<=x111))+x112);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -11550;
	volatile int64_t x114 = -7LL;
	int8_t x115 = INT8_MIN;
	volatile int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -26322LL;

	t28 = ((x113<=(x114<=x115))+x116);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 3;
	uint32_t x119 = 29637U;
	static int64_t t29 = -2754109340520329LL;

	t29 = ((x117<=(x118<=x119))+x120);

	if (t29 != 37LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = UINT8_MAX;
	static int64_t x122 = 497LL;
	uint16_t x123 = 1778U;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -32;

	t30 = ((x121<=(x122<=x123))+x124);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t31 = INT64_MIN;

	t31 = ((x125<=(x126<=x127))+x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 8460180853823LLU;
	volatile int64_t x130 = INT64_MIN;
	int16_t x131 = -1;
	int32_t t32 = -87568;

	t32 = ((x129<=(x130<=x131))+x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 25;
	static uint8_t x136 = 6U;
	static volatile int32_t t33 = 51947003;

	t33 = ((x133<=(x134<=x135))+x136);

	if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	static int8_t x138 = -1;
	int64_t x139 = -1LL;
	uint64_t x140 = 60466517LLU;
	uint64_t t34 = 6207929LLU;

	t34 = ((x137<=(x138<=x139))+x140);

	if (t34 != 60466518LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -1;
	int8_t x142 = INT8_MIN;
	static int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = 165;

	t35 = ((x141<=(x142<=x143))+x144);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 44072498U;
	volatile int32_t x148 = INT32_MIN;
	int32_t t36 = -26;

	t36 = ((x145<=(x146<=x147))+x148);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -108;
	int64_t x150 = -1626779781LL;
	static uint32_t x151 = 689955U;
	uint32_t x152 = 3563446U;
	uint32_t t37 = 3334433U;

	t37 = ((x149<=(x150<=x151))+x152);

	if (t37 != 3563447U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -2511688;
	int16_t x154 = INT16_MIN;
	volatile uint32_t t38 = 4U;

	t38 = ((x153<=(x154<=x155))+x156);

	if (t38 != 27291U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 258458U;
	static volatile int16_t x158 = -1;
	uint8_t x159 = 1U;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -3735;

	t39 = ((x157<=(x158<=x159))+x160);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int32_t x162 = INT32_MAX;
	int8_t x163 = 11;
	int32_t x164 = -9077;
	int32_t t40 = 3;

	t40 = ((x161<=(x162<=x163))+x164);

	if (t40 != -9077) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = 195449235;
	static int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	static volatile int32_t x168 = -209;

	t41 = ((x165<=(x166<=x167))+x168);

	if (t41 != -209) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static volatile int32_t x171 = 80356514;
	int32_t t42 = -474;

	t42 = ((x169<=(x170<=x171))+x172);

	if (t42 != -9) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	uint32_t x175 = 232545372U;
	static volatile int32_t t43 = -7610;

	t43 = ((x173<=(x174<=x175))+x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -1;
	int32_t x179 = 137367164;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -57;

	t44 = ((x177<=(x178<=x179))+x180);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	static int8_t x184 = -1;
	volatile int32_t t45 = 4145660;

	t45 = ((x181<=(x182<=x183))+x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static int32_t x187 = INT32_MAX;
	static uint64_t x188 = 17162445828LLU;
	volatile uint64_t t46 = 76981712LLU;

	t46 = ((x185<=(x186<=x187))+x188);

	if (t46 != 17162445828LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MAX;
	volatile int16_t x191 = -1;
	static volatile int32_t t47 = 23409;

	t47 = ((x189<=(x190<=x191))+x192);

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 5U;
	volatile uint16_t x194 = 20U;
	volatile int8_t x195 = INT8_MIN;
	static volatile int32_t t48 = 1169417;

	t48 = ((x193<=(x194<=x195))+x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 58816LLU;
	uint8_t x198 = 4U;
	int8_t x199 = INT8_MAX;
	volatile uint32_t t49 = 3U;

	t49 = ((x197<=(x198<=x199))+x200);

	if (t49 != 7U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 19;
	static int16_t x203 = INT16_MIN;
	static int32_t x204 = INT32_MAX;

	t50 = ((x201<=(x202<=x203))+x204);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = UINT32_MAX;
	int8_t x208 = -1;
	int32_t t51 = 1;

	t51 = ((x205<=(x206<=x207))+x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t t52 = -30182932;

	t52 = ((x209<=(x210<=x211))+x212);

	if (t52 != -210155965) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x215 = 71411216U;
	uint32_t x216 = 105U;
	uint32_t t53 = 494626030U;

	t53 = ((x213<=(x214<=x215))+x216);

	if (t53 != 106U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -30;
	static uint8_t x218 = UINT8_MAX;
	uint16_t x220 = UINT16_MAX;

	t54 = ((x217<=(x218<=x219))+x220);

	if (t54 != 65536) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -56;
	static int32_t x223 = 4048827;
	static uint16_t x224 = 28055U;
	static int32_t t55 = -127851105;

	t55 = ((x221<=(x222<=x223))+x224);

	if (t55 != 28056) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 5U;
	uint32_t x226 = 19U;
	static int16_t x227 = -79;
	int32_t t56 = -1292107;

	t56 = ((x225<=(x226<=x227))+x228);

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x230 = 5994511526363740LLU;
	uint16_t x231 = 6846U;
	int32_t x232 = INT32_MAX;
	static volatile int32_t t57 = INT32_MAX;

	t57 = ((x229<=(x230<=x231))+x232);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile int16_t x234 = INT16_MAX;
	int16_t x235 = -1;
	int16_t x236 = -2;
	int32_t t58 = -1156513;

	t58 = ((x233<=(x234<=x235))+x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	static int8_t x240 = INT8_MIN;
	int32_t t59 = -3081720;

	t59 = ((x237<=(x238<=x239))+x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 70352140924541LLU;
	volatile int16_t x242 = INT16_MIN;
	volatile int16_t x243 = INT16_MAX;
	static int64_t x244 = INT64_MIN;
	static int64_t t60 = INT64_MIN;

	t60 = ((x241<=(x242<=x243))+x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MAX;
	int32_t x246 = -1;
	int32_t x247 = -339573383;
	int64_t x248 = 8122730LL;

	t61 = ((x245<=(x246<=x247))+x248);

	if (t61 != 8122730LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 7629U;
	int32_t x254 = 2;
	uint8_t x256 = 47U;
	volatile int32_t t62 = 379092252;

	t62 = ((x253<=(x254<=x255))+x256);

	if (t62 != 47) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = -1;

	t63 = ((x257<=(x258<=x259))+x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MAX;
	static int32_t x263 = 762;
	volatile int64_t t64 = 22LL;

	t64 = ((x261<=(x262<=x263))+x264);

	if (t64 != 205790450183040LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x265 = INT64_MIN;
	static int32_t x266 = INT32_MIN;
	uint16_t x267 = 46U;
	static uint32_t t65 = 514698801U;

	t65 = ((x265<=(x266<=x267))+x268);

	if (t65 != 31694620U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = -1LL;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x269<=(x270<=x271))+x272);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 19295728759252813LL;
	int16_t x276 = INT16_MIN;
	static int32_t t67 = -22469;

	t67 = ((x273<=(x274<=x275))+x276);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = INT64_MIN;
	static int64_t x278 = -1335470318671LL;
	uint32_t x279 = 314155478U;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t68 = 687U;

	t68 = ((x277<=(x278<=x279))+x280);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = -355039;
	volatile int64_t x284 = INT64_MIN;
	volatile int64_t t69 = 1749082377969LL;

	t69 = ((x281<=(x282<=x283))+x284);

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = 103518898LL;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t70 = INT32_MIN;

	t70 = ((x285<=(x286<=x287))+x288);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 0U;
	int16_t x291 = -1;
	uint16_t x292 = 99U;
	static int32_t t71 = 5336;

	t71 = ((x289<=(x290<=x291))+x292);

	if (t71 != 100) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = INT16_MAX;
	uint16_t x294 = 249U;
	int32_t x296 = -286;
	volatile int32_t t72 = 286;

	t72 = ((x293<=(x294<=x295))+x296);

	if (t72 != -286) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x297 = 1475U;
	volatile int32_t x298 = 1;
	int16_t x299 = -1;
	int8_t x300 = INT8_MIN;

	t73 = ((x297<=(x298<=x299))+x300);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	uint32_t x303 = 26218U;
	volatile uint64_t t74 = 180058544546112026LLU;

	t74 = ((x301<=(x302<=x303))+x304);

	if (t74 != 4589737600LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MAX;

	t75 = ((x305<=(x306<=x307))+x308);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x310 = 246175;
	volatile int32_t t76 = 214;

	t76 = ((x309<=(x310<=x311))+x312);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x314 = -1;
	int16_t x315 = 7;
	int16_t x316 = INT16_MAX;
	static int32_t t77 = -3414;

	t77 = ((x313<=(x314<=x315))+x316);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 9488330462263689LL;
	int64_t x319 = INT64_MIN;
	volatile uint16_t x320 = 56U;
	int32_t t78 = -5;

	t78 = ((x317<=(x318<=x319))+x320);

	if (t78 != 57) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x321 = 12U;
	int32_t x322 = INT32_MIN;
	int8_t x323 = 1;
	uint32_t x324 = 214U;
	uint32_t t79 = 4U;

	t79 = ((x321<=(x322<=x323))+x324);

	if (t79 != 214U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x326 = 7891U;
	static volatile int8_t x327 = -1;
	int16_t x328 = INT16_MIN;
	int32_t t80 = 135289287;

	t80 = ((x325<=(x326<=x327))+x328);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x330 = 20U;
	int16_t x331 = INT16_MAX;
	volatile int16_t x332 = INT16_MIN;
	int32_t t81 = 4;

	t81 = ((x329<=(x330<=x331))+x332);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 3U;
	int64_t x334 = -1LL;
	volatile uint64_t x335 = 159434265925LLU;
	int16_t x336 = -3285;
	int32_t t82 = 18;

	t82 = ((x333<=(x334<=x335))+x336);

	if (t82 != -3285) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MIN;
	volatile int8_t x338 = 2;
	int16_t x339 = -12;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t83 = 202442851;

	t83 = ((x337<=(x338<=x339))+x340);

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x342 = -38659LL;
	static int64_t x343 = 19520065964LL;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t84 = -471541942;

	t84 = ((x341<=(x342<=x343))+x344);

	if (t84 != 256) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = 18LLU;
	volatile int32_t x346 = INT32_MIN;
	static volatile int32_t x348 = INT32_MIN;

	t85 = ((x345<=(x346<=x347))+x348);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = -1;
	int32_t x350 = 12;
	int32_t x351 = -1;
	static int64_t x352 = -1LL;
	int64_t t86 = -7892LL;

	t86 = ((x349<=(x350<=x351))+x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x359 = INT8_MIN;
	int32_t t87 = 1452;

	t87 = ((x357<=(x358<=x359))+x360);

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x363 = -3;
	volatile int32_t t88 = 1;

	t88 = ((x361<=(x362<=x363))+x364);

	if (t88 != -8315574) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -1LL;
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t89 = -42;

	t89 = ((x365<=(x366<=x367))+x368);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x370 = -12871;
	uint32_t t90 = 0U;

	t90 = ((x369<=(x370<=x371))+x372);

	if (t90 != 118835518U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	static volatile int64_t t91 = -63913641436590429LL;

	t91 = ((x373<=(x374<=x375))+x376);

	if (t91 != -814LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x378 = 11U;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = 1943LLU;
	volatile uint64_t t92 = 588806LLU;

	t92 = ((x377<=(x378<=x379))+x380);

	if (t92 != 1943LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -3784LL;
	static volatile int16_t x382 = -1;
	int16_t x383 = -9784;
	int16_t x384 = INT16_MAX;

	t93 = ((x381<=(x382<=x383))+x384);

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = 601216728U;
	static int16_t x387 = -347;
	volatile int64_t x388 = INT64_MIN;
	static int64_t t94 = -2683237883647LL;

	t94 = ((x385<=(x386<=x387))+x388);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x392 = INT32_MIN;
	static int32_t t95 = -562184;

	t95 = ((x389<=(x390<=x391))+x392);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = INT8_MAX;
	static volatile int8_t x394 = INT8_MAX;
	int16_t x395 = 10;
	int32_t x396 = -1;
	int32_t t96 = 419;

	t96 = ((x393<=(x394<=x395))+x396);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = -27;
	int32_t x399 = -240032248;
	volatile int16_t x400 = INT16_MIN;
	static int32_t t97 = -9751394;

	t97 = ((x397<=(x398<=x399))+x400);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = -4038023LL;
	int32_t x402 = 26023;
	int16_t x403 = -28;
	int8_t x404 = 3;
	volatile int32_t t98 = -1;

	t98 = ((x401<=(x402<=x403))+x404);

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = UINT8_MAX;
	int8_t x406 = -27;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = 173541LL;
	int64_t t99 = 27LL;

	t99 = ((x405<=(x406<=x407))+x408);

	if (t99 != 173541LL) { NG(); } else { ; }
	
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

