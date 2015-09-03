#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x4 = -12872973751568LL;
static volatile int64_t t0 = -104029669437973LL;
int64_t t1 = -6517517788LL;
int8_t x13 = 62;
int16_t x19 = INT16_MIN;
static int64_t t3 = -7762492374986LL;
int16_t x22 = INT16_MAX;
static int32_t t4 = 7697;
uint16_t x42 = 117U;
volatile uint64_t t9 = 8003018915LLU;
volatile int8_t x50 = INT8_MAX;
uint8_t x53 = 12U;
volatile uint16_t x66 = 1989U;
uint16_t x72 = UINT16_MAX;
volatile uint16_t x76 = 4U;
static volatile uint64_t t16 = 14793369543532157LLU;
uint8_t x80 = 20U;
int32_t t17 = 2868542;
volatile int8_t x85 = INT8_MIN;
static uint32_t x86 = 135619778U;
int16_t x88 = -3;
volatile int16_t x93 = 20;
int64_t x96 = -1LL;
static int64_t x97 = 2767383961197757069LL;
uint8_t x105 = UINT8_MAX;
int64_t x109 = INT64_MIN;
uint32_t x110 = 21U;
volatile int8_t x113 = INT8_MAX;
int32_t x114 = INT32_MAX;
static int16_t x115 = INT16_MIN;
int64_t x120 = 58938876LL;
uint64_t x121 = 60239839LLU;
int16_t x122 = INT16_MIN;
int16_t x124 = -1;
static uint32_t x132 = UINT32_MAX;
volatile uint32_t t30 = 23804U;
uint8_t x138 = 1U;
static int8_t x141 = -1;
uint64_t x143 = 777832990890LLU;
int8_t x148 = 2;
int64_t x152 = 2193540927806910LL;
volatile int64_t t35 = 7150LL;
static volatile uint32_t x160 = 10805262U;
uint8_t x161 = UINT8_MAX;
uint16_t x165 = UINT16_MAX;
static volatile int64_t t39 = 895540LL;
volatile uint64_t t42 = 25LLU;
uint32_t x190 = UINT32_MAX;
volatile int8_t x191 = INT8_MAX;
uint32_t t43 = 1U;
int64_t x194 = -2732692LL;
static uint64_t x200 = UINT64_MAX;
int16_t x216 = 2077;
int32_t x222 = -1;
uint64_t x227 = 8377775LLU;
volatile int8_t x233 = INT8_MAX;
int8_t x237 = -11;
int64_t x241 = INT64_MIN;
int8_t x248 = INT8_MIN;
static volatile uint64_t t59 = 1976049LLU;
int8_t x265 = INT8_MIN;
uint16_t x267 = 4468U;
volatile int32_t x268 = INT32_MIN;
static uint16_t x273 = 31881U;
static uint8_t x276 = 1U;
volatile uint64_t t62 = 678653747297943626LLU;
uint8_t x282 = UINT8_MAX;
static volatile uint32_t t63 = 13992U;
static volatile uint64_t t64 = 0LLU;
uint16_t x298 = 13470U;
int16_t x302 = -1;
uint64_t x303 = 28738374661014LLU;
uint64_t x317 = 1375697898785834LLU;
static volatile uint64_t t72 = 31399702LLU;
volatile int64_t x324 = -1LL;
uint16_t x325 = UINT16_MAX;
int8_t x331 = 0;
static volatile int32_t x340 = 146633;
volatile uint64_t t78 = 112LLU;
int8_t x356 = 1;
int8_t x360 = INT8_MIN;
static volatile int32_t t81 = -11;
volatile int8_t x361 = INT8_MIN;
volatile int16_t x363 = 21;
static volatile int64_t t82 = 1LL;
uint32_t x368 = UINT32_MAX;
int32_t x369 = 258470556;
int16_t x373 = 175;
uint8_t x375 = 48U;
volatile int32_t t85 = -307494;
uint8_t x380 = 3U;
int32_t x396 = INT32_MAX;
volatile uint64_t x405 = 60LLU;
uint32_t x412 = 23161074U;
int8_t x414 = INT8_MAX;
static int32_t t95 = 15;
int8_t x417 = INT8_MIN;
uint64_t x418 = UINT64_MAX;
uint8_t x420 = 18U;
uint32_t x421 = UINT32_MAX;
int16_t x426 = INT16_MIN;
uint32_t t98 = 13964U;
uint16_t x430 = 1052U;
uint8_t x432 = 0U;


void f0(void) {
	volatile int64_t x1 = -1LL;
	int64_t x2 = 1LL;
	static int16_t x3 = INT16_MIN;

	t0 = (x1^(x2+(x3&x4)));

	if (t0 != 12872973778942LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	static int8_t x10 = INT8_MIN;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;

	t1 = (x9^(x10+(x11&x12)));

	if (t1 != 32640LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MAX;
	int32_t x15 = 1153724;
	uint16_t x16 = 1U;
	int64_t t2 = 289328943002LL;

	t2 = (x13^(x14+(x15&x16)));

	if (t2 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	static int32_t x18 = -1;
	static int64_t x20 = -1LL;

	t3 = (x17^(x18+(x19&x20)));

	if (t3 != -2147450880LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 24U;
	volatile int8_t x23 = INT8_MAX;
	volatile uint8_t x24 = 14U;

	t4 = (x21^(x22+(x23&x24)));

	if (t4 != 32789) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 186238283266205LL;
	volatile uint64_t x30 = 7160LLU;
	int64_t x31 = INT64_MIN;
	uint16_t x32 = 1971U;
	volatile uint64_t t5 = 39663359581066LLU;

	t5 = (x29^(x30+(x31&x32)));

	if (t5 != 186238283260773LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -1;
	volatile uint8_t x34 = 105U;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MIN;
	static volatile uint64_t t6 = 3282796000721806LLU;

	t6 = (x33^(x34+(x35&x36)));

	if (t6 != 22LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -82993483755LL;
	volatile uint32_t x38 = 200U;
	int8_t x39 = INT8_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int64_t t7 = 530953417LL;

	t7 = (x37^(x38+(x39&x40)));

	if (t7 != -82993483683LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	int16_t x43 = -1;
	int64_t x44 = 46LL;
	int64_t t8 = -70562LL;

	t8 = (x41^(x42+(x43&x44)));

	if (t8 != -164LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MAX;
	static int64_t x47 = INT64_MAX;
	volatile uint64_t x48 = 80189LLU;

	t9 = (x45^(x46+(x47&x48)));

	if (t9 != 18446744073709471292LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = 1863265181855LL;
	static int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int64_t t10 = -436426382982LL;

	t10 = (x49^(x50+(x51&x52)));

	if (t10 != -1863265165088LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x54 = 6;
	int16_t x55 = INT16_MAX;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t11 = -3;

	t11 = (x53^(x54+(x55&x56)));

	if (t11 != 32650) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 14U;
	volatile int64_t x58 = -1LL;
	static int64_t x59 = INT64_MIN;
	uint16_t x60 = 24826U;
	volatile int64_t t12 = -4626992LL;

	t12 = (x57^(x58+(x59&x60)));

	if (t12 != -15LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = 1U;
	static volatile int64_t x62 = INT64_MAX;
	int8_t x63 = 0;
	uint16_t x64 = 2994U;
	static volatile int64_t t13 = -7260726LL;

	t13 = (x61^(x62+(x63&x64)));

	if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int32_t x67 = -1;
	int64_t x68 = 101645118982207654LL;
	int64_t t14 = -297851770038414LL;

	t14 = (x65^(x66+(x67&x68)));

	if (t14 != 101645119180619668LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 4U;
	int32_t x70 = INT32_MIN;
	static int16_t x71 = -122;
	int32_t t15 = 6574272;

	t15 = (x69^(x70+(x71&x72)));

	if (t15 != -2147418238) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 5718553706290329208LLU;

	t16 = (x73^(x74+(x75&x76)));

	if (t16 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = -1;
	int8_t x79 = 4;

	t17 = (x77^(x78+(x79&x80)));

	if (t17 != -32765) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x87 = -412;
	volatile uint32_t t18 = 7471U;

	t18 = (x85^(x86+(x87&x88)));

	if (t18 != 4159347878U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 35007LLU;
	volatile uint8_t x90 = 1U;
	static volatile int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	uint64_t t19 = 74222606603875015LLU;

	t19 = (x89^(x90+(x91&x92)));

	if (t19 != 18446744073709488318LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = INT8_MIN;
	volatile int8_t x95 = INT8_MIN;
	volatile int64_t t20 = -8864455673404LL;

	t20 = (x93^(x94+(x95&x96)));

	if (t20 != -236LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x98 = UINT16_MAX;
	static int32_t x99 = 5002;
	uint16_t x100 = 4U;
	volatile int64_t t21 = -28001357754775996LL;

	t21 = (x97^(x98+(x99&x100)));

	if (t21 != 2767383961197788530LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -10652LL;
	volatile int8_t x102 = 0;
	int64_t x103 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t22 = 6544229047LLU;

	t22 = (x101^(x102+(x103&x104)));

	if (t22 != 9223372036854765156LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x106 = -19;
	int8_t x107 = 6;
	volatile uint8_t x108 = 125U;
	int32_t t23 = -3;

	t23 = (x105^(x106+(x107&x108)));

	if (t23 != -242) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x111 = INT64_MIN;
	static uint64_t x112 = 123135700765294LLU;
	static volatile uint64_t t24 = 1580LLU;

	t24 = (x109^(x110+(x111&x112)));

	if (t24 != 9223372036854775829LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x116 = INT32_MIN;
	volatile int32_t t25 = -777;

	t25 = (x113^(x114+(x115&x116)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 31685U;
	volatile int64_t t26 = -76LL;

	t26 = (x117^(x118+(x119&x120)));

	if (t26 != -2147397181LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x123 = 473799315279237LL;
	uint64_t t27 = 171824695403293LLU;

	t27 = (x121^(x122+(x123&x124)));

	if (t27 != 473799257907802LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -21;
	int64_t x126 = -631209033113678LL;
	static uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 0U;
	volatile int64_t t28 = -24747213728030LL;

	t28 = (x125^(x126+(x127&x128)));

	if (t28 != 631209033113689LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x129 = UINT32_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile uint32_t x131 = 1534859786U;
	volatile uint32_t t29 = 405U;

	t29 = (x129^(x130+(x131&x132)));

	if (t29 != 2760107510U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	volatile uint32_t x134 = UINT32_MAX;
	volatile int8_t x135 = -1;
	int16_t x136 = -1;

	t30 = (x133^(x134+(x135&x136)));

	if (t30 != 4294967169U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	volatile int16_t x139 = 382;
	int16_t x140 = INT16_MAX;
	int64_t t31 = -6216538857154LL;

	t31 = (x137^(x138+(x139&x140)));

	if (t31 != -384LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = INT16_MAX;
	int32_t x144 = 247;
	uint64_t t32 = 2743388245933LLU;

	t32 = (x141^(x142+(x143&x144)));

	if (t32 != 18446744073709518686LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = -89;
	volatile uint16_t x146 = UINT16_MAX;
	int32_t x147 = -1;
	volatile int32_t t33 = -60751607;

	t33 = (x145^(x146+(x147&x148)));

	if (t33 != -65626) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MAX;
	uint16_t x150 = 466U;
	static int64_t x151 = 21412LL;
	static volatile int64_t t34 = -6LL;

	t34 = (x149^(x150+(x151&x152)));

	if (t34 != 21257LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = UINT16_MAX;
	volatile uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MIN;

	t35 = (x153^(x154+(x155&x156)));

	if (t35 != -9223372034707226625LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile int8_t x159 = INT8_MIN;
	static uint32_t t36 = 2U;

	t36 = (x157^(x158+(x159&x160)));

	if (t36 != 4284194815U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x162 = 778242U;
	int8_t x163 = -11;
	static volatile int16_t x164 = INT16_MIN;
	volatile uint32_t t37 = 4848U;

	t37 = (x161^(x162+(x163&x164)));

	if (t37 != 745725U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	uint8_t x168 = 11U;
	int64_t t38 = -10LL;

	t38 = (x165^(x166+(x167&x168)));

	if (t38 != -65536LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	int64_t x172 = INT64_MIN;

	t39 = (x169^(x170+(x171&x172)));

	if (t39 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = 69613LL;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MAX;
	static int64_t x176 = INT64_MIN;
	int64_t t40 = 4824799669LL;

	t40 = (x173^(x174+(x175&x176)));

	if (t40 != -69523LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -1;
	uint8_t x179 = 18U;
	int32_t x180 = INT32_MIN;
	int32_t t41 = -16;

	t41 = (x177^(x178+(x179&x180)));

	if (t41 != -65536) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = 77;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = INT16_MIN;
	uint64_t x188 = 292648882LLU;

	t42 = (x185^(x186+(x187&x188)));

	if (t42 != 292585549LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = UINT16_MAX;
	volatile uint32_t x192 = UINT32_MAX;

	t43 = (x189^(x190+(x191&x192)));

	if (t43 != 65409U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x193 = -1;
	static volatile int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	static volatile int64_t t44 = 254295974832819297LL;

	t44 = (x193^(x194+(x195&x196)));

	if (t44 != -9223372036852042989LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x197 = 10LLU;
	int8_t x198 = INT8_MAX;
	volatile int16_t x199 = INT16_MAX;
	uint64_t t45 = 14456359363811483LLU;

	t45 = (x197^(x198+(x199&x200)));

	if (t45 != 32884LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -265;
	int32_t x203 = INT32_MAX;
	uint32_t x204 = 119421U;
	volatile uint32_t t46 = 0U;

	t46 = (x201^(x202+(x203&x204)));

	if (t46 != 4294857076U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	int32_t x207 = -2;
	int16_t x208 = 963;
	volatile int32_t t47 = -1;

	t47 = (x205^(x206+(x207&x208)));

	if (t47 != -2147449919) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int32_t x210 = 2;
	int64_t x211 = -1LL;
	volatile uint16_t x212 = 14U;
	volatile int64_t t48 = -46397021988LL;

	t48 = (x209^(x210+(x211&x212)));

	if (t48 != -17LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = -1;
	volatile int32_t x214 = INT32_MIN;
	uint64_t x215 = 778LLU;
	static uint64_t t49 = 542793776650067LLU;

	t49 = (x213^(x214+(x215&x216)));

	if (t49 != 2147483639LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x221 = 355300450LLU;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = 986LLU;
	volatile uint64_t t50 = 2233870LLU;

	t50 = (x221^(x222+(x223&x224)));

	if (t50 != 18446744073354251165LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	volatile uint64_t x228 = UINT64_MAX;
	volatile uint64_t t51 = 315527994595LLU;

	t51 = (x225^(x226+(x227&x228)));

	if (t51 != 8377808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MAX;
	volatile int8_t x236 = INT8_MIN;
	int64_t t52 = -4352651825218LL;

	t52 = (x233^(x234+(x235&x236)));

	if (t52 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x238 = INT8_MIN;
	uint64_t x239 = 47745821471534680LLU;
	volatile uint16_t x240 = UINT16_MAX;
	static uint64_t t53 = 53892172646LLU;

	t53 = (x237^(x238+(x239&x240)));

	if (t53 != 18446744073709490733LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = 4;
	int64_t x244 = -1LL;
	volatile int64_t t54 = -834LL;

	t54 = (x241^(x242+(x243&x244)));

	if (t54 != -9223372036854710269LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = 356LLU;
	volatile int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	uint64_t t55 = 4LLU;

	t55 = (x245^(x246+(x247&x248)));

	if (t55 != 18446744073709519332LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	static uint8_t x251 = 108U;
	int16_t x252 = INT16_MAX;
	int64_t t56 = -64041250475710885LL;

	t56 = (x249^(x250+(x251&x252)));

	if (t56 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = -8105;
	int64_t x254 = -1LL;
	volatile int16_t x255 = -1;
	uint64_t x256 = UINT64_MAX;
	static uint64_t t57 = 238081LLU;

	t57 = (x253^(x254+(x255&x256)));

	if (t57 != 8105LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x257 = 2123992593U;
	int64_t x258 = 4311666032LL;
	uint32_t x259 = UINT32_MAX;
	volatile int64_t x260 = -1LL;
	int64_t t58 = 673104500398436838LL;

	t58 = (x257^(x258+(x259&x260)));

	if (t58 != 10710631294LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x261 = UINT64_MAX;
	static uint64_t x262 = 2LLU;
	int8_t x263 = 0;
	int64_t x264 = -1LL;

	t59 = (x261^(x262+(x263&x264)));

	if (t59 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x266 = 0;
	int32_t t60 = 51828;

	t60 = (x265^(x266+(x267&x268)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x274 = 1;
	static int64_t x275 = -522452LL;
	volatile int64_t t61 = -58850589099LL;

	t61 = (x273^(x274+(x275&x276)));

	if (t61 != 31880LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = 1250;
	volatile uint64_t x279 = UINT64_MAX;
	volatile uint8_t x280 = UINT8_MAX;

	t62 = (x277^(x278+(x279&x280)));

	if (t62 != 18446744073709550177LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x281 = 118404U;
	static int16_t x283 = INT16_MAX;
	int16_t x284 = -1;

	t63 = (x281^(x282+(x283&x284)));

	if (t63 != 85626U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 1U;
	uint64_t x286 = UINT64_MAX;
	static int64_t x287 = INT64_MIN;
	int8_t x288 = -60;

	t64 = (x285^(x286+(x287&x288)));

	if (t64 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -59;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 510U;
	volatile uint8_t x292 = 8U;
	volatile int32_t t65 = -3782;

	t65 = (x289^(x290+(x291&x292)));

	if (t65 != 2147483597) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	volatile uint32_t x295 = 94U;
	static int16_t x296 = 1;
	uint64_t t66 = 6957711927652154341LLU;

	t66 = (x293^(x294+(x295&x296)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MAX;
	uint32_t x299 = 138573190U;
	uint16_t x300 = UINT16_MAX;
	uint32_t t67 = 1U;

	t67 = (x297^(x298+(x299&x300)));

	if (t67 != 54747U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MAX;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t68 = 11234569225875497LLU;

	t68 = (x301^(x302+(x303&x304)));

	if (t68 != 28739025207296LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x305 = 1168627LLU;
	uint64_t x306 = 502916169329708LLU;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = 13;
	uint64_t t69 = 13LLU;

	t69 = (x305^(x306+(x307&x308)));

	if (t69 != 502916168169674LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = -1546;
	int64_t x310 = INT64_MIN;
	static volatile int16_t x311 = INT16_MIN;
	uint32_t x312 = 1U;
	static volatile int64_t t70 = -8488583004244LL;

	t70 = (x309^(x310+(x311&x312)));

	if (t70 != 9223372036854774262LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x313 = -1;
	static volatile int16_t x314 = INT16_MIN;
	int32_t x315 = 5;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t71 = 5580U;

	t71 = (x313^(x314+(x315&x316)));

	if (t71 != 32762U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x318 = -1;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MAX;

	t72 = (x317^(x318+(x319&x320)));

	if (t72 != 18445368375810765781LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x321 = INT32_MAX;
	static int16_t x322 = INT16_MIN;
	volatile int64_t x323 = 10679726129600103LL;
	int64_t t73 = 1LL;

	t73 = (x321^(x322+(x323&x324)));

	if (t73 != 10679728201509272LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x326 = 5;
	int8_t x327 = INT8_MAX;
	static int64_t x328 = INT64_MAX;
	volatile int64_t t74 = 36435009774LL;

	t74 = (x325^(x326+(x327&x328)));

	if (t74 != 65403LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x329 = 107111U;
	volatile uint64_t x330 = 244216441LLU;
	static int8_t x332 = INT8_MIN;
	uint64_t t75 = 547717294LLU;

	t75 = (x329^(x330+(x331&x332)));

	if (t75 != 244305950LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = 2386044LL;
	uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 13U;
	int64_t t76 = -345286088LL;

	t76 = (x333^(x334+(x335&x336)));

	if (t76 != -2145097591LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x337 = 479U;
	int8_t x338 = 1;
	static int32_t x339 = -7465721;
	static int32_t t77 = -6;

	t77 = (x337^(x338+(x339&x340)));

	if (t77 != 136669) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = -455719060071LL;
	volatile int16_t x346 = INT16_MIN;
	uint64_t x347 = 16184228862647LLU;
	static volatile int16_t x348 = -826;

	t78 = (x345^(x346+(x347&x348)));

	if (t78 != 18446727777701012767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MAX;
	uint32_t x350 = UINT32_MAX;
	volatile int8_t x351 = 1;
	uint8_t x352 = 71U;
	volatile uint32_t t79 = 19632206U;

	t79 = (x349^(x350+(x351&x352)));

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x353 = 881403415363911LLU;
	static uint16_t x354 = UINT16_MAX;
	uint32_t x355 = 69236926U;
	uint64_t t80 = 3015762408068704LLU;

	t80 = (x353^(x354+(x355&x356)));

	if (t80 != 881403415428792LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MIN;
	static int32_t x358 = INT32_MAX;
	int8_t x359 = INT8_MAX;

	t81 = (x357^(x358+(x359&x360)));

	if (t81 != -2147483521) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x362 = -494099667342786390LL;
	uint16_t x364 = 766U;

	t82 = (x361^(x362+(x363&x364)));

	if (t82 != 494099667342786366LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = 11;
	int8_t x366 = 0;
	int8_t x367 = 1;
	volatile uint32_t t83 = 88881447U;

	t83 = (x365^(x366+(x367&x368)));

	if (t83 != 10U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x370 = UINT32_MAX;
	static int32_t x371 = INT32_MIN;
	static uint32_t x372 = 4161223U;
	static uint32_t t84 = 19911U;

	t84 = (x369^(x370+(x371&x372)));

	if (t84 != 4036496739U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = 204;
	volatile int32_t x376 = -2534992;

	t85 = (x373^(x374+(x375&x376)));

	if (t85 != 83) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = UINT8_MAX;
	uint16_t x378 = UINT16_MAX;
	volatile uint32_t x379 = 1741646U;
	static volatile uint32_t t86 = 441052702U;

	t86 = (x377^(x378+(x379&x380)));

	if (t86 != 65790U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = INT16_MAX;
	uint8_t x383 = 0U;
	int32_t x384 = INT32_MIN;
	static int32_t t87 = 0;

	t87 = (x381^(x382+(x383&x384)));

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = 0;
	int16_t x386 = 1;
	int64_t x387 = -1LL;
	int64_t x388 = -1LL;
	static int64_t t88 = -1LL;

	t88 = (x385^(x386+(x387&x388)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MAX;
	int8_t x390 = INT8_MIN;
	int64_t x391 = 108LL;
	uint32_t x392 = UINT32_MAX;
	int64_t t89 = 131813LL;

	t89 = (x389^(x390+(x391&x392)));

	if (t89 != -2147483629LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MAX;
	uint32_t x394 = 636108U;
	static volatile int32_t x395 = INT32_MIN;
	volatile uint32_t t90 = 174U;

	t90 = (x393^(x394+(x395&x396)));

	if (t90 != 636083U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 26884U;
	volatile uint32_t x398 = UINT32_MAX;
	int64_t x399 = 3883943551771981327LL;
	int32_t x400 = INT32_MIN;
	int64_t t91 = -151194736LL;

	t91 = (x397^(x398+(x399&x400)));

	if (t91 != 3883943555747518203LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = 1604;
	volatile int64_t x402 = INT64_MIN;
	static uint16_t x403 = 69U;
	int8_t x404 = 1;
	int64_t t92 = -748LL;

	t92 = (x401^(x402+(x403&x404)));

	if (t92 != -9223372036854774203LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x406 = UINT16_MAX;
	static int8_t x407 = -1;
	int32_t x408 = INT32_MIN;
	static uint64_t t93 = 245704830606LLU;

	t93 = (x405^(x406+(x407&x408)));

	if (t93 != 18446744071562133443LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x409 = INT32_MIN;
	int32_t x410 = 50;
	uint32_t x411 = 186U;
	uint32_t t94 = 89U;

	t94 = (x409^(x410+(x411&x412)));

	if (t94 != 2147483876U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MAX;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MAX;

	t95 = (x413^(x414+(x415&x416)));

	if (t95 != 32640) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x419 = INT64_MIN;
	volatile uint64_t t96 = 8086179552LLU;

	t96 = (x417^(x418+(x419&x420)));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x422 = INT16_MAX;
	int16_t x423 = -1;
	static int8_t x424 = -1;
	uint32_t t97 = 198531757U;

	t97 = (x421^(x422+(x423&x424)));

	if (t97 != 4294934529U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x425 = UINT32_MAX;
	int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MIN;

	t98 = (x425^(x426+(x427&x428)));

	if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -1;
	volatile int32_t x431 = 872;
	static volatile int32_t t99 = 499;

	t99 = (x429^(x430+(x431&x432)));

	if (t99 != -1053) { NG(); } else { ; }
	
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

