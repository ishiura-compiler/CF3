#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 118618259LLU;
int8_t x6 = -1;
static volatile int64_t t1 = -6349LL;
static uint8_t x13 = UINT8_MAX;
uint32_t x15 = UINT32_MAX;
uint32_t t4 = 22085867U;
static int32_t x22 = INT32_MIN;
uint64_t x25 = 607753325LLU;
uint32_t x36 = 0U;
int64_t t8 = 14339567434100057LL;
int8_t x41 = INT8_MIN;
volatile int16_t x42 = -1;
int8_t x44 = INT8_MIN;
volatile int32_t t10 = 37710608;
int32_t x46 = INT32_MIN;
int8_t x48 = INT8_MAX;
int8_t x51 = INT8_MAX;
uint8_t x52 = 13U;
int32_t x56 = -1;
static int64_t t14 = INT64_MIN;
uint16_t x65 = 7932U;
volatile int64_t t16 = -16401060489061313LL;
volatile int32_t x73 = -1017;
int8_t x74 = INT8_MIN;
uint32_t x75 = UINT32_MAX;
static volatile int64_t t19 = -64244LL;
int16_t x88 = INT16_MIN;
volatile int8_t x90 = INT8_MAX;
int16_t x95 = 29;
uint64_t t23 = 1043631446705348LLU;
volatile uint32_t x117 = UINT32_MAX;
int64_t x119 = INT64_MIN;
volatile int32_t x129 = INT32_MIN;
volatile int64_t x133 = 239908402689392650LL;
int8_t x135 = -1;
static int64_t x138 = INT64_MIN;
int8_t x143 = -1;
uint64_t x148 = UINT64_MAX;
volatile int32_t x149 = -1;
uint32_t x150 = 459932787U;
uint32_t x157 = 1421440031U;
int8_t x162 = -1;
int64_t x170 = INT64_MIN;
int64_t t42 = -35LL;
int8_t x173 = INT8_MIN;
static uint32_t x179 = 82269166U;
static volatile uint64_t x181 = UINT64_MAX;
int64_t x186 = -1LL;
int8_t x188 = INT8_MIN;
volatile int64_t t46 = -115870500439692LL;
volatile uint16_t x201 = 29U;
volatile uint64_t t49 = 28LLU;
int8_t x205 = -27;
static int32_t x209 = INT32_MAX;
static int32_t x218 = INT32_MIN;
int8_t x221 = -14;
int32_t x223 = -21;
int8_t x224 = INT8_MAX;
int16_t x226 = INT16_MAX;
uint32_t x231 = UINT32_MAX;
uint32_t t56 = 13680U;
volatile int32_t x253 = 53;
int32_t x254 = INT32_MIN;
int64_t x257 = 75737868514567LL;
int32_t x259 = -4066;
static int64_t x262 = INT64_MIN;
int64_t x266 = INT64_MIN;
int8_t x267 = -1;
uint16_t x268 = UINT16_MAX;
int32_t x269 = INT32_MIN;
static uint8_t x273 = 57U;
uint32_t x276 = 1575303688U;
int32_t x277 = 485524;
uint64_t x280 = UINT64_MAX;
int32_t x286 = INT32_MIN;
static volatile int32_t x287 = INT32_MAX;
int64_t x288 = 2430332183428807LL;
static volatile int32_t x291 = INT32_MIN;
volatile int32_t x293 = INT32_MIN;
int8_t x296 = INT8_MIN;
int32_t x303 = -1;
int32_t x311 = 47414;
int64_t x316 = INT64_MIN;
volatile int64_t t77 = -124554891770620320LL;
int8_t x321 = INT8_MAX;
int32_t x331 = -1;
int32_t t82 = 34;
int32_t x339 = 47815;
uint32_t t84 = 4782215U;
uint64_t x345 = UINT64_MAX;
static int32_t x349 = 958637;
static int16_t x350 = INT16_MIN;
volatile int32_t t86 = 242453627;
uint16_t x355 = 519U;
static int32_t x357 = -1;
uint8_t x363 = 71U;
static volatile int32_t x366 = -1;
int16_t x367 = -79;
int8_t x370 = 7;
int16_t x371 = -1;
int16_t x383 = -1;
int32_t t94 = 24;
int32_t x385 = INT32_MAX;
static int64_t t95 = 11453LL;
volatile uint8_t x389 = 78U;
uint16_t x398 = UINT16_MAX;
static int32_t x402 = 13;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int32_t x2 = INT32_MIN;
	volatile uint64_t x3 = 1955LLU;
	volatile int16_t x4 = INT16_MAX;

	t0 = ((x1^(x2%x3))&x4);

	if (t0 != 31364LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile int32_t x7 = INT32_MIN;
	int64_t x8 = -1LL;

	t1 = ((x5^(x6%x7))&x8);

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 1378294U;
	uint64_t x10 = UINT64_MAX;
	static int32_t x11 = -1;
	static volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 59383LLU;

	t2 = ((x9^(x10%x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -4;
	static uint32_t x16 = 6862U;
	uint32_t t3 = 1U;

	t3 = ((x13^(x14%x15))&x16);

	if (t3 != 6658U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 151;
	volatile int8_t x18 = -1;
	uint16_t x19 = 6U;
	static volatile uint32_t x20 = 1005903887U;

	t4 = ((x17^(x18%x19))&x20);

	if (t4 != 1005903880U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 232;
	int64_t x23 = INT64_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -175199533495LL;

	t5 = ((x21^(x22%x23))&x24);

	if (t5 != -2147483416LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 0U;
	static uint16_t x27 = UINT16_MAX;
	int64_t x28 = INT64_MIN;
	static uint64_t t6 = 240925LLU;

	t6 = ((x25^(x26%x27))&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -126844LL;
	uint64_t x30 = 279382575478LLU;
	volatile int16_t x31 = -1;
	static int32_t x32 = -1;
	volatile uint64_t t7 = 103741511LLU;

	t7 = ((x29^(x30%x31))&x32);

	if (t7 != 18446743794327083506LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	static volatile int16_t x35 = -1;

	t8 = ((x33^(x34%x35))&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	uint32_t x38 = 31U;
	int64_t x39 = 354566542907LL;
	int16_t x40 = 0;
	static int64_t t9 = 13154LL;

	t9 = ((x37^(x38%x39))&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x43 = -1;

	t10 = ((x41^(x42%x43))&x44);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int32_t x47 = -1;
	int32_t t11 = 84;

	t11 = ((x45^(x46%x47))&x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -6267597;
	int8_t x50 = 4;
	volatile int32_t t12 = 1;

	t12 = ((x49^(x50%x51))&x52);

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = 3;
	static uint32_t x55 = 3U;
	static uint32_t t13 = 0U;

	t13 = ((x53^(x54%x55))&x56);

	if (t13 != 32767U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 828793U;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	static int64_t x60 = INT64_MIN;

	t14 = ((x57^(x58%x59))&x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 14U;
	static int32_t x62 = 1;
	volatile int32_t x63 = 648;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -28LL;

	t15 = ((x61^(x62%x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 69U;
	int64_t x67 = INT64_MAX;
	int16_t x68 = 13;

	t16 = ((x65^(x66%x67))&x68);

	if (t16 != 9LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 30U;
	int8_t x70 = INT8_MIN;
	static int16_t x71 = INT16_MAX;
	static int32_t x72 = INT32_MAX;
	int32_t t17 = 665;

	t17 = ((x69^(x70%x71))&x72);

	if (t17 != 2147483550) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x76 = 53U;
	uint32_t t18 = 8U;

	t18 = ((x73^(x74%x75))&x76);

	if (t18 != 5U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -11699829LL;
	int32_t x78 = 533861;
	int64_t x79 = -1819715854LL;
	int16_t x80 = INT16_MIN;

	t19 = ((x77^(x78%x79))&x80);

	if (t19 != -12255232LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	static int16_t x82 = INT16_MAX;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 114484LL;

	t20 = ((x81^(x82%x83))&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	static int16_t x86 = 1;
	int16_t x87 = -1;
	volatile int32_t t21 = 0;

	t21 = ((x85^(x86%x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 51605542105104LLU;
	uint32_t x91 = 1048291299U;
	int8_t x92 = INT8_MIN;
	uint64_t t22 = 2432264LLU;

	t22 = ((x89^(x90%x91))&x92);

	if (t22 != 51605542105088LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = 721615129433625184LLU;
	int8_t x96 = -1;

	t23 = ((x93^(x94%x95))&x96);

	if (t23 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 990U;
	int16_t x98 = 12655;
	uint32_t x99 = 523179387U;
	int32_t x100 = INT32_MIN;
	static volatile uint32_t t24 = 53900U;

	t24 = ((x97^(x98%x99))&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -11;
	static uint64_t x102 = 100514917428864LLU;
	int64_t x103 = 295013968048148LL;
	int8_t x104 = INT8_MIN;
	static uint64_t t25 = 6458315450982LLU;

	t25 = ((x101^(x102%x103))&x104);

	if (t25 != 18446643558792122624LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 1121U;
	uint16_t x106 = UINT16_MAX;
	volatile int64_t x107 = -918391274LL;
	uint8_t x108 = 2U;
	volatile int64_t t26 = -361163LL;

	t26 = ((x105^(x106%x107))&x108);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	volatile uint8_t x110 = 7U;
	static uint64_t x111 = 684571257502119092LLU;
	int64_t x112 = -1LL;
	static uint64_t t27 = 555LLU;

	t27 = ((x109^(x110%x111))&x112);

	if (t27 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1308U;
	volatile int64_t x114 = 247490105LL;
	int8_t x115 = -1;
	int8_t x116 = INT8_MIN;
	volatile int64_t t28 = -363LL;

	t28 = ((x113^(x114%x115))&x116);

	if (t28 != 1280LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MAX;
	int8_t x120 = INT8_MIN;
	volatile int64_t t29 = -8025LL;

	t29 = ((x117^(x118%x119))&x120);

	if (t29 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = 673;
	int32_t x123 = -4970;
	static uint16_t x124 = 525U;
	volatile uint64_t t30 = 3779LLU;

	t30 = ((x121^(x122%x123))&x124);

	if (t30 != 12LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	uint32_t x128 = UINT32_MAX;
	uint32_t t31 = 16U;

	t31 = ((x125^(x126%x127))&x128);

	if (t31 != 4294934528U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = INT16_MIN;
	volatile int64_t x131 = -85LL;
	int8_t x132 = INT8_MIN;
	volatile int64_t t32 = -7911LL;

	t32 = ((x129^(x130%x131))&x132);

	if (t32 != 2147483520LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = 22232U;
	uint64_t x136 = 52530735LLU;
	uint64_t t33 = 516933479LLU;

	t33 = ((x133^(x134%x135))&x136);

	if (t33 != 2131458LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -16;
	int8_t x139 = INT8_MIN;
	static volatile int64_t x140 = INT64_MAX;
	static int64_t t34 = 1360017777705708LL;

	t34 = ((x137^(x138%x139))&x140);

	if (t34 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x141 = 751U;
	int16_t x142 = -23;
	int16_t x144 = -1;
	int32_t t35 = 216233846;

	t35 = ((x141^(x142%x143))&x144);

	if (t35 != 751) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	static int8_t x147 = INT8_MIN;
	uint64_t t36 = 2885803113183LLU;

	t36 = ((x145^(x146%x147))&x148);

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = -1;
	volatile int8_t x152 = -1;
	static volatile uint32_t t37 = 115U;

	t37 = ((x149^(x150%x151))&x152);

	if (t37 != 3835034508U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = 6;
	uint8_t x156 = UINT8_MAX;
	volatile uint64_t t38 = 32616193391588LLU;

	t38 = ((x153^(x154%x155))&x156);

	if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 958895LLU;
	int16_t x159 = INT16_MIN;
	int8_t x160 = 56;
	uint64_t t39 = 30848LLU;

	t39 = ((x157^(x158%x159))&x160);

	if (t39 != 48LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 206828870LLU;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t40 = 5449750325LLU;

	t40 = ((x161^(x162%x163))&x164);

	if (t40 != 18446744073502722745LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 14LL;
	static int32_t x166 = -51823526;
	uint64_t x167 = UINT64_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	volatile uint64_t t41 = 272886904876LLU;

	t41 = ((x165^(x166%x167))&x168);

	if (t41 != 15444LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 7915U;
	int16_t x171 = -2026;
	int8_t x172 = INT8_MIN;

	t42 = ((x169^(x170%x171))&x172);

	if (t42 != -7424LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x174 = 29281LL;
	volatile int16_t x175 = -4;
	int8_t x176 = 53;
	int64_t t43 = 5959596074290606LL;

	t43 = ((x173^(x174%x175))&x176);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 2662LLU;
	volatile int64_t x178 = INT64_MIN;
	int8_t x180 = -1;
	uint64_t t44 = 350688376131LLU;

	t44 = ((x177^(x178%x179))&x180);

	if (t44 != 18446744073635878334LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int32_t x183 = 16;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t45 = 298654LLU;

	t45 = ((x181^(x182%x183))&x184);

	if (t45 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 0U;
	static int32_t x187 = -745549089;

	t46 = ((x185^(x186%x187))&x188);

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = 59U;
	uint32_t x191 = 570767U;
	int16_t x192 = 988;
	uint32_t t47 = 15725U;

	t47 = ((x189^(x190%x191))&x192);

	if (t47 != 964U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int64_t x194 = INT64_MAX;
	volatile int32_t x195 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int64_t t48 = -94LL;

	t48 = ((x193^(x194%x195))&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = -25700740;
	static int8_t x203 = INT8_MIN;
	uint64_t x204 = 632390834LLU;

	t49 = ((x201^(x202%x203))&x204);

	if (t49 != 632390816LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = INT8_MIN;
	int16_t x207 = 6;
	uint64_t x208 = 48494492065LLU;
	uint64_t t50 = 4LLU;

	t50 = ((x205^(x206%x207))&x208);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x210 = INT64_MIN;
	uint32_t x211 = 57U;
	int8_t x212 = INT8_MIN;
	static int64_t t51 = 78033204942615LL;

	t51 = ((x209^(x210%x211))&x212);

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = INT32_MIN;
	uint32_t x214 = 210349U;
	static int16_t x215 = INT16_MIN;
	static int16_t x216 = 8;
	volatile uint32_t t52 = 109612U;

	t52 = ((x213^(x214%x215))&x216);

	if (t52 != 8U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 1725;
	int16_t x219 = -262;
	int8_t x220 = INT8_MIN;
	int32_t t53 = -273677;

	t53 = ((x217^(x218%x219))&x220);

	if (t53 != -1792) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x222 = 69U;
	volatile int32_t t54 = 819;

	t54 = ((x221^(x222%x223))&x224);

	if (t54 != 116) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -1;
	static volatile int8_t x227 = INT8_MIN;
	int16_t x228 = 87;
	volatile int32_t t55 = 269185;

	t55 = ((x225^(x226%x227))&x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int32_t x230 = -326557;
	uint8_t x232 = UINT8_MAX;

	t56 = ((x229^(x230%x231))&x232);

	if (t56 != 156U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	static int64_t x234 = INT64_MIN;
	int16_t x235 = -1;
	uint8_t x236 = 0U;
	int64_t t57 = -777628760LL;

	t57 = ((x233^(x234%x235))&x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = -51593;
	static int64_t x239 = 9668226798672LL;
	uint32_t x240 = 3044212U;
	static uint64_t t58 = 3079876LLU;

	t58 = ((x237^(x238%x239))&x240);

	if (t58 != 16640LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = 199494;
	uint16_t x242 = 78U;
	uint32_t x243 = 426501U;
	int32_t x244 = -59095048;
	uint32_t t59 = 52712U;

	t59 = ((x241^(x242%x243))&x244);

	if (t59 != 131848U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 4512154767232LLU;
	static int16_t x247 = -21;
	static volatile int16_t x248 = 15738;
	uint64_t t60 = 16953586149948LLU;

	t60 = ((x245^(x246%x247))&x248);

	if (t60 != 3328LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = 33;
	int32_t x250 = -59914;
	uint64_t x251 = 5297276884799898LLU;
	int16_t x252 = 65;
	uint64_t t61 = 799611465498439950LLU;

	t61 = ((x249^(x250%x251))&x252);

	if (t61 != 65LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x255 = INT32_MAX;
	int32_t x256 = 55335;
	volatile int32_t t62 = 6594481;

	t62 = ((x253^(x254%x255))&x256);

	if (t62 != 55298) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x258 = UINT8_MAX;
	int16_t x260 = INT16_MIN;
	static volatile int64_t t63 = 11634565159351LL;

	t63 = ((x257^(x258%x259))&x260);

	if (t63 != 75737868500992LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = INT32_MIN;
	volatile int8_t x263 = -10;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = -420507449828642849LL;

	t64 = ((x261^(x262%x263))&x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	volatile int64_t t65 = 470438642240141LL;

	t65 = ((x265^(x266%x267))&x268);

	if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	static int8_t x272 = INT8_MIN;
	int32_t t66 = 495372;

	t66 = ((x269^(x270%x271))&x272);

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x274 = 531833429251386LLU;
	int32_t x275 = -1;
	volatile uint64_t t67 = 2LLU;

	t67 = ((x273^(x274%x275))&x276);

	if (t67 != 480317440LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x278 = INT32_MIN;
	int16_t x279 = -1;
	volatile uint64_t t68 = 239770261834LLU;

	t68 = ((x277^(x278%x279))&x280);

	if (t68 != 485524LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 1806LLU;
	int32_t x282 = INT32_MIN;
	int16_t x283 = -2;
	uint16_t x284 = 10802U;
	uint64_t t69 = 3647191250635605LLU;

	t69 = ((x281^(x282%x283))&x284);

	if (t69 != 514LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -446;
	volatile int64_t t70 = -741022LL;

	t70 = ((x285^(x286%x287))&x288);

	if (t70 != 133LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x289 = INT32_MIN;
	volatile int64_t x290 = INT64_MAX;
	int32_t x292 = 8383038;
	int64_t t71 = 795424LL;

	t71 = ((x289^(x290%x291))&x292);

	if (t71 != 8383038LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = -21;
	int16_t x295 = -3;
	int32_t t72 = INT32_MIN;

	t72 = ((x293^(x294%x295))&x296);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 62U;
	int16_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	static int32_t x300 = -144560;
	int32_t t73 = 1;

	t73 = ((x297^(x298%x299))&x300);

	if (t73 != -144576) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MAX;
	int32_t x304 = INT32_MAX;
	volatile int64_t t74 = -100LL;

	t74 = ((x301^(x302%x303))&x304);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t75 = 1283344;

	t75 = ((x305^(x306%x307))&x308);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = 863U;
	int8_t x310 = INT8_MIN;
	int8_t x312 = 0;
	int32_t t76 = 252910;

	t76 = ((x309^(x310%x311))&x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = INT64_MAX;
	int64_t x314 = 288929LL;
	int8_t x315 = INT8_MIN;

	t77 = ((x313^(x314%x315))&x316);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = -1;
	uint32_t x318 = 81932533U;
	int32_t x319 = -1;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t78 = 1662743345U;

	t78 = ((x317^(x318%x319))&x320);

	if (t78 != 4213034762U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x322 = INT8_MIN;
	static volatile int32_t x323 = INT32_MIN;
	volatile int64_t x324 = -1LL;
	volatile int64_t t79 = -103151173914501613LL;

	t79 = ((x321^(x322%x323))&x324);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = 2;
	int64_t x327 = -147162LL;
	volatile int32_t x328 = -58;
	static uint64_t t80 = 55595393465712837LLU;

	t80 = ((x325^(x326%x327))&x328);

	if (t80 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = -489;
	int8_t x330 = 56;
	int16_t x332 = INT16_MIN;
	int32_t t81 = 23450;

	t81 = ((x329^(x330%x331))&x332);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MAX;
	volatile int32_t x334 = 1202138;
	static int32_t x335 = -4991985;
	int8_t x336 = INT8_MIN;

	t82 = ((x333^(x334%x335))&x336);

	if (t82 != 2146281472) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = INT64_MIN;
	int32_t x340 = -1;
	volatile uint64_t t83 = 8924603411097660LLU;

	t83 = ((x337^(x338%x339))&x340);

	if (t83 != 7957LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -6;
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	static volatile uint16_t x344 = 6U;

	t84 = ((x341^(x342%x343))&x344);

	if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x346 = -182;
	uint64_t x347 = UINT64_MAX;
	uint32_t x348 = 1998279U;
	static volatile uint64_t t85 = 13892772049730057LLU;

	t85 = ((x345^(x346%x347))&x348);

	if (t85 != 133LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x351 = 61U;
	uint16_t x352 = UINT16_MAX;

	t86 = ((x349^(x350%x351))&x352);

	if (t86 != 24408) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = 233902495;
	static int16_t x356 = INT16_MIN;
	static int32_t t87 = 457569;

	t87 = ((x353^(x354%x355))&x356);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x358 = 0U;
	volatile int16_t x359 = -7;
	int8_t x360 = -10;
	int32_t t88 = 88;

	t88 = ((x357^(x358%x359))&x360);

	if (t88 != -10) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 217189LLU;
	static int16_t x362 = -1;
	int16_t x364 = -1;
	volatile uint64_t t89 = 576LLU;

	t89 = ((x361^(x362%x363))&x364);

	if (t89 != 18446744073709334426LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t90 = 11690883747001LL;

	t90 = ((x365^(x366%x367))&x368);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -9;
	static int32_t x372 = INT32_MIN;
	static int32_t t91 = INT32_MIN;

	t91 = ((x369^(x370%x371))&x372);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x374 = 36;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = -1;
	volatile uint64_t t92 = 3775LLU;

	t92 = ((x373^(x374%x375))&x376);

	if (t92 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x377 = 3;
	static volatile int16_t x378 = INT16_MIN;
	volatile int16_t x379 = -1;
	int16_t x380 = 1;
	volatile int32_t t93 = -271;

	t93 = ((x377^(x378%x379))&x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x381 = -25;
	int32_t x382 = 4880;
	int16_t x384 = INT16_MIN;

	t94 = ((x381^(x382%x383))&x384);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x386 = INT64_MAX;
	volatile int32_t x387 = -1;
	static uint16_t x388 = UINT16_MAX;

	t95 = ((x385^(x386%x387))&x388);

	if (t95 != 65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t96 = -98;

	t96 = ((x389^(x390%x391))&x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = 85341588;
	uint16_t x394 = 0U;
	int32_t x395 = -23601839;
	volatile uint32_t x396 = UINT32_MAX;
	volatile uint32_t t97 = 1117U;

	t97 = ((x393^(x394%x395))&x396);

	if (t97 != 85341588U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = 40;
	static int8_t x399 = INT8_MAX;
	uint16_t x400 = 0U;
	static volatile int32_t t98 = 1;

	t98 = ((x397^(x398%x399))&x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 12511777LLU;
	int32_t x403 = -1;
	uint8_t x404 = 13U;
	uint64_t t99 = 17081302151753640LLU;

	t99 = ((x401^(x402%x403))&x404);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

