#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 21440U;
uint64_t x12 = 88465966LLU;
uint64_t x13 = UINT64_MAX;
uint8_t x26 = UINT8_MAX;
volatile int64_t x32 = 15LL;
static int32_t x37 = -1;
uint32_t x42 = 1684010609U;
volatile int8_t x43 = INT8_MIN;
int64_t x48 = INT64_MIN;
static int32_t x59 = INT32_MAX;
int32_t t14 = 152677;
volatile uint64_t x64 = 47878380940LLU;
static uint64_t t15 = 53781LLU;
volatile int16_t x65 = -12193;
uint8_t x68 = 31U;
volatile int32_t t16 = -844609763;
int32_t x76 = INT32_MIN;
static int64_t x79 = INT64_MIN;
int64_t x80 = 151LL;
int8_t x84 = 4;
volatile int64_t t20 = -76583214169847LL;
static uint16_t x86 = 1U;
int16_t x98 = -530;
static int32_t x100 = INT32_MIN;
int32_t t24 = -612395825;
int64_t x103 = -1LL;
uint32_t t26 = 912U;
int32_t x113 = -47241;
int8_t x115 = -1;
int32_t x119 = -1;
int32_t t29 = 1;
volatile int8_t x128 = 7;
volatile int32_t x131 = 0;
uint32_t x135 = 583U;
static volatile uint64_t x137 = 5518594909393246LLU;
int32_t x139 = 117;
static int64_t x140 = 1LL;
volatile int8_t x144 = -47;
uint64_t x156 = 16592813LLU;
volatile int64_t x158 = INT64_MAX;
volatile uint8_t x168 = 11U;
int32_t t42 = INT32_MIN;
volatile uint64_t t43 = 2410390018363LLU;
int8_t x179 = INT8_MIN;
int64_t x205 = -5011743196619LL;
uint8_t x207 = 56U;
volatile uint64_t x208 = UINT64_MAX;
static volatile uint8_t x209 = 2U;
int32_t x215 = INT32_MIN;
int32_t x220 = INT32_MIN;
static int32_t x223 = 152987976;
int64_t x227 = INT64_MIN;
uint8_t x244 = 70U;
int16_t x246 = -1;
int32_t x248 = INT32_MAX;
volatile int32_t t59 = 28;
uint16_t x249 = 627U;
static uint16_t x251 = UINT16_MAX;
int32_t x255 = INT32_MAX;
int16_t x256 = INT16_MIN;
volatile int32_t x260 = 690966;
int64_t x261 = 1097109542LL;
static volatile int64_t t63 = -112951209354378694LL;
int16_t x269 = 7826;
volatile int8_t x270 = INT8_MIN;
int16_t x274 = INT16_MIN;
int16_t x276 = 13;
uint16_t x277 = 3U;
volatile int32_t t67 = -13400;
volatile int8_t x281 = -8;
static int32_t x282 = INT32_MIN;
volatile int64_t x284 = -29132952LL;
int32_t x292 = INT32_MIN;
static volatile uint32_t x296 = UINT32_MAX;
int16_t x307 = INT16_MIN;
uint64_t x308 = 846179102023LLU;
volatile int16_t x313 = INT16_MAX;
uint8_t x316 = UINT8_MAX;
uint32_t x317 = 413760U;
static uint16_t x320 = 26318U;
uint8_t x321 = UINT8_MAX;
uint64_t x322 = 1098315656432859581LLU;
uint16_t x324 = UINT16_MAX;
int16_t x338 = -1;
uint16_t x341 = UINT16_MAX;
int64_t x348 = INT64_MIN;
int32_t x357 = -14461813;
volatile int32_t x358 = 1640;
int32_t t87 = 0;
uint16_t x361 = 75U;
uint64_t x369 = 3342204817595914LLU;
int32_t x374 = 86;
volatile int32_t x394 = -87917;
volatile int32_t t97 = 175;
int32_t x401 = INT32_MIN;
uint64_t x405 = 7317991LLU;
uint16_t x406 = 60U;
static volatile uint64_t t99 = 5604224LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2==(x3/x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = 9U;
	uint32_t x7 = UINT32_MAX;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 10998;

	t1 = (x5|(x6==(x7/x8)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	static int32_t x10 = 3;
	volatile int8_t x11 = INT8_MAX;
	static int64_t t2 = INT64_MIN;

	t2 = (x9|(x10==(x11/x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = UINT8_MAX;
	int16_t x15 = INT16_MAX;
	volatile int32_t x16 = INT32_MIN;
	uint64_t t3 = UINT64_MAX;

	t3 = (x13|(x14==(x15/x16)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -8;
	static volatile int64_t x18 = INT64_MIN;
	int64_t x19 = -211331LL;
	static uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = -912556334;

	t4 = (x17|(x18==(x19/x20)));

	if (t4 != -8) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int16_t x22 = -303;
	uint16_t x23 = UINT16_MAX;
	uint8_t x24 = 100U;
	static int64_t t5 = 38726LL;

	t5 = (x21|(x22==(x23/x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int64_t x27 = 0LL;
	int16_t x28 = -1;
	static volatile int32_t t6 = 974065;

	t6 = (x25|(x26==(x27/x28)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MAX;
	int8_t x31 = -2;
	static volatile int32_t t7 = -47408375;

	t7 = (x29|(x30==(x31/x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 2;
	static volatile int32_t x34 = 960749;
	uint8_t x35 = 0U;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -794;

	t8 = (x33|(x34==(x35/x36)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = INT64_MIN;
	uint32_t x39 = 8U;
	volatile int16_t x40 = -1;
	volatile int32_t t9 = -34;

	t9 = (x37|(x38==(x39/x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int64_t x44 = -37590768LL;
	static volatile int32_t t10 = INT32_MAX;

	t10 = (x41|(x42==(x43/x44)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 9222296891LL;
	int16_t x46 = 17;
	int16_t x47 = -1;
	int64_t t11 = 8LL;

	t11 = (x45|(x46==(x47/x48)));

	if (t11 != 9222296891LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	static int32_t x50 = 689;
	int8_t x51 = INT8_MAX;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -477;

	t12 = (x49|(x50==(x51/x52)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -815301;
	int32_t x54 = INT32_MIN;
	static int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MAX;
	int32_t t13 = -4;

	t13 = (x53|(x54==(x55/x56)));

	if (t13 != -815301) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 16;
	static int64_t x58 = -16871074502674LL;
	volatile int16_t x60 = INT16_MIN;

	t14 = (x57|(x58==(x59/x60)));

	if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 47LLU;
	volatile int32_t x62 = INT32_MIN;
	static int16_t x63 = 4;

	t15 = (x61|(x62==(x63/x64)));

	if (t15 != 47LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	volatile int8_t x67 = 2;

	t16 = (x65|(x66==(x67/x68)));

	if (t16 != -12193) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	int16_t x70 = -4959;
	uint8_t x71 = 1U;
	int32_t x72 = 37434;
	int32_t t17 = 16189043;

	t17 = (x69|(x70==(x71/x72)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint16_t x74 = 9572U;
	int8_t x75 = -1;
	volatile int32_t t18 = -433;

	t18 = (x73|(x74==(x75/x76)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = 30703895354LL;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x77|(x78==(x79/x80)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -201325487263LL;
	static volatile uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;

	t20 = (x81|(x82==(x83/x84)));

	if (t20 != -201325487263LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -6;
	static int8_t x87 = 30;
	int8_t x88 = -1;
	int32_t t21 = -6678;

	t21 = (x85|(x86==(x87/x88)));

	if (t21 != -6) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	int8_t x90 = -1;
	static int64_t x91 = -1LL;
	int8_t x92 = 4;
	static int64_t t22 = INT64_MAX;

	t22 = (x89|(x90==(x91/x92)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static int16_t x94 = INT16_MIN;
	uint16_t x95 = 3U;
	int64_t x96 = INT64_MAX;
	static uint64_t t23 = UINT64_MAX;

	t23 = (x93|(x94==(x95/x96)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	static int32_t x99 = -879;

	t24 = (x97|(x98==(x99/x100)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -26286960;
	int8_t x102 = INT8_MIN;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -907924815;

	t25 = (x101|(x102==(x103/x104)));

	if (t25 != -26286960) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 14337860U;
	volatile int32_t x106 = -283895;
	static int32_t x107 = INT32_MIN;
	uint32_t x108 = UINT32_MAX;

	t26 = (x105|(x106==(x107/x108)));

	if (t26 != 14337860U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 1042426;

	t27 = (x109|(x110==(x111/x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 3268514;

	t28 = (x113|(x114==(x115/x116)));

	if (t28 != -47241) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 120;
	int16_t x118 = 193;
	volatile uint64_t x120 = UINT64_MAX;

	t29 = (x117|(x118==(x119/x120)));

	if (t29 != 120) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1U;
	static volatile int32_t x122 = INT32_MIN;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -2095297;

	t30 = (x121|(x122==(x123/x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MAX;
	static volatile int32_t t31 = 30156;

	t31 = (x125|(x126==(x127/x128)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 966;
	int32_t x130 = -1;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = -1;

	t32 = (x129|(x130==(x131/x132)));

	if (t32 != 966) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = INT64_MIN;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -21722;

	t33 = (x133|(x134==(x135/x136)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 0U;
	static volatile uint64_t t34 = 426932331865794367LLU;

	t34 = (x137|(x138==(x139/x140)));

	if (t34 != 5518594909393246LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 1U;
	static int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	int32_t t35 = -44817;

	t35 = (x141|(x142==(x143/x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -2;
	static uint8_t x146 = UINT8_MAX;
	uint16_t x147 = 4357U;
	static int64_t x148 = -1LL;
	volatile int32_t t36 = 3032376;

	t36 = (x145|(x146==(x147/x148)));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	static volatile int32_t x151 = -881;
	int64_t x152 = -5942417970262LL;
	int32_t t37 = 76739;

	t37 = (x149|(x150==(x151/x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile uint64_t x154 = 1717LLU;
	uint8_t x155 = 55U;
	volatile int32_t t38 = INT32_MIN;

	t38 = (x153|(x154==(x155/x156)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 13763070636652579LLU;
	volatile int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MAX;
	volatile uint64_t t39 = 59LLU;

	t39 = (x157|(x158==(x159/x160)));

	if (t39 != 13763070636652579LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	static int16_t x162 = INT16_MIN;
	int64_t x163 = -1LL;
	static uint64_t x164 = 1512LLU;
	int32_t t40 = 257130;

	t40 = (x161|(x162==(x163/x164)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int16_t x166 = -6441;
	int8_t x167 = INT8_MIN;
	static int64_t t41 = INT64_MIN;

	t41 = (x165|(x166==(x167/x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint16_t x170 = 323U;
	static int32_t x171 = INT32_MIN;
	static int64_t x172 = -1LL;

	t42 = (x169|(x170==(x171/x172)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 21798144964847490LLU;
	uint8_t x174 = 18U;
	volatile int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MAX;

	t43 = (x173|(x174==(x175/x176)));

	if (t43 != 21798144964847490LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 21;
	int32_t x178 = -1;
	volatile int64_t x180 = 63605903058512LL;
	volatile int32_t t44 = -1;

	t44 = (x177|(x178==(x179/x180)));

	if (t44 != 21) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -7;
	static int16_t x186 = 1179;
	uint16_t x187 = 1021U;
	int64_t x188 = INT64_MAX;
	volatile int32_t t45 = -63364;

	t45 = (x185|(x186==(x187/x188)));

	if (t45 != -7) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x189 = 39427511967238381LLU;
	uint64_t x190 = 1378447LLU;
	static uint64_t x191 = UINT64_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t46 = 140158155748549655LLU;

	t46 = (x189|(x190==(x191/x192)));

	if (t46 != 39427511967238381LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = INT8_MIN;
	static int64_t x194 = INT64_MIN;
	int64_t x195 = -1LL;
	int8_t x196 = 7;
	volatile int32_t t47 = 770173;

	t47 = (x193|(x194==(x195/x196)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	volatile int32_t t48 = 56626;

	t48 = (x197|(x198==(x199/x200)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 14;
	int16_t x202 = -1;
	uint8_t x203 = UINT8_MAX;
	uint64_t x204 = 51501039354269LLU;
	volatile int32_t t49 = -85002;

	t49 = (x201|(x202==(x203/x204)));

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x206 = -1801526LL;
	static volatile int64_t t50 = -509122561LL;

	t50 = (x205|(x206==(x207/x208)));

	if (t50 != -5011743196619LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x210 = INT16_MIN;
	static int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MAX;
	volatile int32_t t51 = 13258089;

	t51 = (x209|(x210==(x211/x212)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = UINT8_MAX;
	int16_t x216 = -253;
	volatile int32_t t52 = 2744870;

	t52 = (x213|(x214==(x215/x216)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x217 = INT32_MIN;
	static volatile int16_t x218 = 3;
	int16_t x219 = INT16_MIN;
	int32_t t53 = INT32_MIN;

	t53 = (x217|(x218==(x219/x220)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 1U;
	static volatile int32_t x222 = INT32_MIN;
	uint8_t x224 = 2U;
	static volatile int32_t t54 = 0;

	t54 = (x221|(x222==(x223/x224)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -1;
	uint8_t x226 = 3U;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t55 = 0;

	t55 = (x225|(x226==(x227/x228)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 7355668LLU;
	uint64_t x234 = 135LLU;
	static int64_t x235 = -1LL;
	int64_t x236 = -1LL;
	volatile uint64_t t56 = 802975356057408546LLU;

	t56 = (x233|(x234==(x235/x236)));

	if (t56 != 7355668LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 26U;
	static volatile int8_t x238 = -6;
	volatile uint8_t x239 = UINT8_MAX;
	static int32_t x240 = INT32_MIN;
	int32_t t57 = -64;

	t57 = (x237|(x238==(x239/x240)));

	if (t57 != 26) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 27U;
	int32_t x243 = 1013;
	volatile int32_t t58 = 12402;

	t58 = (x241|(x242==(x243/x244)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	int64_t x247 = INT64_MIN;

	t59 = (x245|(x246==(x247/x248)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x250 = -1;
	static volatile int64_t x252 = INT64_MIN;
	int32_t t60 = -14;

	t60 = (x249|(x250==(x251/x252)));

	if (t60 != 627) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = 536268985;
	int64_t x254 = INT64_MIN;
	volatile int32_t t61 = 0;

	t61 = (x253|(x254==(x255/x256)));

	if (t61 != 536268985) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MAX;
	static uint64_t x258 = UINT64_MAX;
	static volatile int16_t x259 = INT16_MIN;
	volatile int32_t t62 = INT32_MAX;

	t62 = (x257|(x258==(x259/x260)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = 4712LL;
	uint16_t x263 = 1564U;
	static int32_t x264 = INT32_MIN;

	t63 = (x261|(x262==(x263/x264)));

	if (t63 != 1097109542LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = -6310589LL;
	int16_t x266 = -8277;
	int32_t x267 = INT32_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int64_t t64 = 61488LL;

	t64 = (x265|(x266==(x267/x268)));

	if (t64 != -6310589LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 55034339820LLU;
	volatile int32_t t65 = 13741;

	t65 = (x269|(x270==(x271/x272)));

	if (t65 != 7826) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	uint64_t x275 = 11742199082LLU;
	int32_t t66 = 48;

	t66 = (x273|(x274==(x275/x276)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = INT8_MIN;
	static int16_t x279 = INT16_MIN;
	volatile uint32_t x280 = UINT32_MAX;

	t67 = (x277|(x278==(x279/x280)));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x283 = 3U;
	static int32_t t68 = 2768;

	t68 = (x281|(x282==(x283/x284)));

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = -1;
	int16_t x286 = -3;
	uint16_t x287 = 1U;
	volatile uint16_t x288 = 28426U;
	int32_t t69 = 578;

	t69 = (x285|(x286==(x287/x288)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -1;
	int32_t x291 = -1;
	int32_t t70 = -1;

	t70 = (x289|(x290==(x291/x292)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = INT64_MIN;
	int64_t x294 = -31LL;
	static int16_t x295 = -6;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x293|(x294==(x295/x296)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = 0;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	static uint32_t t72 = UINT32_MAX;

	t72 = (x297|(x298==(x299/x300)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 15U;
	volatile uint64_t x302 = UINT64_MAX;
	volatile uint32_t x303 = 250812365U;
	volatile int64_t x304 = -13430419700115LL;
	int32_t t73 = 1;

	t73 = (x301|(x302==(x303/x304)));

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x305 = -181158;
	int32_t x306 = INT32_MAX;
	int32_t t74 = 279;

	t74 = (x305|(x306==(x307/x308)));

	if (t74 != -181158) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	uint64_t x310 = 165283736133601362LLU;
	static volatile int16_t x311 = -25;
	uint64_t x312 = 210470532947LLU;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x309|(x310==(x311/x312)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x314 = INT8_MIN;
	static int32_t x315 = INT32_MIN;
	volatile int32_t t76 = -7;

	t76 = (x313|(x314==(x315/x316)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x318 = INT32_MIN;
	volatile uint8_t x319 = 59U;
	uint32_t t77 = 10219U;

	t77 = (x317|(x318==(x319/x320)));

	if (t77 != 413760U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x323 = UINT32_MAX;
	volatile int32_t t78 = -96010941;

	t78 = (x321|(x322==(x323/x324)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -1;
	int64_t x326 = INT64_MAX;
	uint64_t x327 = 7034350267LLU;
	uint32_t x328 = UINT32_MAX;
	int32_t t79 = -67086140;

	t79 = (x325|(x326==(x327/x328)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	static int16_t x331 = 11374;
	uint64_t x332 = 1577LLU;
	static int32_t t80 = -241844;

	t80 = (x329|(x330==(x331/x332)));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x333 = 541184931159LL;
	uint32_t x334 = 14019U;
	static uint64_t x335 = 87059LLU;
	int64_t x336 = -1LL;
	int64_t t81 = 4809615858927LL;

	t81 = (x333|(x334==(x335/x336)));

	if (t81 != 541184931159LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x339 = INT64_MAX;
	static int32_t x340 = -1;
	volatile int32_t t82 = -1;

	t82 = (x337|(x338==(x339/x340)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x342 = 5527U;
	uint32_t x343 = 5U;
	volatile uint16_t x344 = 11466U;
	int32_t t83 = 1055;

	t83 = (x341|(x342==(x343/x344)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	volatile int64_t x346 = INT64_MAX;
	static int8_t x347 = -28;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x345|(x346==(x347/x348)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 3U;
	int8_t x350 = INT8_MIN;
	int64_t x351 = 32111777LL;
	int32_t x352 = 237;
	int32_t t85 = -1396;

	t85 = (x349|(x350==(x351/x352)));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = 1;
	uint64_t x355 = 113867541LLU;
	uint32_t x356 = UINT32_MAX;
	static volatile int32_t t86 = -44;

	t86 = (x353|(x354==(x355/x356)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x359 = 112;
	int8_t x360 = -3;

	t87 = (x357|(x358==(x359/x360)));

	if (t87 != -14461813) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x362 = INT32_MIN;
	int32_t x363 = 7018656;
	int16_t x364 = INT16_MIN;
	int32_t t88 = -57;

	t88 = (x361|(x362==(x363/x364)));

	if (t88 != 75) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -1;
	int16_t x366 = -15;
	int16_t x367 = -15;
	uint32_t x368 = 109944U;
	int32_t t89 = 175692;

	t89 = (x365|(x366==(x367/x368)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = INT32_MAX;
	uint64_t x371 = 15271628LLU;
	volatile int32_t x372 = INT32_MAX;
	volatile uint64_t t90 = 20721029980275LLU;

	t90 = (x369|(x370==(x371/x372)));

	if (t90 != 3342204817595914LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x373 = -1LL;
	uint8_t x375 = 6U;
	int16_t x376 = 7;
	int64_t t91 = -16732230493731865LL;

	t91 = (x373|(x374==(x375/x376)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -1;
	static int8_t x378 = INT8_MIN;
	static uint16_t x379 = 12490U;
	uint32_t x380 = 9U;
	int32_t t92 = -927;

	t92 = (x377|(x378==(x379/x380)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = -24;
	uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 1LLU;
	static int64_t t93 = INT64_MIN;

	t93 = (x381|(x382==(x383/x384)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MIN;
	int8_t x387 = 12;
	uint64_t x388 = 50LLU;
	int64_t t94 = INT64_MIN;

	t94 = (x385|(x386==(x387/x388)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x389 = 2584U;
	int8_t x390 = INT8_MAX;
	int32_t x391 = -483430;
	static volatile int32_t x392 = INT32_MIN;
	volatile uint32_t t95 = 2896U;

	t95 = (x389|(x390==(x391/x392)));

	if (t95 != 2584U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = INT64_MIN;
	volatile uint16_t x395 = 27U;
	int16_t x396 = INT16_MIN;
	volatile int64_t t96 = INT64_MIN;

	t96 = (x393|(x394==(x395/x396)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 28379U;
	int8_t x398 = -1;
	int32_t x399 = 27;
	volatile uint16_t x400 = 26122U;

	t97 = (x397|(x398==(x399/x400)));

	if (t97 != 28379) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x402 = UINT8_MAX;
	volatile int32_t x403 = 300;
	int32_t x404 = 2903;
	volatile int32_t t98 = INT32_MIN;

	t98 = (x401|(x402==(x403/x404)));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x407 = -16152;
	int8_t x408 = INT8_MAX;

	t99 = (x405|(x406==(x407/x408)));

	if (t99 != 7317991LLU) { NG(); } else { ; }
	
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

