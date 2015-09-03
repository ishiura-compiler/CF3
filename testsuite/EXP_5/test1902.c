#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 33U;
int16_t x7 = -1;
uint64_t x8 = 4016359LLU;
int8_t x13 = 61;
static int32_t x45 = INT32_MAX;
volatile int64_t t6 = 6533914LL;
volatile int16_t x54 = INT16_MIN;
uint16_t x57 = 90U;
static int8_t x59 = INT8_MAX;
int64_t x65 = 98LL;
int32_t x67 = INT32_MIN;
int64_t x70 = INT64_MAX;
uint16_t x73 = 3U;
static uint32_t x76 = 6U;
int8_t x77 = INT8_MIN;
uint16_t x80 = UINT16_MAX;
volatile int64_t x98 = 2618625467218821LL;
uint32_t x99 = 349549U;
volatile int64_t t13 = 284418LL;
int16_t x105 = INT16_MAX;
static uint16_t x125 = 4782U;
uint32_t x128 = 1U;
int8_t x130 = INT8_MIN;
volatile int32_t t17 = 358798190;
int64_t x141 = INT64_MIN;
int16_t x142 = 858;
static uint64_t t21 = 27LLU;
int32_t x161 = INT32_MAX;
static int16_t x163 = -4548;
int32_t t22 = INT32_MAX;
volatile uint8_t x166 = UINT8_MAX;
static int32_t x199 = 1012;
static volatile uint64_t t27 = 6323409285006070738LLU;
volatile uint8_t x223 = 76U;
uint16_t x224 = 22182U;
int64_t x225 = -236088327932LL;
volatile int64_t x227 = 1634341259862462579LL;
uint16_t x242 = 3165U;
int64_t x252 = -1LL;
int64_t t36 = -252338LL;
static uint32_t x256 = 6827863U;
static volatile uint64_t t38 = 6212553161324465LLU;
static int16_t x263 = INT16_MAX;
uint16_t x265 = 978U;
uint64_t x268 = 7642078444470902488LLU;
int8_t x269 = 12;
static int32_t x270 = -16759000;
int8_t x276 = 1;
int64_t t42 = -15465993355LL;
uint8_t x279 = 0U;
int16_t x280 = -53;
uint8_t x281 = UINT8_MAX;
static int16_t x282 = INT16_MIN;
int16_t x290 = -12;
int16_t x315 = -1;
volatile uint16_t x324 = 24U;
uint64_t x325 = 272591040605LLU;
int64_t x327 = INT64_MIN;
int64_t x338 = -956813LL;
uint64_t x345 = 16018416810655LLU;
volatile uint64_t t54 = 79791592944360420LLU;
uint32_t x350 = 1818129163U;
volatile uint32_t t55 = 13211034U;
uint64_t t57 = 262231804LLU;
static int8_t x362 = -14;
uint16_t x363 = UINT16_MAX;
int64_t x367 = -1LL;
volatile uint64_t t59 = 5401597058568697012LLU;
volatile int8_t x371 = 0;
volatile uint32_t x383 = UINT32_MAX;
volatile int64_t x397 = INT64_MIN;
int32_t x416 = INT32_MIN;
uint32_t t64 = 1205951017U;
static volatile uint32_t x426 = 126U;
int64_t x431 = INT64_MIN;
static int64_t t70 = -12569352LL;
uint8_t x443 = UINT8_MAX;
int8_t x449 = INT8_MAX;
static uint64_t t73 = UINT64_MAX;
int64_t x459 = 125495993956211614LL;
volatile int8_t x472 = INT8_MAX;
static uint32_t t76 = 0U;
uint16_t x483 = UINT16_MAX;
uint64_t t79 = 136068860025LLU;
volatile uint64_t x490 = 1LLU;
int64_t x503 = -29676462250709196LL;
int8_t x507 = INT8_MAX;
int32_t t84 = -1;
uint8_t x515 = 79U;
volatile int8_t x516 = 3;
uint8_t x537 = 25U;
volatile int32_t x542 = INT32_MIN;
volatile int64_t t89 = -923596607LL;
int16_t x547 = -1;
volatile uint64_t t91 = 3821260LLU;
volatile int8_t x561 = 2;
volatile int32_t t94 = 112769009;
static uint32_t x587 = 7U;
volatile uint64_t t98 = 24LLU;
int16_t x628 = -583;


void f0(void) {
	static uint32_t x5 = 132387754U;
	volatile uint64_t t0 = 82414134563219LLU;

	t0 = (x5/((x6|x7)/x8));

	if (t0 != 123842LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x14 = INT32_MAX;
	volatile int16_t x15 = INT16_MIN;
	uint32_t x16 = 3U;
	volatile uint32_t t1 = 272886U;

	t1 = (x13/((x14|x15)/x16));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	int32_t x18 = -2;
	uint8_t x19 = UINT8_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t2 = 3340225969LLU;

	t2 = (x17/((x18|x19)/x20));

	if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	uint32_t x22 = 20367661U;
	volatile uint64_t x23 = UINT64_MAX;
	static int8_t x24 = INT8_MIN;
	static uint64_t t3 = 1020681LLU;

	t3 = (x21/((x22|x23)/x24));

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	static int64_t x26 = 0LL;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = -1969;
	int64_t t4 = -3LL;

	t4 = (x25/((x26|x27)/x28));

	if (t4 != -7LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 120LLU;
	int32_t x30 = INT32_MAX;
	uint16_t x31 = 16U;
	int32_t x32 = -55725893;
	uint64_t t5 = 189312554320LLU;

	t5 = (x29/((x30|x31)/x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x46 = INT64_MAX;
	uint8_t x47 = 21U;
	uint32_t x48 = 35U;

	t6 = (x45/((x46|x47)/x48));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x53 = 2445802674868222LLU;
	static int16_t x55 = INT16_MIN;
	uint8_t x56 = 4U;
	volatile uint64_t t7 = 872301LLU;

	t7 = (x53/((x54|x55)/x56));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x58 = 59;
	uint32_t x60 = 5U;
	uint32_t t8 = 115015782U;

	t8 = (x57/((x58|x59)/x60));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x66 = INT64_MIN;
	int16_t x68 = INT16_MIN;
	volatile int64_t t9 = 4961262206LL;

	t9 = (x65/((x66|x67)/x68));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x69 = 0U;
	uint64_t x71 = 3LLU;
	volatile uint32_t x72 = 6U;
	volatile uint64_t t10 = 431159894453980324LLU;

	t10 = (x69/((x70|x71)/x72));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x74 = 50350;
	uint32_t x75 = UINT32_MAX;
	volatile uint32_t t11 = 29965722U;

	t11 = (x73/((x74|x75)/x76));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x78 = 22LLU;
	static int32_t x79 = -1;
	uint64_t t12 = 3213027LLU;

	t12 = (x77/((x78|x79)/x80));

	if (t12 != 65534LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x97 = 13U;
	int16_t x100 = 14324;

	t13 = (x97/((x98|x99)/x100));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 1U;
	volatile uint32_t t14 = 9U;

	t14 = (x105/((x106|x107)/x108));

	if (t14 != 128U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x109 = 7U;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MIN;
	volatile int32_t x112 = INT32_MIN;
	uint64_t t15 = 7610829946849990902LLU;

	t15 = (x109/((x110|x111)/x112));

	if (t15 != 7LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	volatile int64_t t16 = -5607446045398LL;

	t16 = (x125/((x126|x127)/x128));

	if (t16 != -4782LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x129 = INT16_MIN;
	int8_t x131 = 6;
	int32_t x132 = -1;

	t17 = (x129/((x130|x131)/x132));

	if (t17 != -268) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	uint32_t x135 = UINT32_MAX;
	volatile uint8_t x136 = UINT8_MAX;
	int64_t t18 = -934706885305LL;

	t18 = (x133/((x134|x135)/x136));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x143 = INT64_MIN;
	int32_t x144 = 19339;
	int64_t t19 = 23707213968974822LL;

	t19 = (x141/((x142|x143)/x144));

	if (t19 != 19339LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x153 = 141U;
	volatile int32_t x154 = -3;
	int8_t x155 = 27;
	volatile uint32_t x156 = UINT32_MAX;
	static uint32_t t20 = 8U;

	t20 = (x153/((x154|x155)/x156));

	if (t20 != 141U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x157 = INT32_MAX;
	uint64_t x158 = 90337466277013LLU;
	int64_t x159 = -1LL;
	int8_t x160 = -23;

	t21 = (x157/((x158|x159)/x160));

	if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x162 = UINT16_MAX;
	int32_t x164 = -1;

	t22 = (x161/((x162|x163)/x164));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x165 = 94090881U;
	int64_t x167 = INT64_MAX;
	int64_t x168 = -1LL;
	int64_t t23 = 1LL;

	t23 = (x165/((x166|x167)/x168));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x173 = INT8_MAX;
	uint8_t x174 = UINT8_MAX;
	uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MAX;
	int32_t t24 = 12;

	t24 = (x173/((x174|x175)/x176));

	if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x181 = 351335830254LLU;
	uint32_t x182 = 0U;
	int16_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	static uint64_t t25 = 57276164243LLU;

	t25 = (x181/((x182|x183)/x184));

	if (t25 != 5360877LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	uint64_t x200 = 199658032842536493LLU;
	uint64_t t26 = 6LLU;

	t26 = (x197/((x198|x199)/x200));

	if (t26 != 200508087757712517LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x201 = INT32_MAX;
	int32_t x202 = -1;
	volatile uint16_t x203 = 28U;
	static uint64_t x204 = 6263325693024604LLU;

	t27 = (x201/((x202|x203)/x204));

	if (t27 != 729196LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = -5;
	static int8_t x207 = 10;
	static int16_t x208 = -1;
	volatile int32_t t28 = 22079203;

	t28 = (x205/((x206|x207)/x208));

	if (t28 != -25) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x217 = 17037756984670LLU;
	volatile int64_t x218 = -1LL;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 1197U;
	volatile uint64_t t29 = 41LLU;

	t29 = (x217/((x218|x219)/x220));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x221 = 20884U;
	uint32_t x222 = UINT32_MAX;
	uint32_t t30 = 40133U;

	t30 = (x221/((x222|x223)/x224));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x226 = -129604842;
	int16_t x228 = -1;
	volatile int64_t t31 = -8238071501028LL;

	t31 = (x225/((x226|x227)/x228));

	if (t31 != -3411LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x229 = -27;
	int64_t x230 = -1650062607429LL;
	int8_t x231 = INT8_MIN;
	int64_t x232 = -1LL;
	volatile int64_t t32 = -429870573025477LL;

	t32 = (x229/((x230|x231)/x232));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x237 = -1;
	uint32_t x238 = 0U;
	uint64_t x239 = 112955LLU;
	volatile int8_t x240 = 1;
	uint64_t t33 = 140LLU;

	t33 = (x237/((x238|x239)/x240));

	if (t33 != 163310557954137LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x241 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	static int8_t x244 = -1;
	static int32_t t34 = 3706228;

	t34 = (x241/((x242|x243)/x244));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x245 = 0;
	int8_t x246 = INT8_MAX;
	int64_t x247 = 504053772849LL;
	uint64_t x248 = 6558260402LLU;
	volatile uint64_t t35 = 2704066LLU;

	t35 = (x245/((x246|x247)/x248));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x249 = -1LL;
	static uint32_t x250 = 52569U;
	int64_t x251 = INT64_MAX;

	t36 = (x249/((x250|x251)/x252));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x253 = -1;
	int32_t x254 = -706;
	uint64_t x255 = UINT64_MAX;
	volatile uint64_t t37 = 4466295566687269LLU;

	t37 = (x253/((x254|x255)/x256));

	if (t37 != 6827863LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x257 = INT64_MIN;
	static int64_t x258 = -1LL;
	static int8_t x259 = INT8_MIN;
	volatile uint64_t x260 = 26790082267042LLU;

	t38 = (x257/((x258|x259)/x260));

	if (t38 != 13395044246818LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x261 = 67232528LL;
	uint8_t x262 = 9U;
	static volatile int64_t x264 = -1LL;
	volatile int64_t t39 = 31423147585LL;

	t39 = (x261/((x262|x263)/x264));

	if (t39 != -2051LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x266 = -19;
	int64_t x267 = 32LL;
	uint64_t t40 = 28602167488LLU;

	t40 = (x265/((x266|x267)/x268));

	if (t40 != 489LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x271 = 1U;
	volatile uint32_t x272 = 3U;
	uint32_t t41 = 92804069U;

	t41 = (x269/((x270|x271)/x272));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x273 = INT64_MAX;
	volatile int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MIN;

	t42 = (x273/((x274|x275)/x276));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x277 = 457994467692818854LLU;
	int32_t x278 = INT32_MIN;
	static volatile uint64_t t43 = 2313335LLU;

	t43 = (x277/((x278|x279)/x280));

	if (t43 != 11303325661LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x283 = 111U;
	uint16_t x284 = 46U;
	volatile int32_t t44 = 427788207;

	t44 = (x281/((x282|x283)/x284));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 7103U;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;
	static volatile uint64_t t45 = 14726525519333LLU;

	t45 = (x285/((x286|x287)/x288));

	if (t45 != 255LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x289 = INT16_MIN;
	uint64_t x291 = 58235271272LLU;
	static int64_t x292 = INT64_MIN;
	uint64_t t46 = 8116873450124132LLU;

	t46 = (x289/((x290|x291)/x292));

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x301 = -1;
	int32_t x302 = -3;
	volatile int16_t x303 = -505;
	int16_t x304 = -1;
	volatile int32_t t47 = -26;

	t47 = (x301/((x302|x303)/x304));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x313 = -1;
	uint8_t x314 = 45U;
	int64_t x316 = -1LL;
	static volatile int64_t t48 = 1429291270LL;

	t48 = (x313/((x314|x315)/x316));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x321 = -1LL;
	int8_t x322 = -1;
	uint32_t x323 = 3054U;
	volatile int64_t t49 = -644300280832LL;

	t49 = (x321/((x322|x323)/x324));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x326 = -1LL;
	static volatile int16_t x328 = -1;
	volatile uint64_t t50 = 28711087869209168LLU;

	t50 = (x325/((x326|x327)/x328));

	if (t50 != 272591040605LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x329 = -395712588031504102LL;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = -26;
	volatile int64_t t51 = -1747750994LL;

	t51 = (x329/((x330|x331)/x332));

	if (t51 != -395712588031504102LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x337 = 16928118296946303LLU;
	uint8_t x339 = 1U;
	int16_t x340 = INT16_MAX;
	volatile uint64_t t52 = 177823435656739663LLU;

	t52 = (x337/((x338|x339)/x340));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x341 = -1;
	int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	uint64_t t53 = UINT64_MAX;

	t53 = (x341/((x342|x343)/x344));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = -1;
	int64_t x348 = INT64_MAX;

	t54 = (x345/((x346|x347)/x348));

	if (t54 != 8009208405327LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x349 = UINT8_MAX;
	static int8_t x351 = INT8_MAX;
	static uint16_t x352 = 8683U;

	t55 = (x349/((x350|x351)/x352));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x353 = -909801090372892416LL;
	uint64_t x354 = 32809583577033989LLU;
	uint16_t x355 = 4316U;
	uint32_t x356 = 906988U;
	static uint64_t t56 = 1801020LLU;

	t56 = (x353/((x354|x355)/x356));

	if (t56 != 484791183LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x357 = INT32_MAX;
	uint8_t x358 = UINT8_MAX;
	static int64_t x359 = INT64_MAX;
	uint64_t x360 = 57874089361580LLU;

	t57 = (x357/((x358|x359)/x360));

	if (t57 != 13474LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x361 = INT16_MAX;
	volatile int16_t x364 = -1;
	int32_t t58 = -4;

	t58 = (x361/((x362|x363)/x364));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x365 = 22374;
	int64_t x366 = -1LL;
	volatile uint64_t x368 = 34842607520460LLU;

	t59 = (x365/((x366|x367)/x368));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MIN;
	int64_t x372 = -1LL;
	volatile uint64_t t60 = 21932163076LLU;

	t60 = (x369/((x370|x371)/x372));

	if (t60 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x381 = 34965;
	volatile int64_t x382 = -55267012696470829LL;
	int8_t x384 = -2;
	volatile int64_t t61 = -67337401895571079LL;

	t61 = (x381/((x382|x383)/x384));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x393 = -7;
	int16_t x394 = INT16_MIN;
	static int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;
	int32_t t62 = 24;

	t62 = (x393/((x394|x395)/x396));

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x398 = INT8_MAX;
	uint64_t x399 = 2226494065468110551LLU;
	static int8_t x400 = INT8_MAX;
	volatile uint64_t t63 = 10466LLU;

	t63 = (x397/((x398|x399)/x400));

	if (t63 != 526LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x413 = 14966U;
	volatile uint32_t x414 = 1787259U;
	int32_t x415 = INT32_MIN;

	t64 = (x413/((x414|x415)/x416));

	if (t64 != 14966U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x417 = 788;
	volatile int64_t x418 = INT64_MIN;
	static uint32_t x419 = 9514539U;
	uint64_t x420 = 11378945LLU;
	uint64_t t65 = 58634LLU;

	t65 = (x417/((x418|x419)/x420));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x421 = 28493987385699434LLU;
	volatile uint64_t x422 = 1337157791858326657LLU;
	int8_t x423 = INT8_MIN;
	uint16_t x424 = UINT16_MAX;
	uint64_t t66 = 779LLU;

	t66 = (x421/((x422|x423)/x424));

	if (t66 != 101LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x425 = 33501858054544LLU;
	volatile int64_t x427 = -6585LL;
	volatile int8_t x428 = INT8_MIN;
	static volatile uint64_t t67 = 70568LLU;

	t67 = (x425/((x426|x427)/x428));

	if (t67 != 656899177540LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MAX;
	uint8_t x432 = 102U;
	int64_t t68 = 8171804040441856LL;

	t68 = (x429/((x430|x431)/x432));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x433 = INT8_MIN;
	int8_t x434 = 7;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 1162183522198739LLU;
	uint64_t t69 = 997299739LLU;

	t69 = (x433/((x434|x435)/x436));

	if (t69 != 1162219258676257LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x437 = 1;
	static int64_t x438 = 163353926884932LL;
	int32_t x439 = INT32_MAX;
	uint16_t x440 = 78U;

	t70 = (x437/((x438|x439)/x440));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x441 = 19U;
	int16_t x442 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	static volatile int32_t t71 = 39;

	t71 = (x441/((x442|x443)/x444));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x450 = UINT32_MAX;
	uint64_t x451 = 28726LLU;
	static uint8_t x452 = 89U;
	volatile uint64_t t72 = 2LLU;

	t72 = (x449/((x450|x451)/x452));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x453 = -1;
	uint16_t x454 = UINT16_MAX;
	uint64_t x455 = UINT64_MAX;
	volatile int8_t x456 = -1;

	t73 = (x453/((x454|x455)/x456));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x457 = 15;
	uint32_t x458 = 1U;
	uint32_t x460 = 152056U;
	volatile int64_t t74 = 961870LL;

	t74 = (x457/((x458|x459)/x460));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x465 = INT8_MIN;
	int32_t x466 = 4291;
	int64_t x467 = INT64_MIN;
	static volatile int8_t x468 = INT8_MIN;
	volatile int64_t t75 = 250571513035444LL;

	t75 = (x465/((x466|x467)/x468));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x469 = UINT32_MAX;
	int16_t x470 = 978;
	int32_t x471 = INT32_MIN;

	t76 = (x469/((x470|x471)/x472));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x477 = UINT16_MAX;
	volatile uint64_t x478 = UINT64_MAX;
	int8_t x479 = INT8_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t77 = 130LLU;

	t77 = (x477/((x478|x479)/x480));

	if (t77 != 65535LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x481 = INT16_MIN;
	volatile int8_t x482 = INT8_MIN;
	int32_t x484 = -1;
	static int32_t t78 = 477839;

	t78 = (x481/((x482|x483)/x484));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x485 = UINT8_MAX;
	int32_t x486 = INT32_MIN;
	static int64_t x487 = 90LL;
	static volatile uint64_t x488 = 185274794951LLU;

	t79 = (x485/((x486|x487)/x488));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x489 = 24U;
	static int32_t x491 = INT32_MIN;
	uint32_t x492 = 56662U;
	uint64_t t80 = 136947998219LLU;

	t80 = (x489/((x490|x491)/x492));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	volatile uint32_t x495 = 247U;
	static uint16_t x496 = UINT16_MAX;
	uint32_t t81 = 26101U;

	t81 = (x493/((x494|x495)/x496));

	if (t81 != 65535U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x497 = INT32_MAX;
	uint64_t x498 = 54612750346537636LLU;
	static uint8_t x499 = UINT8_MAX;
	uint16_t x500 = 141U;
	volatile uint64_t t82 = 28771451LLU;

	t82 = (x497/((x498|x499)/x500));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x501 = INT64_MAX;
	uint64_t x502 = 5107184LLU;
	int8_t x504 = INT8_MAX;
	volatile uint64_t t83 = 15887LLU;

	t83 = (x501/((x502|x503)/x504));

	if (t83 != 63LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x505 = INT32_MAX;
	static int16_t x506 = INT16_MIN;
	int8_t x508 = -1;

	t84 = (x505/((x506|x507)/x508));

	if (t84 != 65790) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x509 = 40;
	volatile uint32_t x510 = UINT32_MAX;
	int64_t x511 = INT64_MIN;
	static uint32_t x512 = 487484605U;
	volatile int64_t t85 = -136131LL;

	t85 = (x509/((x510|x511)/x512));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x513 = -1328368032636094574LL;
	int64_t x514 = 5309656576071203LL;
	volatile int64_t t86 = 217044551LL;

	t86 = (x513/((x514|x515)/x516));

	if (t86 != -750LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x525 = INT64_MAX;
	int32_t x526 = INT32_MAX;
	uint32_t x527 = UINT32_MAX;
	int8_t x528 = -1;
	int64_t t87 = INT64_MAX;

	t87 = (x525/((x526|x527)/x528));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x538 = INT16_MIN;
	static int8_t x539 = -1;
	int64_t x540 = -1LL;
	int64_t t88 = -3242088308654820LL;

	t88 = (x537/((x538|x539)/x540));

	if (t88 != 25LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x541 = INT64_MAX;
	static volatile uint32_t x543 = 2464U;
	int8_t x544 = 5;

	t89 = (x541/((x542|x543)/x544));

	if (t89 != 21474811860LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x545 = 3652LL;
	int8_t x546 = -1;
	static uint64_t x548 = 13834LLU;
	uint64_t t90 = 12LLU;

	t90 = (x545/((x546|x547)/x548));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x549 = 11U;
	uint64_t x550 = UINT64_MAX;
	int32_t x551 = INT32_MAX;
	static int16_t x552 = INT16_MIN;

	t91 = (x549/((x550|x551)/x552));

	if (t91 != 11LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x557 = 1U;
	static int8_t x558 = -1;
	static int32_t x559 = -1;
	uint32_t x560 = UINT32_MAX;
	uint32_t t92 = 3384U;

	t92 = (x557/((x558|x559)/x560));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x562 = -1;
	uint64_t x563 = 391990156LLU;
	int16_t x564 = -1;
	uint64_t t93 = 0LLU;

	t93 = (x561/((x562|x563)/x564));

	if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x569 = INT16_MAX;
	int16_t x570 = INT16_MAX;
	int32_t x571 = INT32_MAX;
	int8_t x572 = INT8_MAX;

	t94 = (x569/((x570|x571)/x572));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x573 = -2;
	int16_t x574 = 4718;
	uint32_t x575 = UINT32_MAX;
	static volatile int64_t x576 = 922949LL;
	volatile int64_t t95 = -7959840448794LL;

	t95 = (x573/((x574|x575)/x576));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x585 = UINT16_MAX;
	int16_t x586 = 1930;
	uint8_t x588 = 11U;
	static uint32_t t96 = 4U;

	t96 = (x585/((x586|x587)/x588));

	if (t96 != 374U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x597 = INT64_MAX;
	int64_t x598 = 6385756LL;
	static volatile int32_t x599 = INT32_MIN;
	static volatile int8_t x600 = INT8_MAX;
	volatile int64_t t97 = 3970757754358LL;

	t97 = (x597/((x598|x599)/x600));

	if (t97 != -547087682989LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	static uint64_t x611 = 376165139534LLU;
	static uint32_t x612 = UINT32_MAX;

	t98 = (x609/((x610|x611)/x612));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x625 = INT8_MIN;
	uint64_t x626 = 4465746LLU;
	int8_t x627 = -8;
	volatile uint64_t t99 = 1870470099081LLU;

	t99 = (x625/((x626|x627)/x628));

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

