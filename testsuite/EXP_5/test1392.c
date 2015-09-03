#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x17 = INT64_MAX;
int16_t x19 = INT16_MIN;
volatile int64_t t3 = INT64_MAX;
uint8_t x23 = 8U;
uint32_t x24 = 3U;
volatile int32_t t5 = -89969;
volatile uint64_t t6 = 30217249347LLU;
volatile uint32_t x34 = 44863U;
uint64_t x35 = UINT64_MAX;
uint16_t x38 = 40U;
static int32_t x48 = INT32_MAX;
int64_t t10 = INT64_MIN;
int16_t x54 = INT16_MIN;
volatile int16_t x58 = -1;
uint64_t t14 = 1064257LLU;
uint32_t x68 = 1085795U;
int8_t x70 = 9;
uint32_t x71 = 406U;
int64_t x73 = INT64_MIN;
int64_t t17 = INT64_MIN;
volatile uint32_t x80 = UINT32_MAX;
int16_t x83 = INT16_MIN;
static int8_t x84 = INT8_MIN;
int64_t x86 = INT64_MIN;
int64_t x94 = -982833090603267946LL;
volatile int64_t t22 = -13152729869172LL;
int16_t x99 = INT16_MIN;
static volatile int16_t x101 = -1;
static uint64_t x107 = UINT64_MAX;
uint32_t t26 = 351U;
uint64_t x115 = 796068174877LLU;
int8_t x119 = INT8_MIN;
uint16_t x120 = UINT16_MAX;
int32_t x122 = INT32_MAX;
int32_t x123 = -1;
volatile int32_t x126 = INT32_MIN;
uint32_t x127 = 1946470648U;
volatile int64_t t31 = INT64_MIN;
uint64_t x136 = 1865818779LLU;
int8_t x146 = INT8_MIN;
volatile int64_t t36 = 60717824LL;
uint32_t x153 = 51U;
volatile uint64_t t38 = 88870274015LLU;
int8_t x163 = -10;
static uint64_t x170 = 15467LLU;
volatile int32_t t41 = 434473268;
volatile uint64_t t42 = 1022798873LLU;
uint8_t x178 = UINT8_MAX;
static int16_t x180 = 158;
volatile int32_t x187 = INT32_MIN;
int8_t x194 = INT8_MIN;
volatile int16_t x202 = INT16_MAX;
static volatile int64_t t49 = 53057934871252LL;
int32_t x205 = INT32_MAX;
int32_t x207 = INT32_MAX;
volatile int32_t t50 = INT32_MAX;
int16_t x210 = INT16_MIN;
static int16_t x212 = INT16_MIN;
int32_t x218 = 83165416;
int64_t x219 = -483LL;
int64_t x224 = -2043660973668981194LL;
int8_t x227 = INT8_MAX;
uint16_t x229 = 13152U;
volatile int32_t t57 = -129221671;
static volatile uint64_t x240 = UINT64_MAX;
int32_t x242 = INT32_MIN;
uint64_t x244 = UINT64_MAX;
uint16_t x245 = 9U;
volatile int32_t t60 = 4848955;
uint64_t x251 = 346898685696LLU;
int64_t x252 = INT64_MAX;
int64_t x253 = INT64_MAX;
uint16_t x254 = UINT16_MAX;
int64_t t62 = INT64_MAX;
int64_t x258 = INT64_MAX;
static uint64_t x285 = UINT64_MAX;
uint8_t x289 = UINT8_MAX;
uint8_t x290 = 1U;
int32_t x298 = -1;
int64_t x299 = INT64_MIN;
static uint8_t x311 = 3U;
int32_t x316 = -1;
int64_t x321 = -271062595956261554LL;
int32_t x323 = -1;
int64_t t79 = 44682392732LL;
int8_t x327 = -8;
uint64_t x328 = UINT64_MAX;
static int32_t x329 = INT32_MIN;
static uint16_t x330 = 3749U;
int8_t x333 = -7;
volatile uint64_t x336 = 165996304211LLU;
volatile int32_t x343 = -4097524;
volatile uint64_t t84 = UINT64_MAX;
static uint16_t x345 = UINT16_MAX;
int32_t x348 = INT32_MIN;
volatile int32_t t85 = -5;
static int16_t x353 = 0;
uint16_t x356 = 233U;
int32_t x363 = INT32_MIN;
volatile int64_t x365 = -223111749LL;
int16_t x382 = -8;
uint64_t t94 = UINT64_MAX;
int64_t x385 = INT64_MAX;
int16_t x386 = -2;
volatile uint8_t x389 = UINT8_MAX;
int32_t x390 = INT32_MAX;
static int8_t x393 = -1;
int32_t x395 = -6957;
int8_t x396 = INT8_MIN;
static int64_t x404 = INT64_MAX;


void f0(void) {
	static int16_t x5 = INT16_MAX;
	static int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	static uint16_t x8 = 309U;
	int32_t t0 = 11193;

	t0 = (x5+((x6<x7)/x8));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -281633;
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = 9;
	static uint32_t x12 = 7U;
	uint32_t t1 = 3U;

	t1 = (x9+((x10<x11)/x12));

	if (t1 != 4294685663U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = UINT8_MAX;
	uint32_t x15 = 5U;
	int64_t x16 = -305360522015199638LL;
	static int64_t t2 = -893475261LL;

	t2 = (x13+((x14<x15)/x16));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = -1;
	int16_t x20 = INT16_MIN;

	t3 = (x17+((x18<x19)/x20));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 193569960500LLU;
	static int32_t x22 = INT32_MIN;
	uint64_t t4 = 27832LLU;

	t4 = (x21+((x22<x23)/x24));

	if (t4 != 193569960500LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -1;
	static int8_t x26 = -1;
	static int32_t x27 = -1;
	int32_t x28 = 38;

	t5 = (x25+((x26<x27)/x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	uint32_t x30 = 3U;
	static int16_t x31 = INT16_MIN;
	uint64_t x32 = 53LLU;

	t6 = (x29+((x30<x31)/x32));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 52826506U;
	int32_t x36 = INT32_MIN;
	static volatile uint32_t t7 = 962U;

	t7 = (x33+((x34<x35)/x36));

	if (t7 != 52826506U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 2939;
	uint16_t x39 = 2U;
	static uint16_t x40 = 399U;
	volatile int32_t t8 = 56948765;

	t8 = (x37+((x38<x39)/x40));

	if (t8 != 2939) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int16_t x42 = -949;
	uint64_t x43 = 0LLU;
	int32_t x44 = INT32_MIN;
	volatile int32_t t9 = -4645;

	t9 = (x41+((x42<x43)/x44));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 6376U;

	t10 = (x45+((x46<x47)/x48));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x49 = -1;
	static uint32_t x50 = 488233839U;
	static volatile int32_t x51 = -241038;
	uint64_t x52 = 1209606844732LLU;
	uint64_t t11 = UINT64_MAX;

	t11 = (x49+((x50<x51)/x52));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 26U;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x53+((x54<x55)/x56));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = 1260;
	static int32_t t13 = 11550;

	t13 = (x57+((x58<x59)/x60));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = 54458822;
	uint32_t x62 = 2U;
	int16_t x63 = INT16_MIN;
	static uint64_t x64 = 3675059210LLU;

	t14 = (x61+((x62<x63)/x64));

	if (t14 != 54458822LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MAX;
	int8_t x67 = INT8_MAX;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (x65+((x66<x67)/x68));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x72 = INT32_MIN;
	static int32_t t16 = 162;

	t16 = (x69+((x70<x71)/x72));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x74 = 1;
	int8_t x75 = -1;
	static int32_t x76 = 142;

	t17 = (x73+((x74<x75)/x76));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -11484;
	static int8_t x78 = -1;
	int32_t x79 = INT32_MAX;
	static volatile uint32_t t18 = 7712954U;

	t18 = (x77+((x78<x79)/x80));

	if (t18 != 4294955812U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x81+((x82<x83)/x84));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	static uint64_t x87 = 3494397LLU;
	int64_t x88 = INT64_MIN;
	static int64_t t20 = -72700LL;

	t20 = (x85+((x86<x87)/x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -5;
	uint64_t x90 = 55988892633LLU;
	int16_t x91 = 124;
	volatile int16_t x92 = 97;
	volatile int32_t t21 = 417609057;

	t21 = (x89+((x90<x91)/x92));

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x93 = 365168105628LL;
	int64_t x95 = INT64_MIN;
	static int64_t x96 = INT64_MIN;

	t22 = (x93+((x94<x95)/x96));

	if (t22 != 365168105628LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x100 = 699238LL;
	int64_t t23 = INT64_MIN;

	t23 = (x97+((x98<x99)/x100));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x102 = -25;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x101+((x102<x103)/x104));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	uint16_t x108 = 12U;
	volatile int32_t t25 = 23825602;

	t25 = (x105+((x106<x107)/x108));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 76U;
	int16_t x110 = 84;
	int64_t x111 = INT64_MAX;
	volatile int32_t x112 = -1;

	t26 = (x109+((x110<x111)/x112));

	if (t26 != 75U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x114 = INT64_MAX;
	int64_t x116 = -1LL;
	int64_t t27 = 25401303LL;

	t27 = (x113+((x114<x115)/x116));

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	int64_t x118 = -2255LL;
	static volatile int32_t t28 = INT32_MAX;

	t28 = (x117+((x118<x119)/x120));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int16_t x124 = 4;
	int32_t t29 = 936148;

	t29 = (x121+((x122<x123)/x124));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -16579678;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t30 = 27;

	t30 = (x125+((x126<x127)/x128));

	if (t30 != -16579678) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t x130 = 1LL;
	int64_t x131 = 5611LL;
	static volatile int32_t x132 = INT32_MIN;

	t31 = (x129+((x130<x131)/x132));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 49U;
	volatile int64_t x134 = -1LL;
	volatile uint16_t x135 = UINT16_MAX;
	volatile uint64_t t32 = 903832430LLU;

	t32 = (x133+((x134<x135)/x136));

	if (t32 != 49LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	volatile uint8_t x138 = 27U;
	static volatile uint32_t x139 = UINT32_MAX;
	int32_t x140 = INT32_MAX;
	int32_t t33 = -1;

	t33 = (x137+((x138<x139)/x140));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = -7;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 14;

	t34 = (x141+((x142<x143)/x144));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = INT8_MIN;
	static volatile int16_t x147 = INT16_MAX;
	static int8_t x148 = 1;
	int32_t t35 = -7712699;

	t35 = (x145+((x146<x147)/x148));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 79U;
	volatile uint8_t x151 = 13U;
	int64_t x152 = -1LL;

	t36 = (x149+((x150<x151)/x152));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = -1;
	uint32_t x155 = 154U;
	static int32_t x156 = -12340528;
	volatile uint32_t t37 = 115122788U;

	t37 = (x153+((x154<x155)/x156));

	if (t37 != 51U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x157 = 1852849LLU;
	static int32_t x158 = INT32_MIN;
	volatile int32_t x159 = INT32_MIN;
	uint32_t x160 = 694U;

	t38 = (x157+((x158<x159)/x160));

	if (t38 != 1852849LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint16_t x164 = 5936U;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x161+((x162<x163)/x164));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MAX;
	uint16_t x166 = 259U;
	static int16_t x167 = 1;
	uint64_t x168 = 3398946856835486962LLU;
	uint64_t t40 = 95962935403793215LLU;

	t40 = (x165+((x166<x167)/x168));

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 64U;
	int8_t x171 = INT8_MIN;
	static uint8_t x172 = 1U;

	t41 = (x169+((x170<x171)/x172));

	if (t41 != 65) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x173 = INT8_MIN;
	static int16_t x174 = INT16_MIN;
	int8_t x175 = -19;
	uint64_t x176 = 27478516252419387LLU;

	t42 = (x173+((x174<x175)/x176));

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x179 = 16LL;
	int32_t t43 = 1;

	t43 = (x177+((x178<x179)/x180));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x182 = 39U;
	static int8_t x183 = -29;
	int64_t x184 = -1LL;
	int64_t t44 = -3LL;

	t44 = (x181+((x182<x183)/x184));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x185 = 1U;
	uint64_t x186 = 1949230LLU;
	volatile int64_t x188 = -42648LL;
	static int64_t t45 = 1048LL;

	t45 = (x185+((x186<x187)/x188));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = -3;
	uint16_t x191 = 4U;
	static int8_t x192 = INT8_MIN;
	static int64_t t46 = INT64_MIN;

	t46 = (x189+((x190<x191)/x192));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 2674690LLU;
	int16_t x195 = 183;
	int32_t x196 = INT32_MAX;
	volatile uint64_t t47 = 2595LLU;

	t47 = (x193+((x194<x195)/x196));

	if (t47 != 2674690LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 328561260043370847LLU;
	static volatile int16_t x198 = -693;
	static int8_t x199 = INT8_MIN;
	static int64_t x200 = INT64_MAX;
	volatile uint64_t t48 = 28752LLU;

	t48 = (x197+((x198<x199)/x200));

	if (t48 != 328561260043370847LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = 130107587614LL;
	uint32_t x203 = 2U;
	uint8_t x204 = 93U;

	t49 = (x201+((x202<x203)/x204));

	if (t49 != 130107587614LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = 9;
	int32_t x208 = 244;

	t50 = (x205+((x206<x207)/x208));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x211 = 32U;
	static volatile int32_t t51 = INT32_MIN;

	t51 = (x209+((x210<x211)/x212));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	uint8_t x214 = 16U;
	volatile uint32_t x215 = UINT32_MAX;
	volatile int64_t x216 = -1901082737598807LL;
	volatile int64_t t52 = 24139819706768157LL;

	t52 = (x213+((x214<x215)/x216));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t53 = 10U;

	t53 = (x217+((x218<x219)/x220));

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -397483LL;
	static int32_t x222 = 2;
	static volatile int16_t x223 = -1;
	volatile int64_t t54 = -1142LL;

	t54 = (x221+((x222<x223)/x224));

	if (t54 != -397483LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	static int64_t x226 = INT64_MIN;
	uint32_t x228 = 4038950U;
	int64_t t55 = 12744607059220768LL;

	t55 = (x225+((x226<x227)/x228));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x230 = 76U;
	int16_t x231 = -1;
	volatile uint8_t x232 = 11U;
	volatile int32_t t56 = -3;

	t56 = (x229+((x230<x231)/x232));

	if (t56 != 13152) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = UINT8_MAX;
	uint16_t x236 = 4911U;

	t57 = (x233+((x234<x235)/x236));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	volatile int64_t x238 = -548090209455014739LL;
	static volatile int64_t x239 = INT64_MIN;
	static volatile uint64_t t58 = 206393458541116LLU;

	t58 = (x237+((x238<x239)/x240));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = -4;
	int16_t x243 = INT16_MIN;
	uint64_t t59 = 23238343057594LLU;

	t59 = (x241+((x242<x243)/x244));

	if (t59 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x246 = 13618574448147LL;
	volatile int16_t x247 = 233;
	int32_t x248 = INT32_MIN;

	t60 = (x245+((x246<x247)/x248));

	if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = UINT64_MAX;
	static int16_t x250 = -9;
	uint64_t t61 = UINT64_MAX;

	t61 = (x249+((x250<x251)/x252));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x255 = INT16_MAX;
	int64_t x256 = 9838018990933398LL;

	t62 = (x253+((x254<x255)/x256));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x257 = INT8_MAX;
	uint16_t x259 = UINT16_MAX;
	volatile int64_t x260 = INT64_MIN;
	static int64_t t63 = -23LL;

	t63 = (x257+((x258<x259)/x260));

	if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MAX;
	uint8_t x262 = 0U;
	int8_t x263 = -3;
	int64_t x264 = -879007LL;
	static int64_t t64 = INT64_MAX;

	t64 = (x261+((x262<x263)/x264));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	uint16_t x266 = 389U;
	static int32_t x267 = INT32_MAX;
	static int16_t x268 = INT16_MAX;
	volatile int32_t t65 = -108;

	t65 = (x265+((x266<x267)/x268));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = 98U;
	volatile uint16_t x270 = 110U;
	static volatile int8_t x271 = -16;
	volatile int32_t x272 = -1;
	volatile int32_t t66 = -4388;

	t66 = (x269+((x270<x271)/x272));

	if (t66 != 98) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MIN;
	static uint16_t x275 = UINT16_MAX;
	uint8_t x276 = 17U;
	static volatile int64_t t67 = INT64_MIN;

	t67 = (x273+((x274<x275)/x276));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int16_t x278 = -43;
	int8_t x279 = -1;
	int32_t x280 = INT32_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = (x277+((x278<x279)/x280));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 426U;
	int64_t x282 = INT64_MIN;
	static volatile int32_t x283 = -1;
	int64_t x284 = 140392828LL;
	int64_t t69 = 45963148LL;

	t69 = (x281+((x282<x283)/x284));

	if (t69 != 426LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x286 = 108U;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = -1;
	uint64_t t70 = 8855LLU;

	t70 = (x285+((x286<x287)/x288));

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x291 = INT8_MIN;
	static volatile uint64_t x292 = UINT64_MAX;
	volatile uint64_t t71 = 1317215974790LLU;

	t71 = (x289+((x290<x291)/x292));

	if (t71 != 255LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = INT32_MAX;
	int16_t x294 = -1;
	static volatile uint32_t x295 = 655385226U;
	volatile uint16_t x296 = UINT16_MAX;
	static int32_t t72 = INT32_MAX;

	t72 = (x293+((x294<x295)/x296));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = -1LL;
	volatile int8_t x300 = INT8_MIN;
	volatile int64_t t73 = -477754588027945LL;

	t73 = (x297+((x298<x299)/x300));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x301 = -13;
	volatile int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	uint64_t x304 = UINT64_MAX;
	uint64_t t74 = 9839736176653LLU;

	t74 = (x301+((x302<x303)/x304));

	if (t74 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = 0;
	static int32_t x306 = -1;
	uint64_t x307 = 1251430461418439LLU;
	int8_t x308 = 3;
	int32_t t75 = -152307;

	t75 = (x305+((x306<x307)/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MAX;
	uint8_t x310 = UINT8_MAX;
	uint64_t x312 = 269623838582994539LLU;
	volatile uint64_t t76 = 7803584LLU;

	t76 = (x309+((x310<x311)/x312));

	if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MAX;
	uint32_t x314 = 10U;
	int64_t x315 = INT64_MAX;
	volatile int64_t t77 = -55601LL;

	t77 = (x313+((x314<x315)/x316));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 50U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	int64_t x320 = 3324LL;
	volatile int64_t t78 = -3200535041LL;

	t78 = (x317+((x318<x319)/x320));

	if (t78 != 50LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x322 = 63U;
	volatile int8_t x324 = -1;

	t79 = (x321+((x322<x323)/x324));

	if (t79 != -271062595956261554LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = -5;
	int64_t x326 = INT64_MAX;
	static uint64_t t80 = 28LLU;

	t80 = (x325+((x326<x327)/x328));

	if (t80 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	uint32_t t81 = 68U;

	t81 = (x329+((x330<x331)/x332));

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x334 = 30;
	volatile int16_t x335 = -1;
	volatile uint64_t t82 = 122518886LLU;

	t82 = (x333+((x334<x335)/x336));

	if (t82 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MAX;
	static int16_t x338 = INT16_MIN;
	static int8_t x339 = INT8_MIN;
	static int64_t x340 = INT64_MAX;
	int64_t t83 = -579259497038LL;

	t83 = (x337+((x338<x339)/x340));

	if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint8_t x342 = UINT8_MAX;
	int64_t x344 = INT64_MIN;

	t84 = (x341+((x342<x343)/x344));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x346 = -1LL;
	uint32_t x347 = 98751U;

	t85 = (x345+((x346<x347)/x348));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = 0;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	static int64_t x352 = -1LL;
	static int64_t t86 = -514253602669LL;

	t86 = (x349+((x350<x351)/x352));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = INT8_MAX;
	volatile int32_t t87 = 20;

	t87 = (x353+((x354<x355)/x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x357 = INT16_MIN;
	uint64_t x358 = 20908747665159LLU;
	static int16_t x359 = INT16_MIN;
	int32_t x360 = -197;
	volatile int32_t t88 = -196;

	t88 = (x357+((x358<x359)/x360));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 112076522370284LLU;
	volatile int16_t x362 = INT16_MIN;
	volatile int8_t x364 = INT8_MAX;
	static uint64_t t89 = 1784595886LLU;

	t89 = (x361+((x362<x363)/x364));

	if (t89 != 112076522370284LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x366 = -7910;
	int16_t x367 = -1;
	static uint8_t x368 = 16U;
	volatile int64_t t90 = -1476071673905263488LL;

	t90 = (x365+((x366<x367)/x368));

	if (t90 != -223111749LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 19U;
	uint8_t x370 = UINT8_MAX;
	uint64_t x371 = 71854975561498338LLU;
	static volatile int32_t x372 = -1;
	volatile int32_t t91 = -7274;

	t91 = (x369+((x370<x371)/x372));

	if (t91 != 18) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -1;
	int8_t x374 = INT8_MIN;
	int32_t x375 = 1;
	volatile uint8_t x376 = UINT8_MAX;
	volatile int32_t t92 = -851;

	t92 = (x373+((x374<x375)/x376));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = -28LL;
	uint64_t x378 = 0LLU;
	int8_t x379 = 58;
	int16_t x380 = 42;
	int64_t t93 = -23092696LL;

	t93 = (x377+((x378<x379)/x380));

	if (t93 != -28LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x381 = -1;
	int16_t x383 = INT16_MIN;
	static uint64_t x384 = 35846875605LLU;

	t94 = (x381+((x382<x383)/x384));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = -1;
	static int64_t t95 = 678LL;

	t95 = (x385+((x386<x387)/x388));

	if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x391 = INT32_MIN;
	volatile uint16_t x392 = 6165U;
	volatile int32_t t96 = 419;

	t96 = (x389+((x390<x391)/x392));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x394 = -1;
	int32_t t97 = 3204573;

	t97 = (x393+((x394<x395)/x396));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x397 = 163U;
	int16_t x398 = INT16_MIN;
	static uint64_t x399 = 124871LLU;
	static uint64_t x400 = UINT64_MAX;
	volatile uint64_t t98 = 43178343909850LLU;

	t98 = (x397+((x398<x399)/x400));

	if (t98 != 163LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x401 = INT64_MIN;
	uint16_t x402 = 2U;
	static uint64_t x403 = UINT64_MAX;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x401+((x402<x403)/x404));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

