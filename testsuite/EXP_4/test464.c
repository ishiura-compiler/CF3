#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x22 = INT8_MIN;
static int32_t x25 = 727;
volatile int32_t t5 = 30420;
static int8_t x40 = -1;
int32_t t7 = 186;
static int32_t x65 = -1;
int32_t x66 = INT32_MIN;
volatile int32_t t11 = -10843447;
int32_t x69 = INT32_MIN;
int64_t x70 = -1LL;
volatile int32_t t13 = 12;
volatile int8_t x82 = INT8_MIN;
static uint64_t x84 = 131734789009934785LLU;
uint32_t x85 = 7039422U;
static int8_t x92 = -1;
static uint64_t x93 = UINT64_MAX;
int8_t x99 = -1;
static int8_t x101 = 0;
uint16_t x106 = 540U;
volatile int32_t t21 = 245166392;
volatile int32_t t22 = 18081;
uint16_t x122 = 6123U;
int16_t x135 = INT16_MIN;
int32_t t27 = -153693;
int8_t x155 = INT8_MAX;
int8_t x156 = INT8_MAX;
volatile int32_t t29 = 36252;
static uint16_t x164 = 14U;
int64_t x165 = INT64_MIN;
int64_t x166 = INT64_MAX;
uint16_t x175 = 5011U;
int64_t x190 = 1LL;
int32_t t37 = -10;
int8_t x199 = INT8_MIN;
int32_t t38 = 565357;
static volatile uint8_t x206 = UINT8_MAX;
volatile uint32_t x208 = 105697807U;
volatile uint8_t x214 = UINT8_MAX;
int32_t x215 = INT32_MIN;
uint64_t x220 = 4LLU;
static uint32_t x221 = UINT32_MAX;
int16_t x227 = INT16_MIN;
volatile uint64_t x232 = 161409703LLU;
uint16_t x233 = 1977U;
uint64_t x249 = 184LLU;
int32_t t48 = -1;
volatile int16_t x253 = INT16_MIN;
int32_t t51 = -1;
uint16_t x278 = 6864U;
static int64_t x284 = INT64_MAX;
int64_t x286 = INT64_MIN;
volatile int8_t x297 = -48;
volatile int32_t x300 = -1;
int64_t x301 = -33598247817702LL;
int16_t x304 = INT16_MIN;
volatile int8_t x306 = INT8_MIN;
int8_t x307 = INT8_MAX;
static volatile int16_t x308 = INT16_MIN;
int64_t x321 = 1LL;
int16_t x326 = INT16_MIN;
int32_t x328 = 391870;
static volatile int16_t x335 = INT16_MIN;
uint16_t x336 = 0U;
int32_t x337 = -1;
static uint32_t x339 = 729051U;
static int8_t x368 = INT8_MIN;
static int32_t t70 = -14905198;
int16_t x370 = INT16_MAX;
static volatile uint16_t x372 = 67U;
uint32_t x378 = 7U;
int32_t x385 = 4966415;
volatile int32_t t74 = 0;
uint16_t x394 = 3234U;
volatile int32_t t76 = 2924506;
uint32_t x400 = 10466173U;
static int32_t t77 = -11;
int64_t x405 = 0LL;
int32_t t78 = 259085371;
int16_t x413 = INT16_MIN;
volatile int32_t x416 = -1;
static int64_t x423 = 1404582191LL;
static int16_t x424 = 1;
static int32_t t80 = -466;
volatile int64_t x432 = -1LL;
int32_t x434 = -1;
static int8_t x440 = -6;
volatile int8_t x442 = -1;
volatile uint8_t x445 = 78U;
static int8_t x448 = 1;
int64_t x450 = -3524212578843LL;
int32_t x465 = -1;
volatile int8_t x466 = 0;
int16_t x480 = INT16_MIN;
static int16_t x482 = 0;
int8_t x484 = INT8_MIN;
static int32_t t92 = -19;
volatile int32_t x493 = INT32_MAX;
int32_t x495 = -1;
uint32_t x498 = 16765161U;
volatile int16_t x500 = 12;
int8_t x502 = -1;
int64_t x510 = INT64_MIN;
int16_t x529 = INT16_MIN;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	uint16_t x6 = 300U;
	int16_t x7 = -330;
	uint8_t x8 = UINT8_MAX;
	int32_t t0 = -43;

	t0 = (x5<(x6<=(x7*x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	static volatile uint8_t x10 = 0U;
	int8_t x11 = 4;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t1 = -32009957;

	t1 = (x9<(x10<=(x11*x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = 16;
	static int8_t x18 = -1;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 14663912LLU;
	volatile int32_t t2 = -1;

	t2 = (x17<(x18<=(x19*x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = -1;
	volatile int64_t x23 = -66353LL;
	static volatile int64_t x24 = -1LL;
	static int32_t t3 = -6;

	t3 = (x21<(x22<=(x23*x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = -7247;
	int32_t x27 = 50;
	uint64_t x28 = 337082930091804365LLU;
	volatile int32_t t4 = 2710;

	t4 = (x25<(x26<=(x27*x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x33 = -24;
	int64_t x34 = INT64_MAX;
	static volatile int16_t x35 = 4668;
	int8_t x36 = INT8_MAX;

	t5 = (x33<(x34<=(x35*x36)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	static volatile int16_t x39 = -1;
	volatile int32_t t6 = 30527;

	t6 = (x37<(x38<=(x39*x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -2023;
	uint16_t x42 = 1U;
	int16_t x43 = INT16_MIN;
	int16_t x44 = -103;

	t7 = (x41<(x42<=(x43*x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = -745LL;
	uint32_t x54 = UINT32_MAX;
	volatile uint16_t x55 = 18552U;
	uint32_t x56 = 52U;
	static int32_t t8 = 2;

	t8 = (x53<(x54<=(x55*x56)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x57 = 39;
	int64_t x58 = 6LL;
	volatile int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	int32_t t9 = 3623484;

	t9 = (x57<(x58<=(x59*x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x61 = 175227271U;
	uint32_t x62 = 0U;
	volatile int8_t x63 = -3;
	uint8_t x64 = 13U;
	volatile int32_t t10 = -128725;

	t10 = (x61<(x62<=(x63*x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;

	t11 = (x65<(x66<=(x67*x68)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x71 = 185792LL;
	volatile int32_t x72 = -1;
	int32_t t12 = -475320838;

	t12 = (x69<(x70<=(x71*x72)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = UINT64_MAX;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = -1;

	t13 = (x73<(x74<=(x75*x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 107U;
	volatile int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MAX;
	int16_t x80 = -1;
	int32_t t14 = -5248929;

	t14 = (x77<(x78<=(x79*x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x81 = 0U;
	int64_t x83 = 1LL;
	int32_t t15 = 87;

	t15 = (x81<(x82<=(x83*x84)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x86 = UINT32_MAX;
	volatile uint8_t x87 = UINT8_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t16 = -1729889;

	t16 = (x85<(x86<=(x87*x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = -1LL;
	int8_t x90 = -29;
	int8_t x91 = INT8_MIN;
	static volatile int32_t t17 = -380;

	t17 = (x89<(x90<=(x91*x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x94 = 14;
	static int8_t x95 = 0;
	volatile int8_t x96 = 4;
	int32_t t18 = 6215;

	t18 = (x93<(x94<=(x95*x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = 17;
	static int16_t x100 = 6;
	volatile int32_t t19 = 3574;

	t19 = (x97<(x98<=(x99*x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x102 = 20991U;
	uint64_t x103 = 844981867610337763LLU;
	static int8_t x104 = -1;
	volatile int32_t t20 = -103293180;

	t20 = (x101<(x102<=(x103*x104)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	int8_t x108 = -9;

	t21 = (x105<(x106<=(x107*x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 7U;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 51U;
	uint8_t x112 = 1U;

	t22 = (x109<(x110<=(x111*x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MAX;
	int16_t x115 = INT16_MAX;
	uint32_t x116 = 1232U;
	volatile int32_t t23 = -18586;

	t23 = (x113<(x114<=(x115*x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x121 = UINT32_MAX;
	int16_t x123 = INT16_MAX;
	static uint64_t x124 = 17131301537143002LLU;
	int32_t t24 = 0;

	t24 = (x121<(x122<=(x123*x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x125 = 0U;
	volatile int16_t x126 = -841;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MIN;
	int32_t t25 = 280;

	t25 = (x125<(x126<=(x127*x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x130 = UINT16_MAX;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MAX;
	static int32_t t26 = -18063;

	t26 = (x129<(x130<=(x131*x132)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint16_t x134 = 743U;
	int32_t x136 = -1;

	t27 = (x133<(x134<=(x135*x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -1;
	static int64_t x154 = -4300574547577LL;
	volatile int32_t t28 = 1224928;

	t28 = (x153<(x154<=(x155*x156)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x157 = -1;
	int32_t x158 = 3641;
	uint64_t x159 = 223201144349830LLU;
	uint8_t x160 = 95U;

	t29 = (x157<(x158<=(x159*x160)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = 0;
	int8_t x162 = INT8_MIN;
	static volatile int32_t x163 = 0;
	volatile int32_t t30 = 22451;

	t30 = (x161<(x162<=(x163*x164)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x167 = -1LL;
	static int32_t x168 = -1;
	static int32_t t31 = 2587842;

	t31 = (x165<(x166<=(x167*x168)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = 1U;
	int32_t x171 = 92291817;
	uint64_t x172 = 8779087936LLU;
	static int32_t t32 = -3534730;

	t32 = (x169<(x170<=(x171*x172)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = 86U;
	int64_t x174 = INT64_MAX;
	int16_t x176 = -1;
	int32_t t33 = 12;

	t33 = (x173<(x174<=(x175*x176)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x181 = -1378;
	int16_t x182 = -1;
	int8_t x183 = -1;
	volatile int16_t x184 = 1;
	volatile int32_t t34 = -12;

	t34 = (x181<(x182<=(x183*x184)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = -1;
	volatile uint16_t x186 = 14737U;
	static int32_t x187 = INT32_MIN;
	static int64_t x188 = -627493LL;
	volatile int32_t t35 = -391453536;

	t35 = (x185<(x186<=(x187*x188)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = INT16_MIN;
	volatile uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MIN;
	static int32_t t36 = 3321;

	t36 = (x189<(x190<=(x191*x192)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x193 = 1;
	uint64_t x194 = 432478201LLU;
	volatile uint16_t x195 = 25U;
	int64_t x196 = -806491693997800LL;

	t37 = (x193<(x194<=(x195*x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x197 = UINT8_MAX;
	int8_t x198 = -1;
	int64_t x200 = 2LL;

	t38 = (x197<(x198<=(x199*x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile uint64_t x207 = 2LLU;
	volatile int32_t t39 = -190;

	t39 = (x205<(x206<=(x207*x208)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = INT64_MAX;
	int64_t x216 = -1LL;
	volatile int32_t t40 = -209300;

	t40 = (x213<(x214<=(x215*x216)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x218 = INT16_MAX;
	volatile int8_t x219 = INT8_MAX;
	volatile int32_t t41 = 990718;

	t41 = (x217<(x218<=(x219*x220)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x222 = INT8_MIN;
	static uint64_t x223 = 12154LLU;
	static int16_t x224 = INT16_MIN;
	static int32_t t42 = -2;

	t42 = (x221<(x222<=(x223*x224)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	volatile int32_t x228 = -1;
	volatile int32_t t43 = -1567006;

	t43 = (x225<(x226<=(x227*x228)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -3866;
	volatile int16_t x230 = -1;
	uint16_t x231 = 14784U;
	volatile int32_t t44 = 338093161;

	t44 = (x229<(x230<=(x231*x232)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x234 = INT8_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t45 = -22662;

	t45 = (x233<(x234<=(x235*x236)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x241 = INT64_MIN;
	volatile uint64_t x242 = 47LLU;
	int16_t x243 = -1;
	uint32_t x244 = UINT32_MAX;
	int32_t t46 = 36942;

	t46 = (x241<(x242<=(x243*x244)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x245 = 3298808137613027483LLU;
	int64_t x246 = INT64_MAX;
	volatile int32_t x247 = 456;
	int16_t x248 = -1;
	volatile int32_t t47 = -2013;

	t47 = (x245<(x246<=(x247*x248)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x250 = INT32_MIN;
	volatile int32_t x251 = -101;
	uint64_t x252 = 1775257764LLU;

	t48 = (x249<(x250<=(x251*x252)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x254 = -236;
	uint16_t x255 = 1443U;
	int32_t x256 = 6605;
	volatile int32_t t49 = 39175403;

	t49 = (x253<(x254<=(x255*x256)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x257 = -1;
	int16_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static uint64_t x260 = 5437031LLU;
	static volatile int32_t t50 = 11;

	t50 = (x257<(x258<=(x259*x260)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = INT16_MIN;
	uint64_t x262 = 8LLU;
	int16_t x263 = INT16_MAX;
	int8_t x264 = INT8_MIN;

	t51 = (x261<(x262<=(x263*x264)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = 15;
	static int32_t x267 = -1;
	int64_t x268 = 2912905105460046382LL;
	volatile int32_t t52 = -2715710;

	t52 = (x265<(x266<=(x267*x268)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x277 = UINT16_MAX;
	static int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	static int32_t t53 = -336540404;

	t53 = (x277<(x278<=(x279*x280)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x281 = 4596228907062257LLU;
	uint16_t x282 = 1978U;
	int8_t x283 = -1;
	volatile int32_t t54 = -3;

	t54 = (x281<(x282<=(x283*x284)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = INT8_MAX;
	int32_t x287 = 2;
	int8_t x288 = -1;
	int32_t t55 = 0;

	t55 = (x285<(x286<=(x287*x288)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x298 = UINT64_MAX;
	int64_t x299 = -1LL;
	int32_t t56 = -261;

	t56 = (x297<(x298<=(x299*x300)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x302 = INT16_MAX;
	int16_t x303 = -98;
	int32_t t57 = 528;

	t57 = (x301<(x302<=(x303*x304)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = 553788817U;
	int32_t t58 = 4;

	t58 = (x305<(x306<=(x307*x308)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MAX;
	uint8_t x315 = 9U;
	int8_t x316 = -1;
	int32_t t59 = 117670236;

	t59 = (x313<(x314<=(x315*x316)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = 4207702695LLU;
	volatile int8_t x318 = 18;
	int16_t x319 = 396;
	static int16_t x320 = INT16_MIN;
	int32_t t60 = -399561;

	t60 = (x317<(x318<=(x319*x320)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x322 = 327U;
	int16_t x323 = INT16_MIN;
	volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t61 = -686043507;

	t61 = (x321<(x322<=(x323*x324)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x325 = 5LLU;
	volatile int16_t x327 = -3;
	volatile int32_t t62 = 1965;

	t62 = (x325<(x326<=(x327*x328)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x333 = INT32_MIN;
	uint64_t x334 = UINT64_MAX;
	volatile int32_t t63 = -240960854;

	t63 = (x333<(x334<=(x335*x336)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x338 = 126415;
	int16_t x340 = -1;
	volatile int32_t t64 = 114;

	t64 = (x337<(x338<=(x339*x340)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x345 = UINT16_MAX;
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = -1LL;
	static volatile int32_t x348 = -1;
	int32_t t65 = 198812;

	t65 = (x345<(x346<=(x347*x348)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x349 = -1;
	int16_t x350 = INT16_MAX;
	int8_t x351 = -1;
	int64_t x352 = -128733655820987LL;
	volatile int32_t t66 = 296517;

	t66 = (x349<(x350<=(x351*x352)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x353 = 14U;
	int8_t x354 = INT8_MAX;
	int64_t x355 = 2129620249LL;
	static volatile int16_t x356 = INT16_MIN;
	static int32_t t67 = 1310;

	t67 = (x353<(x354<=(x355*x356)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = 119617968899LL;
	int8_t x360 = INT8_MIN;
	static int32_t t68 = 0;

	t68 = (x357<(x358<=(x359*x360)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x361 = 910791646LLU;
	volatile int8_t x362 = -8;
	static uint32_t x363 = 7193017U;
	volatile int8_t x364 = INT8_MIN;
	int32_t t69 = -2351;

	t69 = (x361<(x362<=(x363*x364)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x365 = UINT32_MAX;
	static int8_t x366 = INT8_MIN;
	volatile uint16_t x367 = UINT16_MAX;

	t70 = (x365<(x366<=(x367*x368)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x369 = INT64_MIN;
	volatile int64_t x371 = -861LL;
	volatile int32_t t71 = -54;

	t71 = (x369<(x370<=(x371*x372)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = 921LL;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t72 = 1074441;

	t72 = (x373<(x374<=(x375*x376)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x377 = 735545425U;
	uint64_t x379 = 42671901LLU;
	uint16_t x380 = UINT16_MAX;
	int32_t t73 = -5;

	t73 = (x377<(x378<=(x379*x380)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = INT32_MAX;
	static volatile uint32_t x388 = 189U;

	t74 = (x385<(x386<=(x387*x388)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x389 = -1LL;
	static int32_t x390 = -885;
	static volatile uint16_t x391 = UINT16_MAX;
	int64_t x392 = 0LL;
	int32_t t75 = -229;

	t75 = (x389<(x390<=(x391*x392)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x393 = 6U;
	int16_t x395 = -1;
	static volatile int64_t x396 = 196688LL;

	t76 = (x393<(x394<=(x395*x396)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x397 = INT32_MIN;
	volatile int16_t x398 = INT16_MIN;
	volatile int16_t x399 = -1;

	t77 = (x397<(x398<=(x399*x400)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x406 = -1;
	uint16_t x407 = 1U;
	uint8_t x408 = 0U;

	t78 = (x405<(x406<=(x407*x408)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x414 = 44440699669LL;
	volatile int64_t x415 = 117773828605115379LL;
	volatile int32_t t79 = -32961695;

	t79 = (x413<(x414<=(x415*x416)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x421 = UINT32_MAX;
	volatile uint16_t x422 = 3U;

	t80 = (x421<(x422<=(x423*x424)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x429 = 1U;
	uint32_t x430 = 12861653U;
	uint64_t x431 = 2342LLU;
	static int32_t t81 = 1702;

	t81 = (x429<(x430<=(x431*x432)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x433 = UINT8_MAX;
	static int16_t x435 = INT16_MIN;
	static uint64_t x436 = UINT64_MAX;
	volatile int32_t t82 = -6231;

	t82 = (x433<(x434<=(x435*x436)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x437 = -1;
	static volatile int16_t x438 = INT16_MIN;
	uint8_t x439 = 59U;
	int32_t t83 = -113166;

	t83 = (x437<(x438<=(x439*x440)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x441 = UINT32_MAX;
	uint8_t x443 = UINT8_MAX;
	static volatile int8_t x444 = -1;
	static int32_t t84 = -53226;

	t84 = (x441<(x442<=(x443*x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x446 = 17629LLU;
	int8_t x447 = 1;
	volatile int32_t t85 = -1206;

	t85 = (x445<(x446<=(x447*x448)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x449 = INT16_MIN;
	int64_t x451 = -21962534124LL;
	int8_t x452 = INT8_MIN;
	int32_t t86 = 90;

	t86 = (x449<(x450<=(x451*x452)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x457 = UINT16_MAX;
	volatile int16_t x458 = -99;
	uint8_t x459 = UINT8_MAX;
	static int16_t x460 = INT16_MIN;
	static int32_t t87 = -368929004;

	t87 = (x457<(x458<=(x459*x460)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x467 = 21U;
	int16_t x468 = -1;
	int32_t t88 = 1;

	t88 = (x465<(x466<=(x467*x468)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x477 = 1012086995U;
	int64_t x478 = INT64_MIN;
	static int8_t x479 = INT8_MIN;
	int32_t t89 = -6981500;

	t89 = (x477<(x478<=(x479*x480)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x481 = 2774835532LLU;
	int16_t x483 = INT16_MIN;
	volatile int32_t t90 = -31477;

	t90 = (x481<(x482<=(x483*x484)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MAX;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;
	volatile int32_t t91 = 1;

	t91 = (x485<(x486<=(x487*x488)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x489 = 10;
	int64_t x490 = -1LL;
	volatile uint16_t x491 = 7543U;
	static uint8_t x492 = 61U;

	t92 = (x489<(x490<=(x491*x492)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x494 = -1LL;
	int16_t x496 = 0;
	int32_t t93 = -8293;

	t93 = (x493<(x494<=(x495*x496)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x497 = UINT16_MAX;
	int16_t x499 = 244;
	static volatile int32_t t94 = -1;

	t94 = (x497<(x498<=(x499*x500)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x501 = 160689U;
	int64_t x503 = 2115878473LL;
	uint16_t x504 = 7U;
	volatile int32_t t95 = 17;

	t95 = (x501<(x502<=(x503*x504)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x505 = -49258393376821LL;
	int64_t x506 = INT64_MAX;
	volatile int8_t x507 = 1;
	int8_t x508 = 1;
	volatile int32_t t96 = -52659;

	t96 = (x505<(x506<=(x507*x508)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x509 = 91798088157766LL;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = INT8_MIN;
	static int32_t t97 = -78;

	t97 = (x509<(x510<=(x511*x512)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x521 = 49U;
	static uint64_t x522 = UINT64_MAX;
	int8_t x523 = INT8_MAX;
	static uint8_t x524 = 1U;
	volatile int32_t t98 = 12103;

	t98 = (x521<(x522<=(x523*x524)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x530 = INT32_MAX;
	int64_t x531 = -1LL;
	int32_t x532 = INT32_MIN;
	int32_t t99 = -6724863;

	t99 = (x529<(x530<=(x531*x532)));

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

