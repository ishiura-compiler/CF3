#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = 1379692;
uint32_t x17 = 2010U;
volatile uint64_t t4 = 20037497587LLU;
volatile uint64_t t5 = 1728971146LLU;
int64_t x28 = -12574444414LL;
static int8_t x42 = -1;
int64_t x45 = INT64_MIN;
int64_t x46 = 1240LL;
int64_t x48 = INT64_MIN;
int32_t t12 = 0;
int32_t x53 = -1;
int16_t x57 = -1;
static volatile int64_t x65 = INT64_MAX;
int32_t x73 = INT32_MIN;
static int8_t x76 = INT8_MIN;
volatile int8_t x92 = INT8_MIN;
int16_t x95 = INT16_MIN;
volatile int64_t t21 = -2187690LL;
volatile int64_t t22 = 119LL;
static volatile int16_t x107 = INT16_MIN;
uint8_t x109 = 0U;
uint64_t x118 = 4176823003740LLU;
uint64_t t26 = 690653887436810723LLU;
int64_t t28 = 38367LL;
int32_t x129 = -1;
int32_t x137 = -1;
int32_t x145 = -1;
uint64_t x150 = 925587616788LLU;
uint16_t x161 = 2U;
volatile uint64_t t38 = 197LLU;
static uint8_t x171 = 9U;
int32_t x172 = 3152976;
int64_t t39 = 1LL;
volatile int64_t x178 = INT64_MAX;
static int64_t x183 = -1LL;
volatile uint64_t t44 = 46602428LLU;
int8_t x194 = -3;
volatile int64_t t47 = -390059844LL;
uint64_t t48 = 8180771590630951388LLU;
static volatile int32_t x209 = 279344089;
volatile uint16_t x212 = 5522U;
static volatile int8_t x218 = INT8_MAX;
static int8_t x226 = INT8_MIN;
int64_t x231 = INT64_MAX;
int64_t t52 = -23718LL;
int8_t x237 = INT8_MIN;
volatile uint8_t x240 = UINT8_MAX;
static uint8_t x250 = 30U;
int64_t x256 = INT64_MAX;
static int8_t x260 = 13;
int16_t x263 = -1;
int32_t x264 = INT32_MIN;
int32_t t61 = 1;
uint32_t x272 = 6754U;
int16_t x278 = INT16_MAX;
static uint16_t x286 = 3U;
int8_t x289 = INT8_MAX;
int64_t t67 = -3317384912648LL;
uint16_t x295 = UINT16_MAX;
uint64_t t68 = 530LLU;
int16_t x303 = -1;
volatile uint32_t t70 = 4114679U;
uint32_t x306 = 163795962U;
uint8_t x312 = UINT8_MAX;
static volatile uint64_t t72 = 1LLU;
uint64_t x314 = UINT64_MAX;
static uint8_t x316 = 1U;
uint16_t x317 = 13134U;
int64_t x318 = -1LL;
int16_t x321 = INT16_MAX;
int16_t x329 = 7742;
int16_t x331 = -1;
int8_t x332 = -1;
static uint64_t x333 = 9809LLU;
static uint64_t x350 = 10429480723650LLU;
int32_t x355 = INT32_MAX;
uint64_t t84 = 379927135937393664LLU;
static int8_t x368 = INT8_MIN;
int8_t x377 = INT8_MIN;
int32_t t89 = -14;
volatile uint64_t t91 = 33593776936LLU;
volatile uint64_t t92 = 3203209LLU;
int8_t x410 = INT8_MIN;
uint64_t x411 = UINT64_MAX;
int32_t x414 = -1;
int64_t x415 = INT64_MIN;
int64_t x418 = INT64_MIN;


void f0(void) {
	static volatile uint32_t x1 = 1U;
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = INT32_MAX;
	uint8_t x4 = 2U;
	uint32_t t0 = 928U;

	t0 = ((x1+(x2/x3))%x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = 10198;
	uint32_t x8 = UINT32_MAX;
	volatile int64_t t1 = 649638887557250138LL;

	t1 = ((x5+(x6/x7))%x8);

	if (t1 != -2147483642LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	uint32_t x11 = 257785U;
	int32_t x12 = INT32_MAX;
	static volatile uint32_t t2 = 767U;

	t2 = ((x9+(x10/x11))%x12);

	if (t2 != 132U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = -5017818LL;
	int8_t x14 = -5;
	static int64_t x15 = INT64_MAX;
	uint8_t x16 = 51U;
	volatile int64_t t3 = 74597256LL;

	t3 = ((x13+(x14/x15))%x16);

	if (t3 != -30LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MAX;
	uint64_t x19 = 94401LLU;
	uint16_t x20 = 21297U;

	t4 = ((x17+(x18/x19))%x20);

	if (t4 != 3461LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 538795700051295LL;
	volatile int32_t x22 = INT32_MIN;
	static volatile int8_t x23 = INT8_MIN;
	static uint64_t x24 = 1230803452213136552LLU;

	t5 = ((x21+(x22/x23))%x24);

	if (t5 != 538795716828511LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -3;
	int8_t x26 = INT8_MIN;
	volatile int16_t x27 = INT16_MAX;
	volatile int64_t t6 = 21450LL;

	t6 = ((x25+(x26/x27))%x28);

	if (t6 != -3LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	static volatile uint16_t x30 = 849U;
	int32_t x31 = INT32_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 4929304455544016776LLU;

	t7 = ((x29+(x30/x31))%x32);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile int64_t x34 = INT64_MAX;
	uint8_t x35 = 1U;
	int32_t x36 = -1;
	volatile int64_t t8 = -549433LL;

	t8 = ((x33+(x34/x35))%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -4;
	uint64_t x38 = 34961LLU;
	uint32_t x39 = 5U;
	int8_t x40 = 3;
	static uint64_t t9 = 149LLU;

	t9 = ((x37+(x38/x39))%x40);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	volatile int8_t x43 = -2;
	volatile int64_t x44 = -29789960129724052LL;
	int64_t t10 = 1LL;

	t10 = ((x41+(x42/x43))%x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = INT64_MIN;
	volatile int64_t t11 = 518954054787615LL;

	t11 = ((x45+(x46/x47))%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = -1;
	static int16_t x51 = INT16_MAX;
	volatile int32_t x52 = 14524965;

	t12 = ((x49+(x50/x51))%x52);

	if (t12 != 12313792) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = 28;
	uint8_t x55 = 7U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -1;

	t13 = ((x53+(x54/x55))%x56);

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	volatile uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 15LL;

	t14 = ((x57+(x58/x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = 0;
	static volatile int16_t x67 = -1;
	static int64_t x68 = -128610812871322LL;
	volatile int64_t t15 = -8769356789809LL;

	t15 = ((x65+(x66/x67))%x68);

	if (t15 != 47591787918577LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int8_t x70 = 0;
	static uint16_t x71 = UINT16_MAX;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t16 = -57426250;

	t16 = ((x69+(x70/x71))%x72);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = -2949110;
	volatile int32_t t17 = -20;

	t17 = ((x73+(x74/x75))%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MAX;
	static volatile uint8_t x78 = UINT8_MAX;
	int16_t x79 = -932;
	volatile int32_t x80 = 6629366;
	static volatile int32_t t18 = -11294031;

	t18 = ((x77+(x78/x79))%x80);

	if (t18 != 6198429) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	static uint64_t x90 = 6425421417LLU;
	int64_t x91 = -433027LL;
	static uint64_t t19 = 337446634774089123LLU;

	t19 = ((x89+(x90/x91))%x92);

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 15774695974LLU;
	int8_t x94 = -1;
	int8_t x96 = 2;
	volatile uint64_t t20 = 73224324623LLU;

	t20 = ((x93+(x94/x95))%x96);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	static uint8_t x98 = 6U;
	volatile int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;

	t21 = ((x97+(x98/x99))%x100);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile int8_t x102 = INT8_MIN;
	volatile int16_t x103 = 1886;
	static int64_t x104 = INT64_MIN;

	t22 = ((x101+(x102/x103))%x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = INT32_MIN;
	static int16_t x106 = -1;
	volatile uint16_t x108 = 165U;
	int32_t t23 = 1949;

	t23 = ((x105+(x106/x107))%x108);

	if (t23 != -68) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x110 = UINT16_MAX;
	int16_t x111 = -3801;
	int64_t x112 = -12841783050867LL;
	volatile int64_t t24 = -4300701207814LL;

	t24 = ((x109+(x110/x111))%x112);

	if (t24 != -17LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -1;
	int8_t x114 = INT8_MAX;
	volatile uint32_t x115 = 15U;
	static int64_t x116 = INT64_MAX;
	int64_t t25 = -39783781819408191LL;

	t25 = ((x113+(x114/x115))%x116);

	if (t25 != 7LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t x119 = 694860754974LLU;
	int32_t x120 = INT32_MIN;

	t26 = ((x117+(x118/x119))%x120);

	if (t26 != 5LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = INT16_MIN;
	static int8_t x122 = INT8_MAX;
	static int64_t x123 = -576762983712626839LL;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t27 = 266929686205015LLU;

	t27 = ((x121+(x122/x123))%x124);

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x125 = INT32_MIN;
	uint16_t x126 = UINT16_MAX;
	int64_t x127 = 40236993LL;
	int8_t x128 = INT8_MAX;

	t28 = ((x125+(x126/x127))%x128);

	if (t28 != -8LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x130 = -3;
	uint16_t x131 = UINT16_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t29 = 366719;

	t29 = ((x129+(x130/x131))%x132);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 4415852281808LL;
	static volatile int8_t x134 = INT8_MAX;
	static int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	int64_t t30 = -3852116622924LL;

	t30 = ((x133+(x134/x135))%x136);

	if (t30 != 625901520LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = 23850911;
	int32_t x139 = -1;
	static int16_t x140 = INT16_MAX;
	int32_t t31 = 1;

	t31 = ((x137+(x138/x139))%x140);

	if (t31 != -29303) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 7;
	uint16_t x142 = 5U;
	int64_t x143 = -1LL;
	static int16_t x144 = INT16_MIN;
	int64_t t32 = -20794891327413LL;

	t32 = ((x141+(x142/x143))%x144);

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x146 = 12755714U;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MAX;
	static volatile uint32_t t33 = 78U;

	t33 = ((x145+(x146/x147))%x148);

	if (t33 != 15U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -7752;
	volatile int32_t x151 = -137124350;
	uint16_t x152 = UINT16_MAX;
	volatile uint64_t t34 = 1LLU;

	t34 = ((x149+(x150/x151))%x152);

	if (t34 != 57784LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = INT8_MIN;
	int8_t x155 = -2;
	int64_t x156 = 1235372680699LL;
	volatile int64_t t35 = -15478274813834161LL;

	t35 = ((x153+(x154/x155))%x156);

	if (t35 != 65599LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = -1LL;
	int16_t x158 = INT16_MAX;
	uint32_t x159 = 1U;
	int64_t x160 = 38LL;
	volatile int64_t t36 = 53LL;

	t36 = ((x157+(x158/x159))%x160);

	if (t36 != 10LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	static volatile int16_t x164 = INT16_MIN;
	int32_t t37 = 3;

	t37 = ((x161+(x162/x163))%x164);

	if (t37 != 258) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x165 = UINT64_MAX;
	uint32_t x166 = UINT32_MAX;
	volatile int64_t x167 = 13106289LL;
	volatile int64_t x168 = INT64_MIN;

	t38 = ((x165+(x166/x167))%x168);

	if (t38 != 326LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -1;
	int64_t x170 = -1LL;

	t39 = ((x169+(x170/x171))%x172);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	static volatile int8_t x176 = INT8_MIN;
	int64_t t40 = 5LL;

	t40 = ((x173+(x174/x175))%x176);

	if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	static uint8_t x179 = 6U;
	int32_t x180 = 3;
	volatile int64_t t41 = 119245444LL;

	t41 = ((x177+(x178/x179))%x180);

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = INT64_MAX;
	int64_t x184 = -13LL;
	int64_t t42 = -238472636342487LL;

	t42 = ((x181+(x182/x183))%x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	static uint16_t x186 = UINT16_MAX;
	static int32_t x187 = -1;
	volatile uint32_t x188 = 27372U;
	uint32_t t43 = 47U;

	t43 = ((x185+(x186/x187))%x188);

	if (t43 != 15984U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = 1004U;
	volatile int8_t x190 = INT8_MIN;
	static volatile uint64_t x191 = 2LLU;
	int64_t x192 = INT64_MIN;

	t44 = ((x189+(x190/x191))%x192);

	if (t44 != 940LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x193 = -18;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static int32_t t45 = 1365722;

	t45 = ((x193+(x194/x195))%x196);

	if (t45 != -18) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = -1;
	uint32_t x198 = 3511U;
	int8_t x199 = 27;
	static int8_t x200 = INT8_MIN;
	uint32_t t46 = 86550959U;

	t46 = ((x197+(x198/x199))%x200);

	if (t46 != 129U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 2;
	uint8_t x202 = 3U;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;

	t47 = ((x201+(x202/x203))%x204);

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile int16_t x206 = -1;
	int16_t x207 = -1;
	uint16_t x208 = 33U;

	t48 = ((x205+(x206/x207))%x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = 197;
	volatile uint64_t t49 = 3742252LLU;

	t49 = ((x209+(x210/x211))%x212);

	if (t49 != 1048LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = -63768;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t50 = 502197LLU;

	t50 = ((x217+(x218/x219))%x220);

	if (t50 != 18446744073709487849LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x225 = 2015667814147287LL;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = UINT8_MAX;
	int64_t t51 = -972LL;

	t51 = ((x225+(x226/x227))%x228);

	if (t51 != 177LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -1;
	static int32_t x230 = INT32_MIN;
	int16_t x232 = INT16_MIN;

	t52 = ((x229+(x230/x231))%x232);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 93U;
	static volatile uint8_t x234 = 2U;
	uint16_t x235 = 3U;
	uint32_t x236 = 475633U;
	static volatile uint32_t t53 = 123U;

	t53 = ((x233+(x234/x235))%x236);

	if (t53 != 93U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x238 = 6911LL;
	int16_t x239 = INT16_MIN;
	int64_t t54 = -64646081174888LL;

	t54 = ((x237+(x238/x239))%x240);

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = INT8_MIN;
	int64_t x242 = 4090242LL;
	static volatile uint8_t x243 = 117U;
	int32_t x244 = -1;
	int64_t t55 = -72969785248742670LL;

	t55 = ((x241+(x242/x243))%x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = 1278;
	static volatile int8_t x247 = -43;
	int8_t x248 = INT8_MIN;
	int32_t t56 = -91;

	t56 = ((x245+(x246/x247))%x248);

	if (t56 != -29) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MAX;
	int64_t x251 = 351LL;
	uint16_t x252 = UINT16_MAX;
	volatile int64_t t57 = -94524606222280LL;

	t57 = ((x249+(x250/x251))%x252);

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x254 = 7601986646LLU;
	int8_t x255 = 1;
	volatile uint64_t t58 = 3959479450LLU;

	t58 = ((x253+(x254/x255))%x256);

	if (t58 != 5454502998LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	static int64_t x258 = 1LL;
	volatile int64_t x259 = INT64_MIN;
	int64_t t59 = 3259038342LL;

	t59 = ((x257+(x258/x259))%x260);

	if (t59 != -11LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x261 = 6476425U;
	int8_t x262 = INT8_MAX;
	volatile uint32_t t60 = 33772U;

	t60 = ((x261+(x262/x263))%x264);

	if (t60 != 6476298U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	static int16_t x266 = 7;
	int16_t x267 = -31;
	uint16_t x268 = 6448U;

	t61 = ((x265+(x266/x267))%x268);

	if (t61 != -3040) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x269 = -1;
	uint16_t x270 = 233U;
	uint16_t x271 = 6U;
	uint32_t t62 = 27U;

	t62 = ((x269+(x270/x271))%x272);

	if (t62 != 37U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	uint16_t x274 = UINT16_MAX;
	uint64_t x275 = UINT64_MAX;
	static int32_t x276 = INT32_MIN;
	uint64_t t63 = 7419145325075LLU;

	t63 = ((x273+(x274/x275))%x276);

	if (t63 != 32767LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = UINT32_MAX;
	static int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MAX;
	uint32_t t64 = 73973120U;

	t64 = ((x277+(x278/x279))%x280);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x282 = -1;
	static volatile uint64_t x283 = 40077617428584633LLU;
	uint16_t x284 = 10122U;
	uint64_t t65 = 12900903129345652LLU;

	t65 = ((x281+(x282/x283))%x284);

	if (t65 != 459LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x285 = 3;
	volatile uint16_t x287 = 1433U;
	static int32_t x288 = INT32_MAX;
	int32_t t66 = -14456568;

	t66 = ((x285+(x286/x287))%x288);

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x290 = -1108089819079758688LL;
	int16_t x291 = 1818;
	int64_t x292 = INT64_MAX;

	t67 = ((x289+(x290/x291))%x292);

	if (t67 != -609510351528893LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = INT32_MIN;
	uint64_t x294 = UINT64_MAX;
	int64_t x296 = -1LL;

	t68 = ((x293+(x294/x295))%x296);

	if (t68 != 281477124259841LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 11U;
	int16_t x298 = INT16_MAX;
	volatile int16_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t69 = -3568;

	t69 = ((x297+(x298/x299))%x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x301 = -337;
	uint32_t x302 = UINT32_MAX;
	int32_t x304 = 1068;

	t70 = ((x301+(x302/x303))%x304);

	if (t70 != 688U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 8U;
	int8_t x307 = 6;
	int16_t x308 = -4823;
	static uint32_t t71 = 2112715383U;

	t71 = ((x305+(x306/x307))%x308);

	if (t71 != 27299335U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 883006U;
	int8_t x310 = INT8_MIN;
	volatile uint64_t x311 = UINT64_MAX;

	t72 = ((x309+(x310/x311))%x312);

	if (t72 != 196LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -1;
	volatile int32_t x315 = INT32_MIN;
	volatile uint64_t t73 = 7937991998128268045LLU;

	t73 = ((x313+(x314/x315))%x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x319 = 15032U;
	int32_t x320 = INT32_MAX;
	volatile int64_t t74 = 2LL;

	t74 = ((x317+(x318/x319))%x320);

	if (t74 != 13134LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x322 = 1513;
	static uint32_t x323 = 122707835U;
	uint64_t x324 = 2374490338637959614LLU;
	volatile uint64_t t75 = 55172LLU;

	t75 = ((x321+(x322/x323))%x324);

	if (t75 != 32767LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MAX;
	volatile uint32_t x326 = 7823788U;
	int16_t x327 = INT16_MAX;
	volatile uint8_t x328 = UINT8_MAX;
	uint32_t t76 = 178275U;

	t76 = ((x325+(x326/x327))%x328);

	if (t76 != 110U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x330 = 8U;
	volatile int32_t t77 = 222;

	t77 = ((x329+(x330/x331))%x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x334 = -27;
	static int16_t x335 = 31;
	int16_t x336 = INT16_MIN;
	uint64_t t78 = 760097555818688396LLU;

	t78 = ((x333+(x334/x335))%x336);

	if (t78 != 9809LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = -1;
	int64_t x338 = 2162748366824LL;
	int32_t x339 = -1;
	int16_t x340 = -298;
	int64_t t79 = -14517481256829LL;

	t79 = ((x337+(x338/x339))%x340);

	if (t79 != -35LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 15U;
	int32_t t80 = 103719;

	t80 = ((x341+(x342/x343))%x344);

	if (t80 != -9) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = 6429;
	int64_t x346 = 306LL;
	static volatile int32_t x347 = -6008;
	uint16_t x348 = 237U;
	static volatile int64_t t81 = -30LL;

	t81 = ((x345+(x346/x347))%x348);

	if (t81 != 30LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x349 = INT16_MAX;
	static int16_t x351 = INT16_MIN;
	static volatile uint8_t x352 = 11U;
	uint64_t t82 = 509242933723LLU;

	t82 = ((x349+(x350/x351))%x352);

	if (t82 != 9LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x353 = UINT32_MAX;
	volatile int32_t x354 = INT32_MAX;
	volatile int32_t x356 = 683318811;
	uint32_t t83 = 198317U;

	t83 = ((x353+(x354/x355))%x356);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x358 = 852605LLU;
	int64_t x359 = -10LL;
	int32_t x360 = INT32_MIN;

	t84 = ((x357+(x358/x359))%x360);

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = 2079733990814516LL;
	static int16_t x362 = -791;
	uint8_t x363 = 35U;
	volatile int16_t x364 = -1;
	static volatile int64_t t85 = 120136369LL;

	t85 = ((x361+(x362/x363))%x364);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	int64_t t86 = -1888744536752LL;

	t86 = ((x365+(x366/x367))%x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x378 = INT8_MIN;
	uint8_t x379 = 2U;
	uint32_t x380 = 151005U;
	static volatile uint32_t t87 = 26U;

	t87 = ((x377+(x378/x379))%x380);

	if (t87 != 82894U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 19371LLU;
	volatile int8_t x384 = -1;
	uint64_t t88 = 15995453LLU;

	t88 = ((x381+(x382/x383))%x384);

	if (t88 != 952286617737690LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 30U;
	int32_t x388 = INT32_MAX;

	t89 = ((x385+(x386/x387))%x388);

	if (t89 != -32772) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = -26;
	int32_t x391 = INT32_MIN;
	static int8_t x392 = -17;
	int32_t t90 = 13766764;

	t90 = ((x389+(x390/x391))%x392);

	if (t90 != -9) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x393 = 1914U;
	int32_t x394 = -3761;
	int64_t x395 = -1LL;
	uint64_t x396 = UINT64_MAX;

	t91 = ((x393+(x394/x395))%x396);

	if (t91 != 5675LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 908LLU;
	volatile int32_t x402 = INT32_MIN;
	static int8_t x403 = INT8_MAX;
	uint16_t x404 = 3089U;

	t92 = ((x401+(x402/x403))%x404);

	if (t92 != 3014LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x405 = 190161770045864LLU;
	int64_t x406 = 2124LL;
	int32_t x407 = INT32_MIN;
	int16_t x408 = -4411;
	uint64_t t93 = 256439120773986LLU;

	t93 = ((x405+(x406/x407))%x408);

	if (t93 != 190161770045864LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = UINT8_MAX;
	uint8_t x412 = 6U;
	static uint64_t t94 = 53395758019LLU;

	t94 = ((x409+(x410/x411))%x412);

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x413 = UINT8_MAX;
	static volatile int8_t x416 = -1;
	volatile int64_t t95 = -4811LL;

	t95 = ((x413+(x414/x415))%x416);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = UINT32_MAX;
	int16_t x419 = 1;
	int64_t x420 = -1029521575731LL;
	volatile int64_t t96 = 8559406280LL;

	t96 = ((x417+(x418/x419))%x420);

	if (t96 != -453437534192LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x421 = 69440642215LLU;
	volatile int16_t x422 = 263;
	volatile int8_t x423 = 6;
	int32_t x424 = -1;
	uint64_t t97 = 48191915LLU;

	t97 = ((x421+(x422/x423))%x424);

	if (t97 != 69440642258LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x425 = INT16_MIN;
	volatile int32_t x426 = INT32_MIN;
	uint64_t x427 = 52480986571502195LLU;
	volatile int16_t x428 = INT16_MIN;
	volatile uint64_t t98 = 59626798720LLU;

	t98 = ((x425+(x426/x427))%x428);

	if (t98 != 351LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = INT32_MIN;
	uint16_t x430 = 2893U;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = UINT8_MAX;
	static volatile int32_t t99 = -77760238;

	t99 = ((x429+(x430/x431))%x432);

	if (t99 != -128) { NG(); } else { ; }
	
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

