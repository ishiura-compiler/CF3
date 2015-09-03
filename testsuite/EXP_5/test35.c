#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -14;
int8_t x9 = 0;
int16_t x18 = INT16_MAX;
volatile uint64_t x43 = UINT64_MAX;
static int16_t x44 = -1;
volatile int16_t x53 = -1;
static uint64_t x58 = 65281091469681838LLU;
static int8_t x59 = 3;
volatile int32_t t9 = 398;
int16_t x61 = 1;
int8_t x62 = INT8_MIN;
int8_t x68 = -59;
static int8_t x70 = -1;
static volatile int32_t t12 = 3834626;
uint32_t x79 = 533553750U;
int32_t x84 = INT32_MAX;
volatile int16_t x92 = INT16_MAX;
uint16_t x98 = 5U;
uint32_t x112 = 53583U;
static int32_t t20 = -5651;
int32_t t21 = 41068;
static volatile int16_t x137 = 518;
int16_t x146 = 198;
static volatile int32_t t26 = 111703418;
volatile int32_t t27 = -1124777;
uint32_t x168 = UINT32_MAX;
static volatile int32_t t29 = -303040556;
static uint32_t x177 = 17U;
uint16_t x179 = UINT16_MAX;
uint8_t x181 = UINT8_MAX;
static uint16_t x183 = 10U;
static int8_t x184 = INT8_MAX;
static int8_t x187 = -1;
int16_t x189 = INT16_MAX;
uint16_t x192 = 961U;
volatile int32_t t33 = 17;
volatile int32_t t34 = 85065372;
int16_t x222 = INT16_MAX;
uint16_t x223 = 886U;
static uint16_t x228 = 343U;
int32_t t38 = 3;
int16_t x238 = -1;
uint64_t x240 = UINT64_MAX;
static volatile int32_t t40 = -112;
uint8_t x243 = 2U;
static uint32_t x246 = 56349268U;
int16_t x250 = INT16_MIN;
int64_t x264 = -1LL;
int32_t t45 = -4576;
uint8_t x279 = 7U;
static int64_t x282 = 7LL;
int16_t x284 = INT16_MAX;
static int32_t t47 = -1;
static int32_t t48 = 3228242;
uint32_t x294 = UINT32_MAX;
int64_t x310 = -1LL;
uint8_t x318 = UINT8_MAX;
volatile int8_t x333 = -1;
static uint8_t x339 = 6U;
int32_t t57 = -284911645;
uint16_t x352 = 31U;
int32_t x354 = INT32_MIN;
int16_t x362 = -1;
static int16_t x372 = -14;
int16_t x400 = INT16_MIN;
static int16_t x413 = -1;
int32_t x415 = 38517;
int16_t x422 = INT16_MAX;
int32_t t70 = -87;
static int32_t t71 = 14185465;
int8_t x439 = INT8_MIN;
volatile int16_t x447 = INT16_MIN;
uint32_t x462 = UINT32_MAX;
int32_t t74 = 40;
static uint32_t x469 = 7426649U;
int8_t x471 = 3;
static volatile uint16_t x472 = UINT16_MAX;
int32_t x477 = -1;
volatile uint32_t x479 = 1U;
int32_t x485 = INT32_MIN;
static int16_t x487 = 483;
static int32_t t80 = 2737;
static int16_t x490 = -1;
uint64_t x505 = 367789244598716426LLU;
uint8_t x509 = UINT8_MAX;
int8_t x510 = INT8_MIN;
int16_t x512 = -1;
uint16_t x517 = 28U;
volatile int32_t t87 = -30266753;
static int32_t x521 = 0;
int32_t x524 = INT32_MIN;
int32_t t88 = -12103074;
uint64_t x525 = 10LLU;
volatile int32_t t90 = 81232;
int64_t x537 = -14793LL;
uint32_t x543 = 146369319U;
int32_t t92 = 0;
int32_t x547 = -1;
int32_t x556 = -6864;
int32_t x557 = 116789722;
uint8_t x558 = 3U;
static uint64_t x559 = 173425076LLU;
int32_t x571 = -1;
static volatile uint64_t x575 = 865667382318LLU;
uint32_t x576 = UINT32_MAX;


void f0(void) {
	volatile int8_t x2 = -1;
	volatile int64_t x3 = 15679993LL;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = -770;

	t0 = (x1<((x2+x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x10 = 239492U;
	int64_t x11 = 57055290708245017LL;
	static volatile uint64_t x12 = UINT64_MAX;
	static volatile int32_t t1 = -686052;

	t1 = (x9<((x10+x11)*x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 7U;
	int16_t x14 = INT16_MAX;
	static uint64_t x15 = 59LLU;
	volatile int32_t x16 = -52793;
	static volatile int32_t t2 = -30365;

	t2 = (x13<((x14+x15)*x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = 7LLU;
	volatile int32_t t3 = 52320543;

	t3 = (x17<((x18+x19)*x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 61U;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t4 = 219;

	t4 = (x21<((x22+x23)*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MAX;
	volatile int32_t t5 = -1382556;

	t5 = (x41<((x42+x43)*x44));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = -1;
	volatile uint32_t x46 = 718107394U;
	volatile uint64_t x47 = UINT64_MAX;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t6 = 952864321;

	t6 = (x45<((x46+x47)*x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	static uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	volatile uint64_t x52 = 564823054208LLU;
	volatile int32_t t7 = -1;

	t7 = (x49<((x50+x51)*x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x54 = 900259U;
	volatile uint32_t x55 = UINT32_MAX;
	int32_t x56 = -72942768;
	volatile int32_t t8 = -55248722;

	t8 = (x53<((x54+x55)*x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = 11;
	int8_t x60 = 1;

	t9 = (x57<((x58+x59)*x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x63 = 50;
	static volatile int64_t x64 = -1LL;
	int32_t t10 = -2140;

	t10 = (x61<((x62+x63)*x64));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x65 = INT64_MAX;
	volatile int8_t x66 = 1;
	int32_t x67 = 22130985;
	int32_t t11 = -61155008;

	t11 = (x65<((x66+x67)*x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = 8727U;
	static uint8_t x71 = 38U;
	uint8_t x72 = 1U;

	t12 = (x69<((x70+x71)*x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MIN;
	uint8_t x74 = UINT8_MAX;
	static uint8_t x75 = 22U;
	static int16_t x76 = INT16_MAX;
	static volatile int32_t t13 = -65422;

	t13 = (x73<((x74+x75)*x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 2736986LLU;
	static uint64_t x78 = 1LLU;
	int32_t x80 = INT32_MIN;
	int32_t t14 = 1032;

	t14 = (x77<((x78+x79)*x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 41LLU;
	int16_t x82 = INT16_MAX;
	int16_t x83 = INT16_MIN;
	static int32_t t15 = -2;

	t15 = (x81<((x82+x83)*x84));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -1;
	volatile int64_t x90 = 172749LL;
	static int8_t x91 = -1;
	static int32_t t16 = 0;

	t16 = (x89<((x90+x91)*x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1LL;
	static uint8_t x99 = 3U;
	uint64_t x100 = 374024649290LLU;
	volatile int32_t t17 = -15202526;

	t17 = (x97<((x98+x99)*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = -1;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	static uint16_t x104 = UINT16_MAX;
	int32_t t18 = 431454318;

	t18 = (x101<((x102+x103)*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = 90350202;
	volatile int32_t x110 = INT32_MIN;
	uint64_t x111 = 336718LLU;
	int32_t t19 = -102204;

	t19 = (x109<((x110+x111)*x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = INT16_MAX;
	uint32_t x114 = 17U;
	int32_t x115 = -1;
	int16_t x116 = -1;

	t20 = (x113<((x114+x115)*x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MAX;
	volatile int8_t x122 = INT8_MIN;
	static volatile int64_t x123 = -1LL;
	int16_t x124 = -1;

	t21 = (x121<((x122+x123)*x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = INT16_MAX;
	static int16_t x126 = -29;
	uint32_t x127 = 5365U;
	int64_t x128 = -1LL;
	volatile int32_t t22 = -5047458;

	t22 = (x125<((x126+x127)*x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	int8_t x131 = -3;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t23 = 1947020;

	t23 = (x129<((x130+x131)*x132));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -28027LL;
	volatile int32_t t24 = 6193;

	t24 = (x137<((x138+x139)*x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 8U;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t25 = -1256270;

	t25 = (x141<((x142+x143)*x144));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = 2558;
	volatile uint16_t x147 = UINT16_MAX;
	uint8_t x148 = 3U;

	t26 = (x145<((x146+x147)*x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MIN;
	int16_t x155 = -1608;
	int64_t x156 = 1324680LL;

	t27 = (x153<((x154+x155)*x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = INT8_MIN;
	volatile uint8_t x167 = 4U;
	volatile int32_t t28 = 227014657;

	t28 = (x165<((x166+x167)*x168));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x173 = 871118528003227844LLU;
	int8_t x174 = 1;
	volatile uint8_t x175 = 94U;
	uint8_t x176 = 81U;

	t29 = (x173<((x174+x175)*x176));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x178 = INT16_MAX;
	volatile int16_t x180 = 0;
	int32_t t30 = 1067;

	t30 = (x177<((x178+x179)*x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x182 = 1;
	volatile int32_t t31 = 5;

	t31 = (x181<((x182+x183)*x184));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = 277664LL;
	volatile int64_t x188 = -1LL;
	int32_t t32 = -164639409;

	t32 = (x185<((x186+x187)*x188));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x190 = -1572345LL;
	uint16_t x191 = 11658U;

	t33 = (x189<((x190+x191)*x192));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	int16_t x203 = INT16_MIN;
	static int8_t x204 = INT8_MAX;

	t34 = (x201<((x202+x203)*x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x205 = 217138589U;
	static int32_t x206 = INT32_MAX;
	volatile uint32_t x207 = 9010U;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t35 = 6518;

	t35 = (x205<((x206+x207)*x208));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = -2LL;
	int64_t x216 = -19LL;
	int32_t t36 = -454708550;

	t36 = (x213<((x214+x215)*x216));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = INT64_MAX;
	uint32_t x224 = 934977U;
	int32_t t37 = 166691175;

	t37 = (x221<((x222+x223)*x224));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x225 = -1;
	static uint16_t x226 = 5U;
	int8_t x227 = -1;

	t38 = (x225<((x226+x227)*x228));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x229 = INT16_MIN;
	uint8_t x230 = 29U;
	int32_t x231 = INT32_MIN;
	int8_t x232 = -1;
	int32_t t39 = 16;

	t39 = (x229<((x230+x231)*x232));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x237 = UINT32_MAX;
	static int16_t x239 = -1;

	t40 = (x237<((x238+x239)*x240));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x241 = 857727933331308423LLU;
	static int16_t x242 = 2769;
	uint32_t x244 = 152817U;
	int32_t t41 = 7562;

	t41 = (x241<((x242+x243)*x244));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x245 = INT16_MAX;
	int32_t x247 = -1;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t42 = 1;

	t42 = (x245<((x246+x247)*x248));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x251 = 0U;
	int64_t x252 = -1LL;
	volatile int32_t t43 = 2;

	t43 = (x249<((x250+x251)*x252));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = -56704287959636141LL;
	uint32_t x263 = 15503504U;
	int32_t t44 = 447556437;

	t44 = (x261<((x262+x263)*x264));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x269 = -7;
	int32_t x270 = -1;
	uint8_t x271 = 0U;
	uint8_t x272 = UINT8_MAX;

	t45 = (x269<((x270+x271)*x272));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	uint8_t x280 = 1U;
	volatile int32_t t46 = 1541;

	t46 = (x277<((x278+x279)*x280));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x281 = 32364970495794254LLU;
	static int16_t x283 = -1;

	t47 = (x281<((x282+x283)*x284));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x289 = INT32_MAX;
	int16_t x290 = -10699;
	volatile uint64_t x291 = 3205718632837542278LLU;
	volatile int64_t x292 = -9LL;

	t48 = (x289<((x290+x291)*x292));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x293 = -32;
	uint8_t x295 = 14U;
	uint16_t x296 = 4U;
	volatile int32_t t49 = -210736624;

	t49 = (x293<((x294+x295)*x296));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x297 = 29754394081LL;
	volatile uint32_t x298 = 61166U;
	int64_t x299 = -438261982831LL;
	volatile int8_t x300 = -1;
	volatile int32_t t50 = -5686;

	t50 = (x297<((x298+x299)*x300));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x305 = 175826284LLU;
	volatile uint64_t x306 = 357904LLU;
	uint64_t x307 = 73579421874LLU;
	int8_t x308 = -1;
	volatile int32_t t51 = 1;

	t51 = (x305<((x306+x307)*x308));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x309 = 5650617LLU;
	int32_t x311 = INT32_MIN;
	volatile int16_t x312 = 1;
	int32_t t52 = 65229;

	t52 = (x309<((x310+x311)*x312));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = -1;
	int16_t x320 = -1;
	static int32_t t53 = -34;

	t53 = (x317<((x318+x319)*x320));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 111632LL;
	volatile int16_t x323 = -3;
	int32_t x324 = 953716;
	volatile int32_t t54 = 4377687;

	t54 = (x321<((x322+x323)*x324));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x325 = 972;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = 14261551U;
	int32_t x328 = INT32_MAX;
	volatile int32_t t55 = -142938;

	t55 = (x325<((x326+x327)*x328));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x334 = UINT64_MAX;
	static int64_t x335 = 17098839355LL;
	static volatile int32_t x336 = INT32_MIN;
	static int32_t t56 = 79644201;

	t56 = (x333<((x334+x335)*x336));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x337 = 15;
	int32_t x338 = INT32_MIN;
	static int64_t x340 = -1LL;

	t57 = (x337<((x338+x339)*x340));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MIN;
	static uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = INT16_MAX;
	int32_t t58 = 1826;

	t58 = (x341<((x342+x343)*x344));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = INT16_MAX;
	uint8_t x351 = 0U;
	volatile int32_t t59 = 2354;

	t59 = (x349<((x350+x351)*x352));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x353 = 0U;
	int64_t x355 = 5LL;
	static uint16_t x356 = 1U;
	volatile int32_t t60 = 454032866;

	t60 = (x353<((x354+x355)*x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x361 = -2321LL;
	static uint64_t x363 = 11678985470743LLU;
	static int64_t x364 = INT64_MIN;
	int32_t t61 = -220372933;

	t61 = (x361<((x362+x363)*x364));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x365 = INT32_MAX;
	int16_t x366 = -1;
	static uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t62 = 157021;

	t62 = (x365<((x366+x367)*x368));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x369 = -7;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MIN;
	int32_t t63 = 2800;

	t63 = (x369<((x370+x371)*x372));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x373 = 0U;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = 263718LL;
	volatile uint64_t x376 = 73212LLU;
	static volatile int32_t t64 = -1;

	t64 = (x373<((x374+x375)*x376));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x377 = 1051;
	uint8_t x378 = 57U;
	int8_t x379 = -1;
	uint32_t x380 = 646U;
	volatile int32_t t65 = 3827;

	t65 = (x377<((x378+x379)*x380));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x381 = INT8_MAX;
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = -1;
	uint16_t x384 = 18U;
	int32_t t66 = -848476;

	t66 = (x381<((x382+x383)*x384));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x397 = -367;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MAX;
	static int32_t t67 = -145;

	t67 = (x397<((x398+x399)*x400));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x401 = INT16_MIN;
	static uint64_t x402 = 680225839631774LLU;
	int64_t x403 = 2235697884554638LL;
	int64_t x404 = INT64_MIN;
	int32_t t68 = -18;

	t68 = (x401<((x402+x403)*x404));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x414 = 1U;
	int8_t x416 = INT8_MIN;
	volatile int32_t t69 = 4;

	t69 = (x413<((x414+x415)*x416));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x421 = -690812488LL;
	static int8_t x423 = INT8_MIN;
	int16_t x424 = -1;

	t70 = (x421<((x422+x423)*x424));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x433 = 103025452723078LLU;
	int8_t x434 = -1;
	static uint64_t x435 = UINT64_MAX;
	volatile int16_t x436 = -1;

	t71 = (x433<((x434+x435)*x436));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x437 = -81624024;
	static int8_t x438 = -1;
	static uint8_t x440 = 3U;
	int32_t t72 = -66033;

	t72 = (x437<((x438+x439)*x440));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x445 = INT32_MIN;
	int8_t x446 = 12;
	static volatile int8_t x448 = INT8_MIN;
	volatile int32_t t73 = 3341;

	t73 = (x445<((x446+x447)*x448));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x461 = 34U;
	static uint32_t x463 = 1164U;
	volatile uint16_t x464 = UINT16_MAX;

	t74 = (x461<((x462+x463)*x464));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x465 = INT32_MIN;
	volatile uint16_t x466 = 3124U;
	uint64_t x467 = 11470LLU;
	uint32_t x468 = UINT32_MAX;
	static volatile int32_t t75 = 361507;

	t75 = (x465<((x466+x467)*x468));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x470 = -3;
	volatile int32_t t76 = -93;

	t76 = (x469<((x470+x471)*x472));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x473 = 119U;
	int8_t x474 = INT8_MIN;
	volatile uint16_t x475 = UINT16_MAX;
	uint8_t x476 = UINT8_MAX;
	int32_t t77 = -10;

	t77 = (x473<((x474+x475)*x476));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x478 = INT32_MAX;
	int64_t x480 = -1LL;
	int32_t t78 = -2;

	t78 = (x477<((x478+x479)*x480));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x481 = INT32_MIN;
	int64_t x482 = INT64_MIN;
	uint8_t x483 = 2U;
	static int64_t x484 = -1LL;
	int32_t t79 = -557546;

	t79 = (x481<((x482+x483)*x484));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x486 = -5416;
	volatile int32_t x488 = -1;

	t80 = (x485<((x486+x487)*x488));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x489 = -1;
	volatile int64_t x491 = -1LL;
	int32_t x492 = INT32_MAX;
	volatile int32_t t81 = -98;

	t81 = (x489<((x490+x491)*x492));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x493 = UINT8_MAX;
	static int64_t x494 = -1LL;
	int64_t x495 = -1LL;
	static uint8_t x496 = 3U;
	volatile int32_t t82 = 2;

	t82 = (x493<((x494+x495)*x496));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x497 = 62259573442LLU;
	int64_t x498 = -12LL;
	static int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	int32_t t83 = 2;

	t83 = (x497<((x498+x499)*x500));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x501 = 3341146902LLU;
	int8_t x502 = INT8_MIN;
	int64_t x503 = -1LL;
	int32_t x504 = INT32_MAX;
	volatile int32_t t84 = -338;

	t84 = (x501<((x502+x503)*x504));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x506 = -10;
	volatile uint16_t x507 = 6861U;
	static int8_t x508 = INT8_MAX;
	volatile int32_t t85 = 9983360;

	t85 = (x505<((x506+x507)*x508));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x511 = INT16_MAX;
	int32_t t86 = -7400;

	t86 = (x509<((x510+x511)*x512));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x518 = INT32_MIN;
	static uint32_t x519 = 2373336U;
	static int32_t x520 = -1;

	t87 = (x517<((x518+x519)*x520));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x522 = 88039;
	uint64_t x523 = UINT64_MAX;

	t88 = (x521<((x522+x523)*x524));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x526 = UINT32_MAX;
	uint8_t x527 = UINT8_MAX;
	int32_t x528 = -109055;
	int32_t t89 = -1;

	t89 = (x525<((x526+x527)*x528));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x529 = 2748LLU;
	int64_t x530 = 2112101128140LL;
	int16_t x531 = INT16_MAX;
	volatile uint16_t x532 = 557U;

	t90 = (x529<((x530+x531)*x532));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x538 = INT16_MAX;
	uint32_t x539 = 6984061U;
	int8_t x540 = INT8_MAX;
	static int32_t t91 = -2492948;

	t91 = (x537<((x538+x539)*x540));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x541 = 6;
	volatile int16_t x542 = INT16_MAX;
	uint8_t x544 = 1U;

	t92 = (x541<((x542+x543)*x544));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x545 = 177476440U;
	int16_t x546 = INT16_MAX;
	uint32_t x548 = UINT32_MAX;
	static volatile int32_t t93 = 1097583;

	t93 = (x545<((x546+x547)*x548));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x549 = -1LL;
	int16_t x550 = INT16_MAX;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = 226;
	volatile int32_t t94 = -57778937;

	t94 = (x549<((x550+x551)*x552));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x553 = 108845176U;
	uint16_t x554 = 0U;
	static uint8_t x555 = 93U;
	volatile int32_t t95 = 1;

	t95 = (x553<((x554+x555)*x556));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x560 = INT8_MIN;
	int32_t t96 = -6;

	t96 = (x557<((x558+x559)*x560));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = 11U;
	uint64_t x567 = 8933099167LLU;
	int8_t x568 = INT8_MIN;
	volatile int32_t t97 = -232867;

	t97 = (x565<((x566+x567)*x568));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x569 = -1LL;
	int8_t x570 = 0;
	uint32_t x572 = 0U;
	int32_t t98 = 73744;

	t98 = (x569<((x570+x571)*x572));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x573 = INT32_MIN;
	static uint64_t x574 = UINT64_MAX;
	volatile int32_t t99 = 4610;

	t99 = (x573<((x574+x575)*x576));

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

