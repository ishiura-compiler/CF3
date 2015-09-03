#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 695;
static volatile uint16_t x12 = 2694U;
int64_t x14 = -1LL;
volatile uint64_t x15 = 1810012410758LLU;
int16_t x16 = INT16_MIN;
volatile int64_t x18 = -1LL;
static int64_t x22 = INT64_MAX;
int32_t t5 = -7823;
int8_t x29 = INT8_MAX;
uint64_t x30 = UINT64_MAX;
static volatile int64_t x32 = INT64_MIN;
uint8_t x33 = UINT8_MAX;
uint8_t x36 = 119U;
volatile uint16_t x38 = 1U;
int32_t t8 = -31822;
static int8_t x49 = 6;
uint64_t x50 = 12088342740LLU;
volatile int32_t t11 = -9171375;
uint32_t x59 = 7U;
static int64_t x61 = -1LL;
volatile int32_t t13 = -800422511;
uint64_t x67 = 63132425195787206LLU;
static uint16_t x71 = 24U;
uint32_t x72 = 34673171U;
volatile int16_t x75 = INT16_MIN;
volatile uint8_t x76 = UINT8_MAX;
volatile uint8_t x78 = 0U;
volatile uint64_t x85 = 1187LLU;
volatile int8_t x88 = -1;
volatile int32_t t19 = -171145661;
static volatile int16_t x90 = 256;
volatile int16_t x97 = INT16_MIN;
int8_t x98 = INT8_MIN;
volatile int8_t x99 = INT8_MIN;
volatile int32_t t21 = -124861;
int8_t x105 = -1;
static volatile int32_t t25 = 1;
int64_t x129 = INT64_MIN;
uint64_t x130 = 1402LLU;
volatile int64_t x133 = -1LL;
volatile int32_t t28 = -4921;
volatile int32_t t29 = 99562891;
int32_t x141 = -803498;
uint16_t x144 = UINT16_MAX;
static int32_t t31 = 476129;
int64_t x181 = 250643447782LL;
volatile int16_t x182 = -1;
static uint64_t x187 = 1433351986330796198LLU;
static volatile int8_t x195 = -1;
uint16_t x213 = UINT16_MAX;
int32_t x214 = -1;
volatile uint64_t x215 = 7621649565264835LLU;
int32_t x216 = 9;
uint64_t x220 = 271013LLU;
volatile int32_t t40 = -39068771;
uint8_t x221 = 6U;
volatile uint32_t x234 = UINT32_MAX;
static uint8_t x236 = 2U;
static volatile uint32_t x241 = 62U;
static volatile int32_t x243 = INT32_MIN;
volatile int32_t t46 = 3103010;
static volatile int16_t x248 = INT16_MIN;
volatile int32_t t47 = -1;
int64_t x253 = -2358600LL;
int8_t x254 = 0;
int8_t x258 = INT8_MAX;
volatile int16_t x260 = INT16_MIN;
volatile int32_t t50 = -1027;
static int32_t x262 = 22666641;
int8_t x265 = -1;
static int64_t x267 = INT64_MIN;
static volatile int32_t x290 = INT32_MAX;
volatile int32_t t55 = 7127097;
static int16_t x310 = -42;
int8_t x321 = INT8_MAX;
static int32_t t62 = -20762832;
int32_t x355 = -1;
static int32_t x356 = -1;
volatile int32_t t63 = -909242;
int32_t t64 = -1855;
int32_t x365 = INT32_MIN;
static int32_t x367 = INT32_MIN;
int32_t x384 = INT32_MIN;
volatile int32_t t69 = -17;
volatile uint8_t x392 = 14U;
static int64_t x408 = 2071913858LL;
volatile int8_t x410 = INT8_MAX;
volatile int32_t t73 = 1494899;
volatile uint8_t x413 = 14U;
static int8_t x415 = 27;
int32_t t74 = -117782;
volatile int32_t x430 = -1;
int8_t x445 = -2;
static int32_t x447 = -1;
int16_t x452 = INT16_MAX;
int32_t x453 = 77;
int64_t x468 = INT64_MIN;
static int32_t t84 = -57492;
int32_t x472 = -1;
int64_t x476 = INT64_MAX;
volatile int32_t t86 = 99;
int8_t x477 = INT8_MIN;
static int32_t x486 = 474616162;
int32_t t89 = 3;
static uint16_t x494 = 401U;
uint16_t x496 = 10U;
volatile int32_t t91 = -9;
int16_t x551 = -1;
static int8_t x552 = -1;
int8_t x563 = INT8_MIN;
int32_t t99 = 7465012;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 3455U;
	static int8_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -68048635;

	t0 = (x1<=(x2*(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 944U;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = 1604753374U;
	int32_t x8 = -1;

	t1 = (x5<=(x6*(x7+x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int16_t x10 = INT16_MAX;
	volatile int64_t x11 = 15670719058621LL;
	volatile int32_t t2 = 0;

	t2 = (x9<=(x10*(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile int32_t t3 = 0;

	t3 = (x13<=(x14*(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 6U;
	volatile int16_t x19 = -1;
	static volatile uint32_t x20 = UINT32_MAX;
	int32_t t4 = -67545;

	t4 = (x17<=(x18*(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -887995562LL;
	uint64_t x23 = 234174LLU;
	int32_t x24 = -3280;

	t5 = (x21<=(x22*(x23+x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x31 = 2950329907746LLU;
	int32_t t6 = 930;

	t6 = (x29<=(x30*(x31+x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = -822269092;
	uint32_t x35 = 13704U;
	volatile int32_t t7 = 28305;

	t7 = (x33<=(x34*(x35+x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -9;
	int32_t x39 = 29016;
	uint16_t x40 = 343U;

	t8 = (x37<=(x38*(x39+x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	uint64_t x46 = 1082340775667LLU;
	int8_t x47 = INT8_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t9 = 26080882;

	t9 = (x45<=(x46*(x47+x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x51 = INT16_MIN;
	volatile int64_t x52 = 829LL;
	int32_t t10 = -1;

	t10 = (x49<=(x50*(x51+x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MAX;
	static uint16_t x54 = UINT16_MAX;
	uint16_t x55 = UINT16_MAX;
	uint64_t x56 = 56LLU;

	t11 = (x53<=(x54*(x55+x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x58 = 3907305U;
	int32_t x60 = -1;
	volatile int32_t t12 = 29;

	t12 = (x57<=(x58*(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MAX;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = 1463300183U;

	t13 = (x61<=(x62*(x63+x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	static uint64_t x66 = 2147927863193039LLU;
	static int8_t x68 = 3;
	volatile int32_t t14 = 2544529;

	t14 = (x65<=(x66*(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	static int16_t x70 = INT16_MIN;
	int32_t t15 = 50;

	t15 = (x69<=(x70*(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -5;
	uint16_t x74 = 5598U;
	int32_t t16 = -504791;

	t16 = (x73<=(x74*(x75+x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 1U;
	uint64_t x79 = 317316099771572LLU;
	uint16_t x80 = 1U;
	int32_t t17 = 129294372;

	t17 = (x77<=(x78*(x79+x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = 1U;
	volatile int8_t x83 = 3;
	int16_t x84 = -1;
	static volatile int32_t t18 = -7;

	t18 = (x81<=(x82*(x83+x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = 28;
	int64_t x87 = 242161615LL;

	t19 = (x85<=(x86*(x87+x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 24LLU;
	static int8_t x91 = -3;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = -407724;

	t20 = (x89<=(x90*(x91+x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x100 = 15942571U;

	t21 = (x97<=(x98*(x99+x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 6243U;
	uint64_t x102 = UINT64_MAX;
	int32_t x103 = 3339;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t22 = 8051;

	t22 = (x101<=(x102*(x103+x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x106 = 3U;
	volatile int8_t x107 = INT8_MIN;
	static volatile int8_t x108 = -1;
	int32_t t23 = 1;

	t23 = (x105<=(x106*(x107+x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MAX;
	volatile int32_t x111 = INT32_MIN;
	int64_t x112 = 14875823LL;
	volatile int32_t t24 = -1708;

	t24 = (x109<=(x110*(x111+x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 3509393139032425LLU;
	int32_t x118 = INT32_MAX;
	int64_t x119 = -469LL;
	int16_t x120 = INT16_MAX;

	t25 = (x117<=(x118*(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x125 = 97;
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = -123639837;
	int64_t x128 = -1LL;
	volatile int32_t t26 = -20098307;

	t26 = (x125<=(x126*(x127+x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x131 = UINT16_MAX;
	volatile uint8_t x132 = UINT8_MAX;
	int32_t t27 = -85213662;

	t27 = (x129<=(x130*(x131+x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x134 = UINT64_MAX;
	volatile int8_t x135 = -1;
	static uint32_t x136 = 13U;

	t28 = (x133<=(x134*(x135+x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MAX;
	uint8_t x138 = 1U;
	int32_t x139 = -1;
	static uint64_t x140 = UINT64_MAX;

	t29 = (x137<=(x138*(x139+x140)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x142 = 1670;
	int64_t x143 = -31LL;
	int32_t t30 = -279408604;

	t30 = (x141<=(x142*(x143+x144)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x165 = 246LL;
	int32_t x166 = -1;
	uint8_t x167 = 53U;
	uint8_t x168 = 1U;

	t31 = (x165<=(x166*(x167+x168)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = 1;
	static uint16_t x171 = 0U;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t32 = 184;

	t32 = (x169<=(x170*(x171+x172)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x173 = INT32_MIN;
	volatile uint64_t x174 = 21LLU;
	int64_t x175 = INT64_MAX;
	static uint64_t x176 = 339654612472966LLU;
	volatile int32_t t33 = -10129657;

	t33 = (x173<=(x174*(x175+x176)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x183 = 7U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t34 = 459095861;

	t34 = (x181<=(x182*(x183+x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MAX;
	uint64_t x188 = UINT64_MAX;
	static int32_t t35 = -565;

	t35 = (x185<=(x186*(x187+x188)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 4U;
	static int64_t x190 = INT64_MIN;
	static uint8_t x191 = 1U;
	uint64_t x192 = 143161694LLU;
	int32_t t36 = 1492;

	t36 = (x189<=(x190*(x191+x192)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = 1;
	int64_t x194 = -1LL;
	int8_t x196 = 1;
	static int32_t t37 = 0;

	t37 = (x193<=(x194*(x195+x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 5760U;
	static uint32_t x198 = UINT32_MAX;
	static uint32_t x199 = 1U;
	volatile int64_t x200 = -1LL;
	int32_t t38 = 67020774;

	t38 = (x197<=(x198*(x199+x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t t39 = 411;

	t39 = (x213<=(x214*(x215+x216)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x217 = INT32_MAX;
	int32_t x218 = -24;
	uint16_t x219 = UINT16_MAX;

	t40 = (x217<=(x218*(x219+x220)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x222 = 89U;
	int16_t x223 = -15;
	int64_t x224 = 34741392240LL;
	static volatile int32_t t41 = 9779779;

	t41 = (x221<=(x222*(x223+x224)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = -17;
	int16_t x226 = INT16_MAX;
	uint64_t x227 = UINT64_MAX;
	static int8_t x228 = 0;
	volatile int32_t t42 = 147469908;

	t42 = (x225<=(x226*(x227+x228)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = INT16_MIN;
	volatile int16_t x230 = -1;
	static uint64_t x231 = 1466LLU;
	static uint64_t x232 = 6LLU;
	static int32_t t43 = 686372854;

	t43 = (x229<=(x230*(x231+x232)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x233 = -49;
	int8_t x235 = INT8_MIN;
	volatile int32_t t44 = -108723410;

	t44 = (x233<=(x234*(x235+x236)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	int32_t x239 = -1;
	uint16_t x240 = 177U;
	int32_t t45 = 0;

	t45 = (x237<=(x238*(x239+x240)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x242 = 23020LL;
	uint8_t x244 = 5U;

	t46 = (x241<=(x242*(x243+x244)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x246 = 100U;
	int16_t x247 = 1;

	t47 = (x245<=(x246*(x247+x248)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x249 = 3U;
	uint8_t x250 = 12U;
	volatile int32_t x251 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t48 = 43430016;

	t48 = (x249<=(x250*(x251+x252)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x255 = 0U;
	uint8_t x256 = 1U;
	int32_t t49 = 495;

	t49 = (x253<=(x254*(x255+x256)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = INT32_MAX;
	volatile int8_t x259 = -15;

	t50 = (x257<=(x258*(x259+x260)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static volatile uint32_t x263 = 18476U;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t51 = -2;

	t51 = (x261<=(x262*(x263+x264)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x266 = -1;
	static uint64_t x268 = 3874LLU;
	volatile int32_t t52 = -174436;

	t52 = (x265<=(x266*(x267+x268)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = 3;
	int32_t x270 = -2764;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = -1;
	int32_t t53 = 1376264;

	t53 = (x269<=(x270*(x271+x272)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x277 = 15172968143212LL;
	static int16_t x278 = -5073;
	int8_t x279 = INT8_MIN;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t54 = 104549928;

	t54 = (x277<=(x278*(x279+x280)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x289 = -1;
	static int16_t x291 = -6;
	volatile uint8_t x292 = 5U;

	t55 = (x289<=(x290*(x291+x292)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x297 = 0U;
	int64_t x298 = 57270LL;
	uint64_t x299 = 232095594863710240LLU;
	uint16_t x300 = 68U;
	volatile int32_t t56 = -3;

	t56 = (x297<=(x298*(x299+x300)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x305 = 411U;
	static int16_t x306 = INT16_MIN;
	volatile int16_t x307 = INT16_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t57 = 967;

	t57 = (x305<=(x306*(x307+x308)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = INT8_MAX;
	static uint64_t x311 = 105LLU;
	int32_t x312 = INT32_MIN;
	volatile int32_t t58 = -27035377;

	t58 = (x309<=(x310*(x311+x312)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x313 = 795U;
	int16_t x314 = INT16_MAX;
	static int16_t x315 = INT16_MIN;
	uint16_t x316 = 6476U;
	static int32_t t59 = 33602439;

	t59 = (x313<=(x314*(x315+x316)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x322 = 0;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = 28U;
	int32_t t60 = 0;

	t60 = (x321<=(x322*(x323+x324)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x325 = INT16_MAX;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = -26;
	int16_t x328 = 7798;
	int32_t t61 = -449819;

	t61 = (x325<=(x326*(x327+x328)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x341 = 1;
	volatile uint64_t x342 = UINT64_MAX;
	int16_t x343 = INT16_MAX;
	int64_t x344 = -255LL;

	t62 = (x341<=(x342*(x343+x344)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x353 = INT8_MAX;
	static volatile int64_t x354 = -394LL;

	t63 = (x353<=(x354*(x355+x356)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x357 = UINT32_MAX;
	uint64_t x358 = 8494065LLU;
	volatile uint32_t x359 = 1956395U;
	int16_t x360 = -1;

	t64 = (x357<=(x358*(x359+x360)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x361 = 0;
	volatile int64_t x362 = -103LL;
	static uint64_t x363 = UINT64_MAX;
	int32_t x364 = -1;
	volatile int32_t t65 = -58865589;

	t65 = (x361<=(x362*(x363+x364)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x366 = -1;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t66 = -49;

	t66 = (x365<=(x366*(x367+x368)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	int8_t x374 = INT8_MIN;
	static int64_t x375 = -770552618LL;
	uint16_t x376 = UINT16_MAX;
	int32_t t67 = 59384;

	t67 = (x373<=(x374*(x375+x376)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x381 = UINT32_MAX;
	volatile int32_t x382 = INT32_MAX;
	uint32_t x383 = 381U;
	static volatile int32_t t68 = -3870895;

	t68 = (x381<=(x382*(x383+x384)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x385 = -953503128;
	int32_t x386 = INT32_MIN;
	int16_t x387 = 3;
	static uint32_t x388 = UINT32_MAX;

	t69 = (x385<=(x386*(x387+x388)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x389 = -1LL;
	volatile uint16_t x390 = UINT16_MAX;
	static int16_t x391 = 0;
	int32_t t70 = -63625;

	t70 = (x389<=(x390*(x391+x392)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = INT8_MAX;
	int64_t x395 = -1LL;
	int32_t x396 = 147;
	int32_t t71 = 16;

	t71 = (x393<=(x394*(x395+x396)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x405 = 0;
	int8_t x406 = 1;
	static int32_t x407 = INT32_MIN;
	int32_t t72 = -1412;

	t72 = (x405<=(x406*(x407+x408)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x411 = 1778111491735093244LLU;
	uint8_t x412 = 81U;

	t73 = (x409<=(x410*(x411+x412)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x414 = -1;
	int8_t x416 = INT8_MIN;

	t74 = (x413<=(x414*(x415+x416)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x417 = -1;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = UINT64_MAX;
	static uint16_t x420 = 7U;
	volatile int32_t t75 = 1;

	t75 = (x417<=(x418*(x419+x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = 73;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t76 = 218868;

	t76 = (x421<=(x422*(x423+x424)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -1;
	volatile uint8_t x426 = 0U;
	int16_t x427 = INT16_MAX;
	static int64_t x428 = 203559399876LL;
	volatile int32_t t77 = -25948;

	t77 = (x425<=(x426*(x427+x428)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x429 = -7;
	uint8_t x431 = 2U;
	uint32_t x432 = 993U;
	int32_t t78 = 57;

	t78 = (x429<=(x430*(x431+x432)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x433 = INT32_MAX;
	volatile uint64_t x434 = 780138508071LLU;
	static uint16_t x435 = 1861U;
	volatile uint16_t x436 = 3U;
	static volatile int32_t t79 = 2;

	t79 = (x433<=(x434*(x435+x436)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = -6;
	int8_t x438 = -1;
	int32_t x439 = INT32_MIN;
	uint16_t x440 = 4401U;
	static int32_t t80 = 2;

	t80 = (x437<=(x438*(x439+x440)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x446 = 858985716129097LLU;
	volatile int16_t x448 = INT16_MIN;
	static int32_t t81 = -28242;

	t81 = (x445<=(x446*(x447+x448)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x449 = 1;
	volatile int64_t x450 = 106283191180LL;
	int8_t x451 = INT8_MIN;
	int32_t t82 = -6546622;

	t82 = (x449<=(x450*(x451+x452)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x454 = UINT64_MAX;
	int16_t x455 = -1088;
	int16_t x456 = INT16_MIN;
	int32_t t83 = 5850;

	t83 = (x453<=(x454*(x455+x456)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x465 = -23;
	int64_t x466 = -1LL;
	int16_t x467 = 121;

	t84 = (x465<=(x466*(x467+x468)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x469 = -1LL;
	static volatile int64_t x470 = -6LL;
	uint32_t x471 = UINT32_MAX;
	int32_t t85 = -49002321;

	t85 = (x469<=(x470*(x471+x472)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x473 = -120731479;
	uint64_t x474 = 23784862218396405LLU;
	static int8_t x475 = INT8_MIN;

	t86 = (x473<=(x474*(x475+x476)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x478 = -1;
	int16_t x479 = 12;
	volatile int16_t x480 = -1;
	volatile int32_t t87 = 1;

	t87 = (x477<=(x478*(x479+x480)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x485 = 2787U;
	int8_t x487 = 0;
	uint32_t x488 = 1043U;
	static volatile int32_t t88 = 3;

	t88 = (x485<=(x486*(x487+x488)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x489 = 1211U;
	uint16_t x490 = 12U;
	static volatile uint64_t x491 = 16774LLU;
	static int32_t x492 = 17;

	t89 = (x489<=(x490*(x491+x492)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x493 = INT16_MIN;
	int64_t x495 = -1LL;
	volatile int32_t t90 = 32587682;

	t90 = (x493<=(x494*(x495+x496)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x497 = -1;
	static int64_t x498 = INT64_MAX;
	int32_t x499 = INT32_MIN;
	uint64_t x500 = 3177763531301389609LLU;

	t91 = (x497<=(x498*(x499+x500)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x501 = 1U;
	int32_t x502 = INT32_MIN;
	int16_t x503 = INT16_MAX;
	int64_t x504 = 9LL;
	int32_t t92 = -4260742;

	t92 = (x501<=(x502*(x503+x504)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x505 = -10;
	volatile int8_t x506 = -1;
	int16_t x507 = 1;
	static volatile int16_t x508 = -1;
	volatile int32_t t93 = -1410239;

	t93 = (x505<=(x506*(x507+x508)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x529 = INT32_MAX;
	int16_t x530 = INT16_MIN;
	static volatile int8_t x531 = -25;
	static uint8_t x532 = 24U;
	int32_t t94 = -3;

	t94 = (x529<=(x530*(x531+x532)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x533 = INT64_MIN;
	uint8_t x534 = 0U;
	uint8_t x535 = 14U;
	int64_t x536 = 995693LL;
	volatile int32_t t95 = 3973;

	t95 = (x533<=(x534*(x535+x536)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x537 = INT32_MIN;
	volatile uint64_t x538 = 7339234407155991139LLU;
	int32_t x539 = INT32_MIN;
	static uint16_t x540 = 0U;
	volatile int32_t t96 = 43;

	t96 = (x537<=(x538*(x539+x540)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x545 = INT8_MAX;
	uint16_t x546 = 14U;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = INT8_MIN;
	volatile int32_t t97 = 42016;

	t97 = (x545<=(x546*(x547+x548)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x549 = 63206523139573843LLU;
	static volatile uint16_t x550 = 22405U;
	static int32_t t98 = -5;

	t98 = (x549<=(x550*(x551+x552)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x561 = 3824;
	int16_t x562 = 47;
	volatile int8_t x564 = INT8_MIN;

	t99 = (x561<=(x562*(x563+x564)));

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

