#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = UINT8_MAX;
uint64_t t0 = 90715939LLU;
static uint64_t t1 = 40625LLU;
int16_t x15 = INT16_MIN;
int16_t x19 = 312;
int64_t x24 = 44442LL;
int64_t t6 = -7780300228322409LL;
uint64_t x29 = 1LLU;
int8_t x32 = -1;
int8_t x37 = -7;
int64_t x41 = -1LL;
uint8_t x45 = 2U;
int32_t x46 = -1818375;
static volatile uint64_t x57 = 6756752LLU;
int32_t x62 = -29545095;
volatile uint32_t x64 = 283U;
volatile int32_t x72 = INT32_MIN;
volatile int64_t t19 = -1LL;
static volatile uint64_t x86 = 2LLU;
volatile uint64_t t21 = 27187546593256LLU;
static volatile int16_t x91 = INT16_MIN;
int64_t x93 = INT64_MIN;
uint8_t x95 = 45U;
int32_t x97 = -1;
volatile int8_t x99 = INT8_MIN;
static uint16_t x101 = 24372U;
int8_t x102 = -54;
volatile int8_t x109 = -1;
volatile int16_t x115 = -36;
int16_t x119 = INT16_MIN;
int64_t x121 = INT64_MIN;
int16_t x144 = 7;
int32_t x152 = -1;
volatile int64_t t37 = -349670LL;
int64_t x158 = INT64_MAX;
static volatile uint16_t x159 = UINT16_MAX;
int64_t t39 = INT64_MIN;
int32_t x162 = INT32_MIN;
int8_t x171 = -1;
volatile int64_t x174 = INT64_MIN;
int32_t x184 = -22;
uint16_t x186 = 2U;
int32_t x188 = INT32_MAX;
volatile int64_t t47 = -16475729051LL;
int64_t x196 = INT64_MIN;
volatile int64_t t48 = -160LL;
uint64_t x198 = 5442924288LLU;
static int8_t x200 = INT8_MIN;
volatile int32_t x202 = INT32_MIN;
int16_t x207 = -1;
uint64_t x209 = 449733276463352LLU;
int32_t x210 = 52;
int8_t x211 = INT8_MIN;
static uint64_t t52 = 959332310LLU;
static volatile int8_t x214 = -2;
volatile int64_t x217 = -369436247550828LL;
uint32_t x221 = 8067263U;
volatile int64_t x223 = INT64_MIN;
static int64_t t56 = 63210440244011453LL;
int64_t x230 = 167333LL;
uint32_t x233 = 565912673U;
uint32_t x234 = 307107U;
int8_t x236 = 10;
volatile uint16_t x240 = 21U;
int32_t t59 = -25336699;
uint8_t x243 = UINT8_MAX;
int8_t x247 = -1;
static uint16_t x258 = 18778U;
static int8_t x263 = 6;
uint64_t x266 = UINT64_MAX;
static uint32_t x274 = UINT32_MAX;
int64_t x275 = INT64_MAX;
int8_t x277 = -1;
int32_t x279 = INT32_MAX;
uint64_t t69 = 782057LLU;
static uint8_t x281 = 86U;
uint32_t x284 = 29103U;
uint64_t t70 = 3631298717400097237LLU;
static uint16_t x285 = 60U;
volatile int32_t x288 = -1354;
uint64_t x289 = 18673702LLU;
int8_t x293 = -1;
uint32_t x306 = 16U;
uint64_t x314 = UINT64_MAX;
int8_t x317 = 25;
volatile int8_t x324 = 14;
int16_t x332 = INT16_MIN;
int16_t x335 = INT16_MIN;
volatile int32_t t84 = 6553467;
int16_t x342 = INT16_MAX;
volatile uint64_t t86 = 16707958581LLU;
int32_t x360 = -1;
uint16_t x363 = 1U;
int64_t x364 = -1LL;
int64_t t90 = 54452242567LL;
int8_t x370 = -1;
volatile uint64_t x385 = UINT64_MAX;
static int8_t x387 = INT8_MIN;
uint8_t x390 = UINT8_MAX;
int16_t x395 = -1;
static int16_t x400 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 200U;
	int32_t x2 = INT32_MIN;
	uint64_t x3 = 1502959613354943LLU;

	t0 = (x1^(x2^(x3%x4)));

	if (t0 != 18446744071562068049LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	static volatile uint64_t x7 = 1LLU;
	int8_t x8 = INT8_MAX;

	t1 = (x5^(x6^(x7%x8)));

	if (t1 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int8_t x10 = -1;
	static volatile int32_t x11 = -391;
	int64_t x12 = 37732204028347034LL;
	int64_t t2 = 3417165218044LL;

	t2 = (x9^(x10^(x11%x12)));

	if (t2 != -391LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 56;
	int8_t x14 = -1;
	int64_t x16 = -973874871LL;
	int64_t t3 = -2072LL;

	t3 = (x13^(x14^(x15%x16)));

	if (t3 != 32711LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	volatile int64_t x18 = INT64_MAX;
	int8_t x20 = -36;
	int64_t t4 = 841LL;

	t4 = (x17^(x18^(x19%x20)));

	if (t4 != 9223372034707292184LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	static volatile int64_t t5 = -2892916943LL;

	t5 = (x21^(x22^(x23%x24)));

	if (t5 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int64_t x26 = -17773588631974LL;
	volatile int16_t x27 = INT16_MAX;
	volatile int32_t x28 = INT32_MIN;

	t6 = (x25^(x26^(x27%x28)));

	if (t6 != 17773588622885LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 29U;
	int64_t x31 = -1LL;
	uint64_t t7 = 498530784477529LLU;

	t7 = (x29^(x30^(x31%x32)));

	if (t7 != 28LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x34 = 15;
	int32_t x35 = -1;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 6462;

	t8 = (x33^(x34^(x35%x36)));

	if (t8 != -65521) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 1255U;
	volatile uint16_t x39 = 3279U;
	uint16_t x40 = 1564U;
	int32_t t9 = 1213;

	t9 = (x37^(x38^(x39%x40)));

	if (t9 != -1143) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = INT64_MIN;
	static int32_t x43 = -1;
	static int32_t x44 = INT32_MAX;
	int64_t t10 = INT64_MIN;

	t10 = (x41^(x42^(x43%x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x47 = 2LLU;
	int64_t x48 = INT64_MIN;
	static volatile uint64_t t11 = 5875413195765LLU;

	t11 = (x45^(x46^(x47%x48)));

	if (t11 != 18446744073707733241LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -19;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 7U;
	uint64_t x52 = 18269724676052LLU;
	volatile uint64_t t12 = 387165134778703LLU;

	t12 = (x49^(x50^(x51%x52)));

	if (t12 != 18446744073709551381LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1225U;
	uint32_t x54 = 0U;
	int32_t x55 = INT32_MAX;
	volatile int64_t x56 = 143878328367LL;
	int64_t t13 = -697996109215831LL;

	t13 = (x53^(x54^(x55%x56)));

	if (t13 != 2147482422LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	uint64_t t14 = 49371921751LLU;

	t14 = (x57^(x58^(x59%x60)));

	if (t14 != 6756752LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static uint32_t x63 = 6U;
	volatile uint32_t t15 = 26397419U;

	t15 = (x61^(x62^(x63%x64)));

	if (t15 != 29535615U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int16_t x66 = -9232;
	volatile int32_t x67 = -63;
	volatile int8_t x68 = INT8_MIN;
	int64_t t16 = 13LL;

	t16 = (x65^(x66^(x67%x68)));

	if (t16 != -9223372036854766543LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 2486U;
	int64_t x71 = INT64_MIN;
	volatile int64_t t17 = -150338LL;

	t17 = (x69^(x70^(x71%x72)));

	if (t17 != 63049LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MAX;
	int64_t t18 = 58LL;

	t18 = (x73^(x74^(x75%x76)));

	if (t18 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = -1LL;
	volatile int64_t x79 = INT64_MIN;
	static uint8_t x80 = 99U;

	t19 = (x77^(x78^(x79%x80)));

	if (t19 != 4294967288LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	volatile int16_t x82 = INT16_MIN;
	uint8_t x83 = 1U;
	int8_t x84 = -1;
	volatile int32_t t20 = 32099148;

	t20 = (x81^(x82^(x83%x84)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 11632U;
	uint16_t x87 = 3404U;
	static uint8_t x88 = 58U;

	t21 = (x85^(x86^(x87%x88)));

	if (t21 != 11610LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 2;
	int32_t x90 = INT32_MAX;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = -449411;

	t22 = (x89^(x90^(x91%x92)));

	if (t22 != 2147483645) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int64_t t23 = 148983LL;

	t23 = (x93^(x94^(x95%x96)));

	if (t23 != -46LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = UINT32_MAX;
	uint32_t x100 = 459204U;
	volatile uint32_t t24 = 6900256U;

	t24 = (x97^(x98^(x99%x100)));

	if (t24 != 32156U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x103 = 15335690938783LL;
	volatile int8_t x104 = INT8_MIN;
	volatile int64_t t25 = 1462LL;

	t25 = (x101^(x102^(x103%x104)));

	if (t25 != -24351LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 10127408;
	int8_t x106 = -1;
	int8_t x107 = -1;
	uint8_t x108 = 15U;
	static volatile int32_t t26 = -4286897;

	t26 = (x105^(x106^(x107%x108)));

	if (t26 != 10127408) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	static volatile uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 30U;
	uint64_t t27 = 258940267970LLU;

	t27 = (x109^(x110^(x111%x112)));

	if (t27 != 15LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -66;
	volatile int8_t x114 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -164113;

	t28 = (x113^(x114^(x115%x116)));

	if (t28 != -30) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 1357;
	int64_t x118 = -1LL;
	uint16_t x120 = UINT16_MAX;
	int64_t t29 = 1674858849416LL;

	t29 = (x117^(x118^(x119%x120)));

	if (t29 != 31410LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MAX;
	static int64_t x123 = -236772116LL;
	int64_t x124 = -1LL;
	volatile int64_t t30 = -1414724LL;

	t30 = (x121^(x122^(x123%x124)));

	if (t30 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 0LLU;
	uint16_t x126 = 2098U;
	uint64_t x127 = UINT64_MAX;
	static int8_t x128 = INT8_MIN;
	uint64_t t31 = 80938082131822LLU;

	t31 = (x125^(x126^(x127%x128)));

	if (t31 != 2125LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MAX;
	volatile int16_t x132 = 1;
	int64_t t32 = 775LL;

	t32 = (x129^(x130^(x131%x132)));

	if (t32 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 53022636U;
	uint16_t x134 = UINT16_MAX;
	int32_t x135 = -4435928;
	static volatile uint32_t x136 = 31U;
	uint32_t t33 = 3098048U;

	t33 = (x133^(x134^(x135%x136)));

	if (t33 != 53080134U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	int64_t x138 = -1LL;
	int32_t x139 = 213938;
	uint8_t x140 = 1U;
	int64_t t34 = 17LL;

	t34 = (x137^(x138^(x139%x140)));

	if (t34 != -256LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -43;
	uint64_t x142 = 348LLU;
	int32_t x143 = -1;
	volatile uint64_t t35 = 35598373495815928LLU;

	t35 = (x141^(x142^(x143%x144)));

	if (t35 != 374LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 180229876583414607LLU;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = 51466740455334LLU;
	int8_t x148 = INT8_MIN;
	volatile uint64_t t36 = 1055548178LLU;

	t36 = (x145^(x146^(x147%x148)));

	if (t36 != 18266493637256637673LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -1LL;
	int64_t x150 = -92444196LL;
	int32_t x151 = INT32_MAX;

	t37 = (x149^(x150^(x151%x152)));

	if (t37 != 92444195LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = -2663;
	static volatile int64_t x155 = INT64_MAX;
	volatile int64_t x156 = 48923555502385LL;
	int64_t t38 = 2344513901210001LL;

	t38 = (x153^(x154^(x155%x156)));

	if (t38 != 9813640919400LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = -1;
	volatile uint16_t x160 = UINT16_MAX;

	t39 = (x157^(x158^(x159%x160)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	int32_t x164 = 6873885;
	volatile int32_t t40 = 1006006;

	t40 = (x161^(x162^(x163%x164)));

	if (t40 != 2144646311) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = 1U;
	uint16_t x167 = 1552U;
	int32_t x168 = INT32_MIN;
	volatile uint64_t t41 = 3645546820LLU;

	t41 = (x165^(x166^(x167%x168)));

	if (t41 != 18446744073709550062LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = -1;
	volatile uint64_t x172 = 335152268661LLU;
	uint64_t t42 = 7LLU;

	t42 = (x169^(x170^(x171%x172)));

	if (t42 != 73357680570LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = INT16_MIN;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -514979135448LL;
	static volatile uint64_t t43 = 5LLU;

	t43 = (x173^(x174^(x175%x176)));

	if (t43 != 9223371521875673047LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	int64_t x178 = 327861624304568085LL;
	static uint16_t x179 = 1187U;
	int64_t x180 = -1LL;
	volatile int64_t t44 = 109024507LL;

	t44 = (x177^(x178^(x179%x180)));

	if (t44 != -327861624304568086LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 2;
	volatile uint16_t x182 = 16719U;
	uint32_t x183 = 515228369U;
	volatile uint32_t t45 = 362559920U;

	t45 = (x181^(x182^(x183%x184)));

	if (t45 != 515212188U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 107744381624486179LLU;
	int64_t x187 = INT64_MIN;
	static volatile uint64_t t46 = 845634117595429537LLU;

	t46 = (x185^(x186^(x187%x188)));

	if (t46 != 18338999692085065439LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	static int16_t x190 = INT16_MIN;
	uint16_t x191 = 0U;
	int8_t x192 = INT8_MIN;

	t47 = (x189^(x190^(x191%x192)));

	if (t47 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x193 = 7177995U;
	int8_t x194 = INT8_MIN;
	int64_t x195 = -390LL;

	t48 = (x193^(x194^(x195%x196)));

	if (t48 != 7177969LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	volatile int16_t x199 = INT16_MAX;
	volatile uint64_t t49 = 624LLU;

	t49 = (x197^(x198^(x199%x200)));

	if (t49 != 5294493824LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = 0;
	uint64_t x203 = 19489740181500LLU;
	int64_t x204 = -1LL;
	uint64_t t50 = 40LLU;

	t50 = (x201^(x202^(x203%x204)));

	if (t50 != 18446724584474038268LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	int8_t x206 = -1;
	volatile int32_t x208 = 876;
	int32_t t51 = INT32_MIN;

	t51 = (x205^(x206^(x207%x208)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x212 = UINT32_MAX;

	t52 = (x209^(x210^(x211%x212)));

	if (t52 != 449731659566924LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 3050821LL;
	int64_t x215 = -3366763349237785662LL;
	int8_t x216 = -1;
	volatile int64_t t53 = -1LL;

	t53 = (x213^(x214^(x215%x216)));

	if (t53 != -3050821LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	static int16_t x219 = INT16_MIN;
	static int64_t x220 = 3194LL;
	int64_t t54 = -49447036718LL;

	t54 = (x217^(x218^(x219%x220)));

	if (t54 != -369436247550000LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MAX;
	static int32_t x224 = 10902;
	volatile int64_t t55 = -10183044212364LL;

	t55 = (x221^(x222^(x223%x224)));

	if (t55 != -2139416174LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = 0;
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;
	static volatile int8_t x228 = INT8_MIN;

	t56 = (x225^(x226^(x227%x228)));

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int64_t x231 = INT64_MAX;
	volatile int64_t x232 = -1109948214778709960LL;
	static int64_t t57 = 98LL;

	t57 = (x229^(x230^(x231%x232)));

	if (t57 != 343786318625197285LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = INT64_MIN;
	volatile int64_t t58 = -849122422LL;

	t58 = (x233^(x234^(x235%x236)));

	if (t58 != -566201286LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -29;
	volatile int16_t x238 = INT16_MIN;
	volatile int8_t x239 = -1;

	t59 = (x237^(x238^(x239%x240)));

	if (t59 != -32740) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	static int8_t x244 = -31;
	int32_t t60 = -443;

	t60 = (x241^(x242^(x243%x244)));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 3;
	volatile int16_t x246 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	int32_t t61 = 9098235;

	t61 = (x245^(x246^(x247%x248)));

	if (t61 != 32764) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	uint8_t x250 = 0U;
	int32_t x251 = INT32_MIN;
	volatile int16_t x252 = -915;
	static volatile int32_t t62 = -1330777;

	t62 = (x249^(x250^(x251%x252)));

	if (t62 != 2147483040) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 3U;
	uint16_t x254 = UINT16_MAX;
	volatile uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MAX;
	volatile uint64_t t63 = 66035281885LLU;

	t63 = (x253^(x254^(x255%x256)));

	if (t63 != 65523LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x259 = -31328;
	volatile uint64_t x260 = UINT64_MAX;
	uint64_t t64 = 4277780LLU;

	t64 = (x257^(x258^(x259%x260)));

	if (t64 != 13061LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = -1LL;
	uint16_t x262 = 40U;
	int32_t x264 = -428840670;
	volatile int64_t t65 = 2001LL;

	t65 = (x261^(x262^(x263%x264)));

	if (t65 != -47LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -54129;
	volatile int64_t x267 = -8337525009LL;
	int16_t x268 = 350;
	uint64_t t66 = 6354491LLU;

	t66 = (x265^(x266^(x267%x268)));

	if (t66 != 18446744073709497479LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 1374;
	volatile uint32_t x270 = 60581U;
	int16_t x271 = -1;
	uint16_t x272 = 11041U;
	volatile uint32_t t67 = 2U;

	t67 = (x269^(x270^(x271%x272)));

	if (t67 != 4294907396U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = -1;
	int64_t x276 = INT64_MIN;
	volatile int64_t t68 = 9338879319055LL;

	t68 = (x273^(x274^(x275%x276)));

	if (t68 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 2U;
	static uint64_t x280 = 723469152511762LLU;

	t69 = (x277^(x278^(x279%x280)));

	if (t69 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = 55905427415LLU;
	static int16_t x283 = -6052;

	t70 = (x281^(x282^(x283%x284)));

	if (t70 != 55905448740LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = 809936;
	uint32_t t71 = 6120364U;

	t71 = (x285^(x286^(x287%x288)));

	if (t71 != 4294967095U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = INT64_MAX;
	int8_t x291 = 36;
	uint64_t x292 = 3725257938LLU;
	uint64_t t72 = 779375722061LLU;

	t72 = (x289^(x290^(x291%x292)));

	if (t72 != 9223372036836102141LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	uint8_t x296 = UINT8_MAX;
	static int64_t t73 = 31183414LL;

	t73 = (x293^(x294^(x295%x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	uint32_t x298 = 13U;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = INT32_MIN;
	uint32_t t74 = 7U;

	t74 = (x297^(x298^(x299%x300)));

	if (t74 != 4294934770U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 135U;
	int64_t x302 = INT64_MIN;
	int32_t x303 = 5276236;
	int8_t x304 = INT8_MIN;
	static int64_t t75 = -79LL;

	t75 = (x301^(x302^(x303%x304)));

	if (t75 != -9223372036854775605LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	volatile int64_t x307 = 7713628307396394LL;
	uint8_t x308 = UINT8_MAX;
	volatile int64_t t76 = 8273808070573691LL;

	t76 = (x305^(x306^(x307%x308)));

	if (t76 != -2147483503LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -194904998LL;
	int64_t x312 = INT64_MAX;
	volatile int64_t t77 = 7409685LL;

	t77 = (x309^(x310^(x311%x312)));

	if (t77 != -9223372036659839910LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	int16_t x315 = -1;
	static int32_t x316 = -1;
	uint64_t t78 = 11LLU;

	t78 = (x313^(x314^(x315%x316)));

	if (t78 != 127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = 12;
	uint32_t x319 = 77230000U;
	volatile int64_t x320 = INT64_MIN;
	volatile int64_t t79 = -223984401777670LL;

	t79 = (x317^(x318^(x319%x320)));

	if (t79 != 77229989LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	int64_t x322 = 7797LL;
	volatile uint16_t x323 = 3U;
	static volatile int64_t t80 = 8221298LL;

	t80 = (x321^(x322^(x323%x324)));

	if (t80 != -9223372036854768010LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 1651033018027210LLU;
	int32_t x327 = -1;
	int16_t x328 = INT16_MIN;
	uint64_t t81 = 1316021330017LLU;

	t81 = (x325^(x326^(x327%x328)));

	if (t81 != 1651033018027210LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	static uint8_t x331 = 3U;
	volatile int64_t t82 = -1LL;

	t82 = (x329^(x330^(x331%x332)));

	if (t82 != -9223372036854743044LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	uint64_t x334 = 417304948585161761LLU;
	static int8_t x336 = INT8_MIN;
	uint64_t t83 = 274819069234LLU;

	t83 = (x333^(x334^(x335%x336)));

	if (t83 != 18029439125124408353LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;

	t84 = (x337^(x338^(x339%x340)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = -61594;
	static int32_t t85 = -240269145;

	t85 = (x341^(x342^(x343%x344)));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2LLU;
	uint32_t x346 = UINT32_MAX;
	volatile int64_t x347 = -1LL;
	uint64_t x348 = 1993356591973498349LLU;

	t86 = (x345^(x346^(x347%x348)));

	if (t86 != 506534742236032343LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = UINT32_MAX;
	int8_t x350 = 14;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;
	static uint32_t t87 = 263U;

	t87 = (x349^(x350^(x351%x352)));

	if (t87 != 4294967182U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x353 = 0U;
	static volatile int32_t x354 = INT32_MIN;
	static volatile int16_t x355 = 54;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 3424;

	t88 = (x353^(x354^(x355%x356)));

	if (t88 != -2147483594) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile uint64_t x358 = 12293156LLU;
	uint8_t x359 = 44U;
	volatile uint64_t t89 = 47494450LLU;

	t89 = (x357^(x358^(x359%x360)));

	if (t89 != 18446744071574361124LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 1U;
	int8_t x362 = INT8_MIN;

	t90 = (x361^(x362^(x363%x364)));

	if (t90 != -127LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	volatile int8_t x366 = -1;
	volatile int32_t x367 = INT32_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t91 = 572198576309LLU;

	t91 = (x365^(x366^(x367%x368)));

	if (t91 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = UINT64_MAX;
	int64_t x371 = -1LL;
	static int32_t x372 = INT32_MIN;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x369^(x370^(x371%x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	int32_t t93 = -1105084;

	t93 = (x373^(x374^(x375%x376)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -2;
	int32_t x378 = -295027768;
	uint16_t x379 = 2U;
	static uint8_t x380 = 90U;
	static volatile int32_t t94 = 0;

	t94 = (x377^(x378^(x379%x380)));

	if (t94 != 295027764) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -43647LL;
	int8_t x382 = 1;
	static int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MAX;
	static int64_t t95 = 1LL;

	t95 = (x381^(x382^(x383%x384)));

	if (t95 != 43647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	int8_t x388 = -1;
	uint64_t t96 = 25LLU;

	t96 = (x385^(x386^(x387%x388)));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = UINT64_MAX;
	uint32_t x391 = 13U;
	static uint8_t x392 = 45U;
	uint64_t t97 = 1583489LLU;

	t97 = (x389^(x390^(x391%x392)));

	if (t97 != 18446744073709551373LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = 123734462;
	int32_t x396 = -258;
	static int64_t t98 = -2553386662LL;

	t98 = (x393^(x394^(x395%x396)));

	if (t98 != 9223372036731041345LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = 499274506LL;
	static int32_t x399 = INT32_MAX;
	volatile int64_t t99 = 26035310725LL;

	t99 = (x397^(x398^(x399%x400)));

	if (t99 != -1648218891LL) { NG(); } else { ; }
	
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

