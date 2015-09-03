#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile uint32_t x10 = 225278U;
int8_t x12 = INT8_MAX;
volatile uint32_t t2 = 995193831U;
volatile int64_t t3 = -1LL;
volatile uint8_t x23 = 102U;
static int32_t t5 = 26;
static uint32_t x26 = UINT32_MAX;
int8_t x33 = -1;
volatile int64_t x36 = INT64_MIN;
volatile uint16_t x38 = UINT16_MAX;
int64_t x42 = INT64_MIN;
int16_t x45 = INT16_MIN;
int16_t x52 = INT16_MIN;
uint64_t x58 = 82LLU;
int64_t x64 = 2948401068958186552LL;
int32_t x66 = -1;
volatile int64_t x77 = 1LL;
int64_t x80 = INT64_MIN;
int16_t x89 = 1;
uint16_t x97 = 11619U;
volatile int64_t x99 = -179498LL;
int32_t x101 = -14;
int64_t t23 = 327LL;
int64_t x107 = -2466LL;
static uint32_t x114 = UINT32_MAX;
int32_t x117 = INT32_MAX;
int8_t x123 = INT8_MIN;
volatile uint32_t t28 = 9U;
int64_t x127 = -687815085LL;
int64_t t29 = -44017077552656LL;
int8_t x129 = 3;
volatile int16_t x133 = 8148;
static volatile int8_t x138 = -1;
static uint8_t x145 = 6U;
static volatile uint16_t x157 = UINT16_MAX;
uint32_t x170 = 3180075U;
volatile int16_t x173 = INT16_MIN;
volatile int16_t x175 = -1;
int64_t x176 = -1LL;
int64_t x184 = 3730905783553LL;
int32_t x187 = 155262;
int8_t x188 = 1;
volatile int32_t t40 = -1;
int8_t x195 = -1;
volatile int32_t x196 = INT32_MIN;
volatile uint16_t x197 = 143U;
volatile int32_t x199 = INT32_MIN;
volatile uint16_t x206 = 5009U;
uint16_t x209 = 2836U;
int64_t x215 = INT64_MAX;
uint32_t x217 = UINT32_MAX;
uint8_t x221 = 2U;
int64_t x236 = INT64_MIN;
static volatile uint64_t t53 = 16281456244LLU;
volatile int64_t x243 = INT64_MIN;
uint64_t x246 = 701183299LLU;
volatile uint64_t t55 = 1056LLU;
volatile int8_t x251 = -17;
static uint64_t t57 = 50753140001251LLU;
volatile uint16_t x259 = 166U;
uint32_t x262 = 999087U;
uint32_t t61 = 10U;
int16_t x274 = INT16_MIN;
int64_t x276 = -1LL;
int64_t x281 = 25759LL;
static int8_t x285 = INT8_MIN;
uint64_t x301 = 76161LLU;
static int8_t x303 = -1;
static uint16_t x310 = 330U;
int8_t x311 = -51;
volatile int64_t t72 = -5LL;
uint64_t x322 = UINT64_MAX;
volatile int32_t x332 = -31;
uint64_t x333 = 51902LLU;
static uint8_t x334 = 2U;
int32_t t78 = -1;
uint32_t x345 = UINT32_MAX;
uint8_t x347 = UINT8_MAX;
uint64_t x348 = UINT64_MAX;
int16_t x350 = INT16_MAX;
int64_t x354 = INT64_MIN;
int64_t t81 = -1LL;
static volatile int16_t x361 = INT16_MIN;
uint16_t x362 = 2U;
int16_t x368 = 3049;
uint32_t x372 = UINT32_MAX;
uint32_t x373 = 7314933U;
uint64_t x375 = 3242635058676465534LLU;
static int8_t x379 = -1;
volatile int64_t x383 = -1LL;
static volatile uint16_t x385 = 2847U;
int32_t x388 = INT32_MIN;
int8_t x390 = -1;
static int8_t x396 = INT8_MAX;
static volatile uint64_t t90 = 3284LLU;
int16_t x397 = INT16_MIN;
int32_t x402 = -1;
int64_t t94 = -2489LL;
static uint16_t x415 = 596U;
int8_t x417 = 2;
int32_t t97 = -11975;
volatile int64_t x427 = INT64_MAX;
static volatile uint64_t t98 = 1LLU;
uint64_t x431 = 721558914LLU;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint8_t x2 = 0U;
	static int16_t x4 = 381;
	static int64_t t0 = -668163947LL;

	t0 = (x1+((x2%x3)^x4));

	if (t0 != -32387LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static volatile uint32_t x6 = UINT32_MAX;
	volatile uint8_t x7 = 118U;
	int8_t x8 = -10;
	uint32_t t1 = 0U;

	t1 = (x5+((x6%x7)^x8));

	if (t1 != 4294934427U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x11 = INT16_MIN;

	t2 = (x9+((x10%x11)^x12));

	if (t2 != 192385U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -103228;
	volatile int64_t x14 = -1LL;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MAX;

	t3 = (x13+((x14%x15)^x16));

	if (t3 != -135996LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MIN;
	volatile uint32_t x20 = UINT32_MAX;
	volatile int64_t t4 = -87967051LL;

	t4 = (x17+((x18%x19)^x20));

	if (t4 != 4294967294LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int8_t x22 = -1;
	int8_t x24 = INT8_MIN;

	t5 = (x21+((x22%x23)^x24));

	if (t5 != -2147483521) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 592U;
	uint32_t x27 = 14043530U;
	volatile int8_t x28 = 29;
	volatile uint32_t t6 = 52787278U;

	t6 = (x25+((x26%x27)^x28));

	if (t6 != 11691224U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	volatile int32_t x30 = 21;
	uint8_t x31 = 3U;
	uint32_t x32 = UINT32_MAX;
	uint32_t t7 = 0U;

	t7 = (x29+((x30%x31)^x32));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 119946265U;
	int64_t t8 = 30046486212411264LL;

	t8 = (x33+((x34%x35)^x36));

	if (t8 != 9223372036748474519LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1LLU;
	static int32_t x39 = INT32_MAX;
	uint64_t x40 = 26033789806931400LLU;
	static volatile uint64_t t9 = 1564731LLU;

	t9 = (x37+((x38%x39)^x40));

	if (t9 != 26033789806940728LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	volatile uint16_t x43 = 87U;
	volatile uint64_t x44 = 12222635938LLU;
	uint64_t t10 = 10096786367380LLU;

	t10 = (x41+((x42%x43)^x44));

	if (t10 != 18446744061486981236LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	volatile uint16_t x47 = UINT16_MAX;
	volatile uint16_t x48 = 6796U;
	int32_t t11 = -126855038;

	t11 = (x45+((x46%x47)^x48));

	if (t11 != -39565) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 3;
	int64_t x50 = INT64_MAX;
	static uint64_t x51 = 12568109478453LLU;
	volatile uint64_t t12 = 431606LLU;

	t12 = (x49+((x50%x51)^x52));

	if (t12 != 18446743107916534727LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = INT32_MAX;
	int16_t x56 = 5;
	static uint32_t t13 = 63U;

	t13 = (x53+((x54%x55)^x56));

	if (t13 != 32771U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 0;
	int8_t x59 = -1;
	static int32_t x60 = INT32_MAX;
	static volatile uint64_t t14 = 6LLU;

	t14 = (x57+((x58%x59)^x60));

	if (t14 != 2147483565LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int32_t x62 = 24082947;
	int64_t x63 = INT64_MAX;
	volatile int64_t t15 = 76838184LL;

	t15 = (x61+((x62%x63)^x64));

	if (t15 != 2948401068977751610LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int32_t x67 = INT32_MIN;
	volatile int32_t x68 = -11910;
	int32_t t16 = -34;

	t16 = (x65+((x66%x67)^x68));

	if (t16 != 11908) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	static uint16_t x72 = UINT16_MAX;
	volatile uint64_t t17 = 4521647183110081LLU;

	t17 = (x69+((x70%x71)^x72));

	if (t17 != 2147450878LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint64_t x74 = 0LLU;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = 329205630015691LLU;
	uint64_t t18 = 353358920414LLU;

	t18 = (x73+((x74%x75)^x76));

	if (t18 != 329205630015690LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 2U;
	int64_t t19 = 1798LL;

	t19 = (x77+((x78%x79)^x80));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 236825121402451LLU;
	volatile uint64_t x82 = 14027233934401028LLU;
	static int8_t x83 = INT8_MIN;
	int8_t x84 = -1;
	uint64_t t20 = 64351LLU;

	t20 = (x81+((x82%x83)^x84));

	if (t20 != 18432953664896553038LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = -25LL;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 6579907LLU;

	t21 = (x89+((x90%x91)^x92));

	if (t21 != 3LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = INT16_MAX;
	static int64_t x100 = INT64_MIN;
	static volatile int64_t t22 = 49075765484LL;

	t22 = (x97+((x98%x99)^x100));

	if (t22 != -9223372036854731422LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x102 = 54U;
	static int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MAX;

	t23 = (x101+((x102%x103)^x104));

	if (t23 != 2147483579LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	uint32_t x108 = 21U;
	int64_t t24 = 23774LL;

	t24 = (x105+((x106%x107)^x108));

	if (t24 != -2361LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -6;
	static volatile int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t25 = -420074811;

	t25 = (x109+((x110%x111)^x112));

	if (t25 != -6) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 3U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -11561295235LL;
	int64_t t26 = -58LL;

	t26 = (x113+((x114%x115)^x116));

	if (t26 != -12061024891LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x118 = INT64_MIN;
	uint64_t x119 = 17586995568004265LLU;
	uint64_t x120 = 93887LLU;
	volatile uint64_t t27 = 895236495453828LLU;

	t27 = (x117+((x118%x119)^x120));

	if (t27 != 7786361367984298LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -1;
	int32_t x122 = INT32_MAX;
	uint32_t x124 = 6452660U;

	t28 = (x121+((x122%x123)^x124));

	if (t28 != 6452682U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	volatile int16_t x126 = -88;
	int16_t x128 = INT16_MIN;

	t29 = (x125+((x126%x127)^x128));

	if (t29 != -2147450968LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = INT32_MAX;
	uint32_t x131 = 102735837U;
	volatile int32_t x132 = -2297;
	uint32_t t30 = 30793922U;

	t30 = (x129+((x130%x131)^x132));

	if (t30 != 4202198463U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t31 = -2732;

	t31 = (x133+((x134%x135)^x136));

	if (t31 != 8274) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = 105704;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;
	static int32_t t32 = -31219752;

	t32 = (x137+((x138%x139)^x140));

	if (t32 != 105448) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 3;
	static volatile int32_t x142 = 1;
	uint8_t x143 = 119U;
	int8_t x144 = -7;
	volatile int32_t t33 = 245;

	t33 = (x141+((x142%x143)^x144));

	if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x146 = 52U;
	static int32_t x147 = INT32_MAX;
	int16_t x148 = -1;
	static volatile int32_t t34 = 238652950;

	t34 = (x145+((x146%x147)^x148));

	if (t34 != -47) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = -1;
	volatile int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t35 = 862454033871170823LLU;

	t35 = (x157+((x158%x159)^x160));

	if (t35 != 65535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = -20;
	int8_t x162 = -1;
	int8_t x163 = INT8_MAX;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t36 = 3416313;

	t36 = (x161+((x162%x163)^x164));

	if (t36 != -32788) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 1LLU;
	uint32_t x171 = 2846919U;
	static volatile int32_t x172 = INT32_MAX;
	uint64_t t37 = 21066645815645LLU;

	t37 = (x169+((x170%x171)^x172));

	if (t37 != 2147150492LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x174 = 23484814U;
	volatile int64_t t38 = -12208439LL;

	t38 = (x173+((x174%x175)^x176));

	if (t38 != -23517583LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x181 = 23807LLU;
	volatile int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MAX;
	volatile uint64_t t39 = 27667LLU;

	t39 = (x181+((x182%x183)^x184));

	if (t39 != 18446740342803806720LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = 14;
	volatile int32_t x186 = INT32_MIN;

	t40 = (x185+((x186%x187)^x188));

	if (t40 != -54911) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x189 = -1LL;
	int8_t x190 = -1;
	volatile int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	volatile int64_t t41 = 21378630LL;

	t41 = (x189+((x190%x191)^x192));

	if (t41 != 126LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 13100677LLU;
	int64_t x194 = INT64_MAX;
	uint64_t t42 = 7455481099358014895LLU;

	t42 = (x193+((x194%x195)^x196));

	if (t42 != 18446744071575168645LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x198 = 1479968U;
	int32_t x200 = -1;
	volatile uint32_t t43 = 102278946U;

	t43 = (x197+((x198%x199)^x200));

	if (t43 != 4293487470U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = UINT8_MAX;
	volatile int8_t x202 = INT8_MAX;
	volatile uint64_t x203 = 9LLU;
	uint8_t x204 = 1U;
	uint64_t t44 = 79693873174LLU;

	t44 = (x201+((x202%x203)^x204));

	if (t44 != 255LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = 20882U;
	int64_t x207 = 1LL;
	int16_t x208 = -1;
	volatile int64_t t45 = -44653LL;

	t45 = (x205+((x206%x207)^x208));

	if (t45 != 20881LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = INT8_MAX;
	volatile int8_t x211 = -1;
	static int8_t x212 = 1;
	int32_t t46 = -2683;

	t46 = (x209+((x210%x211)^x212));

	if (t46 != 2837) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MAX;
	int16_t x216 = INT16_MIN;
	static int64_t t47 = -1LL;

	t47 = (x213+((x214%x215)^x216));

	if (t47 != -2147516289LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x218 = -1;
	int16_t x219 = -5650;
	static int8_t x220 = 1;
	static uint32_t t48 = 107U;

	t48 = (x217+((x218%x219)^x220));

	if (t48 != 4294967293U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x222 = UINT8_MAX;
	static int64_t x223 = INT64_MIN;
	int8_t x224 = 1;
	int64_t t49 = 5322268LL;

	t49 = (x221+((x222%x223)^x224));

	if (t49 != 256LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = INT64_MIN;
	static int64_t x228 = -458LL;
	int64_t t50 = 530393570317484LL;

	t50 = (x225+((x226%x227)^x228));

	if (t50 != 2147483317LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x229 = 23427U;
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = -4;
	volatile uint16_t x232 = UINT16_MAX;
	uint32_t t51 = 15509320U;

	t51 = (x229+((x230%x231)^x232));

	if (t51 != 88959U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	static volatile int16_t x234 = -1;
	static uint64_t x235 = 4231LLU;
	volatile uint64_t t52 = 8565875161123753697LLU;

	t52 = (x233+((x234%x235)^x236));

	if (t52 != 9223372036854777312LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x237 = -15;
	uint64_t x238 = 107157942418LLU;
	int32_t x239 = INT32_MIN;
	volatile int32_t x240 = 879067260;

	t53 = (x237+((x238%x239)^x240));

	if (t53 != 106425872607LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = -1615749320LL;
	volatile int8_t x242 = -1;
	static volatile int8_t x244 = 7;
	volatile int64_t t54 = -160473LL;

	t54 = (x241+((x242%x243)^x244));

	if (t54 != -1615749328LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = 16;
	int64_t x247 = 449798208LL;
	uint32_t x248 = 182591938U;

	t55 = (x245+((x246%x247)^x248));

	if (t55 != 68809937LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x249 = -3;
	int64_t x250 = INT64_MIN;
	int16_t x252 = -1;
	static volatile int64_t t56 = 1098093684408780470LL;

	t56 = (x249+((x250%x251)^x252));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = 48670U;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 101512LLU;

	t57 = (x253+((x254%x255)^x256));

	if (t57 != 78358LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -19134;
	static int32_t x258 = 8145300;
	static int8_t x260 = 2;
	volatile int32_t t58 = -806;

	t58 = (x257+((x258%x259)^x260));

	if (t58 != -19120) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = INT32_MIN;
	static int32_t x263 = -1;
	volatile int16_t x264 = INT16_MAX;
	uint32_t t59 = 12U;

	t59 = (x261+((x262%x263)^x264));

	if (t59 != 2148483408U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -8;
	int32_t x267 = INT32_MAX;
	uint16_t x268 = 5U;
	volatile uint32_t t60 = 17U;

	t60 = (x265+((x266%x267)^x268));

	if (t60 != 4294967292U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 1U;
	int32_t x271 = -1;
	uint32_t x272 = 1U;

	t61 = (x269+((x270%x271)^x272));

	if (t61 != 65536U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = -1;
	int8_t x275 = INT8_MAX;
	static int64_t t62 = 22411783181LL;

	t62 = (x273+((x274%x275)^x276));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = -1;
	volatile int8_t x278 = INT8_MAX;
	int8_t x279 = -2;
	int32_t x280 = -1;
	static int32_t t63 = 0;

	t63 = (x277+((x278%x279)^x280));

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x282 = 7;
	volatile uint8_t x283 = 28U;
	uint16_t x284 = 146U;
	int64_t t64 = 4358692008005287LL;

	t64 = (x281+((x282%x283)^x284));

	if (t64 != 25908LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x286 = -1;
	int8_t x287 = INT8_MAX;
	volatile int32_t x288 = -2710;
	int32_t t65 = 1491;

	t65 = (x285+((x286%x287)^x288));

	if (t65 != 2581) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x289 = 10;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	volatile int64_t t66 = 48943133403470LL;

	t66 = (x289+((x290%x291)^x292));

	if (t66 != 10LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = 1;
	uint64_t x294 = 210LLU;
	static volatile int32_t x295 = -146705307;
	int32_t x296 = INT32_MIN;
	uint64_t t67 = 237505866413268LLU;

	t67 = (x293+((x294%x295)^x296));

	if (t67 != 18446744071562068179LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	volatile uint64_t t68 = 41518279043541712LLU;

	t68 = (x297+((x298%x299)^x300));

	if (t68 != 32639LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x302 = INT32_MIN;
	uint32_t x304 = 130885584U;
	uint64_t t69 = 223739944717149LLU;

	t69 = (x301+((x302%x303)^x304));

	if (t69 != 130961745LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x309 = 3;
	int16_t x312 = INT16_MAX;
	volatile int32_t t70 = -2;

	t70 = (x309+((x310%x311)^x312));

	if (t70 != 32746) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = 5;
	uint64_t x315 = 24385LLU;
	int64_t x316 = -1139825060656LL;
	static uint64_t t71 = 145543054169747692LLU;

	t71 = (x313+((x314%x315)^x316));

	if (t71 != 18446742933884490837LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = INT64_MIN;
	static int32_t x318 = INT32_MIN;
	static uint8_t x319 = UINT8_MAX;
	static int64_t x320 = INT64_MIN;

	t72 = (x317+((x318%x319)^x320));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = 3U;
	int32_t x323 = -96283;
	volatile uint16_t x324 = UINT16_MAX;
	uint64_t t73 = 27LLU;

	t73 = (x321+((x322%x323)^x324));

	if (t73 != 100328LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x325 = INT16_MIN;
	volatile int8_t x326 = 1;
	uint8_t x327 = 6U;
	static uint16_t x328 = 149U;
	static int32_t t74 = -1262;

	t74 = (x325+((x326%x327)^x328));

	if (t74 != -32620) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = 8;
	int64_t x330 = -17026119379427781LL;
	int16_t x331 = -1;
	volatile int64_t t75 = -1158LL;

	t75 = (x329+((x330%x331)^x332));

	if (t75 != -23LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t76 = 0LLU;

	t76 = (x333+((x334%x335)^x336));

	if (t76 != 9223372036854827712LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = 49731;
	volatile uint8_t x339 = 14U;
	uint32_t x340 = 12139U;
	uint32_t t77 = 66837438U;

	t77 = (x337+((x338%x339)^x340));

	if (t77 != 44903U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = 6649;
	int16_t x342 = -1;
	static int16_t x343 = INT16_MIN;
	uint8_t x344 = 1U;

	t78 = (x341+((x342%x343)^x344));

	if (t78 != 6647) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x346 = UINT8_MAX;
	static volatile uint64_t t79 = 26278123260505LLU;

	t79 = (x345+((x346%x347)^x348));

	if (t79 != 4294967294LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 916U;
	int64_t x351 = -39373379690LL;
	uint8_t x352 = UINT8_MAX;
	volatile int64_t t80 = -1426523488LL;

	t80 = (x349+((x350%x351)^x352));

	if (t80 != 33428LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x353 = 1U;
	static int32_t x355 = -706;
	uint8_t x356 = 0U;

	t81 = (x353+((x354%x355)^x356));

	if (t81 != -269LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x363 = -30;
	static int64_t x364 = 774500217064845355LL;
	static volatile int64_t t82 = -2LL;

	t82 = (x361+((x362%x363)^x364));

	if (t82 != 774500217064812585LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x365 = 2372U;
	int64_t x366 = INT64_MIN;
	int8_t x367 = -1;
	int64_t t83 = 64809251LL;

	t83 = (x365+((x366%x367)^x368));

	if (t83 != 5421LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x369 = -5;
	static int32_t x370 = -1;
	static int8_t x371 = 1;
	volatile uint32_t t84 = 1872U;

	t84 = (x369+((x370%x371)^x372));

	if (t84 != 4294967290U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x374 = 238U;
	uint16_t x376 = 31846U;
	uint64_t t85 = 474694244352912LLU;

	t85 = (x373+((x374%x375)^x376));

	if (t85 != 7346813LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x377 = 185U;
	static int32_t x378 = -8557298;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t86 = 40;

	t86 = (x377+((x378%x379)^x380));

	if (t86 != 65720) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x381 = 148328560LLU;
	static uint16_t x382 = 592U;
	int16_t x384 = -2;
	volatile uint64_t t87 = 831964LLU;

	t87 = (x381+((x382%x383)^x384));

	if (t87 != 148328558LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x386 = INT8_MIN;
	uint64_t x387 = 62523970LLU;
	volatile uint64_t t88 = 1005LLU;

	t88 = (x385+((x386%x387)^x388));

	if (t88 != 18446744071606425803LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x389 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t89 = 16495156728593465LLU;

	t89 = (x389+((x390%x391)^x392));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x393 = INT32_MIN;
	uint16_t x394 = 74U;
	uint64_t x395 = UINT64_MAX;

	t90 = (x393+((x394%x395)^x396));

	if (t90 != 18446744071562068021LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x398 = -1;
	uint8_t x399 = 62U;
	int16_t x400 = INT16_MIN;
	int32_t t91 = -233971176;

	t91 = (x397+((x398%x399)^x400));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = INT16_MIN;
	int64_t x403 = -1LL;
	static int32_t x404 = -955314;
	volatile int64_t t92 = -1LL;

	t92 = (x401+((x402%x403)^x404));

	if (t92 != -988082LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = -132747815LL;
	uint32_t x406 = 27U;
	uint16_t x407 = 1U;
	int32_t x408 = INT32_MAX;
	volatile int64_t t93 = 6513250383671LL;

	t93 = (x405+((x406%x407)^x408));

	if (t93 != 2014735832LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x409 = INT64_MIN;
	static uint32_t x410 = 176U;
	volatile int16_t x411 = INT16_MIN;
	static int16_t x412 = 874;

	t94 = (x409+((x410%x411)^x412));

	if (t94 != -9223372036854774822LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = 24;
	uint16_t x414 = 2U;
	static int8_t x416 = INT8_MAX;
	int32_t t95 = 2179899;

	t95 = (x413+((x414%x415)^x416));

	if (t95 != 149) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x418 = UINT32_MAX;
	int8_t x419 = -3;
	int8_t x420 = INT8_MAX;
	static uint32_t t96 = 46U;

	t96 = (x417+((x418%x419)^x420));

	if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = 10;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = UINT16_MAX;
	uint16_t x424 = UINT16_MAX;

	t97 = (x421+((x422%x423)^x424));

	if (t97 != -32759) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = INT16_MIN;
	volatile int64_t x426 = INT64_MIN;
	static uint64_t x428 = UINT64_MAX;

	t98 = (x425+((x426%x427)^x428));

	if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = 0;
	uint8_t x430 = 7U;
	static int32_t x432 = 488;
	uint64_t t99 = 65688119LLU;

	t99 = (x429+((x430%x431)^x432));

	if (t99 != 495LLU) { NG(); } else { ; }
	
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

