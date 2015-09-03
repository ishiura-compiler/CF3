#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
static int32_t t0 = 9273;
int32_t x6 = 109970;
int16_t x12 = 2441;
int32_t x19 = -1;
static uint32_t x24 = 117U;
static uint32_t x25 = 1U;
int32_t x30 = INT32_MIN;
volatile int8_t x37 = INT8_MIN;
static int64_t x38 = INT64_MAX;
int16_t x46 = INT16_MAX;
int32_t t10 = 1;
uint16_t x56 = UINT16_MAX;
int64_t x58 = INT64_MIN;
int32_t t12 = -485;
volatile int32_t t13 = -79429;
int32_t t14 = -26886;
static int32_t x69 = INT32_MIN;
volatile uint32_t x71 = UINT32_MAX;
volatile int8_t x73 = -1;
int8_t x84 = INT8_MIN;
static volatile uint16_t x104 = UINT16_MAX;
int32_t x106 = 2472618;
static volatile int32_t t21 = -417557873;
volatile int64_t x117 = INT64_MIN;
int64_t x137 = INT64_MAX;
int32_t x138 = -335413236;
int64_t x153 = 13344LL;
volatile int32_t x156 = INT32_MIN;
volatile int16_t x160 = INT16_MIN;
static uint64_t x181 = 3LLU;
int16_t x188 = -1;
volatile int32_t t29 = -51277642;
int8_t x195 = -1;
uint8_t x198 = UINT8_MAX;
static volatile int32_t t32 = 5530;
int16_t x206 = INT16_MIN;
int32_t x215 = -1;
volatile int8_t x224 = 1;
static volatile int32_t t36 = 0;
int16_t x244 = 6869;
uint32_t x245 = 1U;
int16_t x254 = -1;
static volatile int16_t x256 = INT16_MAX;
int32_t t43 = 9776;
int8_t x275 = -1;
volatile uint32_t x287 = UINT32_MAX;
int32_t x289 = INT32_MIN;
uint16_t x290 = 3026U;
int16_t x292 = INT16_MIN;
uint8_t x295 = 21U;
int32_t t51 = 0;
uint16_t x298 = UINT16_MAX;
int16_t x299 = INT16_MIN;
int8_t x300 = 59;
volatile int32_t t52 = -19465;
static int32_t t53 = -1010;
static volatile int8_t x314 = INT8_MAX;
volatile uint8_t x323 = 1U;
int16_t x326 = -1;
volatile int8_t x327 = INT8_MAX;
int32_t t58 = -93531966;
static int8_t x340 = -1;
static int32_t x342 = INT32_MIN;
int32_t t62 = 259046743;
volatile int64_t x350 = INT64_MAX;
volatile int32_t t64 = 275457;
uint64_t x360 = 1216059LLU;
volatile uint16_t x363 = UINT16_MAX;
volatile int64_t x373 = INT64_MAX;
static uint32_t x376 = UINT32_MAX;
volatile int32_t t68 = -55256477;
static int32_t x401 = INT32_MAX;
int64_t x408 = -1LL;
uint8_t x409 = 1U;
static uint8_t x411 = 124U;
int8_t x412 = INT8_MAX;
int64_t x417 = INT64_MAX;
int32_t t73 = 437965;
int64_t x422 = 3404566268986644LL;
volatile uint16_t x424 = UINT16_MAX;
int16_t x427 = -1;
uint8_t x434 = UINT8_MAX;
static volatile int32_t t77 = -225494;
int16_t x450 = INT16_MIN;
int32_t t78 = -1749438;
int64_t x453 = -1LL;
int16_t x456 = INT16_MAX;
int32_t t80 = 8002987;
volatile int64_t x479 = -1LL;
uint16_t x486 = 6995U;
int32_t t87 = 19235;
static volatile int32_t t88 = 69850;
static volatile int8_t x513 = -1;
int8_t x525 = 1;
volatile int32_t t92 = -26659;
int64_t x530 = 4484560LL;
int32_t t93 = -28;
uint16_t x534 = 2U;
static volatile int8_t x536 = 4;
uint32_t x541 = 225766379U;
uint16_t x550 = UINT16_MAX;
static volatile int32_t x553 = INT32_MIN;
int64_t x554 = -6LL;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	uint64_t x3 = 436LLU;
	volatile uint8_t x4 = 2U;

	t0 = (x1<=(x2==(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int32_t x7 = 661;
	int32_t x8 = -120;
	int32_t t1 = 194183;

	t1 = (x5<=(x6==(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 2LLU;
	int16_t x10 = -1004;
	uint8_t x11 = 1U;
	int32_t t2 = 3;

	t2 = (x9<=(x10==(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = 2;
	static volatile int32_t t3 = -27287;

	t3 = (x13<=(x14==(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	static volatile int16_t x18 = INT16_MIN;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = 205;

	t4 = (x17<=(x18==(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x22 = -1;
	static volatile int32_t x23 = INT32_MIN;
	volatile int32_t t5 = -98481659;

	t5 = (x21<=(x22==(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 5U;
	int8_t x28 = -1;
	volatile int32_t t6 = 11833;

	t6 = (x25<=(x26==(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -256749;
	uint64_t x31 = 5151117873766307606LLU;
	static uint32_t x32 = UINT32_MAX;
	static volatile int32_t t7 = -2843554;

	t7 = (x29<=(x30==(x31*x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = 10158;
	int64_t x40 = -513906544LL;
	int32_t t8 = 0;

	t8 = (x37<=(x38==(x39*x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MAX;
	static int16_t x43 = 0;
	volatile int16_t x44 = INT16_MAX;
	int32_t t9 = 11336;

	t9 = (x41<=(x42==(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = UINT8_MAX;
	static volatile uint64_t x47 = 632766955LLU;
	uint16_t x48 = 12766U;

	t10 = (x45<=(x46==(x47*x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = 152;
	static volatile int16_t x54 = 1019;
	static int16_t x55 = 50;
	int32_t t11 = -2;

	t11 = (x53<=(x54==(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = 3700;
	uint32_t x59 = 0U;
	uint64_t x60 = 14439783765848250LLU;

	t12 = (x57<=(x58==(x59*x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MAX;
	volatile int8_t x62 = INT8_MIN;
	uint16_t x63 = 192U;
	volatile uint32_t x64 = 41997U;

	t13 = (x61<=(x62==(x63*x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	int8_t x68 = -7;

	t14 = (x65<=(x66==(x67*x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x70 = 6;
	static uint8_t x72 = 1U;
	volatile int32_t t15 = 813436468;

	t15 = (x69<=(x70==(x71*x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = -13;
	static volatile int64_t x75 = 143144642684444LL;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t16 = 2052;

	t16 = (x73<=(x74==(x75*x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	int8_t x83 = -6;
	volatile int32_t t17 = -136087;

	t17 = (x81<=(x82==(x83*x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x89 = 0LLU;
	volatile int32_t x90 = INT32_MIN;
	static int16_t x91 = 188;
	uint16_t x92 = 7892U;
	volatile int32_t t18 = 88708;

	t18 = (x89<=(x90==(x91*x92)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = -1LL;
	uint64_t x102 = 122LLU;
	volatile int16_t x103 = INT16_MIN;
	volatile int32_t t19 = 1;

	t19 = (x101<=(x102==(x103*x104)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x105 = 2754U;
	uint64_t x107 = 77229649686LLU;
	static uint16_t x108 = UINT16_MAX;
	static volatile int32_t t20 = -533;

	t20 = (x105<=(x106==(x107*x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MAX;
	static uint64_t x110 = 2LLU;
	int16_t x111 = INT16_MIN;
	volatile int8_t x112 = INT8_MAX;

	t21 = (x109<=(x110==(x111*x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x118 = 18421909;
	int64_t x119 = 864444784648LL;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t22 = -54883346;

	t22 = (x117<=(x118==(x119*x120)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x133 = -43283429100LL;
	int16_t x134 = -1;
	static int64_t x135 = INT64_MIN;
	volatile int16_t x136 = 0;
	int32_t t23 = 2;

	t23 = (x133<=(x134==(x135*x136)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x139 = INT16_MAX;
	int8_t x140 = -1;
	volatile int32_t t24 = 71055;

	t24 = (x137<=(x138==(x139*x140)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x154 = 39;
	int16_t x155 = 1;
	int32_t t25 = -1025480;

	t25 = (x153<=(x154==(x155*x156)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x157 = 61668U;
	int64_t x158 = -183705778753224LL;
	uint8_t x159 = UINT8_MAX;
	int32_t t26 = -232959549;

	t26 = (x157<=(x158==(x159*x160)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = 60U;
	uint32_t x171 = 18504U;
	uint8_t x172 = 12U;
	int32_t t27 = -5002;

	t27 = (x169<=(x170==(x171*x172)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x182 = 4;
	static uint32_t x183 = 0U;
	int8_t x184 = INT8_MAX;
	volatile int32_t t28 = -1164237;

	t28 = (x181<=(x182==(x183*x184)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x185 = INT16_MAX;
	uint64_t x186 = 1662735584476LLU;
	int64_t x187 = 504LL;

	t29 = (x185<=(x186==(x187*x188)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 38LLU;
	uint8_t x192 = 0U;
	volatile int32_t t30 = 337358;

	t30 = (x189<=(x190==(x191*x192)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x193 = INT32_MAX;
	static uint8_t x194 = 0U;
	static uint16_t x196 = UINT16_MAX;
	static volatile int32_t t31 = 2818;

	t31 = (x193<=(x194==(x195*x196)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = -1;
	static int8_t x199 = -1;
	uint16_t x200 = 9409U;

	t32 = (x197<=(x198==(x199*x200)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x205 = 11U;
	int8_t x207 = 0;
	uint64_t x208 = 5548954727437277LLU;
	static volatile int32_t t33 = 390022;

	t33 = (x205<=(x206==(x207*x208)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x213 = INT16_MIN;
	static int16_t x214 = INT16_MAX;
	uint8_t x216 = 0U;
	int32_t t34 = -466003;

	t34 = (x213<=(x214==(x215*x216)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x217 = -1LL;
	int32_t x218 = INT32_MIN;
	int8_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	int32_t t35 = 1;

	t35 = (x217<=(x218==(x219*x220)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x221 = INT32_MAX;
	static int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;

	t36 = (x221<=(x222==(x223*x224)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x225 = INT16_MIN;
	static int8_t x226 = INT8_MAX;
	int32_t x227 = -40220696;
	uint16_t x228 = 1U;
	int32_t t37 = 31222;

	t37 = (x225<=(x226==(x227*x228)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x229 = 13585;
	static volatile uint32_t x230 = 14U;
	uint16_t x231 = 3013U;
	static uint64_t x232 = 65405805409347LLU;
	volatile int32_t t38 = 59080406;

	t38 = (x229<=(x230==(x231*x232)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MAX;
	int8_t x239 = INT8_MIN;
	volatile uint8_t x240 = 99U;
	int32_t t39 = -2429;

	t39 = (x237<=(x238==(x239*x240)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x241 = 34581U;
	int16_t x242 = 174;
	int16_t x243 = INT16_MIN;
	int32_t t40 = -79504957;

	t40 = (x241<=(x242==(x243*x244)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x246 = INT16_MIN;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = -1;
	int32_t t41 = 3;

	t41 = (x245<=(x246==(x247*x248)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x253 = INT64_MIN;
	int32_t x255 = -1;
	int32_t t42 = 1;

	t42 = (x253<=(x254==(x255*x256)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x257 = 675789U;
	volatile int64_t x258 = -1LL;
	int16_t x259 = 3152;
	int16_t x260 = INT16_MAX;

	t43 = (x257<=(x258==(x259*x260)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x261 = 83U;
	uint16_t x262 = UINT16_MAX;
	static int32_t x263 = -4819;
	static int64_t x264 = 45382LL;
	volatile int32_t t44 = 258;

	t44 = (x261<=(x262==(x263*x264)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x265 = INT32_MIN;
	int16_t x266 = 17;
	uint64_t x267 = 1964043849186640014LLU;
	static uint8_t x268 = 31U;
	int32_t t45 = -1630;

	t45 = (x265<=(x266==(x267*x268)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x269 = INT32_MAX;
	volatile int8_t x270 = -1;
	int64_t x271 = -119739263016LL;
	int32_t x272 = -1012;
	int32_t t46 = 6059;

	t46 = (x269<=(x270==(x271*x272)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x273 = -1LL;
	static volatile int32_t x274 = -1;
	volatile uint16_t x276 = 1128U;
	int32_t t47 = 7;

	t47 = (x273<=(x274==(x275*x276)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x277 = 9U;
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	volatile uint8_t x280 = 50U;
	int32_t t48 = 57954400;

	t48 = (x277<=(x278==(x279*x280)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x285 = INT64_MAX;
	volatile int32_t x286 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t49 = 11;

	t49 = (x285<=(x286==(x287*x288)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x291 = 42U;
	static int32_t t50 = 215;

	t50 = (x289<=(x290==(x291*x292)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = 849833978292LLU;
	volatile uint8_t x296 = 0U;

	t51 = (x293<=(x294==(x295*x296)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x297 = INT64_MAX;

	t52 = (x297<=(x298==(x299*x300)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x305 = -176756611LL;
	static int64_t x306 = INT64_MIN;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = 0;

	t53 = (x305<=(x306==(x307*x308)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	int32_t x311 = 64044859;
	uint64_t x312 = 24966973LLU;
	int32_t t54 = 28732;

	t54 = (x309<=(x310==(x311*x312)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x313 = INT64_MAX;
	volatile int32_t x315 = -11397906;
	volatile int8_t x316 = INT8_MIN;
	int32_t t55 = 299;

	t55 = (x313<=(x314==(x315*x316)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x317 = 0U;
	int64_t x318 = -1063LL;
	volatile int64_t x319 = 188922391300LL;
	int16_t x320 = INT16_MAX;
	volatile int32_t t56 = -14237001;

	t56 = (x317<=(x318==(x319*x320)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = 10;
	int32_t x324 = 12250823;
	int32_t t57 = -17;

	t57 = (x321<=(x322==(x323*x324)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = INT64_MIN;
	static volatile int16_t x328 = 28;

	t58 = (x325<=(x326==(x327*x328)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 2791U;
	static int16_t x331 = -1;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t59 = 1322994;

	t59 = (x329<=(x330==(x331*x332)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x334 = 10363U;
	uint32_t x335 = 94266U;
	volatile uint64_t x336 = 17790888800489LLU;
	volatile int32_t t60 = -4;

	t60 = (x333<=(x334==(x335*x336)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x337 = 217U;
	uint16_t x338 = 0U;
	int64_t x339 = -443299LL;
	volatile int32_t t61 = 411657202;

	t61 = (x337<=(x338==(x339*x340)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x343 = INT64_MIN;
	int16_t x344 = 1;

	t62 = (x341<=(x342==(x343*x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t63 = -9776;

	t63 = (x345<=(x346==(x347*x348)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = -11;
	int32_t x351 = INT32_MIN;
	int64_t x352 = -1LL;

	t64 = (x349<=(x350==(x351*x352)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x357 = INT8_MIN;
	static volatile uint8_t x358 = 1U;
	int32_t x359 = INT32_MIN;
	volatile int32_t t65 = 26;

	t65 = (x357<=(x358==(x359*x360)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = -1LL;
	int8_t x362 = 30;
	int8_t x364 = -1;
	int32_t t66 = -96;

	t66 = (x361<=(x362==(x363*x364)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x374 = 117U;
	int8_t x375 = INT8_MIN;
	int32_t t67 = 19657079;

	t67 = (x373<=(x374==(x375*x376)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x377 = 12118U;
	uint8_t x378 = 2U;
	static int16_t x379 = INT16_MIN;
	uint32_t x380 = 64U;

	t68 = (x377<=(x378==(x379*x380)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x397 = -21477LL;
	static int8_t x398 = INT8_MAX;
	volatile int32_t x399 = 110;
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t69 = 2397;

	t69 = (x397<=(x398==(x399*x400)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x402 = INT64_MAX;
	int16_t x403 = 245;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t70 = -372639116;

	t70 = (x401<=(x402==(x403*x404)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = INT64_MIN;
	volatile uint16_t x406 = 205U;
	static int32_t x407 = INT32_MIN;
	volatile int32_t t71 = 4009;

	t71 = (x405<=(x406==(x407*x408)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x410 = UINT64_MAX;
	int32_t t72 = -63;

	t72 = (x409<=(x410==(x411*x412)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x418 = 1;
	int64_t x419 = -1LL;
	int32_t x420 = INT32_MIN;

	t73 = (x417<=(x418==(x419*x420)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x421 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	volatile int32_t t74 = -25239;

	t74 = (x421<=(x422==(x423*x424)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x425 = 12;
	uint8_t x426 = UINT8_MAX;
	uint64_t x428 = 60522727LLU;
	int32_t t75 = 5;

	t75 = (x425<=(x426==(x427*x428)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x433 = 5920407927198694086LLU;
	volatile uint32_t x435 = 1U;
	uint16_t x436 = 2306U;
	volatile int32_t t76 = -16030;

	t76 = (x433<=(x434==(x435*x436)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x441 = 60;
	static int16_t x442 = -6;
	static volatile int8_t x443 = INT8_MIN;
	uint64_t x444 = 947789086695486LLU;

	t77 = (x441<=(x442==(x443*x444)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x449 = -1;
	static uint8_t x451 = 10U;
	static uint32_t x452 = UINT32_MAX;

	t78 = (x449<=(x450==(x451*x452)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x454 = 6;
	static uint32_t x455 = UINT32_MAX;
	static volatile int32_t t79 = 147989;

	t79 = (x453<=(x454==(x455*x456)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x457 = -14;
	volatile uint8_t x458 = UINT8_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	int64_t x460 = -1LL;

	t80 = (x457<=(x458==(x459*x460)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x461 = INT32_MIN;
	int64_t x462 = INT64_MIN;
	int16_t x463 = -5550;
	int8_t x464 = 1;
	int32_t t81 = -2967;

	t81 = (x461<=(x462==(x463*x464)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x465 = 1U;
	volatile uint32_t x466 = 37U;
	int16_t x467 = -1;
	int8_t x468 = INT8_MAX;
	int32_t t82 = -3947462;

	t82 = (x465<=(x466==(x467*x468)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = INT8_MAX;
	int8_t x470 = -1;
	volatile int8_t x471 = INT8_MIN;
	static uint32_t x472 = UINT32_MAX;
	static volatile int32_t t83 = 97;

	t83 = (x469<=(x470==(x471*x472)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x477 = 1290;
	uint8_t x478 = 23U;
	int32_t x480 = INT32_MIN;
	volatile int32_t t84 = 29521;

	t84 = (x477<=(x478==(x479*x480)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x485 = INT32_MIN;
	int32_t x487 = -1;
	int32_t x488 = -60556993;
	volatile int32_t t85 = -89140;

	t85 = (x485<=(x486==(x487*x488)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x489 = UINT32_MAX;
	volatile int64_t x490 = INT64_MIN;
	static uint16_t x491 = 208U;
	static volatile int16_t x492 = -1;
	static int32_t t86 = 1;

	t86 = (x489<=(x490==(x491*x492)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x493 = UINT8_MAX;
	int64_t x494 = -1LL;
	static int32_t x495 = INT32_MAX;
	uint32_t x496 = 1983U;

	t87 = (x493<=(x494==(x495*x496)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x505 = 3501;
	uint8_t x506 = UINT8_MAX;
	static int64_t x507 = 63174071LL;
	volatile uint32_t x508 = UINT32_MAX;

	t88 = (x505<=(x506==(x507*x508)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x509 = 6570118;
	int8_t x510 = INT8_MAX;
	uint64_t x511 = 384915593LLU;
	static uint32_t x512 = 84608067U;
	int32_t t89 = 16436630;

	t89 = (x509<=(x510==(x511*x512)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x514 = INT16_MAX;
	uint8_t x515 = 3U;
	static volatile int16_t x516 = INT16_MAX;
	volatile int32_t t90 = -6527;

	t90 = (x513<=(x514==(x515*x516)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x521 = -1;
	uint8_t x522 = 17U;
	static uint32_t x523 = 1U;
	uint64_t x524 = UINT64_MAX;
	volatile int32_t t91 = -800248;

	t91 = (x521<=(x522==(x523*x524)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x526 = INT16_MIN;
	uint16_t x527 = 26005U;
	uint16_t x528 = 18611U;

	t92 = (x525<=(x526==(x527*x528)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x529 = -1;
	volatile int32_t x531 = -1;
	volatile int32_t x532 = -1;

	t93 = (x529<=(x530==(x531*x532)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x533 = -1;
	uint32_t x535 = 221978983U;
	volatile int32_t t94 = 1054688822;

	t94 = (x533<=(x534==(x535*x536)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x542 = INT64_MIN;
	uint16_t x543 = 21193U;
	int16_t x544 = 0;
	int32_t t95 = 800113;

	t95 = (x541<=(x542==(x543*x544)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x545 = INT8_MAX;
	int8_t x546 = INT8_MIN;
	int16_t x547 = 19;
	static int8_t x548 = INT8_MIN;
	volatile int32_t t96 = -56546270;

	t96 = (x545<=(x546==(x547*x548)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x549 = INT64_MIN;
	volatile int64_t x551 = -1LL;
	int64_t x552 = 119757538LL;
	volatile int32_t t97 = 391;

	t97 = (x549<=(x550==(x551*x552)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x555 = UINT16_MAX;
	uint32_t x556 = 690313U;
	int32_t t98 = -449335;

	t98 = (x553<=(x554==(x555*x556)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x557 = INT16_MAX;
	volatile int8_t x558 = 0;
	static uint8_t x559 = 89U;
	volatile int32_t x560 = -1217992;
	volatile int32_t t99 = 0;

	t99 = (x557<=(x558==(x559*x560)));

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

