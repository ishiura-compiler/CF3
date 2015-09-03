#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x8 = -1;
volatile int32_t x9 = -238;
static int16_t x10 = INT16_MIN;
int8_t x12 = INT8_MIN;
uint32_t t1 = 82085384U;
static uint64_t x21 = 87132435214517942LLU;
int16_t x23 = -1;
int32_t x25 = -1;
int16_t x28 = -1;
volatile uint8_t x30 = 6U;
int32_t x36 = 0;
int32_t x43 = 67737749;
volatile uint64_t x46 = UINT64_MAX;
int64_t x51 = 54958263360LL;
uint16_t x53 = 2U;
uint8_t x59 = UINT8_MAX;
uint64_t x60 = UINT64_MAX;
int32_t x85 = INT32_MIN;
volatile int32_t t15 = -2;
static uint8_t x91 = 7U;
int16_t x98 = -71;
int32_t x100 = 1321;
int16_t x121 = INT16_MIN;
int64_t x123 = -1LL;
int8_t x127 = INT8_MAX;
int64_t x133 = -1LL;
uint8_t x135 = UINT8_MAX;
int64_t x139 = 118866LL;
uint64_t x150 = 23LLU;
volatile int16_t x154 = -5;
int64_t t30 = -64581788231227LL;
int64_t t33 = -805891471LL;
uint16_t x187 = 78U;
int32_t t35 = 632;
volatile int64_t x191 = INT64_MAX;
static int16_t x192 = 1597;
uint8_t x201 = 0U;
int64_t x204 = -1LL;
uint32_t x214 = 374989U;
volatile uint16_t x216 = UINT16_MAX;
uint8_t x218 = 127U;
int16_t x221 = INT16_MIN;
int64_t x223 = INT64_MAX;
static volatile int64_t t42 = -53552127733307LL;
int64_t x236 = 56983LL;
int8_t x238 = -1;
uint32_t x240 = 2674401U;
static uint64_t t45 = 4131041418683LLU;
uint32_t x244 = UINT32_MAX;
volatile int64_t x251 = -4017571594451482LL;
uint64_t t48 = 4LLU;
uint32_t x258 = 1193255054U;
volatile int64_t x268 = INT64_MAX;
uint32_t x275 = 103158U;
int64_t t55 = 747258687641634LL;
int64_t x285 = 18514LL;
static int64_t x288 = INT64_MIN;
uint8_t x292 = UINT8_MAX;
static volatile int32_t t59 = 745347;
volatile int8_t x304 = -3;
uint64_t x313 = UINT64_MAX;
volatile int8_t x317 = -1;
int8_t x328 = 6;
int8_t x331 = -4;
uint64_t t66 = 3565343836858768LLU;
volatile int8_t x334 = 37;
static int8_t x336 = -1;
int64_t t68 = 84LL;
int8_t x344 = -1;
uint64_t x350 = UINT64_MAX;
int8_t x370 = 1;
uint32_t x371 = 31810262U;
static uint32_t x374 = 3654U;
static uint64_t x382 = 65268LLU;
static int16_t x389 = INT16_MIN;
int32_t x397 = -348;
uint32_t x409 = 1601234512U;
uint8_t x417 = UINT8_MAX;
uint16_t x418 = 27U;
volatile int32_t x421 = INT32_MIN;
static uint16_t x427 = 1U;
int8_t x442 = INT8_MIN;
volatile uint32_t t88 = 17984803U;
int8_t x448 = -1;
volatile uint64_t t90 = 534715553027LLU;
static volatile uint32_t x454 = 83345000U;
static int32_t x456 = 2315144;
int8_t x460 = -3;
int32_t x461 = INT32_MIN;
int64_t x472 = 1921236LL;
volatile int64_t t95 = -123003LL;
volatile int8_t x473 = -1;
int32_t t96 = -973777;
uint16_t x477 = 971U;
static uint8_t x478 = UINT8_MAX;
int16_t x479 = INT16_MAX;
int8_t x488 = INT8_MAX;


void f0(void) {
	int16_t x5 = 196;
	static int16_t x6 = -1;
	uint32_t x7 = 30327U;
	static uint32_t t0 = 16013816U;

	t0 = (x5&(x6/(x7-x8)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x11 = 399U;

	t1 = (x9&(x10/(x11-x12)));

	if (t1 != 8149776U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = -1;
	static uint16_t x15 = 1U;
	int8_t x16 = INT8_MAX;
	int64_t t2 = 455213893328LL;

	t2 = (x13&(x14/(x15-x16)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -645;
	int16_t x18 = INT16_MAX;
	static int16_t x19 = INT16_MIN;
	volatile int32_t x20 = -319963836;
	volatile int32_t t3 = 11;

	t3 = (x17&(x18/(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	uint64_t t4 = 1934452446027518481LLU;

	t4 = (x21&(x22/(x23-x24)));

	if (t4 != 86850960237807280LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -1;
	int16_t x27 = INT16_MAX;
	static int32_t t5 = 23;

	t5 = (x25&(x26/(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 47;
	int8_t x31 = -2;
	static int32_t x32 = 433546;
	static volatile int32_t t6 = -737;

	t6 = (x29&(x30/(x31-x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	uint64_t x34 = 443418283709LLU;
	int64_t x35 = INT64_MAX;
	static volatile uint64_t t7 = 0LLU;

	t7 = (x33&(x34/(x35-x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	volatile int16_t x42 = -1;
	int32_t x44 = INT32_MAX;
	static int64_t t8 = -85537539330731262LL;

	t8 = (x41&(x42/(x43-x44)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = INT8_MIN;
	int8_t x47 = -2;
	volatile int64_t x48 = -1LL;
	volatile uint64_t t9 = 0LLU;

	t9 = (x45&(x46/(x47-x48)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	int64_t x50 = INT64_MAX;
	uint16_t x52 = UINT16_MAX;
	static volatile int64_t t10 = 1LL;

	t10 = (x49&(x50/(x51-x52)));

	if (t10 != 167825227LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x54 = INT8_MIN;
	uint8_t x55 = 89U;
	int16_t x56 = 0;
	int32_t t11 = 20;

	t11 = (x53&(x54/(x55-x56)));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 0;
	static int32_t x58 = INT32_MAX;
	volatile uint64_t t12 = 1845056904583583277LLU;

	t12 = (x57&(x58/(x59-x60)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	static int64_t x62 = -7954300LL;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile int64_t t13 = 54451017644935883LL;

	t13 = (x61&(x62/(x63-x64)));

	if (t13 != 32647LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 148U;
	int16_t x74 = INT16_MIN;
	static uint64_t x75 = 2857526584724602LLU;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t14 = 381361305059465LLU;

	t14 = (x73&(x74/(x75-x76)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x86 = -1;
	int32_t x87 = -1;
	int16_t x88 = INT16_MIN;

	t15 = (x85&(x86/(x87-x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x89 = INT32_MIN;
	uint16_t x90 = 29U;
	int32_t x92 = -2044654;
	int32_t t16 = 655238912;

	t16 = (x89&(x90/(x91-x92)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x93 = 52130395U;
	uint32_t x94 = 1983964U;
	static int32_t x95 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;
	uint32_t t17 = 1770U;

	t17 = (x93&(x94/(x95-x96)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x97 = UINT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	static volatile int32_t t18 = 778014;

	t18 = (x97&(x98/(x99-x100)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MAX;
	static int16_t x102 = INT16_MIN;
	static uint64_t x103 = 569LLU;
	uint8_t x104 = 17U;
	volatile uint64_t t19 = 2883LLU;

	t19 = (x101&(x102/(x103-x104)));

	if (t19 != 1525024560LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = UINT64_MAX;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = INT32_MAX;
	volatile uint8_t x112 = UINT8_MAX;
	uint64_t t20 = 150386907LLU;

	t20 = (x109&(x110/(x111-x112)));

	if (t20 != 8589935616LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x122 = -64996778640107LL;
	int8_t x124 = INT8_MAX;
	volatile int64_t t21 = 396325543332000LL;

	t21 = (x121&(x122/(x123-x124)));

	if (t21 != 507787313152LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = 388296035LL;
	static int8_t x126 = 0;
	uint32_t x128 = UINT32_MAX;
	int64_t t22 = 188LL;

	t22 = (x125&(x126/(x127-x128)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MIN;
	static volatile int8_t x131 = INT8_MIN;
	int8_t x132 = -1;
	volatile int64_t t23 = 12760797830LL;

	t23 = (x129&(x130/(x131-x132)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x134 = -1;
	int8_t x136 = INT8_MIN;
	int64_t t24 = 13991281848858050LL;

	t24 = (x133&(x134/(x135-x136)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = 1576178;
	int16_t x140 = INT16_MAX;
	static volatile int64_t t25 = -93250085385LL;

	t25 = (x137&(x138/(x139-x140)));

	if (t25 != 18LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = 13;
	int64_t x146 = INT64_MAX;
	static uint32_t x147 = 4U;
	uint64_t x148 = 66102293768338624LLU;
	volatile uint64_t t26 = 453588831LLU;

	t26 = (x145&(x146/(x147-x148)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = INT32_MIN;
	int32_t x151 = 5453;
	volatile uint16_t x152 = 15533U;
	volatile uint64_t t27 = 41816LLU;

	t27 = (x149&(x150/(x151-x152)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x155 = 103U;
	static int32_t x156 = 259825057;
	int32_t t28 = 0;

	t28 = (x153&(x154/(x155-x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = -994647033584731LL;
	uint64_t x162 = 7LLU;
	int64_t x163 = -6338733129715LL;
	uint8_t x164 = 1U;
	uint64_t t29 = 1052161963325402547LLU;

	t29 = (x161&(x162/(x163-x164)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = INT32_MAX;
	volatile int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = -773270528;

	t30 = (x165&(x166/(x167-x168)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x169 = -1;
	volatile uint8_t x170 = 18U;
	static int32_t x171 = -7100335;
	int8_t x172 = INT8_MIN;
	int32_t t31 = -74211807;

	t31 = (x169&(x170/(x171-x172)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = INT64_MIN;
	volatile int16_t x174 = -428;
	static uint16_t x175 = 3U;
	static int32_t x176 = -1;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x173&(x174/(x175-x176)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x177 = 7U;
	int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;

	t33 = (x177&(x178/(x179-x180)));

	if (t33 != 6LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -13LL;
	int16_t x182 = INT16_MIN;
	int8_t x183 = -1;
	static int64_t x184 = -31LL;
	volatile int64_t t34 = 17005186288695LL;

	t34 = (x181&(x182/(x183-x184)));

	if (t34 != -1104LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x186 = 23354U;
	int8_t x188 = -1;

	t35 = (x185&(x186/(x187-x188)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 6598U;
	uint64_t x190 = 108LLU;
	uint64_t t36 = 1960392288LLU;

	t36 = (x189&(x190/(x191-x192)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x193 = 0;
	int32_t x194 = 4;
	uint16_t x195 = 992U;
	volatile uint8_t x196 = 19U;
	int32_t t37 = 1552;

	t37 = (x193&(x194/(x195-x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x202 = -1;
	int32_t x203 = -871787;
	volatile int64_t t38 = -16396964335044LL;

	t38 = (x201&(x202/(x203-x204)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int64_t x210 = 10LL;
	uint32_t x211 = 0U;
	int8_t x212 = 6;
	volatile int64_t t39 = 1620979LL;

	t39 = (x209&(x210/(x211-x212)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x213 = INT64_MAX;
	uint8_t x215 = UINT8_MAX;
	static int64_t t40 = -106638697LL;

	t40 = (x213&(x214/(x215-x216)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = 3993657;
	uint8_t x219 = 3U;
	volatile uint32_t x220 = UINT32_MAX;
	static uint32_t t41 = 765U;

	t41 = (x217&(x218/(x219-x220)));

	if (t41 != 25U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x222 = INT64_MIN;
	volatile int8_t x224 = 0;

	t42 = (x221&(x222/(x223-x224)));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = -157511;
	volatile int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MIN;
	int32_t x228 = 16620;
	int32_t t43 = -585035313;

	t43 = (x225&(x226/(x227-x228)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x233 = 73688113509766430LLU;
	int8_t x234 = 23;
	uint16_t x235 = 22U;
	uint64_t t44 = 35612221645LLU;

	t44 = (x233&(x234/(x235-x236)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MIN;
	static uint64_t x239 = UINT64_MAX;

	t45 = (x237&(x238/(x239-x240)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = 3;
	int8_t x242 = 0;
	int32_t x243 = INT32_MIN;
	volatile uint32_t t46 = 92U;

	t46 = (x241&(x242/(x243-x244)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = -1LL;
	static volatile uint16_t x246 = 7064U;
	volatile int16_t x247 = -14;
	volatile int64_t x248 = -1LL;
	int64_t t47 = 1878920LL;

	t47 = (x245&(x246/(x247-x248)));

	if (t47 != -543LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x249 = 16U;
	int8_t x250 = INT8_MIN;
	volatile uint64_t x252 = 9334LLU;

	t48 = (x249&(x250/(x251-x252)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x257 = 7454U;
	uint64_t x259 = 3LLU;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t49 = 153082261LLU;

	t49 = (x257&(x258/(x259-x260)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = -37860359703155350LL;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MAX;
	volatile int64_t t50 = 38781681LL;

	t50 = (x261&(x262/(x263-x264)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = INT8_MAX;
	int16_t x266 = -1;
	uint8_t x267 = 3U;
	int64_t t51 = -1979936LL;

	t51 = (x265&(x266/(x267-x268)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = -8;
	int8_t x271 = INT8_MAX;
	int16_t x272 = 123;
	uint64_t t52 = 1530486LLU;

	t52 = (x269&(x270/(x271-x272)));

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = INT64_MAX;
	uint16_t x276 = 3U;
	int64_t t53 = 4072LL;

	t53 = (x273&(x274/(x275-x276)));

	if (t53 != 118995846LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = -1;
	int64_t x280 = -88610250645324LL;
	uint64_t t54 = 1436394875LLU;

	t54 = (x277&(x278/(x279-x280)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	uint8_t x283 = UINT8_MAX;
	static int16_t x284 = -14;

	t55 = (x281&(x282/(x283-x284)));

	if (t55 != 48239LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x286 = 1;
	int32_t x287 = INT32_MIN;
	volatile int64_t t56 = 4257387983354663718LL;

	t56 = (x285&(x286/(x287-x288)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x289 = UINT16_MAX;
	volatile int32_t x290 = INT32_MAX;
	uint16_t x291 = UINT16_MAX;
	int32_t t57 = 202129;

	t57 = (x289&(x290/(x291-x292)));

	if (t57 != 32896) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = INT16_MAX;
	uint16_t x294 = 0U;
	volatile int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;
	int64_t t58 = -3LL;

	t58 = (x293&(x294/(x295-x296)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x297 = INT32_MAX;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = 25327511;
	int16_t x300 = INT16_MIN;

	t59 = (x297&(x298/(x299-x300)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x301 = 1U;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = 0;
	volatile uint32_t t60 = 2791044U;

	t60 = (x301&(x302/(x303-x304)));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x305 = 0;
	static int64_t x306 = INT64_MIN;
	static int32_t x307 = -15348;
	static uint8_t x308 = UINT8_MAX;
	volatile int64_t t61 = -5269143297613LL;

	t61 = (x305&(x306/(x307-x308)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x309 = 211U;
	int8_t x310 = INT8_MIN;
	int64_t x311 = -92470068035LL;
	int16_t x312 = -64;
	volatile int64_t t62 = 13417LL;

	t62 = (x309&(x310/(x311-x312)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x314 = UINT8_MAX;
	uint8_t x315 = UINT8_MAX;
	uint32_t x316 = 391U;
	volatile uint64_t t63 = 4626973181969452LLU;

	t63 = (x313&(x314/(x315-x316)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x318 = 104U;
	uint64_t x319 = 1803317105LLU;
	int8_t x320 = INT8_MIN;
	static uint64_t t64 = 92LLU;

	t64 = (x317&(x318/(x319-x320)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = 147U;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MAX;
	volatile int64_t t65 = 263432930LL;

	t65 = (x325&(x326/(x327-x328)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 253LLU;
	int64_t x332 = -1LL;

	t66 = (x329&(x330/(x331-x332)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x333 = INT16_MAX;
	int32_t x335 = INT32_MIN;
	static int32_t t67 = 102;

	t67 = (x333&(x334/(x335-x336)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x337 = -1;
	int8_t x338 = INT8_MIN;
	volatile int32_t x339 = 3;
	volatile int64_t x340 = 1LL;

	t68 = (x337&(x338/(x339-x340)));

	if (t68 != -64LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x341 = 25;
	static uint32_t x342 = 28840U;
	uint16_t x343 = 5U;
	uint32_t t69 = 200956037U;

	t69 = (x341&(x342/(x343-x344)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = INT32_MIN;
	int8_t x351 = 0;
	uint32_t x352 = 270U;
	volatile uint64_t t70 = 96LLU;

	t70 = (x349&(x350/(x351-x352)));

	if (t70 != 4294967296LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = -1;
	volatile int16_t x354 = -13296;
	uint8_t x355 = 29U;
	static int32_t x356 = -1;
	volatile int32_t t71 = 109253;

	t71 = (x353&(x354/(x355-x356)));

	if (t71 != -443) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x357 = INT16_MAX;
	int16_t x358 = INT16_MAX;
	static uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MAX;
	uint32_t t72 = 4964U;

	t72 = (x357&(x358/(x359-x360)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -1;
	int16_t x362 = INT16_MIN;
	volatile int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = 27U;
	volatile int32_t t73 = 1;

	t73 = (x361&(x362/(x363-x364)));

	if (t73 != 211) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile uint64_t x372 = 1507055928457277626LLU;
	static uint64_t t74 = 28817351208528LLU;

	t74 = (x369&(x370/(x371-x372)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x373 = 286331925455LLU;
	int64_t x375 = -2067365LL;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t75 = 1250758369LLU;

	t75 = (x373&(x374/(x375-x376)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = -1208285;
	int16_t x379 = INT16_MIN;
	static int32_t x380 = 0;
	int32_t t76 = 232;

	t76 = (x377&(x378/(x379-x380)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = -1;
	uint32_t x383 = 1960431U;
	uint64_t x384 = UINT64_MAX;
	uint64_t t77 = 6598349476603LLU;

	t77 = (x381&(x382/(x383-x384)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x390 = INT16_MIN;
	static uint64_t x391 = 7427288332517LLU;
	int8_t x392 = INT8_MAX;
	uint64_t t78 = 1573LLU;

	t78 = (x389&(x390/(x391-x392)));

	if (t78 != 2457600LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x393 = INT32_MIN;
	uint16_t x394 = 24579U;
	uint32_t x395 = 0U;
	int64_t x396 = -27340188548568LL;
	volatile int64_t t79 = 45003343783740LL;

	t79 = (x393&(x394/(x395-x396)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x398 = 2LLU;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t80 = 19934168137LLU;

	t80 = (x397&(x398/(x399-x400)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x401 = -48;
	static uint32_t x402 = UINT32_MAX;
	int64_t x403 = INT64_MAX;
	int32_t x404 = 11186;
	static volatile int64_t t81 = -22LL;

	t81 = (x401&(x402/(x403-x404)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x410 = 1322;
	static int16_t x411 = INT16_MIN;
	static int32_t x412 = INT32_MIN;
	volatile uint32_t t82 = 371831821U;

	t82 = (x409&(x410/(x411-x412)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x413 = INT16_MIN;
	volatile int32_t x414 = INT32_MIN;
	uint32_t x415 = 2766U;
	int16_t x416 = -1;
	uint32_t t83 = 1953U;

	t83 = (x413&(x414/(x415-x416)));

	if (t83 != 753664U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x419 = 431472959462070LLU;
	int8_t x420 = 3;
	volatile uint64_t t84 = 249608339288731LLU;

	t84 = (x417&(x418/(x419-x420)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x422 = INT16_MAX;
	int32_t x423 = -1;
	int16_t x424 = INT16_MIN;
	int32_t t85 = 4723019;

	t85 = (x421&(x422/(x423-x424)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x425 = 0U;
	volatile uint64_t x426 = UINT64_MAX;
	uint8_t x428 = 30U;
	static uint64_t t86 = 3LLU;

	t86 = (x425&(x426/(x427-x428)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x433 = -1;
	volatile uint16_t x434 = UINT16_MAX;
	volatile int16_t x435 = INT16_MAX;
	uint16_t x436 = 1U;
	volatile int32_t t87 = 19;

	t87 = (x433&(x434/(x435-x436)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x441 = INT8_MIN;
	uint32_t x443 = 266U;
	int16_t x444 = INT16_MIN;

	t88 = (x441&(x442/(x443-x444)));

	if (t88 != 129920U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = 3;
	volatile int64_t x446 = INT64_MIN;
	uint32_t x447 = 407U;
	volatile int64_t t89 = -4448726703247954116LL;

	t89 = (x445&(x446/(x447-x448)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x449 = -1;
	int16_t x450 = -1;
	static int8_t x451 = INT8_MAX;
	uint64_t x452 = 0LLU;

	t90 = (x449&(x450/(x451-x452)));

	if (t90 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x453 = 2901U;
	int32_t x455 = -1877;
	volatile uint32_t t91 = 158721U;

	t91 = (x453&(x454/(x455-x456)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x457 = 0U;
	int64_t x458 = -1LL;
	int8_t x459 = -1;
	int64_t t92 = -1527548LL;

	t92 = (x457&(x458/(x459-x460)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x462 = -1;
	volatile uint8_t x463 = 26U;
	int32_t x464 = INT32_MAX;
	volatile int32_t t93 = 286696309;

	t93 = (x461&(x462/(x463-x464)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 319089LLU;
	static volatile int64_t x467 = INT64_MAX;
	uint32_t x468 = 93173U;
	static uint64_t t94 = 2686851LLU;

	t94 = (x465&(x466/(x467-x468)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x469 = -1;
	uint8_t x470 = 9U;
	static uint32_t x471 = 845081153U;

	t95 = (x469&(x470/(x471-x472)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x474 = INT32_MIN;
	int32_t x475 = 93313034;
	static int32_t x476 = INT32_MAX;

	t96 = (x473&(x474/(x475-x476)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x480 = 296U;
	static int32_t t97 = 23;

	t97 = (x477&(x478/(x479-x480)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x481 = -2265;
	uint8_t x482 = 23U;
	int16_t x483 = INT16_MIN;
	uint8_t x484 = 3U;
	int32_t t98 = 16191;

	t98 = (x481&(x482/(x483-x484)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x485 = UINT16_MAX;
	uint64_t x486 = UINT64_MAX;
	int16_t x487 = 1125;
	static uint64_t t99 = 12684946174LLU;

	t99 = (x485&(x486/(x487-x488)));

	if (t99 != 19437LLU) { NG(); } else { ; }
	
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

