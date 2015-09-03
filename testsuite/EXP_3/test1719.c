#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = UINT16_MAX;
volatile uint8_t x7 = 8U;
volatile int32_t x21 = INT32_MAX;
volatile uint64_t x36 = 9550597LLU;
volatile uint8_t x41 = 1U;
int64_t x43 = INT64_MIN;
volatile int32_t x44 = INT32_MAX;
volatile int64_t t6 = 32523LL;
static int32_t x54 = -606;
uint64_t x56 = UINT64_MAX;
uint64_t x73 = 2770LLU;
static volatile int8_t x97 = INT8_MIN;
volatile int64_t x100 = INT64_MAX;
uint16_t x102 = UINT16_MAX;
uint8_t x104 = UINT8_MAX;
int8_t x107 = INT8_MIN;
volatile uint32_t x108 = 142839U;
uint64_t t20 = 279261544LLU;
int64_t t21 = 604832303LL;
volatile uint16_t x145 = 0U;
int8_t x147 = INT8_MIN;
uint32_t x150 = 0U;
static uint16_t x152 = 425U;
int16_t x155 = INT16_MIN;
uint16_t x156 = UINT16_MAX;
static volatile uint64_t x178 = UINT64_MAX;
uint32_t x179 = 25839U;
int8_t x180 = INT8_MAX;
volatile uint32_t x209 = UINT32_MAX;
int16_t x211 = INT16_MIN;
int8_t x212 = INT8_MAX;
int32_t x218 = INT32_MAX;
uint32_t t35 = 10115552U;
static uint32_t x240 = 26937U;
uint16_t x246 = 41U;
uint32_t x264 = 7406U;
uint64_t x266 = 55027654LLU;
uint8_t x272 = 23U;
int16_t x277 = INT16_MIN;
volatile uint16_t x278 = UINT16_MAX;
static uint8_t x279 = 0U;
static int64_t x284 = INT64_MIN;
static volatile int16_t x296 = 2256;
int32_t x311 = 1116068;
uint64_t x337 = UINT64_MAX;
int32_t x346 = 1;
static int8_t x349 = 20;
int64_t x356 = -2125381912633199780LL;
volatile int64_t t53 = -65985654518588LL;
int32_t x372 = INT32_MIN;
static uint32_t x415 = 128371039U;
uint32_t x430 = 1343U;
volatile int64_t t62 = 11731LL;
static int16_t x441 = INT16_MAX;
volatile uint64_t t63 = 684913707327370LLU;
volatile int64_t x447 = INT64_MAX;
int8_t x450 = 1;
uint64_t x451 = 109518078494450LLU;
int8_t x454 = INT8_MIN;
int16_t x476 = INT16_MIN;
static volatile uint64_t t70 = 1919LLU;
static int8_t x482 = 0;
int16_t x484 = INT16_MAX;
int64_t x521 = -1LL;
volatile uint32_t t77 = 1522U;
int8_t x549 = -1;
int32_t x552 = 431;
volatile uint8_t x554 = UINT8_MAX;
static uint64_t x555 = 7748276059LLU;
int32_t x557 = 122120587;
uint16_t x565 = UINT16_MAX;
int64_t x567 = -1LL;
int8_t x571 = -1;
static uint8_t x575 = 0U;
uint32_t x600 = 142551U;
static int64_t t86 = -58673129343971464LL;
volatile uint64_t t88 = 143LLU;
volatile uint8_t x621 = 45U;
uint32_t x635 = 5508U;
int64_t x642 = 5216LL;
uint8_t x655 = 79U;
static int8_t x659 = 1;
int16_t x660 = INT16_MIN;
volatile uint16_t x677 = 52U;
uint8_t x680 = 8U;
volatile uint64_t x681 = 61878907164LLU;


void f0(void) {
	int16_t x1 = -4;
	int16_t x2 = -1;
	int8_t x3 = 13;
	int32_t t0 = -465609987;

	t0 = ((x1*x2)*(x3&x4));

	if (t0 != 52) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	volatile uint64_t x6 = 3LLU;
	volatile int64_t x8 = INT64_MAX;
	volatile uint64_t t1 = 3203657060123342296LLU;

	t1 = ((x5*x6)*(x7&x8));

	if (t1 != 6120LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	static int64_t x14 = -7290LL;
	static int8_t x15 = INT8_MAX;
	static volatile int16_t x16 = INT16_MAX;
	int64_t t2 = -19943456045LL;

	t2 = ((x13*x14)*(x15&x16));

	if (t2 != -60674269050LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x22 = 36376620LL;
	uint32_t x23 = 2U;
	int8_t x24 = INT8_MIN;
	static volatile int64_t t3 = -804902855552LL;

	t3 = ((x21*x22)*(x23&x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	volatile uint64_t x26 = 5432335520458636440LLU;
	uint32_t x27 = UINT32_MAX;
	static volatile int16_t x28 = INT16_MAX;
	volatile uint64_t t4 = 968428427562LLU;

	t4 = ((x25*x26)*(x27&x28));

	if (t4 != 9742312429032864920LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = UINT64_MAX;
	uint16_t x34 = UINT16_MAX;
	static uint16_t x35 = 26507U;
	volatile uint64_t t5 = 118039069682738LLU;

	t5 = ((x33*x34)*(x35&x36));

	if (t5 != 18446744073122292481LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x42 = INT16_MIN;

	t6 = ((x41*x42)*(x43&x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x45 = 32;
	int16_t x46 = INT16_MIN;
	int32_t x47 = -23460286;
	static uint32_t x48 = 0U;
	volatile uint32_t t7 = 50864U;

	t7 = ((x45*x46)*(x47&x48));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MAX;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = 142300163282788442LLU;
	uint8_t x52 = UINT8_MAX;
	volatile uint64_t t8 = 8345456991148715881LLU;

	t8 = ((x49*x50)*(x51&x52));

	if (t8 != 18446743977075736576LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int64_t x55 = -1LL;
	uint64_t t9 = 54LLU;

	t9 = ((x53*x54)*(x55&x56));

	if (t9 != 39714210LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = INT8_MAX;
	static int32_t x66 = -1;
	int8_t x67 = 2;
	uint32_t x68 = 115181U;
	uint32_t t10 = 52824U;

	t10 = ((x65*x66)*(x67&x68));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x74 = UINT64_MAX;
	int64_t x75 = -292297636362LL;
	uint32_t x76 = UINT32_MAX;
	uint64_t t11 = 46054LLU;

	t11 = ((x73*x74)*(x75&x76));

	if (t11 != 18446732841062989876LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = 52595011065861LLU;
	uint8_t x78 = 125U;
	uint32_t x79 = 1766195U;
	volatile int8_t x80 = INT8_MIN;
	volatile uint64_t t12 = 13242240464247LLU;

	t12 = ((x77*x78)*(x79&x80));

	if (t12 != 8293380624693281536LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = 3805927;
	int16_t x82 = -1;
	static uint32_t x83 = 334U;
	uint8_t x84 = 31U;
	uint32_t t13 = 107883U;

	t13 = ((x81*x82)*(x83&x84));

	if (t13 != 4241684318U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = -1;
	uint64_t x94 = 6230279LLU;
	static int16_t x95 = INT16_MIN;
	static int16_t x96 = INT16_MIN;
	static uint64_t t14 = 3696850716122032LLU;

	t14 = ((x93*x94)*(x95&x96));

	if (t14 != 204153782272LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x98 = -163;
	uint64_t x99 = UINT64_MAX;
	volatile uint64_t t15 = 9LLU;

	t15 = ((x97*x98)*(x99&x100));

	if (t15 != 18446744073709530752LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x101 = 0;
	static uint32_t x103 = 434U;
	uint32_t t16 = 6728052U;

	t16 = ((x101*x102)*(x103&x104));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -39;
	volatile uint32_t t17 = 2U;

	t17 = ((x105*x106)*(x107&x108));

	if (t17 != 712458240U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = 9676022498226508LLU;
	static int8_t x114 = -1;
	uint32_t x115 = 7605U;
	uint8_t x116 = 4U;
	static uint64_t t18 = 5589417186400224446LLU;

	t18 = ((x113*x114)*(x115&x116));

	if (t18 != 18408039983716645584LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 7U;
	int32_t t19 = -495;

	t19 = ((x125*x126)*(x127&x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x133 = -1;
	int8_t x134 = INT8_MAX;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = INT8_MIN;

	t20 = ((x133*x134)*(x135&x136));

	if (t20 != 16256LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x137 = -1LL;
	uint32_t x138 = 320344368U;
	int16_t x139 = INT16_MAX;
	static int32_t x140 = -8045;

	t21 = ((x137*x138)*(x139&x140));

	if (t21 != -7919873810064LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x141 = UINT64_MAX;
	volatile int8_t x142 = INT8_MAX;
	volatile uint16_t x143 = UINT16_MAX;
	volatile int8_t x144 = INT8_MIN;
	uint64_t t22 = 3LLU;

	t22 = ((x141*x142)*(x143&x144));

	if (t22 != 18446744073701244800LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x146 = INT64_MAX;
	static uint32_t x148 = 14U;
	volatile int64_t t23 = -2933777138504427059LL;

	t23 = ((x145*x146)*(x147&x148));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x149 = 7U;
	int8_t x151 = 4;
	volatile uint32_t t24 = 240656U;

	t24 = ((x149*x150)*(x151&x152));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = INT8_MIN;
	volatile int8_t x154 = -1;
	int32_t t25 = -94;

	t25 = ((x153*x154)*(x155&x156));

	if (t25 != 4194304) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x169 = 189LLU;
	int16_t x170 = INT16_MAX;
	static int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;
	volatile uint64_t t26 = 139980019971707133LLU;

	t26 = ((x169*x170)*(x171&x172));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = -1;
	static volatile uint16_t x174 = UINT16_MAX;
	volatile uint16_t x175 = 5U;
	static int8_t x176 = INT8_MIN;
	static int32_t t27 = 31288982;

	t27 = ((x173*x174)*(x175&x176));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x177 = 21608357LLU;
	volatile uint64_t t28 = 255655737232258828LLU;

	t28 = ((x177*x178)*(x179&x180));

	if (t28 != 18446744071311023989LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x185 = UINT32_MAX;
	static int16_t x186 = INT16_MIN;
	static int32_t x187 = -1;
	static uint16_t x188 = UINT16_MAX;
	volatile uint32_t t29 = 20595U;

	t29 = ((x185*x186)*(x187&x188));

	if (t29 != 2147450880U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = -3;
	static volatile uint32_t x194 = UINT32_MAX;
	static volatile int8_t x195 = 28;
	volatile int16_t x196 = -14;
	volatile uint32_t t30 = 34015420U;

	t30 = ((x193*x194)*(x195&x196));

	if (t30 != 48U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	uint64_t t31 = 5934472446818910LLU;

	t31 = ((x197*x198)*(x199&x200));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x210 = 92LLU;
	volatile uint64_t t32 = 3LLU;

	t32 = ((x209*x210)*(x211&x212));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x213 = 6;
	int8_t x214 = -1;
	volatile uint16_t x215 = UINT16_MAX;
	int32_t x216 = -274;
	static int32_t t33 = 9337;

	t33 = ((x213*x214)*(x215&x216));

	if (t33 != -391572) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x217 = 0;
	static uint16_t x219 = 117U;
	int32_t x220 = INT32_MIN;
	volatile int32_t t34 = -19102855;

	t34 = ((x217*x218)*(x219&x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	uint32_t x231 = 2U;
	int16_t x232 = INT16_MIN;

	t35 = ((x229*x230)*(x231&x232));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	int8_t x235 = 4;
	uint64_t x236 = 89861012530566393LLU;
	volatile uint64_t t36 = 5389653297LLU;

	t36 = ((x233*x234)*(x235&x236));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x237 = 118U;
	uint16_t x238 = 459U;
	int32_t x239 = -1;
	uint32_t t37 = 119U;

	t37 = ((x237*x238)*(x239&x240));

	if (t37 != 1458961794U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x247 = INT8_MAX;
	volatile uint8_t x248 = 25U;
	uint32_t t38 = 92U;

	t38 = ((x245*x246)*(x247&x248));

	if (t38 != 4294966271U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x253 = 47U;
	int8_t x254 = INT8_MAX;
	int16_t x255 = 0;
	static volatile uint16_t x256 = UINT16_MAX;
	int32_t t39 = 8033498;

	t39 = ((x253*x254)*(x255&x256));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x261 = 95725LLU;
	int32_t x262 = INT32_MIN;
	int32_t x263 = -92;
	volatile uint64_t t40 = 8714249645868089190LLU;

	t40 = ((x261*x262)*(x263&x264));

	if (t40 != 16939520434703958016LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x267 = 268595675761293864LLU;
	int32_t x268 = -5063;
	uint64_t t41 = 1LLU;

	t41 = ((x265*x266)*(x267&x268));

	if (t41 != 5522954334525511952LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	volatile int32_t x271 = INT32_MAX;
	static volatile int32_t t42 = -539481;

	t42 = ((x269*x270)*(x271&x272));

	if (t42 != -750720) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x280 = 1U;
	int32_t t43 = -1;

	t43 = ((x277*x278)*(x279&x280));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x281 = INT64_MAX;
	uint64_t x282 = 2LLU;
	int64_t x283 = INT64_MAX;
	volatile uint64_t t44 = 1059625LLU;

	t44 = ((x281*x282)*(x283&x284));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x285 = 453U;
	int16_t x286 = 291;
	uint32_t x287 = 1225384U;
	volatile int16_t x288 = -1;
	static volatile uint32_t t45 = 96U;

	t45 = ((x285*x286)*(x287&x288));

	if (t45 != 2620005080U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x293 = INT32_MAX;
	volatile uint32_t x294 = 1U;
	static int16_t x295 = INT16_MIN;
	uint32_t t46 = 94891U;

	t46 = ((x293*x294)*(x295&x296));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x297 = -205;
	int16_t x298 = 1002;
	uint32_t x299 = 72U;
	uint16_t x300 = UINT16_MAX;
	uint32_t t47 = 56431U;

	t47 = ((x297*x298)*(x299&x300));

	if (t47 != 4280177776U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x309 = INT16_MIN;
	static uint32_t x310 = UINT32_MAX;
	static uint8_t x312 = UINT8_MAX;
	volatile uint32_t t48 = 200723U;

	t48 = ((x309*x310)*(x311&x312));

	if (t48 != 5373952U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x333 = INT16_MAX;
	int32_t x334 = -1;
	int64_t x335 = INT64_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t49 = 154961LL;

	t49 = ((x333*x334)*(x335&x336));

	if (t49 != -8355585LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x338 = 92U;
	static volatile int64_t x339 = 1LL;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t50 = 29742129577LLU;

	t50 = ((x337*x338)*(x339&x340));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x345 = 14916651LL;
	static volatile uint16_t x347 = 1U;
	int16_t x348 = INT16_MIN;
	volatile int64_t t51 = -20714034LL;

	t51 = ((x345*x346)*(x347&x348));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x350 = 2870;
	static int16_t x351 = INT16_MIN;
	int8_t x352 = -1;
	int32_t t52 = -1;

	t52 = ((x349*x350)*(x351&x352));

	if (t52 != -1880883200) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x353 = 110U;
	static uint32_t x354 = 164734966U;
	uint32_t x355 = UINT32_MAX;

	t53 = ((x353*x354)*(x355&x356));

	if (t53 != 1096528833385894064LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x357 = -1;
	int16_t x358 = -1;
	int16_t x359 = -1;
	volatile int32_t x360 = INT32_MIN;
	int32_t t54 = INT32_MIN;

	t54 = ((x357*x358)*(x359&x360));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x369 = INT16_MAX;
	static uint64_t x370 = 5383LLU;
	static volatile int8_t x371 = INT8_MIN;
	uint64_t t55 = 89909634LLU;

	t55 = ((x369*x370)*(x371&x372));

	if (t55 != 18067960683705663488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x389 = 0U;
	static int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	static volatile int32_t x392 = INT32_MIN;
	int32_t t56 = 96;

	t56 = ((x389*x390)*(x391&x392));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x397 = -1;
	uint32_t x398 = 109945U;
	static int32_t x399 = 1;
	static int16_t x400 = -40;
	volatile uint32_t t57 = 129888U;

	t57 = ((x397*x398)*(x399&x400));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x413 = INT8_MAX;
	static int32_t x414 = -1;
	volatile int8_t x416 = INT8_MIN;
	volatile uint32_t t58 = 1181069821U;

	t58 = ((x413*x414)*(x415&x416));

	if (t58 != 876759296U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x417 = -1;
	volatile int64_t x418 = -2115LL;
	int32_t x419 = -118149034;
	uint32_t x420 = UINT32_MAX;
	volatile int64_t t59 = -11926418189LL;

	t59 = ((x417*x418)*(x419&x420));

	if (t59 != 8833970624130LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x425 = 48U;
	int8_t x426 = -3;
	int32_t x427 = 246;
	int16_t x428 = -1;
	volatile uint32_t t60 = 91661U;

	t60 = ((x425*x426)*(x427&x428));

	if (t60 != 4294931872U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x429 = -11;
	uint64_t x431 = 43025527LLU;
	uint32_t x432 = 128621U;
	uint64_t t61 = 221941954274LLU;

	t61 = ((x429*x430)*(x431&x432));

	if (t61 != 145568825862039LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x437 = -1966LL;
	int8_t x438 = INT8_MAX;
	int64_t x439 = 557323LL;
	volatile uint16_t x440 = UINT16_MAX;

	t62 = ((x437*x438)*(x439&x440));

	if (t62 != -8248244870LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MIN;

	t63 = ((x441*x442)*(x443&x444));

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x445 = -28;
	uint16_t x446 = 186U;
	uint64_t x448 = 604081284235LLU;
	static volatile uint64_t t64 = 19851620506LLU;

	t64 = ((x445*x446)*(x447&x448));

	if (t64 != 18443598018381255736LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x449 = UINT64_MAX;
	volatile int16_t x452 = -634;
	volatile uint64_t t65 = 477475273LLU;

	t65 = ((x449*x450)*(x451&x452));

	if (t65 != 18446634555631057790LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x453 = UINT8_MAX;
	int8_t x455 = -1;
	uint16_t x456 = 32U;
	volatile int32_t t66 = 28;

	t66 = ((x453*x454)*(x455&x456));

	if (t66 != -1044480) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x457 = UINT16_MAX;
	int16_t x458 = -1;
	int16_t x459 = INT16_MIN;
	static int64_t x460 = -1LL;
	volatile int64_t t67 = 0LL;

	t67 = ((x457*x458)*(x459&x460));

	if (t67 != 2147450880LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x461 = INT8_MIN;
	uint64_t x462 = 888500145331711547LLU;
	uint16_t x463 = 6U;
	int16_t x464 = INT16_MAX;
	uint64_t t68 = 1793877LLU;

	t68 = ((x461*x462)*(x463&x464));

	if (t68 != 161419112498941696LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x473 = -1LL;
	volatile int64_t x474 = -90818376791LL;
	static int16_t x475 = INT16_MIN;
	volatile int64_t t69 = -220224586LL;

	t69 = ((x473*x474)*(x475&x476));

	if (t69 != -2975936570687488LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x477 = 121329010978445LLU;
	volatile int16_t x478 = INT16_MAX;
	int32_t x479 = -110;
	int64_t x480 = INT64_MAX;

	t70 = ((x477*x478)*(x479&x480));

	if (t70 != 14630582505506209942LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x481 = INT16_MAX;
	volatile uint64_t x483 = UINT64_MAX;
	volatile uint64_t t71 = 1366925898603400015LLU;

	t71 = ((x481*x482)*(x483&x484));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x485 = 0U;
	int8_t x486 = -1;
	static int16_t x487 = INT16_MAX;
	volatile int64_t x488 = -29884LL;
	volatile int64_t t72 = 50178751415686655LL;

	t72 = ((x485*x486)*(x487&x488));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x509 = INT8_MIN;
	static int64_t x510 = 41746LL;
	int16_t x511 = INT16_MIN;
	static int8_t x512 = 1;
	volatile int64_t t73 = 32LL;

	t73 = ((x509*x510)*(x511&x512));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x513 = 1U;
	uint16_t x514 = UINT16_MAX;
	uint8_t x515 = 56U;
	uint16_t x516 = 10U;
	volatile int32_t t74 = 0;

	t74 = ((x513*x514)*(x515&x516));

	if (t74 != 524280) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x517 = 0;
	int8_t x518 = -1;
	static int8_t x519 = -12;
	uint16_t x520 = 13U;
	static int32_t t75 = -202587;

	t75 = ((x517*x518)*(x519&x520));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x522 = -1;
	static int32_t x523 = -1;
	int64_t x524 = -79867LL;
	static int64_t t76 = -16276LL;

	t76 = ((x521*x522)*(x523&x524));

	if (t76 != -79867LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x529 = 6;
	static int16_t x530 = INT16_MIN;
	uint32_t x531 = UINT32_MAX;
	uint16_t x532 = 196U;

	t77 = ((x529*x530)*(x531&x532));

	if (t77 != 4256432128U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x537 = 228U;
	uint8_t x538 = 34U;
	static int8_t x539 = 2;
	static volatile int8_t x540 = -1;
	int32_t t78 = 190443131;

	t78 = ((x537*x538)*(x539&x540));

	if (t78 != 15504) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x550 = 3U;
	int8_t x551 = INT8_MIN;
	uint32_t t79 = 254045234U;

	t79 = ((x549*x550)*(x551&x552));

	if (t79 != 4294966144U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x553 = INT8_MAX;
	int32_t x556 = INT32_MIN;
	volatile uint64_t t80 = 101002LLU;

	t80 = ((x553*x554)*(x555&x556));

	if (t80 != 208638773821440LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x558 = UINT32_MAX;
	static int32_t x559 = -1;
	int32_t x560 = INT32_MIN;
	uint32_t t81 = 310443U;

	t81 = ((x557*x558)*(x559&x560));

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x566 = 245260197U;
	int32_t x568 = INT32_MAX;
	volatile int64_t t82 = 1LL;

	t82 = ((x565*x566)*(x567&x568));

	if (t82 != 2919265138458058661LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x569 = INT16_MIN;
	volatile int8_t x570 = INT8_MIN;
	int8_t x572 = -1;
	static volatile int32_t t83 = 917;

	t83 = ((x569*x570)*(x571&x572));

	if (t83 != -4194304) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x573 = UINT64_MAX;
	uint32_t x574 = UINT32_MAX;
	int64_t x576 = INT64_MAX;
	volatile uint64_t t84 = 71LLU;

	t84 = ((x573*x574)*(x575&x576));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x593 = INT32_MAX;
	uint8_t x594 = 1U;
	int64_t x595 = INT64_MIN;
	static int32_t x596 = 2979;
	int64_t t85 = 12585786179LL;

	t85 = ((x593*x594)*(x595&x596));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x597 = 2;
	int8_t x598 = 1;
	int64_t x599 = 251LL;

	t86 = ((x597*x598)*(x599&x600));

	if (t86 != 422LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x601 = 14269U;
	int16_t x602 = -1;
	uint8_t x603 = 9U;
	uint16_t x604 = UINT16_MAX;
	volatile uint32_t t87 = 55137522U;

	t87 = ((x601*x602)*(x603&x604));

	if (t87 != 4294838875U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x609 = UINT8_MAX;
	uint64_t x610 = UINT64_MAX;
	uint8_t x611 = 10U;
	uint16_t x612 = 5U;

	t88 = ((x609*x610)*(x611&x612));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x613 = UINT16_MAX;
	int8_t x614 = -29;
	uint64_t x615 = 60714972759LLU;
	int64_t x616 = -1LL;
	uint64_t t89 = 27304323380LLU;

	t89 = ((x613*x614)*(x615&x616));

	if (t89 != 18331354357256480731LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x617 = 15870191U;
	volatile uint16_t x618 = 582U;
	uint32_t x619 = 0U;
	static int32_t x620 = INT32_MAX;
	volatile uint32_t t90 = 3914U;

	t90 = ((x617*x618)*(x619&x620));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x622 = 65669LLU;
	volatile int16_t x623 = INT16_MIN;
	static int64_t x624 = INT64_MIN;
	volatile uint64_t t91 = 30206638781417LLU;

	t91 = ((x621*x622)*(x623&x624));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x633 = 10U;
	volatile int16_t x634 = -1;
	static int8_t x636 = INT8_MAX;
	static uint32_t t92 = 2100698961U;

	t92 = ((x633*x634)*(x635&x636));

	if (t92 != 4294967256U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x637 = -1;
	uint32_t x638 = UINT32_MAX;
	int16_t x639 = INT16_MIN;
	volatile uint64_t x640 = 55415570651252121LLU;
	static volatile uint64_t t93 = 1544385490807LLU;

	t93 = ((x637*x638)*(x639&x640));

	if (t93 != 55415570651250688LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x641 = -1;
	int8_t x643 = 3;
	int8_t x644 = INT8_MIN;
	volatile int64_t t94 = 19422733590LL;

	t94 = ((x641*x642)*(x643&x644));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x645 = 3;
	int8_t x646 = INT8_MIN;
	static volatile int32_t x647 = INT32_MIN;
	uint16_t x648 = 16076U;
	volatile int32_t t95 = -352417;

	t95 = ((x645*x646)*(x647&x648));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x653 = UINT16_MAX;
	volatile int64_t x654 = -1LL;
	int32_t x656 = 371889;
	int64_t t96 = 257371423773215LL;

	t96 = ((x653*x654)*(x655&x656));

	if (t96 != -65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x657 = 12;
	int32_t x658 = -870;
	volatile int32_t t97 = 55657436;

	t97 = ((x657*x658)*(x659&x660));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x678 = UINT32_MAX;
	int16_t x679 = 168;
	static uint32_t t98 = 3457U;

	t98 = ((x677*x678)*(x679&x680));

	if (t98 != 4294966880U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x682 = 88U;
	int64_t x683 = -1LL;
	volatile int64_t x684 = 3004272266419LL;
	static uint64_t t99 = 6LLU;

	t99 = ((x681*x682)*(x683&x684));

	if (t99 != 3383298158418281184LLU) { NG(); } else { ; }
	
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

