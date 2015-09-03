#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 9977LLU;
volatile int32_t t1 = 414624;
uint32_t x15 = UINT32_MAX;
static int64_t t4 = 332709500LL;
volatile int8_t x26 = INT8_MIN;
static uint32_t x43 = 19227085U;
int16_t x52 = INT16_MIN;
volatile int64_t x77 = INT64_MIN;
static int8_t x78 = -1;
uint32_t x79 = 813177847U;
int8_t x80 = INT8_MAX;
static int32_t x94 = -1;
static uint64_t t19 = 12563355531LLU;
static int8_t x127 = 11;
static volatile uint64_t x145 = UINT64_MAX;
volatile uint64_t x146 = 1076020064320LLU;
uint64_t x148 = 65LLU;
volatile uint16_t x166 = 6501U;
static int64_t x187 = -1LL;
volatile uint64_t t30 = 4383074767154454323LLU;
static int8_t x196 = 49;
volatile int16_t x205 = INT16_MIN;
int32_t x208 = -1;
volatile int64_t t33 = 3218799113857944984LL;
int16_t x210 = -641;
uint64_t t35 = 82686516700LLU;
static int32_t x229 = 3657;
int8_t x230 = INT8_MIN;
int64_t x231 = -1LL;
int16_t x269 = INT16_MIN;
uint16_t x279 = 2U;
uint16_t x287 = UINT16_MAX;
int16_t x293 = INT16_MIN;
int64_t x298 = INT64_MIN;
int16_t x303 = -21;
volatile uint64_t x305 = 483203850LLU;
uint16_t x321 = 6515U;
volatile int32_t x324 = -1;
uint64_t x331 = 37586LLU;
int32_t x336 = INT32_MIN;
static volatile uint32_t x369 = UINT32_MAX;
int16_t x372 = INT16_MAX;
uint64_t t58 = 8123LLU;
volatile uint32_t x383 = UINT32_MAX;
uint64_t x388 = UINT64_MAX;
int64_t x390 = INT64_MIN;
static volatile int16_t x396 = INT16_MAX;
int8_t x405 = INT8_MAX;
int64_t x408 = -1LL;
uint32_t x411 = UINT32_MAX;
static volatile int64_t x412 = -1LL;
volatile int64_t t65 = 361362444569LL;
int8_t x416 = INT8_MIN;
static volatile uint64_t t66 = 418803164043213935LLU;
static uint16_t x429 = 1U;
static uint64_t t67 = 23275956LLU;
uint64_t x438 = 103LLU;
static uint64_t t69 = 1370LLU;
int8_t x443 = 24;
int32_t t70 = 4;
volatile int32_t x445 = 42;
int16_t x448 = -14;
uint32_t x460 = 2021U;
int8_t x463 = 48;
static int64_t x464 = 66014003321319LL;
int16_t x470 = INT16_MIN;
uint64_t x483 = 50055LLU;
uint32_t x484 = 182U;
int64_t x489 = INT64_MIN;
static int64_t t79 = -7406059LL;
int8_t x496 = -1;
int32_t x508 = INT32_MIN;
uint32_t t82 = 8296013U;
int64_t x514 = INT64_MAX;
volatile uint64_t x538 = 1570LLU;
volatile int32_t x540 = 62954829;
int64_t x541 = -117836237515LL;
int16_t x548 = 3;
volatile int64_t t88 = -610000940827LL;
volatile int8_t x553 = 4;
int64_t x556 = -23353844824LL;
volatile int64_t t89 = -6953434LL;
int8_t x580 = INT8_MIN;
static uint8_t x583 = 38U;
int8_t x588 = 19;
uint16_t x597 = UINT16_MAX;
int64_t x600 = -1LL;
uint8_t x616 = 6U;
int16_t x629 = INT16_MIN;
static volatile uint64_t t98 = 190052633898LLU;


void f0(void) {
	volatile uint32_t x1 = 1U;
	uint16_t x2 = 1U;
	static uint8_t x3 = 17U;
	static volatile uint64_t t0 = 138676LLU;

	t0 = (x1/(x2%(x3*x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 15644U;
	int32_t x6 = INT32_MIN;
	int16_t x7 = 3;
	uint16_t x8 = 1965U;

	t1 = (x5/(x6%(x7*x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 101377LL;
	uint8_t x10 = 33U;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = -2;
	volatile int64_t t2 = 18716327LL;

	t2 = (x9/(x10%(x11*x12)));

	if (t2 != 3072LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1438265;
	uint8_t x14 = 60U;
	uint8_t x16 = 5U;
	volatile uint32_t t3 = 6909659U;

	t3 = (x13/(x14%(x15*x16)));

	if (t3 != 71558817U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static int32_t x18 = INT32_MAX;
	volatile uint32_t x19 = 100647959U;
	volatile uint8_t x20 = 27U;

	t4 = (x17/(x18%(x19*x20)));

	if (t4 != -4294967298LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 2059069911554516174LL;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = 828LLU;
	int16_t x24 = INT16_MIN;
	uint64_t t5 = 273957016278350LLU;

	t5 = (x21/(x22%(x23*x24)));

	if (t5 != 75982862020LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 8768U;
	uint16_t x27 = 3U;
	volatile int32_t x28 = 1338664;
	volatile int32_t t6 = -6;

	t6 = (x25/(x26%(x27*x28)));

	if (t6 != -68) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x29 = 45410774U;
	int8_t x30 = INT8_MAX;
	uint32_t x31 = 16034U;
	volatile int8_t x32 = 26;
	uint32_t t7 = 276880U;

	t7 = (x29/(x30%(x31*x32)));

	if (t7 != 357565U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = 14099U;
	uint8_t x44 = UINT8_MAX;
	int64_t t8 = 32274LL;

	t8 = (x41/(x42%(x43*x44)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 20U;
	uint32_t x50 = 1U;
	volatile int64_t x51 = -484LL;
	int64_t t9 = 7518805829253633LL;

	t9 = (x49/(x50%(x51*x52)));

	if (t9 != 20LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = INT64_MIN;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	static volatile int64_t t10 = -1807992282598424548LL;

	t10 = (x53/(x54%(x55*x56)));

	if (t10 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x57 = UINT32_MAX;
	static volatile uint8_t x58 = 86U;
	volatile int64_t x59 = 166LL;
	uint64_t x60 = 367891429913LLU;
	volatile uint64_t t11 = 1323473LLU;

	t11 = (x57/(x58%(x59*x60)));

	if (t11 != 49941480LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -416430600;
	int8_t x62 = 1;
	int8_t x63 = INT8_MIN;
	static volatile uint32_t x64 = UINT32_MAX;
	static volatile uint32_t t12 = 25462U;

	t12 = (x61/(x62%(x63*x64)));

	if (t12 != 3878536696U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = 1U;
	int32_t x66 = INT32_MIN;
	volatile int8_t x67 = -1;
	int32_t x68 = -204999;
	volatile int32_t t13 = 102672;

	t13 = (x65/(x66%(x67*x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int64_t x70 = 295023LL;
	int16_t x71 = INT16_MIN;
	static uint8_t x72 = 99U;
	volatile int64_t t14 = -122LL;

	t14 = (x69/(x70%(x71*x72)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 4930123225182728LLU;
	int32_t x74 = -1;
	int8_t x75 = INT8_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile uint64_t t15 = 112644966385745753LLU;

	t15 = (x73/(x74%(x75*x76)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t t16 = -32298LL;

	t16 = (x77/(x78%(x79*x80)));

	if (t16 != -490733713177LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = -1;
	uint8_t x83 = 80U;
	int8_t x84 = INT8_MIN;
	int32_t t17 = 1243;

	t17 = (x81/(x82%(x83*x84)));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x85 = UINT32_MAX;
	static uint32_t x86 = UINT32_MAX;
	volatile uint64_t x87 = 229557LLU;
	uint16_t x88 = UINT16_MAX;
	volatile uint64_t t18 = 98760086309LLU;

	t18 = (x85/(x86%(x87*x88)));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = INT32_MIN;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = -6;

	t19 = (x93/(x94%(x95*x96)));

	if (t19 != 6148914690520689322LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 866183195019514LLU;
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	volatile uint8_t x112 = 46U;
	volatile uint64_t t20 = 490215726LLU;

	t20 = (x109/(x110%(x111*x112)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x117 = -1;
	int64_t x118 = 6104596LL;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = UINT32_MAX;
	int64_t t21 = 134108903778260441LL;

	t21 = (x117/(x118%(x119*x120)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x121 = INT64_MIN;
	static int8_t x122 = INT8_MIN;
	volatile int8_t x123 = -34;
	uint8_t x124 = 47U;
	int64_t t22 = -529423LL;

	t22 = (x121/(x122%(x123*x124)));

	if (t22 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	static volatile uint8_t x126 = 13U;
	int16_t x128 = 81;
	volatile int32_t t23 = 29;

	t23 = (x125/(x126%(x127*x128)));

	if (t23 != -9) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = 6595683356LL;
	int8_t x140 = 1;
	volatile int64_t t24 = -1323798293715291366LL;

	t24 = (x137/(x138%(x139*x140)));

	if (t24 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x147 = -1;
	uint64_t t25 = 1LLU;

	t25 = (x145/(x146%(x147*x148)));

	if (t25 != 17143494LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x149 = INT32_MIN;
	volatile int16_t x150 = INT16_MIN;
	int32_t x151 = -1;
	int32_t x152 = INT32_MAX;
	int32_t t26 = 38848029;

	t26 = (x149/(x150%(x151*x152)));

	if (t26 != 65536) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MIN;
	static int32_t x167 = INT32_MAX;
	volatile uint32_t x168 = 28949382U;
	static uint32_t t27 = 0U;

	t27 = (x165/(x166%(x167*x168)));

	if (t27 != 330331U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x173 = UINT8_MAX;
	static int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = UINT16_MAX;
	int32_t t28 = 15;

	t28 = (x173/(x174%(x175*x176)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x177 = 1043796LL;
	uint8_t x178 = UINT8_MAX;
	static uint8_t x179 = 4U;
	uint64_t x180 = 102367615LLU;
	uint64_t t29 = 825740LLU;

	t29 = (x177/(x178%(x179*x180)));

	if (t29 != 4093LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = INT16_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	uint64_t x188 = 777813235LLU;

	t30 = (x185/(x186%(x187*x188)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x193 = -1;
	int8_t x194 = -1;
	uint64_t x195 = UINT64_MAX;
	volatile uint64_t t31 = 4021740LLU;

	t31 = (x193/(x194%(x195*x196)));

	if (t31 != 384307168202282325LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x197 = 9684485;
	uint32_t x198 = 290792U;
	int64_t x199 = -1LL;
	int32_t x200 = INT32_MIN;
	int64_t t32 = 21403051046LL;

	t32 = (x197/(x198%(x199*x200)));

	if (t32 != 33LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x206 = -8599036LL;
	static uint8_t x207 = 20U;

	t33 = (x205/(x206%(x207*x208)));

	if (t33 != 2048LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x209 = 4563LLU;
	static int8_t x211 = INT8_MAX;
	static int8_t x212 = INT8_MAX;
	static volatile uint64_t t34 = 1475628974LLU;

	t34 = (x209/(x210%(x211*x212)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x225 = -156403197;
	static volatile int16_t x226 = INT16_MIN;
	int16_t x227 = 3;
	uint64_t x228 = 929422LLU;

	t35 = (x225/(x226%(x227*x228)));

	if (t35 != 9269981503777LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x232 = UINT32_MAX;
	volatile int64_t t36 = -5373552166LL;

	t36 = (x229/(x230%(x231*x232)));

	if (t36 != -28LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x233 = 0;
	int8_t x234 = -53;
	int64_t x235 = -1LL;
	int32_t x236 = -11558894;
	static volatile int64_t t37 = -67608319593483LL;

	t37 = (x233/(x234%(x235*x236)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x241 = -1LL;
	static int8_t x242 = -1;
	int64_t x243 = 86679LL;
	uint32_t x244 = 1258973U;
	int64_t t38 = -10LL;

	t38 = (x241/(x242%(x243*x244)));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x249 = -1;
	uint16_t x250 = 11974U;
	static uint64_t x251 = UINT64_MAX;
	static uint32_t x252 = 293981U;
	static uint64_t t39 = 140108607161204LLU;

	t39 = (x249/(x250%(x251*x252)));

	if (t39 != 1540566567037711LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x253 = 1U;
	uint64_t x254 = UINT64_MAX;
	static int32_t x255 = -7;
	int16_t x256 = 3;
	volatile uint64_t t40 = 1900LLU;

	t40 = (x253/(x254%(x255*x256)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x265 = 57U;
	static uint16_t x266 = UINT16_MAX;
	static int8_t x267 = INT8_MIN;
	volatile int32_t x268 = -1;
	int32_t t41 = -415739;

	t41 = (x265/(x266%(x267*x268)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x270 = 22558622U;
	volatile int32_t x271 = -6;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t42 = 100715641447049566LLU;

	t42 = (x269/(x270%(x271*x272)));

	if (t42 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x277 = -1LL;
	volatile int64_t x278 = -1LL;
	uint32_t x280 = UINT32_MAX;
	int64_t t43 = -489153243LL;

	t43 = (x277/(x278%(x279*x280)));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x285 = INT32_MIN;
	static int64_t x286 = INT64_MIN;
	int16_t x288 = -1;
	static volatile int64_t t44 = 1082935236LL;

	t44 = (x285/(x286%(x287*x288)));

	if (t44 != 65536LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int8_t x290 = 7;
	uint32_t x291 = 16198U;
	int16_t x292 = 19;
	volatile uint32_t t45 = 53340137U;

	t45 = (x289/(x290%(x291*x292)));

	if (t45 != 36U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x294 = -1;
	volatile int8_t x295 = INT8_MIN;
	uint32_t x296 = 783U;
	volatile uint32_t t46 = 13443U;

	t46 = (x293/(x294%(x295*x296)));

	if (t46 != 42853U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x297 = INT32_MIN;
	int8_t x299 = 7;
	static int16_t x300 = INT16_MIN;
	volatile int64_t t47 = -260LL;

	t47 = (x297/(x298%(x299*x300)));

	if (t47 != 65536LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x301 = 1;
	volatile uint32_t x302 = 13581830U;
	int16_t x304 = INT16_MIN;
	static volatile uint32_t t48 = 221437U;

	t48 = (x301/(x302%(x303*x304)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x306 = 1U;
	uint16_t x307 = UINT16_MAX;
	static volatile int16_t x308 = -1;
	static uint64_t t49 = 27930438445318277LLU;

	t49 = (x305/(x306%(x307*x308)));

	if (t49 != 483203850LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x309 = 4U;
	volatile int32_t x310 = -1;
	uint16_t x311 = 11U;
	uint32_t x312 = 33505529U;
	volatile uint32_t t50 = 1U;

	t50 = (x309/(x310%(x311*x312)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x313 = 5482117;
	static int32_t x314 = INT32_MIN;
	static int32_t x315 = 12;
	static int8_t x316 = INT8_MIN;
	int32_t t51 = -492021;

	t51 = (x313/(x314%(x315*x316)));

	if (t51 != -10707) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x322 = -4;
	int16_t x323 = -348;
	static volatile int32_t t52 = 6;

	t52 = (x321/(x322%(x323*x324)));

	if (t52 != -1628) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	int16_t x332 = -203;
	static uint64_t t53 = 12293635785LLU;

	t53 = (x329/(x330%(x331*x332)));

	if (t53 != 2417713641550LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x333 = 51952270U;
	int16_t x334 = -1;
	static volatile uint32_t x335 = UINT32_MAX;
	volatile uint32_t t54 = 7629U;

	t54 = (x333/(x334%(x335*x336)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = 872793LL;
	int32_t x339 = 6980015;
	volatile int64_t x340 = -5LL;
	volatile int64_t t55 = -388131387495LL;

	t55 = (x337/(x338%(x339*x340)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = -52822240043032LL;
	volatile int16_t x355 = INT16_MAX;
	static uint32_t x356 = 179969488U;
	volatile uint64_t t56 = 387801LLU;

	t56 = (x353/(x354%(x355*x356)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x361 = -1LL;
	static uint64_t x362 = 96451317LLU;
	uint64_t x363 = 8500869482LLU;
	int64_t x364 = INT64_MAX;
	volatile uint64_t t57 = 101LLU;

	t57 = (x361/(x362%(x363*x364)));

	if (t57 != 191254455070LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x370 = 57154681LLU;
	int8_t x371 = INT8_MAX;

	t58 = (x369/(x370%(x371*x372)));

	if (t58 != 1405LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x381 = 155U;
	int8_t x382 = -3;
	int8_t x384 = -9;
	static uint32_t t59 = 574U;

	t59 = (x381/(x382%(x383*x384)));

	if (t59 != 155U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = -10;
	int16_t x387 = INT16_MAX;
	static uint64_t t60 = 11736075966288LLU;

	t60 = (x385/(x386%(x387*x388)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x389 = 138;
	uint8_t x391 = 15U;
	volatile int16_t x392 = -1;
	int64_t t61 = 946579439053LL;

	t61 = (x389/(x390%(x391*x392)));

	if (t61 != -17LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x393 = 1U;
	int32_t x394 = -121313966;
	int32_t x395 = -4434;
	int32_t t62 = 8;

	t62 = (x393/(x394%(x395*x396)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x397 = -1;
	int64_t x398 = INT64_MIN;
	static volatile int64_t x399 = -695576LL;
	int16_t x400 = INT16_MIN;
	volatile int64_t t63 = 4768729773LL;

	t63 = (x397/(x398%(x399*x400)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x406 = 6U;
	int16_t x407 = 400;
	volatile int64_t t64 = -19311684085930861LL;

	t64 = (x405/(x406%(x407*x408)));

	if (t64 != 21LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x409 = INT32_MAX;
	uint8_t x410 = UINT8_MAX;

	t65 = (x409/(x410%(x411*x412)));

	if (t65 != 8421504LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = -1LL;
	int32_t x415 = -1;

	t66 = (x413/(x414%(x415*x416)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x430 = UINT64_MAX;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = -41;

	t67 = (x429/(x430%(x431*x432)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x433 = -3;
	int8_t x434 = -9;
	uint32_t x435 = UINT32_MAX;
	uint16_t x436 = 26U;
	uint32_t t68 = 10U;

	t68 = (x433/(x434%(x435*x436)));

	if (t68 != 252645134U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x439 = UINT64_MAX;
	uint32_t x440 = UINT32_MAX;

	t69 = (x437/(x438%(x439*x440)));

	if (t69 != 89547301328687143LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x441 = INT16_MIN;
	static volatile int16_t x442 = INT16_MAX;
	int16_t x444 = 47;

	t70 = (x441/(x442%(x443*x444)));

	if (t70 != -595) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x446 = 1392U;
	uint16_t x447 = 1389U;
	int32_t t71 = 4466;

	t71 = (x445/(x446%(x447*x448)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x449 = 34226LL;
	int8_t x450 = 5;
	volatile uint8_t x451 = 24U;
	static int8_t x452 = 3;
	int64_t t72 = -547918LL;

	t72 = (x449/(x450%(x451*x452)));

	if (t72 != 6845LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x457 = INT8_MIN;
	int16_t x458 = 12144;
	int16_t x459 = INT16_MAX;
	volatile uint32_t t73 = 1336U;

	t73 = (x457/(x458%(x459*x460)));

	if (t73 != 353669U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	int64_t t74 = 1139413460792519022LL;

	t74 = (x461/(x462%(x463*x464)));

	if (t74 != 281474976710656LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x465 = INT64_MIN;
	static int64_t x466 = INT64_MAX;
	static int16_t x467 = INT16_MIN;
	uint16_t x468 = 662U;
	volatile int64_t t75 = -16170LL;

	t75 = (x465/(x466%(x467*x468)));

	if (t75 != -430389892729LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x469 = -1;
	int64_t x471 = 1809LL;
	int64_t x472 = 13LL;
	static volatile int64_t t76 = 105727LL;

	t76 = (x469/(x470%(x471*x472)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x481 = INT32_MIN;
	int32_t x482 = -399;
	static volatile uint64_t t77 = 33766618256567166LLU;

	t77 = (x481/(x482%(x483*x484)));

	if (t77 != 3039800077938LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x485 = 765416;
	static int32_t x486 = 29;
	volatile uint32_t x487 = 844008531U;
	static volatile int8_t x488 = INT8_MAX;
	volatile uint32_t t78 = 0U;

	t78 = (x485/(x486%(x487*x488)));

	if (t78 != 26393U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x490 = UINT8_MAX;
	uint8_t x491 = 16U;
	int16_t x492 = INT16_MIN;

	t79 = (x489/(x490%(x491*x492)));

	if (t79 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x493 = 20628851LLU;
	uint8_t x494 = 2U;
	volatile int16_t x495 = INT16_MIN;
	volatile uint64_t t80 = 2573133LLU;

	t80 = (x493/(x494%(x495*x496)));

	if (t80 != 10314425LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x501 = 7;
	int64_t x502 = 15248075379025LL;
	int8_t x503 = INT8_MIN;
	int8_t x504 = -1;
	volatile int64_t t81 = 95295322957LL;

	t81 = (x501/(x502%(x503*x504)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x505 = 1U;
	int8_t x506 = 3;
	uint32_t x507 = UINT32_MAX;

	t82 = (x505/(x506%(x507*x508)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x513 = INT8_MIN;
	static int8_t x515 = 30;
	uint64_t x516 = UINT64_MAX;
	uint64_t t83 = 271710143598710424LLU;

	t83 = (x513/(x514%(x515*x516)));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x521 = UINT32_MAX;
	int8_t x522 = 3;
	volatile int8_t x523 = -6;
	uint16_t x524 = 3270U;
	static uint32_t t84 = 1247188U;

	t84 = (x521/(x522%(x523*x524)));

	if (t84 != 1431655765U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x533 = -1;
	volatile int8_t x534 = -1;
	int8_t x535 = INT8_MIN;
	static uint16_t x536 = 168U;
	static int32_t t85 = -353312909;

	t85 = (x533/(x534%(x535*x536)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x537 = UINT32_MAX;
	uint64_t x539 = 391LLU;
	uint64_t t86 = 1LLU;

	t86 = (x537/(x538%(x539*x540)));

	if (t86 != 2735647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x542 = 11038U;
	volatile int8_t x543 = -36;
	int16_t x544 = INT16_MAX;
	volatile int64_t t87 = -224588796LL;

	t87 = (x541/(x542%(x543*x544)));

	if (t87 != -10675506LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x545 = 5U;
	static int64_t x546 = INT64_MIN;
	int8_t x547 = -1;

	t88 = (x545/(x546%(x547*x548)));

	if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x554 = INT16_MIN;
	uint16_t x555 = UINT16_MAX;

	t89 = (x553/(x554%(x555*x556)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x557 = -662054;
	static int16_t x558 = 1;
	int16_t x559 = INT16_MIN;
	volatile uint8_t x560 = 20U;
	volatile int32_t t90 = 983235;

	t90 = (x557/(x558%(x559*x560)));

	if (t90 != -662054) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x569 = INT8_MIN;
	uint8_t x570 = 14U;
	int32_t x571 = 6776;
	static int8_t x572 = INT8_MIN;
	volatile int32_t t91 = 20871;

	t91 = (x569/(x570%(x571*x572)));

	if (t91 != -9) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x577 = INT16_MIN;
	int32_t x578 = INT32_MAX;
	int16_t x579 = 3;
	int32_t t92 = 2067;

	t92 = (x577/(x578%(x579*x580)));

	if (t92 != -258) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x581 = 580;
	int16_t x582 = -1;
	uint32_t x584 = 8U;
	uint32_t t93 = 4430070U;

	t93 = (x581/(x582%(x583*x584)));

	if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x585 = 0LLU;
	uint16_t x586 = UINT16_MAX;
	volatile int16_t x587 = -57;
	uint64_t t94 = 5704813LLU;

	t94 = (x585/(x586%(x587*x588)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x589 = -1;
	int32_t x590 = INT32_MAX;
	volatile uint32_t x591 = 1386U;
	uint16_t x592 = UINT16_MAX;
	volatile uint32_t t95 = 3U;

	t95 = (x589/(x590%(x591*x592)));

	if (t95 != 73U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x598 = -29;
	uint64_t x599 = 69649641LLU;
	uint64_t t96 = 3029831636LLU;

	t96 = (x597/(x598%(x599*x600)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x613 = 34458609321LL;
	static int16_t x614 = INT16_MIN;
	volatile uint32_t x615 = UINT32_MAX;
	int64_t t97 = -7LL;

	t97 = (x613/(x614%(x615*x616)));

	if (t97 != 8LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x630 = INT32_MIN;
	int32_t x631 = -212441;
	uint64_t x632 = 3183342604LLU;

	t98 = (x629/(x630%(x631*x632)));

	if (t98 != 27277LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x637 = 13U;
	uint32_t x638 = 5542U;
	static int8_t x639 = INT8_MIN;
	int16_t x640 = -3939;
	volatile uint32_t t99 = 2018954U;

	t99 = (x637/(x638%(x639*x640)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

