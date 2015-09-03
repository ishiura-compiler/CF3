#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -8;
volatile int8_t x13 = INT8_MIN;
volatile int32_t t3 = 17818;
uint32_t x17 = 609U;
int16_t x19 = INT16_MAX;
static volatile int32_t x30 = 19976972;
int16_t x32 = 4;
int32_t t5 = -9698419;
static int32_t x33 = -218876;
volatile int32_t t6 = 77771325;
int16_t x41 = 2;
volatile int32_t t7 = 861659;
volatile int32_t t8 = 79;
static int32_t x58 = 68767;
int16_t x72 = INT16_MAX;
int32_t t10 = -123496;
static int32_t x74 = -1;
volatile int32_t x89 = -1;
uint32_t x92 = 926931266U;
uint32_t x101 = UINT32_MAX;
static int16_t x105 = INT16_MIN;
int32_t t16 = 2527589;
volatile int8_t x110 = 4;
int8_t x112 = INT8_MAX;
volatile int32_t t18 = -3;
static uint32_t x130 = 4U;
uint64_t x136 = UINT64_MAX;
volatile int32_t t21 = -4927;
static int64_t x153 = INT64_MAX;
uint16_t x155 = 21U;
uint64_t x156 = UINT64_MAX;
volatile int64_t x171 = -1LL;
int8_t x174 = 7;
volatile uint8_t x176 = 70U;
volatile int32_t t26 = 871021;
volatile int16_t x180 = -1;
int8_t x194 = -1;
static int32_t t30 = 0;
int64_t x201 = INT64_MAX;
volatile int8_t x208 = 2;
int16_t x223 = -61;
static volatile int16_t x227 = INT16_MIN;
uint8_t x237 = UINT8_MAX;
int64_t x240 = 1892357568887793LL;
volatile int64_t x242 = INT64_MIN;
int32_t t40 = 1581;
volatile int8_t x262 = INT8_MAX;
int32_t x268 = INT32_MIN;
uint16_t x272 = UINT16_MAX;
int32_t t44 = -284636;
int8_t x278 = -1;
int32_t t48 = -4116715;
int32_t x302 = 1767797;
int16_t x303 = INT16_MIN;
volatile int32_t t50 = -6;
volatile int32_t t52 = -1980;
static volatile int16_t x314 = 333;
uint8_t x317 = 19U;
uint8_t x322 = UINT8_MAX;
int8_t x324 = 12;
uint16_t x326 = UINT16_MAX;
uint64_t x327 = 168141885845LLU;
int16_t x331 = -1;
int32_t x333 = INT32_MIN;
volatile int32_t t58 = -44;
int16_t x341 = -1;
int32_t x345 = INT32_MIN;
uint32_t x361 = 1667U;
int64_t x362 = -1LL;
static int32_t x370 = INT32_MIN;
int32_t t63 = -228630;
volatile int32_t t65 = 2525515;
static int32_t x396 = 234;
uint32_t x397 = 2795323U;
volatile int32_t t68 = -2;
int16_t x422 = -54;
int64_t x423 = -1LL;
int32_t t72 = 22718932;
int32_t x426 = 114080;
uint16_t x432 = 3U;
static int32_t t77 = 144;
uint8_t x447 = 122U;
static int32_t t79 = -931981;
volatile uint8_t x454 = 79U;
uint16_t x471 = UINT16_MAX;
int32_t t84 = 16380076;
uint32_t x504 = UINT32_MAX;
int32_t t87 = 7518025;
int32_t t88 = -56254;
static int16_t x545 = 6;
uint64_t x550 = 9620661518508LLU;
volatile uint64_t x552 = 447385103953180004LLU;
int32_t x555 = 809001;
int16_t x576 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	volatile int8_t x2 = INT8_MIN;
	uint64_t x3 = 6285973328949LLU;
	static int64_t x4 = INT64_MIN;

	t0 = (x1==(x2<(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 22632387LL;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 15U;
	int64_t x8 = -119800293802LL;
	static int32_t t1 = -200783;

	t1 = (x5==(x6<(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint32_t x10 = 378U;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 45439;

	t2 = (x9==(x10<(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = -1;
	static volatile int32_t x15 = INT32_MAX;
	static int8_t x16 = -1;

	t3 = (x13==(x14<(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	int8_t x20 = -1;
	int32_t t4 = 888295936;

	t4 = (x17==(x18<(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 61208941;
	int32_t x31 = 0;

	t5 = (x29==(x30<(x31*x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MAX;
	uint64_t x36 = 28632551420277LLU;

	t6 = (x33==(x34<(x35*x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = INT8_MIN;
	volatile int64_t x43 = 5595117301LL;
	int16_t x44 = INT16_MIN;

	t7 = (x41==(x42<(x43*x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	static int32_t x51 = -866253;
	int8_t x52 = INT8_MIN;

	t8 = (x49==(x50<(x51*x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -1LL;
	static int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	int32_t t9 = 26;

	t9 = (x57==(x58<(x59*x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = INT64_MIN;
	static volatile int32_t x70 = 365522;
	volatile uint8_t x71 = 26U;

	t10 = (x69==(x70<(x71*x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x75 = -1;
	uint8_t x76 = 4U;
	volatile int32_t t11 = 360001;

	t11 = (x73==(x74<(x75*x76)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	int32_t x87 = -1;
	uint16_t x88 = 1U;
	volatile int32_t t12 = -1;

	t12 = (x85==(x86<(x87*x88)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x90 = -1LL;
	static int32_t x91 = INT32_MIN;
	int32_t t13 = -169;

	t13 = (x89==(x90<(x91*x92)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	volatile uint8_t x99 = 49U;
	int16_t x100 = 76;
	static volatile int32_t t14 = -26;

	t14 = (x97==(x98<(x99*x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x102 = UINT16_MAX;
	volatile int32_t x103 = 65011;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t15 = -808;

	t15 = (x101==(x102<(x103*x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x106 = 104U;
	int64_t x107 = 4737239566190394LL;
	int32_t x108 = -42;

	t16 = (x105==(x106<(x107*x108)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = -1;
	static volatile int8_t x111 = INT8_MIN;
	int32_t t17 = -271391744;

	t17 = (x109==(x110<(x111*x112)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = INT32_MIN;
	uint16_t x114 = 0U;
	static int16_t x115 = -2;
	uint8_t x116 = UINT8_MAX;

	t18 = (x113==(x114<(x115*x116)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x117 = 7133U;
	uint16_t x118 = 15554U;
	static uint32_t x119 = 57504U;
	static uint8_t x120 = 10U;
	volatile int32_t t19 = -20133;

	t19 = (x117==(x118<(x119*x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = 46089843827LL;
	volatile int8_t x131 = INT8_MAX;
	uint8_t x132 = 4U;
	volatile int32_t t20 = -82310;

	t20 = (x129==(x130<(x131*x132)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x133 = -4954947869881LL;
	static int16_t x134 = -925;
	int32_t x135 = 1;

	t21 = (x133==(x134<(x135*x136)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = 23;
	volatile int16_t x138 = INT16_MIN;
	static int8_t x139 = INT8_MAX;
	uint8_t x140 = 4U;
	volatile int32_t t22 = -3;

	t22 = (x137==(x138<(x139*x140)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x149 = -1;
	int16_t x150 = -6781;
	int64_t x151 = -1LL;
	static uint8_t x152 = 26U;
	int32_t t23 = -1;

	t23 = (x149==(x150<(x151*x152)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x154 = -1;
	int32_t t24 = 9823;

	t24 = (x153==(x154<(x155*x156)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x169 = 69U;
	volatile int8_t x170 = 22;
	int8_t x172 = INT8_MIN;
	static int32_t t25 = -862856;

	t25 = (x169==(x170<(x171*x172)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x173 = 45776U;
	int64_t x175 = 32674177612006865LL;

	t26 = (x173==(x174<(x175*x176)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x177 = 27;
	uint16_t x178 = UINT16_MAX;
	int32_t x179 = -1;
	int32_t t27 = -3;

	t27 = (x177==(x178<(x179*x180)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x181 = 0;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 1644940331469626685LLU;
	int64_t x184 = 44322185506055LL;
	int32_t t28 = -41318;

	t28 = (x181==(x182<(x183*x184)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int64_t x190 = INT64_MAX;
	static uint32_t x191 = UINT32_MAX;
	int32_t x192 = 76818;
	volatile int32_t t29 = -10894099;

	t29 = (x189==(x190<(x191*x192)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x193 = -1;
	int8_t x195 = INT8_MAX;
	int8_t x196 = -9;

	t30 = (x193==(x194<(x195*x196)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x197 = INT32_MAX;
	volatile int16_t x198 = -13;
	int32_t x199 = -1;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t31 = 1;

	t31 = (x197==(x198<(x199*x200)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x202 = -51;
	volatile int16_t x203 = INT16_MIN;
	uint16_t x204 = 281U;
	static volatile int32_t t32 = 391931;

	t32 = (x201==(x202<(x203*x204)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = INT16_MIN;
	uint8_t x207 = 8U;
	int32_t t33 = 30132681;

	t33 = (x205==(x206<(x207*x208)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x217 = -1;
	int16_t x218 = INT16_MIN;
	static int16_t x219 = 1887;
	volatile int8_t x220 = INT8_MIN;
	int32_t t34 = -366;

	t34 = (x217==(x218<(x219*x220)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x221 = -1;
	static int32_t x222 = INT32_MAX;
	int16_t x224 = -1;
	volatile int32_t t35 = -857538;

	t35 = (x221==(x222<(x223*x224)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x225 = 14U;
	int32_t x226 = -1;
	uint8_t x228 = 6U;
	int32_t t36 = 324171;

	t36 = (x225==(x226<(x227*x228)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x229 = 6;
	volatile int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;
	int8_t x232 = -11;
	int32_t t37 = 30633666;

	t37 = (x229==(x230<(x231*x232)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x238 = 45U;
	uint8_t x239 = 9U;
	int32_t t38 = 238772;

	t38 = (x237==(x238<(x239*x240)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x241 = -7;
	static int64_t x243 = 1LL;
	volatile uint64_t x244 = 1583647LLU;
	volatile int32_t t39 = 5655488;

	t39 = (x241==(x242<(x243*x244)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x253 = -1;
	static uint32_t x254 = UINT32_MAX;
	static int16_t x255 = -1;
	int32_t x256 = -1;

	t40 = (x253==(x254<(x255*x256)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x257 = INT64_MIN;
	uint64_t x258 = 7757362316477904LLU;
	static int64_t x259 = 76079633LL;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t41 = 26;

	t41 = (x257==(x258<(x259*x260)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x261 = INT16_MIN;
	static uint32_t x263 = 16288708U;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t42 = 2078;

	t42 = (x261==(x262<(x263*x264)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x265 = UINT64_MAX;
	uint16_t x266 = UINT16_MAX;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t t43 = -7;

	t43 = (x265==(x266<(x267*x268)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x269 = 1U;
	static volatile int16_t x270 = 0;
	static uint64_t x271 = 6795710815974LLU;

	t44 = (x269==(x270<(x271*x272)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x273 = UINT32_MAX;
	uint32_t x274 = 771790U;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = INT16_MAX;
	static int32_t t45 = -2096272;

	t45 = (x273==(x274<(x275*x276)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x277 = 62U;
	int8_t x279 = INT8_MIN;
	static int8_t x280 = INT8_MIN;
	int32_t t46 = 0;

	t46 = (x277==(x278<(x279*x280)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int32_t x286 = INT32_MAX;
	int16_t x287 = -1;
	volatile uint8_t x288 = 1U;
	int32_t t47 = -3689971;

	t47 = (x285==(x286<(x287*x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = -1LL;
	int64_t x295 = -7276732LL;
	int32_t x296 = INT32_MIN;

	t48 = (x293==(x294<(x295*x296)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x297 = 93U;
	volatile int16_t x298 = INT16_MIN;
	uint32_t x299 = UINT32_MAX;
	volatile uint64_t x300 = 148515LLU;
	int32_t t49 = -63029;

	t49 = (x297==(x298<(x299*x300)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x301 = -1LL;
	static uint64_t x304 = 31921939LLU;

	t50 = (x301==(x302<(x303*x304)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x305 = -881;
	int64_t x306 = -790639497699LL;
	int8_t x307 = 12;
	int16_t x308 = INT16_MIN;
	volatile int32_t t51 = 434853;

	t51 = (x305==(x306<(x307*x308)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x309 = -1;
	static uint8_t x310 = 1U;
	int16_t x311 = 1;
	int64_t x312 = -12758LL;

	t52 = (x309==(x310<(x311*x312)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x313 = -1;
	int64_t x315 = 570336749920LL;
	int8_t x316 = -1;
	int32_t t53 = -700478949;

	t53 = (x313==(x314<(x315*x316)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MAX;
	int16_t x320 = 675;
	volatile int32_t t54 = 177162;

	t54 = (x317==(x318<(x319*x320)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x321 = INT16_MAX;
	static int16_t x323 = -1;
	volatile int32_t t55 = -205;

	t55 = (x321==(x322<(x323*x324)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x325 = INT8_MAX;
	int64_t x328 = -1LL;
	int32_t t56 = 209562;

	t56 = (x325==(x326<(x327*x328)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x329 = 9U;
	volatile int64_t x330 = INT64_MIN;
	static int16_t x332 = INT16_MIN;
	int32_t t57 = -204765397;

	t57 = (x329==(x330<(x331*x332)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x334 = 1;
	int8_t x335 = INT8_MIN;
	uint8_t x336 = 62U;

	t58 = (x333==(x334<(x335*x336)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 241033U;
	uint64_t x344 = UINT64_MAX;
	static volatile int32_t t59 = 107;

	t59 = (x341==(x342<(x343*x344)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x346 = 1U;
	int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t60 = -13859;

	t60 = (x345==(x346<(x347*x348)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x353 = 27859958742148LLU;
	int16_t x354 = 59;
	int16_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t61 = -36;

	t61 = (x353==(x354<(x355*x356)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x363 = 30;
	static uint32_t x364 = 220536U;
	static int32_t t62 = 27530;

	t62 = (x361==(x362<(x363*x364)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x369 = -1;
	int32_t x371 = -1;
	int64_t x372 = -1354585859867442664LL;

	t63 = (x369==(x370<(x371*x372)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x381 = 95U;
	int8_t x382 = 0;
	static uint16_t x383 = 63U;
	int16_t x384 = INT16_MIN;
	int32_t t64 = -234135674;

	t64 = (x381==(x382<(x383*x384)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x389 = 36;
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MAX;
	static int64_t x392 = -30637158188LL;

	t65 = (x389==(x390<(x391*x392)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x393 = -1;
	volatile int8_t x394 = -55;
	static uint8_t x395 = 1U;
	volatile int32_t t66 = -24971;

	t66 = (x393==(x394<(x395*x396)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x398 = UINT16_MAX;
	volatile int32_t x399 = -439;
	uint8_t x400 = UINT8_MAX;
	static int32_t t67 = 998907585;

	t67 = (x397==(x398<(x399*x400)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 229U;
	uint32_t x403 = 438668599U;
	int8_t x404 = -1;

	t68 = (x401==(x402<(x403*x404)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x405 = 531669445790463LL;
	static int8_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	int8_t x408 = -1;
	int32_t t69 = -1;

	t69 = (x405==(x406<(x407*x408)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x410 = INT32_MIN;
	static int32_t x411 = -5951798;
	int8_t x412 = INT8_MIN;
	int32_t t70 = 4335901;

	t70 = (x409==(x410<(x411*x412)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x413 = 0;
	static int32_t x414 = INT32_MIN;
	volatile uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t71 = 440;

	t71 = (x413==(x414<(x415*x416)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x421 = INT64_MIN;
	volatile int16_t x424 = INT16_MIN;

	t72 = (x421==(x422<(x423*x424)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x425 = 131485747780LL;
	static int8_t x427 = 2;
	int8_t x428 = 4;
	volatile int32_t t73 = 193470;

	t73 = (x425==(x426<(x427*x428)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x429 = -1;
	uint64_t x430 = UINT64_MAX;
	int8_t x431 = 11;
	int32_t t74 = 48232;

	t74 = (x429==(x430<(x431*x432)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x433 = UINT16_MAX;
	int64_t x434 = INT64_MIN;
	int16_t x435 = -7;
	int64_t x436 = -4895043865LL;
	volatile int32_t t75 = -946272;

	t75 = (x433==(x434<(x435*x436)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x437 = INT16_MAX;
	int8_t x438 = 4;
	static volatile int8_t x439 = -1;
	int8_t x440 = 2;
	volatile int32_t t76 = 10584;

	t76 = (x437==(x438<(x439*x440)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x441 = INT8_MIN;
	int32_t x442 = INT32_MAX;
	int16_t x443 = -1;
	uint32_t x444 = UINT32_MAX;

	t77 = (x441==(x442<(x443*x444)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x445 = -5;
	static int64_t x446 = 1923590503252365957LL;
	uint64_t x448 = 1311329735014640LLU;
	int32_t t78 = -2195;

	t78 = (x445==(x446<(x447*x448)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x449 = 0;
	int8_t x450 = INT8_MIN;
	int16_t x451 = -1;
	int16_t x452 = INT16_MIN;

	t79 = (x449==(x450<(x451*x452)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x453 = INT64_MIN;
	int8_t x455 = 5;
	int8_t x456 = INT8_MIN;
	volatile int32_t t80 = 21318109;

	t80 = (x453==(x454<(x455*x456)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x457 = 59U;
	uint32_t x458 = UINT32_MAX;
	uint16_t x459 = 10006U;
	static uint32_t x460 = UINT32_MAX;
	int32_t t81 = -274142;

	t81 = (x457==(x458<(x459*x460)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x469 = 40U;
	uint16_t x470 = UINT16_MAX;
	uint16_t x472 = 899U;
	int32_t t82 = 30814;

	t82 = (x469==(x470<(x471*x472)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x473 = 2U;
	uint8_t x474 = 44U;
	int64_t x475 = -5418671629453758LL;
	volatile int32_t x476 = 7;
	int32_t t83 = 194;

	t83 = (x473==(x474<(x475*x476)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x477 = 12255U;
	uint8_t x478 = UINT8_MAX;
	volatile uint64_t x479 = 156LLU;
	int8_t x480 = INT8_MIN;

	t84 = (x477==(x478<(x479*x480)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x481 = -1LL;
	uint32_t x482 = UINT32_MAX;
	int16_t x483 = INT16_MAX;
	int64_t x484 = -1LL;
	int32_t t85 = -2;

	t85 = (x481==(x482<(x483*x484)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x501 = INT16_MAX;
	int8_t x502 = INT8_MIN;
	int16_t x503 = -1;
	int32_t t86 = -770;

	t86 = (x501==(x502<(x503*x504)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x505 = 24960701U;
	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MAX;
	static uint64_t x508 = 1483838LLU;

	t87 = (x505==(x506<(x507*x508)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x509 = INT64_MIN;
	volatile uint8_t x510 = UINT8_MAX;
	int64_t x511 = 3LL;
	uint32_t x512 = 236184091U;

	t88 = (x509==(x510<(x511*x512)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x513 = 568433316LL;
	int8_t x514 = INT8_MIN;
	uint16_t x515 = UINT16_MAX;
	int8_t x516 = INT8_MIN;
	volatile int32_t t89 = -611900444;

	t89 = (x513==(x514<(x515*x516)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x517 = INT64_MIN;
	int16_t x518 = -1;
	volatile int64_t x519 = 1081440912029161LL;
	volatile uint16_t x520 = 91U;
	static int32_t t90 = 23745071;

	t90 = (x517==(x518<(x519*x520)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x529 = -1;
	int16_t x530 = INT16_MAX;
	uint32_t x531 = 221U;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t91 = 203943892;

	t91 = (x529==(x530<(x531*x532)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x533 = -6;
	int32_t x534 = -1;
	uint8_t x535 = 4U;
	static int16_t x536 = INT16_MAX;
	int32_t t92 = 150476;

	t92 = (x533==(x534<(x535*x536)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x541 = 669177965269565LLU;
	volatile int8_t x542 = 0;
	static uint32_t x543 = 1474883U;
	int16_t x544 = 195;
	volatile int32_t t93 = 1;

	t93 = (x541==(x542<(x543*x544)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x546 = 360654353LLU;
	static int16_t x547 = INT16_MAX;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t94 = -5989;

	t94 = (x545==(x546<(x547*x548)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x549 = UINT32_MAX;
	int64_t x551 = 12002LL;
	int32_t t95 = -18;

	t95 = (x549==(x550<(x551*x552)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x553 = UINT64_MAX;
	int32_t x554 = -1;
	uint16_t x556 = 531U;
	static int32_t t96 = 0;

	t96 = (x553==(x554<(x555*x556)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x565 = 394116827756541LLU;
	uint16_t x566 = 76U;
	int16_t x567 = 7651;
	uint32_t x568 = 2290103U;
	int32_t t97 = -85423977;

	t97 = (x565==(x566<(x567*x568)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x569 = UINT32_MAX;
	uint8_t x570 = 124U;
	volatile int16_t x571 = -1;
	uint16_t x572 = 22U;
	static int32_t t98 = 38;

	t98 = (x569==(x570<(x571*x572)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x573 = UINT64_MAX;
	uint16_t x574 = 1284U;
	static int8_t x575 = INT8_MAX;
	int32_t t99 = 14589621;

	t99 = (x573==(x574<(x575*x576)));

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

