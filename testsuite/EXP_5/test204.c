#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x33 = UINT16_MAX;
int16_t x34 = 85;
volatile int32_t x43 = -12328;
int16_t x45 = INT16_MIN;
uint32_t x49 = UINT32_MAX;
uint8_t x51 = 1U;
int64_t x58 = INT64_MIN;
uint64_t x64 = UINT64_MAX;
int16_t x73 = INT16_MIN;
static volatile uint16_t x75 = UINT16_MAX;
static int16_t x76 = INT16_MIN;
uint64_t x99 = 129346354055416LLU;
int32_t x108 = -10;
uint16_t x111 = UINT16_MAX;
static uint32_t x115 = 3U;
int8_t x119 = -1;
int16_t x122 = -1;
uint16_t x144 = 1U;
static volatile int32_t t23 = 8426740;
static int8_t x161 = INT8_MAX;
uint16_t x192 = 964U;
uint64_t x198 = 9923707885589LLU;
volatile int32_t t30 = 2;
uint8_t x202 = 80U;
int8_t x204 = INT8_MIN;
volatile int32_t t31 = -6214581;
uint32_t x211 = 804621608U;
uint16_t x220 = UINT16_MAX;
volatile int32_t t33 = 13;
volatile int32_t t34 = -322459624;
int16_t x239 = INT16_MIN;
static uint64_t x248 = UINT64_MAX;
int64_t x253 = INT64_MIN;
static uint16_t x257 = UINT16_MAX;
int32_t t39 = 299230;
volatile int32_t t40 = -138;
int32_t t41 = -372986568;
int16_t x290 = -1;
int16_t x291 = INT16_MIN;
static uint16_t x307 = UINT16_MAX;
static int16_t x322 = 9537;
volatile int32_t x330 = INT32_MIN;
int8_t x331 = -1;
uint32_t x335 = UINT32_MAX;
uint32_t x341 = 2949U;
static volatile int32_t t49 = 968284;
int8_t x356 = INT8_MAX;
volatile int32_t t50 = -2018;
int16_t x369 = -400;
volatile int8_t x371 = INT8_MIN;
static uint64_t x376 = 222833760381LLU;
static int32_t t54 = 1;
volatile int32_t t55 = 24876;
uint64_t x386 = 65265492363LLU;
volatile int32_t t56 = -182644;
volatile int8_t x390 = 24;
int8_t x403 = INT8_MAX;
int16_t x404 = 1;
static int32_t x406 = 346302879;
uint16_t x408 = 1U;
int32_t t59 = 13;
int16_t x416 = INT16_MAX;
volatile uint16_t x417 = UINT16_MAX;
volatile int8_t x425 = -1;
uint16_t x426 = UINT16_MAX;
uint8_t x435 = 5U;
volatile int16_t x446 = 18;
volatile int32_t t68 = -4;
volatile int32_t t70 = 184942286;
int64_t x469 = INT64_MAX;
int32_t x493 = INT32_MIN;
int16_t x496 = INT16_MAX;
volatile int8_t x508 = -1;
static uint64_t x515 = 5411462LLU;
volatile int32_t t78 = -366;
volatile int32_t t79 = 26;
int32_t x534 = INT32_MIN;
int64_t x535 = -7703728996434LL;
volatile int32_t t81 = -50452961;
volatile int32_t t82 = 5413;
volatile uint8_t x546 = 0U;
volatile uint8_t x547 = 6U;
volatile int32_t t86 = -36;
volatile int32_t t87 = 50;
int16_t x601 = INT16_MIN;
volatile int32_t t88 = -1;
static uint16_t x617 = 621U;
int8_t x619 = -1;
uint32_t x622 = 78U;
int8_t x624 = INT8_MAX;
static int64_t x629 = -1LL;
int32_t x639 = -1;
int32_t x641 = -1;
int32_t t95 = -464;
static int8_t x647 = INT8_MIN;
int16_t x662 = -15;
int64_t x667 = 24495LL;
volatile int32_t t99 = -213;


void f0(void) {
	volatile uint64_t x1 = 115531363LLU;
	static volatile int16_t x2 = 14582;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = 30;
	volatile int32_t t0 = -10;

	t0 = (x1<((x2-x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = -1;
	static volatile int16_t x14 = -1;
	int8_t x15 = INT8_MIN;
	volatile int8_t x16 = INT8_MIN;
	int32_t t1 = 18990;

	t1 = (x13<((x14-x15)*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MAX;
	volatile int8_t x22 = -1;
	uint8_t x23 = 0U;
	int16_t x24 = INT16_MAX;
	int32_t t2 = -4897;

	t2 = (x21<((x22-x23)*x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x35 = -1LL;
	int64_t x36 = -122LL;
	int32_t t3 = 1561;

	t3 = (x33<((x34-x35)*x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x37 = 949LL;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 2078U;
	int8_t x40 = -1;
	volatile int32_t t4 = -17169492;

	t4 = (x37<((x38-x39)*x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x41 = 43U;
	volatile int64_t x42 = -1LL;
	int8_t x44 = 9;
	volatile int32_t t5 = 6337876;

	t5 = (x41<((x42-x43)*x44));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x46 = INT16_MAX;
	uint8_t x47 = 3U;
	int32_t x48 = 3663;
	int32_t t6 = 0;

	t6 = (x45<((x46-x47)*x48));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x50 = 677367620402296845LLU;
	uint16_t x52 = UINT16_MAX;
	static int32_t t7 = 20;

	t7 = (x49<((x50-x51)*x52));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = 67;
	int8_t x59 = -1;
	volatile uint64_t x60 = 36629LLU;
	int32_t t8 = 285;

	t8 = (x57<((x58-x59)*x60));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	static int32_t x62 = 479502;
	volatile int64_t x63 = INT64_MAX;
	volatile int32_t t9 = 6906920;

	t9 = (x61<((x62-x63)*x64));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = -1;
	volatile uint32_t x66 = 23077137U;
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MAX;
	int32_t t10 = 660229;

	t10 = (x65<((x66-x67)*x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = 0;
	static int32_t x71 = 72;
	int32_t x72 = 10;
	int32_t t11 = -1;

	t11 = (x69<((x70-x71)*x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x74 = 0;
	int32_t t12 = 1018668981;

	t12 = (x73<((x74-x75)*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x77 = INT16_MIN;
	uint8_t x78 = 3U;
	static int8_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t13 = 886;

	t13 = (x77<((x78-x79)*x80));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = 3674496LLU;
	int16_t x83 = 0;
	uint16_t x84 = UINT16_MAX;
	int32_t t14 = -1306;

	t14 = (x81<((x82-x83)*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = UINT8_MAX;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t15 = -894917391;

	t15 = (x97<((x98-x99)*x100));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x105 = 28;
	volatile int16_t x106 = INT16_MIN;
	volatile int16_t x107 = 1;
	int32_t t16 = 7;

	t16 = (x105<((x106-x107)*x108));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = UINT16_MAX;
	static int16_t x110 = -2531;
	static int16_t x112 = 4;
	static int32_t t17 = 736018;

	t17 = (x109<((x110-x111)*x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x113 = 1U;
	int32_t x114 = INT32_MAX;
	int16_t x116 = -1;
	static int32_t t18 = 4707;

	t18 = (x113<((x114-x115)*x116));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = -4;
	static volatile int16_t x118 = INT16_MIN;
	int32_t x120 = -71;
	int32_t t19 = -254663;

	t19 = (x117<((x118-x119)*x120));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	volatile int8_t x124 = -1;
	volatile int32_t t20 = 23686;

	t20 = (x121<((x122-x123)*x124));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x133 = UINT16_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	static int16_t x135 = INT16_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t21 = -105;

	t21 = (x133<((x134-x135)*x136));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MIN;
	static int64_t x143 = INT64_MIN;
	volatile int32_t t22 = 52;

	t22 = (x141<((x142-x143)*x144));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x145 = INT32_MAX;
	uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = INT16_MIN;
	volatile int16_t x148 = 12647;

	t23 = (x145<((x146-x147)*x148));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x153 = INT32_MIN;
	static int64_t x154 = -1LL;
	volatile int32_t x155 = -1;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t24 = 7824;

	t24 = (x153<((x154-x155)*x156));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x162 = 25067600LLU;
	int8_t x163 = INT8_MIN;
	static volatile int64_t x164 = 23460027303LL;
	volatile int32_t t25 = 13;

	t25 = (x161<((x162-x163)*x164));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	static int8_t x167 = INT8_MAX;
	static uint64_t x168 = UINT64_MAX;
	volatile int32_t t26 = -245182034;

	t26 = (x165<((x166-x167)*x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x173 = -1LL;
	uint16_t x174 = 0U;
	volatile int16_t x175 = -3;
	uint8_t x176 = 11U;
	static volatile int32_t t27 = -710136;

	t27 = (x173<((x174-x175)*x176));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x189 = 40624841U;
	int16_t x190 = INT16_MIN;
	volatile int32_t x191 = 11058;
	volatile int32_t t28 = 28865711;

	t28 = (x189<((x190-x191)*x192));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 27460U;
	static int16_t x194 = 1335;
	volatile int16_t x195 = 5;
	volatile int8_t x196 = INT8_MIN;
	int32_t t29 = 1743878;

	t29 = (x193<((x194-x195)*x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x197 = 2;
	volatile uint16_t x199 = 13U;
	static int16_t x200 = INT16_MIN;

	t30 = (x197<((x198-x199)*x200));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x201 = INT64_MIN;
	int32_t x203 = 0;

	t31 = (x201<((x202-x203)*x204));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t32 = -106587084;

	t32 = (x209<((x210-x211)*x212));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x217 = 9748LLU;
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -1LL;

	t33 = (x217<((x218-x219)*x220));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x229 = -48;
	uint8_t x230 = 5U;
	volatile uint32_t x231 = UINT32_MAX;
	volatile int32_t x232 = -1;

	t34 = (x229<((x230-x231)*x232));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x237 = 92U;
	volatile int16_t x238 = INT16_MIN;
	volatile int32_t x240 = -13;
	int32_t t35 = 502784547;

	t35 = (x237<((x238-x239)*x240));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x241 = INT8_MIN;
	volatile uint8_t x242 = 34U;
	static int16_t x243 = 591;
	volatile uint64_t x244 = UINT64_MAX;
	volatile int32_t t36 = 2409986;

	t36 = (x241<((x242-x243)*x244));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x245 = 0;
	int16_t x246 = 1725;
	volatile uint64_t x247 = 133776351913040LLU;
	int32_t t37 = -18;

	t37 = (x245<((x246-x247)*x248));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x254 = -265;
	volatile int16_t x255 = 13;
	int16_t x256 = INT16_MIN;
	int32_t t38 = 32517420;

	t38 = (x253<((x254-x255)*x256));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x258 = -1;
	uint8_t x259 = 111U;
	uint8_t x260 = 21U;

	t39 = (x257<((x258-x259)*x260));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x265 = INT64_MIN;
	volatile uint16_t x266 = 3067U;
	static int16_t x267 = 134;
	uint64_t x268 = 8260159585605LLU;

	t40 = (x265<((x266-x267)*x268));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x273 = -1LL;
	int8_t x274 = -1;
	int32_t x275 = -1;
	volatile int32_t x276 = -967871;

	t41 = (x273<((x274-x275)*x276));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x285 = 18U;
	volatile int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	static int32_t x288 = -1;
	int32_t t42 = 4;

	t42 = (x285<((x286-x287)*x288));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x289 = -1;
	int16_t x292 = INT16_MIN;
	volatile int32_t t43 = -6;

	t43 = (x289<((x290-x291)*x292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	static int8_t x308 = INT8_MAX;
	static volatile int32_t t44 = -2;

	t44 = (x305<((x306-x307)*x308));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x317 = 125;
	int16_t x318 = -1720;
	static int8_t x319 = -1;
	int8_t x320 = 34;
	int32_t t45 = 1828378;

	t45 = (x317<((x318-x319)*x320));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x321 = 1;
	uint64_t x323 = 2496409754799LLU;
	int64_t x324 = INT64_MAX;
	static volatile int32_t t46 = -1193714;

	t46 = (x321<((x322-x323)*x324));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x329 = 1220391908862LL;
	int32_t x332 = -1;
	volatile int32_t t47 = -8196;

	t47 = (x329<((x330-x331)*x332));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x333 = 3022615486LL;
	volatile int16_t x334 = INT16_MIN;
	uint32_t x336 = 10U;
	volatile int32_t t48 = -7;

	t48 = (x333<((x334-x335)*x336));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x342 = 9739;
	static uint32_t x343 = 174759U;
	uint32_t x344 = 117183943U;

	t49 = (x341<((x342-x343)*x344));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = 1057;
	int16_t x355 = INT16_MIN;

	t50 = (x353<((x354-x355)*x356));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x361 = 96U;
	volatile int16_t x362 = INT16_MIN;
	uint16_t x363 = 1880U;
	uint16_t x364 = 449U;
	int32_t t51 = -28051;

	t51 = (x361<((x362-x363)*x364));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x365 = 2765;
	int16_t x366 = INT16_MAX;
	int64_t x367 = 89741066258160271LL;
	static uint64_t x368 = 29625206LLU;
	int32_t t52 = -1421589;

	t52 = (x365<((x366-x367)*x368));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x370 = -1;
	static int8_t x372 = INT8_MIN;
	int32_t t53 = -4108258;

	t53 = (x369<((x370-x371)*x372));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x373 = 0U;
	static int8_t x374 = -13;
	int8_t x375 = -1;

	t54 = (x373<((x374-x375)*x376));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = -1;
	uint8_t x383 = 0U;
	int16_t x384 = 1;

	t55 = (x381<((x382-x383)*x384));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x385 = 0U;
	static int64_t x387 = INT64_MAX;
	volatile int32_t x388 = INT32_MIN;

	t56 = (x385<((x386-x387)*x388));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x389 = INT32_MAX;
	static uint64_t x391 = UINT64_MAX;
	static int8_t x392 = -1;
	volatile int32_t t57 = 2208549;

	t57 = (x389<((x390-x391)*x392));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x401 = 76602711U;
	int32_t x402 = INT32_MAX;
	volatile int32_t t58 = -1472282;

	t58 = (x401<((x402-x403)*x404));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x405 = -1LL;
	uint8_t x407 = UINT8_MAX;

	t59 = (x405<((x406-x407)*x408));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x409 = INT16_MIN;
	uint16_t x410 = 7438U;
	static int8_t x411 = INT8_MAX;
	uint16_t x412 = 849U;
	int32_t t60 = -1;

	t60 = (x409<((x410-x411)*x412));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x413 = 4530839;
	int64_t x414 = INT64_MIN;
	static volatile int64_t x415 = INT64_MIN;
	int32_t t61 = -320200;

	t61 = (x413<((x414-x415)*x416));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x418 = INT16_MAX;
	static uint8_t x419 = 33U;
	int64_t x420 = 16998666674231LL;
	int32_t t62 = 195;

	t62 = (x417<((x418-x419)*x420));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x421 = -409936947309LL;
	volatile uint64_t x422 = 75987598159621LLU;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = 27U;
	int32_t t63 = -28;

	t63 = (x421<((x422-x423)*x424));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x427 = 36486825800LL;
	int8_t x428 = -1;
	int32_t t64 = -6502160;

	t64 = (x425<((x426-x427)*x428));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x429 = 464993483768313743LLU;
	uint32_t x430 = 16892U;
	int16_t x431 = -1;
	int16_t x432 = 179;
	int32_t t65 = -81;

	t65 = (x429<((x430-x431)*x432));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x433 = UINT32_MAX;
	static int16_t x434 = -1;
	int16_t x436 = INT16_MIN;
	int32_t t66 = 177463723;

	t66 = (x433<((x434-x435)*x436));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x445 = -1LL;
	int8_t x447 = -1;
	uint16_t x448 = 0U;
	int32_t t67 = -3529;

	t67 = (x445<((x446-x447)*x448));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x453 = -3017;
	int32_t x454 = 116774;
	static volatile uint32_t x455 = 0U;
	volatile int16_t x456 = -363;

	t68 = (x453<((x454-x455)*x456));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x457 = UINT32_MAX;
	uint64_t x458 = UINT64_MAX;
	static int64_t x459 = 4176712192462454LL;
	volatile int16_t x460 = -1;
	int32_t t69 = 64367347;

	t69 = (x457<((x458-x459)*x460));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x465 = 339595725732LL;
	static volatile uint64_t x466 = 1672880LLU;
	int64_t x467 = 7217LL;
	int32_t x468 = 414;

	t70 = (x465<((x466-x467)*x468));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x470 = INT64_MAX;
	uint8_t x471 = 24U;
	uint64_t x472 = 3299LLU;
	int32_t t71 = -183350395;

	t71 = (x469<((x470-x471)*x472));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x473 = INT32_MIN;
	uint32_t x474 = 106729571U;
	uint16_t x475 = 118U;
	static int16_t x476 = INT16_MIN;
	static int32_t t72 = -198260082;

	t72 = (x473<((x474-x475)*x476));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x485 = 0U;
	volatile int8_t x486 = -1;
	int16_t x487 = -1;
	int8_t x488 = -2;
	volatile int32_t t73 = 0;

	t73 = (x485<((x486-x487)*x488));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x489 = 115U;
	int8_t x490 = INT8_MIN;
	static int8_t x491 = -1;
	int64_t x492 = 496287LL;
	volatile int32_t t74 = -238500273;

	t74 = (x489<((x490-x491)*x492));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x494 = INT8_MIN;
	int8_t x495 = -1;
	volatile int32_t t75 = 27623;

	t75 = (x493<((x494-x495)*x496));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x501 = 14149U;
	uint16_t x502 = 9U;
	uint16_t x503 = UINT16_MAX;
	uint64_t x504 = 913702LLU;
	static int32_t t76 = -17550464;

	t76 = (x501<((x502-x503)*x504));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x505 = 207198651957685056LLU;
	uint16_t x506 = UINT16_MAX;
	int16_t x507 = -1;
	static volatile int32_t t77 = 6;

	t77 = (x505<((x506-x507)*x508));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x513 = INT8_MIN;
	static int32_t x514 = INT32_MAX;
	static uint16_t x516 = UINT16_MAX;

	t78 = (x513<((x514-x515)*x516));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x525 = UINT16_MAX;
	int32_t x526 = -1;
	int64_t x527 = -1LL;
	volatile uint64_t x528 = 220394139LLU;

	t79 = (x525<((x526-x527)*x528));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x529 = -1967LL;
	int32_t x530 = -479;
	static int16_t x531 = 1237;
	int32_t x532 = -1;
	volatile int32_t t80 = 71063653;

	t80 = (x529<((x530-x531)*x532));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x533 = 3U;
	volatile uint16_t x536 = UINT16_MAX;

	t81 = (x533<((x534-x535)*x536));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x541 = 784926U;
	int8_t x542 = 1;
	int8_t x543 = 14;
	static int8_t x544 = -9;

	t82 = (x541<((x542-x543)*x544));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x545 = UINT64_MAX;
	int8_t x548 = -1;
	int32_t t83 = -2782506;

	t83 = (x545<((x546-x547)*x548));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x549 = INT64_MAX;
	volatile uint32_t x550 = UINT32_MAX;
	volatile int8_t x551 = INT8_MIN;
	uint64_t x552 = 31112493595469LLU;
	int32_t t84 = -14019;

	t84 = (x549<((x550-x551)*x552));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x569 = INT8_MAX;
	volatile int8_t x570 = INT8_MIN;
	uint8_t x571 = 84U;
	int16_t x572 = 3;
	int32_t t85 = 6;

	t85 = (x569<((x570-x571)*x572));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x581 = -243;
	uint64_t x582 = UINT64_MAX;
	volatile int32_t x583 = 392544;
	int32_t x584 = INT32_MAX;

	t86 = (x581<((x582-x583)*x584));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x597 = -1;
	int16_t x598 = -4379;
	volatile uint8_t x599 = UINT8_MAX;
	static uint32_t x600 = 8355014U;

	t87 = (x597<((x598-x599)*x600));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x602 = INT32_MAX;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = 42061984;

	t88 = (x601<((x602-x603)*x604));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x609 = 1;
	uint32_t x610 = UINT32_MAX;
	static volatile int16_t x611 = INT16_MIN;
	int8_t x612 = INT8_MAX;
	volatile int32_t t89 = -6088864;

	t89 = (x609<((x610-x611)*x612));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x613 = 316413;
	int16_t x614 = INT16_MIN;
	int8_t x615 = 1;
	int8_t x616 = INT8_MIN;
	static int32_t t90 = 1;

	t90 = (x613<((x614-x615)*x616));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x618 = 12U;
	volatile int8_t x620 = INT8_MIN;
	int32_t t91 = -4201504;

	t91 = (x617<((x618-x619)*x620));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x621 = -1956517;
	int8_t x623 = -11;
	volatile int32_t t92 = -7134326;

	t92 = (x621<((x622-x623)*x624));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x630 = INT16_MIN;
	volatile int16_t x631 = -1;
	int16_t x632 = INT16_MAX;
	volatile int32_t t93 = -3048;

	t93 = (x629<((x630-x631)*x632));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x637 = INT32_MIN;
	static int16_t x638 = -1;
	int8_t x640 = 20;
	volatile int32_t t94 = 0;

	t94 = (x637<((x638-x639)*x640));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x642 = -1;
	uint64_t x643 = UINT64_MAX;
	static uint64_t x644 = 4175601968096142300LLU;

	t95 = (x641<((x642-x643)*x644));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x645 = 2U;
	int64_t x646 = 9634508369264LL;
	int16_t x648 = 130;
	int32_t t96 = 613723883;

	t96 = (x645<((x646-x647)*x648));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x657 = 7LLU;
	static uint32_t x658 = UINT32_MAX;
	int8_t x659 = INT8_MAX;
	volatile uint16_t x660 = UINT16_MAX;
	int32_t t97 = 95;

	t97 = (x657<((x658-x659)*x660));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x661 = INT64_MIN;
	int32_t x663 = 1;
	volatile uint64_t x664 = 2LLU;
	volatile int32_t t98 = 4882076;

	t98 = (x661<((x662-x663)*x664));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x665 = UINT32_MAX;
	static int16_t x666 = 5;
	volatile int32_t x668 = INT32_MAX;

	t99 = (x665<((x666-x667)*x668));

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

