#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
int16_t x10 = -1;
uint64_t t1 = 7LLU;
uint32_t x13 = 1585540U;
uint64_t x15 = 7LLU;
static int32_t x16 = -147244874;
int8_t x17 = -8;
int32_t x19 = INT32_MAX;
int8_t x28 = INT8_MIN;
static volatile uint64_t t6 = 21941LLU;
static volatile uint64_t x34 = 98051574068LLU;
uint8_t x37 = UINT8_MAX;
uint64_t x41 = 0LLU;
uint64_t t9 = 15542450LLU;
uint64_t x50 = 23412148028LLU;
int64_t x53 = INT64_MIN;
volatile int64_t x56 = INT64_MIN;
uint64_t x59 = 0LLU;
static volatile int64_t t15 = -35878LL;
int8_t x71 = 39;
int64_t x72 = 2180257568797538LL;
int16_t x74 = -108;
static int32_t x75 = INT32_MIN;
uint64_t x78 = UINT64_MAX;
int16_t x83 = INT16_MIN;
int64_t x84 = INT64_MIN;
int64_t t19 = 2769299300LL;
uint16_t x87 = UINT16_MAX;
volatile int8_t x94 = 1;
static uint64_t t22 = UINT64_MAX;
int16_t x101 = INT16_MIN;
int32_t x109 = INT32_MIN;
uint16_t x110 = UINT16_MAX;
uint64_t x113 = UINT64_MAX;
volatile int64_t x118 = -1LL;
static int8_t x125 = INT8_MIN;
int16_t x135 = INT16_MIN;
int8_t x140 = -1;
static int64_t t35 = -209344799LL;
uint64_t t37 = 1LLU;
uint8_t x162 = 39U;
int64_t t38 = 233LL;
uint64_t x174 = UINT64_MAX;
static int64_t x175 = INT64_MAX;
int32_t x179 = INT32_MIN;
static int64_t x181 = INT64_MIN;
volatile uint32_t x184 = 123567396U;
volatile int64_t t43 = -2246847905387966LL;
int16_t x189 = INT16_MIN;
uint32_t x202 = UINT32_MAX;
int32_t x205 = INT32_MIN;
volatile uint16_t x206 = UINT16_MAX;
volatile int8_t x211 = INT8_MIN;
static volatile uint32_t t49 = 23078437U;
uint16_t x216 = UINT16_MAX;
int64_t t50 = 31569150858LL;
static uint8_t x219 = UINT8_MAX;
int16_t x220 = INT16_MIN;
uint64_t x234 = 19882156021LLU;
uint32_t x235 = 44U;
volatile uint8_t x240 = 34U;
uint32_t x242 = 2632335U;
uint64_t x244 = 40667184613068653LLU;
static volatile uint64_t t56 = 41034LLU;
static uint32_t t57 = 40U;
int16_t x249 = -1;
int64_t t59 = -1234924835747LL;
uint16_t x259 = 1401U;
uint64_t x261 = UINT64_MAX;
uint8_t x262 = UINT8_MAX;
uint32_t x264 = 8398630U;
static int8_t x267 = INT8_MIN;
static int8_t x268 = -1;
volatile int32_t t62 = 386676;
uint16_t x276 = 762U;
volatile int64_t t64 = 13987072833309LL;
static int64_t t65 = 654177782087LL;
static int64_t x281 = INT64_MAX;
static int64_t t66 = 319458288306222518LL;
static volatile int64_t x287 = -1LL;
static volatile uint64_t x288 = 105832603247962461LLU;
int32_t x289 = INT32_MIN;
int64_t x293 = INT64_MIN;
volatile int32_t x294 = INT32_MIN;
int64_t x295 = -297409344427222495LL;
int16_t x298 = INT16_MIN;
volatile int16_t x302 = 1;
int64_t x305 = INT64_MIN;
volatile int64_t t72 = -25LL;
volatile int64_t x315 = -1LL;
volatile uint64_t x316 = 4256LLU;
int64_t t76 = 272349982422191708LL;
volatile uint32_t t77 = 1581U;
uint64_t t78 = 1LLU;
static int8_t x333 = INT8_MIN;
int16_t x334 = INT16_MIN;
int32_t x335 = INT32_MIN;
uint16_t x341 = 9669U;
uint32_t x342 = 391809U;
uint64_t x343 = 86LLU;
static uint16_t x348 = UINT16_MAX;
uint64_t x357 = 698218758LLU;
uint8_t x358 = 13U;
uint8_t x359 = 10U;
static int8_t x367 = INT8_MIN;
int16_t x380 = -1;
volatile int64_t t89 = -5LL;
uint64_t t90 = 110777733218866795LLU;
int8_t x392 = INT8_MIN;
static uint8_t x393 = UINT8_MAX;
volatile uint8_t x396 = 6U;
int8_t x399 = -12;
volatile int64_t t94 = -37351663LL;
int32_t x405 = -1;
uint16_t x406 = UINT16_MAX;
uint32_t x412 = 4981U;
uint32_t t96 = 42352U;
int16_t x413 = -1;
static int64_t x414 = INT64_MIN;
uint16_t x421 = 22358U;


void f0(void) {
	uint8_t x2 = 75U;
	int64_t x3 = -1LL;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 119294LL;

	t0 = (x1^(x2+(x3|x4)));

	if (t0 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = -93;

	t1 = (x9^(x10+(x11|x12)));

	if (t1 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = 12;
	volatile uint64_t t2 = 10837967804752LLU;

	t2 = (x13^(x14+(x15|x16)));

	if (t2 != 18446744073560721735LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = INT16_MIN;
	static int16_t x20 = -1;
	volatile int32_t t3 = -60362;

	t3 = (x17^(x18+(x19|x20)));

	if (t3 != 32775) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x22 = 63163633427901LLU;
	static int32_t x23 = -1;
	int32_t x24 = -8;
	static volatile uint64_t t4 = 465444662357273532LLU;

	t4 = (x21^(x22+(x23|x24)));

	if (t4 != 18446680910076143036LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile uint64_t x26 = 1LLU;
	uint16_t x27 = 88U;
	volatile uint64_t t5 = 273161109216370LLU;

	t5 = (x25^(x26+(x27|x28)));

	if (t5 != 9223372036854775769LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 1740U;
	int64_t x30 = INT64_MIN;
	uint64_t x31 = 107902489075247580LLU;
	uint64_t x32 = 80808LLU;

	t6 = (x29^(x30+(x31|x32)));

	if (t6 != 9331274525930028336LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = 979U;
	volatile uint64_t t7 = 15628831894398285LLU;

	t7 = (x33^(x34+(x35|x36)));

	if (t7 != 98051542392LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	static volatile uint32_t t8 = 89U;

	t8 = (x37^(x38+(x39|x40)));

	if (t8 != 4294967041U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = -1;
	static int32_t x43 = INT32_MIN;
	static volatile int8_t x44 = -16;

	t9 = (x41^(x42+(x43|x44)));

	if (t9 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	static uint32_t x46 = 202U;
	static uint16_t x47 = 6U;
	uint64_t x48 = 2957737468LLU;
	uint64_t t10 = 292993LLU;

	t10 = (x45^(x46+(x47|x48)));

	if (t10 != 2957737527LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 24318713U;
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 64U;
	uint64_t t11 = 340841715489308843LLU;

	t11 = (x49^(x50+(x51|x52)));

	if (t11 != 23388100034LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = INT16_MIN;
	uint16_t x55 = UINT16_MAX;
	int64_t t12 = -1104LL;

	t12 = (x53^(x54+(x55|x56)));

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile uint32_t x58 = 937555835U;
	uint16_t x60 = 1U;
	uint64_t t13 = 126633LLU;

	t13 = (x57^(x58+(x59|x60)));

	if (t13 != 937494659LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = INT32_MIN;
	static uint8_t x62 = UINT8_MAX;
	static volatile uint64_t x63 = UINT64_MAX;
	static int8_t x64 = -1;
	uint64_t t14 = 1LLU;

	t14 = (x61^(x62+(x63|x64)));

	if (t14 != 18446744071562068222LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 1U;
	int8_t x66 = 4;
	static int64_t x67 = -1LL;
	volatile int16_t x68 = -1;

	t15 = (x65^(x66+(x67|x68)));

	if (t15 != 2LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int32_t x70 = 6371;
	static volatile int64_t t16 = 914LL;

	t16 = (x69^(x70+(x71|x72)));

	if (t16 != 2180257568830389LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 2U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t17 = 97242405;

	t17 = (x73^(x74+(x75|x76)));

	if (t17 != -234) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	volatile uint64_t x79 = 39LLU;
	int8_t x80 = INT8_MAX;
	static volatile uint64_t t18 = 105LLU;

	t18 = (x77^(x78+(x79|x80)));

	if (t18 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = 41;

	t19 = (x81^(x82+(x83|x84)));

	if (t19 != 32681LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MAX;
	int32_t x88 = INT32_MIN;
	volatile int64_t t20 = 43046405LL;

	t20 = (x85^(x86+(x87|x88)));

	if (t20 != 2147418113LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 361U;
	static int8_t x90 = INT8_MIN;
	int64_t x91 = -9467LL;
	int64_t x92 = INT64_MIN;
	volatile int64_t t21 = -11524113247000152LL;

	t21 = (x89^(x90+(x91|x92)));

	if (t21 != -9236LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int8_t x95 = -1;
	volatile int64_t x96 = INT64_MIN;

	t22 = (x93^(x94+(x95|x96)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = -1;
	uint32_t x98 = 674548641U;
	int8_t x99 = -53;
	uint64_t x100 = 54LLU;
	uint64_t t23 = 19LLU;

	t23 = (x97^(x98+(x99|x100)));

	if (t23 != 18446744073035002975LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x102 = -1;
	static uint8_t x103 = UINT8_MAX;
	static uint64_t x104 = 14712516911216LLU;
	uint64_t t24 = 23024404090940LLU;

	t24 = (x101^(x102+(x103|x104)));

	if (t24 != 18446729361192624382LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = 45;
	uint8_t x106 = 7U;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t25 = 119414652723932LL;

	t25 = (x105^(x106+(x107|x108)));

	if (t25 != -32726LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x111 = INT16_MAX;
	volatile int32_t x112 = INT32_MIN;
	static volatile int32_t t26 = 9760092;

	t26 = (x109^(x110+(x111|x112)));

	if (t26 != 98302) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x114 = UINT64_MAX;
	static uint8_t x115 = 2U;
	uint16_t x116 = 1009U;
	volatile uint64_t t27 = 56615703740977147LLU;

	t27 = (x113^(x114+(x115|x116)));

	if (t27 != 18446744073709550605LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 11391U;
	static volatile int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MAX;
	volatile int64_t t28 = -31196090608635LL;

	t28 = (x117^(x118+(x119|x120)));

	if (t28 != -11391LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -9;
	int16_t x122 = -1;
	static uint16_t x123 = 1266U;
	uint8_t x124 = UINT8_MAX;
	static int32_t t29 = -741342866;

	t29 = (x121^(x122+(x123|x124)));

	if (t29 != -1271) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x126 = -1378690234199722LL;
	uint8_t x127 = UINT8_MAX;
	static volatile int16_t x128 = -1;
	volatile int64_t t30 = -797LL;

	t30 = (x125^(x126+(x127|x128)));

	if (t30 != 1378690234199765LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = 6650U;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = 45728721978765826LL;
	int32_t x132 = 977329;
	int64_t t31 = -47704326657LL;

	t31 = (x129^(x130+(x131|x132)));

	if (t31 != 45728721979565384LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	uint32_t x134 = UINT32_MAX;
	int8_t x136 = INT8_MAX;
	volatile uint32_t t32 = 190U;

	t32 = (x133^(x134+(x135|x136)));

	if (t32 != 4294967169U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x137 = -1;
	int64_t x138 = -20599LL;
	int32_t x139 = -7233;
	volatile int64_t t33 = -12049LL;

	t33 = (x137^(x138+(x139|x140)));

	if (t33 != 20599LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	volatile int32_t x144 = INT32_MIN;
	static volatile int64_t t34 = -117270754670754LL;

	t34 = (x141^(x142+(x143|x144)));

	if (t34 != -256LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = -1LL;
	static uint16_t x146 = 0U;
	volatile int64_t x147 = -1LL;
	int32_t x148 = 64344386;

	t35 = (x145^(x146+(x147|x148)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 80U;
	static int8_t x152 = -1;
	int64_t t36 = 1716824LL;

	t36 = (x149^(x150+(x151|x152)));

	if (t36 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile uint8_t x154 = 0U;
	static int64_t x155 = INT64_MIN;
	volatile uint8_t x156 = UINT8_MAX;

	t37 = (x153^(x154+(x155|x156)));

	if (t37 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	volatile int64_t x163 = -3LL;
	uint32_t x164 = 1U;

	t38 = (x161^(x162+(x163|x164)));

	if (t38 != -2147483612LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = -334;
	static int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MAX;
	int16_t x172 = -270;
	volatile int32_t t39 = 29171;

	t39 = (x169^(x170+(x171|x172)));

	if (t39 != 460) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = INT16_MAX;
	volatile int32_t x176 = INT32_MIN;
	volatile uint64_t t40 = 5580LLU;

	t40 = (x173^(x174+(x175|x176)));

	if (t40 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -1LL;
	uint32_t x178 = 42360210U;
	static int16_t x180 = -17;
	int64_t t41 = 3478547337853134192LL;

	t41 = (x177^(x178+(x179|x180)));

	if (t41 != -42360194LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x182 = INT8_MAX;
	volatile int32_t x183 = -77;
	int64_t t42 = 550LL;

	t42 = (x181^(x182+(x183|x184)));

	if (t42 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = 671484525LL;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 0U;
	int8_t x188 = -1;

	t43 = (x185^(x186+(x187|x188)));

	if (t43 != -671484654LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MIN;
	int32_t t44 = 57667;

	t44 = (x189^(x190+(x191|x192)));

	if (t44 != -32642) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = 450556448951214438LL;
	static volatile int64_t x196 = INT64_MIN;
	static volatile int64_t t45 = 4042673137870505LL;

	t45 = (x193^(x194+(x195|x196)));

	if (t45 != 450556448951214693LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x197 = 12549U;
	uint16_t x198 = 9U;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = 5505250LLU;
	volatile uint64_t t46 = 69640349434405113LLU;

	t46 = (x197^(x198+(x199|x200)));

	if (t46 != 18446744073709531630LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 1131696786U;
	volatile uint32_t t47 = 48U;

	t47 = (x201^(x202+(x203|x204)));

	if (t47 != 32657U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x207 = 69LL;
	int32_t x208 = INT32_MIN;
	static volatile int64_t t48 = 901483290LL;

	t48 = (x205^(x206+(x207|x208)));

	if (t48 != 65604LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	uint32_t x210 = UINT32_MAX;
	uint32_t x212 = 30780875U;

	t49 = (x209^(x210+(x211|x212)));

	if (t49 != 53U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x213 = INT64_MAX;
	volatile int8_t x214 = 6;
	int64_t x215 = 13LL;

	t50 = (x213^(x214+(x215|x216)));

	if (t50 != 9223372036854710266LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = 29;
	int32_t t51 = -9;

	t51 = (x217^(x218+(x219|x220)));

	if (t51 != 284) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = 1876736618863486LL;
	volatile int8_t x226 = INT8_MAX;
	uint64_t x227 = 2571LLU;
	static uint8_t x228 = 12U;
	static uint64_t t52 = 1728036923LLU;

	t52 = (x225^(x226+(x227|x228)));

	if (t52 != 1876736618861040LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MIN;
	volatile uint32_t x230 = 0U;
	static uint8_t x231 = UINT8_MAX;
	static int32_t x232 = INT32_MIN;
	volatile uint32_t t53 = 51432U;

	t53 = (x229^(x230+(x231|x232)));

	if (t53 != 2147483519U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	uint64_t t54 = 318204122956LLU;

	t54 = (x233^(x234+(x235|x236)));

	if (t54 != 9223372056736948190LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = 32030U;
	volatile int8_t x238 = INT8_MIN;
	uint32_t x239 = 7U;
	volatile uint32_t t55 = 2U;

	t55 = (x237^(x238+(x239|x240)));

	if (t55 != 4294935225U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	static int16_t x243 = -2010;

	t56 = (x241^(x242+(x243|x244)));

	if (t56 != 18446744073706919425LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 3533U;
	uint32_t x247 = 5761541U;
	int32_t x248 = INT32_MIN;

	t57 = (x245^(x246+(x247|x248)));

	if (t57 != 5765074U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x250 = 26U;
	int64_t x251 = 2487692812339LL;
	volatile int16_t x252 = 124;
	volatile int64_t t58 = 1416053079879060002LL;

	t58 = (x249^(x250+(x251|x252)));

	if (t58 != -2487692812442LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MAX;
	uint32_t x255 = 425006U;
	int32_t x256 = -737602814;

	t59 = (x253^(x254+(x255|x256)));

	if (t59 != -9223372033296990291LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x257 = INT32_MAX;
	int32_t x258 = 31;
	int64_t x260 = 343070702LL;
	volatile int64_t t60 = -253949849101547578LL;

	t60 = (x257^(x258+(x259|x260)));

	if (t60 != 1804412897LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x263 = 0U;
	volatile uint64_t t61 = 107978LLU;

	t61 = (x261^(x262+(x263|x264)));

	if (t61 != 18446744073701152730LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = INT8_MIN;
	static int16_t x266 = INT16_MIN;

	t62 = (x265^(x266+(x267|x268)));

	if (t62 != 32895) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x269 = UINT16_MAX;
	volatile uint32_t x270 = UINT32_MAX;
	uint8_t x271 = 94U;
	int32_t x272 = INT32_MIN;
	static volatile uint32_t t63 = 268U;

	t63 = (x269^(x270+(x271|x272)));

	if (t63 != 2147549090U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = 26539954;
	int64_t x274 = 1LL;
	int8_t x275 = INT8_MAX;

	t64 = (x273^(x274+(x275|x276)));

	if (t64 != 26539186LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -65937131LL;
	int8_t x278 = 36;
	int64_t x279 = -1LL;
	int64_t x280 = -1949LL;

	t65 = (x277^(x278+(x279|x280)));

	if (t65 != -65937098LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x282 = 13U;
	int16_t x283 = INT16_MIN;
	int16_t x284 = -112;

	t66 = (x281^(x282+(x283|x284)));

	if (t66 != -9223372036854775710LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = 728770390;
	int16_t x286 = INT16_MIN;
	volatile uint64_t t67 = 328854860315134LLU;

	t67 = (x285^(x286+(x287|x288)));

	if (t67 != 18446744072980748457LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x290 = INT32_MAX;
	uint64_t x291 = 11LLU;
	static int32_t x292 = -1;
	volatile uint64_t t68 = 13LLU;

	t68 = (x289^(x290+(x291|x292)));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x296 = 6928U;
	volatile int64_t t69 = 1393270430624982LL;

	t69 = (x293^(x294+(x295|x296)));

	if (t69 != 8925962690280069937LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x297 = INT64_MAX;
	int32_t x299 = 29202;
	static volatile uint64_t x300 = UINT64_MAX;
	uint64_t t70 = 1LLU;

	t70 = (x297^(x298+(x299|x300)));

	if (t70 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = 25881044LL;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t71 = -217986384090848LL;

	t71 = (x301^(x302+(x303|x304)));

	if (t71 != -9223372036828894763LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x306 = INT16_MAX;
	volatile int64_t x307 = -791170259LL;
	static uint16_t x308 = UINT16_MAX;

	t72 = (x305^(x306+(x307|x308)));

	if (t72 != 9223372036063657982LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	static volatile int32_t x310 = INT32_MIN;
	int16_t x311 = 6;
	static int16_t x312 = INT16_MAX;
	volatile int32_t t73 = 0;

	t73 = (x309^(x310+(x311|x312)));

	if (t73 != -2147450880) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 3U;
	uint64_t x314 = 5256876307LLU;
	volatile uint64_t t74 = 95362109039LLU;

	t74 = (x313^(x314+(x315|x316)));

	if (t74 != 5256876305LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = INT8_MIN;
	int32_t x318 = -293628;
	int16_t x319 = -1615;
	volatile uint8_t x320 = 6U;
	int32_t t75 = -2774;

	t75 = (x317^(x318+(x319|x320)));

	if (t75 != 295227) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = 0U;
	int16_t x322 = INT16_MIN;
	static volatile int64_t x323 = -1LL;
	static int8_t x324 = INT8_MIN;

	t76 = (x321^(x322+(x323|x324)));

	if (t76 != -32769LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x325 = INT8_MIN;
	int8_t x326 = 0;
	uint32_t x327 = 1599517U;
	int32_t x328 = INT32_MIN;

	t77 = (x325^(x326+(x327|x328)));

	if (t77 != 2145884061U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = UINT64_MAX;
	uint16_t x330 = UINT16_MAX;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -1;

	t78 = (x329^(x330+(x331|x332)));

	if (t78 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x336 = UINT32_MAX;
	static uint32_t t79 = 2532680U;

	t79 = (x333^(x334+(x335|x336)));

	if (t79 != 32895U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x344 = INT32_MIN;
	uint64_t t80 = 25452232667LLU;

	t80 = (x341^(x342+(x343|x344)));

	if (t80 != 18446744071562452754LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MAX;
	volatile int32_t x347 = 1;
	static int32_t t81 = 3;

	t81 = (x345^(x346+(x347|x348)));

	if (t81 != 130945) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 3U;
	int16_t x350 = INT16_MIN;
	uint64_t x351 = 67LLU;
	int64_t x352 = INT64_MAX;
	uint64_t t82 = 3LLU;

	t82 = (x349^(x350+(x351|x352)));

	if (t82 != 9223372036854743036LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x360 = -23;
	uint64_t t83 = 2087682397531503975LLU;

	t83 = (x357^(x358+(x359|x360)));

	if (t83 != 18446744073011332862LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MAX;
	uint32_t x362 = 7088U;
	static int64_t x363 = INT64_MAX;
	int8_t x364 = INT8_MIN;
	volatile int64_t t84 = -224671052476139LL;

	t84 = (x361^(x362+(x363|x364)));

	if (t84 != 7120LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	static int64_t x368 = INT64_MIN;
	static volatile int64_t t85 = -1782283340021381505LL;

	t85 = (x365^(x366+(x367|x368)));

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = -1LL;
	static uint32_t x370 = 11835U;
	static int8_t x371 = INT8_MAX;
	int64_t x372 = -1LL;
	int64_t t86 = -100943504781539251LL;

	t86 = (x369^(x370+(x371|x372)));

	if (t86 != -11835LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = INT32_MAX;
	volatile int8_t x374 = INT8_MAX;
	int8_t x375 = 2;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t87 = 2689869230199029867LLU;

	t87 = (x373^(x374+(x375|x376)));

	if (t87 != 2147483521LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x377 = 4306047593149670342LL;
	uint8_t x378 = 1U;
	uint16_t x379 = 28449U;
	volatile int64_t t88 = 14911873LL;

	t88 = (x377^(x378+(x379|x380)));

	if (t88 != 4306047593149670342LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MAX;
	int64_t x382 = -1084077325223719LL;
	volatile int16_t x383 = -1;
	uint8_t x384 = 0U;

	t89 = (x381^(x382+(x383|x384)));

	if (t89 != -1084077325252825LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x385 = 183994591991584LL;
	int8_t x386 = INT8_MIN;
	static uint64_t x387 = 60655686LLU;
	volatile int8_t x388 = -1;

	t90 = (x385^(x386+(x387|x388)));

	if (t90 != 18446560079117559903LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x389 = INT64_MIN;
	uint16_t x390 = UINT16_MAX;
	static int32_t x391 = -1;
	volatile int64_t t91 = -749623LL;

	t91 = (x389^(x390+(x391|x392)));

	if (t91 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x394 = UINT8_MAX;
	uint8_t x395 = 17U;
	volatile int32_t t92 = 609794;

	t92 = (x393^(x394+(x395|x396)));

	if (t92 != 489) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	int64_t x400 = 206208448LL;
	static int64_t t93 = -2293022736876763812LL;

	t93 = (x397^(x398+(x399|x400)));

	if (t93 != -141LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = -2589;
	int64_t x402 = -300305829304LL;
	volatile int8_t x403 = INT8_MAX;
	uint8_t x404 = 126U;

	t94 = (x401^(x402+(x403|x404)));

	if (t94 != 300305827620LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x407 = 802U;
	uint64_t x408 = UINT64_MAX;
	uint64_t t95 = 2087679776001768375LLU;

	t95 = (x405^(x406+(x407|x408)));

	if (t95 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = 4U;
	volatile int16_t x410 = 0;
	int8_t x411 = INT8_MIN;

	t96 = (x409^(x410+(x411|x412)));

	if (t96 != 4294967281U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x415 = UINT32_MAX;
	static uint16_t x416 = 62U;
	int64_t t97 = 3402460341259LL;

	t97 = (x413^(x414+(x415|x416)));

	if (t97 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x417 = 4U;
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MAX;
	int8_t x420 = -15;
	static volatile int64_t t98 = -4295773682329298LL;

	t98 = (x417^(x418+(x419|x420)));

	if (t98 != -133LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x422 = INT8_MAX;
	int32_t x423 = -24495;
	static int16_t x424 = INT16_MIN;
	static volatile int32_t t99 = 13488244;

	t99 = (x421^(x422+(x423|x424)));

	if (t99 != -2170) { NG(); } else { ; }
	
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

