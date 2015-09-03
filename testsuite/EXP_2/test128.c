#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = 0;
int32_t t0 = 43199;
volatile uint64_t x9 = 124515401172LLU;
int16_t x12 = INT16_MIN;
uint32_t x27 = UINT32_MAX;
int8_t x29 = 1;
int16_t x31 = INT16_MAX;
int8_t x34 = INT8_MIN;
volatile int32_t t8 = 192644;
static int32_t x38 = INT32_MIN;
int16_t x50 = INT16_MAX;
int32_t t12 = -2041;
uint32_t x67 = 503981U;
int64_t x68 = 1963694914149414089LL;
uint64_t x69 = 1LLU;
static uint16_t x73 = 1241U;
static int32_t t16 = -275964604;
static int32_t x81 = INT32_MAX;
static int64_t x89 = 28344769LL;
uint64_t x104 = 15561959314310282LLU;
int32_t x108 = -1;
static int32_t t22 = -63969;
uint32_t x109 = 214U;
int32_t t25 = -215083741;
static int8_t x125 = INT8_MIN;
uint32_t x127 = 802864U;
uint64_t t28 = 2552LLU;
int8_t x138 = 0;
static uint32_t x139 = UINT32_MAX;
volatile uint32_t t30 = 2551363U;
int64_t x147 = 1978455531LL;
int16_t x150 = INT16_MAX;
int64_t x156 = 34LL;
static int64_t t34 = 504298674409808LL;
uint8_t x162 = 0U;
int16_t x165 = INT16_MIN;
static uint16_t x168 = UINT16_MAX;
int8_t x172 = INT8_MIN;
int16_t x173 = -1;
int8_t x174 = INT8_MAX;
int32_t x178 = 3792;
int8_t x181 = -2;
int8_t x187 = INT8_MIN;
volatile int32_t x208 = -1;
volatile uint64_t x214 = 34LLU;
uint64_t x217 = UINT64_MAX;
int16_t x221 = 1;
int8_t x224 = INT8_MIN;
volatile int32_t t50 = -96426;
int32_t t51 = 13406;
int64_t t52 = 18400236072195LL;
uint32_t x243 = UINT32_MAX;
volatile uint64_t t54 = 29LLU;
uint16_t x247 = UINT16_MAX;
int32_t x248 = 521799;
volatile int32_t t56 = -672458081;
int8_t x256 = INT8_MAX;
uint8_t x261 = 2U;
volatile int64_t x262 = INT64_MAX;
uint64_t x270 = UINT64_MAX;
static volatile uint64_t t61 = 84489LLU;
static volatile int32_t t64 = -921;
volatile int64_t t65 = 1888676LL;
int64_t x289 = INT64_MAX;
int8_t x299 = -1;
static volatile int32_t t69 = 0;
static uint16_t x305 = 1522U;
int32_t t70 = -57779;
uint32_t x311 = 936848775U;
static volatile uint16_t x312 = 4946U;
int8_t x316 = -1;
uint8_t x330 = 6U;
int64_t x331 = 2142034974705866LL;
volatile int64_t t76 = -103941109255LL;
int32_t x337 = 36570338;
int16_t x340 = -210;
int32_t x349 = -147020;
volatile int16_t x364 = INT16_MIN;
static uint64_t x370 = 6486LLU;
volatile int8_t x371 = INT8_MAX;
static int8_t x373 = INT8_MAX;
uint16_t x382 = 62U;
uint16_t x392 = UINT16_MAX;
int32_t t88 = 329760;
int64_t x394 = INT64_MIN;
int16_t x398 = INT16_MIN;
static int32_t x400 = -1;
int32_t t90 = -5;
uint64_t x401 = 10670LLU;
int32_t x404 = -439354;
volatile int32_t t92 = -7823;
int32_t x409 = INT32_MIN;
static uint8_t x412 = UINT8_MAX;
static int64_t x421 = INT64_MAX;
int64_t t96 = 163631LL;
volatile int32_t t97 = 140761;
int32_t x430 = -1;
volatile int64_t x432 = -1LL;
volatile uint8_t x434 = UINT8_MAX;
static uint64_t x435 = UINT64_MAX;


void f0(void) {
	int32_t x1 = 1136;
	volatile int16_t x2 = 53;
	static int32_t x4 = INT32_MIN;

	t0 = ((x1<=(x2+x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile uint8_t x6 = 21U;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 22;

	t1 = ((x5<=(x6+x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 1336495630230080LLU;
	int16_t x11 = INT16_MIN;
	volatile int32_t t2 = 1;

	t2 = ((x9<=(x10+x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -7LL;
	int64_t x14 = INT64_MIN;
	static uint64_t x15 = 337692070LLU;
	int32_t x16 = INT32_MIN;
	static int32_t t3 = -85;

	t3 = ((x13<=(x14+x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 0;
	int16_t x18 = 0;
	static volatile uint64_t x19 = 595875LLU;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 35;

	t4 = ((x17<=(x18+x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	volatile uint32_t x23 = UINT32_MAX;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -79220;

	t5 = ((x21<=(x22+x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	uint16_t x26 = 7332U;
	uint64_t x28 = 1657446951LLU;
	volatile uint64_t t6 = 30076527875LLU;

	t6 = ((x25<=(x26+x27))&x28);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = 1LL;

	t7 = ((x29<=(x30+x31))&x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1028843724037645LL;
	int64_t x35 = -1LL;
	int16_t x36 = 1;

	t8 = ((x33<=(x34+x35))&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	volatile uint8_t x39 = 5U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 141;

	t9 = ((x37<=(x38+x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int16_t x42 = 3;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 36951LLU;
	uint64_t t10 = 723136731LLU;

	t10 = ((x41<=(x42+x43))&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 1721U;
	static int16_t x46 = -1;
	int64_t x47 = -1344829LL;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = -120067;

	t11 = ((x45<=(x46+x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MIN;
	volatile uint8_t x51 = 0U;
	uint16_t x52 = 7403U;

	t12 = ((x49<=(x50+x51))&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	volatile uint32_t x54 = 46927U;
	volatile int32_t x55 = -11603;
	int64_t x56 = INT64_MIN;
	int64_t t13 = -17404LL;

	t13 = ((x53<=(x54+x55))&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = UINT64_MAX;
	uint16_t x66 = 3U;
	volatile int64_t t14 = 338LL;

	t14 = ((x65<=(x66+x67))&x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x70 = 52278183LLU;
	int64_t x71 = INT64_MAX;
	static uint64_t x72 = 5483597748372LLU;
	uint64_t t15 = 5720861545LLU;

	t15 = ((x69<=(x70+x71))&x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = 0;
	int16_t x75 = 1;
	int8_t x76 = INT8_MIN;

	t16 = ((x73<=(x74+x75))&x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x82 = INT16_MIN;
	uint16_t x83 = 6U;
	static int32_t x84 = 3268;
	volatile int32_t t17 = 241796;

	t17 = ((x81<=(x82+x83))&x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 41798U;
	static uint32_t x92 = 6696U;
	volatile uint32_t t18 = 5U;

	t18 = ((x89<=(x90+x91))&x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	static volatile int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t19 = -15;

	t19 = ((x93<=(x94+x95))&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x97 = 375;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t20 = 760;

	t20 = ((x97<=(x98+x99))&x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	volatile uint64_t x103 = 1243LLU;
	uint64_t t21 = 10284602622621836LLU;

	t21 = ((x101<=(x102+x103))&x104);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	static uint8_t x107 = 1U;

	t22 = ((x105<=(x106+x107))&x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x110 = UINT8_MAX;
	static volatile uint32_t x111 = 32335879U;
	volatile int8_t x112 = INT8_MAX;
	volatile int32_t t23 = -100056212;

	t23 = ((x109<=(x110+x111))&x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 101U;
	volatile int16_t x116 = INT16_MAX;
	volatile int32_t t24 = 364738662;

	t24 = ((x113<=(x114+x115))&x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -1LL;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 1389U;
	static volatile int16_t x120 = -1;

	t25 = ((x117<=(x118+x119))&x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = 9;
	static uint64_t x123 = UINT64_MAX;
	static int64_t x124 = INT64_MIN;
	int64_t t26 = -26238649124LL;

	t26 = ((x121<=(x122+x123))&x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x126 = UINT16_MAX;
	static int64_t x128 = INT64_MIN;
	static int64_t t27 = -32036257LL;

	t27 = ((x125<=(x126+x127))&x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 15;
	static uint64_t x130 = 610301968LLU;
	uint8_t x131 = 2U;
	uint64_t x132 = 194LLU;

	t28 = ((x129<=(x130+x131))&x132);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MIN;
	int64_t x134 = -44767693326980LL;
	uint64_t x135 = 499996090LLU;
	int16_t x136 = INT16_MAX;
	int32_t t29 = 437417264;

	t29 = ((x133<=(x134+x135))&x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = 0;
	uint32_t x140 = 422385028U;

	t30 = ((x137<=(x138+x139))&x140);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = 2012;
	volatile int16_t x142 = INT16_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile int16_t x144 = -6323;
	static int32_t t31 = 71;

	t31 = ((x141<=(x142+x143))&x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	static uint64_t x146 = 895723LLU;
	uint16_t x148 = 120U;
	volatile int32_t t32 = -2;

	t32 = ((x145<=(x146+x147))&x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x149 = UINT32_MAX;
	static uint8_t x151 = UINT8_MAX;
	volatile uint16_t x152 = 79U;
	volatile int32_t t33 = -47;

	t33 = ((x149<=(x150+x151))&x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MIN;

	t34 = ((x153<=(x154+x155))&x156);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -5924021086661LL;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = 807060;

	t35 = ((x157<=(x158+x159))&x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 52222316U;
	int8_t x163 = 3;
	uint8_t x164 = 24U;
	volatile int32_t t36 = -19395725;

	t36 = ((x161<=(x162+x163))&x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x166 = INT16_MAX;
	volatile int16_t x167 = 2982;
	volatile int32_t t37 = 2;

	t37 = ((x165<=(x166+x167))&x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x169 = -2432;
	static volatile int8_t x170 = -10;
	static volatile int32_t x171 = -7716118;
	volatile int32_t t38 = -263;

	t38 = ((x169<=(x170+x171))&x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x175 = -1;
	int16_t x176 = INT16_MAX;
	int32_t t39 = -57005348;

	t39 = ((x173<=(x174+x175))&x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = INT32_MIN;
	int16_t x179 = -5247;
	static volatile int8_t x180 = 0;
	int32_t t40 = 137934916;

	t40 = ((x177<=(x178+x179))&x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = -1;
	uint16_t x183 = UINT16_MAX;
	static volatile int32_t x184 = -1;
	volatile int32_t t41 = -3738;

	t41 = ((x181<=(x182+x183))&x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 38984096519855LLU;
	int8_t x186 = INT8_MAX;
	int8_t x188 = -1;
	volatile int32_t t42 = 1;

	t42 = ((x185<=(x186+x187))&x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = INT8_MIN;
	static int8_t x198 = INT8_MIN;
	int64_t x199 = -132596546102781833LL;
	static int64_t x200 = -278383771725296LL;
	volatile int64_t t43 = -7LL;

	t43 = ((x197<=(x198+x199))&x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = INT16_MAX;
	volatile int32_t x202 = INT32_MIN;
	static int16_t x203 = INT16_MAX;
	static uint16_t x204 = UINT16_MAX;
	int32_t t44 = 154490;

	t44 = ((x201<=(x202+x203))&x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x205 = 131469793U;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 4U;
	int32_t t45 = 40988718;

	t45 = ((x205<=(x206+x207))&x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = -3;
	int8_t x212 = -1;
	volatile int32_t t46 = -3;

	t46 = ((x209<=(x210+x211))&x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = -1;
	uint16_t x215 = 1U;
	volatile int32_t x216 = INT32_MAX;
	volatile int32_t t47 = -249;

	t47 = ((x213<=(x214+x215))&x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x218 = UINT16_MAX;
	static int16_t x219 = 15;
	int16_t x220 = INT16_MIN;
	volatile int32_t t48 = 120;

	t48 = ((x217<=(x218+x219))&x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x222 = 0;
	volatile int16_t x223 = INT16_MIN;
	int32_t t49 = 1;

	t49 = ((x221<=(x222+x223))&x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	int32_t x227 = 1;
	int16_t x228 = INT16_MAX;

	t50 = ((x225<=(x226+x227))&x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x229 = INT8_MAX;
	static volatile uint64_t x230 = 1357387435308LLU;
	int32_t x231 = INT32_MIN;
	int16_t x232 = 15910;

	t51 = ((x229<=(x230+x231))&x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x233 = 57;
	uint8_t x234 = 0U;
	static int32_t x235 = INT32_MIN;
	static int64_t x236 = -1LL;

	t52 = ((x233<=(x234+x235))&x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	volatile uint16_t x238 = 55U;
	int16_t x239 = 10083;
	int32_t x240 = INT32_MAX;
	int32_t t53 = -5;

	t53 = ((x237<=(x238+x239))&x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = 0;
	int32_t x242 = INT32_MIN;
	uint64_t x244 = UINT64_MAX;

	t54 = ((x241<=(x242+x243))&x244);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	static volatile uint8_t x246 = 0U;
	static volatile int32_t t55 = -12470833;

	t55 = ((x245<=(x246+x247))&x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = 606146107805LL;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 2U;
	uint16_t x252 = 2U;

	t56 = ((x249<=(x250+x251))&x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = 20188104;
	int16_t x254 = 381;
	uint8_t x255 = 4U;
	int32_t t57 = -6974072;

	t57 = ((x253<=(x254+x255))&x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x257 = 3752196195LLU;
	int8_t x258 = -1;
	volatile uint64_t x259 = 546892198380638LLU;
	volatile int32_t x260 = INT32_MIN;
	int32_t t58 = -17;

	t58 = ((x257<=(x258+x259))&x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x263 = INT64_MIN;
	volatile int8_t x264 = -1;
	volatile int32_t t59 = -1;

	t59 = ((x261<=(x262+x263))&x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 2U;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t60 = -1431;

	t60 = ((x265<=(x266+x267))&x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	uint16_t x271 = 396U;
	uint64_t x272 = 264550870832LLU;

	t61 = ((x269<=(x270+x271))&x272);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = 59;
	static int32_t x274 = INT32_MIN;
	int64_t x275 = -1LL;
	uint32_t x276 = UINT32_MAX;
	uint32_t t62 = 7U;

	t62 = ((x273<=(x274+x275))&x276);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x277 = INT32_MAX;
	static volatile int32_t x278 = -1;
	int64_t x279 = -1LL;
	int64_t x280 = 2LL;
	volatile int64_t t63 = -10764399740LL;

	t63 = ((x277<=(x278+x279))&x280);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MAX;
	int8_t x283 = INT8_MIN;
	static int32_t x284 = INT32_MIN;

	t64 = ((x281<=(x282+x283))&x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x285 = 11424375LLU;
	uint16_t x286 = 13290U;
	static int64_t x287 = -1LL;
	volatile int64_t x288 = INT64_MIN;

	t65 = ((x285<=(x286+x287))&x288);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MAX;
	volatile int64_t x292 = INT64_MIN;
	static volatile int64_t t66 = 15201082810560LL;

	t66 = ((x289<=(x290+x291))&x292);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = -60136;
	int8_t x295 = 3;
	volatile int16_t x296 = -312;
	static int32_t t67 = 2962687;

	t67 = ((x293<=(x294+x295))&x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = -1;
	uint32_t x298 = 10U;
	uint16_t x300 = 4596U;
	volatile int32_t t68 = 91077096;

	t68 = ((x297<=(x298+x299))&x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MIN;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MAX;

	t69 = ((x301<=(x302+x303))&x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x306 = INT16_MAX;
	static int64_t x307 = 10398LL;
	int16_t x308 = INT16_MIN;

	t70 = ((x305<=(x306+x307))&x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x309 = -6;
	int64_t x310 = 1057429739635325708LL;
	volatile int32_t t71 = 15956406;

	t71 = ((x309<=(x310+x311))&x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x313 = 1954604999U;
	int32_t x314 = 1992;
	int8_t x315 = -1;
	volatile int32_t t72 = 144;

	t72 = ((x313<=(x314+x315))&x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x317 = INT64_MIN;
	int16_t x318 = -1;
	volatile uint8_t x319 = UINT8_MAX;
	uint64_t x320 = 1980790LLU;
	uint64_t t73 = 0LLU;

	t73 = ((x317<=(x318+x319))&x320);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MAX;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = 20;
	int8_t x328 = INT8_MAX;
	volatile int32_t t74 = 47189052;

	t74 = ((x325<=(x326+x327))&x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x329 = UINT16_MAX;
	static volatile uint8_t x332 = UINT8_MAX;
	static volatile int32_t t75 = -1;

	t75 = ((x329<=(x330+x331))&x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x333 = -1;
	volatile int8_t x334 = -20;
	int8_t x335 = -3;
	int64_t x336 = INT64_MIN;

	t76 = ((x333<=(x334+x335))&x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x338 = 49063U;
	int16_t x339 = -1;
	volatile int32_t t77 = 1497810;

	t77 = ((x337<=(x338+x339))&x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = -2;
	int8_t x342 = -1;
	volatile int64_t x343 = 122393669881968591LL;
	int32_t x344 = INT32_MIN;
	int32_t t78 = -265177;

	t78 = ((x341<=(x342+x343))&x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x345 = 3080410415271LL;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t79 = 17256965;

	t79 = ((x345<=(x346+x347))&x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 5349LLU;
	uint64_t x352 = 187881589802LLU;
	uint64_t t80 = 65196427083458LLU;

	t80 = ((x349<=(x350+x351))&x352);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = UINT8_MAX;
	int64_t x354 = 0LL;
	int64_t x355 = -32427635375260LL;
	uint8_t x356 = 0U;
	volatile int32_t t81 = -1;

	t81 = ((x353<=(x354+x355))&x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 5602002LLU;
	uint16_t x359 = 51U;
	int64_t x360 = -4197878811LL;
	static int64_t t82 = -136726LL;

	t82 = ((x357<=(x358+x359))&x360);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x361 = -1LL;
	volatile int64_t x362 = -107LL;
	static uint8_t x363 = 1U;
	volatile int32_t t83 = -1;

	t83 = ((x361<=(x362+x363))&x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = UINT32_MAX;
	uint64_t x372 = UINT64_MAX;
	uint64_t t84 = 1605LLU;

	t84 = ((x369<=(x370+x371))&x372);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = 3567976;
	int32_t x375 = 14475462;
	int64_t x376 = 1183244104LL;
	volatile int64_t t85 = -96LL;

	t85 = ((x373<=(x374+x375))&x376);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = -1;
	uint8_t x383 = 121U;
	int64_t x384 = -997LL;
	int64_t t86 = 23530469390958737LL;

	t86 = ((x381<=(x382+x383))&x384);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x385 = 102U;
	static uint64_t x386 = UINT64_MAX;
	int8_t x387 = -10;
	static int32_t x388 = 31412773;
	int32_t t87 = 83264706;

	t87 = ((x385<=(x386+x387))&x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -1;
	static int8_t x390 = INT8_MIN;
	volatile int32_t x391 = -1;

	t88 = ((x389<=(x390+x391))&x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = 1914537LLU;
	volatile int16_t x395 = 6129;
	static uint64_t x396 = 72244LLU;
	uint64_t t89 = 366022055561LLU;

	t89 = ((x393<=(x394+x395))&x396);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x397 = 4U;
	volatile uint64_t x399 = 863553760LLU;

	t90 = ((x397<=(x398+x399))&x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x402 = 217277257U;
	int8_t x403 = -1;
	static int32_t t91 = 135997;

	t91 = ((x401<=(x402+x403))&x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x405 = INT64_MIN;
	int8_t x406 = 0;
	static uint8_t x407 = 10U;
	int16_t x408 = INT16_MAX;

	t92 = ((x405<=(x406+x407))&x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x410 = INT16_MIN;
	volatile uint16_t x411 = 7U;
	volatile int32_t t93 = 3043;

	t93 = ((x409<=(x410+x411))&x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x413 = INT8_MIN;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = -1;
	static volatile int8_t x416 = 0;
	int32_t t94 = 27;

	t94 = ((x413<=(x414+x415))&x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MIN;
	static int32_t x418 = -1;
	static uint32_t x419 = UINT32_MAX;
	int8_t x420 = -1;
	int32_t t95 = -115993116;

	t95 = ((x417<=(x418+x419))&x420);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x422 = 6U;
	uint16_t x423 = 1U;
	volatile int64_t x424 = INT64_MIN;

	t96 = ((x421<=(x422+x423))&x424);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x425 = -1;
	volatile int16_t x426 = INT16_MAX;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;

	t97 = ((x425<=(x426+x427))&x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x431 = 1U;
	int64_t t98 = 2518LL;

	t98 = ((x429<=(x430+x431))&x432);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = 23;
	uint8_t x436 = UINT8_MAX;
	static int32_t t99 = 65323969;

	t99 = ((x433<=(x434+x435))&x436);

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

