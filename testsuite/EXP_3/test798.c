#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 933365808LLU;
static int64_t x8 = INT64_MAX;
int32_t x20 = INT32_MIN;
int64_t t2 = 69710605486913686LL;
int8_t x21 = INT8_MIN;
int64_t x28 = INT64_MAX;
static int8_t x30 = INT8_MIN;
uint64_t t5 = 14574054409LLU;
int64_t x33 = INT64_MAX;
int32_t x48 = -1;
static uint32_t x62 = 7492103U;
uint32_t x63 = UINT32_MAX;
int64_t x65 = INT64_MAX;
int64_t x67 = 134138105LL;
int8_t x96 = 6;
int32_t x103 = -1;
static int64_t x114 = INT64_MAX;
volatile int32_t t21 = -180286484;
uint32_t x128 = 383U;
uint16_t x131 = UINT16_MAX;
static int32_t t23 = -255580;
int16_t x147 = INT16_MIN;
int32_t t26 = 18;
int8_t x150 = INT8_MAX;
static int64_t x152 = 11931LL;
int64_t x160 = -2494LL;
int8_t x164 = -29;
volatile int64_t t29 = 5LL;
int8_t x167 = 2;
uint16_t x182 = 1894U;
int32_t t33 = 0;
int16_t x191 = INT16_MIN;
volatile int32_t x200 = 1186;
volatile int16_t x213 = INT16_MIN;
uint32_t x220 = 80234U;
static uint16_t x229 = 89U;
static int8_t x230 = 1;
volatile int32_t t40 = -124;
int64_t t41 = -952344839LL;
int16_t x237 = -1;
static uint64_t x251 = 11LLU;
int64_t x262 = INT64_MIN;
int32_t x264 = INT32_MAX;
uint32_t t44 = 767761010U;
int32_t x265 = -322;
volatile int8_t x267 = INT8_MIN;
int32_t t45 = -2240579;
int32_t t46 = 265506672;
int64_t t47 = -40759814LL;
static int64_t t48 = -1584884812989891LL;
volatile uint32_t t49 = 38244744U;
int16_t x289 = INT16_MIN;
static uint8_t x291 = 9U;
int32_t t50 = 38;
volatile uint64_t x298 = UINT64_MAX;
volatile int32_t t51 = 40323321;
volatile int32_t t52 = 16;
static int32_t x312 = INT32_MIN;
uint64_t x328 = UINT64_MAX;
static int8_t x334 = 1;
int16_t x336 = -1;
int64_t x339 = INT64_MAX;
int32_t t59 = 1;
int64_t x357 = 57962770582355LL;
uint64_t x358 = 96113437LLU;
int64_t t61 = -641728955LL;
int32_t x378 = INT32_MIN;
int64_t x382 = -1LL;
static int16_t x384 = -11657;
static uint64_t x388 = 6614569306LLU;
static int32_t x401 = INT32_MAX;
volatile uint8_t x411 = 5U;
uint16_t x418 = UINT16_MAX;
volatile int64_t t70 = -358012947230LL;
static volatile int8_t x422 = INT8_MIN;
static uint16_t x430 = 185U;
int64_t x442 = -1LL;
int16_t x457 = INT16_MAX;
volatile uint64_t x467 = 2785891561LLU;
uint32_t x484 = 767479529U;
int64_t x489 = INT64_MIN;
int64_t x495 = -1LL;
static int64_t t84 = -181872LL;
static volatile int32_t x499 = -624;
volatile int32_t t85 = -16292693;
volatile uint32_t x502 = 67616578U;
volatile int8_t x503 = INT8_MIN;
volatile uint16_t x534 = 1U;
int8_t x539 = INT8_MIN;
volatile int64_t t93 = -938337LL;
uint64_t x549 = 10827474300599683LLU;
int8_t x563 = 1;
volatile int32_t x564 = INT32_MAX;
int64_t x569 = -1LL;
volatile int8_t x570 = INT8_MAX;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int32_t x3 = 252244;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 30;

	t0 = ((x1<=x2)%(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 13410632U;
	static int16_t x6 = -1;
	static int16_t x7 = INT16_MAX;
	volatile int64_t t1 = 2467583082022LL;

	t1 = ((x5<=x6)%(x7%x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x17 = -1;
	int64_t x18 = INT64_MAX;
	int64_t x19 = -1LL;

	t2 = ((x17<=x18)%(x19%x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x22 = -1LL;
	int32_t x23 = INT32_MIN;
	static volatile int16_t x24 = INT16_MAX;
	int32_t t3 = 187874;

	t3 = ((x21<=x22)%(x23%x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = 712U;
	static int16_t x26 = -1;
	int8_t x27 = INT8_MAX;
	static int64_t t4 = 69814603021LL;

	t4 = ((x25<=x26)%(x27%x28));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 735U;
	int8_t x31 = -4;
	uint64_t x32 = 238580784LLU;

	t5 = ((x29<=x30)%(x31%x32));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x34 = 7U;
	static uint16_t x35 = UINT16_MAX;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t6 = 92729929;

	t6 = ((x33<=x34)%(x35%x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -60383630628390LL;
	static volatile int8_t x46 = 1;
	uint32_t x47 = 71U;
	uint32_t t7 = 651442U;

	t7 = ((x45<=x46)%(x47%x48));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x53 = 2U;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t8 = 481113;

	t8 = ((x53<=x54)%(x55%x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = -1;
	static volatile int8_t x64 = INT8_MIN;
	volatile uint32_t t9 = 1109810U;

	t9 = ((x61<=x62)%(x63%x64));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x66 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	int64_t t10 = -384425247012242184LL;

	t10 = ((x65<=x66)%(x67%x68));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x69 = 124U;
	int32_t x70 = 7;
	volatile int64_t x71 = -287253482606232269LL;
	static uint16_t x72 = UINT16_MAX;
	volatile int64_t t11 = -214850LL;

	t11 = ((x69<=x70)%(x71%x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x73 = INT8_MIN;
	int64_t x74 = -1LL;
	uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MAX;
	int32_t t12 = 2;

	t12 = ((x73<=x74)%(x75%x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = 10;
	static uint16_t x78 = 1U;
	int64_t x79 = 574714LL;
	volatile uint64_t x80 = 462541932840LLU;
	uint64_t t13 = 415LLU;

	t13 = ((x77<=x78)%(x79%x80));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = -62;
	volatile int8_t x82 = 0;
	int32_t x83 = INT32_MIN;
	static volatile int32_t x84 = 112039611;
	volatile int32_t t14 = 198543;

	t14 = ((x81<=x82)%(x83%x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x89 = UINT64_MAX;
	uint8_t x90 = 84U;
	uint16_t x91 = 1777U;
	volatile int32_t x92 = INT32_MIN;
	static int32_t t15 = -338152300;

	t15 = ((x89<=x90)%(x91%x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = INT64_MIN;
	volatile uint32_t x94 = 2259268U;
	uint8_t x95 = 3U;
	int32_t t16 = -6113;

	t16 = ((x93<=x94)%(x95%x96));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = UINT64_MAX;
	uint64_t x102 = UINT64_MAX;
	static int64_t x104 = INT64_MIN;
	static volatile int64_t t17 = 239LL;

	t17 = ((x101<=x102)%(x103%x104));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MAX;
	volatile int16_t x111 = 1;
	int16_t x112 = INT16_MAX;
	volatile int32_t t18 = -346492;

	t18 = ((x109<=x110)%(x111%x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = -1;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 34U;
	static volatile int32_t t19 = 191;

	t19 = ((x113<=x114)%(x115%x116));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MAX;
	uint8_t x118 = UINT8_MAX;
	int64_t x119 = -35460809065349413LL;
	uint64_t x120 = 3965LLU;
	volatile uint64_t t20 = 1749649LLU;

	t20 = ((x117<=x118)%(x119%x120));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 1LLU;
	int16_t x122 = -1;
	int16_t x123 = 1179;
	static int16_t x124 = INT16_MIN;

	t21 = ((x121<=x122)%(x123%x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x125 = -1878LL;
	int16_t x126 = INT16_MIN;
	static uint8_t x127 = UINT8_MAX;
	uint32_t t22 = 444U;

	t22 = ((x125<=x126)%(x127%x128));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MIN;
	static int32_t x132 = INT32_MIN;

	t23 = ((x129<=x130)%(x131%x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MIN;
	uint8_t x135 = 1U;
	static volatile int32_t x136 = INT32_MAX;
	volatile int32_t t24 = -488;

	t24 = ((x133<=x134)%(x135%x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -23351;
	int16_t x138 = INT16_MAX;
	static int32_t x139 = 32103;
	uint8_t x140 = 7U;
	volatile int32_t t25 = 117;

	t25 = ((x137<=x138)%(x139%x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -1;
	int32_t x146 = 2;
	int32_t x148 = INT32_MIN;

	t26 = ((x145<=x146)%(x147%x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = INT64_MIN;
	uint64_t x151 = 5151619455455LLU;
	uint64_t t27 = 38033629140496LLU;

	t27 = ((x149<=x150)%(x151%x152));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = 2U;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;
	volatile int64_t t28 = -10162871LL;

	t28 = ((x157<=x158)%(x159%x160));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = -257;
	uint16_t x162 = 21335U;
	volatile int64_t x163 = INT64_MIN;

	t29 = ((x161<=x162)%(x163%x164));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MIN;
	volatile int32_t x168 = INT32_MIN;
	int32_t t30 = 1;

	t30 = ((x165<=x166)%(x167%x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x169 = 0U;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	int64_t x172 = 313LL;
	static volatile int64_t t31 = 207680LL;

	t31 = ((x169<=x170)%(x171%x172));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = INT16_MIN;
	static int32_t x183 = -446;
	int8_t x184 = -41;
	volatile int32_t t32 = -994082452;

	t32 = ((x181<=x182)%(x183%x184));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	static int32_t x187 = INT32_MIN;
	uint16_t x188 = 29U;

	t33 = ((x185<=x186)%(x187%x188));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = 4;
	static int64_t x190 = -1LL;
	int64_t x192 = 648494LL;
	int64_t t34 = -43LL;

	t34 = ((x189<=x190)%(x191%x192));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x197 = INT8_MIN;
	static int32_t x198 = -1;
	static int16_t x199 = INT16_MAX;
	int32_t t35 = -365;

	t35 = ((x197<=x198)%(x199%x200));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x205 = INT16_MIN;
	volatile int32_t x206 = -568;
	static volatile int16_t x207 = -7032;
	volatile uint32_t x208 = 3150757U;
	volatile uint32_t t36 = 28U;

	t36 = ((x205<=x206)%(x207%x208));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x214 = INT8_MIN;
	volatile uint16_t x215 = 1U;
	static volatile uint32_t x216 = 1032584005U;
	static uint32_t t37 = 190189025U;

	t37 = ((x213<=x214)%(x215%x216));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x217 = 5U;
	static volatile int16_t x218 = INT16_MIN;
	volatile int16_t x219 = INT16_MAX;
	volatile uint32_t t38 = 14756409U;

	t38 = ((x217<=x218)%(x219%x220));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x225 = 204309601351LL;
	int16_t x226 = -1;
	volatile uint32_t x227 = UINT32_MAX;
	uint8_t x228 = 12U;
	uint32_t t39 = 645U;

	t39 = ((x225<=x226)%(x227%x228));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x231 = 11172U;
	static int32_t x232 = INT32_MIN;

	t40 = ((x229<=x230)%(x231%x232));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = 1U;
	int64_t x235 = -314552442550707LL;
	volatile int8_t x236 = INT8_MAX;

	t41 = ((x233<=x234)%(x235%x236));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x238 = 375U;
	static int8_t x239 = INT8_MIN;
	static uint64_t x240 = 29008LLU;
	uint64_t t42 = 48669818LLU;

	t42 = ((x237<=x238)%(x239%x240));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x249 = 2;
	volatile uint32_t x250 = 1U;
	uint32_t x252 = 655029006U;
	static volatile uint64_t t43 = 12310170LLU;

	t43 = ((x249<=x250)%(x251%x252));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x261 = 99515078387LLU;
	uint32_t x263 = 5618470U;

	t44 = ((x261<=x262)%(x263%x264));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x266 = -1LL;
	static int32_t x268 = INT32_MIN;

	t45 = ((x265<=x266)%(x267%x268));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = -1;
	static uint16_t x275 = 86U;
	uint8_t x276 = 3U;

	t46 = ((x273<=x274)%(x275%x276));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x277 = -1LL;
	int32_t x278 = -1;
	int64_t x279 = INT64_MAX;
	uint8_t x280 = 3U;

	t47 = ((x277<=x278)%(x279%x280));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x281 = -1;
	static uint16_t x282 = 195U;
	int32_t x283 = -1;
	int64_t x284 = 7349LL;

	t48 = ((x281<=x282)%(x283%x284));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x285 = 116390U;
	int64_t x286 = INT64_MIN;
	static uint8_t x287 = 3U;
	uint32_t x288 = 28U;

	t49 = ((x285<=x286)%(x287%x288));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x290 = INT8_MIN;
	static int32_t x292 = INT32_MIN;

	t50 = ((x289<=x290)%(x291%x292));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x297 = -1;
	static volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = 17U;

	t51 = ((x297<=x298)%(x299%x300));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x305 = INT8_MIN;
	int8_t x306 = -3;
	int16_t x307 = -20;
	static int32_t x308 = 24034565;

	t52 = ((x305<=x306)%(x307%x308));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x310 = -1;
	static int64_t x311 = INT64_MAX;
	volatile int64_t t53 = 216930LL;

	t53 = ((x309<=x310)%(x311%x312));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = INT8_MIN;
	static uint8_t x326 = 75U;
	int8_t x327 = INT8_MIN;
	uint64_t t54 = 182101LLU;

	t54 = ((x325<=x326)%(x327%x328));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x329 = INT8_MAX;
	uint16_t x330 = 1U;
	int64_t x331 = INT64_MIN;
	static uint32_t x332 = 22U;
	int64_t t55 = 2LL;

	t55 = ((x329<=x330)%(x331%x332));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x335 = 73740841LLU;
	volatile uint64_t t56 = 1740591829456LLU;

	t56 = ((x333<=x334)%(x335%x336));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x337 = 2U;
	uint8_t x338 = 58U;
	int64_t x340 = INT64_MIN;
	volatile int64_t t57 = 969073LL;

	t57 = ((x337<=x338)%(x339%x340));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x341 = INT16_MAX;
	static int8_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	static volatile int8_t x344 = INT8_MIN;
	uint32_t t58 = 9285U;

	t58 = ((x341<=x342)%(x343%x344));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x345 = -1LL;
	static uint64_t x346 = 2009LLU;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 4U;

	t59 = ((x345<=x346)%(x347%x348));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = INT8_MAX;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = UINT32_MAX;
	static uint8_t x352 = 40U;
	uint32_t t60 = 118305U;

	t60 = ((x349<=x350)%(x351%x352));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x359 = INT64_MAX;
	static int32_t x360 = -142701;

	t61 = ((x357<=x358)%(x359%x360));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x365 = 12437LLU;
	volatile int32_t x366 = INT32_MIN;
	uint8_t x367 = 2U;
	static int32_t x368 = INT32_MIN;
	int32_t t62 = -7188;

	t62 = ((x365<=x366)%(x367%x368));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x369 = 115698333LLU;
	int64_t x370 = 49423286351LL;
	int16_t x371 = -3658;
	int32_t x372 = -129;
	int32_t t63 = 1755986;

	t63 = ((x369<=x370)%(x371%x372));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x377 = -1;
	int8_t x379 = 3;
	static uint32_t x380 = 507634642U;
	volatile uint32_t t64 = 15514331U;

	t64 = ((x377<=x378)%(x379%x380));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x381 = -474143174;
	int8_t x383 = INT8_MIN;
	volatile int32_t t65 = -20;

	t65 = ((x381<=x382)%(x383%x384));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x385 = UINT16_MAX;
	static volatile int16_t x386 = INT16_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	static volatile uint64_t t66 = 111952517872496LLU;

	t66 = ((x385<=x386)%(x387%x388));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x393 = -1LL;
	uint8_t x394 = 1U;
	volatile int16_t x395 = 2438;
	static volatile uint64_t x396 = 7863938LLU;
	uint64_t t67 = 121537747519164938LLU;

	t67 = ((x393<=x394)%(x395%x396));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MAX;
	uint32_t x404 = 255253476U;
	uint32_t t68 = 25U;

	t68 = ((x401<=x402)%(x403%x404));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x409 = -7926688;
	volatile int64_t x410 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t69 = -387;

	t69 = ((x409<=x410)%(x411%x412));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int64_t x419 = INT64_MAX;
	uint8_t x420 = 26U;

	t70 = ((x417<=x418)%(x419%x420));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x421 = -13;
	uint64_t x423 = 2981505781210LLU;
	int64_t x424 = -1LL;
	volatile uint64_t t71 = 481823597980477LLU;

	t71 = ((x421<=x422)%(x423%x424));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	volatile uint16_t x427 = 4671U;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t72 = -7;

	t72 = ((x425<=x426)%(x427%x428));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x429 = 3U;
	int64_t x431 = -1LL;
	int16_t x432 = INT16_MAX;
	volatile int64_t t73 = 10LL;

	t73 = ((x429<=x430)%(x431%x432));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x433 = INT32_MIN;
	uint8_t x434 = UINT8_MAX;
	uint16_t x435 = UINT16_MAX;
	uint32_t x436 = 4575U;
	static uint32_t t74 = 190U;

	t74 = ((x433<=x434)%(x435%x436));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x441 = -1;
	static uint32_t x443 = UINT32_MAX;
	int64_t x444 = 8718LL;
	int64_t t75 = -139430030441648457LL;

	t75 = ((x441<=x442)%(x443%x444));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x453 = UINT8_MAX;
	int8_t x454 = 0;
	int16_t x455 = -1;
	volatile uint32_t x456 = 16U;
	static volatile uint32_t t76 = 770U;

	t76 = ((x453<=x454)%(x455%x456));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x458 = -14003270LL;
	static uint32_t x459 = UINT32_MAX;
	int16_t x460 = INT16_MIN;
	volatile uint32_t t77 = 341932762U;

	t77 = ((x457<=x458)%(x459%x460));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	volatile int64_t x468 = INT64_MAX;
	volatile uint64_t t78 = 491220416213905LLU;

	t78 = ((x465<=x466)%(x467%x468));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x469 = 1079338696933721027LL;
	int64_t x470 = 133934230LL;
	volatile int64_t x471 = -53984LL;
	static int32_t x472 = INT32_MIN;
	static int64_t t79 = 6LL;

	t79 = ((x469<=x470)%(x471%x472));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x477 = INT16_MIN;
	uint16_t x478 = UINT16_MAX;
	volatile int16_t x479 = 500;
	int16_t x480 = INT16_MIN;
	volatile int32_t t80 = 62261;

	t80 = ((x477<=x478)%(x479%x480));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x481 = -6845641451187LL;
	int16_t x482 = -14;
	int32_t x483 = -1;
	volatile uint32_t t81 = 63933U;

	t81 = ((x481<=x482)%(x483%x484));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x485 = UINT8_MAX;
	uint16_t x486 = 57U;
	uint16_t x487 = 27U;
	uint8_t x488 = UINT8_MAX;
	int32_t t82 = 1782;

	t82 = ((x485<=x486)%(x487%x488));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x490 = INT16_MIN;
	int32_t x491 = INT32_MIN;
	int64_t x492 = INT64_MIN;
	int64_t t83 = -140712644883LL;

	t83 = ((x489<=x490)%(x491%x492));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x493 = INT32_MAX;
	int32_t x494 = -8367076;
	int32_t x496 = -674425082;

	t84 = ((x493<=x494)%(x495%x496));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x497 = 0;
	int64_t x498 = -1LL;
	int32_t x500 = INT32_MIN;

	t85 = ((x497<=x498)%(x499%x500));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x501 = 1794U;
	static volatile int64_t x504 = 24197932LL;
	int64_t t86 = 314218619286LL;

	t86 = ((x501<=x502)%(x503%x504));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x505 = -1;
	static int8_t x506 = -1;
	int16_t x507 = 3;
	volatile uint32_t x508 = UINT32_MAX;
	uint32_t t87 = 9532628U;

	t87 = ((x505<=x506)%(x507%x508));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x509 = 5;
	uint8_t x510 = 4U;
	static volatile int64_t x511 = -1LL;
	int8_t x512 = INT8_MIN;
	int64_t t88 = -13715763725719013LL;

	t88 = ((x509<=x510)%(x511%x512));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x521 = UINT64_MAX;
	uint64_t x522 = UINT64_MAX;
	static volatile int32_t x523 = INT32_MAX;
	int16_t x524 = 5;
	volatile int32_t t89 = -10;

	t89 = ((x521<=x522)%(x523%x524));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x533 = INT8_MAX;
	int32_t x535 = -88;
	uint64_t x536 = 56LLU;
	uint64_t t90 = 61024821931900LLU;

	t90 = ((x533<=x534)%(x535%x536));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x537 = 2;
	static volatile int8_t x538 = -44;
	volatile int32_t x540 = INT32_MIN;
	static volatile int32_t t91 = -16028;

	t91 = ((x537<=x538)%(x539%x540));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MAX;
	volatile int32_t x543 = INT32_MAX;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t92 = 0;

	t92 = ((x541<=x542)%(x543%x544));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x545 = 0LL;
	int8_t x546 = INT8_MAX;
	int64_t x547 = INT64_MAX;
	static int16_t x548 = INT16_MAX;

	t93 = ((x545<=x546)%(x547%x548));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x550 = -9;
	static volatile int8_t x551 = INT8_MIN;
	volatile int16_t x552 = INT16_MAX;
	volatile int32_t t94 = 11377;

	t94 = ((x549<=x550)%(x551%x552));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x553 = 309371256;
	int32_t x554 = -48;
	uint32_t x555 = UINT32_MAX;
	static int16_t x556 = -12;
	uint32_t t95 = 7383206U;

	t95 = ((x553<=x554)%(x555%x556));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x557 = INT8_MAX;
	volatile int32_t x558 = 369732083;
	uint16_t x559 = 5U;
	int8_t x560 = INT8_MIN;
	static int32_t t96 = -36810;

	t96 = ((x557<=x558)%(x559%x560));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x561 = -1;
	int64_t x562 = INT64_MAX;
	int32_t t97 = -2077;

	t97 = ((x561<=x562)%(x563%x564));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x565 = UINT64_MAX;
	int8_t x566 = INT8_MIN;
	uint8_t x567 = UINT8_MAX;
	int8_t x568 = -2;
	static volatile int32_t t98 = -94150106;

	t98 = ((x565<=x566)%(x567%x568));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x571 = 475U;
	volatile int16_t x572 = INT16_MAX;
	volatile int32_t t99 = 274940277;

	t99 = ((x569<=x570)%(x571%x572));

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

