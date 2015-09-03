#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x22 = UINT8_MAX;
int16_t x23 = 0;
volatile uint64_t x43 = 68146036991738LLU;
volatile uint8_t x46 = UINT8_MAX;
uint64_t t4 = 81658821902LLU;
volatile uint32_t x54 = 1804U;
int32_t x55 = INT32_MIN;
static volatile uint64_t x66 = 15662064320392LLU;
int8_t x67 = INT8_MIN;
uint64_t t7 = 369396LLU;
static int64_t x69 = -13996LL;
volatile uint64_t t8 = 67693LLU;
int16_t x80 = -1;
static uint32_t x106 = 1425687U;
uint64_t t11 = 12703295099348LLU;
int64_t t13 = 526144LL;
uint32_t x130 = 456905854U;
static int8_t x147 = INT8_MIN;
uint32_t t15 = 9U;
int16_t x192 = -1;
static int32_t t17 = 102;
static int64_t x199 = INT64_MIN;
volatile uint64_t t19 = 974503212188LLU;
volatile int32_t x210 = INT32_MIN;
volatile int64_t t22 = -3976685LL;
volatile int64_t t23 = 1246295419199969LL;
int32_t x223 = -1;
uint16_t x242 = 795U;
uint32_t x251 = 3499U;
volatile uint8_t x254 = 27U;
volatile int32_t x265 = 25;
int16_t x288 = INT16_MIN;
int8_t x293 = 15;
static int32_t t35 = 9;
static int16_t x300 = 4;
uint8_t x301 = 15U;
int8_t x306 = INT8_MAX;
uint64_t t38 = 298326079427430LLU;
uint16_t x336 = UINT16_MAX;
static volatile uint8_t x337 = 2U;
static uint8_t x338 = UINT8_MAX;
int32_t x339 = -1;
uint16_t x352 = UINT16_MAX;
int8_t x361 = INT8_MAX;
uint64_t x429 = 62901606437LLU;
int64_t x455 = -174514LL;
uint64_t x463 = 1013002902821608LLU;
int8_t x464 = -1;
static int8_t x472 = -10;
int64_t x511 = -22894LL;
static volatile int32_t x515 = -1;
static int8_t x539 = -1;
volatile int8_t x540 = -50;
static uint16_t x542 = 5728U;
static int16_t x554 = -1;
static uint64_t x570 = 25LLU;
int32_t x574 = -29;
uint16_t x579 = 0U;
static uint32_t x580 = 15924110U;
uint8_t x584 = UINT8_MAX;
static int8_t x589 = 3;
static volatile int8_t x606 = INT8_MAX;
volatile int16_t x609 = INT16_MIN;
static uint32_t x610 = UINT32_MAX;
volatile uint32_t t69 = 1049707382U;
int8_t x626 = INT8_MIN;
int32_t t70 = -122;
static volatile uint64_t t73 = 735672013981LLU;
volatile uint64_t x644 = 54857222472LLU;
uint64_t t74 = 207628696405079321LLU;
int64_t x649 = -2024058120LL;
volatile uint8_t x651 = 0U;
int64_t x666 = 123646293096LL;
uint32_t x680 = 4U;
int8_t x714 = INT8_MAX;
volatile uint32_t t82 = 87745681U;
int8_t x718 = 1;
volatile int32_t t83 = -20;
static int8_t x740 = -1;
int16_t x742 = INT16_MAX;
int64_t t87 = -101330144LL;
int8_t x757 = -1;
static volatile int8_t x759 = -33;
volatile int32_t t88 = 27;
volatile int16_t x773 = -1777;
uint64_t t93 = 7667972415565934412LLU;
volatile int8_t x802 = -1;
static int8_t x803 = INT8_MIN;
uint32_t x804 = UINT32_MAX;
volatile uint16_t x816 = 2U;
uint32_t t95 = 67026828U;
int32_t x817 = -1;
static uint16_t x820 = 101U;
volatile uint32_t t97 = 5U;
int64_t x832 = -1569358314861773LL;


void f0(void) {
	static uint16_t x21 = 11424U;
	int8_t x24 = 0;
	volatile int32_t t0 = 45986683;

	t0 = (x21*((x22*x23)*x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x29 = 304U;
	uint64_t x30 = 2856892LLU;
	volatile int64_t x31 = INT64_MIN;
	uint32_t x32 = 822769U;
	uint64_t t1 = 4130315285691LLU;

	t1 = (x29*((x30*x31)*x32));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x37 = 2U;
	volatile uint64_t x38 = 2LLU;
	int16_t x39 = INT16_MIN;
	int8_t x40 = 6;
	uint64_t t2 = 258196859625031LLU;

	t2 = (x37*((x38*x39)*x40));

	if (t2 != 18446744073708765184LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	uint16_t x44 = 199U;
	static uint64_t t3 = 0LLU;

	t3 = (x41*((x42*x43)*x44));

	if (t3 != 7901932933789777920LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x45 = -38;
	static volatile uint64_t x47 = 8450480103913335LLU;
	volatile int32_t x48 = -11188;

	t4 = (x45*((x46*x47)*x48));

	if (t4 != 10431958385916380792LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x49 = -1;
	static int16_t x50 = -6;
	uint64_t x51 = UINT64_MAX;
	static volatile uint16_t x52 = 58U;
	volatile uint64_t t5 = 3905800344720505LLU;

	t5 = (x49*((x50*x51)*x52));

	if (t5 != 18446744073709551268LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x53 = -398988040LL;
	static int64_t x56 = -1LL;
	int64_t t6 = -873528437961498165LL;

	t6 = (x53*((x54*x55)*x56));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x65 = 5;
	int32_t x68 = -1402193;

	t7 = (x65*((x66*x67)*x68));

	if (t7 != 17219411493219800064LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 7640041759847131300LLU;
	volatile int8_t x72 = 1;

	t8 = (x69*((x70*x71)*x72));

	if (t8 != 5644298848837304320LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x77 = 32;
	static int8_t x78 = -1;
	volatile int16_t x79 = INT16_MAX;
	int32_t t9 = -509546;

	t9 = (x77*((x78*x79)*x80));

	if (t9 != 1048544) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x105 = INT8_MIN;
	int32_t x107 = -26863;
	static volatile uint16_t x108 = 3U;
	uint32_t t10 = 7413783U;

	t10 = (x105*((x106*x107)*x108));

	if (t10 != 552252800U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x109 = 1772690126757748113LLU;
	volatile uint64_t x110 = 97LLU;
	int16_t x111 = INT16_MIN;
	uint32_t x112 = 640U;

	t11 = (x109*((x110*x111)*x112));

	if (t11 != 5012414091025711104LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x117 = 7377009LLU;
	static volatile int8_t x118 = -1;
	uint16_t x119 = 368U;
	int16_t x120 = INT16_MIN;
	uint64_t t12 = 78023277364437LLU;

	t12 = (x117*((x118*x119)*x120));

	if (t12 != 88956577775616LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x125 = -1LL;
	int8_t x126 = -1;
	static volatile int8_t x127 = 16;
	int32_t x128 = -901643;

	t13 = (x125*((x126*x127)*x128));

	if (t13 != -14426288LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x129 = 25342615LL;
	uint16_t x131 = 7892U;
	uint16_t x132 = 7U;
	volatile int64_t t14 = 377314802476767881LL;

	t14 = (x129*((x130*x131)*x132));

	if (t14 != 103376760829114200LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x145 = 3431U;
	static int8_t x146 = 26;
	int16_t x148 = -1;

	t15 = (x145*((x146*x147)*x148));

	if (t15 != 11418368U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = UINT64_MAX;
	uint64_t t16 = 19894545072152LLU;

	t16 = (x185*((x186*x187)*x188));

	if (t16 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x189 = 4;
	int32_t x190 = INT32_MAX;
	volatile int8_t x191 = 0;

	t17 = (x189*((x190*x191)*x192));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x197 = INT8_MAX;
	uint64_t x198 = 96882585155LLU;
	int32_t x200 = INT32_MAX;
	volatile uint64_t t18 = 13855LLU;

	t18 = (x197*((x198*x199)*x200));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = 6290112665729065LLU;
	static volatile uint8_t x204 = 8U;

	t19 = (x201*((x202*x203)*x204));

	if (t19 != 12086911364196377600LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x205 = INT32_MIN;
	uint8_t x206 = 7U;
	int64_t x207 = 8482308LL;
	static int8_t x208 = 1;
	volatile int64_t t20 = -42301590LL;

	t20 = (x205*((x206*x207)*x208));

	if (t20 != -127509324091097088LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x211 = 1843141455LLU;
	volatile int8_t x212 = INT8_MAX;
	static uint64_t t21 = 27928LLU;

	t21 = (x209*((x210*x211)*x212));

	if (t21 != 892570620166930432LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x213 = 28;
	static int64_t x214 = 448669493026LL;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = 3U;

	t22 = (x213*((x214*x215)*x216));

	if (t22 != 9610500540616920LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x217 = INT64_MIN;
	volatile int32_t x218 = -1;
	uint8_t x219 = 7U;
	uint8_t x220 = 0U;

	t23 = (x217*((x218*x219)*x220));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x221 = 31U;
	uint8_t x222 = UINT8_MAX;
	static uint8_t x224 = 23U;
	volatile int32_t t24 = -4357;

	t24 = (x221*((x222*x223)*x224));

	if (t24 != -181815) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x237 = 2121761178U;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	static volatile uint32_t x240 = 80U;
	uint32_t t25 = 112887U;

	t25 = (x237*((x238*x239)*x240));

	if (t25 != 2621444096U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x241 = 1;
	int16_t x243 = -1;
	volatile int8_t x244 = -4;
	volatile int32_t t26 = 58556;

	t26 = (x241*((x242*x243)*x244));

	if (t26 != 3180) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x245 = INT64_MIN;
	static volatile int32_t x246 = -1;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;
	uint64_t t27 = 5473837LLU;

	t27 = (x245*((x246*x247)*x248));

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x249 = INT16_MIN;
	uint16_t x250 = UINT16_MAX;
	uint8_t x252 = UINT8_MAX;
	uint32_t t28 = 209U;

	t28 = (x249*((x250*x251)*x252));

	if (t28 != 1319796736U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x253 = 3;
	volatile int16_t x255 = -1;
	uint8_t x256 = 2U;
	int32_t t29 = 0;

	t29 = (x253*((x254*x255)*x256));

	if (t29 != -162) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x266 = UINT32_MAX;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = 745208296;
	volatile uint32_t t30 = 2637767U;

	t30 = (x265*((x266*x267)*x268));

	if (t30 != 4006242216U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = -1;
	int32_t x272 = INT32_MIN;
	uint64_t t31 = 151963373651293477LLU;

	t31 = (x269*((x270*x271)*x272));

	if (t31 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x273 = 26699210U;
	int8_t x274 = INT8_MAX;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = INT16_MIN;
	static uint32_t t32 = 8205U;

	t32 = (x273*((x274*x275)*x276));

	if (t32 != 614137856U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x281 = 2U;
	int64_t x282 = -1LL;
	static int16_t x283 = -1;
	int16_t x284 = -1;
	static volatile int64_t t33 = -1877726910183552LL;

	t33 = (x281*((x282*x283)*x284));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x285 = 7882U;
	volatile uint64_t x286 = UINT64_MAX;
	int64_t x287 = INT64_MAX;
	uint64_t t34 = 1221575227237LLU;

	t34 = (x285*((x286*x287)*x288));

	if (t34 != 18446744073451274240LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x294 = -1;
	uint16_t x295 = 1U;
	volatile int8_t x296 = INT8_MIN;

	t35 = (x293*((x294*x295)*x296));

	if (t35 != 1920) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x297 = 15473U;
	static int8_t x298 = 53;
	static int8_t x299 = -4;
	int32_t t36 = 14;

	t36 = (x297*((x298*x299)*x300));

	if (t36 != -13121104) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x302 = 32223U;
	int8_t x303 = -1;
	volatile uint64_t x304 = 27245104504LLU;
	volatile uint64_t t37 = 3980338LLU;

	t37 = (x301*((x302*x303)*x304));

	if (t37 != 2798636524290628360LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x305 = -1;
	int64_t x307 = -1LL;
	static uint64_t x308 = 2687797447347LLU;

	t38 = (x305*((x306*x307)*x308));

	if (t38 != 341350275813069LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x313 = -1LL;
	int16_t x314 = -2400;
	int8_t x315 = 1;
	static int16_t x316 = 13515;
	volatile int64_t t39 = 34LL;

	t39 = (x313*((x314*x315)*x316));

	if (t39 != 32436000LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x333 = -3394LL;
	static int32_t x334 = 18163;
	uint32_t x335 = 82575U;
	volatile int64_t t40 = -1148347539655700779LL;

	t40 = (x333*((x334*x335)*x336));

	if (t40 != -13571676760134LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x340 = 1844;
	volatile int32_t t41 = -748054;

	t41 = (x337*((x338*x339)*x340));

	if (t41 != -940440) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x345 = 6U;
	uint8_t x346 = 1U;
	static uint16_t x347 = 403U;
	uint16_t x348 = 146U;
	volatile int32_t t42 = 892;

	t42 = (x345*((x346*x347)*x348));

	if (t42 != 353028) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = 15893301;
	volatile uint32_t x351 = 7U;
	volatile uint32_t t43 = 4357U;

	t43 = (x349*((x350*x351)*x352));

	if (t43 != 390805888U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x362 = -1;
	int64_t x363 = -1946308877LL;
	int64_t x364 = -1LL;
	static int64_t t44 = 2213545180272LL;

	t44 = (x361*((x362*x363)*x364));

	if (t44 != -247181227379LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x409 = -734490;
	volatile int8_t x410 = -19;
	int64_t x411 = -2747LL;
	int32_t x412 = -1006367;
	volatile int64_t t45 = -5743749093LL;

	t45 = (x409*((x410*x411)*x412));

	if (t45 != 38579317021241190LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x430 = INT16_MIN;
	volatile int8_t x431 = -1;
	static uint32_t x432 = 64799U;
	uint64_t t46 = 3459823983778156722LLU;

	t46 = (x429*((x430*x431)*x432));

	if (t46 != 4433887938542927872LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x441 = -1078491895272LL;
	uint64_t x442 = 25809592659LLU;
	uint64_t x443 = UINT64_MAX;
	int32_t x444 = -1;
	static volatile uint64_t t47 = 128518140548LLU;

	t47 = (x441*((x442*x443)*x444));

	if (t47 != 700304224505380296LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x449 = INT32_MIN;
	int32_t x450 = 7;
	static uint32_t x451 = UINT32_MAX;
	static uint16_t x452 = 18345U;
	volatile uint32_t t48 = 52203U;

	t48 = (x449*((x450*x451)*x452));

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x453 = -1;
	static volatile int16_t x454 = -698;
	static volatile int32_t x456 = 18654;
	static volatile int64_t t49 = 307741905524491LL;

	t49 = (x453*((x454*x455)*x456));

	if (t49 != -2272258140888LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x461 = -1800627344261370LL;
	int32_t x462 = 35;
	uint64_t t50 = 553205612467086LLU;

	t50 = (x461*((x462*x463)*x464));

	if (t50 != 14161054287482725808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x469 = -1;
	static int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = 97LLU;
	uint64_t t51 = 3993418308LLU;

	t51 = (x469*((x470*x471)*x472));

	if (t51 != 18446741990650413056LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x477 = INT8_MAX;
	int16_t x478 = -1;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = 266735;
	uint32_t t52 = 5772340U;

	t52 = (x477*((x478*x479)*x480));

	if (t52 != 33875345U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x481 = -1;
	static uint16_t x482 = 2U;
	uint8_t x483 = UINT8_MAX;
	uint32_t x484 = 253640174U;
	uint32_t t53 = 300905U;

	t53 = (x481*((x482*x483)*x484));

	if (t53 != 3787497436U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x485 = INT8_MIN;
	static uint64_t x486 = 131659932LLU;
	int32_t x487 = INT32_MIN;
	int8_t x488 = -1;
	static volatile uint64_t t54 = 6631264285156LLU;

	t54 = (x485*((x486*x487)*x488));

	if (t54 != 703081610869735424LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x489 = INT16_MIN;
	int64_t x490 = -1LL;
	static int8_t x491 = INT8_MAX;
	int8_t x492 = INT8_MIN;
	volatile int64_t t55 = 8135508787909165LL;

	t55 = (x489*((x490*x491)*x492));

	if (t55 != -532676608LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x509 = 1U;
	int32_t x510 = INT32_MAX;
	int16_t x512 = INT16_MIN;
	int64_t t56 = -27574468220639LL;

	t56 = (x509*((x510*x511)*x512));

	if (t56 != 1611022028453249024LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x513 = 30454U;
	uint16_t x514 = UINT16_MAX;
	int8_t x516 = INT8_MIN;
	uint32_t t57 = 0U;

	t57 = (x513*((x514*x515)*x516));

	if (t57 != 2059699456U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x521 = INT16_MAX;
	static volatile int8_t x522 = -1;
	int64_t x523 = -1LL;
	static int16_t x524 = -1;
	volatile int64_t t58 = 2951LL;

	t58 = (x521*((x522*x523)*x524));

	if (t58 != -32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x537 = -1;
	volatile int64_t x538 = -1LL;
	int64_t t59 = -3749201751155811553LL;

	t59 = (x537*((x538*x539)*x540));

	if (t59 != 50LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x541 = 0U;
	static int64_t x543 = 10668389650495LL;
	int32_t x544 = -1;
	static int64_t t60 = 0LL;

	t60 = (x541*((x542*x543)*x544));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x553 = UINT16_MAX;
	static volatile int8_t x555 = INT8_MAX;
	volatile int64_t x556 = -59406928LL;
	int64_t t61 = 70126395LL;

	t61 = (x553*((x554*x555)*x556));

	if (t61 != 494440594362960LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x569 = 197U;
	int64_t x571 = INT64_MIN;
	int8_t x572 = -2;
	volatile uint64_t t62 = 1555573LLU;

	t62 = (x569*((x570*x571)*x572));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x573 = 36U;
	int32_t x575 = -1;
	static uint16_t x576 = UINT16_MAX;
	volatile int32_t t63 = -16303;

	t63 = (x573*((x574*x575)*x576));

	if (t63 != 68418540) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x577 = INT8_MAX;
	int8_t x578 = INT8_MIN;
	uint32_t t64 = 634486632U;

	t64 = (x577*((x578*x579)*x580));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x581 = UINT64_MAX;
	volatile int8_t x582 = -4;
	volatile uint32_t x583 = 5091U;
	uint64_t t65 = 400LLU;

	t65 = (x581*((x582*x583)*x584));

	if (t65 != 18446744069419777140LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x590 = -1;
	static uint16_t x591 = UINT16_MAX;
	volatile uint8_t x592 = UINT8_MAX;
	volatile int32_t t66 = -17197;

	t66 = (x589*((x590*x591)*x592));

	if (t66 != -50134275) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x601 = -10177;
	static int8_t x602 = INT8_MAX;
	volatile uint8_t x603 = UINT8_MAX;
	static int16_t x604 = -1;
	volatile int32_t t67 = -219706;

	t67 = (x601*((x602*x603)*x604));

	if (t67 != 329582145) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x605 = 32874210U;
	volatile int64_t x607 = -1LL;
	volatile int16_t x608 = 22;
	int64_t t68 = -2LL;

	t68 = (x605*((x606*x607)*x608));

	if (t68 != -91850542740LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x611 = 1;
	uint8_t x612 = 25U;

	t69 = (x609*((x610*x611)*x612));

	if (t69 != 819200U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x625 = -1;
	volatile int32_t x627 = 299023;
	volatile int8_t x628 = -1;

	t70 = (x625*((x626*x627)*x628));

	if (t70 != -38274944) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x629 = INT16_MAX;
	int8_t x630 = INT8_MIN;
	uint32_t x631 = 74U;
	volatile int16_t x632 = -1;
	volatile uint32_t t71 = 58U;

	t71 = (x629*((x630*x631)*x632));

	if (t71 != 310369024U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x633 = INT16_MIN;
	volatile uint64_t x634 = 39547242736LLU;
	int16_t x635 = INT16_MIN;
	uint32_t x636 = 3352U;
	static uint64_t t72 = 1316122LLU;

	t72 = (x633*((x634*x635)*x636));

	if (t72 != 2670425259504566272LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x637 = -1LL;
	uint64_t x638 = UINT64_MAX;
	int16_t x639 = -1;
	static uint64_t x640 = 6298399526LLU;

	t73 = (x637*((x638*x639)*x640));

	if (t73 != 18446744067411152090LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x641 = INT8_MIN;
	uint64_t x642 = 12312441264LLU;
	uint32_t x643 = UINT32_MAX;

	t74 = (x641*((x642*x643)*x644));

	if (t74 != 16328180789115404288LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x645 = 381U;
	int64_t x646 = 44857LL;
	uint8_t x647 = 11U;
	int32_t x648 = 28249845;
	volatile int64_t t75 = 202531LL;

	t75 = (x645*((x646*x647)*x648));

	if (t75 != 5310849018418515LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x650 = INT16_MAX;
	int16_t x652 = INT16_MIN;
	static int64_t t76 = 53LL;

	t76 = (x649*((x650*x651)*x652));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x661 = INT8_MIN;
	static volatile int64_t x662 = -1LL;
	uint8_t x663 = UINT8_MAX;
	uint16_t x664 = 13U;
	volatile int64_t t77 = 789899646105946LL;

	t77 = (x661*((x662*x663)*x664));

	if (t77 != 424320LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x665 = 0;
	int32_t x667 = -1;
	volatile int8_t x668 = INT8_MAX;
	static volatile int64_t t78 = 10454980993LL;

	t78 = (x665*((x666*x667)*x668));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x669 = 980730LLU;
	int16_t x670 = INT16_MIN;
	static uint32_t x671 = 0U;
	int16_t x672 = INT16_MIN;
	static volatile uint64_t t79 = 456929513LLU;

	t79 = (x669*((x670*x671)*x672));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x677 = 28;
	static uint32_t x678 = 4251U;
	volatile int32_t x679 = INT32_MIN;
	uint32_t t80 = 158186U;

	t80 = (x677*((x678*x679)*x680));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x689 = -1;
	int64_t x690 = INT64_MIN;
	uint64_t x691 = 12473286921734560LLU;
	uint64_t x692 = UINT64_MAX;
	uint64_t t81 = 1LLU;

	t81 = (x689*((x690*x691)*x692));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x713 = 6650U;
	int8_t x715 = INT8_MAX;
	uint32_t x716 = UINT32_MAX;

	t82 = (x713*((x714*x715)*x716));

	if (t82 != 4187709446U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x717 = 1;
	volatile int8_t x719 = -1;
	volatile int8_t x720 = INT8_MIN;

	t83 = (x717*((x718*x719)*x720));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x729 = INT8_MIN;
	uint32_t x730 = 7650398U;
	uint16_t x731 = 669U;
	int32_t x732 = INT32_MAX;
	static volatile uint32_t t84 = 12836U;

	t84 = (x729*((x730*x731)*x732));

	if (t84 != 2283852544U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x737 = INT8_MIN;
	static int32_t x738 = 18;
	volatile int8_t x739 = 8;
	volatile int32_t t85 = 6645;

	t85 = (x737*((x738*x739)*x740));

	if (t85 != 18432) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x741 = -1;
	int16_t x743 = -1;
	volatile int16_t x744 = -1;
	int32_t t86 = 29;

	t86 = (x741*((x742*x743)*x744));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x753 = 1;
	int8_t x754 = INT8_MIN;
	static volatile int16_t x755 = INT16_MIN;
	int64_t x756 = -1LL;

	t87 = (x753*((x754*x755)*x756));

	if (t87 != -4194304LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x758 = 7941U;
	int16_t x760 = -1;

	t88 = (x757*((x758*x759)*x760));

	if (t88 != -262053) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x769 = 61U;
	int64_t x770 = 435LL;
	int32_t x771 = -1;
	int64_t x772 = -1LL;
	volatile int64_t t89 = -2785169631226184LL;

	t89 = (x769*((x770*x771)*x772));

	if (t89 != 26535LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x774 = UINT64_MAX;
	int16_t x775 = 34;
	volatile int16_t x776 = -1;
	uint64_t t90 = 217009952995161482LLU;

	t90 = (x773*((x774*x775)*x776));

	if (t90 != 18446744073709491198LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x777 = 9U;
	int32_t x778 = -1;
	uint32_t x779 = UINT32_MAX;
	static int8_t x780 = INT8_MIN;
	volatile uint32_t t91 = 39478418U;

	t91 = (x777*((x778*x779)*x780));

	if (t91 != 4294966144U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x785 = 1535746122U;
	uint8_t x786 = 11U;
	uint32_t x787 = UINT32_MAX;
	static int32_t x788 = -1;
	volatile uint32_t t92 = 7954742U;

	t92 = (x785*((x786*x787)*x788));

	if (t92 != 4008305454U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x793 = UINT64_MAX;
	int32_t x794 = 231603524;
	uint32_t x795 = 6219U;
	int8_t x796 = INT8_MIN;

	t93 = (x793*((x794*x795)*x796));

	if (t93 != 18446744071759820288LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x801 = INT8_MAX;
	volatile uint32_t t94 = 6U;

	t94 = (x801*((x802*x803)*x804));

	if (t94 != 4294951040U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x813 = INT8_MIN;
	volatile uint32_t x814 = 11151U;
	int32_t x815 = INT32_MIN;

	t95 = (x813*((x814*x815)*x816));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x818 = 0;
	static int64_t x819 = -174784LL;
	int64_t t96 = -158LL;

	t96 = (x817*((x818*x819)*x820));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x821 = UINT32_MAX;
	uint16_t x822 = 1313U;
	int32_t x823 = 761;
	int8_t x824 = INT8_MIN;

	t97 = (x821*((x822*x823)*x824));

	if (t97 != 127896704U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x829 = 8661LL;
	static uint32_t x830 = UINT32_MAX;
	uint64_t x831 = UINT64_MAX;
	uint64_t t98 = 537692038864495300LLU;

	t98 = (x829*((x830*x831)*x832));

	if (t98 != 16424027986014037103LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x837 = 108124378333474355LL;
	static volatile int16_t x838 = 0;
	static int8_t x839 = -1;
	int64_t x840 = -1LL;
	volatile int64_t t99 = -61173871241LL;

	t99 = (x837*((x838*x839)*x840));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

