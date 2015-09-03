#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x3 = 0;
volatile int64_t x4 = -47156LL;
uint64_t x6 = 4984124387140LLU;
static volatile int64_t t2 = -894LL;
int8_t x33 = -27;
uint64_t x35 = 101611208533343408LLU;
static int32_t x39 = INT32_MAX;
int8_t x42 = 0;
int8_t x45 = -1;
int64_t x49 = INT64_MIN;
int8_t x53 = INT8_MIN;
uint64_t x55 = UINT64_MAX;
uint32_t x60 = 120U;
volatile int64_t t13 = -474193251LL;
static volatile uint64_t x72 = UINT64_MAX;
uint16_t x74 = UINT16_MAX;
volatile int64_t t17 = -7540401403913LL;
uint16_t x83 = 239U;
static int8_t x92 = -1;
int64_t t20 = 2408LL;
int8_t x94 = INT8_MIN;
int64_t x96 = INT64_MIN;
volatile int8_t x97 = INT8_MIN;
int64_t x108 = -30332LL;
int16_t x124 = INT16_MIN;
volatile int32_t t28 = 4;
int64_t x126 = 2792704982LL;
volatile uint32_t x127 = 2366884U;
int32_t x136 = -10;
volatile int64_t x141 = INT64_MIN;
uint8_t x142 = 33U;
uint16_t x148 = UINT16_MAX;
int16_t x151 = INT16_MIN;
int32_t x152 = -24;
static int32_t x155 = INT32_MIN;
int8_t x156 = 0;
int64_t t37 = 13918969470847489LL;
int32_t x163 = -2460543;
volatile int32_t t38 = -58903759;
int32_t x166 = -63676219;
static int32_t x168 = -29529588;
static uint64_t t40 = 43591LLU;
static int8_t x174 = 9;
int64_t x178 = INT64_MIN;
volatile int8_t x182 = -1;
uint64_t x189 = 849522953974LLU;
int64_t x204 = INT64_MIN;
int64_t t45 = 1975985131997LL;
uint32_t x222 = 5826367U;
uint64_t x224 = 1242697711LLU;
static int16_t x225 = INT16_MIN;
static uint8_t x228 = UINT8_MAX;
int32_t x229 = INT32_MIN;
volatile uint8_t x241 = UINT8_MAX;
int32_t x243 = -100;
volatile uint64_t t51 = 4314296084LLU;
static int64_t x248 = INT64_MAX;
int32_t x249 = -729923;
uint64_t t55 = 3670131LLU;
int8_t x266 = INT8_MIN;
volatile int64_t x274 = -1LL;
volatile int64_t t59 = -49213919LL;
int64_t x281 = 805240LL;
int16_t x294 = INT16_MIN;
volatile int32_t t63 = -45580867;
volatile int32_t t64 = 223;
uint16_t x304 = 1U;
static int16_t x315 = INT16_MAX;
volatile int64_t t68 = 2620168LL;
int32_t x324 = INT32_MAX;
volatile int64_t x329 = -1LL;
uint16_t x332 = 21241U;
int64_t x335 = -1LL;
int16_t x349 = INT16_MIN;
uint16_t x350 = UINT16_MAX;
int32_t t77 = -2791778;
uint8_t x359 = 14U;
volatile uint32_t t79 = 872577398U;
int64_t x362 = 46273735521972LL;
static volatile int8_t x364 = INT8_MIN;
int64_t t80 = -22LL;
uint8_t x365 = 6U;
int8_t x366 = INT8_MAX;
int8_t x371 = INT8_MIN;
uint16_t x373 = 71U;
uint32_t x376 = UINT32_MAX;
int8_t x377 = INT8_MIN;
static volatile int8_t x378 = -2;
uint8_t x380 = 62U;
static int64_t x384 = INT64_MIN;
volatile int64_t t85 = 113698524470795LL;
int16_t x390 = INT16_MIN;
uint16_t x402 = 15U;
int64_t x404 = -1LL;
volatile int64_t t87 = 1299778993898776LL;
uint32_t x405 = 57283198U;
uint16_t x406 = 3U;
int8_t x407 = 35;
static volatile int16_t x408 = INT16_MIN;
int8_t x409 = 17;
uint8_t x412 = 1U;
int8_t x418 = INT8_MIN;
volatile uint64_t t92 = 20199295119797LLU;
int8_t x427 = 46;
int32_t x429 = INT32_MIN;
static volatile int8_t x432 = -3;
volatile uint32_t x436 = 35109U;
int32_t x439 = 16762;
int32_t x441 = INT32_MIN;
int32_t x452 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile int8_t x2 = -1;
	volatile int64_t t0 = 1275978126004619LL;

	t0 = (x1/((x2|x3)-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 6U;
	static int32_t x7 = INT32_MAX;
	volatile int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 3766355281830485942LLU;

	t1 = (x5/((x6|x7)-x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MIN;
	int16_t x15 = 0;
	int32_t x16 = -1;

	t2 = (x13/((x14|x15)-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 44917320004534LL;
	volatile int32_t x18 = 472449;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 41U;
	volatile int64_t t3 = -81265LL;

	t3 = (x17/((x18|x19)-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 105LLU;
	volatile int8_t x26 = INT8_MIN;
	volatile int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	static uint64_t t4 = 1504213LLU;

	t4 = (x25/((x26|x27)-x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	volatile int8_t x30 = -1;
	int64_t x31 = INT64_MIN;
	static volatile int8_t x32 = -11;
	volatile int64_t t5 = -498719870982LL;

	t5 = (x29/((x30|x31)-x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = 11U;
	volatile int32_t x36 = -1589;
	volatile uint64_t t6 = 19010557LLU;

	t6 = (x33/((x34|x35)-x36));

	if (t6 != 181LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	int16_t x38 = -1;
	uint32_t x40 = 940987035U;
	static volatile uint32_t t7 = 18482662U;

	t7 = (x37/((x38|x39)-x40));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MAX;
	volatile uint16_t x43 = 12U;
	uint64_t x44 = 17734LLU;
	static uint64_t t8 = 4914813188554260LLU;

	t8 = (x41/((x42|x43)-x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x46 = 46410212714LLU;
	int8_t x47 = -1;
	static int8_t x48 = INT8_MIN;
	volatile uint64_t t9 = 14414764492376LLU;

	t9 = (x45/((x46|x47)-x48));

	if (t9 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x50 = INT16_MIN;
	int8_t x51 = -48;
	uint8_t x52 = 3U;
	volatile int64_t t10 = -1660770LL;

	t10 = (x49/((x50|x51)-x52));

	if (t10 != 180850432095191682LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MIN;
	static int8_t x56 = INT8_MAX;
	uint64_t t11 = 41673075663829799LLU;

	t11 = (x53/((x54|x55)-x56));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	static int32_t x58 = INT32_MIN;
	volatile int8_t x59 = -1;
	uint32_t t12 = 159U;

	t12 = (x57/((x58|x59)-x60));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MAX;
	int32_t x62 = -46;
	volatile int64_t x63 = INT64_MIN;
	static volatile int64_t x64 = INT64_MIN;

	t13 = (x61/((x62|x63)-x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 469098150U;
	uint64_t x66 = 163438LLU;
	uint16_t x67 = 9U;
	volatile int16_t x68 = 1;
	static volatile uint64_t t14 = 22279914355070LLU;

	t14 = (x65/((x66|x67)-x68));

	if (t14 != 2870LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = 28LLU;
	int32_t x70 = -874917795;
	uint64_t x71 = 8834382927705LLU;
	uint64_t t15 = 35LLU;

	t15 = (x69/((x70|x71)-x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	static int32_t x75 = INT32_MIN;
	static int64_t x76 = -33683931740588584LL;
	int64_t t16 = 26527152955137LL;

	t16 = (x73/((x74|x75)-x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 14U;
	static int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	static int8_t x80 = INT8_MIN;

	t17 = (x77/((x78|x79)-x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int16_t x82 = 471;
	int8_t x84 = -1;
	int32_t t18 = 6051429;

	t18 = (x81/((x82|x83)-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 0LLU;
	int8_t x86 = 2;
	static int8_t x87 = -1;
	static uint32_t x88 = 1839997U;
	volatile uint64_t t19 = 16118404439198191LLU;

	t19 = (x85/((x86|x87)-x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -351;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 443497157652655LL;

	t20 = (x89/((x90|x91)-x92));

	if (t20 != 4LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MAX;
	int8_t x95 = 6;
	volatile int64_t t21 = -3766LL;

	t21 = (x93/((x94|x95)-x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x98 = INT32_MIN;
	static uint16_t x99 = 426U;
	int32_t x100 = 18;
	int32_t t22 = -6579;

	t22 = (x97/((x98|x99)-x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 22U;
	int32_t x102 = 423;
	volatile int32_t x103 = INT32_MIN;
	int16_t x104 = -1;
	volatile int32_t t23 = 8640;

	t23 = (x101/((x102|x103)-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 1458555LLU;
	volatile uint64_t x106 = UINT64_MAX;
	uint64_t x107 = 315261305213LLU;
	volatile uint64_t t24 = 9232101598LLU;

	t24 = (x105/((x106|x107)-x108));

	if (t24 != 48LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	uint8_t x112 = 2U;
	uint64_t t25 = 47908337146LLU;

	t25 = (x109/((x110|x111)-x112));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = -1;
	static int8_t x114 = -1;
	int32_t x115 = -1028;
	uint8_t x116 = 8U;
	int32_t t26 = 50863;

	t26 = (x113/((x114|x115)-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -1;
	int32_t x120 = INT32_MAX;
	volatile int32_t t27 = -433372508;

	t27 = (x117/((x118|x119)-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x121 = 2U;
	int32_t x122 = -23;
	static int32_t x123 = -64997;

	t28 = (x121/((x122|x123)-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	static uint8_t x128 = UINT8_MAX;
	volatile int64_t t29 = -226371831366620861LL;

	t29 = (x125/((x126|x127)-x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	volatile int32_t x130 = INT32_MIN;
	volatile int16_t x131 = -1;
	static int32_t x132 = INT32_MIN;
	int32_t t30 = -551461;

	t30 = (x129/((x130|x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MIN;
	volatile uint8_t x135 = 1U;
	int32_t t31 = -346;

	t31 = (x133/((x134|x135)-x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 1758U;
	static volatile int32_t x138 = -98;
	int8_t x139 = -3;
	volatile uint32_t x140 = 111758161U;
	volatile uint32_t t32 = 52189870U;

	t32 = (x137/((x138|x139)-x140));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x143 = 0;
	volatile int16_t x144 = INT16_MIN;
	static int64_t t33 = 136LL;

	t33 = (x141/((x142|x143)-x144));

	if (t33 != -281191794056729LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 0U;
	int8_t x146 = -1;
	static uint8_t x147 = 2U;
	int32_t t34 = -32238;

	t34 = (x145/((x146|x147)-x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x149 = UINT8_MAX;
	static int8_t x150 = 4;
	int32_t t35 = 8941595;

	t35 = (x149/((x150|x151)-x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	static int16_t x154 = INT16_MIN;
	volatile uint32_t t36 = 26191U;

	t36 = (x153/((x154|x155)-x156));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 1U;
	uint8_t x158 = 26U;
	static int64_t x159 = -1LL;
	volatile int32_t x160 = INT32_MIN;

	t37 = (x157/((x158|x159)-x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -13;
	int32_t x162 = -1;
	uint16_t x164 = 5U;

	t38 = (x161/((x162|x163)-x164));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MAX;
	volatile int8_t x167 = -1;
	int64_t t39 = 758235423LL;

	t39 = (x165/((x166|x167)-x168));

	if (t39 != 312343414652LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = 8704U;
	static uint64_t x170 = UINT64_MAX;
	volatile int64_t x171 = 863567010791LL;
	volatile int16_t x172 = INT16_MIN;

	t40 = (x169/((x170|x171)-x172));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x173 = UINT32_MAX;
	static volatile int64_t x175 = INT64_MAX;
	uint8_t x176 = 26U;
	int64_t t41 = 185LL;

	t41 = (x173/((x174|x175)-x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x177 = 1852585LLU;
	static int64_t x179 = INT64_MIN;
	volatile int16_t x180 = -1;
	volatile uint64_t t42 = 3863719797821LLU;

	t42 = (x177/((x178|x179)-x180));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 2251U;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = 1U;
	int64_t t43 = 26548LL;

	t43 = (x181/((x182|x183)-x184));

	if (t43 != -1125LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x190 = 11U;
	int32_t x191 = 1940703;
	uint64_t x192 = 39224LLU;
	volatile uint64_t t44 = 5907LLU;

	t44 = (x189/((x190|x191)-x192));

	if (t44 != 446769LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 2412U;
	int64_t x202 = -1002LL;
	static int16_t x203 = -1;

	t45 = (x201/((x202|x203)-x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = -1;
	uint64_t x207 = 1016102LLU;
	int32_t x208 = INT32_MAX;
	volatile uint64_t t46 = 2714526567016LLU;

	t46 = (x205/((x206|x207)-x208));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x221 = INT64_MAX;
	int8_t x223 = INT8_MIN;
	static uint64_t t47 = 5372525886617830LLU;

	t47 = (x221/((x222|x223)-x224));

	if (t47 != 3021807863LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x226 = UINT16_MAX;
	static uint8_t x227 = 1U;
	int32_t t48 = -2769299;

	t48 = (x225/((x226|x227)-x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x230 = -29;
	uint64_t x231 = 3234452304LLU;
	static int64_t x232 = 4177812355LL;
	static uint64_t t49 = 21LLU;

	t49 = (x229/((x230|x231)-x232));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x233 = 240U;
	static volatile uint32_t x234 = UINT32_MAX;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MAX;
	static int64_t t50 = -119590656993LL;

	t50 = (x233/((x234|x235)-x236));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x242 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;

	t51 = (x241/((x242|x243)-x244));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = 13;
	volatile int32_t x246 = -14371;
	int32_t x247 = INT32_MAX;
	int64_t t52 = 919053LL;

	t52 = (x245/((x246|x247)-x248));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x250 = 102032168778084LLU;
	int16_t x251 = 1023;
	volatile int32_t x252 = INT32_MIN;
	volatile uint64_t t53 = 170405273LLU;

	t53 = (x249/((x250|x251)-x252));

	if (t53 != 180789LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MAX;
	int32_t x255 = -20677923;
	volatile uint16_t x256 = 30U;
	int32_t t54 = 937;

	t54 = (x253/((x254|x255)-x256));

	if (t54 != 69273666) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 34073317170813LLU;
	static int32_t x258 = 1131;
	uint64_t x259 = 864312388016LLU;
	volatile uint32_t x260 = UINT32_MAX;

	t55 = (x257/((x258|x259)-x260));

	if (t55 != 39LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x261 = INT64_MAX;
	int8_t x262 = INT8_MIN;
	static int32_t x263 = -169911;
	volatile int32_t x264 = INT32_MIN;
	volatile int64_t t56 = 379095277243291159LL;

	t56 = (x261/((x262|x263)-x264));

	if (t56 != 4294967406LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x265 = 1;
	int8_t x267 = INT8_MAX;
	int64_t x268 = -950565192372531883LL;
	volatile int64_t t57 = -516870778963908678LL;

	t57 = (x265/((x266|x267)-x268));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 10119U;
	volatile uint16_t x271 = 27U;
	uint32_t x272 = 0U;
	uint32_t t58 = 167318899U;

	t58 = (x269/((x270|x271)-x272));

	if (t58 != 211720U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x273 = INT32_MAX;
	int64_t x275 = -1LL;
	int32_t x276 = 798769;

	t59 = (x273/((x274|x275)-x276));

	if (t59 != -2688LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	volatile int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	uint64_t t60 = 6LLU;

	t60 = (x277/((x278|x279)-x280));

	if (t60 != 131076LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x282 = 3656;
	volatile uint32_t x283 = 368U;
	uint8_t x284 = 12U;
	static int64_t t61 = 410LL;

	t61 = (x281/((x282|x283)-x284));

	if (t61 != 203LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MAX;
	static int64_t x287 = INT64_MIN;
	int64_t x288 = -12376343903377LL;
	int64_t t62 = 4579984015LL;

	t62 = (x285/((x286|x287)-x288));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x293 = 2;
	int32_t x295 = -372121;
	int32_t x296 = INT32_MIN;

	t63 = (x293/((x294|x295)-x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int32_t x298 = -3;
	static volatile int8_t x299 = 11;
	uint8_t x300 = UINT8_MAX;

	t64 = (x297/((x298|x299)-x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MAX;
	int16_t x303 = INT16_MAX;
	int32_t t65 = 838;

	t65 = (x301/((x302|x303)-x304));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 7065012546963972415LLU;
	int8_t x307 = 25;
	int32_t x308 = 22;
	volatile uint64_t t66 = 7679144102828LLU;

	t66 = (x305/((x306|x307)-x308));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = -4;
	volatile int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = 1573468;
	int32_t t67 = -6413;

	t67 = (x309/((x310|x311)-x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = INT64_MAX;
	static int8_t x314 = -1;
	int8_t x316 = INT8_MIN;

	t68 = (x313/((x314|x315)-x316));

	if (t68 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	uint16_t x320 = 703U;
	static volatile uint32_t t69 = 60481600U;

	t69 = (x317/((x318|x319)-x320));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	volatile uint8_t x322 = UINT8_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int32_t t70 = 798;

	t70 = (x321/((x322|x323)-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = -25582964;
	uint32_t x326 = 3U;
	int64_t x327 = -1LL;
	uint8_t x328 = UINT8_MAX;
	int64_t t71 = 4771LL;

	t71 = (x325/((x326|x327)-x328));

	if (t71 != 99933LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x330 = INT16_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile int64_t t72 = -10087354974LL;

	t72 = (x329/((x330|x331)-x332));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = 22;
	static volatile uint8_t x334 = 3U;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t73 = -2230LL;

	t73 = (x333/((x334|x335)-x336));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 0U;
	int16_t x338 = 13778;
	static int16_t x339 = -5331;
	volatile int64_t x340 = INT64_MIN;
	volatile int64_t t74 = -8478LL;

	t74 = (x337/((x338|x339)-x340));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x341 = -57;
	volatile uint8_t x342 = 9U;
	volatile uint32_t x343 = UINT32_MAX;
	static int32_t x344 = INT32_MIN;
	volatile uint32_t t75 = 47U;

	t75 = (x341/((x342|x343)-x344));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 66U;
	static int32_t x346 = INT32_MIN;
	volatile int32_t x347 = INT32_MAX;
	static volatile uint64_t x348 = 1294056289789LLU;
	static uint64_t t76 = 51264748408575738LLU;

	t76 = (x345/((x346|x347)-x348));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x351 = INT8_MIN;
	volatile int8_t x352 = INT8_MAX;

	t77 = (x349/((x350|x351)-x352));

	if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	volatile int32_t x355 = INT32_MIN;
	static volatile int8_t x356 = 0;
	volatile int64_t t78 = -15LL;

	t78 = (x353/((x354|x355)-x356));

	if (t78 != 32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MAX;
	int32_t x358 = -1;
	uint32_t x360 = 161623U;

	t79 = (x357/((x358|x359)-x360));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x361 = INT8_MIN;
	uint32_t x363 = UINT32_MAX;

	t80 = (x361/((x362|x363)-x364));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x367 = -2518012151385083LL;
	volatile int64_t x368 = -1LL;
	static volatile int64_t t81 = 41643701339247963LL;

	t81 = (x365/((x366|x367)-x368));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = UINT8_MAX;
	static int32_t x372 = INT32_MIN;
	volatile int64_t t82 = -139232LL;

	t82 = (x369/((x370|x371)-x372));

	if (t82 != -4294967298LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x374 = INT16_MAX;
	volatile int32_t x375 = INT32_MAX;
	volatile uint32_t t83 = 0U;

	t83 = (x373/((x374|x375)-x376));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x379 = 2U;
	int32_t t84 = 436691782;

	t84 = (x377/((x378|x379)-x380));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x381 = 2556U;
	static int16_t x382 = -10386;
	int16_t x383 = INT16_MIN;

	t85 = (x381/((x382|x383)-x384));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = 164594006LLU;
	int64_t x391 = -110LL;
	volatile int8_t x392 = 11;
	uint64_t t86 = 41LLU;

	t86 = (x389/((x390|x391)-x392));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int64_t x403 = 3012523LL;

	t87 = (x401/((x402|x403)-x404));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t t88 = 2679662U;

	t88 = (x405/((x406|x407)-x408));

	if (t88 != 1746U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	int64_t t89 = -1369341LL;

	t89 = (x409/((x410|x411)-x412));

	if (t89 != -8LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MIN;
	volatile uint32_t x414 = 888954971U;
	static volatile int8_t x415 = INT8_MAX;
	uint32_t x416 = 1150339307U;
	volatile uint32_t t90 = 13U;

	t90 = (x413/((x414|x415)-x416));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = 14U;
	volatile int8_t x419 = INT8_MAX;
	volatile uint64_t x420 = 16LLU;
	uint64_t t91 = 96673682406635510LLU;

	t91 = (x417/((x418|x419)-x420));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = 94673654LL;
	uint8_t x423 = 23U;
	volatile uint64_t x424 = 7LLU;

	t92 = (x421/((x422|x423)-x424));

	if (t92 != 45LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = 10495U;
	volatile uint8_t x426 = 1U;
	int32_t x428 = 60;
	volatile int32_t t93 = 5171894;

	t93 = (x425/((x426|x427)-x428));

	if (t93 != -807) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x430 = -691;
	uint8_t x431 = 11U;
	volatile int32_t t94 = 4941713;

	t94 = (x429/((x430|x431)-x432));

	if (t94 != 3130442) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x433 = INT64_MAX;
	int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	int64_t t95 = 8340LL;

	t95 = (x433/((x434|x435)-x436));

	if (t95 != 2147517587LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MIN;
	static int32_t x440 = INT32_MIN;
	int32_t t96 = 13779131;

	t96 = (x437/((x438|x439)-x440));

	if (t96 != -128116) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x442 = 14257;
	uint32_t x443 = UINT32_MAX;
	volatile uint32_t x444 = 495327U;
	uint32_t t97 = 574158136U;

	t97 = (x441/((x442|x443)-x444));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x445 = 19;
	static int16_t x446 = INT16_MIN;
	volatile int64_t x447 = INT64_MIN;
	int16_t x448 = -5;
	volatile int64_t t98 = -2511867636549LL;

	t98 = (x445/((x446|x447)-x448));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = UINT8_MAX;
	uint16_t x450 = 4U;
	uint32_t x451 = 5313344U;
	volatile uint32_t t99 = 81078988U;

	t99 = (x449/((x450|x451)-x452));

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

