#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
int32_t x11 = -1;
static int32_t x12 = INT32_MIN;
static int64_t x14 = INT64_MAX;
volatile int16_t x17 = 1;
uint64_t t3 = 1149953155335897LLU;
volatile int32_t x23 = 882;
int16_t x25 = -1;
uint32_t x44 = UINT32_MAX;
uint8_t x51 = UINT8_MAX;
int8_t x52 = INT8_MIN;
volatile int64_t t9 = 2198946119488324LL;
int64_t x64 = INT64_MIN;
static volatile int32_t x69 = INT32_MAX;
int64_t x72 = 3651603961835176LL;
uint8_t x79 = 6U;
static uint8_t x85 = 1U;
volatile int32_t x86 = INT32_MIN;
static int64_t x90 = INT64_MIN;
int32_t x92 = -20331;
volatile uint64_t t17 = 891083528021LLU;
int8_t x93 = INT8_MIN;
static int16_t x101 = INT16_MIN;
int64_t x103 = INT64_MAX;
volatile int16_t x104 = INT16_MIN;
int64_t t19 = 7LL;
volatile uint64_t t20 = 92LLU;
volatile uint8_t x117 = 0U;
int32_t x119 = 52791;
volatile int32_t t23 = -1726131;
uint8_t x125 = 1U;
int16_t x127 = 461;
uint32_t x130 = 48U;
uint64_t x139 = UINT64_MAX;
volatile uint64_t t26 = 29554LLU;
uint32_t x142 = 35U;
volatile int32_t x144 = INT32_MIN;
static uint64_t t27 = 324LLU;
uint64_t x147 = 5854822999LLU;
volatile uint64_t t28 = 46537909811059349LLU;
uint16_t x155 = 16215U;
static uint32_t x160 = UINT32_MAX;
uint32_t t32 = 65275U;
int64_t x174 = INT64_MIN;
uint16_t x190 = 1474U;
int8_t x192 = INT8_MIN;
volatile int32_t x196 = INT32_MIN;
volatile int64_t t39 = -38952182530LL;
int64_t x197 = -1LL;
uint32_t x198 = UINT32_MAX;
int64_t t40 = -73LL;
int16_t x212 = 1;
int64_t t43 = 88709604287LL;
int16_t x221 = 410;
int64_t x227 = -3190900LL;
volatile int8_t x241 = -61;
uint16_t x252 = UINT16_MAX;
int16_t x255 = 569;
static uint16_t x256 = 2U;
int16_t x267 = INT16_MIN;
volatile uint8_t x276 = 1U;
int64_t t57 = -9931358359429175LL;
int64_t x281 = -45356564026LL;
static volatile int64_t x295 = INT64_MAX;
volatile int16_t x297 = -876;
static volatile int64_t t64 = -137116158009741311LL;
int32_t x316 = 92543;
int8_t x317 = INT8_MIN;
volatile int16_t x334 = INT16_MIN;
int64_t x339 = -6803483022375375LL;
static int8_t x341 = 17;
static int32_t x350 = 13754;
int16_t x352 = INT16_MAX;
volatile int16_t x353 = INT16_MAX;
volatile int64_t x354 = INT64_MIN;
int16_t x366 = 3606;
static uint16_t x367 = 1U;
int16_t x370 = -1;
uint8_t x389 = 1U;
int32_t x390 = 6;
int8_t x391 = INT8_MAX;
int16_t x392 = 2068;
int16_t x393 = INT16_MAX;
static volatile uint64_t t84 = 1607LLU;
volatile uint64_t t88 = 196989935LLU;
int16_t x413 = INT16_MAX;
static volatile int8_t x416 = INT8_MIN;
int16_t x428 = -1;
int32_t t92 = 1;
int32_t x440 = INT32_MAX;
int32_t x444 = INT32_MIN;
int32_t x445 = INT32_MAX;
uint64_t x448 = 2218273413617554611LLU;
int8_t x449 = -1;
uint64_t t97 = 904825489LLU;
int16_t x457 = INT16_MAX;
int8_t x462 = INT8_MIN;
uint64_t x463 = UINT64_MAX;


void f0(void) {
	uint8_t x5 = 13U;
	uint8_t x6 = UINT8_MAX;
	int64_t x8 = INT64_MIN;
	volatile int64_t t0 = 246LL;

	t0 = (x5^((x6-x7)^x8));

	if (t0 != -9223372036854775539LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -11;
	static int32_t x10 = -4155958;
	static volatile int32_t t1 = -131;

	t1 = (x9^((x10-x11)^x12));

	if (t1 != -2143327682) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x13 = -1LL;
	int8_t x15 = INT8_MAX;
	int64_t x16 = -26230608LL;
	volatile int64_t t2 = -68043362228466LL;

	t2 = (x13^((x14-x15)^x16));

	if (t2 != 9223372036828545231LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x18 = INT64_MAX;
	uint64_t x19 = 7248867926501LLU;
	uint8_t x20 = UINT8_MAX;

	t3 = (x17^((x18-x19)^x20));

	if (t3 != 9223364787986849508LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = -528LL;
	static int8_t x24 = INT8_MAX;
	volatile int64_t t4 = -809011844597930LL;

	t4 = (x21^((x22-x23)^x24));

	if (t4 != 2147482113LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MAX;
	volatile uint16_t x27 = 337U;
	int32_t x28 = INT32_MIN;
	int64_t t5 = -97020082119558065LL;

	t5 = (x25^((x26-x27)^x28));

	if (t5 != 9223372034707292497LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint8_t x30 = 3U;
	static int16_t x31 = INT16_MAX;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t6 = 8278LLU;

	t6 = (x29^((x30-x31)^x32));

	if (t6 != 18446744071562100731LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	uint8_t x38 = 1U;
	static int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t7 = 0;

	t7 = (x37^((x38-x39)^x40));

	if (t7 != -32770) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 2798081632LL;
	static uint8_t x42 = 10U;
	static int8_t x43 = -1;
	static volatile int64_t t8 = -77931006535LL;

	t8 = (x41^((x42-x43)^x44));

	if (t8 != 1496885652LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = INT32_MIN;
	int64_t x50 = 1039497158205079423LL;

	t9 = (x49^((x50-x51)^x52));

	if (t9 != 1039497156733993216LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	int16_t x55 = -1;
	static uint16_t x56 = 2981U;
	int32_t t10 = 374;

	t10 = (x53^((x54-x55)^x56));

	if (t10 != 2147480612) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MAX;
	int8_t x62 = 0;
	int8_t x63 = -14;
	int64_t t11 = 8801011104629LL;

	t11 = (x61^((x62-x63)^x64));

	if (t11 != -9223372034707292175LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x65 = -1;
	int16_t x66 = -1;
	static int64_t x67 = INT64_MAX;
	volatile int64_t x68 = INT64_MAX;
	static volatile int64_t t12 = 990173521009974LL;

	t12 = (x65^((x66-x67)^x68));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	volatile int64_t t13 = 117LL;

	t13 = (x69^((x70-x71)^x72));

	if (t13 != -3651603525439786LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x73 = -1LL;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 448221022017891216LLU;
	uint8_t x76 = 98U;
	static uint64_t t14 = 3LLU;

	t14 = (x73^((x74-x75)^x76));

	if (t14 != 9671593058872667117LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x77 = INT32_MIN;
	uint64_t x78 = 15708LLU;
	int8_t x80 = -1;
	volatile uint64_t t15 = 524058305806382914LLU;

	t15 = (x77^((x78-x79)^x80));

	if (t15 != 2147467945LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x87 = -1LL;
	int64_t x88 = -1LL;
	static int64_t t16 = 209468675912785100LL;

	t16 = (x85^((x86-x87)^x88));

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	static uint64_t x91 = UINT64_MAX;

	t17 = (x89^((x90-x91)^x92));

	if (t17 != 9223372039002239124LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = -3;
	uint64_t x95 = 2641LLU;
	static volatile int8_t x96 = -1;
	volatile uint64_t t18 = 506496LLU;

	t18 = (x93^((x94-x95)^x96));

	if (t18 != 18446744073709549011LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x102 = 3U;

	t19 = (x101^((x102-x103)^x104));

	if (t19 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = -1;
	uint64_t x106 = 10715LLU;
	uint16_t x107 = 9790U;
	int32_t x108 = INT32_MAX;

	t20 = (x105^((x106-x107)^x108));

	if (t20 != 18446744071562068893LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MAX;
	uint32_t x110 = 821U;
	uint16_t x111 = 27U;
	static int8_t x112 = INT8_MAX;
	volatile uint32_t t21 = 1322358U;

	t21 = (x109^((x110-x111)^x112));

	if (t21 != 2147482778U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = 27;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t22 = 55;

	t22 = (x117^((x118-x119)^x120));

	if (t22 != 45540) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = 16;
	uint16_t x122 = UINT16_MAX;
	static int32_t x123 = -725989958;
	int16_t x124 = -1;

	t23 = (x121^((x122-x123)^x124));

	if (t23 != -726055510) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x126 = UINT64_MAX;
	volatile int32_t x128 = INT32_MIN;
	static uint64_t t24 = 1422294003494013LLU;

	t24 = (x125^((x126-x127)^x128));

	if (t24 != 2147483187LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -1;
	int8_t x131 = INT8_MIN;
	int32_t x132 = -83;
	volatile uint32_t t25 = 183U;

	t25 = (x129^((x130-x131)^x132));

	if (t25 != 226U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = 381LL;
	volatile int32_t x138 = 55;
	uint16_t x140 = 15537U;

	t26 = (x137^((x138-x139)^x140));

	if (t26 != 15860LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x143 = 902395836;

	t27 = (x141^((x142-x143)^x144));

	if (t27 != 18446744072464463768LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x145 = 0U;
	int16_t x146 = INT16_MIN;
	uint64_t x148 = 409970LLU;

	t28 = (x145^((x146-x147)^x148));

	if (t28 != 18446744067854548187LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x149 = -1;
	uint16_t x150 = 2U;
	volatile int32_t x151 = 5233;
	int16_t x152 = -139;
	int32_t t29 = -671375;

	t29 = (x149^((x150-x151)^x152));

	if (t29 != -5349) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = 562898;
	uint32_t x154 = 247131174U;
	static int64_t x156 = INT64_MIN;
	volatile int64_t t30 = -23832938767641LL;

	t30 = (x153^((x154-x155)^x156));

	if (t30 != -9223372036608214499LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = 0;
	volatile uint16_t x159 = 3480U;
	uint32_t t31 = 95918U;

	t31 = (x157^((x158-x159)^x160));

	if (t31 != 29288U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = 20865U;
	volatile int16_t x162 = -15924;
	int16_t x163 = INT16_MAX;
	int8_t x164 = -1;

	t32 = (x161^((x162-x163)^x164));

	if (t32 != 61363U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = INT16_MAX;
	volatile int16_t x170 = INT16_MIN;
	volatile int64_t x171 = -12013356LL;
	int32_t x172 = -45078;
	volatile int64_t t33 = 273050LL;

	t33 = (x169^((x170-x171)^x172));

	if (t33 != -11927751LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	static volatile int32_t x176 = INT32_MIN;
	int64_t t34 = 15LL;

	t34 = (x173^((x174-x175)^x176));

	if (t34 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x177 = UINT32_MAX;
	static uint16_t x178 = 15483U;
	int32_t x179 = -686520277;
	uint64_t x180 = 607LLU;
	volatile uint64_t t35 = 153096364LLU;

	t35 = (x177^((x178-x179)^x180));

	if (t35 != 3608431088LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = 31966804454207LL;
	int32_t x183 = 212863;
	static volatile uint32_t x184 = UINT32_MAX;
	int64_t t36 = -255714258178LL;

	t36 = (x181^((x182-x183)^x184));

	if (t36 != -9223340073070816193LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = 1;
	uint64_t x186 = UINT64_MAX;
	static uint32_t x187 = UINT32_MAX;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t37 = 33604482829924LLU;

	t37 = (x185^((x186-x187)^x188));

	if (t37 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = INT8_MAX;
	static uint32_t x191 = UINT32_MAX;
	volatile uint32_t t38 = 2005078U;

	t38 = (x189^((x190-x191)^x192));

	if (t38 != 4294965820U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = INT16_MAX;
	uint8_t x195 = 20U;

	t39 = (x193^((x194-x195)^x196));

	if (t39 != -9223372034707324908LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MIN;

	t40 = (x197^((x198-x199)^x200));

	if (t40 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MIN;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	int64_t t41 = 21LL;

	t41 = (x205^((x206-x207)^x208));

	if (t41 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MAX;
	volatile int16_t x210 = INT16_MIN;
	int32_t x211 = -367730905;
	int32_t t42 = 0;

	t42 = (x209^((x210-x211)^x212));

	if (t42 != 1779785511) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	int8_t x215 = -1;
	int64_t x216 = INT64_MIN;

	t43 = (x213^((x214-x215)^x216));

	if (t43 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x222 = INT32_MIN;
	volatile uint64_t x223 = 261684720083LLU;
	static int64_t x224 = -1LL;
	static uint64_t t44 = 299056541947959LLU;

	t44 = (x221^((x222-x223)^x224));

	if (t44 != 263832203336LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 233655U;
	int8_t x228 = 1;
	volatile int64_t t45 = 77275698LL;

	t45 = (x225^((x226-x227)^x228));

	if (t45 != -2144059094LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x229 = 2196544901828387784LLU;
	static volatile int16_t x230 = INT16_MAX;
	int32_t x231 = 34743682;
	int16_t x232 = 13255;
	uint64_t t46 = 22401635549615LLU;

	t46 = (x229^((x230-x231)^x232));

	if (t46 != 16250199171913697906LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = INT32_MAX;
	volatile int16_t x234 = INT16_MIN;
	uint64_t x235 = 1013352883389LLU;
	int64_t x236 = -162863829480324009LL;
	static volatile uint64_t t47 = 207LLU;

	t47 = (x233^((x234-x235)^x236));

	if (t47 != 162863105554686187LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = 1;
	int32_t x238 = -43516;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 74696833LLU;
	uint64_t t48 = 6549LLU;

	t48 = (x237^((x238-x239)^x240));

	if (t48 != 18446744073634848388LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x242 = INT16_MIN;
	volatile uint32_t x243 = 29821U;
	int64_t x244 = -17082009574556LL;
	int64_t t49 = -119LL;

	t49 = (x241^((x242-x243)^x244));

	if (t49 != 17084455311140LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = -1;
	static int16_t x246 = INT16_MIN;
	static int32_t x247 = -2936606;
	int16_t x248 = 44;
	volatile int32_t t50 = 1415682;

	t50 = (x245^((x246-x247)^x248));

	if (t50 != -2903859) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -1;
	int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	volatile int64_t t51 = 18932749657LL;

	t51 = (x249^((x250-x251)^x252));

	if (t51 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = -1;
	int16_t x254 = 626;
	static volatile int32_t t52 = 25;

	t52 = (x253^((x254-x255)^x256));

	if (t52 != -60) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = UINT32_MAX;
	uint64_t x258 = 11058LLU;
	int8_t x259 = INT8_MAX;
	int8_t x260 = -1;
	uint64_t t53 = 100668466761040237LLU;

	t53 = (x257^((x258-x259)^x260));

	if (t53 != 18446744069414595251LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x261 = INT16_MIN;
	volatile int16_t x262 = -1859;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = -1;
	static int32_t t54 = 334088692;

	t54 = (x261^((x262-x263)^x264));

	if (t54 != -30655) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = 1;
	static int64_t x266 = -23709LL;
	static volatile int16_t x268 = INT16_MIN;
	int64_t t55 = -1501430401LL;

	t55 = (x265^((x266-x267)^x268));

	if (t55 != -23710LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = -1;
	int64_t x275 = 16LL;
	volatile int64_t t56 = 2652614395529LL;

	t56 = (x273^((x274-x275)^x276));

	if (t56 != 2147483630LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = -4460;
	static int64_t x278 = 1490260201858176LL;
	volatile int16_t x279 = -315;
	uint16_t x280 = 8U;

	t57 = (x277^((x278-x279)^x280));

	if (t57 != -1490260201862361LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x282 = -1;
	int32_t x283 = -1;
	int8_t x284 = -1;
	volatile int64_t t58 = -20905756877988LL;

	t58 = (x281^((x282-x283)^x284));

	if (t58 != 45356564025LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = INT8_MIN;
	static volatile uint8_t x286 = 72U;
	uint16_t x287 = 60U;
	int32_t x288 = -430239;
	volatile int32_t t59 = -8331;

	t59 = (x285^((x286-x287)^x288));

	if (t59 != 430317) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 2161912820480709LLU;
	static uint64_t t60 = 499537028554029376LLU;

	t60 = (x289^((x290-x291)^x292));

	if (t60 != 18444582159201289530LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x293 = -17202684539834LL;
	uint64_t x294 = 11098330206LLU;
	volatile int16_t x296 = -1;
	uint64_t t61 = 1LLU;

	t61 = (x293^((x294-x295)^x296));

	if (t61 != 9223389250452826086LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x298 = -3;
	static volatile uint64_t x299 = UINT64_MAX;
	static volatile int8_t x300 = -1;
	uint64_t t62 = 593208LLU;

	t62 = (x297^((x298-x299)^x300));

	if (t62 != 18446744073709550741LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	int8_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	int64_t t63 = -630373393709511LL;

	t63 = (x305^((x306-x307)^x308));

	if (t63 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x309 = INT64_MAX;
	volatile int16_t x310 = INT16_MAX;
	uint32_t x311 = UINT32_MAX;
	volatile int16_t x312 = 1;

	t64 = (x309^((x310-x311)^x312));

	if (t64 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x313 = 0U;
	uint8_t x314 = UINT8_MAX;
	static int32_t x315 = INT32_MAX;
	static int32_t t65 = -142855;

	t65 = (x313^((x314-x315)^x316));

	if (t65 != -2147391361) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x318 = UINT16_MAX;
	int16_t x319 = -1;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t66 = 3931585;

	t66 = (x317^((x318-x319)^x320));

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = -1LL;
	volatile int16_t x323 = -10;
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t67 = 1348604102606216LLU;

	t67 = (x321^((x322-x323)^x324));

	if (t67 != 9LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = -1LL;
	static volatile uint8_t x327 = UINT8_MAX;
	uint32_t x328 = UINT32_MAX;
	int64_t t68 = 8765832795410674LL;

	t68 = (x325^((x326-x327)^x328));

	if (t68 != 4294967167LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = -28;
	uint8_t x330 = 3U;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = INT16_MIN;
	static int32_t t69 = 377932566;

	t69 = (x329^((x330-x331)^x332));

	if (t69 != -32800) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x333 = INT64_MAX;
	uint32_t x335 = 267676310U;
	volatile int32_t x336 = INT32_MIN;
	volatile int64_t t70 = 16119382310039020LL;

	t70 = (x333^((x334-x335)^x336));

	if (t70 != 9223372034975001237LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint16_t x338 = UINT16_MAX;
	static uint32_t x340 = 0U;
	int64_t t71 = 11643593LL;

	t71 = (x337^((x338-x339)^x340));

	if (t71 != 6803483022440753LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x342 = INT32_MIN;
	volatile int16_t x343 = -28;
	volatile int16_t x344 = -33;
	volatile int32_t t72 = 0;

	t72 = (x341^((x342-x343)^x344));

	if (t72 != 2147483602) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1498;
	int8_t x346 = INT8_MIN;
	int32_t x347 = -1053;
	static volatile uint32_t x348 = 3U;
	uint32_t t73 = 1993U;

	t73 = (x345^((x346-x347)^x348));

	if (t73 != 4294965688U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = 0U;
	uint64_t x351 = 9978088078277411LLU;
	uint64_t t74 = 115LLU;

	t74 = (x349^((x350-x351)^x352));

	if (t74 != 18436765985631290728LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x355 = 1458293322222119LLU;
	uint32_t x356 = UINT32_MAX;
	uint64_t t75 = 376921437944509LLU;

	t75 = (x353^((x354-x355)^x356));

	if (t75 != 9221913742440363481LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x357 = 8783012U;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = 8;
	static volatile uint32_t t76 = 226413239U;

	t76 = (x357^((x358-x359)^x360));

	if (t76 != 4286088365U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t77 = -27470883;

	t77 = (x361^((x362-x363)^x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x365 = 7290U;
	int64_t x368 = -1LL;
	int64_t t78 = 2504508125LL;

	t78 = (x365^((x366-x367)^x368));

	if (t78 != -4720LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = 1;
	volatile int64_t x371 = -1LL;
	int32_t x372 = 60;
	static volatile int64_t t79 = -7219437171LL;

	t79 = (x369^((x370-x371)^x372));

	if (t79 != 61LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = 2080LLU;
	int64_t x375 = 121104970LL;
	int64_t x376 = -72314682625766123LL;
	static volatile uint64_t t80 = 235166LLU;

	t80 = (x373^((x374-x375)^x376));

	if (t80 != 18374429389887885507LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = -1LL;
	int64_t t81 = -9285864LL;

	t81 = (x381^((x382-x383)^x384));

	if (t81 != 4294868993LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = 502;
	volatile int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MAX;
	volatile int8_t x388 = 3;
	volatile int64_t t82 = -754817874853LL;

	t82 = (x385^((x386-x387)^x388));

	if (t82 != 9223372036854743541LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t t83 = 2589;

	t83 = (x389^((x390-x391)^x392));

	if (t83 != -2158) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = 62;
	int8_t x396 = INT8_MIN;

	t84 = (x393^((x394-x395)^x396));

	if (t84 != 32702LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x397 = INT64_MIN;
	uint16_t x398 = UINT16_MAX;
	volatile int16_t x399 = -1;
	uint32_t x400 = 267U;
	volatile int64_t t85 = 283107769055LL;

	t85 = (x397^((x398-x399)^x400));

	if (t85 != -9223372036854710005LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 0U;
	int32_t x402 = 5572;
	volatile int8_t x403 = INT8_MAX;
	static int64_t x404 = 17369LL;
	volatile int64_t t86 = 20187663913150526LL;

	t86 = (x401^((x402-x403)^x404));

	if (t86 != 22172LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = -1LL;
	int32_t x406 = 1040004048;
	uint16_t x407 = 15780U;
	uint32_t x408 = 9018U;
	static volatile int64_t t87 = -590LL;

	t87 = (x405^((x406-x407)^x408));

	if (t87 != -1039979799LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	static uint16_t x410 = 1U;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 10815268727508861LLU;

	t88 = (x409^((x410-x411)^x412));

	if (t88 != 18435928804982042748LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x414 = UINT8_MAX;
	int32_t x415 = -78358;
	static int32_t t89 = -3852;

	t89 = (x413^((x414-x415)^x416));

	if (t89 != -85142) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x421 = INT8_MIN;
	int64_t x422 = -115LL;
	static int8_t x423 = 54;
	uint16_t x424 = UINT16_MAX;
	volatile int64_t t90 = 44297536657136932LL;

	t90 = (x421^((x422-x423)^x424));

	if (t90 != 65320LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x425 = -1LL;
	int8_t x426 = 19;
	volatile int32_t x427 = -1;
	volatile int64_t t91 = 33460LL;

	t91 = (x425^((x426-x427)^x428));

	if (t91 != 20LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x433 = -1;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	static volatile int16_t x436 = INT16_MAX;

	t92 = (x433^((x434-x435)^x436));

	if (t92 != -2147451008) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x437 = -1LL;
	static volatile int8_t x438 = INT8_MIN;
	static int16_t x439 = INT16_MAX;
	static volatile int64_t t93 = 0LL;

	t93 = (x437^((x438-x439)^x440));

	if (t93 != 2147450753LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = INT8_MIN;
	volatile int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	static volatile int32_t t94 = -959525901;

	t94 = (x441^((x442-x443)^x444));

	if (t94 != -2147483519) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x446 = UINT64_MAX;
	uint64_t x447 = UINT64_MAX;
	uint64_t t95 = 8349264LLU;

	t95 = (x445^((x446-x447)^x448));

	if (t95 != 2218273414108539724LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x450 = -1;
	int32_t x451 = INT32_MIN;
	int8_t x452 = -1;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x449^((x450-x451)^x452));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = -14;
	int16_t x454 = 1;
	uint64_t x455 = 2186LLU;
	volatile uint16_t x456 = UINT16_MAX;

	t97 = (x453^((x454-x455)^x456));

	if (t97 != 63354LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x458 = 141LLU;
	uint8_t x459 = 18U;
	volatile int8_t x460 = INT8_MIN;
	uint64_t t98 = 2476104614433LLU;

	t98 = (x457^((x458-x459)^x460));

	if (t98 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x461 = INT64_MAX;
	volatile int64_t x464 = -1LL;
	static volatile uint64_t t99 = 810LLU;

	t99 = (x461^((x462-x463)^x464));

	if (t99 != 9223372036854775681LLU) { NG(); } else { ; }
	
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

