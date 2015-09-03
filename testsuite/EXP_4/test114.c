#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -5824069367506LL;
uint32_t x16 = 3057475U;
uint32_t x37 = UINT32_MAX;
int8_t x50 = 0;
uint16_t x52 = 431U;
volatile int8_t x53 = INT8_MAX;
int64_t x61 = 3836476799LL;
uint8_t x64 = UINT8_MAX;
int8_t x65 = INT8_MAX;
int32_t t13 = 3;
int64_t x101 = INT64_MIN;
int64_t x106 = INT64_MIN;
static uint16_t x112 = 1U;
int16_t x116 = 1;
int64_t x133 = INT64_MIN;
uint32_t x142 = UINT32_MAX;
uint64_t x147 = UINT64_MAX;
int32_t x151 = 100;
uint8_t x153 = 20U;
int16_t x155 = -117;
static int16_t x156 = 193;
int32_t t29 = 166;
int32_t x161 = 899482985;
volatile int16_t x170 = -1;
static int16_t x179 = 284;
volatile int32_t t33 = -3;
int16_t x194 = INT16_MAX;
int16_t x197 = INT16_MIN;
static uint32_t x200 = 3U;
int32_t t35 = -1;
static volatile int16_t x202 = -1;
volatile int64_t x207 = INT64_MIN;
static int32_t x209 = 2;
volatile int32_t t39 = 371645856;
int64_t x220 = 6388024473266LL;
static int32_t t43 = 48484653;
int32_t t44 = -18882;
static int16_t x239 = INT16_MIN;
int32_t x250 = INT32_MIN;
int32_t x253 = -517;
uint8_t x256 = 0U;
static int32_t t48 = 7370824;
static int64_t x262 = -1LL;
int32_t x263 = INT32_MIN;
static uint8_t x264 = 5U;
int16_t x269 = INT16_MIN;
int64_t x274 = INT64_MIN;
int16_t x282 = INT16_MIN;
int64_t x283 = -1LL;
static volatile uint64_t x284 = 19830346486025110LLU;
int8_t x288 = INT8_MIN;
volatile uint64_t x289 = 1897001812847LLU;
int8_t x290 = INT8_MIN;
volatile int32_t t56 = 87840692;
volatile int32_t t57 = -3;
int32_t x299 = INT32_MIN;
static volatile int32_t t60 = -15765;
int16_t x317 = INT16_MIN;
int16_t x318 = 1;
volatile int32_t t63 = -156654;
uint16_t x328 = UINT16_MAX;
volatile int16_t x331 = INT16_MIN;
int8_t x335 = INT8_MAX;
volatile int32_t x342 = INT32_MAX;
int32_t x348 = INT32_MIN;
int32_t x362 = -23220271;
uint16_t x363 = UINT16_MAX;
int64_t x365 = 2755485110818LL;
static int64_t x366 = -1LL;
static int32_t x368 = -306260526;
int32_t t73 = 3;
static volatile int8_t x380 = INT8_MIN;
static uint16_t x385 = 1U;
int16_t x386 = -1;
static int8_t x388 = -1;
uint8_t x389 = 118U;
int8_t x392 = -1;
int8_t x397 = INT8_MAX;
int64_t x398 = INT64_MIN;
int32_t t80 = 1;
volatile int32_t x408 = -1;
uint32_t x419 = UINT32_MAX;
int32_t x425 = INT32_MIN;
uint64_t x426 = 71698LLU;
static int8_t x430 = -14;
static int64_t x434 = INT64_MIN;
volatile uint8_t x438 = UINT8_MAX;
int16_t x449 = -1;
int32_t t92 = -192478;
int64_t x455 = INT64_MIN;
uint64_t x456 = 15410269LLU;
volatile int32_t t95 = -28410092;
int16_t x487 = -1121;
static uint32_t x490 = 240276125U;
volatile int32_t t99 = -51;


void f0(void) {
	int8_t x1 = -1;
	int8_t x3 = -1;
	volatile int16_t x4 = INT16_MAX;
	static int32_t t0 = 46520049;

	t0 = (x1<=(x2<(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MIN;
	static volatile int8_t x7 = INT8_MAX;
	static uint16_t x8 = 10840U;
	int32_t t1 = 1;

	t1 = (x5<=(x6<(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int16_t x14 = -181;
	static int8_t x15 = INT8_MAX;
	static volatile int32_t t2 = 108380;

	t2 = (x13<=(x14<(x15+x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 8227362LLU;
	volatile int64_t x22 = INT64_MAX;
	static int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	int32_t t3 = -75521;

	t3 = (x21<=(x22<(x23+x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 68453709270199021LLU;
	int64_t x27 = INT64_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t4 = 495;

	t4 = (x25<=(x26<(x27+x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MAX;
	int16_t x34 = -1;
	int64_t x35 = 22LL;
	static int32_t x36 = INT32_MIN;
	int32_t t5 = -18350;

	t5 = (x33<=(x34<(x35+x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = -1;
	static int32_t x39 = -21;
	int16_t x40 = -7;
	int32_t t6 = -174;

	t6 = (x37<=(x38<(x39+x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x41 = INT8_MIN;
	int32_t x42 = 322123;
	uint8_t x43 = 29U;
	int64_t x44 = INT64_MIN;
	volatile int32_t t7 = -83846;

	t7 = (x41<=(x42<(x43+x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x49 = UINT32_MAX;
	static int16_t x51 = -1;
	int32_t t8 = -12793954;

	t8 = (x49<=(x50<(x51+x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x54 = -1;
	static int8_t x55 = INT8_MIN;
	uint16_t x56 = 21U;
	int32_t t9 = 8983;

	t9 = (x53<=(x54<(x55+x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x62 = 97U;
	int16_t x63 = INT16_MIN;
	static volatile int32_t t10 = 45688674;

	t10 = (x61<=(x62<(x63+x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x66 = -1;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 7597211648957LLU;
	int32_t t11 = 41902851;

	t11 = (x65<=(x66<(x67+x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	int16_t x71 = -1;
	uint64_t x72 = 1LLU;
	int32_t t12 = 2200;

	t12 = (x69<=(x70<(x71+x72)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 573934172234458LLU;
	int8_t x76 = -48;

	t13 = (x73<=(x74<(x75+x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MIN;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t14 = 26663770;

	t14 = (x77<=(x78<(x79+x80)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MAX;
	static volatile int8_t x82 = -1;
	static uint32_t x83 = 201U;
	static int32_t x84 = 12631;
	volatile int32_t t15 = -173;

	t15 = (x81<=(x82<(x83+x84)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = -1LL;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = -2;
	static int16_t x96 = INT16_MIN;
	int32_t t16 = -87;

	t16 = (x93<=(x94<(x95+x96)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x102 = 1838LLU;
	volatile int64_t x103 = -4LL;
	static int16_t x104 = INT16_MIN;
	int32_t t17 = 58656367;

	t17 = (x101<=(x102<(x103+x104)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = -56LL;
	static int8_t x107 = -1;
	volatile uint8_t x108 = UINT8_MAX;
	int32_t t18 = -418528;

	t18 = (x105<=(x106<(x107+x108)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 10U;
	static uint32_t x110 = 968546U;
	volatile uint64_t x111 = 13762900009817287LLU;
	int32_t t19 = -5;

	t19 = (x109<=(x110<(x111+x112)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x113 = INT64_MIN;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int32_t t20 = 1017;

	t20 = (x113<=(x114<(x115+x116)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x121 = -3437187232216LL;
	static int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t21 = -371666925;

	t21 = (x121<=(x122<(x123+x124)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MIN;
	int16_t x127 = 3562;
	static int32_t x128 = -15;
	volatile int32_t t22 = 494;

	t22 = (x125<=(x126<(x127+x128)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 20169LLU;
	uint64_t x130 = UINT64_MAX;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = 30003472335704179LL;
	static volatile int32_t t23 = -647447298;

	t23 = (x129<=(x130<(x131+x132)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x134 = INT8_MIN;
	uint64_t x135 = 30255442LLU;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t24 = 907597;

	t24 = (x133<=(x134<(x135+x136)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = INT64_MIN;
	static uint64_t x139 = UINT64_MAX;
	int64_t x140 = 32982LL;
	volatile int32_t t25 = 15328189;

	t25 = (x137<=(x138<(x139+x140)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x141 = 202097601U;
	uint64_t x143 = 18741925959LLU;
	static int16_t x144 = 10743;
	static volatile int32_t t26 = 9613;

	t26 = (x141<=(x142<(x143+x144)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = INT64_MIN;
	volatile int8_t x146 = 1;
	uint64_t x148 = UINT64_MAX;
	int32_t t27 = 0;

	t27 = (x145<=(x146<(x147+x148)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x149 = INT64_MAX;
	int8_t x150 = INT8_MAX;
	uint8_t x152 = 7U;
	volatile int32_t t28 = -224630;

	t28 = (x149<=(x150<(x151+x152)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x154 = 120543111LLU;

	t29 = (x153<=(x154<(x155+x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x162 = UINT16_MAX;
	int64_t x163 = INT64_MIN;
	int8_t x164 = 0;
	int32_t t30 = 1;

	t30 = (x161<=(x162<(x163+x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = INT8_MIN;
	int8_t x171 = 3;
	uint32_t x172 = 96934962U;
	volatile int32_t t31 = -10412533;

	t31 = (x169<=(x170<(x171+x172)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = -1LL;
	uint8_t x178 = 48U;
	int32_t x180 = -173837;
	int32_t t32 = 536303015;

	t32 = (x177<=(x178<(x179+x180)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x181 = -1;
	uint8_t x182 = 19U;
	uint64_t x183 = 10902306589LLU;
	int16_t x184 = -1;

	t33 = (x181<=(x182<(x183+x184)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = INT16_MIN;
	static int16_t x195 = -1;
	volatile int8_t x196 = -1;
	int32_t t34 = -1;

	t34 = (x193<=(x194<(x195+x196)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x198 = -1LL;
	volatile int16_t x199 = INT16_MAX;

	t35 = (x197<=(x198<(x199+x200)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = 2742763619081585LL;
	int64_t x203 = -1LL;
	volatile int8_t x204 = -1;
	static volatile int32_t t36 = -30;

	t36 = (x201<=(x202<(x203+x204)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MAX;
	volatile int64_t x208 = 26081LL;
	volatile int32_t t37 = 0;

	t37 = (x205<=(x206<(x207+x208)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x210 = 3819684;
	uint32_t x211 = 343615U;
	volatile uint16_t x212 = 13U;
	volatile int32_t t38 = -41;

	t38 = (x209<=(x210<(x211+x212)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = 0;
	int64_t x215 = -2414425498LL;
	uint64_t x216 = 44198961567912553LLU;

	t39 = (x213<=(x214<(x215+x216)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = 2987638180217788LL;
	volatile int8_t x218 = -1;
	static uint32_t x219 = 82U;
	int32_t t40 = -4;

	t40 = (x217<=(x218<(x219+x220)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = UINT16_MAX;
	int16_t x222 = INT16_MIN;
	uint64_t x223 = 537572LLU;
	static int32_t x224 = -1;
	int32_t t41 = 12546532;

	t41 = (x221<=(x222<(x223+x224)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x225 = 434U;
	int64_t x226 = -191985133LL;
	int16_t x227 = INT16_MIN;
	static int8_t x228 = -1;
	int32_t t42 = -1545;

	t42 = (x225<=(x226<(x227+x228)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = UINT64_MAX;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = INT32_MIN;

	t43 = (x229<=(x230<(x231+x232)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x233 = -1;
	int32_t x234 = -1;
	uint8_t x235 = 3U;
	int32_t x236 = INT32_MIN;

	t44 = (x233<=(x234<(x235+x236)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = 1390;
	int64_t x240 = -1LL;
	int32_t t45 = -2;

	t45 = (x237<=(x238<(x239+x240)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x241 = 14088430;
	uint16_t x242 = UINT16_MAX;
	volatile int8_t x243 = 1;
	int64_t x244 = -1LL;
	volatile int32_t t46 = 1010;

	t46 = (x241<=(x242<(x243+x244)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x249 = 1726966166U;
	static uint32_t x251 = 60U;
	int16_t x252 = -16329;
	int32_t t47 = 62001;

	t47 = (x249<=(x250<(x251+x252)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x254 = 5;
	int32_t x255 = INT32_MIN;

	t48 = (x253<=(x254<(x255+x256)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x261 = 153U;
	volatile int32_t t49 = -121359444;

	t49 = (x261<=(x262<(x263+x264)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x265 = 0U;
	static uint16_t x266 = 51U;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t50 = 4;

	t50 = (x265<=(x266<(x267+x268)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x270 = -1;
	int64_t x271 = INT64_MAX;
	int32_t x272 = -1;
	int32_t t51 = 1111;

	t51 = (x269<=(x270<(x271+x272)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x273 = -117239382;
	uint16_t x275 = 6036U;
	uint32_t x276 = 236U;
	int32_t t52 = -1;

	t52 = (x273<=(x274<(x275+x276)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = 3U;
	uint64_t x280 = UINT64_MAX;
	int32_t t53 = 3740;

	t53 = (x277<=(x278<(x279+x280)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x281 = INT64_MIN;
	int32_t t54 = 4;

	t54 = (x281<=(x282<(x283+x284)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x285 = 55U;
	uint8_t x286 = 10U;
	int16_t x287 = INT16_MIN;
	volatile int32_t t55 = -1663387;

	t55 = (x285<=(x286<(x287+x288)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x291 = -6132;
	int16_t x292 = -1402;

	t56 = (x289<=(x290<(x291+x292)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 1U;
	static int16_t x294 = INT16_MIN;
	uint64_t x295 = 90939339447150280LLU;
	int16_t x296 = INT16_MIN;

	t57 = (x293<=(x294<(x295+x296)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x297 = -1;
	static uint8_t x298 = UINT8_MAX;
	int64_t x300 = -1LL;
	int32_t t58 = -1712815;

	t58 = (x297<=(x298<(x299+x300)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x301 = INT16_MIN;
	static volatile int64_t x302 = 621347LL;
	volatile uint64_t x303 = 5700858587702178606LLU;
	static volatile int64_t x304 = INT64_MAX;
	int32_t t59 = 2051381;

	t59 = (x301<=(x302<(x303+x304)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	volatile int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MAX;

	t60 = (x305<=(x306<(x307+x308)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x309 = INT16_MIN;
	uint32_t x310 = 12U;
	static int32_t x311 = -259169836;
	int8_t x312 = INT8_MAX;
	int32_t t61 = 7754562;

	t61 = (x309<=(x310<(x311+x312)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x319 = INT64_MIN;
	static int64_t x320 = 146815785LL;
	int32_t t62 = -161;

	t62 = (x317<=(x318<(x319+x320)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = INT64_MAX;
	uint32_t x322 = UINT32_MAX;
	int8_t x323 = INT8_MAX;
	volatile int64_t x324 = 16184LL;

	t63 = (x321<=(x322<(x323+x324)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = 3;
	uint64_t x326 = UINT64_MAX;
	static int16_t x327 = -1;
	int32_t t64 = 14;

	t64 = (x325<=(x326<(x327+x328)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x329 = UINT32_MAX;
	volatile int64_t x330 = -1LL;
	int32_t x332 = INT32_MAX;
	volatile int32_t t65 = 3;

	t65 = (x329<=(x330<(x331+x332)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = -770678587;
	volatile int8_t x334 = 55;
	int16_t x336 = 2;
	volatile int32_t t66 = -1;

	t66 = (x333<=(x334<(x335+x336)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x337 = -240LL;
	static uint16_t x338 = UINT16_MAX;
	static uint16_t x339 = 4U;
	volatile int16_t x340 = 1;
	volatile int32_t t67 = -175740034;

	t67 = (x337<=(x338<(x339+x340)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -1;
	int8_t x343 = 6;
	static uint8_t x344 = 0U;
	volatile int32_t t68 = 1315568;

	t68 = (x341<=(x342<(x343+x344)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x346 = -1LL;
	int32_t x347 = 21279;
	volatile int32_t t69 = 2;

	t69 = (x345<=(x346<(x347+x348)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x349 = 3973367055598LL;
	int16_t x350 = 8262;
	int8_t x351 = -24;
	static uint32_t x352 = 305U;
	static int32_t t70 = -91;

	t70 = (x349<=(x350<(x351+x352)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x361 = -162481023275906208LL;
	volatile int16_t x364 = -13880;
	volatile int32_t t71 = 15354;

	t71 = (x361<=(x362<(x363+x364)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x367 = 22712U;
	volatile int32_t t72 = 6;

	t72 = (x365<=(x366<(x367+x368)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x369 = -1;
	volatile int64_t x370 = INT64_MAX;
	volatile int32_t x371 = -657;
	static int8_t x372 = -1;

	t73 = (x369<=(x370<(x371+x372)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = 2992;
	uint32_t x374 = UINT32_MAX;
	static volatile int16_t x375 = -1;
	int16_t x376 = 13;
	static volatile int32_t t74 = -4876530;

	t74 = (x373<=(x374<(x375+x376)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x377 = 61U;
	static int16_t x378 = INT16_MAX;
	int64_t x379 = 2895931290707241LL;
	int32_t t75 = 0;

	t75 = (x377<=(x378<(x379+x380)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MIN;
	static uint32_t x383 = 652488U;
	int64_t x384 = INT64_MIN;
	volatile int32_t t76 = -1333354;

	t76 = (x381<=(x382<(x383+x384)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x387 = 30;
	volatile int32_t t77 = 59954;

	t77 = (x385<=(x386<(x387+x388)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x390 = -1LL;
	static int8_t x391 = -1;
	int32_t t78 = -247;

	t78 = (x389<=(x390<(x391+x392)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = 3;
	uint16_t x394 = UINT16_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	int32_t x396 = -1;
	int32_t t79 = 65240431;

	t79 = (x393<=(x394<(x395+x396)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x399 = -1;
	volatile int32_t x400 = INT32_MAX;

	t80 = (x397<=(x398<(x399+x400)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x401 = 176276452LLU;
	int16_t x402 = 6;
	static int8_t x403 = -1;
	static uint64_t x404 = UINT64_MAX;
	int32_t t81 = -15;

	t81 = (x401<=(x402<(x403+x404)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x405 = INT32_MIN;
	uint32_t x406 = UINT32_MAX;
	int8_t x407 = INT8_MIN;
	volatile int32_t t82 = -16109;

	t82 = (x405<=(x406<(x407+x408)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x413 = INT64_MAX;
	static uint16_t x414 = UINT16_MAX;
	static uint8_t x415 = 32U;
	static uint16_t x416 = 3U;
	volatile int32_t t83 = 6;

	t83 = (x413<=(x414<(x415+x416)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = -1LL;
	int64_t x418 = INT64_MIN;
	volatile int64_t x420 = 10LL;
	volatile int32_t t84 = -30688;

	t84 = (x417<=(x418<(x419+x420)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x421 = INT64_MIN;
	uint32_t x422 = UINT32_MAX;
	int32_t x423 = -22558;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t85 = 5293219;

	t85 = (x421<=(x422<(x423+x424)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x427 = INT32_MAX;
	uint32_t x428 = 15559814U;
	volatile int32_t t86 = 0;

	t86 = (x425<=(x426<(x427+x428)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x429 = 5;
	volatile uint16_t x431 = UINT16_MAX;
	uint64_t x432 = 6LLU;
	static volatile int32_t t87 = -557365;

	t87 = (x429<=(x430<(x431+x432)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x433 = -54738989539543LL;
	int64_t x435 = -1472LL;
	static volatile int32_t x436 = 916844;
	int32_t t88 = 3905589;

	t88 = (x433<=(x434<(x435+x436)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x437 = -1;
	static volatile int16_t x439 = INT16_MIN;
	uint32_t x440 = 2U;
	volatile int32_t t89 = -5944056;

	t89 = (x437<=(x438<(x439+x440)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = INT8_MAX;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MAX;
	int32_t t90 = -440707338;

	t90 = (x441<=(x442<(x443+x444)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int64_t x446 = INT64_MAX;
	static int16_t x447 = -4;
	static uint8_t x448 = 7U;
	static volatile int32_t t91 = 7;

	t91 = (x445<=(x446<(x447+x448)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x450 = -61;
	uint64_t x451 = 1953125022024LLU;
	static uint16_t x452 = UINT16_MAX;

	t92 = (x449<=(x450<(x451+x452)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = 1;
	volatile int32_t x454 = -1;
	static int32_t t93 = -2520;

	t93 = (x453<=(x454<(x455+x456)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MIN;
	int8_t x471 = 9;
	static int8_t x472 = INT8_MAX;
	int32_t t94 = 392;

	t94 = (x469<=(x470<(x471+x472)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x473 = INT32_MIN;
	int16_t x474 = -1;
	int64_t x475 = INT64_MIN;
	int64_t x476 = 11436332036LL;

	t95 = (x473<=(x474<(x475+x476)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = -1;
	uint32_t x478 = UINT32_MAX;
	static uint64_t x479 = 267LLU;
	uint64_t x480 = 69LLU;
	int32_t t96 = 24;

	t96 = (x477<=(x478<(x479+x480)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x485 = 3U;
	int8_t x486 = INT8_MIN;
	uint32_t x488 = 177539080U;
	int32_t t97 = -8256132;

	t97 = (x485<=(x486<(x487+x488)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x489 = -1;
	uint16_t x491 = UINT16_MAX;
	int32_t x492 = -2754;
	volatile int32_t t98 = -383806;

	t98 = (x489<=(x490<(x491+x492)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x493 = INT32_MAX;
	uint8_t x494 = 9U;
	int16_t x495 = 474;
	int8_t x496 = INT8_MIN;

	t99 = (x493<=(x494<(x495+x496)));

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

