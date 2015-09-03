#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x16 = -324026;
volatile uint16_t x18 = 4U;
static int64_t x19 = -1LL;
volatile int64_t t2 = -11336LL;
volatile uint64_t t3 = 259403227864LLU;
int64_t x41 = 1369073985486300LL;
uint8_t x49 = UINT8_MAX;
int64_t x62 = INT64_MAX;
static uint64_t x68 = UINT64_MAX;
uint64_t x89 = 62279812523LLU;
static uint8_t x90 = 6U;
uint64_t t12 = 8188611302500LLU;
int32_t x95 = INT32_MIN;
static int64_t t13 = -1439LL;
int16_t x99 = INT16_MAX;
uint64_t t14 = 6003537968840926LLU;
uint16_t x136 = UINT16_MAX;
static volatile int32_t t15 = 0;
static uint64_t x142 = UINT64_MAX;
int16_t x143 = INT16_MIN;
int16_t x144 = -1;
int32_t t16 = 559;
volatile uint16_t x156 = UINT16_MAX;
volatile int32_t t17 = 0;
int32_t x159 = -1;
static volatile int16_t x160 = INT16_MIN;
uint16_t x165 = 1228U;
int16_t x167 = INT16_MAX;
int8_t x179 = -1;
static int32_t x181 = 401447;
int8_t x183 = 2;
uint16_t x185 = 280U;
volatile uint32_t x193 = 9U;
uint8_t x194 = 0U;
uint64_t x205 = 38191871944007571LLU;
uint64_t t26 = 232651492LLU;
int32_t x210 = -28665;
volatile int64_t x227 = -4LL;
uint16_t x228 = UINT16_MAX;
int8_t x234 = 28;
static int8_t x236 = 0;
volatile int64_t x254 = INT64_MIN;
uint32_t t34 = 67581743U;
static uint32_t x270 = 3710241U;
int32_t t35 = 216912;
volatile int32_t x278 = 8600123;
static volatile int32_t x285 = 1;
static int16_t x287 = INT16_MAX;
static int16_t x288 = -10970;
int64_t x294 = INT64_MIN;
int8_t x305 = INT8_MAX;
uint16_t x307 = UINT16_MAX;
volatile uint32_t x308 = UINT32_MAX;
uint32_t t40 = 1597830797U;
volatile uint16_t x316 = 1335U;
volatile int32_t t43 = -66244949;
static uint8_t x346 = 4U;
int32_t t44 = -522;
int32_t x351 = INT32_MAX;
int32_t t46 = 24342;
int16_t x364 = -1;
volatile int8_t x370 = 56;
uint64_t x372 = UINT64_MAX;
volatile uint64_t t48 = 23469707055193017LLU;
volatile uint8_t x377 = 97U;
int8_t x378 = INT8_MIN;
static volatile int16_t x394 = INT16_MAX;
int16_t x408 = INT16_MIN;
uint16_t x441 = 5U;
static int8_t x443 = -1;
int32_t x447 = INT32_MIN;
int8_t x460 = -4;
volatile uint64_t x466 = 569069374883809772LLU;
volatile int32_t t59 = 2669;
volatile int8_t x472 = 0;
int16_t x483 = -70;
uint32_t x497 = 184U;
int32_t x520 = 62265;
uint8_t x549 = 5U;
uint64_t x551 = UINT64_MAX;
volatile uint32_t t70 = 687U;
volatile uint8_t x569 = 2U;
volatile int32_t t71 = -4026271;
uint32_t x574 = UINT32_MAX;
int16_t x583 = 3901;
volatile int32_t t73 = -51;
uint64_t x585 = 11264764213301794LLU;
uint64_t x588 = UINT64_MAX;
static int32_t x598 = INT32_MIN;
int8_t x602 = INT8_MIN;
static int8_t x604 = INT8_MAX;
int16_t x631 = INT16_MIN;
static int16_t x653 = 3;
static volatile int64_t x663 = INT64_MIN;
int16_t x664 = INT16_MAX;
uint16_t x665 = 0U;
uint32_t x673 = 68159U;
volatile int8_t x674 = INT8_MIN;
uint32_t t85 = 985861U;
int16_t x678 = INT16_MAX;
int64_t x682 = INT64_MIN;
static uint16_t x684 = 5U;
int32_t t88 = -99;
int16_t x695 = INT16_MAX;
int8_t x702 = INT8_MIN;
int8_t x711 = -1;
uint64_t x721 = 1041613963LLU;
static int8_t x724 = INT8_MAX;
uint32_t x737 = 1489192830U;
uint64_t x740 = 21749468221LLU;
uint64_t x749 = 5487675374005468826LLU;
int32_t x752 = -3692203;
int16_t x759 = INT16_MAX;
uint8_t x763 = 63U;


void f0(void) {
	uint32_t x5 = 31192969U;
	int32_t x6 = INT32_MAX;
	static volatile uint64_t x7 = 1608073560954454LLU;
	uint64_t x8 = 4977244054650309LLU;
	uint64_t t0 = 10331215LLU;

	t0 = ((x5<<(x6<=x7))+x8);

	if (t0 != 4977244117036247LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 730680392U;
	uint8_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	volatile uint32_t t1 = 72120329U;

	t1 = ((x13<<(x14<=x15))+x16);

	if (t1 != 730356366U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	int64_t x20 = -1266LL;

	t2 = ((x17<<(x18<=x19))+x20);

	if (t2 != 9223372036854774541LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x38 = -1;
	int64_t x39 = INT64_MIN;
	uint8_t x40 = UINT8_MAX;

	t3 = ((x37<<(x38<=x39))+x40);

	if (t3 != 254LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x42 = -88;
	int8_t x43 = -1;
	volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t4 = 13131LLU;

	t4 = ((x41<<(x42<=x43))+x44);

	if (t4 != 2738147970972599LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x45 = INT64_MAX;
	volatile int16_t x46 = 13968;
	volatile int16_t x47 = -8347;
	int16_t x48 = -95;
	static volatile int64_t t5 = -40645318023859LL;

	t5 = ((x45<<(x46<=x47))+x48);

	if (t5 != 9223372036854775712LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x50 = 6U;
	uint32_t x51 = 290U;
	volatile int16_t x52 = -1;
	volatile int32_t t6 = 26;

	t6 = ((x49<<(x50<=x51))+x52);

	if (t6 != 509) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x53 = 0U;
	static uint64_t x54 = 15102799744LLU;
	static int16_t x55 = INT16_MIN;
	volatile uint32_t x56 = 0U;
	volatile uint32_t t7 = 3781489U;

	t7 = ((x53<<(x54<=x55))+x56);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x57 = UINT64_MAX;
	uint64_t x58 = UINT64_MAX;
	volatile int32_t x59 = 5;
	volatile int64_t x60 = INT64_MIN;
	volatile uint64_t t8 = 1LLU;

	t8 = ((x57<<(x58<=x59))+x60);

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = 2730828LLU;
	int8_t x63 = -1;
	int32_t x64 = 122461;
	uint64_t t9 = 126LLU;

	t9 = ((x61<<(x62<=x63))+x64);

	if (t9 != 2853289LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x65 = 219423U;
	int32_t x66 = INT32_MIN;
	static int64_t x67 = INT64_MIN;
	static uint64_t t10 = 119LLU;

	t10 = ((x65<<(x66<=x67))+x68);

	if (t10 != 219422LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = 60U;
	uint32_t x82 = 338307631U;
	static int8_t x83 = 25;
	int64_t x84 = -1LL;
	int64_t t11 = -3572LL;

	t11 = ((x81<<(x82<=x83))+x84);

	if (t11 != 59LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x91 = INT32_MIN;
	uint8_t x92 = UINT8_MAX;

	t12 = ((x89<<(x90<=x91))+x92);

	if (t12 != 62279812778LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x93 = 131070LL;
	uint32_t x94 = 7U;
	int32_t x96 = INT32_MIN;

	t13 = ((x93<<(x94<=x95))+x96);

	if (t13 != -2147221508LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = 3989LLU;
	static int8_t x98 = 43;
	int16_t x100 = INT16_MIN;

	t14 = ((x97<<(x98<=x99))+x100);

	if (t14 != 18446744073709526826LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x134 = INT64_MIN;
	volatile uint32_t x135 = 22U;

	t15 = ((x133<<(x134<=x135))+x136);

	if (t15 != 66045) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x141 = UINT16_MAX;

	t16 = ((x141<<(x142<=x143))+x144);

	if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x153 = 1;
	int32_t x154 = INT32_MIN;
	int32_t x155 = -1;

	t17 = ((x153<<(x154<=x155))+x156);

	if (t17 != 65537) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x157 = INT16_MAX;
	int64_t x158 = INT64_MIN;
	volatile int32_t t18 = -11925716;

	t18 = ((x157<<(x158<=x159))+x160);

	if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x166 = 126734901574254030LLU;
	volatile int8_t x168 = -6;
	static volatile int32_t t19 = 2;

	t19 = ((x165<<(x166<=x167))+x168);

	if (t19 != 1222) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x177 = 57163270832847LLU;
	int8_t x178 = 6;
	static uint8_t x180 = 1U;
	volatile uint64_t t20 = 1LLU;

	t20 = ((x177<<(x178<=x179))+x180);

	if (t20 != 57163270832848LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x182 = 14;
	volatile int32_t x184 = -1;
	int32_t t21 = -222649;

	t21 = ((x181<<(x182<=x183))+x184);

	if (t21 != 401446) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 18U;
	int16_t x188 = INT16_MIN;
	int32_t t22 = -1;

	t22 = ((x185<<(x186<=x187))+x188);

	if (t22 != -32208) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x195 = 69U;
	static uint8_t x196 = 14U;
	volatile uint32_t t23 = 42778774U;

	t23 = ((x193<<(x194<=x195))+x196);

	if (t23 != 32U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x197 = 11673U;
	int64_t x198 = INT64_MIN;
	int16_t x199 = -1;
	volatile int16_t x200 = INT16_MIN;
	volatile uint32_t t24 = 1U;

	t24 = ((x197<<(x198<=x199))+x200);

	if (t24 != 4294957874U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x201 = 2U;
	volatile uint32_t x202 = UINT32_MAX;
	int32_t x203 = -1;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t25 = 1870310;

	t25 = ((x201<<(x202<=x203))+x204);

	if (t25 != -124) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MAX;
	static int32_t x208 = -196;

	t26 = ((x205<<(x206<=x207))+x208);

	if (t26 != 76383743888014946LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x209 = 13830U;
	int8_t x211 = INT8_MIN;
	static uint32_t x212 = UINT32_MAX;
	volatile uint32_t t27 = 495U;

	t27 = ((x209<<(x210<=x211))+x212);

	if (t27 != 27659U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = 0U;
	int16_t x223 = 1;
	static uint16_t x224 = UINT16_MAX;
	uint32_t t28 = 14080U;

	t28 = ((x221<<(x222<=x223))+x224);

	if (t28 != 65533U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x225 = 11328U;
	int64_t x226 = -231556111LL;
	volatile int32_t t29 = 2088765;

	t29 = ((x225<<(x226<=x227))+x228);

	if (t29 != 88191) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x229 = 35161177615240LLU;
	int64_t x230 = 43516240LL;
	static uint16_t x231 = UINT16_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t30 = 373036LLU;

	t30 = ((x229<<(x230<=x231))+x232);

	if (t30 != 35165472582535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	volatile int32_t t31 = 3534;

	t31 = ((x233<<(x234<=x235))+x236);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1;
	static int64_t x243 = -25566513921727539LL;
	uint32_t x244 = 2U;
	volatile uint32_t t32 = 8138204U;

	t32 = ((x241<<(x242<=x243))+x244);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x245 = 1;
	volatile int64_t x246 = -1LL;
	int64_t x247 = -1LL;
	int64_t x248 = INT64_MIN;
	static volatile int64_t t33 = -293083008564136819LL;

	t33 = ((x245<<(x246<=x247))+x248);

	if (t33 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x253 = UINT32_MAX;
	uint8_t x255 = 9U;
	int16_t x256 = -1;

	t34 = ((x253<<(x254<=x255))+x256);

	if (t34 != 4294967293U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x269 = 2031;
	int32_t x271 = 13;
	static int16_t x272 = -1;

	t35 = ((x269<<(x270<=x271))+x272);

	if (t35 != 2030) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x273 = UINT32_MAX;
	int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MIN;
	volatile int64_t x276 = 5084796846708LL;
	int64_t t36 = -845LL;

	t36 = ((x273<<(x274<=x275))+x276);

	if (t36 != 5089091814002LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x277 = INT16_MAX;
	volatile int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t37 = 29;

	t37 = ((x277<<(x278<=x279))+x280);

	if (t37 != 32894) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x286 = INT32_MAX;
	int32_t t38 = 1;

	t38 = ((x285<<(x286<=x287))+x288);

	if (t38 != -10969) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x293 = 624U;
	volatile int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	volatile int32_t t39 = 12;

	t39 = ((x293<<(x294<=x295))+x296);

	if (t39 != -2147482400) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x306 = 1334988;

	t40 = ((x305<<(x306<=x307))+x308);

	if (t40 != 126U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x313 = 2189561;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	volatile int32_t t41 = 50;

	t41 = ((x313<<(x314<=x315))+x316);

	if (t41 != 2190896) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x325 = 89U;
	int64_t x326 = 111362780803748008LL;
	int64_t x327 = -1LL;
	volatile int16_t x328 = INT16_MIN;
	int32_t t42 = 301314288;

	t42 = ((x325<<(x326<=x327))+x328);

	if (t42 != -32679) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = -1LL;
	static volatile int32_t x343 = -1;
	static int8_t x344 = 1;

	t43 = ((x341<<(x342<=x343))+x344);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x345 = 3971048;
	int32_t x347 = -1;
	int16_t x348 = INT16_MIN;

	t44 = ((x345<<(x346<=x347))+x348);

	if (t44 != 3938280) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x349 = INT16_MAX;
	uint16_t x350 = 41U;
	int8_t x352 = INT8_MAX;
	volatile int32_t t45 = -305;

	t45 = ((x349<<(x350<=x351))+x352);

	if (t45 != 65661) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x353 = 10U;
	int8_t x354 = 1;
	uint16_t x355 = 13479U;
	int16_t x356 = INT16_MIN;

	t46 = ((x353<<(x354<=x355))+x356);

	if (t46 != -32748) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x361 = 4202U;
	static int64_t x362 = -40LL;
	int32_t x363 = INT32_MIN;
	static volatile uint32_t t47 = 152208436U;

	t47 = ((x361<<(x362<=x363))+x364);

	if (t47 != 4201U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x369 = 25;
	volatile int64_t x371 = INT64_MIN;

	t48 = ((x369<<(x370<=x371))+x372);

	if (t48 != 24LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x379 = INT64_MIN;
	int64_t x380 = -1LL;
	volatile int64_t t49 = 824399522354911504LL;

	t49 = ((x377<<(x378<=x379))+x380);

	if (t49 != 96LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x381 = 6U;
	volatile int8_t x382 = 8;
	volatile uint16_t x383 = 2U;
	int8_t x384 = 45;
	volatile int32_t t50 = 10;

	t50 = ((x381<<(x382<=x383))+x384);

	if (t50 != 51) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x395 = 0LLU;
	uint16_t x396 = 0U;
	int32_t t51 = 0;

	t51 = ((x393<<(x394<=x395))+x396);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x405 = UINT8_MAX;
	int16_t x406 = INT16_MAX;
	static volatile uint16_t x407 = 0U;
	volatile int32_t t52 = -127943369;

	t52 = ((x405<<(x406<=x407))+x408);

	if (t52 != -32513) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x413 = UINT16_MAX;
	int8_t x414 = 33;
	int32_t x415 = -168906;
	int64_t x416 = -1LL;
	volatile int64_t t53 = 100LL;

	t53 = ((x413<<(x414<=x415))+x416);

	if (t53 != 65534LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x425 = 0U;
	int8_t x426 = 1;
	static uint16_t x427 = 11U;
	static int8_t x428 = INT8_MAX;
	volatile int32_t t54 = -8912;

	t54 = ((x425<<(x426<=x427))+x428);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x442 = INT64_MAX;
	uint64_t x444 = 36602652451248LLU;
	volatile uint64_t t55 = 20294392LLU;

	t55 = ((x441<<(x442<=x443))+x444);

	if (t55 != 36602652451253LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x445 = 838553817548698LLU;
	volatile int32_t x446 = INT32_MIN;
	int64_t x448 = -1LL;
	static uint64_t t56 = 24278978LLU;

	t56 = ((x445<<(x446<=x447))+x448);

	if (t56 != 1677107635097395LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x449 = 200U;
	int32_t x450 = INT32_MIN;
	uint8_t x451 = UINT8_MAX;
	uint64_t x452 = UINT64_MAX;
	uint64_t t57 = 3400134LLU;

	t57 = ((x449<<(x450<=x451))+x452);

	if (t57 != 399LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x457 = INT16_MAX;
	uint16_t x458 = 5012U;
	static int16_t x459 = INT16_MIN;
	int32_t t58 = -42677;

	t58 = ((x457<<(x458<=x459))+x460);

	if (t58 != 32763) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x465 = 12473U;
	uint32_t x467 = 7051487U;
	int32_t x468 = INT32_MIN;

	t59 = ((x465<<(x466<=x467))+x468);

	if (t59 != -2147471175) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x469 = 5;
	int16_t x470 = 125;
	static int8_t x471 = INT8_MAX;
	int32_t t60 = 523;

	t60 = ((x469<<(x470<=x471))+x472);

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x473 = 8815LLU;
	static volatile uint8_t x474 = 0U;
	int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	uint64_t t61 = 258893730616194568LLU;

	t61 = ((x473<<(x474<=x475))+x476);

	if (t61 != 18446744073709527663LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x481 = INT16_MAX;
	static uint32_t x482 = 17855234U;
	volatile uint32_t x484 = 5U;
	volatile uint32_t t62 = 1660341U;

	t62 = ((x481<<(x482<=x483))+x484);

	if (t62 != 65539U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x498 = INT8_MIN;
	volatile uint32_t x499 = 207544620U;
	int32_t x500 = 154522;
	uint32_t t63 = 1U;

	t63 = ((x497<<(x498<=x499))+x500);

	if (t63 != 154706U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x505 = 41U;
	int64_t x506 = 51LL;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -3;
	volatile int32_t t64 = 671;

	t64 = ((x505<<(x506<=x507))+x508);

	if (t64 != 38) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x517 = 13U;
	int16_t x518 = 1;
	uint32_t x519 = 480097U;
	int32_t t65 = 13542626;

	t65 = ((x517<<(x518<=x519))+x520);

	if (t65 != 62291) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x545 = UINT32_MAX;
	static uint32_t x546 = UINT32_MAX;
	volatile int32_t x547 = 0;
	int8_t x548 = INT8_MIN;
	static volatile uint32_t t66 = 2032909U;

	t66 = ((x545<<(x546<=x547))+x548);

	if (t66 != 4294967167U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x550 = 11U;
	int8_t x552 = -1;
	volatile int32_t t67 = 95;

	t67 = ((x549<<(x550<=x551))+x552);

	if (t67 != 9) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x553 = UINT64_MAX;
	uint16_t x554 = 44U;
	uint32_t x555 = 1551499233U;
	volatile uint16_t x556 = 3U;
	uint64_t t68 = 1LLU;

	t68 = ((x553<<(x554<=x555))+x556);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x557 = UINT8_MAX;
	uint16_t x558 = 7U;
	static uint16_t x559 = UINT16_MAX;
	int64_t x560 = INT64_MIN;
	volatile int64_t t69 = 34578868968225669LL;

	t69 = ((x557<<(x558<=x559))+x560);

	if (t69 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x561 = INT8_MAX;
	int8_t x562 = INT8_MIN;
	int16_t x563 = -1;
	uint32_t x564 = UINT32_MAX;

	t70 = ((x561<<(x562<=x563))+x564);

	if (t70 != 253U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x570 = 180U;
	int16_t x571 = INT16_MIN;
	volatile int16_t x572 = INT16_MIN;

	t71 = ((x569<<(x570<=x571))+x572);

	if (t71 != -32764) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x573 = 6U;
	int32_t x575 = -1401;
	volatile int16_t x576 = 32;
	volatile int32_t t72 = 219;

	t72 = ((x573<<(x574<=x575))+x576);

	if (t72 != 38) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x581 = 16U;
	int64_t x582 = INT64_MIN;
	int8_t x584 = INT8_MIN;

	t73 = ((x581<<(x582<=x583))+x584);

	if (t73 != -96) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x586 = INT64_MIN;
	uint16_t x587 = 1U;
	uint64_t t74 = 7911921LLU;

	t74 = ((x585<<(x586<=x587))+x588);

	if (t74 != 22529528426603587LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x593 = 11U;
	uint8_t x594 = 3U;
	volatile uint32_t x595 = 180U;
	int16_t x596 = -1;
	int32_t t75 = -1;

	t75 = ((x593<<(x594<=x595))+x596);

	if (t75 != 21) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x597 = 0;
	static uint64_t x599 = UINT64_MAX;
	uint64_t x600 = 1765LLU;
	volatile uint64_t t76 = 1431949230855756LLU;

	t76 = ((x597<<(x598<=x599))+x600);

	if (t76 != 1765LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x601 = 61U;
	static int32_t x603 = INT32_MAX;
	int32_t t77 = -32665;

	t77 = ((x601<<(x602<=x603))+x604);

	if (t77 != 249) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x613 = 10304;
	static int32_t x614 = INT32_MIN;
	int32_t x615 = INT32_MIN;
	int64_t x616 = -5554888402957444LL;
	static volatile int64_t t78 = -5628288652912LL;

	t78 = ((x613<<(x614<=x615))+x616);

	if (t78 != -5554888402936836LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x617 = 37U;
	uint64_t x618 = 542510925755LLU;
	static int64_t x619 = INT64_MAX;
	int8_t x620 = -1;
	int32_t t79 = -1609;

	t79 = ((x617<<(x618<=x619))+x620);

	if (t79 != 73) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x629 = UINT16_MAX;
	volatile uint32_t x630 = 391U;
	uint16_t x632 = 17U;
	int32_t t80 = -90827;

	t80 = ((x629<<(x630<=x631))+x632);

	if (t80 != 131087) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x649 = UINT16_MAX;
	uint32_t x650 = UINT32_MAX;
	int16_t x651 = INT16_MIN;
	int16_t x652 = 2212;
	int32_t t81 = -39;

	t81 = ((x649<<(x650<=x651))+x652);

	if (t81 != 67747) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x654 = INT32_MIN;
	int8_t x655 = -6;
	int64_t x656 = INT64_MIN;
	static int64_t t82 = -2195564974052LL;

	t82 = ((x653<<(x654<=x655))+x656);

	if (t82 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x661 = 22;
	int64_t x662 = 818802LL;
	int32_t t83 = 57509080;

	t83 = ((x661<<(x662<=x663))+x664);

	if (t83 != 32789) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x666 = 87U;
	int64_t x667 = INT64_MAX;
	static int64_t x668 = INT64_MIN;
	int64_t t84 = INT64_MIN;

	t84 = ((x665<<(x666<=x667))+x668);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x675 = 14058232LL;
	uint32_t x676 = 14654U;

	t85 = ((x673<<(x674<=x675))+x676);

	if (t85 != 150972U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x677 = UINT32_MAX;
	int8_t x679 = INT8_MIN;
	int8_t x680 = 1;
	volatile uint32_t t86 = 9U;

	t86 = ((x677<<(x678<=x679))+x680);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x681 = INT16_MAX;
	uint32_t x683 = 16512536U;
	static volatile int32_t t87 = 1;

	t87 = ((x681<<(x682<=x683))+x684);

	if (t87 != 65539) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x685 = 57U;
	uint8_t x686 = UINT8_MAX;
	int64_t x687 = -3714729970184LL;
	volatile int32_t x688 = INT32_MIN;

	t88 = ((x685<<(x686<=x687))+x688);

	if (t88 != -2147483591) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x693 = 29948U;
	uint64_t x694 = 99378655319099LLU;
	uint16_t x696 = UINT16_MAX;
	static uint32_t t89 = 103U;

	t89 = ((x693<<(x694<=x695))+x696);

	if (t89 != 95483U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x701 = INT16_MAX;
	volatile uint32_t x703 = 728U;
	static int32_t x704 = INT32_MIN;
	int32_t t90 = 0;

	t90 = ((x701<<(x702<=x703))+x704);

	if (t90 != -2147450881) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x709 = 42025U;
	uint16_t x710 = 7U;
	static int32_t x712 = -14;
	uint32_t t91 = 7128U;

	t91 = ((x709<<(x710<=x711))+x712);

	if (t91 != 42011U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x722 = INT8_MIN;
	volatile uint16_t x723 = 29U;
	uint64_t t92 = 6208LLU;

	t92 = ((x721<<(x722<=x723))+x724);

	if (t92 != 2083228053LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x738 = INT8_MAX;
	int16_t x739 = -1;
	volatile uint64_t t93 = 2LLU;

	t93 = ((x737<<(x738<=x739))+x740);

	if (t93 != 23238661051LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x745 = 7;
	int16_t x746 = INT16_MAX;
	int64_t x747 = -230161874602502LL;
	volatile uint64_t x748 = 108LLU;
	volatile uint64_t t94 = 21896210229594061LLU;

	t94 = ((x745<<(x746<=x747))+x748);

	if (t94 != 115LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x750 = INT64_MAX;
	int16_t x751 = -7;
	uint64_t t95 = 7698LLU;

	t95 = ((x749<<(x750<=x751))+x752);

	if (t95 != 5487675374001776623LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x753 = 25110334187931LLU;
	volatile int8_t x754 = 40;
	static int16_t x755 = -1;
	volatile int16_t x756 = INT16_MAX;
	static volatile uint64_t t96 = 0LLU;

	t96 = ((x753<<(x754<=x755))+x756);

	if (t96 != 25110334220698LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x757 = 265337240969359LLU;
	int32_t x758 = INT32_MAX;
	static uint64_t x760 = UINT64_MAX;
	volatile uint64_t t97 = 43LLU;

	t97 = ((x757<<(x758<=x759))+x760);

	if (t97 != 265337240969358LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x761 = 0U;
	int64_t x762 = INT64_MIN;
	static uint32_t x764 = 3336565U;
	uint32_t t98 = 392326891U;

	t98 = ((x761<<(x762<=x763))+x764);

	if (t98 != 3336565U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x769 = 31653870656LLU;
	int32_t x770 = -7464;
	volatile int64_t x771 = INT64_MIN;
	int32_t x772 = -1;
	volatile uint64_t t99 = 1013767363824071LLU;

	t99 = ((x769<<(x770<=x771))+x772);

	if (t99 != 31653870655LLU) { NG(); } else { ; }
	
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

