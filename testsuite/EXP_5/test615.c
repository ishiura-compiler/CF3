#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -74448491;
int16_t x9 = 1;
uint16_t x16 = UINT16_MAX;
volatile int8_t x36 = 4;
int64_t x41 = -65407575304978348LL;
uint64_t x44 = 1107397748LLU;
static int16_t x61 = INT16_MIN;
int32_t x62 = INT32_MIN;
int32_t x73 = -3;
int32_t t8 = 79330;
int32_t t9 = INT32_MIN;
int16_t x90 = -1953;
volatile uint64_t x110 = 13784LLU;
static int64_t x113 = 3970516200901LL;
int64_t x114 = 2036968LL;
int8_t x117 = -1;
uint16_t x120 = 2570U;
volatile int32_t t15 = -2718;
static volatile uint64_t x124 = 245746LLU;
uint32_t x125 = 780408U;
int16_t x126 = -1;
int64_t x128 = -472677LL;
int64_t x136 = INT64_MAX;
volatile int64_t x144 = INT64_MAX;
static int64_t x145 = 463012510567LL;
uint16_t x147 = 8119U;
volatile int32_t x150 = 162139237;
static int8_t x159 = INT8_MIN;
int32_t x160 = 15;
uint64_t x174 = 392LLU;
uint64_t x175 = UINT64_MAX;
int32_t x177 = INT32_MIN;
int32_t t29 = INT32_MIN;
uint64_t x187 = 1288284429733158033LLU;
int16_t x192 = INT16_MAX;
uint64_t t32 = UINT64_MAX;
int16_t x193 = -1;
uint8_t x196 = 7U;
static volatile int16_t x202 = INT16_MIN;
volatile int8_t x209 = INT8_MIN;
volatile int32_t t36 = 11737608;
int64_t x219 = -173380LL;
uint16_t x277 = 37U;
volatile int16_t x282 = INT16_MIN;
uint8_t x284 = 5U;
uint16_t x290 = 814U;
volatile int16_t x296 = INT16_MAX;
uint64_t x307 = 2887LLU;
static uint64_t x317 = 248LLU;
static volatile int8_t x319 = -18;
int32_t x321 = INT32_MAX;
volatile uint32_t x323 = 22877271U;
int8_t x328 = INT8_MIN;
volatile uint16_t x342 = 2707U;
uint8_t x348 = 80U;
int32_t x352 = 3042289;
int16_t x353 = INT16_MIN;
int32_t t56 = 1517496;
int8_t x380 = INT8_MAX;
int64_t x401 = 210LL;
static volatile int16_t x402 = -18;
int64_t t61 = -1LL;
int16_t x413 = INT16_MIN;
int64_t x422 = 7LL;
uint64_t x423 = UINT64_MAX;
int16_t x467 = -152;
static uint64_t x468 = 128666622139210143LLU;
int16_t x521 = 935;
int64_t x523 = INT64_MIN;
uint16_t x525 = 13U;
int32_t x549 = -1;
uint32_t x560 = 135137212U;
int8_t x577 = -1;
static volatile int8_t x580 = -1;
int64_t x585 = 16198165LL;
static int16_t x588 = INT16_MIN;
static int64_t t81 = 43377LL;
int8_t x605 = 26;
int32_t x615 = INT32_MAX;
uint16_t x616 = 3U;
int64_t x630 = -27878LL;
int8_t x642 = -1;
int32_t x644 = -1;
int8_t x654 = INT8_MIN;
uint32_t x668 = UINT32_MAX;
int16_t x686 = 1;
static uint64_t x694 = 9648998382045LLU;
static uint16_t x719 = 6U;
int16_t x723 = 1763;
static volatile int8_t x727 = 3;
volatile int32_t t97 = -9;
uint64_t x734 = UINT64_MAX;


void f0(void) {
	int8_t x5 = -6;
	int64_t x6 = INT64_MIN;
	uint8_t x7 = UINT8_MAX;
	static int64_t x8 = -1LL;

	t0 = (x5/((x6/x7)<x8));

	if (t0 != -6) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = -1;
	static volatile int32_t t1 = -7446389;

	t1 = (x9/((x10/x11)<x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 1577368804177891LLU;
	int8_t x14 = INT8_MIN;
	static volatile int64_t x15 = -1LL;
	volatile uint64_t t2 = 2LLU;

	t2 = (x13/((x14/x15)<x16));

	if (t2 != 1577368804177891LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = UINT16_MAX;
	uint16_t x34 = 11U;
	int32_t x35 = INT32_MAX;
	int32_t t3 = 230904547;

	t3 = (x33/((x34/x35)<x36));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = 233796U;
	static uint64_t t4 = UINT64_MAX;

	t4 = (x37/((x38/x39)<x40));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x42 = 0;
	volatile int32_t x43 = -1;
	static int64_t t5 = -348687935380779615LL;

	t5 = (x41/((x42/x43)<x44));

	if (t5 != -65407575304978348LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x63 = INT32_MAX;
	uint16_t x64 = UINT16_MAX;
	static int32_t t6 = -3;

	t6 = (x61/((x62/x63)<x64));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = 3U;
	uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t7 = 34237985;

	t7 = (x69/((x70/x71)<x72));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x74 = -337;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = 1;

	t8 = (x73/((x74/x75)<x76));

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = 391644375352034555LLU;
	uint8_t x79 = 5U;
	int64_t x80 = -1LL;

	t9 = (x77/((x78/x79)<x80));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x85 = INT64_MIN;
	static uint8_t x86 = UINT8_MAX;
	volatile uint32_t x87 = 133615973U;
	int32_t x88 = INT32_MAX;
	int64_t t10 = INT64_MIN;

	t10 = (x85/((x86/x87)<x88));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x89 = 3;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t11 = 117385;

	t11 = (x89/((x90/x91)<x92));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = -1;
	static int8_t x98 = INT8_MAX;
	static int8_t x99 = INT8_MAX;
	int64_t x100 = INT64_MAX;
	static int32_t t12 = 3312;

	t12 = (x97/((x98/x99)<x100));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x109 = INT16_MIN;
	volatile int64_t x111 = -1LL;
	int64_t x112 = INT64_MIN;
	volatile int32_t t13 = 177;

	t13 = (x109/((x110/x111)<x112));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x115 = -442LL;
	static uint64_t x116 = UINT64_MAX;
	int64_t t14 = -322538640LL;

	t14 = (x113/((x114/x115)<x116));

	if (t14 != 3970516200901LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x118 = 0;
	int64_t x119 = -356904172960LL;

	t15 = (x117/((x118/x119)<x120));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x121 = 10006LL;
	uint64_t x122 = 10086LLU;
	static int8_t x123 = INT8_MAX;
	static volatile int64_t t16 = -590732736946LL;

	t16 = (x121/((x122/x123)<x124));

	if (t16 != 10006LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x127 = 177LLU;
	volatile uint32_t t17 = 962U;

	t17 = (x125/((x126/x127)<x128));

	if (t17 != 780408U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	volatile int16_t x131 = -1279;
	static int8_t x132 = -10;
	static int32_t t18 = INT32_MIN;

	t18 = (x129/((x130/x131)<x132));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = 3495834909101019052LL;
	uint32_t x134 = 5217U;
	int32_t x135 = INT32_MIN;
	volatile int64_t t19 = 88LL;

	t19 = (x133/((x134/x135)<x136));

	if (t19 != 3495834909101019052LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x137 = INT32_MIN;
	static int32_t x138 = INT32_MIN;
	volatile uint8_t x139 = 1U;
	int8_t x140 = 6;
	int32_t t20 = INT32_MIN;

	t20 = (x137/((x138/x139)<x140));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x141 = -1;
	int8_t x142 = -3;
	int64_t x143 = 32114121155565LL;
	volatile int32_t t21 = -20601099;

	t21 = (x141/((x142/x143)<x144));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x146 = 73516814;
	int32_t x148 = INT32_MAX;
	int64_t t22 = -35089439902144LL;

	t22 = (x145/((x146/x147)<x148));

	if (t22 != 463012510567LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x149 = INT16_MIN;
	int8_t x151 = -1;
	int32_t x152 = 878999;
	volatile int32_t t23 = -70;

	t23 = (x149/((x150/x151)<x152));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x153 = INT16_MIN;
	volatile int32_t x154 = 3092;
	static uint64_t x155 = 9LLU;
	uint32_t x156 = 279526316U;
	int32_t t24 = -51483715;

	t24 = (x153/((x154/x155)<x156));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	static int32_t t25 = -1668;

	t25 = (x157/((x158/x159)<x160));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MIN;
	volatile int32_t x164 = 602802203;
	int32_t t26 = INT32_MAX;

	t26 = (x161/((x162/x163)<x164));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x169 = INT8_MAX;
	volatile uint16_t x170 = UINT16_MAX;
	static uint16_t x171 = 15970U;
	volatile uint64_t x172 = UINT64_MAX;
	int32_t t27 = 2547675;

	t27 = (x169/((x170/x171)<x172));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x173 = 54U;
	int8_t x176 = INT8_MIN;
	int32_t t28 = 8473;

	t28 = (x173/((x174/x175)<x176));

	if (t28 != 54) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x178 = -1;
	uint16_t x179 = UINT16_MAX;
	static volatile uint16_t x180 = 3U;

	t29 = (x177/((x178/x179)<x180));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x181 = -853045LL;
	int8_t x182 = 5;
	uint64_t x183 = 6116030261640857LLU;
	static uint32_t x184 = UINT32_MAX;
	int64_t t30 = 218LL;

	t30 = (x181/((x182/x183)<x184));

	if (t30 != -853045LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x185 = UINT8_MAX;
	static volatile uint64_t x186 = UINT64_MAX;
	int8_t x188 = INT8_MAX;
	int32_t t31 = -993775;

	t31 = (x185/((x186/x187)<x188));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = 18908836;
	int32_t x191 = 52407;

	t32 = (x189/((x190/x191)<x192));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x194 = INT32_MAX;
	static int64_t x195 = -1LL;
	volatile int32_t t33 = -6;

	t33 = (x193/((x194/x195)<x196));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x197 = INT8_MIN;
	static uint8_t x198 = 2U;
	volatile uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 7U;
	int32_t t34 = -1496;

	t34 = (x197/((x198/x199)<x200));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = INT64_MIN;
	int64_t x203 = 6243534LL;
	uint16_t x204 = UINT16_MAX;
	int64_t t35 = INT64_MIN;

	t35 = (x201/((x202/x203)<x204));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x210 = UINT8_MAX;
	uint32_t x211 = 71480U;
	int32_t x212 = -1;

	t36 = (x209/((x210/x211)<x212));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x217 = 1108U;
	static volatile int8_t x218 = INT8_MAX;
	int8_t x220 = INT8_MAX;
	static uint32_t t37 = 4225184U;

	t37 = (x217/((x218/x219)<x220));

	if (t37 != 1108U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x249 = 7;
	uint16_t x250 = 1U;
	static volatile uint16_t x251 = 12587U;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t38 = -1193;

	t38 = (x249/((x250/x251)<x252));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x253 = 14898U;
	volatile int16_t x254 = -939;
	uint8_t x255 = 35U;
	uint64_t x256 = UINT64_MAX;
	int32_t t39 = 3109;

	t39 = (x253/((x254/x255)<x256));

	if (t39 != 14898) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x257 = 33359LLU;
	volatile int16_t x258 = 7;
	volatile uint8_t x259 = 24U;
	volatile int64_t x260 = INT64_MAX;
	uint64_t t40 = 4366838311LLU;

	t40 = (x257/((x258/x259)<x260));

	if (t40 != 33359LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 14731U;
	int8_t x263 = -5;
	volatile int8_t x264 = INT8_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x261/((x262/x263)<x264));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x278 = -1;
	int16_t x279 = -1;
	static uint64_t x280 = 6241909LLU;
	int32_t t42 = 69038185;

	t42 = (x277/((x278/x279)<x280));

	if (t42 != 37) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	int32_t t43 = -285672761;

	t43 = (x281/((x282/x283)<x284));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x289 = INT16_MIN;
	static int16_t x291 = INT16_MIN;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t44 = -744;

	t44 = (x289/((x290/x291)<x292));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x293 = -135081434LL;
	uint16_t x294 = UINT16_MAX;
	static int8_t x295 = -1;
	volatile int64_t t45 = 211037776LL;

	t45 = (x293/((x294/x295)<x296));

	if (t45 != -135081434LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x305 = 7568U;
	static int16_t x306 = -1;
	int64_t x308 = INT64_MIN;
	int32_t t46 = -3403;

	t46 = (x305/((x306/x307)<x308));

	if (t46 != 7568) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x309 = 15U;
	uint8_t x310 = 21U;
	int64_t x311 = -577217878902621LL;
	static volatile uint16_t x312 = UINT16_MAX;
	int32_t t47 = -10;

	t47 = (x309/((x310/x311)<x312));

	if (t47 != 15) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x318 = -1;
	uint16_t x320 = 1133U;
	uint64_t t48 = 5142057842LLU;

	t48 = (x317/((x318/x319)<x320));

	if (t48 != 248LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x322 = 3;
	int32_t x324 = -83883;
	static int32_t t49 = INT32_MAX;

	t49 = (x321/((x322/x323)<x324));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x325 = 0U;
	static uint32_t x326 = UINT32_MAX;
	int8_t x327 = INT8_MAX;
	int32_t t50 = -653071922;

	t50 = (x325/((x326/x327)<x328));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x341 = -1LL;
	volatile uint32_t x343 = 5027U;
	uint16_t x344 = 208U;
	volatile int64_t t51 = -2122615LL;

	t51 = (x341/((x342/x343)<x344));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = 8U;
	uint64_t x347 = 12525LLU;
	static volatile int32_t t52 = 2785;

	t52 = (x345/((x346/x347)<x348));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x349 = 90U;
	uint32_t x350 = 126202852U;
	int64_t x351 = INT64_MIN;
	volatile int32_t t53 = 80;

	t53 = (x349/((x350/x351)<x352));

	if (t53 != 90) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	volatile uint64_t x356 = 2LLU;
	static int32_t t54 = 11;

	t54 = (x353/((x354/x355)<x356));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x361 = UINT8_MAX;
	uint32_t x362 = 2079209U;
	static int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t55 = 6115635;

	t55 = (x361/((x362/x363)<x364));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x365 = INT8_MAX;
	static volatile int8_t x366 = -21;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MAX;

	t56 = (x365/((x366/x367)<x368));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x369 = 2U;
	volatile int32_t x370 = INT32_MAX;
	volatile int64_t x371 = -896161611301758239LL;
	uint32_t x372 = UINT32_MAX;
	int32_t t57 = 1;

	t57 = (x369/((x370/x371)<x372));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x373 = -1;
	volatile uint8_t x374 = 0U;
	int16_t x375 = INT16_MIN;
	uint32_t x376 = 9569U;
	volatile int32_t t58 = -481473;

	t58 = (x373/((x374/x375)<x376));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 10U;
	static uint8_t x379 = UINT8_MAX;
	int32_t t59 = 175769;

	t59 = (x377/((x378/x379)<x380));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x389 = 1;
	int32_t x390 = INT32_MAX;
	static int64_t x391 = -11321868474951LL;
	uint8_t x392 = 46U;
	int32_t t60 = -60896176;

	t60 = (x389/((x390/x391)<x392));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x403 = 59925U;
	int32_t x404 = INT32_MAX;

	t61 = (x401/((x402/x403)<x404));

	if (t61 != 210LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x405 = INT16_MAX;
	volatile int32_t x406 = INT32_MIN;
	int16_t x407 = 2774;
	int32_t x408 = -50;
	volatile int32_t t62 = 13194;

	t62 = (x405/((x406/x407)<x408));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x414 = -1903930LL;
	int8_t x415 = INT8_MIN;
	int64_t x416 = 3682471179371285LL;
	int32_t t63 = -66377999;

	t63 = (x413/((x414/x415)<x416));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x421 = 24U;
	volatile uint16_t x424 = 1U;
	volatile uint32_t t64 = 38309896U;

	t64 = (x421/((x422/x423)<x424));

	if (t64 != 24U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x433 = INT32_MAX;
	static int32_t x434 = 301;
	static volatile uint32_t x435 = 17375U;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t65 = INT32_MAX;

	t65 = (x433/((x434/x435)<x436));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x457 = INT64_MIN;
	int8_t x458 = INT8_MAX;
	int8_t x459 = 1;
	uint32_t x460 = UINT32_MAX;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x457/((x458/x459)<x460));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x465 = INT16_MAX;
	static volatile int8_t x466 = INT8_MIN;
	int32_t t67 = 1;

	t67 = (x465/((x466/x467)<x468));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x477 = INT64_MIN;
	int32_t x478 = 384105714;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = 1;
	static volatile int64_t t68 = INT64_MIN;

	t68 = (x477/((x478/x479)<x480));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x481 = -11043044;
	uint64_t x482 = 494770684423098LLU;
	int8_t x483 = -1;
	volatile int32_t x484 = 434;
	int32_t t69 = 75265214;

	t69 = (x481/((x482/x483)<x484));

	if (t69 != -11043044) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x489 = 561U;
	int64_t x490 = 652LL;
	int64_t x491 = -880341307749771995LL;
	int8_t x492 = INT8_MAX;
	int32_t t70 = 22;

	t70 = (x489/((x490/x491)<x492));

	if (t70 != 561) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x517 = INT8_MIN;
	static int32_t x518 = -994648;
	int64_t x519 = INT64_MIN;
	uint16_t x520 = 8024U;
	volatile int32_t t71 = -1;

	t71 = (x517/((x518/x519)<x520));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x522 = 89963229124LLU;
	volatile int16_t x524 = INT16_MIN;
	volatile int32_t t72 = 37;

	t72 = (x521/((x522/x523)<x524));

	if (t72 != 935) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x526 = INT64_MIN;
	uint32_t x527 = UINT32_MAX;
	uint8_t x528 = 1U;
	int32_t t73 = 4945;

	t73 = (x525/((x526/x527)<x528));

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x537 = INT16_MAX;
	int32_t x538 = -1;
	uint16_t x539 = 241U;
	int64_t x540 = INT64_MAX;
	volatile int32_t t74 = -641325;

	t74 = (x537/((x538/x539)<x540));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x541 = UINT16_MAX;
	int16_t x542 = INT16_MAX;
	volatile int8_t x543 = -8;
	int64_t x544 = 61856305112784LL;
	int32_t t75 = -247043;

	t75 = (x541/((x542/x543)<x544));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x550 = UINT64_MAX;
	static int8_t x551 = INT8_MAX;
	int8_t x552 = -1;
	int32_t t76 = 1;

	t76 = (x549/((x550/x551)<x552));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x557 = 262277281LL;
	static uint32_t x558 = 300612440U;
	int64_t x559 = -22153LL;
	int64_t t77 = -158262LL;

	t77 = (x557/((x558/x559)<x560));

	if (t77 != 262277281LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x569 = UINT64_MAX;
	uint16_t x570 = 165U;
	static volatile int16_t x571 = INT16_MAX;
	uint32_t x572 = 105U;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x569/((x570/x571)<x572));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x578 = INT16_MAX;
	uint32_t x579 = 11U;
	int32_t t79 = -29088;

	t79 = (x577/((x578/x579)<x580));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x581 = -737406LL;
	int16_t x582 = INT16_MAX;
	uint64_t x583 = UINT64_MAX;
	uint16_t x584 = 92U;
	static volatile int64_t t80 = 633LL;

	t80 = (x581/((x582/x583)<x584));

	if (t80 != -737406LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x586 = INT8_MAX;
	uint64_t x587 = 74LLU;

	t81 = (x585/((x586/x587)<x588));

	if (t81 != 16198165LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x606 = INT32_MIN;
	volatile int8_t x607 = INT8_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t82 = -12914;

	t82 = (x605/((x606/x607)<x608));

	if (t82 != 26) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x613 = -379914800519LL;
	static uint8_t x614 = 101U;
	volatile int64_t t83 = 33LL;

	t83 = (x613/((x614/x615)<x616));

	if (t83 != -379914800519LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x617 = 16145U;
	uint16_t x618 = 5412U;
	int64_t x619 = INT64_MIN;
	uint16_t x620 = 30114U;
	uint32_t t84 = 121U;

	t84 = (x617/((x618/x619)<x620));

	if (t84 != 16145U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x629 = UINT64_MAX;
	volatile int16_t x631 = INT16_MIN;
	int16_t x632 = INT16_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x629/((x630/x631)<x632));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x637 = 8U;
	int32_t x638 = 123;
	uint16_t x639 = 83U;
	static uint32_t x640 = 357043832U;
	int32_t t86 = -5279499;

	t86 = (x637/((x638/x639)<x640));

	if (t86 != 8) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x641 = -8362837759514897LL;
	static uint64_t x643 = 199513472919LLU;
	int64_t t87 = -4307618365569LL;

	t87 = (x641/((x642/x643)<x644));

	if (t87 != -8362837759514897LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x653 = UINT8_MAX;
	uint16_t x655 = 104U;
	int32_t x656 = 1730;
	volatile int32_t t88 = 6172;

	t88 = (x653/((x654/x655)<x656));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x665 = UINT32_MAX;
	static int16_t x666 = -4317;
	static volatile int8_t x667 = -1;
	static uint32_t t89 = UINT32_MAX;

	t89 = (x665/((x666/x667)<x668));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x669 = 434U;
	int16_t x670 = -1;
	uint32_t x671 = 12U;
	uint64_t x672 = UINT64_MAX;
	int32_t t90 = 9;

	t90 = (x669/((x670/x671)<x672));

	if (t90 != 434) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x685 = UINT16_MAX;
	int16_t x687 = INT16_MIN;
	uint64_t x688 = 2812145632LLU;
	int32_t t91 = 48391600;

	t91 = (x685/((x686/x687)<x688));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x693 = INT16_MIN;
	int64_t x695 = -1LL;
	uint16_t x696 = 17310U;
	volatile int32_t t92 = -5550;

	t92 = (x693/((x694/x695)<x696));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x705 = UINT8_MAX;
	int8_t x706 = 30;
	int64_t x707 = -1LL;
	uint64_t x708 = UINT64_MAX;
	volatile int32_t t93 = 380701258;

	t93 = (x705/((x706/x707)<x708));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x709 = UINT64_MAX;
	int32_t x710 = INT32_MAX;
	uint64_t x711 = 18353029LLU;
	volatile uint16_t x712 = 1461U;
	uint64_t t94 = UINT64_MAX;

	t94 = (x709/((x710/x711)<x712));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x717 = INT16_MAX;
	int32_t x718 = 89;
	int64_t x720 = INT64_MAX;
	int32_t t95 = -4473;

	t95 = (x717/((x718/x719)<x720));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x721 = -296850012363668049LL;
	int8_t x722 = -4;
	volatile int64_t x724 = INT64_MAX;
	int64_t t96 = 0LL;

	t96 = (x721/((x722/x723)<x724));

	if (t96 != -296850012363668049LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x725 = -1;
	uint64_t x726 = 1572560LLU;
	int8_t x728 = -51;

	t97 = (x725/((x726/x727)<x728));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x733 = 13456;
	int16_t x735 = INT16_MIN;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t98 = 2;

	t98 = (x733/((x734/x735)<x736));

	if (t98 != 13456) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x737 = -1;
	static int8_t x738 = -9;
	int16_t x739 = INT16_MIN;
	int8_t x740 = 4;
	volatile int32_t t99 = -240774446;

	t99 = (x737/((x738/x739)<x740));

	if (t99 != -1) { NG(); } else { ; }
	
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

