#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x24 = INT8_MIN;
static volatile uint16_t x25 = 3U;
int64_t x30 = INT64_MIN;
int16_t x32 = INT16_MIN;
int16_t x58 = -544;
static uint16_t x80 = UINT16_MAX;
int64_t x82 = INT64_MAX;
static int8_t x87 = INT8_MIN;
uint32_t t15 = UINT32_MAX;
static uint64_t t16 = UINT64_MAX;
uint64_t x113 = 10LLU;
uint64_t x122 = UINT64_MAX;
int32_t x125 = INT32_MAX;
int32_t x127 = INT32_MIN;
volatile int8_t x136 = INT8_MIN;
volatile uint64_t x138 = 24117LLU;
uint32_t x141 = 3082U;
int64_t x144 = 24620041563662LL;
volatile int16_t x149 = -627;
static int16_t x161 = -907;
uint32_t x163 = 11U;
uint32_t x166 = 400828908U;
volatile uint64_t x179 = 137969909828668194LLU;
int32_t t32 = -1166;
uint32_t t34 = UINT32_MAX;
int8_t x205 = 13;
int8_t x210 = 15;
static int64_t x214 = -30LL;
uint32_t x223 = 173741U;
int16_t x228 = INT16_MAX;
static uint64_t t43 = UINT64_MAX;
int64_t x231 = 2803571461721LL;
static uint64_t x237 = UINT64_MAX;
uint64_t t45 = 198094454LLU;
int8_t x243 = INT8_MIN;
uint64_t t46 = 13643532LLU;
uint32_t x245 = UINT32_MAX;
uint32_t x246 = 7U;
static uint8_t x250 = 1U;
int64_t x264 = -1LL;
uint16_t x266 = UINT16_MAX;
int8_t x267 = -1;
uint64_t t53 = UINT64_MAX;
uint64_t x278 = 36575218026172LLU;
static int16_t x281 = INT16_MAX;
static int16_t x288 = 733;
uint64_t x290 = 806430545LLU;
int32_t x292 = INT32_MAX;
int16_t x293 = INT16_MIN;
int32_t x295 = INT32_MIN;
static int64_t x302 = -159323889304612690LL;
uint8_t x305 = 0U;
uint64_t x307 = 5735LLU;
static volatile int8_t x308 = -12;
uint32_t x309 = 1U;
uint16_t x321 = 766U;
static int64_t t64 = 42007LL;
int8_t x329 = INT8_MIN;
int8_t x330 = INT8_MIN;
int64_t t72 = 467996916518LL;
static volatile int64_t x357 = INT64_MAX;
uint64_t t73 = 98769022157LLU;
volatile int16_t x361 = -40;
static int8_t x385 = INT8_MIN;
int8_t x386 = -1;
uint16_t x388 = UINT16_MAX;
int16_t x390 = 4025;
int8_t x394 = 60;
volatile uint64_t t82 = UINT64_MAX;
static int32_t x400 = INT32_MAX;
uint32_t x401 = 87714U;
int16_t x417 = INT16_MIN;
volatile int16_t x419 = -1;
uint16_t x420 = 42U;
volatile int32_t x423 = 0;
uint32_t x426 = UINT32_MAX;
static int16_t x427 = -54;
static volatile uint32_t t88 = 97847774U;
uint64_t t89 = UINT64_MAX;
volatile int8_t x440 = 2;
int8_t x441 = 2;
static int32_t x445 = -1;
int32_t x449 = INT32_MAX;
volatile uint16_t x452 = UINT16_MAX;
volatile int32_t t93 = INT32_MAX;
static int16_t x456 = INT16_MIN;
static uint64_t x467 = UINT64_MAX;
volatile uint64_t t97 = UINT64_MAX;
uint32_t x472 = 1404618725U;
volatile uint32_t t98 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 746538LL;
	int8_t x2 = -5;
	int8_t x3 = INT8_MIN;
	static volatile int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = 12198856188210LL;

	t0 = ((x1-x2)|(x3|x4));

	if (t0 != -81LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static uint64_t x6 = 54LLU;
	int64_t x7 = INT64_MIN;
	int64_t x8 = 244625977545114LL;
	uint64_t t1 = 5759611476193425LLU;

	t1 = ((x5-x6)|(x7|x8));

	if (t1 != 9223616662832349147LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = 115034;
	uint32_t t2 = UINT32_MAX;

	t2 = ((x9-x10)|(x11|x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = -1;
	uint8_t x15 = 102U;
	static int8_t x16 = 7;
	int32_t t3 = -2518801;

	t3 = ((x13-x14)|(x15|x16));

	if (t3 != -32665) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = -1LL;
	int16_t x19 = INT16_MAX;
	static volatile uint8_t x20 = 20U;
	int64_t t4 = 427706LL;

	t4 = ((x17-x18)|(x19|x20));

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static int8_t x22 = INT8_MIN;
	int8_t x23 = 1;
	int32_t t5 = 1129;

	t5 = ((x21-x22)|(x23|x24));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 6U;
	uint8_t x27 = 35U;
	int32_t x28 = -1;
	volatile int32_t t6 = -4070;

	t6 = ((x25-x26)|(x27|x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -161624038857470286LL;
	uint32_t x31 = UINT32_MAX;
	int64_t t7 = -192291LL;

	t7 = ((x29-x30)|(x31|x32));

	if (t7 != 9061748002279915519LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 394U;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = 164;
	volatile int8_t x44 = 1;
	volatile int32_t t8 = -11;

	t8 = ((x41-x42)|(x43|x44));

	if (t8 != -65105) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x57 = -1;
	static int8_t x59 = -12;
	volatile uint16_t x60 = 19U;
	volatile int32_t t9 = 129158303;

	t9 = ((x57-x58)|(x59|x60));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = INT8_MAX;
	uint64_t x62 = 11785466192810LLU;
	int64_t x63 = 16247045LL;
	static int8_t x64 = INT8_MIN;
	volatile uint64_t t10 = 3262LLU;

	t10 = ((x61-x62)|(x63|x64));

	if (t10 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MAX;
	uint32_t x67 = 416U;
	int8_t x68 = -1;
	static volatile uint32_t t11 = UINT32_MAX;

	t11 = ((x65-x66)|(x67|x68));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MIN;
	int8_t x79 = 1;
	int32_t t12 = 27;

	t12 = ((x77-x78)|(x79|x80));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x81 = 29956LLU;
	volatile uint16_t x83 = 2006U;
	int16_t x84 = -8;
	static uint64_t t13 = UINT64_MAX;

	t13 = ((x81-x82)|(x83|x84));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x85 = UINT32_MAX;
	volatile int16_t x86 = 189;
	uint8_t x88 = UINT8_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = ((x85-x86)|(x87|x88));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MAX;
	volatile int16_t x95 = -1;
	static uint32_t x96 = 76929U;

	t15 = ((x93-x94)|(x95|x96));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = 7U;
	uint64_t x98 = UINT64_MAX;
	uint8_t x99 = 1U;
	int64_t x100 = -1LL;

	t16 = ((x97-x98)|(x99|x100));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = 58;
	int32_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = -1LL;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x101-x102)|(x103|x104));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x109 = 2537647U;
	int64_t x110 = -227742437LL;
	static volatile int16_t x111 = INT16_MIN;
	int16_t x112 = -56;
	int64_t t18 = 42992LL;

	t18 = ((x109-x110)|(x111|x112));

	if (t18 != -36LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x114 = INT32_MIN;
	uint16_t x115 = 701U;
	int16_t x116 = 8;
	volatile uint64_t t19 = 5531LLU;

	t19 = ((x113-x114)|(x115|x116));

	if (t19 != 2147484351LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x117 = 0U;
	uint8_t x118 = 31U;
	static volatile uint64_t x119 = 168542610LLU;
	uint8_t x120 = UINT8_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = ((x117-x118)|(x119|x120));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = -1;
	static uint64_t x123 = 719LLU;
	int32_t x124 = INT32_MIN;
	uint64_t t21 = 787433186708123LLU;

	t21 = ((x121-x122)|(x123|x124));

	if (t21 != 18446744071562068687LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x126 = 74U;
	int64_t x128 = INT64_MIN;
	static int64_t t22 = 533LL;

	t22 = ((x125-x126)|(x127|x128));

	if (t22 != -75LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x129 = UINT64_MAX;
	uint64_t x130 = 95478630681LLU;
	int32_t x131 = INT32_MIN;
	uint16_t x132 = 30U;
	uint64_t t23 = 38LLU;

	t23 = ((x129-x130)|(x131|x132));

	if (t23 != 18446744072720201470LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = 20U;
	volatile int16_t x134 = INT16_MAX;
	static uint64_t x135 = 1554601LLU;
	static volatile uint64_t t24 = 15340450463484199LLU;

	t24 = ((x133-x134)|(x135|x136));

	if (t24 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = INT32_MIN;
	uint16_t x139 = 658U;
	int32_t x140 = 1698;
	uint64_t t25 = 11001LLU;

	t25 = ((x137-x138)|(x139|x140));

	if (t25 != 18446744071562045435LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x142 = UINT64_MAX;
	static int8_t x143 = INT8_MIN;
	uint64_t t26 = 353762743130109307LLU;

	t26 = ((x141-x142)|(x143|x144));

	if (t26 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = 4;
	uint32_t x146 = 1825U;
	uint64_t x147 = 47464LLU;
	int64_t x148 = INT64_MAX;
	volatile uint64_t t27 = 24152796290581LLU;

	t27 = ((x145-x146)|(x147|x148));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x150 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	int8_t x152 = -1;
	volatile int32_t t28 = -169917057;

	t28 = ((x149-x150)|(x151|x152));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x162 = INT8_MIN;
	uint8_t x164 = 102U;
	uint32_t t29 = 443320U;

	t29 = ((x161-x162)|(x163|x164));

	if (t29 != 4294966527U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x165 = 37103;
	static int16_t x167 = 14;
	int64_t x168 = -365368292465583LL;
	volatile int64_t t30 = -147LL;

	t30 = ((x165-x166)|(x167|x168));

	if (t30 != -365364399610017LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -1;
	uint32_t x180 = UINT32_MAX;
	uint64_t t31 = 44833284LLU;

	t31 = ((x177-x178)|(x179|x180));

	if (t31 != 137969910214033407LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x181 = INT32_MAX;
	int16_t x182 = 912;
	int32_t x183 = INT32_MAX;
	int32_t x184 = -154559;

	t32 = ((x181-x182)|(x183|x184));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = -1LL;
	int32_t x186 = -3917279;
	volatile int8_t x187 = -1;
	volatile int8_t x188 = INT8_MAX;
	static int64_t t33 = 1765297154476188LL;

	t33 = ((x185-x186)|(x187|x188));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 0U;
	volatile int32_t x191 = INT32_MAX;
	volatile int32_t x192 = INT32_MIN;

	t34 = ((x189-x190)|(x191|x192));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x193 = 103U;
	static uint16_t x194 = UINT16_MAX;
	int64_t x195 = -5LL;
	static uint64_t x196 = 2282448815410LLU;
	static volatile uint64_t t35 = 466054459196978LLU;

	t35 = ((x193-x194)|(x195|x196));

	if (t35 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x197 = 378672LLU;
	volatile int8_t x198 = 3;
	volatile uint32_t x199 = 183857616U;
	static uint16_t x200 = 3U;
	volatile uint64_t t36 = 3795023517038241LLU;

	t36 = ((x197-x198)|(x199|x200));

	if (t36 != 183891967LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 34815022444246LLU;
	int64_t x202 = -1LL;
	int8_t x203 = INT8_MAX;
	uint8_t x204 = 31U;
	static uint64_t t37 = 18081718696LLU;

	t37 = ((x201-x202)|(x203|x204));

	if (t37 != 34815022444287LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x206 = UINT16_MAX;
	uint64_t x207 = 81916499300740665LLU;
	int16_t x208 = INT16_MIN;
	volatile uint64_t t38 = 5300083728306069783LLU;

	t38 = ((x205-x206)|(x207|x208));

	if (t38 != 18446744073709547071LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x209 = 284273237914LLU;
	int64_t x211 = INT64_MAX;
	uint16_t x212 = 8035U;
	uint64_t t39 = 2178338728520LLU;

	t39 = ((x209-x210)|(x211|x212));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x213 = UINT64_MAX;
	int32_t x215 = INT32_MAX;
	static uint8_t x216 = UINT8_MAX;
	static volatile uint64_t t40 = 13335618513655358LLU;

	t40 = ((x213-x214)|(x215|x216));

	if (t40 != 2147483647LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x217 = INT32_MAX;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = 1;
	static int32_t x220 = INT32_MIN;
	uint32_t t41 = 3078107U;

	t41 = ((x217-x218)|(x219|x220));

	if (t41 != 2147483649U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x221 = -2;
	int8_t x222 = INT8_MAX;
	uint8_t x224 = UINT8_MAX;
	static volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x221-x222)|(x223|x224));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x225 = 73037742209LLU;
	int8_t x226 = INT8_MAX;
	int32_t x227 = -1103;

	t43 = ((x225-x226)|(x227|x228));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x229 = -1LL;
	static int8_t x230 = -1;
	uint32_t x232 = 25261U;
	int64_t t44 = -84LL;

	t44 = ((x229-x230)|(x231|x232));

	if (t44 != 2803571486461LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x238 = -1;
	uint64_t x239 = 94556835LLU;
	int16_t x240 = INT16_MIN;

	t45 = ((x237-x238)|(x239|x240));

	if (t45 != 18446744073709540003LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	uint8_t x244 = 0U;

	t46 = ((x241-x242)|(x243|x244));

	if (t46 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x247 = -1482;
	static volatile uint64_t x248 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x245-x246)|(x247|x248));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x249 = -4885970;
	static int32_t x251 = -1;
	static uint32_t x252 = 85548U;
	static volatile uint32_t t48 = UINT32_MAX;

	t48 = ((x249-x250)|(x251|x252));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x253 = 0;
	int16_t x254 = -1;
	int8_t x255 = 6;
	volatile int64_t x256 = 917745605223LL;
	static int64_t t49 = -1381487027756932LL;

	t49 = ((x253-x254)|(x255|x256));

	if (t49 != 917745605223LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x257 = -1LL;
	volatile int32_t x258 = 319861476;
	uint8_t x259 = 1U;
	int8_t x260 = -1;
	volatile int64_t t50 = -2183271239994938LL;

	t50 = ((x257-x258)|(x259|x260));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = -1;
	int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	int64_t t51 = -2789LL;

	t51 = ((x261-x262)|(x263|x264));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = -1;
	volatile uint32_t x268 = 870U;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = ((x265-x266)|(x267|x268));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MAX;
	volatile uint64_t x272 = UINT64_MAX;

	t53 = ((x269-x270)|(x271|x272));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x277 = -15;
	uint64_t x279 = UINT64_MAX;
	volatile uint16_t x280 = 15024U;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x277-x278)|(x279|x280));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x282 = 3;
	static uint32_t x283 = 16U;
	int64_t x284 = -1LL;
	volatile int64_t t55 = 33871648804928867LL;

	t55 = ((x281-x282)|(x283|x284));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x285 = -3;
	int8_t x286 = 1;
	int64_t x287 = -4LL;
	volatile int64_t t56 = -1LL;

	t56 = ((x285-x286)|(x287|x288));

	if (t56 != -3LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = -1;
	static uint64_t x291 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x289-x290)|(x291|x292));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x294 = INT64_MIN;
	uint32_t x296 = 1U;
	volatile int64_t t58 = 1276255368736387960LL;

	t58 = ((x293-x294)|(x295|x296));

	if (t58 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x297 = -16322891;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = 1858772U;
	volatile int8_t x300 = INT8_MAX;
	uint32_t t59 = 2U;

	t59 = ((x297-x298)|(x299|x300));

	if (t59 != 2132737791U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x301 = 8031;
	int64_t x303 = INT64_MIN;
	volatile int8_t x304 = 24;
	volatile int64_t t60 = 185047011185299LL;

	t60 = ((x301-x302)|(x303|x304));

	if (t60 != -9064048147550155079LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x306 = UINT32_MAX;
	volatile uint64_t t61 = 261310288LLU;

	t61 = ((x305-x306)|(x307|x308));

	if (t61 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x310 = UINT32_MAX;
	int32_t x311 = -613821;
	static int8_t x312 = -1;
	static volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x309-x310)|(x311|x312));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x313 = INT64_MIN;
	volatile int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MIN;
	static volatile int64_t t63 = 235682180462132780LL;

	t63 = ((x313-x314)|(x315|x316));

	if (t63 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x322 = INT16_MIN;
	volatile int64_t x323 = INT64_MIN;
	volatile uint16_t x324 = 115U;

	t64 = ((x321-x322)|(x323|x324));

	if (t64 != -9223372036854742273LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = 33U;
	uint32_t x328 = 67U;
	uint32_t t65 = 335928846U;

	t65 = ((x325-x326)|(x327|x328));

	if (t65 != 99U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x331 = UINT8_MAX;
	volatile int32_t x332 = INT32_MAX;
	int32_t t66 = INT32_MAX;

	t66 = ((x329-x330)|(x331|x332));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x333 = 1300350148U;
	static int16_t x334 = INT16_MIN;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = 1;
	uint32_t t67 = 5744526U;

	t67 = ((x333-x334)|(x335|x336));

	if (t67 != 1300430847U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = INT16_MIN;
	uint32_t x340 = 56004U;
	static uint64_t t68 = 0LLU;

	t68 = ((x337-x338)|(x339|x340));

	if (t68 != 4294957823LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = -596747489;
	volatile int64_t x343 = 44159704LL;
	static uint8_t x344 = 8U;
	int64_t t69 = -42863LL;

	t69 = ((x341-x342)|(x343|x344));

	if (t69 != -9223372036255910151LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = INT32_MAX;
	volatile int64_t x346 = -2552087LL;
	int8_t x347 = INT8_MIN;
	volatile int16_t x348 = 2;
	static volatile int64_t t70 = 25717LL;

	t70 = ((x345-x346)|(x347|x348));

	if (t70 != -106LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x349 = 64404;
	static int16_t x350 = INT16_MIN;
	volatile uint8_t x351 = 0U;
	static int8_t x352 = -9;
	volatile int32_t t71 = 4392655;

	t71 = ((x349-x350)|(x351|x352));

	if (t71 != -9) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = -2226364854LL;
	static uint8_t x354 = UINT8_MAX;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = 565246U;

	t72 = ((x353-x354)|(x355|x356));

	if (t72 != -2226331649LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = -6;
	int32_t x360 = INT32_MIN;

	t73 = ((x357-x358)|(x359|x360));

	if (t73 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x362 = 6760;
	int32_t x363 = -1;
	int64_t x364 = INT64_MAX;
	volatile int64_t t74 = 1848793794863231647LL;

	t74 = ((x361-x362)|(x363|x364));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x366 = 13U;
	int16_t x367 = -1;
	int64_t x368 = -1LL;
	int64_t t75 = 7120612LL;

	t75 = ((x365-x366)|(x367|x368));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = -16134LL;
	int8_t x370 = INT8_MIN;
	int64_t x371 = 3005103943102714424LL;
	uint8_t x372 = 21U;
	int64_t t76 = 131556099LL;

	t76 = ((x369-x370)|(x371|x372));

	if (t76 != -11393LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 1280U;
	int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MIN;
	int64_t t77 = 104LL;

	t77 = ((x373-x374)|(x375|x376));

	if (t77 != -1280LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x377 = INT16_MIN;
	uint64_t x378 = UINT64_MAX;
	uint16_t x379 = UINT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x377-x378)|(x379|x380));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = 405920;
	volatile int64_t x382 = INT64_MAX;
	int16_t x383 = -2;
	volatile uint64_t x384 = 0LLU;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x381-x382)|(x383|x384));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x387 = -1;
	int32_t t80 = 20;

	t80 = ((x385-x386)|(x387|x388));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x389 = 17113317178447LLU;
	uint16_t x391 = 0U;
	volatile uint16_t x392 = 18143U;
	uint64_t t81 = 51596253LLU;

	t81 = ((x389-x390)|(x391|x392));

	if (t81 != 17113317175007LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint64_t x395 = UINT64_MAX;
	uint64_t x396 = UINT64_MAX;

	t82 = ((x393-x394)|(x395|x396));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x397 = 6U;
	volatile uint16_t x398 = 3U;
	volatile int64_t x399 = INT64_MIN;
	volatile int64_t t83 = -261225801842LL;

	t83 = ((x397-x398)|(x399|x400));

	if (t83 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x402 = 58246152602566471LLU;
	int8_t x403 = -4;
	int16_t x404 = 1;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x401-x402)|(x403|x404));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x405 = UINT32_MAX;
	static uint64_t x406 = 1LLU;
	int8_t x407 = -1;
	volatile uint32_t x408 = UINT32_MAX;
	uint64_t t85 = 157277666609838527LLU;

	t85 = ((x405-x406)|(x407|x408));

	if (t85 != 4294967295LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x418 = 878912823340LL;
	volatile int64_t t86 = -2053337064182LL;

	t86 = ((x417-x418)|(x419|x420));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = -1;
	int8_t x422 = INT8_MAX;
	static uint8_t x424 = UINT8_MAX;
	int32_t t87 = 967931326;

	t87 = ((x421-x422)|(x423|x424));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x425 = 1727U;
	volatile uint32_t x428 = 532739U;

	t88 = ((x425-x426)|(x427|x428));

	if (t88 != 4294967243U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x433 = INT8_MIN;
	uint64_t x434 = 22222038LLU;
	uint32_t x435 = 19U;
	volatile int64_t x436 = -1LL;

	t89 = ((x433-x434)|(x435|x436));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x437 = 2545U;
	int8_t x438 = INT8_MIN;
	static volatile int32_t x439 = 12188;
	int32_t t90 = -1;

	t90 = ((x437-x438)|(x439|x440));

	if (t90 != 12287) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x442 = 2445U;
	static volatile uint64_t x443 = 8527530692169121LLU;
	uint64_t x444 = 6771053LLU;
	uint64_t t91 = 13651540LLU;

	t91 = ((x441-x442)|(x443|x444));

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x446 = UINT32_MAX;
	int64_t x447 = INT64_MAX;
	static int8_t x448 = 1;
	volatile int64_t t92 = INT64_MAX;

	t92 = ((x445-x446)|(x447|x448));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x450 = 2;
	static int8_t x451 = 1;

	t93 = ((x449-x450)|(x451|x452));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = -1;
	uint64_t x454 = 124141286LLU;
	static uint16_t x455 = UINT16_MAX;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x453-x454)|(x455|x456));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x457 = 643125U;
	static int8_t x458 = 12;
	uint8_t x459 = UINT8_MAX;
	int32_t x460 = -11023403;
	uint32_t t95 = 3529U;

	t95 = ((x457-x458)|(x459|x460));

	if (t95 != 4284472319U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x461 = 1958974935044081LLU;
	uint8_t x462 = 65U;
	uint8_t x463 = 1U;
	uint16_t x464 = UINT16_MAX;
	uint64_t t96 = 5344887555326LLU;

	t96 = ((x461-x462)|(x463|x464));

	if (t96 != 1958974935072767LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x465 = -1LL;
	static int8_t x466 = INT8_MAX;
	int8_t x468 = INT8_MIN;

	t97 = ((x465-x466)|(x467|x468));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = INT8_MIN;
	uint8_t x470 = 37U;
	uint8_t x471 = UINT8_MAX;

	t98 = ((x469-x470)|(x471|x472));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x473 = 7U;
	static uint32_t x474 = UINT32_MAX;
	int32_t x475 = INT32_MIN;
	static int32_t x476 = INT32_MIN;
	uint32_t t99 = 7161162U;

	t99 = ((x473-x474)|(x475|x476));

	if (t99 != 2147483656U) { NG(); } else { ; }
	
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

