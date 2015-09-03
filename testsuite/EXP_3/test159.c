#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x19 = -1;
static uint32_t x20 = 269357970U;
uint8_t x26 = 27U;
static int32_t x39 = -410;
uint64_t t5 = 710191LLU;
int64_t x49 = -1LL;
static volatile int64_t t7 = -553519060097298LL;
int64_t x53 = INT64_MAX;
int64_t t8 = -7980175LL;
volatile int8_t x57 = 11;
volatile int32_t t10 = 535112162;
volatile int32_t x66 = -7;
volatile uint64_t t11 = 132LLU;
uint8_t x69 = 4U;
volatile int64_t x73 = -271188745LL;
volatile uint16_t x74 = UINT16_MAX;
int8_t x75 = -1;
uint32_t t14 = 1U;
uint64_t x83 = 2LLU;
int32_t x88 = -25973044;
uint32_t x103 = 127274050U;
static int64_t x120 = INT64_MIN;
uint32_t x142 = 41U;
volatile int32_t x151 = 3388;
static volatile uint64_t t25 = 395181487167588LLU;
int8_t x168 = -1;
uint64_t x182 = 738590631598LLU;
int64_t x184 = INT64_MIN;
uint8_t x188 = 4U;
static volatile uint32_t x199 = 3600753U;
static volatile uint32_t t32 = 4U;
int32_t t33 = 433333557;
static int16_t x205 = INT16_MIN;
int16_t x207 = INT16_MIN;
static int32_t t34 = -2102147;
int16_t x212 = INT16_MAX;
int32_t t35 = -3983395;
uint32_t t36 = 5U;
int32_t x221 = -221330683;
static volatile int64_t x226 = INT64_MIN;
volatile int64_t t43 = 416771468499582LL;
static int32_t x269 = 45188068;
int64_t x282 = -1LL;
static volatile int32_t x296 = -1;
volatile int8_t x304 = 49;
uint32_t t53 = 9169525U;
int64_t x316 = 96317423933785LL;
uint32_t x327 = UINT32_MAX;
uint8_t x329 = 5U;
uint16_t x333 = 742U;
static uint16_t x334 = 0U;
volatile int64_t x336 = -13LL;
uint32_t x341 = UINT32_MAX;
int16_t x349 = INT16_MAX;
int16_t x350 = -1;
int32_t t63 = 30;
static uint64_t x377 = 41LLU;
uint16_t x380 = UINT16_MAX;
volatile int8_t x386 = -1;
volatile uint64_t t68 = 42021427576LLU;
static int8_t x427 = -1;
uint16_t x439 = 26116U;
int8_t x442 = INT8_MIN;
uint8_t x455 = 3U;
volatile int32_t t78 = 112251545;
int8_t x462 = INT8_MIN;
uint32_t x464 = 34330465U;
volatile int64_t t79 = -290014881457907242LL;
uint64_t x476 = UINT64_MAX;
volatile int16_t x480 = INT16_MIN;
int8_t x497 = 12;
uint64_t t83 = 7393LLU;
volatile uint32_t t85 = 56643416U;
int8_t x511 = -1;
volatile int32_t t86 = 3;
static uint64_t t88 = 3283LLU;
static int16_t x529 = INT16_MIN;
static uint64_t x530 = UINT64_MAX;
volatile uint64_t t90 = 30121353965027494LLU;
int8_t x540 = INT8_MAX;
int16_t x541 = INT16_MIN;
volatile int8_t x543 = -43;
volatile int8_t x545 = 6;
uint32_t x548 = 392365792U;
volatile uint32_t x561 = UINT32_MAX;
volatile int32_t x562 = 292082;
uint32_t t96 = 366U;
int64_t x573 = 1600843465246761937LL;
uint64_t x577 = UINT64_MAX;
uint64_t t98 = 4413622122974LLU;


void f0(void) {
	volatile int16_t x5 = 1442;
	uint8_t x6 = 2U;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = -15844;
	int32_t t0 = -2;

	t0 = ((x5^x6)*(x7+x8));

	if (t0 != -22448160) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x17 = 5U;
	uint64_t x18 = UINT64_MAX;
	volatile uint64_t t1 = 6LLU;

	t1 = ((x17^x18)*(x19+x20));

	if (t1 != 18446744072093403802LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = 907U;
	uint8_t x27 = 0U;
	volatile int8_t x28 = 2;
	volatile int32_t t2 = -1;

	t2 = ((x25^x26)*(x27+x28));

	if (t2 != 1824) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;
	int32_t x36 = -56;
	static int32_t t3 = -357;

	t3 = ((x33^x34)*(x35+x36));

	if (t3 != 7353) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = -1;
	int16_t x38 = -1;
	uint64_t x40 = 97867686LLU;
	static uint64_t t4 = 2LLU;

	t4 = ((x37^x38)*(x39+x40));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x41 = 4LLU;
	int16_t x42 = -1;
	int8_t x43 = 5;
	uint64_t x44 = UINT64_MAX;

	t5 = ((x41^x42)*(x43+x44));

	if (t5 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x45 = 477113U;
	uint8_t x46 = 60U;
	int8_t x47 = 0;
	static volatile int32_t x48 = INT32_MAX;
	volatile uint32_t t6 = 79U;

	t6 = ((x45^x46)*(x47+x48));

	if (t6 != 2147006587U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x50 = 30;
	uint8_t x51 = 14U;
	uint16_t x52 = UINT16_MAX;

	t7 = ((x49^x50)*(x51+x52));

	if (t7 != -2032019LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = INT64_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	uint16_t x56 = UINT16_MAX;

	t8 = ((x53^x54)*(x55+x56));

	if (t8 != -65790LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x58 = 238;
	int64_t x59 = 1861819272266LL;
	static uint32_t x60 = 127536U;
	static int64_t t9 = -182261296989416LL;

	t9 = ((x57^x58)*(x59+x60));

	if (t9 != 426356642554658LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = -9;

	t10 = ((x61^x62)*(x63+x64));

	if (t10 != 8060682) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MIN;

	t11 = ((x65^x66)*(x67+x68));

	if (t11 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x70 = -1;
	int64_t x71 = -1LL;
	uint32_t x72 = UINT32_MAX;
	int64_t t12 = -147332756305620LL;

	t12 = ((x69^x70)*(x71+x72));

	if (t12 != -21474836470LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x76 = 5U;
	static volatile int64_t t13 = 2LL;

	t13 = ((x73^x74)*(x75+x76));

	if (t13 != -1085010912LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 618826418U;
	volatile uint16_t x78 = 102U;
	static uint16_t x79 = 657U;
	uint32_t x80 = UINT32_MAX;

	t14 = ((x77^x78)*(x79+x80));

	if (t14 != 2223226688U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x81 = UINT16_MAX;
	int64_t x82 = -1LL;
	int8_t x84 = INT8_MIN;
	static volatile uint64_t t15 = 796804177063LLU;

	t15 = ((x81^x82)*(x83+x84));

	if (t15 != 8257536LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	int16_t x87 = -68;
	int64_t t16 = -846664099517994999LL;

	t16 = ((x85^x86)*(x87+x88));

	if (t16 != 25973112LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MAX;
	static int16_t x100 = INT16_MIN;
	int64_t t17 = -62056016132802220LL;

	t17 = ((x97^x98)*(x99+x100));

	if (t17 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -86;
	uint16_t x102 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	uint32_t t18 = 90U;

	t18 = ((x101^x102)*(x103+x104));

	if (t18 != 2031085418U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	static uint16_t x111 = UINT16_MAX;
	int16_t x112 = 2167;
	uint32_t t19 = 1U;

	t19 = ((x109^x110)*(x111+x112));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = 153;
	int64_t x118 = INT64_MAX;
	static uint64_t x119 = 2092604941383723LLU;
	uint64_t t20 = 57037587256837152LLU;

	t20 = ((x117^x118)*(x119+x120));

	if (t20 != 8901110875881682466LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = 303LLU;
	int32_t x127 = 32;
	static int16_t x128 = -1;
	uint64_t t21 = 288492355582467572LLU;

	t21 = ((x125^x126)*(x127+x128));

	if (t21 != 18446744007137567921LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x133 = -1;
	int32_t x134 = INT32_MIN;
	static volatile int64_t x135 = 343661090LL;
	uint16_t x136 = 872U;
	int64_t t22 = 502626514LL;

	t22 = ((x133^x134)*(x135+x136));

	if (t22 != 738008443490935414LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = 33U;
	int8_t x138 = INT8_MIN;
	int16_t x139 = -417;
	int32_t x140 = -1;
	static volatile int32_t t23 = -674884;

	t23 = ((x137^x138)*(x139+x140));

	if (t23 != 39710) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x141 = 14;
	volatile int32_t x143 = 3;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t24 = 11060520U;

	t24 = ((x141^x142)*(x143+x144));

	if (t24 != 1278030U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x149 = INT16_MIN;
	static int32_t x150 = INT32_MAX;
	uint64_t x152 = 47432794284LLU;

	t25 = ((x149^x150)*(x151+x152));

	if (t25 != 8820861293226160664LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 263U;
	static volatile int8_t x156 = INT8_MAX;
	uint32_t t26 = 11972194U;

	t26 = ((x153^x154)*(x155+x156));

	if (t26 != 12779130U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x157 = -1;
	int16_t x158 = INT16_MAX;
	uint8_t x159 = UINT8_MAX;
	volatile int16_t x160 = -1;
	static int32_t t27 = 48;

	t27 = ((x157^x158)*(x159+x160));

	if (t27 != -8323072) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MAX;
	volatile int16_t x167 = INT16_MIN;
	static volatile int32_t t28 = -1;

	t28 = ((x165^x166)*(x167+x168));

	if (t28 != 32769) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x181 = -1;
	int32_t x183 = INT32_MAX;
	volatile uint64_t t29 = 2169568281LLU;

	t29 = ((x181^x182)*(x183+x184));

	if (t29 != 9532059189622253231LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = -1;
	volatile uint8_t x186 = 1U;
	static uint64_t x187 = 161586743800051LLU;
	volatile uint64_t t30 = 134309973944LLU;

	t30 = ((x185^x186)*(x187+x188));

	if (t30 != 18446420900221951506LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x189 = UINT8_MAX;
	uint8_t x190 = 32U;
	uint64_t x191 = 19342492735912LLU;
	static int64_t x192 = INT64_MAX;
	uint64_t t31 = 59475739LLU;

	t31 = ((x189^x190)*(x191+x192));

	if (t31 != 9227685412734883961LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = INT8_MAX;
	volatile int8_t x198 = -17;
	int32_t x200 = -1;

	t32 = ((x197^x198)*(x199+x200));

	if (t32 != 3891683072U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x201 = -1;
	static int16_t x202 = -1;
	int32_t x203 = 1;
	int16_t x204 = INT16_MIN;

	t33 = ((x201^x202)*(x203+x204));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x206 = INT16_MAX;
	static uint8_t x208 = 10U;

	t34 = ((x205^x206)*(x207+x208));

	if (t34 != 32758) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x209 = -1;
	int8_t x210 = 3;
	uint16_t x211 = UINT16_MAX;

	t35 = ((x209^x210)*(x211+x212));

	if (t35 != -393208) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x217 = 5;
	uint8_t x218 = 95U;
	uint16_t x219 = 30U;
	uint32_t x220 = 7U;

	t36 = ((x217^x218)*(x219+x220));

	if (t36 != 3330U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x222 = INT8_MIN;
	volatile uint64_t x223 = 14496096789081421LLU;
	int64_t x224 = 7147LL;
	volatile uint64_t t37 = 233873LLU;

	t37 = ((x221^x222)*(x223+x224));

	if (t37 != 5542627429987461656LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x225 = -1;
	uint8_t x227 = 40U;
	uint64_t x228 = UINT64_MAX;
	uint64_t t38 = 82LLU;

	t38 = ((x225^x226)*(x227+x228));

	if (t38 != 9223372036854775769LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x241 = INT32_MIN;
	uint64_t x242 = 44LLU;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = 2;
	uint64_t t39 = 3798042344873708878LLU;

	t39 = ((x241^x242)*(x243+x244));

	if (t39 != 270582934104LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x245 = -655;
	int16_t x246 = 251;
	uint64_t x247 = 15532664730002136LLU;
	volatile int32_t x248 = -1;
	static volatile uint64_t t40 = 17727LLU;

	t40 = ((x245^x246)*(x247+x248));

	if (t40 != 8661165293808206566LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x257 = 636;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 7917270LLU;
	static uint64_t t41 = 23LLU;

	t41 = ((x257^x258)*(x259+x260));

	if (t41 != 18429742145760959912LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x261 = INT64_MAX;
	volatile uint64_t x262 = 439374280LLU;
	static int8_t x263 = -2;
	int16_t x264 = -240;
	volatile uint64_t t42 = 2042317864992LLU;

	t42 = ((x261^x262)*(x263+x264));

	if (t42 != 106328576002LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x265 = -1;
	int8_t x266 = INT8_MIN;
	int64_t x267 = -1LL;
	uint8_t x268 = UINT8_MAX;

	t43 = ((x265^x266)*(x267+x268));

	if (t43 != 32258LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x270 = -1LL;
	int64_t x271 = 2259LL;
	static uint64_t x272 = 5922LLU;
	volatile uint64_t t44 = 0LLU;

	t44 = ((x269^x270)*(x271+x272));

	if (t44 != 18446743704025959127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x277 = 35826080144695626LLU;
	int8_t x278 = -28;
	int8_t x279 = 15;
	int8_t x280 = INT8_MIN;
	static uint64_t t45 = 1LLU;

	t45 = ((x277^x278)*(x279+x280));

	if (t45 != 4048347056350606642LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x281 = -1;
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = 1;
	volatile int64_t t46 = -21512LL;

	t46 = ((x281^x282)*(x283+x284));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x285 = 1225LL;
	uint64_t x286 = UINT64_MAX;
	static int8_t x287 = INT8_MIN;
	volatile int16_t x288 = INT16_MAX;
	uint64_t t47 = 135417820819764000LLU;

	t47 = ((x285^x286)*(x287+x288));

	if (t47 != 18446744073669536202LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = 13340;
	static uint64_t x291 = UINT64_MAX;
	static int16_t x292 = INT16_MAX;
	uint64_t t48 = 1260638083036901LLU;

	t48 = ((x289^x290)*(x291+x292));

	if (t48 != 18446744073072973768LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x293 = 260U;
	volatile int8_t x294 = INT8_MAX;
	int64_t x295 = 39147083LL;
	volatile int64_t t49 = 16LL;

	t49 = ((x293^x294)*(x295+x296));

	if (t49 != 14836744078LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x297 = 62U;
	int8_t x298 = INT8_MIN;
	static uint16_t x299 = 1697U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t50 = 354593;

	t50 = ((x297^x298)*(x299+x300));

	if (t50 != 2050686) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x301 = UINT8_MAX;
	volatile uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MAX;
	volatile uint64_t t51 = 553975053578LLU;

	t51 = ((x301^x302)*(x303+x304));

	if (t51 != 18446744073701150720LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x305 = -1;
	volatile int16_t x306 = INT16_MIN;
	int64_t x307 = 2001086059877LL;
	int32_t x308 = INT32_MIN;
	static volatile int64_t t52 = 103LL;

	t52 = ((x305^x306)*(x307+x308));

	if (t52 != 65499220327295643LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x309 = 65078U;
	uint16_t x310 = 69U;
	uint8_t x311 = 1U;
	volatile int8_t x312 = 0;

	t53 = ((x309^x310)*(x311+x312));

	if (t53 != 65139U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x313 = UINT32_MAX;
	int8_t x314 = -9;
	int8_t x315 = 18;
	volatile int64_t t54 = -277745LL;

	t54 = ((x313^x314)*(x315+x316));

	if (t54 != 770539391470424LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x317 = INT32_MIN;
	int32_t x318 = INT32_MIN;
	volatile int16_t x319 = -685;
	int64_t x320 = -1LL;
	int64_t t55 = 7LL;

	t55 = ((x317^x318)*(x319+x320));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x325 = INT8_MIN;
	static volatile int8_t x326 = -3;
	volatile uint16_t x328 = 47U;
	volatile uint32_t t56 = 17589562U;

	t56 = ((x325^x326)*(x327+x328));

	if (t56 != 5750U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = -1;
	uint64_t x332 = 52105695173652444LLU;
	uint64_t t57 = 234706713738481972LLU;

	t57 = ((x329^x330)*(x331+x332));

	if (t57 != 1838551093177540830LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x335 = -1;
	int64_t t58 = -6283324256LL;

	t58 = ((x333^x334)*(x335+x336));

	if (t58 != -10388LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x342 = -1;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 1874233LLU;
	static uint64_t t59 = 9162114670LLU;

	t59 = ((x341^x342)*(x343+x344));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x351 = -2;
	int16_t x352 = INT16_MIN;
	int32_t t60 = 90773009;

	t60 = ((x349^x350)*(x351+x352));

	if (t60 != 1073807360) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t61 = -409045541123LL;

	t61 = ((x353^x354)*(x355+x356));

	if (t61 != -8323072LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x357 = 4U;
	static int8_t x358 = INT8_MIN;
	static int16_t x359 = INT16_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t62 = -180435;

	t62 = ((x357^x358)*(x359+x360));

	if (t62 != 4031612) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	static int16_t x364 = INT16_MIN;

	t63 = ((x361^x362)*(x363+x364));

	if (t63 != -2147418112) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x365 = 4U;
	int64_t x366 = -1LL;
	uint16_t x367 = 1022U;
	uint64_t x368 = 241265LLU;
	volatile uint64_t t64 = 2LLU;

	t64 = ((x365^x366)*(x367+x368));

	if (t64 != 18446744073708340181LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x378 = UINT64_MAX;
	static int64_t x379 = -1LL;
	uint64_t t65 = 190LLU;

	t65 = ((x377^x378)*(x379+x380));

	if (t65 != 18446744073706799188LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;
	int64_t x383 = 121802LL;
	int64_t x384 = -11821670937668861LL;
	volatile int64_t t66 = -4510502LL;

	t66 = ((x381^x382)*(x383+x384));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x385 = 677706915U;
	int16_t x387 = 376;
	int32_t x388 = -1;
	static volatile uint32_t t67 = 4U;

	t67 = ((x385^x386)*(x387+x388));

	if (t67 != 3557944260U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x389 = UINT32_MAX;
	volatile int64_t x390 = 33373701453LL;
	uint8_t x391 = UINT8_MAX;
	static uint64_t x392 = 19LLU;

	t68 = ((x389^x390)*(x391+x392));

	if (t68 != 8507921388164LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x397 = 46359014624036771LLU;
	uint64_t x398 = 198LLU;
	int16_t x399 = -1;
	static volatile uint16_t x400 = 8U;
	uint64_t t69 = 513667056008LLU;

	t69 = ((x397^x398)*(x399+x400));

	if (t69 != 324513102368256963LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x413 = 90573U;
	uint16_t x414 = 858U;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = -1;
	volatile uint64_t t70 = 3862394292778LLU;

	t70 = ((x413^x414)*(x415+x416));

	if (t70 != 18446744073709370066LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x417 = INT64_MAX;
	volatile int8_t x418 = INT8_MIN;
	uint64_t x419 = 17886842825929LLU;
	volatile int32_t x420 = 258055414;
	uint64_t t71 = 422669676273LLU;

	t71 = ((x417^x418)*(x419+x420));

	if (t71 != 9225643698666706369LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x421 = 3434700865593141043LL;
	uint64_t x422 = 1412976710753812652LLU;
	volatile uint32_t x423 = 488799722U;
	uint16_t x424 = 19U;
	static uint64_t t72 = 16992869800487LLU;

	t72 = ((x421^x422)*(x423+x424));

	if (t72 != 5874597010409720611LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x425 = 3154007519102339961LLU;
	static int32_t x426 = 379;
	uint8_t x428 = UINT8_MAX;
	volatile uint64_t t73 = 1798346723201LLU;

	t73 = ((x425^x426)*(x427+x428));

	if (t73 != 7907914682483535356LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x437 = INT16_MIN;
	uint32_t x438 = 0U;
	uint32_t x440 = UINT32_MAX;
	uint32_t t74 = 234U;

	t74 = ((x437^x438)*(x439+x440));

	if (t74 != 3439230976U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x441 = INT16_MIN;
	volatile int16_t x443 = INT16_MIN;
	uint64_t x444 = 1672LLU;
	static volatile uint64_t t75 = 197776LLU;

	t75 = ((x441^x442)*(x443+x444));

	if (t75 != 18446744072694578176LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x449 = INT16_MAX;
	uint16_t x450 = UINT16_MAX;
	static int16_t x451 = -16;
	int16_t x452 = INT16_MAX;
	volatile int32_t t76 = 1482452;

	t76 = ((x449^x450)*(x451+x452));

	if (t76 != 1073184768) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x453 = -262;
	volatile int16_t x454 = -1;
	int16_t x456 = -1;
	int32_t t77 = -824;

	t77 = ((x453^x454)*(x455+x456));

	if (t77 != 522) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x457 = INT16_MAX;
	static int8_t x458 = INT8_MIN;
	static int16_t x459 = INT16_MIN;
	volatile int16_t x460 = INT16_MAX;

	t78 = ((x457^x458)*(x459+x460));

	if (t78 != 32641) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x461 = UINT8_MAX;
	int64_t x463 = -1LL;

	t79 = ((x461^x462)*(x463+x464));

	if (t79 != -4428629856LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x465 = 5;
	volatile uint32_t x466 = UINT32_MAX;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = -1;
	volatile uint32_t t80 = 1U;

	t80 = ((x465^x466)*(x467+x468));

	if (t80 != 4294574092U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x473 = 6U;
	uint32_t x474 = UINT32_MAX;
	int32_t x475 = -1;
	volatile uint64_t t81 = 1429930576152165LLU;

	t81 = ((x473^x474)*(x475+x476));

	if (t81 != 18446744065119617038LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x477 = -1;
	volatile uint32_t x478 = UINT32_MAX;
	uint32_t x479 = 2865U;
	volatile uint32_t t82 = 56066U;

	t82 = ((x477^x478)*(x479+x480));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x498 = 2U;
	int8_t x499 = -1;
	volatile uint64_t x500 = UINT64_MAX;

	t83 = ((x497^x498)*(x499+x500));

	if (t83 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x501 = INT8_MAX;
	int32_t x502 = INT32_MAX;
	uint64_t x503 = 31769293265LLU;
	volatile int8_t x504 = INT8_MIN;
	uint64_t t84 = 7247646LLU;

	t84 = ((x501^x502)*(x503+x504));

	if (t84 != 12883801232627947392LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x505 = 11U;
	static int8_t x506 = 1;
	uint32_t x507 = 1398085398U;
	int32_t x508 = 6630;

	t85 = ((x505^x506)*(x507+x508));

	if (t85 != 1096018392U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x509 = INT8_MIN;
	int8_t x510 = INT8_MIN;
	int8_t x512 = 10;

	t86 = ((x509^x510)*(x511+x512));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x513 = INT16_MAX;
	int32_t x514 = 85215;
	uint32_t x515 = UINT32_MAX;
	static volatile int32_t x516 = INT32_MIN;
	volatile uint32_t t87 = 0U;

	t87 = ((x513^x514)*(x515+x516));

	if (t87 != 4294888672U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x521 = 42385667460LLU;
	static int8_t x522 = INT8_MIN;
	int8_t x523 = 1;
	uint8_t x524 = 3U;

	t88 = ((x521^x522)*(x523+x524));

	if (t88 != 18446743904166881296LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x525 = 47U;
	int16_t x526 = INT16_MIN;
	int32_t x527 = 751;
	int16_t x528 = 1;
	volatile int32_t t89 = 212924;

	t89 = ((x525^x526)*(x527+x528));

	if (t89 != -24606192) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x531 = 97U;
	int64_t x532 = -1LL;

	t90 = ((x529^x530)*(x531+x532));

	if (t90 != 3145632LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x537 = 136015LLU;
	int32_t x538 = INT32_MIN;
	int32_t x539 = 936066;
	static volatile uint64_t t91 = 53859066LLU;

	t91 = ((x537^x538)*(x539+x540));

	if (t91 != 18444733741886970447LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x542 = INT16_MAX;
	volatile int64_t x544 = -441954LL;
	static int64_t t92 = -14LL;

	t92 = ((x541^x542)*(x543+x544));

	if (t92 != 441997LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x546 = INT8_MAX;
	volatile uint16_t x547 = UINT16_MAX;
	uint32_t t93 = 279U;

	t93 = ((x545^x546)*(x547+x548));

	if (t93 != 239550311U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x553 = -1LL;
	volatile int8_t x554 = INT8_MAX;
	static int32_t x555 = 2;
	volatile int32_t x556 = 562879666;
	int64_t t94 = -589294LL;

	t94 = ((x553^x554)*(x555+x556));

	if (t94 != -72048597504LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x557 = 500U;
	static int16_t x558 = INT16_MIN;
	uint8_t x559 = 67U;
	static int16_t x560 = 2;
	int32_t t95 = -818;

	t95 = ((x557^x558)*(x559+x560));

	if (t95 != -2226492) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x563 = INT8_MIN;
	volatile uint8_t x564 = 3U;

	t96 = ((x561^x562)*(x563+x564));

	if (t96 != 36510375U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x574 = 43835798786LLU;
	int64_t x575 = INT64_MIN;
	int8_t x576 = INT8_MAX;
	uint64_t t97 = 13275LLU;

	t97 = ((x573^x574)*(x575+x576));

	if (t97 != 9616310544261878445LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MAX;
	int64_t x580 = INT64_MIN;

	t98 = ((x577^x578)*(x579+x580));

	if (t98 != 9223372036858937217LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x585 = -1LL;
	static uint16_t x586 = UINT16_MAX;
	static uint32_t x587 = 1626U;
	int16_t x588 = INT16_MIN;
	volatile int64_t t99 = 0LL;

	t99 = ((x585^x586)*(x587+x588));

	if (t99 != -281472935788544LL) { NG(); } else { ; }
	
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

