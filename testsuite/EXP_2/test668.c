#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 23369LLU;
uint8_t x15 = 56U;
int8_t x21 = INT8_MIN;
volatile uint64_t x23 = 1017622584971223977LLU;
volatile int8_t x30 = INT8_MIN;
int8_t x33 = INT8_MIN;
static volatile int64_t x47 = 4115071857LL;
volatile uint8_t x51 = 7U;
static volatile int8_t x54 = 0;
int64_t x55 = 776879LL;
volatile int64_t t12 = 2LL;
static uint16_t x62 = 5U;
uint32_t x68 = 18U;
uint32_t t15 = 943U;
static int32_t x69 = INT32_MIN;
volatile uint64_t t16 = 18541301882855LLU;
uint16_t x75 = 4224U;
int64_t x76 = -296717309290652782LL;
uint16_t x80 = UINT16_MAX;
volatile int32_t t18 = -53;
static int32_t x84 = -6996570;
volatile int64_t x90 = 352LL;
volatile int32_t x92 = INT32_MAX;
int8_t x94 = 14;
int64_t x101 = INT64_MIN;
int32_t x108 = -1;
int32_t x109 = INT32_MAX;
int16_t x118 = INT16_MIN;
static int16_t x122 = INT16_MIN;
uint64_t x124 = 26LLU;
uint64_t t29 = 1751859978968438501LLU;
volatile uint16_t x126 = 83U;
static uint16_t x130 = 735U;
uint8_t x132 = 52U;
volatile uint32_t t31 = 1U;
uint32_t x136 = UINT32_MAX;
uint8_t x142 = 55U;
int16_t x146 = -50;
volatile int64_t x147 = INT64_MAX;
int16_t x149 = 1014;
uint16_t x151 = UINT16_MAX;
int64_t x155 = -1926212611655222LL;
int64_t x160 = INT64_MAX;
volatile int64_t t38 = -626641545621872LL;
int64_t x164 = 229LL;
int16_t x172 = -1;
int8_t x174 = INT8_MIN;
uint16_t x175 = 2U;
int64_t x179 = INT64_MIN;
int8_t x190 = INT8_MIN;
int32_t x194 = -65;
int16_t x196 = 6631;
int32_t x203 = INT32_MIN;
uint32_t x204 = 57341941U;
static uint64_t t49 = 436078995057LLU;
uint64_t t50 = 207591910843575LLU;
volatile int32_t x221 = 25;
uint64_t x223 = UINT64_MAX;
int8_t x224 = INT8_MIN;
int64_t x226 = -8618LL;
uint64_t t53 = 3864298068LLU;
static uint32_t x229 = 6U;
uint16_t x230 = UINT16_MAX;
static volatile uint8_t x235 = UINT8_MAX;
int32_t x255 = -1;
volatile int64_t x256 = INT64_MIN;
int32_t x260 = INT32_MIN;
volatile uint64_t t60 = 3250LLU;
static volatile uint32_t t62 = 98U;
int16_t x271 = INT16_MIN;
int64_t x274 = INT64_MAX;
static int16_t x275 = INT16_MIN;
uint64_t x276 = 99LLU;
static int32_t x280 = 8;
int64_t x282 = INT64_MIN;
int64_t x294 = -1LL;
static int16_t x295 = INT16_MIN;
volatile int64_t t69 = 16975209118839665LL;
int64_t x297 = INT64_MAX;
uint8_t x303 = 1U;
int8_t x309 = 0;
uint16_t x321 = 51U;
int32_t x322 = -12801;
volatile int8_t x329 = -1;
uint16_t x332 = 3801U;
int64_t x336 = INT64_MAX;
static uint32_t x341 = UINT32_MAX;
static uint64_t t81 = 9085953774LLU;
int64_t t82 = -12546957LL;
int32_t x352 = -1;
uint64_t x356 = 47280843571028086LLU;
uint64_t x377 = 18595205845LLU;
volatile int64_t x379 = INT64_MIN;
volatile uint16_t x385 = 4487U;
uint8_t x393 = 23U;
uint64_t x396 = 246841131932576211LLU;
int16_t x406 = INT16_MIN;
int64_t x414 = INT64_MIN;
uint64_t x415 = 2090219LLU;
static int32_t x418 = 0;
volatile int64_t x419 = -4701LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x3 = INT32_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile uint64_t t0 = 220442465LLU;

	t0 = ((x1^(x2/x3))%x4);

	if (t0 != 32768LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int8_t x6 = -1;
	int32_t x7 = -1;
	static int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -24LL;

	t1 = ((x5^(x6/x7))%x8);

	if (t1 != 254LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static uint8_t x10 = 2U;
	uint32_t x11 = 8848416U;
	int64_t x12 = -36359558454LL;
	volatile int64_t t2 = -3065320906864241LL;

	t2 = ((x9^(x10/x11))%x12);

	if (t2 != 65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1251;
	uint16_t x14 = 1263U;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 259724;

	t3 = ((x13^(x14/x15))%x16);

	if (t3 != 117) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 1427LLU;
	int16_t x18 = -7;
	int8_t x19 = -1;
	uint16_t x20 = 253U;
	volatile uint64_t t4 = 32125387122939LLU;

	t4 = ((x17^(x18/x19))%x20);

	if (t4 != 163LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = -1;
	uint32_t x24 = 13U;
	uint64_t t5 = 3LLU;

	t5 = ((x21^(x22/x23))%x24);

	if (t5 != 10LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 9U;
	uint8_t x26 = UINT8_MAX;
	volatile uint64_t x27 = 5344273LLU;
	int8_t x28 = -1;
	volatile uint64_t t6 = 3939LLU;

	t6 = ((x25^(x26/x27))%x28);

	if (t6 != 9LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile int64_t x31 = INT64_MAX;
	int64_t x32 = -14607903LL;
	int64_t t7 = 130441307972475LL;

	t7 = ((x29^(x30/x31))%x32);

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = -211641718628LL;

	t8 = ((x33^(x34/x35))%x36);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int8_t x38 = 6;
	int16_t x39 = 1;
	uint16_t x40 = 25109U;
	int32_t t9 = 47164565;

	t9 = ((x37^(x38/x39))%x40);

	if (t9 != 249) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = INT64_MIN;
	volatile int16_t x48 = -1;
	volatile int64_t t10 = -1LL;

	t10 = ((x45^(x46/x47))%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	uint32_t t11 = 93675269U;

	t11 = ((x49^(x50/x51))%x52);

	if (t11 != 17U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	int16_t x56 = 27;

	t12 = ((x53^(x54/x55))%x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 133192562U;
	int64_t x58 = -9322250LL;
	static int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MIN;
	static volatile int64_t t13 = -119952780232862LL;

	t13 = ((x57^(x58/x59))%x60);

	if (t13 != -133192298LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 8029U;
	uint8_t x63 = 2U;
	static int64_t x64 = INT64_MIN;
	volatile int64_t t14 = 393354295109181330LL;

	t14 = ((x61^(x62/x63))%x64);

	if (t14 != 8031LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 1;
	uint16_t x66 = UINT16_MAX;
	uint32_t x67 = UINT32_MAX;

	t15 = ((x65^(x66/x67))%x68);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x70 = 28;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 777U;

	t16 = ((x69^(x70/x71))%x72);

	if (t16 != 434LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MAX;
	volatile int32_t x74 = INT32_MIN;
	int64_t t17 = -417LL;

	t17 = ((x73^(x74/x75))%x76);

	if (t17 != -2146975249LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 3998U;
	int16_t x78 = INT16_MIN;
	static volatile int16_t x79 = INT16_MAX;

	t18 = ((x77^(x78/x79))%x80);

	if (t18 != -3999) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = 5;
	volatile int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	static volatile int64_t t19 = -26582LL;

	t19 = ((x81^(x82/x83))%x84);

	if (t19 != 5LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint8_t x86 = 1U;
	volatile int32_t x87 = -1;
	int32_t x88 = INT32_MIN;
	static int32_t t20 = 584;

	t20 = ((x85^(x86/x87))%x88);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -4916274181037043LL;
	volatile int8_t x91 = INT8_MIN;
	int64_t t21 = -26643400882937LL;

	t21 = ((x89^(x90/x91))%x92);

	if (t21 != 1213254297LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = 2166586U;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 62U;
	static uint32_t t22 = 3U;

	t22 = ((x93^(x94/x95))%x96);

	if (t22 != 58U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -445799850;
	uint16_t x98 = 111U;
	int64_t x99 = INT64_MAX;
	volatile int16_t x100 = INT16_MIN;
	int64_t t23 = -3630199214059909130LL;

	t23 = ((x97^(x98/x99))%x100);

	if (t23 != -23978LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x102 = -41;
	int8_t x103 = 28;
	int16_t x104 = -743;
	volatile int64_t t24 = -5639670318LL;

	t24 = ((x101^(x102/x103))%x104);

	if (t24 != 662LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 6U;
	int8_t x106 = -1;
	static uint32_t x107 = UINT32_MAX;
	volatile uint32_t t25 = 271261U;

	t25 = ((x105^(x106/x107))%x108);

	if (t25 != 7U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x110 = 5438;
	static int16_t x111 = -2;
	uint8_t x112 = UINT8_MAX;
	int32_t t26 = -51;

	t26 = ((x109^(x110/x111))%x112);

	if (t26 != -215) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x113 = 19U;
	int64_t x114 = -1LL;
	static uint64_t x115 = 31452966724379322LLU;
	int16_t x116 = -65;
	static volatile uint64_t t27 = 35365478LLU;

	t27 = ((x113^(x114/x115))%x116);

	if (t27 != 601LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x117 = INT16_MAX;
	int16_t x119 = 4;
	volatile int32_t x120 = INT32_MAX;
	static int32_t t28 = -100486470;

	t28 = ((x117^(x118/x119))%x120);

	if (t28 != -24577) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;

	t29 = ((x121^(x122/x123))%x124);

	if (t29 != 18LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	int8_t x127 = INT8_MIN;
	int64_t x128 = -1LL;
	int64_t t30 = -19406LL;

	t30 = ((x125^(x126/x127))%x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 12U;
	uint32_t x131 = UINT32_MAX;

	t31 = ((x129^(x130/x131))%x132);

	if (t31 != 12U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1794;
	uint16_t x134 = 19054U;
	static int64_t x135 = INT64_MIN;
	int64_t t32 = 135285666678LL;

	t32 = ((x133^(x134/x135))%x136);

	if (t32 != -1794LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -448333081;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	volatile int32_t x140 = -18788301;
	volatile int32_t t33 = 320566672;

	t33 = ((x137^(x138/x139))%x140);

	if (t33 != -16201902) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 291U;
	static volatile int64_t x143 = INT64_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	uint64_t t34 = 7465LLU;

	t34 = ((x141^(x142/x143))%x144);

	if (t34 != 291LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 5U;
	uint8_t x148 = 1U;
	volatile int64_t t35 = -1104LL;

	t35 = ((x145^(x146/x147))%x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x150 = INT16_MIN;
	int16_t x152 = 13;
	int32_t t36 = -512099739;

	t36 = ((x149^(x150/x151))%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MIN;
	int64_t x156 = 20179960612153LL;
	volatile int64_t t37 = 1LL;

	t37 = ((x153^(x154/x155))%x156);

	if (t37 != -27980LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	volatile int8_t x159 = -1;

	t38 = ((x157^(x158/x159))%x160);

	if (t38 != 129LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	int64_t t39 = 1018LL;

	t39 = ((x161^(x162/x163))%x164);

	if (t39 != -43LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MAX;
	int64_t x166 = -1LL;
	int64_t x167 = -67315437835LL;
	uint32_t x168 = UINT32_MAX;
	static int64_t t40 = -1LL;

	t40 = ((x165^(x166/x167))%x168);

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	static int16_t x170 = INT16_MAX;
	int16_t x171 = -1;
	int32_t t41 = 177484;

	t41 = ((x169^(x170/x171))%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MAX;
	volatile uint64_t x176 = 7232954471026LLU;
	uint64_t t42 = 10009001221449849LLU;

	t42 = ((x173^(x174/x175))%x176);

	if (t42 != 5045473604307LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 61U;
	int64_t x178 = INT64_MIN;
	volatile int64_t x180 = -8443018653828LL;
	int64_t t43 = -77858947651274LL;

	t43 = ((x177^(x178/x179))%x180);

	if (t43 != 60LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = INT64_MIN;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MAX;
	int8_t x188 = INT8_MIN;
	static volatile int64_t t44 = 1574402696676938368LL;

	t44 = ((x185^(x186/x187))%x188);

	if (t44 != 126LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = 17983503U;
	static volatile int64_t t45 = 170502LL;

	t45 = ((x189^(x190/x191))%x192);

	if (t45 != -4096007LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 4U;
	static int8_t x195 = INT8_MAX;
	int32_t t46 = 90;

	t46 = ((x193^(x194/x195))%x196);

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x197 = -43;
	uint16_t x198 = 921U;
	uint64_t x199 = 178030461061270171LLU;
	int64_t x200 = -14965566676830LL;
	volatile uint64_t t47 = 880269392LLU;

	t47 = ((x197^(x198/x199))%x200);

	if (t47 != 14965566676787LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 112U;
	uint8_t x202 = 24U;
	uint32_t t48 = 6046U;

	t48 = ((x201^(x202/x203))%x204);

	if (t48 != 112U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = 764073U;
	volatile int16_t x210 = -1;
	uint64_t x211 = 1557127621LLU;
	static int64_t x212 = -2630694511LL;

	t49 = ((x209^(x210/x211))%x212);

	if (t49 != 11846167374LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x213 = INT16_MIN;
	int8_t x214 = 0;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MAX;

	t50 = ((x213^(x214/x215))%x216);

	if (t50 != 15LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x217 = UINT16_MAX;
	volatile int16_t x218 = INT16_MIN;
	uint64_t x219 = 7099117687227698LLU;
	int64_t x220 = -1LL;
	static volatile uint64_t t51 = 10271813125LLU;

	t51 = ((x217^(x218/x219))%x220);

	if (t51 != 62937LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x222 = INT64_MIN;
	volatile uint64_t t52 = 30923454790854032LLU;

	t52 = ((x221^(x222/x223))%x224);

	if (t52 != 25LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x225 = -95;
	uint64_t x227 = 906LLU;
	volatile int16_t x228 = INT16_MIN;

	t53 = ((x225^(x226/x227))%x228);

	if (t53 != 18426383429036582959LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x231 = INT32_MIN;
	volatile int64_t x232 = INT64_MAX;
	volatile int64_t t54 = 771751161712713172LL;

	t54 = ((x229^(x230/x231))%x232);

	if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 447825LLU;
	int16_t x234 = -12;
	int16_t x236 = INT16_MIN;
	volatile uint64_t t55 = 511794150182LLU;

	t55 = ((x233^(x234/x235))%x236);

	if (t55 != 447825LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;
	int64_t t56 = 13033680LL;

	t56 = ((x237^(x238/x239))%x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	volatile uint32_t x242 = 2040U;
	uint32_t x243 = 2269393U;
	int16_t x244 = -4;
	volatile uint32_t t57 = 68877U;

	t57 = ((x241^(x242/x243))%x244);

	if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = 6402519885LL;
	int64_t x247 = INT64_MIN;
	int16_t x248 = 6309;
	int64_t t58 = 12028781754356LL;

	t58 = ((x245^(x246/x247))%x248);

	if (t58 != -992LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = 1053393420786319LLU;
	int32_t x254 = INT32_MAX;
	uint64_t t59 = 1134482596615443LLU;

	t59 = ((x253^(x254/x255))%x256);

	if (t59 != 9222318643590175374LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x257 = INT16_MAX;
	int64_t x258 = 5463890768LL;
	uint64_t x259 = 119314899015238LLU;

	t60 = ((x257^(x258/x259))%x260);

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 2961559U;
	uint16_t x262 = 1U;
	int8_t x263 = -1;
	int16_t x264 = INT16_MAX;
	volatile uint32_t t61 = 109072771U;

	t61 = ((x261^(x262/x263))%x264);

	if (t61 != 20241U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = 0;
	volatile uint32_t x266 = UINT32_MAX;
	uint8_t x267 = UINT8_MAX;
	static uint8_t x268 = UINT8_MAX;

	t62 = ((x265^(x266/x267))%x268);

	if (t62 != 4U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	uint32_t x272 = 29U;
	volatile int64_t t63 = 1048703590577LL;

	t63 = ((x269^(x270/x271))%x272);

	if (t63 != -12LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	uint64_t t64 = 12897542732LLU;

	t64 = ((x273^(x274/x275))%x276);

	if (t64 != 90LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 18890485LLU;
	uint8_t x278 = 5U;
	int16_t x279 = -1;
	volatile uint64_t t65 = 2937789825LLU;

	t65 = ((x277^(x278/x279))%x280);

	if (t65 != 6LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = UINT32_MAX;
	static uint64_t x283 = UINT64_MAX;
	static uint64_t x284 = UINT64_MAX;
	volatile uint64_t t66 = 10LLU;

	t66 = ((x281^(x282/x283))%x284);

	if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	volatile uint8_t x286 = UINT8_MAX;
	static int8_t x287 = INT8_MAX;
	int8_t x288 = -1;
	volatile int32_t t67 = 164;

	t67 = ((x285^(x286/x287))%x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = 74U;
	uint64_t x290 = UINT64_MAX;
	volatile uint16_t x291 = UINT16_MAX;
	static int16_t x292 = -1;
	uint64_t t68 = 3LLU;

	t68 = ((x289^(x290/x291))%x292);

	if (t68 != 281479271743563LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x293 = -1;
	volatile uint16_t x296 = 6689U;

	t69 = ((x293^(x294/x295))%x296);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x298 = 1LLU;
	uint8_t x299 = UINT8_MAX;
	static volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t70 = 104448109893914220LLU;

	t70 = ((x297^(x298/x299))%x300);

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MAX;
	uint8_t x302 = UINT8_MAX;
	int8_t x304 = 1;
	volatile int32_t t71 = 179;

	t71 = ((x301^(x302/x303))%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = 305;
	uint8_t x306 = 93U;
	uint16_t x307 = 3U;
	volatile int32_t x308 = 24305031;
	int32_t t72 = -3690848;

	t72 = ((x305^(x306/x307))%x308);

	if (t72 != 302) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x310 = 3664;
	volatile int8_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;
	static int32_t t73 = -51;

	t73 = ((x309^(x310/x311))%x312);

	if (t73 != -80) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = -1LL;
	static uint32_t x314 = 51U;
	static int64_t x315 = INT64_MIN;
	volatile uint16_t x316 = 18450U;
	int64_t t74 = 70LL;

	t74 = ((x313^(x314/x315))%x316);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x317 = INT16_MIN;
	static volatile uint16_t x318 = 100U;
	int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t75 = -181185;

	t75 = ((x317^(x318/x319))%x320);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x323 = INT16_MIN;
	uint8_t x324 = 46U;
	volatile int32_t t76 = -12;

	t76 = ((x321^(x322/x323))%x324);

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -1;
	int64_t x326 = 2167LL;
	int64_t x327 = -21479LL;
	int8_t x328 = -3;
	int64_t t77 = -26520LL;

	t77 = ((x325^(x326/x327))%x328);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x330 = -2576;
	int16_t x331 = 162;
	volatile int32_t t78 = -6966066;

	t78 = ((x329^(x330/x331))%x332);

	if (t78 != 14) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -10526;
	int64_t x334 = INT64_MIN;
	int64_t x335 = -1206487340576262LL;
	int64_t t79 = -124942919966669LL;

	t79 = ((x333^(x334/x335))%x336);

	if (t79 != -13506LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = 434;
	uint32_t x339 = 65436U;
	int32_t x340 = 6969962;
	volatile uint64_t t80 = 19794966046273609LLU;

	t80 = ((x337^(x338/x339))%x340);

	if (t80 != 2858041LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x342 = 1U;
	volatile uint32_t x343 = 263123009U;
	uint64_t x344 = 16212LLU;

	t81 = ((x341^(x342/x343))%x344);

	if (t81 != 3195LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x346 = 1147U;
	static uint32_t x347 = 578013737U;
	int64_t x348 = INT64_MIN;

	t82 = ((x345^(x346/x347))%x348);

	if (t82 != 4294934528LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = -1;
	int64_t x351 = INT64_MIN;
	int64_t t83 = 1987451794890481LL;

	t83 = ((x349^(x350/x351))%x352);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = -5;
	int16_t x354 = 15165;
	int8_t x355 = -3;
	uint64_t t84 = 1520106937189741328LLU;

	t84 = ((x353^(x354/x355))%x356);

	if (t84 != 5050LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x357 = 1462138181U;
	static int64_t x358 = INT64_MIN;
	static int64_t x359 = 137718514560841801LL;
	volatile uint64_t x360 = 247082488053LLU;
	uint64_t t85 = 7150902LLU;

	t85 = ((x357^(x358/x359))%x360);

	if (t85 != 132306918726LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = -123LL;
	int64_t x367 = -1LL;
	volatile int64_t x368 = INT64_MIN;
	int64_t t86 = 109961557393700243LL;

	t86 = ((x365^(x366/x367))%x368);

	if (t86 != 4294967172LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x369 = INT16_MIN;
	uint32_t x370 = 1859006U;
	static uint16_t x371 = UINT16_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t87 = 13453U;

	t87 = ((x369^(x370/x371))%x372);

	if (t87 != 28U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = -44;
	uint32_t x374 = 8U;
	int8_t x375 = INT8_MIN;
	int16_t x376 = 3;
	static uint32_t t88 = 1771U;

	t88 = ((x373^(x374/x375))%x376);

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x378 = 10288U;
	volatile int64_t x380 = 2LL;
	static uint64_t t89 = 123902923510LLU;

	t89 = ((x377^(x378/x379))%x380);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MAX;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = -210911499;
	static uint64_t x384 = 739171LLU;
	static volatile uint64_t t90 = 62LLU;

	t90 = ((x381^(x382/x383))%x384);

	if (t90 != 32766LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = -3728582462345LL;
	int16_t x388 = INT16_MIN;
	int64_t t91 = 288154314551LL;

	t91 = ((x385^(x386/x387))%x388);

	if (t91 != 4487LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x389 = INT32_MIN;
	static int32_t x390 = -6;
	int8_t x391 = 5;
	int32_t x392 = INT32_MIN;
	int32_t t92 = INT32_MAX;

	t92 = ((x389^(x390/x391))%x392);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x394 = 98041700U;
	static uint16_t x395 = UINT16_MAX;
	uint64_t t93 = 1553193700370173887LLU;

	t93 = ((x393^(x394/x395))%x396);

	if (t93 != 1487LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MAX;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MAX;
	int64_t t94 = -40LL;

	t94 = ((x397^(x398/x399))%x400);

	if (t94 != -7LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 807LLU;
	volatile uint16_t x402 = 23410U;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MAX;
	volatile uint64_t t95 = 20700043761LLU;

	t95 = ((x401^(x402/x403))%x404);

	if (t95 != 807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = -1;
	uint32_t x407 = 53U;
	static int8_t x408 = 1;
	static uint32_t t96 = 7U;

	t96 = ((x405^(x406/x407))%x408);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = 14LLU;
	int64_t x410 = 2798642261LL;
	uint16_t x411 = 2U;
	int32_t x412 = -1;
	uint64_t t97 = 9800312398926LLU;

	t97 = ((x409^(x410/x411))%x412);

	if (t97 != 1399321124LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	static volatile uint32_t x416 = 16768U;
	static uint64_t t98 = 15LLU;

	t98 = ((x413^(x414/x415))%x416);

	if (t98 != 10879LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = UINT8_MAX;
	uint64_t x420 = 478086509615LLU;
	volatile uint64_t t99 = 97LLU;

	t99 = ((x417^(x418/x419))%x420);

	if (t99 != 255LLU) { NG(); } else { ; }
	
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

