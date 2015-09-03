#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = INT32_MIN;
uint16_t x10 = 4063U;
uint64_t x16 = UINT64_MAX;
volatile int32_t x24 = INT32_MIN;
static uint32_t x26 = 0U;
uint64_t x35 = UINT64_MAX;
uint64_t t8 = 86003726466655898LLU;
uint32_t x41 = 229946403U;
volatile int16_t x43 = INT16_MIN;
volatile int16_t x45 = -10236;
int64_t x62 = INT64_MIN;
int16_t x63 = -1;
static int16_t x64 = -1;
static int8_t x65 = INT8_MIN;
uint64_t x70 = 21275378LLU;
volatile int8_t x71 = -20;
static uint64_t t16 = 808519899566261LLU;
volatile int32_t x73 = INT32_MIN;
int16_t x84 = INT16_MIN;
volatile int32_t t18 = -7387;
volatile uint64_t x86 = 1323687119328022LLU;
uint32_t x91 = 217090756U;
int16_t x93 = INT16_MIN;
int8_t x95 = INT8_MAX;
volatile int32_t t21 = -629;
static int32_t x108 = INT32_MIN;
volatile uint16_t x119 = 644U;
volatile int32_t x120 = INT32_MIN;
uint16_t x126 = 49U;
volatile uint8_t x133 = 46U;
uint64_t x137 = UINT64_MAX;
uint32_t x144 = 125U;
int64_t x153 = 338612355973687LL;
int32_t x158 = INT32_MAX;
int8_t x168 = -1;
volatile int8_t x172 = -1;
uint64_t x174 = 457499153900728LLU;
volatile uint64_t t40 = 76714631387179199LLU;
uint8_t x189 = 1U;
volatile int64_t x190 = INT64_MIN;
int64_t t42 = 21956627776LL;
static volatile int8_t x195 = -12;
static uint8_t x201 = 0U;
uint32_t x202 = 6381115U;
int32_t x210 = INT32_MIN;
volatile int16_t x212 = INT16_MAX;
static uint32_t x218 = 296158U;
volatile int64_t x219 = 33572705804336200LL;
int64_t x222 = INT64_MIN;
int16_t x225 = INT16_MIN;
static int32_t x228 = INT32_MAX;
uint64_t x233 = UINT64_MAX;
static int8_t x234 = -3;
int8_t x243 = INT8_MIN;
int16_t x251 = INT16_MIN;
uint32_t x252 = UINT32_MAX;
static int8_t x262 = -3;
int8_t x263 = -29;
int32_t x264 = INT32_MIN;
uint64_t t59 = 8056444238627LLU;
int16_t x273 = 211;
int16_t x281 = INT16_MIN;
uint64_t x282 = UINT64_MAX;
volatile int16_t x285 = INT16_MIN;
volatile uint32_t t67 = 1897082972U;
static int64_t x303 = INT64_MAX;
uint8_t x304 = 56U;
int16_t x310 = -10020;
int32_t t72 = 1636;
static volatile int16_t x326 = INT16_MIN;
volatile int16_t x334 = -2860;
volatile int16_t x336 = INT16_MIN;
int32_t x337 = 0;
int64_t x343 = INT64_MIN;
static volatile int16_t x350 = 3448;
volatile int64_t t80 = -775643180181LL;
volatile uint8_t x360 = 0U;
static uint16_t x361 = 368U;
static int8_t x362 = INT8_MAX;
int16_t x369 = INT16_MIN;
int64_t x370 = 30440134894508785LL;
int8_t x372 = INT8_MIN;
int64_t t83 = 13282281406LL;
static volatile int64_t x374 = INT64_MAX;
int8_t x375 = INT8_MAX;
uint32_t x378 = UINT32_MAX;
int32_t x380 = INT32_MIN;
int32_t x386 = -1;
int32_t x389 = INT32_MIN;
int16_t x390 = INT16_MIN;
volatile uint64_t x396 = 24761969857145LLU;
volatile uint64_t t89 = 3143562657LLU;
uint16_t x414 = UINT16_MAX;
int64_t x416 = 993609885508LL;
int64_t x420 = INT64_MIN;
uint8_t x424 = UINT8_MAX;
int32_t x433 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	static volatile uint64_t x4 = 121070LLU;
	uint64_t t0 = 1915810519045LLU;

	t0 = ((x1^x2)+(x3|x4));

	if (t0 != 4294957166LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x6 = -1;
	uint64_t x8 = 241653597189487LLU;
	uint64_t t1 = 1337692036093565511LLU;

	t1 = ((x5^x6)+(x7|x8));

	if (t1 != 18446744073119315311LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 4955U;
	volatile int64_t x11 = -13LL;
	int16_t x12 = -1;
	int64_t t2 = 2216888765833234LL;

	t2 = ((x9^x10)+(x11|x12));

	if (t2 != 7299LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -17LL;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	uint64_t t3 = 186LLU;

	t3 = ((x13^x14)+(x15|x16));

	if (t3 != 110LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -60965;
	uint64_t x18 = 5150386061525LLU;
	static int32_t x19 = INT32_MIN;
	static int64_t x20 = INT64_MAX;
	static uint64_t t4 = 2268432732419326LLU;

	t4 = ((x17^x18)+(x19|x20));

	if (t4 != 18446738923323494669LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 191;
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = 277278;
	volatile uint32_t t5 = 2216U;

	t5 = ((x21^x22)+(x23|x24));

	if (t5 != 2147760734U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = 22842753147000778LLU;
	volatile uint8_t x27 = 1U;
	volatile uint64_t x28 = 538216LLU;
	uint64_t t6 = 355879LLU;

	t6 = ((x25^x26)+(x27|x28));

	if (t6 != 22842753147538995LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 1992;
	uint16_t x30 = 218U;
	uint32_t x31 = 402841U;
	volatile uint32_t x32 = UINT32_MAX;
	uint32_t t7 = 33U;

	t7 = ((x29^x30)+(x31|x32));

	if (t7 != 1809U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = 22408026677618LLU;
	volatile int32_t x36 = -1;

	t8 = ((x33^x34)+(x35|x36));

	if (t8 != 18446721665682874097LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	volatile int8_t x38 = INT8_MIN;
	uint16_t x39 = 0U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = -43LL;

	t9 = ((x37^x38)+(x39|x40));

	if (t9 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 7847LLU;
	int8_t x44 = INT8_MIN;
	uint64_t t10 = 0LLU;

	t10 = ((x41^x42)+(x43|x44));

	if (t10 != 229943812LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 8110188583835LLU;
	uint64_t x47 = 1470336LLU;
	int64_t x48 = 495LL;
	uint64_t t11 = 5468LLU;

	t11 = ((x45^x46)+(x47|x48));

	if (t11 != 18446735963522429838LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x50 = -53;
	int8_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	static int32_t t12 = 797;

	t12 = ((x49^x50)+(x51|x52));

	if (t12 != 74) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -2;
	int32_t x58 = INT32_MIN;
	static int32_t x59 = 61;
	int8_t x60 = -1;
	volatile int32_t t13 = -13;

	t13 = ((x57^x58)+(x59|x60));

	if (t13 != 2147483645) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = UINT32_MAX;
	volatile int64_t t14 = -2803944728LL;

	t14 = ((x61^x62)+(x63|x64));

	if (t14 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = -1;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = 55U;
	int32_t t15 = 53148021;

	t15 = ((x65^x66)+(x67|x68));

	if (t15 != -2147483466) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	volatile int64_t x72 = INT64_MIN;

	t16 = ((x69^x70)+(x71|x72));

	if (t16 != 9223372036833500409LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MAX;
	int32_t x76 = 117999;
	int64_t t17 = -8315810669292LL;

	t17 = ((x73^x74)+(x75|x76));

	if (t17 != -9223372034707174146LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;

	t18 = ((x81^x82)+(x83|x84));

	if (t18 != 32639) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MAX;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = -1;
	static volatile uint64_t t19 = 135522646997LLU;

	t19 = ((x85^x86)+(x87|x88));

	if (t19 != 1323685624769768LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -5;
	int16_t x90 = INT16_MAX;
	int32_t x92 = 1883;
	static uint32_t t20 = 803797732U;

	t20 = ((x89^x90)+(x91|x92));

	if (t20 != 217059299U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = 2U;
	int8_t x96 = INT8_MAX;

	t21 = ((x93^x94)+(x95|x96));

	if (t21 != -32639) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	uint16_t x98 = 1U;
	int32_t x99 = 136127;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t22 = -507001278;

	t22 = ((x97^x98)+(x99|x100));

	if (t22 != 32701) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = -1;
	int32_t x102 = -1;
	uint16_t x103 = 8U;
	volatile int32_t x104 = INT32_MAX;
	int32_t t23 = INT32_MAX;

	t23 = ((x101^x102)+(x103|x104));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x106 = INT16_MIN;
	volatile int8_t x107 = INT8_MAX;
	static volatile uint64_t t24 = 103443696848LLU;

	t24 = ((x105^x106)+(x107|x108));

	if (t24 != 18446744071562100862LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 4650025783030982832LLU;
	uint32_t x110 = 79851U;
	volatile int8_t x111 = -20;
	volatile int8_t x112 = -59;
	static volatile uint64_t t25 = 94327349LLU;

	t25 = ((x109^x110)+(x111|x112));

	if (t25 != 4650025783031045960LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = 721;
	int8_t x115 = INT8_MAX;
	int16_t x116 = 1148;
	static int32_t t26 = 118;

	t26 = ((x113^x114)+(x115|x116));

	if (t26 != 33197) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 212692U;
	int16_t x118 = INT16_MIN;
	volatile uint32_t t27 = 50870201U;

	t27 = ((x117^x118)+(x119|x120));

	if (t27 != 2147271000U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	int16_t x122 = 1729;
	int64_t x123 = INT64_MIN;
	static volatile int16_t x124 = INT16_MIN;
	static int64_t t28 = 127444179386LL;

	t28 = ((x121^x122)+(x123|x124));

	if (t28 != -31042LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	static int64_t x127 = INT64_MIN;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t29 = 103877LL;

	t29 = ((x125^x126)+(x127|x128));

	if (t29 != -9223372036854775603LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = INT32_MAX;
	uint32_t x135 = 25U;
	int64_t x136 = INT64_MIN;
	volatile int64_t t30 = -30038151LL;

	t30 = ((x133^x134)+(x135|x136));

	if (t30 != -9223372034707292182LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x138 = UINT16_MAX;
	static int32_t x139 = -1;
	int64_t x140 = -1713050LL;
	static volatile uint64_t t31 = 235LLU;

	t31 = ((x137^x138)+(x139|x140));

	if (t31 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = -1;
	static int8_t x142 = 14;
	uint64_t x143 = 3319898LLU;
	static volatile uint64_t t32 = 133876183LLU;

	t32 = ((x141^x142)+(x143|x144));

	if (t32 != 3319920LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = -16;
	int16_t x151 = 519;
	int32_t x152 = -3;
	volatile int64_t t33 = -115680LL;

	t33 = ((x149^x150)+(x151|x152));

	if (t33 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	int64_t t34 = -245570290LL;

	t34 = ((x153^x154)+(x155|x156));

	if (t34 != -338612355973816LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 984245298U;
	int8_t x159 = -31;
	uint32_t x160 = 5U;
	uint32_t t35 = 13990763U;

	t35 = ((x157^x158)+(x159|x160));

	if (t35 != 1163238322U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -25872LL;
	uint16_t x162 = 1877U;
	static uint8_t x163 = 5U;
	static int32_t x164 = -1744974;
	static int64_t t36 = -1788691388229725LL;

	t36 = ((x161^x162)+(x163|x164));

	if (t36 != -1770148LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = 3U;
	int16_t x167 = INT16_MIN;
	static int32_t t37 = -1;

	t37 = ((x165^x166)+(x167|x168));

	if (t37 != -2147483646) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x169 = 539277571219634LLU;
	int32_t x170 = INT32_MIN;
	uint16_t x171 = UINT16_MAX;
	uint64_t t38 = 171540541608737LLU;

	t38 = ((x169^x170)+(x171|x172));

	if (t38 != 18446204796945916081LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = -1LL;
	uint64_t x175 = 516740LLU;
	static volatile int32_t x176 = -1;
	volatile uint64_t t39 = 147869LLU;

	t39 = ((x173^x174)+(x175|x176));

	if (t39 != 18446286574555650886LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -1LL;
	static int32_t x178 = -1;
	uint64_t x179 = 37158451293214LLU;
	uint16_t x180 = 474U;

	t40 = ((x177^x178)+(x179|x180));

	if (t40 != 37158451293662LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	int32_t x187 = INT32_MAX;
	static int8_t x188 = -1;
	volatile int64_t t41 = 1747171855549201LL;

	t41 = ((x185^x186)+(x187|x188));

	if (t41 != 2147483646LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x191 = INT16_MAX;
	int32_t x192 = 319;

	t42 = ((x189^x190)+(x191|x192));

	if (t42 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = INT8_MAX;
	int64_t x194 = 1695888792LL;
	volatile int8_t x196 = -35;
	volatile int64_t t43 = -1LL;

	t43 = ((x193^x194)+(x195|x196));

	if (t43 != 1695888868LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x197 = 40U;
	static int8_t x198 = 1;
	int32_t x199 = INT32_MAX;
	int32_t x200 = INT32_MAX;
	volatile uint32_t t44 = 179346U;

	t44 = ((x197^x198)+(x199|x200));

	if (t44 != 2147483688U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x203 = INT32_MAX;
	uint64_t x204 = 368021379079LLU;
	uint64_t t45 = 92713506224130360LLU;

	t45 = ((x201^x202)+(x203|x204));

	if (t45 != 369373568570LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	uint16_t x207 = 1168U;
	static uint64_t x208 = 10742985723158LLU;
	uint64_t t46 = 305213187LLU;

	t46 = ((x205^x206)+(x207|x208));

	if (t46 != 10742985690645LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MIN;
	int32_t x211 = -1;
	volatile int32_t t47 = -888;

	t47 = ((x209^x210)+(x211|x212));

	if (t47 != 2147450879) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = INT32_MAX;
	static int32_t x220 = INT32_MAX;
	static volatile int64_t t48 = -24255LL;

	t48 = ((x217^x218)+(x219|x220));

	if (t48 != 33572709233031968LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x221 = 583579971504026LLU;
	volatile uint16_t x223 = UINT16_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t49 = 709260486143680689LLU;

	t49 = ((x221^x222)+(x223|x224));

	if (t49 != 9223955616826279833LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x226 = UINT64_MAX;
	static uint16_t x227 = 1U;
	volatile uint64_t t50 = 592890439627914LLU;

	t50 = ((x225^x226)+(x227|x228));

	if (t50 != 2147516414LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 17U;
	static int16_t x230 = INT16_MIN;
	static volatile uint8_t x231 = 1U;
	static uint64_t x232 = 8357776220LLU;
	static uint64_t t51 = 391272LLU;

	t51 = ((x229^x230)+(x231|x232));

	if (t51 != 8357743470LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x235 = INT16_MIN;
	volatile uint8_t x236 = 85U;
	uint64_t t52 = 121828809LLU;

	t52 = ((x233^x234)+(x235|x236));

	if (t52 != 18446744073709518935LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = 904LLU;
	static int64_t x238 = INT64_MAX;
	static int32_t x239 = 193095689;
	int8_t x240 = -3;
	volatile uint64_t t53 = 259698LLU;

	t53 = ((x237^x238)+(x239|x240));

	if (t53 != 9223372036854774900LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MAX;
	int64_t x242 = 7099LL;
	int8_t x244 = 3;
	int64_t t54 = -280LL;

	t54 = ((x241^x242)+(x243|x244));

	if (t54 != 6983LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x245 = UINT64_MAX;
	volatile uint8_t x246 = 62U;
	int16_t x247 = -7;
	uint8_t x248 = 115U;
	volatile uint64_t t55 = 728282536205LLU;

	t55 = ((x245^x246)+(x247|x248));

	if (t55 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -1;
	uint16_t x250 = 964U;
	volatile uint32_t t56 = 272U;

	t56 = ((x249^x250)+(x251|x252));

	if (t56 != 4294966330U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x253 = INT16_MIN;
	uint32_t x254 = 23732108U;
	int16_t x255 = 1;
	volatile int16_t x256 = -46;
	volatile uint32_t t57 = 2U;

	t57 = ((x253^x254)+(x255|x256));

	if (t57 != 4271218527U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x257 = 658U;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = -67;
	uint8_t x260 = 85U;
	static int32_t t58 = -37439894;

	t58 = ((x257^x258)+(x259|x260));

	if (t58 != 618) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x261 = 6669686438LLU;

	t59 = ((x261^x262)+(x263|x264));

	if (t59 != 18446744067039865150LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 172U;
	int8_t x266 = INT8_MAX;
	uint64_t x267 = 434031092867795095LLU;
	uint16_t x268 = 15236U;
	volatile uint64_t t60 = 0LLU;

	t60 = ((x265^x266)+(x267|x268));

	if (t60 != 434031092867808362LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x269 = 393;
	volatile int16_t x270 = 271;
	int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;
	int64_t t61 = -18LL;

	t61 = ((x269^x270)+(x271|x272));

	if (t61 != 133LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x274 = -1;
	int32_t x275 = -46761926;
	int64_t x276 = INT64_MIN;
	int64_t t62 = -657LL;

	t62 = ((x273^x274)+(x275|x276));

	if (t62 != -46762138LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 973U;
	volatile uint64_t t63 = 2060868882LLU;

	t63 = ((x281^x282)+(x283|x284));

	if (t63 != 33790LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = INT32_MAX;
	volatile uint8_t x287 = 65U;
	static uint8_t x288 = 2U;
	int32_t t64 = -6958;

	t64 = ((x285^x286)+(x287|x288));

	if (t64 != -2147450814) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x289 = 1999109LLU;
	int32_t x290 = -13824;
	int8_t x291 = INT8_MIN;
	int64_t x292 = -1LL;
	volatile uint64_t t65 = 73027LLU;

	t65 = ((x289^x290)+(x291|x292));

	if (t65 != 18446744073707539204LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x293 = 33057921151LLU;
	int16_t x294 = 219;
	uint8_t x295 = 7U;
	uint8_t x296 = 4U;
	volatile uint64_t t66 = 13391LLU;

	t66 = ((x293^x294)+(x295|x296));

	if (t66 != 33057921195LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -1;
	uint8_t x298 = 0U;
	volatile int32_t x299 = INT32_MIN;
	uint32_t x300 = UINT32_MAX;

	t67 = ((x297^x298)+(x299|x300));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MIN;
	volatile uint32_t x302 = UINT32_MAX;
	int64_t t68 = 190472939049545LL;

	t68 = ((x301^x302)+(x303|x304));

	if (t68 != 4294967294LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x305 = INT64_MAX;
	volatile int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	static int32_t x308 = -3296;
	static int64_t t69 = -11031289124408988LL;

	t69 = ((x305^x306)+(x307|x308));

	if (t69 != -3074LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = -1;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t70 = -112579689;

	t70 = ((x309^x310)+(x311|x312));

	if (t70 != 9891) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 146U;
	static int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	int64_t x316 = 8125178560699661LL;
	volatile int64_t t71 = 150772LL;

	t71 = ((x313^x314)+(x315|x316));

	if (t71 != -9215246856378908527LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = -1;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = -1;

	t72 = ((x321^x322)+(x323|x324));

	if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x327 = INT64_MAX;
	volatile int32_t x328 = 64561;
	volatile int64_t t73 = INT64_MAX;

	t73 = ((x325^x326)+(x327|x328));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 14898U;
	int8_t x331 = INT8_MAX;
	static volatile int16_t x332 = -1;
	uint32_t t74 = 122402U;

	t74 = ((x329^x330)+(x331|x332));

	if (t74 != 4294952396U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = 127;
	int8_t x335 = INT8_MIN;
	static volatile int32_t t75 = 8;

	t75 = ((x333^x334)+(x335|x336));

	if (t75 != -3029) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x338 = 17185U;
	int16_t x339 = INT16_MAX;
	static int64_t x340 = INT64_MIN;
	int64_t t76 = 347707LL;

	t76 = ((x337^x338)+(x339|x340));

	if (t76 != -9223372036854725856LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x341 = 519;
	uint32_t x342 = UINT32_MAX;
	volatile uint16_t x344 = 1005U;
	volatile int64_t t77 = 497LL;

	t77 = ((x341^x342)+(x343|x344));

	if (t77 != -9223372032559808027LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x345 = UINT8_MAX;
	static int64_t x346 = 540128275087833LL;
	int32_t x347 = -1;
	int32_t x348 = INT32_MAX;
	int64_t t78 = -9319LL;

	t78 = ((x345^x346)+(x347|x348));

	if (t78 != 540128275087653LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = -623;
	uint8_t x351 = 3U;
	static int8_t x352 = 6;
	int32_t t79 = -39105;

	t79 = ((x349^x350)+(x351|x352));

	if (t79 != -3856) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = INT64_MIN;
	int8_t x355 = -1;
	int16_t x356 = INT16_MAX;

	t80 = ((x353^x354)+(x355|x356));

	if (t80 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x357 = -1LL;
	static uint32_t x358 = UINT32_MAX;
	static int64_t x359 = INT64_MAX;
	int64_t t81 = -793106401955LL;

	t81 = ((x357^x358)+(x359|x360));

	if (t81 != 9223372032559808511LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t82 = 1;

	t82 = ((x361^x362)+(x363|x364));

	if (t82 != -32370) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x371 = -3760;

	t83 = ((x369^x370)+(x371|x372));

	if (t83 != -30440134894495039LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x373 = -1;
	int32_t x376 = INT32_MAX;
	int64_t t84 = 119351LL;

	t84 = ((x373^x374)+(x375|x376));

	if (t84 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x377 = -1LL;
	static uint64_t x379 = 902LLU;
	static uint64_t t85 = 1675566193LLU;

	t85 = ((x377^x378)+(x379|x380));

	if (t85 != 18446744067267101574LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x381 = INT32_MIN;
	static volatile int16_t x382 = 1;
	uint8_t x383 = UINT8_MAX;
	static int64_t x384 = INT64_MAX;
	int64_t t86 = 19631279451LL;

	t86 = ((x381^x382)+(x383|x384));

	if (t86 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = -1630;
	static uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 96U;
	static int32_t t87 = 308829;

	t87 = ((x385^x386)+(x387|x388));

	if (t87 != 67164) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x391 = 5101836U;
	uint64_t x392 = 1420041480675925322LLU;
	volatile uint64_t t88 = 563037LLU;

	t88 = ((x389^x390)+(x391|x392));

	if (t88 != 1420041482828471630LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MAX;
	static int8_t x394 = INT8_MIN;
	uint64_t x395 = 930224LLU;

	t89 = ((x393^x394)+(x395|x396));

	if (t89 != 24761970127864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x397 = INT32_MIN;
	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = UINT32_MAX;
	uint32_t x400 = 1991899U;
	static uint32_t t90 = 16158U;

	t90 = ((x397^x398)+(x399|x400));

	if (t90 != 2147483646U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	static int32_t x404 = INT32_MIN;
	volatile int32_t t91 = 2156;

	t91 = ((x401^x402)+(x403|x404));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = -1;
	static volatile int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -1;
	uint64_t x408 = 46598847LLU;
	uint64_t t92 = 3050192727086274LLU;

	t92 = ((x405^x406)+(x407|x408));

	if (t92 != 32766LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x409 = INT8_MIN;
	uint16_t x410 = 51U;
	volatile int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	int32_t t93 = -14;

	t93 = ((x409^x410)+(x411|x412));

	if (t93 != -205) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x413 = -1;
	int8_t x415 = 24;
	static volatile int64_t t94 = -442670169151757131LL;

	t94 = ((x413^x414)+(x415|x416));

	if (t94 != 993609819996LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = 25;
	int16_t x418 = 162;
	static int8_t x419 = -1;
	static int64_t t95 = -3066LL;

	t95 = ((x417^x418)+(x419|x420));

	if (t95 != 186LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x421 = UINT8_MAX;
	volatile int16_t x422 = -415;
	static int64_t x423 = -1LL;
	volatile int64_t t96 = -7312824745828750LL;

	t96 = ((x421^x422)+(x423|x424));

	if (t96 != -355LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MIN;
	static int32_t x426 = INT32_MIN;
	int8_t x427 = 44;
	int8_t x428 = 0;
	int32_t t97 = -145574803;

	t97 = ((x425^x426)+(x427|x428));

	if (t97 != 2147450924) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x429 = 17;
	static volatile int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	static int32_t x432 = 655961084;
	static int32_t t98 = 55170;

	t98 = ((x429^x430)+(x431|x432));

	if (t98 != -1491522675) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x434 = 989U;
	static int64_t x435 = 28LL;
	volatile int32_t x436 = INT32_MAX;
	static int64_t t99 = -4312560561063LL;

	t99 = ((x433^x434)+(x435|x436));

	if (t99 != 6442449953LL) { NG(); } else { ; }
	
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

