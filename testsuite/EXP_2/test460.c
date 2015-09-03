#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -979806827;
int8_t x31 = 1;
int64_t x40 = -1LL;
static uint64_t x41 = UINT64_MAX;
static uint32_t x51 = 55U;
int32_t t7 = 914571;
volatile uint8_t x57 = 0U;
uint8_t x58 = 1U;
int32_t t9 = -273293438;
static volatile int32_t t10 = -255;
int64_t x87 = -32LL;
volatile int8_t x96 = 8;
int8_t x110 = INT8_MAX;
static int32_t x136 = INT32_MAX;
int16_t x145 = INT16_MAX;
uint32_t x147 = 142677138U;
volatile int64_t t23 = -30LL;
volatile int16_t x164 = INT16_MIN;
int32_t t25 = 253;
int16_t x169 = -1;
int16_t x174 = INT16_MIN;
int64_t x176 = INT64_MIN;
volatile int64_t t29 = -124810209101LL;
static volatile int8_t x195 = INT8_MIN;
static volatile uint64_t t34 = 138338079051LLU;
int16_t x209 = INT16_MAX;
uint8_t x219 = 5U;
uint16_t x223 = 1715U;
uint16_t x236 = 4253U;
static int8_t x241 = INT8_MIN;
int64_t x242 = INT64_MAX;
int8_t x247 = INT8_MIN;
int32_t t42 = 1157;
int8_t x249 = 30;
static int32_t t43 = 28657041;
volatile int64_t x257 = INT64_MIN;
static uint64_t x258 = UINT64_MAX;
volatile int16_t x259 = -254;
uint8_t x263 = UINT8_MAX;
volatile uint8_t x264 = UINT8_MAX;
static volatile int32_t t45 = -101;
static uint64_t x265 = 6852918529LLU;
uint16_t x266 = 1U;
uint8_t x273 = 10U;
volatile int32_t t48 = -32498;
int16_t x281 = INT16_MIN;
uint8_t x284 = 15U;
volatile int32_t t49 = 1;
int16_t x289 = 979;
int32_t t52 = -26;
int8_t x299 = -42;
volatile uint16_t x305 = 22126U;
int64_t t56 = 985LL;
int16_t x327 = INT16_MIN;
static int32_t t58 = 273833019;
static int8_t x335 = 0;
static int8_t x336 = -1;
volatile int32_t t60 = -1;
int32_t t61 = -94;
int32_t x343 = INT32_MIN;
static uint64_t x370 = UINT64_MAX;
int16_t x392 = -1;
static volatile int16_t x400 = INT16_MAX;
volatile int32_t t71 = -866;
volatile uint32_t x407 = 1U;
static volatile int32_t x409 = 5338;
static int64_t x412 = -1LL;
volatile int32_t t76 = -92;
int8_t x429 = 35;
uint8_t x431 = 2U;
volatile uint32_t x439 = UINT32_MAX;
int16_t x454 = INT16_MIN;
static uint16_t x455 = 12839U;
int64_t x461 = -1LL;
int64_t x469 = 1984363322LL;
int32_t t84 = 8107;
int8_t x474 = INT8_MIN;
volatile int16_t x495 = INT16_MAX;
int64_t x501 = 41361248LL;
volatile uint32_t x506 = 2475U;
uint8_t x514 = UINT8_MAX;
uint64_t x515 = 751265847LLU;
uint64_t x537 = 171147914090755727LLU;


void f0(void) {
	uint32_t x17 = 671643522U;
	int64_t x18 = 444981LL;
	volatile int64_t x19 = 11114452LL;
	volatile int16_t x20 = INT16_MIN;
	volatile int32_t t0 = -50473;

	t0 = ((x17<=(x18*x19))%x20);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile int64_t x22 = -1LL;
	uint64_t x23 = 3442306442962359LLU;
	int8_t x24 = INT8_MIN;

	t1 = ((x21<=(x22*x23))%x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MIN;
	static int64_t x26 = -232692685957834LL;
	int64_t x27 = -1LL;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t2 = -1LL;

	t2 = ((x25<=(x26*x27))%x28);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x29 = 246193682717449502LLU;
	int8_t x30 = INT8_MIN;
	volatile int64_t x32 = 247363193LL;
	int64_t t3 = -32164519284LL;

	t3 = ((x29<=(x30*x31))%x32);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x37 = -1;
	int8_t x38 = INT8_MAX;
	int8_t x39 = 54;
	volatile int64_t t4 = -458361018685LL;

	t4 = ((x37<=(x38*x39))%x40);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x42 = -15;
	uint16_t x43 = 157U;
	int32_t x44 = INT32_MAX;
	volatile int32_t t5 = -188;

	t5 = ((x41<=(x42*x43))%x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 10LLU;
	uint16_t x46 = 106U;
	uint8_t x47 = 6U;
	volatile int8_t x48 = INT8_MIN;
	int32_t t6 = -73;

	t6 = ((x45<=(x46*x47))%x48);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	static int32_t x50 = -1;
	int32_t x52 = INT32_MAX;

	t7 = ((x49<=(x50*x51))%x52);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	volatile int16_t x55 = 3;
	int64_t x56 = -1LL;
	static volatile int64_t t8 = 473579LL;

	t8 = ((x53<=(x54*x55))%x56);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;

	t9 = ((x57<=(x58*x59))%x60);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x61 = 22301759U;
	static uint16_t x62 = UINT16_MAX;
	int64_t x63 = 2985LL;
	int32_t x64 = INT32_MAX;

	t10 = ((x61<=(x62*x63))%x64);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = -4;
	uint64_t x66 = UINT64_MAX;
	uint64_t x67 = 63236447934LLU;
	static volatile int32_t x68 = INT32_MAX;
	int32_t t11 = -2038;

	t11 = ((x65<=(x66*x67))%x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = -18088737;
	uint64_t x74 = UINT64_MAX;
	static uint8_t x75 = 1U;
	static int8_t x76 = -1;
	volatile int32_t t12 = -2311239;

	t12 = ((x73<=(x74*x75))%x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = INT16_MIN;
	static volatile int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t13 = 15364084;

	t13 = ((x81<=(x82*x83))%x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = INT32_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	int32_t x88 = INT32_MAX;
	volatile int32_t t14 = 14383350;

	t14 = ((x85<=(x86*x87))%x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MAX;
	uint16_t x92 = 3882U;
	int32_t t15 = -34363249;

	t15 = ((x89<=(x90*x91))%x92);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = 7;
	static int32_t x95 = -1;
	int32_t t16 = 665830526;

	t16 = ((x93<=(x94*x95))%x96);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x105 = 6U;
	int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -1;
	static int32_t t17 = 105219;

	t17 = ((x105<=(x106*x107))%x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = 4;
	int16_t x111 = INT16_MIN;
	int8_t x112 = 1;
	int32_t t18 = 33326730;

	t18 = ((x109<=(x110*x111))%x112);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = -170756;
	static volatile uint16_t x118 = 1U;
	volatile int8_t x119 = INT8_MIN;
	uint32_t x120 = UINT32_MAX;
	uint32_t t19 = 1969382U;

	t19 = ((x117<=(x118*x119))%x120);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x121 = 390U;
	uint8_t x122 = 7U;
	int8_t x123 = 0;
	int32_t x124 = INT32_MIN;
	int32_t t20 = 1;

	t20 = ((x121<=(x122*x123))%x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = -1LL;
	volatile uint32_t x126 = UINT32_MAX;
	uint32_t x127 = UINT32_MAX;
	volatile int8_t x128 = -2;
	volatile int32_t t21 = -80217;

	t21 = ((x125<=(x126*x127))%x128);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x133 = INT32_MIN;
	static int64_t x134 = -1LL;
	static int8_t x135 = -47;
	volatile int32_t t22 = 2190;

	t22 = ((x133<=(x134*x135))%x136);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x146 = 9196484LL;
	static int64_t x148 = 58812784971LL;

	t23 = ((x145<=(x146*x147))%x148);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x153 = 164639U;
	int32_t x154 = -997775188;
	int64_t x155 = -9835LL;
	int16_t x156 = INT16_MAX;
	volatile int32_t t24 = -3;

	t24 = ((x153<=(x154*x155))%x156);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x161 = INT16_MAX;
	int64_t x162 = -1LL;
	uint8_t x163 = 99U;

	t25 = ((x161<=(x162*x163))%x164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x165 = UINT32_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	int32_t x167 = 41798389;
	int8_t x168 = -1;
	int32_t t26 = -93;

	t26 = ((x165<=(x166*x167))%x168);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x170 = 4107;
	uint64_t x171 = 338256LLU;
	volatile int16_t x172 = -1;
	volatile int32_t t27 = -6051;

	t27 = ((x169<=(x170*x171))%x172);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x173 = 199U;
	int64_t x175 = -1LL;
	int64_t t28 = -29270828984842LL;

	t28 = ((x173<=(x174*x175))%x176);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	static int64_t x180 = 245284599496108101LL;

	t29 = ((x177<=(x178*x179))%x180);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x181 = UINT64_MAX;
	volatile uint64_t x182 = 15359321999817LLU;
	static uint16_t x183 = 1U;
	int64_t x184 = INT64_MAX;
	int64_t t30 = 4965LL;

	t30 = ((x181<=(x182*x183))%x184);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = INT8_MAX;
	static volatile int8_t x186 = INT8_MIN;
	uint32_t x187 = 211802U;
	int32_t x188 = -362;
	int32_t t31 = -49623;

	t31 = ((x185<=(x186*x187))%x188);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x193 = INT16_MAX;
	static int8_t x194 = 45;
	static int32_t x196 = -729;
	static int32_t t32 = 1;

	t32 = ((x193<=(x194*x195))%x196);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = INT16_MAX;
	static uint64_t x202 = 443050819181173378LLU;
	volatile int8_t x203 = -8;
	uint8_t x204 = 1U;
	int32_t t33 = 5990;

	t33 = ((x201<=(x202*x203))%x204);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x205 = INT32_MIN;
	static uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 2U;
	volatile uint64_t x208 = 465719378798LLU;

	t34 = ((x205<=(x206*x207))%x208);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x210 = 941178113103835LLU;
	static volatile int8_t x211 = 2;
	volatile int64_t x212 = -1LL;
	int64_t t35 = -130824615LL;

	t35 = ((x209<=(x210*x211))%x212);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = -678543;
	static int16_t x220 = INT16_MIN;
	int32_t t36 = 122235754;

	t36 = ((x217<=(x218*x219))%x220);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x221 = INT16_MIN;
	static int8_t x222 = INT8_MAX;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t37 = 1190;

	t37 = ((x221<=(x222*x223))%x224);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	static volatile int64_t x227 = -1LL;
	uint8_t x228 = 86U;
	static volatile int32_t t38 = 132;

	t38 = ((x225<=(x226*x227))%x228);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x233 = 32649U;
	static volatile int64_t x234 = 1391390243LL;
	uint32_t x235 = UINT32_MAX;
	int32_t t39 = 279431209;

	t39 = ((x233<=(x234*x235))%x236);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x237 = UINT16_MAX;
	volatile int32_t x238 = -10;
	int64_t x239 = -1LL;
	uint32_t x240 = 380672314U;
	volatile uint32_t t40 = 11U;

	t40 = ((x237<=(x238*x239))%x240);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x243 = 924319075527LLU;
	int16_t x244 = INT16_MIN;
	int32_t t41 = -6949969;

	t41 = ((x241<=(x242*x243))%x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x245 = -1;
	int16_t x246 = 18;
	uint16_t x248 = 7U;

	t42 = ((x245<=(x246*x247))%x248);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x250 = 30785689U;
	static uint8_t x251 = UINT8_MAX;
	int8_t x252 = -1;

	t43 = ((x249<=(x250*x251))%x252);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x260 = -1LL;
	static int64_t t44 = 751271440LL;

	t44 = ((x257<=(x258*x259))%x260);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x262 = 79716445062LLU;

	t45 = ((x261<=(x262*x263))%x264);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x267 = INT32_MIN;
	volatile uint32_t x268 = 2U;
	uint32_t t46 = 8290459U;

	t46 = ((x265<=(x266*x267))%x268);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = UINT8_MAX;
	uint32_t x271 = UINT32_MAX;
	static int16_t x272 = -1620;
	volatile int32_t t47 = -3;

	t47 = ((x269<=(x270*x271))%x272);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x274 = 166223U;
	int32_t x275 = -934;
	volatile int16_t x276 = INT16_MAX;

	t48 = ((x273<=(x274*x275))%x276);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x282 = -20;
	volatile int16_t x283 = INT16_MIN;

	t49 = ((x281<=(x282*x283))%x284);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = -1;
	int64_t x287 = INT64_MAX;
	static int8_t x288 = INT8_MIN;
	int32_t t50 = -3928;

	t50 = ((x285<=(x286*x287))%x288);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x290 = INT8_MIN;
	int32_t x291 = 5;
	int64_t x292 = INT64_MIN;
	volatile int64_t t51 = -1LL;

	t51 = ((x289<=(x290*x291))%x292);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x293 = INT16_MIN;
	static volatile uint32_t x294 = 7626U;
	volatile int64_t x295 = -1LL;
	uint8_t x296 = 57U;

	t52 = ((x293<=(x294*x295))%x296);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x297 = INT32_MAX;
	int8_t x298 = 0;
	uint32_t x300 = UINT32_MAX;
	uint32_t t53 = 6643522U;

	t53 = ((x297<=(x298*x299))%x300);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x301 = INT16_MIN;
	static int8_t x302 = -7;
	int16_t x303 = -1;
	static int64_t x304 = INT64_MIN;
	int64_t t54 = 1LL;

	t54 = ((x301<=(x302*x303))%x304);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x306 = 57U;
	static int8_t x307 = 1;
	int64_t x308 = INT64_MIN;
	int64_t t55 = -22528LL;

	t55 = ((x305<=(x306*x307))%x308);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = 57;
	int32_t x310 = -1;
	static int8_t x311 = 34;
	int64_t x312 = INT64_MIN;

	t56 = ((x309<=(x310*x311))%x312);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x313 = 31U;
	int16_t x314 = 293;
	int64_t x315 = -1LL;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t57 = -4119989;

	t57 = ((x313<=(x314*x315))%x316);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x325 = INT8_MAX;
	volatile uint64_t x326 = 104710LLU;
	int32_t x328 = INT32_MIN;

	t58 = ((x325<=(x326*x327))%x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x329 = INT64_MAX;
	volatile int8_t x330 = -1;
	int16_t x331 = 954;
	uint64_t x332 = 5LLU;
	volatile uint64_t t59 = 620004917695358LLU;

	t59 = ((x329<=(x330*x331))%x332);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x333 = 1U;
	uint32_t x334 = UINT32_MAX;

	t60 = ((x333<=(x334*x335))%x336);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x337 = UINT16_MAX;
	uint64_t x338 = 18959834759034144LLU;
	volatile uint8_t x339 = 1U;
	uint16_t x340 = 4476U;

	t61 = ((x337<=(x338*x339))%x340);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	uint8_t x344 = UINT8_MAX;
	int32_t t62 = 201153;

	t62 = ((x341<=(x342*x343))%x344);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x345 = 950856939233LL;
	volatile int8_t x346 = INT8_MAX;
	volatile int16_t x347 = -1;
	int64_t x348 = INT64_MAX;
	int64_t t63 = 1364369LL;

	t63 = ((x345<=(x346*x347))%x348);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x349 = 0U;
	int8_t x350 = INT8_MAX;
	int8_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t64 = 2035U;

	t64 = ((x349<=(x350*x351))%x352);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x353 = 661925506888224LL;
	volatile int8_t x354 = 3;
	volatile uint64_t x355 = UINT64_MAX;
	uint32_t x356 = 1711U;
	static uint32_t t65 = 1534041U;

	t65 = ((x353<=(x354*x355))%x356);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = -2684;
	static volatile uint16_t x362 = UINT16_MAX;
	uint32_t x363 = UINT32_MAX;
	int16_t x364 = INT16_MAX;
	volatile int32_t t66 = 82;

	t66 = ((x361<=(x362*x363))%x364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x369 = 0;
	int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MAX;
	int32_t t67 = 41448501;

	t67 = ((x369<=(x370*x371))%x372);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x389 = -1;
	static int8_t x390 = INT8_MIN;
	uint64_t x391 = UINT64_MAX;
	volatile int32_t t68 = 542169786;

	t68 = ((x389<=(x390*x391))%x392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = INT16_MAX;
	int64_t x394 = -251500751873312LL;
	int8_t x395 = -1;
	uint16_t x396 = 6U;
	static volatile int32_t t69 = 461171;

	t69 = ((x393<=(x394*x395))%x396);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MAX;
	static int32_t x399 = -1;
	volatile int32_t t70 = -117;

	t70 = ((x397<=(x398*x399))%x400);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x401 = INT32_MIN;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = -6;
	static uint16_t x404 = 165U;

	t71 = ((x401<=(x402*x403))%x404);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x405 = INT64_MIN;
	volatile uint16_t x406 = 3912U;
	static int64_t x408 = INT64_MAX;
	int64_t t72 = 134197827386746156LL;

	t72 = ((x405<=(x406*x407))%x408);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x410 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	static int64_t t73 = 822562LL;

	t73 = ((x409<=(x410*x411))%x412);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x413 = -1;
	uint64_t x414 = 186043LLU;
	volatile int16_t x415 = INT16_MIN;
	uint64_t x416 = UINT64_MAX;
	static uint64_t t74 = 56LLU;

	t74 = ((x413<=(x414*x415))%x416);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x417 = INT8_MIN;
	int32_t x418 = -1;
	uint8_t x419 = 28U;
	volatile uint32_t x420 = 13U;
	uint32_t t75 = 91484609U;

	t75 = ((x417<=(x418*x419))%x420);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = 4134536195160437341LLU;
	int16_t x428 = INT16_MAX;

	t76 = ((x425<=(x426*x427))%x428);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x430 = 0U;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t77 = 315590;

	t77 = ((x429<=(x430*x431))%x432);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x433 = -1;
	int16_t x434 = -1;
	int32_t x435 = 18;
	volatile int64_t x436 = INT64_MIN;
	int64_t t78 = 35007273LL;

	t78 = ((x433<=(x434*x435))%x436);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x437 = -1;
	static int32_t x438 = INT32_MIN;
	int32_t x440 = INT32_MAX;
	volatile int32_t t79 = 0;

	t79 = ((x437<=(x438*x439))%x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x441 = INT8_MIN;
	uint64_t x442 = 178LLU;
	int64_t x443 = INT64_MAX;
	int16_t x444 = -1;
	static int32_t t80 = -120257764;

	t80 = ((x441<=(x442*x443))%x444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = INT64_MAX;
	int8_t x446 = -1;
	volatile int64_t x447 = -1LL;
	int32_t x448 = INT32_MAX;
	int32_t t81 = -697;

	t81 = ((x445<=(x446*x447))%x448);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = -2763;
	int64_t x456 = INT64_MIN;
	int64_t t82 = -14LL;

	t82 = ((x453<=(x454*x455))%x456);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = INT16_MIN;
	volatile int8_t x464 = -1;
	static int32_t t83 = -847819215;

	t83 = ((x461<=(x462*x463))%x464);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x470 = UINT32_MAX;
	static int8_t x471 = -1;
	int16_t x472 = -113;

	t84 = ((x469<=(x470*x471))%x472);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x473 = INT64_MAX;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 3U;
	volatile int32_t t85 = 8471961;

	t85 = ((x473<=(x474*x475))%x476);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x481 = INT32_MAX;
	static volatile int16_t x482 = 9;
	volatile int8_t x483 = -1;
	int16_t x484 = INT16_MIN;
	int32_t t86 = -765;

	t86 = ((x481<=(x482*x483))%x484);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x489 = INT16_MAX;
	int16_t x490 = -1347;
	int8_t x491 = -4;
	uint16_t x492 = 228U;
	static int32_t t87 = -213;

	t87 = ((x489<=(x490*x491))%x492);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x493 = UINT64_MAX;
	uint64_t x494 = 3098523658522LLU;
	int32_t x496 = -1;
	volatile int32_t t88 = 1;

	t88 = ((x493<=(x494*x495))%x496);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x502 = UINT8_MAX;
	volatile uint64_t x503 = 2828742169212317618LLU;
	uint32_t x504 = UINT32_MAX;
	volatile uint32_t t89 = 19511522U;

	t89 = ((x501<=(x502*x503))%x504);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x505 = INT8_MAX;
	uint64_t x507 = UINT64_MAX;
	static volatile int64_t x508 = INT64_MIN;
	int64_t t90 = -47792462821854793LL;

	t90 = ((x505<=(x506*x507))%x508);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x509 = INT32_MIN;
	uint32_t x510 = 1489U;
	int16_t x511 = -3;
	int64_t x512 = 71334693736679180LL;
	static volatile int64_t t91 = -10257328254540903LL;

	t91 = ((x509<=(x510*x511))%x512);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x513 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	volatile int64_t t92 = -1453LL;

	t92 = ((x513<=(x514*x515))%x516);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x517 = 1366U;
	uint64_t x518 = 533763005LLU;
	uint16_t x519 = 151U;
	int16_t x520 = INT16_MIN;
	int32_t t93 = -9678;

	t93 = ((x517<=(x518*x519))%x520);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x521 = INT32_MIN;
	uint64_t x522 = UINT64_MAX;
	int32_t x523 = INT32_MIN;
	int16_t x524 = INT16_MAX;
	volatile int32_t t94 = -128195;

	t94 = ((x521<=(x522*x523))%x524);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x529 = 9U;
	int16_t x530 = -2;
	int16_t x531 = INT16_MIN;
	static int32_t x532 = -1;
	volatile int32_t t95 = 87012;

	t95 = ((x529<=(x530*x531))%x532);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x538 = -17;
	static int32_t x539 = 9794413;
	volatile int8_t x540 = INT8_MAX;
	static int32_t t96 = 862009;

	t96 = ((x537<=(x538*x539))%x540);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x541 = INT64_MIN;
	int64_t x542 = -416035340608150200LL;
	int64_t x543 = -1LL;
	int64_t x544 = INT64_MIN;
	volatile int64_t t97 = 362LL;

	t97 = ((x541<=(x542*x543))%x544);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x545 = INT16_MAX;
	int64_t x546 = -69288998151LL;
	static uint16_t x547 = 24U;
	int16_t x548 = -12439;
	int32_t t98 = -1936498;

	t98 = ((x545<=(x546*x547))%x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x553 = UINT8_MAX;
	uint64_t x554 = 12602821624LLU;
	int64_t x555 = INT64_MIN;
	int64_t x556 = -59488LL;
	static volatile int64_t t99 = -1190267299117250212LL;

	t99 = ((x553<=(x554*x555))%x556);

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

