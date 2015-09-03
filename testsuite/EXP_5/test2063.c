#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 150015646LLU;
int8_t x7 = INT8_MAX;
volatile int32_t t1 = -80164808;
static uint64_t x15 = UINT64_MAX;
int16_t x21 = INT16_MAX;
uint8_t x22 = 2U;
int8_t x23 = INT8_MIN;
volatile uint64_t x26 = 25LLU;
volatile uint16_t x28 = 0U;
int32_t t5 = 4759966;
uint16_t x34 = UINT16_MAX;
volatile uint16_t x55 = UINT16_MAX;
int8_t x59 = 0;
int32_t t10 = 19323;
volatile int32_t t11 = 390472262;
uint64_t x65 = 826896260450054443LLU;
uint16_t x66 = 3U;
static volatile uint64_t x68 = 262955546059317845LLU;
volatile uint64_t x76 = UINT64_MAX;
uint8_t x78 = UINT8_MAX;
volatile int8_t x110 = INT8_MIN;
static int16_t x112 = -457;
int32_t x129 = 102648;
uint16_t x139 = 1U;
static int8_t x151 = INT8_MIN;
uint8_t x167 = 5U;
int32_t x176 = 0;
uint16_t x178 = UINT16_MAX;
static int64_t x182 = INT64_MIN;
int32_t x185 = -37;
volatile int32_t t33 = 416488;
int64_t x189 = INT64_MAX;
int64_t x190 = -1LL;
volatile uint32_t x192 = UINT32_MAX;
volatile uint32_t x197 = UINT32_MAX;
int8_t x199 = INT8_MIN;
int32_t t35 = 653047243;
uint16_t x238 = UINT16_MAX;
volatile int32_t t40 = -267;
static volatile int32_t t42 = -61;
uint16_t x249 = 5U;
int32_t t43 = -28;
int8_t x255 = 47;
int32_t t44 = -24071;
int8_t x258 = -1;
int16_t x265 = -12;
volatile uint8_t x266 = UINT8_MAX;
static int32_t t49 = 375;
int8_t x297 = INT8_MIN;
int8_t x300 = 7;
int64_t x313 = 11586617758269LL;
uint64_t x319 = UINT64_MAX;
int32_t x320 = INT32_MIN;
static uint32_t x321 = 1U;
volatile int32_t t56 = -13124873;
int32_t x329 = INT32_MIN;
uint64_t x331 = 1476507349300LLU;
int8_t x333 = INT8_MIN;
int16_t x334 = 156;
int32_t t59 = -17;
uint64_t x340 = 11168565468197LLU;
int16_t x341 = INT16_MAX;
int8_t x343 = INT8_MAX;
uint8_t x346 = 5U;
int16_t x350 = -1;
uint32_t x355 = UINT32_MAX;
static volatile int32_t t64 = 376354;
static int32_t x368 = INT32_MIN;
int16_t x375 = -1;
volatile int32_t t66 = -236066691;
static int64_t x382 = -1294943049LL;
int16_t x383 = INT16_MAX;
int32_t x384 = -1;
int64_t x389 = -1LL;
volatile uint32_t x390 = 297010U;
int32_t x405 = INT32_MIN;
int64_t x407 = 8793653LL;
int32_t t74 = 212815;
int32_t x421 = INT32_MAX;
volatile int64_t x426 = 456273392LL;
int16_t x428 = INT16_MAX;
static volatile uint16_t x466 = UINT16_MAX;
int16_t x468 = INT16_MAX;
int64_t x470 = -2140108LL;
volatile int32_t t81 = -70035;
static uint8_t x473 = UINT8_MAX;
volatile uint64_t x474 = UINT64_MAX;
int64_t x477 = INT64_MAX;
int32_t x487 = -1;
static int8_t x496 = 22;
static uint16_t x512 = 11313U;
uint8_t x519 = 0U;
int64_t x521 = 439225969811654207LL;
static volatile int8_t x553 = INT8_MAX;
int16_t x554 = -1;
int32_t t92 = 927055;
int32_t t95 = -149;
int16_t x573 = -1;
int32_t x576 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int8_t x2 = 31;
	volatile int32_t x3 = 5701;
	volatile int8_t x4 = INT8_MIN;
	static int32_t t0 = 0;

	t0 = (x1<((x2^x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int8_t x8 = INT8_MAX;

	t1 = (x5<((x6^x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 1799971258LLU;
	int32_t x10 = INT32_MAX;
	static int16_t x11 = 0;
	uint8_t x12 = 1U;
	int32_t t2 = 7;

	t2 = (x9<((x10^x11)*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 2U;
	int32_t x14 = -1;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -38281983;

	t3 = (x13<((x14^x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x24 = INT8_MIN;
	int32_t t4 = 8;

	t4 = (x21<((x22^x23)*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	int16_t x27 = 15573;

	t5 = (x25<((x26^x27)*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MAX;
	static uint32_t x31 = UINT32_MAX;
	int8_t x32 = -1;
	volatile int32_t t6 = 207972366;

	t6 = (x29<((x30^x31)*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 15U;
	volatile int32_t t7 = 98682;

	t7 = (x33<((x34^x35)*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = -1091204217802726331LL;
	int16_t x47 = INT16_MIN;
	static uint64_t x48 = 186415190520LLU;
	int32_t t8 = 86064267;

	t8 = (x45<((x46^x47)*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 3U;
	static uint64_t x54 = 1072104126826LLU;
	int8_t x56 = -1;
	volatile int32_t t9 = 6;

	t9 = (x53<((x54^x55)*x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x57 = 27460;
	int16_t x58 = INT16_MAX;
	uint8_t x60 = UINT8_MAX;

	t10 = (x57<((x58^x59)*x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int8_t x62 = -3;
	int16_t x63 = 2;
	static uint64_t x64 = UINT64_MAX;

	t11 = (x61<((x62^x63)*x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x67 = UINT8_MAX;
	int32_t t12 = 120;

	t12 = (x65<((x66^x67)*x68));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = 443U;
	volatile int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	volatile int32_t t13 = -8015;

	t13 = (x73<((x74^x75)*x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x77 = -742250955LL;
	uint64_t x79 = UINT64_MAX;
	int64_t x80 = -40250107110986471LL;
	volatile int32_t t14 = -1;

	t14 = (x77<((x78^x79)*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 1LLU;
	static volatile int16_t x90 = INT16_MIN;
	uint8_t x91 = 5U;
	int16_t x92 = INT16_MIN;
	volatile int32_t t15 = 1;

	t15 = (x89<((x90^x91)*x92));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = 3042U;
	static int16_t x95 = INT16_MAX;
	static volatile uint16_t x96 = 16441U;
	int32_t t16 = 0;

	t16 = (x93<((x94^x95)*x96));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = INT32_MIN;
	static int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile uint16_t x100 = 1U;
	static volatile int32_t t17 = 647801748;

	t17 = (x97<((x98^x99)*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = -1LL;
	uint8_t x102 = UINT8_MAX;
	static uint64_t x103 = 4227914110LLU;
	int32_t x104 = -1;
	volatile int32_t t18 = 209;

	t18 = (x101<((x102^x103)*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = INT64_MAX;
	int8_t x111 = 1;
	int32_t t19 = 3986;

	t19 = (x109<((x110^x111)*x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x117 = UINT8_MAX;
	static volatile uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t20 = -5703264;

	t20 = (x117<((x118^x119)*x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -1;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	static volatile uint64_t x124 = 17852428LLU;
	int32_t t21 = -14691;

	t21 = (x121<((x122^x123)*x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -2;
	static volatile int32_t t22 = -15058347;

	t22 = (x125<((x126^x127)*x128));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x130 = 16LLU;
	static volatile int16_t x131 = -43;
	volatile uint8_t x132 = 1U;
	int32_t t23 = -745;

	t23 = (x129<((x130^x131)*x132));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = 446U;
	int8_t x134 = INT8_MIN;
	volatile uint16_t x135 = 2U;
	int8_t x136 = INT8_MAX;
	static int32_t t24 = 2;

	t24 = (x133<((x134^x135)*x136));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = -1;
	volatile int32_t x138 = -2737967;
	uint8_t x140 = UINT8_MAX;
	static int32_t t25 = 16;

	t25 = (x137<((x138^x139)*x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = INT32_MIN;
	volatile uint32_t x150 = UINT32_MAX;
	uint16_t x152 = 409U;
	int32_t t26 = 355841;

	t26 = (x149<((x150^x151)*x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x154 = 0;
	static int8_t x155 = INT8_MIN;
	static uint32_t x156 = 809805294U;
	volatile int32_t t27 = -4;

	t27 = (x153<((x154^x155)*x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = -1;
	int64_t x158 = -557086887LL;
	uint64_t x159 = 457503147372LLU;
	int16_t x160 = -1;
	volatile int32_t t28 = 2489;

	t28 = (x157<((x158^x159)*x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = 245;
	int64_t x166 = INT64_MIN;
	int8_t x168 = -1;
	volatile int32_t t29 = -15;

	t29 = (x165<((x166^x167)*x168));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x173 = 18;
	static volatile int32_t x174 = 51;
	static int64_t x175 = 832LL;
	int32_t t30 = -51027960;

	t30 = (x173<((x174^x175)*x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x177 = INT16_MIN;
	int16_t x179 = INT16_MAX;
	uint8_t x180 = 0U;
	int32_t t31 = 6711910;

	t31 = (x177<((x178^x179)*x180));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x181 = INT16_MIN;
	uint16_t x183 = 150U;
	static volatile uint8_t x184 = 1U;
	volatile int32_t t32 = 51397314;

	t32 = (x181<((x182^x183)*x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x186 = INT16_MAX;
	int16_t x187 = 233;
	int16_t x188 = INT16_MIN;

	t33 = (x185<((x186^x187)*x188));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x191 = -158LL;
	int32_t t34 = -3;

	t34 = (x189<((x190^x191)*x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x198 = 640;
	uint8_t x200 = 111U;

	t35 = (x197<((x198^x199)*x200));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x209 = 2465822U;
	int16_t x210 = -7;
	static int64_t x211 = -1LL;
	uint8_t x212 = UINT8_MAX;
	int32_t t36 = 56;

	t36 = (x209<((x210^x211)*x212));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = 0;
	uint16_t x218 = UINT16_MAX;
	volatile uint16_t x219 = 6U;
	volatile int8_t x220 = 20;
	volatile int32_t t37 = 10492;

	t37 = (x217<((x218^x219)*x220));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = 5;
	int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	int32_t t38 = -51;

	t38 = (x221<((x222^x223)*x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x225 = -5692460166346495LL;
	int32_t x226 = INT32_MIN;
	uint64_t x227 = 53892347271128LLU;
	int8_t x228 = INT8_MAX;
	int32_t t39 = -6078;

	t39 = (x225<((x226^x227)*x228));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x237 = -1;
	int64_t x239 = 372600251344LL;
	int8_t x240 = 37;

	t40 = (x237<((x238^x239)*x240));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = -14;
	int32_t x242 = 40;
	static int16_t x243 = -1;
	volatile int16_t x244 = INT16_MIN;
	int32_t t41 = -6;

	t41 = (x241<((x242^x243)*x244));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x245 = INT16_MIN;
	static uint16_t x246 = 125U;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = UINT32_MAX;

	t42 = (x245<((x246^x247)*x248));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x250 = UINT32_MAX;
	volatile int32_t x251 = -1531;
	int8_t x252 = -60;

	t43 = (x249<((x250^x251)*x252));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x253 = 7U;
	int16_t x254 = INT16_MIN;
	uint16_t x256 = 277U;

	t44 = (x253<((x254^x255)*x256));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 545325104U;
	static uint8_t x259 = 11U;
	uint32_t x260 = UINT32_MAX;
	int32_t t45 = -1;

	t45 = (x257<((x258^x259)*x260));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = 366894LL;
	volatile uint16_t x262 = 0U;
	uint8_t x263 = 41U;
	volatile int64_t x264 = -224LL;
	int32_t t46 = 233774;

	t46 = (x261<((x262^x263)*x264));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x267 = 118298654LL;
	uint16_t x268 = 81U;
	int32_t t47 = -914266;

	t47 = (x265<((x266^x267)*x268));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x285 = 13839U;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = 8840546LLU;
	volatile int32_t t48 = 24;

	t48 = (x285<((x286^x287)*x288));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = 10;
	static volatile uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MIN;

	t49 = (x289<((x290^x291)*x292));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x298 = UINT16_MAX;
	static int16_t x299 = INT16_MIN;
	static int32_t t50 = -9;

	t50 = (x297<((x298^x299)*x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = -1LL;
	int32_t x304 = INT32_MIN;
	volatile int32_t t51 = -96;

	t51 = (x301<((x302^x303)*x304));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x305 = INT32_MAX;
	int64_t x306 = 1051136642LL;
	int8_t x307 = INT8_MAX;
	uint32_t x308 = UINT32_MAX;
	int32_t t52 = 46;

	t52 = (x305<((x306^x307)*x308));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x309 = -15440769985495LL;
	int32_t x310 = 677;
	volatile int64_t x311 = 13137369LL;
	uint8_t x312 = 23U;
	volatile int32_t t53 = -30;

	t53 = (x309<((x310^x311)*x312));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x314 = 14U;
	volatile uint8_t x315 = 17U;
	volatile int8_t x316 = INT8_MIN;
	int32_t t54 = 1211884;

	t54 = (x313<((x314^x315)*x316));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = -3055450472103891820LL;
	int8_t x318 = -1;
	volatile int32_t t55 = 52078157;

	t55 = (x317<((x318^x319)*x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 33260723U;
	static int32_t x324 = INT32_MIN;

	t56 = (x321<((x322^x323)*x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x325 = INT16_MAX;
	uint64_t x326 = 180278263354LLU;
	volatile int32_t x327 = -182684;
	static volatile int32_t x328 = INT32_MAX;
	int32_t t57 = 188768725;

	t57 = (x325<((x326^x327)*x328));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x330 = UINT8_MAX;
	static int64_t x332 = INT64_MIN;
	int32_t t58 = 113;

	t58 = (x329<((x330^x331)*x332));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x335 = 5U;
	uint64_t x336 = UINT64_MAX;

	t59 = (x333<((x334^x335)*x336));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x337 = 11919554LLU;
	int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	volatile int32_t t60 = 1;

	t60 = (x337<((x338^x339)*x340));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x342 = INT64_MIN;
	static int16_t x344 = 0;
	int32_t t61 = -1874418;

	t61 = (x341<((x342^x343)*x344));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x345 = UINT32_MAX;
	static volatile int32_t x347 = INT32_MIN;
	volatile int8_t x348 = -1;
	int32_t t62 = -40204;

	t62 = (x345<((x346^x347)*x348));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x349 = 2U;
	uint64_t x351 = 32614426851226LLU;
	int16_t x352 = INT16_MIN;
	volatile int32_t t63 = -49453;

	t63 = (x349<((x350^x351)*x352));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = -30387;
	int64_t x356 = 1LL;

	t64 = (x353<((x354^x355)*x356));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int16_t x366 = -1;
	uint64_t x367 = 13600298LLU;
	volatile int32_t t65 = 0;

	t65 = (x365<((x366^x367)*x368));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = 74127;
	uint8_t x374 = 2U;
	int16_t x376 = -1;

	t66 = (x373<((x374^x375)*x376));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x381 = INT32_MIN;
	volatile int32_t t67 = 348002239;

	t67 = (x381<((x382^x383)*x384));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x385 = 350828501U;
	volatile uint8_t x386 = UINT8_MAX;
	volatile int8_t x387 = INT8_MAX;
	int32_t x388 = -323061;
	int32_t t68 = -778;

	t68 = (x385<((x386^x387)*x388));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x391 = INT16_MAX;
	uint32_t x392 = UINT32_MAX;
	int32_t t69 = -120302;

	t69 = (x389<((x390^x391)*x392));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x398 = -3;
	uint8_t x399 = 89U;
	int16_t x400 = -669;
	volatile int32_t t70 = -10523;

	t70 = (x397<((x398^x399)*x400));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x401 = INT64_MAX;
	uint64_t x402 = 246056LLU;
	int64_t x403 = INT64_MAX;
	static int8_t x404 = 1;
	int32_t t71 = 1;

	t71 = (x401<((x402^x403)*x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x406 = UINT16_MAX;
	int8_t x408 = INT8_MAX;
	int32_t t72 = -529;

	t72 = (x405<((x406^x407)*x408));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MAX;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 1476457223456357356LLU;
	int32_t t73 = -36395;

	t73 = (x409<((x410^x411)*x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x418 = -91421;
	volatile uint64_t x419 = UINT64_MAX;
	uint16_t x420 = 191U;

	t74 = (x417<((x418^x419)*x420));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x422 = -1LL;
	uint64_t x423 = UINT64_MAX;
	static int64_t x424 = INT64_MIN;
	volatile int32_t t75 = 0;

	t75 = (x421<((x422^x423)*x424));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x425 = 1U;
	int16_t x427 = INT16_MIN;
	static int32_t t76 = 132147303;

	t76 = (x425<((x426^x427)*x428));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x429 = -1;
	int64_t x430 = -149699185840505681LL;
	int16_t x431 = -12;
	static volatile uint8_t x432 = 6U;
	volatile int32_t t77 = -2033;

	t77 = (x429<((x430^x431)*x432));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x433 = 16011195342568722LL;
	static volatile uint32_t x434 = 7U;
	static int32_t x435 = 7;
	int16_t x436 = -1;
	volatile int32_t t78 = 344;

	t78 = (x433<((x434^x435)*x436));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x453 = -13;
	static volatile int16_t x454 = 473;
	int16_t x455 = INT16_MIN;
	static volatile uint32_t x456 = 7669658U;
	static int32_t t79 = -22719;

	t79 = (x453<((x454^x455)*x456));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x465 = 8849104440029922LL;
	volatile uint8_t x467 = UINT8_MAX;
	volatile int32_t t80 = -374499;

	t80 = (x465<((x466^x467)*x468));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x469 = 2266U;
	int32_t x471 = 0;
	static uint8_t x472 = 0U;

	t81 = (x469<((x470^x471)*x472));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x475 = 0;
	uint16_t x476 = 493U;
	int32_t t82 = 79;

	t82 = (x473<((x474^x475)*x476));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x478 = UINT16_MAX;
	uint8_t x479 = UINT8_MAX;
	static int16_t x480 = INT16_MIN;
	static volatile int32_t t83 = 1189427;

	t83 = (x477<((x478^x479)*x480));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x485 = -54626002;
	volatile int32_t x486 = INT32_MIN;
	int32_t x488 = -1;
	int32_t t84 = -699;

	t84 = (x485<((x486^x487)*x488));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x493 = 27U;
	int32_t x494 = -203;
	static volatile uint16_t x495 = UINT16_MAX;
	int32_t t85 = -172;

	t85 = (x493<((x494^x495)*x496));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x505 = INT32_MIN;
	int64_t x506 = -38094437237620LL;
	int64_t x507 = INT64_MAX;
	static int16_t x508 = -1;
	int32_t t86 = 36092;

	t86 = (x505<((x506^x507)*x508));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x509 = UINT16_MAX;
	int16_t x510 = -1800;
	uint32_t x511 = 1538380049U;
	int32_t t87 = 3;

	t87 = (x509<((x510^x511)*x512));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x513 = INT32_MAX;
	int16_t x514 = -8031;
	int64_t x515 = -1LL;
	uint64_t x516 = 11476397LLU;
	int32_t t88 = 1914;

	t88 = (x513<((x514^x515)*x516));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x517 = 75U;
	volatile int16_t x518 = INT16_MIN;
	int64_t x520 = -4336LL;
	static int32_t t89 = -241;

	t89 = (x517<((x518^x519)*x520));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x522 = -1;
	static uint16_t x523 = 1299U;
	volatile int64_t x524 = -1LL;
	volatile int32_t t90 = -85190972;

	t90 = (x521<((x522^x523)*x524));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x525 = 5878;
	volatile uint64_t x526 = 679292LLU;
	volatile int32_t x527 = INT32_MIN;
	uint32_t x528 = 1423U;
	volatile int32_t t91 = 1949;

	t91 = (x525<((x526^x527)*x528));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x555 = INT16_MIN;
	int8_t x556 = -8;

	t92 = (x553<((x554^x555)*x556));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x557 = UINT16_MAX;
	volatile uint64_t x558 = UINT64_MAX;
	uint16_t x559 = UINT16_MAX;
	int8_t x560 = 6;
	int32_t t93 = 612438099;

	t93 = (x557<((x558^x559)*x560));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x561 = 1;
	uint32_t x562 = UINT32_MAX;
	static int8_t x563 = 1;
	volatile int32_t x564 = -94332449;
	static volatile int32_t t94 = -29073;

	t94 = (x561<((x562^x563)*x564));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = 1;
	uint32_t x566 = UINT32_MAX;
	static int64_t x567 = -223LL;
	int32_t x568 = -55;

	t95 = (x565<((x566^x567)*x568));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x569 = INT64_MAX;
	int16_t x570 = -1;
	int64_t x571 = -3LL;
	volatile int32_t x572 = INT32_MIN;
	int32_t t96 = 119435;

	t96 = (x569<((x570^x571)*x572));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x574 = 264543U;
	uint64_t x575 = 932LLU;
	volatile int32_t t97 = 7;

	t97 = (x573<((x574^x575)*x576));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x577 = -1LL;
	volatile int64_t x578 = 60542874849475LL;
	static int16_t x579 = INT16_MAX;
	volatile uint8_t x580 = 5U;
	volatile int32_t t98 = -21073;

	t98 = (x577<((x578^x579)*x580));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x581 = 9216U;
	int8_t x582 = INT8_MAX;
	int32_t x583 = INT32_MIN;
	int8_t x584 = 1;
	static volatile int32_t t99 = -4685602;

	t99 = (x581<((x582^x583)*x584));

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

