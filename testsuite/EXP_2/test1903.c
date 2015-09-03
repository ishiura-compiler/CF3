#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
volatile int64_t x3 = -232850477622844836LL;
int8_t x5 = INT8_MAX;
static int32_t x6 = -749394384;
volatile uint64_t x12 = 869575392484522LLU;
int64_t x23 = 3070818589606LL;
static int32_t x24 = -65063812;
int32_t x26 = 8199733;
int64_t x30 = -14074751151616LL;
int64_t t8 = -495LL;
int8_t x37 = -51;
uint32_t x43 = 929353U;
int16_t x45 = 13995;
volatile uint64_t t11 = 115811450LLU;
volatile int64_t x56 = -1LL;
static int64_t t13 = 12794730LL;
int32_t x59 = -1;
uint64_t x70 = 82129489457406LLU;
int32_t x79 = INT32_MIN;
uint64_t x81 = 19966367700070LLU;
static int16_t x82 = -496;
static uint16_t x84 = UINT16_MAX;
int8_t x88 = INT8_MIN;
static int16_t x93 = 6;
int8_t x94 = -9;
int8_t x96 = -16;
int32_t t23 = 2270;
static volatile uint8_t x97 = 32U;
static int64_t x103 = INT64_MIN;
int64_t t25 = -2391179LL;
static uint64_t x110 = 3931575399LLU;
int32_t x114 = -3648;
uint32_t x120 = UINT32_MAX;
volatile int64_t x127 = -1LL;
uint8_t x128 = 1U;
int32_t x132 = 932702;
volatile int64_t t32 = -4576074826343LL;
int16_t x133 = -531;
uint16_t x137 = UINT16_MAX;
uint64_t t34 = 1121535600557174LLU;
uint16_t x148 = UINT16_MAX;
volatile int32_t t37 = -448638;
static uint8_t x153 = 3U;
volatile int8_t x154 = -1;
volatile int32_t t39 = -330;
int32_t x162 = INT32_MAX;
int64_t x163 = -1LL;
volatile int16_t x175 = INT16_MAX;
int8_t x176 = INT8_MIN;
static int64_t x179 = -6099742674381LL;
int16_t x184 = -1;
volatile int64_t x186 = 521067LL;
volatile int64_t x191 = INT64_MIN;
int16_t x192 = INT16_MIN;
int16_t x195 = INT16_MAX;
uint16_t x200 = 1316U;
volatile int32_t t50 = -21;
int8_t x209 = INT8_MAX;
static uint64_t t53 = 107272LLU;
uint16_t x221 = 25867U;
static int8_t x237 = INT8_MIN;
int64_t x238 = INT64_MIN;
int8_t x248 = INT8_MIN;
uint8_t x255 = 33U;
int64_t x257 = -1LL;
static volatile int64_t x261 = -2023192725LL;
int32_t x262 = INT32_MIN;
int32_t x265 = INT32_MIN;
int64_t x269 = INT64_MIN;
volatile int64_t t67 = -47LL;
uint32_t x274 = UINT32_MAX;
int64_t x275 = INT64_MAX;
int64_t x279 = INT64_MIN;
static int32_t x288 = INT32_MIN;
int64_t t71 = 759206143030LL;
static int16_t x295 = INT16_MIN;
static uint64_t t73 = 323409549988395LLU;
static volatile int8_t x301 = INT8_MIN;
uint16_t x303 = 2U;
int8_t x305 = INT8_MIN;
uint8_t x306 = 24U;
volatile int32_t x307 = INT32_MAX;
static volatile uint32_t t80 = 1260597256U;
int16_t x326 = INT16_MIN;
static uint32_t x327 = 3210U;
int8_t x338 = -1;
uint64_t t85 = 2461181471157LLU;
int64_t x345 = INT64_MIN;
uint32_t x348 = UINT32_MAX;
uint8_t x358 = 3U;
volatile int32_t x361 = 1510536;
int64_t t90 = 1LL;
volatile uint64_t t91 = 957901491659081117LLU;
uint32_t x373 = UINT32_MAX;
uint64_t t93 = 9LLU;
int64_t x377 = 10760822193173LL;
volatile uint8_t x380 = 12U;
uint64_t x382 = 134379111315LLU;
int64_t t96 = -1461LL;
uint32_t x389 = 391878034U;
int8_t x392 = INT8_MIN;
volatile int64_t x393 = INT64_MAX;
uint64_t x396 = 1175362889773LLU;


void f0(void) {
	int8_t x2 = 0;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 242639499LL;

	t0 = ((x1/(x2|x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 10495U;
	volatile int16_t x8 = INT16_MAX;
	uint32_t t1 = 10082U;

	t1 = ((x5/(x6|x7))%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	uint64_t x10 = 2LLU;
	static int16_t x11 = -189;
	static uint64_t t2 = 24LLU;

	t2 = ((x9/(x10|x11))%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 38255201032119459LL;
	int8_t x14 = 0;
	uint64_t x15 = 6366403626716LLU;
	uint16_t x16 = 12054U;
	volatile uint64_t t3 = 44159986LLU;

	t3 = ((x13/(x14|x15))%x16);

	if (t3 != 6008LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static uint16_t x18 = 4U;
	uint32_t x19 = 6U;
	uint8_t x20 = UINT8_MAX;
	volatile uint32_t t4 = 707314U;

	t4 = ((x17/(x18|x19))%x20);

	if (t4 != 42U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile uint32_t x22 = 121424747U;
	int64_t t5 = -78LL;

	t5 = ((x21/(x22|x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static uint32_t x27 = 139U;
	uint16_t x28 = UINT16_MAX;
	int64_t t6 = -35030138924645LL;

	t6 = ((x25/(x26|x27))%x28);

	if (t6 != -15834LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	int16_t x32 = -111;
	volatile int64_t t7 = -24744757254511LL;

	t7 = ((x29/(x30|x31))%x32);

	if (t7 != -67LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 8U;
	volatile int64_t x34 = -116567054306299LL;
	int8_t x35 = INT8_MIN;
	int64_t x36 = -118446LL;

	t8 = ((x33/(x34|x35))%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	static uint32_t x39 = 24378U;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 3858LLU;

	t9 = ((x37/(x38|x39))%x40);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 23527U;
	int16_t x42 = 1746;
	static int8_t x44 = INT8_MIN;
	static uint32_t t10 = 1U;

	t10 = ((x41/(x42|x43))%x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 486633LLU;
	int16_t x47 = INT16_MAX;
	int32_t x48 = 60;

	t11 = ((x45/(x46|x47))%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = 386492006042648LLU;
	int16_t x51 = INT16_MIN;
	volatile uint32_t x52 = UINT32_MAX;
	uint64_t t12 = 16214LLU;

	t12 = ((x49/(x50|x51))%x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 35;
	int8_t x54 = INT8_MIN;
	int8_t x55 = -1;

	t13 = ((x53/(x54|x55))%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 7595U;
	int16_t x58 = -777;
	static int64_t x60 = 16467287620052855LL;
	volatile int64_t t14 = -95951443188LL;

	t14 = ((x57/(x58|x59))%x60);

	if (t14 != -7595LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1225313773091912LLU;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = -1;
	int32_t x64 = INT32_MAX;
	uint64_t t15 = 55665LLU;

	t15 = ((x61/(x62|x63))%x64);

	if (t15 != 285290LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 22936165206090368LLU;
	int8_t x66 = INT8_MIN;
	static uint32_t x67 = 124U;
	static volatile uint16_t x68 = 192U;
	static uint64_t t16 = 14568356LLU;

	t16 = ((x65/(x66|x67))%x68);

	if (t16 != 146LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	uint8_t x71 = 3U;
	int64_t x72 = INT64_MIN;
	uint64_t t17 = 10441760LLU;

	t17 = ((x69/(x70|x71))%x72);

	if (t17 != 224605LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MIN;
	volatile uint64_t t18 = 31LLU;

	t18 = ((x73/(x74|x75))%x76);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 2;
	volatile uint16_t x78 = UINT16_MAX;
	int8_t x80 = -7;
	int32_t t19 = 1671407;

	t19 = ((x77/(x78|x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x83 = 320658899211LLU;
	volatile uint64_t t20 = 2356670650755067274LLU;

	t20 = ((x81/(x82|x83))%x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 1U;
	int64_t x86 = -30559124336532333LL;
	uint16_t x87 = 2U;
	volatile int64_t t21 = -123810531291LL;

	t21 = ((x85/(x86|x87))%x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 1457536U;
	static int16_t x90 = 1;
	int8_t x91 = INT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile uint32_t t22 = 5101697U;

	t22 = ((x89/(x90|x91))%x92);

	if (t22 != 11476U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = -1;

	t23 = ((x93/(x94|x95))%x96);

	if (t23 != -6) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = 755970336097914LL;
	int32_t x99 = -1;
	volatile int32_t x100 = INT32_MIN;
	static volatile int64_t t24 = -9050LL;

	t24 = ((x97/(x98|x99))%x100);

	if (t24 != -32LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MIN;
	int64_t x104 = -58961574317923518LL;

	t25 = ((x101/(x102|x103))%x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 173865861205LLU;
	static int16_t x106 = 0;
	int16_t x107 = INT16_MIN;
	volatile int32_t x108 = INT32_MAX;
	volatile uint64_t t26 = 10558LLU;

	t26 = ((x105/(x106|x107))%x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -494394;
	int16_t x111 = -1;
	volatile int64_t x112 = -1LL;
	volatile uint64_t t27 = 154212395LLU;

	t27 = ((x109/(x110|x111))%x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 11U;
	static int16_t x115 = INT16_MAX;
	volatile int32_t x116 = -1;
	volatile int32_t t28 = 37;

	t28 = ((x113/(x114|x115))%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	volatile uint32_t t29 = 88494070U;

	t29 = ((x117/(x118|x119))%x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -116602;
	int8_t x122 = 2;
	uint32_t x123 = UINT32_MAX;
	static uint16_t x124 = 6U;
	static volatile uint32_t t30 = 5412603U;

	t30 = ((x121/(x122|x123))%x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -31;
	volatile int32_t x126 = 1;
	volatile int64_t t31 = -113721423895694LL;

	t31 = ((x125/(x126|x127))%x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	int64_t x131 = INT64_MIN;

	t32 = ((x129/(x130|x131))%x132);

	if (t32 != 403644LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = 217834U;
	int8_t x135 = -1;
	int8_t x136 = INT8_MAX;
	static volatile uint32_t t33 = 10573U;

	t33 = ((x133/(x134|x135))%x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -1;
	uint64_t x139 = 177218037799851LLU;
	static int64_t x140 = 256147870673LL;

	t34 = ((x137/(x138|x139))%x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 3367;
	static volatile uint64_t x142 = 458566LLU;
	static int64_t x143 = -1LL;
	volatile int64_t x144 = INT64_MAX;
	uint64_t t35 = 496426997729LLU;

	t35 = ((x141/(x142|x143))%x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -3590404590666339LL;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	volatile int64_t t36 = -1549429269679994LL;

	t36 = ((x145/(x146|x147))%x148);

	if (t36 != 8641LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	static int8_t x152 = INT8_MIN;

	t37 = ((x149/(x150|x151))%x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x155 = 4034247989234176282LLU;
	uint32_t x156 = 6693U;
	volatile uint64_t t38 = 45238560033LLU;

	t38 = ((x153/(x154|x155))%x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int32_t x158 = 120652143;
	volatile int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;

	t39 = ((x157/(x158|x159))%x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 5U;
	volatile int16_t x164 = -25;
	static volatile int64_t t40 = 1LL;

	t40 = ((x161/(x162|x163))%x164);

	if (t40 != -5LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 13498LL;
	int16_t x166 = -1;
	int16_t x167 = 0;
	int8_t x168 = -1;
	int64_t t41 = -24608720739LL;

	t41 = ((x165/(x166|x167))%x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MAX;
	static uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;
	static volatile uint64_t t42 = 1289570297LLU;

	t42 = ((x169/(x170|x171))%x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 1046576U;
	int32_t x174 = -1;
	uint32_t t43 = 3023U;

	t43 = ((x173/(x174|x175))%x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int32_t x178 = -370896;
	volatile int32_t x180 = INT32_MIN;
	static int64_t t44 = 3021917LL;

	t44 = ((x177/(x178|x179))%x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x181 = -1LL;
	int16_t x182 = -1;
	static volatile int64_t x183 = INT64_MIN;
	volatile int64_t t45 = -211447695607946649LL;

	t45 = ((x181/(x182|x183))%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 180255507U;
	volatile uint64_t x187 = UINT64_MAX;
	static int16_t x188 = 69;
	volatile uint64_t t46 = 3509LLU;

	t46 = ((x185/(x186|x187))%x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int64_t t47 = 564798556655808LL;

	t47 = ((x189/(x190|x191))%x192);

	if (t47 != 256LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	static int64_t x194 = INT64_MAX;
	volatile int64_t x196 = 475307LL;
	volatile int64_t t48 = -1025399240LL;

	t48 = ((x193/(x194|x195))%x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -62001LL;
	volatile int64_t x198 = -1LL;
	static int8_t x199 = INT8_MIN;
	volatile int64_t t49 = -209506733LL;

	t49 = ((x197/(x198|x199))%x200);

	if (t49 != 149LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = -1;
	uint16_t x203 = 0U;
	int32_t x204 = INT32_MIN;

	t50 = ((x201/(x202|x203))%x204);

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -1LL;
	volatile int64_t x207 = INT64_MAX;
	volatile int8_t x208 = INT8_MIN;
	int64_t t51 = -449727144LL;

	t51 = ((x205/(x206|x207))%x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x210 = UINT8_MAX;
	volatile int64_t x211 = INT64_MIN;
	uint16_t x212 = UINT16_MAX;
	int64_t t52 = 1986659509064147LL;

	t52 = ((x209/(x210|x211))%x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1LL;
	uint64_t x214 = 1692752299583141LLU;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;

	t53 = ((x213/(x214|x215))%x216);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 32271743LLU;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = INT16_MIN;
	uint8_t x220 = 81U;
	volatile uint64_t t54 = 3383882LLU;

	t54 = ((x217/(x218|x219))%x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x222 = INT32_MIN;
	uint32_t x223 = 34352U;
	int8_t x224 = -1;
	uint32_t t55 = 232377907U;

	t55 = ((x221/(x222|x223))%x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile int16_t x226 = -15;
	int32_t x227 = INT32_MIN;
	static int8_t x228 = 47;
	volatile int32_t t56 = 27;

	t56 = ((x225/(x226|x227))%x228);

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 486U;
	volatile int64_t x230 = INT64_MIN;
	int16_t x231 = 9;
	int32_t x232 = -1;
	volatile int64_t t57 = 7358LL;

	t57 = ((x229/(x230|x231))%x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	uint64_t x234 = 43282575799200138LLU;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	uint64_t t58 = 3660711391295LLU;

	t58 = ((x233/(x234|x235))%x236);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x239 = -1LL;
	static volatile int16_t x240 = INT16_MAX;
	int64_t t59 = -1LL;

	t59 = ((x237/(x238|x239))%x240);

	if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	static int64_t x242 = INT64_MIN;
	int64_t x243 = 2005786180139LL;
	int8_t x244 = -1;
	int64_t t60 = 62588578982987600LL;

	t60 = ((x241/(x242|x243))%x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	uint32_t x246 = 151237113U;
	static int32_t x247 = INT32_MIN;
	volatile uint32_t t61 = 1030U;

	t61 = ((x245/(x246|x247))%x248);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	uint8_t x250 = 3U;
	static volatile uint16_t x251 = 5U;
	int16_t x252 = -1;
	int32_t t62 = 442172472;

	t62 = ((x249/(x250|x251))%x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 22938U;
	uint32_t x254 = 0U;
	int16_t x256 = -481;
	uint32_t t63 = 14924738U;

	t63 = ((x253/(x254|x255))%x256);

	if (t63 != 695U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x258 = 3;
	static int16_t x259 = INT16_MIN;
	uint64_t x260 = 819597976LLU;
	uint64_t t64 = 3456019941553568LLU;

	t64 = ((x257/(x258|x259))%x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x263 = INT8_MIN;
	int16_t x264 = -1;
	volatile int64_t t65 = -61073273557168LL;

	t65 = ((x261/(x262|x263))%x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x266 = -10;
	uint16_t x267 = 6U;
	int8_t x268 = INT8_MIN;
	static int32_t t66 = -11862;

	t66 = ((x265/(x266|x267))%x268);

	if (t66 != 76) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x270 = UINT16_MAX;
	uint16_t x271 = UINT16_MAX;
	uint32_t x272 = UINT32_MAX;

	t67 = ((x269/(x270|x271))%x272);

	if (t67 != -2147549184LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int64_t x276 = -1LL;
	volatile int64_t t68 = -12249408LL;

	t68 = ((x273/(x274|x275))%x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 22U;
	int32_t x278 = INT32_MIN;
	int32_t x280 = 1965572;
	volatile int64_t t69 = 51764682LL;

	t69 = ((x277/(x278|x279))%x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -10;
	int32_t x282 = -1;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 241598;

	t70 = ((x281/(x282|x283))%x284);

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	uint16_t x286 = 30680U;
	int64_t x287 = INT64_MAX;

	t71 = ((x285/(x286|x287))%x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MAX;
	volatile uint32_t x291 = UINT32_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	static volatile int64_t t72 = 1173485962280450LL;

	t72 = ((x289/(x290|x291))%x292);

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 0U;
	uint64_t x296 = 36499634720806LLU;

	t73 = ((x293/(x294|x295))%x296);

	if (t73 != 11183987803245LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 20;
	static volatile int16_t x298 = 1569;
	uint16_t x299 = 0U;
	int32_t x300 = -139;
	static int32_t t74 = 1092683;

	t74 = ((x297/(x298|x299))%x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 1U;
	uint8_t x304 = 78U;
	static int32_t t75 = -541;

	t75 = ((x301/(x302|x303))%x304);

	if (t75 != -42) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x308 = -1640;
	volatile int32_t t76 = 443255;

	t76 = ((x305/(x306|x307))%x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x309 = INT8_MAX;
	uint8_t x310 = 1U;
	int64_t x311 = -1LL;
	int8_t x312 = INT8_MIN;
	volatile int64_t t77 = -3529597LL;

	t77 = ((x309/(x310|x311))%x312);

	if (t77 != -127LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	static int8_t x314 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	static volatile int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 3085377723LL;

	t78 = ((x313/(x314|x315))%x316);

	if (t78 != -32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 174618;
	volatile int8_t x318 = -5;
	int32_t x319 = 0;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = 2460629;

	t79 = ((x317/(x318|x319))%x320);

	if (t79 != -34923) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	static uint32_t x322 = 254U;
	volatile int32_t x323 = INT32_MIN;
	volatile int8_t x324 = -1;

	t80 = ((x321/(x322|x323))%x324);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	volatile int16_t x328 = 7;
	volatile int64_t t81 = 2641179054LL;

	t81 = ((x325/(x326|x327))%x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MAX;
	uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 6U;
	uint64_t t82 = 18835480804169197LLU;

	t82 = ((x329/(x330|x331))%x332);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int32_t x334 = INT32_MIN;
	int8_t x335 = 1;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t83 = 38;

	t83 = ((x333/(x334|x335))%x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int64_t x339 = -1LL;
	int8_t x340 = -3;
	volatile int64_t t84 = -71349707258549727LL;

	t84 = ((x337/(x338|x339))%x340);

	if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 12LLU;
	uint16_t x342 = 56U;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;

	t85 = ((x341/(x342|x343))%x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = UINT32_MAX;
	int64_t t86 = 638719848593256693LL;

	t86 = ((x345/(x346|x347))%x348);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;
	uint32_t x352 = 2802436U;
	uint64_t t87 = 1764866166696017715LLU;

	t87 = ((x349/(x350|x351))%x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x353 = 3278171U;
	static int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = 14U;
	volatile int64_t t88 = -3565744268110LL;

	t88 = ((x353/(x354|x355))%x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	uint32_t t89 = 1U;

	t89 = ((x357/(x358|x359))%x360);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x362 = INT8_MIN;
	int64_t x363 = 1LL;
	static volatile int8_t x364 = INT8_MAX;

	t90 = ((x361/(x362|x363))%x364);

	if (t90 != -82LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static uint64_t x366 = 552768LLU;
	int16_t x367 = INT16_MAX;
	volatile uint32_t x368 = 259621463U;

	t91 = ((x365/(x366|x367))%x368);

	if (t91 != 44982800LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -22172858506578LL;
	static volatile int8_t x370 = INT8_MIN;
	uint64_t x371 = 135840537672LLU;
	uint32_t x372 = 65U;
	uint64_t t92 = 6205230739003852756LLU;

	t92 = ((x369/(x370|x371))%x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = -308;
	volatile int64_t x375 = INT64_MIN;
	volatile uint64_t x376 = 1057325569013520LLU;

	t93 = ((x373/(x374|x375))%x376);

	if (t93 != 642196685736997LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x378 = 834LLU;
	int32_t x379 = INT32_MAX;
	uint64_t t94 = 319902LLU;

	t94 = ((x377/(x378|x379))%x380);

	if (t94 != 6LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	static uint16_t x383 = 83U;
	uint32_t x384 = 241U;
	volatile uint64_t t95 = 7301283503374939LLU;

	t95 = ((x381/(x382|x383))%x384);

	if (t95 != 147LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 4U;
	uint16_t x386 = 20027U;
	static volatile int64_t x387 = INT64_MIN;
	volatile uint8_t x388 = 15U;

	t96 = ((x385/(x386|x387))%x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	static volatile int64_t t97 = 136960623625137LL;

	t97 = ((x389/(x390|x391))%x392);

	if (t97 != -55LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x394 = -1;
	static uint32_t x395 = UINT32_MAX;
	volatile uint64_t t98 = 3542054411074600798LLU;

	t98 = ((x393/(x394|x395))%x396);

	if (t98 != 2147483648LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = UINT32_MAX;
	static int16_t x399 = 1;
	int8_t x400 = INT8_MIN;
	uint32_t t99 = 0U;

	t99 = ((x397/(x398|x399))%x400);

	if (t99 != 0U) { NG(); } else { ; }
	
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

