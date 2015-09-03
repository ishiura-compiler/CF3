#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = -1LL;
uint16_t x13 = 0U;
int16_t x17 = INT16_MIN;
static volatile uint64_t x20 = 61LLU;
int32_t x21 = INT32_MAX;
uint16_t x22 = 559U;
static volatile int16_t x25 = INT16_MAX;
int64_t x28 = 107982447258LL;
volatile int8_t x31 = -1;
static uint32_t x33 = UINT32_MAX;
int8_t x35 = INT8_MIN;
static int32_t x36 = 831870;
volatile int16_t x38 = -2;
volatile int16_t x43 = INT16_MIN;
volatile int32_t t10 = -1;
uint16_t x61 = 9526U;
int32_t x62 = 141283;
int32_t t12 = 14278;
uint8_t x71 = UINT8_MAX;
static int16_t x72 = INT16_MIN;
uint8_t x80 = UINT8_MAX;
int32_t t15 = 181822548;
static int32_t x82 = -75;
uint16_t x92 = 14010U;
uint8_t x99 = UINT8_MAX;
volatile int32_t t20 = 18184;
volatile int32_t t21 = 1;
int64_t x132 = INT64_MAX;
uint8_t x135 = 58U;
uint16_t x136 = 1630U;
int32_t x141 = -1;
int64_t x143 = -1LL;
int32_t t25 = -3;
int32_t t26 = -716128;
uint16_t x154 = 5870U;
int8_t x163 = -1;
int32_t t28 = -32;
volatile int32_t t30 = 16249;
int8_t x193 = INT8_MIN;
static int64_t x196 = INT64_MIN;
int32_t t36 = 5400;
int32_t x206 = 62756;
static int32_t t38 = 1868825;
int64_t x216 = -19226LL;
uint8_t x218 = 23U;
int16_t x219 = INT16_MIN;
volatile uint32_t x221 = 1590U;
int8_t x233 = 17;
int16_t x237 = INT16_MIN;
uint8_t x247 = UINT8_MAX;
volatile int32_t t47 = 764;
volatile int8_t x266 = 6;
uint8_t x315 = 1U;
uint64_t x316 = UINT64_MAX;
int16_t x322 = 14615;
int32_t t60 = 91159176;
int64_t x333 = 21018086LL;
int16_t x334 = 3;
static int16_t x347 = INT16_MAX;
volatile int16_t x356 = -3;
volatile int32_t x357 = 1;
volatile int64_t x360 = -798279026656LL;
static volatile int32_t t66 = 19303655;
static int32_t x366 = -1;
static int32_t t69 = -615;
int32_t x373 = INT32_MAX;
volatile uint16_t x374 = 6U;
int32_t t71 = 13264;
static uint32_t x391 = 1U;
volatile int64_t x401 = -1LL;
volatile uint8_t x403 = 5U;
int64_t x409 = -1LL;
uint64_t x412 = UINT64_MAX;
volatile int32_t t77 = 0;
volatile int16_t x415 = -1;
int32_t t79 = -1347093;
uint32_t x422 = 194452U;
int64_t x423 = -1LL;
static int32_t x424 = -145;
volatile int32_t t81 = 1625;
static int32_t x439 = -121;
int32_t x441 = INT32_MAX;
static uint8_t x444 = 19U;
int32_t t84 = -30981687;
volatile uint16_t x454 = 14706U;
uint64_t x455 = UINT64_MAX;
int8_t x461 = INT8_MIN;
volatile uint64_t x470 = UINT64_MAX;
static uint8_t x475 = 2U;
volatile uint16_t x476 = 7877U;
uint64_t x479 = 1573081LLU;
int8_t x494 = INT8_MIN;
uint8_t x495 = UINT8_MAX;
int16_t x500 = 916;


void f0(void) {
	int64_t x1 = 20762963968LL;
	uint16_t x2 = 2542U;
	volatile uint8_t x3 = 1U;
	volatile uint16_t x4 = 7U;
	int32_t t0 = -69901588;

	t0 = (x1<=(x2^(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x10 = INT8_MIN;
	volatile uint8_t x11 = UINT8_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t1 = -7265008;

	t1 = (x9<=(x10^(x11*x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = -26;
	int8_t x16 = INT8_MAX;
	int32_t t2 = 819555136;

	t2 = (x13<=(x14^(x15*x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = INT16_MIN;
	static uint16_t x19 = UINT16_MAX;
	volatile int32_t t3 = -866;

	t3 = (x17<=(x18^(x19*x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	int32_t t4 = -4474193;

	t4 = (x21<=(x22^(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -13;
	int8_t x27 = -24;
	volatile int32_t t5 = 101672642;

	t5 = (x25<=(x26^(x27*x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -15;
	static int64_t x30 = INT64_MIN;
	static int64_t x32 = INT64_MAX;
	static volatile int32_t t6 = -6;

	t6 = (x29<=(x30^(x31*x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MAX;
	int32_t t7 = 990661;

	t7 = (x33<=(x34^(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 178329893976689046LL;
	uint64_t x39 = 1LLU;
	int32_t x40 = -1;
	volatile int32_t t8 = -191920756;

	t8 = (x37<=(x38^(x39*x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = -1;
	static uint32_t x42 = 825U;
	static uint16_t x44 = 0U;
	volatile int32_t t9 = -7386523;

	t9 = (x41<=(x42^(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MAX;
	static int32_t x51 = -54062;
	int64_t x52 = 165995LL;

	t10 = (x49<=(x50^(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 3587582U;
	static int32_t x55 = -693;
	static int8_t x56 = INT8_MIN;
	int32_t t11 = -10;

	t11 = (x53<=(x54^(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = 247LL;

	t12 = (x61<=(x62^(x63*x64)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -1;
	int32_t x70 = -19049357;
	volatile int32_t t13 = -5312442;

	t13 = (x69<=(x70^(x71*x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	volatile uint32_t x74 = 136800549U;
	static int8_t x75 = -1;
	uint8_t x76 = 8U;
	static int32_t t14 = -1;

	t14 = (x73<=(x74^(x75*x76)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x77 = -19626119LL;
	static volatile int32_t x78 = -1;
	static uint8_t x79 = 3U;

	t15 = (x77<=(x78^(x79*x80)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	int16_t x83 = -412;
	static int16_t x84 = -1;
	static volatile int32_t t16 = 84662016;

	t16 = (x81<=(x82^(x83*x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	int32_t t17 = 116;

	t17 = (x89<=(x90^(x91*x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x93 = 34U;
	volatile int32_t x94 = INT32_MAX;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = 377810;
	volatile int32_t t18 = -2;

	t18 = (x93<=(x94^(x95*x96)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x98 = 160001593U;
	int8_t x100 = -18;
	volatile int32_t t19 = 1;

	t19 = (x97<=(x98^(x99*x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x109 = UINT16_MAX;
	static int16_t x110 = INT16_MAX;
	int64_t x111 = -1LL;
	static int64_t x112 = INT64_MAX;

	t20 = (x109<=(x110^(x111*x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x113 = -54052;
	volatile int16_t x114 = -2;
	volatile uint32_t x115 = 2U;
	static uint16_t x116 = 403U;

	t21 = (x113<=(x114^(x115*x116)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = 12;
	static int16_t x130 = -1;
	int32_t x131 = -1;
	int32_t t22 = 2275;

	t22 = (x129<=(x130^(x131*x132)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x133 = INT8_MAX;
	int64_t x134 = -5754LL;
	static int32_t t23 = 1015279370;

	t23 = (x133<=(x134^(x135*x136)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	int32_t x139 = 372;
	int16_t x140 = INT16_MIN;
	int32_t t24 = 109;

	t24 = (x137<=(x138^(x139*x140)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x142 = 4886018906145LLU;
	volatile int32_t x144 = 39;

	t25 = (x141<=(x142^(x143*x144)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x145 = 5117401U;
	volatile uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MAX;

	t26 = (x145<=(x146^(x147*x148)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = -2239;
	static uint64_t x155 = 15LLU;
	int64_t x156 = -741039024LL;
	int32_t t27 = -9;

	t27 = (x153<=(x154^(x155*x156)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x162 = INT16_MIN;
	volatile int16_t x164 = INT16_MIN;

	t28 = (x161<=(x162^(x163*x164)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x169 = UINT16_MAX;
	static int8_t x170 = 0;
	static int16_t x171 = INT16_MIN;
	int32_t x172 = -1;
	volatile int32_t t29 = -227476242;

	t29 = (x169<=(x170^(x171*x172)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x173 = 1656072357U;
	static int32_t x174 = INT32_MAX;
	volatile int32_t x175 = INT32_MAX;
	int8_t x176 = -1;

	t30 = (x173<=(x174^(x175*x176)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = INT8_MIN;
	static volatile uint8_t x178 = 9U;
	int8_t x179 = -1;
	int8_t x180 = INT8_MIN;
	volatile int32_t t31 = 3;

	t31 = (x177<=(x178^(x179*x180)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x181 = -2;
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 360012475767LLU;
	volatile int32_t t32 = -904;

	t32 = (x181<=(x182^(x183*x184)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x185 = INT64_MAX;
	volatile int8_t x186 = INT8_MIN;
	static int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t33 = -51;

	t33 = (x185<=(x186^(x187*x188)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 58U;
	volatile int32_t t34 = -6476707;

	t34 = (x189<=(x190^(x191*x192)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x194 = 1980U;
	volatile uint64_t x195 = 901993LLU;
	int32_t t35 = -12;

	t35 = (x193<=(x194^(x195*x196)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x197 = UINT8_MAX;
	int8_t x198 = 6;
	static int16_t x199 = -1;
	volatile int64_t x200 = 3622LL;

	t36 = (x197<=(x198^(x199*x200)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x201 = -3556291737478LL;
	int8_t x202 = INT8_MIN;
	static uint32_t x203 = UINT32_MAX;
	static int32_t x204 = INT32_MIN;
	int32_t t37 = 40;

	t37 = (x201<=(x202^(x203*x204)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x205 = INT8_MIN;
	static int16_t x207 = INT16_MAX;
	uint8_t x208 = UINT8_MAX;

	t38 = (x205<=(x206^(x207*x208)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = INT64_MIN;
	volatile int32_t x210 = -1;
	volatile int32_t x211 = -1;
	int8_t x212 = -1;
	volatile int32_t t39 = 415;

	t39 = (x209<=(x210^(x211*x212)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x213 = 1U;
	static uint32_t x214 = 96181U;
	volatile uint16_t x215 = UINT16_MAX;
	volatile int32_t t40 = -32470784;

	t40 = (x213<=(x214^(x215*x216)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x217 = 7;
	int8_t x220 = INT8_MAX;
	static volatile int32_t t41 = 4417;

	t41 = (x217<=(x218^(x219*x220)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x222 = INT64_MAX;
	int8_t x223 = INT8_MIN;
	int8_t x224 = 2;
	volatile int32_t t42 = -1;

	t42 = (x221<=(x222^(x223*x224)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	static uint32_t x228 = 31U;
	int32_t t43 = 16524;

	t43 = (x225<=(x226^(x227*x228)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = 3U;
	int64_t x230 = -1LL;
	uint32_t x231 = 10879U;
	static uint64_t x232 = 665LLU;
	volatile int32_t t44 = -20;

	t44 = (x229<=(x230^(x231*x232)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x234 = INT8_MAX;
	static uint16_t x235 = 5136U;
	int8_t x236 = -1;
	volatile int32_t t45 = 1;

	t45 = (x233<=(x234^(x235*x236)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x238 = INT32_MAX;
	int64_t x239 = 3387231112403251LL;
	volatile uint8_t x240 = 38U;
	volatile int32_t t46 = -284523853;

	t46 = (x237<=(x238^(x239*x240)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x245 = 12;
	uint64_t x246 = 121717951043822311LLU;
	uint64_t x248 = UINT64_MAX;

	t47 = (x245<=(x246^(x247*x248)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = INT64_MIN;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 2U;
	int8_t x252 = -3;
	static volatile int32_t t48 = -898087139;

	t48 = (x249<=(x250^(x251*x252)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = INT64_MAX;
	int32_t x258 = -5;
	static int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t49 = 0;

	t49 = (x257<=(x258^(x259*x260)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = 0;
	static volatile uint64_t x267 = UINT64_MAX;
	int64_t x268 = -10LL;
	int32_t t50 = -56;

	t50 = (x265<=(x266^(x267*x268)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x269 = INT8_MAX;
	volatile uint64_t x270 = 12995102413922459LLU;
	int8_t x271 = 1;
	int16_t x272 = -1;
	int32_t t51 = 434;

	t51 = (x269<=(x270^(x271*x272)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x281 = 27432LLU;
	int64_t x282 = INT64_MIN;
	static uint32_t x283 = 6U;
	int32_t x284 = -1;
	static volatile int32_t t52 = -4;

	t52 = (x281<=(x282^(x283*x284)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x285 = 6U;
	int64_t x286 = 1035325043809445LL;
	uint8_t x287 = 25U;
	int8_t x288 = -1;
	int32_t t53 = -2804144;

	t53 = (x285<=(x286^(x287*x288)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x289 = -1;
	int32_t x290 = -1;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = 1069558769256471341LLU;
	int32_t t54 = 123656884;

	t54 = (x289<=(x290^(x291*x292)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = 235;
	int16_t x299 = INT16_MAX;
	int32_t x300 = -1;
	static volatile int32_t t55 = 2455231;

	t55 = (x297<=(x298^(x299*x300)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = UINT16_MAX;
	static uint8_t x302 = 20U;
	int8_t x303 = INT8_MAX;
	int64_t x304 = -685LL;
	volatile int32_t t56 = 0;

	t56 = (x301<=(x302^(x303*x304)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x305 = UINT16_MAX;
	static volatile int8_t x306 = INT8_MIN;
	static int8_t x307 = INT8_MAX;
	volatile uint8_t x308 = 66U;
	int32_t t57 = -1693;

	t57 = (x305<=(x306^(x307*x308)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = 3U;
	int64_t x314 = 13130LL;
	int32_t t58 = -1150;

	t58 = (x313<=(x314^(x315*x316)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 6334055675675310LL;
	static uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t59 = 249278278;

	t59 = (x317<=(x318^(x319*x320)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x321 = 3U;
	uint16_t x323 = 232U;
	int8_t x324 = 3;

	t60 = (x321<=(x322^(x323*x324)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = -26;
	int64_t x326 = INT64_MAX;
	static uint8_t x327 = 1U;
	uint64_t x328 = 6494022308LLU;
	int32_t t61 = 9658;

	t61 = (x325<=(x326^(x327*x328)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x335 = -19;
	int16_t x336 = 204;
	int32_t t62 = 11196;

	t62 = (x333<=(x334^(x335*x336)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x337 = -1;
	int64_t x338 = INT64_MAX;
	int32_t x339 = -10036;
	uint64_t x340 = 37601833LLU;
	static int32_t t63 = -47436;

	t63 = (x337<=(x338^(x339*x340)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x345 = UINT16_MAX;
	int32_t x346 = -5837094;
	static int16_t x348 = 3840;
	static int32_t t64 = 1;

	t64 = (x345<=(x346^(x347*x348)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = -1;
	uint16_t x355 = 79U;
	volatile int32_t t65 = 1;

	t65 = (x353<=(x354^(x355*x356)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x358 = UINT32_MAX;
	int8_t x359 = INT8_MIN;

	t66 = (x357<=(x358^(x359*x360)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x361 = INT8_MAX;
	int64_t x362 = INT64_MIN;
	static int8_t x363 = 16;
	int32_t x364 = 8755632;
	volatile int32_t t67 = -239292982;

	t67 = (x361<=(x362^(x363*x364)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x365 = -1;
	uint8_t x367 = UINT8_MAX;
	static int8_t x368 = -1;
	static int32_t t68 = -242560748;

	t68 = (x365<=(x366^(x367*x368)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MIN;
	static volatile int16_t x371 = INT16_MIN;
	int64_t x372 = 31232305373720LL;

	t69 = (x369<=(x370^(x371*x372)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x375 = -7;
	static volatile int8_t x376 = INT8_MIN;
	volatile int32_t t70 = 91433009;

	t70 = (x373<=(x374^(x375*x376)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MIN;
	uint64_t x379 = 51LLU;
	static int16_t x380 = 2472;

	t71 = (x377<=(x378^(x379*x380)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x389 = 744131842370LL;
	int32_t x390 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	int32_t t72 = 3;

	t72 = (x389<=(x390^(x391*x392)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x393 = -1;
	volatile uint64_t x394 = 388714235LLU;
	volatile int16_t x395 = INT16_MAX;
	volatile uint64_t x396 = 2069035824433315520LLU;
	volatile int32_t t73 = -2;

	t73 = (x393<=(x394^(x395*x396)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x397 = -8306;
	uint8_t x398 = UINT8_MAX;
	volatile uint32_t x399 = 483U;
	int32_t x400 = INT32_MIN;
	volatile int32_t t74 = 66368434;

	t74 = (x397<=(x398^(x399*x400)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x402 = -268597250;
	static int32_t x404 = 10;
	volatile int32_t t75 = 6582250;

	t75 = (x401<=(x402^(x403*x404)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = INT8_MIN;
	static volatile uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MAX;
	int32_t t76 = -2268620;

	t76 = (x405<=(x406^(x407*x408)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x410 = 16U;
	uint64_t x411 = 13188495LLU;

	t77 = (x409<=(x410^(x411*x412)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x413 = INT64_MIN;
	uint32_t x414 = UINT32_MAX;
	int64_t x416 = -1LL;
	static volatile int32_t t78 = 2;

	t78 = (x413<=(x414^(x415*x416)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x417 = -2004934104LL;
	volatile int8_t x418 = INT8_MAX;
	volatile uint32_t x419 = 34U;
	int8_t x420 = -1;

	t79 = (x417<=(x418^(x419*x420)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x421 = -29LL;
	volatile int32_t t80 = 236294;

	t80 = (x421<=(x422^(x423*x424)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = -1LL;
	static volatile int32_t x427 = -1;
	int8_t x428 = INT8_MIN;

	t81 = (x425<=(x426^(x427*x428)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x433 = -3776;
	volatile int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	static int32_t x436 = 2067;
	int32_t t82 = -8229255;

	t82 = (x433<=(x434^(x435*x436)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x437 = 799242LLU;
	uint64_t x438 = 21900033033630365LLU;
	int8_t x440 = 1;
	int32_t t83 = -39;

	t83 = (x437<=(x438^(x439*x440)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x442 = 0;
	uint16_t x443 = 25256U;

	t84 = (x441<=(x442^(x443*x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x445 = INT8_MIN;
	static int32_t x446 = 7;
	volatile int16_t x447 = INT16_MIN;
	static volatile int64_t x448 = 808LL;
	volatile int32_t t85 = 4065;

	t85 = (x445<=(x446^(x447*x448)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x449 = INT16_MAX;
	static int32_t x450 = INT32_MIN;
	uint64_t x451 = 139627764782603LLU;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int32_t t86 = 4915502;

	t86 = (x449<=(x450^(x451*x452)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x453 = 253U;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t87 = -7444396;

	t87 = (x453<=(x454^(x455*x456)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x462 = 4U;
	int8_t x463 = -1;
	int16_t x464 = INT16_MAX;
	int32_t t88 = -7280;

	t88 = (x461<=(x462^(x463*x464)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x469 = -1;
	static int8_t x471 = -4;
	static uint64_t x472 = UINT64_MAX;
	volatile int32_t t89 = -55138;

	t89 = (x469<=(x470^(x471*x472)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = INT32_MIN;
	int16_t x474 = INT16_MIN;
	int32_t t90 = 34;

	t90 = (x473<=(x474^(x475*x476)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x477 = 28U;
	static int32_t x478 = INT32_MIN;
	int64_t x480 = -1LL;
	int32_t t91 = -3195392;

	t91 = (x477<=(x478^(x479*x480)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x489 = INT64_MAX;
	int64_t x490 = INT64_MAX;
	static int64_t x491 = 0LL;
	volatile int64_t x492 = INT64_MIN;
	volatile int32_t t92 = -18;

	t92 = (x489<=(x490^(x491*x492)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x493 = -1LL;
	static uint16_t x496 = 3375U;
	int32_t t93 = 1;

	t93 = (x493<=(x494^(x495*x496)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x497 = INT16_MIN;
	static int8_t x498 = 1;
	volatile uint8_t x499 = 30U;
	int32_t t94 = 64;

	t94 = (x497<=(x498^(x499*x500)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x501 = 27U;
	static volatile uint64_t x502 = 109015LLU;
	int8_t x503 = INT8_MIN;
	int64_t x504 = -5736411984755568LL;
	volatile int32_t t95 = 0;

	t95 = (x501<=(x502^(x503*x504)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = INT8_MIN;
	static uint64_t x506 = 1LLU;
	int8_t x507 = -1;
	int8_t x508 = 1;
	int32_t t96 = -172;

	t96 = (x505<=(x506^(x507*x508)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = -1969LL;
	int64_t x510 = INT64_MIN;
	static int8_t x511 = 8;
	int16_t x512 = INT16_MIN;
	volatile int32_t t97 = -1;

	t97 = (x509<=(x510^(x511*x512)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x513 = -61654791;
	uint8_t x514 = 25U;
	uint64_t x515 = UINT64_MAX;
	int64_t x516 = INT64_MIN;
	int32_t t98 = -46142310;

	t98 = (x513<=(x514^(x515*x516)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x521 = UINT64_MAX;
	uint32_t x522 = 15161U;
	uint64_t x523 = 72432542423436LLU;
	int8_t x524 = 1;
	static volatile int32_t t99 = -60130;

	t99 = (x521<=(x522^(x523*x524)));

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

