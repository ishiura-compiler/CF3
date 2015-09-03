#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 1;
int16_t x7 = 4663;
int64_t x12 = -1LL;
static int64_t x13 = INT64_MIN;
static uint8_t x21 = UINT8_MAX;
uint64_t x29 = UINT64_MAX;
volatile uint64_t t7 = UINT64_MAX;
volatile int32_t t8 = 13942;
uint16_t x41 = 3U;
int8_t x52 = 13;
int64_t x55 = INT64_MIN;
int16_t x63 = INT16_MAX;
int64_t x66 = INT64_MAX;
uint32_t x67 = UINT32_MAX;
int8_t x71 = -2;
int32_t x81 = INT32_MIN;
int16_t x82 = INT16_MIN;
int64_t x84 = -452LL;
uint64_t x89 = UINT64_MAX;
uint32_t x91 = 62062876U;
volatile uint64_t t22 = 7LLU;
int32_t x93 = -12;
static int8_t x95 = -1;
int8_t x96 = -1;
uint64_t x103 = 1096175929049271417LLU;
uint32_t x108 = UINT32_MAX;
uint8_t x111 = 5U;
int32_t x117 = INT32_MAX;
int64_t x121 = -425LL;
int64_t x122 = -1LL;
int64_t t32 = INT64_MAX;
int16_t x147 = -1;
int64_t x149 = INT64_MIN;
int32_t x157 = INT32_MAX;
static int8_t x165 = INT8_MIN;
uint32_t t41 = UINT32_MAX;
int64_t x169 = -10035LL;
int64_t x172 = INT64_MAX;
volatile int64_t t42 = 211643033LL;
int8_t x174 = INT8_MIN;
int16_t x176 = INT16_MIN;
static uint32_t x180 = UINT32_MAX;
int16_t x186 = -83;
int64_t x187 = INT64_MAX;
int32_t x191 = -1;
int32_t x192 = INT32_MIN;
uint32_t x193 = 3U;
volatile int64_t x195 = INT64_MIN;
volatile int16_t x198 = INT16_MAX;
static volatile int64_t x200 = -1LL;
int64_t t49 = 1883015801971534098LL;
int64_t x205 = 4124719244863715516LL;
int16_t x207 = INT16_MIN;
int16_t x208 = 0;
int8_t x209 = -30;
volatile int32_t t52 = -470;
static volatile uint64_t x213 = UINT64_MAX;
volatile int64_t x219 = -1LL;
uint64_t t54 = 1055484319162321350LLU;
uint16_t x225 = 2060U;
int32_t x228 = INT32_MIN;
volatile int32_t t56 = -567450;
static int8_t x237 = INT8_MIN;
uint32_t x244 = 1U;
int32_t t61 = 70730;
uint8_t x251 = 5U;
uint32_t x254 = UINT32_MAX;
uint8_t x260 = 6U;
static uint16_t x262 = UINT16_MAX;
volatile int16_t x266 = INT16_MIN;
uint32_t x270 = 20667560U;
volatile uint64_t t67 = 3960213LLU;
uint16_t x273 = UINT16_MAX;
int32_t x280 = INT32_MIN;
int32_t x281 = 4762317;
volatile int8_t x286 = -1;
int8_t x288 = 1;
uint8_t x294 = 11U;
uint8_t x300 = 6U;
volatile int64_t t74 = 4484886689LL;
static volatile uint8_t x303 = 88U;
int8_t x308 = INT8_MAX;
int64_t t76 = 5604LL;
static volatile int8_t x310 = INT8_MIN;
static uint8_t x322 = 1U;
int64_t x323 = INT64_MIN;
int64_t t80 = 29269281235LL;
int8_t x325 = INT8_MIN;
int16_t x330 = INT16_MIN;
int64_t x333 = -1889149482762743LL;
static volatile int64_t t83 = 2429735476204LL;
uint16_t x339 = UINT16_MAX;
volatile int64_t x340 = INT64_MIN;
volatile int64_t t84 = -142548912LL;
int8_t x349 = 0;
int8_t x351 = INT8_MIN;
int64_t x352 = INT64_MAX;
uint8_t x353 = 28U;
static volatile uint32_t t88 = 13U;
int64_t x362 = INT64_MIN;
uint16_t x366 = 303U;
static uint16_t x373 = 3U;
int64_t x380 = INT64_MAX;
int64_t t94 = 0LL;
uint32_t x382 = UINT32_MAX;
volatile int64_t x386 = INT64_MAX;
int16_t x387 = -268;
uint64_t x389 = 1298969561616192LLU;
uint32_t x391 = UINT32_MAX;
int32_t x392 = -13719;
uint64_t t97 = 3LLU;
int64_t x396 = 0LL;
int64_t t98 = 11LL;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int64_t x3 = -1LL;
	volatile int16_t x4 = -1;
	int64_t t0 = 646611057843163LL;

	t0 = ((x1^x2)|(x3&x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint16_t x6 = UINT16_MAX;
	volatile uint8_t x8 = UINT8_MAX;
	static volatile int64_t t1 = 117754980826042LL;

	t1 = ((x5^x6)|(x7&x8));

	if (t1 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static uint64_t x10 = UINT64_MAX;
	static volatile uint16_t x11 = 511U;
	uint64_t t2 = 233LLU;

	t2 = ((x9^x10)|(x11&x12));

	if (t2 != 18446744069414584831LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 708;
	static int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	static int64_t t3 = 877430LL;

	t3 = ((x13^x14)|(x15&x16));

	if (t3 != -9223372036854775100LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static int64_t x18 = INT64_MAX;
	uint16_t x19 = 8446U;
	int32_t x20 = INT32_MAX;
	volatile int64_t t4 = 221712LL;

	t4 = ((x17^x18)|(x19&x20));

	if (t4 != -9223372036854767362LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 502088LLU;
	volatile uint64_t t5 = 203402095827LLU;

	t5 = ((x21^x22)|(x23&x24));

	if (t5 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static volatile int32_t x26 = -217466508;
	int64_t x27 = INT64_MIN;
	int16_t x28 = 303;
	static volatile uint64_t t6 = 247LLU;

	t6 = ((x25^x26)|(x27&x28));

	if (t6 != 217466507LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	uint64_t x32 = UINT64_MAX;

	t7 = ((x29^x30)|(x31&x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 0U;
	static int16_t x34 = -1;
	volatile int16_t x35 = 389;
	int32_t x36 = INT32_MIN;

	t8 = ((x33^x34)|(x35&x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	static int32_t x39 = -1;
	uint64_t x40 = 257922890LLU;
	volatile uint64_t t9 = 7099554044606141054LLU;

	t9 = ((x37^x38)|(x39&x40));

	if (t9 != 2147456842LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x42 = 57U;
	static volatile int16_t x43 = INT16_MIN;
	int16_t x44 = -494;
	volatile int32_t t10 = 1798;

	t10 = ((x41^x42)|(x43&x44));

	if (t10 != -32710) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -54;
	static uint32_t x46 = 392196U;
	int16_t x47 = INT16_MAX;
	uint16_t x48 = 20512U;
	static uint32_t t11 = 5U;

	t11 = ((x45^x46)|(x47&x48));

	if (t11 != 4294595566U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint8_t x50 = UINT8_MAX;
	int16_t x51 = -155;
	static int32_t t12 = 4638450;

	t12 = ((x49^x50)|(x51&x52));

	if (t12 != -2147483393) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x54 = -1;
	uint8_t x56 = 12U;
	volatile int64_t t13 = 24524LL;

	t13 = ((x53^x54)|(x55&x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -305324;
	static int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MAX;
	static int64_t x60 = 11139159LL;
	static int64_t t14 = 0LL;

	t14 = ((x57^x58)|(x59&x60));

	if (t14 != -262273LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	static int64_t x62 = INT64_MIN;
	uint32_t x64 = 251250U;
	int64_t t15 = -11586LL;

	t15 = ((x61^x62)|(x63&x64));

	if (t15 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	volatile int32_t x68 = -1;
	int64_t t16 = -131532410414505021LL;

	t16 = ((x65^x66)|(x67&x68));

	if (t16 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1704883LL;
	int64_t x70 = -1LL;
	int32_t x72 = INT32_MIN;
	volatile int64_t t17 = 19257783206LL;

	t17 = ((x69^x70)|(x71&x72));

	if (t17 != -2145778766LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 1;
	volatile int64_t x74 = -1LL;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MAX;
	int64_t t18 = -228052720364LL;

	t18 = ((x73^x74)|(x75&x76));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = INT32_MIN;
	int16_t x79 = -7;
	static int8_t x80 = 1;
	volatile int64_t t19 = -14090234LL;

	t19 = ((x77^x78)|(x79&x80));

	if (t19 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x83 = INT64_MAX;
	int64_t t20 = 73738310947LL;

	t20 = ((x81^x82)|(x83&x84));

	if (t20 != 9223372036854775356LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -12;
	uint16_t x86 = 1975U;
	int16_t x87 = -223;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -37;

	t21 = ((x85^x86)|(x87&x88));

	if (t21 != -1981) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = INT8_MIN;
	static uint8_t x92 = 37U;

	t22 = ((x89^x90)|(x91&x92));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = INT64_MIN;
	int64_t t23 = -1671LL;

	t23 = ((x93^x94)|(x95&x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	static volatile uint8_t x98 = 0U;
	int32_t x99 = -1;
	volatile uint64_t x100 = 8401197927956418606LLU;
	volatile uint64_t t24 = 791LLU;

	t24 = ((x97^x98)|(x99&x100));

	if (t24 != 18446744073709522990LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int32_t x102 = -1;
	uint8_t x104 = 1U;
	volatile uint64_t t25 = 3900465647LLU;

	t25 = ((x101^x102)|(x103&x104));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	int64_t x106 = 2873990511839LL;
	static int16_t x107 = INT16_MAX;
	int64_t t26 = -883398287664LL;

	t26 = ((x105^x106)|(x107&x108));

	if (t26 != 2873990512639LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 45363U;
	static int32_t x110 = INT32_MIN;
	int32_t x112 = 257;
	uint32_t t27 = 75U;

	t27 = ((x109^x110)|(x111&x112));

	if (t27 != 2147529011U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -55608;
	int64_t x114 = -1LL;
	static int16_t x115 = -110;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = 142958891336LLU;

	t28 = ((x113^x114)|(x115&x116));

	if (t28 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MAX;
	static uint32_t x119 = 97032607U;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t29 = -1293849150LL;

	t29 = ((x117^x118)|(x119&x120));

	if (t29 != 9223372034707292319LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = -1;
	uint16_t x124 = 984U;
	int64_t t30 = -109364841773067LL;

	t30 = ((x121^x122)|(x123&x124));

	if (t30 != 1016LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -6221;
	uint64_t x126 = 3802865205845030LLU;
	int16_t x127 = -1;
	uint64_t x128 = 33022102705586182LLU;
	volatile uint64_t t31 = 27LLU;

	t31 = ((x125^x126)|(x127&x128));

	if (t31 != 18444348776887286679LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 111U;

	t32 = ((x129^x130)|(x131&x132));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 1;
	uint64_t x134 = 24LLU;
	volatile uint64_t x135 = UINT64_MAX;
	uint16_t x136 = 32631U;
	uint64_t t33 = 16187276156877LLU;

	t33 = ((x133^x134)|(x135&x136));

	if (t33 != 32639LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MAX;
	int64_t x139 = -620944413557149816LL;
	uint32_t x140 = 46589397U;
	volatile uint64_t t34 = 12271789952LLU;

	t34 = ((x137^x138)|(x139&x140));

	if (t34 != 18446744073709528448LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 15U;
	volatile int64_t x142 = -7235LL;
	int16_t x143 = INT16_MAX;
	static uint64_t x144 = 2200159110970041658LLU;
	volatile uint64_t t35 = 637989102LLU;

	t35 = ((x141^x142)|(x143&x144));

	if (t35 != 18446744073709545402LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 5U;
	int16_t x146 = -1;
	int16_t x148 = -6;
	int32_t t36 = 4089508;

	t36 = ((x145^x146)|(x147&x148));

	if (t36 != -6) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MAX;
	static int64_t x151 = -52970987409264LL;
	volatile int8_t x152 = -7;
	int64_t t37 = -2053135527LL;

	t37 = ((x149^x150)|(x151&x152));

	if (t37 != -52970987409153LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = 9U;
	uint8_t x155 = 72U;
	int16_t x156 = INT16_MIN;
	int64_t t38 = -342200310542731LL;

	t38 = ((x153^x154)|(x155&x156));

	if (t38 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x158 = INT16_MAX;
	static int64_t x159 = -35789464152LL;
	static volatile uint8_t x160 = UINT8_MAX;
	static int64_t t39 = -21LL;

	t39 = ((x157^x158)|(x159&x160));

	if (t39 != 2147451048LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint8_t x162 = 0U;
	int16_t x163 = -62;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = ((x161^x162)|(x163&x164));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 5883429U;
	volatile int32_t x167 = -1;
	volatile uint32_t x168 = UINT32_MAX;

	t41 = ((x165^x166)|(x167&x168));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = INT16_MIN;
	volatile int8_t x171 = 4;

	t42 = ((x169^x170)|(x171&x172));

	if (t42 != 22733LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int32_t x175 = -496299;
	int64_t t43 = -805681119105798429LL;

	t43 = ((x173^x174)|(x175&x176));

	if (t43 != -524161LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -1LL;
	static volatile int64_t t44 = 42895482400988947LL;

	t44 = ((x177^x178)|(x179&x180));

	if (t44 != 4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = -3841842837LL;
	volatile uint32_t x184 = 14979U;
	volatile uint64_t t45 = 711LLU;

	t45 = ((x181^x182)|(x183&x184));

	if (t45 != 9223372036854784003LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	static uint8_t x188 = 1U;
	static volatile int64_t t46 = 54740LL;

	t46 = ((x185^x186)|(x187&x188));

	if (t46 != -9223372036854775725LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MIN;
	static volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x189^x190)|(x191&x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x194 = INT64_MIN;
	int32_t x196 = INT32_MAX;
	volatile int64_t t48 = 3LL;

	t48 = ((x193^x194)|(x195&x196));

	if (t48 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 9U;
	static int16_t x199 = INT16_MAX;

	t49 = ((x197^x198)|(x199&x200));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 516;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = -4;
	uint32_t x204 = 28U;
	uint32_t t50 = 339260U;

	t50 = ((x201^x202)|(x203&x204));

	if (t50 != 2147484188U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	volatile int64_t t51 = -75006349618LL;

	t51 = ((x205^x206)|(x207&x208));

	if (t51 != -4124719244863715517LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	static volatile uint8_t x211 = UINT8_MAX;
	static int16_t x212 = -6216;

	t52 = ((x209^x210)|(x211&x212));

	if (t52 != 189) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 1609U;
	uint8_t x215 = 0U;
	int16_t x216 = -1;
	uint64_t t53 = 13LLU;

	t53 = ((x213^x214)|(x215&x216));

	if (t53 != 18446744073709550006LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 97334744LLU;
	volatile int8_t x218 = -1;
	uint16_t x220 = UINT16_MAX;

	t54 = ((x217^x218)|(x219&x220));

	if (t54 != 18446744073612230655LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MAX;
	volatile uint8_t x223 = 48U;
	int64_t x224 = -1LL;
	int64_t t55 = -1747205385586LL;

	t55 = ((x221^x222)|(x223&x224));

	if (t55 != 48LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = INT16_MIN;
	int32_t x227 = -7;

	t56 = ((x225^x226)|(x227&x228));

	if (t56 != -30708) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	volatile int16_t x230 = 1213;
	static int64_t x231 = 49563740LL;
	uint32_t x232 = 7074U;
	volatile int64_t t57 = -2908LL;

	t57 = ((x229^x230)|(x231&x232));

	if (t57 != -1214LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 0U;
	uint8_t x234 = 2U;
	uint64_t x235 = 10862245407LLU;
	volatile int8_t x236 = INT8_MAX;
	volatile uint64_t t58 = 104726495LLU;

	t58 = ((x233^x234)|(x235&x236));

	if (t58 != 31LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	int32_t x239 = -180034403;
	volatile int64_t x240 = -268LL;
	int64_t t59 = -4206141010LL;

	t59 = ((x237^x238)|(x239&x240));

	if (t59 != -180034412LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -1;
	static uint64_t x242 = 318478757493222LLU;
	int64_t x243 = 1LL;
	uint64_t t60 = 7280971LLU;

	t60 = ((x241^x242)|(x243&x244));

	if (t60 != 18446425594952058393LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 1U;
	int8_t x246 = -27;
	int8_t x247 = INT8_MAX;
	int16_t x248 = -1;

	t61 = ((x245^x246)|(x247&x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	uint32_t x250 = 49261U;
	uint16_t x252 = 56U;
	volatile uint32_t t62 = 1339183U;

	t62 = ((x249^x250)|(x251&x252));

	if (t62 != 49298U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 779U;
	int64_t x255 = -202LL;
	uint64_t x256 = 99292990958147342LLU;
	static volatile uint64_t t63 = 6259965594737LLU;

	t63 = ((x253^x254)|(x255&x256));

	if (t63 != 99292990979178486LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;
	static volatile int32_t x259 = -692259110;
	volatile int32_t t64 = 21;

	t64 = ((x257^x258)|(x259&x260));

	if (t64 != 2147483522) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = UINT16_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = INT32_MIN;
	volatile int64_t t65 = -2215170924736821597LL;

	t65 = ((x261^x262)|(x263&x264));

	if (t65 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = 5551039;
	int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	static int64_t t66 = -1595LL;

	t66 = ((x265^x266)|(x267&x268));

	if (t66 != -5557313LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 1LLU;
	static int32_t x271 = INT32_MAX;
	static volatile int8_t x272 = -1;

	t67 = ((x269^x270)|(x271&x272));

	if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = 117U;
	volatile int32_t x275 = INT32_MAX;
	static int32_t x276 = 2;
	volatile int32_t t68 = -27;

	t68 = ((x273^x274)|(x275&x276));

	if (t68 != 65418) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -12;
	uint16_t x278 = 2220U;
	volatile int16_t x279 = -1;
	int32_t t69 = 0;

	t69 = ((x277^x278)|(x279&x280));

	if (t69 != -2216) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = INT32_MAX;
	volatile int32_t x283 = -8;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 227;

	t70 = ((x281^x282)|(x283&x284));

	if (t70 != 2147483642) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	static int8_t x287 = INT8_MIN;
	int32_t t71 = 84;

	t71 = ((x285^x286)|(x287&x288));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 1;
	int32_t x290 = -1;
	volatile int64_t x291 = 220987639LL;
	int64_t x292 = 6LL;
	static int64_t t72 = 4828059575307LL;

	t72 = ((x289^x290)|(x291&x292));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 47LL;
	volatile int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = 9LLU;
	static uint64_t t73 = 102LLU;

	t73 = ((x293^x294)|(x295&x296));

	if (t73 != 36LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -1LL;
	uint8_t x298 = UINT8_MAX;
	volatile uint16_t x299 = 20760U;

	t74 = ((x297^x298)|(x299&x300));

	if (t74 != -256LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	int64_t x302 = 7LL;
	int32_t x304 = 3;
	volatile int64_t t75 = 543LL;

	t75 = ((x301^x302)|(x303&x304));

	if (t75 != -8LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -1LL;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MAX;

	t76 = ((x305^x306)|(x307&x308));

	if (t76 != -129LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x309 = 1;
	static int64_t x311 = -1303LL;
	volatile uint8_t x312 = 1U;
	volatile int64_t t77 = 2080LL;

	t77 = ((x309^x310)|(x311&x312));

	if (t77 != -127LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 1429966554LLU;
	int64_t x314 = INT64_MIN;
	int16_t x315 = -1;
	static int64_t x316 = INT64_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x313^x314)|(x315&x316));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 8235U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MAX;
	uint64_t x320 = 53LLU;
	static volatile uint64_t t79 = 1428165627LLU;

	t79 = ((x317^x318)|(x319&x320));

	if (t79 != 18446744071562076223LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 0;
	volatile int64_t x324 = INT64_MIN;

	t80 = ((x321^x322)|(x323&x324));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x326 = 3485U;
	int32_t x327 = 960705881;
	int64_t x328 = INT64_MAX;
	int64_t t81 = -62LL;

	t81 = ((x325^x326)|(x327&x328));

	if (t81 != -2211LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MAX;
	int64_t t82 = 592856913163207LL;

	t82 = ((x329^x330)|(x331&x332));

	if (t82 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	uint32_t x335 = 22U;
	volatile int64_t x336 = 123526776237717001LL;

	t83 = ((x333^x334)|(x335&x336));

	if (t83 != 1889148279913993LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	volatile int64_t x338 = INT64_MIN;

	t84 = ((x337^x338)|(x339&x340));

	if (t84 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 7U;
	int64_t x342 = 159772427LL;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = 59076086U;
	int64_t t85 = 531474581576595LL;

	t85 = ((x341^x342)|(x343&x344));

	if (t85 != 159772428LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 995617206LLU;
	volatile uint32_t x346 = 1027980U;
	int8_t x347 = INT8_MAX;
	int16_t x348 = -1;
	static volatile uint64_t t86 = 184759388805406LLU;

	t86 = ((x345^x346)|(x347&x348));

	if (t86 != 995640959LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MAX;
	volatile int64_t t87 = INT64_MAX;

	t87 = ((x349^x350)|(x351&x352));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 13533U;

	t88 = ((x353^x354)|(x355&x356));

	if (t88 != 4294934556U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 2373897981491666LLU;
	static volatile int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	static uint32_t x360 = UINT32_MAX;
	volatile uint64_t t89 = 6774573141412247LLU;

	t89 = ((x357^x358)|(x359&x360));

	if (t89 != 18444370176565575634LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int64_t x363 = 26002LL;
	int8_t x364 = INT8_MIN;
	int64_t t90 = 1837012LL;

	t90 = ((x361^x362)|(x363&x364));

	if (t90 != 9223372036854769024LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	uint16_t x367 = 105U;
	int32_t x368 = 296;
	volatile int32_t t91 = -38222;

	t91 = ((x365^x366)|(x367&x368));

	if (t91 != -2147483345) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = -198013216001923467LL;
	volatile uint64_t x371 = 3369052706917040838LLU;
	int16_t x372 = -1;
	volatile uint64_t t92 = 54982LLU;

	t92 = ((x369^x370)|(x371&x372));

	if (t92 != 3386566177093049294LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = INT32_MIN;
	uint16_t x375 = 1113U;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t93 = -92;

	t93 = ((x373^x374)|(x375&x376));

	if (t93 != -2147482533) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	uint32_t x378 = 65332U;
	int16_t x379 = INT16_MIN;

	t94 = ((x377^x378)|(x379&x380));

	if (t94 != 9223372036854743220LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 145159309346LLU;
	static uint64_t t95 = 4279992915LLU;

	t95 = ((x381^x382)|(x383&x384));

	if (t95 != 145159323647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	static uint8_t x388 = UINT8_MAX;
	volatile int64_t t96 = -223101973800LL;

	t96 = ((x385^x386)|(x387&x388));

	if (t96 != 9223372032559808756LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;

	t97 = ((x389^x390)|(x391&x392));

	if (t97 != 18445445108095515369LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MAX;
	volatile int16_t x395 = INT16_MIN;

	t98 = ((x393^x394)|(x395&x396));

	if (t98 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 13U;
	int32_t x398 = INT32_MIN;
	volatile uint32_t x399 = 96757U;
	static int8_t x400 = -2;
	volatile uint32_t t99 = 199719198U;

	t99 = ((x397^x398)|(x399&x400));

	if (t99 != 2147580413U) { NG(); } else { ; }
	
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

