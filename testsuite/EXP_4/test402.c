#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x15 = 733296302907234LLU;
uint32_t x16 = UINT32_MAX;
int8_t x27 = INT8_MAX;
uint64_t t3 = 5404LLU;
volatile int16_t x39 = 7937;
uint64_t x46 = UINT64_MAX;
int8_t x48 = 52;
int32_t x53 = -1;
volatile uint16_t x59 = 26U;
int64_t t8 = 152289128LL;
static int32_t x70 = INT32_MIN;
volatile int8_t x71 = INT8_MAX;
int32_t t9 = 46302195;
uint8_t x89 = UINT8_MAX;
volatile int16_t x90 = INT16_MIN;
int16_t x96 = -5;
int64_t x97 = 2021307151680LL;
static volatile int16_t x101 = 1967;
static volatile int64_t t14 = -7508872386464LL;
volatile uint8_t x105 = 0U;
int16_t x111 = INT16_MIN;
volatile uint64_t x115 = 26948LLU;
int64_t x117 = 2014870629826893LL;
int16_t x120 = INT16_MIN;
uint64_t x125 = UINT64_MAX;
uint8_t x127 = UINT8_MAX;
int32_t x129 = INT32_MIN;
uint32_t x131 = UINT32_MAX;
volatile int32_t x132 = 97272605;
uint64_t x134 = 214LLU;
static volatile int32_t x135 = -1;
static int16_t x137 = INT16_MIN;
volatile uint64_t t23 = 61593LLU;
int8_t x141 = -28;
static int16_t x163 = INT16_MAX;
static int8_t x164 = INT8_MIN;
volatile int64_t t26 = 459736LL;
static int8_t x182 = INT8_MIN;
static int64_t x185 = INT64_MAX;
static volatile uint64_t x201 = 320LLU;
static uint64_t t31 = 59843851568417LLU;
int8_t x229 = -1;
int8_t x232 = 2;
int8_t x234 = INT8_MIN;
static uint8_t x249 = UINT8_MAX;
uint8_t x252 = 66U;
int32_t t38 = -9700;
static volatile uint32_t t39 = 989702751U;
int64_t x258 = 4603LL;
uint8_t x266 = UINT8_MAX;
static uint64_t x277 = 12037206498LLU;
volatile int8_t x278 = -1;
uint64_t t44 = UINT64_MAX;
int32_t x286 = INT32_MIN;
int64_t x289 = INT64_MAX;
static volatile uint64_t x303 = 428131880513998LLU;
uint64_t x308 = 47051319091914LLU;
uint64_t t48 = 2858906036870626LLU;
int64_t x310 = INT64_MIN;
int64_t t50 = 2480802598351LL;
uint64_t x323 = UINT64_MAX;
uint64_t t51 = 158LLU;
int32_t x326 = 19295094;
static int8_t x328 = INT8_MIN;
volatile uint64_t x338 = 75LLU;
volatile uint64_t t53 = 5585873860LLU;
int64_t x341 = -1LL;
int32_t x347 = -1;
volatile int8_t x349 = 1;
volatile int16_t x355 = -1;
uint8_t x357 = 45U;
uint32_t x360 = 1788552036U;
int64_t t60 = INT64_MAX;
volatile int8_t x373 = INT8_MIN;
int16_t x374 = INT16_MIN;
volatile uint64_t x375 = 32LLU;
int64_t x382 = INT64_MIN;
volatile uint64_t x385 = 37126260337LLU;
int32_t x386 = INT32_MIN;
volatile uint64_t t64 = 9768LLU;
int32_t x390 = -1;
static uint8_t x397 = 93U;
int32_t x407 = -1;
volatile uint8_t x408 = 30U;
int8_t x409 = INT8_MIN;
static int32_t x420 = -2;
volatile uint32_t t70 = 1098364973U;
int16_t x436 = INT16_MAX;
static uint16_t x447 = UINT16_MAX;
volatile int64_t x452 = 155541780LL;
uint8_t x454 = UINT8_MAX;
uint32_t x455 = 1356214058U;
int8_t x456 = -1;
int8_t x461 = INT8_MIN;
static uint64_t x474 = 1LLU;
int16_t x476 = -1;
int8_t x480 = -1;
static uint32_t x482 = 40U;
int16_t x491 = -48;
uint16_t x492 = 3119U;
uint64_t x495 = 1220493LLU;
volatile uint32_t t85 = 220U;
volatile uint8_t x513 = 1U;
uint16_t x515 = UINT16_MAX;
int8_t x530 = INT8_MIN;
uint64_t x539 = 44159777270166LLU;
int16_t x547 = INT16_MIN;
uint64_t x553 = 7LLU;
static int64_t x554 = -1LL;
volatile uint64_t t91 = 339356348349LLU;
int64_t x560 = 137742263219197474LL;
int32_t t94 = -508;
int8_t x571 = -7;
volatile int8_t x594 = INT8_MAX;
volatile uint8_t x612 = 18U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static volatile int8_t x2 = INT8_MAX;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = -1;
	static volatile int64_t t0 = -85LL;

	t0 = (x1|(x2%(x3*x4)));

	if (t0 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int8_t x6 = 48;
	uint32_t x7 = UINT32_MAX;
	volatile uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 16384LLU;

	t1 = (x5|(x6%(x7*x8)));

	if (t1 != 4294967295LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = UINT8_MAX;
	volatile int8_t x14 = INT8_MIN;
	uint64_t t2 = 386174105211200047LLU;

	t2 = (x13|(x14%(x15*x16)));

	if (t2 != 2764149743136694015LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 40361444831063431LLU;
	volatile int8_t x26 = INT8_MAX;
	uint16_t x28 = UINT16_MAX;

	t3 = (x25|(x26%(x27*x28)));

	if (t3 != 40361444831063551LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x37 = 69479262908787210LLU;
	volatile int8_t x38 = INT8_MIN;
	int32_t x40 = 253;
	uint64_t t4 = 88670419575334LLU;

	t4 = (x37|(x38%(x39*x40)));

	if (t4 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x45 = INT32_MAX;
	int8_t x47 = INT8_MAX;
	uint64_t t5 = 162453997LLU;

	t5 = (x45|(x46%(x47*x48)));

	if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int64_t x56 = -366LL;
	volatile int64_t t6 = 2528839382177LL;

	t6 = (x53|(x54%(x55*x56)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x57 = 10754U;
	int8_t x58 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t7 = 5425;

	t7 = (x57|(x58%(x59*x60)));

	if (t7 != 10879) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = 24705U;
	int64_t x62 = INT64_MAX;
	uint16_t x63 = 1116U;
	volatile int64_t x64 = -1LL;

	t8 = (x61|(x62%(x63*x64)));

	if (t8 != 24711LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = -5;
	int16_t x72 = 117;

	t9 = (x69|(x70%(x71*x72)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x81 = 53;
	int32_t x82 = INT32_MIN;
	volatile int32_t x83 = 33;
	volatile uint8_t x84 = 1U;
	int32_t t10 = 610;

	t10 = (x81|(x82%(x83*x84)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x91 = -5;
	static uint64_t x92 = 842173LLU;
	static uint64_t t11 = 2LLU;

	t11 = (x89|(x90%(x91*x92)));

	if (t11 != 4178175LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x93 = UINT32_MAX;
	static int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x93|(x94%(x95*x96)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x98 = -1;
	int32_t x99 = -211982;
	uint16_t x100 = 27U;
	volatile int64_t t13 = 3044LL;

	t13 = (x97|(x98%(x99*x100)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x102 = INT64_MIN;
	int16_t x103 = -922;
	static uint16_t x104 = 1437U;

	t14 = (x101|(x102%(x103*x104)));

	if (t14 != -16465LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x106 = UINT64_MAX;
	uint32_t x107 = 82586321U;
	static volatile int16_t x108 = -1;
	static uint64_t t15 = 39478041528LLU;

	t15 = (x105|(x106%(x107*x108)));

	if (t15 != 2698738915LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x109 = 883329LLU;
	int8_t x110 = INT8_MIN;
	static volatile int64_t x112 = 183920679679LL;
	uint64_t t16 = 495936120587LLU;

	t16 = (x109|(x110%(x111*x112)));

	if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x113 = -1;
	static int16_t x114 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	static volatile uint64_t t17 = UINT64_MAX;

	t17 = (x113|(x114%(x115*x116)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x118 = -300715072932LL;
	uint16_t x119 = 9624U;
	volatile int64_t t18 = 61966493571329649LL;

	t18 = (x117|(x118%(x119*x120)));

	if (t18 != -177675427LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 2970381357572326LLU;
	volatile uint64_t x123 = UINT64_MAX;
	uint16_t x124 = UINT16_MAX;
	uint64_t t19 = 1975150359LLU;

	t19 = (x121|(x122%(x123*x124)));

	if (t19 != 18446744073709543654LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x126 = 1023U;
	uint64_t x128 = UINT64_MAX;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x125|(x126%(x127*x128)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x130 = -1;
	volatile uint32_t t21 = 1961896U;

	t21 = (x129|(x130%(x131*x132)));

	if (t21 != 2244756252U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x133 = 7U;
	volatile int32_t x136 = INT32_MAX;
	uint64_t t22 = 14278LLU;

	t22 = (x133|(x134%(x135*x136)));

	if (t22 != 215LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x138 = INT16_MIN;
	uint8_t x139 = 52U;
	uint64_t x140 = 171038LLU;

	t23 = (x137|(x138%(x139*x140)));

	if (t23 != 18446744073709534912LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x142 = INT8_MIN;
	int16_t x143 = 7029;
	int16_t x144 = INT16_MAX;
	int32_t t24 = -2;

	t24 = (x141|(x142%(x143*x144)));

	if (t24 != -28) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x157 = -5;
	static volatile int16_t x158 = INT16_MIN;
	static uint8_t x159 = 6U;
	static volatile uint16_t x160 = 193U;
	int32_t t25 = 3;

	t25 = (x157|(x158%(x159*x160)));

	if (t25 != -5) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x161 = 7U;
	int64_t x162 = INT64_MIN;

	t26 = (x161|(x162%(x163*x164)));

	if (t26 != -262137LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int16_t x178 = INT16_MIN;
	int64_t x179 = -1LL;
	int32_t x180 = -348546;
	static volatile int64_t t27 = 84727037819925LL;

	t27 = (x177|(x178%(x179*x180)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x181 = INT8_MAX;
	volatile int8_t x183 = INT8_MIN;
	volatile uint8_t x184 = 55U;
	volatile int32_t t28 = -6;

	t28 = (x181|(x182%(x183*x184)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x186 = 49;
	uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = 328U;
	static volatile int64_t t29 = INT64_MAX;

	t29 = (x185|(x186%(x187*x188)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x202 = INT64_MAX;
	int32_t x203 = 484810;
	static uint8_t x204 = 7U;
	volatile uint64_t t30 = 2383538026854LLU;

	t30 = (x201|(x202%(x203*x204)));

	if (t30 != 1539447LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 28U;
	static volatile uint64_t x207 = 343LLU;
	static volatile int8_t x208 = 1;

	t31 = (x205|(x206%(x207*x208)));

	if (t31 != 9223372036854775836LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x209 = 0;
	uint32_t x210 = 644286U;
	int32_t x211 = 980;
	int8_t x212 = -1;
	uint32_t t32 = 295U;

	t32 = (x209|(x210%(x211*x212)));

	if (t32 != 644286U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x213 = INT64_MIN;
	static int16_t x214 = 7952;
	uint8_t x215 = 2U;
	int32_t x216 = -1325143;
	int64_t t33 = 43537246904191506LL;

	t33 = (x213|(x214%(x215*x216)));

	if (t33 != -9223372036854767856LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x225 = -1LL;
	int32_t x226 = -25269;
	int8_t x227 = INT8_MAX;
	static int16_t x228 = -1;
	volatile int64_t t34 = 29210LL;

	t34 = (x225|(x226%(x227*x228)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x230 = -1LL;
	volatile int8_t x231 = INT8_MAX;
	int64_t t35 = 134204LL;

	t35 = (x229|(x230%(x231*x232)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x233 = INT8_MIN;
	int8_t x235 = -1;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t36 = -2898847;

	t36 = (x233|(x234%(x235*x236)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x237 = 2779U;
	int32_t x238 = INT32_MIN;
	volatile int8_t x239 = -31;
	uint32_t x240 = 38U;
	uint32_t t37 = 11733U;

	t37 = (x237|(x238%(x239*x240)));

	if (t37 != 2147486427U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x250 = 27U;
	static volatile int16_t x251 = INT16_MIN;

	t38 = (x249|(x250%(x251*x252)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x253 = 15U;
	volatile uint16_t x254 = 481U;
	uint32_t x255 = 3553040U;
	static int32_t x256 = -1;

	t39 = (x253|(x254%(x255*x256)));

	if (t39 != 495U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x257 = -7LL;
	int16_t x259 = INT16_MAX;
	uint8_t x260 = 2U;
	int64_t t40 = -273610774318630LL;

	t40 = (x257|(x258%(x259*x260)));

	if (t40 != -5LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x261 = 1U;
	volatile int32_t x262 = 5278;
	uint16_t x263 = 237U;
	static int32_t x264 = 3214826;
	volatile uint32_t t41 = 118U;

	t41 = (x261|(x262%(x263*x264)));

	if (t41 != 5279U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x265 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t42 = -471762738;

	t42 = (x265|(x266%(x267*x268)));

	if (t42 != -2147483393) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x279 = -1;
	volatile uint64_t x280 = 944LLU;
	static uint64_t t43 = 16258801378LLU;

	t43 = (x277|(x278%(x279*x280)));

	if (t43 != 12037207023LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x281 = -1;
	static int32_t x282 = -1;
	uint64_t x283 = 2556150297481LLU;
	int32_t x284 = INT32_MIN;

	t44 = (x281|(x282%(x283*x284)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x285 = UINT32_MAX;
	int8_t x287 = -1;
	uint64_t x288 = 6893363562080521605LLU;
	volatile uint64_t t45 = 350LLU;

	t45 = (x285|(x286%(x287*x288)));

	if (t45 != 6893363561653862399LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x290 = INT64_MIN;
	int8_t x291 = -31;
	volatile int64_t x292 = 1005471250974LL;
	int64_t t46 = -4630319620160LL;

	t46 = (x289|(x290%(x291*x292)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = 125446923;
	int8_t x304 = INT8_MIN;
	uint64_t t47 = 300057259732007LLU;

	t47 = (x301|(x302%(x303*x304)));

	if (t47 != 18446744071687514891LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x305 = 529U;
	int16_t x306 = 0;
	uint32_t x307 = 13746U;

	t48 = (x305|(x306%(x307*x308)));

	if (t48 != 529LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x309 = INT64_MAX;
	int32_t x311 = -754205;
	volatile uint32_t x312 = 289049880U;
	static int64_t t49 = -415924LL;

	t49 = (x309|(x310%(x311*x312)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int64_t x318 = INT64_MIN;
	int64_t x319 = 39894LL;
	int32_t x320 = INT32_MIN;

	t50 = (x317|(x318%(x319*x320)));

	if (t50 != -41124311793665LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = 21;
	uint32_t x324 = 19468U;

	t51 = (x321|(x322%(x323*x324)));

	if (t51 != 9223372036854775829LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x325 = 25;
	int16_t x327 = INT16_MAX;
	volatile int32_t t52 = -191;

	t52 = (x325|(x326%(x327*x328)));

	if (t52 != 2518399) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x337 = 1632702604302LLU;
	volatile int16_t x339 = INT16_MAX;
	volatile int16_t x340 = INT16_MIN;

	t53 = (x337|(x338%(x339*x340)));

	if (t53 != 1632702604367LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x342 = INT32_MIN;
	volatile int64_t x343 = -11232756LL;
	uint8_t x344 = 31U;
	int64_t t54 = -11822763194812627LL;

	t54 = (x341|(x342%(x343*x344)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x345 = 59U;
	static volatile int16_t x346 = -1;
	static uint32_t x348 = 131462U;
	uint32_t t55 = 13199588U;

	t55 = (x345|(x346%(x347*x348)));

	if (t55 != 131519U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t56 = 2989277LLU;

	t56 = (x349|(x350%(x351*x352)));

	if (t56 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x353 = -3;
	int16_t x354 = 39;
	int16_t x356 = 184;
	int32_t t57 = 0;

	t57 = (x353|(x354%(x355*x356)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x358 = INT64_MIN;
	uint64_t x359 = 144664LLU;
	volatile uint64_t t58 = 56723122701934379LLU;

	t58 = (x357|(x358%(x359*x360)));

	if (t58 != 99633745005933LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x365 = 40U;
	int8_t x366 = INT8_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile int8_t x368 = -1;
	uint64_t t59 = 32326779144081LLU;

	t59 = (x365|(x366%(x367*x368)));

	if (t59 != 40LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = INT32_MAX;
	int16_t x371 = 20;
	int8_t x372 = -1;

	t60 = (x369|(x370%(x371*x372)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x376 = -187264512;
	uint64_t t61 = 1732929501LLU;

	t61 = (x373|(x374%(x375*x376)));

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x377 = UINT32_MAX;
	static volatile int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -50;
	uint64_t t62 = 60LLU;

	t62 = (x377|(x378%(x379*x380)));

	if (t62 != 4294967295LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x381 = 0U;
	int32_t x383 = INT32_MAX;
	volatile uint64_t x384 = 381LLU;
	volatile uint64_t t63 = 925LLU;

	t63 = (x381|(x382%(x383*x384)));

	if (t63 != 38654705648LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x387 = -1;
	uint16_t x388 = 22464U;

	t64 = (x385|(x386%(x387*x388)));

	if (t64 != 18446744073709537137LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x389 = 124U;
	volatile int8_t x391 = -2;
	static int16_t x392 = INT16_MAX;
	int32_t t65 = 246121863;

	t65 = (x389|(x390%(x391*x392)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x398 = 12U;
	uint8_t x399 = 52U;
	int8_t x400 = 1;
	volatile int32_t t66 = 13;

	t66 = (x397|(x398%(x399*x400)));

	if (t66 != 93) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x401 = -1889;
	int32_t x402 = -1;
	int32_t x403 = 51;
	static uint16_t x404 = 13U;
	int32_t t67 = -7;

	t67 = (x401|(x402%(x403*x404)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x405 = -1;
	int8_t x406 = -1;
	volatile int32_t t68 = 2;

	t68 = (x405|(x406%(x407*x408)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x410 = -37295;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	int32_t t69 = -7;

	t69 = (x409|(x410%(x411*x412)));

	if (t69 != -47) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x417 = 18733U;
	volatile uint32_t x418 = 426U;
	static int32_t x419 = 1;

	t70 = (x417|(x418%(x419*x420)));

	if (t70 != 18863U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x421 = -9685353772LL;
	static int16_t x422 = -1;
	uint16_t x423 = 9U;
	int8_t x424 = INT8_MIN;
	int64_t t71 = -805865LL;

	t71 = (x421|(x422%(x423*x424)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x425 = 70U;
	int8_t x426 = INT8_MAX;
	int32_t x427 = -2651026;
	uint32_t x428 = 25621758U;
	volatile uint32_t t72 = 2134414303U;

	t72 = (x425|(x426%(x427*x428)));

	if (t72 != 127U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x433 = -1LL;
	int32_t x434 = 1387;
	int64_t x435 = 101LL;
	static int64_t t73 = -1882106413890609LL;

	t73 = (x433|(x434%(x435*x436)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x437 = 841U;
	volatile int32_t x438 = -3;
	int8_t x439 = INT8_MIN;
	int8_t x440 = -28;
	int32_t t74 = -30669222;

	t74 = (x437|(x438%(x439*x440)));

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x445 = 23369710LL;
	static int16_t x446 = 11935;
	uint64_t x448 = UINT64_MAX;
	uint64_t t75 = 286937110157560038LLU;

	t75 = (x445|(x446%(x447*x448)));

	if (t75 != 23379967LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x449 = INT64_MAX;
	static uint16_t x450 = 255U;
	uint8_t x451 = UINT8_MAX;
	int64_t t76 = INT64_MAX;

	t76 = (x449|(x450%(x451*x452)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x453 = -1;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = (x453|(x454%(x455*x456)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x462 = 1LL;
	int64_t x463 = INT64_MIN;
	uint64_t x464 = UINT64_MAX;
	uint64_t t78 = 0LLU;

	t78 = (x461|(x462%(x463*x464)));

	if (t78 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x473 = INT32_MIN;
	volatile int16_t x475 = INT16_MIN;
	uint64_t t79 = 13292662LLU;

	t79 = (x473|(x474%(x475*x476)));

	if (t79 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x477 = INT32_MIN;
	volatile uint64_t x478 = UINT64_MAX;
	static volatile int8_t x479 = INT8_MIN;
	volatile uint64_t t80 = 20LLU;

	t80 = (x477|(x478%(x479*x480)));

	if (t80 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x481 = INT32_MAX;
	volatile uint64_t x483 = UINT64_MAX;
	int8_t x484 = INT8_MIN;
	static volatile uint64_t t81 = 29LLU;

	t81 = (x481|(x482%(x483*x484)));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x485 = -1;
	static int32_t x486 = -1;
	volatile uint8_t x487 = UINT8_MAX;
	int8_t x488 = 13;
	volatile int32_t t82 = -59;

	t82 = (x485|(x486%(x487*x488)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x489 = -2497;
	int32_t x490 = INT32_MIN;
	volatile int32_t t83 = 280891;

	t83 = (x489|(x490%(x491*x492)));

	if (t83 != -2369) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x493 = INT32_MAX;
	int64_t x494 = INT64_MIN;
	static uint32_t x496 = 1U;
	static volatile uint64_t t84 = 504665699880LLU;

	t84 = (x493|(x494%(x495*x496)));

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x501 = -7605146;
	static uint32_t x502 = 582418836U;
	int16_t x503 = -1;
	int8_t x504 = INT8_MAX;

	t85 = (x501|(x502%(x503*x504)));

	if (t85 != 4290770422U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x514 = -1260302916LL;
	volatile int32_t x516 = -29;
	volatile int64_t t86 = -376475246LL;

	t86 = (x513|(x514%(x515*x516)));

	if (t86 != -261471LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x517 = 11792U;
	static uint32_t x518 = UINT32_MAX;
	uint8_t x519 = UINT8_MAX;
	uint32_t x520 = 1858085505U;
	volatile uint32_t t87 = 857003U;

	t87 = (x517|(x518%(x519*x520)));

	if (t87 != 198766226U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x529 = INT32_MAX;
	static int16_t x531 = INT16_MIN;
	int8_t x532 = -1;
	int32_t t88 = 146932949;

	t88 = (x529|(x530%(x531*x532)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x537 = INT32_MIN;
	static uint8_t x538 = UINT8_MAX;
	volatile int32_t x540 = INT32_MAX;
	static volatile uint64_t t89 = 122576LLU;

	t89 = (x537|(x538%(x539*x540)));

	if (t89 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x545 = -142;
	int32_t x546 = -1;
	static uint64_t x548 = 12678062LLU;
	uint64_t t90 = UINT64_MAX;

	t90 = (x545|(x546%(x547*x548)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x555 = -1;
	static int8_t x556 = 1;

	t91 = (x553|(x554%(x555*x556)));

	if (t91 != 7LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x557 = 2U;
	uint64_t x558 = 1255LLU;
	uint16_t x559 = 8U;
	volatile uint64_t t92 = 2045682757060776269LLU;

	t92 = (x557|(x558%(x559*x560)));

	if (t92 != 1255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x561 = -1;
	static int64_t x562 = INT64_MIN;
	static int8_t x563 = INT8_MAX;
	uint64_t x564 = 42378944032806840LLU;
	uint64_t t93 = UINT64_MAX;

	t93 = (x561|(x562%(x563*x564)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x565 = -257;
	static volatile int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MIN;
	static int16_t x568 = -13;

	t94 = (x565|(x566%(x567*x568)));

	if (t94 != -257) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x569 = -1LL;
	static int16_t x570 = INT16_MAX;
	int8_t x572 = INT8_MIN;
	static int64_t t95 = -14786800002748LL;

	t95 = (x569|(x570%(x571*x572)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x581 = INT32_MIN;
	static volatile int64_t x582 = INT64_MAX;
	int8_t x583 = -1;
	int16_t x584 = 914;
	int64_t t96 = -938600LL;

	t96 = (x581|(x582%(x583*x584)));

	if (t96 != -2147483313LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x593 = 0;
	int8_t x595 = INT8_MIN;
	volatile uint32_t x596 = 129880155U;
	uint32_t t97 = 1573U;

	t97 = (x593|(x594%(x595*x596)));

	if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x609 = 27LL;
	int32_t x610 = -1;
	int8_t x611 = INT8_MIN;
	static int64_t t98 = 103LL;

	t98 = (x609|(x610%(x611*x612)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x617 = 51U;
	uint32_t x618 = 1653045U;
	volatile uint8_t x619 = UINT8_MAX;
	static int16_t x620 = -429;
	static uint32_t t99 = 880036U;

	t99 = (x617|(x618%(x619*x620)));

	if (t99 != 1653047U) { NG(); } else { ; }
	
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

