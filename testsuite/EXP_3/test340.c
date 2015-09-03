#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -62;
static volatile uint16_t x16 = 36U;
static int16_t x25 = -1;
int64_t x46 = INT64_MAX;
volatile int32_t x56 = 212;
int32_t x58 = -5;
int16_t x64 = 1;
int8_t x69 = 0;
int32_t x70 = 118;
uint16_t x71 = 30U;
volatile uint32_t t12 = 615871U;
int64_t x82 = INT64_MIN;
int64_t t14 = 1968277803307LL;
static uint16_t x104 = 305U;
int8_t x112 = -1;
volatile int32_t x123 = INT32_MIN;
static int32_t t18 = 2526460;
static volatile int8_t x137 = INT8_MAX;
volatile int8_t x146 = 13;
volatile int32_t x154 = INT32_MIN;
volatile int64_t t23 = 6381863270289LL;
static int16_t x167 = -1;
volatile uint64_t t24 = 2425421364901LLU;
int64_t x169 = 199195182815458LL;
volatile int8_t x171 = INT8_MIN;
static int8_t x174 = -1;
int8_t x180 = INT8_MIN;
uint64_t t27 = 7334794274966LLU;
int16_t x183 = -1;
static int16_t x191 = -1;
int16_t x194 = -194;
int8_t x199 = INT8_MIN;
int32_t x205 = -1;
int32_t x207 = -1;
volatile int32_t t33 = -30729;
int16_t x211 = 174;
static volatile int16_t x218 = -205;
int16_t x220 = INT16_MIN;
volatile uint32_t t36 = 891788U;
uint16_t x237 = 2518U;
int64_t x238 = 48LL;
uint16_t x246 = 17696U;
static volatile int8_t x247 = 3;
uint64_t x249 = 1192214496844189LLU;
volatile int64_t x251 = 22353101LL;
uint32_t x260 = 4026U;
volatile int64_t x291 = 52078LL;
static int64_t t46 = 13381086LL;
static int8_t x302 = INT8_MIN;
volatile int8_t x312 = INT8_MIN;
int8_t x314 = -1;
volatile int16_t x316 = 1;
static uint64_t x347 = UINT64_MAX;
uint8_t x350 = 92U;
static int64_t x351 = -50LL;
int8_t x371 = -1;
volatile uint64_t t61 = 2288483430048617263LLU;
uint32_t x380 = UINT32_MAX;
static int64_t x381 = -27126LL;
uint8_t x406 = 57U;
uint64_t x409 = UINT64_MAX;
volatile int16_t x424 = INT16_MIN;
static int8_t x429 = INT8_MAX;
volatile int32_t t71 = 107284196;
uint8_t x436 = 14U;
volatile int64_t t74 = -1LL;
volatile int32_t x456 = -1;
int32_t t75 = 380;
int8_t x458 = INT8_MAX;
static int16_t x459 = 15096;
volatile int8_t x460 = INT8_MIN;
int8_t x462 = INT8_MIN;
int16_t x467 = 3218;
volatile int8_t x469 = INT8_MIN;
volatile int8_t x472 = INT8_MIN;
volatile uint8_t x474 = 52U;
uint64_t t80 = 2439621932495622936LLU;
int16_t x484 = INT16_MAX;
static volatile uint32_t t81 = 20941U;
int64_t x494 = INT64_MIN;
uint64_t x497 = 10364391LLU;
int16_t x501 = -1;
static int16_t x511 = INT16_MIN;
volatile int32_t t87 = 646;
static volatile int8_t x527 = INT8_MAX;
int32_t x541 = -1;
int32_t x543 = -1;
volatile int32_t t92 = -3908;
int32_t x556 = -1;
volatile uint32_t t93 = 581U;
volatile int32_t x568 = -1;
int8_t x581 = INT8_MIN;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	static volatile int32_t t0 = -181777;

	t0 = ((x1+x2)-(x3*x4));

	if (t0 != -318) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 50693LLU;
	static int16_t x6 = -1;
	int32_t x7 = -1;
	static int16_t x8 = INT16_MIN;
	uint64_t t1 = 26281359705LLU;

	t1 = ((x5+x6)-(x7*x8));

	if (t1 != 17924LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	uint32_t x14 = 0U;
	uint8_t x15 = UINT8_MAX;
	uint32_t t2 = 1455U;

	t2 = ((x13+x14)-(x15*x16));

	if (t2 != 4294958115U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 961391904U;
	uint64_t x18 = 1LLU;
	static volatile uint16_t x19 = 1224U;
	static int8_t x20 = -5;
	uint64_t t3 = 3323248387LLU;

	t3 = ((x17+x18)-(x19*x20));

	if (t3 != 961398025LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 23U;
	volatile int8_t x22 = INT8_MAX;
	int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = -1;

	t4 = ((x21+x22)-(x23*x24));

	if (t4 != -4161259) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = INT32_MAX;
	volatile uint32_t x27 = 227732603U;
	int16_t x28 = INT16_MIN;
	volatile uint32_t t5 = 120U;

	t5 = ((x25+x26)-(x27*x28));

	if (t5 != 4131225598U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = 49;
	static volatile int32_t x43 = -1;
	int8_t x44 = -2;
	static int32_t t6 = -3341319;

	t6 = ((x41+x42)-(x43*x44));

	if (t6 != -2147483601) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x45 = -1;
	int16_t x47 = INT16_MAX;
	static uint8_t x48 = 75U;
	volatile int64_t t7 = 69907973LL;

	t7 = ((x45+x46)-(x47*x48));

	if (t7 != 9223372036852318281LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	volatile int32_t t8 = 146;

	t8 = ((x53+x54)-(x55*x56));

	if (t8 != 11347) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = 100U;
	uint32_t x59 = 28478U;
	volatile uint16_t x60 = 25181U;
	uint32_t t9 = 12U;

	t9 = ((x57+x58)-(x59*x60));

	if (t9 != 3577862873U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 53987563746578804LLU;
	int8_t x62 = INT8_MIN;
	volatile int16_t x63 = -1;
	static volatile uint64_t t10 = 117885926783LLU;

	t10 = ((x61+x62)-(x63*x64));

	if (t10 != 53987563746578677LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MAX;
	volatile int64_t x66 = INT64_MIN;
	volatile int64_t x67 = -2472514243239572LL;
	static uint32_t x68 = 3244U;
	volatile int64_t t11 = 1LL;

	t11 = ((x65+x66)-(x67*x68));

	if (t11 != -1202535829638120593LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x72 = UINT32_MAX;

	t12 = ((x69+x70)-(x71*x72));

	if (t12 != 148U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 113U;
	volatile uint64_t x83 = UINT64_MAX;
	int8_t x84 = -3;
	volatile uint64_t t13 = 88695937489400LLU;

	t13 = ((x81+x82)-(x83*x84));

	if (t13 != 9223372036854775918LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = UINT16_MAX;
	static uint16_t x95 = 1U;
	static int8_t x96 = 1;

	t14 = ((x93+x94)-(x95*x96));

	if (t14 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x101 = 8390U;
	uint16_t x102 = 3U;
	uint32_t x103 = 408U;
	static volatile uint32_t t15 = 6355915U;

	t15 = ((x101+x102)-(x103*x104));

	if (t15 != 4294851249U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x109 = 2;
	int64_t x110 = INT64_MIN;
	volatile uint8_t x111 = UINT8_MAX;
	int64_t t16 = 49338612LL;

	t16 = ((x109+x110)-(x111*x112));

	if (t16 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x121 = INT16_MAX;
	volatile int8_t x122 = 0;
	uint64_t x124 = 1749LLU;
	static volatile uint64_t t17 = 17898282LLU;

	t17 = ((x121+x122)-(x123*x124));

	if (t17 != 3755948933119LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = 2;
	static int16_t x127 = INT16_MAX;
	static int32_t x128 = -407;

	t18 = ((x125+x126)-(x127*x128));

	if (t18 != 13336298) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x138 = 59;
	static int32_t x139 = -1;
	int8_t x140 = -1;
	volatile int32_t t19 = -189501;

	t19 = ((x137+x138)-(x139*x140));

	if (t19 != 185) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = INT16_MIN;
	static uint32_t x142 = UINT32_MAX;
	int32_t x143 = -1;
	uint32_t x144 = 6U;
	volatile uint32_t t20 = 515187U;

	t20 = ((x141+x142)-(x143*x144));

	if (t20 != 4294934533U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x145 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;
	static int64_t x148 = -1LL;
	static volatile int64_t t21 = 1084428901562LL;

	t21 = ((x145+x146)-(x147*x148));

	if (t21 != 2147483660LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x153 = 23;
	volatile uint32_t x155 = UINT32_MAX;
	volatile int8_t x156 = 0;
	volatile uint32_t t22 = 3502383U;

	t22 = ((x153+x154)-(x155*x156));

	if (t22 != 2147483671U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x157 = 0LL;
	int8_t x158 = INT8_MIN;
	volatile int8_t x159 = -1;
	int32_t x160 = -11710247;

	t23 = ((x157+x158)-(x159*x160));

	if (t23 != -11710375LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x165 = 6721U;
	static uint64_t x166 = 266721633LLU;
	int64_t x168 = 12896043517715377LL;

	t24 = ((x165+x166)-(x167*x168));

	if (t24 != 12896043784443731LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x170 = 0U;
	int8_t x172 = INT8_MIN;
	volatile int64_t t25 = 4222485016813505LL;

	t25 = ((x169+x170)-(x171*x172));

	if (t25 != 199195182799074LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x173 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 64384947LLU;
	volatile uint64_t t26 = 2791609541814LLU;

	t26 = ((x173+x174)-(x175*x176));

	if (t26 != 138265623007330302LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x177 = 57596755072460LLU;
	static int8_t x178 = -1;
	uint64_t x179 = 6723LLU;

	t27 = ((x177+x178)-(x179*x180));

	if (t27 != 57596755933003LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x181 = 45U;
	int32_t x182 = INT32_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t28 = 1284U;

	t28 = ((x181+x182)-(x183*x184));

	if (t28 != 2147483692U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x185 = 3;
	volatile int64_t x186 = 575115352896LL;
	int32_t x187 = INT32_MAX;
	int64_t x188 = -1LL;
	volatile int64_t t29 = 0LL;

	t29 = ((x185+x186)-(x187*x188));

	if (t29 != 577262836546LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x189 = 15;
	int8_t x190 = INT8_MIN;
	uint8_t x192 = 29U;
	volatile int32_t t30 = 24102926;

	t30 = ((x189+x190)-(x191*x192));

	if (t30 != -84) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x193 = 7020U;
	int8_t x195 = 1;
	static uint32_t x196 = 12U;
	uint32_t t31 = 1714534U;

	t31 = ((x193+x194)-(x195*x196));

	if (t31 != 6814U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x197 = -142501;
	int64_t x198 = 236322048123135LL;
	int8_t x200 = INT8_MAX;
	int64_t t32 = 681829585501621LL;

	t32 = ((x197+x198)-(x199*x200));

	if (t32 != 236322047996890LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x206 = 3;
	volatile int32_t x208 = -1;

	t33 = ((x205+x206)-(x207*x208));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x209 = -1;
	int64_t x210 = -1LL;
	int16_t x212 = INT16_MAX;
	volatile int64_t t34 = 0LL;

	t34 = ((x209+x210)-(x211*x212));

	if (t34 != -5701460LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x217 = INT16_MAX;
	int16_t x219 = INT16_MIN;
	int32_t t35 = 233810968;

	t35 = ((x217+x218)-(x219*x220));

	if (t35 != -1073709262) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x221 = 29646104U;
	int16_t x222 = -70;
	uint8_t x223 = UINT8_MAX;
	volatile uint32_t x224 = 0U;

	t36 = ((x221+x222)-(x223*x224));

	if (t36 != 29646034U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x225 = INT32_MIN;
	volatile uint64_t x226 = 70081021600286162LLU;
	static volatile int8_t x227 = -2;
	int8_t x228 = 0;
	uint64_t t37 = 257331255444351LLU;

	t37 = ((x225+x226)-(x227*x228));

	if (t37 != 70081019452802514LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x239 = 9U;
	uint8_t x240 = 66U;
	int64_t t38 = -257813989534553LL;

	t38 = ((x237+x238)-(x239*x240));

	if (t38 != 1972LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x245 = 63U;
	uint16_t x248 = 5746U;
	static volatile int32_t t39 = -2135846;

	t39 = ((x245+x246)-(x247*x248));

	if (t39 != 521) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x250 = INT16_MAX;
	volatile uint16_t x252 = UINT16_MAX;
	volatile uint64_t t40 = 812530LLU;

	t40 = ((x249+x250)-(x251*x252));

	if (t40 != 1190749586402921LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	int64_t x255 = -11404702LL;
	volatile int32_t x256 = INT32_MIN;
	volatile int64_t t41 = -427880979539082LL;

	t41 = ((x253+x254)-(x255*x256));

	if (t41 != -24491406760345729LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x258 = 25139794;
	int16_t x259 = 25;
	uint32_t t42 = 121416211U;

	t42 = ((x257+x258)-(x259*x260));

	if (t42 != 25039143U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x265 = -1LL;
	int32_t x266 = INT32_MAX;
	static volatile uint64_t x267 = UINT64_MAX;
	volatile uint64_t x268 = UINT64_MAX;
	volatile uint64_t t43 = 741480LLU;

	t43 = ((x265+x266)-(x267*x268));

	if (t43 != 2147483645LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x277 = 3509626950507738LLU;
	int8_t x278 = -6;
	int64_t x279 = -3766757LL;
	int8_t x280 = INT8_MIN;
	uint64_t t44 = 16189145LLU;

	t44 = ((x277+x278)-(x279*x280));

	if (t44 != 3509626468362836LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x285 = 44U;
	int16_t x286 = -1;
	int32_t x287 = INT32_MIN;
	static int16_t x288 = 1;
	volatile uint32_t t45 = 14087544U;

	t45 = ((x285+x286)-(x287*x288));

	if (t45 != 2147483691U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x289 = INT32_MIN;
	volatile int64_t x290 = INT64_MAX;
	int16_t x292 = -306;

	t46 = ((x289+x290)-(x291*x292));

	if (t46 != 9223372034723228027LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x297 = 5;
	uint16_t x298 = UINT16_MAX;
	volatile uint64_t x299 = UINT64_MAX;
	int16_t x300 = 26;
	uint64_t t47 = 77015LLU;

	t47 = ((x297+x298)-(x299*x300));

	if (t47 != 65566LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x301 = 341U;
	uint8_t x303 = 25U;
	int16_t x304 = -1;
	volatile uint32_t t48 = 83791171U;

	t48 = ((x301+x302)-(x303*x304));

	if (t48 != 238U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x305 = 618;
	int32_t x306 = -1;
	static uint64_t x307 = 977LLU;
	static uint64_t x308 = 423935652LLU;
	volatile uint64_t t49 = 1342LLU;

	t49 = ((x305+x306)-(x307*x308));

	if (t49 != 18446743659524420229LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x309 = -1LL;
	int16_t x310 = -1;
	static int8_t x311 = -1;
	int64_t t50 = 36LL;

	t50 = ((x309+x310)-(x311*x312));

	if (t50 != -130LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x313 = UINT64_MAX;
	uint64_t x315 = 37LLU;
	volatile uint64_t t51 = 2072555574620784LLU;

	t51 = ((x313+x314)-(x315*x316));

	if (t51 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x321 = 1491U;
	int8_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	volatile uint16_t x324 = UINT16_MAX;
	uint64_t t52 = 120305LLU;

	t52 = ((x321+x322)-(x323*x324));

	if (t52 != 67025LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x329 = 3086594;
	int32_t x330 = -1;
	volatile uint8_t x331 = UINT8_MAX;
	uint16_t x332 = 1U;
	int32_t t53 = 3;

	t53 = ((x329+x330)-(x331*x332));

	if (t53 != 3086338) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x337 = -1;
	int16_t x338 = 4044;
	int64_t x339 = -1LL;
	volatile uint64_t x340 = 16301393LLU;
	volatile uint64_t t54 = 128LLU;

	t54 = ((x337+x338)-(x339*x340));

	if (t54 != 16305436LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x345 = 2U;
	int8_t x346 = INT8_MIN;
	uint32_t x348 = 4U;
	volatile uint64_t t55 = 3990399LLU;

	t55 = ((x345+x346)-(x347*x348));

	if (t55 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x349 = INT8_MIN;
	int64_t x352 = -1LL;
	volatile int64_t t56 = -1305657LL;

	t56 = ((x349+x350)-(x351*x352));

	if (t56 != -86LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x353 = 109142037U;
	volatile int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = 1;
	static volatile uint32_t t57 = 22U;

	t57 = ((x353+x354)-(x355*x356));

	if (t57 != 109142037U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x357 = 17;
	volatile int64_t x358 = -10906064923953LL;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 11U;
	static volatile int64_t t58 = 167192882416LL;

	t58 = ((x357+x358)-(x359*x360));

	if (t58 != -10906064922528LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x361 = -1;
	int64_t x362 = INT64_MAX;
	int64_t x363 = -837LL;
	uint64_t x364 = 525674423323LLU;
	uint64_t t59 = 270486298948LLU;

	t59 = ((x361+x362)-(x363*x364));

	if (t59 != 9223812026347097157LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x365 = 0;
	volatile uint64_t x366 = 1LLU;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 272U;
	uint64_t t60 = 7666LLU;

	t60 = ((x365+x366)-(x367*x368));

	if (t60 != 34817LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x369 = 59U;
	uint64_t x370 = 873917101178509LLU;
	int32_t x372 = -1;

	t61 = ((x369+x370)-(x371*x372));

	if (t61 != 873917101178567LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x373 = 14;
	uint64_t x374 = 0LLU;
	int64_t x375 = 29838910LL;
	int16_t x376 = 956;
	volatile uint64_t t62 = 3104462065639974LLU;

	t62 = ((x373+x374)-(x375*x376));

	if (t62 != 18446744045183553670LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x377 = INT16_MAX;
	int8_t x378 = INT8_MAX;
	uint64_t x379 = 7130162620LLU;
	volatile uint64_t t63 = 1897753LLU;

	t63 = ((x377+x378)-(x379*x380));

	if (t63 != 6269672886487623226LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x382 = -66013295;
	uint64_t x383 = 2438271445LLU;
	int32_t x384 = 325;
	volatile uint64_t t64 = 1228LLU;

	t64 = ((x381+x382)-(x383*x384));

	if (t64 != 18446743281205291570LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x389 = UINT16_MAX;
	static uint8_t x390 = UINT8_MAX;
	static volatile uint8_t x391 = 11U;
	int64_t x392 = -234LL;
	int64_t t65 = 1182169492323024LL;

	t65 = ((x389+x390)-(x391*x392));

	if (t65 != 68364LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x393 = INT16_MIN;
	static int64_t x394 = INT64_MAX;
	int32_t x395 = -1;
	uint8_t x396 = 106U;
	volatile int64_t t66 = -659723450377970LL;

	t66 = ((x393+x394)-(x395*x396));

	if (t66 != 9223372036854743145LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x405 = -1;
	uint8_t x407 = 53U;
	int8_t x408 = -38;
	int32_t t67 = -239955790;

	t67 = ((x405+x406)-(x407*x408));

	if (t67 != 2070) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x410 = INT8_MIN;
	static uint64_t x411 = 47369LLU;
	static volatile uint16_t x412 = UINT16_MAX;
	uint64_t t68 = 14693964443LLU;

	t68 = ((x409+x410)-(x411*x412));

	if (t68 != 18446744070605224072LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x421 = 343234464LLU;
	int8_t x422 = INT8_MIN;
	int8_t x423 = -1;
	volatile uint64_t t69 = 94461LLU;

	t69 = ((x421+x422)-(x423*x424));

	if (t69 != 343201568LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x425 = INT32_MIN;
	int16_t x426 = INT16_MAX;
	uint8_t x427 = 1U;
	static int32_t x428 = -1;
	static volatile int32_t t70 = 16384;

	t70 = ((x425+x426)-(x427*x428));

	if (t70 != -2147450880) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x430 = INT8_MIN;
	int32_t x431 = -1;
	int16_t x432 = INT16_MIN;

	t71 = ((x429+x430)-(x431*x432));

	if (t71 != -32769) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x433 = -13;
	static int16_t x434 = -279;
	int16_t x435 = 7;
	static volatile int32_t t72 = -58628;

	t72 = ((x433+x434)-(x435*x436));

	if (t72 != -390) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MAX;
	static volatile int64_t x439 = -1LL;
	volatile uint64_t x440 = 67212587902LLU;
	uint64_t t73 = 22176LLU;

	t73 = ((x437+x438)-(x439*x440));

	if (t73 != 9223372104067330941LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x445 = -26626516719LL;
	volatile int16_t x446 = INT16_MIN;
	int32_t x447 = -48;
	int16_t x448 = INT16_MAX;

	t74 = ((x445+x446)-(x447*x448));

	if (t74 != -26624976671LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x453 = -14;
	static uint16_t x454 = 1U;
	static int32_t x455 = -1;

	t75 = ((x453+x454)-(x455*x456));

	if (t75 != -14) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x457 = INT32_MIN;
	volatile int32_t t76 = -1;

	t76 = ((x457+x458)-(x459*x460));

	if (t76 != -2145551233) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x461 = -6566;
	volatile uint32_t x463 = 1642U;
	static uint64_t x464 = 683047762561LLU;
	volatile uint64_t t77 = 2900563908972220876LLU;

	t77 = ((x461+x462)-(x463*x464));

	if (t77 != 18445622509283419760LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x465 = 1;
	volatile int16_t x466 = -1;
	uint8_t x468 = 125U;
	volatile int32_t t78 = 22674834;

	t78 = ((x465+x466)-(x467*x468));

	if (t78 != -402250) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x470 = -1;
	static int8_t x471 = INT8_MIN;
	volatile int32_t t79 = 60181;

	t79 = ((x469+x470)-(x471*x472));

	if (t79 != -16513) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x473 = UINT64_MAX;
	static int8_t x475 = 3;
	volatile uint16_t x476 = UINT16_MAX;

	t80 = ((x473+x474)-(x475*x476));

	if (t80 != 18446744073709355062LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x481 = 15U;
	uint32_t x482 = UINT32_MAX;
	static int8_t x483 = 6;

	t81 = ((x481+x482)-(x483*x484));

	if (t81 != 4294770708U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x485 = INT64_MAX;
	static int16_t x486 = INT16_MIN;
	static int32_t x487 = -1;
	uint32_t x488 = UINT32_MAX;
	volatile int64_t t82 = -62705428251203906LL;

	t82 = ((x485+x486)-(x487*x488));

	if (t82 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x493 = INT64_MAX;
	uint32_t x495 = 2010U;
	int32_t x496 = INT32_MIN;
	int64_t t83 = -61611068LL;

	t83 = ((x493+x494)-(x495*x496));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x498 = 97;
	uint8_t x499 = UINT8_MAX;
	int32_t x500 = -626;
	volatile uint64_t t84 = 9222849LLU;

	t84 = ((x497+x498)-(x499*x500));

	if (t84 != 10524118LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x502 = UINT8_MAX;
	uint32_t x503 = 919851U;
	uint32_t x504 = 117584U;
	uint32_t t85 = 1U;

	t85 = ((x501+x502)-(x503*x504));

	if (t85 != 3509389966U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x505 = 33;
	uint32_t x506 = 487185375U;
	uint64_t x507 = UINT64_MAX;
	uint64_t x508 = 7403580LLU;
	uint64_t t86 = 1086597415372776690LLU;

	t86 = ((x505+x506)-(x507*x508));

	if (t86 != 494588988LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MIN;
	static int8_t x512 = -2;

	t87 = ((x509+x510)-(x511*x512));

	if (t87 != -98432) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x513 = 32;
	uint16_t x514 = UINT16_MAX;
	volatile int32_t x515 = -3946423;
	volatile int8_t x516 = 1;
	volatile int32_t t88 = -232;

	t88 = ((x513+x514)-(x515*x516));

	if (t88 != 4011990) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = INT16_MAX;
	uint8_t x522 = 14U;
	uint64_t x523 = 110167394318210270LLU;
	uint16_t x524 = 10032U;
	volatile uint64_t t89 = 21823472LLU;

	t89 = ((x521+x522)-(x523*x524));

	if (t89 != 1605344622287701101LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x525 = UINT16_MAX;
	volatile int64_t x526 = INT64_MIN;
	int64_t x528 = 0LL;
	static int64_t t90 = -6983585046LL;

	t90 = ((x525+x526)-(x527*x528));

	if (t90 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x533 = -1;
	volatile uint64_t x534 = UINT64_MAX;
	volatile int16_t x535 = INT16_MIN;
	uint32_t x536 = 11239970U;
	volatile uint64_t t91 = 7859349352LLU;

	t91 = ((x533+x534)-(x535*x536));

	if (t91 != 18446744072653701118LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x542 = UINT16_MAX;
	static volatile int32_t x544 = -4;

	t92 = ((x541+x542)-(x543*x544));

	if (t92 != 65530) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x553 = 560;
	uint32_t x554 = UINT32_MAX;
	uint16_t x555 = 0U;

	t93 = ((x553+x554)-(x555*x556));

	if (t93 != 559U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x561 = 3984960641LLU;
	int32_t x562 = INT32_MIN;
	int8_t x563 = INT8_MAX;
	int8_t x564 = INT8_MAX;
	uint64_t t94 = 244LLU;

	t94 = ((x561+x562)-(x563*x564));

	if (t94 != 1837460864LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x565 = 34U;
	volatile int32_t x566 = 1;
	uint8_t x567 = 18U;
	volatile uint32_t t95 = 111111U;

	t95 = ((x565+x566)-(x567*x568));

	if (t95 != 53U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x569 = -1;
	volatile int8_t x570 = INT8_MIN;
	int32_t x571 = INT32_MAX;
	volatile int64_t x572 = 66052032LL;
	int64_t t96 = 3740938163721586LL;

	t96 = ((x569+x570)-(x571*x572));

	if (t96 != -141845658571120833LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x573 = 18;
	int32_t x574 = -1;
	uint64_t x575 = UINT64_MAX;
	int8_t x576 = INT8_MAX;
	volatile uint64_t t97 = 3207941906LLU;

	t97 = ((x573+x574)-(x575*x576));

	if (t97 != 144LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x582 = INT16_MAX;
	static volatile int8_t x583 = INT8_MIN;
	int32_t x584 = 14546;
	int32_t t98 = 7917678;

	t98 = ((x581+x582)-(x583*x584));

	if (t98 != 1894527) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x585 = -3524;
	uint32_t x586 = UINT32_MAX;
	int8_t x587 = INT8_MAX;
	static uint8_t x588 = 1U;
	static volatile uint32_t t99 = 13869U;

	t99 = ((x585+x586)-(x587*x588));

	if (t99 != 4294963644U) { NG(); } else { ; }
	
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

