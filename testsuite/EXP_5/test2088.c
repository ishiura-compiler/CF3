#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -195999830;
int64_t x14 = 82998794476LL;
volatile int64_t x18 = INT64_MIN;
int64_t x20 = -1LL;
int32_t t4 = -116639008;
int64_t x22 = 30725LL;
static int16_t x23 = INT16_MIN;
static int32_t t5 = -1;
volatile int64_t x27 = INT64_MAX;
int16_t x31 = -62;
volatile int32_t t7 = 1;
int32_t x35 = INT32_MIN;
int8_t x36 = INT8_MIN;
volatile uint64_t x37 = 739277333041466228LLU;
uint8_t x38 = 8U;
volatile int32_t t10 = -402686;
int16_t x48 = -210;
int16_t x51 = -1;
static int8_t x53 = -1;
int16_t x64 = -1;
static uint64_t x65 = UINT64_MAX;
uint32_t x71 = 5132482U;
uint32_t x77 = 64932092U;
volatile int32_t t20 = 18309183;
volatile int16_t x87 = 4851;
static int32_t x89 = 430;
static int32_t t23 = -1;
volatile uint64_t x104 = UINT64_MAX;
int32_t t28 = -10752;
int32_t x123 = 8046;
volatile uint64_t x124 = 25953LLU;
int32_t x128 = -1;
volatile uint32_t x135 = UINT32_MAX;
volatile int64_t x137 = INT64_MIN;
int32_t t36 = -16525553;
int8_t x150 = INT8_MIN;
static int8_t x162 = -1;
int32_t x164 = 1;
int16_t x165 = 1498;
static int64_t x166 = -1LL;
int64_t x169 = -57LL;
static uint8_t x180 = 9U;
int32_t t45 = 386948138;
volatile int8_t x188 = INT8_MIN;
int8_t x190 = -1;
volatile uint64_t x193 = 11253853348419434LLU;
volatile int64_t x199 = INT64_MIN;
int32_t x200 = -1;
volatile int64_t x209 = INT64_MAX;
int64_t x214 = -6769482206669720LL;
int64_t x216 = INT64_MAX;
uint32_t x223 = UINT32_MAX;
int8_t x224 = INT8_MIN;
int64_t x231 = INT64_MIN;
int32_t t56 = -5670;
static int16_t x235 = -2912;
volatile int32_t t61 = -1895;
static uint8_t x255 = 60U;
int8_t x257 = -1;
uint64_t x268 = 19288792LLU;
static int16_t x272 = INT16_MAX;
volatile int8_t x273 = -1;
int32_t t67 = 2;
volatile int16_t x278 = 1758;
int32_t x280 = INT32_MIN;
static uint32_t x287 = 3115955U;
volatile uint64_t x292 = UINT64_MAX;
static uint64_t x295 = 15686928LLU;
int64_t x296 = INT64_MIN;
int32_t x304 = INT32_MIN;
volatile int16_t x305 = 1;
int32_t t75 = 2;
static int32_t t76 = -63;
int16_t x315 = -2732;
int64_t x319 = 10103432480LL;
static volatile int64_t x323 = 2685LL;
int16_t x325 = INT16_MIN;
int64_t x333 = -1339LL;
int64_t x334 = INT64_MIN;
volatile int32_t t82 = -1453;
int8_t x346 = INT8_MIN;
int32_t x348 = 971623269;
uint8_t x351 = 0U;
static int64_t x352 = INT64_MAX;
uint16_t x367 = UINT16_MAX;
uint16_t x368 = 482U;
int32_t x372 = 180797;
int32_t t90 = -47203746;
uint8_t x382 = 1U;
int32_t x383 = INT32_MAX;
int64_t x390 = INT64_MAX;
volatile int32_t t94 = 348;
int8_t x399 = INT8_MAX;
int64_t x402 = INT64_MIN;
uint16_t x404 = 6451U;
static int32_t x410 = INT32_MIN;
uint16_t x416 = 58U;


void f0(void) {
	uint32_t x1 = 433102U;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -222845LL;
	int16_t x4 = INT16_MAX;

	t0 = (x1==((x2^x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -4;
	volatile int8_t x6 = -1;
	int16_t x7 = -514;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 19672029;

	t1 = (x5==((x6^x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 96U;
	volatile int32_t x10 = 18740;
	int32_t x11 = INT32_MIN;
	volatile int8_t x12 = 2;
	int32_t t2 = -6060730;

	t2 = (x9==((x10^x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint32_t x15 = 1095U;
	int16_t x16 = -2;
	static volatile int32_t t3 = -42239783;

	t3 = (x13==((x14^x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -26;
	volatile int64_t x19 = 38352764229LL;

	t4 = (x17==((x18^x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile uint16_t x24 = 18U;

	t5 = (x21==((x22^x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t x26 = 56047;
	int16_t x28 = 413;
	int32_t t6 = 3873436;

	t6 = (x25==((x26^x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -10;
	static int32_t x30 = -1;
	int32_t x32 = 359937;

	t7 = (x29==((x30^x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 6U;
	static int64_t x34 = INT64_MIN;
	static int32_t t8 = -1;

	t8 = (x33==((x34^x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = -1;
	volatile int8_t x40 = -3;
	volatile int32_t t9 = 1;

	t9 = (x37==((x38^x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -621;
	int64_t x42 = INT64_MIN;
	volatile uint16_t x43 = UINT16_MAX;
	static int64_t x44 = INT64_MAX;

	t10 = (x41==((x42^x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -90;
	int32_t x46 = -1;
	static int32_t x47 = -89167920;
	static volatile int32_t t11 = -26;

	t11 = (x45==((x46^x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = UINT32_MAX;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -1;

	t12 = (x49==((x50^x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x54 = INT8_MAX;
	uint8_t x55 = 111U;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = -168113;

	t13 = (x53==((x54^x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint16_t x58 = 908U;
	int16_t x59 = 7;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = -445384720;

	t14 = (x57==((x58^x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 0U;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	volatile int32_t t15 = -919893;

	t15 = (x61==((x62^x63)%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = 1;
	uint16_t x67 = UINT16_MAX;
	static int64_t x68 = -441LL;
	volatile int32_t t16 = -194612;

	t16 = (x65==((x66^x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 129640927U;
	int16_t x70 = 1;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 298529030;

	t17 = (x69==((x70^x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	static int16_t x74 = -1;
	volatile int32_t x75 = INT32_MIN;
	static int64_t x76 = INT64_MIN;
	int32_t t18 = 180;

	t18 = (x73==((x74^x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 4065;

	t19 = (x77==((x78^x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static volatile int64_t x82 = -75734257101LL;
	int8_t x83 = INT8_MAX;
	uint32_t x84 = UINT32_MAX;

	t20 = (x81==((x82^x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 36U;
	volatile int64_t x86 = INT64_MIN;
	volatile uint16_t x88 = 3U;
	volatile int32_t t21 = 6088199;

	t21 = (x85==((x86^x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 33U;
	static volatile uint64_t x91 = 3178LLU;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 0;

	t22 = (x89==((x90^x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -52;
	volatile uint8_t x94 = UINT8_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile int16_t x96 = INT16_MIN;

	t23 = (x93==((x94^x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	volatile int16_t x98 = INT16_MAX;
	uint8_t x99 = 11U;
	int32_t x100 = INT32_MAX;
	int32_t t24 = -30623;

	t24 = (x97==((x98^x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 8;
	volatile int16_t x102 = -16165;
	volatile int64_t x103 = -1LL;
	volatile int32_t t25 = 0;

	t25 = (x101==((x102^x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 9U;
	static int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	static volatile uint64_t x108 = UINT64_MAX;
	int32_t t26 = 112281;

	t26 = (x105==((x106^x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	int8_t x110 = INT8_MAX;
	int32_t x111 = INT32_MAX;
	volatile uint8_t x112 = UINT8_MAX;
	int32_t t27 = -424111966;

	t27 = (x109==((x110^x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 10U;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MAX;
	uint32_t x116 = 189U;

	t28 = (x113==((x114^x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int8_t x118 = INT8_MAX;
	uint8_t x119 = 24U;
	uint32_t x120 = 5482U;
	int32_t t29 = -152973955;

	t29 = (x117==((x118^x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 50LLU;
	uint32_t x122 = 444211253U;
	int32_t t30 = 65;

	t30 = (x121==((x122^x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 1739393U;
	uint32_t x126 = 1U;
	uint32_t x127 = 49U;
	int32_t t31 = -60;

	t31 = (x125==((x126^x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	static int16_t x130 = INT16_MAX;
	uint64_t x131 = UINT64_MAX;
	uint8_t x132 = 42U;
	volatile int32_t t32 = -1966;

	t32 = (x129==((x130^x131)%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	int16_t x136 = 4049;
	int32_t t33 = -75;

	t33 = (x133==((x134^x135)%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 352352684540LLU;
	uint16_t x139 = UINT16_MAX;
	volatile int32_t x140 = -1;
	int32_t t34 = -6795827;

	t34 = (x137==((x138^x139)%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -123;
	volatile int32_t t35 = -7304;

	t35 = (x141==((x142^x143)%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x145 = 0U;
	int64_t x146 = INT64_MIN;
	int16_t x147 = -23;
	int64_t x148 = INT64_MIN;

	t36 = (x145==((x146^x147)%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int64_t x151 = -1LL;
	uint8_t x152 = UINT8_MAX;
	static volatile int32_t t37 = -233823103;

	t37 = (x149==((x150^x151)%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MAX;
	uint16_t x156 = 221U;
	int32_t t38 = 2;

	t38 = (x153==((x154^x155)%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int64_t x159 = INT64_MIN;
	int32_t x160 = -14;
	volatile int32_t t39 = 80;

	t39 = (x157==((x158^x159)%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int32_t x163 = -296956;
	volatile int32_t t40 = -914127753;

	t40 = (x161==((x162^x163)%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = 22961;
	int32_t t41 = -1001239890;

	t41 = (x165==((x166^x167)%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x170 = 67353273U;
	int16_t x171 = INT16_MIN;
	static int8_t x172 = -1;
	volatile int32_t t42 = -2720;

	t42 = (x169==((x170^x171)%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = -5;
	int64_t x176 = INT64_MAX;
	volatile int32_t t43 = -15310445;

	t43 = (x173==((x174^x175)%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int32_t x178 = 712259;
	int16_t x179 = INT16_MAX;
	volatile int32_t t44 = -6;

	t44 = (x177==((x178^x179)%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 3017257800686LLU;
	uint64_t x182 = 302LLU;
	uint64_t x183 = 98LLU;
	int64_t x184 = INT64_MAX;

	t45 = (x181==((x182^x183)%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -22303237LL;
	int8_t x186 = INT8_MAX;
	volatile int32_t x187 = -5;
	int32_t t46 = -11;

	t46 = (x185==((x186^x187)%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 110380104LL;
	volatile uint32_t x191 = 54U;
	int32_t x192 = -1;
	int32_t t47 = -3;

	t47 = (x189==((x190^x191)%x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x194 = INT8_MIN;
	volatile uint32_t x195 = 14273U;
	static volatile uint8_t x196 = 3U;
	volatile int32_t t48 = -187809261;

	t48 = (x193==((x194^x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -14;
	uint8_t x198 = 14U;
	int32_t t49 = -793;

	t49 = (x197==((x198^x199)%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -32448411;
	static volatile uint32_t x202 = 18601U;
	int8_t x203 = 1;
	int64_t x204 = INT64_MAX;
	static volatile int32_t t50 = 72;

	t50 = (x201==((x202^x203)%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -10;
	int8_t x206 = 7;
	static uint64_t x207 = UINT64_MAX;
	static int32_t x208 = 86106;
	static int32_t t51 = -870669289;

	t51 = (x205==((x206^x207)%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 12889312964952LLU;
	uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -14;

	t52 = (x209==((x210^x211)%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 1771954138402LLU;
	int32_t x215 = INT32_MAX;
	volatile int32_t t53 = 1338551;

	t53 = (x213==((x214^x215)%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 400LLU;
	volatile int8_t x218 = INT8_MIN;
	static int16_t x219 = INT16_MAX;
	static uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 0;

	t54 = (x217==((x218^x219)%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 13;
	static int64_t x222 = 2LL;
	volatile int32_t t55 = -97;

	t55 = (x221==((x222^x223)%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x229 = 79U;
	uint32_t x230 = 132706861U;
	int64_t x232 = INT64_MAX;

	t56 = (x229==((x230^x231)%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -3699;
	static uint32_t x234 = UINT32_MAX;
	static uint8_t x236 = 1U;
	int32_t t57 = -40;

	t57 = (x233==((x234^x235)%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	static int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	int64_t x240 = INT64_MAX;
	int32_t t58 = 1461478;

	t58 = (x237==((x238^x239)%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = UINT8_MAX;
	static int8_t x242 = INT8_MIN;
	volatile uint32_t x243 = 4231957U;
	static int16_t x244 = INT16_MIN;
	static volatile int32_t t59 = -3148985;

	t59 = (x241==((x242^x243)%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = INT64_MIN;
	volatile int32_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	volatile int16_t x248 = INT16_MAX;
	int32_t t60 = -1564;

	t60 = (x245==((x246^x247)%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -1;
	int8_t x250 = -1;
	int8_t x251 = INT8_MIN;
	static int8_t x252 = -31;

	t61 = (x249==((x250^x251)%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -62;
	volatile int16_t x254 = INT16_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t62 = 6435844;

	t62 = (x253==((x254^x255)%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MAX;
	static volatile uint8_t x260 = UINT8_MAX;
	int32_t t63 = 0;

	t63 = (x257==((x258^x259)%x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 96189512403LLU;
	int16_t x263 = -13414;
	int32_t x264 = -1;
	int32_t t64 = 1997;

	t64 = (x261==((x262^x263)%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x265 = -1LL;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile int32_t t65 = -20994553;

	t65 = (x265==((x266^x267)%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 24738U;
	int8_t x270 = INT8_MIN;
	volatile int64_t x271 = -1914LL;
	int32_t t66 = -14;

	t66 = (x269==((x270^x271)%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x274 = 113U;
	int16_t x275 = -1;
	static int8_t x276 = INT8_MAX;

	t67 = (x273==((x274^x275)%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x277 = 12U;
	int8_t x279 = -1;
	volatile int32_t t68 = 261;

	t68 = (x277==((x278^x279)%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 3U;
	volatile int8_t x282 = INT8_MIN;
	uint8_t x283 = 88U;
	int64_t x284 = INT64_MAX;
	int32_t t69 = -97;

	t69 = (x281==((x282^x283)%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = -12506;
	int64_t x288 = INT64_MIN;
	volatile int32_t t70 = 49;

	t70 = (x285==((x286^x287)%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 507U;
	int16_t x290 = 14674;
	static int16_t x291 = -1320;
	static int32_t t71 = -37;

	t71 = (x289==((x290^x291)%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = 14215;
	int16_t x294 = -248;
	static volatile int32_t t72 = -4;

	t72 = (x293==((x294^x295)%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	int16_t x299 = 7;
	uint64_t x300 = 2308203068275431270LLU;
	volatile int32_t t73 = 14174237;

	t73 = (x297==((x298^x299)%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 50U;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	static volatile int32_t t74 = 41;

	t74 = (x301==((x302^x303)%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x306 = 12138U;
	int16_t x307 = 0;
	volatile uint32_t x308 = 11049859U;

	t75 = (x305==((x306^x307)%x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	volatile int32_t x310 = -234137461;
	static int32_t x311 = -48;
	int8_t x312 = -1;

	t76 = (x309==((x310^x311)%x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 98U;
	static int16_t x314 = INT16_MIN;
	uint64_t x316 = 71551625591415706LLU;
	volatile int32_t t77 = -256468586;

	t77 = (x313==((x314^x315)%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 10332U;
	uint32_t x318 = 0U;
	static volatile int8_t x320 = INT8_MAX;
	static int32_t t78 = -236897716;

	t78 = (x317==((x318^x319)%x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x321 = INT16_MAX;
	int32_t x322 = -1;
	int16_t x324 = INT16_MIN;
	int32_t t79 = 6373948;

	t79 = (x321==((x322^x323)%x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	static int16_t x328 = -1;
	volatile int32_t t80 = 25;

	t80 = (x325==((x326^x327)%x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = -3817;
	int32_t x330 = INT32_MIN;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = -1828LL;
	int32_t t81 = -4;

	t81 = (x329==((x330^x331)%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x335 = UINT8_MAX;
	static int64_t x336 = -1LL;

	t82 = (x333==((x334^x335)%x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = INT32_MIN;
	uint8_t x338 = 56U;
	int8_t x339 = INT8_MIN;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t83 = -1;

	t83 = (x337==((x338^x339)%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 154U;
	int8_t x344 = INT8_MAX;
	static volatile int32_t t84 = -743409530;

	t84 = (x341==((x342^x343)%x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = UINT16_MAX;
	uint64_t x347 = UINT64_MAX;
	static volatile int32_t t85 = 0;

	t85 = (x345==((x346^x347)%x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x349 = 32021297U;
	volatile int64_t x350 = INT64_MIN;
	int32_t t86 = -309;

	t86 = (x349==((x350^x351)%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x353 = 0U;
	int64_t x354 = INT64_MIN;
	uint8_t x355 = 4U;
	int64_t x356 = 82775004771435LL;
	static int32_t t87 = -10870663;

	t87 = (x353==((x354^x355)%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	static int32_t t88 = -7435754;

	t88 = (x365==((x366^x367)%x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = 5569U;
	int32_t t89 = 1647847;

	t89 = (x369==((x370^x371)%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = -222920714880864243LL;
	volatile int64_t x379 = INT64_MIN;
	uint64_t x380 = 55833260LLU;

	t90 = (x377==((x378^x379)%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x381 = 1;
	int8_t x384 = INT8_MAX;
	int32_t t91 = 3;

	t91 = (x381==((x382^x383)%x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;
	int8_t x388 = -1;
	volatile int32_t t92 = 632664472;

	t92 = (x385==((x386^x387)%x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x389 = 40803837426258803LLU;
	static volatile uint64_t x391 = 1669640LLU;
	int64_t x392 = -3503127693464650243LL;
	volatile int32_t t93 = 522940;

	t93 = (x389==((x390^x391)%x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	int64_t x394 = -1LL;
	static int16_t x395 = INT16_MIN;
	int32_t x396 = 191;

	t94 = (x393==((x394^x395)%x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -6502;
	int64_t x398 = -1LL;
	uint32_t x400 = 254701371U;
	int32_t t95 = -287633826;

	t95 = (x397==((x398^x399)%x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x401 = UINT16_MAX;
	uint64_t x403 = 0LLU;
	int32_t t96 = -26099;

	t96 = (x401==((x402^x403)%x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = 0U;
	volatile int64_t x406 = INT64_MIN;
	int32_t x407 = 212;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t97 = 19872663;

	t97 = (x405==((x406^x407)%x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 18U;
	volatile int32_t x411 = INT32_MAX;
	int32_t x412 = -1;
	int32_t t98 = 74;

	t98 = (x409==((x410^x411)%x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	static uint16_t x414 = UINT16_MAX;
	static int16_t x415 = INT16_MIN;
	volatile int32_t t99 = 248400;

	t99 = (x413==((x414^x415)%x416));

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
