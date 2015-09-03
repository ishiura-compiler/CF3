#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -24;
static uint8_t x4 = UINT8_MAX;
int64_t x14 = 1057379LL;
static int64_t t3 = 1189448517252883LL;
volatile uint16_t x18 = UINT16_MAX;
int64_t t4 = 90787LL;
volatile int64_t x24 = INT64_MAX;
int8_t x26 = INT8_MAX;
static int32_t x32 = 5;
uint64_t t8 = 10668319494343LLU;
int8_t x41 = 3;
uint64_t x43 = UINT64_MAX;
int8_t x49 = INT8_MAX;
volatile int16_t x51 = 6;
volatile uint64_t t13 = 28475481172853545LLU;
int64_t t14 = 80708640542LL;
static volatile int64_t x66 = -1LL;
volatile int32_t x67 = -9277;
static int64_t x70 = INT64_MIN;
int8_t x72 = -8;
int32_t x77 = INT32_MIN;
int32_t x82 = -9885911;
int64_t x84 = -1LL;
int16_t x85 = INT16_MIN;
int16_t x86 = -1;
volatile uint8_t x88 = UINT8_MAX;
int32_t t20 = -3;
uint32_t x96 = 5352133U;
int32_t x99 = 0;
int8_t x101 = INT8_MAX;
int32_t x103 = 0;
int32_t x108 = -2604817;
int64_t x125 = 31957494373333LL;
int8_t x126 = 1;
int64_t x128 = INT64_MIN;
int64_t x131 = INT64_MIN;
int16_t x133 = INT16_MIN;
int64_t x135 = INT64_MIN;
int64_t x137 = 6245283507437639LL;
volatile uint16_t x138 = 294U;
volatile uint64_t t33 = 184918773950898036LLU;
int32_t x148 = -1;
volatile int8_t x151 = -2;
int32_t x155 = INT32_MIN;
volatile int32_t t38 = -871;
int8_t x174 = -20;
uint64_t x175 = 16522164391328235LLU;
int8_t x185 = 9;
int8_t x191 = INT8_MIN;
volatile uint8_t x193 = 1U;
uint64_t x196 = 1892265LLU;
static uint8_t x197 = 12U;
static uint8_t x200 = 59U;
uint16_t x203 = UINT16_MAX;
int8_t x207 = -1;
volatile uint64_t t52 = 40LLU;
uint8_t x222 = UINT8_MAX;
int64_t x223 = -1LL;
int8_t x227 = -1;
static uint8_t x229 = 71U;
int16_t x235 = INT16_MAX;
int64_t x239 = INT64_MIN;
int8_t x254 = INT8_MAX;
uint64_t t60 = 331881739LLU;
static volatile uint8_t x262 = UINT8_MAX;
uint16_t x269 = 622U;
int32_t x272 = INT32_MIN;
static int8_t x276 = -6;
int32_t x282 = -1;
int64_t x288 = 114201251359847209LL;
uint8_t x293 = 30U;
volatile uint16_t x295 = UINT16_MAX;
volatile int32_t t69 = 197677211;
int8_t x297 = INT8_MIN;
static uint8_t x300 = UINT8_MAX;
int32_t t70 = 2622431;
volatile int32_t t71 = 18987;
uint32_t x310 = UINT32_MAX;
int16_t x321 = 19;
int64_t x322 = INT64_MIN;
static int64_t x323 = INT64_MAX;
static uint32_t t77 = 15U;
volatile int32_t t79 = 1;
int8_t x346 = INT8_MIN;
volatile int8_t x354 = 1;
int16_t x356 = 6728;
uint64_t t83 = 1LLU;
uint8_t x360 = 10U;
int8_t x363 = INT8_MIN;
int16_t x364 = INT16_MIN;
uint64_t x371 = UINT64_MAX;
int32_t x375 = -114385;
int8_t x384 = -1;
int8_t x385 = INT8_MIN;
uint8_t x394 = UINT8_MAX;
uint8_t x399 = UINT8_MAX;
uint32_t x404 = 63515U;
int8_t x411 = INT8_MIN;


void f0(void) {
	uint16_t x1 = 0U;
	static volatile uint16_t x3 = UINT16_MAX;
	static int32_t t0 = 2036;

	t0 = ((x1&x2)%(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 320LL;
	uint64_t x6 = 2526972634452LLU;
	volatile int64_t x7 = INT64_MAX;
	uint16_t x8 = UINT16_MAX;
	static uint64_t t1 = 12920471936983LLU;

	t1 = ((x5&x6)%(x7^x8));

	if (t1 != 320LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static int64_t x10 = INT64_MAX;
	int8_t x11 = -1;
	int64_t x12 = -45628441823701928LL;
	int64_t t2 = 786LL;

	t2 = ((x9&x10)%(x11^x12));

	if (t2 != 6426788466986553LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13&x14)%(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x19 = INT64_MAX;
	static int32_t x20 = INT32_MIN;

	t4 = ((x17&x18)%(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -670LL;
	static volatile int8_t x22 = -6;
	int64_t x23 = -1LL;
	volatile int64_t t5 = -265662585LL;

	t5 = ((x21&x22)%(x23^x24));

	if (t5 != -670LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint8_t x27 = 59U;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = 759281208;

	t6 = ((x25&x26)%(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 1U;
	int32_t x30 = INT32_MAX;
	static int16_t x31 = -16006;
	int32_t t7 = 208;

	t7 = ((x29&x30)%(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static uint64_t x34 = 40874438425703034LLU;
	int64_t x35 = -1LL;
	int64_t x36 = -225786008964640LL;

	t8 = ((x33&x34)%(x35^x36));

	if (t8 != 122LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MIN;
	int32_t x40 = 16402;
	volatile int32_t t9 = 56722;

	t9 = ((x37&x38)%(x39^x40));

	if (t9 != -2592) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x42 = 15288U;
	int8_t x44 = INT8_MIN;
	uint64_t t10 = 0LLU;

	t10 = ((x41&x42)%(x43^x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 3669704362207971925LLU;
	int8_t x46 = INT8_MIN;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = 264698;
	static volatile uint64_t t11 = 92409764483359709LLU;

	t11 = ((x45&x46)%(x47^x48));

	if (t11 != 3669704362207971840LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 1896U;
	int16_t x52 = INT16_MIN;
	uint32_t t12 = 806390U;

	t12 = ((x49&x50)%(x51^x52));

	if (t12 != 104U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 20988325;
	volatile uint64_t x54 = 1787195799LLU;
	volatile int16_t x55 = INT16_MIN;
	int64_t x56 = -496589428707913LL;

	t13 = ((x53&x54)%(x55^x56));

	if (t13 != 16773LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x62 = -14777318443LL;
	volatile int64_t x63 = -1LL;
	int32_t x64 = 2;

	t14 = ((x61&x62)%(x63^x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 0U;
	volatile int32_t x68 = INT32_MIN;
	volatile int64_t t15 = 650481794564LL;

	t15 = ((x65&x66)%(x67^x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x71 = INT32_MIN;
	int64_t t16 = 1258433468LL;

	t16 = ((x69&x70)%(x71^x72));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 2U;
	int32_t x74 = -14224;
	volatile int32_t x75 = -1;
	int8_t x76 = 1;
	int32_t t17 = -16543807;

	t17 = ((x73&x74)%(x75^x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	int16_t x80 = 3526;
	volatile int32_t t18 = -1;

	t18 = ((x77&x78)%(x79^x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x81 = 1U;
	static int64_t x83 = -183LL;
	volatile int64_t t19 = 552LL;

	t19 = ((x81&x82)%(x83^x84));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x87 = 68U;

	t20 = ((x85&x86)%(x87^x88));

	if (t20 != -43) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	volatile uint32_t t21 = 42276U;

	t21 = ((x93&x94)%(x95^x96));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	static volatile int16_t x98 = INT16_MIN;
	int8_t x100 = 23;
	volatile int32_t t22 = -38;

	t22 = ((x97&x98)%(x99^x100));

	if (t22 != -16) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x102 = INT16_MAX;
	volatile uint64_t x104 = 4588097906779568639LLU;
	volatile uint64_t t23 = 5LLU;

	t23 = ((x101&x102)%(x103^x104));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int8_t x106 = 0;
	uint8_t x107 = UINT8_MAX;
	int32_t t24 = -526174912;

	t24 = ((x105&x106)%(x107^x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = UINT64_MAX;
	static int64_t x110 = -422LL;
	volatile uint32_t x111 = UINT32_MAX;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t25 = 153618LLU;

	t25 = ((x109&x110)%(x111^x112));

	if (t25 != 2147483229LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = INT16_MAX;
	uint64_t x114 = UINT64_MAX;
	uint8_t x115 = 16U;
	uint8_t x116 = 3U;
	static uint64_t t26 = 7LLU;

	t26 = ((x113&x114)%(x115^x116));

	if (t26 != 11LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = -112695571;
	static int16_t x118 = INT16_MIN;
	volatile int16_t x119 = INT16_MIN;
	volatile uint32_t x120 = 557420371U;
	volatile uint32_t t27 = 2948U;

	t27 = ((x117&x118)%(x119^x120));

	if (t27 != 444723373U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = -55675922483LL;
	int64_t x122 = INT64_MIN;
	volatile int16_t x123 = INT16_MIN;
	int32_t x124 = 53;
	volatile int64_t t28 = -6LL;

	t28 = ((x121&x122)%(x123^x124));

	if (t28 != -16613LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x127 = INT8_MIN;
	int64_t t29 = 233671803647216LL;

	t29 = ((x125&x126)%(x127^x128));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = -1;
	static int32_t x130 = INT32_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile int64_t t30 = -13897591100042LL;

	t30 = ((x129&x130)%(x131^x132));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = INT64_MIN;
	int64_t x136 = 24371290312386513LL;
	int64_t t31 = 17505052966913LL;

	t31 = ((x133&x134)%(x135^x136));

	if (t31 != -24371290312386513LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x139 = 7U;
	int64_t x140 = INT64_MIN;
	int64_t t32 = 16372LL;

	t32 = ((x137&x138)%(x139^x140));

	if (t32 != 6LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = INT32_MIN;
	uint64_t x142 = 27LLU;
	volatile int64_t x143 = INT64_MAX;
	uint64_t x144 = UINT64_MAX;

	t33 = ((x141&x142)%(x143^x144));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	uint64_t x146 = 14423677682652LLU;
	int32_t x147 = 317;
	uint64_t t34 = 62493586560LLU;

	t34 = ((x145&x146)%(x147^x148));

	if (t34 != 1177502684LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = 4346;
	static int8_t x150 = 26;
	int16_t x152 = INT16_MIN;
	int32_t t35 = 15223;

	t35 = ((x149&x150)%(x151^x152));

	if (t35 != 26) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	int64_t x154 = INT64_MIN;
	int16_t x156 = -1;
	volatile int64_t t36 = 2LL;

	t36 = ((x153&x154)%(x155^x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	int32_t x158 = INT32_MIN;
	uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 4U;
	int64_t t37 = 1239827LL;

	t37 = ((x157&x158)%(x159^x160));

	if (t37 != 224LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -681;
	static volatile int8_t x162 = INT8_MIN;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = 885;

	t38 = ((x161&x162)%(x163^x164));

	if (t38 != -768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	static volatile int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = UINT16_MAX;
	volatile int8_t x168 = -1;
	volatile int32_t t39 = -2052950;

	t39 = ((x165&x166)%(x167^x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x169 = 4;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = -10;
	static uint32_t x172 = UINT32_MAX;
	uint64_t t40 = 15647857LLU;

	t40 = ((x169&x170)%(x171^x172));

	if (t40 != 4LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 14340U;
	uint64_t x176 = 49880562530250203LLU;
	volatile uint64_t t41 = 25025LLU;

	t41 = ((x173&x174)%(x175^x176));

	if (t41 != 14340LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = -1LL;
	int16_t x178 = 11;
	int16_t x179 = INT16_MAX;
	uint32_t x180 = 558414U;
	int64_t t42 = -477705431LL;

	t42 = ((x177&x178)%(x179^x180));

	if (t42 != 11LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = -1LL;
	uint64_t x182 = 450453411445853LLU;
	static volatile int64_t x183 = INT64_MAX;
	int16_t x184 = -3;
	volatile uint64_t t43 = 393885781995176728LLU;

	t43 = ((x181&x182)%(x183^x184));

	if (t43 != 450453411445853LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x186 = -28;
	static int64_t x187 = INT64_MIN;
	static int8_t x188 = 0;
	int64_t t44 = -11504068216LL;

	t44 = ((x185&x186)%(x187^x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 15U;
	int32_t x190 = INT32_MIN;
	uint32_t x192 = UINT32_MAX;
	uint32_t t45 = 225886445U;

	t45 = ((x189&x190)%(x191^x192));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x194 = -1LL;
	static int8_t x195 = -1;
	uint64_t t46 = 237177518203LLU;

	t46 = ((x193&x194)%(x195^x196));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = 6284954;
	int64_t x199 = INT64_MIN;
	volatile int64_t t47 = -2428LL;

	t47 = ((x197&x198)%(x199^x200));

	if (t47 != 8LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = 352U;
	uint16_t x202 = 3230U;
	volatile uint8_t x204 = UINT8_MAX;
	uint32_t t48 = 19972580U;

	t48 = ((x201&x202)%(x203^x204));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 35U;
	volatile uint64_t x206 = 1LLU;
	int64_t x208 = INT64_MIN;
	uint64_t t49 = 65410936188295639LLU;

	t49 = ((x205&x206)%(x207^x208));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = UINT64_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = 9;
	volatile int32_t x212 = INT32_MIN;
	uint64_t t50 = 839067502971086LLU;

	t50 = ((x209&x210)%(x211^x212));

	if (t50 != 255LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -1;
	int16_t x214 = INT16_MAX;
	volatile int32_t x215 = INT32_MIN;
	static int16_t x216 = INT16_MIN;
	int32_t t51 = 5374002;

	t51 = ((x213&x214)%(x215^x216));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	static volatile int16_t x218 = -1;
	int64_t x219 = -1LL;
	uint64_t x220 = 3959305186160LLU;

	t52 = ((x217&x218)%(x219^x220));

	if (t52 != 3957157702513LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	uint8_t x224 = 0U;
	volatile int64_t t53 = -10341475589LL;

	t53 = ((x221&x222)%(x223^x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 119U;
	static int32_t x226 = -1;
	volatile int8_t x228 = 3;
	static volatile int32_t t54 = 105;

	t54 = ((x225&x226)%(x227^x228));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x230 = INT64_MAX;
	volatile int64_t x231 = INT64_MIN;
	volatile int32_t x232 = INT32_MAX;
	int64_t t55 = 108255322489LL;

	t55 = ((x229&x230)%(x231^x232));

	if (t55 != 71LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = -5;
	int16_t x236 = -1;
	static volatile int32_t t56 = 125;

	t56 = ((x233&x234)%(x235^x236));

	if (t56 != 32763) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	static volatile int8_t x238 = INT8_MAX;
	uint8_t x240 = 91U;
	int64_t t57 = 165LL;

	t57 = ((x237&x238)%(x239^x240));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = INT16_MIN;
	uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MAX;
	volatile int32_t t58 = -27;

	t58 = ((x241&x242)%(x243^x244));

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = -1;
	int64_t x250 = INT64_MAX;
	int64_t x251 = INT64_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile int64_t t59 = 1901115364LL;

	t59 = ((x249&x250)%(x251^x252));

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x253 = UINT16_MAX;
	int16_t x255 = 2;
	uint64_t x256 = UINT64_MAX;

	t60 = ((x253&x254)%(x255^x256));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 2341LLU;
	static int32_t x258 = INT32_MIN;
	static uint16_t x259 = UINT16_MAX;
	int64_t x260 = -68069905LL;
	uint64_t t61 = 11512290868LLU;

	t61 = ((x257&x258)%(x259^x260));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 1773;
	uint8_t x263 = 0U;
	volatile int16_t x264 = INT16_MIN;
	int32_t t62 = -2;

	t62 = ((x261&x262)%(x263^x264));

	if (t62 != 237) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 555U;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = 21534999928737189LLU;
	int8_t x268 = -1;
	static uint64_t t63 = 11373LLU;

	t63 = ((x265&x266)%(x267^x268));

	if (t63 != 555LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x270 = INT32_MIN;
	uint16_t x271 = 26U;
	int32_t t64 = -849;

	t64 = ((x269&x270)%(x271^x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x273 = 0LLU;
	uint8_t x274 = 3U;
	uint64_t x275 = UINT64_MAX;
	uint64_t t65 = 900037288280952LLU;

	t65 = ((x273&x274)%(x275^x276));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = 784836921408LL;
	volatile int64_t x278 = -24411325LL;
	uint64_t x279 = 223219179381979LLU;
	uint16_t x280 = UINT16_MAX;
	volatile uint64_t t66 = 92208723690388149LLU;

	t66 = ((x277&x278)%(x279^x280));

	if (t66 != 784813588544LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = 1551903414LL;
	volatile int8_t x283 = INT8_MIN;
	int8_t x284 = -51;
	static volatile int64_t t67 = -267462304541710LL;

	t67 = ((x281&x282)%(x283^x284));

	if (t67 != 61LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	volatile uint8_t x286 = 0U;
	int8_t x287 = -11;
	static int64_t t68 = 318794098172111LL;

	t68 = ((x285&x286)%(x287^x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x294 = 40U;
	int16_t x296 = -1;

	t69 = ((x293&x294)%(x295^x296));

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = 3744;

	t70 = ((x297&x298)%(x299^x300));

	if (t70 != 2865) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = -1;
	static uint16_t x303 = UINT16_MAX;
	static uint16_t x304 = 8395U;

	t71 = ((x301&x302)%(x303^x304));

	if (t71 != 8395) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -18;
	uint64_t x306 = UINT64_MAX;
	static uint8_t x307 = UINT8_MAX;
	int32_t x308 = 1136;
	volatile uint64_t t72 = 7223LLU;

	t72 = ((x305&x306)%(x307^x308));

	if (t72 != 151LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x309 = INT8_MIN;
	int8_t x311 = -1;
	uint64_t x312 = 7032305LLU;
	volatile uint64_t t73 = 31206684LLU;

	t73 = ((x309&x310)%(x311^x312));

	if (t73 != 4294967168LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	static uint8_t x318 = UINT8_MAX;
	uint64_t x319 = UINT64_MAX;
	volatile int32_t x320 = INT32_MIN;
	uint64_t t74 = 12424760LLU;

	t74 = ((x317&x318)%(x319^x320));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t75 = 109199613219039LLU;

	t75 = ((x321&x322)%(x323^x324));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = INT8_MIN;
	static int64_t x326 = -1LL;
	int8_t x327 = 5;
	static uint32_t x328 = 1460555U;
	static volatile int64_t t76 = 48LL;

	t76 = ((x325&x326)%(x327^x328));

	if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x329 = 31U;
	int32_t x330 = -1;
	uint8_t x331 = 41U;
	volatile uint8_t x332 = UINT8_MAX;

	t77 = ((x329&x330)%(x331^x332));

	if (t77 != 31U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = -1LL;
	static int32_t x335 = -448112594;
	int32_t x336 = -1;
	static uint64_t t78 = 2LLU;

	t78 = ((x333&x334)%(x335^x336));

	if (t78 != 34376654LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = 3U;
	static int8_t x338 = 46;
	int32_t x339 = 5;
	int32_t x340 = 3;

	t79 = ((x337&x338)%(x339^x340));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = 3;
	uint16_t x343 = 17U;
	volatile int16_t x344 = INT16_MIN;
	static volatile int32_t t80 = -673946;

	t80 = ((x341&x342)%(x343^x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 7993U;
	volatile int32_t t81 = -136;

	t81 = ((x345&x346)%(x347^x348));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = INT8_MAX;
	volatile uint32_t x350 = 74U;
	volatile uint16_t x351 = UINT16_MAX;
	static volatile uint8_t x352 = 1U;
	static volatile uint32_t t82 = 117534577U;

	t82 = ((x349&x350)%(x351^x352));

	if (t82 != 74U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x353 = UINT8_MAX;
	static uint64_t x355 = UINT64_MAX;

	t83 = ((x353&x354)%(x355^x356));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = -1;
	volatile uint16_t x358 = 3050U;
	int16_t x359 = INT16_MIN;
	volatile int32_t t84 = -2889642;

	t84 = ((x357&x358)%(x359^x360));

	if (t84 != 3050) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = 2;
	uint8_t x362 = 3U;
	volatile int32_t t85 = -451061237;

	t85 = ((x361&x362)%(x363^x364));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x365 = -1;
	static int8_t x366 = -1;
	int32_t x367 = 2844862;
	uint64_t x368 = 12LLU;
	volatile uint64_t t86 = 364130858580583LLU;

	t86 = ((x365&x366)%(x367^x368));

	if (t86 != 1191115LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = -1LL;
	int64_t x372 = INT64_MIN;
	static uint64_t t87 = 252311163252LLU;

	t87 = ((x369&x370)%(x371^x372));

	if (t87 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 278446280158341823LLU;
	static uint64_t x374 = 79567515942623LLU;
	volatile int16_t x376 = INT16_MAX;
	uint64_t t88 = 6465746LLU;

	t88 = ((x373&x374)%(x375^x376));

	if (t88 != 9107503704735LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x378 = -1LL;
	volatile uint16_t x379 = 13U;
	int8_t x380 = INT8_MAX;
	static int64_t t89 = -208753518864869LL;

	t89 = ((x377&x378)%(x379^x380));

	if (t89 != -14LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = UINT32_MAX;
	uint64_t x382 = 4LLU;
	uint16_t x383 = UINT16_MAX;
	static uint64_t t90 = 1LLU;

	t90 = ((x381&x382)%(x383^x384));

	if (t90 != 4LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x386 = 7;
	int8_t x387 = -5;
	static int8_t x388 = 1;
	volatile int32_t t91 = -58441;

	t91 = ((x385&x386)%(x387^x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MAX;
	int32_t t92 = 10038;

	t92 = ((x389&x390)%(x391^x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x393 = 3U;
	static volatile uint8_t x395 = UINT8_MAX;
	int32_t x396 = -2376;
	volatile int32_t t93 = 638;

	t93 = ((x393&x394)%(x395^x396));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x397 = -1;
	volatile uint64_t x398 = 5LLU;
	uint16_t x400 = UINT16_MAX;
	uint64_t t94 = 8454519575LLU;

	t94 = ((x397&x398)%(x399^x400));

	if (t94 != 5LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x401 = 285335478709571313LLU;
	int8_t x402 = -1;
	uint8_t x403 = 0U;
	volatile uint64_t t95 = 2219081489LLU;

	t95 = ((x401&x402)%(x403^x404));

	if (t95 != 55288LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = 0U;
	int64_t x407 = INT64_MIN;
	int32_t x408 = 1;
	static volatile int64_t t96 = 1731LL;

	t96 = ((x405&x406)%(x407^x408));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 2U;
	static uint8_t x412 = 2U;
	volatile int32_t t97 = -2995;

	t97 = ((x409&x410)%(x411^x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -1;
	volatile int16_t x414 = -83;
	volatile int16_t x415 = 1;
	int8_t x416 = INT8_MIN;
	volatile int32_t t98 = 40311843;

	t98 = ((x413&x414)%(x415^x416));

	if (t98 != -83) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MIN;
	volatile int64_t x419 = INT64_MIN;
	int32_t x420 = 37;
	int64_t t99 = 77188709156660432LL;

	t99 = ((x417&x418)%(x419^x420));

	if (t99 != -37LL) { NG(); } else { ; }
	
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

