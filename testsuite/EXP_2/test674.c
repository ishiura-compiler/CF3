#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 2011U;
int64_t x5 = -2102608LL;
int8_t x6 = -1;
int64_t t1 = 227LL;
static int16_t x15 = INT16_MIN;
static volatile int32_t x25 = 52267;
uint16_t x26 = 9292U;
volatile int64_t t6 = 577573LL;
int32_t x38 = -1;
uint32_t x39 = UINT32_MAX;
volatile uint32_t t8 = 40788U;
int32_t x47 = -87830;
uint16_t x60 = 178U;
static int64_t t13 = -2021126979170852LL;
static volatile uint64_t x61 = UINT64_MAX;
static uint64_t t14 = 6970330725547034LLU;
int64_t x67 = -1LL;
volatile int16_t x68 = INT16_MAX;
int32_t x74 = -6;
volatile uint64_t t20 = 74991035215220LLU;
int64_t x90 = INT64_MIN;
volatile uint8_t x94 = 104U;
static int8_t x98 = -1;
uint32_t x99 = 7U;
int64_t x105 = INT64_MAX;
int64_t x109 = INT64_MIN;
volatile uint32_t x115 = UINT32_MAX;
int8_t x120 = 15;
int8_t x122 = 1;
static int32_t x128 = -31653470;
int32_t x129 = -1;
static volatile int64_t x130 = INT64_MIN;
int32_t x131 = INT32_MIN;
int16_t x134 = -1;
volatile uint32_t x136 = 6085U;
int64_t x140 = INT64_MAX;
int64_t t33 = 2240911546LL;
int64_t t35 = -247LL;
int8_t x151 = -1;
int32_t x155 = -1;
int8_t x166 = -7;
int32_t t40 = -1;
int64_t x170 = INT64_MIN;
static int64_t x173 = INT64_MIN;
static int32_t x176 = 697285;
int64_t t43 = INT64_MIN;
uint32_t t44 = 2U;
static int8_t x190 = INT8_MIN;
uint64_t x191 = UINT64_MAX;
int8_t x197 = -2;
int8_t x198 = 47;
static int64_t x206 = -1LL;
int64_t x208 = INT64_MIN;
uint64_t x216 = 25139851LLU;
uint16_t x217 = 7U;
int32_t t53 = 27548;
int32_t x222 = 0;
uint32_t x226 = 0U;
uint64_t x227 = 12502523LLU;
int8_t x240 = -1;
uint32_t x254 = 32692554U;
int32_t x255 = -9;
int8_t x261 = 48;
uint64_t t67 = 125541699693LLU;
static volatile uint32_t x281 = 8U;
int16_t x285 = INT16_MAX;
static uint64_t x291 = 13269734LLU;
int32_t x300 = -5229;
volatile int32_t t73 = -466948;
int8_t x302 = 10;
int8_t x303 = INT8_MIN;
uint64_t x305 = UINT64_MAX;
int32_t x308 = INT32_MIN;
static int8_t x309 = INT8_MIN;
uint8_t x314 = 2U;
int16_t x315 = INT16_MAX;
uint16_t x318 = 11U;
uint64_t t78 = 7867420LLU;
uint32_t x327 = 10055U;
uint64_t t81 = 19542777754195112LLU;
uint64_t x337 = UINT64_MAX;
int8_t x341 = 12;
int32_t x344 = INT32_MAX;
static int64_t x348 = INT64_MIN;
uint32_t x349 = UINT32_MAX;
static int64_t x353 = INT64_MIN;
volatile uint32_t x354 = 1242U;
volatile int64_t x355 = 232008330808LL;
static int64_t t87 = INT64_MIN;
static volatile uint32_t x362 = 573U;
volatile uint8_t x363 = 1U;
volatile int8_t x364 = 3;
static volatile uint32_t t89 = 1266U;
uint64_t x368 = UINT64_MAX;
volatile uint32_t x376 = 24U;
int16_t x388 = 480;
int64_t x392 = INT64_MIN;
int64_t x395 = INT64_MIN;
volatile int32_t x399 = INT32_MIN;
volatile uint32_t t97 = 448432276U;
int16_t x403 = INT16_MAX;


void f0(void) {
	volatile uint16_t x1 = 0U;
	uint8_t x2 = 5U;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 75;

	t0 = ((x1^(x2/x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = INT32_MAX;
	static int32_t x8 = INT32_MAX;

	t1 = ((x5^(x6/x7))&x8);

	if (t1 != 2145381040LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 50U;
	static int8_t x10 = INT8_MIN;
	static volatile uint64_t x11 = 8265397478LLU;
	static int64_t x12 = -20818470488874LL;
	volatile uint64_t t2 = 88501159990LLU;

	t2 = ((x9^(x10/x11))&x12);

	if (t2 != 2147882192LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 207782U;
	int16_t x14 = -1;
	int8_t x16 = INT8_MIN;
	uint32_t t3 = 169057409U;

	t3 = ((x13^(x14/x15))&x16);

	if (t3 != 207744U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 50U;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -3;
	volatile int32_t t4 = -12392;

	t4 = ((x17^(x18/x19))&x20);

	if (t4 != 48) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x27 = UINT8_MAX;
	uint16_t x28 = 15958U;
	volatile int32_t t5 = -127009188;

	t5 = ((x25^(x26/x27))&x28);

	if (t5 != 3078) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	int64_t x30 = -282968640549LL;
	uint32_t x31 = 458234U;
	int32_t x32 = INT32_MAX;

	t6 = ((x29^(x30/x31))&x32);

	if (t6 != 2146866129LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 686U;
	uint8_t x34 = UINT8_MAX;
	int64_t x35 = 82359LL;
	int16_t x36 = -9626;
	static volatile int64_t t7 = -106961998LL;

	t7 = ((x33^(x34/x35))&x36);

	if (t7 != 550LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 392U;
	int16_t x40 = INT16_MIN;

	t8 = ((x37^(x38/x39))&x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = 425167197LLU;
	int16_t x43 = -1;
	static uint32_t x44 = UINT32_MAX;
	volatile uint64_t t9 = 17799993573312LLU;

	t9 = ((x41^(x42/x43))&x44);

	if (t9 != 4294967168LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -13916;
	volatile uint64_t x46 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t10 = 2609309654395785LLU;

	t10 = ((x45^(x46/x47))&x48);

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 2U;
	static int64_t x50 = INT64_MAX;
	int64_t x51 = -553440401LL;
	uint16_t x52 = 9U;
	static int64_t t11 = -1072372180162248941LL;

	t11 = ((x49^(x50/x51))&x52);

	if (t11 != 9LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -13;
	uint32_t x54 = 114U;
	int64_t x55 = -1LL;
	volatile int16_t x56 = INT16_MIN;
	volatile int64_t t12 = 161326LL;

	t12 = ((x53^(x54/x55))&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -223;
	volatile int64_t x58 = 95906636LL;
	uint8_t x59 = 10U;

	t13 = ((x57^(x58/x59))&x60);

	if (t13 != 162LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x62 = 3685U;
	int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61^(x62/x63))&x64);

	if (t14 != 27LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int16_t x66 = -1;
	volatile int64_t t15 = -2283642583LL;

	t15 = ((x65^(x66/x67))&x68);

	if (t15 != 32766LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 1574147LL;
	volatile int32_t x70 = -7;
	int8_t x71 = 1;
	volatile int16_t x72 = INT16_MIN;
	int64_t t16 = -7970429326LL;

	t16 = ((x69^(x70/x71))&x72);

	if (t16 != -1605632LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1347502616346LL;
	static int16_t x75 = INT16_MIN;
	volatile int8_t x76 = INT8_MIN;
	int64_t t17 = 485101283548416609LL;

	t17 = ((x73^(x74/x75))&x76);

	if (t17 != -1347502616448LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = 1537045846U;
	static int8_t x78 = -50;
	int8_t x79 = 8;
	static int32_t x80 = INT32_MIN;
	uint32_t t18 = 660340U;

	t18 = ((x77^(x78/x79))&x80);

	if (t18 != 2147483648U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MIN;
	volatile int32_t x83 = 2;
	uint32_t x84 = 7702720U;
	volatile uint32_t t19 = 0U;

	t19 = ((x81^(x82/x83))&x84);

	if (t19 != 7700480U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	volatile uint64_t x86 = 815861250657755LLU;
	static int64_t x87 = -1LL;
	int8_t x88 = -1;

	t20 = ((x85^(x86/x87))&x88);

	if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x89 = INT32_MIN;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	volatile int64_t t21 = -277021383373628LL;

	t21 = ((x89^(x90/x91))&x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = 1807269U;
	volatile int64_t x95 = INT64_MIN;
	volatile uint16_t x96 = 2U;
	int64_t t22 = -88749145288415LL;

	t22 = ((x93^(x94/x95))&x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	static volatile int8_t x100 = INT8_MAX;
	volatile uint64_t t23 = 1734227594788010LLU;

	t23 = ((x97^(x98/x99))&x100);

	if (t23 != 91LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	volatile int64_t x103 = -1LL;
	int32_t x104 = -57828;
	int64_t t24 = -269241LL;

	t24 = ((x101^(x102/x103))&x104);

	if (t24 != 2147483676LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x106 = UINT32_MAX;
	volatile uint8_t x107 = 4U;
	int64_t x108 = INT64_MIN;
	int64_t t25 = -1306154LL;

	t25 = ((x105^(x106/x107))&x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = -391761802016024575LL;
	int64_t x111 = -10047977506913LL;
	int16_t x112 = INT16_MAX;
	volatile int64_t t26 = 12LL;

	t26 = ((x109^(x110/x111))&x112);

	if (t26 != 6221LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = UINT8_MAX;
	uint64_t x114 = 54479825007LLU;
	int8_t x116 = -1;
	uint64_t t27 = 18427951317676LLU;

	t27 = ((x113^(x114/x115))&x116);

	if (t27 != 243LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -7;
	uint64_t x118 = UINT64_MAX;
	static int8_t x119 = -1;
	uint64_t t28 = 127756120327833451LLU;

	t28 = ((x117^(x118/x119))&x120);

	if (t28 != 8LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 2165U;
	int8_t x123 = INT8_MIN;
	volatile uint32_t x124 = 1213672U;
	volatile uint32_t t29 = 55844U;

	t29 = ((x121^(x122/x123))&x124);

	if (t29 != 96U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MIN;
	int64_t t30 = 19713LL;

	t30 = ((x125^(x126/x127))&x128);

	if (t30 != 9223372036823122338LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x132 = 471960379576807LLU;
	static uint64_t t31 = 1878064492698LLU;

	t31 = ((x129^(x130/x131))&x132);

	if (t31 != 471960379576807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 1247U;
	int64_t x135 = INT64_MAX;
	volatile int64_t t32 = -12725LL;

	t32 = ((x133^(x134/x135))&x136);

	if (t32 != 1221LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x137 = INT16_MAX;
	static int16_t x138 = -3763;
	int64_t x139 = -3826432843LL;

	t33 = ((x137^(x138/x139))&x140);

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -11;
	uint16_t x142 = UINT16_MAX;
	volatile int32_t x143 = -1;
	uint8_t x144 = 0U;
	volatile int32_t t34 = 4040995;

	t34 = ((x141^(x142/x143))&x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -1LL;
	int8_t x146 = INT8_MIN;
	volatile int8_t x147 = -1;
	uint16_t x148 = 1256U;

	t35 = ((x145^(x146/x147))&x148);

	if (t35 != 1128LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = -287388;
	static int32_t x150 = 54734916;
	volatile int16_t x152 = 3;
	volatile int32_t t36 = 1;

	t36 = ((x149^(x150/x151))&x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 1148889U;
	uint32_t x154 = 5482642U;
	uint32_t x156 = 23242131U;
	volatile uint32_t t37 = 16781U;

	t37 = ((x153^(x154/x155))&x156);

	if (t37 != 34193U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = ((x157^(x158/x159))&x160);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	volatile uint16_t x162 = 109U;
	int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t39 = 4927;

	t39 = ((x161^(x162/x163))&x164);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	static int32_t x168 = 79716;

	t40 = ((x165^(x166/x167))&x168);

	if (t40 != 79616) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MAX;
	int64_t t41 = -310157590LL;

	t41 = ((x169^(x170/x171))&x172);

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x174 = -18;
	volatile int8_t x175 = -1;
	int64_t t42 = -1257057979240998152LL;

	t42 = ((x173^(x174/x175))&x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = -3769412095608512433LL;
	int64_t x180 = INT64_MIN;

	t43 = ((x177^(x178/x179))&x180);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	static int16_t x182 = INT16_MIN;
	static volatile int32_t x183 = -1;
	uint32_t x184 = 21391819U;

	t44 = ((x181^(x182/x183))&x184);

	if (t44 != 203U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 75U;
	static volatile uint32_t x186 = UINT32_MAX;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 3U;
	volatile uint64_t t45 = 60420LLU;

	t45 = ((x185^(x186/x187))&x188);

	if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = 15390408559995537LL;
	static uint32_t x192 = UINT32_MAX;
	uint64_t t46 = 67384293959138LLU;

	t46 = ((x189^(x190/x191))&x192);

	if (t46 != 3140135569LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x193 = 43U;
	static int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	int32_t x196 = 83;
	volatile int32_t t47 = -387;

	t47 = ((x193^(x194/x195))&x196);

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x199 = -173;
	uint32_t x200 = 984U;
	uint32_t t48 = 72U;

	t48 = ((x197^(x198/x199))&x200);

	if (t48 != 984U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x201 = INT32_MIN;
	uint8_t x202 = 70U;
	volatile int64_t x203 = -1LL;
	uint8_t x204 = 81U;
	int64_t t49 = -5903237965025670LL;

	t49 = ((x201^(x202/x203))&x204);

	if (t49 != 16LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x207 = -1;
	static volatile int64_t t50 = INT64_MIN;

	t50 = ((x205^(x206/x207))&x208);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = 1U;
	static volatile int32_t x210 = INT32_MIN;
	volatile int64_t x211 = 7520953330LL;
	int8_t x212 = INT8_MAX;
	volatile int64_t t51 = -7023631006841878LL;

	t51 = ((x209^(x210/x211))&x212);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 2792U;
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = 3314558470416200374LL;
	volatile uint64_t t52 = 2141976776769LLU;

	t52 = ((x213^(x214/x215))&x216);

	if (t52 != 2697LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = -1;
	int32_t x219 = 165;
	volatile int16_t x220 = INT16_MIN;

	t53 = ((x217^(x218/x219))&x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	static int32_t x223 = 52608048;
	static int8_t x224 = INT8_MAX;
	int64_t t54 = 15LL;

	t54 = ((x221^(x222/x223))&x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x225 = 15U;
	uint32_t x228 = 391U;
	volatile uint64_t t55 = 1610870LLU;

	t55 = ((x225^(x226/x227))&x228);

	if (t55 != 7LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x229 = 85U;
	volatile int32_t x230 = 528318819;
	int8_t x231 = -1;
	static volatile int8_t x232 = INT8_MAX;
	int32_t t56 = -1682;

	t56 = ((x229^(x230/x231))&x232);

	if (t56 != 72) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 0;
	uint32_t x234 = 943U;
	volatile int64_t x235 = -2355411685LL;
	uint32_t x236 = UINT32_MAX;
	static int64_t t57 = -3072618499445622851LL;

	t57 = ((x233^(x234/x235))&x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = UINT64_MAX;
	static volatile int16_t x238 = INT16_MIN;
	uint32_t x239 = 1327779601U;
	uint64_t t58 = 14919592169LLU;

	t58 = ((x237^(x238/x239))&x240);

	if (t58 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = 20936588273305LL;
	volatile int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;
	static uint8_t x244 = 0U;
	uint64_t t59 = 15LLU;

	t59 = ((x241^(x242/x243))&x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MAX;
	uint8_t x246 = 15U;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t60 = -59297;

	t60 = ((x245^(x246/x247))&x248);

	if (t60 != 32640) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MIN;
	static int8_t x250 = INT8_MAX;
	volatile int32_t x251 = INT32_MAX;
	int8_t x252 = 2;
	volatile int64_t t61 = -494LL;

	t61 = ((x249^(x250/x251))&x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = -1LL;
	static uint16_t x256 = 12796U;
	int64_t t62 = 201953871005LL;

	t62 = ((x253^(x254/x255))&x256);

	if (t62 != 12796LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -391573LL;
	static uint16_t x258 = 31725U;
	volatile int16_t x259 = -1;
	static volatile int16_t x260 = INT16_MIN;
	volatile int64_t t63 = -7LL;

	t63 = ((x257^(x258/x259))&x260);

	if (t63 != 360448LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x262 = 2U;
	volatile int32_t x263 = INT32_MIN;
	static volatile int32_t x264 = -15867;
	volatile uint32_t t64 = 46114U;

	t64 = ((x261^(x262/x263))&x264);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x265 = -6;
	int8_t x266 = INT8_MIN;
	int64_t x267 = 1248397LL;
	volatile uint64_t x268 = 920253383742780LLU;
	volatile uint64_t t65 = 3LLU;

	t65 = ((x265^(x266/x267))&x268);

	if (t65 != 920253383742776LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	volatile int16_t x271 = -1;
	int8_t x272 = -1;
	volatile uint64_t t66 = 32425132LLU;

	t66 = ((x269^(x270/x271))&x272);

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = UINT64_MAX;
	uint16_t x274 = 28U;
	volatile int16_t x275 = INT16_MIN;
	static int64_t x276 = INT64_MAX;

	t67 = ((x273^(x274/x275))&x276);

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x277 = 229U;
	int8_t x278 = INT8_MAX;
	int64_t x279 = INT64_MIN;
	volatile uint32_t x280 = 29U;
	volatile int64_t t68 = -6354LL;

	t68 = ((x277^(x278/x279))&x280);

	if (t68 != 5LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = -7856;
	int64_t x284 = -23783487206367LL;
	volatile int64_t t69 = -5LL;

	t69 = ((x281^(x282/x283))&x284);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 11U;
	int32_t x288 = INT32_MAX;
	uint64_t t70 = 587LLU;

	t70 = ((x285^(x286/x287))&x288);

	if (t70 != 1561803310LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -905;
	static volatile uint16_t x290 = 28818U;
	int8_t x292 = INT8_MAX;
	static volatile uint64_t t71 = 2225279977759722331LLU;

	t71 = ((x289^(x290/x291))&x292);

	if (t71 != 119LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x293 = 1779112545864979LLU;
	int8_t x294 = -1;
	int32_t x295 = INT32_MAX;
	static int8_t x296 = -1;
	static volatile uint64_t t72 = 1423836159205569823LLU;

	t72 = ((x293^(x294/x295))&x296);

	if (t72 != 1779112545864979LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 38U;
	static uint8_t x298 = 4U;
	uint8_t x299 = UINT8_MAX;

	t73 = ((x297^(x298/x299))&x300);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t74 = 2;

	t74 = ((x301^(x302/x303))&x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 128027054159682LLU;
	static volatile uint64_t t75 = 294053245407237LLU;

	t75 = ((x305^(x306/x307))&x308);

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x310 = 331U;
	uint16_t x311 = 100U;
	static int8_t x312 = INT8_MAX;
	volatile int32_t t76 = -13714;

	t76 = ((x309^(x310/x311))&x312);

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = INT64_MIN;
	static int8_t x316 = -1;
	volatile int64_t t77 = INT64_MIN;

	t77 = ((x313^(x314/x315))&x316);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x317 = 350127302671718769LLU;
	int32_t x319 = -1;
	volatile uint64_t x320 = 12883LLU;

	t78 = ((x317^(x318/x319))&x320);

	if (t78 != 8704LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = 2904U;
	uint16_t x322 = 51U;
	int32_t x323 = INT32_MAX;
	static int8_t x324 = INT8_MIN;
	static volatile int32_t t79 = 116;

	t79 = ((x321^(x322/x323))&x324);

	if (t79 != 2816) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x325 = 2548U;
	int16_t x326 = 1795;
	static uint8_t x328 = 0U;
	uint32_t t80 = 1675023325U;

	t80 = ((x325^(x326/x327))&x328);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = INT32_MAX;
	uint16_t x330 = 2337U;
	uint64_t x331 = 679454LLU;
	static uint32_t x332 = 80155886U;

	t81 = ((x329^(x330/x331))&x332);

	if (t81 != 80155886LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	static int16_t x336 = INT16_MAX;
	volatile int64_t t82 = -90109212176302295LL;

	t82 = ((x333^(x334/x335))&x336);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x338 = -1LL;
	int64_t x339 = -1139696853026LL;
	uint16_t x340 = UINT16_MAX;
	uint64_t t83 = 8274453380685728897LLU;

	t83 = ((x337^(x338/x339))&x340);

	if (t83 != 65535LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x342 = 1006371409;
	int8_t x343 = -1;
	int32_t t84 = -265662824;

	t84 = ((x341^(x342/x343))&x344);

	if (t84 != 1141112227) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile int8_t x346 = INT8_MIN;
	volatile int8_t x347 = INT8_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = ((x345^(x346/x347))&x348);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	volatile int64_t x352 = -1LL;
	volatile uint64_t t86 = 4658653399585919LLU;

	t86 = ((x349^(x350/x351))&x352);

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x356 = INT64_MIN;

	t87 = ((x353^(x354/x355))&x356);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = -1;
	int32_t x358 = -962;
	int64_t x359 = -55704LL;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t88 = 1LL;

	t88 = ((x357^(x358/x359))&x360);

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = -1;

	t89 = ((x361^(x362/x363))&x364);

	if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MAX;
	static volatile uint64_t t90 = 95LLU;

	t90 = ((x365^(x366/x367))&x368);

	if (t90 != 65789LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x373 = 64U;
	static int32_t x374 = INT32_MAX;
	static int8_t x375 = INT8_MIN;
	volatile uint32_t t91 = 3303744U;

	t91 = ((x373^(x374/x375))&x376);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = 0;
	volatile uint64_t x379 = UINT64_MAX;
	uint32_t x380 = 3029870U;
	static volatile uint64_t t92 = 11572393LLU;

	t92 = ((x377^(x378/x379))&x380);

	if (t92 != 3029760LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x381 = -1;
	static int16_t x382 = -1;
	int16_t x383 = -1;
	int16_t x384 = -114;
	int32_t t93 = -515268898;

	t93 = ((x381^(x382/x383))&x384);

	if (t93 != -114) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = -1;
	volatile int8_t x386 = -1;
	static uint16_t x387 = 14U;
	static int32_t t94 = 8008;

	t94 = ((x385^(x386/x387))&x388);

	if (t94 != 480) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 40112068701173LLU;
	int8_t x390 = INT8_MIN;
	static int8_t x391 = -6;
	static volatile uint64_t t95 = 899388LLU;

	t95 = ((x389^(x390/x391))&x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = -1;
	static uint32_t x394 = 3439U;
	int8_t x396 = -1;
	volatile int64_t t96 = -956698LL;

	t96 = ((x393^(x394/x395))&x396);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = UINT32_MAX;
	uint16_t x400 = UINT16_MAX;

	t97 = ((x397^(x398/x399))&x400);

	if (t97 != 254U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MAX;
	int8_t x402 = 63;
	int32_t x404 = 748;
	volatile int32_t t98 = 50036223;

	t98 = ((x401^(x402/x403))&x404);

	if (t98 != 748) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = -1;
	volatile int32_t x406 = INT32_MIN;
	volatile int8_t x407 = INT8_MIN;
	static uint8_t x408 = 3U;
	int32_t t99 = 62384310;

	t99 = ((x405^(x406/x407))&x408);

	if (t99 != 3) { NG(); } else { ; }
	
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

