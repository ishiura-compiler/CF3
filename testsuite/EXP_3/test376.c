#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x10 = 6U;
int16_t x12 = INT16_MIN;
int16_t x17 = -1;
static int32_t x21 = -1;
static uint16_t x31 = 1223U;
static int64_t x50 = 819194878229LL;
static uint8_t x61 = 0U;
static int64_t x62 = INT64_MIN;
int16_t x63 = INT16_MAX;
static uint8_t x85 = 63U;
static volatile uint64_t x86 = UINT64_MAX;
volatile int32_t x90 = -17512370;
int16_t x91 = -1;
static volatile uint8_t x92 = UINT8_MAX;
int32_t t8 = -35356;
static volatile int16_t x102 = INT16_MIN;
uint64_t t9 = 1690356780050337083LLU;
volatile uint8_t x106 = UINT8_MAX;
int8_t x120 = INT8_MIN;
uint32_t t11 = 70775U;
static int32_t t12 = 7637931;
int64_t x130 = 2531669843182047591LL;
int64_t x134 = 83635044659569LL;
volatile uint64_t t14 = 109630LLU;
uint64_t x138 = 1592494544LLU;
uint64_t t15 = 14335LLU;
static volatile uint32_t x150 = 1U;
uint8_t x176 = 0U;
static uint32_t t22 = 852U;
static volatile int64_t x208 = -1LL;
volatile int64_t x229 = 4114393584916LL;
uint16_t x233 = 19U;
volatile int64_t t25 = -748010819LL;
int8_t x242 = 4;
volatile uint64_t t27 = 395LLU;
static volatile int32_t t29 = -60593;
static int8_t x259 = INT8_MAX;
int16_t x267 = -2;
int8_t x268 = INT8_MIN;
static uint64_t x278 = 1365LLU;
int32_t x282 = -10280;
static uint8_t x293 = 113U;
int16_t x295 = 5156;
volatile uint32_t x304 = 16226U;
static uint16_t x306 = 23218U;
static uint16_t x308 = 1U;
int32_t x310 = -1;
volatile int16_t x314 = INT16_MIN;
int8_t x323 = -1;
volatile int8_t x330 = 0;
static int64_t x341 = -1LL;
uint8_t x344 = 0U;
int64_t x345 = -10LL;
int16_t x353 = 10;
volatile int32_t x356 = INT32_MIN;
int16_t x365 = INT16_MIN;
uint8_t x367 = 6U;
int64_t x380 = -24576009LL;
int8_t x382 = INT8_MIN;
int16_t x388 = 0;
uint64_t x411 = UINT64_MAX;
volatile int8_t x417 = 26;
int32_t x418 = -1;
int8_t x431 = INT8_MAX;
volatile int64_t t58 = -79404963189391LL;
volatile uint32_t x457 = 1U;
int32_t x489 = -235;
static uint8_t x490 = UINT8_MAX;
int16_t x517 = -9;
uint64_t x523 = 247275242LLU;
uint64_t x524 = 614788837350LLU;
uint16_t x539 = 680U;
uint64_t t67 = 17400707LLU;
uint64_t x549 = UINT64_MAX;
int8_t x555 = -1;
int64_t x562 = 16000LL;
volatile uint64_t x564 = UINT64_MAX;
volatile uint64_t t70 = 765774022LLU;
uint32_t x567 = 1797U;
int8_t x575 = INT8_MIN;
int64_t x576 = -2317807837298901LL;
volatile int16_t x599 = -1;
static volatile int16_t x600 = -1;
uint32_t x604 = 245913267U;
volatile uint64_t t78 = 104700827878227322LLU;
volatile int16_t x614 = -4411;
uint16_t x616 = 61U;
static uint16_t x628 = UINT16_MAX;
int8_t x633 = 11;
int8_t x634 = INT8_MIN;
int32_t x650 = 41239439;
static uint32_t x679 = 219283U;
volatile int16_t x683 = INT16_MAX;
int16_t x695 = -1;
static volatile int32_t t90 = 453;
volatile int16_t x729 = INT16_MAX;
int16_t x732 = -1;
static uint16_t x735 = 1068U;
int16_t x736 = 512;
volatile uint32_t t93 = 1U;
int16_t x744 = INT16_MIN;
volatile int32_t x745 = -3;
uint64_t x747 = UINT64_MAX;
int32_t x763 = 242121;
volatile uint64_t t98 = UINT64_MAX;
uint32_t x774 = UINT32_MAX;
uint32_t t99 = 12U;


void f0(void) {
	uint64_t x9 = 922LLU;
	volatile uint64_t x11 = 47205013235850LLU;
	volatile uint64_t t0 = 4831484625366587LLU;

	t0 = ((x9*x10)|(x11*x12));

	if (t0 != 16899930199997224348LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x18 = INT16_MAX;
	uint64_t x19 = 3230457202LLU;
	int16_t x20 = INT16_MAX;
	volatile uint64_t t1 = 367LLU;

	t1 = ((x17*x18)|(x19*x20));

	if (t1 != 18446744073709527695LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = 7;
	static volatile uint8_t x23 = 29U;
	volatile uint64_t x24 = 441832833457682162LLU;
	static volatile uint64_t t2 = 874LLU;

	t2 = ((x21*x22)|(x23*x24));

	if (t2 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = -1;
	uint64_t x26 = 836515711152LLU;
	int8_t x27 = INT8_MAX;
	volatile int32_t x28 = 200;
	uint64_t t3 = 63139889137970414LLU;

	t3 = ((x25*x26)|(x27*x28));

	if (t3 != 18446743237193856888LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	uint64_t x32 = 22734LLU;
	uint64_t t4 = 14228734966LLU;

	t4 = ((x29*x30)|(x31*x32));

	if (t4 != 9223372036882579490LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x49 = -1LL;
	static volatile int32_t x51 = -1;
	int64_t x52 = INT64_MAX;
	int64_t t5 = -3688512584LL;

	t5 = ((x49*x50)|(x51*x52));

	if (t5 != -819194878229LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x64 = 156698370463127LL;
	static volatile int64_t t6 = 879477338438358LL;

	t6 = ((x61*x62)|(x63*x64));

	if (t6 != 5134535504965282409LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x87 = 239;
	static volatile int8_t x88 = INT8_MIN;
	uint64_t t7 = 4382131919251027566LLU;

	t7 = ((x85*x86)|(x87*x88));

	if (t7 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x89 = -1;

	t8 = ((x89*x90)|(x91*x92));

	if (t8 != -77) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x101 = 673583121LLU;
	uint64_t x103 = 1632LLU;
	static volatile int8_t x104 = -1;

	t9 = ((x101*x102)|(x103*x104));

	if (t9 != 18446744073709549984LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x105 = 1U;
	uint16_t x107 = 533U;
	uint32_t x108 = 3U;
	static volatile uint32_t t10 = 1716196513U;

	t10 = ((x105*x106)|(x107*x108));

	if (t10 != 1791U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x117 = 261U;
	volatile int32_t x118 = INT32_MIN;
	volatile uint8_t x119 = UINT8_MAX;

	t11 = ((x117*x118)|(x119*x120));

	if (t11 != 4294934656U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = INT8_MAX;
	uint16_t x122 = 137U;
	uint16_t x123 = 31U;
	int16_t x124 = -1;

	t12 = ((x121*x122)|(x123*x124));

	if (t12 != -9) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x129 = 1U;
	volatile int16_t x131 = INT16_MIN;
	volatile uint32_t x132 = UINT32_MAX;
	static int64_t t13 = 335LL;

	t13 = ((x129*x130)|(x131*x132));

	if (t13 != 2531669843182080359LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x133 = INT8_MAX;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 775258LLU;

	t14 = ((x133*x134)|(x135*x136));

	if (t14 != 18446744073038137103LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x137 = 0U;
	volatile int32_t x139 = 59814;
	int16_t x140 = 176;

	t15 = ((x137*x138)|(x139*x140));

	if (t15 != 10527264LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x141 = 2312LL;
	volatile int8_t x142 = 22;
	static int64_t x143 = 6171936565330934LL;
	int8_t x144 = -1;
	static int64_t t16 = -388803906845LL;

	t16 = ((x141*x142)|(x143*x144));

	if (t16 != -6171936565297478LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x149 = 3U;
	static uint16_t x151 = 1868U;
	volatile uint32_t x152 = UINT32_MAX;
	uint32_t t17 = 520U;

	t17 = ((x149*x150)|(x151*x152));

	if (t17 != 4294965431U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x157 = 21;
	static volatile int16_t x158 = INT16_MIN;
	int64_t x159 = 1795009790466479LL;
	static int8_t x160 = INT8_MIN;
	volatile int64_t t18 = -64137091LL;

	t18 = ((x157*x158)|(x159*x160));

	if (t18 != -546688LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x169 = INT64_MAX;
	static int8_t x170 = -1;
	int32_t x171 = -12;
	int64_t x172 = -1LL;
	volatile int64_t t19 = -2571930192682LL;

	t19 = ((x169*x170)|(x171*x172));

	if (t19 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MAX;
	static volatile int64_t x175 = INT64_MIN;
	volatile int64_t t20 = -49492188LL;

	t20 = ((x173*x174)|(x175*x176));

	if (t20 != -1073709056LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	static int16_t x180 = INT16_MAX;
	int32_t t21 = 18090;

	t21 = ((x177*x178)|(x179*x180));

	if (t21 != -1073709056) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x193 = 14607U;
	int16_t x194 = INT16_MIN;
	int16_t x195 = 1;
	int32_t x196 = 0;

	t22 = ((x193*x194)|(x195*x196));

	if (t22 != 3816325120U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x205 = 915977U;
	int32_t x206 = 2;
	int32_t x207 = INT32_MIN;
	volatile int64_t t23 = 24594LL;

	t23 = ((x205*x206)|(x207*x208));

	if (t23 != 2149315602LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x230 = UINT8_MAX;
	static uint64_t x231 = 255LLU;
	uint64_t x232 = 2LLU;
	static volatile uint64_t t24 = 381674161926224LLU;

	t24 = ((x229*x230)|(x231*x232));

	if (t24 != 1049170364153854LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x234 = 27U;
	static int64_t x235 = 30LL;
	int64_t x236 = -1LL;

	t25 = ((x233*x234)|(x235*x236));

	if (t25 != -29LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x241 = UINT32_MAX;
	uint8_t x243 = UINT8_MAX;
	int8_t x244 = INT8_MIN;
	volatile uint32_t t26 = 15163545U;

	t26 = ((x241*x242)|(x243*x244));

	if (t26 != 4294967292U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x245 = INT8_MIN;
	uint64_t x246 = 376640206224LLU;
	volatile uint64_t x247 = 53691752468LLU;
	static int32_t x248 = INT32_MAX;

	t27 = ((x245*x246)|(x247*x248));

	if (t27 != 18446708887189848044LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	volatile uint16_t x251 = 7290U;
	static int32_t x252 = -1;
	uint32_t t28 = 39U;

	t28 = ((x249*x250)|(x251*x252));

	if (t28 != 4294960006U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int16_t x256 = -1;

	t29 = ((x253*x254)|(x255*x256));

	if (t29 != 32896) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x257 = UINT16_MAX;
	volatile uint16_t x258 = 101U;
	static uint64_t x260 = UINT64_MAX;
	static uint64_t t30 = 32187LLU;

	t30 = ((x257*x258)|(x259*x260));

	if (t30 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x261 = 41U;
	int64_t x262 = 21656702528907715LL;
	static int32_t x263 = -727;
	uint64_t x264 = 7864948872LLU;
	volatile uint64_t t31 = 129455515LLU;

	t31 = ((x261*x262)|(x263*x264));

	if (t31 != 18446738506358191611LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x265 = 1U;
	static int64_t x266 = -1LL;
	static volatile int64_t t32 = 57LL;

	t32 = ((x265*x266)|(x267*x268));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x269 = 3;
	int8_t x270 = INT8_MAX;
	int16_t x271 = 12478;
	int32_t x272 = 15590;
	int32_t t33 = -2;

	t33 = ((x269*x270)|(x271*x272));

	if (t33 != 194532349) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x273 = 53;
	static int8_t x274 = 3;
	int32_t x275 = INT32_MAX;
	uint32_t x276 = 42217U;
	uint32_t t34 = 6U;

	t34 = ((x273*x274)|(x275*x276));

	if (t34 != 2147441567U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x279 = 54;
	static volatile int32_t x280 = -1348952;
	volatile uint64_t t35 = 59986354580LLU;

	t35 = ((x277*x278)|(x279*x280));

	if (t35 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x281 = -4;
	uint32_t x283 = 46835843U;
	int8_t x284 = INT8_MIN;
	uint32_t t36 = 149539108U;

	t36 = ((x281*x282)|(x283*x284));

	if (t36 != 2594946720U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x294 = UINT16_MAX;
	static volatile uint32_t x296 = UINT32_MAX;
	uint32_t t37 = 24U;

	t37 = ((x293*x294)|(x295*x296));

	if (t37 != 4294967263U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x301 = INT16_MIN;
	uint64_t x302 = 159412382LLU;
	volatile int16_t x303 = INT16_MIN;
	uint64_t t38 = 9LLU;

	t38 = ((x301*x302)|(x303*x304));

	if (t38 != 18446738850626600960LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x305 = INT16_MAX;
	uint16_t x307 = 421U;
	int32_t t39 = -3928191;

	t39 = ((x305*x306)|(x307*x308));

	if (t39 != 760784367) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = 0U;
	int64_t t40 = -342777LL;

	t40 = ((x309*x310)|(x311*x312));

	if (t40 != -255LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x313 = -88298849773LL;
	uint32_t x315 = 204390711U;
	static volatile int16_t x316 = -1;
	static int64_t t41 = -308094945023247951LL;

	t41 = ((x313*x314)|(x315*x316));

	if (t41 != 2893377531526857LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x317 = -1LL;
	int8_t x318 = -19;
	static uint64_t x319 = 8LLU;
	int32_t x320 = INT32_MIN;
	static uint64_t t42 = 3673460261458985LLU;

	t42 = ((x317*x318)|(x319*x320));

	if (t42 != 18446744056529682451LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	int64_t x324 = 207869867594LL;
	uint64_t t43 = 98326640LLU;

	t43 = ((x321*x322)|(x323*x324));

	if (t43 != 18446743865839684022LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x329 = 0;
	int16_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	int32_t t44 = -501553;

	t44 = ((x329*x330)|(x331*x332));

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	int64_t t45 = 35421899110753181LL;

	t45 = ((x341*x342)|(x343*x344));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x346 = -1;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = 259424067U;
	static volatile int64_t t46 = 1LL;

	t46 = ((x345*x346)|(x347*x348));

	if (t46 != 3227418634LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x349 = 993268512098LLU;
	uint64_t x350 = 2014851LLU;
	volatile int8_t x351 = INT8_MAX;
	static uint16_t x352 = UINT16_MAX;
	uint64_t t47 = 817293001LLU;

	t47 = ((x349*x350)|(x351*x352));

	if (t47 != 2001288054874046375LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x354 = 17;
	int64_t x355 = -1LL;
	int64_t t48 = -11LL;

	t48 = ((x353*x354)|(x355*x356));

	if (t48 != 2147483818LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x357 = 1354067789785168LLU;
	int16_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	volatile uint16_t x360 = 868U;
	uint64_t t49 = 7029075559LLU;

	t49 = ((x357*x358)|(x359*x360));

	if (t49 != 18445390005936586684LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x366 = 2U;
	volatile int16_t x368 = 358;
	volatile int32_t t50 = 0;

	t50 = ((x365*x366)|(x367*x368));

	if (t50 != -63388) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = 1;
	uint8_t x379 = UINT8_MAX;
	static int64_t t51 = 42LL;

	t51 = ((x377*x378)|(x379*x380));

	if (t51 != -1971914999LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x381 = 72457884LLU;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = 1U;
	volatile uint64_t t52 = 191809868435LLU;

	t52 = ((x381*x382)|(x383*x384));

	if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x385 = 5848790LLU;
	static volatile int32_t x386 = 4670;
	uint32_t x387 = 56926U;
	uint64_t t53 = 71940176650239814LLU;

	t53 = ((x385*x386)|(x387*x388));

	if (t53 != 27313849300LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x409 = -7023;
	uint64_t x410 = 125362699LLU;
	int64_t x412 = -1LL;
	volatile uint64_t t54 = 4123964450833395LLU;

	t54 = ((x409*x410)|(x411*x412));

	if (t54 != 18446743193287316539LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x413 = 3U;
	int8_t x414 = INT8_MIN;
	volatile int32_t x415 = INT32_MAX;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t55 = 5014030444LLU;

	t55 = ((x413*x414)|(x415*x416));

	if (t55 != 18446744073709551233LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x419 = 54805518U;
	volatile int8_t x420 = 21;
	uint32_t t56 = 60028U;

	t56 = ((x417*x418)|(x419*x420));

	if (t56 != 4294967270U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x429 = 12;
	volatile uint64_t x430 = UINT64_MAX;
	int16_t x432 = INT16_MIN;
	static volatile uint64_t t57 = 14994670866292759LLU;

	t57 = ((x429*x430)|(x431*x432));

	if (t57 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x449 = -216251643603929LL;
	int16_t x450 = 8015;
	int8_t x451 = -1;
	int32_t x452 = -1;

	t58 = ((x449*x450)|(x451*x452));

	if (t58 != -1733256923485490935LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x458 = 14000LLU;
	int64_t x459 = -1LL;
	uint8_t x460 = 102U;
	uint64_t t59 = 1LLU;

	t59 = ((x457*x458)|(x459*x460));

	if (t59 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x473 = -1;
	static int16_t x474 = -1;
	int16_t x475 = 8;
	int16_t x476 = INT16_MAX;
	int32_t t60 = 20954100;

	t60 = ((x473*x474)|(x475*x476));

	if (t60 != 262137) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x491 = 12235202LL;
	static int32_t x492 = -19843853;
	volatile int64_t t61 = 277LL;

	t61 = ((x489*x490)|(x491*x492));

	if (t61 != -51217LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x513 = UINT64_MAX;
	static int16_t x514 = INT16_MIN;
	int32_t x515 = INT32_MAX;
	volatile int16_t x516 = 1;
	volatile uint64_t t62 = 45183036466708140LLU;

	t62 = ((x513*x514)|(x515*x516));

	if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x518 = -1;
	uint32_t x519 = 2U;
	uint8_t x520 = UINT8_MAX;
	volatile uint32_t t63 = 154803863U;

	t63 = ((x517*x518)|(x519*x520));

	if (t63 != 511U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x521 = -57;
	int16_t x522 = -1;
	uint64_t t64 = 3408862175821LLU;

	t64 = ((x521*x522)|(x523*x524));

	if (t64 != 4448105944943475773LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x525 = 1406U;
	int32_t x526 = INT32_MIN;
	static volatile int8_t x527 = INT8_MIN;
	volatile int8_t x528 = 27;
	uint32_t t65 = 6U;

	t65 = ((x525*x526)|(x527*x528));

	if (t65 != 4294963840U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x537 = 1;
	volatile int32_t x538 = -1;
	int16_t x540 = INT16_MIN;
	volatile int32_t t66 = -9389157;

	t66 = ((x537*x538)|(x539*x540));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x541 = 42485U;
	volatile uint64_t x542 = 6LLU;
	int8_t x543 = -1;
	static int16_t x544 = INT16_MAX;

	t67 = ((x541*x542)|(x543*x544));

	if (t67 != 18446744073709544383LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x550 = 209496U;
	uint64_t x551 = 2029379686465650LLU;
	static volatile int32_t x552 = INT32_MIN;
	volatile uint64_t t68 = 435724173980097LLU;

	t68 = ((x549*x550)|(x551*x552));

	if (t68 != 18446744073709342120LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x553 = 1LL;
	volatile int64_t x554 = INT64_MIN;
	int64_t x556 = INT64_MAX;
	int64_t t69 = 30133770751659633LL;

	t69 = ((x553*x554)|(x555*x556));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x561 = 162;
	volatile uint16_t x563 = UINT16_MAX;

	t70 = ((x561*x562)|(x563*x564));

	if (t70 != 18446744073709522177LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x565 = 252U;
	int16_t x566 = INT16_MIN;
	int8_t x568 = 0;
	volatile uint32_t t71 = 0U;

	t71 = ((x565*x566)|(x567*x568));

	if (t71 != 4286709760U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x573 = 13U;
	volatile int16_t x574 = INT16_MIN;
	int64_t t72 = -4LL;

	t72 = ((x573*x574)|(x575*x576));

	if (t72 != -398720LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x581 = INT8_MIN;
	uint32_t x582 = 336U;
	volatile int32_t x583 = -514141;
	uint32_t x584 = 12606348U;
	uint32_t t73 = 1683194034U;

	t73 = ((x581*x582)|(x583*x584));

	if (t73 != 4294958628U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x589 = 6486U;
	int8_t x590 = -1;
	int32_t x591 = -1;
	int16_t x592 = 55;
	volatile uint32_t t74 = 146219039U;

	t74 = ((x589*x590)|(x591*x592));

	if (t74 != 4294967275U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x593 = INT16_MIN;
	int16_t x594 = INT16_MIN;
	volatile int8_t x595 = INT8_MIN;
	static uint8_t x596 = UINT8_MAX;
	volatile int32_t t75 = -17667640;

	t75 = ((x593*x594)|(x595*x596));

	if (t75 != -32640) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x597 = UINT64_MAX;
	int32_t x598 = INT32_MIN;
	uint64_t t76 = 655551LLU;

	t76 = ((x597*x598)|(x599*x600));

	if (t76 != 2147483649LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x601 = -2;
	static volatile uint8_t x602 = 1U;
	int16_t x603 = INT16_MIN;
	uint32_t t77 = 507190677U;

	t77 = ((x601*x602)|(x603*x604));

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x609 = 1U;
	int64_t x610 = -223554LL;
	int32_t x611 = -1;
	uint64_t x612 = 178889126LLU;

	t78 = ((x609*x610)|(x611*x612));

	if (t78 != 18446744073709477630LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x613 = -5987;
	volatile int16_t x615 = 6437;
	int32_t t79 = 1070201;

	t79 = ((x613*x614)|(x615*x616));

	if (t79 != 26738641) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x625 = 2U;
	volatile uint64_t x626 = UINT64_MAX;
	int16_t x627 = 357;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x625*x626)|(x627*x628));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x635 = -1LL;
	int16_t x636 = INT16_MIN;
	volatile int64_t t81 = -56692087924LL;

	t81 = ((x633*x634)|(x635*x636));

	if (t81 != -1408LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x641 = -1;
	static int32_t x642 = -1;
	int16_t x643 = -4937;
	uint32_t x644 = 13172U;
	uint32_t t82 = 1759456388U;

	t82 = ((x641*x642)|(x643*x644));

	if (t82 != 4229937133U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x649 = 16;
	uint16_t x651 = 10413U;
	int16_t x652 = INT16_MIN;
	int32_t t83 = -4530;

	t83 = ((x649*x650)|(x651*x652));

	if (t83 != -268584720) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x677 = UINT64_MAX;
	int64_t x678 = INT64_MAX;
	int32_t x680 = INT32_MIN;
	uint64_t t84 = 0LLU;

	t84 = ((x677*x678)|(x679*x680));

	if (t84 != 9223372039002259457LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x681 = 1U;
	int64_t x682 = INT64_MAX;
	uint8_t x684 = 50U;
	int64_t t85 = INT64_MAX;

	t85 = ((x681*x682)|(x683*x684));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x689 = INT8_MIN;
	static uint64_t x690 = 139752578690LLU;
	volatile int8_t x691 = -1;
	int32_t x692 = -1;
	uint64_t t86 = 690501576432LLU;

	t86 = ((x689*x690)|(x691*x692));

	if (t86 != 18446726185379479297LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x693 = 3U;
	int16_t x694 = INT16_MIN;
	uint8_t x696 = UINT8_MAX;
	static int32_t t87 = -1256812;

	t87 = ((x693*x694)|(x695*x696));

	if (t87 != -255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x701 = -1LL;
	int32_t x702 = -1;
	int32_t x703 = -1;
	int8_t x704 = -1;
	volatile int64_t t88 = -750417988440667LL;

	t88 = ((x701*x702)|(x703*x704));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x717 = UINT16_MAX;
	static uint64_t x718 = UINT64_MAX;
	volatile int64_t x719 = 9599LL;
	uint8_t x720 = 11U;
	volatile uint64_t t89 = 740LLU;

	t89 = ((x717*x718)|(x719*x720));

	if (t89 != 18446744073709526133LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x721 = -1;
	uint8_t x722 = 6U;
	int8_t x723 = INT8_MIN;
	int8_t x724 = 0;

	t90 = ((x721*x722)|(x723*x724));

	if (t90 != -6) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x725 = 52U;
	int16_t x726 = INT16_MIN;
	int16_t x727 = 922;
	int8_t x728 = -3;
	int32_t t91 = -10500;

	t91 = ((x725*x726)|(x727*x728));

	if (t91 != -2766) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x730 = 1;
	int8_t x731 = INT8_MIN;
	int32_t t92 = 178104035;

	t92 = ((x729*x730)|(x731*x732));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x733 = UINT32_MAX;
	uint32_t x734 = UINT32_MAX;

	t93 = ((x733*x734)|(x735*x736));

	if (t93 != 546817U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x741 = 21;
	volatile uint64_t x742 = UINT64_MAX;
	volatile int32_t x743 = 1;
	static volatile uint64_t t94 = 0LLU;

	t94 = ((x741*x742)|(x743*x744));

	if (t94 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x746 = 3063U;
	int8_t x748 = -1;
	volatile uint64_t t95 = 9617243545LLU;

	t95 = ((x745*x746)|(x747*x748));

	if (t95 != 4294958107LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x761 = -1;
	volatile int64_t x762 = -2373685671LL;
	int16_t x764 = -1;
	volatile int64_t t96 = -360735858LL;

	t96 = ((x761*x762)|(x763*x764));

	if (t96 != -8265LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x765 = -13413;
	volatile int16_t x766 = -1;
	static int16_t x767 = -75;
	static volatile uint64_t x768 = 1732260929699065LLU;
	uint64_t t97 = 11047639377768463LLU;

	t97 = ((x765*x766)|(x767*x768));

	if (t97 != 18316824503982126957LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x769 = 48;
	static int16_t x770 = -2959;
	static uint64_t x771 = UINT64_MAX;
	int16_t x772 = 1;

	t98 = ((x769*x770)|(x771*x772));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x773 = INT16_MIN;
	volatile uint32_t x775 = 6U;
	int16_t x776 = 166;

	t99 = ((x773*x774)|(x775*x776));

	if (t99 != 33764U) { NG(); } else { ; }
	
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

