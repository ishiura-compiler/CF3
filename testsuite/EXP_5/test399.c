#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 62;
uint8_t x12 = 30U;
int64_t x19 = -1LL;
int64_t x20 = INT64_MAX;
volatile int32_t t3 = 41;
static uint64_t x24 = 258103LLU;
static int16_t x28 = -404;
uint64_t x37 = 139638620259658LLU;
volatile int64_t x42 = -175LL;
volatile int32_t t8 = -6397;
int16_t x45 = 1;
static uint16_t x47 = UINT16_MAX;
volatile int32_t t9 = 0;
static int8_t x53 = -1;
int16_t x62 = -1;
int16_t x63 = -1;
int64_t x71 = -116594LL;
int8_t x72 = 35;
static uint64_t x103 = 112031864317864LLU;
int32_t t19 = 648575;
static volatile uint64_t x119 = 1LLU;
uint16_t x134 = 16319U;
int16_t x135 = 3669;
volatile int32_t t25 = 122444832;
int64_t x140 = 598LL;
volatile int32_t t26 = 0;
uint8_t x141 = 1U;
static int64_t x149 = 388645607388LL;
static int16_t x157 = -1;
uint64_t x167 = 253716787LLU;
int8_t x171 = INT8_MAX;
int16_t x183 = INT16_MIN;
int8_t x184 = 15;
static volatile int8_t x187 = INT8_MIN;
uint16_t x209 = 179U;
static volatile int64_t x214 = -1LL;
static volatile int64_t x217 = -14479977093607LL;
volatile uint16_t x231 = 5U;
static uint16_t x238 = 2286U;
int16_t x239 = -1;
static int16_t x246 = -1;
static int8_t x247 = -1;
volatile int16_t x248 = -1;
uint32_t x254 = UINT32_MAX;
uint8_t x256 = 25U;
int32_t x257 = -26;
uint16_t x260 = 91U;
volatile int32_t t49 = 18370529;
static uint32_t x268 = UINT32_MAX;
int16_t x271 = INT16_MIN;
static uint16_t x274 = UINT16_MAX;
volatile int32_t t54 = -1;
int8_t x281 = 1;
static int32_t t55 = -794573659;
static volatile int64_t x291 = -3699097908LL;
int16_t x292 = INT16_MIN;
static uint16_t x303 = 5U;
int32_t t57 = 1357967;
int8_t x305 = INT8_MIN;
static uint16_t x313 = 16518U;
int8_t x316 = -1;
volatile int32_t t59 = 187662;
int16_t x331 = -1;
int32_t t65 = -165;
int16_t x353 = 75;
volatile int32_t t67 = 15;
static int16_t x365 = 2;
static uint8_t x369 = 1U;
static int32_t x370 = -1;
volatile int8_t x371 = -1;
volatile int32_t t71 = 27628;
int16_t x378 = -1;
int32_t x380 = -20;
int32_t t73 = 27597865;
int32_t x390 = -1;
uint32_t x395 = 50U;
static int32_t t76 = 1480;
int32_t x402 = INT32_MIN;
int8_t x412 = 4;
int32_t t79 = 7329;
static volatile int16_t x417 = INT16_MIN;
int32_t x430 = -1;
int32_t x444 = INT32_MIN;
volatile int32_t t86 = -1185;
static int8_t x449 = INT8_MIN;
int8_t x451 = -1;
volatile uint32_t x452 = 3353U;
int8_t x457 = INT8_MIN;
int16_t x459 = INT16_MIN;
volatile int32_t t91 = -22109702;
int64_t x467 = -1707LL;
uint8_t x481 = UINT8_MAX;
uint16_t x482 = 58U;
int32_t t95 = -23023;
static int16_t x498 = -1;
volatile int32_t t96 = -20180;
static volatile uint8_t x501 = 0U;
static volatile int64_t x502 = -1LL;
int8_t x506 = INT8_MAX;
volatile int32_t t98 = -36198582;
volatile int32_t t99 = -1;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int32_t x2 = -1;
	int8_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 1;

	t0 = (x1<((x2*x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	static int32_t x7 = 163;
	static int32_t t1 = 320;

	t1 = (x5<((x6*x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int32_t x10 = -1;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -183435;

	t2 = (x9<((x10*x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = -60318;

	t3 = (x17<((x18*x19)%x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 12;
	volatile int64_t x22 = INT64_MAX;
	volatile uint64_t x23 = 16LLU;
	volatile int32_t t4 = -110;

	t4 = (x21<((x22*x23)%x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	uint8_t x26 = 11U;
	int64_t x27 = -46717021817LL;
	volatile int32_t t5 = 1588688;

	t5 = (x25<((x26*x27)%x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 0U;
	uint32_t x34 = 58750U;
	int8_t x35 = -7;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = 421;

	t6 = (x33<((x34*x35)%x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = INT8_MAX;
	int32_t x39 = 890;
	uint8_t x40 = 20U;
	static volatile int32_t t7 = 0;

	t7 = (x37<((x38*x39)%x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = INT32_MIN;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MIN;

	t8 = (x41<((x42*x43)%x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x46 = 4651229067780LL;
	int64_t x48 = 3010971796501570LL;

	t9 = (x45<((x46*x47)%x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x50 = -1LL;
	int64_t x51 = -1LL;
	static int32_t x52 = -1;
	volatile int32_t t10 = -277;

	t10 = (x49<((x50*x51)%x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x54 = 13U;
	volatile uint16_t x55 = 187U;
	volatile int64_t x56 = INT64_MIN;
	int32_t t11 = -44;

	t11 = (x53<((x54*x55)%x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = INT8_MIN;
	uint32_t x58 = 53109U;
	int32_t x59 = 42939;
	int64_t x60 = -1LL;
	int32_t t12 = 9;

	t12 = (x57<((x58*x59)%x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 28U;
	int16_t x64 = 1;
	int32_t t13 = -14747;

	t13 = (x61<((x62*x63)%x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	static uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t14 = 235123368;

	t14 = (x65<((x66*x67)%x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x69 = 7028U;
	volatile int8_t x70 = -1;
	volatile int32_t t15 = -464;

	t15 = (x69<((x70*x71)%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = 1;
	int8_t x79 = 10;
	static int64_t x80 = -233370762072LL;
	static int32_t t16 = 50;

	t16 = (x77<((x78*x79)%x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = 3670656885170629031LL;
	int64_t x82 = INT64_MIN;
	static volatile uint64_t x83 = 31LLU;
	static uint16_t x84 = 1191U;
	volatile int32_t t17 = 1736852;

	t17 = (x81<((x82*x83)%x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x89 = INT32_MIN;
	uint64_t x90 = 8374152876238511LLU;
	uint64_t x91 = 1809211166003009441LLU;
	int32_t x92 = -1;
	int32_t t18 = -119739920;

	t18 = (x89<((x90*x91)%x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -5;
	uint64_t x102 = UINT64_MAX;
	uint16_t x104 = UINT16_MAX;

	t19 = (x101<((x102*x103)%x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x105 = INT16_MAX;
	static volatile int16_t x106 = 930;
	int8_t x107 = INT8_MIN;
	volatile int64_t x108 = -21409LL;
	volatile int32_t t20 = -131379485;

	t20 = (x105<((x106*x107)%x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = INT32_MIN;
	static volatile int16_t x110 = -1;
	volatile int64_t x111 = -43144LL;
	uint32_t x112 = 1651823U;
	volatile int32_t t21 = -1234;

	t21 = (x109<((x110*x111)%x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = 1327873LL;
	static uint64_t x118 = 682054667LLU;
	volatile uint8_t x120 = 15U;
	volatile int32_t t22 = 4236;

	t22 = (x117<((x118*x119)%x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x121 = INT16_MAX;
	int64_t x122 = 1LL;
	static uint16_t x123 = 2725U;
	int16_t x124 = -1;
	static int32_t t23 = 0;

	t23 = (x121<((x122*x123)%x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 0U;
	uint32_t x126 = UINT32_MAX;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MIN;
	volatile int32_t t24 = -554;

	t24 = (x125<((x126*x127)%x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x133 = 19U;
	uint16_t x136 = 7U;

	t25 = (x133<((x134*x135)%x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int8_t x138 = 15;
	int8_t x139 = INT8_MIN;

	t26 = (x137<((x138*x139)%x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = -10;
	int32_t x144 = -60998;
	int32_t t27 = 115;

	t27 = (x141<((x142*x143)%x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x150 = -1;
	uint64_t x151 = 86739LLU;
	uint8_t x152 = 16U;
	int32_t t28 = -53388735;

	t28 = (x149<((x150*x151)%x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x158 = 3648U;
	int32_t x159 = -1;
	uint32_t x160 = 3079182U;
	volatile int32_t t29 = 25203;

	t29 = (x157<((x158*x159)%x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = -2;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t30 = 10801182;

	t30 = (x161<((x162*x163)%x164));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = 3983369LLU;
	static int16_t x166 = -1;
	static uint64_t x168 = 3194189LLU;
	static int32_t t31 = 1;

	t31 = (x165<((x166*x167)%x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 1U;
	int32_t x172 = 30171203;
	static volatile int32_t t32 = -312950600;

	t32 = (x169<((x170*x171)%x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x173 = INT32_MAX;
	static int16_t x174 = -7;
	int64_t x175 = -1LL;
	static volatile uint8_t x176 = 97U;
	volatile int32_t t33 = 282;

	t33 = (x173<((x174*x175)%x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = UINT16_MAX;
	volatile uint8_t x178 = 37U;
	static volatile uint16_t x179 = 2847U;
	int16_t x180 = -7;
	volatile int32_t t34 = 254568;

	t34 = (x177<((x178*x179)%x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x181 = UINT32_MAX;
	int32_t x182 = -1;
	volatile int32_t t35 = -22226755;

	t35 = (x181<((x182*x183)%x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = 206;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t36 = -785;

	t36 = (x185<((x186*x187)%x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t37 = -59692;

	t37 = (x197<((x198*x199)%x200));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	static int8_t x204 = INT8_MIN;
	static volatile int32_t t38 = -104485388;

	t38 = (x201<((x202*x203)%x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x210 = INT16_MAX;
	uint8_t x211 = UINT8_MAX;
	uint16_t x212 = UINT16_MAX;
	int32_t t39 = 1;

	t39 = (x209<((x210*x211)%x212));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x213 = 12LLU;
	static int16_t x215 = -1;
	int16_t x216 = -1;
	int32_t t40 = -6592739;

	t40 = (x213<((x214*x215)%x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x218 = 2;
	static int8_t x219 = 1;
	int16_t x220 = -339;
	int32_t t41 = 41895;

	t41 = (x217<((x218*x219)%x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = INT32_MAX;
	static uint64_t x222 = UINT64_MAX;
	static volatile uint64_t x223 = 13182599630195374LLU;
	volatile int16_t x224 = INT16_MAX;
	volatile int32_t t42 = -22695128;

	t42 = (x221<((x222*x223)%x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x225 = 3;
	int32_t x226 = -635081;
	volatile uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;
	int32_t t43 = -367784;

	t43 = (x225<((x226*x227)%x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	uint16_t x232 = 2U;
	int32_t t44 = 104;

	t44 = (x229<((x230*x231)%x232));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x237 = -1;
	static uint8_t x240 = UINT8_MAX;
	int32_t t45 = 3;

	t45 = (x237<((x238*x239)%x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x241 = 1222;
	int16_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = -2719076;
	volatile int32_t t46 = -51;

	t46 = (x241<((x242*x243)%x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = -1;
	volatile int32_t t47 = -3;

	t47 = (x245<((x246*x247)%x248));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x253 = INT32_MAX;
	uint16_t x255 = 15697U;
	static volatile int32_t t48 = 673399209;

	t48 = (x253<((x254*x255)%x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x258 = 185;
	uint32_t x259 = 514663U;

	t49 = (x257<((x258*x259)%x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x261 = UINT8_MAX;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = 7;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t50 = 1462;

	t50 = (x261<((x262*x263)%x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x265 = 2490LL;
	int16_t x266 = 31;
	volatile uint64_t x267 = 10371729LLU;
	volatile int32_t t51 = -73;

	t51 = (x265<((x266*x267)%x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = 1;
	uint16_t x272 = 3U;
	volatile int32_t t52 = -167912210;

	t52 = (x269<((x270*x271)%x272));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = INT64_MIN;
	int32_t x275 = 37;
	volatile uint8_t x276 = 28U;
	int32_t t53 = 103513;

	t53 = (x273<((x274*x275)%x276));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x277 = 60414456;
	int32_t x278 = 0;
	uint64_t x279 = 88543166921LLU;
	int64_t x280 = INT64_MIN;

	t54 = (x277<((x278*x279)%x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x282 = 1403U;
	static int8_t x283 = INT8_MAX;
	volatile int32_t x284 = -1;

	t55 = (x281<((x282*x283)%x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x289 = UINT32_MAX;
	volatile uint32_t x290 = 237950505U;
	int32_t t56 = -7502242;

	t56 = (x289<((x290*x291)%x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x301 = -2;
	int32_t x302 = -1;
	uint16_t x304 = 1U;

	t57 = (x301<((x302*x303)%x304));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x306 = INT16_MIN;
	int64_t x307 = -44156LL;
	static uint32_t x308 = 6U;
	int32_t t58 = -5239;

	t58 = (x305<((x306*x307)%x308));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x314 = 11U;
	int16_t x315 = INT16_MIN;

	t59 = (x313<((x314*x315)%x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = 28;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 9373U;
	int32_t t60 = 158;

	t60 = (x317<((x318*x319)%x320));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x329 = INT16_MIN;
	volatile uint64_t x330 = 5149LLU;
	int64_t x332 = -1LL;
	int32_t t61 = 140944428;

	t61 = (x329<((x330*x331)%x332));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = 4U;
	uint32_t x336 = 984763847U;
	int32_t t62 = -12149;

	t62 = (x333<((x334*x335)%x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x337 = 4U;
	uint64_t x338 = 8262182LLU;
	uint32_t x339 = 67544U;
	int64_t x340 = 13181LL;
	volatile int32_t t63 = -72498;

	t63 = (x337<((x338*x339)%x340));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = -1;
	int64_t x342 = 103167389653265LL;
	static uint16_t x343 = 128U;
	static int64_t x344 = INT64_MAX;
	volatile int32_t t64 = 49561;

	t64 = (x341<((x342*x343)%x344));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = -1;
	volatile uint16_t x346 = 101U;
	uint32_t x347 = 62836894U;
	uint64_t x348 = 2100LLU;

	t65 = (x345<((x346*x347)%x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x349 = 11660433LL;
	uint8_t x350 = 0U;
	static int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	volatile int32_t t66 = 56885038;

	t66 = (x349<((x350*x351)%x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x354 = INT8_MAX;
	int8_t x355 = -44;
	uint32_t x356 = 31531U;

	t67 = (x353<((x354*x355)%x356));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x357 = -2214;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int16_t x360 = -1;
	static int32_t t68 = 15692475;

	t68 = (x357<((x358*x359)%x360));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x366 = 13U;
	static uint16_t x367 = 53U;
	int64_t x368 = INT64_MIN;
	volatile int32_t t69 = 55511;

	t69 = (x365<((x366*x367)%x368));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t70 = -107;

	t70 = (x369<((x370*x371)%x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x373 = -1;
	uint32_t x374 = 40886372U;
	volatile uint64_t x375 = 119LLU;
	int16_t x376 = INT16_MIN;

	t71 = (x373<((x374*x375)%x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x377 = 3U;
	int32_t x379 = 100;
	int32_t t72 = -63369;

	t72 = (x377<((x378*x379)%x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x381 = INT16_MIN;
	static uint8_t x382 = UINT8_MAX;
	int16_t x383 = INT16_MAX;
	uint16_t x384 = 219U;

	t73 = (x381<((x382*x383)%x384));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	static volatile int32_t x392 = 27;
	int32_t t74 = -290;

	t74 = (x389<((x390*x391)%x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x393 = 500391826;
	uint16_t x394 = UINT16_MAX;
	uint16_t x396 = 3206U;
	int32_t t75 = 819043;

	t75 = (x393<((x394*x395)%x396));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x397 = 3U;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MIN;

	t76 = (x397<((x398*x399)%x400));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x401 = UINT16_MAX;
	uint64_t x403 = 34319258276410260LLU;
	volatile int64_t x404 = INT64_MIN;
	int32_t t77 = -1035604591;

	t77 = (x401<((x402*x403)%x404));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x405 = -4;
	volatile int8_t x406 = 0;
	volatile uint8_t x407 = 1U;
	int64_t x408 = INT64_MIN;
	volatile int32_t t78 = -53632762;

	t78 = (x405<((x406*x407)%x408));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x409 = INT16_MIN;
	volatile int64_t x410 = 11050848LL;
	static int8_t x411 = -1;

	t79 = (x409<((x410*x411)%x412));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x413 = INT16_MIN;
	uint8_t x414 = 12U;
	uint32_t x415 = 193U;
	int64_t x416 = 7673613000322LL;
	int32_t t80 = -97404011;

	t80 = (x413<((x414*x415)%x416));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x418 = UINT16_MAX;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = 264465219544428663LLU;
	static volatile int32_t t81 = -1409;

	t81 = (x417<((x418*x419)%x420));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x425 = UINT8_MAX;
	int64_t x426 = -1LL;
	static int8_t x427 = INT8_MAX;
	static int16_t x428 = 109;
	int32_t t82 = -2358;

	t82 = (x425<((x426*x427)%x428));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x429 = INT8_MAX;
	int64_t x431 = -1LL;
	int8_t x432 = -3;
	int32_t t83 = -4037;

	t83 = (x429<((x430*x431)%x432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x433 = INT64_MAX;
	int16_t x434 = 9884;
	int16_t x435 = -10172;
	int8_t x436 = INT8_MIN;
	int32_t t84 = -580241755;

	t84 = (x433<((x434*x435)%x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x437 = -1;
	volatile uint64_t x438 = UINT64_MAX;
	int64_t x439 = -1LL;
	static volatile int16_t x440 = INT16_MIN;
	int32_t t85 = -34;

	t85 = (x437<((x438*x439)%x440));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x441 = 7U;
	static volatile int32_t x442 = -92218;
	uint64_t x443 = 527766851424LLU;

	t86 = (x441<((x442*x443)%x444));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x445 = INT8_MIN;
	volatile uint32_t x446 = UINT32_MAX;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	int32_t t87 = -1;

	t87 = (x445<((x446*x447)%x448));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x450 = 3U;
	volatile int32_t t88 = 78871;

	t88 = (x449<((x450*x451)%x452));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x453 = UINT8_MAX;
	static uint64_t x454 = 11101195734978634LLU;
	int64_t x455 = 2803512665781LL;
	volatile int16_t x456 = -287;
	int32_t t89 = 29266709;

	t89 = (x453<((x454*x455)%x456));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x458 = -35945LL;
	volatile int32_t x460 = -1;
	static volatile int32_t t90 = -1;

	t90 = (x457<((x458*x459)%x460));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x461 = 1553U;
	int8_t x462 = INT8_MIN;
	static int8_t x463 = INT8_MAX;
	int8_t x464 = INT8_MIN;

	t91 = (x461<((x462*x463)%x464));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x465 = 1U;
	volatile int32_t x466 = INT32_MIN;
	volatile uint16_t x468 = 422U;
	volatile int32_t t92 = -11033;

	t92 = (x465<((x466*x467)%x468));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x469 = INT64_MAX;
	uint8_t x470 = UINT8_MAX;
	static uint8_t x471 = 46U;
	int16_t x472 = INT16_MIN;
	static int32_t t93 = -1535434;

	t93 = (x469<((x470*x471)%x472));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x483 = 21LLU;
	int16_t x484 = 1;
	volatile int32_t t94 = 12715832;

	t94 = (x481<((x482*x483)%x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x489 = 1;
	int32_t x490 = 1;
	static int8_t x491 = INT8_MIN;
	int32_t x492 = -1;

	t95 = (x489<((x490*x491)%x492));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x497 = UINT64_MAX;
	volatile uint32_t x499 = UINT32_MAX;
	int64_t x500 = INT64_MIN;

	t96 = (x497<((x498*x499)%x500));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x503 = INT32_MIN;
	uint64_t x504 = UINT64_MAX;
	int32_t t97 = 114267;

	t97 = (x501<((x502*x503)%x504));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x505 = 107U;
	uint8_t x507 = UINT8_MAX;
	int32_t x508 = INT32_MIN;

	t98 = (x505<((x506*x507)%x508));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = INT64_MIN;
	int16_t x510 = INT16_MAX;
	int16_t x511 = INT16_MAX;
	static uint8_t x512 = 2U;

	t99 = (x509<((x510*x511)%x512));

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

