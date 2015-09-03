#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = 162195LL;
volatile uint32_t x17 = 20U;
int32_t x19 = INT32_MIN;
volatile uint8_t x25 = UINT8_MAX;
volatile uint32_t x27 = UINT32_MAX;
volatile uint16_t x39 = 28U;
static int64_t x43 = -1LL;
static uint8_t x44 = 1U;
static int32_t x53 = INT32_MIN;
int8_t x64 = -58;
int16_t x70 = 1449;
uint64_t x71 = UINT64_MAX;
int64_t t13 = -1117832719890766893LL;
uint64_t x76 = UINT64_MAX;
int64_t x78 = -1LL;
volatile int64_t t18 = -113782393958LL;
static int64_t t20 = -107LL;
int32_t x120 = 26;
static uint8_t x129 = 6U;
static volatile uint64_t t26 = 43536899331341605LLU;
int16_t x141 = 9064;
int16_t x142 = INT16_MAX;
volatile int32_t t27 = -222;
uint64_t t28 = 5970551351279LLU;
int64_t x149 = -16367999LL;
uint64_t t29 = 9734143233LLU;
int8_t x153 = INT8_MIN;
int16_t x156 = -1;
volatile int8_t x159 = INT8_MIN;
uint64_t x166 = 40437457873336LLU;
static int8_t x175 = INT8_MIN;
volatile uint64_t x176 = UINT64_MAX;
static uint16_t x188 = 29664U;
static int32_t x191 = INT32_MIN;
volatile int64_t x193 = -75481218LL;
int32_t x197 = INT32_MIN;
int64_t x205 = INT64_MIN;
int64_t t43 = 1LL;
uint32_t x221 = 6958U;
int16_t x224 = -1;
int64_t x232 = 1LL;
volatile uint64_t t49 = 2029LLU;
int16_t x252 = -1;
int16_t x255 = INT16_MAX;
volatile int32_t t53 = 65;
uint32_t x257 = UINT32_MAX;
static int8_t x261 = INT8_MAX;
uint16_t x269 = 61U;
uint32_t x271 = 5U;
volatile int8_t x277 = INT8_MAX;
volatile int8_t x278 = INT8_MIN;
uint32_t x279 = 87984U;
int16_t x285 = INT16_MIN;
int32_t x294 = -1;
volatile int32_t t63 = 52003;
volatile uint8_t x299 = 47U;
int16_t x303 = INT16_MIN;
volatile uint64_t x304 = UINT64_MAX;
int32_t x311 = 184121;
int64_t x312 = -6LL;
volatile int64_t t67 = 83114604LL;
static int32_t x319 = -1;
volatile int32_t t68 = 1195401;
uint16_t x324 = 19173U;
volatile int32_t t70 = 391874484;
int8_t x330 = -1;
int8_t x332 = 28;
static volatile int32_t t71 = -3015;
static volatile uint8_t x334 = UINT8_MAX;
static uint16_t x342 = 1702U;
int32_t t74 = 5;
int32_t x347 = -1;
int8_t x348 = -8;
uint64_t t76 = 313771728475LLU;
static volatile uint64_t t77 = 3131LLU;
volatile int64_t t78 = -919274644486LL;
volatile uint64_t x385 = 22622156579LLU;
int8_t x387 = -1;
static int16_t x389 = 6200;
int8_t x391 = -1;
int64_t x392 = 294728189651527LL;
volatile int64_t t82 = 1LL;
int8_t x393 = -1;
volatile int16_t x398 = INT16_MIN;
int16_t x403 = -1;
volatile uint64_t t85 = 518202468454142LLU;
int64_t x407 = INT64_MAX;
int8_t x413 = INT8_MAX;
int32_t t87 = 28318741;
static uint16_t x426 = 23363U;
int8_t x429 = -1;
int64_t t91 = 91907LL;
int64_t t92 = 591204157677LL;
volatile int8_t x462 = 1;
uint64_t x477 = 10604448862216LLU;


void f0(void) {
	volatile uint16_t x1 = 181U;
	volatile int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 671U;

	t0 = ((x1-(x2==x3))*x4);

	if (t0 != 4294967116U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 526U;
	volatile int64_t t1 = 255LL;

	t1 = ((x9-(x10==x11))*x12);

	if (t1 != -348311110287360LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 0;
	uint16_t x14 = 22882U;
	int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t2 = 389614;

	t2 = ((x13-(x14==x15))*x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 1U;
	static int16_t x20 = 3;
	volatile uint32_t t3 = 1675805750U;

	t3 = ((x17-(x18==x19))*x20);

	if (t3 != 60U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = 0;
	uint16_t x22 = 713U;
	volatile int16_t x23 = INT16_MIN;
	static int8_t x24 = INT8_MAX;
	int32_t t4 = -937;

	t4 = ((x21-(x22==x23))*x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = INT32_MIN;
	static int8_t x28 = -11;
	int32_t t5 = -377;

	t5 = ((x25-(x26==x27))*x28);

	if (t5 != -2805) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 24U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = 7091;
	int16_t x32 = INT16_MIN;
	volatile uint32_t t6 = 1482U;

	t6 = ((x29-(x30==x31))*x32);

	if (t6 != 4294180864U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -634;
	int64_t x36 = 1LL;
	int64_t t7 = 12875172LL;

	t7 = ((x33-(x34==x35))*x36);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static uint32_t x38 = 6903U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -10659;

	t8 = ((x37-(x38==x39))*x40);

	if (t8 != 4194304) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	int32_t t9 = -14108;

	t9 = ((x41-(x42==x43))*x44);

	if (t9 != -129) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 6U;
	int32_t x46 = 33863;
	volatile int64_t x47 = INT64_MAX;
	uint64_t x48 = 17394347483LLU;
	uint64_t t10 = 24LLU;

	t10 = ((x45-(x46==x47))*x48);

	if (t10 != 104366084898LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x54 = 99U;
	int8_t x55 = -1;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t11 = 153498LLU;

	t11 = ((x53-(x54==x55))*x56);

	if (t11 != 2147483648LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	uint32_t x62 = 269U;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t t12 = -40807477;

	t12 = ((x61-(x62==x63))*x64);

	if (t12 != 58) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 0U;
	int64_t x72 = INT64_MAX;

	t13 = ((x69-(x70==x71))*x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x73 = 50;
	int8_t x74 = -22;
	int8_t x75 = -9;
	uint64_t t14 = 903322250297LLU;

	t14 = ((x73-(x74==x75))*x76);

	if (t14 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -14;
	int32_t x79 = 74531;
	volatile uint8_t x80 = 11U;
	int32_t t15 = 1294633;

	t15 = ((x77-(x78==x79))*x80);

	if (t15 != -154) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = 20;
	static int64_t x84 = -1LL;
	int64_t t16 = 29LL;

	t16 = ((x81-(x82==x83))*x84);

	if (t16 != -127LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = -14;
	int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MAX;
	int8_t x92 = -1;
	volatile int32_t t17 = 2204;

	t17 = ((x89-(x90==x91))*x92);

	if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = 13;
	volatile int32_t x94 = INT32_MAX;
	uint8_t x95 = 0U;
	int64_t x96 = -488446591722LL;

	t18 = ((x93-(x94==x95))*x96);

	if (t18 != -6349805692386LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = -1LL;
	int8_t x103 = -1;
	int64_t x104 = -250LL;
	int64_t t19 = -552LL;

	t19 = ((x101-(x102==x103))*x104);

	if (t19 != -16383500LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x105 = -263LL;
	uint16_t x106 = UINT16_MAX;
	int32_t x107 = -21247;
	int16_t x108 = 11;

	t20 = ((x105-(x106==x107))*x108);

	if (t20 != -2893LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = -13;
	uint16_t x110 = UINT16_MAX;
	volatile int32_t x111 = -1;
	uint16_t x112 = 14154U;
	volatile int32_t t21 = 0;

	t21 = ((x109-(x110==x111))*x112);

	if (t21 != -184002) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = 9;
	int32_t x114 = -158159791;
	uint64_t x115 = 1298LLU;
	int32_t x116 = 0;
	volatile int32_t t22 = 186;

	t22 = ((x113-(x114==x115))*x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = 16U;
	uint32_t t23 = 104U;

	t23 = ((x117-(x118==x119))*x120);

	if (t23 != 4294967270U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = UINT64_MAX;
	static int32_t x122 = -1;
	volatile int64_t x123 = -1LL;
	static int32_t x124 = -1;
	uint64_t t24 = 8839009119725214LLU;

	t24 = ((x121-(x122==x123))*x124);

	if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t25 = 202975679;

	t25 = ((x129-(x130==x131))*x132);

	if (t25 != 762) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 438U;
	int64_t x134 = -15606559LL;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 6LLU;

	t26 = ((x133-(x134==x135))*x136);

	if (t26 != 2628LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x143 = INT16_MIN;
	uint8_t x144 = UINT8_MAX;

	t27 = ((x141-(x142==x143))*x144);

	if (t27 != 2311320) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = UINT64_MAX;
	volatile uint32_t x146 = 4867800U;
	int8_t x147 = INT8_MIN;
	int32_t x148 = -455;

	t28 = ((x145-(x146==x147))*x148);

	if (t28 != 455LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x150 = INT64_MIN;
	uint16_t x151 = 29469U;
	uint64_t x152 = 30143228410308446LLU;

	t29 = ((x149-(x150==x151))*x152);

	if (t29 != 10731262809143253598LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x154 = -1LL;
	int16_t x155 = -4;
	volatile int32_t t30 = -7;

	t30 = ((x153-(x154==x155))*x156);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = -1;
	int64_t x158 = 24200829381714LL;
	volatile int16_t x160 = INT16_MAX;
	volatile int32_t t31 = 23205173;

	t31 = ((x157-(x158==x159))*x160);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x161 = INT16_MAX;
	int64_t x162 = -10LL;
	int64_t x163 = -1LL;
	int64_t x164 = -1LL;
	int64_t t32 = 34896928674707102LL;

	t32 = ((x161-(x162==x163))*x164);

	if (t32 != -32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x165 = 0;
	int16_t x167 = INT16_MAX;
	uint64_t x168 = 11507471590120726LLU;
	static volatile uint64_t t33 = 27335413415096LLU;

	t33 = ((x165-(x166==x167))*x168);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = 0U;
	static volatile int32_t x170 = -222228235;
	volatile int16_t x171 = -1;
	int8_t x172 = -1;
	volatile int32_t t34 = -551011273;

	t34 = ((x169-(x170==x171))*x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x173 = INT8_MIN;
	int16_t x174 = -114;
	volatile uint64_t t35 = 760209233089312534LLU;

	t35 = ((x173-(x174==x175))*x176);

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	volatile uint16_t x179 = 6U;
	uint32_t x180 = UINT32_MAX;
	static uint32_t t36 = 0U;

	t36 = ((x177-(x178==x179))*x180);

	if (t36 != 128U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MAX;
	uint16_t x182 = UINT16_MAX;
	static int16_t x183 = INT16_MIN;
	uint16_t x184 = 36U;
	int32_t t37 = 343515475;

	t37 = ((x181-(x182==x183))*x184);

	if (t37 != 4572) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = 5348U;
	static int8_t x186 = INT8_MAX;
	int32_t x187 = 57;
	volatile int32_t t38 = 33307533;

	t38 = ((x185-(x186==x187))*x188);

	if (t38 != 158643072) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x189 = -47;
	uint32_t x190 = 180089824U;
	int16_t x192 = -1333;
	int32_t t39 = 13;

	t39 = ((x189-(x190==x191))*x192);

	if (t39 != 62651) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x194 = -1;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static volatile int64_t t40 = -31098214084705362LL;

	t40 = ((x193-(x194==x195))*x196);

	if (t40 != 162094681386123264LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	volatile uint64_t x200 = 1444735272600LLU;
	volatile uint64_t t41 = 3601849227LLU;

	t41 = ((x197-(x198==x199))*x200);

	if (t41 != 14954374859591778304LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x201 = 3;
	int16_t x202 = INT16_MIN;
	static uint16_t x203 = 9483U;
	volatile int64_t x204 = -57478726439482798LL;
	volatile int64_t t42 = -2516537887LL;

	t42 = ((x201-(x202==x203))*x204);

	if (t42 != -172436179318448394LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x206 = INT64_MIN;
	static volatile int32_t x207 = INT32_MAX;
	static uint8_t x208 = 0U;

	t43 = ((x205-(x206==x207))*x208);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x209 = 103U;
	int64_t x210 = INT64_MIN;
	volatile int16_t x211 = -1;
	volatile uint8_t x212 = 13U;
	int32_t t44 = -1236;

	t44 = ((x209-(x210==x211))*x212);

	if (t44 != 1339) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = UINT32_MAX;
	static int64_t x219 = INT64_MIN;
	uint32_t x220 = 134807460U;
	volatile uint32_t t45 = 17U;

	t45 = ((x217-(x218==x219))*x220);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x222 = 2U;
	int8_t x223 = INT8_MIN;
	volatile uint32_t t46 = 1373511340U;

	t46 = ((x221-(x222==x223))*x224);

	if (t46 != 4294960338U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -747;
	int16_t x226 = 1556;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MAX;
	volatile int32_t t47 = 15615;

	t47 = ((x225-(x226==x227))*x228);

	if (t47 != -24476949) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = -1;
	int16_t x230 = -52;
	int16_t x231 = -1;
	volatile int64_t t48 = -19374642259228LL;

	t48 = ((x229-(x230==x231))*x232);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x237 = 49344744499944LLU;
	volatile int64_t x238 = INT64_MIN;
	static int8_t x239 = INT8_MAX;
	volatile int16_t x240 = -1021;

	t49 = ((x237-(x238==x239))*x240);

	if (t49 != 18396363089575108792LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = 0;
	static uint16_t x242 = 53U;
	volatile uint16_t x243 = 1U;
	uint64_t x244 = 36LLU;
	uint64_t t50 = 9414207293LLU;

	t50 = ((x241-(x242==x243))*x244);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = -1;
	uint32_t x246 = 115559093U;
	uint32_t x247 = 1097702U;
	int16_t x248 = INT16_MIN;
	int32_t t51 = 16989276;

	t51 = ((x245-(x246==x247))*x248);

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 38LL;
	uint32_t x250 = 353U;
	int16_t x251 = INT16_MIN;
	volatile int64_t t52 = -51263590752LL;

	t52 = ((x249-(x250==x251))*x252);

	if (t52 != -38LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = 9;
	int8_t x256 = INT8_MAX;

	t53 = ((x253-(x254==x255))*x256);

	if (t53 != 4161409) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x258 = 2;
	uint32_t x259 = 260434817U;
	int64_t x260 = -1LL;
	volatile int64_t t54 = 119016623LL;

	t54 = ((x257-(x258==x259))*x260);

	if (t54 != -4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x262 = 435084U;
	int64_t x263 = INT64_MAX;
	volatile int32_t x264 = -1;
	int32_t t55 = -23957326;

	t55 = ((x261-(x262==x263))*x264);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x265 = 526467U;
	volatile uint64_t x266 = 205563309793LLU;
	int64_t x267 = INT64_MIN;
	static volatile uint16_t x268 = UINT16_MAX;
	volatile uint32_t t56 = 125106U;

	t56 = ((x265-(x266==x267))*x268);

	if (t56 != 142276477U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x270 = INT64_MAX;
	volatile int8_t x272 = -8;
	int32_t t57 = 12406612;

	t57 = ((x269-(x270==x271))*x272);

	if (t57 != -488) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = 1164U;
	static int64_t x274 = INT64_MIN;
	static uint64_t x275 = 1701791759497838860LLU;
	int8_t x276 = INT8_MAX;
	int32_t t58 = 0;

	t58 = ((x273-(x274==x275))*x276);

	if (t58 != 147828) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x280 = UINT16_MAX;
	int32_t t59 = 6003476;

	t59 = ((x277-(x278==x279))*x280);

	if (t59 != 8322945) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = -1;
	int32_t t60 = -5761;

	t60 = ((x281-(x282==x283))*x284);

	if (t60 != 32769) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x286 = -18;
	volatile uint16_t x287 = 1U;
	int32_t x288 = -1;
	static int32_t t61 = -13743;

	t61 = ((x285-(x286==x287))*x288);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x289 = 99560715155417341LLU;
	uint32_t x290 = 4139U;
	static uint64_t x291 = UINT64_MAX;
	uint8_t x292 = UINT8_MAX;
	uint64_t t62 = 3497424LLU;

	t62 = ((x289-(x290==x291))*x292);

	if (t62 != 6941238290921870339LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MAX;
	int8_t x295 = -1;
	int16_t x296 = -1;

	t63 = ((x293-(x294==x295))*x296);

	if (t63 != -126) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = 89879352LL;
	static int64_t x298 = INT64_MAX;
	int32_t x300 = INT32_MAX;
	int64_t t64 = 649185214215818LL;

	t64 = ((x297-(x298==x299))*x300);

	if (t64 != 193014438622956744LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = -1;
	uint64_t t65 = 140659781037747LLU;

	t65 = ((x301-(x302==x303))*x304);

	if (t65 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = 511;
	int8_t x307 = 0;
	static int8_t x308 = -1;
	int32_t t66 = 6742;

	t66 = ((x305-(x306==x307))*x308);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -1;
	int8_t x310 = -3;

	t67 = ((x309-(x310==x311))*x312);

	if (t67 != 6LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	volatile int32_t x320 = 27;

	t68 = ((x317-(x318==x319))*x320);

	if (t68 != -3456) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = UINT8_MAX;
	uint32_t x322 = 234611370U;
	uint8_t x323 = UINT8_MAX;
	static volatile int32_t t69 = -43560;

	t69 = ((x321-(x322==x323))*x324);

	if (t69 != 4889115) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x325 = 198U;
	int64_t x326 = -33470LL;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MAX;

	t70 = ((x325-(x326==x327))*x328);

	if (t70 != 6487866) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1426;
	int8_t x331 = -1;

	t71 = ((x329-(x330==x331))*x332);

	if (t71 != -39956) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -1;
	volatile uint16_t x335 = 11586U;
	int8_t x336 = 29;
	int32_t t72 = -1;

	t72 = ((x333-(x334==x335))*x336);

	if (t72 != -29) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = 1996;
	int8_t x338 = -1;
	volatile uint32_t x339 = 2416U;
	uint16_t x340 = 20028U;
	int32_t t73 = -63512180;

	t73 = ((x337-(x338==x339))*x340);

	if (t73 != 39975888) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -195;
	static uint16_t x343 = 3U;
	int16_t x344 = 167;

	t74 = ((x341-(x342==x343))*x344);

	if (t74 != -32565) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x345 = INT16_MIN;
	uint64_t x346 = UINT64_MAX;
	static volatile int32_t t75 = -3856;

	t75 = ((x345-(x346==x347))*x348);

	if (t75 != 262152) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x353 = UINT64_MAX;
	int16_t x354 = INT16_MIN;
	int8_t x355 = -1;
	volatile int16_t x356 = -246;

	t76 = ((x353-(x354==x355))*x356);

	if (t76 != 246LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x357 = INT16_MIN;
	static uint64_t x358 = 878949642928525606LLU;
	int16_t x359 = 8655;
	uint64_t x360 = UINT64_MAX;

	t77 = ((x357-(x358==x359))*x360);

	if (t77 != 32768LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = -4LL;
	int64_t x366 = 27LL;
	int64_t x367 = INT64_MIN;
	static int8_t x368 = INT8_MAX;

	t78 = ((x365-(x366==x367))*x368);

	if (t78 != -508LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = 94U;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = 204928U;
	volatile int64_t x372 = 64LL;
	volatile int64_t t79 = 787303684308LL;

	t79 = ((x369-(x370==x371))*x372);

	if (t79 != 6016LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x381 = INT32_MAX;
	int8_t x382 = INT8_MIN;
	static int16_t x383 = -1;
	int8_t x384 = -1;
	int32_t t80 = 90472279;

	t80 = ((x381-(x382==x383))*x384);

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x386 = 1U;
	int16_t x388 = -1;
	volatile uint64_t t81 = 1878688LLU;

	t81 = ((x385-(x386==x387))*x388);

	if (t81 != 18446744051087395037LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x390 = INT8_MAX;

	t82 = ((x389-(x390==x391))*x392);

	if (t82 != 1827314775839467400LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x394 = INT32_MAX;
	static volatile uint64_t x395 = UINT64_MAX;
	static int32_t x396 = INT32_MAX;
	static volatile int32_t t83 = 3973;

	t83 = ((x393-(x394==x395))*x396);

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int8_t x399 = INT8_MAX;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t84 = -69994412;

	t84 = ((x397-(x398==x399))*x400);

	if (t84 != -32640) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = INT64_MIN;
	uint64_t x402 = 16664087014LLU;
	uint64_t x404 = UINT64_MAX;

	t85 = ((x401-(x402==x403))*x404);

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x405 = 201U;
	volatile int16_t x406 = 2018;
	static uint32_t x408 = UINT32_MAX;
	uint32_t t86 = 24U;

	t86 = ((x405-(x406==x407))*x408);

	if (t86 != 4294967095U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x414 = 37045;
	uint32_t x415 = UINT32_MAX;
	int16_t x416 = -5509;

	t87 = ((x413-(x414==x415))*x416);

	if (t87 != -699643) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = 143;
	volatile int16_t x418 = INT16_MAX;
	int32_t x419 = 81;
	uint16_t x420 = 6U;
	int32_t t88 = -545199038;

	t88 = ((x417-(x418==x419))*x420);

	if (t88 != 858) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x425 = UINT64_MAX;
	static volatile uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = INT32_MIN;
	uint64_t t89 = 393523409354LLU;

	t89 = ((x425-(x426==x427))*x428);

	if (t89 != 2147483648LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	static int8_t x432 = INT8_MAX;
	volatile int32_t t90 = 466;

	t90 = ((x429-(x430==x431))*x432);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = INT16_MIN;
	int8_t x434 = -20;
	static volatile int16_t x435 = 458;
	static int64_t x436 = 20256LL;

	t91 = ((x433-(x434==x435))*x436);

	if (t91 != -663748608LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x441 = -1LL;
	static int16_t x442 = -1105;
	int64_t x443 = 1LL;
	uint8_t x444 = 87U;

	t92 = ((x441-(x442==x443))*x444);

	if (t92 != -87LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x449 = 438106634LLU;
	int64_t x450 = 959995LL;
	int8_t x451 = 31;
	static uint64_t x452 = 1108842865644138248LLU;
	volatile uint64_t t93 = 1LLU;

	t93 = ((x449-(x450==x451))*x452);

	if (t93 != 7436220981217142352LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x453 = 19U;
	static uint64_t x454 = 86416953451295LLU;
	int16_t x455 = INT16_MIN;
	uint32_t x456 = 1U;
	uint32_t t94 = 7372634U;

	t94 = ((x453-(x454==x455))*x456);

	if (t94 != 19U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = -1;
	uint64_t x463 = 7874322148944647655LLU;
	uint16_t x464 = 2832U;
	volatile int32_t t95 = 745554;

	t95 = ((x461-(x462==x463))*x464);

	if (t95 != -2832) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	int32_t x467 = INT32_MIN;
	uint64_t x468 = 4716326194899025626LLU;
	uint64_t t96 = 1961455959273292878LLU;

	t96 = ((x465-(x466==x467))*x468);

	if (t96 != 13730417878810525990LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x469 = -1;
	static int8_t x470 = INT8_MIN;
	uint32_t x471 = 1615U;
	uint64_t x472 = 213385297LLU;
	uint64_t t97 = 7947LLU;

	t97 = ((x469-(x470==x471))*x472);

	if (t97 != 18446744073496166319LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = INT64_MIN;
	static volatile uint64_t x474 = 2151450790392LLU;
	static uint16_t x475 = 20572U;
	static volatile uint64_t x476 = UINT64_MAX;
	uint64_t t98 = 406881967273LLU;

	t98 = ((x473-(x474==x475))*x476);

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x478 = 10U;
	static uint32_t x479 = 27632U;
	uint64_t x480 = UINT64_MAX;
	uint64_t t99 = 1LLU;

	t99 = ((x477-(x478==x479))*x480);

	if (t99 != 18446733469260689400LLU) { NG(); } else { ; }
	
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

