#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 1057388195LLU;
static volatile uint16_t x9 = 0U;
static uint16_t x11 = 867U;
static int64_t t6 = -3214491733780LL;
volatile uint8_t x58 = UINT8_MAX;
int16_t x85 = INT16_MIN;
int32_t x88 = -2860;
volatile int16_t x93 = INT16_MIN;
static uint64_t x97 = UINT64_MAX;
static volatile int16_t x102 = INT16_MAX;
volatile int64_t t16 = 673890LL;
volatile int64_t t17 = -725654632585LL;
int16_t x110 = 485;
int8_t x117 = 1;
int8_t x123 = 1;
int8_t x141 = 0;
int64_t x148 = -115501291048594958LL;
uint8_t x153 = 6U;
volatile uint64_t t26 = 0LLU;
int32_t x157 = 3641346;
uint32_t x160 = 1061432577U;
volatile uint16_t x174 = 1U;
static int32_t x175 = INT32_MIN;
int64_t x176 = -1LL;
static int64_t t29 = 1LL;
uint64_t x191 = 8075338295569514LLU;
static volatile uint16_t x212 = 25U;
int8_t x224 = 1;
int8_t x251 = -1;
uint32_t x255 = 4048630U;
volatile int8_t x258 = INT8_MIN;
uint16_t x259 = 11U;
uint32_t t43 = 33810U;
int16_t x280 = -1;
static int32_t x286 = -671067;
static uint32_t x289 = UINT32_MAX;
int32_t x291 = -1;
int8_t x295 = INT8_MIN;
int64_t t50 = 1190173LL;
volatile uint16_t x309 = UINT16_MAX;
static int8_t x337 = 1;
uint8_t x338 = 12U;
int64_t t59 = 1403261659LL;
uint64_t t60 = 1306085908987LLU;
int64_t x357 = INT64_MIN;
int64_t x358 = 7LL;
static volatile uint64_t t61 = 9984678050LLU;
uint32_t x365 = UINT32_MAX;
uint8_t x366 = UINT8_MAX;
static volatile int64_t t63 = 63LL;
int16_t x369 = INT16_MIN;
static int8_t x371 = INT8_MIN;
int32_t x373 = -1;
int8_t x375 = INT8_MIN;
static int32_t t65 = -67446042;
static int64_t t66 = -983761642333LL;
uint64_t t67 = 4LLU;
volatile uint8_t x391 = UINT8_MAX;
volatile uint64_t x396 = UINT64_MAX;
int32_t x397 = INT32_MIN;
volatile int16_t x403 = INT16_MIN;
int8_t x406 = INT8_MIN;
int32_t x410 = INT32_MIN;
int16_t x423 = INT16_MIN;
volatile int64_t t74 = 459939394235LL;
int8_t x431 = -1;
uint8_t x437 = UINT8_MAX;
static uint8_t x439 = 1U;
static volatile int32_t t76 = 1027652063;
int16_t x451 = INT16_MAX;
volatile uint32_t t79 = 2U;
volatile int8_t x453 = 54;
uint64_t x462 = UINT64_MAX;
static uint8_t x463 = 25U;
uint32_t x464 = 30U;
uint64_t t81 = 0LLU;
static volatile int64_t t82 = -3141164787049011335LL;
static volatile uint64_t t84 = 0LLU;
volatile uint32_t t85 = 125852U;
uint16_t x499 = 12U;
static volatile uint8_t x500 = UINT8_MAX;
static uint64_t t87 = 148LLU;
int8_t x510 = INT8_MAX;
volatile int64_t x517 = 80594340801LL;
uint16_t x535 = UINT16_MAX;
static int32_t x542 = -1;
uint32_t x553 = 492239599U;
int8_t x557 = -1;


void f0(void) {
	static uint16_t x1 = 26U;
	volatile int16_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = -1;
	uint32_t t0 = 5924U;

	t0 = ((x1%x2)/(x3*x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	uint64_t x6 = 31433043936624228LLU;
	volatile int16_t x7 = INT16_MIN;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5%x6)/(x7*x8));

	if (t1 != 823374232414LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -495;
	uint16_t x12 = 8551U;
	int32_t t2 = -2;

	t2 = ((x9%x10)/(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int16_t x14 = -177;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 1U;
	volatile int32_t t3 = -52647986;

	t3 = ((x13%x14)/(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MAX;
	static uint64_t x30 = UINT64_MAX;
	static uint16_t x31 = 62U;
	int16_t x32 = 29;
	volatile uint64_t t4 = 37743171380858950LLU;

	t4 = ((x29%x30)/(x31*x32));

	if (t4 != 5129795348640031LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -323;
	uint32_t x38 = 164075U;
	int64_t x39 = -1LL;
	int32_t x40 = 82634;
	static int64_t t5 = -2994288717652392171LL;

	t5 = ((x37%x38)/(x39*x40));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MIN;
	static int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 404U;

	t6 = ((x41%x42)/(x43*x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = -1LL;
	int64_t x51 = -1LL;
	uint32_t x52 = UINT32_MAX;
	volatile int64_t t7 = -66413053390306549LL;

	t7 = ((x49%x50)/(x51*x52));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = 951761U;
	int16_t x59 = -3876;
	static volatile int16_t x60 = 1;
	static volatile uint32_t t8 = 28523095U;

	t8 = ((x57%x58)/(x59*x60));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = 5U;
	int32_t x66 = -1;
	static int32_t x67 = INT32_MAX;
	static volatile uint16_t x68 = 1U;
	volatile uint32_t t9 = 2041847221U;

	t9 = ((x65%x66)/(x67*x68));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 40U;
	uint32_t x70 = 13475U;
	volatile int64_t x71 = -1LL;
	int8_t x72 = -3;
	volatile int64_t t10 = -1509LL;

	t10 = ((x69%x70)/(x71*x72));

	if (t10 != 13LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x77 = INT64_MIN;
	static int16_t x78 = INT16_MIN;
	static int64_t x79 = -389426722664201LL;
	static int8_t x80 = INT8_MIN;
	volatile int64_t t11 = 4051965636003LL;

	t11 = ((x77%x78)/(x79*x80));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = -12138;
	int64_t x82 = INT64_MIN;
	int32_t x83 = -1;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t12 = 853069487964LL;

	t12 = ((x81%x82)/(x83*x84));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x86 = UINT8_MAX;
	uint8_t x87 = 3U;
	int32_t t13 = 6091100;

	t13 = ((x85%x86)/(x87*x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x94 = INT16_MIN;
	uint16_t x95 = 9U;
	static int32_t x96 = -1;
	volatile int32_t t14 = -32124949;

	t14 = ((x93%x94)/(x95*x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x98 = 6U;
	static int8_t x99 = INT8_MIN;
	static uint16_t x100 = 278U;
	volatile uint64_t t15 = 14534130456172LLU;

	t15 = ((x97%x98)/(x99*x100));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x101 = INT8_MIN;
	static int32_t x103 = -32087456;
	static int64_t x104 = 3LL;

	t16 = ((x101%x102)/(x103*x104));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	uint16_t x108 = 39U;

	t17 = ((x105%x106)/(x107*x108));

	if (t17 != -110127366LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x109 = 5;
	int16_t x111 = INT16_MAX;
	static uint64_t x112 = 8060129019662610012LLU;
	volatile uint64_t t18 = 89800749839162LLU;

	t18 = ((x109%x110)/(x111*x112));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = INT32_MIN;
	static uint64_t x114 = UINT64_MAX;
	uint16_t x115 = 20187U;
	int8_t x116 = INT8_MIN;
	static uint64_t t19 = 45140LLU;

	t19 = ((x113%x114)/(x115*x116));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x118 = INT32_MAX;
	int8_t x119 = INT8_MAX;
	int64_t x120 = -4685342801771894LL;
	int64_t t20 = 1781LL;

	t20 = ((x117%x118)/(x119*x120));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = -1;
	static int64_t x122 = -62532063215491978LL;
	int64_t x124 = INT64_MIN;
	static int64_t t21 = -3661963387LL;

	t21 = ((x121%x122)/(x123*x124));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x133 = 184646663LLU;
	static int32_t x134 = 903032382;
	int8_t x135 = INT8_MIN;
	static uint64_t x136 = 24436511951716LLU;
	volatile uint64_t t22 = 442837804587LLU;

	t22 = ((x133%x134)/(x135*x136));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x142 = 7;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 2U;
	uint32_t t23 = 563U;

	t23 = ((x141%x142)/(x143*x144));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x145 = -1;
	static uint64_t x146 = UINT64_MAX;
	int8_t x147 = 1;
	uint64_t t24 = 10429510796LLU;

	t24 = ((x145%x146)/(x147*x148));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -1;
	uint16_t x150 = 12024U;
	volatile uint8_t x151 = 6U;
	volatile int16_t x152 = INT16_MAX;
	int32_t t25 = -1;

	t25 = ((x149%x150)/(x151*x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x154 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	static uint64_t x156 = UINT64_MAX;

	t26 = ((x153%x154)/(x155*x156));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x158 = INT16_MIN;
	static int32_t x159 = INT32_MAX;
	volatile uint32_t t27 = 177005148U;

	t27 = ((x157%x158)/(x159*x160));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = INT8_MAX;
	uint16_t x170 = UINT16_MAX;
	static volatile int64_t x171 = -1LL;
	volatile int16_t x172 = -1;
	int64_t t28 = -41455LL;

	t28 = ((x169%x170)/(x171*x172));

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x173 = INT64_MIN;

	t29 = ((x173%x174)/(x175*x176));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x177 = -1;
	volatile int32_t x178 = INT32_MAX;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = -209;
	int32_t t30 = 377241223;

	t30 = ((x177%x178)/(x179*x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x189 = 13405LLU;
	volatile int8_t x190 = -1;
	static int8_t x192 = INT8_MIN;
	volatile uint64_t t31 = 12416LLU;

	t31 = ((x189%x190)/(x191*x192));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x201 = INT8_MAX;
	int64_t x202 = -57211108716419876LL;
	static int8_t x203 = INT8_MAX;
	static volatile uint32_t x204 = 15913U;
	int64_t t32 = 22067512749114390LL;

	t32 = ((x201%x202)/(x203*x204));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MIN;
	static int8_t x208 = 1;
	volatile uint64_t t33 = 52897574419881972LLU;

	t33 = ((x205%x206)/(x207*x208));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x209 = 373916781477LL;
	uint32_t x210 = 243U;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t t34 = -15LL;

	t34 = ((x209%x210)/(x211*x212));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 124LLU;
	int64_t x215 = -1LL;
	uint64_t x216 = UINT64_MAX;
	uint64_t t35 = 134553LLU;

	t35 = ((x213%x214)/(x215*x216));

	if (t35 != 7LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	int32_t x220 = -1259;
	volatile int64_t t36 = -32979025LL;

	t36 = ((x217%x218)/(x219*x220));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x221 = 66U;
	int16_t x222 = INT16_MIN;
	uint8_t x223 = 20U;
	static volatile int32_t t37 = 5;

	t37 = ((x221%x222)/(x223*x224));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x225 = -1LL;
	static uint32_t x226 = 8U;
	int64_t x227 = -1LL;
	uint16_t x228 = UINT16_MAX;
	volatile int64_t t38 = -42013LL;

	t38 = ((x225%x226)/(x227*x228));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MAX;
	uint16_t x230 = 105U;
	static int16_t x231 = -1;
	static int16_t x232 = 85;
	int32_t t39 = -720351465;

	t39 = ((x229%x230)/(x231*x232));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x234 = INT8_MAX;
	int8_t x235 = -1;
	uint16_t x236 = 14052U;
	int64_t t40 = 5418LL;

	t40 = ((x233%x234)/(x235*x236));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x249 = -1;
	static uint32_t x250 = 7412109U;
	uint64_t x252 = 832036735LLU;
	volatile uint64_t t41 = 9369LLU;

	t41 = ((x249%x250)/(x251*x252));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MIN;
	static int32_t x256 = -1;
	static uint64_t t42 = 22419854733629910LLU;

	t42 = ((x253%x254)/(x255*x256));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x257 = UINT32_MAX;
	uint32_t x260 = 90826U;

	t43 = ((x257%x258)/(x259*x260));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x265 = 94338521U;
	int64_t x266 = -1LL;
	int16_t x267 = -1;
	volatile int16_t x268 = -29;
	static volatile int64_t t44 = -9803784LL;

	t44 = ((x265%x266)/(x267*x268));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = UINT64_MAX;
	volatile uint8_t x271 = 66U;
	volatile int16_t x272 = -1;
	volatile uint64_t t45 = 521117LLU;

	t45 = ((x269%x270)/(x271*x272));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x273 = -56832298850LL;
	int8_t x274 = 1;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t x276 = 504LL;
	volatile int64_t t46 = 102607569LL;

	t46 = ((x273%x274)/(x275*x276));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x277 = -1;
	static uint8_t x278 = UINT8_MAX;
	static int8_t x279 = -1;
	volatile int32_t t47 = 935015;

	t47 = ((x277%x278)/(x279*x280));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x285 = 53481LLU;
	volatile uint8_t x287 = 5U;
	int16_t x288 = -1;
	static volatile uint64_t t48 = 60681LLU;

	t48 = ((x285%x286)/(x287*x288));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x290 = INT16_MAX;
	static uint16_t x292 = UINT16_MAX;
	uint32_t t49 = 866623448U;

	t49 = ((x289%x290)/(x291*x292));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x293 = 1U;
	volatile int64_t x294 = INT64_MIN;
	int32_t x296 = -2233660;

	t50 = ((x293%x294)/(x295*x296));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = INT32_MIN;
	static volatile int64_t x298 = INT64_MAX;
	uint32_t x299 = 1273U;
	static int8_t x300 = INT8_MIN;
	int64_t t51 = 58696106578572LL;

	t51 = ((x297%x298)/(x299*x300));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MAX;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t52 = 39949;

	t52 = ((x309%x310)/(x311*x312));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x313 = -1;
	uint32_t x314 = 216U;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 18U;
	static volatile uint32_t t53 = 836U;

	t53 = ((x313%x314)/(x315*x316));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = 8;
	volatile int8_t x327 = 23;
	static uint16_t x328 = 14U;
	static int32_t t54 = 1;

	t54 = ((x325%x326)/(x327*x328));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x329 = INT8_MIN;
	static int8_t x330 = 1;
	static int64_t x331 = -1LL;
	int8_t x332 = -1;
	int64_t t55 = -1050022952976443LL;

	t55 = ((x329%x330)/(x331*x332));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x333 = 48727LL;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	static uint16_t x336 = 1241U;
	int64_t t56 = 213503921LL;

	t56 = ((x333%x334)/(x335*x336));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x339 = INT8_MIN;
	static int8_t x340 = -30;
	volatile int32_t t57 = 517882;

	t57 = ((x337%x338)/(x339*x340));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x345 = 122U;
	int32_t x346 = INT32_MIN;
	int8_t x347 = -46;
	static uint8_t x348 = 30U;
	int32_t t58 = -268;

	t58 = ((x345%x346)/(x347*x348));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	int32_t x351 = -1;
	int64_t x352 = -1LL;

	t59 = ((x349%x350)/(x351*x352));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x353 = 66195448604504606LLU;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -501606LL;
	int8_t x356 = INT8_MAX;

	t60 = ((x353%x354)/(x355*x356));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 856238237LLU;

	t61 = ((x357%x358)/(x359*x360));

	if (t61 != 328739LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x361 = -62798LL;
	uint32_t x362 = 13284U;
	int32_t x363 = -739;
	volatile uint64_t x364 = 20LLU;
	uint64_t t62 = 27247059173LLU;

	t62 = ((x361%x362)/(x363*x364));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x367 = 2;
	int64_t x368 = -1LL;

	t63 = ((x365%x366)/(x367*x368));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x370 = -1LL;
	int8_t x372 = -1;
	volatile int64_t t64 = 3816520518LL;

	t64 = ((x369%x370)/(x371*x372));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x374 = 109U;
	int8_t x376 = INT8_MAX;

	t65 = ((x373%x374)/(x375*x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x377 = INT64_MIN;
	uint16_t x378 = 9U;
	static int32_t x379 = 171;
	int8_t x380 = INT8_MIN;

	t66 = ((x377%x378)/(x379*x380));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = INT16_MAX;
	uint16_t x382 = 920U;
	static volatile int32_t x383 = INT32_MAX;
	static uint64_t x384 = UINT64_MAX;

	t67 = ((x381%x382)/(x383*x384));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = 1295;
	uint32_t x390 = 12763U;
	volatile int64_t x392 = -5011LL;
	int64_t t68 = -183360706419784267LL;

	t68 = ((x389%x390)/(x391*x392));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = 4;
	int16_t x395 = INT16_MIN;
	uint64_t t69 = 6020LLU;

	t69 = ((x393%x394)/(x395*x396));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x398 = INT8_MAX;
	uint32_t x399 = 51181913U;
	uint32_t x400 = 27837U;
	static volatile uint32_t t70 = 244988U;

	t70 = ((x397%x398)/(x399*x400));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x401 = 3183LL;
	int32_t x402 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	int64_t t71 = 7346510372253LL;

	t71 = ((x401%x402)/(x403*x404));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x405 = INT16_MIN;
	int32_t x407 = -1;
	volatile int8_t x408 = -1;
	volatile int32_t t72 = 1303;

	t72 = ((x405%x406)/(x407*x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x409 = 143160669U;
	static int16_t x411 = INT16_MIN;
	uint16_t x412 = 14173U;
	volatile uint32_t t73 = 15076182U;

	t73 = ((x409%x410)/(x411*x412));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x421 = INT8_MAX;
	static int32_t x422 = INT32_MAX;
	int64_t x424 = 2855727LL;

	t74 = ((x421%x422)/(x423*x424));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x429 = INT8_MAX;
	int16_t x430 = -1;
	int16_t x432 = -1;
	volatile int32_t t75 = -17661917;

	t75 = ((x429%x430)/(x431*x432));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x438 = 10U;
	int32_t x440 = INT32_MIN;

	t76 = ((x437%x438)/(x439*x440));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x441 = INT32_MIN;
	uint32_t x442 = 67300U;
	static volatile int16_t x443 = INT16_MIN;
	static volatile uint64_t x444 = 22629825LLU;
	volatile uint64_t t77 = 27842082LLU;

	t77 = ((x441%x442)/(x443*x444));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MIN;
	int16_t x447 = -1;
	int8_t x448 = -1;
	int32_t t78 = 0;

	t78 = ((x445%x446)/(x447*x448));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x449 = UINT32_MAX;
	int16_t x450 = INT16_MAX;
	int16_t x452 = INT16_MIN;

	t79 = ((x449%x450)/(x451*x452));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x454 = 69042298U;
	static uint16_t x455 = 34U;
	volatile int16_t x456 = -1;
	uint32_t t80 = 59U;

	t80 = ((x453%x454)/(x455*x456));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x461 = -44566505405097203LL;

	t81 = ((x461%x462)/(x463*x464));

	if (t81 != 24536236757739272LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x465 = 7U;
	static volatile int32_t x466 = INT32_MIN;
	volatile int64_t x467 = -1LL;
	uint8_t x468 = UINT8_MAX;

	t82 = ((x465%x466)/(x467*x468));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x469 = 997U;
	uint32_t x470 = 226563355U;
	int32_t x471 = -28;
	uint8_t x472 = 3U;
	uint32_t t83 = 14U;

	t83 = ((x469%x470)/(x471*x472));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x473 = 1601249LLU;
	uint8_t x474 = UINT8_MAX;
	int32_t x475 = -1342;
	volatile uint8_t x476 = 7U;

	t84 = ((x473%x474)/(x475*x476));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x477 = -1;
	volatile uint8_t x478 = 93U;
	volatile uint32_t x479 = 912030U;
	int8_t x480 = INT8_MAX;

	t85 = ((x477%x478)/(x479*x480));

	if (t85 != 37U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x493 = -1;
	static volatile int32_t x494 = -6;
	static int64_t x495 = INT64_MAX;
	int16_t x496 = -1;
	int64_t t86 = 24546479LL;

	t86 = ((x493%x494)/(x495*x496));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x497 = UINT64_MAX;
	volatile int8_t x498 = INT8_MAX;

	t87 = ((x497%x498)/(x499*x500));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x501 = UINT32_MAX;
	volatile int8_t x502 = INT8_MIN;
	static volatile int64_t x503 = -2LL;
	volatile uint8_t x504 = 5U;
	int64_t t88 = -34187453659LL;

	t88 = ((x501%x502)/(x503*x504));

	if (t88 != -12LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x505 = 0;
	volatile int8_t x506 = INT8_MIN;
	int64_t x507 = -2LL;
	uint64_t x508 = 35688LLU;
	static volatile uint64_t t89 = 12314LLU;

	t89 = ((x505%x506)/(x507*x508));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x509 = UINT32_MAX;
	int8_t x511 = INT8_MAX;
	volatile uint64_t x512 = 1173173871340151LLU;
	static volatile uint64_t t90 = 3485430179454666755LLU;

	t90 = ((x509%x510)/(x511*x512));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x513 = INT16_MIN;
	int64_t x514 = 375647LL;
	uint64_t x515 = UINT64_MAX;
	static int64_t x516 = INT64_MIN;
	static volatile uint64_t t91 = 5062LLU;

	t91 = ((x513%x514)/(x515*x516));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x518 = 17U;
	int32_t x519 = INT32_MIN;
	uint16_t x520 = 1U;
	int64_t t92 = 0LL;

	t92 = ((x517%x518)/(x519*x520));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x525 = 13;
	uint64_t x526 = 8LLU;
	uint8_t x527 = UINT8_MAX;
	volatile uint8_t x528 = 2U;
	uint64_t t93 = 183233LLU;

	t93 = ((x525%x526)/(x527*x528));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x529 = 862609U;
	int64_t x530 = -2286198186LL;
	static uint32_t x531 = UINT32_MAX;
	static int8_t x532 = -1;
	int64_t t94 = 625230313133549LL;

	t94 = ((x529%x530)/(x531*x532));

	if (t94 != 862609LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x533 = INT32_MIN;
	volatile int64_t x534 = INT64_MIN;
	int64_t x536 = -29383462LL;
	static int64_t t95 = -522230159LL;

	t95 = ((x533%x534)/(x535*x536));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x541 = INT8_MIN;
	uint16_t x543 = UINT16_MAX;
	volatile int32_t x544 = -1;
	int32_t t96 = 3;

	t96 = ((x541%x542)/(x543*x544));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x545 = -1;
	int8_t x546 = INT8_MAX;
	int64_t x547 = INT64_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	volatile uint64_t t97 = 577LLU;

	t97 = ((x545%x546)/(x547*x548));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x554 = -1;
	int8_t x555 = INT8_MAX;
	volatile int16_t x556 = -1;
	uint32_t t98 = 3408U;

	t98 = ((x553%x554)/(x555*x556));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x558 = 37U;
	uint32_t x559 = UINT32_MAX;
	int16_t x560 = INT16_MIN;
	uint32_t t99 = 1U;

	t99 = ((x557%x558)/(x559*x560));

	if (t99 != 131071U) { NG(); } else { ; }
	
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

