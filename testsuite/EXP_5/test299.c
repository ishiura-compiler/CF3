#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 32635930;
int16_t x11 = INT16_MIN;
int32_t t1 = 0;
int8_t x15 = -1;
int32_t x24 = 275;
uint16_t x26 = UINT16_MAX;
int64_t x40 = -1LL;
volatile int16_t x55 = INT16_MAX;
volatile int32_t t12 = 141;
volatile int32_t t13 = -694;
int8_t x69 = -3;
static int64_t x94 = -14147LL;
int16_t x96 = INT16_MAX;
volatile int32_t t18 = 1;
int32_t x109 = INT32_MAX;
static uint32_t x110 = UINT32_MAX;
int8_t x112 = INT8_MAX;
int8_t x119 = INT8_MIN;
uint64_t t23 = 1113588264421LLU;
volatile int64_t x127 = -409520561699860393LL;
volatile uint16_t x147 = 64U;
int32_t x150 = INT32_MIN;
int64_t x151 = -1LL;
static volatile int32_t t33 = 971;
volatile int8_t x165 = INT8_MIN;
int16_t x169 = INT16_MIN;
uint32_t x170 = 16U;
volatile int8_t x172 = 0;
volatile int16_t x177 = 0;
static int32_t x178 = 669;
int32_t t37 = 3940042;
int32_t x183 = 1;
static volatile int32_t t39 = -353;
static uint8_t x190 = 17U;
int8_t x191 = -1;
uint32_t t41 = 27054U;
static int8_t x197 = -1;
volatile uint16_t x198 = 869U;
int32_t x220 = -1;
uint8_t x231 = 12U;
int8_t x241 = INT8_MIN;
uint64_t x245 = 37934621949LLU;
uint16_t x251 = 1436U;
uint64_t x267 = 6LLU;
static int8_t x268 = INT8_MIN;
uint32_t t54 = 5596U;
int64_t x270 = -1LL;
uint64_t x273 = 13158562LLU;
uint16_t x288 = 14071U;
int32_t t59 = 97176;
int64_t x293 = -1LL;
static int16_t x304 = 65;
int8_t x311 = -1;
volatile int32_t t64 = -641182487;
int8_t x315 = -1;
uint64_t x317 = UINT64_MAX;
uint64_t t66 = 130LLU;
static uint64_t x321 = 15054458633LLU;
volatile int32_t t69 = 706454784;
uint32_t x342 = UINT32_MAX;
uint64_t x347 = UINT64_MAX;
volatile int8_t x348 = -1;
static int64_t x358 = 938612LL;
int8_t x370 = INT8_MIN;
int16_t x371 = INT16_MAX;
int32_t t80 = -1;
int32_t x387 = -1;
uint32_t x389 = 6783211U;
uint64_t x394 = UINT64_MAX;
volatile int8_t x401 = 7;
volatile int32_t t84 = -79;
int64_t x406 = 4138354985110088LL;
static int8_t x408 = INT8_MIN;
uint8_t x422 = UINT8_MAX;
volatile uint16_t x423 = UINT16_MAX;
int32_t x429 = 40521;
uint16_t x430 = UINT16_MAX;
uint64_t x439 = UINT64_MAX;
int8_t x440 = -1;
int32_t t91 = -2;
int16_t x450 = -4;
uint64_t x458 = 240LLU;
int32_t x460 = -1413576;
uint8_t x466 = UINT8_MAX;
volatile int64_t x467 = -1LL;
int32_t x471 = -59975123;
static uint8_t x472 = 1U;
static uint64_t x475 = UINT64_MAX;
volatile int32_t t99 = -5;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint8_t x2 = 46U;
	static int16_t x3 = -28;
	int64_t x4 = 46748088150LL;

	t0 = (x1^((x2-x3)<=x4));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	int64_t x10 = INT64_MIN;
	volatile uint8_t x12 = UINT8_MAX;

	t1 = (x9^((x10-x11)<=x12));

	if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = -766;
	static uint32_t x16 = 6465585U;
	volatile int64_t t2 = INT64_MIN;

	t2 = (x13^((x14-x15)<=x16));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	static int64_t x19 = INT64_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t3 = 685823418;

	t3 = (x17^((x18-x19)<=x20));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 2U;
	volatile int8_t x22 = INT8_MAX;
	static uint64_t x23 = 82291834281054LLU;
	volatile int32_t t4 = -139;

	t4 = (x21^((x22-x23)<=x24));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 28300301344031946LL;
	uint32_t x27 = 8978111U;
	volatile int32_t x28 = INT32_MIN;
	int64_t t5 = 353LL;

	t5 = (x25^((x26-x27)<=x28));

	if (t5 != 28300301344031946LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	static int64_t x30 = 6771504762LL;
	int64_t x31 = INT64_MAX;
	volatile uint8_t x32 = 7U;
	int32_t t6 = 371528836;

	t6 = (x29^((x30-x31)<=x32));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int64_t x34 = 1LL;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = 0;
	int32_t t7 = -33128098;

	t7 = (x33^((x34-x35)<=x36));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int64_t x38 = INT64_MAX;
	uint64_t x39 = 1LLU;
	volatile int32_t t8 = -1;

	t8 = (x37^((x38-x39)<=x40));

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -1;
	static volatile uint8_t x42 = 75U;
	int16_t x43 = -1;
	volatile int16_t x44 = -1;
	int32_t t9 = 86239438;

	t9 = (x41^((x42-x43)<=x44));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 9U;
	static uint32_t x46 = UINT32_MAX;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 164313501;

	t10 = (x45^((x46-x47)<=x48));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = 0;
	int64_t x51 = 20612LL;
	static int8_t x52 = -1;
	int32_t t11 = 3979525;

	t11 = (x49^((x50-x51)<=x52));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 23U;
	uint16_t x56 = 1482U;

	t12 = (x53^((x54-x55)<=x56));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = 525440;
	uint64_t x62 = 25LLU;
	static int64_t x63 = -16069441LL;
	int64_t x64 = 10673900286481LL;

	t13 = (x61^((x62-x63)<=x64));

	if (t13 != 525441) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = -28;
	volatile uint32_t x71 = UINT32_MAX;
	static int32_t x72 = -46527;
	volatile int32_t t14 = -36;

	t14 = (x69^((x70-x71)<=x72));

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int64_t x74 = -55554912969585LL;
	volatile int8_t x75 = -1;
	uint32_t x76 = 29617527U;
	int32_t t15 = -1;

	t15 = (x73^((x74-x75)<=x76));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 4694743;
	int64_t x78 = -952971LL;
	uint16_t x79 = UINT16_MAX;
	uint64_t x80 = 13284179926LLU;
	static volatile int32_t t16 = 209528;

	t16 = (x77^((x78-x79)<=x80));

	if (t16 != 4694743) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	static int64_t x82 = INT64_MIN;
	volatile int64_t x83 = -1LL;
	int16_t x84 = -16;
	int64_t t17 = -12299011LL;

	t17 = (x81^((x82-x83)<=x84));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	int64_t x95 = 21948386386LL;

	t18 = (x93^((x94-x95)<=x96));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 22U;
	int8_t x98 = INT8_MAX;
	uint8_t x99 = UINT8_MAX;
	static uint64_t x100 = 87172416541LLU;
	static int32_t t19 = 6077;

	t19 = (x97^((x98-x99)<=x100));

	if (t19 != 22) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = UINT8_MAX;
	static uint8_t x102 = 0U;
	int8_t x103 = 12;
	volatile int64_t x104 = -1LL;
	int32_t t20 = -530501;

	t20 = (x101^((x102-x103)<=x104));

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x111 = INT16_MAX;
	int32_t t21 = INT32_MAX;

	t21 = (x109^((x110-x111)<=x112));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x113 = INT16_MIN;
	volatile int32_t x114 = -49132;
	int64_t x115 = -1LL;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t22 = -969663191;

	t22 = (x113^((x114-x115)<=x116));

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = 167352249LLU;
	static int64_t x118 = 6886977481LL;
	int16_t x120 = 1;

	t23 = (x117^((x118-x119)<=x120));

	if (t23 != 167352249LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = 497484888LL;
	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 1U;
	int32_t x124 = -1;
	static int64_t t24 = 1LL;

	t24 = (x121^((x122-x123)<=x124));

	if (t24 != 497484889LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	static int32_t x128 = -1;
	static int32_t t25 = 2;

	t25 = (x125^((x126-x127)<=x128));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x129 = 2U;
	int16_t x130 = INT16_MIN;
	volatile int16_t x131 = INT16_MAX;
	volatile int16_t x132 = 10441;
	int32_t t26 = 0;

	t26 = (x129^((x130-x131)<=x132));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x133 = INT16_MAX;
	static int8_t x134 = -1;
	static uint64_t x135 = 6833LLU;
	static uint32_t x136 = UINT32_MAX;
	static volatile int32_t t27 = -780;

	t27 = (x133^((x134-x135)<=x136));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x137 = 788053063U;
	uint32_t x138 = 1U;
	int32_t x139 = -742265;
	int8_t x140 = INT8_MIN;
	volatile uint32_t t28 = 49725U;

	t28 = (x137^((x138-x139)<=x140));

	if (t28 != 788053062U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 43U;
	int32_t x142 = INT32_MAX;
	static uint32_t x143 = 2437506U;
	static volatile uint16_t x144 = 10U;
	static volatile int32_t t29 = 1735297;

	t29 = (x141^((x142-x143)<=x144));

	if (t29 != 43) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x145 = 89U;
	int64_t x146 = INT64_MAX;
	static volatile int16_t x148 = 108;
	static volatile uint32_t t30 = 14U;

	t30 = (x145^((x146-x147)<=x148));

	if (t30 != 89U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	int8_t x152 = 1;
	volatile int64_t t31 = 949297103245566LL;

	t31 = (x149^((x150-x151)<=x152));

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x153 = 2889U;
	volatile int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	static int32_t x156 = INT32_MIN;
	int32_t t32 = 809331;

	t32 = (x153^((x154-x155)<=x156));

	if (t32 != 2889) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = 7017U;
	static int16_t x158 = -292;
	static int8_t x159 = 1;
	int16_t x160 = -4;

	t33 = (x157^((x158-x159)<=x160));

	if (t33 != 7016) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x166 = INT8_MIN;
	static volatile int32_t x167 = INT32_MIN;
	volatile int8_t x168 = -1;
	int32_t t34 = -11;

	t34 = (x165^((x166-x167)<=x168));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t t35 = -55790;

	t35 = (x169^((x170-x171)<=x172));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int32_t x174 = INT32_MAX;
	uint8_t x175 = 26U;
	uint16_t x176 = 14942U;
	int32_t t36 = -10249699;

	t36 = (x173^((x174-x175)<=x176));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x179 = -1;
	static uint16_t x180 = 0U;

	t37 = (x177^((x178-x179)<=x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x181 = INT16_MAX;
	static uint64_t x182 = 3751900384832667LLU;
	static int8_t x184 = INT8_MAX;
	int32_t t38 = 351;

	t38 = (x181^((x182-x183)<=x184));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x185 = 7U;
	volatile int64_t x186 = -1LL;
	int32_t x187 = 5882725;
	uint64_t x188 = 62718316221697LLU;

	t39 = (x185^((x186-x187)<=x188));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = -1;
	static int32_t x192 = INT32_MIN;
	static volatile int32_t t40 = 116281;

	t40 = (x189^((x190-x191)<=x192));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x193 = 14U;
	int16_t x194 = INT16_MAX;
	int64_t x195 = -1LL;
	static uint8_t x196 = 6U;

	t41 = (x193^((x194-x195)<=x196));

	if (t41 != 14U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x199 = -125;
	int64_t x200 = 4146LL;
	volatile int32_t t42 = 1065685650;

	t42 = (x197^((x198-x199)<=x200));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = 120U;
	volatile int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t43 = 172784955;

	t43 = (x205^((x206-x207)<=x208));

	if (t43 != 121) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -1;
	int32_t x210 = INT32_MIN;
	static uint32_t x211 = 98541095U;
	int64_t x212 = -1215420769LL;
	volatile int32_t t44 = -732261;

	t44 = (x209^((x210-x211)<=x212));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x213 = INT32_MIN;
	static int16_t x214 = 401;
	static uint64_t x215 = UINT64_MAX;
	int32_t x216 = 3067;
	int32_t t45 = -450;

	t45 = (x213^((x214-x215)<=x216));

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	static int8_t x219 = -9;
	volatile int32_t t46 = 69;

	t46 = (x217^((x218-x219)<=x220));

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = -1LL;
	volatile int32_t x222 = 25759;
	uint32_t x223 = 233283U;
	int32_t x224 = INT32_MIN;
	int64_t t47 = -8348194744386LL;

	t47 = (x221^((x222-x223)<=x224));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = 13947582987LLU;
	uint64_t x230 = 25551050487797521LLU;
	uint32_t x232 = 117U;
	uint64_t t48 = 1975910701745660LLU;

	t48 = (x229^((x230-x231)<=x232));

	if (t48 != 13947582987LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = 735;
	static int64_t x238 = INT64_MAX;
	uint32_t x239 = 19206674U;
	static int32_t x240 = -4065957;
	volatile int32_t t49 = -16509641;

	t49 = (x237^((x238-x239)<=x240));

	if (t49 != 735) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x242 = 725U;
	int8_t x243 = 3;
	uint32_t x244 = 21237304U;
	volatile int32_t t50 = 89968;

	t50 = (x241^((x242-x243)<=x244));

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x246 = -1;
	int32_t x247 = 3397;
	static int16_t x248 = INT16_MIN;
	static volatile uint64_t t51 = 136LLU;

	t51 = (x245^((x246-x247)<=x248));

	if (t51 != 37934621949LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = INT16_MIN;
	static uint8_t x250 = 21U;
	static int64_t x252 = 661852300334511249LL;
	int32_t t52 = -3151455;

	t52 = (x249^((x250-x251)<=x252));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x257 = INT8_MIN;
	int16_t x258 = -1;
	volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = INT32_MIN;
	volatile int32_t t53 = 1724027;

	t53 = (x257^((x258-x259)<=x260));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = INT16_MIN;

	t54 = (x265^((x266-x267)<=x268));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x271 = 5788461U;
	static int8_t x272 = INT8_MAX;
	volatile int32_t t55 = -1;

	t55 = (x269^((x270-x271)<=x272));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x274 = -31433LL;
	uint8_t x275 = 0U;
	static int64_t x276 = -140310775413LL;
	uint64_t t56 = 497660840470LLU;

	t56 = (x273^((x274-x275)<=x276));

	if (t56 != 13158562LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x277 = 2U;
	uint8_t x278 = 0U;
	static volatile uint64_t x279 = 51446989274813LLU;
	static int32_t x280 = -1;
	int32_t t57 = 7280373;

	t57 = (x277^((x278-x279)<=x280));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MAX;
	static int16_t x283 = 0;
	static volatile int32_t x284 = -1;
	volatile int32_t t58 = -651182482;

	t58 = (x281^((x282-x283)<=x284));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MAX;

	t59 = (x285^((x286-x287)<=x288));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x294 = INT8_MAX;
	uint64_t x295 = 2524269959347589LLU;
	static int32_t x296 = INT32_MIN;
	volatile int64_t t60 = 370575958LL;

	t60 = (x293^((x294-x295)<=x296));

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x297 = 13U;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = 851120U;
	volatile int32_t x300 = -1;
	static int32_t t61 = -58276985;

	t61 = (x297^((x298-x299)<=x300));

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x301 = 1473U;
	uint8_t x302 = 36U;
	volatile int16_t x303 = INT16_MIN;
	static volatile uint32_t t62 = 207U;

	t62 = (x301^((x302-x303)<=x304));

	if (t62 != 1473U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = 0;
	int32_t x306 = 9526;
	static int8_t x307 = -9;
	uint64_t x308 = 62002994LLU;
	volatile int32_t t63 = -59;

	t63 = (x305^((x306-x307)<=x308));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x309 = 0;
	int8_t x310 = -1;
	static int8_t x312 = INT8_MIN;

	t64 = (x309^((x310-x311)<=x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = INT32_MIN;
	volatile uint32_t x316 = 16405U;
	volatile int32_t t65 = -1;

	t65 = (x313^((x314-x315)<=x316));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x318 = INT8_MIN;
	uint8_t x319 = 4U;
	int32_t x320 = 9340;

	t66 = (x317^((x318-x319)<=x320));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x322 = -1037LL;
	uint8_t x323 = 6U;
	volatile uint32_t x324 = UINT32_MAX;
	volatile uint64_t t67 = 61344LLU;

	t67 = (x321^((x322-x323)<=x324));

	if (t67 != 15054458632LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -1;
	int16_t x326 = 11412;
	uint16_t x327 = 34U;
	uint64_t x328 = UINT64_MAX;
	int32_t t68 = -141991699;

	t68 = (x325^((x326-x327)<=x328));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = 228857500;
	int32_t x330 = 437613906;
	static uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MAX;

	t69 = (x329^((x330-x331)<=x332));

	if (t69 != 228857501) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = 458557918;
	int64_t x334 = INT64_MIN;
	int8_t x335 = -1;
	static uint16_t x336 = 104U;
	static volatile int32_t t70 = 1377;

	t70 = (x333^((x334-x335)<=x336));

	if (t70 != 458557919) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = 135;
	int64_t x343 = -289774470091LL;
	volatile uint32_t x344 = 53U;
	volatile int32_t t71 = -31075;

	t71 = (x341^((x342-x343)<=x344));

	if (t71 != 135) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = -1;
	volatile int32_t t72 = 20033;

	t72 = (x345^((x346-x347)<=x348));

	if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x353 = 5780425075840026897LLU;
	int8_t x354 = 1;
	int32_t x355 = INT32_MAX;
	volatile int8_t x356 = INT8_MIN;
	volatile uint64_t t73 = 85430806912LLU;

	t73 = (x353^((x354-x355)<=x356));

	if (t73 != 5780425075840026896LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = INT64_MAX;
	int16_t x359 = -6826;
	uint64_t x360 = UINT64_MAX;
	volatile int64_t t74 = -78935666431116LL;

	t74 = (x357^((x358-x359)<=x360));

	if (t74 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x361 = 471U;
	int32_t x362 = 11543;
	int32_t x363 = -1;
	int8_t x364 = 20;
	static int32_t t75 = -1;

	t75 = (x361^((x362-x363)<=x364));

	if (t75 != 471) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x365 = -1LL;
	volatile int8_t x366 = INT8_MIN;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = -12;
	static int64_t t76 = -13LL;

	t76 = (x365^((x366-x367)<=x368));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = -1;
	static uint16_t x372 = 42U;
	volatile int32_t t77 = -3657638;

	t77 = (x369^((x370-x371)<=x372));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	uint32_t x375 = 7393U;
	int8_t x376 = 1;
	static volatile int32_t t78 = -1962;

	t78 = (x373^((x374-x375)<=x376));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x377 = UINT64_MAX;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = -1;
	int32_t x380 = INT32_MIN;
	uint64_t t79 = UINT64_MAX;

	t79 = (x377^((x378-x379)<=x380));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x381 = 0U;
	int64_t x382 = -101351049LL;
	uint8_t x383 = 3U;
	static int64_t x384 = INT64_MIN;

	t80 = (x381^((x382-x383)<=x384));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = -870;
	static volatile int8_t x386 = 0;
	int64_t x388 = -1LL;
	volatile int32_t t81 = -10645009;

	t81 = (x385^((x386-x387)<=x388));

	if (t81 != -870) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x390 = 3;
	static int8_t x391 = INT8_MIN;
	uint32_t x392 = UINT32_MAX;
	uint32_t t82 = 386692578U;

	t82 = (x389^((x390-x391)<=x392));

	if (t82 != 6783210U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x393 = INT64_MIN;
	int64_t x395 = 36263LL;
	int32_t x396 = INT32_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (x393^((x394-x395)<=x396));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x402 = INT64_MIN;
	int64_t x403 = -1LL;
	uint64_t x404 = UINT64_MAX;

	t84 = (x401^((x402-x403)<=x404));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x405 = 4958933807063LL;
	static int8_t x407 = INT8_MAX;
	int64_t t85 = 46751LL;

	t85 = (x405^((x406-x407)<=x408));

	if (t85 != 4958933807063LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = -1;
	int8_t x410 = -1;
	uint32_t x411 = UINT32_MAX;
	static int64_t x412 = INT64_MAX;
	static int32_t t86 = -3;

	t86 = (x409^((x410-x411)<=x412));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x417 = 129486;
	int8_t x418 = 1;
	volatile int64_t x419 = INT64_MAX;
	int64_t x420 = -3267LL;
	int32_t t87 = -514876144;

	t87 = (x417^((x418-x419)<=x420));

	if (t87 != 129487) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x421 = 4U;
	int32_t x424 = -1;
	static volatile int32_t t88 = 22960461;

	t88 = (x421^((x422-x423)<=x424));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x431 = 15841;
	static int64_t x432 = INT64_MIN;
	int32_t t89 = -13;

	t89 = (x429^((x430-x431)<=x432));

	if (t89 != 40521) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = -1;
	static volatile int32_t t90 = 31217643;

	t90 = (x437^((x438-x439)<=x440));

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x441 = -1042343660;
	static volatile int16_t x442 = INT16_MIN;
	uint32_t x443 = 1221658181U;
	int8_t x444 = INT8_MAX;

	t91 = (x441^((x442-x443)<=x444));

	if (t91 != -1042343660) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x445 = 18290407063891LLU;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	uint8_t x448 = UINT8_MAX;
	static uint64_t t92 = 132741LLU;

	t92 = (x445^((x446-x447)<=x448));

	if (t92 != 18290407063891LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x449 = 1494U;
	static int64_t x451 = -1LL;
	int64_t x452 = -1LL;
	volatile int32_t t93 = 26984559;

	t93 = (x449^((x450-x451)<=x452));

	if (t93 != 1495) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x453 = 6527LLU;
	int32_t x454 = INT32_MIN;
	int16_t x455 = -1;
	uint16_t x456 = 1898U;
	uint64_t t94 = 5216291914LLU;

	t94 = (x453^((x454-x455)<=x456));

	if (t94 != 6526LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x457 = 4814006304LLU;
	int16_t x459 = INT16_MAX;
	uint64_t t95 = 26468325555666LLU;

	t95 = (x457^((x458-x459)<=x460));

	if (t95 != 4814006304LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x465 = 9133U;
	int32_t x468 = INT32_MAX;
	int32_t t96 = -9;

	t96 = (x465^((x466-x467)<=x468));

	if (t96 != 9132) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = 15U;
	uint32_t x470 = 1U;
	static volatile int32_t t97 = 41496709;

	t97 = (x469^((x470-x471)<=x472));

	if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = INT16_MIN;
	uint16_t x474 = 2692U;
	int64_t x476 = 10409LL;
	static int32_t t98 = -14708;

	t98 = (x473^((x474-x475)<=x476));

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x477 = INT16_MIN;
	int8_t x478 = 1;
	volatile int64_t x479 = -288805267659458663LL;
	int16_t x480 = 71;

	t99 = (x477^((x478-x479)<=x480));

	if (t99 != -32768) { NG(); } else { ; }
	
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

