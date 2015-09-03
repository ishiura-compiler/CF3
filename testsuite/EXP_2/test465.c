#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
volatile int8_t x7 = -2;
int32_t x9 = INT32_MIN;
int32_t t2 = -179752;
static volatile int16_t x16 = 292;
uint8_t x26 = 1U;
int32_t x31 = -236879147;
volatile int32_t t6 = -2173670;
uint16_t x39 = 287U;
volatile int32_t t8 = -639;
int64_t x51 = 120LL;
int32_t x53 = 191;
int16_t x56 = -126;
volatile uint64_t x62 = 0LLU;
static uint32_t x64 = 42134U;
static int8_t x67 = -1;
static int8_t x68 = INT8_MAX;
static int8_t x74 = -44;
uint32_t x126 = 16U;
int32_t x129 = INT32_MAX;
uint16_t x130 = UINT16_MAX;
int8_t x133 = INT8_MIN;
int16_t x142 = INT16_MIN;
uint8_t x143 = 3U;
volatile int64_t x144 = INT64_MAX;
static int16_t x147 = INT16_MIN;
uint32_t x148 = 41892U;
static uint8_t x149 = 2U;
volatile int32_t t24 = -1574561;
int16_t x153 = -66;
static volatile uint32_t x158 = 97587423U;
volatile int8_t x159 = INT8_MIN;
int32_t t26 = -1966323;
volatile int32_t t27 = 1;
volatile int8_t x183 = INT8_MAX;
uint16_t x188 = UINT16_MAX;
static int32_t t32 = -40;
static uint8_t x194 = UINT8_MAX;
volatile int8_t x206 = -1;
volatile int64_t x221 = -25445058LL;
int32_t t38 = -918;
int16_t x230 = INT16_MAX;
volatile int64_t x270 = -1LL;
int32_t t43 = 6731545;
int64_t x276 = -1LL;
volatile int32_t t46 = 2261245;
int32_t x294 = -1;
volatile int32_t t51 = -410;
volatile int64_t x318 = -1LL;
volatile uint32_t x339 = 0U;
int32_t x345 = -1414779;
static int16_t x346 = -1;
int32_t t62 = -46;
static uint64_t x357 = 1578231LLU;
int16_t x362 = -1336;
int8_t x366 = 1;
int32_t x369 = -130798;
int8_t x370 = INT8_MIN;
int16_t x383 = 3882;
volatile int32_t t67 = -990937;
int64_t x395 = -1LL;
static int64_t x396 = -1LL;
int32_t t68 = 74046;
uint64_t x413 = UINT64_MAX;
static uint32_t x416 = 1592076864U;
int16_t x418 = -1;
volatile int32_t x432 = INT32_MIN;
static int32_t t75 = -750622691;
volatile int8_t x439 = INT8_MAX;
uint32_t x445 = 14U;
static volatile uint32_t x456 = 273U;
uint32_t x458 = 881775U;
static volatile int32_t t83 = 4913;
uint16_t x479 = 278U;
static int64_t x485 = -4893398749435045LL;
int64_t x487 = INT64_MIN;
static int32_t x489 = INT32_MIN;
static int8_t x492 = INT8_MAX;
int32_t t88 = -58969308;
uint16_t x511 = 975U;
int16_t x513 = 2;
volatile uint32_t x515 = 231486050U;
int16_t x520 = INT16_MAX;
volatile int32_t x522 = INT32_MIN;
int32_t t94 = 2720;
volatile int32_t t95 = -420;
uint32_t x531 = 1U;
int64_t x532 = INT64_MAX;
volatile uint8_t x549 = 3U;
int32_t t98 = 5;
int8_t x557 = INT8_MAX;


void f0(void) {
	volatile int64_t x2 = 3691835LL;
	int64_t x3 = -16101917378LL;
	int16_t x4 = -1;
	int32_t t0 = -144;

	t0 = ((x1<=(x2*x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -282373;
	static int8_t x6 = INT8_MIN;
	volatile int64_t x8 = 112666617198249LL;
	int32_t t1 = -192739;

	t1 = ((x5<=(x6*x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = UINT16_MAX;
	uint8_t x11 = UINT8_MAX;
	uint64_t x12 = UINT64_MAX;

	t2 = ((x9<=(x10*x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MAX;
	int64_t x15 = -4LL;
	static int32_t t3 = -43321;

	t3 = ((x13<=(x14*x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	int32_t x19 = -198;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 1;

	t4 = ((x17<=(x18*x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = UINT8_MAX;
	int16_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 1308361;

	t5 = ((x25<=(x26*x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1092814LL;
	uint32_t x30 = UINT32_MAX;
	int64_t x32 = INT64_MIN;

	t6 = ((x29<=(x30*x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 27U;
	int8_t x38 = -1;
	volatile int8_t x40 = -1;
	static int32_t t7 = 45688388;

	t7 = ((x37<=(x38*x39))<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = 20;
	int8_t x46 = -1;
	static uint32_t x47 = 12878195U;
	int16_t x48 = 7672;

	t8 = ((x45<=(x46*x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x49 = 55420341961553LL;
	volatile uint32_t x50 = 2U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t9 = -2289;

	t9 = ((x49<=(x50*x51))<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x54 = -32;
	volatile uint8_t x55 = 0U;
	int32_t t10 = -36691688;

	t10 = ((x53<=(x54*x55))<=x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -102123480980261319LL;
	int32_t x58 = -1;
	uint32_t x59 = 259403U;
	static uint64_t x60 = 30488745709775272LLU;
	volatile int32_t t11 = 341104152;

	t11 = ((x57<=(x58*x59))<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 1;
	volatile int64_t x63 = INT64_MIN;
	int32_t t12 = -1;

	t12 = ((x61<=(x62*x63))<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = 1572472U;
	int16_t x66 = INT16_MIN;
	static int32_t t13 = -7098541;

	t13 = ((x65<=(x66*x67))<=x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = -3;
	static int8_t x71 = 6;
	static volatile int16_t x72 = 750;
	volatile int32_t t14 = 1380;

	t14 = ((x69<=(x70*x71))<=x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int32_t x75 = 12967;
	int32_t x76 = INT32_MIN;
	volatile int32_t t15 = 6;

	t15 = ((x73<=(x74*x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x81 = UINT64_MAX;
	static uint16_t x82 = 3117U;
	static int16_t x83 = INT16_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t16 = -1;

	t16 = ((x81<=(x82*x83))<=x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x109 = 6LLU;
	int8_t x110 = -1;
	static int16_t x111 = INT16_MAX;
	int8_t x112 = 1;
	int32_t t17 = -74;

	t17 = ((x109<=(x110*x111))<=x112);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x121 = UINT16_MAX;
	static int8_t x122 = 1;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	static int32_t t18 = -35;

	t18 = ((x121<=(x122*x123))<=x124);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x125 = 350984;
	int8_t x127 = 28;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t19 = 411;

	t19 = ((x125<=(x126*x127))<=x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x131 = -1;
	static uint16_t x132 = 14877U;
	int32_t t20 = 4;

	t20 = ((x129<=(x130*x131))<=x132);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x134 = INT16_MIN;
	uint8_t x135 = UINT8_MAX;
	static uint16_t x136 = 82U;
	volatile int32_t t21 = 0;

	t21 = ((x133<=(x134*x135))<=x136);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x141 = 3963731559517918414LL;
	int32_t t22 = -89;

	t22 = ((x141<=(x142*x143))<=x144);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x145 = INT8_MAX;
	static int16_t x146 = 23;
	volatile int32_t t23 = 3035437;

	t23 = ((x145<=(x146*x147))<=x148);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x150 = -28;
	static uint64_t x151 = 166652275851LLU;
	volatile int64_t x152 = INT64_MAX;

	t24 = ((x149<=(x150*x151))<=x152);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x154 = 491950LLU;
	volatile uint32_t x155 = 608081U;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t25 = -133843;

	t25 = ((x153<=(x154*x155))<=x156);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x157 = 11U;
	int8_t x160 = INT8_MAX;

	t26 = ((x157<=(x158*x159))<=x160);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x161 = 14U;
	volatile uint32_t x162 = 7346U;
	int16_t x163 = INT16_MAX;
	volatile uint64_t x164 = 123031682408962208LLU;

	t27 = ((x161<=(x162*x163))<=x164);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = UINT8_MAX;
	uint8_t x166 = 0U;
	static volatile uint32_t x167 = 6668016U;
	int32_t x168 = 667785943;
	volatile int32_t t28 = -1902384;

	t28 = ((x165<=(x166*x167))<=x168);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -32047381012LL;
	int64_t x170 = -347LL;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MAX;
	volatile int32_t t29 = -152572;

	t29 = ((x169<=(x170*x171))<=x172);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x173 = -1;
	volatile uint8_t x174 = 48U;
	uint32_t x175 = 13U;
	int32_t x176 = -2;
	volatile int32_t t30 = 60013464;

	t30 = ((x173<=(x174*x175))<=x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MAX;
	uint32_t x184 = 108881486U;
	volatile int32_t t31 = 1076;

	t31 = ((x181<=(x182*x183))<=x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x185 = -1;
	uint8_t x186 = 120U;
	volatile uint8_t x187 = 116U;

	t32 = ((x185<=(x186*x187))<=x188);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x193 = 22515U;
	int16_t x195 = -1;
	volatile uint32_t x196 = UINT32_MAX;
	int32_t t33 = 207692068;

	t33 = ((x193<=(x194*x195))<=x196);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = -3029LL;
	static int16_t x199 = -1;
	int32_t x200 = INT32_MAX;
	static volatile int32_t t34 = -1;

	t34 = ((x197<=(x198*x199))<=x200);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x201 = 0U;
	int32_t x202 = 613;
	int8_t x203 = -12;
	int32_t x204 = INT32_MAX;
	volatile int32_t t35 = -1842854;

	t35 = ((x201<=(x202*x203))<=x204);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = INT8_MAX;
	int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	volatile int32_t t36 = 636433785;

	t36 = ((x205<=(x206*x207))<=x208);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x209 = UINT8_MAX;
	static uint32_t x210 = 1420425U;
	volatile int16_t x211 = -1;
	int8_t x212 = 1;
	volatile int32_t t37 = 1;

	t37 = ((x209<=(x210*x211))<=x212);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x222 = UINT16_MAX;
	volatile uint32_t x223 = 5127U;
	int16_t x224 = INT16_MAX;

	t38 = ((x221<=(x222*x223))<=x224);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x225 = INT16_MIN;
	static uint16_t x226 = 60U;
	static int8_t x227 = INT8_MIN;
	volatile int32_t x228 = -1;
	int32_t t39 = -595599;

	t39 = ((x225<=(x226*x227))<=x228);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x229 = 247LLU;
	int16_t x231 = INT16_MAX;
	uint8_t x232 = 0U;
	volatile int32_t t40 = 1467;

	t40 = ((x229<=(x230*x231))<=x232);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static int32_t x242 = -423708;
	uint16_t x243 = 35U;
	int64_t x244 = -1262LL;
	volatile int32_t t41 = -20;

	t41 = ((x241<=(x242*x243))<=x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x257 = 1U;
	static uint64_t x258 = UINT64_MAX;
	volatile int64_t x259 = INT64_MAX;
	volatile int32_t x260 = -1;
	volatile int32_t t42 = 3;

	t42 = ((x257<=(x258*x259))<=x260);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	volatile int32_t x272 = INT32_MIN;

	t43 = ((x269<=(x270*x271))<=x272);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x273 = 5U;
	volatile uint8_t x274 = 74U;
	volatile int64_t x275 = -6300000350645LL;
	volatile int32_t t44 = -4472;

	t44 = ((x273<=(x274*x275))<=x276);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x277 = 0;
	static uint64_t x278 = UINT64_MAX;
	static int8_t x279 = -1;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t45 = 691021106;

	t45 = ((x277<=(x278*x279))<=x280);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x281 = 48754153;
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MIN;

	t46 = ((x281<=(x282*x283))<=x284);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x285 = 86U;
	volatile uint16_t x286 = 2448U;
	static uint32_t x287 = 172U;
	int16_t x288 = -30;
	static int32_t t47 = 64574;

	t47 = ((x285<=(x286*x287))<=x288);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x289 = UINT64_MAX;
	volatile uint16_t x290 = 266U;
	int64_t x291 = -5LL;
	int64_t x292 = INT64_MIN;
	volatile int32_t t48 = 33501;

	t48 = ((x289<=(x290*x291))<=x292);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x293 = -1;
	int32_t x295 = -4;
	volatile int64_t x296 = 1LL;
	volatile int32_t t49 = -1;

	t49 = ((x293<=(x294*x295))<=x296);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x297 = INT32_MAX;
	static volatile int64_t x298 = INT64_MAX;
	uint64_t x299 = 63282820802031LLU;
	static uint32_t x300 = 34U;
	volatile int32_t t50 = -102025722;

	t50 = ((x297<=(x298*x299))<=x300);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x301 = -1;
	int16_t x302 = 3440;
	static uint16_t x303 = 59U;
	static uint16_t x304 = UINT16_MAX;

	t51 = ((x301<=(x302*x303))<=x304);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x309 = -894192031558212LL;
	uint32_t x310 = 56U;
	uint32_t x311 = UINT32_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t52 = 243;

	t52 = ((x309<=(x310*x311))<=x312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MIN;
	volatile uint64_t x315 = 8358701628LLU;
	int8_t x316 = INT8_MAX;
	static volatile int32_t t53 = 572;

	t53 = ((x313<=(x314*x315))<=x316);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = INT32_MAX;
	volatile int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;
	int32_t t54 = 0;

	t54 = ((x317<=(x318*x319))<=x320);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 1U;
	int32_t x324 = INT32_MIN;
	volatile int32_t t55 = -7342427;

	t55 = ((x321<=(x322*x323))<=x324);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x325 = INT8_MAX;
	static int16_t x326 = -1;
	volatile uint16_t x327 = 8666U;
	uint16_t x328 = UINT16_MAX;
	int32_t t56 = 533923257;

	t56 = ((x325<=(x326*x327))<=x328);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = -2;
	uint32_t x334 = 57U;
	int8_t x335 = 13;
	int32_t x336 = -272;
	int32_t t57 = -576;

	t57 = ((x333<=(x334*x335))<=x336);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x337 = 1U;
	volatile uint64_t x338 = 320067806834313744LLU;
	uint16_t x340 = 2168U;
	int32_t t58 = 5536;

	t58 = ((x337<=(x338*x339))<=x340);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = 3;
	int8_t x344 = INT8_MIN;
	volatile int32_t t59 = 66334;

	t59 = ((x341<=(x342*x343))<=x344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x347 = -1;
	int64_t x348 = -2070380672LL;
	static volatile int32_t t60 = 241901;

	t60 = ((x345<=(x346*x347))<=x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x349 = 1303;
	static int16_t x350 = -1583;
	uint64_t x351 = 3574075257655167595LLU;
	int64_t x352 = 6851693234LL;
	static volatile int32_t t61 = 7637431;

	t61 = ((x349<=(x350*x351))<=x352);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x353 = 2U;
	volatile int8_t x354 = INT8_MIN;
	static int64_t x355 = -1LL;
	int64_t x356 = -1LL;

	t62 = ((x353<=(x354*x355))<=x356);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x358 = 8258504808137752LL;
	int16_t x359 = -200;
	int64_t x360 = INT64_MIN;
	volatile int32_t t63 = -10;

	t63 = ((x357<=(x358*x359))<=x360);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x361 = UINT16_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	volatile uint64_t x364 = 3349236LLU;
	static volatile int32_t t64 = -6;

	t64 = ((x361<=(x362*x363))<=x364);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x365 = 19U;
	uint64_t x367 = UINT64_MAX;
	uint16_t x368 = UINT16_MAX;
	int32_t t65 = -332814070;

	t65 = ((x365<=(x366*x367))<=x368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x371 = 20869149242LL;
	static int16_t x372 = INT16_MIN;
	int32_t t66 = 1974;

	t66 = ((x369<=(x370*x371))<=x372);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x381 = INT32_MIN;
	uint16_t x382 = UINT16_MAX;
	int32_t x384 = INT32_MIN;

	t67 = ((x381<=(x382*x383))<=x384);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x394 = UINT32_MAX;

	t68 = ((x393<=(x394*x395))<=x396);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x397 = 128699204597LLU;
	uint8_t x398 = 3U;
	volatile uint64_t x399 = 3104427LLU;
	uint8_t x400 = 22U;
	int32_t t69 = 1568520;

	t69 = ((x397<=(x398*x399))<=x400);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x401 = 19;
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t70 = 14;

	t70 = ((x401<=(x402*x403))<=x404);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x405 = -20638;
	volatile int8_t x406 = -1;
	int8_t x407 = -36;
	int64_t x408 = -2265LL;
	int32_t t71 = 4016;

	t71 = ((x405<=(x406*x407))<=x408);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x414 = -1061;
	static uint8_t x415 = 107U;
	int32_t t72 = -22;

	t72 = ((x413<=(x414*x415))<=x416);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x417 = INT8_MIN;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = -1;
	volatile int32_t t73 = -4078970;

	t73 = ((x417<=(x418*x419))<=x420);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = INT16_MIN;
	static int32_t x426 = 1;
	uint64_t x427 = 52LLU;
	uint32_t x428 = 482773U;
	static volatile int32_t t74 = -7;

	t74 = ((x425<=(x426*x427))<=x428);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x429 = INT64_MIN;
	int16_t x430 = INT16_MIN;
	int16_t x431 = INT16_MAX;

	t75 = ((x429<=(x430*x431))<=x432);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x433 = INT32_MIN;
	static int32_t x434 = 43;
	int8_t x435 = INT8_MAX;
	static uint32_t x436 = 229352U;
	volatile int32_t t76 = 538387;

	t76 = ((x433<=(x434*x435))<=x436);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x437 = -1LL;
	uint8_t x438 = UINT8_MAX;
	uint16_t x440 = UINT16_MAX;
	int32_t t77 = -1;

	t77 = ((x437<=(x438*x439))<=x440);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = -16;
	int16_t x448 = INT16_MIN;
	int32_t t78 = 1898438;

	t78 = ((x445<=(x446*x447))<=x448);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x449 = 952318186489443238LLU;
	volatile uint64_t x450 = 272933887700167LLU;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = INT16_MIN;
	static int32_t t79 = 553;

	t79 = ((x449<=(x450*x451))<=x452);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x453 = INT64_MIN;
	uint8_t x454 = 1U;
	uint32_t x455 = 1581787029U;
	static int32_t t80 = -255356232;

	t80 = ((x453<=(x454*x455))<=x456);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x457 = UINT8_MAX;
	int16_t x459 = INT16_MIN;
	int32_t x460 = 3923;
	volatile int32_t t81 = -169;

	t81 = ((x457<=(x458*x459))<=x460);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x465 = INT64_MAX;
	volatile uint32_t x466 = 2U;
	static uint8_t x467 = 0U;
	volatile uint32_t x468 = UINT32_MAX;
	volatile int32_t t82 = 40436;

	t82 = ((x465<=(x466*x467))<=x468);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = 29;
	int8_t x471 = -29;
	volatile int8_t x472 = -4;

	t83 = ((x469<=(x470*x471))<=x472);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x473 = 1;
	volatile int32_t x474 = -1;
	static int8_t x475 = -5;
	int8_t x476 = -1;
	int32_t t84 = 8;

	t84 = ((x473<=(x474*x475))<=x476);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x477 = INT64_MAX;
	uint8_t x478 = 14U;
	volatile int32_t x480 = 191826626;
	int32_t t85 = 27869;

	t85 = ((x477<=(x478*x479))<=x480);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x481 = INT8_MAX;
	static int64_t x482 = -1LL;
	static int8_t x483 = -1;
	uint16_t x484 = 59U;
	volatile int32_t t86 = 123;

	t86 = ((x481<=(x482*x483))<=x484);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x486 = 1;
	uint16_t x488 = 5169U;
	static int32_t t87 = 14351;

	t87 = ((x485<=(x486*x487))<=x488);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x490 = UINT32_MAX;
	int16_t x491 = -1011;

	t88 = ((x489<=(x490*x491))<=x492);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x497 = 49U;
	int32_t x498 = INT32_MAX;
	int16_t x499 = -1;
	int64_t x500 = INT64_MAX;
	int32_t t89 = 122810;

	t89 = ((x497<=(x498*x499))<=x500);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x501 = INT64_MAX;
	int16_t x502 = -1;
	volatile uint32_t x503 = UINT32_MAX;
	volatile uint8_t x504 = 3U;
	volatile int32_t t90 = 6780;

	t90 = ((x501<=(x502*x503))<=x504);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x509 = 2365U;
	uint64_t x510 = 15LLU;
	int32_t x512 = -2;
	volatile int32_t t91 = -137;

	t91 = ((x509<=(x510*x511))<=x512);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x514 = INT16_MAX;
	uint64_t x516 = UINT64_MAX;
	static int32_t t92 = -172018676;

	t92 = ((x513<=(x514*x515))<=x516);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x517 = INT64_MAX;
	volatile int16_t x518 = INT16_MIN;
	uint64_t x519 = UINT64_MAX;
	int32_t t93 = 25889;

	t93 = ((x517<=(x518*x519))<=x520);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x521 = UINT32_MAX;
	uint32_t x523 = UINT32_MAX;
	static int32_t x524 = INT32_MAX;

	t94 = ((x521<=(x522*x523))<=x524);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x525 = INT16_MIN;
	volatile int16_t x526 = INT16_MAX;
	static uint64_t x527 = UINT64_MAX;
	int64_t x528 = 27LL;

	t95 = ((x525<=(x526*x527))<=x528);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x529 = -1;
	volatile int64_t x530 = INT64_MAX;
	int32_t t96 = 236365;

	t96 = ((x529<=(x530*x531))<=x532);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x545 = 4U;
	uint32_t x546 = UINT32_MAX;
	int16_t x547 = -1;
	volatile uint32_t x548 = 1U;
	static int32_t t97 = -572944629;

	t97 = ((x545<=(x546*x547))<=x548);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x550 = INT16_MAX;
	int32_t x551 = 833;
	volatile int64_t x552 = INT64_MIN;

	t98 = ((x549<=(x550*x551))<=x552);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x558 = 70150487U;
	int32_t x559 = -1545;
	uint32_t x560 = UINT32_MAX;
	int32_t t99 = -1024388521;

	t99 = ((x557<=(x558*x559))<=x560);

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

