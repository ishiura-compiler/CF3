#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x4 = 324483644;
uint8_t x14 = 47U;
static volatile uint16_t x15 = UINT16_MAX;
uint64_t t1 = 4410LLU;
volatile uint64_t t2 = 993LLU;
int8_t x22 = INT8_MIN;
volatile int64_t t3 = INT64_MIN;
int64_t t4 = -561660288502367LL;
static uint64_t x32 = 190959LLU;
int16_t x33 = -1;
int32_t x44 = -176483;
volatile int64_t x47 = -1LL;
uint8_t x51 = 77U;
volatile uint32_t x56 = 3107U;
static int64_t t12 = -1126120204LL;
uint32_t x66 = UINT32_MAX;
int16_t x81 = -9;
static volatile uint32_t x84 = 854545757U;
int64_t x88 = -7691LL;
volatile int16_t x90 = -11;
int16_t x94 = INT16_MIN;
int16_t x95 = INT16_MIN;
int8_t x96 = -1;
int8_t x104 = INT8_MIN;
volatile int64_t t18 = -284378245115203LL;
uint64_t t19 = 1750153907883268655LLU;
int8_t x109 = -6;
static uint8_t x130 = UINT8_MAX;
uint32_t x140 = 9737U;
uint64_t x142 = UINT64_MAX;
static volatile uint32_t x145 = 4158762U;
volatile uint8_t x146 = 0U;
static uint16_t x151 = 7U;
int8_t x161 = INT8_MIN;
uint64_t t31 = 1652176415LLU;
int16_t x173 = INT16_MAX;
volatile int64_t x176 = INT64_MIN;
uint8_t x183 = 2U;
volatile int64_t t35 = -675866457440965LL;
static volatile int64_t t36 = -1720622683LL;
uint64_t x209 = 167047212LLU;
static int16_t x216 = -1;
uint32_t x219 = UINT32_MAX;
static uint16_t x229 = 12U;
static volatile int8_t x230 = -1;
volatile int64_t x234 = -1LL;
volatile int32_t x236 = 71370610;
volatile int64_t t46 = -8LL;
int64_t x241 = -1LL;
volatile int32_t x244 = -1;
int8_t x246 = -1;
volatile int32_t x252 = INT32_MIN;
uint32_t x260 = 135353872U;
volatile uint32_t t52 = 361U;
uint16_t x269 = UINT16_MAX;
static int64_t x274 = INT64_MIN;
static int16_t x281 = INT16_MIN;
uint64_t t58 = 22LLU;
static int16_t x294 = INT16_MIN;
int64_t x300 = -1LL;
volatile int64_t t60 = 3619841LL;
static int64_t x304 = -301667496336LL;
uint64_t t61 = 263585317572LLU;
int32_t x316 = 389;
static uint32_t x319 = 0U;
int64_t t64 = INT64_MAX;
static int16_t x329 = INT16_MIN;
uint8_t x355 = UINT8_MAX;
int64_t x356 = -1LL;
static int32_t x357 = 52504558;
uint64_t x361 = UINT64_MAX;
uint64_t x362 = 905785183720430072LLU;
static volatile int64_t x363 = INT64_MIN;
int16_t x367 = INT16_MIN;
uint32_t x374 = 10U;
volatile uint16_t x375 = 119U;
int16_t x388 = -1;
int32_t x390 = -1;
volatile int64_t x392 = INT64_MIN;
uint64_t t79 = 7749975394800089135LLU;
int16_t x429 = INT16_MIN;
volatile uint64_t x437 = UINT64_MAX;
volatile uint64_t t83 = 3494207426502605LLU;
uint32_t x451 = UINT32_MAX;
int32_t x452 = INT32_MIN;
uint16_t x459 = UINT16_MAX;
static int64_t t86 = -311730748448LL;
uint16_t x469 = 9943U;
int64_t x472 = INT64_MIN;
uint32_t x474 = 793U;
int16_t x491 = 267;
volatile int8_t x497 = INT8_MIN;
static uint16_t x511 = 12U;
volatile uint16_t x518 = 3281U;
int64_t x519 = 7053LL;
int64_t t98 = 41720LL;
int64_t x524 = -1LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint8_t x2 = 2U;
	int64_t x3 = -24177017378LL;
	int64_t t0 = 5317326LL;

	t0 = (x1-((x2*x3)%x4));

	if (t0 != 5971927LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x16 = -25LL;

	t1 = (x13-((x14*x15)%x16));

	if (t1 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = -1;
	int8_t x18 = 2;
	static volatile uint64_t x19 = UINT64_MAX;
	static int32_t x20 = INT32_MAX;

	t2 = (x17-((x18*x19)%x20));

	if (t2 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	static volatile int16_t x23 = -1;
	int8_t x24 = INT8_MIN;

	t3 = (x21-((x22*x23)%x24));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 6U;
	volatile uint16_t x26 = 17033U;
	static int64_t x27 = -106601LL;
	static uint8_t x28 = 1U;

	t4 = (x25-((x26*x27)%x28));

	if (t4 != 6LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 7378U;
	uint16_t x30 = UINT16_MAX;
	volatile uint16_t x31 = 17953U;
	uint64_t t5 = 9042586587107LLU;

	t5 = (x29-((x30*x31)%x32));

	if (t5 != 18446744073709507538LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = UINT64_MAX;
	int16_t x35 = -2;
	uint32_t x36 = 3781U;
	uint64_t t6 = 684915971LLU;

	t6 = (x33-((x34*x35)%x36));

	if (t6 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = UINT8_MAX;
	static uint16_t x39 = 417U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t7 = 1;

	t7 = (x37-((x38*x39)%x40));

	if (t7 != -40799) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x42 = -1;
	uint16_t x43 = 46U;
	static uint64_t t8 = 2060093LLU;

	t8 = (x41-((x42*x43)%x44));

	if (t8 != 45LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	volatile int8_t x46 = INT8_MIN;
	static int8_t x48 = INT8_MAX;
	volatile int64_t t9 = 3207145018LL;

	t9 = (x45-((x46*x47)%x48));

	if (t9 != 65534LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -57;
	int32_t x50 = -289992;
	int32_t x52 = INT32_MAX;
	int32_t t10 = 1;

	t10 = (x49-((x50*x51)%x52));

	if (t10 != 22329327) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 10208LLU;
	int32_t x55 = 15141695;
	static uint64_t t11 = 43280515LLU;

	t11 = (x53-((x54*x55)%x56));

	if (t11 != 9223372036854774062LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -8197706587597766LL;
	uint32_t x58 = 1871031976U;
	volatile uint32_t x59 = 11U;
	uint8_t x60 = 28U;

	t12 = (x57-((x58*x59)%x60));

	if (t12 != -8197706587597786LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	volatile uint8_t x67 = 1U;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t13 = -86945LL;

	t13 = (x65-((x66*x67)%x68));

	if (t13 != -4294967296LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = INT32_MAX;
	volatile int8_t x83 = 1;
	uint32_t t14 = 1U;

	t14 = (x81-((x82*x83)%x84));

	if (t14 != 3856575154U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = -204;
	int32_t x86 = INT32_MAX;
	int8_t x87 = -1;
	int64_t t15 = 6LL;

	t15 = (x85-((x86*x87)%x88));

	if (t15 != 2423LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 308454911667434LLU;
	int16_t x91 = 0;
	int32_t x92 = -67800531;
	uint64_t t16 = 402003110548381LLU;

	t16 = (x89-((x90*x91)%x92));

	if (t16 != 308454911667434LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -5;
	volatile int32_t t17 = -10664;

	t17 = (x93-((x94*x95)%x96));

	if (t17 != -5) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = INT64_MIN;
	uint16_t x102 = 2045U;
	static volatile int64_t x103 = -1LL;

	t18 = (x101-((x102*x103)%x104));

	if (t18 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -1063186516;
	int16_t x106 = INT16_MIN;
	uint64_t x107 = 851370LLU;
	int8_t x108 = INT8_MAX;

	t19 = (x105-((x106*x107)%x108));

	if (t19 != 18446744072646365022LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x110 = 252U;
	static int8_t x111 = 1;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t20 = 943611129U;

	t20 = (x109-((x110*x111)%x112));

	if (t20 != 4294967038U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -1;
	uint16_t x114 = 483U;
	static volatile int64_t x115 = -1LL;
	static uint8_t x116 = 15U;
	int64_t t21 = 111935651684LL;

	t21 = (x113-((x114*x115)%x116));

	if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = UINT16_MAX;
	static uint16_t x118 = 184U;
	uint16_t x119 = UINT16_MAX;
	static int64_t x120 = -1LL;
	volatile int64_t t22 = 1528498158071709LL;

	t22 = (x117-((x118*x119)%x120));

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 81864065524LLU;
	int8_t x122 = INT8_MAX;
	static int16_t x123 = INT16_MIN;
	int32_t x124 = -1;
	uint64_t t23 = 461LLU;

	t23 = (x121-((x122*x123)%x124));

	if (t23 != 81864065524LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x129 = INT32_MIN;
	uint32_t x131 = 3416182U;
	static int64_t x132 = -1LL;
	volatile int64_t t24 = -452348440LL;

	t24 = (x129-((x130*x131)%x132));

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x137 = -266451651439451LL;
	uint8_t x138 = 6U;
	int8_t x139 = INT8_MAX;
	int64_t t25 = -22002LL;

	t25 = (x137-((x138*x139)%x140));

	if (t25 != -266451651440213LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x141 = 31966872761175939LL;
	static int32_t x143 = -1;
	uint64_t x144 = 25LLU;
	static volatile uint64_t t26 = 83LLU;

	t26 = (x141-((x142*x143)%x144));

	if (t26 != 31966872761175938LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x147 = 412U;
	int64_t x148 = INT64_MIN;
	static int64_t t27 = 210919026LL;

	t27 = (x145-((x146*x147)%x148));

	if (t27 != 4158762LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x149 = INT16_MIN;
	volatile int64_t x150 = -194LL;
	static uint64_t x152 = UINT64_MAX;
	uint64_t t28 = 26732050007116442LLU;

	t28 = (x149-((x150*x151)%x152));

	if (t28 != 18446744073709520206LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 22209987U;
	int32_t x156 = INT32_MIN;
	uint32_t t29 = 6061U;

	t29 = (x153-((x154*x155)%x156));

	if (t29 != 3621749827U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = UINT16_MAX;
	int64_t x158 = 2LL;
	uint16_t x159 = 1897U;
	int64_t x160 = -1LL;
	int64_t t30 = -1012045181154001LL;

	t30 = (x157-((x158*x159)%x160));

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 69LLU;
	volatile int64_t x164 = INT64_MIN;

	t31 = (x161-((x162*x163)%x164));

	if (t31 != 9223372036854784512LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x165 = UINT8_MAX;
	static int64_t x166 = -239900468LL;
	volatile uint16_t x167 = UINT16_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	int64_t t32 = 266683132LL;

	t32 = (x165-((x166*x167)%x168));

	if (t32 != 255LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = 2123930LL;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MIN;
	volatile int64_t t33 = -238283184LL;

	t33 = (x169-((x170*x171)%x172));

	if (t33 != -2147496294LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x174 = -7LL;
	int8_t x175 = -3;
	volatile int64_t t34 = 3606192913LL;

	t34 = (x173-((x174*x175)%x176));

	if (t34 != 32746LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = -1795130362LL;
	volatile int8_t x184 = INT8_MIN;

	t35 = (x181-((x182*x183)%x184));

	if (t35 != 2147483763LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x185 = 22U;
	int32_t x186 = 8176119;
	int64_t x187 = -1LL;
	volatile int32_t x188 = -1;

	t36 = (x185-((x186*x187)%x188));

	if (t36 != 22LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	static int64_t x191 = -1LL;
	volatile int32_t x192 = INT32_MIN;
	static volatile int64_t t37 = 4537845LL;

	t37 = (x189-((x190*x191)%x192));

	if (t37 != -32641LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = 182512893132LL;
	int16_t x194 = 386;
	int32_t x195 = 171865;
	uint16_t x196 = UINT16_MAX;
	int64_t t38 = -769986LL;

	t38 = (x193-((x194*x195)%x196));

	if (t38 != 182512874662LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x197 = 11U;
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile int64_t x200 = INT64_MIN;
	uint64_t t39 = 660437873186125LLU;

	t39 = (x197-((x198*x199)%x200));

	if (t39 != 10LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = INT64_MIN;
	volatile int64_t x202 = -1LL;
	uint32_t x203 = 12385046U;
	uint64_t x204 = 3599622159LLU;
	uint64_t t40 = 108595LLU;

	t40 = (x201-((x202*x203)%x204));

	if (t40 != 9223372036135517562LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x205 = 21955821035086200LLU;
	uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = -1;
	static int32_t x208 = INT32_MIN;
	static volatile uint64_t t41 = 2898LLU;

	t41 = (x205-((x206*x207)%x208));

	if (t41 != 21955821035086199LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x210 = -1;
	int32_t x211 = INT32_MAX;
	int8_t x212 = INT8_MIN;
	static volatile uint64_t t42 = 1483LLU;

	t42 = (x209-((x210*x211)%x212));

	if (t42 != 167047339LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = -1;
	int64_t x214 = -1LL;
	uint16_t x215 = 2U;
	static int64_t t43 = 196LL;

	t43 = (x213-((x214*x215)%x216));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x217 = 18268008U;
	int8_t x218 = 0;
	static uint16_t x220 = 25U;
	static uint32_t t44 = 10120U;

	t44 = (x217-((x218*x219)%x220));

	if (t44 != 18268008U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x231 = -271180383496395975LL;
	int16_t x232 = INT16_MAX;
	int64_t t45 = -99240583166311596LL;

	t45 = (x229-((x230*x231)%x232));

	if (t45 != -10250LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x233 = INT64_MIN;
	uint16_t x235 = 115U;

	t46 = (x233-((x234*x235)%x236));

	if (t46 != -9223372036854775693LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x237 = UINT16_MAX;
	int8_t x238 = 1;
	int16_t x239 = INT16_MIN;
	int8_t x240 = INT8_MAX;
	int32_t t47 = -230759339;

	t47 = (x237-((x238*x239)%x240));

	if (t47 != 65537) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x242 = 235256LL;
	int16_t x243 = -1;
	int64_t t48 = -289438100886382LL;

	t48 = (x241-((x242*x243)%x244));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x247 = INT16_MAX;
	static int8_t x248 = INT8_MIN;
	volatile uint32_t t49 = 1029181U;

	t49 = (x245-((x246*x247)%x248));

	if (t49 != 126U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x249 = UINT32_MAX;
	volatile int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	static volatile uint32_t t50 = 187U;

	t50 = (x249-((x250*x251)%x252));

	if (t50 != 3221225471U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x253 = 8515046425132691007LLU;
	volatile uint32_t x254 = UINT32_MAX;
	static int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	volatile uint64_t t51 = 681LLU;

	t51 = (x253-((x254*x255)%x256));

	if (t51 != 8515046425132690879LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = -393;
	int8_t x259 = INT8_MAX;

	t52 = (x257-((x258*x259)%x260));

	if (t52 != 4196019815U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x265 = INT16_MAX;
	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = UINT8_MAX;
	uint32_t x268 = UINT32_MAX;
	static volatile uint64_t t53 = 367LLU;

	t53 = (x265-((x266*x267)%x268));

	if (t53 != 18446744069414617342LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x270 = 0;
	static int8_t x271 = -1;
	int32_t x272 = 2542;
	volatile int32_t t54 = 15125774;

	t54 = (x269-((x270*x271)%x272));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x273 = UINT16_MAX;
	volatile int8_t x275 = 1;
	int16_t x276 = 1;
	volatile int64_t t55 = -2148432590542228LL;

	t55 = (x273-((x274*x275)%x276));

	if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x278 = UINT16_MAX;
	static uint8_t x279 = 1U;
	int8_t x280 = -1;
	static int32_t t56 = INT32_MIN;

	t56 = (x277-((x278*x279)%x280));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;
	int16_t x284 = -112;
	int32_t t57 = -1;

	t57 = (x281-((x282*x283)%x284));

	if (t57 != -32753) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x286 = 2LLU;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 79U;

	t58 = (x285-((x286*x287)%x288));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x293 = 105;
	int64_t x295 = -1LL;
	uint32_t x296 = 4342811U;
	static int64_t t59 = -1423841893LL;

	t59 = (x293-((x294*x295)%x296));

	if (t59 != -32663LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x297 = -2;
	int16_t x298 = INT16_MIN;
	static uint8_t x299 = UINT8_MAX;

	t60 = (x297-((x298*x299)%x300));

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = INT64_MAX;
	uint64_t x302 = 576338208268913LLU;
	static volatile uint64_t x303 = UINT64_MAX;

	t61 = (x301-((x302*x303)%x304));

	if (t61 != 9223948375063044720LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	static uint8_t x307 = 89U;
	uint8_t x308 = 10U;
	int32_t t62 = 703;

	t62 = (x305-((x306*x307)%x308));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x313 = -156;
	uint32_t x314 = 59275848U;
	int8_t x315 = INT8_MIN;
	volatile uint32_t t63 = 213077361U;

	t63 = (x313-((x314*x315)%x316));

	if (t63 != 4294966808U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x317 = INT64_MAX;
	static int32_t x318 = INT32_MAX;
	uint8_t x320 = UINT8_MAX;

	t64 = (x317-((x318*x319)%x320));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x325 = -1;
	static uint64_t x326 = 257LLU;
	int32_t x327 = -3;
	uint32_t x328 = UINT32_MAX;
	volatile uint64_t t65 = 1523757018989LLU;

	t65 = (x325-((x326*x327)%x328));

	if (t65 != 18446744069414585090LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x330 = 2;
	uint16_t x331 = 2U;
	volatile int64_t x332 = INT64_MAX;
	volatile int64_t t66 = 2LL;

	t66 = (x329-((x330*x331)%x332));

	if (t66 != -32772LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 1265543303555092045LLU;
	static uint8_t x347 = 89U;
	int8_t x348 = 18;
	volatile uint64_t t67 = 8444LLU;

	t67 = (x345-((x346*x347)%x348));

	if (t67 != 18446744071562067951LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x349 = UINT8_MAX;
	uint32_t x350 = UINT32_MAX;
	int32_t x351 = -1;
	int8_t x352 = INT8_MIN;
	uint32_t t68 = 17385244U;

	t68 = (x349-((x350*x351)%x352));

	if (t68 != 254U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x353 = INT32_MIN;
	uint32_t x354 = UINT32_MAX;
	static volatile int64_t t69 = -2626063898LL;

	t69 = (x353-((x354*x355)%x356));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x358 = 77;
	volatile uint64_t x359 = UINT64_MAX;
	int8_t x360 = -2;
	volatile uint64_t t70 = 56261714LLU;

	t70 = (x357-((x358*x359)%x360));

	if (t70 != 52504635LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x364 = UINT8_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x361-((x362*x363)%x364));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = -1LL;
	int8_t x366 = INT8_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int64_t t72 = 197LL;

	t72 = (x365-((x366*x367)%x368));

	if (t72 != -65LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = 0U;
	int16_t x376 = 3;
	uint32_t t73 = 3U;

	t73 = (x373-((x374*x375)%x376));

	if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x377 = UINT8_MAX;
	static int16_t x378 = -46;
	uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t74 = 14728U;

	t74 = (x377-((x378*x379)%x380));

	if (t74 != 209U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x385 = 14475584LL;
	int8_t x386 = 0;
	uint64_t x387 = 7640628785253892290LLU;
	uint64_t t75 = 1768741492264LLU;

	t75 = (x385-((x386*x387)%x388));

	if (t75 != 14475584LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = UINT16_MAX;
	int64_t x391 = -603387039LL;
	int64_t t76 = -121LL;

	t76 = (x389-((x390*x391)%x392));

	if (t76 != -603321504LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x397 = -1;
	uint8_t x398 = 62U;
	uint32_t x399 = 3191604U;
	static int64_t x400 = INT64_MAX;
	static volatile int64_t t77 = 3697389258LL;

	t77 = (x397-((x398*x399)%x400));

	if (t77 != -197879449LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x401 = INT8_MIN;
	uint64_t x402 = 709404892923659LLU;
	int16_t x403 = INT16_MIN;
	static int8_t x404 = INT8_MIN;
	static uint64_t t78 = 15622238LLU;

	t78 = (x401-((x402*x403)%x404));

	if (t78 != 4799035457612906368LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x405 = 236645789LLU;
	static uint64_t x406 = 182764781992803881LLU;
	static volatile int16_t x407 = 14;
	int32_t x408 = INT32_MIN;

	t79 = (x405-((x406*x407)%x408));

	if (t79 != 15888037126046943071LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x430 = 1;
	uint64_t x431 = 0LLU;
	int32_t x432 = -1;
	uint64_t t80 = 109848107LLU;

	t80 = (x429-((x430*x431)%x432));

	if (t80 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x438 = INT8_MIN;
	int32_t x439 = 0;
	int64_t x440 = 85719LL;
	static uint64_t t81 = UINT64_MAX;

	t81 = (x437-((x438*x439)%x440));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = 2;
	uint8_t x443 = 0U;
	uint32_t x444 = 4180888U;
	volatile uint32_t t82 = 8U;

	t82 = (x441-((x442*x443)%x444));

	if (t82 != 4294934528U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x445 = INT64_MIN;
	int64_t x446 = -7090995579LL;
	uint64_t x447 = 373234694285249434LLU;
	static int32_t x448 = 271;

	t83 = (x445-((x446*x447)%x448));

	if (t83 != 9223372036854775696LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x449 = UINT8_MAX;
	int8_t x450 = -3;
	volatile uint32_t t84 = 11446U;

	t84 = (x449-((x450*x451)%x452));

	if (t84 != 252U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x453 = INT8_MIN;
	volatile uint64_t x454 = 193906846519LLU;
	uint16_t x455 = 1U;
	int64_t x456 = INT64_MIN;
	volatile uint64_t t85 = 46LLU;

	t85 = (x453-((x454*x455)%x456));

	if (t85 != 18446743879802704969LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = -1LL;
	int16_t x458 = -11;
	static volatile int16_t x460 = -1;

	t86 = (x457-((x458*x459)%x460));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x461 = 1486U;
	int16_t x462 = INT16_MIN;
	uint8_t x463 = 1U;
	int8_t x464 = -1;
	static int32_t t87 = 1205593;

	t87 = (x461-((x462*x463)%x464));

	if (t87 != 1486) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x470 = -1;
	int8_t x471 = 1;
	int64_t t88 = -1242541782620LL;

	t88 = (x469-((x470*x471)%x472));

	if (t88 != 9944LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x473 = 62LLU;
	int8_t x475 = -1;
	int64_t x476 = INT64_MIN;
	uint64_t t89 = 261563949518139600LLU;

	t89 = (x473-((x474*x475)%x476));

	if (t89 != 18446744069414585175LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x477 = 20182U;
	uint64_t x478 = 109435086713463LLU;
	volatile int64_t x479 = INT64_MIN;
	volatile int64_t x480 = -1LL;
	uint64_t t90 = 20283469450384912LLU;

	t90 = (x477-((x478*x479)%x480));

	if (t90 != 9223372036854795990LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x481 = INT8_MIN;
	static int64_t x482 = -1LL;
	uint8_t x483 = 6U;
	int8_t x484 = -1;
	volatile int64_t t91 = 2034495320167241LL;

	t91 = (x481-((x482*x483)%x484));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x485 = -10007670001717LL;
	int8_t x486 = -1;
	volatile uint16_t x487 = 5U;
	volatile int64_t x488 = INT64_MIN;
	static volatile int64_t t92 = -418150853LL;

	t92 = (x485-((x486*x487)%x488));

	if (t92 != -10007670001712LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = INT16_MAX;
	int16_t x490 = INT16_MAX;
	static volatile uint16_t x492 = 1341U;
	int32_t t93 = 8;

	t93 = (x489-((x490*x491)%x492));

	if (t93 != 32662) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x493 = INT64_MAX;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 48428279928286134LLU;
	uint16_t x496 = UINT16_MAX;
	uint64_t t94 = 7946293LLU;

	t94 = (x493-((x494*x495)%x496));

	if (t94 != 9223372036854743285LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x498 = -1;
	uint32_t x499 = 426U;
	int8_t x500 = INT8_MIN;
	uint32_t t95 = 1513227U;

	t95 = (x497-((x498*x499)%x500));

	if (t95 != 298U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x505 = INT32_MAX;
	static volatile uint32_t x506 = 10847U;
	uint16_t x507 = 2003U;
	static int8_t x508 = INT8_MIN;
	uint32_t t96 = 3527U;

	t96 = (x505-((x506*x507)%x508));

	if (t96 != 2125757106U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x509 = 1;
	static int8_t x510 = -17;
	static int64_t x512 = 159412997LL;
	volatile int64_t t97 = -59959083LL;

	t97 = (x509-((x510*x511)%x512));

	if (t97 != 205LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x517 = -1814;
	int8_t x520 = -1;

	t98 = (x517-((x518*x519)%x520));

	if (t98 != -1814LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x521 = 2014966LL;
	int64_t x522 = -1LL;
	static volatile uint64_t x523 = 27374993461850650LLU;
	static volatile uint64_t t99 = 71LLU;

	t99 = (x521-((x522*x523)%x524));

	if (t99 != 27374993463865616LLU) { NG(); } else { ; }
	
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

