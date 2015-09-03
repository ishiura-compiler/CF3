#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 79389446108453LLU;
int64_t x2 = INT64_MAX;
int64_t x4 = INT64_MIN;
volatile uint32_t t3 = 12459U;
volatile int32_t x17 = INT32_MAX;
volatile int32_t x21 = INT32_MAX;
static int64_t x22 = 25448342LL;
uint16_t x28 = 87U;
static volatile int64_t t6 = -85363267963523976LL;
uint8_t x29 = 5U;
uint64_t x36 = UINT64_MAX;
uint64_t t9 = 23LLU;
int64_t t10 = 2843LL;
int16_t x48 = -1;
int32_t t11 = 5601630;
int16_t x54 = INT16_MIN;
uint8_t x56 = UINT8_MAX;
volatile int16_t x58 = -67;
int64_t x65 = INT64_MIN;
volatile int32_t x66 = -1;
uint32_t x87 = 57U;
static int16_t x95 = 6009;
int8_t x104 = 4;
uint64_t x125 = 62779717158083201LLU;
static uint8_t x135 = 7U;
uint64_t t25 = 767081012863970039LLU;
volatile int8_t x150 = INT8_MAX;
static volatile int64_t x155 = 1584647486LL;
int16_t x156 = -1;
int32_t x174 = INT32_MAX;
uint8_t x175 = 6U;
volatile uint32_t x182 = UINT32_MAX;
int16_t x185 = 1;
static volatile uint8_t x190 = UINT8_MAX;
static uint64_t x198 = 0LLU;
static int16_t x199 = 5;
uint32_t x200 = UINT32_MAX;
uint32_t x211 = 24308U;
uint32_t x212 = 76796U;
uint32_t t36 = 96284056U;
int64_t x217 = 271001776LL;
uint16_t x219 = UINT16_MAX;
static uint16_t x221 = 4U;
volatile int32_t x228 = INT32_MIN;
static volatile uint8_t x237 = 1U;
static int64_t x238 = 10630552312449LL;
volatile uint8_t x240 = 8U;
int32_t x242 = INT32_MAX;
int16_t x249 = INT16_MIN;
int16_t x252 = -1;
uint64_t t45 = 426927LLU;
volatile int64_t x275 = 5LL;
int32_t x282 = 583;
static int16_t x287 = -1;
int32_t t50 = -122914989;
uint64_t x289 = UINT64_MAX;
int64_t x290 = -3195704LL;
static volatile int16_t x292 = -8;
static int64_t x303 = INT64_MIN;
uint32_t x306 = 8U;
static int64_t x310 = -92272889930LL;
static int8_t x316 = -57;
volatile uint32_t t57 = 7659U;
int16_t x317 = INT16_MIN;
int16_t x318 = -40;
static uint16_t x322 = 156U;
static volatile int16_t x328 = -1;
int32_t x330 = -22671722;
uint64_t t61 = 556456553147953LLU;
static int16_t x337 = INT16_MIN;
static volatile int16_t x340 = INT16_MIN;
int64_t x349 = -1LL;
uint64_t x350 = 14305096LLU;
uint16_t x359 = 15205U;
int16_t x362 = 937;
int8_t x364 = -23;
int64_t t66 = 11482LL;
volatile int64_t x374 = INT64_MIN;
uint64_t x379 = 2LLU;
volatile int32_t t71 = -22091;
static volatile int16_t x389 = INT16_MIN;
static uint64_t x405 = 1664409LLU;
volatile uint64_t t74 = 255LLU;
static uint8_t x416 = UINT8_MAX;
uint64_t x420 = 7095522560LLU;
int16_t x421 = INT16_MIN;
static uint32_t x422 = 12761U;
int8_t x423 = -3;
int64_t x429 = -1LL;
int8_t x431 = 32;
int8_t x432 = -1;
int16_t x439 = -12;
uint32_t x441 = UINT32_MAX;
static int8_t x443 = -1;
static int64_t x444 = -1LL;
int64_t t81 = 3304154313745696LL;
int8_t x446 = INT8_MIN;
int16_t x452 = INT16_MIN;
uint64_t x471 = 1693434407040LLU;
static volatile int64_t x476 = INT64_MAX;
uint64_t x483 = 234849486122905LLU;
static int8_t x491 = -1;
uint8_t x497 = 87U;
uint8_t x499 = UINT8_MAX;
uint32_t t93 = 7U;
uint32_t x501 = 248U;
uint16_t x503 = UINT16_MAX;
volatile uint32_t x505 = 7474638U;
int64_t x508 = INT64_MIN;
static uint8_t x509 = 1U;
volatile int16_t x511 = -43;
volatile uint16_t x514 = 1836U;


void f0(void) {
	uint16_t x3 = 166U;
	volatile uint64_t t0 = 1215LLU;

	t0 = (((x1^x2)*x3)/x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x6 = 72U;
	volatile int16_t x7 = -1;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 234LL;

	t1 = (((x5^x6)*x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -2;
	int8_t x10 = -5;
	volatile int8_t x11 = 1;
	static int32_t x12 = -4415360;
	int32_t t2 = 467960122;

	t2 = (((x9^x10)*x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = 39374;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = 41U;

	t3 = (((x13^x14)*x15)/x16);

	if (t3 != 73310168U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = 1;
	volatile uint64_t t4 = 4LLU;

	t4 = (((x17^x18)*x19)/x20);

	if (t4 != 2147483648LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x23 = INT16_MIN;
	static int8_t x24 = INT8_MIN;
	static int64_t t5 = 6346846LL;

	t5 = (((x21^x22)*x23)/x24);

	if (t5 != 543241038080LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	int64_t x27 = -447769686847LL;

	t6 = (((x25^x26)*x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -5332583867LL;
	uint64_t x31 = 6509387939715281LLU;
	volatile uint16_t x32 = 3U;
	uint64_t t7 = 766350077616355LLU;

	t7 = (((x29^x30)*x31)/x32);

	if (t7 != 2789626917889344704LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	uint64_t x34 = 14194782279783069LLU;
	static uint32_t x35 = UINT32_MAX;
	static volatile uint64_t t8 = 9583938266LLU;

	t8 = (((x33^x34)*x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = 402;
	volatile uint64_t x39 = 179LLU;
	int8_t x40 = INT8_MIN;

	t9 = (((x37^x38)*x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int32_t x42 = 997;
	uint8_t x43 = 0U;
	int8_t x44 = INT8_MIN;

	t10 = (((x41^x42)*x43)/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -20;
	volatile int8_t x46 = 35;
	uint8_t x47 = UINT8_MAX;

	t11 = (((x45^x46)*x47)/x48);

	if (t11 != 12495) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	volatile uint32_t x55 = 46U;
	uint32_t t12 = 4201U;

	t12 = (((x53^x54)*x55)/x56);

	if (t12 != 5910U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 56U;
	uint32_t x59 = 7067568U;
	uint8_t x60 = UINT8_MAX;
	volatile uint32_t t13 = 387684213U;

	t13 = (((x57^x58)*x59)/x60);

	if (t13 != 13433946U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	static volatile int64_t t14 = -84974954595753727LL;

	t14 = (((x65^x66)*x67)/x68);

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	uint16_t x70 = 10467U;
	int32_t x71 = -5;
	uint8_t x72 = 57U;
	int32_t t15 = 147570;

	t15 = (((x69^x70)*x71)/x72);

	if (t15 != 918) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	static uint32_t x78 = 5098U;
	static int32_t x79 = -1;
	uint64_t x80 = 2678780169279981LLU;
	static uint64_t t16 = 456426885105002LLU;

	t16 = (((x77^x78)*x79)/x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 1512U;
	int32_t x86 = -1;
	int32_t x88 = INT32_MIN;
	uint32_t t17 = 419U;

	t17 = (((x85^x86)*x87)/x88);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	static int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile int8_t x92 = -1;
	static int32_t t18 = 0;

	t18 = (((x89^x90)*x91)/x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	int32_t x96 = -2;
	volatile int32_t t19 = -3;

	t19 = (((x93^x94)*x95)/x96);

	if (t19 != 3004) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = -1;
	int8_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t20 = 374291181224LLU;

	t20 = (((x97^x98)*x99)/x100);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 2704401U;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 28014020LLU;
	volatile uint64_t t21 = 925LLU;

	t21 = (((x101^x102)*x103)/x104);

	if (t21 != 30060883988117505LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = -127LL;
	volatile int32_t x107 = -1;
	int8_t x108 = -4;
	int64_t t22 = -76689817291LL;

	t22 = (((x105^x106)*x107)/x108);

	if (t22 != -536870880LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x121 = UINT8_MAX;
	volatile uint8_t x122 = 8U;
	uint32_t x123 = 178U;
	volatile int32_t x124 = 6;
	static uint32_t t23 = 76U;

	t23 = (((x121^x122)*x123)/x124);

	if (t23 != 7327U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x126 = -1;
	static int16_t x127 = INT16_MIN;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t24 = 909059571LLU;

	t24 = (((x125^x126)*x127)/x128);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x133 = UINT64_MAX;
	int16_t x134 = 163;
	int32_t x136 = INT32_MIN;

	t25 = (((x133^x134)*x135)/x136);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = -30;
	static uint64_t x151 = 34248377945LLU;
	static uint64_t x152 = 108LLU;
	uint64_t t26 = 94589880LLU;

	t26 = (((x149^x150)*x151)/x152);

	if (t26 != 170803154473334583LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = -1LL;
	int64_t t27 = -465259985LL;

	t27 = (((x153^x154)*x155)/x156);

	if (t27 != 3403004564029308928LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x165 = INT32_MIN;
	volatile uint32_t x166 = 470U;
	int64_t x167 = -323215LL;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t28 = 1LL;

	t28 = (((x165^x166)*x167)/x168);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x169 = 6U;
	int8_t x170 = -1;
	int8_t x171 = INT8_MIN;
	int8_t x172 = 37;
	volatile int32_t t29 = -5;

	t29 = (((x169^x170)*x171)/x172);

	if (t29 != 24) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x176 = INT16_MAX;
	int32_t t30 = -116173560;

	t30 = (((x173^x174)*x175)/x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x181 = 92718201256773864LLU;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	static uint64_t t31 = 5LLU;

	t31 = (((x181^x182)*x183)/x184);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x186 = 710U;
	volatile uint32_t x187 = 3737902U;
	static volatile int16_t x188 = INT16_MAX;
	static volatile uint32_t t32 = 28U;

	t32 = (((x185^x186)*x187)/x188);

	if (t32 != 81107U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x191 = -1;
	int16_t x192 = -1;
	volatile int64_t t33 = 7996504414962736LL;

	t33 = (((x189^x190)*x191)/x192);

	if (t33 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = -42;
	int16_t x194 = -1;
	int8_t x195 = INT8_MIN;
	volatile int8_t x196 = INT8_MIN;
	int32_t t34 = -3610775;

	t34 = (((x193^x194)*x195)/x196);

	if (t34 != 41) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x197 = -444404LL;
	volatile uint64_t t35 = 1LLU;

	t35 = (((x197^x198)*x199)/x200);

	if (t35 != 4294967296LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x209 = 123095718U;
	int16_t x210 = -1;

	t36 = (((x209^x210)*x211)/x212);

	if (t36 != 17988U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x213 = 514U;
	uint64_t x214 = 27174306791847LLU;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	volatile uint64_t t37 = 6844587227123639825LLU;

	t37 = (((x213^x214)*x215)/x216);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x218 = INT32_MIN;
	int64_t x220 = -1LL;
	volatile int64_t t38 = -1657799165923LL;

	t38 = (((x217^x218)*x219)/x220);

	if (t38 != 122975239481520LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x222 = 50U;
	volatile uint16_t x223 = 4094U;
	int16_t x224 = INT16_MAX;
	volatile int32_t t39 = -58;

	t39 = (((x221^x222)*x223)/x224);

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x225 = -1;
	uint64_t x226 = 1345311592014647496LLU;
	int16_t x227 = -1;
	static uint64_t t40 = 225390207155124733LLU;

	t40 = (((x225^x226)*x227)/x228);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x239 = 24605535LLU;
	static uint64_t t41 = 163169187847LLU;

	t41 = (((x237^x238)*x239)/x240);

	if (t41 != 414501245167059632LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x241 = UINT8_MAX;
	int64_t x243 = 122330179LL;
	int16_t x244 = INT16_MIN;
	static int64_t t42 = 12798LL;

	t42 = (((x241^x242)*x243)/x244);

	if (t42 != -8017029655239LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MAX;
	int32_t x247 = -1094;
	int64_t x248 = -1LL;
	int64_t t43 = 5317656LL;

	t43 = (((x245^x246)*x247)/x248);

	if (t43 != -1094LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x250 = 95112208;
	static uint64_t x251 = UINT64_MAX;
	uint64_t t44 = 115722736637000LLU;

	t44 = (((x249^x250)*x251)/x252);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MAX;
	static uint32_t x259 = 6385U;
	uint64_t x260 = 3156642150390611LLU;

	t45 = (((x257^x258)*x259)/x260);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x265 = 124U;
	static int16_t x266 = INT16_MIN;
	static int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t46 = -2288574448543894075LL;

	t46 = (((x265^x266)*x267)/x268);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = UINT64_MAX;
	uint16_t x272 = UINT16_MAX;
	uint64_t t47 = 0LLU;

	t47 = (((x269^x270)*x271)/x272);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 895661U;
	int64_t x276 = INT64_MIN;
	volatile int64_t t48 = 71751325288233524LL;

	t48 = (((x273^x274)*x275)/x276);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x281 = -2LL;
	uint64_t x283 = 390089595241LLU;
	volatile int16_t x284 = 16;
	volatile uint64_t t49 = 921061LLU;

	t49 = (((x281^x282)*x283)/x284);

	if (t49 != 1152907290717220382LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	static uint16_t x286 = 0U;
	int32_t x288 = 3720;

	t50 = (((x285^x286)*x287)/x288);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x291 = -1;
	volatile uint64_t t51 = 1934425785483LLU;

	t51 = (((x289^x290)*x291)/x292);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x293 = 878906LL;
	uint16_t x294 = UINT16_MAX;
	static uint8_t x295 = UINT8_MAX;
	int16_t x296 = INT16_MIN;
	int64_t t52 = 1180928580LL;

	t52 = (((x293^x294)*x295)/x296);

	if (t52 != -6930LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x297 = 646;
	int64_t x298 = 160LL;
	volatile int16_t x299 = INT16_MAX;
	uint8_t x300 = 2U;
	int64_t t53 = 86LL;

	t53 = (((x297^x298)*x299)/x300);

	if (t53 != 9010925LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x301 = 58LLU;
	static volatile uint16_t x302 = 10U;
	uint8_t x304 = UINT8_MAX;
	uint64_t t54 = 909707347822LLU;

	t54 = (((x301^x302)*x303)/x304);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x305 = UINT8_MAX;
	uint16_t x307 = 34U;
	uint64_t x308 = 999410854597LLU;
	volatile uint64_t t55 = 2736422243090234056LLU;

	t55 = (((x305^x306)*x307)/x308);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = 13159846;
	int16_t x311 = INT16_MIN;
	static int8_t x312 = 1;
	int64_t t56 = -450082107789LL;

	t56 = (((x309^x310)*x311)/x312);

	if (t56 != 3023202497855488LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x314 = INT8_MAX;
	int16_t x315 = -1;

	t57 = (((x313^x314)*x315)/x316);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x319 = 7U;
	uint8_t x320 = 1U;
	static int32_t t58 = -2;

	t58 = (((x317^x318)*x319)/x320);

	if (t58 != 229096) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = INT8_MAX;
	int64_t x323 = -1LL;
	int32_t x324 = INT32_MAX;
	int64_t t59 = 915019541LL;

	t59 = (((x321^x322)*x323)/x324);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x325 = 0;
	uint32_t x326 = 28U;
	int32_t x327 = INT32_MIN;
	uint32_t t60 = 1626U;

	t60 = (((x325^x326)*x327)/x328);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x329 = INT32_MAX;
	uint64_t x331 = 383540LLU;
	uint32_t x332 = UINT32_MAX;

	t61 = (((x329^x330)*x331)/x332);

	if (t61 != 4294777551LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x338 = -3989;
	static int8_t x339 = INT8_MIN;
	int32_t t62 = 58;

	t62 = (((x337^x338)*x339)/x340);

	if (t62 != 112) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x351 = INT32_MIN;
	volatile int16_t x352 = INT16_MAX;
	uint64_t t63 = 225LLU;

	t63 = (((x349^x350)*x351)/x352);

	if (t63 != 937527448059LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x353 = 4U;
	volatile int32_t x354 = -1;
	int8_t x355 = -1;
	int32_t x356 = -1;
	volatile int32_t t64 = -120;

	t64 = (((x353^x354)*x355)/x356);

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x357 = 1;
	int8_t x358 = 22;
	int64_t x360 = -1LL;
	static int64_t t65 = -14336835907376LL;

	t65 = (((x357^x358)*x359)/x360);

	if (t65 != -349715LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = 897809950747178138LL;
	int8_t x363 = -1;

	t66 = (((x361^x362)*x363)/x364);

	if (t66 != 39035215249877339LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x365 = -1;
	uint64_t x366 = 238960LLU;
	int32_t x367 = INT32_MIN;
	uint64_t x368 = 2LLU;
	volatile uint64_t t67 = 36LLU;

	t67 = (((x365^x366)*x367)/x368);

	if (t67 != 256582420004864LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x373 = INT32_MIN;
	int32_t x375 = -1;
	uint32_t x376 = 488U;
	volatile int64_t t68 = 43914512026LL;

	t68 = (((x373^x374)*x375)/x376);

	if (t68 != -18900352530137893LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = -1;
	uint8_t x378 = 41U;
	int8_t x380 = 6;
	uint64_t t69 = 13649252201LLU;

	t69 = (((x377^x378)*x379)/x380);

	if (t69 != 3074457345618258588LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x381 = 2396545948241501545LLU;
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = -1;
	int64_t x384 = -1LL;
	volatile uint64_t t70 = 68063350591LLU;

	t70 = (((x381^x382)*x383)/x384);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x385 = INT16_MAX;
	volatile uint16_t x386 = 1936U;
	int16_t x387 = INT16_MAX;
	uint8_t x388 = UINT8_MAX;

	t71 = (((x385^x386)*x387)/x388);

	if (t71 != 3961723) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x390 = -1;
	volatile int8_t x391 = -1;
	static int16_t x392 = 1467;
	int32_t t72 = -7173;

	t72 = (((x389^x390)*x391)/x392);

	if (t72 != -22) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x397 = 480398;
	static int64_t x398 = -1LL;
	int32_t x399 = -1;
	uint8_t x400 = UINT8_MAX;
	volatile int64_t t73 = 572LL;

	t73 = (((x397^x398)*x399)/x400);

	if (t73 != 1883LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x406 = INT16_MIN;
	static volatile uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MIN;

	t74 = (((x405^x406)*x407)/x408);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = 139134366LL;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	uint64_t t75 = 44791356522849761LLU;

	t75 = (((x413^x414)*x415)/x416);

	if (t75 != 1171720698067963LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = 22;
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t t76 = 397289898798LLU;

	t76 = (((x417^x418)*x419)/x420);

	if (t76 != 1299886225LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x424 = 21;
	volatile uint32_t t77 = 168902U;

	t77 = (((x421^x422)*x423)/x424);

	if (t77 != 2858U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = -117;
	uint8_t x427 = 6U;
	uint8_t x428 = UINT8_MAX;
	int32_t t78 = 1011;

	t78 = (((x425^x426)*x427)/x428);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x430 = UINT8_MAX;
	int64_t t79 = 328492107973560LL;

	t79 = (((x429^x430)*x431)/x432);

	if (t79 != 8192LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = -2899;
	uint8_t x438 = 94U;
	volatile uint8_t x440 = UINT8_MAX;
	int32_t t80 = 1845040;

	t80 = (((x437^x438)*x439)/x440);

	if (t80 != 133) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x442 = 18417U;

	t81 = (((x441^x442)*x443)/x444);

	if (t81 != -18418LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x445 = 117U;
	volatile int16_t x447 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;
	int32_t t82 = 27159;

	t82 = (((x445^x446)*x447)/x448);

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x449 = INT64_MIN;
	volatile int64_t x450 = INT64_MAX;
	volatile int32_t x451 = INT32_MIN;
	static volatile int64_t t83 = -566779083023499LL;

	t83 = (((x449^x450)*x451)/x452);

	if (t83 != -65536LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x453 = INT64_MIN;
	int16_t x454 = -19;
	static uint64_t x455 = 35732863499709043LLU;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t84 = 559215421803792LLU;

	t84 = (((x453^x454)*x455)/x456);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x457 = -1;
	int32_t x458 = INT32_MIN;
	uint32_t x459 = 360U;
	static int8_t x460 = -1;
	volatile uint32_t t85 = 128U;

	t85 = (((x457^x458)*x459)/x460);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x461 = 163145437U;
	static int8_t x462 = INT8_MIN;
	int64_t x463 = 654079LL;
	volatile int32_t x464 = -39953956;
	volatile int64_t t86 = -1LL;

	t86 = (((x461^x462)*x463)/x464);

	if (t86 != -67641310LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x465 = 4U;
	uint32_t x466 = UINT32_MAX;
	static int32_t x467 = INT32_MIN;
	int64_t x468 = -1LL;
	int64_t t87 = 962960211940LL;

	t87 = (((x465^x466)*x467)/x468);

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x469 = -16324;
	int64_t x470 = -509092576LL;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t88 = 103517029314102720LLU;

	t88 = (((x469^x470)*x471)/x472);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x473 = UINT32_MAX;
	uint16_t x474 = 16360U;
	int8_t x475 = 1;
	int64_t t89 = -57721464900LL;

	t89 = (((x473^x474)*x475)/x476);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x477 = INT64_MIN;
	int64_t x478 = INT64_MAX;
	int16_t x479 = -1;
	int32_t x480 = 2537609;
	volatile int64_t t90 = 3378614LL;

	t90 = (((x477^x478)*x479)/x480);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x481 = -1;
	uint16_t x482 = UINT16_MAX;
	uint64_t x484 = 6LLU;
	uint64_t t91 = 11821764617654LLU;

	t91 = (((x481^x482)*x483)/x484);

	if (t91 != 509274691859808256LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x489 = 5;
	volatile int16_t x490 = 4;
	int64_t x492 = INT64_MIN;
	static int64_t t92 = -381635466291LL;

	t92 = (((x489^x490)*x491)/x492);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x498 = 31756729U;
	int8_t x500 = -1;

	t93 = (((x497^x498)*x499)/x500);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x502 = -10;
	uint32_t x504 = UINT32_MAX;
	uint32_t t94 = 172U;

	t94 = (((x501^x502)*x503)/x504);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x506 = 19348612LLU;
	static int64_t x507 = INT64_MAX;
	volatile uint64_t t95 = 4884LLU;

	t95 = (((x505^x506)*x507)/x508);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x510 = INT8_MIN;
	static uint16_t x512 = 4287U;
	int32_t t96 = 0;

	t96 = (((x509^x510)*x511)/x512);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x513 = UINT16_MAX;
	int8_t x515 = INT8_MAX;
	int16_t x516 = -27;
	int32_t t97 = -49210;

	t97 = (((x513^x514)*x515)/x516);

	if (t97 != -299621) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x517 = 7952LLU;
	static int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = 31U;
	uint64_t t98 = 4199567481883533LLU;

	t98 = (((x517^x518)*x519)/x520);

	if (t98 != 8506995LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x525 = UINT64_MAX;
	int32_t x526 = INT32_MIN;
	int8_t x527 = -1;
	static int32_t x528 = INT32_MIN;
	volatile uint64_t t99 = 74534337817LLU;

	t99 = (((x525^x526)*x527)/x528);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

