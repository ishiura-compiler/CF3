#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = 184671LL;
static int32_t x19 = INT32_MAX;
int64_t t4 = -7184LL;
uint32_t x21 = 129961U;
static int32_t x24 = 350;
int64_t x30 = INT64_MIN;
int16_t x33 = INT16_MAX;
volatile int64_t x37 = -1LL;
uint32_t x45 = 18612374U;
int64_t x49 = 972534654230858599LL;
volatile int32_t x58 = -1;
uint64_t x72 = 108179LLU;
int64_t x76 = INT64_MIN;
int32_t t17 = -5473018;
static uint32_t x90 = UINT32_MAX;
int8_t x97 = 0;
int32_t x98 = -1;
volatile int64_t x99 = INT64_MIN;
int16_t x100 = INT16_MAX;
int32_t x105 = -1;
int8_t x106 = -4;
volatile int64_t t21 = -255126538LL;
int64_t x114 = INT64_MIN;
volatile uint64_t t27 = 397LLU;
int32_t x133 = -1;
int32_t x135 = INT32_MAX;
static int32_t x139 = INT32_MAX;
int8_t x141 = -1;
int32_t x142 = 7;
static int16_t x148 = -1;
uint8_t x150 = 1U;
int16_t x152 = INT16_MIN;
uint64_t x153 = UINT64_MAX;
int64_t x154 = 228106060323LL;
int32_t t35 = -184;
volatile int8_t x175 = -1;
int8_t x178 = INT8_MIN;
uint8_t x189 = 2U;
uint64_t x190 = 18196216LLU;
uint64_t t42 = 64913635005156LLU;
static int16_t x199 = 2;
uint32_t x200 = 5627245U;
volatile int64_t x201 = INT64_MIN;
volatile uint64_t t45 = 5641904385235LLU;
volatile uint16_t x213 = UINT16_MAX;
int64_t x230 = 55LL;
int64_t t50 = -52164LL;
uint64_t t51 = 170227536342LLU;
volatile int16_t x249 = INT16_MIN;
static int32_t x252 = -1;
int64_t x253 = -1LL;
static volatile int8_t x257 = INT8_MAX;
int64_t x258 = INT64_MAX;
volatile int64_t x260 = INT64_MAX;
int8_t x266 = INT8_MIN;
static int8_t x270 = INT8_MAX;
volatile int16_t x271 = 0;
volatile int32_t t58 = -41883426;
int32_t x281 = -1;
volatile uint16_t x283 = 367U;
int64_t t62 = 10869145671LL;
static volatile int16_t x289 = 390;
static int64_t t63 = 1LL;
uint32_t x297 = 15U;
uint32_t x300 = UINT32_MAX;
uint64_t t65 = 20LLU;
volatile int16_t x311 = INT16_MAX;
static volatile uint16_t x314 = UINT16_MAX;
volatile int64_t t67 = -128542801LL;
static int32_t t68 = 168;
uint64_t x326 = UINT64_MAX;
uint8_t x327 = 1U;
static uint64_t t70 = 25813182LLU;
volatile int64_t t71 = -571288161896647LL;
int64_t x334 = -42781LL;
int64_t t72 = 200561018703LL;
static volatile int16_t x351 = INT16_MIN;
int8_t x353 = INT8_MAX;
uint64_t t75 = 986302762854LLU;
int64_t x365 = INT64_MAX;
static int16_t x371 = INT16_MIN;
uint16_t x373 = UINT16_MAX;
int32_t x386 = INT32_MAX;
int16_t x390 = 1756;
volatile int64_t x392 = -1LL;
int32_t x396 = -1;
static volatile int16_t x405 = -3227;
int8_t x409 = 1;
volatile int64_t x410 = 3LL;
uint16_t x411 = 14711U;
volatile uint64_t x414 = UINT64_MAX;
volatile int32_t x415 = 115639713;
static volatile int16_t x418 = INT16_MAX;
int16_t x433 = -162;
int8_t x443 = INT8_MAX;
int32_t t93 = -550582;
int16_t x445 = INT16_MIN;
uint64_t x449 = UINT64_MAX;
uint64_t x451 = 27LLU;
volatile int64_t x453 = 68857569588790233LL;
volatile int64_t x465 = INT64_MIN;
uint64_t x466 = 13421035852LLU;
int64_t x472 = -1LL;


void f0(void) {
	static uint8_t x1 = 7U;
	int32_t x2 = INT32_MIN;
	static uint64_t x3 = 7679LLU;
	int8_t x4 = -60;
	static volatile uint64_t t0 = 2301942LLU;

	t0 = ((x1/x2)^(x3+x4));

	if (t0 != 7619LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 5;
	volatile int32_t x6 = 1685178;
	volatile int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -134054509928959LL;

	t1 = ((x5/x6)^(x7+x8));

	if (t1 != -2147298977LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int32_t x10 = 15;
	static int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 4064LLU;

	t2 = ((x9/x10)^(x11+x12));

	if (t2 != 17216961135462191377LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 6555LL;
	volatile uint16_t x14 = 319U;
	int32_t x15 = -12354;
	int16_t x16 = -1;
	volatile int64_t t3 = -1482938412479LL;

	t3 = ((x13/x14)^(x15+x16));

	if (t3 != -12375LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	static int64_t x20 = 178073LL;

	t4 = ((x17/x18)^(x19+x20));

	if (t4 != -72624978815809305LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	static int64_t x23 = 89752LL;
	int64_t t5 = -1719100045591LL;

	t5 = ((x21/x22)^(x23+x24));

	if (t5 != 90102LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 3U;
	int64_t x26 = INT64_MAX;
	static int32_t x27 = -1;
	static int16_t x28 = INT16_MIN;
	int64_t t6 = -356018LL;

	t6 = ((x25/x26)^(x27+x28));

	if (t6 != -32769LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 7531U;
	static int32_t x31 = -1;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 329675628LLU;

	t7 = ((x29/x30)^(x31+x32));

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = INT64_MIN;
	uint32_t x35 = 3U;
	int16_t x36 = -2137;
	volatile int64_t t8 = -546404278142082LL;

	t8 = ((x33/x34)^(x35+x36));

	if (t8 != 4294965162LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x38 = INT16_MIN;
	int32_t x39 = -341;
	static uint32_t x40 = UINT32_MAX;
	int64_t t9 = 68614137242226390LL;

	t9 = ((x37/x38)^(x39+x40));

	if (t9 != 4294966954LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = UINT64_MAX;
	static int32_t x47 = INT32_MIN;
	static int64_t x48 = -1LL;
	volatile uint64_t t10 = 2720737719218LLU;

	t10 = ((x45/x46)^(x47+x48));

	if (t10 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 24U;
	int16_t x52 = -1;
	int64_t t11 = -936507427284401535LL;

	t11 = ((x49/x50)^(x51+x52));

	if (t11 != -7597926986178563LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 125931521LLU;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = -1;
	int16_t x56 = INT16_MAX;
	uint64_t t12 = 15850416707484LLU;

	t12 = ((x53/x54)^(x55+x56));

	if (t12 != 32766LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = 45;

	t13 = ((x57/x58)^(x59+x60));

	if (t13 != -33024) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 7210321U;
	static volatile uint32_t x66 = 25U;
	int8_t x67 = -1;
	uint16_t x68 = 1300U;
	volatile uint32_t t14 = 1U;

	t14 = ((x65/x66)^(x67+x68));

	if (t14 != 287631U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	volatile int32_t x71 = -36784;
	static uint64_t t15 = 326261640861047401LLU;

	t15 = ((x69/x70)^(x71+x72));

	if (t15 != 71394LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = 232;
	static uint32_t x75 = 5U;
	static volatile int64_t t16 = 4512877LL;

	t16 = ((x73/x74)^(x75+x76));

	if (t16 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x81 = INT16_MIN;
	volatile int32_t x82 = INT32_MIN;
	uint16_t x83 = UINT16_MAX;
	int8_t x84 = -1;

	t17 = ((x81/x82)^(x83+x84));

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = -1;
	uint32_t x91 = UINT32_MAX;
	volatile int64_t x92 = 48247907LL;
	volatile int64_t t18 = 190001630921302LL;

	t18 = ((x89/x90)^(x91+x92));

	if (t18 != 4343215203LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t t19 = 3886LL;

	t19 = ((x97/x98)^(x99+x100));

	if (t19 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -1;
	int16_t x102 = 711;
	int64_t x103 = INT64_MIN;
	uint16_t x104 = UINT16_MAX;
	int64_t t20 = 12474597168413LL;

	t20 = ((x101/x102)^(x103+x104));

	if (t20 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x107 = INT64_MAX;
	int64_t x108 = -1923587122744905LL;

	t21 = ((x105/x106)^(x107+x108));

	if (t21 != 9221448449732030902LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = INT64_MIN;
	volatile int16_t x110 = 5649;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 76U;
	int64_t t22 = 2265683422LL;

	t22 = ((x109/x110)^(x111+x112));

	if (t22 != 1632743048431009LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MAX;
	volatile int8_t x115 = 27;
	int32_t x116 = INT32_MIN;
	static volatile int64_t t23 = -75603482111519LL;

	t23 = ((x113/x114)^(x115+x116));

	if (t23 != -2147483621LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -1;
	static int64_t x118 = INT64_MAX;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MIN;
	static volatile int64_t t24 = 7318LL;

	t24 = ((x117/x118)^(x119+x120));

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x121 = 10898234;
	int64_t x122 = INT64_MAX;
	int64_t x123 = 8363632LL;
	static int8_t x124 = INT8_MAX;
	int64_t t25 = 92258LL;

	t25 = ((x121/x122)^(x123+x124));

	if (t25 != 8363759LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = INT64_MIN;
	static volatile uint16_t x126 = 108U;
	static int64_t x127 = -321110630LL;
	int16_t x128 = -1;
	int64_t t26 = 260415949436598LL;

	t26 = ((x125/x126)^(x127+x128));

	if (t26 != 85401592650609893LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 3120986238906805LLU;
	int64_t x130 = INT64_MIN;
	int32_t x131 = -1897;
	int8_t x132 = INT8_MAX;

	t27 = ((x129/x130)^(x131+x132));

	if (t27 != 18446744073709549846LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x134 = UINT16_MAX;
	int16_t x136 = -1;
	int32_t t28 = 1575679;

	t28 = ((x133/x134)^(x135+x136));

	if (t28 != 2147483646) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	int64_t x140 = -1LL;
	int64_t t29 = -125310497150657LL;

	t29 = ((x137/x138)^(x139+x140));

	if (t29 != 2147483646LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x143 = UINT8_MAX;
	volatile uint8_t x144 = 6U;
	static int32_t t30 = -1706;

	t30 = ((x141/x142)^(x143+x144));

	if (t30 != 261) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 24250859450LLU;
	int16_t x146 = -309;
	uint32_t x147 = 3119U;
	volatile uint64_t t31 = 1570LLU;

	t31 = ((x145/x146)^(x147+x148));

	if (t31 != 3118LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x149 = UINT64_MAX;
	static int32_t x151 = 6260;
	static volatile uint64_t t32 = 668454428193968LLU;

	t32 = ((x149/x150)^(x151+x152));

	if (t32 != 26507LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x155 = INT16_MAX;
	int8_t x156 = 50;
	uint64_t t33 = 18347617579006910LLU;

	t33 = ((x153/x154)^(x155+x156));

	if (t33 != 80836368LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	static volatile int64_t x158 = 548608537LL;
	static int64_t x159 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t34 = 9441033LLU;

	t34 = ((x157/x158)^(x159+x160));

	if (t34 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x166 = -1;
	int8_t x167 = INT8_MIN;
	int16_t x168 = 206;

	t35 = ((x165/x166)^(x167+x168));

	if (t35 != -177) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = 333U;
	static int64_t x170 = INT64_MIN;
	uint32_t x171 = 18017U;
	uint32_t x172 = 5U;
	int64_t t36 = 7406793LL;

	t36 = ((x169/x170)^(x171+x172));

	if (t36 != 18022LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MAX;
	uint16_t x176 = 5U;
	int64_t t37 = 17761408574536009LL;

	t37 = ((x173/x174)^(x175+x176));

	if (t37 != -4294967302LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = 15204;
	int8_t x179 = -1;
	int8_t x180 = 1;
	static int32_t t38 = 73174691;

	t38 = ((x177/x178)^(x179+x180));

	if (t38 != -118) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x181 = 766U;
	volatile uint32_t x182 = 3981U;
	int16_t x183 = 10;
	int8_t x184 = INT8_MAX;
	uint32_t t39 = 7U;

	t39 = ((x181/x182)^(x183+x184));

	if (t39 != 137U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = -1;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 22660796U;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t40 = 95032U;

	t40 = ((x185/x186)^(x187+x188));

	if (t40 != 2170144444U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x191 = -63;
	volatile uint8_t x192 = UINT8_MAX;
	volatile uint64_t t41 = 9558271946457568LLU;

	t41 = ((x189/x190)^(x191+x192));

	if (t41 != 192LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x193 = 6175LLU;
	int64_t x194 = INT64_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	int64_t x196 = -3062316838370LL;

	t42 = ((x193/x194)^(x195+x196));

	if (t42 != 18446741011392713245LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = 7U;
	uint16_t x198 = 788U;
	uint32_t t43 = 54U;

	t43 = ((x197/x198)^(x199+x200));

	if (t43 != 5627247U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x202 = 1041331638783411LL;
	static volatile int8_t x203 = 25;
	static uint8_t x204 = 15U;
	int64_t t44 = -1055092LL;

	t44 = ((x201/x202)^(x203+x204));

	if (t44 != -8881LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	uint8_t x207 = 0U;
	uint64_t x208 = UINT64_MAX;

	t45 = ((x205/x206)^(x207+x208));

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 17U;
	int32_t x210 = -6041;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 2U;
	static int64_t t46 = -428333LL;

	t46 = ((x209/x210)^(x211+x212));

	if (t46 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x214 = 9U;
	uint32_t x215 = 25196U;
	volatile uint32_t x216 = 453196993U;
	uint32_t t47 = 6781289U;

	t47 = ((x213/x214)^(x215+x216));

	if (t47 != 453215068U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x222 = -355782961964731461LL;
	static int64_t x223 = -6LL;
	static int64_t x224 = -177203237281LL;
	uint64_t t48 = 1361356331002815LLU;

	t48 = ((x221/x222)^(x223+x224));

	if (t48 != 18446743896506314328LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = 1558LL;
	int64_t x226 = 1233LL;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t49 = 166299572585010LL;

	t49 = ((x225/x226)^(x227+x228));

	if (t49 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MIN;
	int32_t x231 = -1;
	int64_t x232 = INT64_MAX;

	t50 = ((x229/x230)^(x231+x232));

	if (t50 != -9223372036854775213LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = 18028772LLU;
	volatile uint8_t x234 = 29U;
	uint16_t x235 = UINT16_MAX;
	static int64_t x236 = -2465918471LL;

	t51 = ((x233/x234)^(x235+x236));

	if (t51 != 18446744071244311945LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MAX;
	uint16_t x243 = UINT16_MAX;
	volatile uint16_t x244 = 1628U;
	volatile int32_t t52 = 1;

	t52 = ((x241/x242)^(x243+x244));

	if (t52 != -67164) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = -1LL;
	int8_t x247 = 1;
	uint8_t x248 = UINT8_MAX;
	volatile int64_t t53 = -2260167321956403432LL;

	t53 = ((x245/x246)^(x247+x248));

	if (t53 != 2147483904LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x250 = INT8_MAX;
	static uint16_t x251 = 0U;
	volatile int32_t t54 = 3320;

	t54 = ((x249/x250)^(x251+x252));

	if (t54 != 257) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x254 = -13790281;
	volatile int8_t x255 = -1;
	int64_t x256 = INT64_MAX;
	volatile int64_t t55 = -917LL;

	t55 = ((x253/x254)^(x255+x256));

	if (t55 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x259 = UINT64_MAX;
	uint64_t t56 = 119LLU;

	t56 = ((x257/x258)^(x259+x260));

	if (t56 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = -121;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 34687U;
	volatile uint32_t t57 = 175757315U;

	t57 = ((x265/x266)^(x267+x268));

	if (t57 != 1919U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MAX;
	int16_t x272 = INT16_MAX;

	t58 = ((x269/x270)^(x271+x272));

	if (t58 != 32509) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = 28;
	uint16_t x275 = 31U;
	uint16_t x276 = 11929U;
	uint64_t t59 = 1730185692983555258LLU;

	t59 = ((x273/x274)^(x275+x276));

	if (t59 != 658812288346777500LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = 125U;
	int16_t x278 = INT16_MIN;
	volatile int32_t x279 = 879;
	int64_t x280 = -1LL;
	volatile int64_t t60 = 53921503478535LL;

	t60 = ((x277/x278)^(x279+x280));

	if (t60 != 878LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x282 = UINT64_MAX;
	static int64_t x284 = -1576807LL;
	uint64_t t61 = 62222563743LLU;

	t61 = ((x281/x282)^(x283+x284));

	if (t61 != 18446744073707975177LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = INT64_MIN;
	int8_t x287 = -1;
	int8_t x288 = -1;

	t62 = ((x285/x286)^(x287+x288));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = INT64_MIN;
	int32_t x291 = -1;
	int8_t x292 = 21;

	t63 = ((x289/x290)^(x291+x292));

	if (t63 != 20LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x298 = -70;
	uint64_t x299 = 1275LLU;
	uint64_t t64 = 95887119953691976LLU;

	t64 = ((x297/x298)^(x299+x300));

	if (t64 != 4294968570LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = INT32_MAX;
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = 225;
	static uint64_t x308 = UINT64_MAX;

	t65 = ((x305/x306)^(x307+x308));

	if (t65 != 18446744073709486305LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = 18U;
	static int8_t x310 = INT8_MIN;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t66 = -35167820506088544LL;

	t66 = ((x309/x310)^(x311+x312));

	if (t66 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x313 = INT16_MAX;
	static volatile int64_t x315 = INT64_MIN;
	uint32_t x316 = 1671046481U;

	t67 = ((x313/x314)^(x315+x316));

	if (t67 != -9223372035183729327LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = 94666216;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	int32_t x320 = -5861;

	t68 = ((x317/x318)^(x319+x320));

	if (t68 != 26906) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x321 = INT32_MIN;
	uint8_t x322 = 15U;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = 16;
	int32_t t69 = 282;

	t69 = ((x321/x322)^(x323+x324));

	if (t69 != -143165833) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x328 = -1LL;

	t70 = ((x325/x326)^(x327+x328));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = INT8_MIN;
	static uint8_t x330 = 6U;
	int64_t x331 = INT64_MIN;
	volatile uint8_t x332 = 1U;

	t71 = ((x329/x330)^(x331+x332));

	if (t71 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x335 = 32753024;
	int64_t x336 = -1LL;

	t72 = ((x333/x334)^(x335+x336));

	if (t72 != 32753023LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = 50;
	static volatile uint16_t x338 = 215U;
	static uint16_t x339 = 3U;
	volatile int32_t x340 = -1;
	volatile int32_t t73 = -439;

	t73 = ((x337/x338)^(x339+x340));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	int16_t x352 = -1;
	volatile uint64_t t74 = 11379911311367LLU;

	t74 = ((x349/x350)^(x351+x352));

	if (t74 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x354 = 1244735831U;
	int32_t x355 = 1106;
	uint64_t x356 = UINT64_MAX;

	t75 = ((x353/x354)^(x355+x356));

	if (t75 != 1105LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	static int32_t x359 = -1;
	int8_t x360 = INT8_MAX;
	volatile int32_t t76 = -2285;

	t76 = ((x357/x358)^(x359+x360));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x366 = UINT32_MAX;
	volatile int8_t x367 = -2;
	uint8_t x368 = 6U;
	int64_t t77 = 15794LL;

	t77 = ((x365/x366)^(x367+x368));

	if (t77 != 2147483652LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x369 = -1;
	static int32_t x370 = INT32_MAX;
	volatile uint32_t x372 = 808084987U;
	uint32_t t78 = 1395U;

	t78 = ((x369/x370)^(x371+x372));

	if (t78 != 808052219U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x374 = INT16_MAX;
	volatile uint8_t x375 = 18U;
	static int32_t x376 = -1;
	int32_t t79 = -338;

	t79 = ((x373/x374)^(x375+x376));

	if (t79 != 19) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = 1;
	uint8_t x378 = 11U;
	int64_t x379 = INT64_MIN;
	volatile int8_t x380 = 4;
	int64_t t80 = 54287957LL;

	t80 = ((x377/x378)^(x379+x380));

	if (t80 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = -2;
	uint8_t x387 = 31U;
	uint32_t x388 = 2608459U;
	uint32_t t81 = 25841408U;

	t81 = ((x385/x386)^(x387+x388));

	if (t81 != 2608490U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = -1;
	uint16_t x391 = 4U;
	volatile int64_t t82 = 2712545069LL;

	t82 = ((x389/x390)^(x391+x392));

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x393 = 1042U;
	int32_t x394 = INT32_MIN;
	static int8_t x395 = INT8_MIN;
	uint32_t t83 = 30U;

	t83 = ((x393/x394)^(x395+x396));

	if (t83 != 4294967167U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x397 = 1;
	static int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	volatile uint16_t x400 = 969U;
	volatile int32_t t84 = -5747;

	t84 = ((x397/x398)^(x399+x400));

	if (t84 != 968) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x401 = -1969;
	uint16_t x402 = 7U;
	volatile int32_t x403 = 624378626;
	int8_t x404 = -1;
	int32_t t85 = -2522260;

	t85 = ((x401/x402)^(x403+x404));

	if (t85 != -624378394) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x406 = -1;
	int8_t x407 = 9;
	int32_t x408 = 33165;
	volatile int32_t t86 = -4511;

	t86 = ((x405/x406)^(x407+x408));

	if (t86 != 36109) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x412 = UINT32_MAX;
	int64_t t87 = 176162093284837LL;

	t87 = ((x409/x410)^(x411+x412));

	if (t87 != 14710LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x413 = UINT16_MAX;
	static int16_t x416 = 696;
	uint64_t t88 = 137163331LLU;

	t88 = ((x413/x414)^(x415+x416));

	if (t88 != 115640409LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x417 = 6844U;
	static volatile int64_t x419 = INT64_MIN;
	volatile uint16_t x420 = 4U;
	int64_t t89 = 24326142139LL;

	t89 = ((x417/x418)^(x419+x420));

	if (t89 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = 75317345;
	uint32_t x422 = 7U;
	static uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = 705U;
	volatile uint64_t t90 = 11318140359LLU;

	t90 = ((x421/x422)^(x423+x424));

	if (t90 != 10759940LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MAX;
	static int16_t x426 = 1508;
	int8_t x427 = INT8_MIN;
	volatile int8_t x428 = INT8_MIN;
	int32_t t91 = 3926;

	t91 = ((x425/x426)^(x427+x428));

	if (t91 != -235) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	static int64_t x436 = -1LL;
	int64_t t92 = -24507072354LL;

	t92 = ((x433/x434)^(x435+x436));

	if (t92 != -2147483650LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x441 = -1;
	uint8_t x442 = 79U;
	int16_t x444 = INT16_MIN;

	t93 = ((x441/x442)^(x443+x444));

	if (t93 != -32641) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x446 = -1LL;
	uint64_t x447 = UINT64_MAX;
	int8_t x448 = INT8_MIN;
	uint64_t t94 = 3685556256691141027LLU;

	t94 = ((x445/x446)^(x447+x448));

	if (t94 != 18446744073709518719LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x450 = INT32_MAX;
	int16_t x452 = -1504;
	uint64_t t95 = 283785LLU;

	t95 = ((x449/x450)^(x451+x452));

	if (t95 != 18446744065119615551LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x454 = 14;
	static volatile int32_t x455 = -1;
	volatile int8_t x456 = INT8_MIN;
	volatile int64_t t96 = -16193950638097LL;

	t96 = ((x453/x454)^(x455+x456));

	if (t96 != -4918397827770859LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x461 = INT16_MIN;
	uint16_t x462 = 74U;
	static uint16_t x463 = UINT16_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t97 = 337557199LLU;

	t97 = ((x461/x462)^(x463+x464));

	if (t97 != 18446744073709486520LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x467 = -1;
	volatile uint32_t x468 = UINT32_MAX;
	uint64_t t98 = 5844656LLU;

	t98 = ((x465/x466)^(x467+x468));

	if (t98 != 3607734795LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = INT64_MAX;
	int32_t x470 = -203546813;
	int8_t x471 = INT8_MIN;
	volatile int64_t t99 = 822251535LL;

	t99 = ((x469/x470)^(x471+x472));

	if (t99 != 45313271805LL) { NG(); } else { ; }
	
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

