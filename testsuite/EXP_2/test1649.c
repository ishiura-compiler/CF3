#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint32_t x3 = 498U;
int8_t x4 = -1;
int32_t x7 = -33236;
volatile int16_t x8 = INT16_MIN;
int32_t t2 = -21509;
uint8_t x23 = 1U;
volatile int32_t x26 = 17718;
volatile int32_t x29 = INT32_MIN;
static int32_t x31 = -1;
int32_t x32 = -1;
int32_t t8 = -133350;
int32_t x41 = -7626132;
volatile uint64_t t12 = 1003436766781543LLU;
uint16_t x54 = UINT16_MAX;
volatile int32_t t13 = -3;
int32_t x62 = 985555;
volatile int32_t t15 = -719941544;
static int64_t t16 = -3665LL;
static int64_t x70 = INT64_MAX;
volatile int16_t x76 = INT16_MIN;
int16_t x79 = INT16_MIN;
volatile int16_t x80 = INT16_MIN;
uint64_t x88 = UINT64_MAX;
volatile int64_t x93 = INT64_MAX;
int64_t x99 = INT64_MIN;
uint16_t x100 = 1U;
uint32_t x102 = 3001934U;
static volatile uint64_t x112 = 1582852279LLU;
int64_t x114 = -3459840LL;
int32_t t28 = -12823;
uint64_t x123 = 18979981049149808LLU;
int16_t x130 = INT16_MAX;
int64_t x132 = INT64_MAX;
volatile int64_t t34 = 1941560748565317692LL;
int8_t x142 = INT8_MIN;
int16_t x144 = 38;
int32_t t35 = 3487;
static int8_t x170 = INT8_MIN;
int64_t x172 = 410356602793547004LL;
static int32_t x180 = INT32_MIN;
uint8_t x184 = 7U;
static int32_t t45 = 135799567;
volatile uint64_t x191 = 567939885472890328LLU;
int32_t x198 = INT32_MIN;
int32_t t49 = -88529;
volatile int16_t x201 = -1;
uint32_t x203 = 124962404U;
int64_t x212 = INT64_MIN;
int32_t t54 = -41757584;
int32_t x222 = INT32_MIN;
volatile int16_t x225 = -1;
int32_t x228 = -1;
int32_t t56 = 934;
int16_t x229 = INT16_MAX;
int16_t x234 = -1;
uint64_t x237 = 4688702056LLU;
int16_t x243 = 0;
volatile int64_t x245 = INT64_MIN;
static int32_t x252 = 199902495;
int64_t x255 = 68645569733694LL;
volatile int32_t t63 = -4063;
static volatile uint16_t x257 = 0U;
uint32_t x258 = 35437552U;
volatile uint32_t x260 = 1882238253U;
int32_t t67 = -74371;
static volatile uint8_t x281 = 1U;
uint64_t x282 = 495142LLU;
volatile int32_t t70 = -400138;
int64_t x285 = INT64_MAX;
uint32_t x299 = 251582U;
volatile uint32_t t74 = 7875U;
static int32_t x301 = INT32_MIN;
int16_t x302 = INT16_MIN;
uint16_t x303 = 1191U;
volatile uint8_t x312 = UINT8_MAX;
int8_t x313 = INT8_MIN;
volatile int8_t x320 = -63;
int32_t t80 = -26936;
volatile int32_t t81 = 25;
static uint64_t x330 = UINT64_MAX;
int64_t t82 = -12877202LL;
static int64_t x334 = -43213750315704LL;
int8_t x338 = INT8_MAX;
uint8_t x339 = 24U;
int32_t t84 = -14435;
volatile uint32_t x343 = 322959U;
static int32_t x350 = 6;
int8_t x354 = INT8_MIN;
uint8_t x357 = UINT8_MAX;
volatile int16_t x359 = INT16_MAX;
static int8_t x364 = -1;
volatile int32_t t92 = -12;
int16_t x373 = 2;
volatile uint32_t t95 = 422U;
volatile uint16_t x388 = 7U;
int64_t x399 = -761902547939LL;


void f0(void) {
	volatile int64_t x2 = 2836915LL;
	static int32_t t0 = -73;

	t0 = ((x1<=(x2<=x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int8_t x6 = -1;
	volatile int32_t t1 = 41659;

	t1 = ((x5<=(x6<=x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint32_t x10 = 25U;
	int8_t x11 = 59;
	int8_t x12 = INT8_MIN;

	t2 = ((x9<=(x10<=x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint64_t x14 = 735LLU;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = UINT32_MAX;
	static volatile uint32_t t3 = 57350U;

	t3 = ((x13<=(x14<=x15))&x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -315;
	static int16_t x18 = INT16_MIN;
	int8_t x19 = -1;
	static int32_t x20 = -61763;
	static int32_t t4 = -6424458;

	t4 = ((x17<=(x18<=x19))&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int64_t x22 = -1LL;
	static int32_t x24 = 651;
	int32_t t5 = 1;

	t5 = ((x21<=(x22<=x23))&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int64_t x27 = -227975022LL;
	int64_t x28 = -711287118LL;
	volatile int64_t t6 = 394582LL;

	t6 = ((x25<=(x26<=x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = INT16_MIN;
	static int32_t t7 = -1;

	t7 = ((x29<=(x30<=x31))&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 106168250802039208LL;
	int32_t x34 = INT32_MIN;
	volatile int16_t x35 = INT16_MIN;
	int8_t x36 = -1;

	t8 = ((x33<=(x34<=x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 18U;
	uint32_t x38 = 4820232U;
	static int32_t x39 = INT32_MIN;
	static volatile uint8_t x40 = 39U;
	volatile int32_t t9 = 871487215;

	t9 = ((x37<=(x38<=x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 5650304;
	int16_t x43 = -1;
	int32_t x44 = -83;
	static int32_t t10 = -884;

	t10 = ((x41<=(x42<=x43))&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -201;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = 58014159214331510LLU;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -3;

	t11 = ((x45<=(x46<=x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = 75U;
	int8_t x50 = 6;
	int16_t x51 = -59;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49<=(x50<=x51))&x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x55 = -8169128366488LL;
	int8_t x56 = -1;

	t13 = ((x53<=(x54<=x55))&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 1;
	volatile uint16_t x58 = 170U;
	uint8_t x59 = 4U;
	int8_t x60 = 18;
	static volatile int32_t t14 = -22436826;

	t14 = ((x57<=(x58<=x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -51;
	int64_t x63 = 2006LL;
	int8_t x64 = -1;

	t15 = ((x61<=(x62<=x63))&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static uint8_t x66 = 79U;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MIN;

	t16 = ((x65<=(x66<=x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	uint8_t x71 = UINT8_MAX;
	volatile int8_t x72 = 3;
	int32_t t17 = -2686869;

	t17 = ((x69<=(x70<=x71))&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 0U;
	volatile int32_t t18 = -14;

	t18 = ((x73<=(x74<=x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 2U;
	volatile int32_t x78 = -884416533;
	int32_t t19 = -4591041;

	t19 = ((x77<=(x78<=x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int64_t x82 = -1LL;
	uint8_t x83 = 34U;
	uint64_t x84 = 441615315717LLU;
	uint64_t t20 = 69822537LLU;

	t20 = ((x81<=(x82<=x83))&x84);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 83U;
	static uint16_t x86 = UINT16_MAX;
	static int32_t x87 = INT32_MIN;
	volatile uint64_t t21 = 2756520420736823LLU;

	t21 = ((x85<=(x86<=x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 5;
	static int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MAX;
	static volatile int32_t x92 = INT32_MAX;
	static int32_t t22 = 16208;

	t22 = ((x89<=(x90<=x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x94 = -1;
	volatile int64_t x95 = -11749LL;
	volatile int8_t x96 = INT8_MIN;
	int32_t t23 = -741;

	t23 = ((x93<=(x94<=x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int64_t x98 = INT64_MIN;
	int32_t t24 = 890465965;

	t24 = ((x97<=(x98<=x99))&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x103 = 39LL;
	static int64_t x104 = INT64_MIN;
	static volatile int64_t t25 = 62449759361360LL;

	t25 = ((x101<=(x102<=x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	volatile int32_t x106 = -3921091;
	int64_t x107 = INT64_MIN;
	int8_t x108 = -1;
	int32_t t26 = 320;

	t26 = ((x105<=(x106<=x107))&x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 57318U;
	uint8_t x110 = 9U;
	int32_t x111 = 5979;
	static uint64_t t27 = 16441087700LLU;

	t27 = ((x109<=(x110<=x111))&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int16_t x115 = INT16_MAX;
	int8_t x116 = -46;

	t28 = ((x113<=(x114<=x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 5U;
	uint32_t x118 = 1663613U;
	int64_t x119 = -1LL;
	uint8_t x120 = UINT8_MAX;
	static int32_t t29 = -38;

	t29 = ((x117<=(x118<=x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	static int32_t x122 = INT32_MIN;
	volatile int16_t x124 = 12699;
	int32_t t30 = 17976650;

	t30 = ((x121<=(x122<=x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 14;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	int16_t x128 = 4;
	int32_t t31 = 2305308;

	t31 = ((x125<=(x126<=x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile int32_t x131 = 47498;
	volatile int64_t t32 = 87910LL;

	t32 = ((x129<=(x130<=x131))&x132);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	uint16_t x134 = UINT16_MAX;
	volatile uint64_t x135 = 194379586097287LLU;
	static uint8_t x136 = 16U;
	int32_t t33 = -3;

	t33 = ((x133<=(x134<=x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MIN;
	uint64_t x139 = 12123625497LLU;
	static int64_t x140 = INT64_MIN;

	t34 = ((x137<=(x138<=x139))&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1940925104007579995LL;
	static int32_t x143 = INT32_MIN;

	t35 = ((x141<=(x142<=x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	static int8_t x146 = INT8_MIN;
	int32_t x147 = -4145946;
	static int16_t x148 = INT16_MAX;
	static int32_t t36 = 455299;

	t36 = ((x145<=(x146<=x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -8056813310354678LL;
	int32_t x150 = 1;
	uint64_t x151 = 15647LLU;
	volatile uint64_t x152 = UINT64_MAX;
	static volatile uint64_t t37 = 704787632099160LLU;

	t37 = ((x149<=(x150<=x151))&x152);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	int8_t x155 = -1;
	volatile uint8_t x156 = 3U;
	int32_t t38 = -846947;

	t38 = ((x153<=(x154<=x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MIN;
	static int16_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t39 = 7;

	t39 = ((x157<=(x158<=x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static int8_t x162 = INT8_MAX;
	volatile uint64_t x163 = 1528564265LLU;
	int8_t x164 = -58;
	volatile int32_t t40 = -6360;

	t40 = ((x161<=(x162<=x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 2752101815764774618LLU;
	int64_t x166 = INT64_MIN;
	uint32_t x167 = 339711133U;
	static volatile uint64_t x168 = UINT64_MAX;
	volatile uint64_t t41 = 11LLU;

	t41 = ((x165<=(x166<=x167))&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 38677808U;
	int8_t x171 = INT8_MAX;
	int64_t t42 = 235180940267LL;

	t42 = ((x169<=(x170<=x171))&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = UINT8_MAX;
	static int8_t x174 = INT8_MIN;
	static uint8_t x175 = 15U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -124003848;

	t43 = ((x173<=(x174<=x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MAX;
	volatile int32_t t44 = 1867;

	t44 = ((x177<=(x178<=x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 2U;
	int16_t x182 = INT16_MAX;
	int16_t x183 = -6605;

	t45 = ((x181<=(x182<=x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 783;
	volatile uint8_t x186 = 68U;
	static volatile int64_t x187 = INT64_MAX;
	uint32_t x188 = 15U;
	volatile uint32_t t46 = 35255678U;

	t46 = ((x185<=(x186<=x187))&x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = -1LL;
	int64_t x190 = INT64_MIN;
	int32_t x192 = 445336;
	static volatile int32_t t47 = -75269;

	t47 = ((x189<=(x190<=x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 2520048975767104LLU;
	int8_t x194 = 1;
	uint16_t x195 = 23U;
	static int16_t x196 = -6;
	volatile int32_t t48 = -1;

	t48 = ((x193<=(x194<=x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	volatile uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MIN;

	t49 = ((x197<=(x198<=x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x202 = -1LL;
	uint16_t x204 = 31315U;
	int32_t t50 = 245;

	t50 = ((x201<=(x202<=x203))&x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 602LLU;
	static int32_t x206 = -9;
	static uint64_t x207 = 5543937690663534844LLU;
	int32_t x208 = -1;
	int32_t t51 = 11261819;

	t51 = ((x205<=(x206<=x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -5201404;
	int64_t x210 = -216LL;
	static uint8_t x211 = 1U;
	volatile int64_t t52 = -181388623LL;

	t52 = ((x209<=(x210<=x211))&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 13850200351LLU;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	volatile int32_t x216 = -1679;
	int32_t t53 = -868;

	t53 = ((x213<=(x214<=x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	uint64_t x218 = UINT64_MAX;
	static int32_t x219 = 39364;
	int16_t x220 = INT16_MIN;

	t54 = ((x217<=(x218<=x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = 12588890;
	volatile int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	static int64_t t55 = -302438625LL;

	t55 = ((x221<=(x222<=x223))&x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = -15;
	uint8_t x227 = UINT8_MAX;

	t56 = ((x225<=(x226<=x227))&x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MAX;
	int32_t x231 = 258;
	int8_t x232 = -1;
	static int32_t t57 = -106;

	t57 = ((x229<=(x230<=x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	static uint64_t x235 = 254739524410943777LLU;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t58 = 35787LL;

	t58 = ((x233<=(x234<=x235))&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = -1;
	int32_t t59 = 320106;

	t59 = ((x237<=(x238<=x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = -166195386229856LL;
	static uint32_t x244 = 425872U;
	volatile uint32_t t60 = 1926U;

	t60 = ((x241<=(x242<=x243))&x244);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MAX;
	static int64_t x247 = -120148649384213057LL;
	volatile int64_t x248 = -446727251410LL;
	int64_t t61 = 11127637319108686LL;

	t61 = ((x245<=(x246<=x247))&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = 23U;
	uint16_t x250 = UINT16_MAX;
	uint16_t x251 = 572U;
	volatile int32_t t62 = 165830;

	t62 = ((x249<=(x250<=x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int16_t x254 = 60;
	static uint16_t x256 = 9U;

	t63 = ((x253<=(x254<=x255))&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x259 = UINT64_MAX;
	volatile uint32_t t64 = 1581U;

	t64 = ((x257<=(x258<=x259))&x260);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 15U;
	int64_t x262 = 52305390128LL;
	int32_t x263 = -66307;
	int16_t x264 = 6229;
	int32_t t65 = 2820;

	t65 = ((x261<=(x262<=x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -272;
	static int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 660786595798LLU;
	uint64_t t66 = 15290950632120374LLU;

	t66 = ((x265<=(x266<=x267))&x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 20U;
	int16_t x271 = INT16_MAX;
	volatile int8_t x272 = INT8_MIN;

	t67 = ((x269<=(x270<=x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	uint32_t x274 = 1422484U;
	uint16_t x275 = 2U;
	int64_t x276 = INT64_MIN;
	volatile int64_t t68 = 371317LL;

	t68 = ((x273<=(x274<=x275))&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = 933U;
	uint32_t x280 = 216960955U;
	volatile uint32_t t69 = 1U;

	t69 = ((x277<=(x278<=x279))&x280);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;

	t70 = ((x281<=(x282<=x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	uint16_t x287 = 1U;
	volatile int32_t x288 = INT32_MAX;
	int32_t t71 = 502;

	t71 = ((x285<=(x286<=x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 0U;
	static int64_t x290 = INT64_MAX;
	int32_t x291 = INT32_MIN;
	int8_t x292 = 45;
	int32_t t72 = 9;

	t72 = ((x289<=(x290<=x291))&x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	uint64_t x294 = 8969064020LLU;
	int16_t x295 = INT16_MIN;
	int8_t x296 = -1;
	volatile int32_t t73 = 3581910;

	t73 = ((x293<=(x294<=x295))&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 3U;
	volatile int64_t x298 = -1LL;
	volatile uint32_t x300 = UINT32_MAX;

	t74 = ((x297<=(x298<=x299))&x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x304 = INT8_MIN;
	static int32_t t75 = -58;

	t75 = ((x301<=(x302<=x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -1;
	static int64_t x306 = -1LL;
	int8_t x307 = 1;
	volatile uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 250;

	t76 = ((x305<=(x306<=x307))&x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = 0;
	int16_t x311 = -1;
	static int32_t t77 = 531;

	t77 = ((x309<=(x310<=x311))&x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = 3;
	static uint16_t x315 = 28317U;
	static int8_t x316 = 7;
	volatile int32_t t78 = 1131;

	t78 = ((x313<=(x314<=x315))&x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	uint8_t x318 = 36U;
	int64_t x319 = -1LL;
	volatile int32_t t79 = -15238273;

	t79 = ((x317<=(x318<=x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 2727;
	static int32_t x322 = 930682203;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;

	t80 = ((x321<=(x322<=x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 1873U;
	int64_t x326 = -1LL;
	int32_t x327 = INT32_MIN;
	int16_t x328 = -5;

	t81 = ((x325<=(x326<=x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 3;
	int32_t x331 = -1;
	int64_t x332 = 5132490182LL;

	t82 = ((x329<=(x330<=x331))&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int8_t x335 = INT8_MAX;
	uint64_t x336 = 107203LLU;
	volatile uint64_t t83 = 1061403051LLU;

	t83 = ((x333<=(x334<=x335))&x336);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 4;
	int8_t x340 = INT8_MIN;

	t84 = ((x337<=(x338<=x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -3;
	uint8_t x342 = UINT8_MAX;
	static int16_t x344 = -253;
	static int32_t t85 = 66161558;

	t85 = ((x341<=(x342<=x343))&x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MAX;
	static int16_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 123014207;

	t86 = ((x345<=(x346<=x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint64_t x351 = 1268343008653918LLU;
	static volatile uint32_t x352 = 2U;
	uint32_t t87 = 13U;

	t87 = ((x349<=(x350<=x351))&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x353 = 23397U;
	uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = INT8_MAX;
	volatile int32_t t88 = -3;

	t88 = ((x353<=(x354<=x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x358 = INT8_MAX;
	uint8_t x360 = 7U;
	volatile int32_t t89 = -219428;

	t89 = ((x357<=(x358<=x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = 7142688;
	static int8_t x362 = 0;
	int16_t x363 = 6816;
	volatile int32_t t90 = -123;

	t90 = ((x361<=(x362<=x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = 0;
	uint32_t x367 = 0U;
	uint64_t x368 = 10750790346LLU;
	volatile uint64_t t91 = 1199085899331053071LLU;

	t91 = ((x365<=(x366<=x367))&x368);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 414U;
	int16_t x370 = INT16_MIN;
	volatile uint32_t x371 = 565803107U;
	int32_t x372 = -187999034;

	t92 = ((x369<=(x370<=x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	uint8_t x375 = 105U;
	static uint8_t x376 = 9U;
	volatile int32_t t93 = 13160213;

	t93 = ((x373<=(x374<=x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;
	volatile int32_t t94 = 305012771;

	t94 = ((x377<=(x378<=x379))&x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = -241;
	static int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = 3U;
	volatile uint32_t x384 = 2663958U;

	t95 = ((x381<=(x382<=x383))&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MAX;
	volatile int8_t x387 = 42;
	int32_t t96 = 30716403;

	t96 = ((x385<=(x386<=x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	uint64_t x390 = 1LLU;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 13;

	t97 = ((x389<=(x390<=x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	volatile int32_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = -25;

	t98 = ((x393<=(x394<=x395))&x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 1U;
	int64_t x398 = INT64_MIN;
	static int8_t x400 = 1;
	volatile int32_t t99 = 4854;

	t99 = ((x397<=(x398<=x399))&x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

