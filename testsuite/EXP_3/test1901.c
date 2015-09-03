#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
static volatile uint8_t x4 = 1U;
volatile uint16_t x17 = 3674U;
uint64_t t2 = 13117439663052LLU;
int8_t x28 = INT8_MAX;
int8_t x29 = INT8_MAX;
static int8_t x31 = INT8_MIN;
int64_t t5 = -106108690619097LL;
int16_t x36 = INT16_MIN;
volatile int16_t x37 = INT16_MIN;
uint32_t x47 = UINT32_MAX;
static volatile uint32_t t8 = 634U;
static int32_t t9 = -517572;
int32_t x57 = 78;
int32_t x59 = INT32_MIN;
volatile uint64_t t12 = 9610721244LLU;
int16_t x68 = INT16_MIN;
int8_t x70 = INT8_MAX;
static volatile uint8_t x76 = 5U;
int32_t x80 = 645;
volatile int32_t t16 = -51484494;
volatile uint8_t x93 = 62U;
int32_t x101 = INT32_MAX;
uint16_t x104 = UINT16_MAX;
volatile uint8_t x108 = UINT8_MAX;
uint32_t x118 = UINT32_MAX;
int8_t x120 = -1;
static int8_t x124 = -7;
static int32_t x129 = 0;
int32_t x131 = 5;
int64_t t26 = -31LL;
static int64_t x133 = -1LL;
int32_t x134 = INT32_MAX;
volatile int64_t t27 = -322917362LL;
volatile uint16_t x142 = 53U;
int16_t x145 = INT16_MIN;
volatile uint16_t x149 = 13904U;
static int16_t x153 = -1;
int64_t x154 = INT64_MIN;
volatile int64_t t31 = -327544LL;
int32_t x164 = INT32_MAX;
static volatile int64_t t33 = 6196294629256447LL;
uint32_t x165 = 1781978U;
volatile int32_t x168 = INT32_MIN;
int16_t x174 = INT16_MIN;
volatile uint8_t x177 = 1U;
int64_t x184 = -68947955314471LL;
int64_t t38 = -17759259112508795LL;
static int8_t x188 = INT8_MIN;
volatile int32_t t40 = -34314102;
static int64_t t41 = 123577532482LL;
uint64_t x204 = UINT64_MAX;
int16_t x205 = INT16_MIN;
static int32_t x208 = 2;
int64_t x210 = INT64_MIN;
int64_t x211 = 462179LL;
volatile int32_t t45 = 0;
uint32_t x218 = 52U;
int64_t t46 = 1LL;
static int32_t x225 = INT32_MIN;
uint8_t x233 = 0U;
static uint8_t x235 = 10U;
int32_t t50 = -1;
static int16_t x243 = -32;
int64_t t53 = -1055325278LL;
uint64_t x258 = UINT64_MAX;
volatile int32_t x259 = INT32_MIN;
uint64_t x262 = UINT64_MAX;
uint64_t x271 = 1581LLU;
int8_t x274 = 40;
int8_t x275 = 6;
int8_t x282 = INT8_MIN;
volatile int64_t t61 = 80224981971092LL;
uint64_t t62 = 274290061279392832LLU;
int8_t x298 = 5;
int8_t x301 = INT8_MIN;
static uint8_t x307 = UINT8_MAX;
volatile uint8_t x312 = UINT8_MAX;
volatile int32_t t68 = -257536569;
int16_t x328 = INT16_MIN;
volatile int32_t t72 = 16486;
int32_t x340 = -1;
static int64_t x350 = INT64_MIN;
static uint32_t x353 = UINT32_MAX;
volatile uint8_t x356 = 24U;
static uint8_t x358 = UINT8_MAX;
volatile uint64_t x363 = 826LLU;
int64_t x382 = 52LL;
int16_t x383 = 14429;
volatile uint32_t t83 = 1U;
uint8_t x396 = UINT8_MAX;
int64_t t85 = -1755192340549288942LL;
int16_t x397 = INT16_MAX;
volatile uint64_t t89 = 10526282345LLU;
static volatile uint64_t t90 = 1544404280LLU;
int8_t x417 = INT8_MIN;
static volatile uint8_t x420 = UINT8_MAX;
int64_t x423 = INT64_MAX;
int8_t x427 = -1;
static uint8_t x429 = UINT8_MAX;
int16_t x431 = -4;
int32_t t94 = -31669;
static uint8_t x435 = 20U;
uint64_t x436 = UINT64_MAX;
uint32_t x441 = UINT32_MAX;
uint32_t x451 = 343U;
int32_t x454 = INT32_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 36608572423045LLU;
	uint64_t t0 = 3314948226672173269LLU;

	t0 = ((x1/x2)*(x3|x4));

	if (t0 != 8900520238567653376LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x10 = -27849900924636LL;
	uint64_t x11 = 24851195821691LLU;
	volatile int32_t x12 = INT32_MIN;
	volatile uint64_t t1 = 157283LLU;

	t1 = ((x9/x10)*(x11|x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x18 = UINT64_MAX;
	volatile int64_t x19 = 6971776LL;
	int32_t x20 = INT32_MIN;

	t2 = ((x17/x18)*(x19|x20));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = -4371559769600805090LL;
	static int8_t x23 = INT8_MAX;
	static int32_t x24 = -181;
	volatile int64_t t3 = 3262669297608LL;

	t3 = ((x21/x22)*(x23|x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 745LLU;
	static uint64_t x26 = UINT64_MAX;
	int64_t x27 = -1LL;
	static volatile uint64_t t4 = 3063743LLU;

	t4 = ((x25/x26)*(x27|x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x30 = INT64_MIN;
	uint32_t x32 = 18226U;

	t5 = ((x29/x30)*(x31|x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	volatile uint64_t x34 = 709189282863268717LLU;
	volatile uint8_t x35 = 110U;
	uint64_t t6 = 1538LLU;

	t6 = ((x33/x34)*(x35|x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x38 = -1;
	static volatile uint64_t x39 = UINT64_MAX;
	volatile uint64_t x40 = 1642926343LLU;
	uint64_t t7 = 1050LLU;

	t7 = ((x37/x38)*(x39|x40));

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = UINT8_MAX;
	uint8_t x48 = UINT8_MAX;

	t8 = ((x45/x46)*(x47|x48));

	if (t8 != 8421504U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -9;
	volatile int16_t x50 = -1;
	uint8_t x51 = 0U;
	uint16_t x52 = 288U;

	t9 = ((x49/x50)*(x51|x52));

	if (t9 != 2592) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	static volatile int64_t x55 = -1LL;
	volatile int32_t x56 = -5528972;
	static volatile int64_t t10 = -6278LL;

	t10 = ((x53/x54)*(x55|x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = -5;
	int8_t x60 = INT8_MIN;
	int32_t t11 = -490679607;

	t11 = ((x57/x58)*(x59|x60));

	if (t11 != 1920) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MAX;
	int64_t x63 = 236LL;
	static uint64_t x64 = 442692LLU;

	t12 = ((x61/x62)*(x63|x64));

	if (t12 != 18446744044685392936LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	uint32_t x66 = 6090U;
	int64_t x67 = INT64_MIN;
	volatile int64_t t13 = -390LL;

	t13 = ((x65/x66)*(x67|x68));

	if (t13 != -23109402624LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 1665U;
	volatile int32_t x71 = INT32_MIN;
	volatile int64_t x72 = -389781136LL;
	volatile int64_t t14 = 453357272LL;

	t14 = ((x69/x70)*(x71|x72));

	if (t14 != -5067154768LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = -1;
	int64_t x74 = -37LL;
	int16_t x75 = -13;
	int64_t t15 = -8297276243677LL;

	t15 = ((x73/x74)*(x75|x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 27;
	int8_t x78 = -4;
	int8_t x79 = -1;

	t16 = ((x77/x78)*(x79|x80));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = -1;
	uint32_t x88 = 705U;
	uint32_t t17 = 2082803009U;

	t17 = ((x85/x86)*(x87|x88));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x94 = -664668976;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t18 = -71434232;

	t18 = ((x93/x94)*(x95|x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -1;
	int32_t x98 = -14;
	int64_t x99 = -26458590LL;
	volatile int16_t x100 = -1;
	int64_t t19 = 1LL;

	t19 = ((x97/x98)*(x99|x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x102 = 8U;
	int16_t x103 = -1;
	static volatile int32_t t20 = -15;

	t20 = ((x101/x102)*(x103|x104));

	if (t20 != -268435455) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x105 = 7817U;
	int16_t x106 = INT16_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t t21 = 6888842580543093LLU;

	t21 = ((x105/x106)*(x107|x108));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MAX;
	int16_t x114 = INT16_MAX;
	int8_t x115 = 1;
	volatile uint64_t x116 = 204LLU;
	volatile uint64_t t22 = 3701LLU;

	t22 = ((x113/x114)*(x115|x116));

	if (t22 != 13435290LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	volatile uint32_t t23 = 156983127U;

	t23 = ((x117/x118)*(x119|x120));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = -1;
	uint64_t x122 = 177LLU;
	volatile int32_t x123 = INT32_MIN;
	uint64_t t24 = 4925953891867634497LLU;

	t24 = ((x121/x122)*(x123|x124));

	if (t24 != 17717211822206913984LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = INT16_MAX;
	volatile int8_t x126 = -1;
	int8_t x127 = INT8_MAX;
	volatile uint32_t x128 = 909461827U;
	static volatile uint32_t t25 = 1725U;

	t25 = ((x125/x126)*(x127|x128));

	if (t25 != 2440415615U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x130 = UINT8_MAX;
	volatile int64_t x132 = -6LL;

	t26 = ((x129/x130)*(x131|x132));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;

	t27 = ((x133/x134)*(x135|x136));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x141 = 5279LLU;
	volatile int32_t x143 = -1;
	uint64_t x144 = 2491LLU;
	uint64_t t28 = 223724356LLU;

	t28 = ((x141/x142)*(x143|x144));

	if (t28 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t29 = 3182301LLU;

	t29 = ((x145/x146)*(x147|x148));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x150 = 1258703036173LLU;
	int32_t x151 = INT32_MAX;
	int32_t x152 = -1;
	volatile uint64_t t30 = 39753LLU;

	t30 = ((x149/x150)*(x151|x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x155 = INT32_MAX;
	uint8_t x156 = 96U;

	t31 = ((x153/x154)*(x155|x156));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	volatile uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	int32_t x160 = -1;
	int32_t t32 = -477;

	t32 = ((x157/x158)*(x159|x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 60U;
	int64_t x162 = -20058112923LL;
	uint32_t x163 = UINT32_MAX;

	t33 = ((x161/x162)*(x163|x164));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x166 = 282U;
	volatile int32_t x167 = INT32_MAX;
	uint32_t t34 = 2U;

	t34 = ((x165/x166)*(x167|x168));

	if (t34 != 4294960977U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 371U;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -2764;
	static int64_t t35 = -27009LL;

	t35 = ((x169/x170)*(x171|x172));

	if (t35 != 1025444LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 2U;
	static int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t36 = -23547;

	t36 = ((x173/x174)*(x175|x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x178 = 3U;
	static uint8_t x179 = 4U;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t37 = -3705841;

	t37 = ((x177/x178)*(x179|x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x181 = 2U;
	int16_t x182 = -1;
	int16_t x183 = INT16_MAX;

	t38 = ((x181/x182)*(x183|x184));

	if (t38 != 137895910572034LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = -8;
	int64_t x186 = -1LL;
	int64_t x187 = -44565579905LL;
	volatile int64_t t39 = 4246LL;

	t39 = ((x185/x186)*(x187|x188));

	if (t39 != -8LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -8849;
	static int16_t x190 = -2850;
	uint8_t x191 = 57U;
	static int16_t x192 = INT16_MIN;

	t40 = ((x189/x190)*(x191|x192));

	if (t40 != -98133) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 1U;
	uint8_t x194 = 68U;
	int32_t x195 = INT32_MIN;
	volatile int64_t x196 = INT64_MIN;

	t41 = ((x193/x194)*(x195|x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = 5642675LLU;
	volatile uint64_t t42 = 1802579348LLU;

	t42 = ((x201/x202)*(x203|x204));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x206 = UINT32_MAX;
	static int64_t x207 = INT64_MIN;
	volatile int64_t t43 = -28847LL;

	t43 = ((x205/x206)*(x207|x208));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x209 = -1;
	int16_t x212 = INT16_MIN;
	volatile int64_t t44 = -16LL;

	t44 = ((x209/x210)*(x211|x212));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = -1;
	int16_t x214 = 26;
	static int16_t x215 = -6;
	int16_t x216 = 2;

	t45 = ((x213/x214)*(x215|x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = 893;
	int64_t x219 = -630579852721LL;
	int16_t x220 = 2460;

	t46 = ((x217/x218)*(x219|x220));

	if (t46 != -10719857489457LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -7;
	int32_t x222 = -1;
	volatile int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MAX;
	int32_t t47 = -430649;

	t47 = ((x221/x222)*(x223|x224));

	if (t47 != -7) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t48 = INT32_MIN;

	t48 = ((x225/x226)*(x227|x228));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 3U;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 149413LLU;
	uint64_t t49 = 1LLU;

	t49 = ((x229/x230)*(x231|x232));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x234 = INT32_MIN;
	int32_t x236 = -4163;

	t50 = ((x233/x234)*(x235|x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 414U;
	volatile int16_t x238 = 5;
	uint8_t x239 = 108U;
	int32_t x240 = -1;
	int32_t t51 = 286;

	t51 = ((x237/x238)*(x239|x240));

	if (t51 != -82) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = 13U;
	int32_t x242 = -2354;
	volatile int16_t x244 = 1;
	volatile int32_t t52 = 8131571;

	t52 = ((x241/x242)*(x243|x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x245 = 7094LL;
	static int16_t x246 = INT16_MIN;
	static int32_t x247 = INT32_MAX;
	volatile int32_t x248 = 0;

	t53 = ((x245/x246)*(x247|x248));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = 1U;
	int16_t x254 = -1;
	static uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MIN;
	int64_t t54 = 1LL;

	t54 = ((x253/x254)*(x255|x256));

	if (t54 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = 6U;
	volatile int16_t x260 = INT16_MIN;
	uint64_t t55 = 102155687209279667LLU;

	t55 = ((x257/x258)*(x259|x260));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 4U;
	static int8_t x263 = -1;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t56 = 7LLU;

	t56 = ((x261/x262)*(x263|x264));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = UINT64_MAX;
	static volatile int32_t x266 = INT32_MAX;
	int64_t x267 = 47LL;
	volatile int16_t x268 = INT16_MIN;
	uint64_t t57 = 1223LLU;

	t57 = ((x265/x266)*(x267|x268));

	if (t57 != 18446463002459635900LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	uint16_t x272 = UINT16_MAX;
	static volatile uint64_t t58 = 81461245226140518LLU;

	t58 = ((x269/x270)*(x271|x272));

	if (t58 != 140735340871680LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x273 = 59U;
	int8_t x276 = -1;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = ((x273/x274)*(x275|x276));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = 13152U;
	uint32_t x278 = UINT32_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t x280 = 379;
	volatile uint32_t t60 = 126U;

	t60 = ((x277/x278)*(x279|x280));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MAX;
	int8_t x283 = INT8_MAX;
	static volatile int8_t x284 = INT8_MAX;

	t61 = ((x281/x282)*(x283|x284));

	if (t61 != -9151314442816847745LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x285 = 7LLU;
	uint32_t x286 = 213741U;
	volatile int64_t x287 = -1LL;
	int16_t x288 = 114;

	t62 = ((x285/x286)*(x287|x288));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x289 = INT8_MIN;
	volatile int8_t x290 = 1;
	int32_t x291 = 1509;
	static int16_t x292 = INT16_MAX;
	int32_t t63 = -1;

	t63 = ((x289/x290)*(x291|x292));

	if (t63 != -4194176) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x293 = -109LL;
	static uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MIN;
	volatile int64_t x296 = INT64_MIN;
	int64_t t64 = -3132379674950882LL;

	t64 = ((x293/x294)*(x295|x296));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	int8_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	int32_t t65 = 1;

	t65 = ((x297/x298)*(x299|x300));

	if (t65 != 429496729) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x302 = INT8_MIN;
	uint32_t x303 = UINT32_MAX;
	static volatile uint16_t x304 = 23U;
	uint32_t t66 = UINT32_MAX;

	t66 = ((x301/x302)*(x303|x304));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	static int32_t x306 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	static int64_t t67 = 738750666259947137LL;

	t67 = ((x305/x306)*(x307|x308));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x309 = 1;
	int32_t x310 = -1;
	int32_t x311 = -1;

	t68 = ((x309/x310)*(x311|x312));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x314 = -1568LL;
	volatile int16_t x315 = -2;
	uint8_t x316 = UINT8_MAX;
	volatile int64_t t69 = -434LL;

	t69 = ((x313/x314)*(x315|x316));

	if (t69 != 2739137LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x325 = INT8_MAX;
	static int16_t x326 = -1;
	int64_t x327 = INT64_MIN;
	volatile int64_t t70 = 437722816723690LL;

	t70 = ((x325/x326)*(x327|x328));

	if (t70 != 4161536LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x329 = 117869U;
	int8_t x330 = INT8_MIN;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MAX;
	uint64_t t71 = 28743693607LLU;

	t71 = ((x329/x330)*(x331|x332));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = 53;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MAX;
	volatile int16_t x336 = INT16_MIN;

	t72 = ((x333/x334)*(x335|x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 1245LLU;
	static int64_t x338 = INT64_MIN;
	static int32_t x339 = -1;
	static volatile uint64_t t73 = 487555819LLU;

	t73 = ((x337/x338)*(x339|x340));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -3508;
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = INT16_MAX;
	int32_t x344 = -1;
	int32_t t74 = -91861954;

	t74 = ((x341/x342)*(x343|x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = 961588LL;
	static volatile uint8_t x346 = UINT8_MAX;
	static int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	int64_t t75 = -2543019262824LL;

	t75 = ((x345/x346)*(x347|x348));

	if (t75 != -123535360LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = 0U;
	int8_t x351 = 0;
	int8_t x352 = -1;
	int64_t t76 = -22923311804LL;

	t76 = ((x349/x350)*(x351|x352));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x354 = -2;
	volatile uint32_t x355 = UINT32_MAX;
	uint32_t t77 = UINT32_MAX;

	t77 = ((x353/x354)*(x355|x356));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 30859U;
	int32_t x359 = -751804;
	static int64_t x360 = -1LL;
	volatile int64_t t78 = -9102056895LL;

	t78 = ((x357/x358)*(x359|x360));

	if (t78 != -121LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = INT16_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t79 = 27582836061405721LLU;

	t79 = ((x361/x362)*(x363|x364));

	if (t79 != 18446462590142644216LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = 1;
	uint32_t x366 = 7U;
	int16_t x367 = 1;
	static int8_t x368 = INT8_MAX;
	static volatile uint32_t t80 = 12021859U;

	t80 = ((x365/x366)*(x367|x368));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = 5499;
	static uint16_t x370 = 16077U;
	volatile uint32_t x371 = 27U;
	int16_t x372 = 81;
	static uint32_t t81 = 6U;

	t81 = ((x369/x370)*(x371|x372));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = -1;
	static int8_t x384 = INT8_MAX;
	int64_t t82 = -83439597421LL;

	t82 = ((x381/x382)*(x383|x384));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x385 = 8U;
	volatile uint8_t x386 = 1U;
	static volatile int32_t x387 = -1066;
	volatile uint32_t x388 = UINT32_MAX;

	t83 = ((x385/x386)*(x387|x388));

	if (t83 != 4294967288U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x389 = INT32_MIN;
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = INT64_MIN;
	static int16_t x392 = -6255;
	int64_t t84 = 66638764623745LL;

	t84 = ((x389/x390)*(x391|x392));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = INT64_MIN;
	static uint8_t x395 = UINT8_MAX;

	t85 = ((x393/x394)*(x395|x396));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x398 = INT16_MIN;
	int8_t x399 = -1;
	static int64_t x400 = INT64_MAX;
	static int64_t t86 = 20579LL;

	t86 = ((x397/x398)*(x399|x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = -5820743020828330LL;
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MAX;
	int32_t x404 = -1;
	int64_t t87 = 8111969157774548LL;

	t87 = ((x401/x402)*(x403|x404));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = -1;
	volatile int8_t x406 = INT8_MIN;
	static int16_t x407 = 15;
	volatile int64_t x408 = -37LL;
	int64_t t88 = -4904038LL;

	t88 = ((x405/x406)*(x407|x408));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x409 = 8357838821862788LLU;
	int32_t x410 = 2121;
	static int8_t x411 = -1;
	uint32_t x412 = 17U;

	t89 = ((x409/x410)*(x411|x412));

	if (t89 != 8731911081897886093LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = -84088695253LL;
	int64_t x414 = INT64_MIN;
	uint8_t x415 = 21U;
	uint64_t x416 = 77105764396LLU;

	t90 = ((x413/x414)*(x415|x416));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x418 = INT64_MIN;
	uint16_t x419 = 30U;
	int64_t t91 = -133LL;

	t91 = ((x417/x418)*(x419|x420));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x421 = 3175314U;
	int32_t x422 = INT32_MIN;
	static int16_t x424 = INT16_MIN;
	static volatile int64_t t92 = -7162398LL;

	t92 = ((x421/x422)*(x423|x424));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x425 = 36U;
	static int32_t x426 = INT32_MIN;
	volatile int16_t x428 = INT16_MAX;
	int32_t t93 = -15;

	t93 = ((x425/x426)*(x427|x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x430 = UINT8_MAX;
	static uint16_t x432 = 2U;

	t94 = ((x429/x430)*(x431|x432));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MAX;
	uint64_t t95 = 322644LLU;

	t95 = ((x433/x434)*(x435|x436));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MAX;
	uint32_t x439 = 6156U;
	uint64_t x440 = 748LLU;
	uint64_t t96 = 1339489077881535309LLU;

	t96 = ((x437/x438)*(x439|x440));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x442 = INT64_MAX;
	int64_t x443 = INT64_MIN;
	volatile int16_t x444 = 61;
	volatile int64_t t97 = 26986359LL;

	t97 = ((x441/x442)*(x443|x444));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x449 = 3547U;
	volatile uint32_t x450 = 13793U;
	int32_t x452 = INT32_MIN;
	volatile uint32_t t98 = 15479656U;

	t98 = ((x449/x450)*(x451|x452));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x453 = 509U;
	int16_t x455 = 753;
	int8_t x456 = -3;
	int32_t t99 = -53522408;

	t99 = ((x453/x454)*(x455|x456));

	if (t99 != 0) { NG(); } else { ; }
	
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

