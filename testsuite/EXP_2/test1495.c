#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = INT8_MIN;
int8_t x13 = INT8_MIN;
volatile int32_t x15 = 1832;
int16_t x17 = INT16_MIN;
int32_t x19 = INT32_MIN;
static volatile uint16_t x27 = UINT16_MAX;
int64_t x31 = -1LL;
volatile int64_t t7 = 1272786431160595006LL;
int32_t t8 = -229;
static volatile int32_t x37 = INT32_MIN;
uint8_t x38 = 9U;
int64_t x43 = 32505120LL;
int32_t x45 = -4207121;
int32_t t11 = -8560590;
uint32_t x50 = UINT32_MAX;
volatile uint64_t t13 = 183036405686LLU;
volatile int64_t x70 = INT64_MAX;
volatile uint64_t t18 = 938LLU;
uint32_t x79 = UINT32_MAX;
static volatile uint64_t x80 = UINT64_MAX;
uint64_t x83 = UINT64_MAX;
volatile int32_t t20 = 110;
static int16_t x87 = INT16_MAX;
static volatile int64_t t21 = 11735218646LL;
volatile int8_t x89 = INT8_MIN;
volatile int64_t t24 = -14331851LL;
volatile uint8_t x102 = 15U;
int32_t t25 = -160;
int32_t x107 = -1;
int16_t x117 = INT16_MIN;
int32_t x119 = INT32_MAX;
int64_t x124 = INT64_MAX;
volatile int32_t x132 = 2548967;
uint64_t x134 = 672733766LLU;
uint8_t x138 = 2U;
uint32_t x143 = 63138U;
static uint64_t x144 = UINT64_MAX;
static int8_t x148 = INT8_MIN;
volatile uint32_t x150 = 0U;
int16_t x151 = INT16_MIN;
uint8_t x152 = 56U;
int32_t x153 = -441985;
int16_t x155 = -769;
volatile int32_t x171 = INT32_MIN;
uint32_t x175 = 13207185U;
int32_t x176 = 27;
static volatile int64_t t43 = -99089567576134LL;
volatile int8_t x177 = INT8_MAX;
uint64_t x179 = UINT64_MAX;
int32_t x186 = INT32_MIN;
uint64_t x191 = UINT64_MAX;
static volatile int16_t x198 = 1;
int32_t x199 = 26475;
int64_t x205 = -921622312336556LL;
int16_t x210 = 15;
static int8_t x219 = INT8_MIN;
int8_t x225 = 1;
volatile int32_t t56 = 2137;
uint16_t x229 = 94U;
int32_t x231 = 8057;
static volatile int64_t t57 = INT64_MIN;
int32_t x234 = INT32_MIN;
volatile int64_t x236 = INT64_MIN;
volatile int64_t t58 = -1621LL;
uint32_t x237 = 1U;
int16_t x247 = INT16_MIN;
uint32_t t62 = 1U;
static uint64_t x256 = 9147278340126609LLU;
static uint64_t t63 = 8755325271246785LLU;
volatile int64_t t65 = 38959112LL;
int64_t x265 = -1LL;
static volatile uint16_t x267 = UINT16_MAX;
volatile int8_t x272 = INT8_MIN;
uint32_t x277 = 201U;
int32_t x280 = INT32_MAX;
static uint32_t t69 = 40601U;
uint8_t x284 = 25U;
int8_t x285 = INT8_MAX;
int64_t x291 = -1LL;
volatile int32_t x296 = INT32_MIN;
int16_t x300 = 3575;
int64_t x306 = INT64_MAX;
int8_t x307 = INT8_MIN;
int16_t x311 = INT16_MIN;
static volatile int16_t x330 = INT16_MIN;
static int64_t x333 = INT64_MAX;
static volatile int16_t x353 = INT16_MIN;
int8_t x358 = -1;
volatile int32_t x362 = 554738873;
int16_t x363 = 10;
volatile uint64_t x367 = 485LLU;
int32_t x370 = INT32_MIN;
static uint32_t x378 = 7732482U;
uint64_t x382 = 44494175105477LLU;
uint16_t x384 = 2414U;
volatile int32_t t96 = 25;
int64_t t97 = -962040140LL;
volatile uint16_t x399 = 1U;


void f0(void) {
	uint8_t x1 = 0U;
	volatile int8_t x2 = 7;
	static volatile uint32_t x3 = UINT32_MAX;
	volatile int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 173976;

	t0 = ((x1&(x2<x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint32_t x6 = 10U;
	volatile int8_t x7 = INT8_MIN;
	int64_t x8 = 899714328479513LL;
	int64_t t1 = -23223531290LL;

	t1 = ((x5&(x6<x7))^x8);

	if (t1 != 899714328479512LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MAX;
	static int8_t x10 = -35;
	volatile int32_t x12 = 15965353;
	int32_t t2 = -2;

	t2 = ((x9&(x10<x11))^x12);

	if (t2 != 15965353) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 21U;
	volatile int32_t x16 = INT32_MIN;
	int32_t t3 = INT32_MIN;

	t3 = ((x13&(x14<x15))^x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = 714848951366347LL;
	uint16_t x20 = 7U;
	int32_t t4 = -1513222;

	t4 = ((x17&(x18<x19))^x20);

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile uint64_t x22 = 121859561198LLU;
	int8_t x23 = INT8_MIN;
	int32_t x24 = -58;
	int32_t t5 = -249;

	t5 = ((x21&(x22<x23))^x24);

	if (t5 != -57) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = UINT8_MAX;
	static int64_t x26 = INT64_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 1;

	t6 = ((x25&(x26<x27))^x28);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 35612074654119629LLU;
	static int16_t x32 = -1;

	t7 = ((x29&(x30<x31))^x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	volatile int8_t x34 = 0;
	volatile uint8_t x35 = 5U;
	int32_t x36 = INT32_MAX;

	t8 = ((x33&(x34<x35))^x36);

	if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = INT32_MIN;
	int16_t x40 = 385;
	volatile int32_t t9 = 68;

	t9 = ((x37&(x38<x39))^x40);

	if (t9 != 385) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	int32_t x42 = 680883783;
	int64_t x44 = 752567LL;
	int64_t t10 = 1LL;

	t10 = ((x41&(x42<x43))^x44);

	if (t10 != 752567LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	static int8_t x48 = -1;

	t11 = ((x45&(x46<x47))^x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x51 = -1LL;
	uint64_t x52 = 3245LLU;
	volatile uint64_t t12 = 847LLU;

	t12 = ((x49&(x50<x51))^x52);

	if (t12 != 3245LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MAX;
	static volatile uint8_t x54 = 104U;
	int64_t x55 = 1994187LL;
	uint64_t x56 = 23603235034LLU;

	t13 = ((x53&(x54<x55))^x56);

	if (t13 != 23603235035LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = 6;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = ((x57&(x58<x59))^x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -1;
	int16_t x62 = 4279;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 14U;
	volatile int32_t t15 = -420819;

	t15 = ((x61&(x62<x63))^x64);

	if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MIN;
	int64_t x67 = 0LL;
	static volatile int8_t x68 = INT8_MIN;
	volatile uint64_t t16 = 31329LLU;

	t16 = ((x65&(x66<x67))^x68);

	if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static uint8_t x71 = 23U;
	uint32_t x72 = UINT32_MAX;
	uint32_t t17 = UINT32_MAX;

	t17 = ((x69&(x70<x71))^x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint8_t x74 = 107U;
	volatile int32_t x75 = -1;
	uint8_t x76 = 47U;

	t18 = ((x73&(x74<x75))^x76);

	if (t18 != 47LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 97;
	volatile int16_t x78 = INT16_MAX;
	static volatile uint64_t t19 = 135284938858747821LLU;

	t19 = ((x77&(x78<x79))^x80);

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 50U;
	uint32_t x82 = 1962904U;
	int16_t x84 = -1;

	t20 = ((x81&(x82<x83))^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile int16_t x86 = -9482;
	int64_t x88 = 26680224LL;

	t21 = ((x85&(x86<x87))^x88);

	if (t21 != 26680224LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -1;
	static int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MAX;
	static volatile int32_t t22 = INT32_MAX;

	t22 = ((x89&(x90<x91))^x92);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile int8_t x94 = -11;
	int16_t x95 = -8;
	volatile int64_t x96 = INT64_MIN;
	int64_t t23 = INT64_MIN;

	t23 = ((x93&(x94<x95))^x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int64_t x98 = INT64_MIN;
	static uint8_t x99 = 96U;
	volatile uint8_t x100 = 2U;

	t24 = ((x97&(x98<x99))^x100);

	if (t24 != 3LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 1U;
	volatile int32_t x103 = -874133;
	static int8_t x104 = -1;

	t25 = ((x101&(x102<x103))^x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1963;
	volatile int8_t x106 = -1;
	static int64_t x108 = INT64_MIN;
	volatile int64_t t26 = INT64_MIN;

	t26 = ((x105&(x106<x107))^x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 0U;
	int64_t x110 = -41170268986575LL;
	volatile uint16_t x111 = UINT16_MAX;
	volatile uint8_t x112 = 1U;
	static volatile uint32_t t27 = 555792051U;

	t27 = ((x109&(x110<x111))^x112);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = -1;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = -276722899843643615LL;
	int64_t t28 = 1954859LL;

	t28 = ((x113&(x114<x115))^x116);

	if (t28 != -276722899843643615LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MIN;
	volatile int16_t x120 = 14878;
	volatile int32_t t29 = -72127;

	t29 = ((x117&(x118<x119))^x120);

	if (t29 != 14878) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x121&(x122<x123))^x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int32_t x126 = 11655;
	int32_t x127 = INT32_MAX;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 125;

	t31 = ((x125&(x126<x127))^x128);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 346669450729705092LLU;
	int8_t x130 = 0;
	int32_t x131 = -1;
	static uint64_t t32 = 4417LLU;

	t32 = ((x129&(x130<x131))^x132);

	if (t32 != 2548967LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	uint32_t x135 = 1094U;
	int32_t x136 = 28;
	int32_t t33 = 293764;

	t33 = ((x133&(x134<x135))^x136);

	if (t33 != 28) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int8_t x139 = -1;
	volatile int64_t x140 = -1172615LL;
	static int64_t t34 = -30577975LL;

	t34 = ((x137&(x138<x139))^x140);

	if (t34 != -1172615LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -123;
	int64_t x142 = -14663390LL;
	static uint64_t t35 = 9607832428LLU;

	t35 = ((x141&(x142<x143))^x144);

	if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = -1954655246LL;
	volatile uint32_t t36 = 434U;

	t36 = ((x145&(x146<x147))^x148);

	if (t36 != 4294967168U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1324U;
	int32_t t37 = 12;

	t37 = ((x149&(x150<x151))^x152);

	if (t37 != 56) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 1515U;
	uint32_t x156 = 4174537U;
	uint32_t t38 = 2U;

	t38 = ((x153&(x154<x155))^x156);

	if (t38 != 4174537U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	static volatile int64_t x158 = 224354051640LL;
	uint32_t x159 = UINT32_MAX;
	volatile int16_t x160 = INT16_MIN;
	volatile int64_t t39 = -1017887LL;

	t39 = ((x157&(x158<x159))^x160);

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = INT64_MIN;
	static uint16_t x162 = 6880U;
	uint8_t x163 = 125U;
	int8_t x164 = -2;
	volatile int64_t t40 = -10363286331467LL;

	t40 = ((x161&(x162<x163))^x164);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = -1;
	int32_t x167 = -1;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t41 = INT64_MAX;

	t41 = ((x165&(x166<x167))^x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MAX;
	uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x169&(x170<x171))^x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -244485340596729LL;
	int16_t x174 = 350;

	t43 = ((x173&(x174<x175))^x176);

	if (t43 != 26LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = 2163255;
	int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = 6256;

	t44 = ((x177&(x178<x179))^x180);

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	uint8_t x182 = 127U;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = 48368956717406340LLU;
	volatile uint64_t t45 = 3617022LLU;

	t45 = ((x181&(x182<x183))^x184);

	if (t45 != 48368956717406340LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -1;
	volatile int16_t x187 = -31;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -160329097;

	t46 = ((x185&(x186<x187))^x188);

	if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	uint8_t x190 = 0U;
	volatile int8_t x192 = -1;
	volatile int64_t t47 = -8223979724198LL;

	t47 = ((x189&(x190<x191))^x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 2027064U;
	uint8_t x194 = 5U;
	int64_t x195 = 13697515875364LL;
	uint64_t x196 = 4746394LLU;
	static volatile uint64_t t48 = 351828819LLU;

	t48 = ((x193&(x194<x195))^x196);

	if (t48 != 4746394LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -1522180;
	volatile int32_t x200 = -1;
	int32_t t49 = 28;

	t49 = ((x197&(x198<x199))^x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	uint16_t x202 = UINT16_MAX;
	static volatile int16_t x203 = INT16_MIN;
	static volatile int32_t x204 = -1;
	int64_t t50 = 82637175LL;

	t50 = ((x201&(x202<x203))^x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 16663652LLU;
	static int32_t x207 = 3285466;
	volatile int32_t x208 = 596272;
	volatile int64_t t51 = 5LL;

	t51 = ((x205&(x206<x207))^x208);

	if (t51 != 596272LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	static int32_t x211 = -1;
	int64_t x212 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = ((x209&(x210<x211))^x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = 15;
	int32_t x215 = INT32_MAX;
	int8_t x216 = -4;
	static volatile int64_t t53 = -3898769568887LL;

	t53 = ((x213&(x214<x215))^x216);

	if (t53 != -4LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static uint32_t x218 = 92U;
	int8_t x220 = INT8_MAX;
	volatile int32_t t54 = 37013;

	t54 = ((x217&(x218<x219))^x220);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = 1104250;
	int32_t x222 = 53911798;
	int8_t x223 = INT8_MAX;
	static int16_t x224 = INT16_MAX;
	int32_t t55 = 105858031;

	t55 = ((x221&(x222<x223))^x224);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = 25291U;
	uint64_t x227 = 564LLU;
	int16_t x228 = -1;

	t56 = ((x225&(x226<x227))^x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x230 = 2U;
	volatile int64_t x232 = INT64_MIN;

	t57 = ((x229&(x230<x231))^x232);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 9LL;
	static int64_t x235 = 507921LL;

	t58 = ((x233&(x234<x235))^x236);

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 6;
	int8_t x239 = INT8_MIN;
	int16_t x240 = 229;
	volatile uint32_t t59 = 59341U;

	t59 = ((x237&(x238<x239))^x240);

	if (t59 != 229U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = -4172024;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -12;

	t60 = ((x241&(x242<x243))^x244);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -6LL;
	static volatile uint64_t x246 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	int64_t t61 = -114LL;

	t61 = ((x245&(x246<x247))^x248);

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = 5621066U;
	static int64_t x250 = INT64_MAX;
	int32_t x251 = -18;
	volatile int8_t x252 = INT8_MIN;

	t62 = ((x249&(x250<x251))^x252);

	if (t62 != 4294967168U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = -1;
	static int8_t x254 = INT8_MAX;
	uint32_t x255 = UINT32_MAX;

	t63 = ((x253&(x254<x255))^x256);

	if (t63 != 9147278340126608LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	static volatile int16_t x258 = 813;
	static int8_t x259 = INT8_MIN;
	static uint32_t x260 = 3U;
	static uint32_t t64 = 7879U;

	t64 = ((x257&(x258<x259))^x260);

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 3;
	static int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MIN;

	t65 = ((x261&(x262<x263))^x264);

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MAX;
	int8_t x268 = -1;
	int64_t t66 = -841156LL;

	t66 = ((x265&(x266<x267))^x268);

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -3701477840LL;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MIN;
	int64_t t67 = 303LL;

	t67 = ((x269&(x270<x271))^x272);

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	volatile int8_t x274 = -9;
	volatile int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	static uint32_t t68 = UINT32_MAX;

	t68 = ((x273&(x274<x275))^x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = -1;

	t69 = ((x277&(x278<x279))^x280);

	if (t69 != 2147483646U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MAX;
	int16_t x282 = 0;
	int64_t x283 = -212945434585520742LL;
	volatile int32_t t70 = 9427;

	t70 = ((x281&(x282<x283))^x284);

	if (t70 != 25) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 7U;
	int32_t x288 = INT32_MAX;
	volatile int32_t t71 = INT32_MAX;

	t71 = ((x285&(x286<x287))^x288);

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	volatile int8_t x290 = 55;
	int64_t x292 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = ((x289&(x290<x291))^x292);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	static int8_t x294 = -48;
	int8_t x295 = INT8_MAX;
	static int32_t t73 = 149787;

	t73 = ((x293&(x294<x295))^x296);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	uint64_t x298 = 0LLU;
	int32_t x299 = INT32_MIN;
	volatile int32_t t74 = -283907618;

	t74 = ((x297&(x298<x299))^x300);

	if (t74 != 3575) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MAX;
	int32_t x303 = -1;
	int32_t x304 = INT32_MAX;
	int32_t t75 = INT32_MAX;

	t75 = ((x301&(x302<x303))^x304);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile uint32_t x308 = UINT32_MAX;
	int64_t t76 = 13799897LL;

	t76 = ((x305&(x306<x307))^x308);

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 3038691590LL;
	static int16_t x310 = INT16_MIN;
	int32_t x312 = 11;
	volatile int64_t t77 = -698219756411LL;

	t77 = ((x309&(x310<x311))^x312);

	if (t77 != 11LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1985512498232LL;
	static int8_t x314 = INT8_MIN;
	volatile int32_t x315 = INT32_MIN;
	int16_t x316 = -10;
	static int64_t t78 = -1005323255LL;

	t78 = ((x313&(x314<x315))^x316);

	if (t78 != -10LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1;
	static int64_t x318 = -67446409191LL;
	static volatile int64_t x319 = INT64_MIN;
	int64_t x320 = -1LL;
	static volatile int64_t t79 = 1584349207574684805LL;

	t79 = ((x317&(x318<x319))^x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -521128010LL;
	int16_t x322 = -92;
	uint32_t x323 = 15952U;
	uint64_t x324 = 21LLU;
	volatile uint64_t t80 = 5LLU;

	t80 = ((x321&(x322<x323))^x324);

	if (t80 != 21LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -1;
	static int16_t x326 = -119;
	uint16_t x327 = 30210U;
	uint8_t x328 = 8U;
	static int32_t t81 = -104726;

	t81 = ((x325&(x326<x327))^x328);

	if (t81 != 9) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	volatile int8_t x331 = -1;
	int64_t x332 = -1LL;
	static int64_t t82 = -4051LL;

	t82 = ((x329&(x330<x331))^x332);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	volatile int64_t t83 = -20LL;

	t83 = ((x333&(x334<x335))^x336);

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 1;
	static volatile uint16_t x338 = 243U;
	int16_t x339 = INT16_MAX;
	volatile int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = 89632;

	t84 = ((x337&(x338<x339))^x340);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -3;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = 42U;
	uint64_t x344 = 141842053926904129LLU;
	uint64_t t85 = 29474655788LLU;

	t85 = ((x341&(x342<x343))^x344);

	if (t85 != 141842053926904129LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -7LL;
	static int8_t x346 = -1;
	volatile uint8_t x347 = 1U;
	volatile int64_t x348 = INT64_MIN;
	static volatile int64_t t86 = -2156252LL;

	t86 = ((x345&(x346<x347))^x348);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 0U;
	uint8_t x350 = 111U;
	volatile uint16_t x351 = 2051U;
	static int32_t x352 = -1;
	static volatile int32_t t87 = 22470;

	t87 = ((x349&(x350<x351))^x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = INT64_MAX;
	uint8_t x355 = 6U;
	uint8_t x356 = 26U;
	volatile int32_t t88 = -359;

	t88 = ((x353&(x354<x355))^x356);

	if (t88 != 26) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	uint8_t x359 = 0U;
	static uint8_t x360 = 3U;
	volatile uint64_t t89 = 349516370LLU;

	t89 = ((x357&(x358<x359))^x360);

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 534361731150760629LL;
	uint32_t x364 = 310U;
	static int64_t t90 = -15305671472482741LL;

	t90 = ((x361&(x362<x363))^x364);

	if (t90 != 310LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x365 = INT16_MIN;
	uint64_t x366 = 2187013839073230LLU;
	int64_t x368 = 0LL;
	volatile int64_t t91 = 784963638246192979LL;

	t91 = ((x365&(x366<x367))^x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	static int16_t x371 = INT16_MIN;
	volatile int32_t x372 = -7;
	int32_t t92 = -116537;

	t92 = ((x369&(x370<x371))^x372);

	if (t92 != -8) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 1;
	static volatile uint8_t x374 = UINT8_MAX;
	int16_t x375 = -1;
	int8_t x376 = 17;
	volatile int32_t t93 = 72;

	t93 = ((x373&(x374<x375))^x376);

	if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -10116269LL;
	volatile int64_t x379 = INT64_MAX;
	int16_t x380 = -54;
	int64_t t94 = -1954516264LL;

	t94 = ((x377&(x378<x379))^x380);

	if (t94 != -53LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	static int32_t x383 = INT32_MIN;
	static int32_t t95 = 5;

	t95 = ((x381&(x382<x383))^x384);

	if (t95 != 2415) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	static int32_t x386 = INT32_MAX;
	int32_t x387 = 5053;
	int8_t x388 = INT8_MIN;

	t96 = ((x385&(x386<x387))^x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -576237;
	volatile uint32_t x390 = UINT32_MAX;
	volatile int64_t x391 = INT64_MIN;
	volatile int64_t x392 = 22565230LL;

	t97 = ((x389&(x390<x391))^x392);

	if (t97 != 22565230LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -88672653;
	int16_t x394 = INT16_MAX;
	static int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t98 = 722962;

	t98 = ((x393&(x394<x395))^x396);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	volatile int64_t x398 = -1LL;
	uint8_t x400 = 41U;
	volatile int32_t t99 = 337194;

	t99 = ((x397&(x398<x399))^x400);

	if (t99 != 40) { NG(); } else { ; }
	
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

