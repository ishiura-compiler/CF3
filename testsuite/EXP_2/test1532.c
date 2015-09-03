#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
static volatile int32_t x15 = INT32_MIN;
int16_t x18 = INT16_MIN;
int16_t x19 = -1;
uint32_t t4 = 416291110U;
int16_t x21 = -6;
uint8_t x30 = UINT8_MAX;
static int64_t x32 = INT64_MIN;
volatile int16_t x44 = 2;
uint32_t x51 = 6U;
volatile int32_t t11 = -14341599;
int64_t x55 = INT64_MIN;
static int64_t x58 = -1LL;
int64_t x59 = -13716935629958LL;
int32_t x60 = 830757932;
int64_t t13 = -360168LL;
volatile uint64_t t14 = 656868067088792LLU;
volatile uint32_t t15 = 4U;
static int16_t x78 = INT16_MAX;
static int8_t x94 = 28;
volatile int16_t x98 = -1;
static uint32_t t24 = 10737307U;
int32_t x105 = INT32_MIN;
uint32_t x117 = 82311U;
uint16_t x118 = UINT16_MAX;
static int8_t x126 = INT8_MIN;
int16_t x130 = INT16_MAX;
int32_t x132 = 17386;
static int64_t x135 = INT64_MAX;
uint16_t x136 = 56U;
int64_t x146 = 183968794863LL;
uint32_t t38 = 3217U;
volatile uint8_t x171 = UINT8_MAX;
int16_t x180 = -1;
static uint8_t x183 = UINT8_MAX;
int32_t x191 = -5951;
int64_t t46 = -145031941LL;
int64_t t48 = 3719870585215LL;
static uint8_t x221 = UINT8_MAX;
static volatile int16_t x226 = 2;
int16_t x231 = INT16_MIN;
uint64_t x240 = 58LLU;
volatile uint64_t x242 = UINT64_MAX;
volatile int16_t x245 = -1;
int8_t x247 = INT8_MAX;
volatile uint16_t x255 = 27U;
int8_t x256 = -1;
volatile int8_t x258 = INT8_MIN;
volatile uint64_t x262 = 8LLU;
uint64_t x270 = UINT64_MAX;
volatile int32_t t64 = 16;
int16_t x279 = INT16_MIN;
int64_t x282 = -53LL;
uint64_t t67 = 1169LLU;
volatile uint64_t x285 = 2534117895LLU;
static int64_t x290 = INT64_MAX;
int32_t x291 = -394359;
int32_t x297 = -442215335;
int64_t x305 = INT64_MIN;
int32_t x306 = INT32_MIN;
int16_t x310 = INT16_MIN;
int64_t x313 = INT64_MIN;
static uint32_t x315 = 634U;
int8_t x316 = -1;
uint64_t x317 = 52888441933LLU;
volatile uint8_t x319 = UINT8_MAX;
volatile uint64_t t75 = 6LLU;
volatile uint64_t x327 = UINT64_MAX;
int64_t x337 = INT64_MIN;
int16_t x341 = 8702;
int64_t x349 = INT64_MAX;
uint64_t t83 = 423918889708LLU;
int16_t x355 = -1;
int32_t x358 = INT32_MIN;
int64_t x359 = 5978361646769153LL;
int16_t x362 = -122;
volatile int8_t x367 = INT8_MIN;
int64_t t87 = 685178LL;
volatile int16_t x369 = -15;
uint16_t x370 = 9U;
int32_t x371 = -8;
uint64_t t88 = 67LLU;
int8_t x374 = INT8_MIN;
volatile int32_t t89 = 2;
static int64_t x380 = 16390734586LL;
int32_t x381 = INT32_MIN;
int8_t x385 = 4;
int8_t x388 = -1;
volatile int32_t t92 = -273013168;
int8_t x389 = INT8_MAX;
int16_t x393 = -1948;
uint16_t x397 = 201U;
int8_t x398 = 1;
static int64_t x415 = 221390968064LL;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = 943U;
	int64_t x3 = 17291311496LL;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -25748;

	t0 = ((x1+(x2<=x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 6U;
	volatile int64_t t1 = 581LL;

	t1 = ((x5+(x6<=x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15085U;
	int16_t x10 = -952;
	static int8_t x11 = -1;
	volatile int32_t x12 = 0;
	volatile int32_t t2 = -7;

	t2 = ((x9+(x10<=x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = 486;
	volatile int64_t x16 = 4453151900LL;
	static volatile int64_t t3 = -1LL;

	t3 = ((x13+(x14<=x15))&x16);

	if (t3 != 158184604LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x20 = -4740;

	t4 = ((x17+(x18<=x19))&x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	static int16_t x23 = 9;
	int16_t x24 = -534;
	int32_t t5 = 104273896;

	t5 = ((x21+(x22<=x23))&x24);

	if (t5 != -534) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int16_t x28 = -1;
	volatile int32_t t6 = -49167;

	t6 = ((x25+(x26<=x27))&x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x31 = UINT16_MAX;
	int64_t t7 = INT64_MIN;

	t7 = ((x29+(x30<=x31))&x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 5349U;
	int8_t x34 = -7;
	volatile uint8_t x35 = 2U;
	uint16_t x36 = 23U;
	volatile int32_t t8 = -10856086;

	t8 = ((x33+(x34<=x35))&x36);

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	static int8_t x42 = 1;
	int16_t x43 = -1;
	static volatile int32_t t9 = 1;

	t9 = ((x41+(x42<=x43))&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = 119877U;
	int32_t x47 = INT32_MIN;
	int32_t x48 = 737;
	static int64_t t10 = 354620119227246528LL;

	t10 = ((x45+(x46<=x47))&x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	static int16_t x52 = INT16_MAX;

	t11 = ((x49+(x50<=x51))&x52);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = INT32_MAX;
	int16_t x54 = INT16_MAX;
	int32_t x56 = INT32_MIN;
	int32_t t12 = 114;

	t12 = ((x53+(x54<=x55))&x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -10113103352005LL;

	t13 = ((x57+(x58<=x59))&x60);

	if (t13 != 268438568LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = 2U;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = 637090722552LLU;

	t14 = ((x61+(x62<=x63))&x64);

	if (t14 != 248LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint8_t x66 = 8U;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = UINT32_MAX;

	t15 = ((x65+(x66<=x67))&x68);

	if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	static int32_t x72 = -1;
	int32_t t16 = 3;

	t16 = ((x69+(x70<=x71))&x72);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	uint64_t x74 = 7LLU;
	int32_t x75 = INT32_MIN;
	static volatile int8_t x76 = INT8_MIN;
	int32_t t17 = -1289;

	t17 = ((x73+(x74<=x75))&x76);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 1891U;
	volatile uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = -1757886;
	int32_t t18 = 193749904;

	t18 = ((x77+(x78<=x79))&x80);

	if (t18 != 1344) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	volatile int64_t x82 = -3962LL;
	uint16_t x83 = 3260U;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int32_t t19 = 723873;

	t19 = ((x81+(x82<=x83))&x84);

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = INT64_MIN;
	static volatile int8_t x86 = INT8_MAX;
	static int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MAX;
	int64_t t20 = 66680041124734825LL;

	t20 = ((x85+(x86<=x87))&x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x89 = 22224771U;
	uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	uint32_t t21 = 221U;

	t21 = ((x89+(x90<=x91))&x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	int64_t x95 = INT64_MIN;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t22 = 112962;

	t22 = ((x93+(x94<=x95))&x96);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 3;
	uint8_t x99 = 17U;
	int64_t x100 = 401064679891018134LL;
	volatile int64_t t23 = -11186356LL;

	t23 = ((x97+(x98<=x99))&x100);

	if (t23 != 4LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x101 = 0;
	static int64_t x102 = -105LL;
	int64_t x103 = INT64_MAX;
	uint32_t x104 = 450U;

	t24 = ((x101+(x102<=x103))&x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = INT8_MIN;
	uint64_t x107 = 29548400505803LLU;
	uint8_t x108 = 25U;
	volatile int32_t t25 = 13139;

	t25 = ((x105+(x106<=x107))&x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MAX;
	int8_t x114 = 2;
	int16_t x115 = -1;
	volatile uint64_t x116 = 62715879549LLU;
	volatile uint64_t t26 = 3998187312LLU;

	t26 = ((x113+(x114<=x115))&x116);

	if (t26 != 438853757LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x119 = 499770364;
	static volatile int32_t x120 = INT32_MAX;
	static uint32_t t27 = 173U;

	t27 = ((x117+(x118<=x119))&x120);

	if (t27 != 82312U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = 386230408U;
	uint32_t x122 = 455953192U;
	int32_t x123 = INT32_MAX;
	volatile uint32_t x124 = 412U;
	volatile uint32_t t28 = 232U;

	t28 = ((x121+(x122<=x123))&x124);

	if (t28 != 136U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x127 = 1821457332286162LLU;
	uint16_t x128 = 362U;
	int32_t t29 = -2235588;

	t29 = ((x125+(x126<=x127))&x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = 1098;
	int32_t x131 = INT32_MAX;
	static volatile int32_t t30 = -513541;

	t30 = ((x129+(x130<=x131))&x132);

	if (t30 != 74) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = UINT64_MAX;
	static uint16_t x134 = 230U;
	volatile uint64_t t31 = 25431LLU;

	t31 = ((x133+(x134<=x135))&x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = UINT64_MAX;
	volatile int32_t x139 = -11;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t32 = 25743461U;

	t32 = ((x137+(x138<=x139))&x140);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 11U;
	static uint16_t x142 = 59U;
	uint64_t x143 = 3125LLU;
	volatile int16_t x144 = -796;
	volatile int32_t t33 = 1922;

	t33 = ((x141+(x142<=x143))&x144);

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	static volatile int32_t t34 = INT32_MIN;

	t34 = ((x145+(x146<=x147))&x148);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	uint16_t x150 = 0U;
	static volatile int16_t x151 = 21;
	volatile uint16_t x152 = 29U;
	int32_t t35 = 156184;

	t35 = ((x149+(x150<=x151))&x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	static uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	static volatile int8_t x156 = -13;
	int32_t t36 = -1;

	t36 = ((x153+(x154<=x155))&x156);

	if (t36 != -13) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 35209U;
	volatile uint32_t x158 = 1U;
	uint16_t x159 = 28317U;
	static uint32_t x160 = UINT32_MAX;
	uint32_t t37 = 256583509U;

	t37 = ((x157+(x158<=x159))&x160);

	if (t37 != 35210U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 24U;
	int32_t x163 = INT32_MAX;
	int8_t x164 = INT8_MIN;

	t38 = ((x161+(x162<=x163))&x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MAX;
	int16_t x167 = -1;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t39 = -1380LL;

	t39 = ((x165+(x166<=x167))&x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 960208463701862LLU;
	static uint16_t x170 = 1493U;
	static volatile int32_t x172 = -12169103;
	volatile uint64_t t40 = 1573311271076LLU;

	t40 = ((x169+(x170<=x171))&x172);

	if (t40 != 960208461496416LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = UINT16_MAX;
	static int32_t x175 = -4;
	int16_t x176 = -1;
	volatile int64_t t41 = INT64_MIN;

	t41 = ((x173+(x174<=x175))&x176);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -13256633413554287LL;
	volatile int64_t x178 = INT64_MIN;
	int8_t x179 = -1;
	int64_t t42 = -5956529006LL;

	t42 = ((x177+(x178<=x179))&x180);

	if (t42 != -13256633413554286LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = INT8_MAX;
	static int64_t x182 = INT64_MAX;
	uint8_t x184 = 2U;
	int32_t t43 = 1;

	t43 = ((x181+(x182<=x183))&x184);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 7U;
	uint32_t x186 = UINT32_MAX;
	int64_t x187 = INT64_MIN;
	static int16_t x188 = -2442;
	volatile int32_t t44 = -24;

	t44 = ((x185+(x186<=x187))&x188);

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x189 = UINT16_MAX;
	volatile int64_t x190 = -3733836832255LL;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t45 = -5125498;

	t45 = ((x189+(x190<=x191))&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 1458173LL;
	int32_t x194 = INT32_MIN;
	static volatile uint16_t x195 = 1897U;
	uint32_t x196 = 53146U;

	t46 = ((x193+(x194<=x195))&x196);

	if (t46 != 3994LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	volatile int16_t x198 = INT16_MIN;
	uint64_t x199 = 1665752LLU;
	int16_t x200 = INT16_MIN;
	int32_t t47 = -7213;

	t47 = ((x197+(x198<=x199))&x200);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = INT64_MIN;
	uint16_t x206 = UINT16_MAX;
	static int64_t x207 = -1LL;
	int8_t x208 = 3;

	t48 = ((x205+(x206<=x207))&x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	static uint64_t x210 = 6344898049LLU;
	volatile int64_t x211 = 3054458685188854191LL;
	int32_t x212 = 1751547;
	volatile int64_t t49 = 112619LL;

	t49 = ((x209+(x210<=x211))&x212);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = UINT64_MAX;
	uint16_t x214 = 9U;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = UINT16_MAX;
	static uint64_t t50 = 1669418LLU;

	t50 = ((x213+(x214<=x215))&x216);

	if (t50 != 65535LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = UINT8_MAX;
	static uint8_t x218 = UINT8_MAX;
	volatile int16_t x219 = INT16_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t51 = 46571989U;

	t51 = ((x217+(x218<=x219))&x220);

	if (t51 != 256U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x222 = 65411611U;
	uint8_t x223 = UINT8_MAX;
	int32_t x224 = -1;
	volatile int32_t t52 = 31069;

	t52 = ((x221+(x222<=x223))&x224);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t53 = 194065793;

	t53 = ((x225+(x226<=x227))&x228);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	static int64_t x230 = -89820673LL;
	uint32_t x232 = 2U;
	int64_t t54 = 17602109LL;

	t54 = ((x229+(x230<=x231))&x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	int16_t x235 = INT16_MAX;
	volatile uint8_t x236 = 36U;
	static int32_t t55 = 83436;

	t55 = ((x233+(x234<=x235))&x236);

	if (t55 != 36) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = 28642U;
	uint32_t x238 = 2278930U;
	static uint32_t x239 = UINT32_MAX;
	uint64_t t56 = 29069192465967LLU;

	t56 = ((x237+(x238<=x239))&x240);

	if (t56 != 34LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x241 = UINT8_MAX;
	uint32_t x243 = 249242666U;
	int16_t x244 = INT16_MIN;
	int32_t t57 = -2067382;

	t57 = ((x241+(x242<=x243))&x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	int32_t t58 = 594682495;

	t58 = ((x245+(x246<=x247))&x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = 13099249;
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = 794934;
	int32_t t59 = 266;

	t59 = ((x249+(x250<=x251))&x252);

	if (t59 != 270384) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	int32_t t60 = -25647;

	t60 = ((x253+(x254<=x255))&x256);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = -1;
	uint32_t x259 = 835097U;
	int32_t x260 = -15004684;
	volatile int32_t t61 = 1;

	t61 = ((x257+(x258<=x259))&x260);

	if (t61 != -15004684) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x261 = 65U;
	static int64_t x263 = -1LL;
	volatile uint64_t x264 = UINT64_MAX;
	uint64_t t62 = 18372LLU;

	t62 = ((x261+(x262<=x263))&x264);

	if (t62 != 66LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -1;
	uint64_t x266 = 3748199874906361LLU;
	static uint32_t x267 = 31381U;
	static int8_t x268 = INT8_MIN;
	int32_t t63 = -11;

	t63 = ((x265+(x266<=x267))&x268);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = UINT16_MAX;
	static int32_t x271 = INT32_MIN;
	volatile int16_t x272 = INT16_MAX;

	t64 = ((x269+(x270<=x271))&x272);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	static int8_t x276 = -1;
	volatile int32_t t65 = 493984412;

	t65 = ((x273+(x274<=x275))&x276);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	volatile int64_t t66 = -267515503504136796LL;

	t66 = ((x277+(x278<=x279))&x280);

	if (t66 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x281 = 1748030LLU;
	volatile int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MAX;

	t67 = ((x281+(x282<=x283))&x284);

	if (t67 != 11326LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x286 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	volatile int64_t x288 = -49919198350404LL;
	volatile uint64_t t68 = 30733416834892967LLU;

	t68 = ((x285+(x286<=x287))&x288);

	if (t68 != 118100488LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MAX;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t69 = -360942LL;

	t69 = ((x289+(x290<=x291))&x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x298 = 123;
	int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MAX;
	int64_t t70 = -7308931199730924LL;

	t70 = ((x297+(x298<=x299))&x300);

	if (t70 != 9223372036412560473LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	int32_t x302 = -1;
	static uint64_t x303 = UINT64_MAX;
	volatile int64_t x304 = INT64_MIN;
	int64_t t71 = 659667012007LL;

	t71 = ((x301+(x302<=x303))&x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x307 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t72 = -1715231036336806716LL;

	t72 = ((x305+(x306<=x307))&x308);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	volatile int32_t x311 = INT32_MIN;
	int8_t x312 = -1;
	static int32_t t73 = INT32_MIN;

	t73 = ((x309+(x310<=x311))&x312);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x314 = INT64_MIN;
	volatile int64_t t74 = -14110333LL;

	t74 = ((x313+(x314<=x315))&x316);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x318 = INT8_MIN;
	int64_t x320 = INT64_MIN;

	t75 = ((x317+(x318<=x319))&x320);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int8_t x322 = INT8_MAX;
	int16_t x323 = -4350;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t76 = 219612938;

	t76 = ((x321+(x322<=x323))&x324);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -5282;
	uint8_t x326 = 1U;
	uint32_t x328 = 11206U;
	uint32_t t77 = 59995U;

	t77 = ((x325+(x326<=x327))&x328);

	if (t77 != 11078U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	int16_t x332 = 1;
	int32_t t78 = -3784479;

	t78 = ((x329+(x330<=x331))&x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = INT32_MIN;
	static volatile int32_t x334 = INT32_MIN;
	static uint64_t x335 = 7LLU;
	uint8_t x336 = 6U;
	int32_t t79 = 0;

	t79 = ((x333+(x334<=x335))&x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x338 = 34U;
	int8_t x339 = INT8_MIN;
	static int8_t x340 = 0;
	static int64_t t80 = 569LL;

	t80 = ((x337+(x338<=x339))&x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x342 = -239;
	int16_t x343 = -1;
	uint64_t x344 = 7LLU;
	uint64_t t81 = 26LLU;

	t81 = ((x341+(x342<=x343))&x344);

	if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = 2993;
	static uint64_t x346 = UINT64_MAX;
	static int32_t x347 = -1;
	volatile int32_t x348 = -65320;
	int32_t t82 = 233648;

	t82 = ((x345+(x346<=x347))&x348);

	if (t82 != 144) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x350 = -13;
	uint32_t x351 = 0U;
	uint64_t x352 = 3136582567116LLU;

	t83 = ((x349+(x350<=x351))&x352);

	if (t83 != 3136582567116LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = INT8_MIN;
	int8_t x354 = -1;
	volatile int32_t x356 = INT32_MIN;
	int32_t t84 = INT32_MIN;

	t84 = ((x353+(x354<=x355))&x356);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = INT32_MIN;
	volatile uint8_t x360 = 22U;
	volatile int32_t t85 = -1;

	t85 = ((x357+(x358<=x359))&x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -1;
	static volatile int32_t t86 = 1;

	t86 = ((x361+(x362<=x363))&x364);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 4U;
	int32_t x366 = INT32_MIN;
	int64_t x368 = INT64_MIN;

	t87 = ((x365+(x366<=x367))&x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x372 = 26151402LLU;

	t88 = ((x369+(x370<=x371))&x372);

	if (t88 != 26151392LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 7623U;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = 1U;

	t89 = ((x373+(x374<=x375))&x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;
	uint64_t t90 = 26285170142103979LLU;

	t90 = ((x377+(x378<=x379))&x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x382 = 1;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MAX;
	volatile int64_t t91 = -7224LL;

	t91 = ((x381+(x382<=x383))&x384);

	if (t91 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x386 = UINT8_MAX;
	volatile int64_t x387 = INT64_MIN;

	t92 = ((x385+(x386<=x387))&x388);

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int16_t x392 = 15946;
	volatile int32_t t93 = 2281;

	t93 = ((x389+(x390<=x391))&x392);

	if (t93 != 74) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = INT64_MIN;
	static int8_t x395 = INT8_MIN;
	static int16_t x396 = 1;
	volatile int32_t t94 = 2;

	t94 = ((x393+(x394<=x395))&x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x399 = 3742U;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t95 = -7705;

	t95 = ((x397+(x398<=x399))&x400);

	if (t95 != 202) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x401 = INT8_MAX;
	volatile int8_t x402 = INT8_MIN;
	int8_t x403 = 0;
	int64_t x404 = INT64_MIN;
	int64_t t96 = 1055LL;

	t96 = ((x401+(x402<=x403))&x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = 3;
	volatile int64_t x406 = INT64_MIN;
	int8_t x407 = 0;
	int32_t x408 = INT32_MAX;
	int32_t t97 = -261079468;

	t97 = ((x405+(x406<=x407))&x408);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x409 = -1596250;
	int32_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = -1;
	volatile int32_t t98 = -49707;

	t98 = ((x409+(x410<=x411))&x412);

	if (t98 != -1596249) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 7U;
	int16_t x414 = -2742;
	volatile uint16_t x416 = 2327U;
	static int32_t t99 = -43;

	t99 = ((x413+(x414<=x415))&x416);

	if (t99 != 0) { NG(); } else { ; }
	
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

