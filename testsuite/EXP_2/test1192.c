#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = -1;
static int16_t x15 = -1;
volatile int32_t t3 = 5;
uint64_t x22 = UINT64_MAX;
int8_t x23 = 0;
uint64_t x28 = 373702853LLU;
volatile int32_t t6 = -36525383;
int16_t x32 = -1;
int64_t x41 = INT64_MIN;
int64_t x46 = INT64_MAX;
volatile uint8_t x47 = 24U;
static uint32_t x52 = 5757U;
int32_t x60 = INT32_MAX;
static int32_t t14 = -2;
int8_t x61 = -1;
int64_t x70 = -1LL;
int8_t x71 = -54;
int32_t x72 = -2875;
static volatile int16_t x73 = -7;
int32_t x74 = 36486517;
static int32_t t20 = 12136014;
static uint32_t x87 = UINT32_MAX;
int8_t x88 = -1;
static int16_t x91 = INT16_MIN;
static int8_t x93 = INT8_MIN;
int16_t x98 = INT16_MIN;
int64_t x101 = INT64_MAX;
uint16_t x104 = UINT16_MAX;
int32_t x106 = INT32_MIN;
volatile int16_t x109 = INT16_MIN;
volatile int64_t x112 = INT64_MAX;
volatile uint8_t x116 = 5U;
static uint64_t x117 = 208753LLU;
int16_t x123 = -6;
int32_t x125 = INT32_MAX;
static int32_t t32 = 473;
static int32_t x138 = -1;
static uint32_t x139 = UINT32_MAX;
volatile uint64_t x146 = UINT64_MAX;
int16_t x149 = -1680;
uint32_t x157 = UINT32_MAX;
volatile int32_t t39 = 1;
uint16_t x172 = UINT16_MAX;
volatile int32_t t44 = 0;
uint16_t x181 = 3927U;
int8_t x183 = -1;
int32_t t45 = 322;
int16_t x186 = INT16_MAX;
int32_t t47 = 5028719;
int32_t t49 = -10525;
int8_t x203 = INT8_MAX;
int32_t t50 = -1442686;
uint8_t x208 = 3U;
int64_t x215 = 29748071916236298LL;
int8_t x235 = INT8_MIN;
int32_t t57 = -25350;
static uint8_t x240 = 1U;
static volatile int16_t x243 = INT16_MIN;
volatile uint32_t x245 = UINT32_MAX;
volatile int64_t x248 = -3026158LL;
uint32_t x251 = 3U;
volatile int32_t t62 = -6663;
int64_t x257 = INT64_MAX;
static int32_t x277 = INT32_MAX;
int16_t x279 = 7706;
int64_t x283 = 865698LL;
volatile int64_t x291 = -1LL;
uint8_t x292 = 8U;
volatile uint32_t x297 = UINT32_MAX;
volatile uint64_t x301 = UINT64_MAX;
static int32_t x302 = INT32_MAX;
int8_t x303 = -1;
static volatile int32_t t74 = 82576;
int64_t x307 = 323007039611LL;
uint64_t x308 = 7221389775542511974LLU;
volatile uint16_t x310 = 248U;
static int16_t x311 = INT16_MIN;
volatile int8_t x316 = -1;
uint16_t x324 = 41U;
uint16_t x327 = 216U;
int64_t x334 = INT64_MIN;
static int64_t x337 = INT64_MIN;
int64_t x340 = INT64_MIN;
int32_t x350 = 669879;
volatile int64_t x353 = -1LL;
uint64_t x356 = UINT64_MAX;
int32_t x359 = INT32_MIN;
int16_t x363 = INT16_MAX;
int16_t x373 = INT16_MIN;
uint16_t x374 = 53U;
int64_t x387 = -4470153035809922LL;
int32_t t97 = -1;
volatile int8_t x402 = -5;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int16_t x2 = -511;
	static uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 2;

	t0 = ((x1+(x2==x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 28U;
	int16_t x6 = 85;
	uint8_t x7 = 33U;
	volatile int64_t x8 = INT64_MIN;
	int32_t t1 = 8100630;

	t1 = ((x5+(x6==x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	static int16_t x10 = INT16_MIN;
	int32_t x11 = 1;
	volatile int8_t x12 = -1;

	t2 = ((x9+(x10==x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	uint64_t x16 = UINT64_MAX;

	t3 = ((x13+(x14==x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = 2U;
	static volatile int32_t x20 = -1;
	int32_t t4 = 125500077;

	t4 = ((x17+(x18==x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 62467LL;
	static volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 21227;

	t5 = ((x21+(x22==x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MAX;

	t6 = ((x25+(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 12U;
	static int16_t x30 = -11;
	int16_t x31 = -8;
	int32_t t7 = -352;

	t7 = ((x29+(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -3;
	int32_t x34 = -111649;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 0;
	int32_t t8 = 1;

	t8 = ((x33+(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint64_t x38 = 6684872179121498LLU;
	uint16_t x39 = 30U;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = 471;

	t9 = ((x37+(x38==x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MIN;
	static volatile uint8_t x44 = 2U;
	static int32_t t10 = -5292182;

	t10 = ((x41+(x42==x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = -27;

	t11 = ((x45+(x46==x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = -10019;
	int64_t x50 = -3941732293LL;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = -257580384;

	t12 = ((x49+(x50==x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 250332987;
	int32_t x54 = -59;
	int8_t x55 = INT8_MAX;
	int32_t x56 = 427613;
	int32_t t13 = -5;

	t13 = ((x53+(x54==x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = 19017272055838LLU;
	int64_t x59 = -1996281402533LL;

	t14 = ((x57+(x58==x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1850;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = 4499U;
	int32_t t15 = -184;

	t15 = ((x61+(x62==x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 44;
	int64_t x66 = INT64_MIN;
	int16_t x67 = -14;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = 500;

	t16 = ((x65+(x66==x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int32_t t17 = -9060927;

	t17 = ((x69+(x70==x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = 0U;
	int64_t x76 = 315950148791872LL;
	volatile int32_t t18 = 324114;

	t18 = ((x73+(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MAX;
	int32_t x78 = 1132;
	int64_t x79 = -1LL;
	static volatile int32_t x80 = 21944;
	int32_t t19 = 3;

	t19 = ((x77+(x78==x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	static int16_t x82 = INT16_MIN;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MAX;

	t20 = ((x81+(x82==x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = 54U;
	volatile int32_t t21 = -1603687;

	t21 = ((x85+(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	volatile int16_t x90 = -7574;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -474;

	t22 = ((x89+(x90==x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x94 = -10;
	static int16_t x95 = INT16_MAX;
	volatile int64_t x96 = 0LL;
	int32_t t23 = -34627340;

	t23 = ((x93+(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MIN;
	static int32_t t24 = 15942821;

	t24 = ((x97+(x98==x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = INT16_MAX;
	volatile int64_t x103 = INT64_MIN;
	volatile int32_t t25 = -3248;

	t25 = ((x101+(x102==x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static volatile int32_t x107 = INT32_MAX;
	int32_t x108 = -1;
	int32_t t26 = 214;

	t26 = ((x105+(x106==x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = INT32_MAX;
	uint8_t x111 = 0U;
	volatile int32_t t27 = 1720824;

	t27 = ((x109+(x110==x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 65145U;
	static int64_t x114 = -3168454331LL;
	volatile int32_t x115 = INT32_MAX;
	volatile int32_t t28 = 3;

	t28 = ((x113+(x114==x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x118 = 4;
	static int64_t x119 = INT64_MIN;
	uint32_t x120 = UINT32_MAX;
	int32_t t29 = 5315943;

	t29 = ((x117+(x118==x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 42;
	volatile int16_t x122 = -1;
	int64_t x124 = -1LL;
	static volatile int32_t t30 = 6;

	t30 = ((x121+(x122==x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = 1;
	int32_t x127 = INT32_MAX;
	int64_t x128 = -1LL;
	volatile int32_t t31 = -81601168;

	t31 = ((x125+(x126==x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 0;
	static uint32_t x130 = 0U;
	static uint32_t x131 = 837756774U;
	int8_t x132 = INT8_MIN;

	t32 = ((x129+(x130==x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	volatile int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	static int64_t x136 = 50787361LL;
	volatile int32_t t33 = -19;

	t33 = ((x133+(x134==x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 9846LLU;
	volatile int8_t x140 = -27;
	int32_t t34 = -124284;

	t34 = ((x137+(x138==x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 2U;
	int64_t x142 = INT64_MAX;
	int64_t x143 = INT64_MIN;
	int8_t x144 = 59;
	int32_t t35 = -25049002;

	t35 = ((x141+(x142==x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int8_t x147 = -1;
	static int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -56290;

	t36 = ((x145+(x146==x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = -1;
	static int64_t x151 = 900369660949253110LL;
	int16_t x152 = -1914;
	volatile int32_t t37 = 1;

	t37 = ((x149+(x150==x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	volatile int8_t x154 = INT8_MAX;
	volatile int8_t x155 = 0;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = 0;

	t38 = ((x153+(x154==x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = 1;
	static int16_t x159 = INT16_MIN;
	int32_t x160 = -1;

	t39 = ((x157+(x158==x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	static int32_t x162 = 458;
	static int16_t x163 = 6;
	uint32_t x164 = 378452U;
	volatile int32_t t40 = 91173021;

	t40 = ((x161+(x162==x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int8_t x166 = -11;
	int8_t x167 = 53;
	volatile int64_t x168 = INT64_MAX;
	static int32_t t41 = 310208736;

	t41 = ((x165+(x166==x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 4657U;
	uint8_t x170 = 28U;
	volatile uint16_t x171 = 89U;
	volatile int32_t t42 = 10;

	t42 = ((x169+(x170==x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 250U;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	int64_t x176 = -3907970189LL;
	int32_t t43 = 32;

	t43 = ((x173+(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 830505933;
	int16_t x178 = 35;
	static int64_t x179 = INT64_MAX;
	volatile uint32_t x180 = 232887U;

	t44 = ((x177+(x178==x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = -255518809;
	static volatile int32_t x184 = 305212848;

	t45 = ((x181+(x182==x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -29LL;
	uint64_t x187 = 3396463LLU;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -32;

	t46 = ((x185+(x186==x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = INT16_MAX;
	static int32_t x191 = 897434;
	static int16_t x192 = -1;

	t47 = ((x189+(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1LL;
	volatile int8_t x194 = INT8_MIN;
	static volatile uint32_t x195 = 28773U;
	uint16_t x196 = 26U;
	int32_t t48 = -1;

	t48 = ((x193+(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MIN;
	uint32_t x199 = 7050519U;
	uint32_t x200 = 366U;

	t49 = ((x197+(x198==x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 16U;
	volatile uint32_t x202 = 43842U;
	int16_t x204 = INT16_MIN;

	t50 = ((x201+(x202==x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 10;
	int16_t x206 = INT16_MAX;
	static int16_t x207 = INT16_MAX;
	int32_t t51 = -43879;

	t51 = ((x205+(x206==x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	volatile int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	int16_t x212 = -4295;
	volatile int32_t t52 = 0;

	t52 = ((x209+(x210==x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -89757155852478LL;
	int8_t x214 = INT8_MAX;
	int64_t x216 = INT64_MAX;
	volatile int32_t t53 = 3;

	t53 = ((x213+(x214==x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -332;
	static volatile int32_t x218 = -16634;
	static int32_t x219 = INT32_MIN;
	volatile uint64_t x220 = 647213561537LLU;
	int32_t t54 = 174;

	t54 = ((x217+(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 8170869626815LLU;
	volatile uint8_t x222 = 91U;
	static uint64_t x223 = 44404LLU;
	uint64_t x224 = 1031LLU;
	volatile int32_t t55 = 8850;

	t55 = ((x221+(x222==x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 78254923216526517LL;
	int64_t x230 = -106905175401430045LL;
	uint16_t x231 = 7U;
	uint16_t x232 = 5694U;
	volatile int32_t t56 = -4;

	t56 = ((x229+(x230==x231))<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -329187;
	int32_t x234 = INT32_MIN;
	volatile int32_t x236 = INT32_MIN;

	t57 = ((x233+(x234==x235))<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = 0;
	int64_t x238 = 282058486LL;
	static volatile uint16_t x239 = UINT16_MAX;
	volatile int32_t t58 = -3;

	t58 = ((x237+(x238==x239))<x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x241 = 1029348498817238LLU;
	volatile int32_t x242 = INT32_MAX;
	int8_t x244 = 3;
	int32_t t59 = -253671;

	t59 = ((x241+(x242==x243))<x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x246 = 218803U;
	volatile int64_t x247 = INT64_MIN;
	static volatile int32_t t60 = -956505859;

	t60 = ((x245+(x246==x247))<x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t61 = 8077;

	t61 = ((x249+(x250==x251))<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -1;
	volatile int8_t x254 = INT8_MIN;
	int8_t x255 = 1;
	int32_t x256 = -474064108;

	t62 = ((x253+(x254==x255))<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x258 = 65061;
	int64_t x259 = INT64_MIN;
	int32_t x260 = -56;
	int32_t t63 = -71955;

	t63 = ((x257+(x258==x259))<x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = -1144;
	int32_t x262 = INT32_MIN;
	volatile uint8_t x263 = 73U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t64 = 0;

	t64 = ((x261+(x262==x263))<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 90U;
	uint16_t x266 = 20U;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 9592U;
	int32_t t65 = -32556272;

	t65 = ((x265+(x266==x267))<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = INT8_MAX;
	static uint16_t x270 = 4U;
	uint64_t x271 = 1976LLU;
	static volatile uint32_t x272 = 3578961U;
	volatile int32_t t66 = 267995676;

	t66 = ((x269+(x270==x271))<x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 83U;
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = -1LL;
	int64_t x276 = INT64_MIN;
	int32_t t67 = 1058527342;

	t67 = ((x273+(x274==x275))<x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x278 = INT16_MIN;
	uint8_t x280 = 40U;
	volatile int32_t t68 = -9;

	t68 = ((x277+(x278==x279))<x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = -409788597;
	int64_t x282 = 1673916544113757LL;
	int64_t x284 = INT64_MIN;
	volatile int32_t t69 = 181959860;

	t69 = ((x281+(x282==x283))<x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MAX;
	static uint32_t x287 = 13552U;
	int8_t x288 = -1;
	volatile int32_t t70 = -56626;

	t70 = ((x285+(x286==x287))<x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -158;
	int32_t x290 = -587093;
	static volatile int32_t t71 = 6475;

	t71 = ((x289+(x290==x291))<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x293 = 6U;
	uint32_t x294 = 1011250U;
	int64_t x295 = -161023891005832LL;
	volatile uint32_t x296 = UINT32_MAX;
	int32_t t72 = 15363242;

	t72 = ((x293+(x294==x295))<x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x298 = 0;
	volatile uint64_t x299 = 3483LLU;
	int8_t x300 = INT8_MIN;
	int32_t t73 = -11466;

	t73 = ((x297+(x298==x299))<x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x304 = 2U;

	t74 = ((x301+(x302==x303))<x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x305 = INT16_MIN;
	int16_t x306 = -1;
	volatile int32_t t75 = -199623740;

	t75 = ((x305+(x306==x307))<x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = -622205128LL;
	uint16_t x312 = UINT16_MAX;
	int32_t t76 = -798066;

	t76 = ((x309+(x310==x311))<x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 2U;
	int32_t x314 = INT32_MIN;
	int32_t x315 = 100;
	int32_t t77 = 9;

	t77 = ((x313+(x314==x315))<x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MAX;
	volatile int64_t x319 = -1894085282888LL;
	static volatile int32_t x320 = INT32_MIN;
	volatile int32_t t78 = -11587;

	t78 = ((x317+(x318==x319))<x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = 3U;
	uint16_t x322 = 19U;
	volatile int8_t x323 = 0;
	volatile int32_t t79 = 143397;

	t79 = ((x321+(x322==x323))<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MIN;
	static int16_t x328 = 57;
	int32_t t80 = -45352;

	t80 = ((x325+(x326==x327))<x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 11U;
	int32_t x330 = INT32_MAX;
	int64_t x331 = -1LL;
	int16_t x332 = INT16_MAX;
	volatile int32_t t81 = -544658;

	t81 = ((x329+(x330==x331))<x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x333 = -1LL;
	volatile uint64_t x335 = 3477648551010008LLU;
	int16_t x336 = INT16_MIN;
	int32_t t82 = -445695589;

	t82 = ((x333+(x334==x335))<x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x338 = 3147U;
	int32_t x339 = -1;
	int32_t t83 = -271346240;

	t83 = ((x337+(x338==x339))<x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = 1352817361379610925LLU;
	volatile int8_t x343 = -1;
	static uint8_t x344 = 22U;
	int32_t t84 = 3363;

	t84 = ((x341+(x342==x343))<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x345 = -1;
	int8_t x346 = INT8_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	volatile uint16_t x348 = 22U;
	int32_t t85 = 300241;

	t85 = ((x345+(x346==x347))<x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MIN;
	uint8_t x351 = 41U;
	int32_t x352 = INT32_MIN;
	int32_t t86 = 72;

	t86 = ((x349+(x350==x351))<x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	volatile int32_t t87 = 0;

	t87 = ((x353+(x354==x355))<x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x357 = -1;
	uint32_t x358 = 1026582U;
	volatile int64_t x360 = INT64_MAX;
	int32_t t88 = 2;

	t88 = ((x357+(x358==x359))<x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = INT64_MAX;
	uint32_t x362 = 1458950U;
	volatile int16_t x364 = -5;
	int32_t t89 = 31543553;

	t89 = ((x361+(x362==x363))<x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MAX;
	static int8_t x367 = 1;
	volatile uint8_t x368 = 12U;
	int32_t t90 = -43245;

	t90 = ((x365+(x366==x367))<x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MIN;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = -1;
	int32_t x372 = 914457500;
	int32_t t91 = 0;

	t91 = ((x369+(x370==x371))<x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x375 = INT32_MIN;
	uint8_t x376 = 31U;
	volatile int32_t t92 = -44;

	t92 = ((x373+(x374==x375))<x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x377 = UINT8_MAX;
	int64_t x378 = 17753578223LL;
	int8_t x379 = -1;
	static int32_t x380 = -1;
	static int32_t t93 = 57;

	t93 = ((x377+(x378==x379))<x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = 1;
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = -109LL;
	volatile uint32_t x384 = UINT32_MAX;
	volatile int32_t t94 = -462103019;

	t94 = ((x381+(x382==x383))<x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = 68U;
	int8_t x388 = INT8_MIN;
	int32_t t95 = 46680342;

	t95 = ((x385+(x386==x387))<x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 32U;
	int32_t t96 = -24408917;

	t96 = ((x389+(x390==x391))<x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x393 = INT64_MAX;
	uint16_t x394 = 614U;
	static volatile int64_t x395 = -1LL;
	int8_t x396 = 6;

	t97 = ((x393+(x394==x395))<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x397 = 72U;
	int8_t x398 = INT8_MAX;
	static int16_t x399 = -3734;
	int32_t x400 = -1006736152;
	volatile int32_t t98 = 7359;

	t98 = ((x397+(x398==x399))<x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = -1;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t99 = 36519;

	t99 = ((x401+(x402==x403))<x404);

	if (t99 != 1) { NG(); } else { ; }
	
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

