#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int64_t x7 = INT64_MAX;
static int32_t x8 = 10522050;
int32_t x14 = INT32_MIN;
static int64_t x16 = INT64_MIN;
static volatile int16_t x19 = INT16_MIN;
volatile uint64_t t4 = 12LLU;
int64_t x21 = INT64_MAX;
int64_t x22 = 3183384868474LL;
uint8_t x23 = UINT8_MAX;
int16_t x27 = -1;
uint64_t t6 = 110515467567212LLU;
int8_t x33 = 23;
uint64_t x37 = 506LLU;
int32_t x49 = -34082;
int64_t x50 = INT64_MIN;
uint64_t x52 = 67380531893760LLU;
int8_t x54 = -1;
static int16_t x65 = INT16_MIN;
uint32_t x70 = 15U;
int8_t x75 = -16;
uint32_t x85 = 1142957955U;
int16_t x86 = INT16_MAX;
uint64_t x91 = UINT64_MAX;
static uint8_t x95 = UINT8_MAX;
int16_t x97 = -1;
int8_t x99 = -8;
int32_t x101 = INT32_MIN;
static uint16_t x109 = 2535U;
volatile int32_t x112 = 52083192;
uint32_t x120 = 6410991U;
int32_t x131 = 55;
int64_t t32 = 24295LL;
volatile int32_t t33 = -522252;
int8_t x141 = -10;
volatile uint64_t t36 = 443903LLU;
int64_t x154 = INT64_MAX;
uint32_t x155 = 19285454U;
int64_t t37 = 39399498035LL;
static int32_t x160 = -1;
volatile uint32_t t39 = 470U;
int64_t x165 = INT64_MIN;
uint64_t x171 = 0LLU;
int32_t x174 = 0;
static volatile uint32_t x175 = 28U;
int16_t x185 = 16345;
volatile int64_t t47 = -6317761282LL;
uint8_t x198 = 2U;
static volatile uint64_t t49 = 2048168683694349LLU;
int8_t x207 = -6;
volatile int64_t x210 = INT64_MIN;
volatile int16_t x211 = INT16_MIN;
static uint64_t t53 = 21867938LLU;
uint32_t x221 = 99U;
uint16_t x224 = 108U;
int64_t x226 = 106LL;
volatile uint64_t t56 = 7LLU;
int16_t x234 = INT16_MIN;
int8_t x237 = -1;
int8_t x240 = INT8_MIN;
static volatile int32_t t58 = 3545;
int16_t x242 = INT16_MAX;
int16_t x243 = INT16_MAX;
uint32_t t60 = 69U;
volatile uint16_t x256 = 91U;
int16_t x258 = INT16_MIN;
uint32_t x269 = 49U;
uint16_t x272 = 715U;
static uint8_t x276 = UINT8_MAX;
int16_t x279 = 4;
uint32_t x280 = UINT32_MAX;
static uint8_t x283 = 18U;
uint16_t x284 = 3U;
uint8_t x287 = 32U;
int16_t x290 = INT16_MIN;
static int8_t x291 = -11;
uint8_t x293 = 3U;
int16_t x294 = INT16_MAX;
uint32_t x296 = UINT32_MAX;
volatile uint32_t t71 = 33U;
int64_t x300 = -1LL;
static volatile int8_t x302 = -1;
uint8_t x304 = 28U;
uint64_t t73 = 101687233LLU;
int16_t x308 = -62;
int64_t x317 = -1330628222864631LL;
uint32_t x318 = 737U;
volatile int64_t t77 = 159LL;
volatile uint64_t t78 = 11809210150755LLU;
static int16_t x325 = 0;
int64_t x328 = -1LL;
static uint64_t x329 = 394497584655819LLU;
int64_t t82 = 999LL;
uint64_t x342 = 4106179297897573561LLU;
int8_t x346 = -6;
uint8_t x347 = 3U;
volatile int32_t t84 = -3;
uint64_t t85 = 8868259446LLU;
uint32_t x361 = UINT32_MAX;
static int8_t x362 = INT8_MAX;
int8_t x372 = -1;
volatile uint32_t t89 = 48U;
uint16_t x373 = UINT16_MAX;
static volatile int8_t x382 = 0;
int8_t x385 = -1;
uint64_t x386 = UINT64_MAX;
int8_t x393 = 1;
int32_t x406 = -247048;
int16_t x409 = INT16_MIN;


void f0(void) {
	int16_t x2 = -1;
	uint8_t x3 = 2U;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = 3326;

	t0 = ((x1|(x2&x3))%x4);

	if (t0 != -126) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -9;
	int64_t x6 = INT64_MIN;
	static volatile int64_t t1 = -12292380244LL;

	t1 = ((x5|(x6&x7))%x8);

	if (t1 != -9LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint32_t x10 = 1435U;
	static uint32_t x11 = UINT32_MAX;
	uint8_t x12 = UINT8_MAX;
	uint32_t t2 = 376U;

	t2 = ((x9|(x10&x11))%x12);

	if (t2 != 127U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -1;
	uint16_t x15 = UINT16_MAX;
	int64_t t3 = 475249324195843LL;

	t3 = ((x13|(x14&x15))%x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 2U;
	int16_t x18 = 2;
	static uint64_t x20 = UINT64_MAX;

	t4 = ((x17|(x18&x19))%x20);

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x24 = UINT32_MAX;
	static int64_t t5 = -3246130408LL;

	t5 = ((x21|(x22&x23))%x24);

	if (t5 != 2147483647LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -6206553902LL;
	uint8_t x26 = 0U;
	uint64_t x28 = UINT64_MAX;

	t6 = ((x25|(x26&x27))%x28);

	if (t6 != 18446744067502997714LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int64_t x30 = 38916723587919LL;
	uint16_t x31 = UINT16_MAX;
	static int8_t x32 = INT8_MAX;
	int64_t t7 = 1061089212LL;

	t7 = ((x29|(x30&x31))%x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 18;
	int64_t x35 = INT64_MIN;
	volatile uint8_t x36 = UINT8_MAX;
	static int64_t t8 = 2094LL;

	t8 = ((x33|(x34&x35))%x36);

	if (t8 != 23LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	static int16_t x39 = INT16_MAX;
	int16_t x40 = -1;
	static uint64_t t9 = 2853907LLU;

	t9 = ((x37|(x38&x39))%x40);

	if (t9 != 32767LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -112766LL;
	static int32_t x42 = INT32_MIN;
	uint8_t x43 = 4U;
	static volatile uint16_t x44 = UINT16_MAX;
	volatile int64_t t10 = -1865038LL;

	t10 = ((x41|(x42&x43))%x44);

	if (t10 != -47231LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 5;
	int32_t x46 = 29;
	int32_t x47 = 197;
	int16_t x48 = -1;
	int32_t t11 = 214120766;

	t11 = ((x45|(x46&x47))%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x51 = 134U;
	volatile uint64_t t12 = 3876696LLU;

	t12 = ((x49|(x50&x51))%x52);

	if (t12 != 43237686736094LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 21001U;
	int8_t x55 = -12;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -7067;

	t13 = ((x53|(x54&x55))%x56);

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int32_t x58 = 8;
	volatile uint16_t x59 = 296U;
	uint64_t x60 = 462LLU;
	uint64_t t14 = 1362179LLU;

	t14 = ((x57|(x58&x59))%x60);

	if (t14 != 58LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -437246355830219LL;
	int16_t x62 = -1;
	static volatile int32_t x63 = -1;
	volatile int64_t x64 = -1LL;
	static int64_t t15 = 12545817LL;

	t15 = ((x61|(x62&x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 5U;
	volatile int32_t x67 = INT32_MAX;
	int64_t x68 = INT64_MAX;
	int64_t t16 = 158733LL;

	t16 = ((x65|(x66&x67))%x68);

	if (t16 != -32763LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = 1;
	volatile uint32_t t17 = 72439020U;

	t17 = ((x69|(x70&x71))%x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 824U;
	uint16_t x74 = 70U;
	int32_t x76 = -1;
	uint32_t t18 = 6U;

	t18 = ((x73|(x74&x75))%x76);

	if (t18 != 888U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile int8_t x78 = -31;
	uint64_t x79 = 935539239LLU;
	int16_t x80 = INT16_MIN;
	volatile uint64_t t19 = 8425625461044LLU;

	t19 = ((x77|(x78&x79))%x80);

	if (t19 != 32673LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int64_t x82 = INT64_MIN;
	static uint8_t x83 = 3U;
	uint32_t x84 = 4797631U;
	static int64_t t20 = 11130115995LL;

	t20 = ((x81|(x82&x83))%x84);

	if (t20 != 2942590LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x87 = 5569678676LLU;
	volatile uint16_t x88 = 1695U;
	volatile uint64_t t21 = 841618947884LLU;

	t21 = ((x85|(x86&x87))%x88);

	if (t21 != 1247LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	static int64_t x90 = INT64_MAX;
	int16_t x92 = 352;
	volatile uint64_t t22 = 10019462985149LLU;

	t22 = ((x89|(x90&x91))%x92);

	if (t22 != 95LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	int8_t x96 = 1;
	static volatile int32_t t23 = -3175013;

	t23 = ((x93|(x94&x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = 0;
	int32_t x100 = INT32_MIN;
	int32_t t24 = 398;

	t24 = ((x97|(x98&x99))%x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 2202;
	int64_t x103 = -1LL;
	static volatile int32_t x104 = -1;
	int64_t t25 = -809233637LL;

	t25 = ((x101|(x102&x103))%x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	volatile uint16_t x106 = UINT16_MAX;
	static int32_t x107 = -267249;
	int16_t x108 = INT16_MAX;
	int32_t t26 = 76582402;

	t26 = ((x105|(x106&x107))%x108);

	if (t26 != 27904) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = INT16_MAX;
	static int8_t x111 = INT8_MIN;
	volatile int32_t t27 = -484288488;

	t27 = ((x109|(x110&x111))%x112);

	if (t27 != 32743) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -1;
	int16_t x114 = INT16_MIN;
	volatile int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 9040559;

	t28 = ((x113|(x114&x115))%x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x118 = INT32_MIN;
	static uint16_t x119 = 21684U;
	uint32_t t29 = 229U;

	t29 = ((x117|(x118&x119))%x120);

	if (t29 != 6014316U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static uint64_t x128 = UINT64_MAX;
	static volatile uint64_t t30 = 1420040930LLU;

	t30 = ((x125|(x126&x127))%x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	uint8_t x132 = 72U;
	int32_t t31 = -179;

	t31 = ((x129|(x130&x131))%x132);

	if (t31 != -56) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x133 = -496164575703850LL;
	int16_t x134 = INT16_MIN;
	static int8_t x135 = -1;
	int8_t x136 = -1;

	t32 = ((x133|(x134&x135))%x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -5;
	int16_t x138 = INT16_MAX;
	volatile uint16_t x139 = 2455U;
	static int8_t x140 = INT8_MIN;

	t33 = ((x137|(x138&x139))%x140);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = -8256020030129324LL;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = UINT32_MAX;
	int64_t t34 = 11398037880839LL;

	t34 = ((x141|(x142&x143))%x144);

	if (t34 != -10LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x145 = 0U;
	int64_t x146 = INT64_MIN;
	volatile int16_t x147 = 5699;
	int64_t x148 = INT64_MIN;
	int64_t t35 = -49151483LL;

	t35 = ((x145|(x146&x147))%x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -1;
	int32_t x150 = -1;
	int32_t x151 = -4;
	static uint64_t x152 = 8715LLU;

	t36 = ((x149|(x150&x151))%x152);

	if (t36 != 1695LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	static volatile int32_t x156 = INT32_MIN;

	t37 = ((x153|(x154&x155))%x156);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 192897924LLU;
	static volatile int64_t x158 = INT64_MIN;
	int8_t x159 = 1;
	uint64_t t38 = 2149391833482LLU;

	t38 = ((x157|(x158&x159))%x160);

	if (t38 != 192897924LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = 1764U;
	int8_t x163 = INT8_MIN;
	static volatile int32_t x164 = INT32_MAX;

	t39 = ((x161|(x162&x163))%x164);

	if (t39 != 1665U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = 8007;
	uint16_t x167 = 13892U;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t40 = 7875LLU;

	t40 = ((x165|(x166&x167))%x168);

	if (t40 != 9223372036854781508LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = 10;
	static int8_t x170 = -1;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t41 = 526743224932159798LLU;

	t41 = ((x169|(x170&x171))%x172);

	if (t41 != 10LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = 1U;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t42 = 167408995U;

	t42 = ((x173|(x174&x175))%x176);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -17636385388235LL;
	static volatile uint8_t x178 = 61U;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -1;
	volatile int64_t t43 = -638408729048440292LL;

	t43 = ((x177|(x178&x179))%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = 25382;
	static int16_t x182 = INT16_MIN;
	uint64_t x183 = 77851065214868969LLU;
	int16_t x184 = -1;
	volatile uint64_t t44 = 72209LLU;

	t44 = ((x181|(x182&x183))%x184);

	if (t44 != 77851065214886694LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = 85U;
	volatile int64_t t45 = 15176006LL;

	t45 = ((x185|(x186&x187))%x188);

	if (t45 != 25LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x189 = UINT64_MAX;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = 39;
	static int8_t x192 = INT8_MIN;
	volatile uint64_t t46 = 8817189961LLU;

	t46 = ((x189|(x190&x191))%x192);

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 652U;
	static int16_t x194 = 6;
	int16_t x195 = -1;
	int64_t x196 = INT64_MIN;

	t47 = ((x193|(x194&x195))%x196);

	if (t47 != 654LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = -1;
	static uint32_t x199 = 57614U;
	static int64_t x200 = 6326252767LL;
	volatile int64_t t48 = 587641963520795LL;

	t48 = ((x197|(x198&x199))%x200);

	if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x201 = 2U;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MIN;
	int32_t x204 = -1;

	t49 = ((x201|(x202&x203))%x204);

	if (t49 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -564950832849799445LL;
	int8_t x206 = -35;
	int32_t x208 = -1;
	volatile int64_t t50 = -4281829339435301LL;

	t50 = ((x205|(x206&x207))%x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 13U;
	uint8_t x212 = 61U;
	volatile int64_t t51 = 0LL;

	t51 = ((x209|(x210&x211))%x212);

	if (t51 != -56LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = -1511586;
	int8_t x215 = INT8_MIN;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t52 = -30;

	t52 = ((x213|(x214&x215))%x216);

	if (t52 != -4352) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	volatile uint8_t x218 = 6U;
	static volatile uint64_t x219 = 1010376LLU;
	static int8_t x220 = -1;

	t53 = ((x217|(x218&x219))%x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = 63U;
	int16_t x223 = INT16_MAX;
	volatile uint32_t t54 = 16643818U;

	t54 = ((x221|(x222&x223))%x224);

	if (t54 != 19U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	volatile int64_t x227 = INT64_MIN;
	volatile int64_t x228 = -59958460LL;
	volatile int64_t t55 = -21LL;

	t55 = ((x225|(x226&x227))%x228);

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MAX;
	volatile uint64_t x230 = 3588549387194LLU;
	int32_t x231 = INT32_MAX;
	uint32_t x232 = 4993U;

	t56 = ((x229|(x230&x231))%x232);

	if (t56 != 2552LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	volatile uint8_t x235 = 3U;
	static int8_t x236 = 11;
	volatile int64_t t57 = 1LL;

	t57 = ((x233|(x234&x235))%x236);

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 1U;

	t58 = ((x237|(x238&x239))%x240);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t59 = 118279400;

	t59 = ((x241|(x242&x243))%x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MAX;
	volatile uint16_t x250 = 31U;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;

	t60 = ((x249|(x250&x251))%x252);

	if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x253 = 101U;
	uint64_t x254 = 53LLU;
	static volatile uint16_t x255 = UINT16_MAX;
	volatile uint64_t t61 = 6998854862808LLU;

	t61 = ((x253|(x254&x255))%x256);

	if (t61 != 26LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int64_t x259 = -1LL;
	int64_t x260 = INT64_MIN;
	int64_t t62 = 4122569899208LL;

	t62 = ((x257|(x258&x259))%x260);

	if (t62 != -32513LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = -4349341986261260476LL;
	uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = INT32_MIN;
	static int16_t x264 = -1;
	int64_t t63 = -1168929237LL;

	t63 = ((x261|(x262&x263))%x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -1;
	static int16_t x266 = INT16_MAX;
	int64_t x267 = INT64_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	uint64_t t64 = 194647444060470363LLU;

	t64 = ((x265|(x266&x267))%x268);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MIN;
	uint32_t t65 = 513U;

	t65 = ((x269|(x270&x271))%x272);

	if (t65 != 392U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = INT8_MIN;
	static uint16_t x274 = 3989U;
	int16_t x275 = INT16_MIN;
	int32_t t66 = 25077;

	t66 = ((x273|(x274&x275))%x276);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	uint32_t t67 = 2041578U;

	t67 = ((x277|(x278&x279))%x280);

	if (t67 != 2147483652U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = -1;
	static volatile uint64_t t68 = 15614808680LLU;

	t68 = ((x281|(x282&x283))%x284);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = -1;
	static volatile uint64_t x286 = 1659903281817LLU;
	int8_t x288 = INT8_MAX;
	uint64_t t69 = 860678667120289LLU;

	t69 = ((x285|(x286&x287))%x288);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x289 = INT8_MIN;
	volatile int64_t x292 = INT64_MAX;
	static int64_t t70 = -46956206456848956LL;

	t70 = ((x289|(x290&x291))%x292);

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x295 = -1;

	t71 = ((x293|(x294&x295))%x296);

	if (t71 != 32767U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = INT8_MIN;
	uint32_t x298 = 72833244U;
	int8_t x299 = INT8_MIN;
	volatile int64_t t72 = 984854408341LL;

	t72 = ((x297|(x298&x299))%x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x303 = UINT64_MAX;

	t73 = ((x301|(x302&x303))%x304);

	if (t73 != 15LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x305 = INT32_MAX;
	static uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	volatile int32_t t74 = -7126;

	t74 = ((x305|(x306&x307))%x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x310 = 7997;
	static volatile int32_t x311 = INT32_MAX;
	volatile int32_t x312 = 69021;
	volatile int32_t t75 = -1;

	t75 = ((x309|(x310&x311))%x312);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 42981757626869LL;
	uint32_t x314 = 54476U;
	uint16_t x315 = 292U;
	uint8_t x316 = UINT8_MAX;
	volatile int64_t t76 = 17260LL;

	t76 = ((x313|(x314&x315))%x316);

	if (t76 != 59LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x319 = INT32_MIN;
	volatile uint8_t x320 = 1U;

	t77 = ((x317|(x318&x319))%x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	int64_t x322 = 355528534753107LL;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;

	t78 = ((x321|(x322&x323))%x324);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x326 = 7U;
	volatile int16_t x327 = INT16_MIN;
	volatile int64_t t79 = -19074LL;

	t79 = ((x325|(x326&x327))%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x330 = -1;
	uint64_t x331 = 2061509LLU;
	volatile uint64_t x332 = UINT64_MAX;
	static uint64_t t80 = 2445259LLU;

	t80 = ((x329|(x330&x331))%x332);

	if (t80 != 394497586363855LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = -1;
	int16_t x335 = INT16_MAX;
	static int32_t x336 = -484857;
	volatile int64_t t81 = 79138741LL;

	t81 = ((x333|(x334&x335))%x336);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -1LL;
	static volatile uint32_t x338 = 7229U;
	volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = -437237303LL;

	t82 = ((x337|(x338&x339))%x340);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	int16_t x343 = -1;
	int64_t x344 = 88585LL;
	volatile uint64_t t83 = 38LLU;

	t83 = ((x341|(x342&x343))%x344);

	if (t83 != 8555LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x345 = -1;
	static uint8_t x348 = UINT8_MAX;

	t84 = ((x345|(x346&x347))%x348);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = 390;
	uint64_t x350 = 92288452828LLU;
	static int64_t x351 = -1LL;
	int8_t x352 = -18;

	t85 = ((x349|(x350&x351))%x352);

	if (t85 != 92288453086LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MAX;
	static volatile int8_t x354 = -44;
	volatile int16_t x355 = INT16_MIN;
	uint64_t x356 = 1004LLU;
	uint64_t t86 = 5265397132LLU;

	t86 = ((x353|(x354&x355))%x356);

	if (t86 != 319LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x363 = 17673873;
	static uint64_t x364 = UINT64_MAX;
	static uint64_t t87 = 4995058LLU;

	t87 = ((x361|(x362&x363))%x364);

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x365 = 6U;
	int64_t x366 = 8024LL;
	static uint8_t x367 = UINT8_MAX;
	uint16_t x368 = UINT16_MAX;
	int64_t t88 = 11942309237902713LL;

	t88 = ((x365|(x366&x367))%x368);

	if (t88 != 94LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = -1;

	t89 = ((x369|(x370&x371))%x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x374 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	int32_t x376 = -1;
	int64_t t90 = 109715054432753267LL;

	t90 = ((x373|(x374&x375))%x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x377 = INT16_MAX;
	static volatile uint64_t x378 = 4LLU;
	static uint8_t x379 = 96U;
	static int8_t x380 = -9;
	volatile uint64_t t91 = 1466554218724926LLU;

	t91 = ((x377|(x378&x379))%x380);

	if (t91 != 32767LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1;
	uint8_t x383 = 108U;
	volatile int16_t x384 = INT16_MAX;
	volatile int32_t t92 = -94410;

	t92 = ((x381|(x382&x383))%x384);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x387 = 1U;
	static volatile int8_t x388 = INT8_MIN;
	uint64_t t93 = 71280368771812LLU;

	t93 = ((x385|(x386&x387))%x388);

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x390 = 14U;
	static volatile int32_t x391 = INT32_MIN;
	int32_t x392 = -1;
	int32_t t94 = -43315606;

	t94 = ((x389|(x390&x391))%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x394 = 1U;
	int32_t x395 = INT32_MIN;
	int8_t x396 = -2;
	int32_t t95 = 6102;

	t95 = ((x393|(x394&x395))%x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x397 = 0U;
	int16_t x398 = INT16_MAX;
	static uint16_t x399 = 7299U;
	uint16_t x400 = UINT16_MAX;
	uint32_t t96 = 0U;

	t96 = ((x397|(x398&x399))%x400);

	if (t96 != 7299U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x401 = UINT16_MAX;
	static volatile uint8_t x402 = 7U;
	static int16_t x403 = INT16_MAX;
	int32_t x404 = -1;
	volatile int32_t t97 = 27247002;

	t97 = ((x401|(x402&x403))%x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t98 = 24225845;

	t98 = ((x405|(x406&x407))%x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x410 = 102U;
	int32_t x411 = INT32_MAX;
	volatile uint16_t x412 = 103U;
	int32_t t99 = -26524;

	t99 = ((x409|(x410&x411))%x412);

	if (t99 != -15) { NG(); } else { ; }
	
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

