#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
static uint64_t x4 = UINT64_MAX;
int8_t x11 = INT8_MAX;
int16_t x15 = -1;
uint32_t x16 = UINT32_MAX;
volatile uint32_t t3 = UINT32_MAX;
int8_t x19 = INT8_MIN;
volatile int32_t x20 = INT32_MIN;
uint64_t t4 = 2787LLU;
int32_t t5 = 0;
int8_t x25 = -1;
int32_t t6 = -127270180;
int8_t x31 = -1;
static int16_t x32 = INT16_MIN;
int32_t x42 = INT32_MIN;
int64_t x44 = INT64_MAX;
volatile int64_t t10 = INT64_MAX;
uint8_t x45 = 66U;
static volatile int32_t x52 = INT32_MIN;
int8_t x55 = INT8_MAX;
int64_t x59 = INT64_MAX;
int32_t t15 = -604203463;
volatile int32_t t16 = 672495;
int8_t x72 = -1;
int8_t x74 = -34;
uint16_t x75 = 21U;
int8_t x78 = INT8_MAX;
static volatile int16_t x83 = -1;
int32_t x84 = INT32_MIN;
volatile uint16_t x86 = 0U;
int32_t x87 = INT32_MIN;
static uint8_t x88 = UINT8_MAX;
uint16_t x89 = 14419U;
static volatile int32_t x91 = INT32_MIN;
int64_t t22 = -550667211123494107LL;
int8_t x96 = 60;
int64_t x102 = -1336034LL;
static int16_t x103 = INT16_MAX;
int32_t t25 = -1056104418;
int8_t x105 = INT8_MIN;
uint32_t x106 = 899U;
uint16_t x108 = 32324U;
int32_t x110 = -1;
uint32_t x111 = 277U;
int8_t x113 = INT8_MIN;
static int16_t x118 = -1;
int32_t t29 = -687;
int32_t x122 = INT32_MIN;
int32_t x135 = -45752499;
volatile int64_t t33 = -104LL;
int8_t x142 = INT8_MAX;
volatile int32_t x145 = -5521467;
uint64_t x150 = UINT64_MAX;
int16_t x151 = 15784;
int32_t x155 = -119636682;
uint64_t x156 = 2245LLU;
int64_t x158 = -532LL;
static volatile int64_t t39 = 1275417426766LL;
volatile uint16_t x165 = 0U;
volatile int8_t x166 = -14;
int8_t x172 = -1;
volatile int64_t t42 = 11LL;
uint64_t x173 = UINT64_MAX;
static uint8_t x183 = 87U;
int8_t x193 = INT8_MAX;
int8_t x195 = INT8_MAX;
uint8_t x200 = UINT8_MAX;
static int32_t t49 = 11631837;
uint32_t x205 = 1253U;
int16_t x206 = -271;
int32_t x208 = INT32_MIN;
int64_t x212 = -3472938479LL;
int8_t x218 = INT8_MIN;
uint64_t x219 = UINT64_MAX;
int64_t x220 = INT64_MAX;
uint32_t x223 = 99U;
volatile int32_t t56 = 3052957;
uint64_t t57 = 46206583771179LLU;
int64_t x235 = -1LL;
volatile int64_t t58 = 2268450335098LL;
volatile uint8_t x244 = UINT8_MAX;
uint8_t x245 = 50U;
int64_t x247 = INT64_MIN;
static int32_t x249 = -1;
int16_t x252 = INT16_MIN;
volatile int32_t t62 = -54602789;
uint32_t x257 = 80U;
uint32_t t64 = 2U;
int8_t x262 = 0;
volatile uint8_t x263 = 10U;
uint64_t x272 = UINT64_MAX;
static volatile int8_t x282 = -1;
static int64_t t70 = INT64_MIN;
static int32_t x285 = -6184507;
int8_t x293 = INT8_MIN;
static volatile uint16_t x298 = UINT16_MAX;
uint16_t x303 = UINT16_MAX;
volatile uint32_t x304 = 30U;
volatile int32_t x305 = -629;
int16_t x306 = -19;
int8_t x318 = INT8_MIN;
uint8_t x319 = UINT8_MAX;
int16_t x323 = INT16_MAX;
int64_t t80 = -86281LL;
uint32_t x330 = 231U;
volatile int64_t t84 = -238248175508LL;
int32_t x352 = INT32_MIN;
int32_t t87 = 124075434;
int64_t t88 = INT64_MIN;
uint16_t x357 = 1U;
static int16_t x361 = INT16_MIN;
int8_t x365 = INT8_MIN;
int8_t x374 = INT8_MIN;
int16_t x381 = INT16_MIN;
volatile int32_t x383 = INT32_MAX;
int16_t x384 = INT16_MIN;
static volatile int64_t x389 = 76LL;
volatile int8_t x393 = INT8_MAX;
uint32_t x395 = UINT32_MAX;
uint16_t x396 = UINT16_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int32_t x2 = -1;
	uint64_t t0 = 7868LLU;

	t0 = ((x1|(x2<=x3))&x4);

	if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 832606327588824013LL;
	uint16_t x6 = 658U;
	int32_t x7 = -498990;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -97752257398205137LL;

	t1 = ((x5|(x6<=x7))&x8);

	if (t1 != 832606327588823936LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 61194536254610LLU;
	int16_t x10 = 1815;
	uint32_t x12 = 91169U;
	uint64_t t2 = 943810033093876LLU;

	t2 = ((x9|(x10<=x11))&x12);

	if (t2 != 25600LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int32_t x14 = INT32_MIN;

	t3 = ((x13|(x14<=x15))&x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 352913LLU;
	int64_t x18 = INT64_MIN;

	t4 = ((x17|(x18<=x19))&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -15205;
	static int32_t x23 = INT32_MIN;
	volatile uint8_t x24 = UINT8_MAX;

	t5 = ((x21|(x22<=x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	int16_t x28 = -8773;

	t6 = ((x25|(x26<=x27))&x28);

	if (t6 != -8773) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int64_t x30 = -1LL;
	int32_t t7 = 0;

	t7 = ((x29|(x30<=x31))&x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 36U;
	static int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = 476563662;

	t8 = ((x33|(x34<=x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	int16_t x39 = 6944;
	volatile int64_t x40 = INT64_MAX;
	static int64_t t9 = -43LL;

	t9 = ((x37|(x38<=x39))&x40);

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x43 = 233LLU;

	t10 = ((x41|(x42<=x43))&x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x46 = UINT32_MAX;
	static volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MIN;
	static int32_t t11 = 1233;

	t11 = ((x45|(x46<=x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = 0U;
	uint64_t x51 = 33203152LLU;
	int32_t t12 = -8005763;

	t12 = ((x49|(x50<=x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MIN;
	volatile int8_t x56 = -1;
	volatile int32_t t13 = -4806;

	t13 = ((x53|(x54<=x55))&x56);

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = INT32_MIN;
	int32_t x58 = -8355621;
	volatile uint8_t x60 = 0U;
	volatile int32_t t14 = 2007953;

	t14 = ((x57|(x58<=x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 7U;
	int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MAX;
	int8_t x64 = -1;

	t15 = ((x61|(x62<=x63))&x64);

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static int16_t x66 = 2;
	int8_t x67 = INT8_MAX;
	volatile uint8_t x68 = 117U;

	t16 = ((x65|(x66<=x67))&x68);

	if (t16 != 117) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 208730U;
	static uint32_t x70 = 854362U;
	int32_t x71 = -13496081;
	volatile uint32_t t17 = 0U;

	t17 = ((x69|(x70<=x71))&x72);

	if (t17 != 208731U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint64_t x76 = 171573301267357LLU;
	static uint64_t t18 = 2538130371956013LLU;

	t18 = ((x73|(x74<=x75))&x76);

	if (t18 != 157LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint8_t x79 = 13U;
	uint64_t x80 = 81232682882207LLU;
	volatile uint64_t t19 = 66376150LLU;

	t19 = ((x77|(x78<=x79))&x80);

	if (t19 != 81232682882207LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	volatile int32_t t20 = 179;

	t20 = ((x81|(x82<=x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	static int32_t t21 = -1;

	t21 = ((x85|(x86<=x87))&x88);

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x90 = INT32_MIN;
	int64_t x92 = -2LL;

	t22 = ((x89|(x90<=x91))&x92);

	if (t22 != 14418LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 17U;
	int16_t x94 = 0;
	uint64_t x95 = 394848290656529183LLU;
	volatile int32_t t23 = 41;

	t23 = ((x93|(x94<=x95))&x96);

	if (t23 != 16) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int16_t x98 = INT16_MIN;
	volatile uint32_t x99 = 18U;
	uint64_t x100 = 2640LLU;
	volatile uint64_t t24 = 239882LLU;

	t24 = ((x97|(x98<=x99))&x100);

	if (t24 != 2640LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	volatile uint8_t x104 = 0U;

	t25 = ((x101|(x102<=x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = -3;
	static int32_t t26 = -220242620;

	t26 = ((x105|(x106<=x107))&x108);

	if (t26 != 32256) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int32_t x112 = -571988;
	volatile int32_t t27 = INT32_MIN;

	t27 = ((x109|(x110<=x111))&x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x114 = UINT64_MAX;
	volatile uint32_t x115 = 2862441U;
	uint8_t x116 = 2U;
	int32_t t28 = 30;

	t28 = ((x113|(x114<=x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1571;
	volatile int64_t x119 = 5390216852318579LL;
	int8_t x120 = -7;

	t29 = ((x117|(x118<=x119))&x120);

	if (t29 != -1575) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = UINT16_MAX;
	static int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = 418989;

	t30 = ((x121|(x122<=x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = -1;
	int8_t x127 = -1;
	static uint8_t x128 = 7U;
	volatile int32_t t31 = -911308565;

	t31 = ((x125|(x126<=x127))&x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int16_t x130 = -1374;
	uint16_t x131 = 9309U;
	static uint16_t x132 = 94U;
	volatile int64_t t32 = -1603727LL;

	t32 = ((x129|(x130<=x131))&x132);

	if (t32 != 94LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 25U;
	int32_t x134 = -1091;
	int64_t x136 = INT64_MIN;

	t33 = ((x133|(x134<=x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = INT32_MIN;
	volatile int16_t x140 = -1;
	volatile int32_t t34 = -94535;

	t34 = ((x137|(x138<=x139))&x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -113926061425820LL;
	int64_t x143 = -166387489333LL;
	uint32_t x144 = 3249877U;
	volatile int64_t t35 = 762LL;

	t35 = ((x141|(x142<=x143))&x144);

	if (t35 != 1151556LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MAX;
	int32_t x147 = -1;
	int16_t x148 = INT16_MAX;
	int32_t t36 = 42214;

	t36 = ((x145|(x146<=x147))&x148);

	if (t36 != 16325) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	uint64_t x152 = 2LLU;
	volatile uint64_t t37 = 13225258LLU;

	t37 = ((x149|(x150<=x151))&x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile int64_t x154 = -554373146120974366LL;
	uint64_t t38 = 330728689LLU;

	t38 = ((x153|(x154<=x155))&x156);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	volatile int64_t x159 = -1LL;
	uint16_t x160 = 1U;

	t39 = ((x157|(x158<=x159))&x160);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -28;
	int32_t x162 = INT32_MAX;
	volatile int16_t x163 = 14036;
	int64_t x164 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

	t40 = ((x161|(x162<=x163))&x164);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x167 = INT8_MIN;
	static volatile int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 757881873;

	t41 = ((x165|(x166<=x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int32_t x170 = INT32_MIN;
	static int8_t x171 = -1;

	t42 = ((x169|(x170<=x171))&x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x174 = -1;
	static uint16_t x175 = 477U;
	int64_t x176 = -1LL;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x173|(x174<=x175))&x176);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = INT64_MIN;
	static int16_t x179 = 0;
	int8_t x180 = 49;
	int32_t t44 = -3;

	t44 = ((x177|(x178<=x179))&x180);

	if (t44 != 49) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int16_t x182 = INT16_MIN;
	volatile int32_t x184 = 654;
	static uint32_t t45 = 33445312U;

	t45 = ((x181|(x182<=x183))&x184);

	if (t45 != 654U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 31137LLU;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	uint16_t x188 = 1014U;
	uint64_t t46 = 77LLU;

	t46 = ((x185|(x186<=x187))&x188);

	if (t46 != 416LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MAX;
	volatile int64_t x191 = -5LL;
	uint64_t x192 = 11403579842845517LLU;
	static uint64_t t47 = 5720269753573890LLU;

	t47 = ((x189|(x190<=x191))&x192);

	if (t47 != 1437817677LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -45751822366039LL;
	int8_t x196 = 63;
	volatile int32_t t48 = -3393592;

	t48 = ((x193|(x194<=x195))&x196);

	if (t48 != 63) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 1U;
	static int64_t x198 = -1LL;
	int64_t x199 = INT64_MIN;

	t49 = ((x197|(x198<=x199))&x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 3U;
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MIN;
	volatile uint32_t x204 = 4092U;
	volatile uint32_t t50 = 1103710U;

	t50 = ((x201|(x202<=x203))&x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x207 = INT64_MIN;
	volatile uint32_t t51 = 419508524U;

	t51 = ((x205|(x206<=x207))&x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int8_t x210 = INT8_MIN;
	volatile int64_t x211 = -105503671LL;
	volatile int64_t t52 = 249756140032750972LL;

	t52 = ((x209|(x210<=x211))&x212);

	if (t52 != -3472938479LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 4087981611LLU;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	uint64_t t53 = 966372101376207LLU;

	t53 = ((x213|(x214<=x215))&x216);

	if (t53 != 4087971840LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	volatile int64_t t54 = INT64_MAX;

	t54 = ((x217|(x218<=x219))&x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -44;

	t55 = ((x221|(x222<=x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -4638;

	t56 = ((x225|(x226<=x227))&x228);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 33273458892823072LLU;
	int8_t x230 = -1;
	static uint16_t x231 = 1U;
	volatile int64_t x232 = 103206372598LL;

	t57 = ((x229|(x230<=x231))&x232);

	if (t57 != 34384920608LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -2849190167514770LL;
	int32_t x234 = INT32_MAX;
	volatile int32_t x236 = INT32_MIN;

	t58 = ((x233|(x234<=x235))&x236);

	if (t58 != -2849191109853184LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MAX;
	volatile uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

	t59 = ((x237|(x238<=x239))&x240);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int16_t x242 = INT16_MAX;
	static int8_t x243 = -15;
	int32_t t60 = -30636971;

	t60 = ((x241|(x242<=x243))&x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	int64_t x248 = -170LL;
	volatile int64_t t61 = -233200200LL;

	t61 = ((x245|(x246<=x247))&x248);

	if (t61 != 18LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 7U;
	uint32_t x251 = UINT32_MAX;

	t62 = ((x249|(x250<=x251))&x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile int32_t x254 = 37577;
	static uint16_t x255 = 5U;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = 5917308;

	t63 = ((x253|(x254<=x255))&x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	uint64_t x259 = 170934214LLU;
	uint8_t x260 = 79U;

	t64 = ((x257|(x258<=x259))&x260);

	if (t64 != 64U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -203;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = ((x261|(x262<=x263))&x264);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	static uint32_t x266 = 82265U;
	uint32_t x267 = 51242087U;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = -377;

	t66 = ((x265|(x266<=x267))&x268);

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	uint64_t t67 = UINT64_MAX;

	t67 = ((x269|(x270<=x271))&x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	static volatile int16_t x274 = -1;
	int16_t x275 = -1;
	static int32_t x276 = INT32_MIN;
	int32_t t68 = 3;

	t68 = ((x273|(x274<=x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 677899983098551725LLU;
	volatile int64_t x278 = INT64_MIN;
	uint64_t x279 = 7720661865929LLU;
	int32_t x280 = -1;
	volatile uint64_t t69 = 231210661LLU;

	t69 = ((x277|(x278<=x279))&x280);

	if (t69 != 677899983098551725LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	static int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MIN;

	t70 = ((x281|(x282<=x283))&x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	int64_t x287 = -29628LL;
	uint8_t x288 = 0U;
	volatile int32_t t71 = 126870;

	t71 = ((x285|(x286<=x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static uint16_t x290 = 37U;
	static int64_t x291 = -787722LL;
	uint32_t x292 = 6241U;
	volatile uint32_t t72 = 1523U;

	t72 = ((x289|(x290<=x291))&x292);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = 48;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t73 = 347904804;

	t73 = ((x293|(x294<=x295))&x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x299 = -5;
	volatile uint16_t x300 = 4294U;
	volatile int32_t t74 = 416486237;

	t74 = ((x297|(x298<=x299))&x300);

	if (t74 != 198) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 1437U;
	uint8_t x302 = 1U;
	uint32_t t75 = 2525U;

	t75 = ((x301|(x302<=x303))&x304);

	if (t75 != 28U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x307 = 1;
	volatile uint16_t x308 = 1042U;
	static int32_t t76 = 12053195;

	t76 = ((x305|(x306<=x307))&x308);

	if (t76 != 1026) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = -1;
	static uint8_t x312 = 22U;
	int64_t t77 = 777686563LL;

	t77 = ((x309|(x310<=x311))&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 47U;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	volatile uint8_t x316 = 38U;
	int32_t t78 = 13110566;

	t78 = ((x313|(x314<=x315))&x316);

	if (t78 != 38) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile uint64_t x320 = 1531490669402LLU;
	uint64_t t79 = 144847LLU;

	t79 = ((x317|(x318<=x319))&x320);

	if (t79 != 1531490669312LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = 21998288LL;
	volatile int64_t x322 = INT64_MAX;
	uint32_t x324 = UINT32_MAX;

	t80 = ((x321|(x322<=x323))&x324);

	if (t80 != 21998288LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1027337334LLU;
	volatile int32_t x326 = INT32_MIN;
	int64_t x327 = 6165484888568LL;
	static volatile int16_t x328 = INT16_MIN;
	volatile uint64_t t81 = 95343912239581510LLU;

	t81 = ((x325|(x326<=x327))&x328);

	if (t81 != 1027309568LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 591237U;
	volatile int32_t x331 = INT32_MAX;
	uint8_t x332 = 73U;
	uint32_t t82 = 25833273U;

	t82 = ((x329|(x330<=x331))&x332);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = 626LL;
	uint64_t x335 = UINT64_MAX;
	int8_t x336 = -1;
	static int32_t t83 = 6876;

	t83 = ((x333|(x334<=x335))&x336);

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = 224U;
	int8_t x338 = 0;
	uint32_t x339 = 783U;
	int64_t x340 = INT64_MAX;

	t84 = ((x337|(x338<=x339))&x340);

	if (t84 != 225LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 4U;
	int32_t x342 = -1;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -362;

	t85 = ((x341|(x342<=x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = 0U;
	static volatile uint64_t x346 = 16554279LLU;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MIN;
	static int64_t t86 = -206849440LL;

	t86 = ((x345|(x346<=x347))&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MAX;
	int32_t x350 = -1;
	uint16_t x351 = UINT16_MAX;

	t87 = ((x349|(x350<=x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x353 = INT16_MIN;
	volatile int16_t x354 = INT16_MAX;
	static volatile uint32_t x355 = 408269060U;
	static volatile int64_t x356 = INT64_MIN;

	t88 = ((x353|(x354<=x355))&x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -1;
	int16_t x359 = 1;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 1468278;

	t89 = ((x357|(x358<=x359))&x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = -1;
	int64_t x364 = 1797LL;
	int64_t t90 = -48920LL;

	t90 = ((x361|(x362<=x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = -9;
	static uint8_t x367 = 0U;
	int32_t x368 = -1;
	volatile int32_t t91 = -60;

	t91 = ((x365|(x366<=x367))&x368);

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -14;
	int64_t x370 = 4LL;
	int64_t x371 = 1480794917482941933LL;
	int16_t x372 = INT16_MAX;
	int32_t t92 = 5415;

	t92 = ((x369|(x370<=x371))&x372);

	if (t92 != 32755) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	uint64_t x375 = 511174LLU;
	uint64_t x376 = UINT64_MAX;
	uint64_t t93 = 162539799983LLU;

	t93 = ((x373|(x374<=x375))&x376);

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	int8_t x378 = -53;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 1596035239611LLU;
	volatile uint64_t t94 = 14680286699244012LLU;

	t94 = ((x377|(x378<=x379))&x380);

	if (t94 != 3771LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -3LL;
	static int32_t t95 = 128238;

	t95 = ((x381|(x382<=x383))&x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -30;
	uint8_t x386 = 22U;
	int64_t x387 = INT64_MIN;
	static int64_t x388 = INT64_MAX;
	volatile int64_t t96 = 86135672LL;

	t96 = ((x385|(x386<=x387))&x388);

	if (t96 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MAX;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t97 = 46013904400900LL;

	t97 = ((x389|(x390<=x391))&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = 0;
	static volatile int32_t t98 = 9077178;

	t98 = ((x393|(x394<=x395))&x396);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 16304614403LL;
	int16_t x398 = -143;
	static int16_t x399 = -1;
	volatile int64_t x400 = INT64_MAX;
	static volatile int64_t t99 = -1914638LL;

	t99 = ((x397|(x398<=x399))&x400);

	if (t99 != 16304614403LL) { NG(); } else { ; }
	
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

