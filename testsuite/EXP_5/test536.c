#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 3579923651LL;
int8_t x10 = 0;
int16_t x11 = INT16_MIN;
volatile int64_t t1 = -35LL;
static uint8_t x13 = 8U;
volatile int32_t x15 = -1763;
volatile uint32_t t4 = 3267U;
static int32_t x44 = -1;
volatile uint32_t t10 = 93828U;
uint8_t x54 = 94U;
volatile uint16_t x71 = UINT16_MAX;
int64_t t14 = -15035719LL;
volatile uint32_t x75 = 236335U;
uint8_t x85 = 10U;
volatile int32_t t26 = -54411;
volatile int64_t t27 = 1823099899LL;
uint8_t x133 = 5U;
int64_t x134 = -1LL;
int64_t x135 = INT64_MIN;
int64_t x140 = -33LL;
static int32_t x155 = 386;
int32_t x157 = -1;
uint32_t x160 = 205223981U;
static int16_t x165 = -526;
uint64_t t35 = 58LLU;
static uint16_t x171 = 5382U;
uint16_t x173 = UINT16_MAX;
int64_t t37 = -93999988971777450LL;
volatile uint32_t x177 = 611U;
int16_t x201 = INT16_MIN;
volatile int32_t x204 = INT32_MIN;
uint8_t x209 = 9U;
int64_t x213 = -6804591905LL;
static int8_t x214 = -2;
int16_t x216 = -7;
volatile int64_t t42 = 132334LL;
static int64_t x223 = INT64_MIN;
volatile int64_t t44 = -2LL;
int64_t x225 = 22622538LL;
int32_t x227 = -2;
int16_t x241 = 32;
uint8_t x270 = 1U;
static int32_t x278 = -1;
uint64_t x279 = UINT64_MAX;
static int32_t x292 = 31;
volatile int32_t t53 = 0;
int32_t x308 = 0;
volatile int64_t t57 = 156502720249348LL;
volatile uint32_t t58 = 150U;
volatile int16_t x323 = -1;
int32_t x327 = 1878662;
volatile uint32_t x328 = 48U;
int16_t x330 = -1;
static int32_t t61 = 694780560;
volatile int16_t x351 = INT16_MIN;
uint16_t x353 = 59U;
static volatile uint32_t x358 = 29U;
volatile uint32_t t65 = 5U;
int64_t x361 = INT64_MAX;
uint64_t x364 = UINT64_MAX;
uint8_t x370 = 9U;
volatile int64_t x378 = -117537332045LL;
int16_t x383 = -8;
static uint8_t x384 = 25U;
int16_t x393 = INT16_MIN;
int64_t x395 = -562111474294LL;
uint32_t x396 = UINT32_MAX;
int64_t t72 = 28LL;
uint8_t x397 = UINT8_MAX;
int64_t x398 = 63LL;
volatile int64_t t73 = -241898085278409LL;
volatile uint8_t x403 = 104U;
uint32_t x404 = UINT32_MAX;
static uint8_t x406 = 0U;
uint32_t x408 = 45000174U;
volatile int16_t x423 = INT16_MIN;
int8_t x430 = -43;
int16_t x432 = INT16_MIN;
int16_t x433 = -1;
uint8_t x434 = 4U;
uint64_t x446 = 12555576LLU;
static int8_t x449 = INT8_MIN;
static uint8_t x451 = UINT8_MAX;
int16_t x455 = 3;
static int64_t x460 = 6425760LL;
uint16_t x463 = 1U;
uint16_t x468 = UINT16_MAX;
int8_t x471 = -3;
uint64_t x478 = 2863724735475454LLU;
static int8_t x482 = -4;
int32_t x499 = INT32_MIN;
volatile int8_t x502 = INT8_MIN;
uint64_t t99 = 453601647944362LLU;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	static uint32_t x6 = 32428264U;
	int64_t x7 = INT64_MAX;
	int8_t x8 = -6;

	t0 = (x5*((x6/x7)*x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 395797LL;
	uint16_t x12 = UINT16_MAX;

	t1 = (x9*((x10/x11)*x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	int64_t x16 = -25758527235120LL;
	static volatile int64_t t2 = -51071128939LL;

	t2 = (x13*((x14/x15)*x16));

	if (t2 != -3709227921857280LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 4255340475LL;
	int32_t x18 = -61915889;
	static uint32_t x19 = UINT32_MAX;
	int8_t x20 = -1;
	int64_t t3 = -12LL;

	t3 = (x17*((x18/x19)*x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x21 = 661321103U;
	volatile uint8_t x22 = 97U;
	int16_t x23 = INT16_MIN;
	int32_t x24 = -1;

	t4 = (x21*((x22/x23)*x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 11350662U;
	static uint64_t x26 = UINT64_MAX;
	int8_t x27 = 1;
	uint64_t x28 = 27105404340627LLU;
	uint64_t t5 = 9768168982LLU;

	t5 = (x25*((x26/x27)*x28));

	if (t5 != 5930366209272432398LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	static int16_t x34 = -1;
	static int32_t x35 = INT32_MIN;
	volatile uint16_t x36 = 2343U;
	int32_t t6 = 2022;

	t6 = (x33*((x34/x35)*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = 7U;
	static int64_t x39 = INT64_MIN;
	int8_t x40 = 0;
	int64_t t7 = -791665794LL;

	t7 = (x37*((x38/x39)*x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 2314681176402746LLU;
	static int8_t x42 = INT8_MIN;
	volatile uint64_t x43 = UINT64_MAX;
	volatile uint64_t t8 = 5064792945097188505LLU;

	t8 = (x41*((x42/x43)*x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -641533541LL;
	int16_t x46 = INT16_MIN;
	int16_t x47 = -1906;
	int16_t x48 = INT16_MAX;
	static volatile int64_t t9 = -770958584860LL;

	t9 = (x45*((x46/x47)*x48));

	if (t9 != -357359202145099LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = -1;
	int8_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	uint8_t x52 = 27U;

	t10 = (x49*((x50/x51)*x52));

	if (t10 != 4294967269U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	int32_t x55 = -1;
	int8_t x56 = -1;
	volatile int32_t t11 = -214025;

	t11 = (x53*((x54/x55)*x56));

	if (t11 != -94) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 16929U;
	int64_t x62 = -1LL;
	static volatile int8_t x63 = INT8_MAX;
	int64_t x64 = -16799LL;
	static int64_t t12 = -2594764LL;

	t12 = (x61*((x62/x63)*x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	static int8_t x66 = -14;
	volatile int16_t x67 = -3894;
	static volatile uint8_t x68 = 10U;
	int32_t t13 = 19362;

	t13 = (x65*((x66/x67)*x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -1;
	int32_t x70 = INT32_MAX;
	int64_t x72 = -1LL;

	t14 = (x69*((x70/x71)*x72));

	if (t14 != 32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 13U;
	uint8_t x74 = UINT8_MAX;
	uint32_t x76 = 13685U;
	volatile uint32_t t15 = 180031U;

	t15 = (x73*((x74/x75)*x76));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	int64_t x78 = INT64_MIN;
	int32_t x79 = -52718;
	int16_t x80 = INT16_MAX;
	int64_t t16 = -4274533604770382LL;

	t16 = (x77*((x78/x79)*x80));

	if (t16 != -5732809126515025744LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = -28319647988176LL;
	int8_t x82 = INT8_MIN;
	int16_t x83 = 4533;
	volatile uint32_t x84 = UINT32_MAX;
	static volatile int64_t t17 = -47586798911557707LL;

	t17 = (x81*((x82/x83)*x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x86 = INT8_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	static int8_t x88 = 0;
	volatile int32_t t18 = 60;

	t18 = (x85*((x86/x87)*x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x89 = -1;
	static uint8_t x90 = 5U;
	static uint16_t x91 = 10113U;
	int8_t x92 = 6;
	static volatile int32_t t19 = -1;

	t19 = (x89*((x90/x91)*x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -82332668;
	int16_t x94 = 1850;
	int16_t x95 = INT16_MAX;
	static uint16_t x96 = 4022U;
	volatile int32_t t20 = 1109;

	t20 = (x93*((x94/x95)*x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 458U;
	static uint16_t x98 = UINT16_MAX;
	int32_t x99 = 16;
	int32_t x100 = -1;
	static volatile int32_t t21 = 546721038;

	t21 = (x97*((x98/x99)*x100));

	if (t21 != -1875510) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = 1;
	int8_t x102 = -3;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	int64_t t22 = 2477707279621320908LL;

	t22 = (x101*((x102/x103)*x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = 4U;
	static uint32_t x106 = 153134U;
	int8_t x107 = 1;
	int16_t x108 = -278;
	volatile uint32_t t23 = 773199196U;

	t23 = (x105*((x106/x107)*x108));

	if (t23 != 4124682288U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 808747477172LL;
	volatile uint8_t x110 = 2U;
	int32_t x111 = -9;
	int8_t x112 = INT8_MIN;
	int64_t t24 = -177359LL;

	t24 = (x109*((x110/x111)*x112));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x121 = -1;
	uint64_t x122 = 104898LLU;
	uint16_t x123 = 11U;
	int16_t x124 = INT16_MAX;
	uint64_t t25 = 3532898LLU;

	t25 = (x121*((x122/x123)*x124));

	if (t25 != 18446744073397085504LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = INT16_MIN;
	uint16_t x126 = 2022U;
	int16_t x127 = INT16_MAX;
	int16_t x128 = 0;

	t26 = (x125*((x126/x127)*x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -1LL;
	static int16_t x130 = 3438;
	uint16_t x131 = UINT16_MAX;
	static int16_t x132 = INT16_MIN;

	t27 = (x129*((x130/x131)*x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x136 = -162672326;
	volatile int64_t t28 = -99589249869490615LL;

	t28 = (x133*((x134/x135)*x136));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = 897767842055651LL;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	volatile int64_t t29 = -530606992867LL;

	t29 = (x137*((x138/x139)*x140));

	if (t29 != -29626338787836483LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 0U;
	static int32_t x142 = 5575;
	volatile int64_t x143 = INT64_MAX;
	int16_t x144 = INT16_MIN;
	int64_t t30 = -19206575LL;

	t30 = (x141*((x142/x143)*x144));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = -1LL;
	uint16_t x146 = 2396U;
	volatile int16_t x147 = INT16_MIN;
	uint64_t x148 = 14573945LLU;
	volatile uint64_t t31 = 288678199863618788LLU;

	t31 = (x145*((x146/x147)*x148));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -1;
	int32_t x150 = -1621437;
	uint32_t x151 = 47431U;
	uint32_t x152 = 1541U;
	volatile uint32_t t32 = 17192423U;

	t32 = (x149*((x150/x151)*x152));

	if (t32 != 4155480599U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -269;
	volatile int32_t x154 = -71552470;
	static int64_t x156 = -1LL;
	static volatile int64_t t33 = 14LL;

	t33 = (x153*((x154/x155)*x156));

	if (t33 != -49864261LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x158 = 6U;
	static volatile uint64_t x159 = 2LLU;
	uint64_t t34 = 122680298065LLU;

	t34 = (x157*((x158/x159)*x160));

	if (t34 != 18446744073093879673LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = INT64_MAX;
	uint64_t x168 = UINT64_MAX;

	t35 = (x165*((x166/x167)*x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	static uint16_t x170 = UINT16_MAX;
	volatile int16_t x172 = 1;
	volatile int32_t t36 = -124;

	t36 = (x169*((x170/x171)*x172));

	if (t36 != -1536) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	volatile uint8_t x176 = 0U;

	t37 = (x173*((x174/x175)*x176));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x178 = INT64_MIN;
	static uint64_t x179 = UINT64_MAX;
	volatile uint8_t x180 = 6U;
	uint64_t t38 = 478588LLU;

	t38 = (x177*((x178/x179)*x180));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x202 = -1LL;
	static int32_t x203 = -1;
	int64_t t39 = 53LL;

	t39 = (x201*((x202/x203)*x204));

	if (t39 != 70368744177664LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x205 = 170LLU;
	volatile uint64_t x206 = 0LLU;
	int8_t x207 = INT8_MIN;
	int32_t x208 = 180977;
	static uint64_t t40 = 25452LLU;

	t40 = (x205*((x206/x207)*x208));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x210 = UINT64_MAX;
	static uint16_t x211 = 38U;
	static volatile uint8_t x212 = UINT8_MAX;
	volatile uint64_t t41 = 92844538847LLU;

	t41 = (x209*((x210/x211)*x212));

	if (t41 != 7281609502780083990LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x215 = -2;

	t42 = (x213*((x214/x215)*x216));

	if (t42 != 47632143335LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	uint32_t x220 = 3U;
	volatile uint32_t t43 = 3246U;

	t43 = (x217*((x218/x219)*x220));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x221 = 1U;
	static int32_t x222 = INT32_MAX;
	volatile uint8_t x224 = 0U;

	t44 = (x221*((x222/x223)*x224));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x226 = INT16_MIN;
	static int32_t x228 = -1;
	volatile int64_t t45 = 153516LL;

	t45 = (x225*((x226/x227)*x228));

	if (t45 != -370647662592LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x233 = -1;
	int32_t x234 = 0;
	int16_t x235 = INT16_MIN;
	int32_t x236 = -1;
	int32_t t46 = -793643;

	t46 = (x233*((x234/x235)*x236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = 1943843174975179796LLU;
	uint16_t x239 = UINT16_MAX;
	static int8_t x240 = -1;
	volatile uint64_t t47 = 0LLU;

	t47 = (x237*((x238/x239)*x240));

	if (t47 != 3796626633048320LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x242 = UINT32_MAX;
	volatile uint64_t x243 = 137LLU;
	volatile int8_t x244 = INT8_MAX;
	uint64_t t48 = 599060788614331322LLU;

	t48 = (x241*((x242/x243)*x244));

	if (t48 != 127406912064LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = 3478;
	static int32_t x251 = INT32_MAX;
	static volatile uint32_t x252 = UINT32_MAX;
	uint32_t t49 = 389U;

	t49 = (x249*((x250/x251)*x252));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x265 = INT64_MAX;
	static int16_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	uint64_t x268 = 374129736430281LLU;
	volatile uint64_t t50 = 22804817111LLU;

	t50 = (x265*((x266/x267)*x268));

	if (t50 != 9222997907118345527LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x269 = -1;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t51 = 2425761;

	t51 = (x269*((x270/x271)*x272));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = 1;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t52 = 161401201133475LLU;

	t52 = (x277*((x278/x279)*x280));

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x289 = 1;
	static int8_t x290 = INT8_MIN;
	volatile uint8_t x291 = 4U;

	t53 = (x289*((x290/x291)*x292));

	if (t53 != -992) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x297 = -792642017287420LL;
	int16_t x298 = 1;
	int16_t x299 = INT16_MIN;
	static uint64_t x300 = 2091766802LLU;
	volatile uint64_t t54 = 2310272539LLU;

	t54 = (x297*((x298/x299)*x300));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int32_t x303 = 930269219;
	int32_t x304 = -1;
	int32_t t55 = -1151361;

	t55 = (x301*((x302/x303)*x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	int8_t x307 = INT8_MAX;
	volatile int32_t t56 = 131622;

	t56 = (x305*((x306/x307)*x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x309 = -1LL;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 3U;
	int8_t x312 = -1;

	t57 = (x309*((x310/x311)*x312));

	if (t57 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	volatile uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MAX;

	t58 = (x313*((x314/x315)*x316));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = 1;
	int64_t x322 = -1LL;
	uint64_t x324 = 849710LLU;
	uint64_t t59 = 142258109582548513LLU;

	t59 = (x321*((x322/x323)*x324));

	if (t59 != 849710LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x325 = INT16_MAX;
	uint32_t x326 = 279U;
	volatile uint32_t t60 = 65421U;

	t60 = (x325*((x326/x327)*x328));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = -1;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = 30978;

	t61 = (x329*((x330/x331)*x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x337 = UINT64_MAX;
	uint16_t x338 = UINT16_MAX;
	static int16_t x339 = INT16_MIN;
	uint64_t x340 = 972LLU;
	volatile uint64_t t62 = 7184070231419LLU;

	t62 = (x337*((x338/x339)*x340));

	if (t62 != 972LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x349 = -53823;
	int16_t x350 = INT16_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t63 = 8932U;

	t63 = (x349*((x350/x351)*x352));

	if (t63 != 53823U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x354 = -140075918712648LL;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	static int64_t t64 = 76LL;

	t64 = (x353*((x354/x355)*x356));

	if (t64 != -8264479204041984LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x357 = 10U;
	static int16_t x359 = INT16_MIN;
	volatile int32_t x360 = INT32_MIN;

	t65 = (x357*((x358/x359)*x360));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	uint64_t t66 = 61479LLU;

	t66 = (x361*((x362/x363)*x364));

	if (t66 != 16777216LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = -38;
	volatile int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = 96U;
	int64_t t67 = -2LL;

	t67 = (x365*((x366/x367)*x368));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x369 = INT8_MIN;
	int8_t x371 = -2;
	volatile uint32_t x372 = UINT32_MAX;
	volatile uint32_t t68 = 908207337U;

	t68 = (x369*((x370/x371)*x372));

	if (t68 != 4294966784U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = INT16_MIN;
	static uint32_t x379 = 597U;
	uint32_t x380 = 2U;
	int64_t t69 = 380386534166LL;

	t69 = (x377*((x378/x379)*x380));

	if (t69 != 12902724599808LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	static int32_t t70 = 859592130;

	t70 = (x381*((x382/x383)*x384));

	if (t70 != 775) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x389 = -8;
	static uint64_t x390 = 384895060119767LLU;
	volatile int64_t x391 = 8308944854LL;
	volatile int64_t x392 = -1LL;
	volatile uint64_t t71 = 1LLU;

	t71 = (x389*((x390/x391)*x392));

	if (t71 != 370576LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x394 = 1982;

	t72 = (x393*((x394/x395)*x396));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MAX;

	t73 = (x397*((x398/x399)*x400));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x401 = 12;
	uint8_t x402 = 2U;
	static uint32_t t74 = 509411498U;

	t74 = (x401*((x402/x403)*x404));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x405 = INT64_MIN;
	volatile uint16_t x407 = 228U;
	int64_t t75 = -2114952936602048880LL;

	t75 = (x405*((x406/x407)*x408));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x409 = INT8_MIN;
	static volatile int32_t x410 = 0;
	static uint16_t x411 = UINT16_MAX;
	static uint16_t x412 = 515U;
	volatile int32_t t76 = 229;

	t76 = (x409*((x410/x411)*x412));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = -35946700211598360LL;
	uint32_t x415 = UINT32_MAX;
	int16_t x416 = -1;
	volatile int64_t t77 = 4293553442123192568LL;

	t77 = (x413*((x414/x415)*x416));

	if (t77 != -274251546624LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x417 = 806U;
	int64_t x418 = 62444858294LL;
	volatile int64_t x419 = INT64_MAX;
	int64_t x420 = INT64_MIN;
	volatile int64_t t78 = 11930499357650253LL;

	t78 = (x417*((x418/x419)*x420));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = 168LLU;
	int64_t x422 = 93750LL;
	uint32_t x424 = 47582018U;
	uint64_t t79 = 5611959LLU;

	t79 = (x421*((x422/x423)*x424));

	if (t79 != 18446744057721993568LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = INT8_MIN;
	volatile int16_t x426 = 421;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = 27548483148911837LLU;
	uint64_t t80 = 388LLU;

	t80 = (x425*((x426/x427)*x428));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = INT16_MIN;
	int8_t x431 = INT8_MAX;
	volatile int32_t t81 = 4;

	t81 = (x429*((x430/x431)*x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x435 = INT32_MIN;
	static uint8_t x436 = 0U;
	int32_t t82 = -2591;

	t82 = (x433*((x434/x435)*x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x437 = UINT8_MAX;
	int64_t x438 = 11262247537LL;
	int64_t x439 = -51585725969586LL;
	int8_t x440 = INT8_MIN;
	int64_t t83 = 0LL;

	t83 = (x437*((x438/x439)*x440));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x441 = -1;
	volatile int64_t x442 = -27LL;
	uint64_t x443 = 439422578LLU;
	static int64_t x444 = -2LL;
	volatile uint64_t t84 = 4623580008LLU;

	t84 = (x441*((x442/x443)*x444));

	if (t84 != 83959018026LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x445 = INT16_MAX;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t85 = 71669790LLU;

	t85 = (x445*((x446/x447)*x448));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x450 = -1;
	int16_t x452 = -27;
	int32_t t86 = 12;

	t86 = (x449*((x450/x451)*x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x453 = UINT64_MAX;
	volatile uint32_t x454 = 20U;
	static volatile int32_t x456 = INT32_MIN;
	uint64_t t87 = 8321203994447764955LLU;

	t87 = (x453*((x454/x455)*x456));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x457 = INT8_MAX;
	static int64_t x458 = 811704153LL;
	uint64_t x459 = UINT64_MAX;
	volatile uint64_t t88 = 475142378245LLU;

	t88 = (x457*((x458/x459)*x460));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = -1;
	volatile int8_t x462 = INT8_MIN;
	uint32_t x464 = 6518U;
	static uint32_t t89 = 19585U;

	t89 = (x461*((x462/x463)*x464));

	if (t89 != 834304U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x465 = 0LLU;
	volatile int32_t x466 = INT32_MAX;
	static volatile int64_t x467 = -1LL;
	volatile uint64_t t90 = 451365649LLU;

	t90 = (x465*((x466/x467)*x468));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x469 = INT64_MIN;
	volatile uint64_t x470 = 14LLU;
	int8_t x472 = INT8_MIN;
	static uint64_t t91 = 149220808174173LLU;

	t91 = (x469*((x470/x471)*x472));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x477 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	static int64_t x480 = -1LL;
	uint64_t t92 = 4891158749485LLU;

	t92 = (x477*((x478/x479)*x480));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x481 = 14945U;
	int64_t x483 = 4574LL;
	static int32_t x484 = INT32_MIN;
	volatile int64_t t93 = -2LL;

	t93 = (x481*((x482/x483)*x484));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x485 = 530082159;
	uint8_t x486 = 62U;
	volatile int32_t x487 = INT32_MIN;
	static volatile uint8_t x488 = 52U;
	volatile int32_t t94 = -40927268;

	t94 = (x485*((x486/x487)*x488));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x489 = 1963;
	int8_t x490 = -1;
	static uint64_t x491 = 32LLU;
	uint16_t x492 = 30802U;
	static volatile uint64_t t95 = 25914LLU;

	t95 = (x489*((x490/x491)*x492));

	if (t95 != 3458764513760076602LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = -1;
	uint64_t x494 = 1187LLU;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MIN;
	volatile uint64_t t96 = 92051520756LLU;

	t96 = (x493*((x494/x495)*x496));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x497 = INT16_MIN;
	static uint16_t x498 = 1095U;
	int8_t x500 = INT8_MIN;
	volatile int32_t t97 = -32034;

	t97 = (x497*((x498/x499)*x500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x501 = 659594;
	uint8_t x503 = 2U;
	uint32_t x504 = 16U;
	uint32_t t98 = 517768980U;

	t98 = (x501*((x502/x503)*x504));

	if (t98 != 3619543040U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x505 = 10332111832LL;
	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	volatile uint64_t x508 = UINT64_MAX;

	t99 = (x505*((x506/x507)*x508));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

