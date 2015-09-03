#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 2181103998257LL;
volatile uint32_t x11 = 31394U;
volatile uint32_t x15 = 1182152842U;
int32_t t2 = INT32_MIN;
static uint8_t x22 = 2U;
volatile uint32_t x25 = 88054014U;
int8_t x26 = -1;
volatile int32_t x28 = INT32_MIN;
volatile uint32_t t5 = 33U;
static uint8_t x31 = UINT8_MAX;
int8_t x32 = INT8_MAX;
int16_t x41 = INT16_MAX;
int64_t x53 = 182432509LL;
static volatile int64_t t11 = 3871501756827LL;
volatile uint32_t x57 = 339423U;
int16_t x58 = -5;
volatile int8_t x62 = -1;
volatile uint16_t x63 = 1U;
int64_t x73 = 13303870446517LL;
static volatile uint32_t x88 = 258518U;
static uint32_t x100 = 1059672167U;
int32_t t21 = 26980364;
static int64_t x102 = 58627879968692465LL;
int64_t x106 = INT64_MIN;
static int16_t x118 = INT16_MIN;
uint64_t x119 = UINT64_MAX;
volatile int16_t x120 = INT16_MAX;
volatile int64_t t26 = INT64_MIN;
int16_t x122 = INT16_MIN;
static uint32_t x124 = 3890811U;
int8_t x125 = -1;
static int16_t x126 = INT16_MIN;
uint64_t x127 = 7111277345LLU;
int32_t t28 = 271611;
static int64_t x130 = INT64_MAX;
int64_t x131 = 40227043LL;
int8_t x145 = 50;
int32_t x146 = -1;
uint64_t x155 = 233LLU;
int8_t x157 = INT8_MIN;
volatile int8_t x161 = INT8_MIN;
uint16_t x163 = 1U;
int32_t x166 = -6955189;
uint16_t x170 = 4U;
int64_t x171 = -2LL;
uint16_t x173 = 16U;
static uint32_t x175 = 292364112U;
uint64_t x183 = 51597LLU;
volatile int64_t x188 = -2939LL;
int32_t t42 = 353251;
int64_t x193 = INT64_MIN;
volatile uint32_t x197 = UINT32_MAX;
volatile int16_t x202 = 2;
int64_t x206 = INT64_MIN;
static uint16_t x208 = UINT16_MAX;
volatile int64_t x214 = INT64_MIN;
int64_t x223 = INT64_MIN;
uint64_t x226 = 274144257247LLU;
static int32_t t52 = 230;
int16_t x246 = INT16_MAX;
static volatile int32_t t56 = 307396;
int64_t x271 = 14347841117126LL;
volatile int32_t t59 = -6;
uint64_t x277 = UINT64_MAX;
int64_t x283 = INT64_MIN;
uint32_t x292 = UINT32_MAX;
static volatile int32_t t62 = 3085205;
uint64_t x293 = UINT64_MAX;
uint8_t x295 = 7U;
uint16_t x312 = 16U;
uint64_t x313 = 371326LLU;
volatile int32_t t69 = -2527047;
uint8_t x325 = UINT8_MAX;
int64_t x326 = INT64_MIN;
uint64_t x336 = 101469186356887LLU;
static volatile int32_t x345 = INT32_MIN;
int64_t x348 = INT64_MIN;
volatile uint64_t x353 = UINT64_MAX;
uint8_t x354 = UINT8_MAX;
int16_t x360 = INT16_MIN;
int32_t t79 = -5215830;
static uint8_t x368 = 5U;
static uint16_t x369 = 1U;
int32_t x371 = -15219176;
int16_t x372 = 11032;
int8_t x373 = -30;
int8_t x379 = 10;
volatile int64_t x385 = INT64_MIN;
uint64_t x390 = UINT64_MAX;
uint64_t x393 = 145921644557LLU;
static int16_t x396 = INT16_MIN;
int64_t x405 = 406930776LL;
int16_t x407 = INT16_MIN;
volatile int64_t t90 = -68922801LL;
volatile int8_t x409 = INT8_MIN;
int16_t x413 = INT16_MAX;
static int32_t t93 = 8363422;
static int32_t x430 = INT32_MAX;
static int8_t x432 = -23;
static int8_t x433 = 0;
int8_t x443 = INT8_MAX;
volatile int64_t t99 = 91600965182041LL;


void f0(void) {
	int8_t x6 = INT8_MAX;
	int32_t x7 = INT32_MIN;
	uint16_t x8 = 13U;
	volatile int64_t t0 = 3643728991862LL;

	t0 = (x5^(x6<=(x7+x8)));

	if (t0 != 2181103998257LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x9 = 853U;
	volatile int64_t x10 = INT64_MAX;
	int64_t x12 = -1LL;
	volatile int32_t t1 = -51753;

	t1 = (x9^(x10<=(x11+x12)));

	if (t1 != 853) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 0U;
	volatile int64_t x16 = INT64_MIN;

	t2 = (x13^(x14<=(x15+x16)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -1;
	static int8_t x18 = INT8_MIN;
	static volatile uint32_t x19 = 91805768U;
	volatile int64_t x20 = -1LL;
	static int32_t t3 = -969135089;

	t3 = (x17^(x18<=(x19+x20)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	static int32_t t4 = -16029107;

	t4 = (x21^(x22<=(x23+x24)));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x27 = 58;

	t5 = (x25^(x26<=(x27+x28)));

	if (t5 != 88054014U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MAX;
	volatile int32_t t6 = 46578800;

	t6 = (x29^(x30<=(x31+x32)));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	volatile uint16_t x34 = 27646U;
	uint32_t x35 = UINT32_MAX;
	static int32_t x36 = -1;
	static int32_t t7 = -23;

	t7 = (x33^(x34<=(x35+x36)));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 7;
	int32_t x38 = -643;
	int16_t x39 = INT16_MIN;
	static volatile uint32_t x40 = UINT32_MAX;
	int32_t t8 = -508;

	t8 = (x37^(x38<=(x39+x40)));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = UINT32_MAX;
	static uint16_t x43 = 134U;
	int8_t x44 = INT8_MIN;
	int32_t t9 = -2026;

	t9 = (x41^(x42<=(x43+x44)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = 3U;
	volatile int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = INT16_MIN;
	volatile uint32_t t10 = 3U;

	t10 = (x45^(x46<=(x47+x48)));

	if (t10 != 3U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x54 = -1;
	int8_t x55 = 1;
	int8_t x56 = INT8_MAX;

	t11 = (x53^(x54<=(x55+x56)));

	if (t11 != 182432508LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	volatile uint32_t t12 = 1521U;

	t12 = (x57^(x58<=(x59+x60)));

	if (t12 != 339423U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 2;
	int32_t x64 = -1707855;
	volatile int32_t t13 = 415;

	t13 = (x61^(x62<=(x63+x64)));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = 8;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	volatile int32_t x72 = -1511141;
	static int32_t t14 = -386;

	t14 = (x69^(x70<=(x71+x72)));

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = 1992U;
	int8_t x75 = -1;
	static int16_t x76 = -1;
	static volatile int64_t t15 = 11825LL;

	t15 = (x73^(x74<=(x75+x76)));

	if (t15 != 13303870446517LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x77 = UINT32_MAX;
	static int32_t x78 = -1;
	uint16_t x79 = 22U;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x77^(x78<=(x79+x80)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x82 = -1;
	uint64_t x83 = 17828811256490LLU;
	uint32_t x84 = 1042034U;
	int32_t t17 = -91147833;

	t17 = (x81^(x82<=(x83+x84)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = 0;
	uint16_t x86 = 217U;
	int16_t x87 = INT16_MIN;
	int32_t t18 = 49811396;

	t18 = (x85^(x86<=(x87+x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int8_t x90 = INT8_MIN;
	int32_t x91 = 3;
	int32_t x92 = 5460;
	static uint32_t t19 = 11U;

	t19 = (x89^(x90<=(x91+x92)));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = 280689017LLU;
	static int64_t x94 = -1LL;
	int64_t x95 = INT64_MAX;
	int16_t x96 = -1;
	static volatile uint64_t t20 = 59629181LLU;

	t20 = (x93^(x94<=(x95+x96)));

	if (t20 != 280689016LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 7585U;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = INT8_MIN;

	t21 = (x97^(x98<=(x99+x100)));

	if (t21 != 7585) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x101 = INT8_MIN;
	uint64_t x103 = 1123557332448154717LLU;
	static int16_t x104 = INT16_MIN;
	int32_t t22 = 3170122;

	t22 = (x101^(x102<=(x103+x104)));

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t23 = 54633;

	t23 = (x105^(x106<=(x107+x108)));

	if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = 713;
	static int8_t x111 = -1;
	uint8_t x112 = 3U;
	int64_t t24 = INT64_MAX;

	t24 = (x109^(x110<=(x111+x112)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -6;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 9U;
	uint32_t x116 = UINT32_MAX;
	int32_t t25 = 185248;

	t25 = (x113^(x114<=(x115+x116)));

	if (t25 != -6) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;

	t26 = (x117^(x118<=(x119+x120)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	volatile int32_t x123 = -1;
	static int64_t t27 = INT64_MIN;

	t27 = (x121^(x122<=(x123+x124)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x128 = -46704621;

	t28 = (x125^(x126<=(x127+x128)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = -4169680;
	int32_t x132 = 31648;
	int32_t t29 = -593901815;

	t29 = (x129^(x130<=(x131+x132)));

	if (t29 != -4169680) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 106U;
	static volatile uint16_t x134 = 6U;
	volatile uint16_t x135 = 8U;
	int64_t x136 = 319644477LL;
	static int32_t t30 = -240;

	t30 = (x133^(x134<=(x135+x136)));

	if (t30 != 107) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 0U;
	int64_t x138 = -8498466879048310LL;
	int16_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	static volatile int32_t t31 = 2764521;

	t31 = (x137^(x138<=(x139+x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = -1;
	static int8_t x142 = INT8_MAX;
	static int16_t x143 = INT16_MIN;
	int32_t x144 = -8;
	volatile int32_t t32 = -3621;

	t32 = (x141^(x142<=(x143+x144)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x147 = 2U;
	static volatile uint8_t x148 = 7U;
	int32_t t33 = -298633120;

	t33 = (x145^(x146<=(x147+x148)));

	if (t33 != 51) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x153 = 5321122;
	int64_t x154 = -71671LL;
	int16_t x156 = INT16_MAX;
	volatile int32_t t34 = 1508973;

	t34 = (x153^(x154<=(x155+x156)));

	if (t34 != 5321122) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = 20;
	uint16_t x159 = 2914U;
	int8_t x160 = INT8_MAX;
	static volatile int32_t t35 = -1;

	t35 = (x157^(x158<=(x159+x160)));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x162 = UINT32_MAX;
	uint16_t x164 = 2132U;
	int32_t t36 = 486839;

	t36 = (x161^(x162<=(x163+x164)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x165 = 3U;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = 22445U;
	int32_t t37 = 40;

	t37 = (x165^(x166<=(x167+x168)));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = 15U;
	int32_t x172 = -86;
	static int32_t t38 = -7;

	t38 = (x169^(x170<=(x171+x172)));

	if (t38 != 15) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x174 = -341;
	static int64_t x176 = 12663LL;
	volatile int32_t t39 = -185220;

	t39 = (x173^(x174<=(x175+x176)));

	if (t39 != 17) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	uint8_t x179 = 13U;
	uint16_t x180 = UINT16_MAX;
	static int32_t t40 = -638;

	t40 = (x177^(x178<=(x179+x180)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = INT32_MAX;
	volatile int32_t x182 = -1;
	uint8_t x184 = UINT8_MAX;
	int32_t t41 = INT32_MAX;

	t41 = (x181^(x182<=(x183+x184)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -1;
	static uint16_t x186 = UINT16_MAX;
	static int8_t x187 = INT8_MAX;

	t42 = (x185^(x186<=(x187+x188)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -1;
	uint16_t x190 = 1U;
	int64_t x191 = 1186078LL;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t43 = -15028;

	t43 = (x189^(x190<=(x191+x192)));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x194 = 260922468811931860LLU;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x193^(x194<=(x195+x196)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x198 = INT16_MIN;
	volatile int16_t x199 = -657;
	int64_t x200 = -1LL;
	volatile uint32_t t45 = 1U;

	t45 = (x197^(x198<=(x199+x200)));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -992801LL;
	int32_t x203 = INT32_MIN;
	volatile int16_t x204 = 249;
	volatile int64_t t46 = 3LL;

	t46 = (x201^(x202<=(x203+x204)));

	if (t46 != -992801LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x205 = 5483;
	static int16_t x207 = -5;
	int32_t t47 = -18723770;

	t47 = (x205^(x206<=(x207+x208)));

	if (t47 != 5482) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x213 = -1;
	uint16_t x215 = 343U;
	uint64_t x216 = UINT64_MAX;
	static volatile int32_t t48 = -3833;

	t48 = (x213^(x214<=(x215+x216)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = 4984087LL;
	uint8_t x222 = 1U;
	static uint8_t x224 = 36U;
	volatile int64_t t49 = 893080777LL;

	t49 = (x221^(x222<=(x223+x224)));

	if (t49 != 4984087LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	uint64_t x227 = 71951348576LLU;
	static uint8_t x228 = 94U;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x225^(x226<=(x227+x228)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t51 = -22;

	t51 = (x229^(x230<=(x231+x232)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 123633938;
	volatile int8_t x234 = -5;
	static int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MIN;

	t52 = (x233^(x234<=(x235+x236)));

	if (t52 != 123633938) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x241 = INT16_MAX;
	int8_t x242 = INT8_MIN;
	uint8_t x243 = 17U;
	int8_t x244 = INT8_MIN;
	int32_t t53 = 6;

	t53 = (x241^(x242<=(x243+x244)));

	if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = 1;
	int16_t x247 = 0;
	int8_t x248 = 0;
	static int32_t t54 = -176097284;

	t54 = (x245^(x246<=(x247+x248)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 1759759U;
	int32_t x250 = INT32_MIN;
	static int64_t x251 = -110126803LL;
	int16_t x252 = -17;
	static volatile uint32_t t55 = 16270U;

	t55 = (x249^(x250<=(x251+x252)));

	if (t55 != 1759758U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = 81774421;
	uint64_t x262 = 2LLU;
	int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MAX;

	t56 = (x261^(x262<=(x263+x264)));

	if (t56 != 81774420) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x265 = 26U;
	volatile uint16_t x266 = 981U;
	volatile int16_t x267 = 4;
	volatile uint32_t x268 = UINT32_MAX;
	volatile int32_t t57 = -3;

	t57 = (x265^(x266<=(x267+x268)));

	if (t57 != 26) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MAX;
	volatile int64_t x270 = 347374735792LL;
	static volatile int64_t x272 = INT64_MIN;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x269^(x270<=(x271+x272)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x273 = 116;
	static uint32_t x274 = UINT32_MAX;
	uint8_t x275 = 1U;
	int16_t x276 = INT16_MAX;

	t59 = (x273^(x274<=(x275+x276)));

	if (t59 != 116) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	int64_t x280 = 78056151747936LL;
	uint64_t t60 = 271LLU;

	t60 = (x277^(x278<=(x279+x280)));

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x281 = INT32_MIN;
	int16_t x282 = -1;
	int8_t x284 = INT8_MAX;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x281^(x282<=(x283+x284)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x289 = INT16_MIN;
	volatile int64_t x290 = 2455057066482369874LL;
	static uint8_t x291 = 33U;

	t62 = (x289^(x290<=(x291+x292)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x294 = -1;
	int64_t x296 = INT64_MIN;
	uint64_t t63 = UINT64_MAX;

	t63 = (x293^(x294<=(x295+x296)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = 3201U;
	volatile uint16_t x298 = 917U;
	uint8_t x299 = 10U;
	volatile uint64_t x300 = 586807LLU;
	volatile uint32_t t64 = 31169U;

	t64 = (x297^(x298<=(x299+x300)));

	if (t64 != 3200U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = 33450U;
	int32_t x306 = -101638;
	int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MIN;
	uint32_t t65 = 1U;

	t65 = (x305^(x306<=(x307+x308)));

	if (t65 != 33451U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x309 = INT64_MAX;
	int32_t x310 = 3;
	static volatile int16_t x311 = INT16_MIN;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x309^(x310<=(x311+x312)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x314 = INT8_MAX;
	uint16_t x315 = 112U;
	static int64_t x316 = -1LL;
	uint64_t t67 = 326LLU;

	t67 = (x313^(x314<=(x315+x316)));

	if (t67 != 371326LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MAX;
	volatile uint16_t x318 = 40U;
	volatile int64_t x319 = 0LL;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t68 = -104382764;

	t68 = (x317^(x318<=(x319+x320)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 58U;
	int16_t x322 = 6292;
	uint8_t x323 = UINT8_MAX;
	uint32_t x324 = 5U;

	t69 = (x321^(x322<=(x323+x324)));

	if (t69 != 58) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x327 = -1;
	volatile int16_t x328 = -1;
	volatile int32_t t70 = -133;

	t70 = (x325^(x326<=(x327+x328)));

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = UINT64_MAX;
	static int64_t x330 = 245056637638381LL;
	int32_t x331 = INT32_MIN;
	int16_t x332 = 20;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x329^(x330<=(x331+x332)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = INT32_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	volatile int32_t t72 = -14;

	t72 = (x333^(x334<=(x335+x336)));

	if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x337 = INT32_MIN;
	volatile int32_t x338 = -1;
	uint8_t x339 = 22U;
	int32_t x340 = -1;
	static volatile int32_t t73 = 856175550;

	t73 = (x337^(x338<=(x339+x340)));

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = 11;
	int16_t x342 = 69;
	int64_t x343 = -1LL;
	volatile int64_t x344 = 303511896913LL;
	volatile int32_t t74 = -224;

	t74 = (x341^(x342<=(x343+x344)));

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = -17;
	int64_t x347 = 21LL;
	int32_t t75 = INT32_MIN;

	t75 = (x345^(x346<=(x347+x348)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = -1;
	static uint16_t x350 = UINT16_MAX;
	int32_t x351 = 2;
	int32_t x352 = INT32_MIN;
	int32_t t76 = 18124;

	t76 = (x349^(x350<=(x351+x352)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x355 = INT16_MIN;
	static volatile int16_t x356 = INT16_MIN;
	uint64_t t77 = UINT64_MAX;

	t77 = (x353^(x354<=(x355+x356)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = -3737988657LL;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 25958230U;
	volatile int64_t t78 = 633226157157215279LL;

	t78 = (x357^(x358<=(x359+x360)));

	if (t78 != -3737988657LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 124U;
	uint64_t x362 = 850357138LLU;
	volatile int32_t x363 = 5992776;
	uint8_t x364 = UINT8_MAX;

	t79 = (x361^(x362<=(x363+x364)));

	if (t79 != 124) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MAX;
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	static int32_t t80 = INT32_MAX;

	t80 = (x365^(x366<=(x367+x368)));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x370 = 46;
	static int32_t t81 = -4712267;

	t81 = (x369^(x370<=(x371+x372)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x374 = 3;
	int16_t x375 = -2;
	uint16_t x376 = 196U;
	volatile int32_t t82 = -2;

	t82 = (x373^(x374<=(x375+x376)));

	if (t82 != -29) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x377 = 333U;
	uint8_t x378 = UINT8_MAX;
	int32_t x380 = INT32_MIN;
	uint32_t t83 = 24469U;

	t83 = (x377^(x378<=(x379+x380)));

	if (t83 != 333U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x381 = INT16_MIN;
	static int64_t x382 = 26878099205LL;
	uint32_t x383 = 1493U;
	int32_t x384 = INT32_MIN;
	int32_t t84 = 459350;

	t84 = (x381^(x382<=(x383+x384)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x386 = 1853;
	uint32_t x387 = 51U;
	uint8_t x388 = 24U;
	static int64_t t85 = INT64_MIN;

	t85 = (x385^(x386<=(x387+x388)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x389 = -31;
	int16_t x391 = -1;
	uint16_t x392 = 160U;
	int32_t t86 = -69300;

	t86 = (x389^(x390<=(x391+x392)));

	if (t86 != -31) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x394 = INT8_MIN;
	uint8_t x395 = 11U;
	volatile uint64_t t87 = 78524LLU;

	t87 = (x393^(x394<=(x395+x396)));

	if (t87 != 145921644557LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 32U;
	int32_t x399 = -12087;
	static int64_t x400 = INT64_MAX;
	static int64_t t88 = -234966719122LL;

	t88 = (x397^(x398<=(x399+x400)));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = 475806LLU;
	volatile int16_t x402 = INT16_MIN;
	static int16_t x403 = -142;
	int16_t x404 = INT16_MAX;
	static volatile uint64_t t89 = 104910877203LLU;

	t89 = (x401^(x402<=(x403+x404)));

	if (t89 != 475807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x406 = 1;
	uint8_t x408 = 5U;

	t90 = (x405^(x406<=(x407+x408)));

	if (t90 != 406930776LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = -1;
	static volatile uint32_t x412 = 237124740U;
	volatile int32_t t91 = 605882;

	t91 = (x409^(x410<=(x411+x412)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x414 = INT64_MAX;
	uint8_t x415 = UINT8_MAX;
	static int32_t x416 = INT32_MIN;
	int32_t t92 = -7298059;

	t92 = (x413^(x414<=(x415+x416)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x417 = -1;
	uint8_t x418 = 31U;
	int32_t x419 = INT32_MIN;
	volatile uint8_t x420 = UINT8_MAX;

	t93 = (x417^(x418<=(x419+x420)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x421 = INT8_MIN;
	static int8_t x422 = 1;
	volatile int64_t x423 = -1LL;
	volatile int16_t x424 = INT16_MIN;
	int32_t t94 = 1;

	t94 = (x421^(x422<=(x423+x424)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = 436752841;
	int16_t x426 = INT16_MIN;
	uint16_t x427 = UINT16_MAX;
	int32_t x428 = -1;
	static volatile int32_t t95 = -176;

	t95 = (x425^(x426<=(x427+x428)));

	if (t95 != 436752840) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = 128406;
	uint8_t x431 = 8U;
	int32_t t96 = -130143613;

	t96 = (x429^(x430<=(x431+x432)));

	if (t96 != 128406) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x434 = UINT8_MAX;
	uint8_t x435 = 3U;
	static volatile int8_t x436 = -1;
	volatile int32_t t97 = 0;

	t97 = (x433^(x434<=(x435+x436)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x437 = -97953681091225554LL;
	int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MAX;
	static int8_t x440 = -1;
	static volatile int64_t t98 = 760078231907045LL;

	t98 = (x437^(x438<=(x439+x440)));

	if (t98 != -97953681091225553LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = -1LL;
	uint16_t x442 = 29U;
	int64_t x444 = -82LL;

	t99 = (x441^(x442<=(x443+x444)));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

