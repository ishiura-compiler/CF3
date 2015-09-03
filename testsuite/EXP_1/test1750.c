#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = 106LLU;
volatile int32_t x4 = -1;
uint64_t x5 = UINT64_MAX;
volatile uint16_t x8 = UINT16_MAX;
uint64_t x10 = 5744222LLU;
volatile int8_t x16 = 8;
int16_t x18 = INT16_MIN;
int32_t x19 = INT32_MIN;
int8_t x22 = -6;
int8_t x23 = INT8_MAX;
int32_t x24 = INT32_MIN;
static volatile uint8_t x26 = 48U;
int64_t x27 = INT64_MIN;
static volatile int32_t t8 = 15675;
int64_t x40 = -1LL;
int16_t x43 = INT16_MIN;
int32_t x46 = 40949311;
static int8_t x51 = -1;
volatile int32_t t13 = -286;
volatile int8_t x57 = INT8_MAX;
int8_t x72 = 3;
int8_t x73 = -35;
int64_t x76 = INT64_MIN;
int8_t x77 = INT8_MAX;
volatile int64_t x78 = INT64_MAX;
uint32_t x82 = 482700289U;
volatile uint16_t x92 = UINT16_MAX;
int32_t x98 = INT32_MIN;
int32_t x103 = -1;
uint8_t x104 = 1U;
int8_t x105 = -50;
static int8_t x115 = -1;
volatile int64_t x117 = INT64_MIN;
uint16_t x118 = 2270U;
static volatile uint64_t x119 = UINT64_MAX;
uint64_t x121 = UINT64_MAX;
int64_t x126 = INT64_MAX;
volatile uint16_t x127 = UINT16_MAX;
int64_t x132 = -9165LL;
static int32_t x136 = INT32_MIN;
int32_t x140 = 12;
volatile int32_t t34 = 1819607;
int64_t x141 = -613943287144LL;
volatile int32_t t36 = -1;
uint16_t x169 = 5654U;
uint16_t x180 = 4730U;
int32_t x190 = 2;
int16_t x198 = -1;
static int32_t x199 = -26180784;
int16_t x202 = -8;
int16_t x206 = -1;
volatile uint64_t x209 = UINT64_MAX;
volatile int8_t x212 = INT8_MAX;
volatile uint16_t x218 = 435U;
volatile int64_t x222 = INT64_MAX;
int32_t x228 = INT32_MAX;
static int32_t t55 = -1004391225;
int32_t x229 = INT32_MAX;
static int8_t x232 = 22;
static volatile int32_t t56 = 1070139534;
static int8_t x237 = -1;
volatile uint16_t x238 = 1U;
int64_t x246 = INT64_MIN;
int64_t x249 = -713339947312894438LL;
int32_t x254 = INT32_MIN;
int32_t x259 = INT32_MIN;
volatile int32_t t64 = 1938247;
volatile int32_t x272 = -1;
static volatile int32_t t66 = 7889459;
uint64_t x279 = 5163101871020365LLU;
int64_t x280 = -1LL;
volatile int64_t x289 = 82706402LL;
volatile int32_t t71 = 398;
int32_t x301 = -4;
int16_t x304 = 9068;
static int64_t x306 = INT64_MIN;
int32_t x308 = INT32_MAX;
volatile int32_t t76 = -629580385;
int16_t x325 = 6482;
static int16_t x328 = -1;
volatile int8_t x334 = INT8_MAX;
volatile int32_t t81 = -399;
int32_t t82 = 574393;
uint32_t x352 = 16683345U;
int64_t x353 = 0LL;
static uint8_t x360 = UINT8_MAX;
int32_t t86 = -8176;
uint64_t x368 = 153067494535LLU;
int32_t t88 = -23331817;
uint16_t x372 = 1715U;
static uint32_t x375 = UINT32_MAX;
static int8_t x376 = -19;
int32_t t91 = -15388188;
int16_t x385 = 5383;
volatile int32_t t93 = 470;
int16_t x389 = INT16_MIN;
static int8_t x399 = INT8_MIN;
int64_t x401 = INT64_MAX;
volatile uint64_t x402 = 18258743452LLU;
int64_t x404 = INT64_MAX;
int32_t t98 = 3;


void f0(void) {
	uint16_t x2 = 7101U;
	int32_t x3 = -1;
	static int32_t t0 = -1;

	t0 = (((x1&x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = -13;

	t1 = (((x5&x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 230;
	volatile int64_t x11 = -1LL;
	static int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -1593497;

	t2 = (((x9&x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	int32_t t3 = -428989831;

	t3 = (((x13&x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	volatile int64_t x20 = INT64_MAX;
	int32_t t4 = -12971;

	t4 = (((x17&x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t t5 = 113495915;

	t5 = (((x21&x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	static uint64_t x28 = UINT64_MAX;
	static int32_t t6 = 23;

	t6 = (((x25&x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = 3;
	int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	int32_t t7 = 208625944;

	t7 = (((x29&x30)%x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -304;
	static int16_t x34 = 412;
	int8_t x35 = -14;
	volatile uint8_t x36 = 109U;

	t8 = (((x33&x34)%x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int32_t x38 = INT32_MIN;
	static volatile int64_t x39 = 8LL;
	volatile int32_t t9 = -11;

	t9 = (((x37&x38)%x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int64_t x42 = INT64_MIN;
	int16_t x44 = 272;
	int32_t t10 = 257170;

	t10 = (((x41&x42)%x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int64_t x47 = -203634281LL;
	static uint16_t x48 = 3826U;
	int32_t t11 = 33;

	t11 = (((x45&x46)%x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 224102072471495LL;
	static int32_t x50 = INT32_MIN;
	int64_t x52 = -1LL;
	volatile int32_t t12 = 491318;

	t12 = (((x49&x50)%x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = -1;
	uint32_t x55 = 2U;
	int8_t x56 = 23;

	t13 = (((x53&x54)%x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 66559178LLU;
	volatile int8_t x59 = INT8_MAX;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = -270213636;

	t14 = (((x57&x58)%x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 2U;
	static int8_t x62 = -5;
	static volatile uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -2771515;

	t15 = (((x61&x62)%x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = 1;
	int64_t x67 = INT64_MIN;
	volatile int64_t x68 = -3524149LL;
	int32_t t16 = 58;

	t16 = (((x65&x66)%x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	int16_t x70 = -1;
	volatile uint8_t x71 = UINT8_MAX;
	volatile int32_t t17 = -6;

	t17 = (((x69&x70)%x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x74 = 6598U;
	volatile int16_t x75 = 6041;
	volatile int32_t t18 = 954;

	t18 = (((x73&x74)%x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = INT32_MAX;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = -7280;

	t19 = (((x77&x78)%x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = UINT32_MAX;
	static volatile int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = -20646349;

	t20 = (((x81&x82)%x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -34213460;
	int32_t x86 = INT32_MIN;
	static int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 663;

	t21 = (((x85&x86)%x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 4379356LLU;
	volatile int32_t x90 = INT32_MIN;
	uint32_t x91 = 17362U;
	int32_t t22 = -37;

	t22 = (((x89&x90)%x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 13U;
	volatile int32_t x94 = -1;
	volatile int64_t x95 = -3187985842143347LL;
	static int8_t x96 = INT8_MAX;
	int32_t t23 = 1141289;

	t23 = (((x93&x94)%x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x99 = 3167845LLU;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 905389193;

	t24 = (((x97&x98)%x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int64_t x102 = INT64_MAX;
	int32_t t25 = 637659;

	t25 = (((x101&x102)%x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x106 = 30598677U;
	static int16_t x107 = -1;
	volatile int32_t x108 = -915228205;
	volatile int32_t t26 = 126763;

	t26 = (((x105&x106)%x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 3794U;
	uint64_t x110 = UINT64_MAX;
	volatile uint16_t x111 = 359U;
	int8_t x112 = 48;
	volatile int32_t t27 = -100;

	t27 = (((x109&x110)%x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -1;
	volatile uint64_t x114 = 29916019040958LLU;
	volatile int8_t x116 = -1;
	int32_t t28 = 472278;

	t28 = (((x113&x114)%x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x120 = 20364;
	static volatile int32_t t29 = 108;

	t29 = (((x117&x118)%x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	uint32_t x123 = UINT32_MAX;
	static uint16_t x124 = UINT16_MAX;
	int32_t t30 = 9;

	t30 = (((x121&x122)%x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x128 = INT64_MAX;
	int32_t t31 = -2101;

	t31 = (((x125&x126)%x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	uint32_t x130 = 5523U;
	static int32_t x131 = INT32_MIN;
	static volatile int32_t t32 = 4501658;

	t32 = (((x129&x130)%x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	static int8_t x135 = -50;
	int32_t t33 = 7583;

	t33 = (((x133&x134)%x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = 28;
	static uint16_t x138 = UINT16_MAX;
	volatile int16_t x139 = INT16_MAX;

	t34 = (((x137&x138)%x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = INT8_MAX;
	volatile uint8_t x143 = UINT8_MAX;
	uint64_t x144 = 228770122379269LLU;
	static volatile int32_t t35 = 73204;

	t35 = (((x141&x142)%x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	volatile uint32_t x146 = 617192U;
	uint64_t x147 = 32945372134181LLU;
	static uint32_t x148 = 640U;

	t36 = (((x145&x146)%x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	static uint32_t x150 = 122U;
	uint16_t x151 = 1834U;
	int64_t x152 = -1LL;
	volatile int32_t t37 = 234827;

	t37 = (((x149&x150)%x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	int8_t x154 = -1;
	int64_t x155 = -3LL;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -1;

	t38 = (((x153&x154)%x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 2U;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -1;

	t39 = (((x157&x158)%x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	volatile uint16_t x162 = UINT16_MAX;
	static uint64_t x163 = 1080804238169LLU;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -177512;

	t40 = (((x161&x162)%x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	static int32_t x167 = 463769324;
	static volatile int64_t x168 = -1LL;
	static int32_t t41 = 152;

	t41 = (((x165&x166)%x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = 0;
	uint32_t x171 = 1841880U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 564434;

	t42 = (((x169&x170)%x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	volatile int64_t x174 = -20523261069LL;
	int32_t x175 = 1707;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -1;

	t43 = (((x173&x174)%x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 25U;
	int8_t x178 = -12;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t t44 = 26612;

	t44 = (((x177&x178)%x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	static volatile int64_t x184 = -1LL;
	int32_t t45 = -94779;

	t45 = (((x181&x182)%x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t46 = -1428353;

	t46 = (((x189&x190)%x191)==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 0U;
	int64_t x194 = INT64_MIN;
	volatile int16_t x195 = -3;
	static int64_t x196 = -1LL;
	int32_t t47 = -12355;

	t47 = (((x193&x194)%x195)==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x197 = UINT64_MAX;
	int32_t x200 = -3300218;
	int32_t t48 = -256891083;

	t48 = (((x197&x198)%x199)==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = 7274156;
	int8_t x203 = -19;
	int64_t x204 = -1LL;
	int32_t t49 = 0;

	t49 = (((x201&x202)%x203)==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = -1;
	uint64_t x207 = 80115154LLU;
	int64_t x208 = INT64_MIN;
	volatile int32_t t50 = -2003;

	t50 = (((x205&x206)%x207)==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x210 = -52058146208LL;
	volatile uint32_t x211 = 10443889U;
	volatile int32_t t51 = -395;

	t51 = (((x209&x210)%x211)==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MAX;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = -31;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t52 = -82304611;

	t52 = (((x213&x214)%x215)==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MAX;
	uint16_t x219 = 8U;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t53 = -336;

	t53 = (((x217&x218)%x219)==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = 779344981;
	int16_t x223 = -1;
	int64_t x224 = -1LL;
	static int32_t t54 = 113908646;

	t54 = (((x221&x222)%x223)==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 835659329U;
	static volatile int8_t x226 = -1;
	int64_t x227 = INT64_MAX;

	t55 = (((x225&x226)%x227)==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x230 = -1;
	int16_t x231 = -1387;

	t56 = (((x229&x230)%x231)==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x239 = 1769267280286LL;
	int32_t x240 = -1;
	int32_t t57 = -28586161;

	t57 = (((x237&x238)%x239)==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 1LLU;
	static uint32_t x242 = 271921U;
	uint8_t x243 = UINT8_MAX;
	uint64_t x244 = UINT64_MAX;
	int32_t t58 = -193542417;

	t58 = (((x241&x242)%x243)==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x245 = 9;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t59 = -477093680;

	t59 = (((x245&x246)%x247)==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x250 = 240032LLU;
	static uint64_t x251 = 105582299642123LLU;
	int64_t x252 = INT64_MAX;
	volatile int32_t t60 = 1060062614;

	t60 = (((x249&x250)%x251)==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MAX;
	int64_t x255 = 714926LL;
	int64_t x256 = 485522527583LL;
	volatile int32_t t61 = -54955;

	t61 = (((x253&x254)%x255)==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 7249938473828LLU;
	int16_t x258 = INT16_MIN;
	int32_t x260 = -1;
	int32_t t62 = 223688303;

	t62 = (((x257&x258)%x259)==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x262 = 56582LLU;
	int32_t x263 = 156814;
	static int64_t x264 = INT64_MAX;
	int32_t t63 = -3134911;

	t63 = (((x261&x262)%x263)==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MAX;
	int32_t x267 = -78;
	volatile int16_t x268 = 2320;

	t64 = (((x265&x266)%x267)==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	static volatile int64_t x270 = 3505074338348LL;
	volatile int8_t x271 = 14;
	int32_t t65 = 27460;

	t65 = (((x269&x270)%x271)==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = 692301641849594LLU;
	static int32_t x275 = INT32_MIN;
	volatile int32_t x276 = 0;

	t66 = (((x273&x274)%x275)==x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x277 = 1;
	int8_t x278 = INT8_MAX;
	int32_t t67 = 524684557;

	t67 = (((x277&x278)%x279)==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 5U;
	int8_t x282 = -1;
	int16_t x283 = -16001;
	int8_t x284 = 0;
	volatile int32_t t68 = 7860311;

	t68 = (((x281&x282)%x283)==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = UINT8_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	volatile uint8_t x287 = 1U;
	volatile int8_t x288 = INT8_MIN;
	int32_t t69 = 86222;

	t69 = (((x285&x286)%x287)==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MIN;
	uint16_t x291 = 662U;
	volatile int16_t x292 = 141;
	volatile int32_t t70 = 6;

	t70 = (((x289&x290)%x291)==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x293 = INT64_MIN;
	static volatile int64_t x294 = -1LL;
	uint32_t x295 = UINT32_MAX;
	static int32_t x296 = 130358;

	t71 = (((x293&x294)%x295)==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1LL;
	volatile uint64_t x298 = 38727657369380126LLU;
	int16_t x299 = -1;
	int32_t x300 = INT32_MIN;
	int32_t t72 = -3;

	t72 = (((x297&x298)%x299)==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	volatile int32_t t73 = 10;

	t73 = (((x301&x302)%x303)==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	uint16_t x307 = 8U;
	int32_t t74 = -48;

	t74 = (((x305&x306)%x307)==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	static int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MAX;
	int32_t t75 = 1027469012;

	t75 = (((x309&x310)%x311)==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x317 = -1;
	volatile int16_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	static int16_t x320 = INT16_MIN;

	t76 = (((x317&x318)%x319)==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x321 = INT16_MIN;
	volatile int8_t x322 = -1;
	int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MAX;
	int32_t t77 = -916;

	t77 = (((x321&x322)%x323)==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x326 = -11284424;
	int32_t x327 = INT32_MIN;
	int32_t t78 = 619935;

	t78 = (((x325&x326)%x327)==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 2U;
	static int8_t x330 = -10;
	int16_t x331 = -6983;
	int64_t x332 = -1LL;
	static volatile int32_t t79 = -1;

	t79 = (((x329&x330)%x331)==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 500LLU;
	int32_t x335 = INT32_MIN;
	static uint8_t x336 = 99U;
	volatile int32_t t80 = 1063110408;

	t80 = (((x333&x334)%x335)==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = UINT32_MAX;
	volatile uint16_t x338 = UINT16_MAX;
	uint16_t x339 = 776U;
	uint32_t x340 = UINT32_MAX;

	t81 = (((x337&x338)%x339)==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MAX;
	volatile uint64_t x342 = 95065009655LLU;
	int64_t x343 = -1021030533LL;
	volatile int8_t x344 = -1;

	t82 = (((x341&x342)%x343)==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = -953048429;
	uint32_t x346 = 42U;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t83 = 404461;

	t83 = (((x345&x346)%x347)==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 41U;
	volatile uint16_t x350 = UINT16_MAX;
	int32_t x351 = 139518161;
	static int32_t t84 = -286;

	t84 = (((x349&x350)%x351)==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t85 = -6057740;

	t85 = (((x353&x354)%x355)==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -65978502;
	volatile int16_t x358 = -1;
	static int16_t x359 = -1;

	t86 = (((x357&x358)%x359)==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	static int8_t x362 = -1;
	int64_t x363 = -1LL;
	static uint64_t x364 = 2241LLU;
	int32_t t87 = -254;

	t87 = (((x361&x362)%x363)==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MAX;
	int8_t x366 = -12;
	static int64_t x367 = 60711774LL;

	t88 = (((x365&x366)%x367)==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 2492LLU;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = 9380853U;
	static volatile int32_t t89 = 7;

	t89 = (((x369&x370)%x371)==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = 100;
	int32_t x374 = INT32_MIN;
	volatile int32_t t90 = 161376945;

	t90 = (((x373&x374)%x375)==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = 4889389;
	int16_t x378 = -9808;
	volatile int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;

	t91 = (((x377&x378)%x379)==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -2078848168777370LL;
	static int32_t x383 = -23;
	uint64_t x384 = 1111LLU;
	volatile int32_t t92 = -2739;

	t92 = (((x381&x382)%x383)==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x386 = INT16_MIN;
	static int32_t x387 = -65591589;
	static uint8_t x388 = 14U;

	t93 = (((x385&x386)%x387)==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x390 = UINT64_MAX;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MAX;
	static int32_t t94 = -303179;

	t94 = (((x389&x390)%x391)==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 232U;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = 3U;
	volatile int32_t t95 = 203;

	t95 = (((x393&x394)%x395)==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -1;
	int64_t x398 = -1LL;
	int32_t x400 = -1;
	int32_t t96 = -6195931;

	t96 = (((x397&x398)%x399)==x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x403 = INT32_MAX;
	volatile int32_t t97 = -575;

	t97 = (((x401&x402)%x403)==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = -1LL;
	volatile int64_t x406 = -561988017047908LL;
	volatile int8_t x407 = -1;
	volatile int8_t x408 = -1;

	t98 = (((x405&x406)%x407)==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	static int8_t x410 = INT8_MIN;
	int8_t x411 = 30;
	int16_t x412 = -19;
	volatile int32_t t99 = 28;

	t99 = (((x409&x410)%x411)==x412);

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

