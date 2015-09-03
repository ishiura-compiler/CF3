#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x2 = 35U;
static volatile int32_t x15 = 3413;
uint32_t x34 = UINT32_MAX;
int32_t x39 = 0;
static int8_t x40 = 1;
int8_t x43 = INT8_MIN;
int32_t x50 = -1;
volatile int32_t t10 = -85133229;
int32_t x57 = INT32_MAX;
volatile uint8_t x58 = 1U;
uint64_t t13 = 478877767961858LLU;
uint64_t x70 = 1035543869436778324LLU;
int32_t x75 = INT32_MIN;
static int32_t t16 = -14282170;
uint32_t x84 = 1U;
int32_t x88 = INT32_MIN;
int8_t x91 = INT8_MIN;
int32_t x100 = -1;
volatile int8_t x101 = INT8_MIN;
int8_t x102 = 0;
uint64_t x104 = 2475LLU;
static uint64_t t22 = 159481537LLU;
int32_t x110 = 1233;
int64_t x111 = INT64_MIN;
uint32_t x112 = 11694385U;
uint64_t t26 = 573796365451524020LLU;
int16_t x140 = -3;
static uint32_t t30 = 1021826U;
int64_t x151 = -1LL;
static int64_t x154 = 1LL;
int32_t x171 = INT32_MIN;
int64_t x176 = -1LL;
int64_t t37 = -60148169216LL;
uint32_t x183 = 32621370U;
uint16_t x185 = UINT16_MAX;
int32_t x208 = INT32_MIN;
int64_t x212 = -1LL;
uint32_t x216 = 396348U;
volatile int16_t x225 = INT16_MIN;
int64_t t49 = 1070LL;
uint16_t x248 = 23U;
int64_t x249 = INT64_MAX;
uint32_t x252 = UINT32_MAX;
int16_t x256 = INT16_MIN;
volatile int16_t x269 = INT16_MIN;
volatile int16_t x271 = 1;
uint32_t x286 = 4U;
uint32_t x290 = 13393275U;
int8_t x305 = 4;
volatile int32_t x308 = -1;
static uint16_t x312 = 2965U;
int8_t x324 = INT8_MAX;
uint16_t x325 = UINT16_MAX;
uint16_t x331 = 492U;
int8_t x332 = -1;
int8_t x339 = INT8_MAX;
int32_t x348 = -1203;
int16_t x352 = -6481;
static int8_t x353 = -1;
int64_t x366 = -1380437144681568762LL;
uint32_t x372 = UINT32_MAX;
int16_t x382 = -13;
volatile int8_t x392 = -1;
static uint64_t x395 = 186985186800LLU;
uint16_t x399 = UINT16_MAX;
int64_t x400 = 187LL;
int64_t t83 = -579LL;
uint64_t x403 = 184753455733625LLU;
int16_t x421 = INT16_MIN;
int16_t x422 = -1;
static int8_t x427 = 2;
uint16_t x428 = UINT16_MAX;
volatile int16_t x429 = INT16_MAX;
int64_t x431 = -7660481LL;
static uint32_t x432 = UINT32_MAX;
int64_t t90 = 17834040287268LL;
uint64_t x437 = 1169617251LLU;
uint8_t x447 = 0U;
int64_t x450 = -1LL;
static int8_t x451 = INT8_MIN;
uint16_t x453 = UINT16_MAX;
volatile int64_t t95 = -46428LL;
uint64_t x457 = UINT64_MAX;
volatile int64_t x461 = -59202116186963LL;
volatile int32_t x467 = INT32_MAX;
volatile int8_t x475 = INT8_MIN;


void f0(void) {
	int32_t x1 = 819850;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = -4707741;
	int32_t t0 = 112;

	t0 = (((x1-x2)&x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = 96182001;
	volatile uint32_t x11 = 97U;
	int16_t x12 = 7;
	volatile uint32_t t1 = 10079U;

	t1 = (((x9-x10)&x11)/x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 5976549LLU;
	static uint64_t x14 = 157452731589980LLU;
	int8_t x16 = INT8_MIN;
	static volatile uint64_t t2 = 66LLU;

	t2 = (((x13-x14)&x15)/x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 4583LLU;
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	static volatile int16_t x20 = 6634;
	volatile uint64_t t3 = 122930620LLU;

	t3 = (((x17-x18)&x19)/x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x29 = 30963U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = 384;
	int64_t x32 = INT64_MIN;
	volatile int64_t t4 = 288992792LL;

	t4 = (((x29-x30)&x31)/x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x33 = -1;
	static int32_t x35 = 953002991;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t5 = 7916410U;

	t5 = (((x33-x34)&x35)/x36);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = 44;
	uint8_t x38 = 31U;
	volatile int32_t t6 = -92868487;

	t6 = (((x37-x38)&x39)/x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x41 = 4U;
	static int64_t x42 = -400662396013836LL;
	uint16_t x44 = 804U;
	volatile int64_t t7 = -80141636768783027LL;

	t7 = (((x41-x42)&x43)/x44);

	if (t7 != 498336313450LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 71253LLU;
	int64_t x46 = -1LL;
	int32_t x47 = -703;
	static int8_t x48 = 1;
	uint64_t t8 = 159426130742034LLU;

	t8 = (((x45-x46)&x47)/x48);

	if (t8 != 70720LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	static int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MAX;
	volatile int64_t t9 = 16329707LL;

	t9 = (((x49-x50)&x51)/x52);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 0;
	volatile int16_t x54 = 3;
	volatile uint16_t x55 = 29U;
	int8_t x56 = -1;

	t10 = (((x53-x54)&x55)/x56);

	if (t10 != -29) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x59 = -15;
	int8_t x60 = INT8_MAX;
	volatile int32_t t11 = 47;

	t11 = (((x57-x58)&x59)/x60);

	if (t11 != 16909319) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	volatile int64_t x62 = 51052346214LL;
	int64_t x63 = -1745116845LL;
	static int32_t x64 = -1;
	volatile int64_t t12 = -498250983194LL;

	t12 = (((x61-x62)&x63)/x64);

	if (t12 != 53334048750LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	volatile uint8_t x66 = UINT8_MAX;
	uint8_t x67 = 5U;
	uint64_t x68 = UINT64_MAX;

	t13 = (((x65-x66)&x67)/x68);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x71 = INT16_MIN;
	static int8_t x72 = 1;
	static uint64_t t14 = 2838LLU;

	t14 = (((x69-x70)&x71)/x72);

	if (t14 != 17411200208567730176LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -93650LL;
	int32_t x74 = INT32_MIN;
	int8_t x76 = -56;
	volatile int64_t t15 = 220062542LL;

	t15 = (((x73-x74)&x75)/x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 738U;
	int32_t x80 = 8682773;

	t16 = (((x77-x78)&x79)/x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = 271;
	static int16_t x82 = INT16_MIN;
	uint64_t x83 = 2061LLU;
	static uint64_t t17 = 30LLU;

	t17 = (((x81-x82)&x83)/x84);

	if (t17 != 13LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 143U;
	volatile int16_t x87 = -1;
	static uint32_t t18 = 28258797U;

	t18 = (((x85-x86)&x87)/x88);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x89 = UINT16_MAX;
	uint64_t x90 = 18404LLU;
	uint8_t x92 = 2U;
	volatile uint64_t t19 = 909684LLU;

	t19 = (((x89-x90)&x91)/x92);

	if (t19 != 23552LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 574U;
	uint16_t x94 = 0U;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t20 = 475;

	t20 = (((x93-x94)&x95)/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = -1;
	volatile int64_t t21 = -929LL;

	t21 = (((x97-x98)&x99)/x100);

	if (t21 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x103 = -17265;

	t22 = (((x101-x102)&x103)/x104);

	if (t22 != 7453229928771529LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = INT16_MIN;
	static int64_t x106 = INT64_MIN;
	int64_t x107 = 48839900198LL;
	volatile int32_t x108 = INT32_MIN;
	int64_t t23 = -34373070LL;

	t23 = (((x105-x106)&x107)/x108);

	if (t23 != -22LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x109 = -3;
	volatile int64_t t24 = 6LL;

	t24 = (((x109-x110)&x111)/x112);

	if (t24 != -788700905336LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x113 = 2291991955096609866LL;
	int8_t x114 = INT8_MIN;
	int16_t x115 = 5;
	volatile int32_t x116 = 14571;
	int64_t t25 = 1002946409LL;

	t25 = (((x113-x114)&x115)/x116);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	int64_t x119 = 259LL;
	static volatile uint64_t x120 = 15LLU;

	t26 = (((x117-x118)&x119)/x120);

	if (t26 != 17LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = 1U;
	static volatile uint64_t x122 = 262LLU;
	int32_t x123 = 2379601;
	static int8_t x124 = -1;
	static uint64_t t27 = 57719LLU;

	t27 = (((x121-x122)&x123)/x124);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x137 = 4419412LLU;
	volatile uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	volatile uint64_t t28 = 238667773788247LLU;

	t28 = (((x137-x138)&x139)/x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 742745595938220LLU;
	volatile int8_t x142 = INT8_MAX;
	volatile uint16_t x143 = 20U;
	volatile uint64_t x144 = 125966561144179LLU;
	volatile uint64_t t29 = 38944162024767720LLU;

	t29 = (((x141-x142)&x143)/x144);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x145 = 3U;
	uint32_t x146 = 2100U;
	static int16_t x147 = 1;
	int16_t x148 = -2272;

	t30 = (((x145-x146)&x147)/x148);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	static volatile uint64_t x152 = 22967302643824926LLU;
	static volatile uint64_t t31 = 10LLU;

	t31 = (((x149-x150)&x151)/x152);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = INT32_MAX;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = -1;
	volatile int64_t t32 = -14532991416356LL;

	t32 = (((x153-x154)&x155)/x156);

	if (t32 != -2147483646LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 1931489700149648315LLU;
	int32_t x158 = -1;
	static int8_t x159 = INT8_MIN;
	volatile int64_t x160 = INT64_MIN;
	volatile uint64_t t33 = 807937945LLU;

	t33 = (((x157-x158)&x159)/x160);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	int8_t x168 = -3;
	int32_t t34 = 86;

	t34 = (((x165-x166)&x167)/x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MIN;
	uint32_t x172 = 17984U;
	static int64_t t35 = -1040049338517048LL;

	t35 = (((x169-x170)&x171)/x172);

	if (t35 != 512865437872958LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 1;
	uint8_t x174 = 5U;
	static uint32_t x175 = 11317U;
	volatile int64_t t36 = -6036LL;

	t36 = (((x173-x174)&x175)/x176);

	if (t36 != -11316LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int8_t x179 = 28;
	uint32_t x180 = 12650483U;

	t37 = (((x177-x178)&x179)/x180);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x181 = 109U;
	int16_t x182 = INT16_MIN;
	static int8_t x184 = -1;
	static volatile uint32_t t38 = 359102U;

	t38 = (((x181-x182)&x183)/x184);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x186 = 18U;
	int16_t x187 = INT16_MAX;
	int16_t x188 = INT16_MAX;
	int32_t t39 = 1360707;

	t39 = (((x185-x186)&x187)/x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -1;
	int64_t x190 = -1LL;
	static uint64_t x191 = UINT64_MAX;
	int64_t x192 = INT64_MAX;
	volatile uint64_t t40 = 363671632139LLU;

	t40 = (((x189-x190)&x191)/x192);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = INT64_MAX;
	volatile uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MIN;
	volatile uint64_t t41 = 6543LLU;

	t41 = (((x205-x206)&x207)/x208);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	uint32_t x210 = 1341U;
	int16_t x211 = INT16_MAX;
	static volatile int64_t t42 = -20370346049968LL;

	t42 = (((x209-x210)&x211)/x212);

	if (t42 != -31426LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = 24;
	int32_t x215 = INT32_MIN;
	volatile uint32_t t43 = 68146367U;

	t43 = (((x213-x214)&x215)/x216);

	if (t43 != 5418U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = 183;
	int16_t x218 = -422;
	int32_t x219 = -1;
	static int8_t x220 = -1;
	static int32_t t44 = 446;

	t44 = (((x217-x218)&x219)/x220);

	if (t44 != -605) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x221 = 4387901LLU;
	static uint32_t x222 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = -1;
	static uint64_t t45 = 9078785093637159259LLU;

	t45 = (((x221-x222)&x223)/x224);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x226 = UINT16_MAX;
	volatile uint16_t x227 = 48U;
	uint16_t x228 = 6808U;
	volatile int32_t t46 = 3858;

	t46 = (((x225-x226)&x227)/x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = INT16_MIN;
	static uint16_t x230 = 3U;
	static uint32_t x231 = 24059U;
	volatile int16_t x232 = -1;
	volatile uint32_t t47 = 236U;

	t47 = (((x229-x230)&x231)/x232);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x233 = 1696796591091574253LLU;
	uint16_t x234 = UINT16_MAX;
	static volatile int64_t x235 = -7330762LL;
	int8_t x236 = -1;
	static volatile uint64_t t48 = 0LLU;

	t48 = (((x233-x234)&x235)/x236);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	volatile uint8_t x239 = 1U;
	volatile int8_t x240 = -15;

	t49 = (((x237-x238)&x239)/x240);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MAX;
	volatile int64_t x244 = INT64_MAX;
	uint64_t t50 = 25LLU;

	t50 = (((x241-x242)&x243)/x244);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1;
	static uint64_t x246 = UINT64_MAX;
	int64_t x247 = 1268207211614LL;
	uint64_t t51 = 16494688695216475LLU;

	t51 = (((x245-x246)&x247)/x248);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x250 = 0;
	volatile int16_t x251 = INT16_MIN;
	volatile int64_t t52 = -98815521452628284LL;

	t52 = (((x249-x250)&x251)/x252);

	if (t52 != 2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = 25;
	static int64_t x254 = -285068383451543LL;
	uint16_t x255 = UINT16_MAX;
	int64_t t53 = 63LL;

	t53 = (((x253-x254)&x255)/x256);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = -16762084421LL;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MIN;
	volatile int64_t t54 = 1148LL;

	t54 = (((x257-x258)&x259)/x260);

	if (t54 != -12749LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = UINT64_MAX;
	int16_t x266 = -1;
	uint16_t x267 = 27U;
	int64_t x268 = 25326355272329640LL;
	uint64_t t55 = 77778301491315LLU;

	t55 = (((x265-x266)&x267)/x268);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x270 = UINT32_MAX;
	static int8_t x272 = INT8_MIN;
	uint32_t t56 = 10946U;

	t56 = (((x269-x270)&x271)/x272);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	uint8_t x275 = UINT8_MAX;
	static uint16_t x276 = 383U;
	volatile uint32_t t57 = 751983U;

	t57 = (((x273-x274)&x275)/x276);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x285 = 2;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = 187614686561LL;
	int64_t t58 = 220473023181LL;

	t58 = (((x285-x286)&x287)/x288);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = INT16_MIN;
	static volatile int16_t x291 = 15234;
	static volatile int8_t x292 = 1;
	volatile uint32_t t59 = 12585U;

	t59 = (((x289-x290)&x291)/x292);

	if (t59 != 8832U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x293 = -1;
	uint64_t x294 = 2554597154820299365LLU;
	volatile int8_t x295 = -1;
	uint64_t x296 = 142LLU;
	static volatile uint64_t t60 = 2272460251280342224LLU;

	t60 = (((x293-x294)&x295)/x296);

	if (t60 != 111916527597811635LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = 94561718LLU;
	uint8_t x298 = UINT8_MAX;
	int64_t x299 = INT64_MAX;
	int64_t x300 = 3LL;
	uint64_t t61 = 6047873873LLU;

	t61 = (((x297-x298)&x299)/x300);

	if (t61 != 31520487LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x301 = -1LL;
	int8_t x302 = INT8_MIN;
	static int16_t x303 = INT16_MIN;
	volatile int16_t x304 = -1;
	volatile int64_t t62 = 264236981275683932LL;

	t62 = (((x301-x302)&x303)/x304);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	static int32_t t63 = -24480;

	t63 = (((x305-x306)&x307)/x308);

	if (t63 != -32645) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = -3757;
	uint8_t x310 = 0U;
	uint64_t x311 = 25LLU;
	volatile uint64_t t64 = 1020670270474LLU;

	t64 = (((x309-x310)&x311)/x312);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 913LLU;
	volatile uint8_t x315 = 19U;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t65 = 889939LLU;

	t65 = (((x313-x314)&x315)/x316);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = 4;
	uint16_t x318 = UINT16_MAX;
	int32_t x319 = -1;
	int8_t x320 = 14;
	int32_t t66 = 130860;

	t66 = (((x317-x318)&x319)/x320);

	if (t66 != -4680) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = 1306;
	uint32_t x322 = 31U;
	int64_t x323 = INT64_MIN;
	volatile int64_t t67 = 6609LL;

	t67 = (((x321-x322)&x323)/x324);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x326 = UINT32_MAX;
	static volatile int64_t x327 = -44853032102013965LL;
	int8_t x328 = INT8_MIN;
	volatile int64_t t68 = -2LL;

	t68 = (((x325-x326)&x327)/x328);

	if (t68 != -512LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = 0;
	int16_t x330 = INT16_MIN;
	volatile int32_t t69 = 110638;

	t69 = (((x329-x330)&x331)/x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = 6178979542639420LL;
	volatile int64_t x335 = INT64_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t70 = 204588790875LLU;

	t70 = (((x333-x334)&x335)/x336);

	if (t70 != 140739635871744LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x337 = 59226U;
	int16_t x338 = -1;
	static int64_t x340 = -225867628LL;
	int64_t t71 = 293472716LL;

	t71 = (((x337-x338)&x339)/x340);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = -35104496787213675LL;
	static int8_t x346 = 55;
	int64_t x347 = -182911909380983LL;
	volatile int64_t t72 = -21LL;

	t72 = (((x345-x346)&x347)/x348);

	if (t72 != 29180800388187LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x349 = 97U;
	int64_t x350 = 510405151702899LL;
	uint16_t x351 = UINT16_MAX;
	volatile int64_t t73 = 43758808LL;

	t73 = (((x349-x350)&x351)/x352);

	if (t73 != -7LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x354 = UINT8_MAX;
	static int16_t x355 = -1;
	int16_t x356 = 455;
	int32_t t74 = 6551;

	t74 = (((x353-x354)&x355)/x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x361 = -94;
	uint32_t x362 = 70U;
	uint32_t x363 = 1505U;
	int16_t x364 = -1;
	volatile uint32_t t75 = 15U;

	t75 = (((x361-x362)&x363)/x364);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = -1;
	static volatile int8_t x368 = 1;
	volatile int64_t t76 = -462153935LL;

	t76 = (((x365-x366)&x367)/x368);

	if (t76 != 1380437144681535994LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = -1;
	volatile int64_t x370 = -1LL;
	volatile uint16_t x371 = UINT16_MAX;
	int64_t t77 = 12890860LL;

	t77 = (((x369-x370)&x371)/x372);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x373 = 159123U;
	volatile int64_t x374 = -97855391600397717LL;
	int64_t x375 = -3251236011LL;
	uint32_t x376 = 25778U;
	static volatile int64_t t78 = 391197166LL;

	t78 = (((x373-x374)&x375)/x376);

	if (t78 != 3796081478551LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x377 = 3U;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -337277;
	int32_t t79 = -1;

	t79 = (((x377-x378)&x379)/x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = -1;
	volatile int64_t x383 = INT64_MIN;
	uint64_t x384 = 129226392241445504LLU;
	volatile uint64_t t80 = 1809053078102LLU;

	t80 = (((x381-x382)&x383)/x384);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x389 = -1LL;
	uint16_t x390 = 1U;
	int64_t x391 = 228935647LL;
	int64_t t81 = -19782743709558953LL;

	t81 = (((x389-x390)&x391)/x392);

	if (t81 != -228935646LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x394 = 34U;
	int8_t x396 = -3;
	uint64_t t82 = 1226615518LLU;

	t82 = (((x393-x394)&x395)/x396);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x397 = -1LL;
	int32_t x398 = -20964;

	t83 = (((x397-x398)&x399)/x400);

	if (t83 != 112LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x401 = 143033369849309LLU;
	volatile int32_t x402 = -900309039;
	int8_t x404 = INT8_MIN;
	static uint64_t t84 = 13860LLU;

	t84 = (((x401-x402)&x403)/x404);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	static uint8_t x407 = 0U;
	int16_t x408 = INT16_MIN;
	static volatile int32_t t85 = -1;

	t85 = (((x405-x406)&x407)/x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = INT8_MAX;
	static uint8_t x414 = 1U;
	volatile int64_t x415 = INT64_MIN;
	uint16_t x416 = 1U;
	int64_t t86 = 1LL;

	t86 = (((x413-x414)&x415)/x416);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x423 = INT8_MIN;
	int32_t x424 = 2030520;
	volatile int32_t t87 = 384621019;

	t87 = (((x421-x422)&x423)/x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = -27;
	static volatile int8_t x426 = 7;
	int32_t t88 = 6028;

	t88 = (((x425-x426)&x427)/x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x430 = -215650;
	int64_t t89 = -178141213560LL;

	t89 = (((x429-x430)&x431)/x432);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x433 = -1LL;
	volatile int64_t x434 = -1LL;
	uint16_t x435 = UINT16_MAX;
	static volatile int16_t x436 = INT16_MIN;

	t90 = (((x433-x434)&x435)/x436);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x438 = 173;
	uint16_t x439 = 477U;
	static uint8_t x440 = UINT8_MAX;
	uint64_t t91 = 2752LLU;

	t91 = (((x437-x438)&x439)/x440);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = 17964434;
	uint64_t x442 = 389045654LLU;
	int16_t x443 = INT16_MIN;
	int64_t x444 = -1LL;
	static volatile uint64_t t92 = 254LLU;

	t92 = (((x441-x442)&x443)/x444);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = INT16_MAX;
	int64_t x446 = INT64_MAX;
	static int32_t x448 = INT32_MAX;
	int64_t t93 = 964LL;

	t93 = (((x445-x446)&x447)/x448);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = 22996;
	volatile uint16_t x452 = 4U;
	volatile int64_t t94 = 2190103644LL;

	t94 = (((x449-x450)&x451)/x452);

	if (t94 != 5728LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x454 = 517U;
	int64_t x455 = INT64_MAX;
	int16_t x456 = INT16_MIN;

	t95 = (((x453-x454)&x455)/x456);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x458 = -1;
	int32_t x459 = -1;
	int64_t x460 = 1738LL;
	volatile uint64_t t96 = 4183935912633507LLU;

	t96 = (((x457-x458)&x459)/x460);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x462 = -1;
	uint16_t x463 = 614U;
	uint8_t x464 = UINT8_MAX;
	volatile int64_t t97 = -69553LL;

	t97 = (((x461-x462)&x463)/x464);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x465 = 1U;
	volatile uint32_t x466 = 458579762U;
	int64_t x468 = -1LL;
	int64_t t98 = -3492219LL;

	t98 = (((x465-x466)&x467)/x468);

	if (t98 != -1688903887LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x473 = 2019;
	static int8_t x474 = INT8_MAX;
	uint8_t x476 = 1U;
	volatile int32_t t99 = 1;

	t99 = (((x473-x474)&x475)/x476);

	if (t99 != 1792) { NG(); } else { ; }
	
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

