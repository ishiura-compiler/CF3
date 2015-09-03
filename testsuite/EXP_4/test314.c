#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MIN;
volatile int64_t x4 = 3139161LL;
volatile int16_t x5 = INT16_MAX;
static uint16_t x9 = 10U;
uint64_t x12 = 7LLU;
volatile int8_t x22 = INT8_MIN;
static uint16_t x34 = UINT16_MAX;
volatile int32_t x36 = 1;
int32_t x44 = -1;
int8_t x45 = INT8_MAX;
int32_t x48 = INT32_MIN;
static int8_t x51 = INT8_MIN;
volatile int8_t x59 = -1;
static volatile int32_t x60 = 355;
uint32_t x70 = 1283U;
static int32_t t14 = -13151;
static volatile int16_t x85 = INT16_MIN;
int16_t x90 = 11;
int16_t x91 = -6;
volatile int64_t x94 = -1LL;
uint16_t x101 = 79U;
int32_t x103 = INT32_MIN;
uint32_t t19 = 56241349U;
int8_t x106 = INT8_MIN;
volatile uint32_t x115 = 508452U;
static uint32_t t25 = 14612384U;
int8_t x135 = 2;
int8_t x142 = -1;
int16_t x143 = 5;
uint16_t x149 = 5452U;
int16_t x151 = INT16_MAX;
static int16_t x171 = -1;
uint8_t x197 = 0U;
static volatile int16_t x200 = 61;
static volatile int32_t x202 = 466318;
int32_t t38 = 13;
int64_t x223 = INT64_MIN;
volatile uint64_t t41 = 762LLU;
volatile int8_t x230 = INT8_MAX;
uint64_t x232 = 42689LLU;
int16_t x246 = INT16_MIN;
int16_t x248 = INT16_MIN;
int64_t x255 = INT64_MAX;
uint64_t x256 = 63124351276LLU;
volatile int64_t x257 = INT64_MIN;
int16_t x258 = INT16_MIN;
uint64_t x267 = 27LLU;
static uint64_t x272 = 1279LLU;
uint32_t x276 = UINT32_MAX;
static int32_t x279 = INT32_MIN;
int32_t t55 = 78425;
uint64_t x302 = 0LLU;
volatile uint64_t t57 = 34293997763LLU;
static uint8_t x306 = 2U;
static uint32_t t58 = 86254112U;
int64_t t59 = -84LL;
int32_t t61 = -3;
int32_t x339 = INT32_MIN;
static int16_t x340 = INT16_MIN;
int64_t t66 = -223LL;
uint32_t x355 = 664063U;
uint32_t x372 = 7729U;
static int8_t x377 = INT8_MAX;
int16_t x384 = INT16_MIN;
int16_t x390 = -15;
int64_t t74 = 148392893LL;
uint64_t x406 = 18997870522LLU;
static volatile uint8_t x407 = 1U;
static uint64_t t78 = 2574912814414LLU;
int32_t x420 = -1;
volatile uint32_t x422 = UINT32_MAX;
int8_t x423 = 12;
int32_t x426 = INT32_MIN;
volatile int64_t x431 = INT64_MIN;
int64_t t84 = -22378415296559281LL;
uint64_t x454 = 314161LLU;
volatile uint64_t t87 = 30705LLU;
static int64_t x464 = -1088582446691LL;
int8_t x467 = -1;
static int32_t x472 = INT32_MAX;
int32_t x475 = 8106029;
int64_t x489 = -105155726037732LL;
volatile uint64_t t92 = 13LLU;
static int64_t x497 = -1LL;
int32_t x498 = -1;
static volatile int32_t x502 = -1648193;
volatile uint16_t x503 = 1168U;
uint64_t t96 = 5080677750658286130LLU;
uint16_t x514 = UINT16_MAX;
uint32_t x526 = 57018U;


void f0(void) {
	int16_t x1 = -1328;
	uint16_t x3 = 15U;
	volatile int64_t t0 = -906581518922493316LL;

	t0 = (x1-(x2|(x3-x4)));

	if (t0 != 3137818LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 30U;
	volatile int32_t x7 = -434;
	uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t1 = 110954LLU;

	t1 = (x5-(x6|(x7-x8)));

	if (t1 != 33184LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = INT8_MIN;
	volatile uint64_t t2 = 81594103966342LLU;

	t2 = (x9-(x10|(x11-x12)));

	if (t2 != 145LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 2971464;
	volatile int16_t x14 = -1;
	int64_t x15 = -376LL;
	int8_t x16 = -1;
	volatile int64_t t3 = -189888993354130LL;

	t3 = (x13-(x14|(x15-x16)));

	if (t3 != 2971465LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int8_t x23 = -3;
	int64_t x24 = -1LL;
	int64_t t4 = -91254450677684LL;

	t4 = (x21-(x22|(x23-x24)));

	if (t4 != 32769LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = 1;
	uint8_t x35 = 22U;
	int32_t t5 = 297701120;

	t5 = (x33-(x34|(x35-x36)));

	if (t5 != -65534) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = INT64_MIN;
	int16_t x38 = 2630;
	uint64_t x39 = UINT64_MAX;
	volatile uint8_t x40 = UINT8_MAX;
	uint64_t t6 = 11LLU;

	t6 = (x37-(x38|(x39-x40)));

	if (t6 != 9223372036854775994LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -16797;
	static volatile uint32_t x42 = 40U;
	static volatile uint32_t x43 = UINT32_MAX;
	volatile uint32_t t7 = 75U;

	t7 = (x41-(x42|(x43-x44)));

	if (t7 != 4294950459U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = 6U;
	static int8_t x47 = -1;
	volatile int32_t t8 = 37951473;

	t8 = (x45-(x46|(x47-x48)));

	if (t8 != -2147483520) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 1111U;
	int16_t x50 = INT16_MIN;
	volatile int8_t x52 = -1;
	volatile uint32_t t9 = 13344670U;

	t9 = (x49-(x50|(x51-x52)));

	if (t9 != 1238U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = -12;
	static uint32_t x58 = UINT32_MAX;
	uint32_t t10 = 448465U;

	t10 = (x57-(x58|(x59-x60)));

	if (t10 != 4294967285U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MIN;
	int32_t x67 = 1;
	int16_t x68 = 1;
	volatile int64_t t11 = 87748832760LL;

	t11 = (x65-(x66|(x67-x68)));

	if (t11 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = 649LL;
	static volatile int32_t x71 = INT32_MIN;
	static int32_t x72 = INT32_MIN;
	int64_t t12 = 1229650551LL;

	t12 = (x69-(x70|(x71-x72)));

	if (t12 != -634LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MAX;
	int64_t t13 = -657LL;

	t13 = (x77-(x78|(x79-x80)));

	if (t13 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = 5;
	volatile uint8_t x82 = UINT8_MAX;
	volatile int8_t x83 = INT8_MAX;
	static int8_t x84 = INT8_MIN;

	t14 = (x81-(x82|(x83-x84)));

	if (t14 != -250) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x86 = 28U;
	int32_t x87 = 0;
	volatile int16_t x88 = INT16_MIN;
	int32_t t15 = 280046536;

	t15 = (x85-(x86|(x87-x88)));

	if (t15 != -65564) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = -1;
	uint8_t x92 = 60U;
	volatile int32_t t16 = 0;

	t16 = (x89-(x90|(x91-x92)));

	if (t16 != 64) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -19536287200LL;
	volatile int64_t x95 = -1LL;
	int8_t x96 = -1;
	int64_t t17 = 10345629137LL;

	t17 = (x93-(x94|(x95-x96)));

	if (t17 != -19536287199LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x97 = 398LLU;
	static volatile int32_t x98 = INT32_MAX;
	int16_t x99 = -1;
	static volatile int8_t x100 = 5;
	volatile uint64_t t18 = 456LLU;

	t18 = (x97-(x98|(x99-x100)));

	if (t18 != 399LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x102 = INT32_MIN;
	volatile uint32_t x104 = 392U;

	t19 = (x101-(x102|(x103-x104)));

	if (t19 != 471U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = INT8_MIN;
	static uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 20253U;
	uint32_t t20 = 6703525U;

	t20 = (x105-(x106|(x107-x108)));

	if (t20 != 4294967198U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = UINT32_MAX;
	uint16_t x114 = UINT16_MAX;
	int64_t x116 = 1LL;
	volatile int64_t t21 = 30865178LL;

	t21 = (x113-(x114|(x115-x116)));

	if (t21 != 4294443008LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x117 = UINT8_MAX;
	static uint8_t x118 = UINT8_MAX;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t22 = 31578;

	t22 = (x117-(x118|(x119-x120)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = UINT16_MAX;
	uint16_t x123 = UINT16_MAX;
	uint8_t x124 = 12U;
	int32_t t23 = -951261;

	t23 = (x121-(x122|(x123-x124)));

	if (t23 != -65663) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = 7;
	static int64_t x126 = INT64_MIN;
	uint32_t x127 = 11771U;
	int32_t x128 = -1;
	volatile int64_t t24 = 21783976720220049LL;

	t24 = (x125-(x126|(x127-x128)));

	if (t24 != 9223372036854764043LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 16;
	int32_t x130 = -1;
	int8_t x131 = INT8_MIN;
	uint32_t x132 = 4U;

	t25 = (x129-(x130|(x131-x132)));

	if (t25 != 17U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 79732635LL;
	uint64_t x134 = 21547414336815LLU;
	int16_t x136 = INT16_MIN;
	uint64_t t26 = 3868229702324726156LLU;

	t26 = (x133-(x134|(x135-x136)));

	if (t26 != 18446722526374914668LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = 4U;
	int8_t x144 = INT8_MIN;
	int32_t t27 = -189;

	t27 = (x141-(x142|(x143-x144)));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	static volatile int64_t x148 = INT64_MIN;
	int64_t t28 = -135098373593LL;

	t28 = (x145-(x146|(x147-x148)));

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x150 = UINT8_MAX;
	int64_t x152 = 1379830695689137LL;
	int64_t t29 = 22630347355412774LL;

	t29 = (x149-(x150|(x151-x152)));

	if (t29 != 1379830695661645LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -1LL;
	volatile int32_t x162 = 3575047;
	volatile int32_t x163 = -1;
	static int64_t x164 = -1LL;
	volatile int64_t t30 = -45030545690255LL;

	t30 = (x161-(x162|(x163-x164)));

	if (t30 != -3575048LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = 7LL;
	int64_t x170 = INT64_MIN;
	uint32_t x172 = 24807U;
	static int64_t t31 = 8876LL;

	t31 = (x169-(x170|(x171-x172)));

	if (t31 != 9223372032559833327LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x177 = 503LLU;
	int16_t x178 = INT16_MIN;
	uint16_t x179 = 3U;
	uint32_t x180 = UINT32_MAX;
	volatile uint64_t t32 = 16283309949LLU;

	t32 = (x177-(x178|(x179-x180)));

	if (t32 != 18446744069414617587LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x181 = 134U;
	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = -1;
	volatile uint32_t t33 = 3366U;

	t33 = (x181-(x182|(x183-x184)));

	if (t33 != 4294967175U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x185 = 12465432100LLU;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 4LLU;
	uint32_t x188 = UINT32_MAX;
	volatile uint64_t t34 = 52092637111514916LLU;

	t34 = (x185-(x186|(x187-x188)));

	if (t34 != 16760399391LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x189 = INT64_MAX;
	uint8_t x190 = 4U;
	int32_t x191 = INT32_MAX;
	int32_t x192 = INT32_MAX;
	int64_t t35 = -986546288998LL;

	t35 = (x189-(x190|(x191-x192)));

	if (t35 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x198 = 60374060727077LLU;
	int16_t x199 = INT16_MAX;
	uint64_t t36 = 271819LLU;

	t36 = (x197-(x198|(x199-x200)));

	if (t36 != 18446683699648823321LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x201 = UINT32_MAX;
	uint16_t x203 = 245U;
	volatile uint64_t x204 = 61LLU;
	static volatile uint64_t t37 = 19LLU;

	t37 = (x201-(x202|(x203-x204)));

	if (t37 != 4294500929LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x205 = -1;
	volatile int32_t x206 = -143840879;
	int8_t x207 = INT8_MIN;
	static uint16_t x208 = 228U;

	t38 = (x205-(x206|(x207-x208)));

	if (t38 != 98) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x209 = 9LLU;
	volatile int32_t x210 = INT32_MAX;
	uint8_t x211 = 42U;
	static volatile int16_t x212 = INT16_MIN;
	static volatile uint64_t t39 = 5LLU;

	t39 = (x209-(x210|(x211-x212)));

	if (t39 != 18446744071562067978LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = 9;
	int16_t x215 = -1;
	static uint32_t x216 = 9386U;
	volatile uint32_t t40 = 9018173U;

	t40 = (x213-(x214|(x215-x216)));

	if (t40 != 4294943907U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x221 = INT8_MIN;
	uint64_t x222 = UINT64_MAX;
	volatile int8_t x224 = INT8_MIN;

	t41 = (x221-(x222|(x223-x224)));

	if (t41 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = INT32_MAX;
	volatile int64_t x231 = -198581318280953LL;
	uint64_t t42 = 59486LLU;

	t42 = (x229-(x230|(x231-x232)));

	if (t42 != 198583465807232LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x233 = 1U;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = -1;
	int8_t x236 = 1;
	volatile uint64_t t43 = 1607653LLU;

	t43 = (x233-(x234|(x235-x236)));

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x237 = 29165495067LLU;
	volatile int32_t x238 = INT32_MIN;
	volatile int16_t x239 = INT16_MIN;
	volatile int16_t x240 = -1;
	uint64_t t44 = 923999LLU;

	t44 = (x237-(x238|(x239-x240)));

	if (t44 != 29165527834LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint32_t x247 = UINT32_MAX;
	uint32_t t45 = 123U;

	t45 = (x245-(x246|(x247-x248)));

	if (t45 != 256U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = -1;
	int16_t x254 = INT16_MAX;
	volatile uint64_t t46 = 14845490154LLU;

	t46 = (x253-(x254|(x255-x256)));

	if (t46 != 9223372099979116544LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x259 = 1;
	static volatile uint64_t x260 = 17LLU;
	static volatile uint64_t t47 = 0LLU;

	t47 = (x257-(x258|(x259-x260)));

	if (t47 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x261 = 1LLU;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -1;
	int32_t x264 = INT32_MAX;
	volatile uint64_t t48 = 654818568LLU;

	t48 = (x261-(x262|(x263-x264)));

	if (t48 != 129LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = INT16_MAX;
	volatile int16_t x266 = INT16_MAX;
	volatile uint16_t x268 = 595U;
	uint64_t t49 = 977534695071LLU;

	t49 = (x265-(x266|(x267-x268)));

	if (t49 != 32768LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = UINT32_MAX;
	static int8_t x271 = INT8_MAX;
	static uint64_t t50 = 59913389534621125LLU;

	t50 = (x269-(x270|(x271-x272)));

	if (t50 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x273 = 23LLU;
	int16_t x274 = INT16_MAX;
	int8_t x275 = -1;
	volatile uint64_t t51 = 1651749624LLU;

	t51 = (x273-(x274|(x275-x276)));

	if (t51 != 18446744073709518872LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	uint64_t x280 = 92LLU;
	volatile uint64_t t52 = 29796LLU;

	t52 = (x277-(x278|(x279-x280)));

	if (t52 != 2147483521LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x285 = -75;
	static int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	volatile uint64_t x288 = 268839726586013161LLU;
	uint64_t t53 = 16477505878575LLU;

	t53 = (x285-(x286|(x287-x288)));

	if (t53 != 30LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x289 = 35U;
	static uint64_t x290 = 6419234949872LLU;
	int32_t x291 = -1;
	int32_t x292 = INT32_MIN;
	uint64_t t54 = 695997338584775047LLU;

	t54 = (x289-(x290|(x291-x292)));

	if (t54 != 18446737652733444132LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x293 = 26U;
	int8_t x294 = -1;
	volatile int32_t x295 = INT32_MIN;
	static int32_t x296 = -1;

	t55 = (x293-(x294|(x295-x296)));

	if (t55 != 27) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = 53441562LL;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 256053358406313274LLU;
	int8_t x300 = 40;
	volatile uint64_t t56 = 83551142LLU;

	t56 = (x297-(x298|(x299-x300)));

	if (t56 != 1138020104LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = 97;
	uint64_t x303 = 3037LLU;
	uint64_t x304 = 237370025433476712LLU;

	t57 = (x301-(x302|(x303-x304)));

	if (t57 != 237370025433473772LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = 9933U;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = -1023956;

	t58 = (x305-(x306|(x307-x308)));

	if (t58 != 4293953018U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	int8_t x312 = 31;

	t59 = (x309-(x310|(x311-x312)));

	if (t59 != -96LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x317 = 5U;
	static int16_t x318 = INT16_MAX;
	volatile uint32_t x319 = 551U;
	static uint64_t x320 = 18529LLU;
	static volatile uint64_t t60 = 1164016LLU;

	t60 = (x317-(x318|(x319-x320)));

	if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x321 = 2156;
	static uint16_t x322 = 595U;
	int32_t x323 = -123993284;
	uint8_t x324 = 43U;

	t61 = (x321-(x322|(x323-x324)));

	if (t61 != 123995417) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = -4980;
	uint32_t x326 = 696U;
	volatile uint8_t x327 = 0U;
	static volatile int8_t x328 = 1;
	uint32_t t62 = 504404960U;

	t62 = (x325-(x326|(x327-x328)));

	if (t62 != 4294962317U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	int64_t x334 = -9185016524730931LL;
	int8_t x335 = -1;
	int32_t x336 = INT32_MAX;
	static volatile int64_t t63 = 3824479124582226625LL;

	t63 = (x333-(x334|(x335-x336)));

	if (t63 != 1328968498LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x337 = INT32_MIN;
	int16_t x338 = 8537;
	int32_t t64 = -22648;

	t64 = (x337-(x338|(x339-x340)));

	if (t64 != -41305) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x341 = -388719LL;
	volatile uint64_t x342 = UINT64_MAX;
	int64_t x343 = -1LL;
	uint64_t x344 = UINT64_MAX;
	uint64_t t65 = 76081051220982LLU;

	t65 = (x341-(x342|(x343-x344)));

	if (t65 != 18446744073709162898LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x349 = 85;
	int8_t x350 = -46;
	static int64_t x351 = INT64_MIN;
	uint32_t x352 = 0U;

	t66 = (x349-(x350|(x351-x352)));

	if (t66 != 131LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x353 = 842U;
	int16_t x354 = INT16_MIN;
	int32_t x356 = INT32_MIN;
	uint32_t t67 = 10U;

	t67 = (x353-(x354|(x355-x356)));

	if (t67 != 24907U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x361 = 1U;
	int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MAX;
	volatile uint16_t x364 = UINT16_MAX;
	volatile int32_t t68 = -4429;

	t68 = (x361-(x362|(x363-x364)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = INT32_MAX;
	volatile int16_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	volatile uint32_t t69 = 5057U;

	t69 = (x369-(x370|(x371-x372)));

	if (t69 != 2147483648U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x373 = 724700620794862LLU;
	uint8_t x374 = 2U;
	uint32_t x375 = 671572U;
	uint32_t x376 = UINT32_MAX;
	uint64_t t70 = 454899170911445LLU;

	t70 = (x373-(x374|(x375-x376)));

	if (t70 != 724700620123287LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x378 = UINT64_MAX;
	int16_t x379 = -4398;
	static int8_t x380 = -1;
	uint64_t t71 = 1229979LLU;

	t71 = (x377-(x378|(x379-x380)));

	if (t71 != 128LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x381 = INT16_MAX;
	uint32_t x382 = UINT32_MAX;
	volatile uint8_t x383 = UINT8_MAX;
	volatile uint32_t t72 = 2851U;

	t72 = (x381-(x382|(x383-x384)));

	if (t72 != 32768U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x386 = 106U;
	int8_t x387 = 52;
	int64_t x388 = -89830LL;
	volatile int64_t t73 = -15529982742127659LL;

	t73 = (x385-(x386|(x387-x388)));

	if (t73 != -122746LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = 329261304;
	int64_t x391 = INT64_MAX;
	int64_t x392 = INT64_MAX;

	t74 = (x389-(x390|(x391-x392)));

	if (t74 != 329261319LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x397 = INT32_MIN;
	uint8_t x398 = 2U;
	int8_t x399 = INT8_MAX;
	uint32_t x400 = 31103520U;
	volatile uint32_t t75 = 1625038423U;

	t75 = (x397-(x398|(x399-x400)));

	if (t75 != 2178587041U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = INT32_MAX;
	uint64_t x402 = UINT64_MAX;
	volatile int8_t x403 = -9;
	int8_t x404 = 0;
	uint64_t t76 = 104890956LLU;

	t76 = (x401-(x402|(x403-x404)));

	if (t76 != 2147483648LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x405 = UINT64_MAX;
	int32_t x408 = -95;
	volatile uint64_t t77 = 836318LLU;

	t77 = (x405-(x406|(x407-x408)));

	if (t77 != 18446744054711681029LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x409 = INT8_MIN;
	static int16_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	volatile uint32_t x412 = 105U;

	t78 = (x409-(x410|(x411-x412)));

	if (t78 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x413 = 18U;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = 454552113LL;
	uint32_t x416 = 74U;
	int64_t t79 = 64LL;

	t79 = (x413-(x414|(x415-x416)));

	if (t79 != -4294967277LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x417 = 59U;
	static int64_t x418 = -1LL;
	int32_t x419 = -1;
	int64_t t80 = -1402886LL;

	t80 = (x417-(x418|(x419-x420)));

	if (t80 != 60LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x421 = 4778LL;
	int32_t x424 = 123195074;
	static int64_t t81 = 8419997773050348LL;

	t81 = (x421-(x422|(x423-x424)));

	if (t81 != -4294962517LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = 40285060;
	int16_t x427 = -1;
	static int64_t x428 = -1LL;
	static int64_t t82 = -11820785LL;

	t82 = (x425-(x426|(x427-x428)));

	if (t82 != 2187768708LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x429 = -1LL;
	static uint64_t x430 = UINT64_MAX;
	int32_t x432 = -1;
	static uint64_t t83 = 111772221209199513LLU;

	t83 = (x429-(x430|(x431-x432)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x437 = INT8_MIN;
	uint16_t x438 = UINT16_MAX;
	uint32_t x439 = 253683584U;
	int64_t x440 = 414917627278LL;

	t84 = (x437-(x438|(x439-x440)));

	if (t84 != 414663901057LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x445 = 8;
	int16_t x446 = INT16_MAX;
	int8_t x447 = INT8_MAX;
	uint8_t x448 = 3U;
	int32_t t85 = 6227;

	t85 = (x445-(x446|(x447-x448)));

	if (t85 != -32759) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x449 = 10065;
	uint64_t x450 = 24519LLU;
	static int64_t x451 = -1LL;
	uint32_t x452 = 7215U;
	uint64_t t86 = 62752066710962LLU;

	t86 = (x449-(x450|(x451-x452)));

	if (t86 != 10106LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x453 = UINT16_MAX;
	int64_t x455 = -1LL;
	int32_t x456 = INT32_MIN;

	t87 = (x453-(x454|(x455-x456)));

	if (t87 != 18446744071562133504LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x461 = UINT16_MAX;
	int16_t x462 = -945;
	static int16_t x463 = 893;
	int64_t t88 = -1685460LL;

	t88 = (x461-(x462|(x463-x464)));

	if (t88 != 66064LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x465 = -1;
	uint64_t x466 = UINT64_MAX;
	volatile int16_t x468 = 8035;
	volatile uint64_t t89 = 16498725136413LLU;

	t89 = (x465-(x466|(x467-x468)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = INT32_MIN;
	int16_t x470 = INT16_MIN;
	uint64_t x471 = 4134497322LLU;
	uint64_t t90 = 232LLU;

	t90 = (x469-(x470|(x471-x472)));

	if (t90 != 18446744071562073045LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MAX;
	volatile uint64_t x476 = 1532LLU;
	volatile uint64_t t91 = 50936121277649737LLU;

	t91 = (x473-(x474|(x475-x476)));

	if (t91 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x490 = UINT64_MAX;
	int8_t x491 = 1;
	volatile int32_t x492 = 5479;

	t92 = (x489-(x490|(x491-x492)));

	if (t92 != 18446638917983513885LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x499 = 1U;
	static int64_t x500 = 11580282538818526LL;
	static volatile int64_t t93 = -19264LL;

	t93 = (x497-(x498|(x499-x500)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x501 = 2963171LL;
	volatile int64_t x504 = -1LL;
	volatile int64_t t94 = 72020485284298LL;

	t94 = (x501-(x502|(x503-x504)));

	if (t94 != 4610340LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x505 = -1;
	int8_t x506 = INT8_MIN;
	static int32_t x507 = 1426;
	int16_t x508 = -1;
	static volatile int32_t t95 = -18;

	t95 = (x505-(x506|(x507-x508)));

	if (t95 != 108) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x509 = 6688837674971481LLU;
	uint8_t x510 = 13U;
	static int16_t x511 = INT16_MIN;
	int32_t x512 = INT32_MIN;

	t96 = (x509-(x510|(x511-x512)));

	if (t96 != 6688835527520588LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x513 = 4U;
	int16_t x515 = INT16_MAX;
	int32_t x516 = -1;
	volatile int32_t t97 = 0;

	t97 = (x513-(x514|(x515-x516)));

	if (t97 != -65531) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = 6657;
	int16_t x518 = -1;
	volatile uint16_t x519 = 449U;
	int8_t x520 = -1;
	int32_t t98 = 260876854;

	t98 = (x517-(x518|(x519-x520)));

	if (t98 != 6658) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x525 = -268;
	int16_t x527 = -185;
	uint32_t x528 = UINT32_MAX;
	volatile uint32_t t99 = 58U;

	t99 = (x525-(x526|(x527-x528)));

	if (t99 != 4294967034U) { NG(); } else { ; }
	
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

