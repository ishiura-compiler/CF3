#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = INT16_MIN;
uint16_t x20 = 22U;
int32_t t2 = -3145596;
int64_t x23 = INT64_MAX;
uint64_t x28 = 1700715751934945999LLU;
int8_t x81 = -3;
int16_t x149 = 0;
uint64_t x150 = 1742LLU;
int16_t x151 = 14956;
int32_t t14 = -13235;
static int32_t x200 = INT32_MIN;
int16_t x206 = INT16_MAX;
static volatile uint64_t x207 = 3199489LLU;
uint64_t x215 = 50948552614994390LLU;
static int32_t t21 = -1347;
int16_t x221 = 1109;
static uint16_t x229 = 850U;
uint64_t x248 = 734LLU;
int32_t x252 = INT32_MIN;
static int32_t t27 = -20338167;
uint16_t x259 = 169U;
int8_t x260 = 3;
int32_t t30 = -1;
volatile int32_t t31 = 34564016;
volatile int32_t t32 = 12;
int64_t x283 = INT64_MIN;
static int32_t t33 = -557;
int16_t x310 = 1;
uint16_t x318 = UINT16_MAX;
volatile int8_t x319 = -1;
int16_t x321 = INT16_MAX;
static int32_t x323 = 50;
int32_t x337 = INT32_MAX;
int32_t t43 = 321;
int64_t x349 = -1LL;
int32_t x350 = INT32_MIN;
uint8_t x352 = 1U;
volatile int32_t t44 = 1;
int8_t x361 = -1;
int64_t x372 = -1LL;
uint32_t x387 = 59670175U;
uint16_t x407 = 6U;
static int64_t x427 = INT64_MIN;
volatile int64_t x428 = 293066509060058168LL;
int32_t t54 = -5433;
static int16_t x444 = -1;
static int32_t t55 = 8593;
volatile uint32_t x451 = UINT32_MAX;
volatile int32_t t56 = -104415;
int16_t x494 = 221;
static int64_t x527 = INT64_MAX;
int16_t x535 = 5972;
int64_t x536 = 113LL;
volatile int32_t t68 = -1;
uint8_t x542 = 0U;
uint16_t x549 = 1U;
volatile int64_t x551 = INT64_MIN;
int32_t t70 = -2116910;
uint16_t x558 = 0U;
volatile int32_t t73 = 502987530;
volatile int32_t t74 = -87196;
static int16_t x581 = INT16_MAX;
int8_t x585 = -1;
int16_t x586 = INT16_MIN;
int8_t x597 = -1;
int64_t x599 = INT64_MIN;
static int64_t x609 = INT64_MAX;
static int16_t x610 = -81;
volatile uint8_t x612 = UINT8_MAX;
static volatile uint64_t x623 = 21607339594534LLU;
uint16_t x624 = UINT16_MAX;
int32_t x625 = 13;
volatile int32_t t81 = -166810;
uint16_t x630 = 1966U;
static int64_t x632 = 38266LL;
int8_t x636 = INT8_MIN;
int32_t x637 = INT32_MAX;
int16_t x638 = INT16_MAX;
volatile int16_t x639 = INT16_MIN;
int32_t t84 = 1014;
int16_t x642 = INT16_MIN;
int8_t x644 = INT8_MIN;
volatile int8_t x671 = INT8_MIN;
int8_t x676 = -1;
volatile int32_t t91 = -3;
uint16_t x702 = 5U;
static int8_t x718 = 18;
int32_t t93 = 2;
int64_t x738 = INT64_MAX;
int32_t x752 = -1;
int32_t t96 = -135;
static int32_t t97 = 733394;
volatile int32_t x758 = INT32_MIN;
static int8_t x760 = 7;


void f0(void) {
	uint32_t x5 = 1947639934U;
	static uint32_t x6 = 649157612U;
	int64_t x7 = 4329022LL;
	int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 1;

	t0 = (x5<(x6%(x7/x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 3746739365LLU;
	static uint8_t x10 = 120U;
	static int64_t x11 = INT64_MIN;
	uint64_t x12 = 22LLU;
	int32_t t1 = 61211088;

	t1 = (x9<(x10%(x11/x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x18 = INT64_MIN;
	uint16_t x19 = 3309U;

	t2 = (x17<(x18%(x19/x20)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 14498LL;
	uint16_t x22 = 59U;
	int32_t x24 = INT32_MIN;
	int32_t t3 = -3777;

	t3 = (x21<(x22%(x23/x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int32_t t4 = 1266378;

	t4 = (x25<(x26%(x27/x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x49 = INT32_MIN;
	static volatile uint8_t x50 = UINT8_MAX;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	int32_t t5 = 24278;

	t5 = (x49<(x50%(x51/x52)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x61 = INT16_MIN;
	volatile uint64_t x62 = UINT64_MAX;
	static int64_t x63 = INT64_MIN;
	uint32_t x64 = UINT32_MAX;
	int32_t t6 = -36;

	t6 = (x61<(x62%(x63/x64)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x73 = 31U;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MAX;
	uint64_t x76 = 23LLU;
	int32_t t7 = 1767832;

	t7 = (x73<(x74%(x75/x76)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x82 = -1;
	int64_t x83 = -3642LL;
	int8_t x84 = INT8_MAX;
	int32_t t8 = -47;

	t8 = (x81<(x82%(x83/x84)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int32_t x90 = -2682;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 3526048660562LLU;
	int32_t t9 = -86;

	t9 = (x89<(x90%(x91/x92)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = INT64_MIN;
	static uint64_t x127 = UINT64_MAX;
	volatile uint64_t x128 = 66380202628632LLU;
	volatile int32_t t10 = 381;

	t10 = (x125<(x126%(x127/x128)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = UINT32_MAX;
	volatile uint32_t x135 = UINT32_MAX;
	uint8_t x136 = 3U;
	int32_t t11 = -33323625;

	t11 = (x133<(x134%(x135/x136)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x152 = -1;
	volatile int32_t t12 = 241502;

	t12 = (x149<(x150%(x151/x152)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x153 = INT64_MIN;
	static int64_t x154 = INT64_MIN;
	static int8_t x155 = -1;
	int16_t x156 = -1;
	int32_t t13 = 0;

	t13 = (x153<(x154%(x155/x156)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x165 = 231LLU;
	int8_t x166 = 63;
	static uint16_t x167 = UINT16_MAX;
	int8_t x168 = 2;

	t14 = (x165<(x166%(x167/x168)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = 13U;
	uint32_t x172 = 5U;
	volatile int32_t t15 = -154787;

	t15 = (x169<(x170%(x171/x172)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	int8_t x176 = -9;
	int32_t t16 = -1190;

	t16 = (x173<(x174%(x175/x176)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x181 = 0LLU;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	static volatile uint8_t x184 = 11U;
	volatile int32_t t17 = 3;

	t17 = (x181<(x182%(x183/x184)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	static volatile int64_t x199 = INT64_MAX;
	int32_t t18 = -57;

	t18 = (x197<(x198%(x199/x200)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = 265261100045575109LL;
	int32_t x203 = INT32_MAX;
	volatile int64_t x204 = -1LL;
	volatile int32_t t19 = 1674;

	t19 = (x201<(x202%(x203/x204)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x205 = 364596548615139332LLU;
	int16_t x208 = INT16_MAX;
	volatile int32_t t20 = -734732579;

	t20 = (x205<(x206%(x207/x208)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = -1;
	uint64_t x216 = 1043992LLU;

	t21 = (x213<(x214%(x215/x216)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x222 = 2659U;
	int64_t x223 = INT64_MIN;
	int64_t x224 = -4374405050007LL;
	volatile int32_t t22 = -467013;

	t22 = (x221<(x222%(x223/x224)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x230 = 915990541U;
	volatile int8_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	volatile int32_t t23 = 52415635;

	t23 = (x229<(x230%(x231/x232)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x233 = -1022348891057853175LL;
	volatile int32_t x234 = INT32_MAX;
	int16_t x235 = -4;
	volatile int8_t x236 = -1;
	volatile int32_t t24 = -653856313;

	t24 = (x233<(x234%(x235/x236)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x241 = 8021LLU;
	uint64_t x242 = 853628024923097223LLU;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MAX;
	static int32_t t25 = 49021;

	t25 = (x241<(x242%(x243/x244)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x245 = 1009048;
	int16_t x246 = 14478;
	int16_t x247 = INT16_MIN;
	volatile int32_t t26 = 3243376;

	t26 = (x245<(x246%(x247/x248)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x249 = -3129;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = UINT64_MAX;

	t27 = (x249<(x250%(x251/x252)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = -1;
	volatile int64_t x255 = -1LL;
	uint64_t x256 = 25LLU;
	int32_t t28 = -7;

	t28 = (x253<(x254%(x255/x256)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x257 = UINT32_MAX;
	static uint8_t x258 = 4U;
	static int32_t t29 = 11675;

	t29 = (x257<(x258%(x259/x260)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x265 = 560346141U;
	static int8_t x266 = INT8_MIN;
	volatile int32_t x267 = -3713;
	volatile int8_t x268 = INT8_MIN;

	t30 = (x265<(x266%(x267/x268)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x269 = 200026952;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = 5685LL;
	int16_t x272 = -1;

	t31 = (x269<(x270%(x271/x272)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x277 = -1;
	static uint32_t x278 = 6008U;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = INT32_MAX;

	t32 = (x277<(x278%(x279/x280)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MAX;
	int8_t x284 = INT8_MIN;

	t33 = (x281<(x282%(x283/x284)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x285 = 24005;
	int8_t x286 = -10;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = 1U;
	int32_t t34 = 14338227;

	t34 = (x285<(x286%(x287/x288)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x301 = -364125414266294372LL;
	volatile int8_t x302 = 1;
	int64_t x303 = INT64_MAX;
	uint8_t x304 = 3U;
	static int32_t t35 = 566;

	t35 = (x301<(x302%(x303/x304)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = 1393;
	volatile uint8_t x308 = 82U;
	volatile int32_t t36 = -99;

	t36 = (x305<(x306%(x307/x308)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x309 = -272984206897075LL;
	int16_t x311 = 1248;
	int8_t x312 = INT8_MIN;
	int32_t t37 = -1;

	t37 = (x309<(x310%(x311/x312)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x317 = -10923;
	int32_t x320 = -1;
	volatile int32_t t38 = 603131531;

	t38 = (x317<(x318%(x319/x320)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x322 = INT16_MIN;
	uint8_t x324 = 7U;
	volatile int32_t t39 = 15;

	t39 = (x321<(x322%(x323/x324)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	static uint64_t x327 = UINT64_MAX;
	uint64_t x328 = 178LLU;
	static volatile int32_t t40 = 5;

	t40 = (x325<(x326%(x327/x328)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x333 = INT64_MIN;
	uint8_t x334 = UINT8_MAX;
	static volatile int64_t x335 = INT64_MAX;
	int8_t x336 = -1;
	volatile int32_t t41 = -1066;

	t41 = (x333<(x334%(x335/x336)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t42 = -1198986;

	t42 = (x337<(x338%(x339/x340)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x345 = 5705828U;
	int8_t x346 = -54;
	volatile int64_t x347 = INT64_MIN;
	static int16_t x348 = -8;

	t43 = (x345<(x346%(x347/x348)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x351 = UINT8_MAX;

	t44 = (x349<(x350%(x351/x352)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 62U;
	int64_t x355 = -55LL;
	uint64_t x356 = 1858808633915LLU;
	static int32_t t45 = 170;

	t45 = (x353<(x354%(x355/x356)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x357 = INT8_MAX;
	static uint8_t x358 = UINT8_MAX;
	int32_t x359 = 13813309;
	int32_t x360 = 70416;
	volatile int32_t t46 = 727669050;

	t46 = (x357<(x358%(x359/x360)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x362 = -1LL;
	int32_t x363 = INT32_MAX;
	volatile uint16_t x364 = 3360U;
	static volatile int32_t t47 = -21771;

	t47 = (x361<(x362%(x363/x364)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x369 = -1;
	static uint8_t x370 = 17U;
	int64_t x371 = -1LL;
	int32_t t48 = -7063121;

	t48 = (x369<(x370%(x371/x372)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x385 = -14418;
	int8_t x386 = 10;
	volatile int8_t x388 = INT8_MAX;
	volatile int32_t t49 = 4184;

	t49 = (x385<(x386%(x387/x388)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x401 = 27004U;
	int32_t x402 = INT32_MIN;
	static uint32_t x403 = 5807626U;
	uint64_t x404 = 94LLU;
	int32_t t50 = -230429;

	t50 = (x401<(x402%(x403/x404)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x405 = 82368151759LL;
	static int64_t x406 = INT64_MAX;
	int32_t x408 = -1;
	int32_t t51 = -5;

	t51 = (x405<(x406%(x407/x408)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = 9;
	volatile uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = 1783U;
	volatile int32_t t52 = -7135;

	t52 = (x421<(x422%(x423/x424)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x425 = -42837LL;
	static volatile uint32_t x426 = 44050660U;
	static volatile int32_t t53 = 606103246;

	t53 = (x425<(x426%(x427/x428)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x433 = INT8_MIN;
	static volatile int32_t x434 = INT32_MAX;
	uint64_t x435 = 849809542101184LLU;
	volatile uint16_t x436 = 7183U;

	t54 = (x433<(x434%(x435/x436)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x441 = -3987;
	static int64_t x442 = INT64_MAX;
	static int8_t x443 = -23;

	t55 = (x441<(x442%(x443/x444)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x449 = 4U;
	int32_t x450 = -46204710;
	volatile int32_t x452 = -4767647;

	t56 = (x449<(x450%(x451/x452)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x453 = -1;
	int64_t x454 = INT64_MIN;
	int64_t x455 = INT64_MAX;
	int64_t x456 = -1LL;
	volatile int32_t t57 = 0;

	t57 = (x453<(x454%(x455/x456)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x457 = INT8_MIN;
	static uint16_t x458 = UINT16_MAX;
	static int8_t x459 = -7;
	uint8_t x460 = 6U;
	volatile int32_t t58 = 2361942;

	t58 = (x457<(x458%(x459/x460)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MIN;
	int32_t x475 = INT32_MAX;
	int8_t x476 = -12;
	volatile int32_t t59 = -569;

	t59 = (x473<(x474%(x475/x476)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	static int32_t x483 = INT32_MIN;
	static int16_t x484 = 4062;
	int32_t t60 = 645149188;

	t60 = (x481<(x482%(x483/x484)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x493 = 1797;
	uint32_t x495 = 58105U;
	uint16_t x496 = 28998U;
	int32_t t61 = 474838;

	t61 = (x493<(x494%(x495/x496)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x501 = -20747;
	static uint64_t x502 = 77905037870999795LLU;
	int16_t x503 = INT16_MIN;
	int64_t x504 = -1LL;
	volatile int32_t t62 = 19030;

	t62 = (x501<(x502%(x503/x504)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x505 = 0;
	volatile int8_t x506 = INT8_MAX;
	volatile int16_t x507 = INT16_MAX;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t63 = -13253873;

	t63 = (x505<(x506%(x507/x508)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x517 = -1000230LL;
	uint16_t x518 = 12U;
	int8_t x519 = INT8_MIN;
	int32_t x520 = -1;
	volatile int32_t t64 = -1632;

	t64 = (x517<(x518%(x519/x520)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x521 = INT64_MAX;
	volatile int32_t x522 = -13037648;
	int64_t x523 = -7506331592865020LL;
	int32_t x524 = INT32_MIN;
	int32_t t65 = 522960658;

	t65 = (x521<(x522%(x523/x524)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x525 = INT16_MIN;
	int32_t x526 = -1;
	int16_t x528 = INT16_MAX;
	int32_t t66 = 211;

	t66 = (x525<(x526%(x527/x528)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x529 = 1;
	int64_t x530 = 128LL;
	static int64_t x531 = INT64_MAX;
	static int16_t x532 = INT16_MAX;
	volatile int32_t t67 = -20013596;

	t67 = (x529<(x530%(x531/x532)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x533 = INT64_MAX;
	int16_t x534 = INT16_MAX;

	t68 = (x533<(x534%(x535/x536)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x541 = INT64_MAX;
	static volatile uint16_t x543 = 128U;
	volatile int8_t x544 = -13;
	volatile int32_t t69 = -27969;

	t69 = (x541<(x542%(x543/x544)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x550 = 30U;
	int16_t x552 = 4143;

	t70 = (x549<(x550%(x551/x552)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x557 = 18;
	int64_t x559 = INT64_MIN;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t71 = 11894;

	t71 = (x557<(x558%(x559/x560)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x561 = UINT16_MAX;
	int8_t x562 = -1;
	static uint64_t x563 = UINT64_MAX;
	int8_t x564 = -32;
	int32_t t72 = -97;

	t72 = (x561<(x562%(x563/x564)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x569 = 88;
	volatile int16_t x570 = INT16_MIN;
	int8_t x571 = -1;
	uint32_t x572 = UINT32_MAX;

	t73 = (x569<(x570%(x571/x572)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x577 = -1;
	static int64_t x578 = INT64_MIN;
	int64_t x579 = INT64_MIN;
	static volatile int16_t x580 = 125;

	t74 = (x577<(x578%(x579/x580)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x582 = INT64_MIN;
	volatile int32_t x583 = INT32_MIN;
	volatile int64_t x584 = 124LL;
	static volatile int32_t t75 = 0;

	t75 = (x581<(x582%(x583/x584)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x587 = INT64_MAX;
	uint64_t x588 = 5938683461950111830LLU;
	int32_t t76 = 254675702;

	t76 = (x585<(x586%(x587/x588)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x598 = 7806;
	int16_t x600 = INT16_MIN;
	int32_t t77 = 6307;

	t77 = (x597<(x598%(x599/x600)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x611 = INT32_MIN;
	int32_t t78 = -9;

	t78 = (x609<(x610%(x611/x612)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x617 = INT64_MAX;
	static volatile int32_t x618 = 89942;
	uint64_t x619 = 26093834LLU;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t79 = 461932;

	t79 = (x617<(x618%(x619/x620)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x621 = INT8_MAX;
	int32_t x622 = -10868479;
	static volatile int32_t t80 = -485509;

	t80 = (x621<(x622%(x623/x624)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x626 = 1;
	static uint16_t x627 = 63U;
	int16_t x628 = -12;

	t81 = (x625<(x626%(x627/x628)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x629 = INT32_MAX;
	int64_t x631 = 704180LL;
	static int32_t t82 = 11538798;

	t82 = (x629<(x630%(x631/x632)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x633 = INT64_MAX;
	uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	int32_t t83 = -4434363;

	t83 = (x633<(x634%(x635/x636)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x640 = UINT8_MAX;

	t84 = (x637<(x638%(x639/x640)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x641 = INT64_MAX;
	uint8_t x643 = UINT8_MAX;
	int32_t t85 = -108803;

	t85 = (x641<(x642%(x643/x644)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x645 = 1U;
	volatile int16_t x646 = -95;
	uint8_t x647 = 12U;
	int32_t x648 = -1;
	static int32_t t86 = -1;

	t86 = (x645<(x646%(x647/x648)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x669 = 1970433U;
	int8_t x670 = INT8_MIN;
	int8_t x672 = INT8_MAX;
	volatile int32_t t87 = 834436;

	t87 = (x669<(x670%(x671/x672)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x673 = INT8_MAX;
	int16_t x674 = INT16_MIN;
	volatile int64_t x675 = INT64_MAX;
	static int32_t t88 = 1;

	t88 = (x673<(x674%(x675/x676)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MIN;
	static int16_t x679 = INT16_MIN;
	uint16_t x680 = 1591U;
	int32_t t89 = 114;

	t89 = (x677<(x678%(x679/x680)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x693 = INT32_MIN;
	static uint16_t x694 = 0U;
	int8_t x695 = INT8_MIN;
	int8_t x696 = 62;
	volatile int32_t t90 = -54821113;

	t90 = (x693<(x694%(x695/x696)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x697 = INT64_MIN;
	volatile uint32_t x698 = 177U;
	int64_t x699 = -1881689229809LL;
	int16_t x700 = -1;

	t91 = (x697<(x698%(x699/x700)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x701 = 1996388598U;
	static volatile uint32_t x703 = UINT32_MAX;
	int8_t x704 = INT8_MAX;
	int32_t t92 = -282352;

	t92 = (x701<(x702%(x703/x704)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x717 = -2236313194613662489LL;
	uint8_t x719 = UINT8_MAX;
	static volatile int8_t x720 = INT8_MIN;

	t93 = (x717<(x718%(x719/x720)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x721 = 5U;
	int64_t x722 = 297LL;
	int16_t x723 = INT16_MIN;
	volatile int32_t x724 = -7;
	int32_t t94 = -89;

	t94 = (x721<(x722%(x723/x724)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x737 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	int16_t x740 = INT16_MIN;
	static int32_t t95 = 907559304;

	t95 = (x737<(x738%(x739/x740)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x749 = -1;
	static uint32_t x750 = UINT32_MAX;
	uint16_t x751 = UINT16_MAX;

	t96 = (x749<(x750%(x751/x752)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x753 = UINT64_MAX;
	static int8_t x754 = -10;
	uint8_t x755 = 6U;
	volatile int64_t x756 = -1LL;

	t97 = (x753<(x754%(x755/x756)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x757 = INT32_MIN;
	int8_t x759 = INT8_MIN;
	int32_t t98 = 27;

	t98 = (x757<(x758%(x759/x760)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x761 = 7764U;
	int8_t x762 = -22;
	int16_t x763 = INT16_MIN;
	int16_t x764 = -1;
	volatile int32_t t99 = 1;

	t99 = (x761<(x762%(x763/x764)));

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

