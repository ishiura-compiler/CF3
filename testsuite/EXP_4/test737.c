#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int64_t x9 = INT64_MAX;
uint8_t x10 = UINT8_MAX;
int32_t x13 = -1;
int8_t x16 = INT8_MIN;
static int32_t x22 = INT32_MAX;
int64_t x24 = INT64_MIN;
volatile uint16_t x26 = 3168U;
static uint64_t x34 = 1LLU;
int16_t x36 = INT16_MIN;
uint8_t x41 = 2U;
int16_t x44 = -32;
volatile int16_t x69 = INT16_MAX;
int16_t x70 = -1;
uint64_t x83 = UINT64_MAX;
static volatile int32_t t14 = 3691512;
int32_t t15 = 861447031;
static int64_t x100 = INT64_MIN;
int32_t t16 = 3370;
int32_t x102 = INT32_MIN;
uint64_t x104 = 224426LLU;
volatile int32_t t17 = 2;
int32_t x109 = -199104787;
static int64_t x110 = -1LL;
static int64_t x114 = INT64_MIN;
uint8_t x116 = UINT8_MAX;
volatile int16_t x137 = INT16_MIN;
int32_t x145 = INT32_MIN;
int32_t t26 = 6315;
static int8_t x168 = INT8_MIN;
int64_t x171 = 5716088083458482LL;
static uint16_t x173 = 23U;
uint16_t x178 = 0U;
uint32_t x179 = 419855656U;
int32_t t30 = 18;
int16_t x182 = 0;
int16_t x195 = -1;
volatile int32_t t32 = -3;
static int8_t x213 = 1;
uint16_t x214 = UINT16_MAX;
int32_t x222 = INT32_MAX;
static int8_t x224 = 12;
int64_t x228 = INT64_MIN;
int32_t t39 = -58367244;
uint16_t x237 = 18U;
volatile int8_t x241 = INT8_MIN;
int64_t x244 = INT64_MAX;
uint8_t x256 = UINT8_MAX;
volatile int32_t t44 = -8898606;
uint32_t x264 = 110137U;
static int16_t x273 = INT16_MIN;
int16_t x275 = 1;
uint8_t x287 = 16U;
int8_t x295 = INT8_MAX;
uint32_t x296 = UINT32_MAX;
int32_t x297 = INT32_MIN;
int16_t x302 = INT16_MIN;
int32_t t53 = -4;
uint64_t x317 = 848638LLU;
static uint8_t x319 = 1U;
int32_t t58 = -16395;
volatile int32_t t61 = 4152;
static uint16_t x354 = 940U;
uint16_t x358 = 80U;
int32_t x365 = 848;
int8_t x376 = INT8_MAX;
int32_t t68 = 88454;
int32_t t69 = 195264;
uint32_t x388 = 1698U;
int16_t x389 = 0;
int16_t x394 = INT16_MIN;
uint8_t x395 = UINT8_MAX;
uint32_t x400 = UINT32_MAX;
int16_t x413 = -13;
int16_t x415 = -1;
volatile uint16_t x416 = 4909U;
static uint32_t x417 = 31U;
uint64_t x418 = 3330094LLU;
static int32_t x421 = INT32_MIN;
uint16_t x422 = 26496U;
int16_t x424 = -330;
static volatile int32_t t79 = -10724;
int64_t x426 = 66502LL;
int8_t x427 = -1;
volatile int8_t x442 = 40;
int32_t x449 = INT32_MIN;
volatile int16_t x451 = INT16_MIN;
int32_t x458 = INT32_MIN;
volatile uint32_t x460 = 53311247U;
static int16_t x483 = -6;
volatile uint32_t x484 = 30697U;
static int32_t t95 = 34022462;
volatile uint32_t x525 = 421008405U;
int8_t x540 = INT8_MIN;
static volatile int32_t t99 = -1;


void f0(void) {
	volatile uint32_t x2 = 12286646U;
	uint64_t x3 = 2120914101226LLU;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 679240;

	t0 = (x1<(x2%(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x11 = -1LL;
	int16_t x12 = 22;
	volatile int32_t t1 = -724454236;

	t1 = (x9<(x10%(x11%x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = -1;
	int64_t x15 = 1LL;
	int32_t t2 = -97594;

	t2 = (x13<(x14%(x15%x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 36U;
	volatile int64_t x18 = INT64_MAX;
	volatile int64_t x19 = INT64_MIN;
	int32_t x20 = 418344;
	volatile int32_t t3 = 8274559;

	t3 = (x17<(x18%(x19%x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	volatile uint16_t x23 = 20550U;
	volatile int32_t t4 = -181649;

	t4 = (x21<(x22%(x23%x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -11;
	int64_t x27 = 5LL;
	int8_t x28 = -4;
	volatile int32_t t5 = 16325;

	t5 = (x25<(x26%(x27%x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -306;
	volatile uint32_t x35 = 226U;
	volatile int32_t t6 = -343;

	t6 = (x33<(x34%(x35%x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = INT16_MAX;
	volatile int16_t x43 = 124;
	int32_t t7 = -757;

	t7 = (x41<(x42%(x43%x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 44U;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 18U;
	int8_t x56 = INT8_MAX;
	static volatile int32_t t8 = 45;

	t8 = (x53<(x54%(x55%x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MIN;
	volatile uint32_t x58 = 1154217582U;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = -3;
	int32_t t9 = 68142;

	t9 = (x57<(x58%(x59%x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	int64_t x62 = -8207572169905LL;
	uint8_t x63 = 1U;
	int16_t x64 = INT16_MIN;
	int32_t t10 = 14957;

	t10 = (x61<(x62%(x63%x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x71 = 26;
	static volatile int32_t x72 = INT32_MIN;
	int32_t t11 = -951;

	t11 = (x69<(x70%(x71%x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x77 = -1;
	static uint32_t x78 = 85460929U;
	volatile int16_t x79 = -22;
	static int32_t x80 = 6;
	int32_t t12 = -194977;

	t12 = (x77<(x78%(x79%x80)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 23412U;
	uint32_t x82 = UINT32_MAX;
	int64_t x84 = INT64_MAX;
	volatile int32_t t13 = -160026916;

	t13 = (x81<(x82%(x83%x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x85 = UINT64_MAX;
	uint32_t x86 = 14642421U;
	uint16_t x87 = 4U;
	int32_t x88 = INT32_MIN;

	t14 = (x85<(x86%(x87%x88)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MAX;
	volatile int64_t x94 = INT64_MAX;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = 8007978LL;

	t15 = (x93<(x94%(x95%x96)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = INT32_MIN;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = 7U;

	t16 = (x97<(x98%(x99%x100)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MIN;
	int16_t x103 = INT16_MIN;

	t17 = (x101<(x102%(x103%x104)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x111 = 9;
	static int32_t x112 = -467661601;
	int32_t t18 = -1;

	t18 = (x109<(x110%(x111%x112)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = -1;
	int16_t x115 = -1650;
	volatile int32_t t19 = 28939;

	t19 = (x113<(x114%(x115%x116)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = 14370254LL;
	uint32_t x118 = 2U;
	int32_t x119 = 2771;
	uint64_t x120 = 15060114217LLU;
	volatile int32_t t20 = 1204072;

	t20 = (x117<(x118%(x119%x120)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x125 = INT32_MIN;
	int8_t x126 = -1;
	volatile uint16_t x127 = 529U;
	int8_t x128 = INT8_MIN;
	static int32_t t21 = -400329;

	t21 = (x125<(x126%(x127%x128)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x138 = -1;
	volatile int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	int32_t t22 = -72;

	t22 = (x137<(x138%(x139%x140)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x141 = 20U;
	static int32_t x142 = INT32_MIN;
	static int8_t x143 = 1;
	volatile uint16_t x144 = 55U;
	int32_t t23 = 7402773;

	t23 = (x141<(x142%(x143%x144)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	int8_t x148 = 11;
	int32_t t24 = -7074983;

	t24 = (x145<(x146%(x147%x148)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 915426137U;
	int32_t t25 = -1;

	t25 = (x149<(x150%(x151%x152)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x157 = 42;
	uint8_t x158 = 2U;
	int8_t x159 = 4;
	volatile int64_t x160 = INT64_MAX;

	t26 = (x157<(x158%(x159%x160)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x165 = -10791797697738LL;
	static uint16_t x166 = UINT16_MAX;
	int8_t x167 = INT8_MAX;
	volatile int32_t t27 = 304;

	t27 = (x165<(x166%(x167%x168)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = 60848894950291LL;
	uint8_t x170 = 50U;
	uint16_t x172 = 1841U;
	int32_t t28 = -51;

	t28 = (x169<(x170%(x171%x172)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x174 = 3235400244234530LL;
	static uint8_t x175 = UINT8_MAX;
	int16_t x176 = 4290;
	volatile int32_t t29 = -2669281;

	t29 = (x173<(x174%(x175%x176)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x177 = INT32_MAX;
	int8_t x180 = INT8_MAX;

	t30 = (x177<(x178%(x179%x180)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = INT16_MAX;
	static int64_t x183 = INT64_MIN;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t31 = 2;

	t31 = (x181<(x182%(x183%x184)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = 1125924235097171LL;
	static int64_t x196 = 16682885999476696LL;

	t32 = (x193<(x194%(x195%x196)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = INT8_MAX;
	int64_t x198 = -1LL;
	int16_t x199 = -1;
	static uint32_t x200 = 4764U;
	static int32_t t33 = 26;

	t33 = (x197<(x198%(x199%x200)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = 1U;
	int64_t x204 = INT64_MIN;
	int32_t t34 = 460;

	t34 = (x201<(x202%(x203%x204)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	int32_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t35 = -7;

	t35 = (x205<(x206%(x207%x208)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x215 = 127U;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t36 = 404497952;

	t36 = (x213<(x214%(x215%x216)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 0U;
	int16_t x219 = -72;
	uint16_t x220 = UINT16_MAX;
	int32_t t37 = 913541215;

	t37 = (x217<(x218%(x219%x220)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = -1LL;
	uint32_t x223 = UINT32_MAX;
	int32_t t38 = -102909043;

	t38 = (x221<(x222%(x223%x224)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = INT32_MIN;
	static uint8_t x226 = 29U;
	int64_t x227 = INT64_MAX;

	t39 = (x225<(x226%(x227%x228)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x229 = 1;
	volatile int16_t x230 = INT16_MAX;
	volatile uint16_t x231 = 5U;
	volatile uint32_t x232 = 14U;
	int32_t t40 = -492686624;

	t40 = (x229<(x230%(x231%x232)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x238 = 18750221090LL;
	int8_t x239 = INT8_MIN;
	static int16_t x240 = INT16_MAX;
	int32_t t41 = 494;

	t41 = (x237<(x238%(x239%x240)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	volatile int32_t t42 = 103156597;

	t42 = (x241<(x242%(x243%x244)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x245 = 289663254764746LL;
	int16_t x246 = -1;
	static volatile uint16_t x247 = UINT16_MAX;
	uint32_t x248 = UINT32_MAX;
	static volatile int32_t t43 = -5765213;

	t43 = (x245<(x246%(x247%x248)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MIN;
	uint64_t x254 = 8083LLU;
	int64_t x255 = -1LL;

	t44 = (x253<(x254%(x255%x256)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x261 = INT64_MIN;
	volatile uint8_t x262 = UINT8_MAX;
	int8_t x263 = -49;
	volatile int32_t t45 = 446639;

	t45 = (x261<(x262%(x263%x264)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x269 = 0U;
	int64_t x270 = -1LL;
	int64_t x271 = -31121720612624220LL;
	static uint64_t x272 = UINT64_MAX;
	volatile int32_t t46 = -435;

	t46 = (x269<(x270%(x271%x272)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x274 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t47 = 318525;

	t47 = (x273<(x274%(x275%x276)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x281 = INT32_MIN;
	static uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t48 = 1603386;

	t48 = (x281<(x282%(x283%x284)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x285 = 391U;
	int16_t x286 = 1;
	static uint32_t x288 = 198196U;
	volatile int32_t t49 = 4509;

	t49 = (x285<(x286%(x287%x288)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x289 = UINT16_MAX;
	static int16_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t50 = 2;

	t50 = (x289<(x290%(x291%x292)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int32_t t51 = -1173;

	t51 = (x293<(x294%(x295%x296)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x298 = -1LL;
	uint32_t x299 = UINT32_MAX;
	static uint64_t x300 = 68095710914456LLU;
	volatile int32_t t52 = -247233;

	t52 = (x297<(x298%(x299%x300)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x301 = -40249;
	volatile uint64_t x303 = UINT64_MAX;
	static uint32_t x304 = 13016U;

	t53 = (x301<(x302%(x303%x304)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x305 = INT32_MAX;
	uint32_t x306 = 1706852005U;
	static volatile uint8_t x307 = 7U;
	volatile int8_t x308 = 2;
	volatile int32_t t54 = 35542535;

	t54 = (x305<(x306%(x307%x308)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x313 = -480739154466LL;
	int16_t x314 = -1;
	uint32_t x315 = 548404U;
	static volatile int16_t x316 = -4243;
	int32_t t55 = 2019671;

	t55 = (x313<(x314%(x315%x316)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x318 = INT64_MAX;
	static int64_t x320 = 22780103487LL;
	int32_t t56 = -46;

	t56 = (x317<(x318%(x319%x320)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x321 = UINT16_MAX;
	int64_t x322 = INT64_MIN;
	int8_t x323 = -34;
	int64_t x324 = 24031026895054LL;
	int32_t t57 = 1775;

	t57 = (x321<(x322%(x323%x324)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x325 = 29;
	volatile int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MAX;

	t58 = (x325<(x326%(x327%x328)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MIN;
	static int16_t x330 = -1;
	volatile int32_t x331 = INT32_MAX;
	uint32_t x332 = UINT32_MAX;
	int32_t t59 = -24;

	t59 = (x329<(x330%(x331%x332)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x337 = INT32_MIN;
	static volatile int64_t x338 = -845663680653213LL;
	int16_t x339 = 41;
	int32_t x340 = INT32_MAX;
	int32_t t60 = 3;

	t60 = (x337<(x338%(x339%x340)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x345 = INT16_MIN;
	uint8_t x346 = 3U;
	volatile int16_t x347 = 10;
	volatile uint64_t x348 = 1760LLU;

	t61 = (x345<(x346%(x347%x348)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = -1;
	int32_t x350 = INT32_MIN;
	uint16_t x351 = UINT16_MAX;
	volatile int16_t x352 = INT16_MIN;
	int32_t t62 = 570968;

	t62 = (x349<(x350%(x351%x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x353 = INT64_MAX;
	volatile int8_t x355 = -47;
	int64_t x356 = INT64_MIN;
	int32_t t63 = -2352196;

	t63 = (x353<(x354%(x355%x356)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t64 = -1898177;

	t64 = (x357<(x358%(x359%x360)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x361 = -1;
	static int32_t x362 = -1;
	static volatile int16_t x363 = INT16_MAX;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t65 = -17760505;

	t65 = (x361<(x362%(x363%x364)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	int32_t x368 = -62114;
	volatile int32_t t66 = -666;

	t66 = (x365<(x366%(x367%x368)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	static int16_t x375 = INT16_MIN;
	volatile int32_t t67 = -135894705;

	t67 = (x373<(x374%(x375%x376)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x377 = UINT32_MAX;
	uint8_t x378 = 2U;
	int32_t x379 = -1;
	int16_t x380 = 42;

	t68 = (x377<(x378%(x379%x380)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = INT16_MIN;
	volatile int64_t x382 = -114676LL;
	static volatile int64_t x383 = -466201472LL;
	uint32_t x384 = 63913371U;

	t69 = (x381<(x382%(x383%x384)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = 831;
	uint16_t x386 = 2U;
	uint16_t x387 = 32U;
	static int32_t t70 = 1;

	t70 = (x385<(x386%(x387%x388)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x390 = 95U;
	static int8_t x391 = -3;
	volatile int32_t x392 = -9;
	int32_t t71 = 36418955;

	t71 = (x389<(x390%(x391%x392)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = INT16_MAX;
	static volatile uint64_t x396 = 216713850490279LLU;
	static volatile int32_t t72 = 1817130;

	t72 = (x393<(x394%(x395%x396)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = -30409;
	int64_t x398 = INT64_MIN;
	static volatile uint16_t x399 = UINT16_MAX;
	volatile int32_t t73 = 129690;

	t73 = (x397<(x398%(x399%x400)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = INT16_MAX;
	int8_t x402 = INT8_MAX;
	volatile int32_t x403 = 5469;
	static uint64_t x404 = 6LLU;
	static int32_t t74 = -1981;

	t74 = (x401<(x402%(x403%x404)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x405 = 816403845879LL;
	int8_t x406 = INT8_MIN;
	static volatile int32_t x407 = -1;
	volatile int32_t x408 = INT32_MIN;
	int32_t t75 = -20;

	t75 = (x405<(x406%(x407%x408)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x409 = 113U;
	uint32_t x410 = 13004U;
	static int16_t x411 = INT16_MIN;
	static uint16_t x412 = 6U;
	volatile int32_t t76 = 1592;

	t76 = (x409<(x410%(x411%x412)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x414 = 149433654LLU;
	int32_t t77 = -300;

	t77 = (x413<(x414%(x415%x416)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x419 = 1U;
	uint64_t x420 = 114180861351136LLU;
	static int32_t t78 = 3;

	t78 = (x417<(x418%(x419%x420)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x423 = 1157860LLU;

	t79 = (x421<(x422%(x423%x424)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = INT8_MIN;
	int16_t x428 = 1670;
	int32_t t80 = -31690618;

	t80 = (x425<(x426%(x427%x428)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x429 = 3743014;
	int16_t x430 = -1;
	volatile uint64_t x431 = UINT64_MAX;
	volatile uint32_t x432 = 3465857U;
	static int32_t t81 = 24;

	t81 = (x429<(x430%(x431%x432)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x433 = -1;
	int8_t x434 = -2;
	uint8_t x435 = UINT8_MAX;
	static int64_t x436 = INT64_MIN;
	int32_t t82 = 441588;

	t82 = (x433<(x434%(x435%x436)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x437 = 49179468LLU;
	int64_t x438 = 33LL;
	volatile int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MAX;
	volatile int32_t t83 = 442;

	t83 = (x437<(x438%(x439%x440)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x441 = 37247234044114131LLU;
	static uint32_t x443 = 8U;
	static int8_t x444 = INT8_MIN;
	int32_t t84 = 3576313;

	t84 = (x441<(x442%(x443%x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x445 = -29;
	int32_t x446 = INT32_MIN;
	int32_t x447 = INT32_MAX;
	uint32_t x448 = 1431558U;
	volatile int32_t t85 = -75320;

	t85 = (x445<(x446%(x447%x448)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x450 = -5;
	int32_t x452 = INT32_MIN;
	static int32_t t86 = 27034;

	t86 = (x449<(x450%(x451%x452)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x453 = UINT16_MAX;
	static volatile int32_t x454 = 43121;
	uint32_t x455 = 101525U;
	int8_t x456 = INT8_MIN;
	volatile int32_t t87 = -8986;

	t87 = (x453<(x454%(x455%x456)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x457 = INT8_MAX;
	uint64_t x459 = 7796445895LLU;
	volatile int32_t t88 = -2;

	t88 = (x457<(x458%(x459%x460)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x465 = INT32_MIN;
	volatile int8_t x466 = INT8_MIN;
	static volatile int32_t x467 = 470000;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t89 = 270;

	t89 = (x465<(x466%(x467%x468)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = 47299448;
	int64_t x470 = 1LL;
	volatile uint64_t x471 = 1494581190LLU;
	int64_t x472 = INT64_MIN;
	volatile int32_t t90 = 1547305;

	t90 = (x469<(x470%(x471%x472)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = INT32_MIN;
	int8_t x482 = 1;
	volatile int32_t t91 = -28;

	t91 = (x481<(x482%(x483%x484)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x493 = INT8_MIN;
	static uint8_t x494 = 0U;
	volatile uint8_t x495 = 29U;
	uint16_t x496 = 7U;
	volatile int32_t t92 = 32117;

	t92 = (x493<(x494%(x495%x496)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x497 = 62521;
	uint64_t x498 = 40644474576033304LLU;
	volatile int32_t x499 = 1;
	volatile int64_t x500 = INT64_MIN;
	volatile int32_t t93 = -45103;

	t93 = (x497<(x498%(x499%x500)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x505 = UINT32_MAX;
	volatile int32_t x506 = INT32_MIN;
	int32_t x507 = -361;
	int64_t x508 = 27014LL;
	static int32_t t94 = 10337;

	t94 = (x505<(x506%(x507%x508)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x509 = 50247U;
	int16_t x510 = 15728;
	int8_t x511 = INT8_MAX;
	int64_t x512 = 119LL;

	t95 = (x509<(x510%(x511%x512)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x517 = INT16_MIN;
	uint8_t x518 = 15U;
	uint64_t x519 = 9691342660845418LLU;
	uint8_t x520 = 6U;
	volatile int32_t t96 = -29796489;

	t96 = (x517<(x518%(x519%x520)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x526 = 117U;
	uint8_t x527 = UINT8_MAX;
	int64_t x528 = -3491707821LL;
	volatile int32_t t97 = -140616665;

	t97 = (x525<(x526%(x527%x528)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x533 = INT32_MAX;
	uint64_t x534 = 59738308553508836LLU;
	uint8_t x535 = UINT8_MAX;
	volatile int32_t x536 = INT32_MIN;
	volatile int32_t t98 = -33230;

	t98 = (x533<(x534%(x535%x536)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x537 = -1;
	int8_t x538 = INT8_MIN;
	volatile uint64_t x539 = UINT64_MAX;

	t99 = (x537<(x538%(x539%x540)));

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

