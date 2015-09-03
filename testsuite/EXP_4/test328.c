#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MAX;
int8_t x10 = INT8_MIN;
static volatile int64_t x25 = 0LL;
volatile int8_t x26 = INT8_MIN;
int16_t x28 = -1;
int64_t t4 = 335968714853368LL;
int16_t x35 = -1;
int64_t x57 = 0LL;
int64_t t8 = -554538127537038LL;
uint16_t x91 = 0U;
static int64_t t11 = -454922733112LL;
int8_t x93 = 4;
static volatile int64_t x96 = INT64_MIN;
volatile uint64_t t13 = 1LLU;
volatile uint32_t x120 = 44201U;
static volatile int16_t x123 = INT16_MIN;
uint64_t x129 = 5011469LLU;
uint32_t x134 = 3289U;
volatile int8_t x139 = INT8_MIN;
int32_t x140 = -1;
volatile uint64_t x145 = UINT64_MAX;
int16_t x151 = -1;
int32_t t24 = -11;
static int16_t x161 = 0;
static uint16_t x164 = 80U;
static int64_t x171 = INT64_MAX;
int8_t x177 = -1;
static uint32_t x179 = UINT32_MAX;
volatile uint32_t t29 = 14601U;
static int64_t x193 = -256953LL;
int16_t x198 = INT16_MAX;
uint32_t x199 = UINT32_MAX;
static volatile uint32_t t34 = 457634U;
uint16_t x239 = UINT16_MAX;
int32_t x241 = -1;
int8_t x244 = INT8_MIN;
uint8_t x267 = 2U;
int8_t x272 = INT8_MIN;
int64_t t43 = -123839458735146019LL;
volatile int32_t x276 = INT32_MIN;
int64_t t44 = 29190181LL;
static volatile uint64_t x278 = UINT64_MAX;
int64_t x281 = -1LL;
volatile int8_t x284 = INT8_MIN;
static int16_t x287 = -1;
static int8_t x293 = -1;
uint16_t x295 = 6U;
int8_t x311 = INT8_MIN;
volatile int8_t x315 = 38;
volatile int32_t x322 = -1;
int8_t x323 = INT8_MIN;
int8_t x331 = INT8_MIN;
int16_t x332 = INT16_MIN;
volatile uint64_t x334 = 1524510848263138426LLU;
uint32_t x346 = 1292U;
uint64_t t56 = 2454LLU;
int16_t x352 = 14;
int16_t x361 = INT16_MIN;
volatile uint64_t t58 = 11113LLU;
volatile int64_t x372 = -1LL;
int32_t x373 = -1;
uint16_t x374 = 2914U;
int64_t x375 = INT64_MIN;
int8_t x376 = INT8_MIN;
static uint8_t x384 = 104U;
uint32_t t61 = 22377U;
volatile int8_t x385 = -1;
volatile int16_t x387 = INT16_MIN;
uint8_t x388 = 11U;
volatile int64_t t64 = 74542875909461842LL;
int32_t x404 = -28;
int64_t x410 = 1038567951109294LL;
volatile int8_t x417 = INT8_MIN;
int64_t x438 = INT64_MIN;
volatile uint64_t t72 = 3LLU;
uint64_t t75 = 16LLU;
int32_t t77 = -373402997;
static uint16_t x505 = UINT16_MAX;
uint64_t t80 = 44459LLU;
uint64_t x521 = 8131961452791LLU;
int32_t x528 = INT32_MIN;
volatile uint32_t t83 = 27U;
static uint16_t x536 = 716U;
uint8_t x537 = UINT8_MAX;
int32_t x539 = -1;
int32_t t86 = 148813;
static volatile int32_t t87 = 25433;
uint32_t x549 = 13U;
uint64_t t88 = 5265LLU;
static int8_t x557 = -1;
static volatile uint64_t t90 = 667LLU;
volatile uint64_t t92 = 7876785274LLU;
int16_t x581 = -1;
static int64_t x582 = 422311920832298LL;
volatile int64_t x583 = INT64_MAX;
static uint8_t x585 = UINT8_MAX;
uint16_t x587 = 121U;
static uint64_t x588 = 275899459207LLU;
int16_t x599 = -1;
uint64_t x601 = UINT64_MAX;
int64_t x611 = INT64_MIN;
volatile uint64_t t97 = 4639LLU;
int32_t x616 = INT32_MIN;
volatile uint32_t t98 = 3U;


void f0(void) {
	int64_t x2 = -60132612113586802LL;
	int16_t x3 = -30;
	uint64_t x4 = 638570790LLU;
	uint64_t t0 = 644LLU;

	t0 = (x1*(x2^(x3-x4)));

	if (t0 != 15010450226800194766LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint32_t x6 = UINT32_MAX;
	int16_t x7 = -1;
	int32_t x8 = INT32_MAX;
	uint32_t t1 = 10184031U;

	t1 = (x5*(x6^(x7-x8)));

	if (t1 != 2147418113U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int16_t x11 = 1;
	uint32_t x12 = 6565505U;
	uint32_t t2 = 878U;

	t2 = (x9*(x10^(x11-x12)));

	if (t2 != 3909091328U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = UINT8_MAX;
	static uint8_t x18 = 7U;
	uint8_t x19 = 124U;
	int8_t x20 = INT8_MIN;
	int32_t t3 = -685695187;

	t3 = (x17*(x18^(x19-x20)));

	if (t3 != 64005) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x27 = INT8_MIN;

	t4 = (x25*(x26^(x27-x28)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 633370262000LLU;
	int64_t x30 = 2345857096089LL;
	int16_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t5 = 277536831LLU;

	t5 = (x29*(x30^(x31-x32)));

	if (t5 != 15312143234347700336LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x33 = -297055770LL;
	uint16_t x34 = UINT16_MAX;
	static uint32_t x36 = 64607U;
	static volatile int64_t t6 = 1818LL;

	t6 = (x33*(x34^(x35-x36)));

	if (t6 != -1275844541273287590LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x53 = INT8_MIN;
	uint32_t x54 = 70U;
	volatile uint16_t x55 = 0U;
	int64_t x56 = -1LL;
	int64_t t7 = -5765500LL;

	t7 = (x53*(x54^(x55-x56)));

	if (t7 != -9088LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x58 = -1;
	volatile int64_t x59 = -1LL;
	static uint32_t x60 = 7846279U;

	t8 = (x57*(x58^(x59-x60)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x69 = 0U;
	static uint64_t x70 = 14294585846360LLU;
	int8_t x71 = 1;
	uint32_t x72 = 26U;
	volatile uint64_t t9 = 1879644867104LLU;

	t9 = (x69*(x70^(x71-x72)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x81 = 0;
	uint8_t x82 = 1U;
	int16_t x83 = -4719;
	volatile uint32_t x84 = 22U;
	volatile uint32_t t10 = 91315457U;

	t10 = (x81*(x82^(x83-x84)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x89 = INT8_MIN;
	int64_t x90 = 165063LL;
	int8_t x92 = 1;

	t11 = (x89*(x90^(x91-x92)));

	if (t11 != 21128192LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x94 = 245855895806975LLU;
	uint64_t x95 = 5143694846559LLU;
	uint64_t t12 = 4199753101523198LLU;

	t12 = (x93*(x94^(x95-x96)));

	if (t12 != 964122803775104LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = INT8_MIN;
	static volatile uint64_t x98 = 2248900LLU;
	uint8_t x99 = 14U;
	uint64_t x100 = UINT64_MAX;

	t13 = (x97*(x98^(x99-x100)));

	if (t13 != 18446744073421691520LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 15045U;
	uint16_t x112 = 14801U;
	static volatile uint32_t t14 = 65U;

	t14 = (x109*(x110^(x111-x112)));

	if (t14 != 4294902005U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x117 = 82936118U;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	uint32_t t15 = 129990U;

	t15 = (x117*(x118^(x119-x120)));

	if (t15 != 1065096048U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x121 = 66U;
	volatile uint16_t x122 = UINT16_MAX;
	int16_t x124 = -1;
	int32_t t16 = -1422;

	t16 = (x121*(x122^(x123-x124)));

	if (t16 != -2162820) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x125 = INT64_MAX;
	static uint16_t x126 = 172U;
	uint32_t x127 = 1975U;
	uint64_t x128 = UINT64_MAX;
	uint64_t t17 = 192554892754380502LLU;

	t17 = (x125*(x126^(x127-x128)));

	if (t17 != 18446744073709549804LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x130 = INT16_MAX;
	int64_t x131 = -4483686465LL;
	volatile int8_t x132 = INT8_MAX;
	static volatile uint64_t t18 = 27716LLU;

	t18 = (x129*(x130^(x131-x132)));

	if (t18 != 18424274137159512499LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = -7LL;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	uint64_t t19 = 17601424506448633LLU;

	t19 = (x133*(x134^(x135-x136)));

	if (t19 != 18446744073709528593LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = 3;
	int64_t x138 = 17768967566343213LL;
	int64_t t20 = 14174812LL;

	t20 = (x137*(x138^(x139-x140)));

	if (t20 != -53306902699029756LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x141 = 6464968467LLU;
	static int64_t x142 = -1333116992LL;
	uint64_t x143 = 116323675LLU;
	volatile int32_t x144 = -3;
	uint64_t t21 = 4LLU;

	t21 = (x141*(x142^(x143-x144)));

	if (t21 != 10463099471069723578LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x146 = UINT64_MAX;
	static int64_t x147 = INT64_MAX;
	static uint8_t x148 = 14U;
	uint64_t t22 = 3397219987154748463LLU;

	t22 = (x145*(x146^(x147-x148)));

	if (t22 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x149 = INT16_MIN;
	uint8_t x150 = 28U;
	volatile int8_t x152 = 0;
	volatile int32_t t23 = -661;

	t23 = (x149*(x150^(x151-x152)));

	if (t23 != 950272) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	uint16_t x155 = UINT16_MAX;
	uint16_t x156 = 13U;

	t24 = (x153*(x154^(x155-x156)));

	if (t24 != 8386944) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x162 = INT8_MIN;
	volatile int8_t x163 = -2;
	int32_t t25 = -148775;

	t25 = (x161*(x162^(x163-x164)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x165 = 5198U;
	static int64_t x166 = -181745823LL;
	volatile uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MAX;
	volatile int64_t t26 = 116408LL;

	t26 = (x165*(x166^(x167-x168)));

	if (t26 != -944904410994LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	volatile uint64_t x172 = 10903765109661LLU;
	volatile uint64_t t27 = 136223335LLU;

	t27 = (x169*(x170^(x171-x172)));

	if (t27 != 9223382940619846755LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x178 = UINT16_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t28 = 23842090U;

	t28 = (x177*(x178^(x179-x180)));

	if (t28 != 4294901761U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x181 = 45U;
	volatile int32_t x182 = 206;
	volatile uint32_t x183 = 181069U;
	static uint8_t x184 = 118U;

	t29 = (x181*(x182^(x183-x184)));

	if (t29 != 8134245U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = 10;
	uint64_t x187 = 31LLU;
	volatile int8_t x188 = INT8_MIN;
	static volatile uint64_t t30 = 52066731428677400LLU;

	t30 = (x185*(x186^(x187-x188)));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;
	static int64_t x196 = -1LL;
	int64_t t31 = 571799710987LL;

	t31 = (x193*(x194^(x195-x196)));

	if (t31 != 551802365804544LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x197 = 2079541197982708LLU;
	int64_t x200 = INT64_MAX;
	volatile uint64_t t32 = 10261059233LLU;

	t32 = (x197*(x198^(x199-x200)));

	if (t32 != 11243761840793269260LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x201 = 11U;
	volatile int8_t x202 = INT8_MIN;
	static volatile uint16_t x203 = UINT16_MAX;
	static int8_t x204 = INT8_MAX;
	int32_t t33 = 1;

	t33 = (x201*(x202^(x203-x204)));

	if (t33 != -720896) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x205 = UINT8_MAX;
	volatile uint32_t x206 = 1611024825U;
	volatile int8_t x207 = INT8_MAX;
	volatile int8_t x208 = 0;

	t34 = (x205*(x206^(x207-x208)));

	if (t34 != 2789440570U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x209 = 524776;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -5780LL;
	volatile int8_t x212 = 6;
	static int64_t t35 = 15669289864072LL;

	t35 = (x209*(x210^(x211-x212)));

	if (t35 != 1126944842508912LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x229 = -3;
	int32_t x230 = -6;
	static int8_t x231 = INT8_MIN;
	int64_t x232 = -1LL;
	volatile int64_t t36 = -2689647LL;

	t36 = (x229*(x230^(x231-x232)));

	if (t36 != -369LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x233 = INT64_MAX;
	volatile int64_t x234 = -1LL;
	uint64_t x235 = 19551316140LLU;
	uint16_t x236 = 333U;
	static volatile uint64_t t37 = 1075420838609107LLU;

	t37 = (x233*(x234^(x235-x236)));

	if (t37 != 19551315808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x237 = INT16_MIN;
	static int32_t x238 = INT32_MIN;
	int64_t x240 = -1LL;
	static int64_t t38 = -1LL;

	t38 = (x237*(x238^(x239-x240)));

	if (t38 != 70366596694016LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x242 = 1297;
	uint64_t x243 = 99539797706LLU;
	static uint64_t t39 = 4188758970LLU;

	t39 = (x241*(x242^(x243-x244)));

	if (t39 != 18446743974169755045LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x253 = -1LL;
	volatile int8_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	volatile int8_t x256 = -1;
	int64_t t40 = -2306LL;

	t40 = (x253*(x254^(x255-x256)));

	if (t40 != 65537LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x257 = INT8_MAX;
	int8_t x258 = 32;
	static volatile uint32_t x259 = 98241396U;
	uint32_t x260 = 222180U;
	uint32_t t41 = 185945U;

	t41 = (x257*(x258^(x259-x260)));

	if (t41 != 3858509904U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x265 = 6U;
	uint16_t x266 = UINT16_MAX;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t42 = -139493;

	t42 = (x265*(x266^(x267-x268)));

	if (t42 != -391704) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x269 = UINT32_MAX;
	static int64_t x270 = -1LL;
	volatile int32_t x271 = -2931638;

	t43 = (x269*(x270^(x271-x272)));

	if (t43 != 12590735279998155LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x273 = -1;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = 1U;

	t44 = (x273*(x274^(x275-x276)));

	if (t44 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x279 = 533340097464132LL;
	int16_t x280 = INT16_MAX;
	uint64_t t45 = 221022208376LLU;

	t45 = (x277*(x278^(x279-x280)));

	if (t45 != 18310742348864553286LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x282 = -1;
	volatile int16_t x283 = -79;
	volatile int64_t t46 = -61740725LL;

	t46 = (x281*(x282^(x283-x284)));

	if (t46 != 50LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x285 = 1U;
	uint8_t x286 = UINT8_MAX;
	int16_t x288 = 43;
	volatile int32_t t47 = -1;

	t47 = (x285*(x286^(x287-x288)));

	if (t47 != -213) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x294 = -33;
	int32_t x296 = -113;
	int32_t t48 = 5648;

	t48 = (x293*(x294^(x295-x296)));

	if (t48 != 88) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x309 = 8LL;
	volatile int16_t x310 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	int64_t t49 = -1195173172LL;

	t49 = (x309*(x310^(x311-x312)));

	if (t49 != 17179608056LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x313 = -73961LL;
	uint16_t x314 = 6859U;
	int16_t x316 = -1;
	int64_t t50 = -7061963124LL;

	t50 = (x313*(x314^(x315-x316)));

	if (t50 != -509739212LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x321 = -1LL;
	uint8_t x324 = 14U;
	volatile int64_t t51 = 3LL;

	t51 = (x321*(x322^(x323-x324)));

	if (t51 != -141LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x325 = 279240LLU;
	static volatile uint32_t x326 = 1037759939U;
	volatile int8_t x327 = -1;
	volatile int64_t x328 = INT64_MIN;
	static volatile uint64_t t52 = 186LLU;

	t52 = (x325*(x326^(x327-x328)));

	if (t52 != 18446454289623906016LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	volatile uint64_t t53 = 22815562LLU;

	t53 = (x329*(x330^(x331-x332)));

	if (t53 != 32768LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x333 = INT8_MIN;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;
	uint64_t t54 = 2030472556LLU;

	t54 = (x333*(x334^(x335-x336)));

	if (t54 != 7776796233123316480LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x337 = 45LLU;
	static int8_t x338 = -26;
	int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	uint64_t t55 = 240LLU;

	t55 = (x337*(x338^(x339-x340)));

	if (t55 != 9223372036854768878LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x345 = 474181622LLU;
	static int8_t x347 = INT8_MAX;
	static uint32_t x348 = UINT32_MAX;

	t56 = (x345*(x346^(x347-x348)));

	if (t56 != 673337903240LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x349 = INT16_MIN;
	static int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	volatile uint64_t t57 = 921492LLU;

	t57 = (x349*(x350^(x351-x352)));

	if (t57 != 491520LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x362 = UINT64_MAX;
	static uint16_t x363 = 86U;
	static int32_t x364 = INT32_MAX;

	t58 = (x361*(x362^(x363-x364)));

	if (t58 != 18446673704968257536LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x369 = -20;
	int32_t x370 = INT32_MIN;
	int8_t x371 = -1;
	int64_t t59 = 0LL;

	t59 = (x369*(x370^(x371-x372)));

	if (t59 != 42949672960LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t t60 = -168929LL;

	t60 = (x373*(x374^(x375-x376)));

	if (t60 != 9223372036854772766LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	static uint32_t x383 = 187158U;

	t61 = (x381*(x382^(x383-x384)));

	if (t61 != 22194432U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x386 = 8305U;
	static int32_t t62 = 69;

	t62 = (x385*(x386^(x387-x388)));

	if (t62 != 41084) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x389 = -1LL;
	static int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	volatile int64_t x392 = 1834259364259LL;
	volatile int64_t t63 = 27754870LL;

	t63 = (x389*(x390^(x391-x392)));

	if (t63 != -9223370200447927901LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x393 = -1;
	int32_t x394 = -1;
	int64_t x395 = INT64_MAX;
	int64_t x396 = 38231976508LL;

	t64 = (x393*(x394^(x395-x396)));

	if (t64 != 9223371998622799300LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x401 = -8LL;
	uint64_t x402 = 4237697283421313LLU;
	static int64_t x403 = INT64_MIN;
	uint64_t t65 = 197671562LLU;

	t65 = (x401*(x402^(x403-x404)));

	if (t65 != 18412842495442180888LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x409 = -1;
	volatile uint8_t x411 = UINT8_MAX;
	static int32_t x412 = INT32_MAX;
	int64_t t66 = -17740274028LL;

	t66 = (x409*(x410^(x411-x412)));

	if (t66 != 1038566280065618LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	uint64_t x415 = 178893948119LLU;
	int16_t x416 = -1;
	uint64_t t67 = 0LLU;

	t67 = (x413*(x414^(x415-x416)));

	if (t67 != 18440882074751369216LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x418 = 3773;
	int64_t x419 = 3128326001LL;
	int8_t x420 = INT8_MIN;
	int64_t t68 = 23850871LL;

	t68 = (x417*(x418^(x419-x420)));

	if (t68 != -400425788928LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x433 = 34;
	uint64_t x434 = UINT64_MAX;
	static int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MIN;
	uint64_t t69 = 8381259750166315LLU;

	t69 = (x433*(x434^(x435-x436)));

	if (t69 != 1114078LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x437 = 1U;
	uint16_t x439 = 9U;
	int8_t x440 = 2;
	int64_t t70 = 45956LL;

	t70 = (x437*(x438^(x439-x440)));

	if (t70 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x449 = 2903798185278997021LL;
	volatile int8_t x450 = -1;
	int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	volatile int64_t t71 = -1LL;

	t71 = (x449*(x450^(x451-x452)));

	if (t71 != -2903798185278997021LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x453 = -1;
	static volatile int64_t x454 = 1960962660LL;
	uint16_t x455 = 14U;
	uint64_t x456 = UINT64_MAX;

	t72 = (x453*(x454^(x455-x456)));

	if (t72 != 18446744071748588949LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = UINT16_MAX;
	static int32_t x467 = -18292625;
	int32_t x468 = INT32_MIN;
	static volatile uint32_t t73 = 84464U;

	t73 = (x465*(x466^(x467-x468)));

	if (t73 != 2165825648U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x469 = 2618U;
	volatile uint32_t x470 = UINT32_MAX;
	volatile int32_t x471 = -1;
	uint32_t x472 = 5U;
	volatile uint32_t t74 = 19U;

	t74 = (x469*(x470^(x471-x472)));

	if (t74 != 13090U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x473 = UINT32_MAX;
	int64_t x474 = 280LL;
	static uint64_t x475 = UINT64_MAX;
	volatile uint32_t x476 = 89U;

	t75 = (x473*(x474^(x475-x476)));

	if (t75 != 18446742690730082626LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x489 = -1297772999LL;
	static int16_t x490 = 14;
	uint8_t x491 = UINT8_MAX;
	int8_t x492 = 2;
	int64_t t76 = -828095259LL;

	t76 = (x489*(x490^(x491-x492)));

	if (t76 != -315358838757LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x497 = INT8_MAX;
	static uint16_t x498 = 7U;
	volatile int16_t x499 = INT16_MIN;
	int16_t x500 = -1;

	t77 = (x497*(x498^(x499-x500)));

	if (t77 != -4160774) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x501 = -14;
	static uint32_t x502 = 2U;
	static int32_t x503 = -1;
	static int32_t x504 = 1;
	uint32_t t78 = 65388U;

	t78 = (x501*(x502^(x503-x504)));

	if (t78 != 56U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x506 = 3682571700289LLU;
	volatile uint16_t x507 = 17U;
	volatile int8_t x508 = INT8_MIN;
	uint64_t t79 = 1974LLU;

	t79 = (x505*(x506^(x507-x508)));

	if (t79 != 241337336387811120LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x513 = 0;
	volatile uint16_t x514 = 472U;
	int32_t x515 = INT32_MIN;
	uint64_t x516 = UINT64_MAX;

	t80 = (x513*(x514^(x515-x516)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x517 = 32U;
	uint32_t x518 = UINT32_MAX;
	uint64_t x519 = UINT64_MAX;
	uint32_t x520 = 427U;
	static uint64_t t81 = 97835694248580LLU;

	t81 = (x517*(x518^(x519-x520)));

	if (t81 != 18446743936270611808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x522 = UINT16_MAX;
	volatile int8_t x523 = 0;
	int16_t x524 = 45;
	volatile uint64_t t82 = 2056550212972LLU;

	t82 = (x521*(x522^(x523-x524)));

	if (t82 != 17914165654243363444LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x525 = 16014;
	uint32_t x526 = 233258U;
	int16_t x527 = -1;

	t83 = (x525*(x526^(x527-x528)));

	if (t83 != 559557670U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x529 = INT64_MAX;
	volatile uint8_t x530 = 15U;
	volatile uint64_t x531 = 109623928133759LLU;
	static int16_t x532 = INT16_MAX;
	uint64_t t84 = 53803595789LLU;

	t84 = (x529*(x530^(x531-x532)));

	if (t84 != 9223262412926674801LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x533 = 0U;
	int64_t x534 = -56872770LL;
	uint8_t x535 = 103U;
	volatile int64_t t85 = 49LL;

	t85 = (x533*(x534^(x535-x536)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x538 = 0U;
	int8_t x540 = -7;

	t86 = (x537*(x538^(x539-x540)));

	if (t86 != 1530) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x545 = -1;
	int8_t x546 = 0;
	int8_t x547 = -1;
	static uint16_t x548 = 8U;

	t87 = (x545*(x546^(x547-x548)));

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x550 = -1;
	static uint64_t x551 = 940423962768830931LLU;
	volatile uint64_t x552 = 655373766729510LLU;

	t88 = (x549*(x550^(x551-x552)));

	if (t88 != 6229752416682233130LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x553 = UINT64_MAX;
	uint64_t x554 = UINT64_MAX;
	int8_t x555 = INT8_MIN;
	static uint8_t x556 = UINT8_MAX;
	uint64_t t89 = 185428863275590LLU;

	t89 = (x553*(x554^(x555-x556)));

	if (t89 != 18446744073709551234LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x558 = UINT8_MAX;
	uint32_t x559 = 437305U;
	uint64_t x560 = 166039590055587969LLU;

	t90 = (x557*(x558^(x559-x560)));

	if (t90 != 166039590055150777LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x569 = -1;
	int64_t x570 = 29187229369916884LL;
	int64_t x571 = 14LL;
	int8_t x572 = -1;
	volatile int64_t t91 = 69339909918818443LL;

	t91 = (x569*(x570^(x571-x572)));

	if (t91 != -29187229369916891LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x577 = UINT64_MAX;
	uint16_t x578 = UINT16_MAX;
	static int64_t x579 = INT64_MIN;
	uint64_t x580 = 1LLU;

	t92 = (x577*(x578^(x579-x580)));

	if (t92 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x584 = UINT32_MAX;
	volatile int64_t t93 = -6674483283LL;

	t93 = (x581*(x582^(x583-x584)));

	if (t93 != -9222949721982013226LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x586 = -11;
	uint64_t t94 = 2169602845205193LLU;

	t94 = (x585*(x586^(x587-x588)));

	if (t94 != 70354362065145LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x597 = 18;
	static int16_t x598 = INT16_MIN;
	int32_t x600 = 77971;
	int32_t t95 = -72265591;

	t95 = (x597*(x598^(x599-x600)));

	if (t95 != 1545624) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x602 = -1;
	int64_t x603 = -13LL;
	int64_t x604 = -1LL;
	volatile uint64_t t96 = 530642907921LLU;

	t96 = (x601*(x602^(x603-x604)));

	if (t96 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x609 = INT16_MIN;
	volatile uint16_t x610 = 743U;
	uint64_t x612 = 159LLU;

	t97 = (x609*(x610^(x611-x612)));

	if (t97 != 20774912LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x613 = -1;
	int8_t x614 = -1;
	uint32_t x615 = 10691U;

	t98 = (x613*(x614^(x615-x616)));

	if (t98 != 2147494340U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x621 = 1U;
	volatile uint32_t x622 = UINT32_MAX;
	static int32_t x623 = -1;
	int64_t x624 = -1LL;
	static int64_t t99 = -1LL;

	t99 = (x621*(x622^(x623-x624)));

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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

