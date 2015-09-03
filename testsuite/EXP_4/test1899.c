#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = 1141759237844382053LLU;
static int64_t x8 = -74176454217794953LL;
uint32_t x9 = 124186U;
static int64_t t2 = 1436LL;
int16_t x14 = -40;
uint16_t x18 = UINT16_MAX;
int8_t x26 = -1;
static int8_t x29 = 18;
int8_t x31 = INT8_MIN;
static int16_t x32 = INT16_MIN;
uint64_t t9 = 312899LLU;
int32_t t10 = 1;
int16_t x53 = INT16_MAX;
int32_t x58 = -1;
uint64_t x60 = 516890663580600LLU;
static int32_t x62 = 6;
int64_t x64 = INT64_MAX;
static int64_t t15 = 667376LL;
int64_t x72 = 235092688283210LL;
uint64_t t17 = 69497972365305390LLU;
int16_t x77 = INT16_MIN;
uint64_t t19 = 3243553LLU;
volatile uint32_t x85 = 181U;
int8_t x88 = INT8_MAX;
static int64_t x97 = INT64_MIN;
static uint8_t x103 = 4U;
static int8_t x105 = INT8_MAX;
volatile int64_t x107 = 75773053722158LL;
volatile int64_t t26 = -807847LL;
uint32_t x112 = 792U;
static int32_t x115 = 112450;
int32_t x116 = INT32_MAX;
int16_t x118 = -1;
int64_t x127 = 1037960217893LL;
volatile int32_t x139 = 207;
int64_t x140 = -1LL;
int64_t t34 = -6672LL;
uint32_t t35 = 95368094U;
int16_t x145 = INT16_MIN;
volatile int64_t t36 = 3840858578LL;
int16_t x152 = INT16_MIN;
uint16_t x153 = 12505U;
uint64_t x155 = UINT64_MAX;
int16_t x156 = -1;
volatile int64_t x161 = -1LL;
int32_t x162 = 10821867;
static int16_t x167 = INT16_MIN;
int32_t t40 = 1;
static int64_t x175 = -1LL;
volatile uint32_t x178 = UINT32_MAX;
static int32_t x180 = INT32_MIN;
int64_t x181 = INT64_MIN;
int8_t x183 = INT8_MIN;
int8_t x186 = -39;
volatile int16_t x191 = 2543;
uint64_t x192 = 7514427625672LLU;
static int32_t x193 = -8376627;
int64_t x196 = INT64_MAX;
int8_t x201 = INT8_MAX;
uint16_t x209 = 420U;
uint32_t x214 = 214843015U;
static int16_t x221 = INT16_MIN;
volatile uint32_t t55 = 997U;
int64_t x234 = INT64_MAX;
uint8_t x237 = 23U;
int32_t x245 = -1;
int16_t x258 = -1;
volatile int16_t x262 = INT16_MIN;
volatile int64_t t64 = 463909854LL;
static uint8_t x270 = 28U;
int8_t x272 = -1;
int32_t t65 = -2804253;
uint8_t x280 = 6U;
int32_t x282 = -2882039;
static int64_t x284 = INT64_MAX;
volatile int16_t x287 = -1268;
int8_t x293 = -20;
int8_t x303 = INT8_MIN;
int64_t x309 = INT64_MAX;
int32_t x311 = INT32_MIN;
int16_t x312 = INT16_MAX;
volatile uint32_t x318 = UINT32_MAX;
int16_t x320 = INT16_MIN;
volatile int64_t t78 = 63490172223182654LL;
static uint16_t x327 = UINT16_MAX;
static int8_t x332 = INT8_MIN;
volatile int32_t t80 = 177299;
int32_t x334 = 13;
int16_t x339 = INT16_MIN;
int64_t x345 = INT64_MIN;
volatile int64_t t83 = INT64_MIN;
static uint8_t x350 = 3U;
int16_t x355 = 32;
int32_t t85 = 29671961;
int8_t x361 = INT8_MAX;
uint8_t x365 = 0U;
int8_t x367 = INT8_MAX;
static int32_t x368 = -1;
int64_t x376 = INT64_MIN;
int16_t x381 = INT16_MIN;
uint32_t x386 = UINT32_MAX;
uint16_t x397 = UINT16_MAX;
int8_t x399 = -1;
int64_t x405 = -1LL;
volatile int8_t x406 = INT8_MIN;
uint32_t x409 = UINT32_MAX;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	volatile int8_t x1 = 13;
	uint32_t x2 = 1727439U;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 1152864173U;

	t0 = (x1+(x2/(x3|x4)));

	if (t0 != 13U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	static int64_t x6 = -947LL;
	volatile uint64_t t1 = 249LLU;

	t1 = (x5+(x6/(x7|x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 0LL;
	uint32_t x11 = 27045U;
	static uint8_t x12 = 10U;

	t2 = (x9+(x10/(x11|x12)));

	if (t2 != 124186LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x15 = -1;
	uint32_t x16 = 90488U;
	static uint32_t t3 = UINT32_MAX;

	t3 = (x13+(x14/(x15|x16)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int32_t x19 = 3;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -7107645;

	t4 = (x17+(x18/(x19|x20)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 12134U;
	uint8_t x22 = 8U;
	volatile uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 60;

	t5 = (x21+(x22/(x23|x24)));

	if (t5 != 12126) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static volatile int8_t x27 = INT8_MAX;
	static uint8_t x28 = 107U;
	int32_t t6 = 475879;

	t6 = (x25+(x26/(x27|x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	volatile int32_t t7 = -25206786;

	t7 = (x29+(x30/(x31|x32)));

	if (t7 != 19) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	int32_t x34 = 60960897;
	int32_t x35 = -371333524;
	int64_t x36 = INT64_MIN;
	static uint64_t t8 = UINT64_MAX;

	t8 = (x33+(x34/(x35|x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 2106U;
	int32_t x38 = 358;
	volatile int8_t x39 = INT8_MIN;
	static uint64_t x40 = UINT64_MAX;

	t9 = (x37+(x38/(x39|x40)));

	if (t9 != 2106LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int32_t x42 = 797175857;
	uint8_t x43 = 22U;
	static uint8_t x44 = 1U;

	t10 = (x41+(x42/(x43|x44)));

	if (t10 != 34659818) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -833LL;
	int64_t x48 = 7849019002498704LL;
	volatile int64_t t11 = -84357355LL;

	t11 = (x45+(x46/(x47|x48)));

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 3913LL;
	uint16_t x50 = UINT16_MAX;
	volatile int32_t x51 = 233373;
	uint64_t x52 = 968075394103294LLU;
	uint64_t t12 = 8309LLU;

	t12 = (x49+(x50/(x51|x52)));

	if (t12 != 3913LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 1U;
	int32_t x55 = 6796682;
	int64_t x56 = 1LL;
	static int64_t t13 = 351397LL;

	t13 = (x53+(x54/(x55|x56)));

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 222U;
	volatile int32_t x59 = INT32_MIN;
	static volatile uint64_t t14 = 1971884660791LLU;

	t14 = (x57+(x58/(x59|x60)));

	if (t14 != 223LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -97235;
	volatile int64_t x63 = -1LL;

	t15 = (x61+(x62/(x63|x64)));

	if (t15 != -97241LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	static uint16_t x66 = 5U;
	int16_t x67 = -1;
	int32_t x68 = 7417;
	volatile int32_t t16 = 320538;

	t16 = (x65+(x66/(x67|x68)));

	if (t16 != 2147483642) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static volatile uint64_t x70 = UINT64_MAX;
	volatile int32_t x71 = 1977;

	t17 = (x69+(x70/(x71|x72)));

	if (t17 != 78720LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 5783U;
	static uint64_t x74 = 3060256603390974LLU;
	int64_t x75 = 62156928LL;
	static int8_t x76 = 7;
	uint64_t t18 = 16LLU;

	t18 = (x73+(x74/(x75|x76)));

	if (t18 != 49240137LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = UINT64_MAX;
	static uint32_t x79 = 2574283U;
	static volatile uint16_t x80 = UINT16_MAX;

	t19 = (x77+(x78/(x79|x80)));

	if (t19 != 7036877069353LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -1;
	volatile int32_t x82 = 550220;
	int32_t x83 = INT32_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 317857;

	t20 = (x81+(x82/(x83|x84)));

	if (t20 != -550221) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MAX;
	volatile int16_t x87 = INT16_MIN;
	uint32_t t21 = 33U;

	t21 = (x85+(x86/(x87|x88)));

	if (t21 != 180U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	uint16_t x90 = 14U;
	uint8_t x91 = UINT8_MAX;
	static uint32_t x92 = 132985U;
	uint32_t t22 = 154U;

	t22 = (x89+(x90/(x91|x92)));

	if (t22 != 127U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MAX;
	uint8_t x94 = 7U;
	int32_t x95 = 1;
	int64_t x96 = -1LL;
	int64_t t23 = -26338927LL;

	t23 = (x93+(x94/(x95|x96)));

	if (t23 != 2147483640LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -37519395;
	volatile int32_t x99 = -1;
	static int32_t x100 = -1;
	int64_t t24 = 136288504400898LL;

	t24 = (x97+(x98/(x99|x100)));

	if (t24 != -9223372036817256413LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 41022523U;
	static uint32_t x102 = 0U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 805LL;

	t25 = (x101+(x102/(x103|x104)));

	if (t25 != 41022523LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	volatile uint8_t x108 = UINT8_MAX;

	t26 = (x105+(x106/(x107|x108)));

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 225395LL;
	int16_t x110 = INT16_MAX;
	volatile int16_t x111 = -35;
	volatile int64_t t27 = -2804570LL;

	t27 = (x109+(x110/(x111|x112)));

	if (t27 != 225395LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = UINT8_MAX;
	int64_t x114 = -215203445LL;
	int64_t t28 = 397336185300713LL;

	t28 = (x113+(x114/(x115|x116)));

	if (t28 != 255LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 1U;
	int64_t x119 = INT64_MAX;
	volatile int16_t x120 = -1;
	volatile int64_t t29 = -7354LL;

	t29 = (x117+(x118/(x119|x120)));

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 0U;
	int8_t x123 = 9;
	static uint64_t x124 = 5287LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121+(x122/(x123|x124)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 116680977U;
	int16_t x126 = -2012;
	int8_t x128 = -1;
	int64_t t31 = -74199LL;

	t31 = (x125+(x126/(x127|x128)));

	if (t31 != 116682989LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 208065LLU;
	volatile uint32_t x130 = 870U;
	uint8_t x131 = 3U;
	static uint8_t x132 = UINT8_MAX;
	volatile uint64_t t32 = 4287815356166662LLU;

	t32 = (x129+(x130/(x131|x132)));

	if (t32 != 208068LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x134 = 32U;
	uint8_t x135 = 3U;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t33 = 5820676U;

	t33 = (x133+(x134/(x135|x136)));

	if (t33 != 4294934528U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = 5;
	static int8_t x138 = INT8_MIN;

	t34 = (x137+(x138/(x139|x140)));

	if (t34 != 133LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 1U;
	int16_t x142 = -383;
	uint8_t x143 = 0U;
	static int32_t x144 = -1;

	t35 = (x141+(x142/(x143|x144)));

	if (t35 != 384U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x146 = -1LL;
	volatile uint16_t x147 = UINT16_MAX;
	static volatile int8_t x148 = INT8_MAX;

	t36 = (x145+(x146/(x147|x148)));

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -9;
	uint32_t x150 = 3689U;
	int64_t x151 = INT64_MAX;
	volatile int64_t t37 = 2675296LL;

	t37 = (x149+(x150/(x151|x152)));

	if (t37 != -3698LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MAX;
	volatile uint64_t t38 = 324583376564LLU;

	t38 = (x153+(x154/(x155|x156)));

	if (t38 != 12505LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x163 = -1LL;
	uint16_t x164 = 36U;
	int64_t t39 = 297LL;

	t39 = (x161+(x162/(x163|x164)));

	if (t39 != -10821868LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 3915;
	int16_t x166 = 5;
	uint16_t x168 = UINT16_MAX;

	t40 = (x165+(x166/(x167|x168)));

	if (t40 != 3910) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	volatile uint64_t x170 = 149846927485041101LLU;
	static uint32_t x171 = 0U;
	int64_t x172 = -74LL;
	volatile uint64_t t41 = 6981LLU;

	t41 = (x169+(x170/(x171|x172)));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 444U;
	uint16_t x174 = UINT16_MAX;
	int16_t x176 = INT16_MIN;
	int64_t t42 = -436110340476121LL;

	t42 = (x173+(x174/(x175|x176)));

	if (t42 != -65091LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x177 = 27312U;
	int64_t x179 = INT64_MIN;
	int64_t t43 = 15641LL;

	t43 = (x177+(x178/(x179|x180)));

	if (t43 != 27311LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x182 = UINT64_MAX;
	uint64_t x184 = 226220798LLU;
	volatile uint64_t t44 = 152360706LLU;

	t44 = (x181+(x182/(x183|x184)));

	if (t44 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x185 = 61U;
	int8_t x187 = INT8_MAX;
	int16_t x188 = -1;
	static volatile int32_t t45 = 645947;

	t45 = (x185+(x186/(x187|x188)));

	if (t45 != 100) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MIN;
	uint64_t t46 = 12LLU;

	t46 = (x189+(x190/(x191|x192)));

	if (t46 != 2520378LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x194 = -20;
	int8_t x195 = INT8_MIN;
	int64_t t47 = 71LL;

	t47 = (x193+(x194/(x195|x196)));

	if (t47 != -8376607LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x202 = -1;
	uint8_t x203 = 6U;
	int8_t x204 = -1;
	static volatile int32_t t48 = -312812983;

	t48 = (x201+(x202/(x203|x204)));

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MAX;
	uint64_t x207 = 242298956575LLU;
	uint32_t x208 = 180038U;
	uint64_t t49 = 92860708018LLU;

	t49 = (x205+(x206/(x207|x208)));

	if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x210 = 694U;
	static uint64_t x211 = UINT64_MAX;
	static uint32_t x212 = 258096U;
	uint64_t t50 = 623813994368028LLU;

	t50 = (x209+(x210/(x211|x212)));

	if (t50 != 420LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MAX;
	volatile uint32_t t51 = 21475U;

	t51 = (x213+(x214/(x215|x216)));

	if (t51 != 255U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = UINT32_MAX;
	uint32_t t52 = 856381524U;

	t52 = (x217+(x218/(x219|x220)));

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x222 = INT32_MIN;
	volatile int16_t x223 = INT16_MAX;
	int64_t x224 = 1971898LL;
	volatile int64_t t53 = 260277492713LL;

	t53 = (x221+(x222/(x223|x224)));

	if (t53 != -33842LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	volatile uint8_t x227 = 0U;
	uint32_t x228 = 10499U;
	volatile uint32_t t54 = 12U;

	t54 = (x225+(x226/(x227|x228)));

	if (t54 != 409082U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x229 = INT8_MIN;
	static volatile uint8_t x230 = 68U;
	volatile uint32_t x231 = UINT32_MAX;
	volatile int8_t x232 = 38;

	t55 = (x229+(x230/(x231|x232)));

	if (t55 != 4294967168U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 29U;
	uint64_t x235 = 1043253076LLU;
	int8_t x236 = 0;
	volatile uint64_t t56 = 26447474474857999LLU;

	t56 = (x233+(x234/(x235|x236)));

	if (t56 != 8840972798LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = -1LL;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = 129316316169872LLU;
	volatile uint64_t t57 = 119210178699LLU;

	t57 = (x237+(x238/(x239|x240)));

	if (t57 != 24LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int32_t x242 = INT32_MAX;
	int64_t x243 = INT64_MAX;
	uint32_t x244 = 1499U;
	int64_t t58 = 1281602016525572048LL;

	t58 = (x241+(x242/(x243|x244)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = 459668759598869702LL;
	int64_t x247 = INT64_MIN;
	static volatile uint8_t x248 = 11U;
	volatile int64_t t59 = -8456809352579567LL;

	t59 = (x245+(x246/(x247|x248)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 1U;
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	static int32_t x252 = 54;
	int32_t t60 = 57523;

	t60 = (x249+(x250/(x251|x252)));

	if (t60 != 443) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 7U;
	int64_t x254 = 3911036954614264LL;
	int32_t x255 = -71551;
	volatile uint16_t x256 = UINT16_MAX;
	int64_t t61 = 216029527941316330LL;

	t61 = (x253+(x254/(x255|x256)));

	if (t61 != -59676777303LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MAX;
	uint64_t t62 = 9041557246927LLU;

	t62 = (x257+(x258/(x259|x260)));

	if (t62 != 32768LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	static int64_t x263 = 7055LL;
	int32_t x264 = INT32_MIN;
	volatile int64_t t63 = 2LL;

	t63 = (x261+(x262/(x263|x264)));

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = -1;
	static int8_t x266 = -1;
	static int64_t x267 = 50LL;
	uint32_t x268 = UINT32_MAX;

	t64 = (x265+(x266/(x267|x268)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	static int32_t x271 = INT32_MAX;

	t65 = (x269+(x270/(x271|x272)));

	if (t65 != -156) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 46U;
	volatile int8_t x274 = INT8_MAX;
	static uint8_t x275 = 1U;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t66 = -14807;

	t66 = (x273+(x274/(x275|x276)));

	if (t66 != 46) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = 4169516;
	int32_t x278 = 7206;
	uint16_t x279 = 1U;
	volatile int32_t t67 = -470112346;

	t67 = (x277+(x278/(x279|x280)));

	if (t67 != 4170545) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = -828640LL;
	int64_t t68 = -934271316320LL;

	t68 = (x281+(x282/(x283|x284)));

	if (t68 != 2849271LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	volatile int32_t t69 = 3247350;

	t69 = (x285+(x286/(x287|x288)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 0;
	static int8_t x290 = -1;
	uint16_t x291 = 2U;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t70 = 11507;

	t70 = (x289+(x290/(x291|x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x294 = INT16_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	int8_t x296 = 0;
	int32_t t71 = -874254;

	t71 = (x293+(x294/(x295|x296)));

	if (t71 != -20) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -21;
	volatile int8_t x298 = -1;
	int64_t x299 = INT64_MAX;
	int32_t x300 = 2;
	int64_t t72 = 105459813382095LL;

	t72 = (x297+(x298/(x299|x300)));

	if (t72 != -21LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = -476;
	static int8_t x302 = -14;
	int8_t x304 = -6;
	int32_t t73 = -1112269;

	t73 = (x301+(x302/(x303|x304)));

	if (t73 != -474) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = -3;
	volatile int64_t x306 = INT64_MAX;
	volatile uint32_t x307 = UINT32_MAX;
	static uint16_t x308 = 10U;
	static int64_t t74 = 234453LL;

	t74 = (x305+(x306/(x307|x308)));

	if (t74 != 2147483645LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x310 = 12083U;
	static volatile int64_t t75 = INT64_MAX;

	t75 = (x309+(x310/(x311|x312)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = INT16_MIN;
	static volatile uint64_t t76 = 895425147684626LLU;

	t76 = (x313+(x314/(x315|x316)));

	if (t76 != 128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x317 = 14U;
	int8_t x319 = -1;
	volatile uint32_t t77 = 199507661U;

	t77 = (x317+(x318/(x319|x320)));

	if (t77 != 15U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -5LL;
	int64_t x322 = 246734154594LL;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = INT8_MIN;

	t78 = (x321+(x322/(x323|x324)));

	if (t78 != -246734154599LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x325 = 2U;
	int32_t x326 = INT32_MIN;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t79 = 195LLU;

	t79 = (x325+(x326/(x327|x328)));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x329 = 5U;
	int16_t x330 = -1;
	uint8_t x331 = 31U;

	t80 = (x329+(x330/(x331|x332)));

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -437;
	static int32_t x335 = 35080896;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t81 = 59679;

	t81 = (x333+(x334/(x335|x336)));

	if (t81 != -437) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MAX;
	static int32_t x338 = 38743;
	int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 2;

	t82 = (x337+(x338/(x339|x340)));

	if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x346 = 7U;
	int32_t x347 = -36885838;
	int32_t x348 = INT32_MIN;

	t83 = (x345+(x346/(x347|x348)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MAX;
	uint32_t x351 = 31958776U;
	int8_t x352 = 0;
	uint32_t t84 = 1736491271U;

	t84 = (x349+(x350/(x351|x352)));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	int32_t x354 = INT32_MIN;
	uint16_t x356 = 12U;

	t85 = (x353+(x354/(x355|x356)));

	if (t85 != -48806447) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = 2;
	static volatile uint32_t x358 = 3224306U;
	volatile int64_t x359 = -1LL;
	int32_t x360 = -5;
	volatile int64_t t86 = -101LL;

	t86 = (x357+(x358/(x359|x360)));

	if (t86 != -3224304LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x362 = INT64_MIN;
	int16_t x363 = 0;
	int16_t x364 = INT16_MIN;
	int64_t t87 = -221838265511946493LL;

	t87 = (x361+(x362/(x363|x364)));

	if (t87 != 281474976710783LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x366 = 356028U;
	volatile uint32_t t88 = 245U;

	t88 = (x365+(x366/(x367|x368)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 22U;
	int16_t x370 = INT16_MIN;
	static int64_t x371 = -440778555802LL;
	static int64_t x372 = 1258470541094614LL;
	static int64_t t89 = -3445801008LL;

	t89 = (x369+(x370/(x371|x372)));

	if (t89 != 22LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MAX;
	volatile int64_t t90 = -2388357293LL;

	t90 = (x373+(x374/(x375|x376)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = -1;
	static int64_t x379 = 101738137LL;
	int8_t x380 = INT8_MAX;
	volatile int64_t t91 = 64461596LL;

	t91 = (x377+(x378/(x379|x380)));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 1U;
	int64_t t92 = -11383LL;

	t92 = (x381+(x382/(x383|x384)));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 8212658601331495751LLU;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = UINT64_MAX;
	uint64_t t93 = 14LLU;

	t93 = (x385+(x386/(x387|x388)));

	if (t93 != 8212658601331495751LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = UINT16_MAX;
	int32_t x390 = INT32_MIN;
	static uint16_t x391 = 988U;
	static uint16_t x392 = 30177U;
	int32_t t94 = 25;

	t94 = (x389+(x390/(x391|x392)));

	if (t94 != -4376) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = INT8_MIN;
	static uint32_t x394 = UINT32_MAX;
	static int8_t x395 = 1;
	volatile int64_t x396 = INT64_MIN;
	int64_t t95 = 254492390494461708LL;

	t95 = (x393+(x394/(x395|x396)));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x398 = INT64_MAX;
	volatile int32_t x400 = -1;
	static int64_t t96 = -404183599430512LL;

	t96 = (x397+(x398/(x399|x400)));

	if (t96 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = 757;
	int32_t x402 = INT32_MIN;
	static int64_t x403 = INT64_MAX;
	uint32_t x404 = UINT32_MAX;
	volatile int64_t t97 = -412LL;

	t97 = (x401+(x402/(x403|x404)));

	if (t97 != 757LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x407 = 23555615326LL;
	volatile int8_t x408 = -1;
	volatile int64_t t98 = 3644940228222598LL;

	t98 = (x405+(x406/(x407|x408)));

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x410 = 0;
	int32_t x411 = -1;
	static volatile int32_t x412 = INT32_MIN;

	t99 = (x409+(x410/(x411|x412)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

