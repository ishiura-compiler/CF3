#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x17 = 33U;
uint32_t x20 = 481172639U;
volatile int32_t t3 = 1;
static volatile uint32_t x21 = UINT32_MAX;
volatile int8_t x24 = INT8_MIN;
int16_t x26 = INT16_MIN;
static int64_t x40 = INT64_MIN;
int8_t x53 = INT8_MIN;
static volatile int32_t t9 = 12;
uint8_t x60 = 2U;
static volatile int32_t t10 = 36069962;
uint16_t x77 = 3884U;
uint64_t x79 = UINT64_MAX;
uint16_t x81 = 1U;
int32_t x83 = 6;
int8_t x84 = INT8_MIN;
volatile int32_t t14 = -977157234;
int32_t t15 = 3961;
int16_t x98 = -1;
uint64_t x99 = UINT64_MAX;
volatile uint32_t x102 = 21U;
volatile int32_t t19 = 13;
int8_t x114 = INT8_MAX;
volatile int8_t x115 = INT8_MAX;
volatile int32_t t21 = 245;
volatile uint8_t x138 = UINT8_MAX;
int16_t x148 = -63;
static uint32_t x150 = 17U;
uint8_t x158 = UINT8_MAX;
int32_t t28 = 118630;
int32_t x171 = INT32_MIN;
int32_t t30 = 827;
static int8_t x181 = -1;
int8_t x186 = INT8_MAX;
int64_t x187 = -1933653LL;
int32_t x195 = 199228391;
static volatile int32_t t38 = -7362546;
uint32_t x223 = UINT32_MAX;
static uint8_t x224 = 15U;
int32_t t41 = 0;
static uint8_t x245 = 121U;
int8_t x263 = -1;
int32_t t45 = 1099;
volatile int8_t x281 = -6;
uint64_t x285 = UINT64_MAX;
int8_t x289 = 15;
static uint16_t x292 = UINT16_MAX;
uint8_t x307 = 0U;
volatile uint16_t x316 = 314U;
volatile int32_t t52 = 6;
int16_t x325 = INT16_MAX;
uint32_t x326 = 5U;
static volatile uint64_t x330 = 1840725736946LLU;
static uint16_t x332 = 5365U;
int32_t t54 = 7;
static int8_t x333 = INT8_MIN;
int32_t t55 = 905065197;
int32_t x343 = INT32_MAX;
uint8_t x345 = 1U;
uint64_t x347 = 133674834LLU;
int16_t x348 = 1;
int32_t t58 = -1118;
int64_t x355 = INT64_MIN;
static volatile uint8_t x358 = UINT8_MAX;
static int64_t x360 = -3891261073105290LL;
volatile int32_t t61 = -247;
int32_t t62 = -215216104;
uint8_t x373 = 7U;
volatile int64_t x385 = -1LL;
int32_t t64 = 4;
int32_t x406 = -118978;
uint16_t x408 = 0U;
uint32_t x409 = 5367132U;
int16_t x411 = INT16_MIN;
int8_t x412 = 47;
uint8_t x415 = 25U;
uint32_t x430 = 904850U;
static int32_t t72 = 121;
uint8_t x439 = UINT8_MAX;
volatile int32_t t73 = -1306;
int64_t x462 = -1LL;
int32_t x471 = -1;
uint8_t x481 = 123U;
uint64_t x495 = UINT64_MAX;
int32_t x497 = INT32_MIN;
volatile int8_t x509 = INT8_MIN;
static int16_t x512 = 9;
static uint32_t x563 = 29479392U;
uint8_t x573 = 51U;
int32_t t89 = -2;
int32_t t91 = -1;
int32_t x597 = -1;
static int16_t x602 = -3934;
int32_t t94 = -17;
static uint16_t x608 = 69U;
volatile int32_t t97 = -1748194;
uint8_t x618 = UINT8_MAX;
int8_t x622 = -1;
static int8_t x623 = INT8_MAX;


void f0(void) {
	static uint16_t x1 = 1U;
	uint8_t x2 = 25U;
	static uint8_t x3 = 17U;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 5;

	t0 = (x1<=((x2-x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 31;
	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = INT16_MAX;
	volatile int16_t x8 = -1;
	int32_t t1 = 1617;

	t1 = (x5<=((x6-x7)*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t2 = 1;

	t2 = (x13<=((x14-x15)*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MAX;
	static int32_t x19 = -1;

	t3 = (x17<=((x18-x19)*x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x22 = -6666;
	int16_t x23 = INT16_MAX;
	volatile int32_t t4 = 22274;

	t4 = (x21<=((x22-x23)*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	volatile uint32_t x27 = 197843699U;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = 0;

	t5 = (x25<=((x26-x27)*x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 842U;
	uint8_t x30 = 1U;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 5U;
	volatile int32_t t6 = 1;

	t6 = (x29<=((x30-x31)*x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 6108081U;
	uint16_t x38 = 0U;
	int16_t x39 = -1;
	int32_t t7 = 4759;

	t7 = (x37<=((x38-x39)*x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x49 = -1LL;
	uint64_t x50 = 20926619998629LLU;
	int8_t x51 = INT8_MIN;
	static uint64_t x52 = UINT64_MAX;
	static volatile int32_t t8 = -128414;

	t8 = (x49<=((x50-x51)*x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x54 = UINT64_MAX;
	int32_t x55 = -137;
	static volatile uint32_t x56 = UINT32_MAX;

	t9 = (x53<=((x54-x55)*x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x57 = 3U;
	volatile uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MIN;

	t10 = (x57<=((x58-x59)*x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	static uint64_t x66 = 94196895397494LLU;
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MIN;
	static int32_t t11 = -697920300;

	t11 = (x65<=((x66-x67)*x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	uint8_t x70 = UINT8_MAX;
	volatile int8_t x71 = 48;
	uint16_t x72 = 1U;
	volatile int32_t t12 = -126652;

	t12 = (x69<=((x70-x71)*x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x78 = -1;
	int64_t x80 = -111409136117968LL;
	int32_t t13 = -1422965;

	t13 = (x77<=((x78-x79)*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = -1233217;

	t14 = (x81<=((x82-x83)*x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = UINT8_MAX;
	volatile uint8_t x86 = 32U;
	static uint64_t x87 = 9850152LLU;
	volatile uint32_t x88 = 27647U;

	t15 = (x85<=((x86-x87)*x88));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = 5U;
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 3U;
	int16_t x96 = 17;
	int32_t t16 = 1075543;

	t16 = (x93<=((x94-x95)*x96));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x97 = 29438U;
	int32_t x100 = INT32_MIN;
	int32_t t17 = -119;

	t17 = (x97<=((x98-x99)*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x101 = 602089877U;
	int16_t x103 = INT16_MIN;
	volatile uint16_t x104 = 224U;
	int32_t t18 = -702051534;

	t18 = (x101<=((x102-x103)*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = 127U;
	volatile int32_t x110 = INT32_MIN;
	uint32_t x111 = 30287U;
	int16_t x112 = -1;

	t19 = (x109<=((x110-x111)*x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = -1LL;
	int64_t x116 = INT64_MAX;
	int32_t t20 = 929870563;

	t20 = (x113<=((x114-x115)*x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 18942U;
	int32_t x119 = INT32_MAX;
	int32_t x120 = -1;

	t21 = (x117<=((x118-x119)*x120));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x121 = 189U;
	int32_t x122 = INT32_MAX;
	static uint32_t x123 = 1093678U;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t22 = 2;

	t22 = (x121<=((x122-x123)*x124));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = -1;
	uint32_t x126 = 339209U;
	uint32_t x127 = UINT32_MAX;
	int32_t x128 = INT32_MAX;
	int32_t t23 = -16767;

	t23 = (x125<=((x126-x127)*x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int64_t x139 = 53876489203512LL;
	uint8_t x140 = 15U;
	volatile int32_t t24 = 229703;

	t24 = (x137<=((x138-x139)*x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = UINT64_MAX;
	static volatile uint64_t x146 = 0LLU;
	static uint16_t x147 = 78U;
	static volatile int32_t t25 = 123096770;

	t25 = (x145<=((x146-x147)*x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = -1;
	int32_t x151 = INT32_MAX;
	static uint64_t x152 = UINT64_MAX;
	int32_t t26 = 11483;

	t26 = (x149<=((x150-x151)*x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x157 = 92U;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t27 = 44730541;

	t27 = (x157<=((x158-x159)*x160));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x161 = 219347;
	int16_t x162 = INT16_MAX;
	volatile uint8_t x163 = UINT8_MAX;
	volatile int64_t x164 = 9249259165LL;

	t28 = (x161<=((x162-x163)*x164));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = INT16_MAX;
	int16_t x166 = INT16_MIN;
	static int8_t x167 = -1;
	volatile int8_t x168 = INT8_MIN;
	static int32_t t29 = -7535232;

	t29 = (x165<=((x166-x167)*x168));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x169 = 251U;
	int32_t x170 = -1;
	uint32_t x172 = UINT32_MAX;

	t30 = (x169<=((x170-x171)*x172));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x177 = 44417805536LL;
	int8_t x178 = -1;
	int16_t x179 = -3;
	uint8_t x180 = 3U;
	int32_t t31 = 0;

	t31 = (x177<=((x178-x179)*x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x182 = 1705U;
	int16_t x183 = 2;
	uint32_t x184 = 95518U;
	volatile int32_t t32 = 27369181;

	t32 = (x181<=((x182-x183)*x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x185 = 2395LL;
	static uint16_t x188 = UINT16_MAX;
	int32_t t33 = 0;

	t33 = (x185<=((x186-x187)*x188));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x193 = 23U;
	uint32_t x194 = UINT32_MAX;
	volatile int32_t x196 = -1;
	volatile int32_t t34 = -447;

	t34 = (x193<=((x194-x195)*x196));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = 1;
	volatile int16_t x203 = -13;
	static volatile int16_t x204 = 1;
	static volatile int32_t t35 = -346440;

	t35 = (x201<=((x202-x203)*x204));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = -1;
	int16_t x211 = -26;
	uint16_t x212 = 15U;
	volatile int32_t t36 = 13411749;

	t36 = (x209<=((x210-x211)*x212));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = 913;
	int16_t x214 = INT16_MIN;
	static uint16_t x215 = 7972U;
	int8_t x216 = -15;
	static int32_t t37 = -148;

	t37 = (x213<=((x214-x215)*x216));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x217 = 153U;
	uint8_t x218 = 7U;
	uint8_t x219 = 46U;
	volatile int8_t x220 = -1;

	t38 = (x217<=((x218-x219)*x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = 3U;
	static uint64_t x222 = 1448731539LLU;
	static volatile int32_t t39 = -1;

	t39 = (x221<=((x222-x223)*x224));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x225 = 1358163LL;
	int32_t x226 = -1;
	uint8_t x227 = 51U;
	static uint64_t x228 = 4LLU;
	volatile int32_t t40 = 1367;

	t40 = (x225<=((x226-x227)*x228));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x233 = -38352;
	volatile uint8_t x234 = 14U;
	int32_t x235 = -1;
	static int8_t x236 = INT8_MIN;

	t41 = (x233<=((x234-x235)*x236));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	uint8_t x243 = 3U;
	int8_t x244 = 3;
	volatile int32_t t42 = 14838;

	t42 = (x241<=((x242-x243)*x244));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x246 = INT64_MAX;
	uint16_t x247 = 108U;
	volatile int8_t x248 = -1;
	int32_t t43 = 259256155;

	t43 = (x245<=((x246-x247)*x248));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = UINT64_MAX;
	uint16_t x260 = 0U;
	static int32_t t44 = -258007;

	t44 = (x257<=((x258-x259)*x260));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x261 = INT64_MAX;
	uint8_t x262 = 11U;
	static int8_t x264 = 0;

	t45 = (x261<=((x262-x263)*x264));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 26694333U;
	volatile int32_t x275 = 0;
	int32_t x276 = INT32_MIN;
	int32_t t46 = 803;

	t46 = (x273<=((x274-x275)*x276));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x282 = 65LLU;
	uint64_t x283 = UINT64_MAX;
	uint32_t x284 = 20U;
	static int32_t t47 = 75;

	t47 = (x281<=((x282-x283)*x284));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x286 = 50343LLU;
	uint16_t x287 = 0U;
	static int8_t x288 = -1;
	volatile int32_t t48 = 2689245;

	t48 = (x285<=((x286-x287)*x288));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x290 = -114830150255LL;
	static volatile int16_t x291 = 6728;
	static volatile int32_t t49 = -46;

	t49 = (x289<=((x290-x291)*x292));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x297 = 26U;
	volatile int32_t x298 = 5998;
	int32_t x299 = -2175;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t50 = -3136;

	t50 = (x297<=((x298-x299)*x300));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = INT8_MAX;
	static int8_t x306 = 0;
	volatile uint32_t x308 = UINT32_MAX;
	int32_t t51 = 3673111;

	t51 = (x305<=((x306-x307)*x308));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = 9475418;
	uint32_t x315 = 150769373U;

	t52 = (x313<=((x314-x315)*x316));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	static int32_t t53 = -218;

	t53 = (x325<=((x326-x327)*x328));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x329 = INT16_MAX;
	int16_t x331 = INT16_MAX;

	t54 = (x329<=((x330-x331)*x332));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x334 = INT16_MAX;
	uint32_t x335 = 10235U;
	static uint32_t x336 = 282U;

	t55 = (x333<=((x334-x335)*x336));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x341 = INT32_MIN;
	static uint32_t x342 = UINT32_MAX;
	static uint8_t x344 = 1U;
	static int32_t t56 = -71;

	t56 = (x341<=((x342-x343)*x344));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x346 = 810807930;
	int32_t t57 = 1129593;

	t57 = (x345<=((x346-x347)*x348));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x349 = 0;
	int64_t x350 = INT64_MIN;
	static int64_t x351 = INT64_MIN;
	volatile int64_t x352 = INT64_MIN;

	t58 = (x349<=((x350-x351)*x352));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x353 = -418173LL;
	int8_t x354 = -1;
	static int8_t x356 = -1;
	static volatile int32_t t59 = -1;

	t59 = (x353<=((x354-x355)*x356));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x357 = -16234;
	static volatile int8_t x359 = INT8_MAX;
	volatile int32_t t60 = 7548147;

	t60 = (x357<=((x358-x359)*x360));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x361 = 1636U;
	int64_t x362 = -31489LL;
	int64_t x363 = -1LL;
	static int64_t x364 = 582488583LL;

	t61 = (x361<=((x362-x363)*x364));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x365 = 917222820209168770LLU;
	int16_t x366 = -77;
	static int64_t x367 = 1059LL;
	uint16_t x368 = UINT16_MAX;

	t62 = (x365<=((x366-x367)*x368));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x374 = 4;
	int32_t x375 = 1;
	uint64_t x376 = 6179840LLU;
	volatile int32_t t63 = -27098340;

	t63 = (x373<=((x374-x375)*x376));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x386 = 1U;
	int64_t x387 = -1LL;
	static int64_t x388 = -95185375274285LL;

	t64 = (x385<=((x386-x387)*x388));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x393 = -1;
	uint8_t x394 = 9U;
	int64_t x395 = 14LL;
	static int8_t x396 = INT8_MAX;
	static int32_t t65 = -1;

	t65 = (x393<=((x394-x395)*x396));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x397 = -1;
	volatile int64_t x398 = INT64_MAX;
	uint64_t x399 = 14LLU;
	uint16_t x400 = UINT16_MAX;
	static int32_t t66 = 60864;

	t66 = (x397<=((x398-x399)*x400));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x405 = INT64_MAX;
	int64_t x407 = -49312767LL;
	int32_t t67 = -11;

	t67 = (x405<=((x406-x407)*x408));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x410 = 1957U;
	static int32_t t68 = -1178359;

	t68 = (x409<=((x410-x411)*x412));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x413 = 1012U;
	int8_t x414 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t69 = -108701;

	t69 = (x413<=((x414-x415)*x416));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x421 = INT32_MIN;
	uint64_t x422 = 5LLU;
	int32_t x423 = -244390968;
	int16_t x424 = -1;
	int32_t t70 = 30906722;

	t70 = (x421<=((x422-x423)*x424));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x426 = UINT64_MAX;
	int16_t x427 = 452;
	int64_t x428 = INT64_MAX;
	volatile int32_t t71 = -158743;

	t71 = (x425<=((x426-x427)*x428));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x429 = INT8_MAX;
	uint32_t x431 = 114571U;
	int16_t x432 = INT16_MIN;

	t72 = (x429<=((x430-x431)*x432));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x437 = UINT8_MAX;
	uint32_t x438 = 1U;
	static volatile int64_t x440 = -6LL;

	t73 = (x437<=((x438-x439)*x440));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	int64_t x448 = -37350942716429LL;
	volatile int32_t t74 = -1300;

	t74 = (x445<=((x446-x447)*x448));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x449 = -41LL;
	uint64_t x450 = 122860278016LLU;
	uint16_t x451 = UINT16_MAX;
	static volatile uint32_t x452 = 6850403U;
	int32_t t75 = 7760596;

	t75 = (x449<=((x450-x451)*x452));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x461 = 1656U;
	static int8_t x463 = 10;
	uint64_t x464 = UINT64_MAX;
	static volatile int32_t t76 = -1;

	t76 = (x461<=((x462-x463)*x464));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x469 = -1;
	uint32_t x470 = 2U;
	int8_t x472 = -1;
	int32_t t77 = 0;

	t77 = (x469<=((x470-x471)*x472));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x482 = INT16_MIN;
	static uint32_t x483 = UINT32_MAX;
	int64_t x484 = 6451980LL;
	int32_t t78 = 225384;

	t78 = (x481<=((x482-x483)*x484));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x489 = INT16_MIN;
	static int64_t x490 = -1LL;
	uint32_t x491 = 2U;
	int8_t x492 = INT8_MIN;
	volatile int32_t t79 = -737752164;

	t79 = (x489<=((x490-x491)*x492));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x493 = INT32_MAX;
	volatile uint8_t x494 = UINT8_MAX;
	uint16_t x496 = 1U;
	volatile int32_t t80 = 990;

	t80 = (x493<=((x494-x495)*x496));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x498 = INT64_MIN;
	int8_t x499 = -1;
	static int64_t x500 = -1LL;
	static volatile int32_t t81 = 5;

	t81 = (x497<=((x498-x499)*x500));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x501 = UINT8_MAX;
	int8_t x502 = 18;
	uint16_t x503 = 7327U;
	static int16_t x504 = 3354;
	volatile int32_t t82 = -5;

	t82 = (x501<=((x502-x503)*x504));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x510 = UINT32_MAX;
	static int8_t x511 = INT8_MIN;
	int32_t t83 = 105099725;

	t83 = (x509<=((x510-x511)*x512));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x521 = 782588777;
	int64_t x522 = 339721710514LL;
	static int16_t x523 = INT16_MAX;
	int32_t x524 = 48;
	int32_t t84 = -943;

	t84 = (x521<=((x522-x523)*x524));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x557 = UINT64_MAX;
	static int64_t x558 = 5043LL;
	uint64_t x559 = 52405548758896411LLU;
	static int64_t x560 = INT64_MIN;
	volatile int32_t t85 = 1620;

	t85 = (x557<=((x558-x559)*x560));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x561 = 15U;
	static uint32_t x562 = UINT32_MAX;
	static int32_t x564 = -686670;
	int32_t t86 = -10116644;

	t86 = (x561<=((x562-x563)*x564));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x565 = INT8_MIN;
	static uint64_t x566 = UINT64_MAX;
	uint8_t x567 = 22U;
	int32_t x568 = -1;
	volatile int32_t t87 = -3;

	t87 = (x565<=((x566-x567)*x568));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x569 = -1;
	uint8_t x570 = 18U;
	int32_t x571 = -415667;
	static int8_t x572 = INT8_MAX;
	int32_t t88 = -387;

	t88 = (x569<=((x570-x571)*x572));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x574 = -1;
	volatile int64_t x575 = -1LL;
	uint16_t x576 = 200U;

	t89 = (x573<=((x574-x575)*x576));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x581 = UINT16_MAX;
	int64_t x582 = 447426319402LL;
	volatile int8_t x583 = -1;
	volatile uint16_t x584 = 17095U;
	static int32_t t90 = -72421;

	t90 = (x581<=((x582-x583)*x584));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x589 = INT8_MIN;
	int8_t x590 = INT8_MIN;
	static uint32_t x591 = 34989U;
	uint64_t x592 = 1LLU;

	t91 = (x589<=((x590-x591)*x592));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x593 = 10541U;
	uint8_t x594 = 90U;
	int8_t x595 = INT8_MIN;
	volatile int64_t x596 = 4552896586LL;
	int32_t t92 = 22530;

	t92 = (x593<=((x594-x595)*x596));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x598 = INT32_MIN;
	int64_t x599 = -26318891954LL;
	static volatile int64_t x600 = -129LL;
	static int32_t t93 = 14680405;

	t93 = (x597<=((x598-x599)*x600));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x601 = 3023;
	static int8_t x603 = INT8_MIN;
	static uint16_t x604 = 3095U;

	t94 = (x601<=((x602-x603)*x604));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x605 = INT64_MAX;
	int8_t x606 = INT8_MIN;
	int32_t x607 = -1;
	static volatile int32_t t95 = -4348509;

	t95 = (x605<=((x606-x607)*x608));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x609 = -1;
	int8_t x610 = INT8_MIN;
	int16_t x611 = INT16_MIN;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t96 = 1;

	t96 = (x609<=((x610-x611)*x612));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x613 = -1492022643458923990LL;
	uint16_t x614 = UINT16_MAX;
	volatile int16_t x615 = -75;
	int8_t x616 = INT8_MIN;

	t97 = (x613<=((x614-x615)*x616));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x617 = 10U;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = -10252;
	int32_t t98 = -30007;

	t98 = (x617<=((x618-x619)*x620));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x621 = INT32_MIN;
	volatile uint32_t x624 = 1U;
	volatile int32_t t99 = 0;

	t99 = (x621<=((x622-x623)*x624));

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

