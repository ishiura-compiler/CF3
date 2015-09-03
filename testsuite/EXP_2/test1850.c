#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -18;
int64_t x6 = 25305452810647820LL;
uint64_t x13 = 261712758267148LLU;
int64_t x15 = INT64_MIN;
volatile uint64_t t3 = 45060230434LLU;
uint64_t x17 = 221104745263774017LLU;
int16_t x22 = -1;
int16_t x25 = 76;
uint32_t x27 = 0U;
volatile int64_t t9 = 5538141784424861LL;
uint8_t x41 = 1U;
static uint8_t x52 = UINT8_MAX;
uint16_t x55 = UINT16_MAX;
static uint32_t x60 = UINT32_MAX;
int16_t x63 = INT16_MAX;
volatile int64_t t15 = -93807226121975944LL;
int64_t x81 = -1LL;
volatile uint16_t x84 = 14652U;
int8_t x85 = INT8_MIN;
volatile uint32_t x87 = UINT32_MAX;
uint64_t x88 = 8653126030059304537LLU;
uint64_t t21 = 39581920950157052LLU;
volatile int32_t t23 = 1;
uint64_t x110 = 82LLU;
static volatile uint64_t t27 = 870LLU;
int16_t x113 = INT16_MIN;
int32_t x114 = -5;
uint8_t x118 = UINT8_MAX;
int32_t x119 = 8723;
uint16_t x124 = UINT16_MAX;
static int64_t x127 = INT64_MAX;
int64_t x128 = INT64_MIN;
static int64_t t31 = 12910666LL;
uint16_t x141 = 1U;
static uint8_t x143 = 107U;
int32_t t34 = -171664325;
uint8_t x146 = 0U;
uint8_t x151 = 8U;
volatile int32_t t37 = -8936;
int32_t x161 = INT32_MIN;
volatile uint64_t t38 = 1036522191523LLU;
static uint64_t x166 = UINT64_MAX;
static uint64_t t39 = 1793556888584LLU;
static uint64_t t40 = 769728LLU;
int16_t x176 = 46;
int32_t x178 = INT32_MIN;
int8_t x183 = INT8_MIN;
static volatile uint64_t t44 = 31820168651126LLU;
volatile int8_t x189 = 0;
volatile int64_t t46 = 904094211918032LL;
int8_t x203 = -1;
static int16_t x210 = -1;
uint64_t t50 = 212114580LLU;
uint8_t x217 = 0U;
uint16_t x227 = UINT16_MAX;
uint64_t x230 = UINT64_MAX;
volatile uint64_t t57 = 39316128283LLU;
uint8_t x243 = 123U;
uint32_t x245 = 5410U;
uint8_t x247 = UINT8_MAX;
int8_t x248 = 19;
int64_t x249 = INT64_MAX;
int64_t t60 = 368LL;
int8_t x257 = INT8_MIN;
int16_t x260 = INT16_MIN;
int32_t x268 = INT32_MIN;
uint16_t x269 = 1857U;
static volatile int32_t t64 = -2045;
uint8_t x273 = UINT8_MAX;
int64_t x284 = INT64_MIN;
static int64_t x285 = 365243015LL;
int16_t x288 = INT16_MIN;
int16_t x299 = -2;
int64_t x305 = INT64_MAX;
static int64_t x311 = INT64_MAX;
static uint16_t x317 = 13668U;
int16_t x318 = INT16_MIN;
int64_t x319 = 14064LL;
static volatile int32_t x320 = -1733992;
volatile int8_t x321 = INT8_MIN;
int32_t x324 = -1;
volatile int64_t t78 = -254691LL;
uint16_t x334 = UINT16_MAX;
int64_t x347 = INT64_MIN;
static volatile int32_t t83 = -3370;
int8_t x357 = -1;
volatile uint32_t t84 = 4U;
volatile int32_t x363 = INT32_MIN;
volatile uint64_t t86 = 1949039118142LLU;
int32_t x375 = -255;
int16_t x376 = INT16_MIN;
int64_t x378 = 138370728746419LL;
uint16_t x380 = 3U;
uint16_t x383 = 1201U;
int64_t x388 = -1LL;
static volatile int16_t x391 = 0;
static uint64_t t95 = 14279LLU;
uint32_t x407 = UINT32_MAX;
volatile uint64_t t96 = 7974247965690742LLU;
volatile int64_t x410 = INT64_MIN;
int64_t t97 = 7566108LL;
uint8_t x413 = 5U;
int8_t x415 = -1;
int16_t x416 = -1;
int64_t t98 = -6468398246LL;
uint16_t x419 = UINT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x3 = 375293689884LL;
	int16_t x4 = 9792;
	static int64_t t0 = -82054LL;

	t0 = ((x1^(x2&x3))/x4);

	if (t0 != 941929295502561LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint16_t x7 = 3632U;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = 513495LL;

	t1 = ((x5^(x6&x7))/x8);

	if (t1 != 2049LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 345889862U;
	int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	static uint32_t t2 = 3U;

	t2 = ((x9^(x10&x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 3U;
	int16_t x16 = INT16_MIN;

	t3 = ((x13^(x14&x15))/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 8;
	uint64_t x19 = 39391080LLU;
	static int32_t x20 = INT32_MIN;
	uint64_t t4 = 4012LLU;

	t4 = ((x17^(x18&x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 104065220070LLU;
	uint32_t x23 = 3754U;
	static uint8_t x24 = 1U;
	static uint64_t t5 = 2045008895904290100LLU;

	t5 = ((x21^(x22&x23))/x24);

	if (t5 != 104065217356LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 21U;
	int16_t x28 = 2027;
	volatile uint32_t t6 = 4U;

	t6 = ((x25^(x26&x27))/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 1962574LL;
	int64_t x30 = INT64_MIN;
	volatile int32_t x31 = -1;
	int64_t x32 = -17LL;
	int64_t t7 = 58750714LL;

	t7 = ((x29^(x30&x31))/x32);

	if (t7 != 542551296285459602LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	static int8_t x34 = INT8_MIN;
	volatile uint8_t x35 = 0U;
	int32_t x36 = INT32_MAX;
	volatile int64_t t8 = 116606907LL;

	t8 = ((x33^(x34&x35))/x36);

	if (t8 != 4294967298LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MAX;

	t9 = ((x37^(x38&x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = -12873776;

	t10 = ((x41^(x42&x43))/x44);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -2;
	int16_t x46 = INT16_MIN;
	static int32_t x47 = -1;
	int64_t x48 = INT64_MIN;
	static volatile int64_t t11 = 773409LL;

	t11 = ((x45^(x46&x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MIN;
	static volatile int8_t x51 = -1;
	uint64_t t12 = 23170514963317095LLU;

	t12 = ((x49^(x50&x51))/x52);

	if (t12 != 128LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -40558779;
	volatile int8_t x54 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -1LL;

	t13 = ((x53^(x54&x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MIN;
	uint32_t x59 = 15683516U;
	uint32_t t14 = 12U;

	t14 = ((x57^(x58&x59))/x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 932U;
	int16_t x62 = INT16_MAX;
	int64_t x64 = INT64_MAX;

	t15 = ((x61^(x62&x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 79303223U;
	static int32_t x66 = 1156437;
	int64_t x67 = INT64_MIN;
	uint32_t x68 = 181U;
	int64_t t16 = 1870204713LL;

	t16 = ((x65^(x66&x67))/x68);

	if (t16 != 438139LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = 1122659174913463558LL;
	volatile uint64_t t17 = 430437071583485068LLU;

	t17 = ((x69^(x70&x71))/x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int64_t x74 = -1491992130970312229LL;
	int32_t x75 = INT32_MIN;
	volatile int32_t x76 = INT32_MIN;
	volatile int64_t t18 = -27233355LL;

	t18 = ((x73^(x74&x75))/x76);

	if (t18 != -694762976LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	volatile uint16_t x78 = 554U;
	int8_t x79 = -1;
	volatile int32_t x80 = -241;
	int64_t t19 = -315825138777239459LL;

	t19 = ((x77^(x78&x79))/x80);

	if (t19 != -38271253264957573LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	static int16_t x83 = -12482;
	static volatile int64_t t20 = 58824789196183976LL;

	t20 = ((x81^(x82&x83))/x84);

	if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 1038U;

	t21 = ((x85^(x86&x87))/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t22 = 83U;

	t22 = ((x89^(x90&x91))/x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 3U;
	volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	static int32_t x96 = -1;

	t23 = ((x93^(x94&x95))/x96);

	if (t23 != 2147483645) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 207U;
	volatile uint8_t x98 = UINT8_MAX;
	static uint16_t x99 = 39U;
	static int8_t x100 = -1;
	int32_t t24 = -60355377;

	t24 = ((x97^(x98&x99))/x100);

	if (t24 != -232) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 80473U;
	uint8_t x102 = UINT8_MAX;
	uint64_t x103 = 7341799896441LLU;
	volatile uint8_t x104 = UINT8_MAX;
	volatile uint64_t t25 = 90LLU;

	t25 = ((x101^(x102&x103))/x104);

	if (t25 != 315LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = -1;
	uint64_t x107 = 59495900484LLU;
	int32_t x108 = INT32_MIN;
	uint64_t t26 = 7LLU;

	t26 = ((x105^(x106&x107))/x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1792;
	int64_t x111 = INT64_MIN;
	uint16_t x112 = 335U;

	t27 = ((x109^(x110&x111))/x112);

	if (t27 != 55064907682715074LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = -1;
	static uint32_t t28 = 1243109055U;

	t28 = ((x113^(x114&x115))/x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = 0;
	int8_t x120 = 2;
	static volatile int32_t t29 = 159;

	t29 = ((x117^(x118&x119))/x120);

	if (t29 != 9) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	int8_t x122 = -1;
	static volatile int16_t x123 = INT16_MAX;
	volatile int32_t t30 = -1010819;

	t30 = ((x121^(x122&x123))/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 16878207706313LL;
	static int64_t x126 = -1LL;

	t31 = ((x125^(x126&x127))/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x133 = 5LLU;
	int64_t x134 = 376LL;
	int32_t x135 = INT32_MAX;
	volatile int32_t x136 = 3517;
	volatile uint64_t t32 = 1086185871604068148LLU;

	t32 = ((x133^(x134&x135))/x136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x137 = 14U;
	uint64_t x138 = 377LLU;
	volatile int8_t x139 = 2;
	uint16_t x140 = 2U;
	volatile uint64_t t33 = 0LLU;

	t33 = ((x137^(x138&x139))/x140);

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x142 = 44U;
	volatile uint16_t x144 = 150U;

	t34 = ((x141^(x142&x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x147 = 107569224U;
	uint32_t x148 = UINT32_MAX;
	uint32_t t35 = 344339545U;

	t35 = ((x145^(x146&x147))/x148);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MIN;
	static uint64_t x152 = 7LLU;
	uint64_t t36 = 2LLU;

	t36 = ((x149^(x150&x151))/x152);

	if (t36 != 2635249153387074121LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 3U;
	uint8_t x158 = 1U;
	uint16_t x159 = 6U;
	int16_t x160 = INT16_MIN;

	t37 = ((x157^(x158&x159))/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = 4173735902885LLU;
	volatile uint8_t x163 = 34U;
	uint64_t x164 = 50409LLU;

	t38 = ((x161^(x162&x163))/x164);

	if (t38 != 365941480123828LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x167 = INT32_MAX;
	int32_t x168 = INT32_MIN;

	t39 = ((x165^(x166&x167))/x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	volatile int16_t x170 = INT16_MIN;
	uint64_t x171 = 30984642734080LLU;
	static uint32_t x172 = 265562092U;

	t40 = ((x169^(x170&x171))/x172);

	if (t40 != 69462900183LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = 19;
	volatile uint8_t x174 = 2U;
	static int64_t x175 = 21069992LL;
	int64_t t41 = 82LL;

	t41 = ((x173^(x174&x175))/x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 1;
	volatile uint8_t x179 = UINT8_MAX;
	int16_t x180 = -2017;
	static int32_t t42 = 425;

	t42 = ((x177^(x178&x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x181 = 44U;
	static uint8_t x182 = UINT8_MAX;
	static int64_t x184 = INT64_MAX;
	volatile int64_t t43 = -22478795LL;

	t43 = ((x181^(x182&x183))/x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	static volatile int32_t x186 = -123;
	static int8_t x187 = -8;
	int8_t x188 = INT8_MIN;

	t44 = ((x185^(x186&x187))/x188);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	volatile uint32_t x192 = 226398U;
	int64_t t45 = 1598328657527491LL;

	t45 = ((x189^(x190&x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -2;
	int8_t x194 = -24;
	static int64_t x195 = INT64_MAX;
	static uint32_t x196 = 323699U;

	t46 = ((x193^(x194&x195))/x196);

	if (t46 != -28493668614530LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 4U;
	uint32_t x198 = 9953U;
	int8_t x199 = -2;
	static int64_t x200 = -1LL;
	volatile int64_t t47 = -1LL;

	t47 = ((x197^(x198&x199))/x200);

	if (t47 != -9956LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int16_t x202 = INT16_MAX;
	uint64_t x204 = 114183LLU;
	uint64_t t48 = 4162480953LLU;

	t48 = ((x201^(x202&x203))/x204);

	if (t48 != 161554207488938LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 109U;
	int16_t x206 = -77;
	static uint32_t x207 = 873U;
	int8_t x208 = 18;
	volatile uint32_t t49 = 69U;

	t49 = ((x205^(x206&x207))/x208);

	if (t49 != 46U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = 0;
	int64_t x211 = -478841738LL;
	uint64_t x212 = 3LLU;

	t50 = ((x209^(x210&x211))/x212);

	if (t50 != 6148914691076903292LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x213 = 4U;
	int64_t x214 = 2189003445396487326LL;
	int32_t x215 = INT32_MIN;
	int64_t x216 = -384978391466LL;
	volatile int64_t t51 = -18423819536302LL;

	t51 = ((x213^(x214&x215))/x216);

	if (t51 != -5686042LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x218 = 1LL;
	int64_t x219 = -1LL;
	volatile uint64_t x220 = 1047277219303LLU;
	uint64_t t52 = 51699LLU;

	t52 = ((x217^(x218&x219))/x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = UINT32_MAX;
	volatile uint32_t x222 = 187U;
	int16_t x223 = INT16_MAX;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t53 = 1476U;

	t53 = ((x221^(x222&x223))/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MAX;
	static int64_t x226 = INT64_MAX;
	volatile int16_t x228 = 13;
	volatile int64_t t54 = 1325209730176867588LL;

	t54 = ((x225^(x226&x227))/x228);

	if (t54 != 709490156681131559LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	static uint64_t x231 = 95LLU;
	uint16_t x232 = 124U;
	uint64_t t55 = 453952926834482LLU;

	t55 = ((x229^(x230&x231))/x232);

	if (t55 != 148764065093242484LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = 43;
	static uint64_t x234 = 8915173LLU;
	static volatile int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	uint64_t t56 = 1387840LLU;

	t56 = ((x233^(x234&x235))/x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	uint16_t x238 = UINT16_MAX;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = 1;

	t57 = ((x237^(x238&x239))/x240);

	if (t57 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x244 = -1;
	uint64_t t58 = 6017123301LLU;

	t58 = ((x241^(x242&x243))/x244);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x246 = 29U;
	uint32_t t59 = 31057U;

	t59 = ((x245^(x246&x247))/x248);

	if (t59 != 286U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x250 = INT32_MIN;
	int16_t x251 = -1;
	uint8_t x252 = UINT8_MAX;

	t60 = ((x249^(x250&x251))/x252);

	if (t60 != -36170086410616832LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = -2803437341LL;
	static int8_t x255 = INT8_MIN;
	int64_t x256 = -84LL;
	int64_t t61 = -7LL;

	t61 = ((x253^(x254&x255))/x256);

	if (t61 != -33374253LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x258 = -1;
	static volatile int64_t x259 = INT64_MIN;
	volatile int64_t t62 = -45LL;

	t62 = ((x257^(x258&x259))/x260);

	if (t62 != -281474976710655LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MAX;
	volatile int64_t x266 = INT64_MAX;
	uint64_t x267 = 0LLU;
	uint64_t t63 = 453318132021780LLU;

	t63 = ((x265^(x266&x267))/x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x270 = INT8_MAX;
	volatile int8_t x271 = 11;
	int8_t x272 = INT8_MIN;

	t64 = ((x269^(x270&x271))/x272);

	if (t64 != -14) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x274 = 4U;
	static int32_t x275 = 0;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t65 = 111587820937244LLU;

	t65 = ((x273^(x274&x275))/x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x277 = 731487377;
	int8_t x278 = INT8_MAX;
	uint32_t x279 = 74167246U;
	int8_t x280 = -1;
	volatile uint32_t t66 = 1531999798U;

	t66 = ((x277^(x278&x279))/x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 0U;
	int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	static int64_t t67 = -753768LL;

	t67 = ((x281^(x282&x283))/x284);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x286 = 785LLU;
	int32_t x287 = -1;
	volatile uint64_t t68 = 1925523707246426LLU;

	t68 = ((x285^(x286&x287))/x288);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t x292 = -412128;
	static volatile int64_t t69 = 107435729LL;

	t69 = ((x289^(x290&x291))/x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	static uint16_t x300 = 14287U;
	int64_t t70 = 167593LL;

	t70 = ((x297^(x298&x299))/x300);

	if (t70 != -645577940565183LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x301 = 3188U;
	int16_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MAX;
	volatile uint64_t t71 = 1265316LLU;

	t71 = ((x301^(x302&x303))/x304);

	if (t71 != 145249953336295656LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = 47;
	int8_t x307 = INT8_MIN;
	static int32_t x308 = 4;
	int64_t t72 = -2599693525LL;

	t72 = ((x305^(x306&x307))/x308);

	if (t72 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x309 = 812350802U;
	uint32_t x310 = 2406549U;
	static uint16_t x312 = UINT16_MAX;
	int64_t t73 = -99LL;

	t73 = ((x309^(x310&x311))/x312);

	if (t73 != 12367LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = -27;
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MAX;
	volatile uint32_t t74 = 14907U;

	t74 = ((x313^(x314&x315))/x316);

	if (t74 != 131074U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t t75 = -39042681LL;

	t75 = ((x317^(x318&x319))/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x322 = UINT32_MAX;
	int32_t x323 = 0;
	static uint32_t t76 = 268580150U;

	t76 = ((x321^(x322&x323))/x324);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	static uint64_t x326 = 2506176006144LLU;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile uint64_t t77 = 2657651LLU;

	t77 = ((x325^(x326&x327))/x328);

	if (t77 != 2147484232LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 158239U;
	static volatile int8_t x330 = -1;
	int64_t x331 = 93LL;
	int32_t x332 = INT32_MIN;

	t78 = ((x329^(x330&x331))/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	volatile int16_t x335 = INT16_MAX;
	volatile int64_t x336 = -1LL;
	volatile int64_t t79 = 1413743903384LL;

	t79 = ((x333^(x334&x335))/x336);

	if (t79 != 32641LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;
	uint32_t t80 = 274048U;

	t80 = ((x341^(x342&x343))/x344);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x345 = 42U;
	int16_t x346 = INT16_MIN;
	int32_t x348 = 3183157;
	volatile int64_t t81 = -1LL;

	t81 = ((x345^(x346&x347))/x348);

	if (t81 != -2897554860427LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = -1LL;
	static volatile int16_t x351 = -1873;
	uint64_t x352 = UINT64_MAX;
	uint64_t t82 = 3427814633LLU;

	t82 = ((x349^(x350&x351))/x352);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	volatile int16_t x354 = INT16_MIN;
	static volatile int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;

	t83 = ((x353^(x354&x355))/x356);

	if (t83 != -16909062) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x358 = INT8_MIN;
	volatile int8_t x359 = INT8_MIN;
	uint32_t x360 = 23953U;

	t84 = ((x357^(x358&x359))/x360);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x361 = 21U;
	static int64_t x362 = -1LL;
	int8_t x364 = INT8_MAX;
	static int64_t t85 = -731564559565828LL;

	t85 = ((x361^(x362&x363))/x364);

	if (t85 != -16909319LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = 1LL;
	uint64_t x366 = 75711463320238639LLU;
	int64_t x367 = INT64_MIN;
	static int32_t x368 = -23145328;

	t86 = ((x365^(x366&x367))/x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -1LL;
	int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = 5180373829LLU;
	static volatile uint64_t t87 = 893LLU;

	t87 = ((x369^(x370&x371))/x372);

	if (t87 != 1780445261LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x373 = INT16_MAX;
	int8_t x374 = -1;
	volatile int32_t t88 = -116029;

	t88 = ((x373^(x374&x375))/x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MAX;
	static int64_t x379 = 0LL;
	volatile int64_t t89 = -716131231810907801LL;

	t89 = ((x377^(x378&x379))/x380);

	if (t89 != 42LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = -1740;
	static int16_t x382 = INT16_MAX;
	uint32_t x384 = 2U;
	volatile uint32_t t90 = 1U;

	t90 = ((x381^(x382&x383))/x384);

	if (t90 != 2147483330U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MIN;
	static uint64_t x386 = UINT64_MAX;
	int32_t x387 = 3430;
	volatile uint64_t t91 = 16922398947LLU;

	t91 = ((x385^(x386&x387))/x388);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 31312361U;
	int64_t x390 = -1LL;
	uint64_t x392 = 4LLU;
	uint64_t t92 = 434LLU;

	t92 = ((x389^(x390&x391))/x392);

	if (t92 != 7828090LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -1;
	int32_t x394 = -315;
	uint64_t x395 = 27079865189068552LLU;
	static int16_t x396 = 1;
	uint64_t t93 = 60113376LLU;

	t93 = ((x393^(x394&x395))/x396);

	if (t93 != 18419664208520483327LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x397 = 25U;
	int64_t x398 = INT64_MAX;
	int16_t x399 = -3;
	volatile int8_t x400 = -1;
	static volatile int64_t t94 = 19765359834LL;

	t94 = ((x397^(x398&x399))/x400);

	if (t94 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x401 = INT32_MIN;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = 0;
	uint32_t x404 = 1673004439U;

	t95 = ((x401^(x402&x403))/x404);

	if (t95 != 11026117828LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	volatile uint8_t x406 = 2U;
	uint64_t x408 = 4451106683089194956LLU;

	t96 = ((x405^(x406&x407))/x408);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MAX;
	static int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MAX;

	t97 = ((x409^(x410&x411))/x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x414 = 485528LL;

	t98 = ((x413^(x414&x415))/x416);

	if (t98 != -485533LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MAX;
	static uint32_t x418 = 1U;
	static int8_t x420 = INT8_MIN;
	uint32_t t99 = 5968U;

	t99 = ((x417^(x418&x419))/x420);

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

