#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
static int8_t x4 = INT8_MAX;
static int64_t x9 = -1LL;
int32_t x11 = -56657;
volatile uint64_t t1 = 2075LLU;
volatile int8_t x14 = INT8_MIN;
int32_t x16 = INT32_MIN;
uint16_t x28 = UINT16_MAX;
int16_t x32 = 18;
volatile int64_t t5 = -87669182507234662LL;
volatile uint64_t t6 = 72004512109210577LLU;
uint8_t x41 = 0U;
int8_t x42 = -1;
int32_t x44 = -49;
uint64_t x59 = UINT64_MAX;
volatile uint16_t x63 = 2U;
static uint16_t x76 = UINT16_MAX;
int32_t x77 = INT32_MAX;
volatile int32_t t14 = 30097631;
static int64_t x88 = 24228LL;
uint32_t x90 = 1473251411U;
int64_t x97 = INT64_MIN;
static int32_t x99 = -1;
int64_t t18 = 1041057LL;
int32_t t19 = -526171310;
int64_t x107 = INT64_MIN;
int8_t x128 = INT8_MIN;
uint32_t x130 = 15U;
int32_t t27 = 1;
uint32_t x161 = 4779877U;
volatile uint32_t t31 = 2U;
static volatile uint64_t t32 = 7955863722040LLU;
uint16_t x180 = 84U;
static uint64_t x184 = 1027LLU;
uint32_t x186 = 7U;
int8_t x188 = -4;
uint8_t x207 = 0U;
uint16_t x214 = UINT16_MAX;
int8_t x215 = INT8_MAX;
int16_t x233 = 12457;
volatile int16_t x235 = 7756;
int16_t x238 = 1;
uint32_t t43 = 122U;
volatile uint64_t x256 = 3700205LLU;
static int32_t x258 = -3968;
int8_t x269 = 0;
uint8_t x275 = UINT8_MAX;
volatile int32_t t48 = -6;
volatile uint64_t t50 = 5LLU;
volatile int32_t x285 = 0;
uint8_t x298 = UINT8_MAX;
int64_t x300 = 7315753LL;
volatile int64_t t52 = 15420127LL;
int8_t x304 = -1;
uint32_t t55 = 1U;
static int64_t x315 = -1LL;
int16_t x323 = -1;
volatile int8_t x327 = -1;
volatile uint32_t t60 = 11604068U;
volatile uint16_t x344 = UINT16_MAX;
static uint64_t x345 = UINT64_MAX;
static uint16_t x346 = 337U;
static volatile int64_t t66 = 6103704402365LL;
uint8_t x376 = 24U;
uint32_t t69 = 467U;
int32_t t70 = 3245268;
int32_t x398 = INT32_MIN;
int8_t x399 = INT8_MIN;
volatile int32_t t73 = -125859657;
volatile uint32_t x416 = UINT32_MAX;
int16_t x425 = 3843;
uint8_t x427 = 4U;
uint64_t x433 = UINT64_MAX;
uint8_t x460 = 1U;
volatile uint32_t t81 = 136U;
int32_t x466 = INT32_MIN;
int16_t x469 = -79;
uint16_t x470 = 10U;
int8_t x495 = INT8_MIN;
uint64_t x500 = 735927LLU;
static int8_t x501 = -1;
int8_t x504 = -1;
uint64_t x511 = 992646473269829LLU;
uint64_t t92 = 1890346127LLU;
int8_t x531 = INT8_MIN;
static int32_t x534 = INT32_MAX;
int32_t x541 = -29797575;
int64_t x551 = -1LL;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static int16_t x2 = -1;
	volatile int64_t t0 = -1444731LL;

	t0 = (x1%(x2-(x3*x4)));

	if (t0 != -8LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = INT32_MIN;
	uint64_t x12 = UINT64_MAX;

	t1 = (x9%(x10-(x11*x12)));

	if (t1 != 2147540304LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int64_t x15 = -4LL;
	volatile int64_t t2 = -1LL;

	t2 = (x13%(x14-(x15*x16)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 1966063649059600793LLU;
	volatile uint64_t x18 = 2288306LLU;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = -4;
	uint64_t t3 = 68945481133LLU;

	t3 = (x17%(x18-(x19*x20)));

	if (t3 != 1132815LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int64_t x26 = INT64_MIN;
	volatile int8_t x27 = 0;
	uint64_t t4 = 25720760250LLU;

	t4 = (x25%(x26-(x27*x28)));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = 13883U;
	uint32_t x31 = 5U;

	t5 = (x29%(x30-(x31*x32)));

	if (t5 != -8718LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = UINT32_MAX;
	static uint64_t x34 = 1147LLU;
	uint32_t x35 = 154570048U;
	static volatile uint16_t x36 = 8U;

	t6 = (x33%(x34-(x35*x36)));

	if (t6 != 4294967295LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = 18122297932753020LLU;
	static volatile int8_t x39 = 0;
	static uint16_t x40 = 352U;
	uint64_t t7 = 87909495050419816LLU;

	t7 = (x37%(x38-(x39*x40)));

	if (t7 != 32767LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x43 = 34U;
	uint32_t t8 = 36U;

	t8 = (x41%(x42-(x43*x44)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	static int32_t x46 = -1207;
	int64_t x47 = 69426LL;
	int8_t x48 = -1;
	int64_t t9 = -482779462986LL;

	t9 = (x45%(x46-(x47*x48)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x60 = 15754;
	uint64_t t10 = 3594651710625315LLU;

	t10 = (x57%(x58-(x59*x60)));

	if (t10 != 2147467766LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = -1;
	uint8_t x62 = 18U;
	int64_t x64 = -1LL;
	static volatile int64_t t11 = -17740LL;

	t11 = (x61%(x62-(x63*x64)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = 12;
	uint64_t x66 = 2336388430LLU;
	uint64_t x67 = 570LLU;
	int64_t x68 = INT64_MIN;
	static uint64_t t12 = 1582356LLU;

	t12 = (x65%(x66-(x67*x68)));

	if (t12 != 12LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MAX;
	int64_t x74 = 14242349LL;
	volatile int16_t x75 = INT16_MIN;
	volatile int64_t t13 = 2678396279LL;

	t13 = (x73%(x74-(x75*x76)));

	if (t13 != 633974860LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x78 = -1;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;

	t14 = (x77%(x78-(x79*x80)));

	if (t14 != 4193792) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = 1;
	int64_t x82 = 96106421552523LL;
	static int16_t x83 = INT16_MAX;
	uint64_t x84 = 2149496LLU;
	static volatile uint64_t t15 = 146286125447LLU;

	t15 = (x81%(x82-(x83*x84)));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = -8467010829LL;
	uint32_t x86 = 45U;
	int32_t x87 = INT32_MAX;
	volatile int64_t t16 = 1047LL;

	t16 = (x85%(x86-(x87*x88)));

	if (t16 != -8467010829LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x89 = -1LL;
	volatile int32_t x91 = -83003644;
	uint64_t x92 = 21LLU;
	uint64_t t17 = 9705738869522LLU;

	t17 = (x89%(x90-(x91*x92)));

	if (t17 != 1970121930LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x98 = 8371078;
	static int64_t x100 = -593529548LL;

	t18 = (x97%(x98-(x99*x100)));

	if (t18 != -191990118LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x101 = INT32_MAX;
	int8_t x102 = 5;
	int8_t x103 = INT8_MIN;
	int16_t x104 = -136;

	t19 = (x101%(x102-(x103*x104)));

	if (t19 != 5656) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 4U;
	uint16_t x106 = UINT16_MAX;
	uint64_t x108 = UINT64_MAX;
	static uint64_t t20 = 51075271LLU;

	t20 = (x105%(x106-(x107*x108)));

	if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MAX;
	volatile uint8_t x110 = 5U;
	static uint8_t x111 = 5U;
	static volatile int64_t x112 = -1LL;
	int64_t t21 = 84702703810877091LL;

	t21 = (x109%(x110-(x111*x112)));

	if (t21 != 7LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x117 = INT16_MAX;
	int64_t x118 = 3529447645523LL;
	static uint8_t x119 = 15U;
	uint16_t x120 = UINT16_MAX;
	static int64_t t22 = -12LL;

	t22 = (x117%(x118-(x119*x120)));

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = 2LL;
	static int16_t x122 = INT16_MAX;
	int32_t x123 = 2468661;
	static uint32_t x124 = UINT32_MAX;
	int64_t t23 = 88LL;

	t23 = (x121%(x122-(x123*x124)));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = 1469457344LL;
	int64_t x126 = INT64_MAX;
	volatile int32_t x127 = -10289;
	volatile int64_t t24 = -8472292LL;

	t24 = (x125%(x126-(x127*x128)));

	if (t24 != 1469457344LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int8_t x131 = INT8_MIN;
	int16_t x132 = -859;
	volatile uint32_t t25 = 25258044U;

	t25 = (x129%(x130-(x131*x132)));

	if (t25 != 109936U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = 164824U;
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	uint32_t t26 = 78889U;

	t26 = (x133%(x134-(x135*x136)));

	if (t26 != 164824U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 4U;
	int16_t x138 = -5195;
	volatile int8_t x139 = INT8_MIN;
	volatile int32_t x140 = 367;

	t27 = (x137%(x138-(x139*x140)));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x141 = INT8_MIN;
	uint64_t x142 = 321056748LLU;
	static volatile uint64_t x143 = 3453702888195308313LLU;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t28 = 1188424196275LLU;

	t28 = (x141%(x142-(x143*x144)));

	if (t28 != 1178229631127726183LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x146 = INT64_MAX;
	int16_t x147 = -5;
	uint16_t x148 = 0U;
	volatile int64_t t29 = 20117205562068351LL;

	t29 = (x145%(x146-(x147*x148)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x149 = INT8_MIN;
	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = -1;
	static int16_t x152 = -1719;
	volatile int32_t t30 = -2806;

	t30 = (x149%(x150-(x151*x152)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x162 = 26U;
	uint8_t x163 = UINT8_MAX;
	static int8_t x164 = INT8_MIN;

	t31 = (x161%(x162-(x163*x164)));

	if (t31 != 10641U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = 1;
	volatile uint64_t x170 = 1473596959LLU;
	int16_t x171 = -1042;
	static uint16_t x172 = 4U;

	t32 = (x169%(x170-(x171*x172)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x177 = 708180LLU;
	static int16_t x178 = 1;
	static uint32_t x179 = 768414U;
	volatile uint64_t t33 = 2578889076873642LLU;

	t33 = (x177%(x178-(x179*x180)));

	if (t33 != 708180LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x181 = INT8_MIN;
	static int16_t x182 = INT16_MAX;
	int8_t x183 = -1;
	uint64_t t34 = 267300LLU;

	t34 = (x181%(x182-(x183*x184)));

	if (t34 != 26362LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x187 = 3298327U;
	volatile int64_t t35 = -881LL;

	t35 = (x185%(x186-(x187*x188)));

	if (t35 != -8632763LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x197 = -214;
	volatile int16_t x198 = INT16_MIN;
	static uint8_t x199 = 120U;
	uint32_t x200 = UINT32_MAX;
	uint32_t t36 = 2U;

	t36 = (x197%(x198-(x199*x200)));

	if (t36 != 32434U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x201 = 105U;
	int32_t x202 = -704;
	static int8_t x203 = 0;
	int64_t x204 = -3569480444932LL;
	static int64_t t37 = -10419615409919297LL;

	t37 = (x201%(x202-(x203*x204)));

	if (t37 != 105LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x205 = 44175U;
	uint8_t x206 = UINT8_MAX;
	uint64_t x208 = 21932370LLU;
	uint64_t t38 = 132728596672614LLU;

	t38 = (x205%(x206-(x207*x208)));

	if (t38 != 60LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x213 = 14773424U;
	int64_t x216 = -1LL;
	volatile int64_t t39 = -14939199946108LL;

	t39 = (x213%(x214-(x215*x216)));

	if (t39 != 65136LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x217 = INT32_MAX;
	int8_t x218 = -1;
	int32_t x219 = -488;
	int8_t x220 = -1;
	volatile int32_t t40 = 39;

	t40 = (x217%(x218-(x219*x220)));

	if (t40 != 49) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x234 = INT16_MIN;
	volatile int32_t x236 = -1;
	int32_t t41 = -1;

	t41 = (x233%(x234-(x235*x236)));

	if (t41 != 12457) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = -1LL;
	static volatile int64_t t42 = -1LL;

	t42 = (x237%(x238-(x239*x240)));

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = -1;
	volatile int16_t x246 = INT16_MIN;
	static uint32_t x247 = 4071U;
	uint32_t x248 = 154252U;

	t43 = (x245%(x246-(x247*x248)));

	if (t43 != 627992659U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x253 = -9;
	int64_t x254 = -1LL;
	int32_t x255 = 828;
	volatile uint64_t t44 = 611LLU;

	t44 = (x253%(x254-(x255*x256)));

	if (t44 != 3063769732LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x257 = 4U;
	volatile uint8_t x259 = UINT8_MAX;
	uint64_t x260 = 24867376219LLU;
	volatile uint64_t t45 = 2546LLU;

	t45 = (x257%(x258-(x259*x260)));

	if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	volatile uint64_t x267 = UINT64_MAX;
	static int64_t x268 = INT64_MIN;
	uint64_t t46 = 2421883LLU;

	t46 = (x265%(x266-(x267*x268)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x270 = 6;
	volatile int8_t x271 = 12;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t47 = -857482433;

	t47 = (x269%(x270-(x271*x272)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x273 = 0U;
	uint8_t x274 = 1U;
	static int16_t x276 = 93;

	t48 = (x273%(x274-(x275*x276)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = -1;
	int64_t t49 = -4835502344903410LL;

	t49 = (x277%(x278-(x279*x280)));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x281 = UINT8_MAX;
	uint16_t x282 = 66U;
	static volatile uint8_t x283 = 1U;
	uint64_t x284 = 69330608LLU;

	t50 = (x281%(x282-(x283*x284)));

	if (t50 != 255LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x286 = -302;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t51 = 271893379373LLU;

	t51 = (x285%(x286-(x287*x288)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x297 = -25;
	int32_t x299 = -1;

	t52 = (x297%(x298-(x299*x300)));

	if (t52 != -25LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x301 = 2LLU;
	int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MAX;
	uint64_t t53 = 13334182921535LLU;

	t53 = (x301%(x302-(x303*x304)));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t54 = 908LLU;

	t54 = (x305%(x306-(x307*x308)));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	static uint32_t x311 = 814829U;
	int16_t x312 = INT16_MIN;

	t55 = (x309%(x310-(x311*x312)));

	if (t55 != 1216970624U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = 136;
	int32_t x314 = INT32_MAX;
	volatile uint8_t x316 = UINT8_MAX;
	static volatile int64_t t56 = 124184078LL;

	t56 = (x313%(x314-(x315*x316)));

	if (t56 != 136LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x317 = INT64_MIN;
	static uint32_t x318 = UINT32_MAX;
	uint64_t x319 = UINT64_MAX;
	static volatile uint32_t x320 = UINT32_MAX;
	uint64_t t57 = 11997LLU;

	t57 = (x317%(x318-(x319*x320)));

	if (t57 != 2147483648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x321 = UINT8_MAX;
	static volatile uint64_t x322 = UINT64_MAX;
	int64_t x324 = -257756LL;
	volatile uint64_t t58 = 8734714295312847357LLU;

	t58 = (x321%(x322-(x323*x324)));

	if (t58 != 255LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x325 = INT32_MAX;
	static uint32_t x326 = 10886U;
	volatile int8_t x328 = INT8_MAX;
	static volatile uint32_t t59 = 1U;

	t59 = (x325%(x326-(x327*x328)));

	if (t59 != 3712U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x333 = 12;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MAX;
	uint8_t x336 = UINT8_MAX;

	t60 = (x333%(x334-(x335*x336)));

	if (t60 != 12U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = INT32_MIN;
	static int16_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	volatile int32_t t61 = 1;

	t61 = (x341%(x342-(x343*x344)));

	if (t61 != -8421120) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x347 = 0;
	volatile uint32_t x348 = 12489U;
	volatile uint64_t t62 = 1898570790LLU;

	t62 = (x345%(x346-(x347*x348)));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x349 = UINT16_MAX;
	static uint16_t x350 = UINT16_MAX;
	volatile int16_t x351 = -1;
	uint16_t x352 = 604U;
	int32_t t63 = -1728418;

	t63 = (x349%(x350-(x351*x352)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x353 = 121U;
	uint16_t x354 = 8865U;
	int8_t x355 = INT8_MAX;
	uint8_t x356 = 49U;
	int32_t t64 = -1;

	t64 = (x353%(x354-(x355*x356)));

	if (t64 != 121) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x361 = 1U;
	static uint64_t x362 = 298155LLU;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t65 = 32590607LLU;

	t65 = (x361%(x362-(x363*x364)));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = -1LL;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = -410;
	volatile int8_t x372 = -1;

	t66 = (x369%(x370-(x371*x372)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -27398LL;
	uint16_t x375 = UINT16_MAX;
	int64_t t67 = -45797109083480LL;

	t67 = (x373%(x374-(x375*x376)));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x377 = INT64_MIN;
	static int16_t x378 = -1;
	volatile int8_t x379 = 4;
	static uint64_t x380 = 1537836304213LLU;
	static volatile uint64_t t68 = 102371LLU;

	t68 = (x377%(x378-(x379*x380)));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x385 = 76U;
	int8_t x386 = -1;
	uint32_t x387 = 376U;
	int8_t x388 = INT8_MIN;

	t69 = (x385%(x386-(x387*x388)));

	if (t69 != 76U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x389 = UINT8_MAX;
	int16_t x390 = INT16_MIN;
	int8_t x391 = -29;
	static int16_t x392 = INT16_MIN;

	t70 = (x389%(x390-(x391*x392)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x397 = 7U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t71 = 12179470LLU;

	t71 = (x397%(x398-(x399*x400)));

	if (t71 != 7LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x401 = -3;
	static volatile uint8_t x402 = 4U;
	static int64_t x403 = -1LL;
	int64_t x404 = 1LL;
	int64_t t72 = 11228LL;

	t72 = (x401%(x402-(x403*x404)));

	if (t72 != -3LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x405 = 83U;
	volatile int16_t x406 = 121;
	uint8_t x407 = UINT8_MAX;
	volatile int16_t x408 = 406;

	t73 = (x405%(x406-(x407*x408)));

	if (t73 != 83) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = 34552278442345LL;
	uint32_t x410 = UINT32_MAX;
	volatile int16_t x411 = 30;
	int8_t x412 = -15;
	volatile int64_t t74 = 22302423677824180LL;

	t74 = (x409%(x410-(x411*x412)));

	if (t74 != 232LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x413 = UINT32_MAX;
	int64_t x414 = 937663LL;
	int8_t x415 = -29;
	int64_t t75 = 2787859445LL;

	t75 = (x413%(x414-(x415*x416)));

	if (t75 != 603575LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x426 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t76 = -78;

	t76 = (x425%(x426-(x427*x428)));

	if (t76 != 3843) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x429 = -1232741739700898LL;
	uint32_t x430 = 8U;
	int16_t x431 = -5;
	static int16_t x432 = 30;
	volatile int64_t t77 = 1153311LL;

	t77 = (x429%(x430-(x431*x432)));

	if (t77 != -56LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x434 = -1;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = UINT32_MAX;
	uint64_t t78 = 2418513627792LLU;

	t78 = (x433%(x434-(x435*x436)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x437 = INT64_MAX;
	volatile uint32_t x438 = 390176U;
	static int8_t x439 = INT8_MAX;
	int8_t x440 = 1;
	volatile int64_t t79 = 803728LL;

	t79 = (x437%(x438-(x439*x440)));

	if (t79 != 358574LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x453 = UINT16_MAX;
	static int64_t x454 = INT64_MIN;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = 5U;
	volatile int64_t t80 = 1159806852938LL;

	t80 = (x453%(x454-(x455*x456)));

	if (t80 != 65535LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x457 = -742048588;
	static volatile int8_t x458 = INT8_MIN;
	uint32_t x459 = 89756U;

	t81 = (x457%(x458-(x459*x460)));

	if (t81 != 3552918708U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x465 = 1;
	static volatile uint16_t x467 = UINT16_MAX;
	volatile int16_t x468 = INT16_MIN;
	int32_t t82 = 136326;

	t82 = (x465%(x466-(x467*x468)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x471 = -1;
	uint8_t x472 = UINT8_MAX;
	static int32_t t83 = 720676;

	t83 = (x469%(x470-(x471*x472)));

	if (t83 != -79) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x473 = 6359949181241LLU;
	static int32_t x474 = 623;
	volatile uint32_t x475 = UINT32_MAX;
	volatile int8_t x476 = 3;
	volatile uint64_t t84 = 301915274729035LLU;

	t84 = (x473%(x474-(x475*x476)));

	if (t84 != 513LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x477 = INT32_MAX;
	int16_t x478 = INT16_MAX;
	int32_t x479 = INT32_MAX;
	uint32_t x480 = 64768772U;
	volatile uint32_t t85 = 127642U;

	t85 = (x477%(x478-(x479*x480)));

	if (t85 != 9032860U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = -1LL;
	uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MAX;
	uint32_t x484 = UINT32_MAX;
	int64_t t86 = 129563434905113LL;

	t86 = (x481%(x482-(x483*x484)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x493 = INT16_MAX;
	volatile uint16_t x494 = UINT16_MAX;
	volatile uint8_t x496 = 20U;
	volatile int32_t t87 = 546021961;

	t87 = (x493%(x494-(x495*x496)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x497 = -1;
	int32_t x498 = INT32_MAX;
	volatile int16_t x499 = INT16_MIN;
	uint64_t t88 = 2694656177893587LLU;

	t88 = (x497%(x498-(x499*x500)));

	if (t88 != 12054090089LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x502 = INT8_MIN;
	int32_t x503 = INT32_MAX;
	volatile int32_t t89 = 0;

	t89 = (x501%(x502-(x503*x504)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x505 = INT64_MIN;
	int64_t x506 = -24632188LL;
	int64_t x507 = -1LL;
	int8_t x508 = INT8_MIN;
	int64_t t90 = -728LL;

	t90 = (x505%(x506-(x507*x508)));

	if (t90 != -14521220LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x509 = -4641414875505LL;
	uint8_t x510 = 1U;
	int64_t x512 = INT64_MIN;
	static volatile uint64_t t91 = 14088LLU;

	t91 = (x509%(x510-(x511*x512)));

	if (t91 != 9223367395439900302LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x517 = INT64_MAX;
	static uint64_t x518 = 0LLU;
	uint64_t x519 = 1LLU;
	volatile int16_t x520 = -1;

	t92 = (x517%(x518-(x519*x520)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x525 = INT8_MIN;
	volatile uint32_t x526 = UINT32_MAX;
	uint32_t x527 = 148837U;
	uint8_t x528 = UINT8_MAX;
	uint32_t t93 = 6893U;

	t93 = (x525%(x526-(x527*x528)));

	if (t93 != 37953308U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x529 = UINT8_MAX;
	volatile int32_t x530 = INT32_MIN;
	uint8_t x532 = 9U;
	volatile int32_t t94 = -2963300;

	t94 = (x529%(x530-(x531*x532)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x533 = -636167;
	uint64_t x535 = UINT64_MAX;
	volatile int64_t x536 = INT64_MIN;
	volatile uint64_t t95 = 64214843974LLU;

	t95 = (x533%(x534-(x535*x536)));

	if (t95 != 9223372034706655994LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x542 = -1;
	uint16_t x543 = 6U;
	static int8_t x544 = -1;
	volatile int32_t t96 = -29;

	t96 = (x541%(x542-(x543*x544)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x545 = UINT32_MAX;
	int16_t x546 = INT16_MIN;
	uint64_t x547 = 1526068615LLU;
	uint16_t x548 = UINT16_MAX;
	volatile uint64_t t97 = 868009LLU;

	t97 = (x545%(x546-(x547*x548)));

	if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x549 = 176896684683LL;
	int16_t x550 = 6;
	uint32_t x552 = UINT32_MAX;
	int64_t t98 = 682303553742898845LL;

	t98 = (x549%(x550-(x551*x552)));

	if (t98 != 803025342LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x557 = 328LLU;
	uint8_t x558 = 0U;
	volatile uint64_t x559 = UINT64_MAX;
	uint64_t x560 = 5532LLU;
	uint64_t t99 = 71215LLU;

	t99 = (x557%(x558-(x559*x560)));

	if (t99 != 328LLU) { NG(); } else { ; }
	
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

