#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = -20625763743841215LL;
volatile int64_t t0 = 76213LL;
volatile uint64_t t1 = 3928424024150LLU;
uint32_t x10 = 2911205U;
volatile int8_t x14 = 1;
uint16_t x18 = UINT16_MAX;
int64_t x19 = 1060715670318184LL;
int16_t x20 = INT16_MAX;
uint16_t x24 = 26107U;
int16_t x26 = INT16_MIN;
static int8_t x30 = -1;
volatile uint64_t x43 = UINT64_MAX;
static volatile uint16_t x44 = UINT16_MAX;
static volatile int32_t t11 = 2980880;
volatile uint8_t x50 = 2U;
static volatile uint16_t x66 = 2U;
static int8_t x68 = INT8_MIN;
static int64_t x76 = 4LL;
static uint16_t x77 = UINT16_MAX;
int32_t x79 = INT32_MIN;
int64_t t17 = 25309622308LL;
volatile uint32_t x84 = 190734246U;
static int64_t x91 = INT64_MAX;
uint16_t x100 = 108U;
static volatile uint64_t x112 = 442328082LLU;
volatile uint64_t t24 = 6834165924828975064LLU;
volatile int8_t x114 = INT8_MAX;
int8_t x117 = -7;
static int32_t x126 = -8;
static int64_t t27 = -378742675699712LL;
int64_t x147 = INT64_MIN;
static uint16_t x150 = 0U;
volatile int64_t x159 = -1LL;
uint16_t x169 = UINT16_MAX;
int64_t x173 = INT64_MIN;
volatile int16_t x174 = INT16_MAX;
uint64_t x177 = 8178767LLU;
static int8_t x178 = INT8_MAX;
volatile uint64_t t37 = 6455806LLU;
int8_t x187 = 1;
int64_t t38 = 93983224LL;
uint16_t x197 = 1U;
int64_t x200 = -2831880986LL;
uint64_t t42 = 2596799LLU;
static volatile uint32_t t43 = 2U;
int32_t x222 = -23553;
volatile int32_t x227 = 726;
int16_t x230 = 17;
static volatile uint64_t x234 = 255715332082278LLU;
volatile uint64_t x237 = UINT64_MAX;
int32_t x238 = INT32_MIN;
int8_t x240 = 1;
int16_t x243 = -227;
int32_t x246 = INT32_MIN;
int16_t x250 = INT16_MIN;
int32_t x254 = 76;
volatile int64_t t52 = 978076126005830487LL;
int16_t x258 = 1;
static int32_t x265 = INT32_MIN;
static int64_t x266 = 396550919417989LL;
volatile int64_t t54 = 128365284049718LL;
int64_t x279 = -1LL;
volatile int64_t x283 = -1LL;
uint16_t x299 = UINT16_MAX;
int8_t x303 = -4;
int32_t t62 = -84;
uint32_t x308 = 2U;
static int16_t x315 = -1;
int8_t x317 = INT8_MAX;
int64_t x320 = INT64_MIN;
static volatile int16_t x329 = INT16_MIN;
uint32_t t70 = 11026U;
static int32_t x342 = INT32_MIN;
static int32_t t72 = -140229037;
volatile int32_t t73 = -1;
volatile int64_t t74 = -20913497426LL;
volatile int64_t x353 = -7335887341LL;
uint16_t x354 = 21U;
int16_t x357 = INT16_MIN;
static int32_t x362 = INT32_MIN;
int64_t x375 = 6932LL;
static int64_t x381 = 8935299794275LL;
int64_t x385 = INT64_MAX;
uint64_t t83 = 52344503LLU;
static int8_t x397 = INT8_MIN;
static int16_t x400 = INT16_MIN;
uint8_t x402 = 0U;
volatile uint64_t t85 = 2417030055LLU;
int32_t x405 = -1;
uint32_t x406 = 450336815U;
static int32_t x424 = INT32_MIN;
volatile int32_t x429 = -1;
volatile uint16_t x443 = 0U;
volatile int32_t t95 = -3526570;
static volatile int64_t t96 = 1123579645LL;
uint32_t x462 = 913441U;
uint32_t x464 = UINT32_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = 14651568LL;

	t0 = (x1^((x2-x3)+x4));

	if (t0 != 20625763758519185LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static uint32_t x6 = 653058362U;
	int8_t x7 = INT8_MIN;
	uint64_t x8 = 21LLU;

	t1 = (x5^((x6-x7)+x8));

	if (t1 != 653058352LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 5428063511LLU;
	volatile uint32_t x11 = 175935U;
	uint8_t x12 = 48U;
	uint64_t t2 = 0LLU;

	t2 = (x9^((x10-x11)+x12));

	if (t2 != 5429531073LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -40657628555204LL;
	int32_t x15 = 0;
	static int16_t x16 = INT16_MIN;
	static volatile int64_t t3 = 255800824625775LL;

	t3 = (x13^((x14-x15)+x16));

	if (t3 != 40657628534845LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = INT8_MIN;
	volatile int64_t t4 = 271634449LL;

	t4 = (x17^((x18-x19)+x20));

	if (t4 != 1060715670219798LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1042131;
	uint32_t x22 = 91U;
	static int8_t x23 = INT8_MIN;
	static uint32_t t5 = 1251212500U;

	t5 = (x21^((x22-x23)+x24));

	if (t5 != 1015813U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static volatile int8_t x27 = -2;
	uint32_t x28 = UINT32_MAX;
	int64_t t6 = 318228057476707417LL;

	t6 = (x25^((x26-x27)+x28));

	if (t6 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -3171;
	volatile int64_t x31 = -8LL;
	static uint32_t x32 = 669258U;
	int64_t t7 = -2193124495430040LL;

	t7 = (x29^((x30-x31)+x32));

	if (t7 != -670260LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint64_t x34 = 882276862219LLU;
	uint8_t x35 = 68U;
	volatile int16_t x36 = INT16_MIN;
	volatile uint64_t t8 = 26472LLU;

	t8 = (x33^((x34-x35)+x36));

	if (t8 != 18446743191432693959LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = -3;
	uint64_t x39 = 68219LLU;
	uint16_t x40 = 6U;
	uint64_t t9 = 4548685106504572569LLU;

	t9 = (x37^((x38-x39)+x40));

	if (t9 != 68104LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint16_t x42 = 1751U;
	uint64_t t10 = 2443203LLU;

	t10 = (x41^((x42-x43)+x44));

	if (t10 != 18446744073709484328LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x46 = INT16_MAX;
	static int32_t x47 = -1;
	volatile uint8_t x48 = UINT8_MAX;

	t11 = (x45^((x46-x47)+x48));

	if (t11 != -33024) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 92U;
	int32_t x51 = INT32_MAX;
	volatile int8_t x52 = 8;
	volatile int32_t t12 = 4635;

	t12 = (x49^((x50-x51)+x52));

	if (t12 != -2147483561) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MAX;
	static int64_t x63 = INT64_MAX;
	uint8_t x64 = UINT8_MAX;
	static volatile int64_t t13 = 13774LL;

	t13 = (x61^((x62-x63)+x64));

	if (t13 != -2147483393LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x67 = UINT32_MAX;
	int64_t t14 = 10LL;

	t14 = (x65^((x66-x67)+x68));

	if (t14 != -9223372032559808637LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x69 = 3U;
	int32_t x70 = INT32_MIN;
	volatile uint64_t x71 = UINT64_MAX;
	static uint32_t x72 = UINT32_MAX;
	uint64_t t15 = 36LLU;

	t15 = (x69^((x70-x71)+x72));

	if (t15 != 2147483651LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 258708U;
	int16_t x74 = -1;
	uint64_t x75 = 1959767285LLU;
	uint64_t t16 = 2789456580880849LLU;

	t16 = (x73^((x74-x75)+x76));

	if (t16 != 18446744071750001050LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = INT8_MIN;
	static int64_t x80 = 26651274106LL;

	t17 = (x77^((x78-x79)+x80));

	if (t17 != 28798801157LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	volatile uint64_t x83 = 794LLU;
	volatile uint64_t t18 = 2594LLU;

	t18 = (x81^((x82-x83)+x84));

	if (t18 != 18446744073518818164LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = UINT16_MAX;
	uint16_t x86 = 1U;
	volatile uint64_t x87 = 13LLU;
	int16_t x88 = 5;
	uint64_t t19 = 917LLU;

	t19 = (x85^((x86-x87)+x88));

	if (t19 != 18446744073709486086LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 72383530LL;
	int64_t x90 = INT64_MAX;
	static int8_t x92 = 3;
	int64_t t20 = -1588994831LL;

	t20 = (x89^((x90-x91)+x92));

	if (t20 != 72383529LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -1LL;
	volatile int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	volatile int64_t t21 = 79976346LL;

	t21 = (x97^((x98-x99)+x100));

	if (t21 != -9223372036854743149LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = -44;
	int16_t x102 = -1;
	volatile uint16_t x103 = 729U;
	static int16_t x104 = 20;
	volatile int32_t t22 = -2272060;

	t22 = (x101^((x102-x103)+x104));

	if (t22 != 750) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = 90LL;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = 3058738;
	volatile int64_t t23 = 2552613LL;

	t23 = (x105^((x106-x107)+x108));

	if (t23 != 3124328LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x109 = 0;
	int8_t x110 = -1;
	int32_t x111 = -1;

	t24 = (x109^((x110-x111)+x112));

	if (t24 != 442328082LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x115 = 8246U;
	int32_t x116 = -730;
	volatile int32_t t25 = 338940405;

	t25 = (x113^((x114-x115)+x116));

	if (t25 != -56688) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 99155U;
	volatile int64_t t26 = -43123763LL;

	t26 = (x117^((x118-x119)+x120));

	if (t26 != -9223372034707391318LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x125 = -1LL;
	volatile int64_t x127 = -1LL;
	static int16_t x128 = 1764;

	t27 = (x125^((x126-x127)+x128));

	if (t27 != -1758LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MAX;
	static int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = 274991181762172LLU;
	uint64_t t28 = 289LLU;

	t28 = (x129^((x130-x131)+x132));

	if (t28 != 274991181787396LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 47U;
	int8_t x134 = 0;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = 101;
	int32_t t29 = 75;

	t29 = (x133^((x134-x135)+x136));

	if (t29 != -65463) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = 89307463452642LLU;
	static uint8_t x148 = UINT8_MAX;
	static volatile uint64_t t30 = 1443524455LLU;

	t30 = (x145^((x146-x147)+x148));

	if (t30 != 89307463452897LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x149 = -1342;
	uint64_t x151 = 293816655404004LLU;
	int16_t x152 = -1;
	uint64_t t31 = 42965097512LLU;

	t31 = (x149^((x150-x151)+x152));

	if (t31 != 293816655404761LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	int8_t x155 = 0;
	volatile int8_t x156 = -1;
	int32_t t32 = 3;

	t32 = (x153^((x154-x155)+x156));

	if (t32 != 2147450879) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MAX;
	static volatile uint8_t x160 = 4U;
	volatile int64_t t33 = -6149681LL;

	t33 = (x157^((x158-x159)+x160));

	if (t33 != 4294967163LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = -1;
	static int8_t x166 = INT8_MAX;
	uint64_t x167 = 8442767067LLU;
	uint16_t x168 = 8U;
	uint64_t t34 = 775563LLU;

	t34 = (x165^((x166-x167)+x168));

	if (t34 != 8442766931LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x170 = 0U;
	static uint64_t x171 = 820904207LLU;
	int64_t x172 = 156LL;
	uint64_t t35 = 55293LLU;

	t35 = (x169^((x170-x171)+x172));

	if (t35 != 18446744072888582258LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x175 = -1962LL;
	static volatile int16_t x176 = INT16_MAX;
	int64_t t36 = 39816LL;

	t36 = (x173^((x174-x175)+x176));

	if (t36 != -9223372036854708312LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x179 = 7562170402665LLU;
	volatile int16_t x180 = INT16_MAX;

	t37 = (x177^((x178-x179)+x180));

	if (t37 != 18446736511546799450LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = -259645386555766977LL;
	int64_t x186 = -1LL;
	uint8_t x188 = 6U;

	t38 = (x185^((x186-x187)+x188));

	if (t38 != -259645386555766981LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = 0;
	int16_t x190 = -2778;
	uint8_t x191 = 1U;
	uint32_t x192 = 0U;
	uint32_t t39 = 3521U;

	t39 = (x189^((x190-x191)+x192));

	if (t39 != 4294964517U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t40 = 8506162274094000786LLU;

	t40 = (x193^((x194-x195)+x196));

	if (t40 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x198 = -1;
	int16_t x199 = INT16_MAX;
	static volatile int64_t t41 = -161586183959LL;

	t41 = (x197^((x198-x199)+x200));

	if (t41 != -2831913753LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x205 = -6;
	uint64_t x206 = 0LLU;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = -1;

	t42 = (x205^((x206-x207)+x208));

	if (t42 != 250LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MAX;
	uint8_t x215 = 1U;
	static uint32_t x216 = 1827855769U;

	t43 = (x213^((x214-x215)+x216));

	if (t43 != 319627880U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x221 = 118U;
	static int64_t x223 = -1LL;
	int8_t x224 = INT8_MIN;
	static int64_t t44 = -4551387LL;

	t44 = (x221^((x222-x223)+x224));

	if (t44 != -23562LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = 1536LLU;
	static uint64_t x228 = 31231159LLU;
	uint64_t t45 = 532585596424952LLU;

	t45 = (x225^((x226-x227)+x228));

	if (t45 != 9223372036886007777LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	static volatile int64_t t46 = 964255LL;

	t46 = (x229^((x230-x231)+x232));

	if (t46 != -9223372032559841298LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x233 = INT16_MAX;
	int32_t x235 = INT32_MIN;
	int64_t x236 = -1LL;
	volatile uint64_t t47 = 42804028LLU;

	t47 = (x233^((x234-x235)+x236));

	if (t47 != 255717479560602LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x239 = INT64_MIN;
	uint64_t t48 = 7248814428LLU;

	t48 = (x237^((x238-x239)+x240));

	if (t48 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = 3081LL;
	volatile int8_t x242 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t49 = -198194175209096LL;

	t49 = (x241^((x242-x243)+x244));

	if (t49 != -9223372036854772630LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int64_t x247 = 18622141LL;
	int16_t x248 = INT16_MIN;
	int64_t t50 = -11040978782LL;

	t50 = (x245^((x246-x247)+x248));

	if (t50 != -2128828740LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x249 = -1LL;
	static volatile int8_t x251 = INT8_MIN;
	volatile uint8_t x252 = 1U;
	volatile int64_t t51 = -2897LL;

	t51 = (x249^((x250-x251)+x252));

	if (t51 != 32638LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x253 = -1;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = 31051LL;

	t52 = (x253^((x254-x255)+x256));

	if (t52 != 34407LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = 12484597243LL;
	volatile int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int64_t t53 = 47106236274LL;

	t53 = (x257^((x258-x259)+x260));

	if (t53 != 12484597242LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x267 = -62LL;
	int8_t x268 = 10;

	t54 = (x265^((x266-x267)+x268));

	if (t54 != -396551299010355LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = 15;
	int32_t x271 = 111694;
	int64_t x272 = -1894940646224001665LL;
	int64_t t55 = -2632431LL;

	t55 = (x269^((x270-x271)+x272));

	if (t55 != 1894940646224113344LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = INT32_MAX;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = 1;
	static int16_t x276 = 654;
	volatile uint32_t t56 = 0U;

	t56 = (x273^((x274-x275)+x276));

	if (t56 != 2147482995U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = -1LL;
	int64_t x278 = -1LL;
	int32_t x280 = INT32_MIN;
	int64_t t57 = -769917565557LL;

	t57 = (x277^((x278-x279)+x280));

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = -2619;
	int8_t x284 = INT8_MAX;
	static volatile int64_t t58 = -10LL;

	t58 = (x281^((x282-x283)+x284));

	if (t58 != 2501LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x285 = 12220U;
	int16_t x286 = 2437;
	static volatile uint32_t x287 = UINT32_MAX;
	volatile int32_t x288 = 610412;
	uint32_t t59 = 224595965U;

	t59 = (x285^((x286-x287)+x288));

	if (t59 != 620110U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x289 = 657U;
	uint16_t x290 = 10U;
	int8_t x291 = INT8_MIN;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t60 = 514519073532760207LL;

	t60 = (x289^((x290-x291)+x292));

	if (t60 != -9223372036854775269LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x297 = 660U;
	uint8_t x298 = 41U;
	int64_t x300 = -3270824589038775772LL;
	static int64_t t61 = 207604234103367LL;

	t61 = (x297^((x298-x299)+x300));

	if (t61 != -3270824589038841638LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = -1;
	volatile int16_t x302 = 84;
	int16_t x304 = INT16_MIN;

	t62 = (x301^((x302-x303)+x304));

	if (t62 != 32679) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x305 = -216LL;
	volatile int16_t x306 = -217;
	int8_t x307 = INT8_MAX;
	volatile int64_t t63 = -93285841972LL;

	t63 = (x305^((x306-x307)+x308));

	if (t63 != -4294966910LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	uint32_t t64 = 300U;

	t64 = (x309^((x310-x311)+x312));

	if (t64 != 4294934910U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = 8U;
	static int32_t x316 = -1;
	volatile int32_t t65 = -536743100;

	t65 = (x313^((x314-x315)+x316));

	if (t65 != 119) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x318 = 190529815404305LLU;
	int16_t x319 = INT16_MAX;
	static uint64_t t66 = 5394809795073LLU;

	t66 = (x317^((x318-x319)+x320));

	if (t66 != 9223562566670147437LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = 1797054981200LL;
	uint8_t x322 = 91U;
	int8_t x323 = INT8_MAX;
	volatile uint32_t x324 = 528896U;
	int64_t t67 = 3384191204LL;

	t67 = (x321^((x322-x323)+x324));

	if (t67 != 1797055509900LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -1;
	uint64_t x326 = 645518233LLU;
	static int16_t x327 = INT16_MIN;
	int8_t x328 = 3;
	volatile uint64_t t68 = 435118568207511733LLU;

	t68 = (x325^((x326-x327)+x328));

	if (t68 != 18446744073064000611LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x330 = 19LLU;
	volatile uint64_t x331 = 51264384978237LLU;
	int32_t x332 = 18;
	volatile uint64_t t69 = 455662195LLU;

	t69 = (x329^((x330-x331)+x332));

	if (t69 != 51264384971496LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x333 = 53768062U;
	int32_t x334 = INT32_MIN;
	static int16_t x335 = 0;
	uint8_t x336 = 99U;

	t70 = (x333^((x334-x335)+x336));

	if (t70 != 2201251613U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = 59793;
	static uint64_t x338 = UINT64_MAX;
	static int32_t x339 = -53627;
	int64_t x340 = INT64_MIN;
	uint64_t t71 = 20LLU;

	t71 = (x337^((x338-x339)+x340));

	if (t71 != 9223372036854790379LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x341 = INT16_MIN;
	int32_t x343 = -27058343;
	int8_t x344 = INT8_MIN;

	t72 = (x341^((x342-x343)+x344));

	if (t72 != 2120441895) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = -1;
	volatile int8_t x347 = INT8_MIN;
	static int16_t x348 = INT16_MAX;

	t73 = (x345^((x346-x347)+x348));

	if (t73 != -2147450754) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = 2;
	volatile int64_t x350 = -1LL;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;

	t74 = (x349^((x350-x351)+x352));

	if (t74 != -2147450883LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x355 = INT8_MIN;
	int32_t x356 = -1;
	volatile int64_t t75 = 38676229LL;

	t75 = (x353^((x354-x355)+x356));

	if (t75 != -7335887225LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x358 = -5764948;
	volatile uint32_t x359 = 59252989U;
	uint64_t x360 = 2LLU;
	static uint64_t t76 = 2503LLU;

	t76 = (x357^((x358-x359)+x360));

	if (t76 != 18446744069479622577LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x361 = 153192584;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	volatile int32_t t77 = 101595;

	t77 = (x361^((x362-x363)+x364));

	if (t77 != -1994323721) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MAX;
	uint64_t x366 = UINT64_MAX;
	static int64_t x367 = 183458726296LL;
	int32_t x368 = INT32_MAX;
	uint64_t t78 = 40741LLU;

	t78 = (x365^((x366-x367)+x368));

	if (t78 != 18446743892398277017LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = 3693U;
	volatile uint32_t x370 = 1861077U;
	uint32_t x371 = UINT32_MAX;
	static int64_t x372 = -1LL;
	int64_t t79 = 440303749869673LL;

	t79 = (x369^((x370-x371)+x372));

	if (t79 != 1862584LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 53554139241079190LLU;
	int8_t x374 = -1;
	int16_t x376 = 2151;
	volatile uint64_t t80 = 42957LLU;

	t80 = (x373^((x374-x375)+x376));

	if (t80 != 18393189934468467908LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x377 = 2U;
	static int16_t x378 = INT16_MIN;
	static int8_t x379 = INT8_MIN;
	volatile int32_t x380 = -853081360;
	uint32_t t81 = 116518794U;

	t81 = (x377^((x378-x379)+x380));

	if (t81 != 3441853298U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x382 = 1174U;
	uint32_t x383 = 595439842U;
	int16_t x384 = INT16_MIN;
	int64_t t82 = 79251LL;

	t82 = (x381^((x382-x383)+x384));

	if (t82 != 8936583272151LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x386 = UINT64_MAX;
	int64_t x387 = -32849137369402LL;
	volatile int32_t x388 = INT32_MIN;

	t83 = (x385^((x386-x387)+x388));

	if (t83 != 9223339189864890054LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	volatile int32_t t84 = -207;

	t84 = (x397^((x398-x399)+x400));

	if (t84 != -2147418240) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x401 = UINT32_MAX;
	volatile int64_t x403 = -493179LL;
	uint64_t x404 = 55123LLU;

	t85 = (x401^((x402-x403)+x404));

	if (t85 != 4294418993LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x407 = UINT16_MAX;
	uint16_t x408 = UINT16_MAX;
	static uint32_t t86 = 910694375U;

	t86 = (x405^((x406-x407)+x408));

	if (t86 != 3844630480U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x409 = INT64_MIN;
	uint64_t x410 = 26097690466117973LLU;
	int64_t x411 = INT64_MAX;
	static uint64_t x412 = 3LLU;
	volatile uint64_t t87 = 88220405860969324LLU;

	t87 = (x409^((x410-x411)+x412));

	if (t87 != 26097690466117977LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = 497LLU;
	int32_t x416 = INT32_MIN;
	volatile uint64_t t88 = 24920219LLU;

	t88 = (x413^((x414-x415)+x416));

	if (t88 != 18446744071562068465LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = 186334066U;
	volatile int16_t x422 = INT16_MAX;
	int64_t x423 = -1LL;
	volatile int64_t t89 = 375431039LL;

	t89 = (x421^((x422-x423)+x424));

	if (t89 != -1961116814LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = -1LL;
	int16_t x426 = 88;
	uint64_t x427 = 3783721133835LLU;
	int64_t x428 = -1LL;
	volatile uint64_t t90 = 906881564822LLU;

	t90 = (x425^((x426-x427)+x428));

	if (t90 != 3783721133747LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 24U;
	int32_t x432 = -708;
	uint32_t t91 = 24507327U;

	t91 = (x429^((x430-x431)+x432));

	if (t91 != 33499U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x433 = 9815U;
	int32_t x434 = 4244;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t92 = -17697216;

	t92 = (x433^((x434-x435)+x436));

	if (t92 != -18621) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = -55;
	uint16_t x438 = 16716U;
	int64_t x439 = -1LL;
	int16_t x440 = -1;
	int64_t t93 = -56771025LL;

	t93 = (x437^((x438-x439)+x440));

	if (t93 != -16763LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x441 = 2U;
	volatile int32_t x442 = 40913;
	int16_t x444 = INT16_MAX;
	int32_t t94 = 28647298;

	t94 = (x441^((x442-x443)+x444));

	if (t94 != 73682) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x445 = -1;
	uint8_t x446 = 81U;
	uint16_t x447 = 8U;
	int8_t x448 = INT8_MIN;

	t95 = (x445^((x446-x447)+x448));

	if (t95 != 54) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x449 = INT32_MIN;
	volatile int64_t x450 = INT64_MIN;
	int16_t x451 = -60;
	int16_t x452 = INT16_MAX;

	t96 = (x449^((x450-x451)+x452));

	if (t96 != 9223372034707324987LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = INT16_MIN;
	static volatile int8_t x454 = -1;
	int32_t x455 = INT32_MIN;
	int32_t x456 = -26391500;
	static int32_t t97 = 57880;

	t97 = (x453^((x454-x455)+x456));

	if (t97 != -2121085901) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x457 = INT8_MIN;
	int16_t x458 = -12370;
	static int32_t x459 = -4090680;
	int32_t x460 = INT32_MIN;
	int32_t t98 = 3443;

	t98 = (x457^((x458-x459)+x460));

	if (t98 != 2143405414) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x461 = INT8_MIN;
	uint16_t x463 = UINT16_MAX;
	volatile uint32_t t99 = 5978254U;

	t99 = (x461^((x462-x463)+x464));

	if (t99 != 4294119329U) { NG(); } else { ; }
	
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

