#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x11 = INT8_MAX;
volatile uint64_t t2 = 26LLU;
int8_t x19 = INT8_MAX;
volatile int64_t t3 = -3019LL;
static volatile int16_t x24 = INT16_MIN;
uint32_t x25 = 2657422U;
int16_t x41 = INT16_MIN;
uint16_t x44 = 0U;
uint16_t x47 = 1U;
int64_t x50 = INT64_MAX;
volatile int64_t t9 = 201650531813786LL;
static uint64_t x59 = UINT64_MAX;
int8_t x60 = -1;
volatile uint64_t t10 = 5505787LLU;
uint16_t x68 = UINT16_MAX;
int32_t x72 = 434839936;
uint32_t x87 = 109442U;
uint16_t x93 = 1032U;
uint8_t x96 = UINT8_MAX;
static int64_t t15 = 13116211456486668LL;
static uint32_t x99 = UINT32_MAX;
int16_t x102 = INT16_MIN;
int8_t x103 = INT8_MIN;
int8_t x108 = 28;
int16_t x124 = -1;
volatile uint32_t x130 = 6179U;
volatile int8_t x132 = INT8_MAX;
uint32_t t24 = 400U;
int32_t x151 = 4;
int16_t x153 = INT16_MAX;
static int16_t x154 = INT16_MIN;
int64_t x167 = -1LL;
static int64_t x186 = 242LL;
int8_t x194 = INT8_MAX;
uint8_t x195 = 65U;
volatile uint16_t x201 = 107U;
uint64_t x203 = 20670236LLU;
int32_t x204 = INT32_MIN;
int16_t x206 = INT16_MIN;
uint64_t x214 = UINT64_MAX;
int8_t x217 = -21;
volatile int32_t x222 = INT32_MIN;
uint64_t x223 = 168149LLU;
volatile int32_t x224 = -1;
static int64_t x237 = -1LL;
int8_t x240 = INT8_MIN;
static uint64_t x248 = 12LLU;
int32_t x249 = -6352;
int16_t x256 = INT16_MIN;
int32_t x271 = -1;
volatile int32_t x277 = -7840089;
int8_t x279 = -1;
volatile int8_t x285 = 24;
volatile uint8_t x290 = 9U;
int32_t x298 = -1;
int16_t x300 = -1;
volatile int8_t x313 = -1;
static volatile int8_t x317 = -1;
int16_t x318 = INT16_MIN;
static volatile int64_t t51 = 5749194LL;
int16_t x330 = INT16_MIN;
uint64_t x340 = 163569674263LLU;
uint64_t x345 = 2139326379832LLU;
uint32_t x354 = UINT32_MAX;
volatile int64_t x366 = -1LL;
uint8_t x381 = 1U;
static volatile uint32_t x397 = UINT32_MAX;
int64_t t62 = 0LL;
uint32_t x408 = 40186677U;
volatile uint64_t t65 = 6605367119010857168LLU;
static volatile int16_t x428 = INT16_MAX;
int8_t x429 = INT8_MAX;
uint8_t x438 = UINT8_MAX;
uint64_t x440 = 120684267814LLU;
static volatile uint32_t t69 = 180399U;
static uint64_t x453 = 7LLU;
uint16_t x456 = 2U;
volatile uint64_t t70 = 48227194286961LLU;
int64_t x462 = 7450601LL;
static uint16_t x463 = 7822U;
volatile int64_t t71 = 75602931052460LL;
volatile uint8_t x485 = 2U;
static uint8_t x487 = UINT8_MAX;
static int32_t x488 = INT32_MAX;
volatile uint64_t t74 = 3856000021LLU;
int8_t x516 = INT8_MIN;
volatile int32_t t78 = 2956;
static uint32_t x522 = UINT32_MAX;
int8_t x529 = 7;
uint64_t x532 = 51128603409532925LLU;
volatile int32_t t82 = -100270867;
int16_t x553 = -1;
static volatile int64_t t83 = 8062595175660LL;
int32_t x558 = -1;
int32_t x572 = INT32_MIN;
uint64_t x573 = 214736282972192676LLU;
uint8_t x584 = 24U;
int64_t x586 = -1LL;
uint16_t x587 = UINT16_MAX;
int64_t t90 = 1646100230166314LL;
static uint64_t x595 = UINT64_MAX;
static uint16_t x601 = 10313U;
int64_t x602 = -1LL;
static int64_t t94 = -868729451351LL;
int32_t x609 = 440;
volatile int32_t t96 = -29704;
static volatile int64_t x618 = -54LL;
static int32_t x619 = -1;
volatile int16_t x647 = -3683;


void f0(void) {
	static uint8_t x1 = 0U;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 1U;
	int64_t x4 = -1LL;
	int64_t t0 = 37206035LL;

	t0 = (((x1+x2)*x3)^x4);

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	int64_t x10 = 281595910LL;
	static int32_t x12 = INT32_MIN;
	static volatile int64_t t1 = -2930351LL;

	t1 = (((x9+x10)*x11)^x12);

	if (t1 != -35104279941LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 17U;
	int64_t x14 = -2595647LL;
	uint64_t x15 = 8785122212LLU;
	uint16_t x16 = 1U;

	t2 = (((x13+x14)*x15)^x16);

	if (t2 != 18423941146942418057LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -6LL;
	uint16_t x18 = 1940U;
	int16_t x20 = INT16_MAX;

	t3 = (((x17+x18)*x19)^x20);

	if (t3 != 245901LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	volatile uint8_t x22 = 9U;
	uint8_t x23 = UINT8_MAX;
	volatile int32_t t4 = 149806449;

	t4 = (((x21+x22)*x23)^x24);

	if (t4 != -30728) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = 170498445U;
	uint8_t x27 = 10U;
	volatile int32_t x28 = INT32_MIN;
	uint32_t t5 = 27358275U;

	t5 = (((x25+x26)*x27)^x28);

	if (t5 != 3879042318U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x42 = -24;
	volatile uint64_t x43 = 5270363459LLU;
	volatile uint64_t t6 = 2192485412LLU;

	t6 = (((x41+x42)*x43)^x44);

	if (t6 != 18446571247951004088LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -1;
	uint64_t x46 = 9087542755286927240LLU;
	int16_t x48 = -1;
	static uint64_t t7 = 84LLU;

	t7 = (((x45+x46)*x47)^x48);

	if (t7 != 9359201318422624376LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = -3404;
	uint64_t x51 = 27472LLU;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t8 = 4363LLU;

	t8 = (((x49+x50)*x51)^x52);

	if (t8 != 93542256LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 19528U;
	int64_t x54 = -3LL;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = 63U;

	t9 = (((x53+x54)*x55)^x56);

	if (t9 != -41929618227137LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -6;
	static volatile int16_t x58 = INT16_MIN;

	t10 = (((x57+x58)*x59)^x60);

	if (t10 != 18446744073709518841LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = 0;
	uint64_t x66 = UINT64_MAX;
	volatile int32_t x67 = -840664;
	uint64_t t11 = 1099213LLU;

	t11 = (((x65+x66)*x67)^x68);

	if (t11 != 797735LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x69 = -1LL;
	int8_t x70 = 28;
	uint16_t x71 = UINT16_MAX;
	int64_t t12 = -9459404LL;

	t12 = (((x69+x70)*x71)^x72);

	if (t12 != 435281509LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MIN;
	static uint64_t x78 = UINT64_MAX;
	static int8_t x79 = -1;
	static int64_t x80 = INT64_MAX;
	volatile uint64_t t13 = 59203LLU;

	t13 = (((x77+x78)*x79)^x80);

	if (t13 != 9223372036854775678LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int16_t x86 = 776;
	int32_t x88 = 115;
	static volatile uint32_t t14 = 4914499U;

	t14 = (((x85+x86)*x87)^x88);

	if (t14 != 112834813U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x94 = INT64_MIN;
	int16_t x95 = -1;

	t15 = (((x93+x94)*x95)^x96);

	if (t15 != 9223372036854774535LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x97 = 41893274588LLU;
	static int32_t x98 = -1;
	int32_t x100 = INT32_MAX;
	static uint64_t t16 = 164LLU;

	t16 = (((x97+x98)*x99)^x100);

	if (t16 != 13909547568268354522LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x101 = INT16_MIN;
	int64_t x104 = -1LL;
	volatile int64_t t17 = 320470LL;

	t17 = (((x101+x102)*x103)^x104);

	if (t17 != -8388609LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = UINT16_MAX;
	uint64_t x106 = 113966LLU;
	volatile uint8_t x107 = 4U;
	volatile uint64_t t18 = 19800306LLU;

	t18 = (((x105+x106)*x107)^x108);

	if (t18 != 717992LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x110 = 5U;
	int16_t x111 = -1;
	uint32_t x112 = 41591U;
	uint32_t t19 = 60501819U;

	t19 = (((x109+x110)*x111)^x112);

	if (t19 != 4294925579U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x117 = -3LL;
	static int32_t x118 = 2536637;
	static int8_t x119 = -8;
	int8_t x120 = INT8_MIN;
	int64_t t20 = -215832LL;

	t20 = (((x117+x118)*x119)^x120);

	if (t20 != 20293040LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -911;
	int32_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	int32_t t21 = -1383701;

	t21 = (((x121+x122)*x123)^x124);

	if (t21 != 59767919) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x129 = 4U;
	int16_t x131 = 10;
	uint32_t t22 = 1989U;

	t22 = (((x129+x130)*x131)^x132);

	if (t22 != 61945U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MAX;
	static int32_t x134 = 6876;
	volatile uint16_t x135 = 10U;
	uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t23 = 466162133U;

	t23 = (((x133+x134)*x135)^x136);

	if (t23 != 4294897265U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = 1;
	uint32_t x143 = 18163447U;
	static int16_t x144 = -1;

	t24 = (((x141+x142)*x143)^x144);

	if (t24 != 2456181000U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = 14;
	static int8_t x150 = -1;
	static int32_t x152 = -7443254;
	int32_t t25 = -103;

	t25 = (((x149+x150)*x151)^x152);

	if (t25 != -7443202) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x155 = -840516307764729LL;
	static volatile uint32_t x156 = 407U;
	int64_t t26 = 15418713LL;

	t26 = (((x153+x154)*x155)^x156);

	if (t26 != 840516307764334LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x165 = 7U;
	static int64_t x166 = -2667002020149LL;
	volatile uint64_t x168 = 48175199LLU;
	uint64_t t27 = 27861851022386LLU;

	t27 = (((x165+x166)*x167)^x168);

	if (t27 != 2667030665585LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x173 = UINT16_MAX;
	int32_t x174 = -373136;
	volatile uint64_t x175 = 4104872943420LLU;
	int64_t x176 = INT64_MIN;
	uint64_t t28 = 23252608968214076LLU;

	t28 = (((x173+x174)*x175)^x176);

	if (t28 != 7960709014585840388LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x177 = 106777204U;
	int16_t x178 = 0;
	uint32_t x179 = UINT32_MAX;
	uint64_t x180 = 45764612625LLU;
	volatile uint64_t t29 = 122237888LLU;

	t29 = (((x177+x178)*x179)^x180);

	if (t29 != 44533688221LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x185 = -8594714;
	volatile uint64_t x187 = UINT64_MAX;
	int32_t x188 = -1;
	uint64_t t30 = 411028560893347LLU;

	t30 = (((x185+x186)*x187)^x188);

	if (t30 != 18446744073700957143LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x193 = 69461409U;
	int8_t x196 = INT8_MAX;
	uint32_t t31 = 406330U;

	t31 = (((x193+x194)*x195)^x196);

	if (t31 != 220032607U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x197 = -1LL;
	int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MIN;
	static uint16_t x200 = UINT16_MAX;
	volatile int64_t t32 = -755LL;

	t32 = (((x197+x198)*x199)^x200);

	if (t32 != -70368744046593LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x202 = INT64_MIN;
	uint64_t t33 = 6081582573LLU;

	t33 = (((x201+x202)*x203)^x204);

	if (t33 != 18446744069478815924LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x205 = -1LL;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile int64_t t34 = -3838045019062358LL;

	t34 = (((x205+x206)*x207)^x208);

	if (t34 != -8355842LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x213 = 7229LLU;
	static uint32_t x215 = 67865888U;
	int16_t x216 = INT16_MAX;
	uint64_t t35 = 14LLU;

	t35 = (((x213+x214)*x215)^x216);

	if (t35 != 490534661247LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x218 = -20709662297660LL;
	volatile uint8_t x219 = 9U;
	int32_t x220 = -1;
	int64_t t36 = 1LL;

	t36 = (((x217+x218)*x219)^x220);

	if (t36 != 186386960679128LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x221 = UINT8_MAX;
	uint64_t t37 = 3938710883451642280LLU;

	t37 = (((x221+x222)*x223)^x224);

	if (t37 != 361097185049556LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x238 = -99;
	static int32_t x239 = -1;
	int64_t t38 = 690190622344LL;

	t38 = (((x237+x238)*x239)^x240);

	if (t38 != -28LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x241 = 9;
	volatile int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	uint16_t x244 = 17208U;
	volatile int32_t t39 = 293;

	t39 = (((x241+x242)*x243)^x244);

	if (t39 != -7781553) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x245 = -1LL;
	volatile int32_t x246 = INT32_MAX;
	static volatile uint8_t x247 = UINT8_MAX;
	uint64_t t40 = 1900840LLU;

	t40 = (((x245+x246)*x247)^x248);

	if (t40 != 547608329742LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x250 = -3;
	uint8_t x251 = 18U;
	int8_t x252 = INT8_MIN;
	int32_t t41 = 6390;

	t41 = (((x249+x250)*x251)^x252);

	if (t41 != 114346) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x253 = -14343;
	int16_t x254 = INT16_MAX;
	volatile uint64_t x255 = 809069673279042LLU;
	uint64_t t42 = 46536LLU;

	t42 = (((x253+x254)*x255)^x256);

	if (t42 != 3540444413216464368LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x265 = 1U;
	int16_t x266 = -1;
	int16_t x267 = -1;
	volatile uint16_t x268 = UINT16_MAX;
	uint32_t t43 = 224U;

	t43 = (((x265+x266)*x267)^x268);

	if (t43 != 65535U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x269 = -1;
	uint8_t x270 = 2U;
	uint8_t x272 = 89U;
	int32_t t44 = 140620149;

	t44 = (((x269+x270)*x271)^x272);

	if (t44 != -90) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x278 = 2545LLU;
	static volatile int16_t x280 = -3814;
	static uint64_t t45 = 398655414LLU;

	t45 = (((x277+x278)*x279)^x280);

	if (t45 != 18446744073701713522LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x286 = -49;
	static uint64_t x287 = 8792912LLU;
	int32_t x288 = -11;
	static volatile uint64_t t46 = 68866574949059523LLU;

	t46 = (((x285+x286)*x287)^x288);

	if (t46 != 219822789LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x289 = 55U;
	uint16_t x291 = UINT16_MAX;
	volatile int8_t x292 = 1;
	volatile int32_t t47 = 22;

	t47 = (((x289+x290)*x291)^x292);

	if (t47 != 4194241) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x293 = 46693U;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = 12859LLU;
	volatile int16_t x296 = INT16_MIN;
	uint64_t t48 = 7LLU;

	t48 = (((x293+x294)*x295)^x296);

	if (t48 != 18446744073107484300LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x297 = 27U;
	static uint8_t x299 = UINT8_MAX;
	uint32_t t49 = 10529U;

	t49 = (((x297+x298)*x299)^x300);

	if (t49 != 4294960665U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x314 = -1;
	volatile uint64_t x315 = 3556919552610848810LLU;
	int16_t x316 = INT16_MAX;
	uint64_t t50 = 4894258LLU;

	t50 = (((x313+x314)*x315)^x316);

	if (t50 != 11332904968487837779LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x319 = -1;
	static int64_t x320 = INT64_MAX;

	t51 = (((x317+x318)*x319)^x320);

	if (t51 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x329 = -1;
	int64_t x331 = -318LL;
	static uint8_t x332 = 91U;
	volatile int64_t t52 = -306637892411LL;

	t52 = (((x329+x330)*x331)^x332);

	if (t52 != 10420581LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x337 = -2733329;
	uint16_t x338 = 230U;
	volatile uint64_t x339 = 480800873868060526LLU;
	volatile uint64_t t53 = 7474898LLU;

	t53 = (((x337+x338)*x339)^x340);

	if (t53 != 14320011088525680785LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x341 = 1U;
	volatile int16_t x342 = INT16_MIN;
	uint16_t x343 = 223U;
	int8_t x344 = -1;
	uint32_t t54 = 51404U;

	t54 = (((x341+x342)*x343)^x344);

	if (t54 != 7307040U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x346 = -10;
	int64_t x347 = INT64_MAX;
	volatile uint16_t x348 = 72U;
	uint64_t t55 = 55129484LLU;

	t55 = (((x345+x346)*x347)^x348);

	if (t55 != 18446741934383171738LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x353 = 851;
	int32_t x355 = -1;
	uint16_t x356 = 447U;
	uint32_t t56 = 5576U;

	t56 = (((x353+x354)*x355)^x356);

	if (t56 != 4294966545U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x357 = 428U;
	uint8_t x358 = 13U;
	volatile uint32_t x359 = UINT32_MAX;
	uint64_t x360 = 6535LLU;
	static volatile uint64_t t57 = 15168806534LLU;

	t57 = (((x357+x358)*x359)^x360);

	if (t57 != 4294961088LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x365 = INT32_MIN;
	volatile uint8_t x367 = 58U;
	int16_t x368 = 4;
	volatile int64_t t58 = -3978575152405LL;

	t58 = (((x365+x366)*x367)^x368);

	if (t58 != -124554051646LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x369 = 3U;
	uint64_t x370 = 52074341212807LLU;
	uint8_t x371 = 30U;
	static int64_t x372 = INT64_MIN;
	static volatile uint64_t t59 = 205644033275423859LLU;

	t59 = (((x369+x370)*x371)^x372);

	if (t59 != 9224934267091160108LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x382 = INT8_MIN;
	int8_t x383 = 1;
	static int8_t x384 = INT8_MAX;
	int32_t t60 = -128;

	t60 = (((x381+x382)*x383)^x384);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x385 = -1;
	int64_t x386 = INT64_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile uint32_t x388 = 1U;
	uint64_t t61 = 746552317919141LLU;

	t61 = (((x385+x386)*x387)^x388);

	if (t61 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x398 = 10317709856LL;
	uint32_t x399 = 374U;
	volatile int16_t x400 = -130;

	t62 = (((x397+x398)*x399)^x400);

	if (t62 != -5465141254604LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x401 = -1LL;
	static uint16_t x402 = 50U;
	int32_t x403 = 12;
	int32_t x404 = INT32_MIN;
	int64_t t63 = 139502283288877LL;

	t63 = (((x401+x402)*x403)^x404);

	if (t63 != -2147483060LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x405 = 30;
	static int8_t x406 = -14;
	uint32_t x407 = 8U;
	volatile uint32_t t64 = 90624U;

	t64 = (((x405+x406)*x407)^x408);

	if (t64 != 40186805U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x413 = 6;
	static uint64_t x414 = UINT64_MAX;
	uint16_t x415 = UINT16_MAX;
	uint32_t x416 = 99837U;

	t65 = (((x413+x414)*x415)^x416);

	if (t65 != 358918LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x425 = 764430U;
	static volatile int8_t x426 = INT8_MAX;
	volatile int64_t x427 = -1LL;
	volatile int64_t t66 = -132160684180768726LL;

	t66 = (((x425+x426)*x427)^x428);

	if (t66 != -775540LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x430 = 29280329U;
	uint64_t x431 = 8077515338937542LLU;
	volatile uint32_t x432 = UINT32_MAX;
	static uint64_t t67 = 7LLU;

	t67 = (((x429+x430)*x431)^x432);

	if (t67 != 7626702055046518095LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x437 = 27974U;
	uint16_t x439 = 1U;
	uint64_t t68 = 2062822781804124268LLU;

	t68 = (((x437+x438)*x439)^x440);

	if (t68 != 120684259171LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x449 = UINT16_MAX;
	volatile uint32_t x450 = 49102U;
	int32_t x451 = INT32_MAX;
	int16_t x452 = 1;

	t69 = (((x449+x450)*x451)^x452);

	if (t69 != 2147369010U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x454 = 5635U;
	int64_t x455 = INT64_MIN;

	t70 = (((x453+x454)*x455)^x456);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x461 = 11U;
	volatile int32_t x464 = -5;

	t71 = (((x461+x462)*x463)^x464);

	if (t71 != -58278687069LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x469 = -7609177705LL;
	int8_t x470 = 4;
	static volatile int64_t x471 = -4176LL;
	volatile uint64_t x472 = 1750LLU;
	uint64_t t72 = 24696905430063LLU;

	t72 = (((x469+x470)*x471)^x472);

	if (t72 != 31775926077766LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x486 = -1216400629012LL;
	int64_t t73 = 482490214229043LL;

	t73 = (((x485+x486)*x487)^x488);

	if (t73 != -310180768353043LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x489 = -10;
	uint16_t x490 = 253U;
	uint64_t x491 = UINT64_MAX;
	static int32_t x492 = INT32_MIN;

	t74 = (((x489+x490)*x491)^x492);

	if (t74 != 2147483405LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x493 = UINT16_MAX;
	uint32_t x494 = 10U;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MAX;
	uint32_t t75 = 113724987U;

	t75 = (((x493+x494)*x495)^x496);

	if (t75 != 2147516415U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x497 = UINT8_MAX;
	int16_t x498 = INT16_MIN;
	volatile uint32_t x499 = 9U;
	uint16_t x500 = UINT16_MAX;
	volatile uint32_t t76 = 9651879U;

	t76 = (((x497+x498)*x499)^x500);

	if (t76 != 4294670088U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x509 = INT32_MIN;
	static uint32_t x510 = 674379U;
	uint16_t x511 = 987U;
	uint8_t x512 = 36U;
	volatile uint32_t t77 = 6U;

	t77 = (((x509+x510)*x511)^x512);

	if (t77 != 2813095693U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x513 = 945U;
	volatile uint16_t x514 = UINT16_MAX;
	static int8_t x515 = 1;

	t78 = (((x513+x514)*x515)^x516);

	if (t78 != -66512) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x521 = UINT8_MAX;
	static volatile int8_t x523 = INT8_MIN;
	int16_t x524 = INT16_MIN;
	uint32_t t79 = 1388455U;

	t79 = (((x521+x522)*x523)^x524);

	if (t79 != 256U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x525 = 1;
	static uint32_t x526 = 1307901U;
	uint16_t x527 = UINT16_MAX;
	static int32_t x528 = INT32_MAX;
	volatile uint32_t t80 = 1U;

	t80 = (((x525+x526)*x527)^x528);

	if (t80 != 2333471997U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x530 = UINT64_MAX;
	uint64_t x531 = 51841070005712790LLU;
	static uint64_t t81 = 1109809494394LLU;

	t81 = (((x529+x530)*x531)^x532);

	if (t81 != 352593740471896697LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x537 = INT32_MAX;
	volatile int8_t x538 = -1;
	int16_t x539 = -1;
	static uint16_t x540 = 1U;

	t82 = (((x537+x538)*x539)^x540);

	if (t82 != -2147483645) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x554 = 0;
	int32_t x555 = -132537694;
	int64_t x556 = INT64_MIN;

	t83 = (((x553+x554)*x555)^x556);

	if (t83 != -9223372036722238114LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x557 = INT16_MIN;
	static volatile uint16_t x559 = 497U;
	volatile int16_t x560 = -1;
	int32_t t84 = 2;

	t84 = (((x557+x558)*x559)^x560);

	if (t84 != 16286192) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x561 = UINT8_MAX;
	volatile int16_t x562 = INT16_MIN;
	static int16_t x563 = -32;
	uint32_t x564 = 3U;
	volatile uint32_t t85 = 16510045U;

	t85 = (((x561+x562)*x563)^x564);

	if (t85 != 1040419U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x569 = 0LL;
	volatile uint32_t x570 = UINT32_MAX;
	volatile uint8_t x571 = 0U;
	static volatile int64_t t86 = 629859452983LL;

	t86 = (((x569+x570)*x571)^x572);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x574 = INT8_MIN;
	static int64_t x575 = INT64_MIN;
	int32_t x576 = 39;
	volatile uint64_t t87 = 3330793928LLU;

	t87 = (((x573+x574)*x575)^x576);

	if (t87 != 39LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x577 = -1;
	int32_t x578 = -1844452;
	static uint8_t x579 = UINT8_MAX;
	int16_t x580 = INT16_MAX;
	int32_t t88 = -52240;

	t88 = (((x577+x578)*x579)^x580);

	if (t88 != -470335462) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x581 = 2U;
	int16_t x582 = INT16_MIN;
	volatile int16_t x583 = INT16_MIN;
	volatile int32_t t89 = 4499;

	t89 = (((x581+x582)*x583)^x584);

	if (t89 != 1073676312) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x585 = 83U;
	int64_t x588 = INT64_MIN;

	t90 = (((x585+x586)*x587)^x588);

	if (t90 != -9223372036849401938LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x589 = 1219U;
	int8_t x590 = 0;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = 4;
	static int32_t t91 = -1;

	t91 = (((x589+x590)*x591)^x592);

	if (t91 != 79887161) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x593 = -1;
	int32_t x594 = INT32_MAX;
	int16_t x596 = 4;
	uint64_t t92 = 210000674LLU;

	t92 = (((x593+x594)*x595)^x596);

	if (t92 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x597 = -1;
	int8_t x598 = -1;
	volatile int64_t x599 = -3953592935429789LL;
	volatile uint8_t x600 = 51U;
	static volatile int64_t t93 = -57289676884356LL;

	t93 = (((x597+x598)*x599)^x600);

	if (t93 != 7907185870859529LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x603 = -249245LL;
	int64_t x604 = INT64_MIN;

	t94 = (((x601+x602)*x603)^x604);

	if (t94 != 9223372034284561368LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x605 = UINT64_MAX;
	uint64_t x606 = 673708LLU;
	volatile int16_t x607 = -1;
	int8_t x608 = -1;
	volatile uint64_t t95 = 154LLU;

	t95 = (((x605+x606)*x607)^x608);

	if (t95 != 673706LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x610 = INT16_MIN;
	static volatile int16_t x611 = INT16_MAX;
	int16_t x612 = INT16_MIN;

	t96 = (((x609+x610)*x611)^x612);

	if (t96 != 1059323464) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x617 = 902U;
	int16_t x620 = INT16_MIN;
	static volatile int64_t t97 = -164626LL;

	t97 = (((x617+x618)*x619)^x620);

	if (t97 != 31920LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x641 = UINT64_MAX;
	volatile int64_t x642 = INT64_MAX;
	static int16_t x643 = -1;
	uint64_t x644 = UINT64_MAX;
	volatile uint64_t t98 = 496227235582LLU;

	t98 = (((x641+x642)*x643)^x644);

	if (t98 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x645 = -1LL;
	static int32_t x646 = -1;
	volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t99 = 121251852658LLU;

	t99 = (((x645+x646)*x647)^x648);

	if (t99 != 18446744073709544249LLU) { NG(); } else { ; }
	
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

