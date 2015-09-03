#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint32_t x3 = 9290188U;
volatile int16_t x6 = -1;
volatile int64_t t1 = 9506511LL;
int32_t x19 = INT32_MAX;
static volatile int16_t x23 = -27;
uint64_t t4 = 1561382462176LLU;
int32_t x28 = INT32_MIN;
int32_t x32 = INT32_MIN;
int16_t x46 = INT16_MIN;
static uint8_t x50 = UINT8_MAX;
volatile uint16_t x58 = UINT16_MAX;
uint8_t x59 = 120U;
int64_t x68 = -1LL;
uint32_t t15 = 65128U;
uint32_t x84 = 188824U;
int8_t x86 = -1;
volatile uint32_t x88 = 87470U;
int32_t x94 = INT32_MIN;
int8_t x104 = INT8_MIN;
int32_t x107 = 122535;
volatile uint32_t t22 = 158U;
static int32_t x116 = -1;
static uint64_t x118 = 16355628LLU;
uint64_t t24 = 53338331243LLU;
int8_t x127 = INT8_MIN;
volatile int32_t x139 = INT32_MIN;
int8_t x140 = INT8_MAX;
static int8_t x141 = -1;
int64_t t28 = -233322218LL;
int8_t x151 = INT8_MIN;
static volatile uint64_t t29 = 20LLU;
static volatile int64_t t30 = INT64_MAX;
int64_t x161 = -453239607557LL;
uint32_t x164 = 123906U;
int16_t x174 = INT16_MIN;
int16_t x184 = -1;
int32_t t35 = 5394;
uint64_t x185 = 0LLU;
uint64_t t36 = 127931290656928LLU;
int32_t x191 = INT32_MAX;
volatile uint32_t x195 = 564624829U;
volatile uint32_t t38 = 7649U;
int16_t x199 = INT16_MAX;
uint16_t x200 = 305U;
volatile int8_t x201 = -1;
volatile int64_t t42 = 66904744LL;
volatile uint16_t x215 = UINT16_MAX;
volatile int64_t t43 = 811863LL;
uint64_t x225 = 944751960LLU;
int8_t x236 = -1;
uint64_t t47 = 290693001LLU;
int64_t x240 = 10256682LL;
static volatile int16_t x244 = INT16_MAX;
volatile int64_t x246 = 0LL;
int64_t x251 = 9438305682379LL;
uint8_t x252 = UINT8_MAX;
volatile int64_t t51 = -8723LL;
static int64_t t52 = 155131078334631LL;
int32_t x258 = INT32_MAX;
volatile uint32_t x260 = 1206378879U;
int64_t x261 = -1LL;
uint64_t x263 = 26658599591LLU;
volatile uint8_t x270 = 5U;
static int64_t x274 = -1LL;
uint32_t x279 = 2919U;
int32_t x283 = -8006;
uint32_t x284 = 1U;
uint64_t x303 = 1031934858877938382LLU;
static volatile uint64_t t63 = 1919928891445LLU;
volatile uint8_t x308 = 43U;
int32_t x310 = INT32_MIN;
static uint64_t x321 = 254937786LLU;
int64_t x327 = INT64_MIN;
volatile uint32_t x330 = 38U;
int32_t x332 = 898;
static int8_t x334 = -3;
static int32_t t69 = -4564883;
volatile uint32_t x341 = 242U;
int64_t t71 = -292508LL;
int64_t x345 = INT64_MAX;
static uint64_t x348 = UINT64_MAX;
int16_t x353 = INT16_MAX;
int64_t x367 = -290578982857456597LL;
uint64_t t77 = 34671628118887441LLU;
volatile int16_t x370 = 23;
int32_t x372 = INT32_MIN;
static volatile uint8_t x374 = 20U;
static int64_t t82 = 0LL;
volatile uint16_t x390 = 292U;
static int32_t x391 = INT32_MIN;
int16_t x399 = INT16_MIN;
static int64_t x402 = -1509LL;
uint32_t x407 = 1970375505U;
uint32_t x410 = 700U;
volatile int8_t x420 = INT8_MIN;
int8_t x421 = INT8_MAX;
static int8_t x422 = INT8_MAX;
int32_t x428 = -1;
int64_t x430 = 1029469559LL;
volatile int64_t t93 = 1747LL;
static volatile int8_t x433 = -1;
volatile int64_t t94 = 8416LL;
int32_t x446 = INT32_MAX;
int64_t x454 = -1LL;
static int32_t x456 = INT32_MIN;


void f0(void) {
	int32_t x2 = INT32_MAX;
	uint16_t x4 = 6U;
	uint32_t t0 = 24563541U;

	t0 = (x1-((x2+x3)&x4));

	if (t0 != 253U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint16_t x7 = 22U;
	int32_t x8 = INT32_MAX;

	t1 = (x5-((x6+x7)&x8));

	if (t1 != -22LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int32_t x10 = -216580;
	uint64_t x11 = 0LLU;
	static int16_t x12 = 0;
	volatile uint64_t t2 = 25971838746621110LLU;

	t2 = (x9-((x10+x11)&x12));

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = INT32_MAX;
	int64_t x18 = -209203LL;
	int8_t x20 = INT8_MAX;
	int64_t t3 = -455025988LL;

	t3 = (x17-((x18+x19)&x20));

	if (t3 != 2147483571LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 8584755466LLU;
	int64_t x22 = -1LL;
	int16_t x24 = 6297;

	t4 = (x21-((x22+x23)&x24));

	if (t4 != 8584749194LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 36636U;
	int16_t x26 = -1;
	int8_t x27 = INT8_MAX;
	static volatile uint32_t t5 = 506560593U;

	t5 = (x25-((x26+x27)&x28));

	if (t5 != 36636U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x29-((x30+x31)&x32));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	int8_t x38 = -1;
	int8_t x39 = 0;
	int8_t x40 = INT8_MIN;
	int32_t t7 = 1649;

	t7 = (x37-((x38+x39)&x40));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MAX;
	volatile uint64_t x42 = 66008034175594078LLU;
	static int16_t x43 = INT16_MAX;
	volatile uint16_t x44 = UINT16_MAX;
	uint64_t t8 = 2766992486LLU;

	t8 = (x41-((x42+x43)&x44));

	if (t8 != 9223372036854763938LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MAX;
	uint32_t t9 = 121133U;

	t9 = (x45-((x46+x47)&x48));

	if (t9 != 32640U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = 1771879133935451362LLU;
	uint16_t x51 = 3U;
	int64_t x52 = INT64_MAX;
	uint64_t t10 = 26LLU;

	t10 = (x49-((x50+x51)&x52));

	if (t10 != 1771879133935451104LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile int64_t x54 = 38124607LL;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t11 = -3918129562114679LL;

	t11 = (x53-((x54+x55)&x56));

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	int16_t x60 = INT16_MAX;
	int32_t t12 = 588;

	t12 = (x57-((x58+x59)&x60));

	if (t12 != 136) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -3716459471870066009LL;
	int64_t x62 = -1LL;
	volatile int64_t x63 = -1LL;
	volatile uint32_t x64 = UINT32_MAX;
	static volatile int64_t t13 = -9321320LL;

	t13 = (x61-((x62+x63)&x64));

	if (t13 != -3716459476165033303LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 119486LLU;
	int64_t x66 = INT64_MIN;
	int64_t x67 = 53LL;
	volatile uint64_t t14 = 453672371335260LLU;

	t14 = (x65-((x66+x67)&x68));

	if (t14 != 9223372036854895241LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 20807U;
	static int16_t x74 = 18;
	int32_t x75 = -1;
	static int32_t x76 = INT32_MIN;

	t15 = (x73-((x74+x75)&x76));

	if (t15 != 20807U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = 3U;
	uint8_t x82 = 55U;
	volatile uint16_t x83 = 6U;
	static volatile uint32_t t16 = 435673960U;

	t16 = (x81-((x82+x83)&x84));

	if (t16 != 4294967275U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = UINT32_MAX;
	static volatile uint32_t x87 = UINT32_MAX;
	volatile uint32_t t17 = 40618U;

	t17 = (x85-((x86+x87)&x88));

	if (t17 != 4294879825U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MAX;
	int64_t x90 = -5552LL;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MIN;
	static int64_t t18 = INT64_MAX;

	t18 = (x89-((x90+x91)&x92));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x93 = 154LLU;
	volatile uint8_t x95 = UINT8_MAX;
	int32_t x96 = 66886;
	volatile uint64_t t19 = 50384906LLU;

	t19 = (x93-((x94+x95)&x96));

	if (t19 != 84LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x97 = 0U;
	volatile int32_t x98 = 0;
	int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MAX;
	static volatile int32_t t20 = 195708158;

	t20 = (x97-((x98+x99)&x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	uint64_t x102 = 2LLU;
	int16_t x103 = -1;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (x101-((x102+x103)&x104));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	uint32_t x108 = 702U;

	t22 = (x105-((x106+x107)&x108));

	if (t22 != 4294966745U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 40U;
	volatile int16_t x114 = 1067;
	int8_t x115 = -1;
	int32_t t23 = 8;

	t23 = (x113-((x114+x115)&x116));

	if (t23 != -1026) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MAX;
	volatile int32_t x119 = -1;
	static volatile uint64_t x120 = UINT64_MAX;

	t24 = (x117-((x118+x119)&x120));

	if (t24 != 18446744073693228756LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	static int64_t x126 = -3329LL;
	volatile int16_t x128 = INT16_MAX;
	int64_t t25 = 259921087814LL;

	t25 = (x125-((x126+x127)&x128));

	if (t25 != -2147512959LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -3;
	volatile int16_t x134 = INT16_MIN;
	int32_t x135 = -1432;
	volatile int16_t x136 = 11215;
	volatile int32_t t26 = 3;

	t26 = (x133-((x134+x135)&x136));

	if (t26 != -10827) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = -2;
	int32_t x138 = 4993;
	volatile int32_t t27 = -826956877;

	t27 = (x137-((x138+x139)&x140));

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 66U;
	int8_t x144 = -7;

	t28 = (x141-((x142+x143)&x144));

	if (t28 != 9223372036854775743LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = -3;
	volatile uint64_t x150 = 6833259077LLU;
	static int8_t x152 = INT8_MAX;

	t29 = (x149-((x150+x151)&x152));

	if (t29 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MAX;
	static int8_t x158 = INT8_MIN;
	volatile int64_t x159 = 242LL;
	volatile int8_t x160 = INT8_MIN;

	t30 = (x157-((x158+x159)&x160));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x162 = UINT64_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint64_t t31 = 3459206332LLU;

	t31 = (x161-((x162+x163)&x164));

	if (t31 != 18446743620469820153LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = -1;
	volatile uint64_t x170 = 931761811746757737LLU;
	uint64_t x171 = UINT64_MAX;
	static volatile int64_t x172 = -1LL;
	volatile uint64_t t32 = 4405514622667LLU;

	t32 = (x169-((x170+x171)&x172));

	if (t32 != 17514982261962793879LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -1LL;
	volatile int16_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;
	volatile int64_t t33 = 431689LL;

	t33 = (x173-((x174+x175)&x176));

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x177 = INT8_MIN;
	static int64_t x178 = -3741115693254814LL;
	int64_t x179 = -43519800LL;
	uint16_t x180 = 106U;
	int64_t t34 = -751726625128LL;

	t34 = (x177-((x178+x179)&x180));

	if (t34 != -170LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x181 = INT8_MIN;
	uint16_t x182 = 32U;
	volatile int8_t x183 = -7;

	t35 = (x181-((x182+x183)&x184));

	if (t35 != -153) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x186 = -1;
	int64_t x187 = 73326903345441LL;
	static uint8_t x188 = 0U;

	t36 = (x185-((x186+x187)&x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = 376459521362563726LL;
	uint64_t x190 = 1727259400LLU;
	static volatile uint8_t x192 = UINT8_MAX;
	static volatile uint64_t t37 = 7166049062LLU;

	t37 = (x189-((x190+x191)&x192));

	if (t37 != 376459521362563719LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	static uint32_t x196 = 56685992U;

	t38 = (x193-((x194+x195)&x196));

	if (t38 != 4276062807U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x197 = -1LL;
	volatile int64_t x198 = INT64_MIN;
	volatile int64_t t39 = 63929289LL;

	t39 = (x197-((x198+x199)&x200));

	if (t39 != -306LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x202 = 659LL;
	uint16_t x203 = 15U;
	int16_t x204 = INT16_MIN;
	volatile int64_t t40 = -102709895464143716LL;

	t40 = (x201-((x202+x203)&x204));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 81556553469LLU;
	static int32_t x206 = INT32_MIN;
	int64_t x207 = 2162381718590LL;
	volatile int8_t x208 = INT8_MAX;
	uint64_t t41 = 27290453LLU;

	t41 = (x205-((x206+x207)&x208));

	if (t41 != 81556553407LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = INT64_MAX;
	uint8_t x210 = UINT8_MAX;
	volatile int8_t x211 = INT8_MIN;
	int32_t x212 = -1;

	t42 = (x209-((x210+x211)&x212));

	if (t42 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = -1;
	static volatile int32_t x214 = -24385;
	int64_t x216 = INT64_MAX;

	t43 = (x213-((x214+x215)&x216));

	if (t43 != -41151LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = 35891701782860LL;
	int64_t x218 = INT64_MIN;
	int64_t x219 = INT64_MAX;
	static volatile uint16_t x220 = UINT16_MAX;
	int64_t t44 = 164153LL;

	t44 = (x217-((x218+x219)&x220));

	if (t44 != 35891701717325LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x226 = INT64_MIN;
	static volatile uint8_t x227 = 1U;
	static int8_t x228 = INT8_MIN;
	uint64_t t45 = 24228343LLU;

	t45 = (x225-((x226+x227)&x228));

	if (t45 != 9223372037799527768LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = -484;
	uint64_t x230 = 384LLU;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = 11013U;
	volatile uint64_t t46 = 1723929646263LLU;

	t46 = (x229-((x230+x231)&x232));

	if (t46 != 18446744073709550615LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -16;
	int8_t x234 = -1;
	volatile uint64_t x235 = 5229288675781609703LLU;

	t47 = (x233-((x234+x235)&x236));

	if (t47 != 13217455397927941898LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x237 = 1022U;
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = -1932638;
	int64_t t48 = -811466386088LL;

	t48 = (x237-((x238+x239)&x240));

	if (t48 != -8387620LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x241 = -1LL;
	volatile uint8_t x242 = UINT8_MAX;
	uint16_t x243 = 7U;
	static volatile int64_t t49 = 4235171899LL;

	t49 = (x241-((x242+x243)&x244));

	if (t49 != -263LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x247 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t50 = 3LLU;

	t50 = (x245-((x246+x247)&x248));

	if (t50 != 18446744073709551233LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x249 = 49;
	uint16_t x250 = UINT16_MAX;

	t51 = (x249-((x250+x251)&x252));

	if (t51 != -153LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x253 = 20U;
	int8_t x254 = 4;
	volatile int16_t x255 = -1;
	int64_t x256 = INT64_MIN;

	t52 = (x253-((x254+x255)&x256));

	if (t52 != 20LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x257 = 978U;
	int32_t x259 = INT32_MIN;
	volatile uint32_t t53 = 28U;

	t53 = (x257-((x258+x259)&x260));

	if (t53 != 3088589395U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x262 = -1;
	uint16_t x264 = UINT16_MAX;
	uint64_t t54 = 1541346LLU;

	t54 = (x261-((x262+x263)&x264));

	if (t54 != 18446744073709489497LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = 1U;
	volatile int32_t x266 = INT32_MAX;
	static uint32_t x267 = 14841724U;
	int16_t x268 = -18;
	uint32_t t55 = 859618420U;

	t55 = (x265-((x266+x267)&x268));

	if (t55 != 2132641943U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = 0;
	int16_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t56 = 82054862;

	t56 = (x269-((x270+x271)&x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -1LL;
	volatile int64_t x275 = 797369650LL;
	int64_t x276 = 18629918429LL;
	volatile int64_t t57 = -14175335LL;

	t57 = (x273-((x274+x275)&x276));

	if (t57 != -100983826LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = 711347896LLU;
	volatile int16_t x278 = -397;
	volatile uint64_t x280 = UINT64_MAX;
	uint64_t t58 = 66678764154044150LLU;

	t58 = (x277-((x278+x279)&x280));

	if (t58 != 711345374LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x281 = 10469052187LLU;
	volatile int32_t x282 = INT32_MAX;
	uint64_t t59 = 4LLU;

	t59 = (x281-((x282+x283)&x284));

	if (t59 != 10469052186LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -9804;
	int16_t x286 = 6786;
	int32_t x287 = INT32_MIN;
	static int64_t x288 = -3508677010840LL;
	int64_t t60 = -1681237895784LL;

	t60 = (x285-((x286+x287)&x288));

	if (t60 != 3508988264372LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -14LL;
	static uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = UINT32_MAX;
	uint32_t x292 = 73U;
	static int64_t t61 = -95463874322LL;

	t61 = (x289-((x290+x291)&x292));

	if (t61 != -86LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = 0;
	volatile int8_t x294 = INT8_MIN;
	volatile int32_t x295 = 972851;
	int16_t x296 = -1601;
	static int32_t t62 = 0;

	t62 = (x293-((x294+x295)&x296));

	if (t62 != -971187) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int32_t x304 = -1;

	t63 = (x301-((x302+x303)&x304));

	if (t63 != 17414809212684129714LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -8;
	int32_t x306 = 140883;
	static int8_t x307 = INT8_MIN;
	int32_t t64 = -3;

	t64 = (x305-((x306+x307)&x308));

	if (t64 != -11) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x309 = UINT32_MAX;
	int8_t x311 = 1;
	uint64_t x312 = 19526137650854606LLU;
	uint64_t t65 = 934215013583574LLU;

	t65 = (x309-((x310+x311)&x312));

	if (t65 != 18427217941201158143LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x322 = 544835281U;
	uint64_t x323 = 739LLU;
	volatile int64_t x324 = 1860LL;
	volatile uint64_t t66 = 731788LLU;

	t66 = (x321-((x322+x323)&x324));

	if (t66 != 254937526LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	static int16_t x328 = INT16_MIN;
	static int64_t t67 = -2994380402688560138LL;

	t67 = (x325-((x326+x327)&x328));

	if (t67 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x329 = -1;
	static uint16_t x331 = UINT16_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x329-((x330+x331)&x332));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x333 = INT16_MAX;
	volatile int8_t x335 = -16;
	int16_t x336 = 4964;

	t69 = (x333-((x334+x335)&x336));

	if (t69 != 27803) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x338 = 1750U;
	int8_t x339 = -50;
	int32_t x340 = 0;
	int32_t t70 = 0;

	t70 = (x337-((x338+x339)&x340));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x342 = UINT16_MAX;
	uint16_t x343 = 105U;
	static int64_t x344 = INT64_MIN;

	t71 = (x341-((x342+x343)&x344));

	if (t71 != 242LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x346 = -1LL;
	uint16_t x347 = UINT16_MAX;
	uint64_t t72 = 145193223630227573LLU;

	t72 = (x345-((x346+x347)&x348));

	if (t72 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = -12;
	volatile int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MAX;
	int16_t x352 = 7654;
	int64_t t73 = 379133647LL;

	t73 = (x349-((x350+x351)&x352));

	if (t73 != -7666LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = -1;
	volatile int16_t x356 = INT16_MAX;
	int32_t t74 = -11;

	t74 = (x353-((x354+x355)&x356));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x357 = -915;
	uint64_t x358 = 4499922566LLU;
	int16_t x359 = 14;
	int32_t x360 = -12935;
	volatile uint64_t t75 = 418258703255678LLU;

	t75 = (x357-((x358+x359)&x360));

	if (t75 != 18446744069209632861LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MAX;
	int16_t x363 = INT16_MIN;
	volatile int32_t x364 = INT32_MIN;
	int64_t t76 = 5LL;

	t76 = (x361-((x362+x363)&x364));

	if (t76 != 2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 925081850910LLU;
	uint8_t x366 = 39U;
	uint16_t x368 = 72U;

	t77 = (x365-((x366+x367)&x368));

	if (t77 != 925081850846LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x369 = 193484411LLU;
	int16_t x371 = INT16_MAX;
	uint64_t t78 = 10996949LLU;

	t78 = (x369-((x370+x371)&x372));

	if (t78 != 193484411LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x375 = 1;
	int8_t x376 = 2;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x373-((x374+x375)&x376));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	int8_t x379 = -1;
	int64_t x380 = 24LL;
	volatile int64_t t80 = -6LL;

	t80 = (x377-((x378+x379)&x380));

	if (t80 != -152LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x381 = 30LLU;
	uint64_t x382 = 48241549172420LLU;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MAX;
	volatile uint64_t t81 = 13419784LLU;

	t81 = (x381-((x382+x383)&x384));

	if (t81 != 18446744073233047899LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = 131940305343482946LL;
	uint32_t x386 = 1620U;
	int16_t x387 = 0;
	static volatile int32_t x388 = INT32_MAX;

	t82 = (x385-((x386+x387)&x388));

	if (t82 != 131940305343481326LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = -28LL;
	int8_t x392 = 2;
	static int64_t t83 = -1956518158305215054LL;

	t83 = (x389-((x390+x391)&x392));

	if (t83 != -28LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int64_t x394 = 357816319LL;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = 1;
	volatile int64_t t84 = -3182341236875820822LL;

	t84 = (x393-((x394+x395)&x396));

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x397 = 1;
	int8_t x398 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t85 = 839697;

	t85 = (x397-((x398+x399)&x400));

	if (t85 != 65537) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x401 = INT16_MIN;
	uint8_t x403 = UINT8_MAX;
	static int8_t x404 = -6;
	volatile int64_t t86 = 703895305033423570LL;

	t86 = (x401-((x402+x403)&x404));

	if (t86 != -31514LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = -1;
	int8_t x406 = 4;
	static volatile uint16_t x408 = 1004U;
	volatile uint32_t t87 = 773U;

	t87 = (x405-((x406+x407)&x408));

	if (t87 != 4294966459U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = -59;
	int32_t x411 = INT32_MAX;
	int32_t x412 = -141876156;
	volatile uint32_t t88 = 664U;

	t88 = (x409-((x410+x411)&x412));

	if (t88 != 2147483589U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = -3;
	static int32_t x414 = INT32_MAX;
	uint8_t x415 = 0U;
	int16_t x416 = 0;
	static int32_t t89 = -24813854;

	t89 = (x413-((x414+x415)&x416));

	if (t89 != -3) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = -17;
	int64_t x418 = -61LL;
	uint16_t x419 = 27U;
	int64_t t90 = -4508445293152591650LL;

	t90 = (x417-((x418+x419)&x420));

	if (t90 != 111LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x423 = INT8_MIN;
	int64_t x424 = -3LL;
	int64_t t91 = -28663LL;

	t91 = (x421-((x422+x423)&x424));

	if (t91 != 130LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = INT16_MIN;
	int16_t x426 = -247;
	int8_t x427 = INT8_MIN;
	volatile int32_t t92 = -16208;

	t92 = (x425-((x426+x427)&x428));

	if (t92 != -32393) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = -1;
	static volatile int16_t x431 = INT16_MIN;
	volatile int32_t x432 = INT32_MIN;

	t93 = (x429-((x430+x431)&x432));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x434 = 1U;
	int16_t x435 = -241;
	int64_t x436 = -1LL;

	t94 = (x433-((x434+x435)&x436));

	if (t94 != 239LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x441 = -1;
	uint8_t x442 = UINT8_MAX;
	volatile int16_t x443 = INT16_MIN;
	uint64_t x444 = UINT64_MAX;
	uint64_t t95 = 95801298LLU;

	t95 = (x441-((x442+x443)&x444));

	if (t95 != 32512LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = -51186054;
	static volatile int32_t x447 = INT32_MIN;
	static int64_t x448 = 356560827505316277LL;
	volatile int64_t t96 = 1979LL;

	t96 = (x445-((x446+x447)&x448));

	if (t96 != -356560827556502331LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = INT8_MIN;
	static volatile int64_t x455 = -1LL;
	int64_t t97 = -344255341772LL;

	t97 = (x453-((x454+x455)&x456));

	if (t97 != 2147483520LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x457 = 7U;
	int32_t x458 = -7;
	int64_t x459 = INT64_MAX;
	uint8_t x460 = 36U;
	static int64_t t98 = 338721941LL;

	t98 = (x457-((x458+x459)&x460));

	if (t98 != -25LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = INT8_MIN;
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = INT16_MAX;
	int64_t x464 = 1185LL;
	volatile int64_t t99 = -299175100578971735LL;

	t99 = (x461-((x462+x463)&x464));

	if (t99 != -1312LL) { NG(); } else { ; }
	
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

