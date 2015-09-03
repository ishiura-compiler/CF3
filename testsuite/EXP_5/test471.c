#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
uint64_t t3 = 197LLU;
int8_t x23 = 1;
int16_t x27 = INT16_MAX;
uint8_t x28 = UINT8_MAX;
static int16_t x31 = INT16_MIN;
static volatile int32_t t7 = 74163584;
static int8_t x50 = INT8_MIN;
static int8_t x52 = INT8_MAX;
uint16_t x57 = UINT16_MAX;
volatile int64_t x60 = INT64_MAX;
volatile uint32_t x62 = UINT32_MAX;
int8_t x74 = INT8_MAX;
int8_t x77 = INT8_MIN;
int8_t x78 = -1;
int64_t t13 = 203LL;
int16_t x93 = 14;
int32_t x101 = INT32_MIN;
static int32_t x103 = INT32_MAX;
int8_t x109 = INT8_MAX;
static uint64_t x110 = 10915240LLU;
static uint64_t x112 = 139368380314598697LLU;
static uint64_t t18 = 478LLU;
int8_t x124 = INT8_MIN;
static volatile uint16_t x134 = UINT16_MAX;
uint8_t x136 = UINT8_MAX;
int8_t x150 = 1;
uint16_t x156 = UINT16_MAX;
int16_t x163 = INT16_MAX;
volatile int32_t t24 = 1;
static int32_t x168 = -26814626;
volatile int32_t t25 = 1390582;
uint8_t x170 = UINT8_MAX;
volatile int8_t x182 = 1;
int64_t x194 = -1LL;
static uint64_t t31 = 5117507922513170205LLU;
volatile uint16_t x197 = 3U;
static uint64_t x211 = 54391330340LLU;
static volatile int64_t x214 = 1943911923493LL;
int32_t x221 = INT32_MIN;
int16_t x222 = INT16_MAX;
int32_t x223 = 671;
static int8_t x230 = INT8_MIN;
static uint16_t x231 = 90U;
volatile uint32_t x234 = 3534095U;
int8_t x237 = INT8_MAX;
int8_t x240 = INT8_MAX;
static uint16_t x248 = 41U;
static uint8_t x250 = 97U;
static uint64_t t43 = 4748LLU;
int8_t x287 = INT8_MIN;
volatile int8_t x293 = INT8_MAX;
static uint16_t x295 = 1U;
uint32_t x309 = 10131U;
static int8_t x311 = -12;
volatile int8_t x318 = INT8_MIN;
static int16_t x319 = INT16_MIN;
int16_t x320 = INT16_MIN;
int32_t t50 = -27491;
static uint32_t x321 = 57872243U;
int64_t x330 = -1LL;
int32_t x331 = -23;
int16_t x332 = INT16_MIN;
volatile int32_t x347 = -1;
int8_t x348 = 0;
volatile uint64_t t59 = 141550022452298959LLU;
int64_t x369 = 182005LL;
uint16_t x371 = 76U;
uint8_t x379 = 3U;
volatile uint32_t t63 = 13422236U;
static int64_t x402 = -1LL;
int64_t x407 = 1612672438LL;
int64_t x419 = -1LL;
volatile int64_t t68 = 491864352047LL;
static int16_t x438 = INT16_MIN;
int8_t x440 = -1;
int16_t x446 = -175;
volatile int32_t t72 = 1;
int16_t x452 = -139;
static uint8_t x457 = 113U;
volatile int32_t t74 = 493015;
volatile uint64_t x465 = 328889659536966LLU;
static volatile uint64_t t76 = 17010951LLU;
int8_t x478 = INT8_MIN;
static volatile uint8_t x479 = UINT8_MAX;
volatile int32_t t77 = 5780209;
volatile uint64_t t78 = 233519231342LLU;
int8_t x485 = INT8_MIN;
uint32_t t79 = 1U;
uint32_t x490 = 213U;
volatile int64_t t82 = 261847266403247LL;
volatile int16_t x511 = -234;
static uint16_t x522 = UINT16_MAX;
static int8_t x528 = INT8_MAX;
int64_t x530 = -3234806381950831185LL;
volatile int16_t x531 = -1;
uint64_t x532 = 2524109LLU;
volatile uint64_t t87 = 130471070806LLU;
int8_t x536 = -1;
uint64_t x543 = 13251LLU;
int16_t x545 = -1;
static int64_t x561 = INT64_MIN;
volatile int32_t t96 = 1;
uint16_t x595 = 11U;
volatile int16_t x601 = -1;
volatile uint64_t t99 = 185732667LLU;


void f0(void) {
	volatile uint8_t x6 = 0U;
	int8_t x7 = INT8_MIN;
	volatile int64_t x8 = INT64_MIN;
	int64_t t0 = 22098532096614LL;

	t0 = (x5*((x6*x7)&x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -32;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = 49090769;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t1 = 192319807635LLU;

	t1 = (x9*((x10*x11)&x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	volatile int32_t x14 = -1;
	volatile uint16_t x15 = 3U;
	uint32_t x16 = 1444U;
	volatile uint32_t t2 = 226231U;

	t2 = (x13*((x14*x15)&x16));

	if (t2 != 47315548U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 1886423451524105LLU;
	uint32_t x18 = 346248U;
	static int32_t x19 = -609468;
	int16_t x20 = INT16_MIN;

	t3 = (x17*((x18*x19)&x20));

	if (t3 != 10288310190776123392LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	static uint64_t x24 = 1397140180264LLU;
	volatile uint64_t t4 = 8663600838852711LLU;

	t4 = (x21*((x22*x23)&x24));

	if (t4 != 18446565239766482944LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 53U;
	uint16_t x26 = UINT16_MAX;
	uint32_t t5 = 6U;

	t5 = (x25*((x26*x27)&x28));

	if (t5 != 53U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int32_t x30 = -1;
	volatile int64_t x32 = INT64_MIN;
	int64_t t6 = -2LL;

	t6 = (x29*((x30*x31)&x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MAX;
	uint8_t x34 = 57U;
	int16_t x35 = -1;
	int8_t x36 = INT8_MIN;

	t7 = (x33*((x34*x35)&x36));

	if (t7 != -16256) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 20U;
	uint64_t x51 = 1208413941LLU;
	uint64_t t8 = 117LLU;

	t8 = (x49*((x50*x51)&x52));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 100U;
	uint8_t x54 = 26U;
	volatile int8_t x55 = -1;
	uint64_t x56 = 7451879546LLU;
	volatile uint64_t t9 = 11LLU;

	t9 = (x53*((x54*x55)&x56));

	if (t9 != 745187952200LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x58 = UINT32_MAX;
	volatile uint64_t x59 = 1408LLU;
	static uint64_t t10 = 152163279LLU;

	t10 = (x57*((x58*x59)&x60));

	if (t10 != 396310719802377600LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	int16_t x63 = 6;
	static int8_t x64 = INT8_MIN;
	volatile uint32_t t11 = 44U;

	t11 = (x61*((x62*x63)&x64));

	if (t11 != 4194304U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	int32_t x75 = -1184;
	volatile uint32_t x76 = 221U;
	static uint32_t t12 = 4U;

	t12 = (x73*((x74*x75)&x76));

	if (t12 != 4290772992U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x79 = UINT32_MAX;
	volatile int64_t x80 = INT64_MAX;

	t13 = (x77*((x78*x79)&x80));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x85 = 8405U;
	int8_t x86 = INT8_MIN;
	static volatile int16_t x87 = 9639;
	uint16_t x88 = UINT16_MAX;
	int32_t t14 = -864;

	t14 = (x85*((x86*x87)&x88));

	if (t14 != 95749760) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x94 = -14324;
	static int8_t x95 = 0;
	volatile int32_t x96 = -13114673;
	static volatile int32_t t15 = -26177011;

	t15 = (x93*((x94*x95)&x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = 1326169U;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	static int32_t x100 = INT32_MIN;
	static uint32_t t16 = 483407360U;

	t16 = (x97*((x98*x99)&x100));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x102 = UINT64_MAX;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t17 = 32LLU;

	t17 = (x101*((x102*x103)&x104));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x111 = 756825195830LLU;

	t18 = (x109*((x110*x111)&x112));

	if (t18 != 5867415760591283936LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x121 = 8053950093LLU;
	int16_t x122 = -258;
	uint8_t x123 = 3U;
	volatile uint64_t t19 = 455035761292412LLU;

	t19 = (x121*((x122*x123)&x124));

	if (t19 != 18446736857370268288LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x133 = INT16_MIN;
	int16_t x135 = 240;
	int32_t t20 = 114440;

	t20 = (x133*((x134*x135)&x136));

	if (t20 != -524288) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x149 = -15;
	int16_t x151 = INT16_MAX;
	static uint16_t x152 = 14U;
	int32_t t21 = -5212;

	t21 = (x149*((x150*x151)&x152));

	if (t21 != -210) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x153 = INT16_MAX;
	uint8_t x154 = UINT8_MAX;
	static int8_t x155 = INT8_MIN;
	static volatile int32_t t22 = 1;

	t22 = (x153*((x154*x155)&x156));

	if (t22 != 1077903232) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x157 = 8233053LLU;
	static volatile int16_t x158 = INT16_MAX;
	static uint32_t x159 = 8U;
	int8_t x160 = INT8_MAX;
	volatile uint64_t t23 = 579213576407189434LLU;

	t23 = (x157*((x158*x159)&x160));

	if (t23 != 987966360LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = UINT16_MAX;
	volatile int16_t x164 = 1;

	t24 = (x161*((x162*x163)&x164));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x165 = -1;
	int32_t x166 = 44;
	int8_t x167 = -1;

	t25 = (x165*((x166*x167)&x168));

	if (t25 != 26814636) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = INT8_MAX;
	int32_t x171 = 6874178;
	int64_t x172 = INT64_MIN;
	volatile int64_t t26 = -28LL;

	t26 = (x169*((x170*x171)&x172));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = INT8_MAX;
	int8_t x174 = INT8_MAX;
	volatile int8_t x175 = -1;
	uint32_t x176 = 8246330U;
	uint32_t t27 = 13520U;

	t27 = (x173*((x174*x175)&x176));

	if (t27 != 1047276544U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x181 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	static volatile int8_t x184 = INT8_MAX;
	volatile int32_t t28 = -413;

	t28 = (x181*((x182*x183)&x184));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = INT8_MIN;
	static uint16_t x186 = 1U;
	static uint32_t x187 = 125549436U;
	volatile int32_t x188 = INT32_MAX;
	uint32_t t29 = 0U;

	t29 = (x185*((x186*x187)&x188));

	if (t29 != 1109541376U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x189 = -1;
	static volatile uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t30 = 63313312956181LL;

	t30 = (x189*((x190*x191)&x192));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = INT8_MAX;
	volatile uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;

	t31 = (x193*((x194*x195)&x196));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 810LLU;
	uint64_t x200 = UINT64_MAX;
	uint64_t t32 = 66083734187048LLU;

	t32 = (x197*((x198*x199)&x200));

	if (t32 != 18446738855324286976LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = 0U;
	uint8_t x203 = 0U;
	static uint64_t x204 = 1833601LLU;
	uint64_t t33 = 43864560LLU;

	t33 = (x201*((x202*x203)&x204));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x209 = INT16_MIN;
	static volatile uint8_t x210 = 88U;
	int32_t x212 = INT32_MIN;
	volatile uint64_t t34 = 255851014625LLU;

	t34 = (x209*((x210*x211)&x212));

	if (t34 != 18289962511681716224LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x213 = 1734280005U;
	volatile int8_t x215 = INT8_MIN;
	uint64_t x216 = 44412776488076LLU;
	volatile uint64_t t35 = 9093218518LLU;

	t35 = (x213*((x214*x215)&x216));

	if (t35 != 2665381913629875840LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x224 = 90532753575481LL;
	static int64_t t36 = 8LL;

	t36 = (x221*((x222*x223)&x224));

	if (t36 != -1976992773701632LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x225 = 12034U;
	int8_t x226 = INT8_MIN;
	volatile uint32_t x227 = UINT32_MAX;
	uint32_t x228 = UINT32_MAX;
	uint32_t t37 = 495U;

	t37 = (x225*((x226*x227)&x228));

	if (t37 != 1540352U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x229 = 9U;
	static volatile uint16_t x232 = 1U;
	static int32_t t38 = -40;

	t38 = (x229*((x230*x231)&x232));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x233 = 471831965073996LLU;
	volatile uint8_t x235 = 15U;
	int32_t x236 = INT32_MIN;
	uint64_t t39 = 211LLU;

	t39 = (x233*((x234*x235)&x236));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x238 = -1;
	uint64_t x239 = 33367377406675LLU;
	uint64_t t40 = 2015471169345580915LLU;

	t40 = (x237*((x238*x239)&x240));

	if (t40 != 5715LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	static int16_t x247 = 6720;
	volatile uint32_t t41 = 215727547U;

	t41 = (x245*((x246*x247)&x248));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x249 = INT16_MIN;
	int8_t x251 = INT8_MAX;
	int64_t x252 = 3623815776LL;
	volatile int64_t t42 = 1LL;

	t42 = (x249*((x250*x251)&x252));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x257 = 271934501LLU;
	static int16_t x258 = INT16_MIN;
	static volatile int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MAX;

	t43 = (x257*((x258*x259)&x260));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x265 = -1;
	uint64_t x266 = 3401513LLU;
	uint16_t x267 = UINT16_MAX;
	uint8_t x268 = 2U;
	uint64_t t44 = 8LLU;

	t44 = (x265*((x266*x267)&x268));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	int8_t x279 = 0;
	int16_t x280 = INT16_MIN;
	int32_t t45 = -25296;

	t45 = (x277*((x278*x279)&x280));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x285 = -1;
	int16_t x286 = INT16_MIN;
	volatile int16_t x288 = -1;
	volatile int32_t t46 = 63059;

	t46 = (x285*((x286*x287)&x288));

	if (t46 != -4194304) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x294 = INT64_MAX;
	static uint16_t x296 = 389U;
	static int64_t t47 = -7735806718LL;

	t47 = (x293*((x294*x295)&x296));

	if (t47 != 49403LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x305 = 5140;
	static uint64_t x306 = 2304LLU;
	uint32_t x307 = 20237895U;
	int64_t x308 = -1LL;
	volatile uint64_t t48 = 4172879LLU;

	t48 = (x305*((x306*x307)&x308));

	if (t48 != 239668485811200LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x310 = 3U;
	static volatile int16_t x312 = -1;
	volatile uint32_t t49 = 498869U;

	t49 = (x309*((x310*x311)&x312));

	if (t49 != 4294602580U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x317 = 450;

	t50 = (x317*((x318*x319)&x320));

	if (t50 != 1887436800) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x322 = 0;
	static uint16_t x323 = 419U;
	int64_t x324 = -2047819843169201LL;
	volatile int64_t t51 = -1LL;

	t51 = (x321*((x322*x323)&x324));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x325 = 66;
	uint64_t x326 = 922LLU;
	static uint32_t x327 = UINT32_MAX;
	volatile uint32_t x328 = 451830300U;
	uint64_t t52 = 788954627LLU;

	t52 = (x325*((x326*x327)&x328));

	if (t52 != 29820764424LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x329 = 13018;
	int64_t t53 = 8885303LL;

	t53 = (x329*((x330*x331)&x332));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x337 = -1;
	int64_t x338 = 18LL;
	uint64_t x339 = UINT64_MAX;
	uint8_t x340 = 1U;
	uint64_t t54 = 1861929665067LLU;

	t54 = (x337*((x338*x339)&x340));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = 1;
	volatile int64_t t55 = -160570318LL;

	t55 = (x345*((x346*x347)&x348));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 1040LLU;
	static int16_t x351 = INT16_MIN;
	static volatile uint32_t x352 = 12239U;
	volatile uint64_t t56 = 213255128109969259LLU;

	t56 = (x349*((x350*x351)&x352));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	volatile uint64_t x355 = 5LLU;
	int16_t x356 = INT16_MIN;
	volatile uint64_t t57 = 6LLU;

	t57 = (x353*((x354*x355)&x356));

	if (t57 != 1073741824LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x357 = UINT8_MAX;
	static int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t58 = -127435;

	t58 = (x357*((x358*x359)&x360));

	if (t58 != 32640) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x361 = 30U;
	static int32_t x362 = INT32_MAX;
	uint64_t x363 = 9296080LLU;
	static volatile int8_t x364 = INT8_MAX;

	t59 = (x361*((x362*x363)&x364));

	if (t59 != 1440LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x370 = 510;
	uint16_t x372 = 499U;
	volatile int64_t t60 = 124640436LL;

	t60 = (x369*((x370*x371)&x372));

	if (t60 != 64065760LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = -7;
	int8_t x375 = 0;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t61 = 58985964499951LLU;

	t61 = (x373*((x374*x375)&x376));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x377 = 263266;
	uint64_t x378 = 1054016719009493406LLU;
	uint8_t x380 = UINT8_MAX;
	uint64_t t62 = 585LLU;

	t62 = (x377*((x378*x379)&x380));

	if (t62 != 57391988LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	static int8_t x387 = INT8_MIN;
	uint32_t x388 = 55857357U;

	t63 = (x385*((x386*x387)&x388));

	if (t63 != 532676608U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x393 = INT8_MIN;
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;
	uint64_t t64 = 156149LLU;

	t64 = (x393*((x394*x395)&x396));

	if (t64 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x401 = 11676420U;
	volatile int16_t x403 = INT16_MIN;
	int32_t x404 = -122309;
	int64_t t65 = 1429156LL;

	t65 = (x401*((x402*x403)&x404));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x405 = -32;
	int16_t x406 = INT16_MAX;
	int16_t x408 = INT16_MIN;
	int64_t t66 = -6337061LL;

	t66 = (x405*((x406*x407)&x408));

	if (t66 != -1690958008680448LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x413 = INT64_MIN;
	volatile int8_t x414 = -1;
	int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MAX;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x413*((x414*x415)&x416));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x417 = 441;
	static int16_t x418 = -8;
	static int16_t x420 = -1;

	t68 = (x417*((x418*x419)&x420));

	if (t68 != 3528LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x421 = UINT8_MAX;
	uint32_t x422 = UINT32_MAX;
	static uint32_t x423 = 24206108U;
	static int16_t x424 = INT16_MIN;
	uint32_t t69 = 82969U;

	t69 = (x421*((x422*x423)&x424));

	if (t69 != 2414968832U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x437 = 9U;
	int64_t x439 = -1LL;
	int64_t t70 = -16738709953501000LL;

	t70 = (x437*((x438*x439)&x440));

	if (t70 != 294912LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x441 = -1;
	volatile int64_t x442 = 8528526345588LL;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;
	volatile int64_t t71 = 239LL;

	t71 = (x441*((x442*x443)&x444));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x445 = -1;
	int8_t x447 = -54;
	static int8_t x448 = INT8_MIN;

	t72 = (x445*((x446*x447)&x448));

	if (t72 != -9344) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x449 = 198894493180456278LLU;
	volatile uint32_t x450 = 331310530U;
	uint64_t x451 = UINT64_MAX;
	volatile uint64_t t73 = 197476730084456LLU;

	t73 = (x449*((x450*x451)&x452));

	if (t73 != 4623087521272689016LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x458 = 397998;
	static uint8_t x459 = 2U;
	int16_t x460 = INT16_MIN;

	t74 = (x457*((x458*x459)&x460));

	if (t74 != 88866816) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x461 = -7;
	uint64_t x462 = UINT64_MAX;
	int64_t x463 = INT64_MIN;
	int16_t x464 = 164;
	static uint64_t t75 = 727677258739845486LLU;

	t75 = (x461*((x462*x463)&x464));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x466 = -1;
	uint8_t x467 = 14U;
	volatile int16_t x468 = INT16_MIN;

	t76 = (x465*((x466*x467)&x468));

	if (t76 != 7669687710002249728LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x477 = 93;
	int16_t x480 = INT16_MIN;

	t77 = (x477*((x478*x479)&x480));

	if (t77 != -3047424) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x481 = INT32_MAX;
	static int32_t x482 = INT32_MAX;
	uint32_t x483 = UINT32_MAX;
	uint64_t x484 = 147532LLU;

	t78 = (x481*((x482*x483)&x484));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x486 = INT8_MIN;
	uint32_t x487 = 129613U;
	uint32_t x488 = 1290068622U;

	t79 = (x485*((x486*x487)&x488));

	if (t79 != 4288659456U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x489 = UINT64_MAX;
	uint32_t x491 = UINT32_MAX;
	volatile int8_t x492 = -1;
	uint64_t t80 = 983LLU;

	t80 = (x489*((x490*x491)&x492));

	if (t80 != 18446744069414584533LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x493 = UINT32_MAX;
	static int8_t x494 = 1;
	int8_t x495 = INT8_MIN;
	int8_t x496 = -22;
	volatile uint32_t t81 = 34524328U;

	t81 = (x493*((x494*x495)&x496));

	if (t81 != 128U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x497 = -1;
	volatile int16_t x498 = 14913;
	int64_t x499 = -1LL;
	static int32_t x500 = -12;

	t82 = (x497*((x498*x499)&x500));

	if (t82 != 14924LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x501 = -1;
	int32_t x502 = -1;
	static uint8_t x503 = UINT8_MAX;
	static volatile int8_t x504 = INT8_MIN;
	volatile int32_t t83 = -199;

	t83 = (x501*((x502*x503)&x504));

	if (t83 != 256) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x509 = -2800;
	int8_t x510 = INT8_MIN;
	uint64_t x512 = 491609420377LLU;
	volatile uint64_t t84 = 353LLU;

	t84 = (x509*((x510*x511)&x512));

	if (t84 != 18446744073629270016LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x521 = -1;
	int16_t x523 = INT16_MIN;
	volatile int16_t x524 = INT16_MIN;
	int32_t t85 = -6682;

	t85 = (x521*((x522*x523)&x524));

	if (t85 != 2147450880) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x525 = 11U;
	volatile int64_t x526 = -949315LL;
	uint32_t x527 = 431U;
	int64_t t86 = 839LL;

	t86 = (x525*((x526*x527)&x528));

	if (t86 != 561LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x529 = -1LL;

	t87 = (x529*((x530*x531)&x532));

	if (t87 != 18446744073709518271LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x533 = UINT8_MAX;
	uint8_t x534 = 1U;
	static uint16_t x535 = 0U;
	static int32_t t88 = -717;

	t88 = (x533*((x534*x535)&x536));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x537 = -526846030151LL;
	uint8_t x538 = UINT8_MAX;
	volatile int64_t x539 = -1342LL;
	int16_t x540 = INT16_MIN;
	int64_t t89 = 126781LL;

	t89 = (x537*((x538*x539)&x540));

	if (t89 != 189900597875867648LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x541 = INT64_MIN;
	uint64_t x542 = UINT64_MAX;
	int16_t x544 = INT16_MAX;
	uint64_t t90 = 94LLU;

	t90 = (x541*((x542*x543)&x544));

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x546 = INT16_MIN;
	uint32_t x547 = 8U;
	int8_t x548 = 0;
	uint32_t t91 = 16944498U;

	t91 = (x545*((x546*x547)&x548));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x549 = INT16_MIN;
	int16_t x550 = 1953;
	int8_t x551 = -1;
	int64_t x552 = -1LL;
	int64_t t92 = -60561635013LL;

	t92 = (x549*((x550*x551)&x552));

	if (t92 != 63995904LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x553 = 0U;
	static int64_t x554 = -7119478488708039LL;
	volatile uint8_t x555 = 1U;
	int64_t x556 = 3293439225114LL;
	static int64_t t93 = -48708076530849LL;

	t93 = (x553*((x554*x555)&x556));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x562 = 23638U;
	int16_t x563 = INT16_MIN;
	uint64_t x564 = UINT64_MAX;
	volatile uint64_t t94 = 7598705941841446909LLU;

	t94 = (x561*((x562*x563)&x564));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x565 = 7;
	static int8_t x566 = 0;
	int32_t x567 = INT32_MAX;
	uint8_t x568 = 124U;
	static volatile int32_t t95 = -34;

	t95 = (x565*((x566*x567)&x568));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x569 = -1;
	int16_t x570 = INT16_MIN;
	uint16_t x571 = UINT16_MAX;
	volatile int16_t x572 = 31;

	t96 = (x569*((x570*x571)&x572));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x589 = 27501843438194LL;
	uint64_t x590 = 6403754LLU;
	int8_t x591 = INT8_MIN;
	int32_t x592 = 41201;
	uint64_t t97 = 252692783LLU;

	t97 = (x589*((x590*x591)&x592));

	if (t97 != 1126475507228426240LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x593 = 1LL;
	int8_t x594 = -1;
	uint64_t x596 = UINT64_MAX;
	static uint64_t t98 = 1971123LLU;

	t98 = (x593*((x594*x595)&x596));

	if (t98 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x602 = 3278700740857641384LLU;
	static volatile int64_t x603 = 3781900844898LL;
	volatile int8_t x604 = -32;

	t99 = (x601*((x602*x603)&x604));

	if (t99 != 17141684338704750016LLU) { NG(); } else { ; }
	
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

