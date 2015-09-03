#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
uint64_t x10 = 133844LLU;
volatile int16_t x11 = INT16_MAX;
int32_t x14 = INT32_MIN;
static uint64_t t3 = 94617270768904563LLU;
uint8_t x19 = 0U;
int32_t x22 = -79064;
uint8_t x23 = 116U;
volatile int32_t x27 = -19286;
static int64_t t6 = 525LL;
int32_t x33 = INT32_MIN;
uint16_t x38 = UINT16_MAX;
int64_t x39 = INT64_MIN;
uint32_t t9 = 2079054U;
static uint8_t x42 = 102U;
static volatile int8_t x46 = INT8_MIN;
uint64_t x52 = UINT64_MAX;
int16_t x66 = INT16_MAX;
static uint16_t x67 = 21U;
static int64_t x77 = -2647LL;
int64_t t18 = -53266592320LL;
int32_t t20 = -3;
volatile uint16_t x104 = 11579U;
int8_t x105 = -7;
static uint8_t x106 = 14U;
static uint16_t x111 = 1324U;
uint8_t x113 = 0U;
static int16_t x115 = -1;
uint64_t x116 = 133310403LLU;
uint64_t t27 = 295780201079777690LLU;
static int8_t x133 = INT8_MIN;
uint16_t x134 = 1U;
static int16_t x139 = -1;
volatile int64_t t33 = -3714684189071586789LL;
volatile int16_t x145 = -3645;
int64_t x146 = -212524333026968LL;
volatile int32_t t35 = -52;
uint8_t x157 = UINT8_MAX;
static int16_t x163 = -1;
int16_t x165 = INT16_MIN;
int16_t x167 = INT16_MIN;
int8_t x179 = -1;
volatile int32_t t42 = 2;
static int16_t x183 = INT16_MIN;
int32_t x188 = INT32_MIN;
volatile int64_t t45 = 1040635634571100774LL;
int8_t x206 = 1;
static int8_t x208 = 1;
static volatile int64_t t49 = INT64_MIN;
int64_t t50 = -6LL;
volatile int32_t x225 = INT32_MAX;
volatile int16_t x228 = -3;
int64_t x231 = 69739448LL;
volatile int64_t t55 = 5730487268342003LL;
static uint32_t x233 = 82U;
volatile int16_t x235 = INT16_MIN;
volatile uint64_t x236 = 106986705526697LLU;
volatile int64_t x239 = INT64_MIN;
int32_t x241 = INT32_MAX;
int64_t x243 = -6725767438254708LL;
int64_t x246 = INT64_MIN;
uint8_t x247 = UINT8_MAX;
volatile uint64_t t59 = 18LLU;
static int32_t x250 = INT32_MIN;
volatile uint64_t x258 = 18439300307200LLU;
uint8_t x259 = 95U;
uint8_t x266 = UINT8_MAX;
volatile uint64_t x267 = 8222583840476138188LLU;
volatile int64_t t67 = 92170148LL;
volatile uint16_t x281 = 299U;
int16_t x286 = -1;
static int32_t t69 = 211;
volatile uint8_t x307 = 56U;
static int32_t x310 = INT32_MIN;
volatile int32_t x313 = -1;
volatile uint16_t x315 = 80U;
int64_t x318 = INT64_MIN;
static int32_t x325 = 114817132;
static volatile uint64_t x326 = UINT64_MAX;
int32_t x327 = INT32_MIN;
static volatile int64_t t79 = 21631LL;
int64_t x337 = INT64_MAX;
int16_t x338 = INT16_MIN;
int32_t x344 = INT32_MIN;
int16_t x347 = -2;
volatile int32_t t84 = -748;
volatile int32_t x362 = INT32_MIN;
int64_t x363 = -1LL;
static volatile uint8_t x366 = 97U;
int32_t x367 = 612135;
int64_t x376 = -1LL;
volatile uint64_t t92 = 5716368LLU;
volatile int64_t x401 = 437002452776LL;
static uint32_t x404 = 25335217U;
uint32_t x411 = 66995194U;


void f0(void) {
	int64_t x1 = -1990545377LL;
	volatile int8_t x2 = -33;
	static uint16_t x4 = 1714U;
	volatile int64_t t0 = -32228410099758LL;

	t0 = ((x1|(x2==x3))/x4);

	if (t0 != -1161345LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = 7074784;
	uint64_t x7 = 903195844608434852LLU;
	static volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 8504800;

	t1 = ((x5|(x6==x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int16_t x12 = -245;
	int32_t t2 = 5645718;

	t2 = ((x9|(x10==x11))/x12);

	if (t2 != 8765239) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 13784803085758LLU;
	static uint8_t x15 = 1U;
	uint64_t x16 = UINT64_MAX;

	t3 = ((x13|(x14==x15))/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 1U;
	int16_t x18 = INT16_MAX;
	int64_t x20 = -1LL;
	int64_t t4 = -7646528968LL;

	t4 = ((x17|(x18==x19))/x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -2641;

	t5 = ((x21|(x22==x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -23133LL;
	int32_t x26 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;

	t6 = ((x25|(x26==x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MAX;
	int16_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t7 = 21718339309LLU;

	t7 = ((x29|(x30==x31))/x32);

	if (t7 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 94U;
	volatile uint16_t x35 = UINT16_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 667646836;

	t8 = ((x33|(x34==x35))/x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	static uint32_t x40 = 1625U;

	t9 = ((x37|(x38==x39))/x40);

	if (t9 != 2643056U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x43 = 29;
	volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 168694445LLU;

	t10 = ((x41|(x42==x43))/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint32_t x47 = 273909U;
	int8_t x48 = -16;
	volatile int32_t t11 = 426887;

	t11 = ((x45|(x46==x47))/x48);

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = 3003056945LLU;
	int16_t x51 = INT16_MAX;
	volatile uint64_t t12 = 4LLU;

	t12 = ((x49|(x50==x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = 100U;
	static int64_t x55 = INT64_MIN;
	static volatile int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 1;

	t13 = ((x53|(x54==x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 11LLU;
	int64_t x58 = -1LL;
	static int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;
	uint64_t t14 = 276170501786LLU;

	t14 = ((x57|(x58==x59))/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -54LL;
	static volatile int8_t x62 = INT8_MAX;
	uint64_t x63 = 725946860997LLU;
	int64_t x64 = -1LL;
	static volatile int64_t t15 = -3437917550531LL;

	t15 = ((x61|(x62==x63))/x64);

	if (t15 != 54LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 462;
	static uint8_t x68 = UINT8_MAX;
	int32_t t16 = 124820;

	t16 = ((x65|(x66==x67))/x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	volatile uint16_t x71 = 0U;
	uint64_t x72 = 1379692311683352LLU;
	volatile uint64_t t17 = 49299645800278LLU;

	t17 = ((x69|(x70==x71))/x72);

	if (t17 != 13370LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MIN;
	static volatile uint16_t x79 = 21U;
	static int16_t x80 = INT16_MIN;

	t18 = ((x77|(x78==x79))/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = INT64_MIN;
	static uint8_t x82 = 1U;
	static int32_t x83 = -1;
	int8_t x84 = 1;
	volatile int64_t t19 = INT64_MIN;

	t19 = ((x81|(x82==x83))/x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 1799U;
	volatile int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;

	t20 = ((x85|(x86==x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	static int32_t x91 = 886;
	static int8_t x92 = INT8_MIN;
	int64_t t21 = 1LL;

	t21 = ((x89|(x90==x91))/x92);

	if (t21 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = INT8_MIN;
	volatile int64_t x94 = 812140521853LL;
	static uint8_t x95 = 31U;
	int8_t x96 = 18;
	int32_t t22 = -86834230;

	t22 = ((x93|(x94==x95))/x96);

	if (t22 != -7) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	uint32_t x99 = 23840U;
	int32_t x100 = 6531743;
	static volatile int32_t t23 = -176304913;

	t23 = ((x97|(x98==x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 55162605LLU;
	int8_t x102 = INT8_MIN;
	volatile int64_t x103 = -1LL;
	volatile uint64_t t24 = 332840LLU;

	t24 = ((x101|(x102==x103))/x104);

	if (t24 != 4764LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x107 = -3;
	int8_t x108 = -1;
	static int32_t t25 = -442584;

	t25 = ((x105|(x106==x107))/x108);

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	uint8_t x112 = 59U;
	static int32_t t26 = 1;

	t26 = ((x109|(x110==x111))/x112);

	if (t26 != -36398027) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x114 = 17061256U;

	t27 = ((x113|(x114==x115))/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 818U;
	int16_t x118 = -1054;
	int64_t x119 = INT64_MAX;
	int16_t x120 = 778;
	int32_t t28 = -1;

	t28 = ((x117|(x118==x119))/x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 2572741U;
	int64_t x126 = 92311174LL;
	volatile uint8_t x127 = 2U;
	uint32_t x128 = 640463U;
	uint32_t t29 = 362581689U;

	t29 = ((x125|(x126==x127))/x128);

	if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t30 = 632206022;

	t30 = ((x129|(x130==x131))/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x135 = UINT16_MAX;
	static volatile int16_t x136 = -1;
	volatile int32_t t31 = -272098538;

	t31 = ((x133|(x134==x135))/x136);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 1177058906689670LLU;
	int8_t x138 = -1;
	static int32_t x140 = 38253265;
	volatile uint64_t t32 = 36122250LLU;

	t32 = ((x137|(x138==x139))/x140);

	if (t32 != 30770155LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 0U;
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = -268;
	int64_t x144 = 67886625075LL;

	t33 = ((x141|(x142==x143))/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x147 = INT8_MIN;
	static uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t34 = 8199304352640LLU;

	t34 = ((x145|(x146==x147))/x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 1U;
	uint8_t x150 = 3U;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MAX;

	t35 = ((x149|(x150==x151))/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 908256046282717LLU;
	int8_t x154 = -8;
	int64_t x155 = 1417830670LL;
	volatile int16_t x156 = INT16_MIN;
	uint64_t t36 = 3493068LLU;

	t36 = ((x153|(x154==x155))/x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x158 = 23143132;
	int32_t x159 = -119566788;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t37 = -6782560293156564LL;

	t37 = ((x157|(x158==x159))/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 13U;
	int64_t x162 = INT64_MAX;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t38 = 185564957;

	t38 = ((x161|(x162==x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x166 = 3U;
	int64_t x168 = -1LL;
	volatile int64_t t39 = -116348LL;

	t39 = ((x165|(x166==x167))/x168);

	if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = -2;
	int64_t x171 = INT64_MIN;
	static volatile int32_t x172 = 2369;
	int32_t t40 = 712945863;

	t40 = ((x169|(x170==x171))/x172);

	if (t40 != 27) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x173 = 5362U;
	uint16_t x174 = 7U;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = 44U;
	volatile int32_t t41 = -482120;

	t41 = ((x173|(x174==x175))/x176);

	if (t41 != 121) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	volatile uint64_t x178 = UINT64_MAX;
	int8_t x180 = INT8_MIN;

	t42 = ((x177|(x178==x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x181 = 241211840LLU;
	uint32_t x182 = 27U;
	uint8_t x184 = 3U;
	static volatile uint64_t t43 = 4348LLU;

	t43 = ((x181|(x182==x183))/x184);

	if (t43 != 80403946LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -40;
	int8_t x186 = -1;
	static uint32_t x187 = UINT32_MAX;
	volatile int32_t t44 = 11316;

	t44 = ((x185|(x186==x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = -10609LL;
	uint8_t x190 = 15U;
	int16_t x191 = -10;
	uint32_t x192 = 260901962U;

	t45 = ((x189|(x190==x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = 264U;
	static uint64_t x195 = 1142487LLU;
	int16_t x196 = 1314;
	volatile int32_t t46 = 790;

	t46 = ((x193|(x194==x195))/x196);

	if (t46 != -1634310) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MAX;
	volatile int16_t x200 = INT16_MIN;
	uint64_t t47 = 100LLU;

	t47 = ((x197|(x198==x199))/x200);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t48 = 0;

	t48 = ((x201|(x202==x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	volatile int64_t x207 = INT64_MIN;

	t49 = ((x205|(x206==x207))/x208);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 37U;
	int8_t x212 = INT8_MAX;

	t50 = ((x209|(x210==x211))/x212);

	if (t50 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = -7125138702131295LL;

	t51 = ((x213|(x214==x215))/x216);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = 26296U;
	int16_t x218 = -3415;
	int16_t x219 = 5260;
	uint32_t x220 = UINT32_MAX;
	uint32_t t52 = 39227U;

	t52 = ((x217|(x218==x219))/x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = INT32_MIN;
	static uint64_t x223 = 1818973771231049183LLU;
	volatile int32_t x224 = 617839461;
	volatile int32_t t53 = -1;

	t53 = ((x221|(x222==x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x226 = UINT8_MAX;
	volatile int64_t x227 = INT64_MIN;
	int32_t t54 = -9;

	t54 = ((x225|(x226==x227))/x228);

	if (t54 != -715827882) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = 227U;
	int32_t x232 = INT32_MAX;

	t55 = ((x229|(x230==x231))/x232);

	if (t55 != -4294967298LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = INT64_MAX;
	volatile uint64_t t56 = 663045599987LLU;

	t56 = ((x233|(x234==x235))/x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -12913LL;
	int16_t x238 = INT16_MIN;
	int16_t x240 = -478;
	int64_t t57 = 52322125384816LL;

	t57 = ((x237|(x238==x239))/x240);

	if (t57 != 27LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x242 = -1;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t58 = 10980584;

	t58 = ((x241|(x242==x243))/x244);

	if (t58 != -16777215) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 5628596197565005LLU;
	static uint32_t x248 = 2649262U;

	t59 = ((x245|(x246==x247))/x248);

	if (t59 != 2124590243LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = 4140;
	int8_t x251 = -41;
	volatile uint16_t x252 = 1U;
	int32_t t60 = 346;

	t60 = ((x249|(x250==x251))/x252);

	if (t60 != 4140) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = INT64_MIN;
	int64_t x255 = -1LL;
	int16_t x256 = INT16_MIN;
	volatile int32_t t61 = -811666;

	t61 = ((x253|(x254==x255))/x256);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = -1;
	int8_t x260 = -6;
	int32_t t62 = 1213;

	t62 = ((x257|(x258==x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -52;
	volatile uint64_t x262 = UINT64_MAX;
	static int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t63 = -10LL;

	t63 = ((x261|(x262==x263))/x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x265 = 118U;
	int8_t x268 = -1;
	static int32_t t64 = 0;

	t64 = ((x265|(x266==x267))/x268);

	if (t64 != -118) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -64;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile uint64_t x272 = 28729461181036505LLU;
	uint64_t t65 = 571633719406454955LLU;

	t65 = ((x269|(x270==x271))/x272);

	if (t65 != 642LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x273 = 25309U;
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;
	int16_t x276 = -12794;
	volatile int32_t t66 = 229049;

	t66 = ((x273|(x274==x275))/x276);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = INT64_MIN;
	static volatile int16_t x278 = INT16_MIN;
	static uint16_t x279 = UINT16_MAX;
	int16_t x280 = INT16_MIN;

	t67 = ((x277|(x278==x279))/x280);

	if (t67 != 281474976710656LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x282 = -1;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 28749U;
	volatile uint32_t t68 = 36U;

	t68 = ((x281|(x282==x283))/x284);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	volatile int64_t x287 = 894144132767LL;
	uint16_t x288 = UINT16_MAX;

	t69 = ((x285|(x286==x287))/x288);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	volatile uint32_t x290 = 19569492U;
	int64_t x291 = INT64_MIN;
	static volatile int32_t x292 = 71421;
	int32_t t70 = -774684;

	t70 = ((x289|(x290==x291))/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	int32_t x294 = -3085493;
	int64_t x295 = INT64_MIN;
	int8_t x296 = 8;
	int32_t t71 = -89400;

	t71 = ((x293|(x294==x295))/x296);

	if (t71 != 4095) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = 146;
	int32_t x298 = -9968251;
	int8_t x299 = -11;
	int16_t x300 = -1;
	static int32_t t72 = 30476;

	t72 = ((x297|(x298==x299))/x300);

	if (t72 != -146) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 24135282187LLU;
	static uint64_t x302 = 1024527LLU;
	int16_t x303 = -1;
	static uint16_t x304 = 1U;
	uint64_t t73 = 55743LLU;

	t73 = ((x301|(x302==x303))/x304);

	if (t73 != 24135282187LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x305 = -1LL;
	uint64_t x306 = 12174421027LLU;
	int8_t x308 = INT8_MIN;
	int64_t t74 = 10783169LL;

	t74 = ((x305|(x306==x307))/x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x309 = 26U;
	static int8_t x311 = 0;
	int64_t x312 = INT64_MIN;
	volatile int64_t t75 = 0LL;

	t75 = ((x309|(x310==x311))/x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x314 = INT16_MIN;
	static uint64_t x316 = 22515455745653LLU;
	uint64_t t76 = 64341379349339862LLU;

	t76 = ((x313|(x314==x315))/x316);

	if (t76 != 819292LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -1;
	int64_t x319 = 5360646118LL;
	uint16_t x320 = 297U;
	static volatile int32_t t77 = 97050289;

	t77 = ((x317|(x318==x319))/x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x321 = UINT32_MAX;
	uint16_t x322 = 0U;
	uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MAX;
	volatile uint32_t t78 = 5U;

	t78 = ((x321|(x322==x323))/x324);

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x328 = INT64_MAX;

	t79 = ((x325|(x326==x327))/x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 24259U;
	uint16_t x330 = 90U;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MAX;
	volatile uint32_t t80 = 998U;

	t80 = ((x329|(x330==x331))/x332);

	if (t80 != 191U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	volatile int64_t t81 = 52733LL;

	t81 = ((x337|(x338==x339))/x340);

	if (t81 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x341 = 5U;
	static int8_t x342 = INT8_MIN;
	volatile int16_t x343 = INT16_MIN;
	int32_t t82 = -215826;

	t82 = ((x341|(x342==x343))/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 120U;
	int8_t x346 = 1;
	int16_t x348 = INT16_MIN;
	int32_t t83 = 480;

	t83 = ((x345|(x346==x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = 60;
	int8_t x350 = INT8_MIN;
	volatile int8_t x351 = 59;
	uint8_t x352 = UINT8_MAX;

	t84 = ((x349|(x350==x351))/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MAX;
	volatile uint16_t x354 = 1423U;
	uint64_t x355 = 19986442639667984LLU;
	int64_t x356 = -1LL;
	volatile int64_t t85 = -1157684410339914LL;

	t85 = ((x353|(x354==x355))/x356);

	if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x357 = 70617LL;
	int8_t x358 = 2;
	uint64_t x359 = 13LLU;
	int8_t x360 = 15;
	static int64_t t86 = 194158018682386LL;

	t86 = ((x357|(x358==x359))/x360);

	if (t86 != 4707LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x361 = -1;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t87 = -2050;

	t87 = ((x361|(x362==x363))/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t88 = -1;

	t88 = ((x365|(x366==x367))/x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = -1;
	volatile int32_t t89 = 0;

	t89 = ((x369|(x370==x371))/x372);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x373 = -1LL;
	int64_t x374 = -1LL;
	static int64_t x375 = INT64_MIN;
	volatile int64_t t90 = -1196LL;

	t90 = ((x373|(x374==x375))/x376);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile int8_t x378 = -1;
	int8_t x379 = 0;
	int64_t x380 = 831988022315LL;
	int64_t t91 = 1692091061426530541LL;

	t91 = ((x377|(x378==x379))/x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x381 = UINT64_MAX;
	static volatile uint16_t x382 = 2708U;
	volatile uint16_t x383 = 1925U;
	int64_t x384 = INT64_MIN;

	t92 = ((x381|(x382==x383))/x384);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	volatile int32_t x386 = INT32_MIN;
	int8_t x387 = 40;
	volatile int64_t x388 = INT64_MAX;
	volatile int64_t t93 = -20440LL;

	t93 = ((x385|(x386==x387))/x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MAX;
	int64_t x391 = -1LL;
	int16_t x392 = -5190;
	volatile int32_t t94 = 90982573;

	t94 = ((x389|(x390==x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -458;
	int16_t x394 = INT16_MAX;
	int8_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t95 = -6;

	t95 = ((x393|(x394==x395))/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = -717;
	int64_t x399 = -1LL;
	uint16_t x400 = 3871U;
	volatile uint64_t t96 = 652447495679597LLU;

	t96 = ((x397|(x398==x399))/x400);

	if (t96 != 4765369174298515LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x402 = UINT8_MAX;
	static uint16_t x403 = 227U;
	volatile int64_t t97 = 466495016LL;

	t97 = ((x401|(x402==x403))/x404);

	if (t97 != 17248LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	volatile int64_t x406 = INT64_MIN;
	static uint16_t x407 = 175U;
	int32_t x408 = 1;
	static volatile int32_t t98 = -1;

	t98 = ((x405|(x406==x407))/x408);

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x409 = 726609627LL;
	uint64_t x410 = 13LLU;
	int32_t x412 = INT32_MIN;
	int64_t t99 = -91LL;

	t99 = ((x409|(x410==x411))/x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

