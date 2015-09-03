#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
int64_t x9 = 228768403827LL;
volatile uint64_t x10 = UINT64_MAX;
int64_t x15 = INT64_MAX;
int32_t x21 = INT32_MIN;
uint16_t x23 = 39U;
uint64_t t5 = 1175544016LLU;
volatile uint64_t x36 = 492050899425354LLU;
uint64_t x42 = UINT64_MAX;
uint64_t x44 = 49920976043LLU;
uint64_t t10 = 949135LLU;
int8_t x48 = INT8_MIN;
static uint64_t x50 = UINT64_MAX;
static int64_t t13 = -943LL;
static int16_t x65 = INT16_MIN;
volatile int64_t x69 = -17468275284985LL;
int16_t x70 = INT16_MIN;
uint8_t x72 = 3U;
int32_t x74 = -1;
int64_t x75 = INT64_MIN;
int32_t x82 = -4970;
int16_t x84 = INT16_MIN;
uint32_t x86 = UINT32_MAX;
uint32_t x92 = 1U;
int16_t x112 = -1;
volatile int8_t x114 = -1;
int32_t x118 = INT32_MIN;
static int32_t x123 = INT32_MIN;
int8_t x129 = -63;
uint16_t x130 = 1611U;
static uint64_t t30 = 112088738484LLU;
int64_t x143 = 4117935246830530LL;
uint32_t x146 = 190729U;
volatile int64_t t33 = -239811501536LL;
uint64_t x149 = 3279LLU;
uint8_t x152 = 107U;
uint64_t t34 = 9158646LLU;
volatile int64_t x155 = -1417095897819LL;
volatile int16_t x156 = INT16_MAX;
uint16_t x162 = UINT16_MAX;
int32_t x167 = INT32_MAX;
static volatile int32_t t37 = -2;
int32_t x171 = INT32_MAX;
int32_t x177 = INT32_MAX;
static int32_t x179 = INT32_MAX;
uint32_t x180 = 4U;
int64_t x184 = INT64_MAX;
uint16_t x189 = 4U;
uint8_t x191 = 11U;
uint16_t x200 = UINT16_MAX;
int8_t x202 = INT8_MAX;
uint32_t t46 = 214U;
int8_t x207 = INT8_MIN;
volatile int64_t t48 = -278LL;
int32_t x228 = 955;
int8_t x234 = -1;
static int64_t x246 = 150LL;
uint8_t x248 = 0U;
volatile int64_t t55 = -23378076908165435LL;
int8_t x254 = 1;
volatile int64_t t57 = 422234013908425221LL;
static int16_t x272 = -1;
volatile uint32_t t61 = 14U;
uint64_t x276 = 16628504331405LLU;
volatile int32_t x279 = -1;
uint64_t x288 = 77554LLU;
volatile uint16_t x291 = UINT16_MAX;
int16_t x307 = INT16_MIN;
static int32_t x312 = 236224;
int32_t x313 = 3;
uint32_t x325 = 34864U;
int64_t x327 = -403774162956305254LL;
int8_t x337 = 54;
static int16_t x338 = -5;
static volatile int64_t t77 = 213217LL;
volatile int16_t x342 = -5748;
int64_t x343 = INT64_MIN;
volatile int8_t x355 = INT8_MIN;
static int32_t x356 = INT32_MIN;
volatile int32_t x361 = -3;
uint8_t x362 = UINT8_MAX;
static volatile int32_t t82 = 2;
static volatile int32_t x372 = -3747;
uint16_t x374 = UINT16_MAX;
int16_t x377 = -8;
static int16_t x394 = INT16_MIN;
volatile int64_t x396 = -3764858392116759LL;
uint32_t x397 = UINT32_MAX;
static int16_t x400 = INT16_MIN;
int64_t t90 = 15749LL;
static int16_t x404 = 7;
uint32_t x410 = 1383U;
static int32_t x413 = INT32_MIN;
int64_t x422 = 114509LL;
volatile int64_t x424 = -102201718LL;
volatile int64_t t96 = 3LL;
volatile int64_t x427 = INT64_MIN;
int8_t x428 = -17;
volatile int64_t x429 = 9LL;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = -1;
	static int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -292907095;

	t0 = (x1%((x2/x3)+x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 218U;
	volatile int64_t x6 = -1LL;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 9340LLU;

	t1 = (x5%((x6/x7)+x8));

	if (t1 != 218LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x11 = INT64_MAX;
	int16_t x12 = -1;
	volatile uint64_t t2 = 16010329173LLU;

	t2 = (x9%((x10/x11)+x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = UINT8_MAX;
	int8_t x16 = -1;
	int64_t t3 = -27997928707409328LL;

	t3 = (x13%((x14/x15)+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 21880519U;
	int32_t x18 = INT32_MAX;
	static int16_t x19 = -1;
	uint16_t x20 = 176U;
	uint32_t t4 = 61983789U;

	t4 = (x17%((x18/x19)+x20));

	if (t4 != 21880519U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 14664831610172LLU;
	int64_t x24 = -82679431029LL;

	t5 = (x21%((x22/x23)+x24));

	if (t5 != 188887088032LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 1;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MAX;
	int32_t t6 = 451738;

	t6 = (x25%((x26/x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1400U;
	static uint32_t x30 = 372U;
	uint64_t x31 = 27832516LLU;
	int8_t x32 = INT8_MAX;
	volatile uint64_t t7 = 72698LLU;

	t7 = (x29%((x30/x31)+x32));

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2U;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = 1270354328522451136LL;
	volatile uint64_t t8 = 4369299925141989LLU;

	t8 = (x33%((x34/x35)+x36));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile int32_t x38 = INT32_MAX;
	int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MAX;
	int64_t t9 = 131814382156LL;

	t9 = (x37%((x38/x39)+x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int8_t x43 = INT8_MIN;

	t10 = (x41%((x42/x43)+x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 1927;
	static int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	volatile int64_t t11 = -691778174LL;

	t11 = (x45%((x46/x47)+x48));

	if (t11 != 7LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint32_t x51 = 1143273U;
	volatile int8_t x52 = -1;
	uint64_t t12 = 5922LLU;

	t12 = (x49%((x50/x51)+x52));

	if (t12 != 255LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MAX;
	static int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;

	t13 = (x53%((x54/x55)+x56));

	if (t13 != -6057864LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x58 = 10203908LLU;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MAX;
	volatile uint64_t t14 = 14629LLU;

	t14 = (x57%((x58/x59)+x60));

	if (t14 != 31106LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	volatile int64_t x62 = INT64_MIN;
	volatile uint32_t x63 = 3011922U;
	static uint64_t x64 = 9706111320LLU;
	uint64_t t15 = 745621293449018LLU;

	t15 = (x61%((x62/x63)+x64));

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = UINT16_MAX;
	volatile int32_t x67 = 52203;
	static volatile uint32_t x68 = 3507448U;
	uint32_t t16 = 44110U;

	t16 = (x65%((x66/x67)+x68));

	if (t16 != 1816952U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x71 = UINT16_MAX;
	int64_t t17 = -1949LL;

	t17 = (x69%((x70/x71)+x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	volatile uint64_t x76 = UINT64_MAX;
	volatile uint64_t t18 = 7373254812898016LLU;

	t18 = (x73%((x74/x75)+x76));

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	static int64_t x83 = INT64_MIN;
	int64_t t19 = 84748019LL;

	t19 = (x81%((x82/x83)+x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 14LLU;
	volatile uint32_t x87 = 372349514U;
	static int8_t x88 = INT8_MAX;
	uint64_t t20 = 59321LLU;

	t20 = (x85%((x86/x87)+x88));

	if (t20 != 14LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = 19U;
	uint32_t x91 = UINT32_MAX;
	uint32_t t21 = 1963U;

	t21 = (x89%((x90/x91)+x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x97 = 10U;
	uint32_t x98 = 2477366U;
	int16_t x99 = -1;
	volatile int16_t x100 = -179;
	uint32_t t22 = 5U;

	t22 = (x97%((x98/x99)+x100));

	if (t22 != 10U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = 1;
	volatile int32_t x103 = 377;
	int8_t x104 = INT8_MIN;
	int32_t t23 = -19;

	t23 = (x101%((x102/x103)+x104));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = -1;
	static int32_t x106 = -1;
	uint64_t x107 = 4460221485868893026LLU;
	uint16_t x108 = 648U;
	uint64_t t24 = 75698214LLU;

	t24 = (x105%((x106/x107)+x108));

	if (t24 != 219LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = -6;
	uint8_t x111 = UINT8_MAX;
	volatile uint64_t t25 = 865407LLU;

	t25 = (x109%((x110/x111)+x112));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = INT64_MAX;
	volatile int64_t x115 = INT64_MAX;
	volatile int8_t x116 = INT8_MIN;
	volatile int64_t t26 = 12854196890LL;

	t26 = (x113%((x114/x115)+x116));

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x117 = 30U;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = -1LL;
	static volatile int64_t t27 = -4144849678928LL;

	t27 = (x117%((x118/x119)+x120));

	if (t27 != 30LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MIN;
	volatile int16_t x122 = -170;
	volatile uint8_t x124 = UINT8_MAX;
	int32_t t28 = 7;

	t28 = (x121%((x122/x123)+x124));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	int32_t t29 = 94534355;

	t29 = (x129%((x130/x131)+x132));

	if (t29 != -63) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 786002011555229288LLU;
	volatile int32_t x135 = -124675646;
	static int8_t x136 = INT8_MIN;

	t30 = (x133%((x134/x135)+x136));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x138 = 6U;
	int16_t x139 = -3625;
	static int16_t x140 = -1;
	int32_t t31 = -15520;

	t31 = (x137%((x138/x139)+x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 6981U;
	static int8_t x142 = -1;
	int64_t x144 = 269456417LL;
	static volatile int64_t t32 = 1783619816LL;

	t32 = (x141%((x142/x143)+x144));

	if (t32 != 6981LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MAX;
	uint16_t x147 = UINT16_MAX;
	volatile int64_t x148 = -173LL;

	t33 = (x145%((x146/x147)+x148));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x150 = UINT32_MAX;
	uint32_t x151 = 1U;

	t34 = (x149%((x150/x151)+x152));

	if (t34 != 99LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x154 = UINT32_MAX;
	int64_t t35 = 5452692888829LL;

	t35 = (x153%((x154/x155)+x156));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = INT32_MIN;
	static volatile uint32_t x163 = 210907223U;
	static volatile int16_t x164 = -48;
	uint32_t t36 = 35U;

	t36 = (x161%((x162/x163)+x164));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = INT8_MIN;
	int32_t x166 = 297810;
	int8_t x168 = -1;

	t37 = (x165%((x166/x167)+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 1742418U;
	static int16_t x170 = 1303;
	uint32_t x172 = 381804009U;
	static uint32_t t38 = 35U;

	t38 = (x169%((x170/x171)+x172));

	if (t38 != 1742418U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	static int64_t x174 = -32060341083105028LL;
	static int8_t x175 = -1;
	int32_t x176 = -1;
	volatile int64_t t39 = 55865LL;

	t39 = (x173%((x174/x175)+x176));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = INT32_MIN;
	static volatile uint32_t t40 = 1045166U;

	t40 = (x177%((x178/x179)+x180));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = INT8_MAX;
	uint16_t x182 = 894U;
	int16_t x183 = -1;
	int64_t t41 = 34472816594749LL;

	t41 = (x181%((x182/x183)+x184));

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	static uint8_t x186 = UINT8_MAX;
	static int64_t x187 = INT64_MAX;
	uint32_t x188 = 25454U;
	volatile int64_t t42 = 412613LL;

	t42 = (x185%((x186/x187)+x188));

	if (t42 != -25176LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x190 = 196184300LLU;
	uint32_t x192 = 112675U;
	volatile uint64_t t43 = 320294863LLU;

	t43 = (x189%((x190/x191)+x192));

	if (t43 != 4LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x193 = 20U;
	int64_t x194 = 56956LL;
	static int32_t x195 = 760368;
	int16_t x196 = INT16_MIN;
	volatile int64_t t44 = -68061628719LL;

	t44 = (x193%((x194/x195)+x196));

	if (t44 != 20LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 743099U;
	volatile uint8_t x198 = UINT8_MAX;
	int64_t x199 = -360994736039405LL;
	int64_t t45 = -118LL;

	t45 = (x197%((x198/x199)+x200));

	if (t45 != 22214LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 481U;
	uint32_t x203 = 169596970U;
	int8_t x204 = 1;

	t46 = (x201%((x202/x203)+x204));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	uint64_t x206 = 150LLU;
	int16_t x208 = -1969;
	volatile uint64_t t47 = 1016005477LLU;

	t47 = (x205%((x206/x207)+x208));

	if (t47 != 1841LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	int16_t x215 = -3;
	volatile int64_t x216 = 35269LL;

	t48 = (x213%((x214/x215)+x216));

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = INT16_MIN;
	volatile uint64_t x218 = UINT64_MAX;
	int64_t x219 = -717414034LL;
	uint32_t x220 = 16643U;
	static uint64_t t49 = 17LLU;

	t49 = (x217%((x218/x219)+x220));

	if (t49 != 1544LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 15U;
	int64_t x222 = 946LL;
	static uint8_t x223 = 29U;
	uint8_t x224 = 0U;
	int64_t t50 = -7745133LL;

	t50 = (x221%((x222/x223)+x224));

	if (t50 != 15LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x225 = 96U;
	uint16_t x226 = 143U;
	volatile int8_t x227 = -1;
	int32_t t51 = -24299;

	t51 = (x225%((x226/x227)+x228));

	if (t51 != 96) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x233 = 89800071LLU;
	volatile int16_t x235 = -960;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t52 = 41376552755LLU;

	t52 = (x233%((x234/x235)+x236));

	if (t52 != 89800071LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = 67U;
	static int32_t x238 = INT32_MIN;
	static int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	static volatile int64_t t53 = 21089086005LL;

	t53 = (x237%((x238/x239)+x240));

	if (t53 != 67LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = UINT16_MAX;
	static uint32_t x242 = 2488432U;
	volatile uint32_t x243 = 62802U;
	volatile int64_t x244 = 142838160LL;
	int64_t t54 = -542552825178LL;

	t54 = (x241%((x242/x243)+x244));

	if (t54 != 65535LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 18U;
	int8_t x247 = -48;

	t55 = (x245%((x246/x247)+x248));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x249 = 7605;
	uint32_t x250 = 3U;
	int8_t x251 = 26;
	static int64_t x252 = INT64_MIN;
	int64_t t56 = -785490LL;

	t56 = (x249%((x250/x251)+x252));

	if (t56 != 7605LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	int16_t x256 = INT16_MAX;

	t57 = (x253%((x254/x255)+x256));

	if (t57 != 7LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x257 = INT64_MIN;
	static int16_t x258 = 12478;
	volatile uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 129818U;
	static int64_t t58 = -168955827295532509LL;

	t58 = (x257%((x258/x259)+x260));

	if (t58 != -29994LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MAX;
	uint8_t x264 = 31U;
	int32_t t59 = 22613;

	t59 = (x261%((x262/x263)+x264));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MAX;
	volatile int16_t x268 = -1072;
	volatile uint64_t t60 = 23130347179516LLU;

	t60 = (x265%((x266/x267)+x268));

	if (t60 != 136145LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x269 = UINT32_MAX;
	uint16_t x270 = UINT16_MAX;
	volatile int16_t x271 = INT16_MIN;

	t61 = (x269%((x270/x271)+x272));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x273 = INT16_MAX;
	int64_t x274 = -1LL;
	volatile uint64_t x275 = 6LLU;
	uint64_t t62 = 4091566511387LLU;

	t62 = (x273%((x274/x275)+x276));

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x277 = -1571253LL;
	uint8_t x278 = UINT8_MAX;
	int8_t x280 = INT8_MIN;
	volatile int64_t t63 = -644LL;

	t63 = (x277%((x278/x279)+x280));

	if (t63 != -187LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x281 = -1;
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	static uint64_t x284 = 36571LLU;
	static uint64_t t64 = 58341731LLU;

	t64 = (x281%((x282/x283)+x284));

	if (t64 != 19019LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = UINT16_MAX;
	volatile uint32_t x286 = UINT32_MAX;
	uint8_t x287 = UINT8_MAX;
	static uint64_t t65 = 1974905941147LLU;

	t65 = (x285%((x286/x287)+x288));

	if (t65 != 65535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = -1;
	static uint16_t x290 = UINT16_MAX;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t66 = -22;

	t66 = (x289%((x290/x291)+x292));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 109U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = 68818;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t67 = -357083;

	t67 = (x293%((x294/x295)+x296));

	if (t67 != 109) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = INT64_MIN;
	int64_t t68 = -163273114823LL;

	t68 = (x297%((x298/x299)+x300));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x301 = INT32_MIN;
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = INT64_MAX;
	static volatile uint16_t x304 = 549U;
	static uint64_t t69 = 279297667912659127LLU;

	t69 = (x301%((x302/x303)+x304));

	if (t69 != 451LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = 3;
	int64_t x306 = INT64_MIN;
	int32_t x308 = INT32_MAX;
	volatile int64_t t70 = -25258LL;

	t70 = (x305%((x306/x307)+x308));

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x309 = 7U;
	static int64_t x310 = INT64_MIN;
	uint8_t x311 = UINT8_MAX;
	volatile int64_t t71 = 5803LL;

	t71 = (x309%((x310/x311)+x312));

	if (t71 != 7LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x314 = 16250703;
	int16_t x315 = INT16_MAX;
	volatile int16_t x316 = -37;
	static int32_t t72 = -2988475;

	t72 = (x313%((x314/x315)+x316));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = INT16_MAX;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 5U;
	volatile uint64_t t73 = 882493LLU;

	t73 = (x317%((x318/x319)+x320));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x326 = -1LL;
	int64_t x328 = 243040LL;
	int64_t t74 = 917871123140568LL;

	t74 = (x325%((x326/x327)+x328));

	if (t74 != 34864LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x329 = -3;
	static int16_t x330 = INT16_MAX;
	int32_t x331 = -7662;
	volatile uint16_t x332 = 32312U;
	int32_t t75 = 3;

	t75 = (x329%((x330/x331)+x332));

	if (t75 != -3) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = -12;
	volatile int8_t x334 = 20;
	int64_t x335 = INT64_MAX;
	int64_t x336 = -1LL;
	int64_t t76 = 33691170905LL;

	t76 = (x333%((x334/x335)+x336));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x339 = INT32_MIN;
	volatile int64_t x340 = INT64_MIN;

	t77 = (x337%((x338/x339)+x340));

	if (t77 != 54LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x341 = 2896835U;
	int64_t x344 = -2279366862114289916LL;
	volatile int64_t t78 = -3721177747235520141LL;

	t78 = (x341%((x342/x343)+x344));

	if (t78 != 2896835LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = -1;
	uint8_t x354 = 15U;
	volatile int32_t t79 = -2;

	t79 = (x353%((x354/x355)+x356));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = 64784LL;
	static int32_t x358 = INT32_MIN;
	volatile int32_t x359 = INT32_MAX;
	static uint16_t x360 = UINT16_MAX;
	static volatile int64_t t80 = -751686385294975485LL;

	t80 = (x357%((x358/x359)+x360));

	if (t80 != 64784LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x363 = -23;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t81 = 0;

	t81 = (x361%((x362/x363)+x364));

	if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = 0;
	int16_t x366 = -3580;
	int16_t x367 = INT16_MIN;
	static uint16_t x368 = 7233U;

	t82 = (x365%((x366/x367)+x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x369 = 1U;
	static uint64_t x370 = 1LLU;
	volatile int32_t x371 = INT32_MIN;
	volatile uint64_t t83 = 1161120409070LLU;

	t83 = (x369%((x370/x371)+x372));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x373 = -1;
	int64_t x375 = 1LL;
	int16_t x376 = INT16_MIN;
	static int64_t t84 = 4944195719LL;

	t84 = (x373%((x374/x375)+x376));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x378 = -12;
	static uint8_t x379 = 1U;
	uint8_t x380 = UINT8_MAX;
	int32_t t85 = -8069;

	t85 = (x377%((x378/x379)+x380));

	if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = 147;
	uint8_t x382 = 0U;
	static uint32_t x383 = 285U;
	volatile uint16_t x384 = 25U;
	static uint32_t t86 = 1585U;

	t86 = (x381%((x382/x383)+x384));

	if (t86 != 22U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x385 = 10444752982LLU;
	volatile uint8_t x386 = 92U;
	int64_t x387 = -9552335LL;
	uint32_t x388 = 872U;
	uint64_t t87 = 660343107217664LLU;

	t87 = (x385%((x386/x387)+x388));

	if (t87 != 638LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = -1;
	static uint32_t x390 = 19237294U;
	int8_t x391 = -1;
	int8_t x392 = 6;
	uint32_t t88 = 0U;

	t88 = (x389%((x390/x391)+x392));

	if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MAX;
	int16_t x395 = INT16_MAX;
	static int64_t t89 = -12852LL;

	t89 = (x393%((x394/x395)+x396));

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x398 = 4;
	int64_t x399 = -1LL;

	t90 = (x397%((x398/x399)+x400));

	if (t90 != 63LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -1;
	int16_t x402 = -4660;
	volatile int8_t x403 = INT8_MAX;
	static volatile int32_t t91 = -56075;

	t91 = (x401%((x402/x403)+x404));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x405 = INT32_MIN;
	static int32_t x406 = -793;
	int16_t x407 = -2109;
	static volatile int64_t x408 = -27503407486262425LL;
	volatile int64_t t92 = -19704488LL;

	t92 = (x405%((x406/x407)+x408));

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = 3953205;
	static uint64_t x411 = 3LLU;
	int16_t x412 = INT16_MIN;
	uint64_t t93 = 22951691852177258LLU;

	t93 = (x409%((x410/x411)+x412));

	if (t93 != 3953205LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x414 = 1036LLU;
	int32_t x415 = -1;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t94 = 1402598LLU;

	t94 = (x413%((x414/x415)+x416));

	if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x417 = -1;
	static uint8_t x418 = 2U;
	uint8_t x419 = 1U;
	uint8_t x420 = 0U;
	volatile int32_t t95 = 0;

	t95 = (x417%((x418/x419)+x420));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MAX;
	int32_t x423 = -1576567;

	t96 = (x421%((x422/x423)+x424));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x425 = 76U;
	int64_t x426 = 149778734447LL;
	volatile int64_t t97 = -3535LL;

	t97 = (x425%((x426/x427)+x428));

	if (t97 != 8LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x430 = INT16_MIN;
	uint8_t x431 = UINT8_MAX;
	uint32_t x432 = 83049U;
	int64_t t98 = 2LL;

	t98 = (x429%((x430/x431)+x432));

	if (t98 != 9LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x433 = INT8_MIN;
	static volatile uint32_t x434 = UINT32_MAX;
	static int64_t x435 = -927789965LL;
	int32_t x436 = -1;
	static int64_t t99 = 372431LL;

	t99 = (x433%((x434/x435)+x436));

	if (t99 != -3LL) { NG(); } else { ; }
	
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

