#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x5 = 123U;
int32_t x12 = -58968;
volatile uint8_t x14 = UINT8_MAX;
int64_t x23 = INT64_MAX;
int64_t x24 = -1LL;
static volatile uint32_t x31 = 13858979U;
uint64_t x32 = 127427170LLU;
uint64_t t6 = 0LLU;
uint8_t x40 = 68U;
static int16_t x43 = INT16_MIN;
static volatile int16_t x54 = -1;
volatile int8_t x68 = -6;
int64_t t12 = -2095313264852682LL;
int64_t x80 = -1LL;
int8_t x115 = -1;
int16_t x125 = -5849;
static uint32_t x137 = UINT32_MAX;
volatile uint8_t x144 = UINT8_MAX;
volatile int64_t x146 = -1LL;
uint16_t x148 = 10359U;
volatile uint64_t x152 = 7256LLU;
int64_t x163 = 7LL;
volatile uint64_t t32 = 380881147621LLU;
int32_t t33 = 210;
int8_t x187 = INT8_MIN;
int8_t x192 = -1;
uint16_t x197 = 4U;
int64_t x198 = -62920122665125502LL;
volatile uint8_t x205 = 73U;
int16_t x212 = -13;
int8_t x219 = INT8_MIN;
volatile int32_t t40 = 719;
volatile int16_t x239 = -1;
volatile int32_t x243 = INT32_MIN;
int16_t x247 = INT16_MIN;
int16_t x249 = INT16_MIN;
volatile int16_t x252 = INT16_MIN;
volatile uint64_t t44 = 37015694928138LLU;
volatile int32_t x258 = -978;
static uint32_t x260 = 8831034U;
volatile uint64_t x262 = 244562526148340LLU;
int16_t x273 = INT16_MAX;
int32_t x285 = -259;
volatile uint64_t t50 = 2205166239440LLU;
int8_t x289 = INT8_MIN;
int16_t x293 = INT16_MIN;
int64_t t52 = -640LL;
static int32_t x299 = INT32_MIN;
volatile int64_t x300 = INT64_MIN;
uint32_t x301 = 34U;
int64_t x302 = -319518331160LL;
int32_t x304 = -91725;
int32_t x310 = -1;
static int32_t x311 = -2687;
volatile int64_t t56 = 52646979LL;
volatile int64_t x324 = -1LL;
int32_t t59 = INT32_MIN;
uint16_t x334 = 7U;
volatile uint64_t x335 = 8037LLU;
volatile uint64_t t61 = 0LLU;
int32_t x337 = -1;
int32_t t62 = 1;
volatile uint64_t t63 = 55LLU;
static volatile uint64_t t64 = 93033770415LLU;
uint16_t x357 = 18U;
static uint64_t x359 = UINT64_MAX;
int8_t x363 = INT8_MAX;
int16_t x365 = 7802;
int16_t x366 = INT16_MIN;
int64_t x370 = -1LL;
int16_t x371 = 3477;
static int8_t x381 = -62;
int64_t t72 = -101896093LL;
static int64_t x393 = -1LL;
volatile int8_t x397 = -31;
volatile int64_t x398 = -32007657897914LL;
volatile int16_t x400 = -1;
volatile uint32_t t76 = 18U;
volatile int16_t x421 = INT16_MAX;
static int8_t x424 = -1;
int16_t x458 = -1;
int8_t x461 = INT8_MIN;
uint64_t t84 = 1771533625168137705LLU;
int32_t x484 = -1;
volatile int32_t t88 = 49;
int8_t x506 = -1;
int16_t x508 = INT16_MIN;
uint8_t x510 = UINT8_MAX;
static uint8_t x520 = 44U;
int8_t x529 = 10;
volatile int32_t x538 = INT32_MAX;
int8_t x541 = INT8_MIN;
uint64_t x543 = 7214580348119654LLU;
volatile uint8_t x550 = 4U;
static uint16_t x552 = 21U;


void f0(void) {
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	static uint64_t x8 = 33514737LLU;
	uint64_t t0 = 107896846077768LLU;

	t0 = (x5*(x6*(x7|x8)));

	if (t0 != 3962107330560LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 31;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = 1;
	uint32_t t1 = 3079U;

	t1 = (x9*(x10*(x11|x12)));

	if (t1 != 1827977U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	int16_t x15 = -1;
	int64_t x16 = INT64_MAX;
	int64_t t2 = -64471642003885017LL;

	t2 = (x13*(x14*(x15|x16)));

	if (t2 != 8355840LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint8_t x18 = 0U;
	int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t3 = 743378LLU;

	t3 = (x17*(x18*(x19|x20)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 4316;
	volatile int8_t x22 = INT8_MAX;
	volatile int64_t t4 = 2843790641LL;

	t4 = (x21*(x22*(x23|x24)));

	if (t4 != -548132LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 93900877717643LLU;
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = 4;
	uint8_t x28 = 23U;
	uint64_t t5 = 13843LLU;

	t5 = (x25*(x26*(x27|x28)));

	if (t5 != 18444584353522045827LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int8_t x30 = -1;

	t6 = (x29*(x30*(x31|x32)));

	if (t6 != 131824355LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -13;
	uint32_t x34 = 183830941U;
	static int64_t x35 = INT64_MIN;
	int32_t x36 = -3440;
	static int64_t t7 = -22965129LL;

	t7 = (x33*(x34*(x35|x36)));

	if (t7 != 8220919681520LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 3LL;
	int8_t x38 = 1;
	int16_t x39 = INT16_MIN;
	int64_t t8 = -2259599355LL;

	t8 = (x37*(x38*(x39|x40)));

	if (t8 != -98100LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -692;
	int8_t x42 = 21;
	uint64_t x44 = 352020384409113456LLU;
	uint64_t t9 = 1375661487LLU;

	t9 = (x41*(x42*(x43|x44)));

	if (t9 != 165781056LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x53 = 2U;
	int64_t x55 = 1LL;
	volatile int32_t x56 = 110;
	int64_t t10 = -256685133849496715LL;

	t10 = (x53*(x54*(x55|x56)));

	if (t10 != -222LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x57 = 590U;
	uint8_t x58 = UINT8_MAX;
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t11 = 208470435582LL;

	t11 = (x57*(x58*(x59|x60)));

	if (t11 != -19257600LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	int64_t x67 = INT64_MAX;

	t12 = (x65*(x66*(x67|x68)));

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -1;
	uint32_t x70 = 4820116U;
	uint64_t x71 = 15252840812151LLU;
	int32_t x72 = -1;
	volatile uint64_t t13 = 1LLU;

	t13 = (x69*(x70*(x71|x72)));

	if (t13 != 4820116LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t14 = 15;

	t14 = (x73*(x74*(x75|x76)));

	if (t14 != -536870912) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x77 = INT64_MIN;
	int8_t x78 = -1;
	uint32_t x79 = 168963461U;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x77*(x78*(x79|x80)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MIN;
	uint64_t x84 = 347409LLU;
	static uint64_t t16 = 111LLU;

	t16 = (x81*(x82*(x83|x84)));

	if (t16 != 3324945LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 3646166712LLU;
	volatile uint16_t x87 = 6797U;
	static uint64_t x88 = UINT64_MAX;
	static uint64_t t17 = 218LLU;

	t17 = (x85*(x86*(x87|x88)));

	if (t17 != 18446505122174080696LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x93 = INT16_MIN;
	int16_t x94 = 1;
	static volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	uint32_t t18 = 1U;

	t18 = (x93*(x94*(x95|x96)));

	if (t18 != 32768U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x97 = 7390062U;
	static volatile uint32_t x98 = 53157409U;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MIN;
	volatile uint32_t t19 = 376U;

	t19 = (x97*(x98*(x99|x100)));

	if (t19 != 2331339008U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 111332940U;
	int8_t x102 = INT8_MIN;
	static int8_t x103 = INT8_MIN;
	volatile int32_t x104 = 1;
	volatile uint32_t t20 = 11831320U;

	t20 = (x101*(x102*(x103|x104)));

	if (t20 != 1647041024U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 26834U;
	uint8_t x114 = UINT8_MAX;
	volatile uint16_t x116 = 5054U;
	static uint32_t t21 = 1U;

	t21 = (x113*(x114*(x115|x116)));

	if (t21 != 4288124626U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x118 = 3U;
	volatile int8_t x119 = -1;
	uint32_t x120 = 641015553U;
	uint32_t t22 = 130U;

	t22 = (x117*(x118*(x119|x120)));

	if (t22 != 384U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = UINT32_MAX;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MIN;
	int16_t x124 = -25;
	uint64_t t23 = 552170559889LLU;

	t23 = (x121*(x122*(x123|x124)));

	if (t23 != 107374182375LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x126 = 92930253U;
	int16_t x127 = 32;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t24 = 7U;

	t24 = (x125*(x126*(x127|x128)));

	if (t24 != 2383170501U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x138 = -1;
	volatile int32_t x139 = INT32_MIN;
	static int8_t x140 = INT8_MAX;
	uint32_t t25 = 37876745U;

	t25 = (x137*(x138*(x139|x140)));

	if (t25 != 2147483775U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x141 = -1;
	uint64_t x142 = 769LLU;
	int64_t x143 = -1LL;
	uint64_t t26 = 10711734640943060LLU;

	t26 = (x141*(x142*(x143|x144)));

	if (t26 != 769LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	int32_t x147 = -34;
	volatile int64_t t27 = 52637600009591302LL;

	t27 = (x145*(x146*(x147|x148)));

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = -1;
	static int16_t x150 = 1501;
	int8_t x151 = INT8_MIN;
	uint64_t t28 = 37783324950LLU;

	t28 = (x149*(x150*(x151|x152)));

	if (t28 != 60040LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -1LL;
	int8_t x154 = 1;
	int16_t x155 = 984;
	uint32_t x156 = 1481U;
	int64_t t29 = 11665742608745LL;

	t29 = (x153*(x154*(x155|x156)));

	if (t29 != -2009LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = 350;
	volatile uint8_t x164 = 5U;
	volatile int64_t t30 = -67885427518LL;

	t30 = (x161*(x162*(x163|x164)));

	if (t30 != 10522669872750LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = 8;
	uint8_t x170 = 1U;
	uint32_t x171 = 2570U;
	volatile int32_t x172 = 162742;
	volatile uint32_t t31 = 407029U;

	t31 = (x169*(x170*(x171|x172)));

	if (t31 != 1302000U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x173 = -13;
	int8_t x174 = -1;
	uint32_t x175 = 1340648U;
	static uint64_t x176 = 13172482LLU;

	t32 = (x173*(x174*(x175|x176)));

	if (t32 != 188284642LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MAX;
	static int16_t x182 = INT16_MIN;
	int16_t x183 = 25;
	uint8_t x184 = 0U;

	t33 = (x181*(x182*(x183|x184)));

	if (t33 != -104038400) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x185 = UINT8_MAX;
	uint16_t x186 = 1408U;
	uint8_t x188 = 38U;
	int32_t t34 = -369719970;

	t34 = (x185*(x186*(x187|x188)));

	if (t34 != -32313600) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x189 = UINT64_MAX;
	static volatile int16_t x190 = INT16_MAX;
	static int32_t x191 = INT32_MIN;
	static volatile uint64_t t35 = 91075409708LLU;

	t35 = (x189*(x190*(x191|x192)));

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x199 = INT64_MAX;
	int8_t x200 = -1;
	int64_t t36 = -101027414LL;

	t36 = (x197*(x198*(x199|x200)));

	if (t36 != 251680490660502008LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x206 = 65173LLU;
	int64_t x207 = INT64_MAX;
	int64_t x208 = -68257LL;
	uint64_t t37 = 3LLU;

	t37 = (x205*(x206*(x207|x208)));

	if (t37 != 18446744073704793987LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x209 = 1335U;
	int64_t x210 = -5507073626LL;
	static uint64_t x211 = 536961913462349LLU;
	volatile uint64_t t38 = 3LLU;

	t38 = (x209*(x210*(x211|x212)));

	if (t38 != 7351943290710LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x217 = INT16_MIN;
	uint32_t x218 = UINT32_MAX;
	int8_t x220 = INT8_MIN;
	uint32_t t39 = 1207870U;

	t39 = (x217*(x218*(x219|x220)));

	if (t39 != 4290772992U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	uint8_t x235 = 0U;
	uint16_t x236 = 1824U;

	t40 = (x233*(x234*(x235|x236)));

	if (t40 != 59768832) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x237 = INT32_MIN;
	uint32_t x238 = 24823U;
	uint16_t x240 = 103U;
	volatile uint32_t t41 = 5U;

	t41 = (x237*(x238*(x239|x240)));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = 25978985U;
	int64_t x244 = -1LL;
	int64_t t42 = -636164135753826068LL;

	t42 = (x241*(x242*(x243|x244)));

	if (t42 != 55789445479137280LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x245 = 80U;
	volatile int8_t x246 = INT8_MIN;
	int16_t x248 = 356;
	volatile int32_t t43 = 417;

	t43 = (x245*(x246*(x247|x248)));

	if (t43 != 331898880) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x250 = INT32_MIN;
	volatile uint64_t x251 = UINT64_MAX;

	t44 = (x249*(x250*(x251|x252)));

	if (t44 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x257 = INT32_MIN;
	volatile int16_t x259 = INT16_MIN;
	static uint32_t t45 = 4905281U;

	t45 = (x257*(x258*(x259|x260)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint16_t x263 = 12U;
	int8_t x264 = -1;
	uint64_t t46 = 31152845LLU;

	t46 = (x261*(x262*(x263|x264)));

	if (t46 != 2419338922578089716LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = 0;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t47 = 30264422162599354LLU;

	t47 = (x273*(x274*(x275|x276)));

	if (t47 != 18446603340516196351LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x277 = 103;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = 537375860197886698LL;
	int16_t x280 = -1;
	volatile int64_t t48 = -6092542LL;

	t48 = (x277*(x278*(x279|x280)));

	if (t48 != 3375104LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x281 = -1LL;
	int16_t x282 = -3;
	int16_t x283 = -11914;
	volatile int8_t x284 = 8;
	volatile int64_t t49 = -248205984431LL;

	t49 = (x281*(x282*(x283|x284)));

	if (t49 != -35718LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x286 = -19303287;
	int32_t x287 = INT32_MIN;
	volatile uint64_t x288 = 14LLU;

	t50 = (x285*(x286*(x287|x288)));

	if (t50 != 7710289408749167494LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x290 = -1;
	uint32_t x291 = 69937985U;
	int64_t x292 = 547LL;
	int64_t t51 = 1052LL;

	t51 = (x289*(x290*(x291|x292)));

	if (t51 != 8952066432LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x294 = INT16_MAX;
	volatile int64_t x295 = INT64_MAX;
	int8_t x296 = INT8_MIN;

	t52 = (x293*(x294*(x295|x296)));

	if (t52 != 1073709056LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x297 = -194010055;
	int32_t x298 = -1;
	volatile int64_t t53 = 90855527898419138LL;

	t53 = (x297*(x298*(x299|x300)));

	if (t53 != -416633420660080640LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x303 = UINT64_MAX;
	uint64_t t54 = 2105024986842940328LLU;

	t54 = (x301*(x302*(x303|x304)));

	if (t54 != 10863623259440LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x309 = 452834815LLU;
	uint8_t x312 = 1U;
	static volatile uint64_t t55 = 1109417099975LLU;

	t55 = (x309*(x310*(x311|x312)));

	if (t55 != 1216767147905LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x313 = -1LL;
	int64_t x314 = -2201738LL;
	int32_t x315 = INT32_MIN;
	int16_t x316 = -2;

	t56 = (x313*(x314*(x315|x316)));

	if (t56 != -4403476LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x317 = 846U;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = 0U;
	int32_t x320 = INT32_MAX;
	volatile uint32_t t57 = 214932U;

	t57 = (x317*(x318*(x319|x320)));

	if (t57 != 846U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	int64_t t58 = 49006159673LL;

	t58 = (x321*(x322*(x323|x324)));

	if (t58 != -281470681677825LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = INT32_MIN;
	static int16_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int32_t x328 = -1;

	t59 = (x325*(x326*(x327|x328)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x329 = -1;
	static int16_t x330 = INT16_MAX;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -26;
	static int32_t t60 = 45364;

	t60 = (x329*(x330*(x331|x332)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x333 = 7U;
	volatile int64_t x336 = -945539160021778LL;

	t61 = (x333*(x334*(x335|x336)));

	if (t61 != 18400412654868823231LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x338 = -1;
	int16_t x339 = INT16_MAX;
	volatile uint8_t x340 = 0U;

	t62 = (x337*(x338*(x339|x340)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x341 = -3297;
	uint64_t x342 = 349393025187895LLU;
	static int8_t x343 = -1;
	uint8_t x344 = 5U;

	t63 = (x341*(x342*(x343|x344)));

	if (t63 != 1151948804044489815LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MAX;
	int64_t x347 = -1LL;
	uint64_t x348 = 344664070383LLU;

	t64 = (x345*(x346*(x347|x348)));

	if (t64 != 18446743526101221631LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x349 = INT8_MIN;
	volatile uint32_t x350 = 8U;
	static volatile int32_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	uint32_t t65 = 28U;

	t65 = (x349*(x350*(x351|x352)));

	if (t65 != 1024U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x358 = INT8_MIN;
	uint64_t x360 = 1018LLU;
	volatile uint64_t t66 = 86023LLU;

	t66 = (x357*(x358*(x359|x360)));

	if (t66 != 2304LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x361 = -88432;
	int32_t x362 = 1747;
	static int64_t x364 = 0LL;
	volatile int64_t t67 = 32229862043569LL;

	t67 = (x361*(x362*(x363|x364)));

	if (t67 != -19620319408LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x367 = -9;
	uint8_t x368 = 15U;
	volatile int32_t t68 = -16;

	t68 = (x365*(x366*(x367|x368)));

	if (t68 != 255655936) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = INT32_MAX;
	int16_t x372 = INT16_MAX;
	static int64_t t69 = 456904930LL;

	t69 = (x369*(x370*(x371|x372)));

	if (t69 != -70366596661249LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x373 = 58313031U;
	uint32_t x374 = 1594U;
	int8_t x375 = -3;
	static uint16_t x376 = UINT16_MAX;
	uint32_t t70 = 1021131U;

	t70 = (x373*(x374*(x375|x376)));

	if (t70 != 1538309098U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x377 = 1;
	int8_t x378 = INT8_MIN;
	static uint32_t x379 = 575210404U;
	uint64_t x380 = 2915812407LLU;
	uint64_t t71 = 4538101530205LLU;

	t71 = (x377*(x378*(x379|x380)));

	if (t71 != 18446743696190481536LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x382 = 27U;
	volatile int16_t x383 = -1;
	static int64_t x384 = INT64_MIN;

	t72 = (x381*(x382*(x383|x384)));

	if (t72 != 1674LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x385 = 525698LLU;
	uint16_t x386 = UINT16_MAX;
	volatile uint8_t x387 = 1U;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t73 = 12021LLU;

	t73 = (x385*(x386*(x387|x388)));

	if (t73 != 18445615197528455806LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x394 = 52U;
	uint32_t x395 = 0U;
	int16_t x396 = INT16_MIN;
	volatile int64_t t74 = 30134LL;

	t74 = (x393*(x394*(x395|x396)));

	if (t74 != -4293263360LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x399 = INT8_MAX;
	int64_t t75 = -1808568391892977679LL;

	t75 = (x397*(x398*(x399|x400)));

	if (t75 != -992237394835334LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x409 = 362444273;
	int32_t x410 = 220965;
	uint32_t x411 = 101770595U;
	volatile int8_t x412 = INT8_MIN;

	t76 = (x409*(x410*(x411|x412)));

	if (t76 != 460330463U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = -6305282305763183LL;
	static uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MIN;
	uint64_t t77 = 480LLU;

	t77 = (x417*(x418*(x419|x420)));

	if (t77 != 9798262997938864128LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x422 = 422979795U;
	int64_t x423 = -1LL;
	static volatile int64_t t78 = -121782557840LL;

	t78 = (x421*(x422*(x423|x424)));

	if (t78 != -13859778942765LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x433 = 1218914496772LLU;
	uint16_t x434 = UINT16_MAX;
	uint64_t x435 = UINT64_MAX;
	static int64_t x436 = -1LL;
	uint64_t t79 = 51291189018549699LLU;

	t79 = (x433*(x434*(x435|x436)));

	if (t79 != 18366862512163598596LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x453 = -1LL;
	static uint64_t x454 = 60048560LLU;
	int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MAX;
	uint64_t t80 = 2665389001511689488LLU;

	t80 = (x453*(x454*(x455|x456)));

	if (t80 != 60048560LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x457 = 0U;
	int16_t x459 = INT16_MIN;
	static uint32_t x460 = UINT32_MAX;
	uint32_t t81 = 25U;

	t81 = (x457*(x458*(x459|x460)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x462 = INT16_MAX;
	int16_t x463 = -4982;
	int64_t x464 = 6644054243LL;
	static int64_t t82 = 797410140609537264LL;

	t82 = (x461*(x462*(x463|x464)));

	if (t82 != 3309204864LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x469 = 4204U;
	int16_t x470 = INT16_MIN;
	static volatile int16_t x471 = -97;
	static int32_t x472 = -1;
	int32_t t83 = 753798360;

	t83 = (x469*(x470*(x471|x472)));

	if (t83 != 137756672) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x473 = 387984279871535202LLU;
	int64_t x474 = -161LL;
	int8_t x475 = INT8_MIN;
	int16_t x476 = -2;

	t84 = (x473*(x474*(x475|x476)));

	if (t84 != 14250473676377025348LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x481 = -1LL;
	int16_t x482 = INT16_MIN;
	static uint16_t x483 = 0U;
	int64_t t85 = -64518202486116227LL;

	t85 = (x481*(x482*(x483|x484)));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x485 = INT8_MAX;
	int32_t x486 = INT32_MIN;
	uint32_t x487 = UINT32_MAX;
	static volatile uint8_t x488 = UINT8_MAX;
	volatile uint32_t t86 = 575533U;

	t86 = (x485*(x486*(x487|x488)));

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x493 = 1747;
	static uint8_t x494 = 28U;
	volatile int16_t x495 = INT16_MIN;
	volatile int32_t x496 = -1;
	int32_t t87 = 9;

	t87 = (x493*(x494*(x495|x496)));

	if (t87 != -48916) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = 7;
	int8_t x498 = -1;
	int16_t x499 = INT16_MIN;
	volatile int32_t x500 = INT32_MIN;

	t88 = (x497*(x498*(x499|x500)));

	if (t88 != 229376) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x501 = UINT64_MAX;
	uint32_t x502 = 63596U;
	int64_t x503 = -7806LL;
	volatile int8_t x504 = INT8_MIN;
	volatile uint64_t t89 = 27287175466LLU;

	t89 = (x501*(x502*(x503|x504)));

	if (t89 != 8013096LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x505 = 1805U;
	uint16_t x507 = 229U;
	static volatile int32_t t90 = 31;

	t90 = (x505*(x506*(x507|x508)));

	if (t90 != 58732895) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x509 = INT16_MIN;
	static uint64_t x511 = 443933LLU;
	int32_t x512 = INT32_MIN;
	uint64_t t91 = 14632230039LLU;

	t91 = (x509*(x510*(x511|x512)));

	if (t91 != 17940320332185600LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x513 = 4369U;
	static int16_t x514 = -24;
	int16_t x515 = INT16_MAX;
	static int64_t x516 = -1354066LL;
	static int64_t t92 = -798025912219206021LL;

	t92 = (x513*(x514*(x515|x516)));

	if (t92 != 140872882584LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x517 = INT16_MIN;
	static int64_t x518 = 25685159LL;
	volatile uint16_t x519 = UINT16_MAX;
	volatile int64_t t93 = -1025509169576556237LL;

	t93 = (x517*(x518*(x519|x520)));

	if (t93 != -55157617297489920LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x521 = 1LL;
	int32_t x522 = 84771261;
	int64_t x523 = INT64_MAX;
	static uint64_t x524 = UINT64_MAX;
	uint64_t t94 = 81166682023703631LLU;

	t94 = (x521*(x522*(x523|x524)));

	if (t94 != 18446744073624780355LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x525 = 48;
	static uint8_t x526 = 3U;
	int8_t x527 = INT8_MIN;
	uint16_t x528 = UINT16_MAX;
	static volatile int32_t t95 = 339562292;

	t95 = (x525*(x526*(x527|x528)));

	if (t95 != -144) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x530 = INT64_MAX;
	uint8_t x531 = 4U;
	uint64_t x532 = 164308LLU;
	uint64_t t96 = 5734LLU;

	t96 = (x529*(x530*(x531|x532)));

	if (t96 != 18446744073707908536LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x537 = INT8_MAX;
	static volatile uint64_t x539 = UINT64_MAX;
	int64_t x540 = -1LL;
	uint64_t t97 = 89922448802LLU;

	t97 = (x537*(x538*(x539|x540)));

	if (t97 != 18446743800979128447LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x542 = -1;
	static int8_t x544 = INT8_MAX;
	volatile uint64_t t98 = 2LLU;

	t98 = (x541*(x542*(x543|x544)));

	if (t98 != 923466284559318912LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x549 = 231695401823LLU;
	int16_t x551 = 450;
	uint64_t t99 = 2726375202LLU;

	t99 = (x549*(x550*(x551|x552)));

	if (t99 != 436514137034532LLU) { NG(); } else { ; }
	
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

