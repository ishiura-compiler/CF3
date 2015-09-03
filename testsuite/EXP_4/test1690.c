#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -1402589860078072740LL;
int64_t x8 = INT64_MIN;
int32_t t1 = 8541;
volatile uint64_t x13 = 25LLU;
uint16_t x19 = 10U;
int8_t x23 = -1;
static uint64_t x30 = UINT64_MAX;
int32_t x31 = 1;
static volatile int64_t x32 = -1LL;
int8_t x36 = -1;
volatile uint64_t x37 = 100LLU;
int64_t x39 = -1LL;
int32_t x42 = INT32_MIN;
int32_t t10 = -6083;
static uint32_t x48 = 0U;
volatile uint64_t x51 = UINT64_MAX;
volatile int64_t x53 = -1475LL;
uint64_t t13 = 6693LLU;
int16_t x68 = -1;
volatile int8_t x73 = 3;
int32_t x77 = INT32_MIN;
int8_t x80 = 0;
int16_t x86 = INT16_MIN;
int32_t t22 = 661875;
uint8_t x94 = 14U;
int64_t x98 = INT64_MAX;
uint32_t x99 = 2933U;
uint16_t x101 = 111U;
uint64_t x104 = UINT64_MAX;
int16_t x110 = -77;
volatile int32_t x112 = 231722;
int64_t t27 = 39903494LL;
int8_t x114 = INT8_MIN;
int64_t x115 = -1LL;
int64_t x122 = INT64_MIN;
static volatile uint64_t t31 = 68853LLU;
uint16_t x129 = 5U;
uint64_t x140 = 255301554051LLU;
int64_t x143 = INT64_MIN;
uint64_t x150 = 634883173069738LLU;
static uint32_t x152 = UINT32_MAX;
int32_t t38 = 7;
uint8_t x157 = UINT8_MAX;
volatile uint32_t x160 = 1426U;
int16_t x168 = INT16_MAX;
int8_t x176 = 1;
volatile int64_t t43 = 31936676237LL;
volatile int32_t t44 = 3;
int8_t x186 = INT8_MAX;
volatile int8_t x187 = INT8_MAX;
uint64_t x190 = 7862508LLU;
volatile uint64_t t47 = 1592221148538593LLU;
volatile int16_t x193 = -1;
int32_t x197 = INT32_MIN;
int8_t x204 = INT8_MIN;
volatile uint64_t t50 = 254105LLU;
volatile uint64_t x206 = 14LLU;
volatile uint16_t x209 = 1U;
uint32_t x217 = 14377596U;
static int8_t x219 = INT8_MAX;
volatile uint32_t x220 = UINT32_MAX;
static uint32_t t55 = 163725U;
static int32_t x232 = 1;
uint8_t x234 = 23U;
static volatile int8_t x236 = INT8_MIN;
int16_t x238 = -11;
static volatile uint32_t t60 = 47U;
int16_t x251 = INT16_MAX;
int16_t x261 = INT16_MIN;
static uint64_t x262 = 228804834LLU;
int64_t x264 = -1LL;
volatile uint16_t x271 = 752U;
uint64_t x277 = UINT64_MAX;
int8_t x279 = -1;
int32_t x283 = 1;
int16_t x295 = INT16_MIN;
int8_t x297 = INT8_MIN;
static int8_t x300 = -1;
static int32_t x316 = -1;
int16_t x319 = INT16_MIN;
static volatile uint64_t t80 = 1471141228029345385LLU;
volatile int16_t x327 = -2409;
volatile uint64_t t82 = 317276208LLU;
volatile int64_t x335 = INT64_MAX;
volatile int64_t t86 = -1LL;
int8_t x352 = INT8_MIN;
int16_t x354 = INT16_MIN;
static volatile int16_t x358 = 14518;
volatile uint64_t x361 = UINT64_MAX;
static int32_t x362 = 83885222;
uint32_t x367 = 2046U;
volatile int32_t x368 = 10996;
volatile int64_t t91 = -1LL;
int32_t x372 = 4;
static uint32_t x374 = 42U;
int32_t x382 = INT32_MIN;
uint16_t x385 = 15U;
int64_t x386 = 16877506363676LL;
uint8_t x388 = UINT8_MAX;
volatile int64_t t96 = -1LL;
uint32_t x389 = 24094914U;
uint8_t x390 = UINT8_MAX;
int8_t x396 = 0;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	int64_t x3 = 276576393482173081LL;
	volatile int8_t x4 = -2;

	t0 = (x1^(x2^(x3<=x4)));

	if (t0 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 132U;
	static uint8_t x6 = 50U;
	static int64_t x7 = 1585724LL;

	t1 = (x5^(x6^(x7<=x8)));

	if (t1 != 182) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = INT16_MAX;
	int8_t x11 = INT8_MAX;
	static int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = -2337;

	t2 = (x9^(x10^(x11<=x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 3004811LLU;
	uint16_t x15 = 25U;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t3 = 68631502193234LLU;

	t3 = (x13^(x14^(x15<=x16)));

	if (t3 != 3004819LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int64_t x18 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	int64_t t4 = -501138739LL;

	t4 = (x17^(x18^(x19<=x20)));

	if (t4 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -313480;
	int16_t x22 = 12541;
	uint32_t x24 = UINT32_MAX;
	static int32_t t5 = -172086;

	t5 = (x21^(x22^(x23<=x24)));

	if (t5 != -325756) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MAX;
	int8_t x26 = 17;
	int32_t x27 = 138;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -30700;

	t6 = (x25^(x26^(x27<=x28)));

	if (t6 != 2147483630) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint64_t t7 = 659184863106413LLU;

	t7 = (x29^(x30^(x31<=x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	uint16_t x34 = 0U;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = 92;

	t8 = (x33^(x34^(x35<=x36)));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -13;
	int32_t x40 = -1;
	volatile uint64_t t9 = 61578943880LLU;

	t9 = (x37^(x38^(x39<=x40)));

	if (t9 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -4;
	int32_t x43 = INT32_MIN;
	int8_t x44 = -1;

	t10 = (x41^(x42^(x43<=x44)));

	if (t10 != 2147483645) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = 0U;
	static int32_t x47 = INT32_MIN;
	static int32_t t11 = -833088;

	t11 = (x45^(x46^(x47<=x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 768LL;
	volatile int32_t x50 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	int64_t t12 = 10835828817127LL;

	t12 = (x49^(x50^(x51<=x52)));

	if (t12 != -2147482880LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = -1;
	static int8_t x56 = -19;

	t13 = (x53^(x54^(x55<=x56)));

	if (t13 != 1474LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -123696;
	volatile int32_t x58 = -12521;
	static int16_t x59 = INT16_MIN;
	volatile int64_t x60 = -1LL;
	volatile int32_t t14 = 704153178;

	t14 = (x57^(x58^(x59<=x60)));

	if (t14 != 119750) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 187297LLU;
	volatile int64_t x62 = INT64_MIN;
	volatile int64_t x63 = INT64_MAX;
	static int32_t x64 = -1;
	uint64_t t15 = 6064277197675507380LLU;

	t15 = (x61^(x62^(x63<=x64)));

	if (t15 != 9223372036854963105LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 10U;
	uint8_t x66 = UINT8_MAX;
	volatile uint64_t x67 = UINT64_MAX;
	static volatile int32_t t16 = 1;

	t16 = (x65^(x66^(x67<=x68)));

	if (t16 != 244) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static int8_t x70 = 1;
	int32_t x71 = 10117840;
	volatile int64_t x72 = -244LL;
	int32_t t17 = -198;

	t17 = (x69^(x70^(x71<=x72)));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -2;
	int64_t x75 = -16509804327LL;
	int64_t x76 = -1978313801563LL;
	int32_t t18 = 1132;

	t18 = (x73^(x74^(x75<=x76)));

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x78 = 1253U;
	int64_t x79 = INT64_MIN;
	volatile int32_t t19 = 376753;

	t19 = (x77^(x78^(x79<=x80)));

	if (t19 != -2147482396) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = 2;
	int32_t x82 = INT32_MIN;
	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = -1;
	static volatile int32_t t20 = 73969;

	t20 = (x81^(x82^(x83<=x84)));

	if (t20 != -2147483645) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MAX;
	int64_t x87 = 1LL;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 1049;

	t21 = (x85^(x86^(x87<=x88)));

	if (t21 != -32641) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 105673;
	uint8_t x90 = 118U;
	static int8_t x91 = 10;
	int32_t x92 = INT32_MAX;

	t22 = (x89^(x90^(x91<=x92)));

	if (t22 != 105662) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	volatile int32_t x95 = INT32_MIN;
	static int32_t x96 = INT32_MIN;
	int64_t t23 = 18962LL;

	t23 = (x93^(x94^(x95<=x96)));

	if (t23 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int8_t x100 = -1;
	volatile int64_t t24 = 164104556788LL;

	t24 = (x97^(x98^(x99<=x100)));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 33728851963LLU;
	int32_t t25 = -827955824;

	t25 = (x101^(x102^(x103<=x104)));

	if (t25 != -18) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 3U;
	int16_t x106 = -1;
	int32_t x107 = -16377;
	int8_t x108 = 1;
	volatile int32_t t26 = 13404537;

	t26 = (x105^(x106^(x107<=x108)));

	if (t26 != -3) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -178197321865494LL;
	int8_t x111 = -1;

	t27 = (x109^(x110^(x111<=x112)));

	if (t27 != 178197321865560LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -705722;
	volatile uint64_t x116 = 41LLU;
	int32_t t28 = -102285981;

	t28 = (x113^(x114^(x115<=x116)));

	if (t28 != 705734) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 186677867U;
	int32_t x118 = 32739340;
	int64_t x119 = 872532518839LL;
	int16_t x120 = INT16_MAX;
	uint32_t t29 = 2553765U;

	t29 = (x117^(x118^(x119<=x120)));

	if (t29 != 181660263U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	volatile uint16_t x123 = 84U;
	int16_t x124 = 34;
	static int64_t t30 = INT64_MAX;

	t30 = (x121^(x122^(x123<=x124)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 6478275083799689156LLU;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 0U;
	int16_t x128 = INT16_MIN;

	t31 = (x125^(x126^(x127<=x128)));

	if (t31 != 11968468989909862468LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = INT64_MIN;
	static int8_t x131 = 0;
	int16_t x132 = 84;
	int64_t t32 = 0LL;

	t32 = (x129^(x130^(x131<=x132)));

	if (t32 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 93U;
	uint32_t x134 = UINT32_MAX;
	volatile uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MIN;
	uint32_t t33 = 454365876U;

	t33 = (x133^(x134^(x135<=x136)));

	if (t33 != 4294967202U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 235434U;
	int64_t x138 = INT64_MAX;
	static int8_t x139 = INT8_MIN;
	static int64_t t34 = 68914532LL;

	t34 = (x137^(x138^(x139<=x140)));

	if (t34 != 9223372036854540373LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MAX;
	int32_t x142 = -1;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -22438580;

	t35 = (x141^(x142^(x143<=x144)));

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = 63542443772869LLU;
	uint64_t x147 = UINT64_MAX;
	static int64_t x148 = -1LL;
	static volatile uint64_t t36 = 407LLU;

	t36 = (x145^(x146^(x147<=x148)));

	if (t36 != 18446680530218519492LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 351350551LLU;
	static int8_t x151 = 0;
	volatile uint64_t t37 = 28447771250934LLU;

	t37 = (x149^(x150^(x151<=x152)));

	if (t37 != 634883524271292LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 100U;
	int16_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = 3794U;

	t38 = (x153^(x154^(x155<=x156)));

	if (t38 != -102) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x158 = 1U;
	volatile int16_t x159 = 3380;
	volatile int32_t t39 = 134;

	t39 = (x157^(x158^(x159<=x160)));

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -1;
	static int64_t x162 = -1LL;
	int16_t x163 = 1;
	uint16_t x164 = UINT16_MAX;
	volatile int64_t t40 = -179010415LL;

	t40 = (x161^(x162^(x163<=x164)));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	uint32_t x167 = 514241U;
	volatile int32_t t41 = -14072;

	t41 = (x165^(x166^(x167<=x168)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	static uint32_t x172 = 1772552U;
	static volatile int64_t t42 = -29368LL;

	t42 = (x169^(x170^(x171<=x172)));

	if (t42 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	volatile int8_t x175 = INT8_MIN;

	t43 = (x173^(x174^(x175<=x176)));

	if (t43 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	int32_t x180 = 485;

	t44 = (x177^(x178^(x179<=x180)));

	if (t44 != 2147483521) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	volatile int64_t x182 = INT64_MIN;
	uint32_t x183 = UINT32_MAX;
	volatile uint8_t x184 = 0U;
	static volatile int64_t t45 = 1321975LL;

	t45 = (x181^(x182^(x183<=x184)));

	if (t45 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static volatile uint32_t x188 = 1921U;
	static volatile int32_t t46 = 260;

	t46 = (x185^(x186^(x187<=x188)));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 49253934612484LL;
	volatile uint16_t x191 = 8U;
	static uint16_t x192 = UINT16_MAX;

	t47 = (x189^(x190^(x191<=x192)));

	if (t47 != 49253933201641LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = 87U;
	uint16_t x195 = 265U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -53440685;

	t48 = (x193^(x194^(x195<=x196)));

	if (t48 != -88) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	volatile uint32_t x199 = 176424062U;
	static int64_t x200 = -1LL;
	int32_t t49 = 2108;

	t49 = (x197^(x198^(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 1925263LLU;
	static uint32_t x202 = 2840U;
	uint16_t x203 = 148U;

	t50 = (x201^(x202^(x203<=x204)));

	if (t50 != 1928087LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MAX;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -1;
	volatile uint64_t t51 = 10LLU;

	t51 = (x205^(x206^(x207<=x208)));

	if (t51 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -1;
	volatile uint64_t x211 = 192227LLU;
	static int16_t x212 = -1;
	int32_t t52 = -1;

	t52 = (x209^(x210^(x211<=x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = -1;
	static int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	static int64_t t53 = -6601675LL;

	t53 = (x213^(x214^(x215<=x216)));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	static volatile uint32_t t54 = 0U;

	t54 = (x217^(x218^(x219<=x220)));

	if (t54 != 4280607357U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1810;
	static uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;

	t55 = (x221^(x222^(x223<=x224)));

	if (t55 != 1808U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x226 = UINT32_MAX;
	static int64_t x227 = 1599830349LL;
	uint8_t x228 = 23U;
	volatile int64_t t56 = -12674103192738LL;

	t56 = (x225^(x226^(x227<=x228)));

	if (t56 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 23300LLU;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = -38;
	uint64_t t57 = 6402LLU;

	t57 = (x229^(x230^(x231<=x232)));

	if (t57 != 9223372036854799109LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile uint32_t x235 = 14513938U;
	volatile int64_t t58 = 13LL;

	t58 = (x233^(x234^(x235<=x236)));

	if (t58 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	static volatile int32_t x239 = -1;
	int16_t x240 = -1;
	volatile int64_t t59 = -46787395LL;

	t59 = (x237^(x238^(x239<=x240)));

	if (t59 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	uint32_t x242 = UINT32_MAX;
	volatile int64_t x243 = -1LL;
	static int64_t x244 = INT64_MAX;

	t60 = (x241^(x242^(x243<=x244)));

	if (t60 != 126U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	int8_t x248 = -1;
	volatile int32_t t61 = 1;

	t61 = (x245^(x246^(x247<=x248)));

	if (t61 != -2147483522) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	static int64_t x250 = -6423223985LL;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t62 = 25865308LL;

	t62 = (x249^(x250^(x251<=x252)));

	if (t62 != 9223372030431551823LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = INT32_MAX;
	volatile uint64_t x255 = 642268723461170LLU;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -94606887;

	t63 = (x253^(x254^(x255<=x256)));

	if (t63 != 2147483521) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 237;
	static uint8_t x258 = 2U;
	int32_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = -125238045;

	t64 = (x257^(x258^(x259<=x260)));

	if (t64 != 238) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x263 = UINT16_MAX;
	volatile uint64_t t65 = 333298894132658896LLU;

	t65 = (x261^(x262^(x263<=x264)));

	if (t65 != 18446744073480751330LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 42U;
	int32_t x266 = INT32_MIN;
	int64_t x267 = 399611988142398071LL;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = -7;

	t66 = (x265^(x266^(x267<=x268)));

	if (t66 != -2147483606) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MAX;
	uint8_t x272 = 83U;
	volatile int64_t t67 = -21LL;

	t67 = (x269^(x270^(x271<=x272)));

	if (t67 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = -29;
	volatile int64_t x275 = INT64_MIN;
	static volatile int8_t x276 = INT8_MIN;
	static int32_t t68 = 99;

	t68 = (x273^(x274^(x275<=x276)));

	if (t68 != 98) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 2524954643LLU;
	int16_t x280 = INT16_MAX;
	uint64_t t69 = 505613816723012LLU;

	t69 = (x277^(x278^(x279<=x280)));

	if (t69 != 18446744071184596973LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	uint64_t x282 = 1LLU;
	int64_t x284 = 22LL;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x281^(x282^(x283<=x284)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 0;
	uint8_t x286 = UINT8_MAX;
	volatile int8_t x287 = INT8_MIN;
	int8_t x288 = 5;
	int32_t t71 = 923397;

	t71 = (x285^(x286^(x287<=x288)));

	if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = 3431834LLU;
	int64_t x290 = -11LL;
	uint16_t x291 = 2U;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t72 = 581642237139LLU;

	t72 = (x289^(x290^(x291<=x292)));

	if (t72 != 18446744073706119791LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static int64_t x294 = INT64_MIN;
	uint32_t x296 = 2117927406U;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x293^(x294^(x295<=x296)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 45793164U;
	volatile uint16_t x299 = 5U;
	uint32_t t74 = 949690U;

	t74 = (x297^(x298^(x299<=x300)));

	if (t74 != 4249174028U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 0LL;
	static uint32_t x302 = 713793672U;
	volatile int64_t x303 = INT64_MIN;
	static int64_t x304 = INT64_MIN;
	int64_t t75 = 6371721920LL;

	t75 = (x301^(x302^(x303<=x304)));

	if (t75 != 713793673LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MAX;
	static int32_t x308 = INT32_MIN;
	volatile uint32_t t76 = 963543U;

	t76 = (x305^(x306^(x307<=x308)));

	if (t76 != 32767U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 21U;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = 6;
	volatile uint64_t x312 = 2444741810LLU;
	int64_t t77 = -15598LL;

	t77 = (x309^(x310^(x311<=x312)));

	if (t77 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -1;
	static int16_t x314 = INT16_MAX;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t t78 = 61272;

	t78 = (x313^(x314^(x315<=x316)));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 22386U;
	static int8_t x318 = INT8_MIN;
	uint64_t x320 = 29LLU;
	static int32_t t79 = -5507;

	t79 = (x317^(x318^(x319<=x320)));

	if (t79 != -22286) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = 48648LLU;
	static int8_t x323 = -1;
	static uint32_t x324 = 1736U;

	t80 = (x321^(x322^(x323<=x324)));

	if (t80 != 18446744073709502967LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = -6576;
	static int16_t x326 = INT16_MAX;
	static int64_t x328 = -1LL;
	volatile int32_t t81 = 91068;

	t81 = (x325^(x326^(x327<=x328)));

	if (t81 != -26194) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	static int16_t x330 = INT16_MAX;
	int64_t x331 = -119127949007LL;
	int8_t x332 = INT8_MIN;

	t82 = (x329^(x330^(x331<=x332)));

	if (t82 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	volatile uint64_t x334 = 11798251308LLU;
	int32_t x336 = INT32_MIN;
	uint64_t t83 = 207118559697LLU;

	t83 = (x333^(x334^(x335<=x336)));

	if (t83 != 18446744061911271212LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 3624U;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 37U;
	static uint16_t x340 = 7160U;
	static volatile int32_t t84 = 5434;

	t84 = (x337^(x338^(x339<=x340)));

	if (t84 != -2147480023) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int32_t x342 = 2;
	static int32_t x343 = INT32_MAX;
	int8_t x344 = 1;
	int32_t t85 = 24111745;

	t85 = (x341^(x342^(x343<=x344)));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	volatile int64_t x346 = -3030360367LL;
	uint64_t x347 = UINT64_MAX;
	static uint64_t x348 = 275885613897770630LLU;

	t86 = (x345^(x346^(x347<=x348)));

	if (t86 != 3030360366LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MAX;
	int64_t x350 = -36872LL;
	static volatile uint16_t x351 = 3U;
	static volatile int64_t t87 = -50330456242LL;

	t87 = (x349^(x350^(x351<=x352)));

	if (t87 != -61433LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -885317938LL;
	int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MIN;
	static int64_t t88 = 585936984LL;

	t88 = (x353^(x354^(x355<=x356)));

	if (t88 != 885300942LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 691362435406418LLU;
	volatile uint16_t x359 = 404U;
	uint16_t x360 = UINT16_MAX;
	volatile uint64_t t89 = 8237808LLU;

	t89 = (x357^(x358^(x359<=x360)));

	if (t89 != 691362435408613LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t90 = 256LLU;

	t90 = (x361^(x362^(x363<=x364)));

	if (t90 != 18446744073625666392LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int16_t x366 = INT16_MAX;

	t91 = (x365^(x366^(x367<=x368)));

	if (t91 != -32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x369 = UINT64_MAX;
	int64_t x370 = 55481LL;
	int8_t x371 = INT8_MAX;
	volatile uint64_t t92 = 2093LLU;

	t92 = (x369^(x370^(x371<=x372)));

	if (t92 != 18446744073709496134LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = 0U;
	volatile uint64_t x375 = 3765501LLU;
	int64_t x376 = 1LL;
	volatile uint32_t t93 = 352453U;

	t93 = (x373^(x374^(x375<=x376)));

	if (t93 != 42U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -12;
	volatile int8_t x378 = INT8_MAX;
	volatile int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	static int32_t t94 = -21;

	t94 = (x377^(x378^(x379<=x380)));

	if (t94 != -118) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = UINT64_MAX;
	uint64_t x383 = 23381089251284LLU;
	static int16_t x384 = INT16_MAX;
	uint64_t t95 = 12177235977441784LLU;

	t95 = (x381^(x382^(x383<=x384)));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x387 = INT16_MIN;

	t96 = (x385^(x386^(x387<=x388)));

	if (t96 != 16877506363666LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 671237620U;
	volatile uint32_t t97 = 11522U;

	t97 = (x389^(x390^(x391<=x392)));

	if (t97 != 24094781U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	int8_t x394 = INT8_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	int64_t t98 = -115926648LL;

	t98 = (x393^(x394^(x395<=x396)));

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = -872108382;
	int32_t x398 = INT32_MIN;
	static int64_t x399 = -116265585747479LL;
	static int32_t x400 = 7347;
	int32_t t99 = 0;

	t99 = (x397^(x398^(x399<=x400)));

	if (t99 != 1275375267) { NG(); } else { ; }
	
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

