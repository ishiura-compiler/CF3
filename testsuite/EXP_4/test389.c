#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = 9U;
int8_t x19 = -1;
uint16_t x20 = 169U;
static int16_t x26 = INT16_MIN;
int64_t x28 = 390217976062902LL;
static int64_t x37 = -3005LL;
int8_t x43 = INT8_MIN;
int32_t x54 = INT32_MAX;
volatile int16_t x59 = -1;
volatile int32_t t9 = -24;
int8_t x75 = INT8_MAX;
uint16_t x78 = 960U;
volatile uint64_t t13 = 254343571086129834LLU;
volatile int8_t x83 = INT8_MAX;
static int8_t x95 = 3;
uint32_t x96 = 1U;
uint64_t t17 = 1049964205LLU;
int32_t x98 = INT32_MIN;
volatile uint16_t x99 = 164U;
static int8_t x114 = INT8_MIN;
volatile int32_t t19 = 8;
volatile int8_t x128 = INT8_MIN;
int16_t x130 = 175;
int8_t x134 = -1;
static int32_t t22 = -7103;
uint64_t t23 = 151768054030LLU;
uint64_t x141 = 8LLU;
static int32_t x159 = -431776;
static int8_t x163 = -1;
uint32_t x164 = 247075U;
uint32_t t28 = UINT32_MAX;
int8_t x170 = -1;
volatile int64_t t29 = 2114636637021LL;
static int64_t x186 = 60017LL;
int16_t x188 = -3;
int8_t x201 = INT8_MIN;
uint32_t t33 = 15695594U;
int64_t x211 = -1LL;
static int16_t x217 = INT16_MAX;
static volatile int64_t x237 = INT64_MIN;
static uint16_t x239 = 4U;
static int16_t x248 = -91;
static uint32_t x249 = 2U;
int8_t x257 = -1;
uint16_t x260 = 1686U;
int16_t x268 = 178;
volatile int32_t x276 = 4456;
static volatile int64_t t46 = -1005351510LL;
int8_t x284 = INT8_MIN;
static volatile int32_t x287 = INT32_MIN;
static uint64_t x293 = UINT64_MAX;
uint8_t x296 = UINT8_MAX;
int16_t x301 = 1455;
uint64_t x309 = 5851LLU;
int8_t x311 = INT8_MAX;
uint16_t x313 = 453U;
int32_t x314 = INT32_MIN;
int32_t x316 = 26;
volatile uint8_t x322 = 43U;
int64_t x326 = -2167243432729LL;
int32_t x327 = 236;
int64_t t59 = -246215624LL;
uint32_t x336 = UINT32_MAX;
volatile uint64_t t60 = UINT64_MAX;
int8_t x339 = -1;
volatile int64_t x340 = -2213589275LL;
uint64_t x353 = 5LLU;
int16_t x356 = 12973;
static volatile uint8_t x367 = UINT8_MAX;
static uint8_t x371 = UINT8_MAX;
uint64_t x379 = 54728LLU;
static int8_t x384 = INT8_MAX;
static uint8_t x391 = 2U;
static int8_t x396 = INT8_MAX;
uint64_t x397 = 2194LLU;
int64_t x401 = -1LL;
int8_t x410 = -1;
static volatile int8_t x411 = INT8_MIN;
uint64_t x423 = UINT64_MAX;
uint64_t x429 = 24690258878LLU;
static int8_t x430 = INT8_MIN;
int64_t x438 = 3009637LL;
uint32_t x448 = UINT32_MAX;
volatile int32_t t83 = 10073;
static uint16_t x455 = 104U;
static int8_t x456 = -1;
volatile int8_t x457 = INT8_MIN;
volatile uint64_t t87 = 118909273LLU;
uint32_t x471 = 354U;
volatile int16_t x476 = INT16_MAX;
volatile int64_t t91 = INT64_MIN;
static uint8_t x487 = UINT8_MAX;
int32_t x492 = -1;
uint16_t x496 = 1U;
static volatile int64_t x505 = -1LL;
uint32_t t97 = 429U;
int16_t x524 = -5992;
int64_t x531 = -1LL;


void f0(void) {
	int8_t x5 = INT8_MIN;
	static volatile uint64_t x6 = 49863LLU;
	volatile int8_t x7 = INT8_MAX;
	int8_t x8 = INT8_MIN;
	uint64_t t0 = 513644244293780058LLU;

	t0 = (x5|(x6/(x7*x8)));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 6U;
	int64_t x10 = -140228158LL;
	int8_t x11 = -1;
	static volatile int64_t t1 = 1LL;

	t1 = (x9|(x10/(x11*x12)));

	if (t1 != 6LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -9122;
	int32_t x14 = -360;
	int16_t x15 = -1;
	uint16_t x16 = 21U;
	volatile int32_t t2 = -44332874;

	t2 = (x13|(x14/(x15*x16)));

	if (t2 != -9121) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MAX;
	int64_t t3 = -94LL;

	t3 = (x17|(x18/(x19*x20)));

	if (t3 != -30441LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int8_t x27 = -5;
	volatile int64_t t4 = 49162751289439LL;

	t4 = (x25|(x26/(x27*x28)));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = 139945;
	volatile uint32_t x35 = UINT32_MAX;
	uint16_t x36 = 25U;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x33|(x34/(x35*x36)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x38 = 2U;
	volatile int8_t x39 = INT8_MIN;
	volatile int32_t x40 = -31808;
	volatile int64_t t6 = 14040LL;

	t6 = (x37|(x38/(x39*x40)));

	if (t6 != -3005LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -47;
	static int64_t x42 = -116LL;
	volatile int16_t x44 = INT16_MIN;
	int64_t t7 = -239LL;

	t7 = (x41|(x42/(x43*x44)));

	if (t7 != -47LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = INT64_MAX;
	static int16_t x55 = INT16_MIN;
	int32_t x56 = -1;
	static int64_t t8 = INT64_MAX;

	t8 = (x53|(x54/(x55*x56)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int16_t x58 = -3;
	uint8_t x60 = 3U;

	t9 = (x57|(x58/(x59*x60)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = -1;
	uint32_t x62 = 35U;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 156339LLU;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x61|(x62/(x63*x64)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x65 = INT32_MIN;
	uint32_t x66 = 7715877U;
	static int8_t x67 = -1;
	uint64_t x68 = 34082088812492982LLU;
	uint64_t t11 = 1316912657196170750LLU;

	t11 = (x65|(x66/(x67*x68)));

	if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = -2635;
	int16_t x74 = -1283;
	int64_t x76 = 64492230774LL;
	int64_t t12 = -17LL;

	t12 = (x73|(x74/(x75*x76)));

	if (t12 != -2635LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 5LL;
	uint64_t x79 = 6962971574429252LLU;
	int8_t x80 = INT8_MIN;

	t13 = (x77|(x78/(x79*x80)));

	if (t13 != 5LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	volatile uint16_t x84 = 157U;
	volatile int64_t t14 = -15582938LL;

	t14 = (x81|(x82/(x83*x84)));

	if (t14 != -63LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x85 = 337U;
	int64_t x86 = -12341912354833LL;
	static uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = INT64_MAX;
	volatile uint64_t t15 = 840801448042698217LLU;

	t15 = (x85|(x86/(x87*x88)));

	if (t15 != 337LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x89 = 0U;
	static int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 713LLU;
	uint64_t t16 = 1611LLU;

	t16 = (x89|(x90/(x91*x92)));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x93 = 496LLU;
	int16_t x94 = INT16_MIN;

	t17 = (x93|(x94/(x95*x96)));

	if (t17 != 1431645178LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x97 = -112779;
	int16_t x100 = 6867;
	volatile int32_t t18 = -13;

	t18 = (x97|(x98/(x99*x100)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -233;
	uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = -59;

	t19 = (x113|(x114/(x115*x116)));

	if (t19 != -233) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x125 = 367LLU;
	int64_t x126 = INT64_MAX;
	volatile uint64_t x127 = 30924499LLU;
	volatile uint64_t t20 = 45782044119LLU;

	t20 = (x125|(x126/(x127*x128)));

	if (t20 != 367LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x129 = 330706U;
	uint16_t x131 = 9693U;
	static volatile int16_t x132 = -1;
	uint32_t t21 = 7076998U;

	t21 = (x129|(x130/(x131*x132)));

	if (t21 != 330706U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = 0;
	volatile int32_t x135 = INT32_MAX;
	int16_t x136 = -1;

	t22 = (x133|(x134/(x135*x136)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x137 = 482379460216459LLU;
	static int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = UINT64_MAX;

	t23 = (x137|(x138/(x139*x140)));

	if (t23 != 482379460216459LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x142 = -1;
	volatile uint16_t x143 = 592U;
	int16_t x144 = INT16_MIN;
	static uint64_t t24 = 2154637510063345180LLU;

	t24 = (x141|(x142/(x143*x144)));

	if (t24 != 8LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x153 = 3374562U;
	int8_t x154 = INT8_MIN;
	int64_t x155 = 86150116374LL;
	int16_t x156 = INT16_MAX;
	volatile int64_t t25 = 835586897284857986LL;

	t25 = (x153|(x154/(x155*x156)));

	if (t25 != 3374562LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x157 = 14U;
	static uint32_t x158 = UINT32_MAX;
	volatile int64_t x160 = -464256189388LL;
	int64_t t26 = 7668LL;

	t26 = (x157|(x158/(x159*x160)));

	if (t26 != 14LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x161 = INT8_MAX;
	static int16_t x162 = 159;
	volatile uint32_t t27 = 523891709U;

	t27 = (x161|(x162/(x163*x164)));

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x165 = -1;
	int16_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	uint32_t x168 = UINT32_MAX;

	t28 = (x165|(x166/(x167*x168)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -1LL;
	static volatile int64_t x171 = INT64_MAX;
	static int8_t x172 = 1;

	t29 = (x169|(x170/(x171*x172)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = 1;
	uint32_t x187 = 2724208U;
	static int64_t t30 = 4LL;

	t30 = (x185|(x186/(x187*x188)));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	static uint64_t x196 = 458215LLU;
	uint64_t t31 = 82900158464870554LLU;

	t31 = (x193|(x194/(x195*x196)));

	if (t31 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t32 = 13U;

	t32 = (x201|(x202/(x203*x204)));

	if (t32 != 4294967168U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = -176440;
	volatile uint16_t x207 = 53U;
	uint32_t x208 = 49693U;

	t33 = (x205|(x206/(x207*x208)));

	if (t33 != 4294936158U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x209 = 13526734U;
	static int64_t x210 = -1LL;
	static int8_t x212 = -1;
	static volatile int64_t t34 = -6040099LL;

	t34 = (x209|(x210/(x211*x212)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x213 = -1;
	uint8_t x214 = 21U;
	int16_t x215 = INT16_MAX;
	volatile int32_t x216 = -39;
	int32_t t35 = 452257006;

	t35 = (x213|(x214/(x215*x216)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;
	int64_t x220 = 342795954227LL;
	int64_t t36 = -466LL;

	t36 = (x217|(x218/(x219*x220)));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = 8326971758869111LL;
	int8_t x222 = -22;
	int32_t x223 = -7275611;
	int64_t x224 = 471286LL;
	int64_t t37 = 10115663LL;

	t37 = (x221|(x222/(x223*x224)));

	if (t37 != 8326971758869111LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x225 = INT8_MIN;
	static uint8_t x226 = 1U;
	uint32_t x227 = 75771505U;
	uint16_t x228 = 3282U;
	volatile uint32_t t38 = 15879U;

	t38 = (x225|(x226/(x227*x228)));

	if (t38 != 4294967168U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x229 = 128U;
	int16_t x230 = INT16_MIN;
	uint32_t x231 = UINT32_MAX;
	uint8_t x232 = UINT8_MAX;
	uint32_t t39 = 519643881U;

	t39 = (x229|(x230/(x231*x232)));

	if (t39 != 128U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x238 = INT64_MIN;
	static uint64_t x240 = 129313412608LLU;
	volatile uint64_t t40 = 1484118380401222879LLU;

	t40 = (x237|(x238/(x239*x240)));

	if (t40 != 9223372036872607237LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = -1;
	int8_t x247 = INT8_MAX;
	int32_t t41 = -176;

	t41 = (x245|(x246/(x247*x248)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x250 = 11U;
	int8_t x251 = INT8_MAX;
	uint64_t x252 = 775807LLU;
	volatile uint64_t t42 = 49951696645122LLU;

	t42 = (x249|(x250/(x251*x252)));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x258 = INT16_MAX;
	static int8_t x259 = -1;
	static volatile int32_t t43 = 5243;

	t43 = (x257|(x258/(x259*x260)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x261 = INT64_MAX;
	int64_t x262 = -1LL;
	uint64_t x263 = 3171869886595186277LLU;
	int8_t x264 = INT8_MIN;
	uint64_t t44 = 3LLU;

	t44 = (x261|(x262/(x263*x264)));

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	volatile int16_t x267 = INT16_MAX;
	int64_t t45 = INT64_MAX;

	t45 = (x265|(x266/(x267*x268)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x273 = 7079;
	uint8_t x274 = 15U;
	volatile int64_t x275 = -274290908542420LL;

	t46 = (x273|(x274/(x275*x276)));

	if (t46 != 7079LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MAX;
	uint16_t x280 = 7U;
	int32_t t47 = 2;

	t47 = (x277|(x278/(x279*x280)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x281 = INT16_MIN;
	static volatile int64_t x282 = INT64_MIN;
	uint8_t x283 = 4U;
	volatile int64_t t48 = 138352409062LL;

	t48 = (x281|(x282/(x283*x284)));

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MAX;
	static uint64_t x288 = UINT64_MAX;
	volatile uint64_t t49 = 6795LLU;

	t49 = (x285|(x286/(x287*x288)));

	if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x289 = 16350LLU;
	int8_t x290 = -1;
	uint32_t x291 = 12524U;
	int16_t x292 = INT16_MIN;
	static uint64_t t50 = 4077LLU;

	t50 = (x289|(x290/(x291*x292)));

	if (t50 != 16351LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x294 = UINT32_MAX;
	static volatile int16_t x295 = -68;
	uint64_t t51 = UINT64_MAX;

	t51 = (x293|(x294/(x295*x296)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x297 = -1LL;
	int64_t x298 = INT64_MIN;
	int64_t x299 = -4944724789426966LL;
	static int8_t x300 = -1;
	volatile int64_t t52 = 2911326997LL;

	t52 = (x297|(x298/(x299*x300)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x302 = INT32_MAX;
	static uint16_t x303 = 4864U;
	int64_t x304 = -1LL;
	int64_t t53 = 4243LL;

	t53 = (x301|(x302/(x303*x304)));

	if (t53 != -440321LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x305 = 52U;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 38U;
	uint16_t x308 = 2941U;
	int32_t t54 = 45229;

	t54 = (x305|(x306/(x307*x308)));

	if (t54 != 52) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x310 = -97515842;
	volatile int32_t x312 = -3924;
	volatile uint64_t t55 = 1555130LLU;

	t55 = (x309|(x310/(x311*x312)));

	if (t55 != 5851LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x315 = -1;
	int32_t t56 = 1031801;

	t56 = (x313|(x314/(x315*x316)));

	if (t56 != 82595781) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = -28;
	int16_t x319 = -1;
	int16_t x320 = -1;
	volatile int32_t t57 = -1;

	t57 = (x317|(x318/(x319*x320)));

	if (t57 != -28) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = INT64_MIN;
	static volatile uint8_t x323 = 60U;
	uint64_t x324 = 2738585756187704LLU;
	static uint64_t t58 = 774856LLU;

	t58 = (x321|(x322/(x323*x324)));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = INT32_MIN;
	int16_t x328 = -1;

	t59 = (x325|(x326/(x327*x328)));

	if (t59 != -1554183356LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x333 = -1;
	uint64_t x334 = 4609865325747060560LLU;
	uint8_t x335 = 10U;

	t60 = (x333|(x334/(x335*x336)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x338 = INT64_MIN;
	volatile int64_t t61 = -444707731136290LL;

	t61 = (x337|(x338/(x339*x340)));

	if (t61 != -4166704338LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x341 = INT16_MIN;
	uint32_t x342 = 674409U;
	int64_t x343 = -1LL;
	int32_t x344 = INT32_MIN;
	int64_t t62 = 0LL;

	t62 = (x341|(x342/(x343*x344)));

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x354 = -1;
	static int16_t x355 = INT16_MIN;
	uint64_t t63 = 9833518630135630LLU;

	t63 = (x353|(x354/(x355*x356)));

	if (t63 != 5LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = -6901195443LL;
	int8_t x362 = INT8_MIN;
	volatile int64_t x363 = INT64_MAX;
	static volatile int64_t x364 = -1LL;
	int64_t t64 = -21860022350619177LL;

	t64 = (x361|(x362/(x363*x364)));

	if (t64 != -6901195443LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 26U;
	uint16_t x368 = 31481U;
	int32_t t65 = -121625410;

	t65 = (x365|(x366/(x367*x368)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x369 = 109U;
	uint16_t x370 = UINT16_MAX;
	volatile int8_t x372 = INT8_MIN;
	static volatile int32_t t66 = -853574858;

	t66 = (x369|(x370/(x371*x372)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x373 = INT8_MIN;
	volatile uint8_t x374 = 21U;
	static int32_t x375 = -1;
	uint64_t x376 = 3407061855230770LLU;
	uint64_t t67 = 11100LLU;

	t67 = (x373|(x374/(x375*x376)));

	if (t67 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x377 = INT8_MAX;
	int64_t x378 = INT64_MAX;
	uint32_t x380 = UINT32_MAX;
	static uint64_t t68 = 2772390107869934317LLU;

	t68 = (x377|(x378/(x379*x380)));

	if (t68 != 39295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x381 = 1U;
	int8_t x382 = -1;
	static uint16_t x383 = UINT16_MAX;
	volatile int32_t t69 = -8184;

	t69 = (x381|(x382/(x383*x384)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = -18;
	uint16_t x387 = 2740U;
	static uint32_t x388 = 1550U;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x385|(x386/(x387*x388)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = 126552952U;
	int32_t x392 = -2512964;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x389|(x390/(x391*x392)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x393 = -1LL;
	int16_t x394 = 2;
	int64_t x395 = -1LL;
	int64_t t72 = 7615164LL;

	t72 = (x393|(x394/(x395*x396)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x398 = INT32_MIN;
	uint16_t x399 = 1U;
	int8_t x400 = -36;
	uint64_t t73 = 162876546921068917LLU;

	t73 = (x397|(x398/(x399*x400)));

	if (t73 != 59652339LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x402 = INT32_MIN;
	uint16_t x403 = 760U;
	int32_t x404 = -1;
	static int64_t t74 = 7091453112LL;

	t74 = (x401|(x402/(x403*x404)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = -201071LL;
	static uint16_t x412 = UINT16_MAX;
	static int64_t t75 = -3564536779122860LL;

	t75 = (x409|(x410/(x411*x412)));

	if (t75 != -201071LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x413 = -446622LL;
	int32_t x414 = -1;
	int16_t x415 = -1;
	volatile uint64_t x416 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x413|(x414/(x415*x416)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x417 = 65U;
	static int32_t x418 = -88364527;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = UINT8_MAX;
	int32_t t77 = 447;

	t77 = (x417|(x418/(x419*x420)));

	if (t77 != 2771) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x421 = INT8_MIN;
	volatile int32_t x422 = 125742183;
	uint32_t x424 = 812172U;
	volatile uint64_t t78 = 128337656548990LLU;

	t78 = (x421|(x422/(x423*x424)));

	if (t78 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x425 = 2U;
	int64_t x426 = INT64_MIN;
	uint8_t x427 = 1U;
	volatile int64_t x428 = INT64_MIN;
	volatile int64_t t79 = 921LL;

	t79 = (x425|(x426/(x427*x428)));

	if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x431 = 1;
	int32_t x432 = INT32_MIN;
	uint64_t t80 = 5790926873996LLU;

	t80 = (x429|(x430/(x431*x432)));

	if (t80 != 24690258878LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = INT16_MAX;
	uint64_t x439 = UINT64_MAX;
	volatile int32_t x440 = INT32_MIN;
	uint64_t t81 = 701795595417471LLU;

	t81 = (x437|(x438/(x439*x440)));

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = -1;
	volatile uint8_t x446 = 3U;
	int32_t x447 = -1;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x445|(x446/(x447*x448)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = INT8_MIN;
	int32_t x450 = INT32_MIN;
	static int16_t x451 = 3476;
	static int8_t x452 = INT8_MIN;

	t83 = (x449|(x450/(x451*x452)));

	if (t83 != -38) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x453 = -1;
	static int16_t x454 = INT16_MIN;
	volatile int32_t t84 = -777313353;

	t84 = (x453|(x454/(x455*x456)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x458 = INT64_MIN;
	int8_t x459 = -1;
	static uint8_t x460 = 3U;
	int64_t t85 = 121LL;

	t85 = (x457|(x458/(x459*x460)));

	if (t85 != -86LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x461 = 1U;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t86 = 64876466;

	t86 = (x461|(x462/(x463*x464)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x465 = -669527;
	volatile uint16_t x466 = 1U;
	int16_t x467 = -1;
	static uint64_t x468 = 226324016977212LLU;

	t87 = (x465|(x466/(x467*x468)));

	if (t87 != 18446744073708882089LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x469 = 17LLU;
	static int16_t x470 = -121;
	static volatile int16_t x472 = INT16_MAX;
	uint64_t t88 = 25219326530860379LLU;

	t88 = (x469|(x470/(x471*x472)));

	if (t88 != 371LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x473 = INT8_MIN;
	uint32_t x474 = 1319U;
	int8_t x475 = 1;
	uint32_t t89 = 171U;

	t89 = (x473|(x474/(x475*x476)));

	if (t89 != 4294967168U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x477 = 142;
	int64_t x478 = INT64_MIN;
	volatile int8_t x479 = INT8_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	volatile int64_t t90 = -1955622501049441LL;

	t90 = (x477|(x478/(x479*x480)));

	if (t90 != 282578800148879LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x481 = INT64_MIN;
	static int8_t x482 = INT8_MIN;
	static uint16_t x483 = 806U;
	int32_t x484 = -1;

	t91 = (x481|(x482/(x483*x484)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x485 = 727U;
	int32_t x486 = INT32_MIN;
	int8_t x488 = INT8_MIN;
	static int32_t t92 = 14;

	t92 = (x485|(x486/(x487*x488)));

	if (t92 != 66519) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x489 = 8028U;
	static int8_t x490 = 1;
	volatile int64_t x491 = INT64_MAX;
	static volatile int64_t t93 = 64266382038626205LL;

	t93 = (x489|(x490/(x491*x492)));

	if (t93 != 8028LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x493 = UINT64_MAX;
	int16_t x494 = -1;
	volatile uint8_t x495 = UINT8_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = (x493|(x494/(x495*x496)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x497 = -1LL;
	int16_t x498 = 69;
	int8_t x499 = -9;
	static int8_t x500 = INT8_MAX;
	volatile int64_t t95 = 169828668685151LL;

	t95 = (x497|(x498/(x499*x500)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x506 = -19045511LL;
	volatile uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MIN;
	int64_t t96 = -104989965591147126LL;

	t96 = (x505|(x506/(x507*x508)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x517 = 41228842;
	uint32_t x518 = 0U;
	static int16_t x519 = INT16_MIN;
	int32_t x520 = 3;

	t97 = (x517|(x518/(x519*x520)));

	if (t97 != 41228842U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x521 = 674051LL;
	int16_t x522 = INT16_MAX;
	int64_t x523 = 28LL;
	int64_t t98 = -106478680LL;

	t98 = (x521|(x522/(x523*x524)));

	if (t98 != 674051LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x529 = INT16_MAX;
	volatile int8_t x530 = INT8_MAX;
	int32_t x532 = INT32_MIN;
	volatile int64_t t99 = 931036023260408325LL;

	t99 = (x529|(x530/(x531*x532)));

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

