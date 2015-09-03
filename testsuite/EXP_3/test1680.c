#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 3005LL;
volatile uint32_t x5 = 35U;
volatile int64_t x6 = -1LL;
static int64_t t1 = -2318LL;
int8_t x20 = INT8_MAX;
uint32_t x23 = 5485U;
int8_t x35 = INT8_MIN;
int64_t x37 = INT64_MIN;
uint16_t x42 = 0U;
uint64_t x45 = 1701428248651943607LLU;
int8_t x52 = INT8_MAX;
int16_t x61 = -2262;
int32_t x63 = INT32_MIN;
volatile int16_t x70 = INT16_MIN;
volatile int64_t x71 = INT64_MIN;
int64_t x73 = INT64_MIN;
int16_t x74 = -1;
int16_t x80 = INT16_MAX;
int32_t x83 = INT32_MAX;
static uint16_t x84 = 1U;
int32_t x85 = -667327;
static volatile int32_t t22 = -129355657;
volatile int64_t x98 = 65594093315701LL;
uint32_t x99 = UINT32_MAX;
static uint64_t x108 = 22105399LLU;
int16_t x110 = INT16_MIN;
volatile int64_t t27 = 550083624031182LL;
int16_t x119 = INT16_MIN;
int64_t x127 = INT64_MIN;
static volatile int32_t t31 = 1044;
int8_t x132 = -61;
static int32_t x135 = 23;
int16_t x138 = INT16_MIN;
volatile int32_t x143 = 12;
uint8_t x147 = UINT8_MAX;
uint16_t x148 = 6309U;
int64_t x149 = INT64_MIN;
int32_t t39 = 62;
volatile int32_t t41 = -795542;
volatile int64_t t42 = -9LL;
static uint64_t x174 = 118098LLU;
volatile uint64_t t43 = 8027LLU;
static volatile uint64_t t45 = 1713LLU;
int64_t x185 = -1LL;
int32_t x191 = -6592;
volatile int8_t x197 = -3;
int64_t x202 = INT64_MIN;
int32_t x206 = INT32_MAX;
volatile int32_t t51 = 57689899;
int64_t t52 = 4LL;
volatile int16_t x213 = INT16_MIN;
uint8_t x216 = 0U;
int8_t x217 = INT8_MIN;
static int8_t x224 = INT8_MIN;
int32_t x226 = -133065;
uint8_t x231 = 15U;
static volatile int16_t x238 = -1;
uint16_t x244 = 1U;
uint64_t x250 = UINT64_MAX;
int64_t x256 = INT64_MIN;
static int16_t x257 = INT16_MAX;
uint32_t x263 = 191002150U;
int8_t x268 = INT8_MAX;
uint16_t x281 = UINT16_MAX;
static int8_t x285 = INT8_MIN;
static int8_t x286 = INT8_MIN;
static int8_t x287 = 23;
int32_t x291 = -1;
uint16_t x297 = 27065U;
static volatile int32_t t74 = -58;
static int32_t x302 = 1533;
uint8_t x307 = UINT8_MAX;
int32_t t76 = -8039;
volatile int16_t x314 = INT16_MAX;
uint64_t x316 = 927542952920189LLU;
uint8_t x318 = 5U;
volatile int8_t x320 = INT8_MIN;
int32_t t79 = -146046;
int16_t x330 = -1;
volatile int16_t x333 = -1;
int16_t x340 = INT16_MIN;
static uint8_t x341 = UINT8_MAX;
int8_t x344 = INT8_MIN;
int64_t t88 = -5044LL;
static uint16_t x358 = 0U;
volatile int32_t t89 = 42131;
int16_t x364 = INT16_MIN;
int32_t x365 = -1;
int32_t x369 = INT32_MIN;
uint8_t x371 = 21U;
static volatile uint64_t t93 = 126303966684222LLU;
uint8_t x378 = 23U;
int16_t x384 = INT16_MIN;
uint64_t x388 = 510085921040LLU;
int64_t x390 = 204LL;
int8_t x395 = -1;
static volatile uint16_t x398 = UINT16_MAX;
int32_t x399 = -1;


void f0(void) {
	uint16_t x1 = 7U;
	int64_t x2 = -1LL;
	static int16_t x3 = INT16_MIN;
	static int16_t x4 = -892;

	t0 = ((x1^x2)*(x3<=x4));

	if (t0 != -8LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 10951U;
	int16_t x8 = -456;

	t1 = ((x5^x6)*(x7<=x8));

	if (t1 != -36LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 50U;
	static volatile int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MIN;
	volatile int64_t t2 = 83070874313LL;

	t2 = ((x9^x10)*(x11<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 1U;
	int8_t x14 = 29;
	static int32_t x15 = INT32_MIN;
	uint8_t x16 = 25U;
	volatile int32_t t3 = 12951850;

	t3 = ((x13^x14)*(x15<=x16));

	if (t3 != 28) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 471650355LLU;
	uint8_t x18 = 2U;
	static int32_t x19 = -3445;
	volatile uint64_t t4 = 14969LLU;

	t4 = ((x17^x18)*(x19<=x20));

	if (t4 != 471650353LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 254139;
	static int8_t x22 = INT8_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -747128244;

	t5 = ((x21^x22)*(x23<=x24));

	if (t5 != 254148) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	uint32_t x26 = 1216113681U;
	int32_t x27 = INT32_MIN;
	volatile uint8_t x28 = 0U;
	volatile uint32_t t6 = 35957229U;

	t6 = ((x25^x26)*(x27<=x28));

	if (t6 != 3078853614U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	uint16_t x30 = 70U;
	int8_t x31 = -1;
	int16_t x32 = 10854;
	static volatile int32_t t7 = -121;

	t7 = ((x29^x30)*(x31<=x32));

	if (t7 != 2147483577) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MIN;
	int8_t x36 = 1;
	static volatile uint64_t t8 = 3895329LLU;

	t8 = ((x33^x34)*(x35<=x36));

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = INT8_MIN;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MAX;
	volatile int64_t t9 = 1LL;

	t9 = ((x37^x38)*(x39<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int32_t x43 = -110;
	volatile int32_t x44 = INT32_MAX;
	uint64_t t10 = UINT64_MAX;

	t10 = ((x41^x42)*(x43<=x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	uint16_t x47 = 31U;
	uint16_t x48 = 12U;
	volatile uint64_t t11 = 126210297644107322LLU;

	t11 = ((x45^x46)*(x47<=x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = 229701472U;
	uint32_t t12 = 140294U;

	t12 = ((x49^x50)*(x51<=x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 0U;
	volatile int64_t x54 = -1LL;
	volatile uint8_t x55 = 117U;
	uint8_t x56 = 0U;
	static volatile int64_t t13 = 178417745961237LL;

	t13 = ((x53^x54)*(x55<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 123966U;
	int8_t x58 = -1;
	int16_t x59 = -1;
	uint32_t x60 = UINT32_MAX;
	uint32_t t14 = 121129361U;

	t14 = ((x57^x58)*(x59<=x60));

	if (t14 != 4294843329U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 27551089;

	t15 = ((x61^x62)*(x63<=x64));

	if (t15 != -2147481387) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 30;
	int64_t x66 = INT64_MIN;
	volatile uint16_t x67 = 30U;
	int64_t x68 = -14LL;
	int64_t t16 = -884785096938LL;

	t16 = ((x65^x66)*(x67<=x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 344647435U;
	int8_t x72 = 0;
	uint32_t t17 = 666U;

	t17 = ((x69^x70)*(x71<=x72));

	if (t17 != 3950339851U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x75 = 3239796LLU;
	uint64_t x76 = 422571101126LLU;
	volatile int64_t t18 = INT64_MAX;

	t18 = ((x73^x74)*(x75<=x76));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = INT64_MIN;
	int64_t x78 = -1213286881023404LL;
	int64_t x79 = 118756449350LL;
	int64_t t19 = 171053786439716LL;

	t19 = ((x77^x78)*(x79<=x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	uint64_t x82 = 814489665LLU;
	volatile uint64_t t20 = 11702294LLU;

	t20 = ((x81^x82)*(x83<=x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x86 = UINT16_MAX;
	int64_t x87 = INT64_MIN;
	static volatile int8_t x88 = 56;
	volatile int32_t t21 = -808332295;

	t21 = ((x85^x86)*(x87<=x88));

	if (t21 != -708930) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 106U;
	static int32_t x90 = 872631154;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -1LL;

	t22 = ((x89^x90)*(x91<=x92));

	if (t22 != 872631064) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	uint64_t x94 = 51661911LLU;
	uint32_t x95 = 867630U;
	int8_t x96 = 47;
	volatile uint64_t t23 = 1LLU;

	t23 = ((x93^x94)*(x95<=x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x100 = 4U;
	int64_t t24 = -1LL;

	t24 = ((x97^x98)*(x99<=x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	volatile uint8_t x102 = 3U;
	volatile int64_t x103 = -1LL;
	int8_t x104 = INT8_MAX;
	int64_t t25 = -3713298414286LL;

	t25 = ((x101^x102)*(x103<=x104));

	if (t25 != -4LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = -165;
	static int64_t x107 = -20049888612LL;
	int32_t t26 = -17780;

	t26 = ((x105^x106)*(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x111 = -1LL;
	uint64_t x112 = 28996LLU;

	t27 = ((x109^x110)*(x111<=x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	int64_t x114 = -1LL;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MIN;
	static volatile uint64_t t28 = 1LLU;

	t28 = ((x113^x114)*(x115<=x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = UINT8_MAX;
	static volatile int16_t x118 = 156;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 1;

	t29 = ((x117^x118)*(x119<=x120));

	if (t29 != 99) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1728031216143LLU;
	int8_t x122 = INT8_MIN;
	int16_t x123 = 3;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = 35030LLU;

	t30 = ((x121^x122)*(x123<=x124));

	if (t30 != 18446742345678335375LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -470168;
	int32_t x126 = -1;
	int16_t x128 = INT16_MIN;

	t31 = ((x125^x126)*(x127<=x128));

	if (t31 != 470167) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = 3;
	int8_t x130 = 1;
	static uint64_t x131 = 44588650LLU;
	volatile int32_t t32 = -3026171;

	t32 = ((x129^x130)*(x131<=x132));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static uint32_t x134 = 36440532U;
	static volatile uint32_t x136 = 434781U;
	uint32_t t33 = 706U;

	t33 = ((x133^x134)*(x135<=x136));

	if (t33 != 36440491U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -2515349379099446LL;
	int64_t x139 = INT64_MIN;
	int8_t x140 = 1;
	volatile int64_t t34 = -26689901734770LL;

	t34 = ((x137^x138)*(x139<=x140));

	if (t34 != 2515349379110090LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MAX;
	int8_t x142 = 1;
	int32_t x144 = -4410606;
	int32_t t35 = 1;

	t35 = ((x141^x142)*(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 127058383937162267LLU;
	static int64_t x146 = -114897979532184450LL;
	uint64_t t36 = 2755603114554LLU;

	t36 = ((x145^x146)*(x147<=x148));

	if (t36 != 18421035327874250853LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	int64_t x152 = -1LL;
	int64_t t37 = INT64_MAX;

	t37 = ((x149^x150)*(x151<=x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 578272366958670LLU;
	int8_t x154 = INT8_MAX;
	static volatile uint16_t x155 = 3U;
	int64_t x156 = INT64_MIN;
	uint64_t t38 = 47823808823964LLU;

	t38 = ((x153^x154)*(x155<=x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MIN;
	static volatile int8_t x159 = -1;
	int8_t x160 = -3;

	t39 = ((x157^x158)*(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	int32_t x163 = -456;
	volatile int16_t x164 = 194;
	volatile int32_t t40 = -317;

	t40 = ((x161^x162)*(x163<=x164));

	if (t40 != -32641) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = 0;
	int32_t x167 = -10542712;
	uint64_t x168 = 190981419963479LLU;

	t41 = ((x165^x166)*(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	int8_t x170 = 1;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;

	t42 = ((x169^x170)*(x171<=x172));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -7;
	int64_t x175 = -1LL;
	static uint32_t x176 = 45200U;

	t43 = ((x173^x174)*(x175<=x176));

	if (t43 != 18446744073709433515LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	static uint8_t x178 = 28U;
	int8_t x179 = -22;
	volatile uint16_t x180 = UINT16_MAX;
	static int64_t t44 = -39366800LL;

	t44 = ((x177^x178)*(x179<=x180));

	if (t44 != -29LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int8_t x182 = 1;
	static uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;

	t45 = ((x181^x182)*(x183<=x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	static int64_t x187 = INT64_MAX;
	uint16_t x188 = 1207U;
	volatile int64_t t46 = -10874240554LL;

	t46 = ((x185^x186)*(x187<=x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 7213929317028874882LLU;
	uint32_t x190 = UINT32_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = 170118728469LLU;

	t47 = ((x189^x190)*(x191<=x192));

	if (t47 != 7213929319972189565LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int8_t x194 = INT8_MAX;
	int8_t x195 = 1;
	uint16_t x196 = 754U;
	volatile int64_t t48 = 534092864LL;

	t48 = ((x193^x194)*(x195<=x196));

	if (t48 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x198 = 306509U;
	static uint16_t x199 = UINT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile uint32_t t49 = 2U;

	t49 = ((x197^x198)*(x199<=x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t50 = 443LL;

	t50 = ((x201^x202)*(x203<=x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 5;
	uint16_t x207 = 32591U;
	int32_t x208 = -72;

	t51 = ((x205^x206)*(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	uint16_t x211 = 4187U;
	static int8_t x212 = INT8_MIN;

	t52 = ((x209^x210)*(x211<=x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x214 = INT64_MAX;
	int8_t x215 = -1;
	int64_t t53 = 27170LL;

	t53 = ((x213^x214)*(x215<=x216));

	if (t53 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x218 = 5U;
	int64_t x219 = 7111509LL;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 28830372;

	t54 = ((x217^x218)*(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MIN;
	volatile uint16_t x223 = 114U;
	volatile int32_t t55 = -45970237;

	t55 = ((x221^x222)*(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 7629U;
	static int8_t x227 = 21;
	int32_t x228 = INT32_MIN;
	int32_t t56 = 840929210;

	t56 = ((x225^x226)*(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 3U;
	static volatile int16_t x230 = 43;
	uint64_t x232 = 3092LLU;
	static int32_t t57 = -11;

	t57 = ((x229^x230)*(x231<=x232));

	if (t57 != 40) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 581667;
	static uint8_t x234 = 3U;
	int32_t x235 = INT32_MAX;
	static int8_t x236 = 0;
	int32_t t58 = -28456;

	t58 = ((x233^x234)*(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x239 = 977U;
	int16_t x240 = INT16_MIN;
	static int64_t t59 = 2LL;

	t59 = ((x237^x238)*(x239<=x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MIN;
	static int16_t x243 = 1009;
	int64_t t60 = 48478080LL;

	t60 = ((x241^x242)*(x243<=x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	static uint32_t x246 = 202U;
	int64_t x247 = INT64_MIN;
	static int16_t x248 = INT16_MIN;
	uint32_t t61 = 22466U;

	t61 = ((x245^x246)*(x247<=x248));

	if (t61 != 53U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	uint16_t x251 = 26756U;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t62 = 1639120LLU;

	t62 = ((x249^x250)*(x251<=x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 397346287340917LLU;
	static int8_t x254 = 8;
	int64_t x255 = -1LL;
	volatile uint64_t t63 = 13524589LLU;

	t63 = ((x253^x254)*(x255<=x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MAX;
	static uint8_t x260 = 0U;
	int64_t t64 = -65462650526LL;

	t64 = ((x257^x258)*(x259<=x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 78U;
	uint64_t x262 = 205018LLU;
	int16_t x264 = -1;
	volatile uint64_t t65 = 15657060494614830LLU;

	t65 = ((x261^x262)*(x263<=x264));

	if (t65 != 204948LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	volatile int32_t x266 = 479;
	static int64_t x267 = -3617LL;
	int32_t t66 = 7578;

	t66 = ((x265^x266)*(x267<=x268));

	if (t66 != -2147483169) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = -191;
	int32_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	uint32_t x272 = 23059051U;
	int32_t t67 = -32546630;

	t67 = ((x269^x270)*(x271<=x272));

	if (t67 != 190) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	volatile int8_t x275 = INT8_MIN;
	volatile int8_t x276 = -1;
	int32_t t68 = -15537;

	t68 = ((x273^x274)*(x275<=x276));

	if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	int16_t x278 = -36;
	volatile int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MAX;
	volatile int64_t t69 = 3LL;

	t69 = ((x277^x278)*(x279<=x280));

	if (t69 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = -1;
	static volatile uint16_t x284 = 47U;
	uint32_t t70 = 1605540U;

	t70 = ((x281^x282)*(x283<=x284));

	if (t70 != 4294901760U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x288 = -1;
	int32_t t71 = 1640233;

	t71 = ((x285^x286)*(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 850;
	int64_t x290 = -473704368398755605LL;
	int64_t x292 = 324170305052331LL;
	int64_t t72 = 300441235LL;

	t72 = ((x289^x290)*(x291<=x292));

	if (t72 != -473704368398754887LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -39;
	int16_t x294 = INT16_MAX;
	int32_t x295 = -82278;
	uint16_t x296 = 282U;
	volatile int32_t t73 = 5;

	t73 = ((x293^x294)*(x295<=x296));

	if (t73 != -32730) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = 3;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;

	t74 = ((x297^x298)*(x299<=x300));

	if (t74 != 27066) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 8834203829LLU;
	int8_t x303 = INT8_MIN;
	int32_t x304 = 194;
	volatile uint64_t t75 = 1LLU;

	t75 = ((x301^x302)*(x303<=x304));

	if (t75 != 8834205000LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	static int32_t x306 = INT32_MAX;
	static int32_t x308 = INT32_MAX;

	t76 = ((x305^x306)*(x307<=x308));

	if (t76 != 2147450880) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	static volatile uint8_t x310 = UINT8_MAX;
	static volatile uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1LL;
	volatile int32_t t77 = -143956670;

	t77 = ((x309^x310)*(x311<=x312));

	if (t77 != 32512) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int32_t x315 = 18;
	int32_t t78 = -1814190;

	t78 = ((x313^x314)*(x315<=x316));

	if (t78 != 2147450880) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MAX;
	int64_t x319 = INT64_MAX;

	t79 = ((x317^x318)*(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	static uint8_t x322 = 15U;
	volatile int16_t x323 = 0;
	uint16_t x324 = 14U;
	static volatile int32_t t80 = 1;

	t80 = ((x321^x322)*(x323<=x324));

	if (t80 != 65520) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 249446;
	int64_t x326 = INT64_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t81 = 1345532453LL;

	t81 = ((x325^x326)*(x327<=x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = 1U;
	static volatile int32_t t82 = -43716;

	t82 = ((x329^x330)*(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = 13;
	int64_t x335 = -347LL;
	int8_t x336 = INT8_MAX;
	static volatile int32_t t83 = 202362;

	t83 = ((x333^x334)*(x335<=x336));

	if (t83 != -14) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int32_t x338 = INT32_MAX;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t t84 = -3;

	t84 = ((x337^x338)*(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	int64_t x343 = 103929329849027LL;
	volatile int64_t t85 = -1092995953791LL;

	t85 = ((x341^x342)*(x343<=x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = 7408762126LLU;
	volatile int16_t x346 = INT16_MIN;
	int32_t x347 = -14;
	int32_t x348 = INT32_MIN;
	volatile uint64_t t86 = 1692LLU;

	t86 = ((x345^x346)*(x347<=x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static volatile int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint32_t t87 = 2U;

	t87 = ((x349^x350)*(x351<=x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	volatile int64_t x354 = 41050254LL;
	int32_t x355 = INT32_MAX;
	volatile int64_t x356 = INT64_MIN;

	t88 = ((x353^x354)*(x355<=x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	volatile int16_t x359 = INT16_MAX;
	uint32_t x360 = 465194U;

	t89 = ((x357^x358)*(x359<=x360));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 30U;
	volatile uint32_t x362 = UINT32_MAX;
	volatile int16_t x363 = INT16_MIN;
	uint32_t t90 = 7022366U;

	t90 = ((x361^x362)*(x363<=x364));

	if (t90 != 4294967265U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	volatile int32_t x368 = INT32_MIN;
	int32_t t91 = 883;

	t91 = ((x365^x366)*(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = 62U;
	int16_t x372 = 2;
	volatile int32_t t92 = 3;

	t92 = ((x369^x370)*(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	volatile uint64_t x374 = 36099LLU;
	volatile int8_t x375 = INT8_MIN;
	int16_t x376 = -2288;

	t93 = ((x373^x374)*(x375<=x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MAX;
	volatile int32_t t94 = -648000973;

	t94 = ((x377^x378)*(x379<=x380));

	if (t94 != 32744) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = UINT8_MAX;
	volatile int32_t x382 = -568854241;
	uint32_t x383 = 106223464U;
	int32_t t95 = 13820117;

	t95 = ((x381^x382)*(x383<=x384));

	if (t95 != -568854048) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 7558331925LLU;
	int32_t x386 = INT32_MAX;
	static uint8_t x387 = 4U;
	uint64_t t96 = 1965579895044LLU;

	t96 = ((x385^x386)*(x387<=x388));

	if (t96 != 7474053610LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 1334269195587036723LLU;
	static volatile int32_t x391 = INT32_MIN;
	uint8_t x392 = UINT8_MAX;
	static volatile uint64_t t97 = 2LLU;

	t97 = ((x389^x390)*(x391<=x392));

	if (t97 != 1334269195587036927LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -7;
	volatile int32_t x394 = 332798;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -848681;

	t98 = ((x393^x394)*(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x400 = -1;
	int32_t t99 = -33546;

	t99 = ((x397^x398)*(x399<=x400));

	if (t99 != -32769) { NG(); } else { ; }
	
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

