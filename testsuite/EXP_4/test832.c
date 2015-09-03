#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = -5;
volatile int64_t t0 = -13671201578582LL;
volatile int32_t t2 = -24937056;
static uint16_t x14 = 3030U;
static uint64_t x22 = UINT64_MAX;
volatile uint32_t x23 = 55031475U;
static uint64_t x28 = 246406741001116193LLU;
volatile uint64_t t6 = 80771882265784LLU;
volatile int32_t t7 = -37;
volatile int64_t x40 = INT64_MIN;
uint64_t x43 = UINT64_MAX;
static uint64_t t10 = 269934542166528036LLU;
uint64_t x47 = 160883862LLU;
int16_t x49 = -3576;
static int32_t x53 = -17574;
uint64_t t13 = 7578806LLU;
volatile int32_t x58 = INT32_MIN;
uint8_t x60 = 1U;
uint16_t x62 = UINT16_MAX;
volatile int32_t x63 = -1;
int64_t x64 = INT64_MIN;
volatile int64_t t15 = 3LL;
int32_t x69 = -8;
int32_t x72 = INT32_MAX;
int64_t x80 = -8797537508196097LL;
int64_t t19 = -787LL;
volatile uint64_t t22 = 6312741LLU;
uint64_t x94 = UINT64_MAX;
int8_t x102 = INT8_MIN;
uint16_t x109 = 3U;
volatile uint8_t x111 = UINT8_MAX;
volatile int8_t x114 = INT8_MIN;
uint16_t x115 = 998U;
uint32_t t28 = 37595U;
int8_t x122 = -1;
uint32_t x126 = 13577344U;
static volatile uint32_t t31 = 4820304U;
int16_t x130 = INT16_MIN;
volatile uint64_t x134 = 82300292359859LLU;
volatile int8_t x138 = 25;
int64_t x141 = INT64_MIN;
uint32_t x148 = 7U;
int8_t x152 = -1;
int32_t x153 = -1;
int32_t t39 = -658779;
static uint8_t x174 = 6U;
static volatile int32_t t43 = -206755;
static volatile int8_t x177 = 1;
uint8_t x183 = UINT8_MAX;
volatile int64_t t45 = -3942544653973LL;
uint64_t x189 = 2614361696142036581LLU;
uint16_t x192 = 2969U;
uint32_t x194 = 3U;
volatile int16_t x204 = INT16_MIN;
uint16_t x205 = 1U;
int16_t x208 = -1;
volatile int16_t x215 = INT16_MAX;
static uint8_t x216 = 1U;
volatile uint8_t x222 = 56U;
uint64_t x235 = 19818196848874070LLU;
static int32_t t59 = 653553;
int8_t x245 = INT8_MAX;
int32_t t60 = 2037;
volatile int64_t x256 = INT64_MIN;
volatile int32_t t65 = 3;
int64_t x274 = -498LL;
static volatile int64_t x290 = INT64_MAX;
int16_t x292 = -1;
int8_t x295 = INT8_MAX;
volatile uint64_t x306 = UINT64_MAX;
uint32_t x317 = UINT32_MAX;
static int16_t x320 = INT16_MIN;
int64_t x321 = -349LL;
static int64_t t80 = 239842002329007LL;
volatile int32_t x337 = 16;
int32_t x338 = 1659;
volatile uint64_t t84 = 2LLU;
int16_t x346 = 12696;
int32_t x353 = -1;
volatile uint32_t t87 = 13743439U;
uint32_t t88 = 744U;
int64_t x362 = INT64_MAX;
uint64_t x366 = 2LLU;
volatile int8_t x370 = -1;
int8_t x374 = INT8_MIN;
static uint64_t x380 = UINT64_MAX;
static uint64_t t94 = 50541LLU;
int8_t x387 = INT8_MIN;
uint8_t x390 = 62U;
volatile uint16_t x392 = 1115U;
volatile int32_t t97 = -221;
static volatile int16_t x398 = -5787;
static int16_t x402 = INT16_MIN;
int64_t x403 = INT64_MIN;
static int32_t x404 = -989835;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint32_t x2 = 534152642U;
	int32_t x3 = INT32_MIN;

	t0 = (x1^(x2|(x3%x4)));

	if (t0 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 57;
	static volatile uint16_t x6 = UINT16_MAX;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = INT64_MIN;
	static volatile uint64_t t1 = 158425055497419807LLU;

	t1 = (x5^(x6|(x7%x8)));

	if (t1 != 9223372036854775750LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 15107;
	int32_t x10 = INT32_MIN;
	static int16_t x11 = -1;
	int32_t x12 = INT32_MIN;

	t2 = (x9^(x10|(x11%x12)));

	if (t2 != -15108) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	static int8_t x15 = INT8_MIN;
	static volatile int16_t x16 = 6325;
	static volatile uint64_t t3 = 4423073261683833LLU;

	t3 = (x13^(x14|(x15%x16)));

	if (t3 != 41LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 5;
	int64_t x18 = 60865739LL;
	int64_t x19 = 1LL;
	uint16_t x20 = 326U;
	volatile int64_t t4 = 14756LL;

	t4 = (x17^(x18|(x19%x20)));

	if (t4 != 60865742LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile uint8_t x24 = 9U;
	volatile uint64_t t5 = 145749LLU;

	t5 = (x21^(x22|(x23%x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	int16_t x27 = -1;

	t6 = (x25^(x26|(x27%x28)));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 25U;
	static int8_t x30 = -1;
	int8_t x31 = -1;
	static uint16_t x32 = 9U;

	t7 = (x29^(x30|(x31%x32)));

	if (t7 != -26) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 116883294358506481LLU;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 22685U;
	int64_t x36 = 9798756315LL;
	uint64_t t8 = 757564846LLU;

	t8 = (x33^(x34|(x35%x36)));

	if (t8 != 116883294358500366LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	static uint32_t x38 = UINT32_MAX;
	volatile int8_t x39 = INT8_MIN;
	int64_t t9 = -17412722960609LL;

	t9 = (x37^(x38|(x39%x40)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile int16_t x42 = INT16_MIN;
	int32_t x44 = 646650;

	t10 = (x41^(x42|(x43%x44)));

	if (t10 != 18446744073709530422LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static int8_t x46 = INT8_MIN;
	static uint64_t x48 = UINT64_MAX;
	static uint64_t t11 = 5959805LLU;

	t11 = (x45^(x46|(x47%x48)));

	if (t11 != 105LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 448046423U;
	uint16_t x51 = 1U;
	int64_t x52 = -3575638192927573727LL;
	volatile int64_t t12 = 0LL;

	t12 = (x49^(x50|(x51%x52)));

	if (t12 != -448047265LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x54 = INT8_MIN;
	uint64_t x55 = 14603251273761736LLU;
	int16_t x56 = -1;

	t13 = (x53^(x54|(x55%x56)));

	if (t13 != 17554LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 7U;
	uint64_t x59 = 22095271093LLU;
	volatile uint64_t t14 = 653776LLU;

	t14 = (x57^(x58|(x59%x60)));

	if (t14 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;

	t15 = (x61^(x62|(x63%x64)));

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = -1;
	static int32_t x67 = -7;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = 3488764U;

	t16 = (x65^(x66|(x67%x68)));

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 14;
	int8_t x71 = INT8_MIN;
	int32_t t17 = -1;

	t17 = (x69^(x70|(x71%x72)));

	if (t17 != 118) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 11U;
	static uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 3U;
	static uint64_t x76 = 2360LLU;
	uint64_t t18 = 33851938729LLU;

	t18 = (x73^(x74|(x75%x76)));

	if (t18 != 244LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile int16_t x78 = 1524;
	int64_t x79 = INT64_MIN;

	t19 = (x77^(x78|(x79%x80)));

	if (t19 != 3552728265289212LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	volatile uint8_t x82 = 1U;
	int64_t x83 = 1838798LL;
	volatile int32_t x84 = INT32_MAX;
	volatile int64_t t20 = 1480095935LL;

	t20 = (x81^(x82|(x83%x84)));

	if (t20 != 1838768LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MAX;
	int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	volatile int64_t t21 = -3253355LL;

	t21 = (x85^(x86|(x87%x88)));

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 96LL;
	uint64_t x90 = UINT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	int64_t x92 = -1LL;

	t22 = (x89^(x90|(x91%x92)));

	if (t22 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	uint32_t x95 = UINT32_MAX;
	uint8_t x96 = 20U;
	volatile uint64_t t23 = 1515940LLU;

	t23 = (x93^(x94|(x95%x96)));

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 1535605173U;
	volatile int8_t x100 = -13;
	int64_t t24 = 80LL;

	t24 = (x97^(x98|(x99%x100)));

	if (t24 != -9223372032559808587LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = UINT64_MAX;
	int64_t x103 = INT64_MAX;
	volatile uint32_t x104 = 2053521578U;
	static volatile uint64_t t25 = 20804334362742801LLU;

	t25 = (x101^(x102|(x103%x104)));

	if (t25 != 72LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 405654U;
	uint8_t x106 = 10U;
	uint64_t x107 = 8917947857944563LLU;
	uint16_t x108 = 2U;
	static volatile uint64_t t26 = 703294LLU;

	t26 = (x105^(x106|(x107%x108)));

	if (t26 != 405661LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x110 = -1;
	uint32_t x112 = UINT32_MAX;
	uint32_t t27 = 2U;

	t27 = (x109^(x110|(x111%x112)));

	if (t27 != 4294967292U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 0U;
	int16_t x116 = -1;

	t28 = (x113^(x114|(x115%x116)));

	if (t28 != 4294967168U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 29U;
	uint64_t x118 = 496LLU;
	static int8_t x119 = 3;
	int32_t x120 = 1021453161;
	volatile uint64_t t29 = 0LLU;

	t29 = (x117^(x118|(x119%x120)));

	if (t29 != 494LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MAX;
	static volatile int32_t t30 = -493173021;

	t30 = (x121^(x122|(x123%x124)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -15727;
	static int8_t x127 = INT8_MAX;
	static int32_t x128 = INT32_MIN;

	t31 = (x125^(x126|(x127%x128)));

	if (t31 != 4281396846U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int16_t x131 = 1651;
	int64_t x132 = 114114LL;
	volatile int64_t t32 = -3982974096398LL;

	t32 = (x129^(x130|(x131%x132)));

	if (t32 != 31116LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	static int8_t x135 = INT8_MIN;
	int8_t x136 = 15;
	volatile uint64_t t33 = 44LLU;

	t33 = (x133^(x134|(x135%x136)));

	if (t33 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 281U;
	int8_t x139 = INT8_MAX;
	volatile int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = -1428115161348LL;

	t34 = (x137^(x138|(x139%x140)));

	if (t34 != 358LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 192;
	int32_t x143 = -1;
	int32_t x144 = -1;
	volatile int64_t t35 = 1961319633LL;

	t35 = (x141^(x142|(x143%x144)));

	if (t35 != -9223372036854775616LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 105858015639012661LLU;
	static uint8_t x146 = 0U;
	volatile uint32_t x147 = UINT32_MAX;
	volatile uint64_t t36 = 45260993807LLU;

	t36 = (x145^(x146|(x147%x148)));

	if (t36 != 105858015639012662LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	static volatile int8_t x151 = INT8_MIN;
	int32_t t37 = 18483;

	t37 = (x149^(x150|(x151%x152)));

	if (t37 != 2147483520) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x154 = 14988U;
	static int32_t x155 = INT32_MAX;
	uint16_t x156 = 629U;
	int32_t t38 = -646;

	t38 = (x153^(x154|(x155%x156)));

	if (t38 != -15261) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = 307;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	static uint8_t x160 = 17U;

	t39 = (x157^(x158|(x159%x160)));

	if (t39 != -316) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 4293U;
	int8_t x162 = INT8_MIN;
	int64_t x163 = -1LL;
	static volatile int8_t x164 = -60;
	volatile int64_t t40 = -43657LL;

	t40 = (x161^(x162|(x163%x164)));

	if (t40 != -4294LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	uint32_t x166 = 19803398U;
	static uint64_t x167 = 229359LLU;
	uint8_t x168 = 58U;
	uint64_t t41 = 1910243176196LLU;

	t41 = (x165^(x166|(x167%x168)));

	if (t41 != 9223372036834972384LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = 2041;
	static volatile int8_t x170 = INT8_MIN;
	volatile int8_t x171 = -1;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 490233324;

	t42 = (x169^(x170|(x171%x172)));

	if (t42 != -2042) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	static volatile int16_t x175 = INT16_MIN;
	uint16_t x176 = 9U;

	t43 = (x173^(x174|(x175%x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	uint32_t x179 = 172682355U;
	uint16_t x180 = UINT16_MAX;
	static volatile int64_t t44 = -7LL;

	t44 = (x177^(x178|(x179%x180)));

	if (t44 != -9223372036854712644LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -30613;
	int64_t x182 = INT64_MAX;
	uint8_t x184 = 5U;

	t45 = (x181^(x182|(x183%x184)));

	if (t45 != -9223372036854745196LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint16_t x186 = UINT16_MAX;
	volatile int64_t x187 = INT64_MAX;
	int16_t x188 = 33;
	int64_t t46 = -948570694571198LL;

	t46 = (x185^(x186|(x187%x188)));

	if (t46 != 4294901760LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 7685595555763LLU;
	int32_t x191 = -1;
	volatile uint64_t t47 = 23407518LLU;

	t47 = (x189^(x190|(x191%x192)));

	if (t47 != 15832382377567515034LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int8_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = 117243LL;

	t48 = (x193^(x194|(x195%x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 4186U;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -1;
	int16_t x200 = INT16_MIN;
	uint32_t t49 = 685U;

	t49 = (x197^(x198|(x199%x200)));

	if (t49 != 4294963109U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 486U;
	static int8_t x202 = INT8_MAX;
	int32_t x203 = -7664;
	volatile int32_t t50 = 236;

	t50 = (x201^(x202|(x203%x204)));

	if (t50 != -7271) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = INT32_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	static uint32_t t51 = 3629U;

	t51 = (x205^(x206|(x207%x208)));

	if (t51 != 2147483649U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 0LL;
	uint16_t x210 = 7945U;
	uint32_t x211 = 822533U;
	int32_t x212 = 80832;
	volatile int64_t t52 = -3940467LL;

	t52 = (x209^(x210|(x211%x212)));

	if (t52 != 16269LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 0;
	int16_t x214 = 1184;
	volatile int32_t t53 = -3596989;

	t53 = (x213^(x214|(x215%x216)));

	if (t53 != 1184) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = -57445708578LL;

	t54 = (x217^(x218|(x219%x220)));

	if (t54 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static int8_t x223 = -1;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 60443225;

	t55 = (x221^(x222|(x223%x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 251050669378LL;
	static int32_t x226 = INT32_MIN;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	int64_t t56 = 31LL;

	t56 = (x225^(x226|(x227%x228)));

	if (t56 != -251050669374LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = 43377;
	volatile uint8_t x234 = 10U;
	uint32_t x236 = UINT32_MAX;
	static volatile uint64_t t57 = 117LLU;

	t57 = (x233^(x234|(x235%x236)));

	if (t57 != 2274022298LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MAX;
	uint32_t x239 = 56131787U;
	volatile int64_t x240 = 1374039LL;
	volatile int64_t t58 = -1928029068393109721LL;

	t58 = (x237^(x238|(x239%x240)));

	if (t58 != -2147450881LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = 0U;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = -1;
	uint16_t x244 = 10U;

	t59 = (x241^(x242|(x243%x244)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x246 = 40;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = UINT16_MAX;

	t60 = (x245^(x246|(x247%x248)));

	if (t60 != -41) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = 12U;
	uint16_t x250 = 0U;
	int64_t x251 = -1156LL;
	static int16_t x252 = 15;
	static volatile int64_t t61 = 6289841186565LL;

	t61 = (x249^(x250|(x251%x252)));

	if (t61 != -13LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;
	uint32_t x255 = 250U;
	int64_t t62 = 1683709161LL;

	t62 = (x253^(x254|(x255%x256)));

	if (t62 != 2147483397LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 81U;
	static int16_t x258 = 285;
	volatile uint64_t x259 = 7672041770912124LLU;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t63 = 670LLU;

	t63 = (x257^(x258|(x259%x260)));

	if (t63 != 7672041770912044LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x261 = 63U;
	volatile uint16_t x262 = 94U;
	int64_t x263 = -253LL;
	uint32_t x264 = 68423U;
	int64_t t64 = 1LL;

	t64 = (x261^(x262|(x263%x264)));

	if (t64 != -160LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	uint8_t x268 = 1U;

	t65 = (x265^(x266|(x267%x268)));

	if (t65 != 32640) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = 1;
	int16_t x270 = -1;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = -10827;
	volatile int32_t t66 = 135174308;

	t66 = (x269^(x270|(x271%x272)));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	volatile int64_t x275 = -1716656170879LL;
	int32_t x276 = INT32_MIN;
	static volatile int64_t t67 = -2436945769LL;

	t67 = (x273^(x274|(x275%x276)));

	if (t67 != 368LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -504;
	int64_t x278 = -1LL;
	int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MAX;
	volatile int64_t t68 = 478643543629LL;

	t68 = (x277^(x278|(x279%x280)));

	if (t68 != 503LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MIN;
	volatile int16_t x282 = INT16_MAX;
	uint64_t x283 = 1232584277388LLU;
	int32_t x284 = INT32_MAX;
	uint64_t t69 = 698521091198799068LLU;

	t69 = (x281^(x282|(x283%x284)));

	if (t69 != 18446744071633436671LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = INT16_MIN;
	int8_t x286 = -1;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -58709745LL;
	static int64_t t70 = 24843118LL;

	t70 = (x285^(x286|(x287%x288)));

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = INT64_MAX;
	int8_t x291 = -1;
	int64_t t71 = -1575010696LL;

	t71 = (x289^(x290|(x291%x292)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	int32_t x296 = -4020;
	volatile int64_t t72 = 1LL;

	t72 = (x293^(x294|(x295%x296)));

	if (t72 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	volatile int16_t x300 = INT16_MIN;
	int32_t t73 = -5;

	t73 = (x297^(x298|(x299%x300)));

	if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	static uint16_t x303 = 133U;
	int32_t x304 = -1;
	int64_t t74 = 21150690893LL;

	t74 = (x301^(x302|(x303%x304)));

	if (t74 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = 9;
	uint64_t x307 = 0LLU;
	static volatile int8_t x308 = -1;
	volatile uint64_t t75 = 12135LLU;

	t75 = (x305^(x306|(x307%x308)));

	if (t75 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	uint8_t x310 = UINT8_MAX;
	volatile int8_t x311 = -1;
	int32_t x312 = -170;
	int64_t t76 = INT64_MAX;

	t76 = (x309^(x310|(x311%x312)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -59;
	int16_t x314 = -116;
	int64_t x315 = -421340996LL;
	static uint64_t x316 = 84LLU;
	uint64_t t77 = 476LLU;

	t77 = (x313^(x314|(x315%x316)));

	if (t77 != 25LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x318 = INT32_MIN;
	volatile int8_t x319 = -1;
	volatile uint32_t t78 = 233324925U;

	t78 = (x317^(x318|(x319%x320)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x322 = -1;
	volatile int16_t x323 = INT16_MIN;
	uint8_t x324 = 20U;
	int64_t t79 = 2826474229763759LL;

	t79 = (x321^(x322|(x323%x324)));

	if (t79 != 348LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;

	t80 = (x325^(x326|(x327%x328)));

	if (t80 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = -40;
	uint8_t x330 = 18U;
	int16_t x331 = INT16_MAX;
	int32_t x332 = 427108456;
	volatile int32_t t81 = 1126;

	t81 = (x329^(x330|(x331%x332)));

	if (t81 != -32729) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int64_t x334 = -1LL;
	uint8_t x335 = UINT8_MAX;
	static int64_t x336 = INT64_MIN;
	volatile uint64_t t82 = 161366381104LLU;

	t82 = (x333^(x334|(x335%x336)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x339 = UINT8_MAX;
	static volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t83 = -168731347;

	t83 = (x337^(x338|(x339%x340)));

	if (t83 != 1775) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x341 = 93U;
	int64_t x342 = -213425201381229LL;
	uint64_t x343 = 473541531059109410LLU;
	int8_t x344 = INT8_MAX;

	t84 = (x341^(x342|(x343%x344)));

	if (t84 != 18446530648508170474LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = -1LL;
	volatile uint64_t x347 = UINT64_MAX;
	static int16_t x348 = -1;
	volatile uint64_t t85 = 743623361897439LLU;

	t85 = (x345^(x346|(x347%x348)));

	if (t85 != 18446744073709538919LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = UINT32_MAX;
	static int64_t x350 = 163848042804139LL;
	static uint64_t x351 = 34535099389099244LLU;
	int32_t x352 = -10580;
	uint64_t t86 = 1LLU;

	t86 = (x349^(x350|(x351%x352)));

	if (t86 != 34539495709736976LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MIN;
	static volatile int16_t x356 = -1;

	t87 = (x353^(x354|(x355%x356)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x357 = INT32_MIN;
	uint16_t x358 = 19U;
	int32_t x359 = INT32_MIN;
	static uint32_t x360 = 6643940U;

	t88 = (x357^(x358|(x359%x360)));

	if (t88 != 2148974679U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x361 = 218197;
	volatile uint64_t x363 = 10444614LLU;
	volatile int16_t x364 = INT16_MAX;
	volatile uint64_t t89 = 97681281769350LLU;

	t89 = (x361^(x362|(x363%x364)));

	if (t89 != 9223372036854557610LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = -1;
	volatile int32_t x367 = INT32_MIN;
	volatile int8_t x368 = 45;
	uint64_t t90 = 3664510762331067LLU;

	t90 = (x365^(x366|(x367%x368)));

	if (t90 != 37LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = 0;
	static volatile int8_t x371 = INT8_MAX;
	int32_t x372 = 19;
	int32_t t91 = 20;

	t91 = (x369^(x370|(x371%x372)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	int16_t x375 = 6341;
	uint16_t x376 = 9593U;
	volatile int32_t t92 = -258509;

	t92 = (x373^(x374|(x375%x376)));

	if (t92 != 32709) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = -1;
	uint8_t x378 = 1U;
	int16_t x379 = INT16_MIN;
	uint64_t t93 = 82186LLU;

	t93 = (x377^(x378|(x379%x380)));

	if (t93 != 32766LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = -15LL;
	uint64_t x382 = 333048701223370386LLU;
	int32_t x383 = 7;
	uint32_t x384 = UINT32_MAX;

	t94 = (x381^(x382|(x383%x384)));

	if (t94 != 18113695372486181222LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x385 = 1502084U;
	int8_t x386 = 1;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t95 = 31528U;

	t95 = (x385^(x386|(x387%x388)));

	if (t95 != 4293465093U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	volatile int32_t x391 = -1;
	volatile int32_t t96 = -55;

	t96 = (x389^(x390|(x391%x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x393 = 34U;
	int32_t x394 = INT32_MIN;
	static int32_t x395 = INT32_MIN;
	int8_t x396 = -2;

	t97 = (x393^(x394|(x395%x396)));

	if (t97 != -2147483614) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MAX;
	uint32_t x399 = 0U;
	volatile int16_t x400 = -1;
	static int64_t t98 = 114093966958LL;

	t98 = (x397^(x398|(x399%x400)));

	if (t98 != 9223372032559814298LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MAX;
	volatile int64_t t99 = 2LL;

	t99 = (x401^(x402|(x403%x404)));

	if (t99 != -2147455282LL) { NG(); } else { ; }
	
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

