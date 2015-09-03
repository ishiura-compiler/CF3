#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = INT64_MIN;
int16_t x7 = 1720;
int8_t x10 = -40;
uint64_t t2 = 1723LLU;
uint64_t t4 = 121244032299078LLU;
volatile uint32_t t5 = 11088095U;
uint8_t x30 = 0U;
static int64_t x31 = -95239208LL;
int64_t x32 = INT64_MAX;
static volatile uint32_t t7 = 62U;
static int16_t x41 = INT16_MIN;
int32_t t8 = 41071;
uint64_t t11 = 638873074195LLU;
int64_t x64 = INT64_MAX;
int64_t t13 = 6558694762081LL;
int8_t x66 = INT8_MIN;
int32_t x74 = -1;
static volatile int64_t t15 = -56257LL;
static volatile uint8_t x77 = UINT8_MAX;
volatile int32_t x130 = -196731;
volatile uint64_t x131 = UINT64_MAX;
int32_t x132 = INT32_MIN;
uint64_t x136 = 57521690137LLU;
static uint16_t x140 = UINT16_MAX;
int16_t x142 = -1;
int32_t t28 = -187;
int8_t x149 = -1;
volatile int64_t x154 = -92708183LL;
static volatile int64_t t30 = -2733LL;
uint64_t x158 = 1663LLU;
volatile uint64_t t31 = 46732715060LLU;
int64_t x162 = INT64_MIN;
uint32_t x164 = 27065131U;
int32_t x176 = INT32_MIN;
int8_t x181 = 5;
uint16_t x182 = 54U;
static volatile uint32_t t38 = 7U;
int8_t x199 = INT8_MIN;
static uint8_t x216 = UINT8_MAX;
static int64_t x217 = -1LL;
uint8_t x226 = 4U;
volatile int16_t x228 = INT16_MIN;
uint16_t x247 = 1325U;
volatile uint64_t t49 = 83LLU;
volatile int64_t x249 = -1LL;
uint64_t x257 = UINT64_MAX;
volatile int32_t x262 = -1;
int16_t x265 = 6898;
static int32_t x266 = -1;
volatile uint8_t x268 = 2U;
int8_t x272 = -1;
static volatile int8_t x275 = -1;
int16_t x276 = -1;
int32_t x292 = INT32_MIN;
static int64_t t58 = -152709LL;
int16_t x310 = INT16_MIN;
uint64_t t61 = 13974798367LLU;
static uint64_t x326 = 392481254259LLU;
uint32_t x330 = 3845U;
int64_t x331 = INT64_MAX;
uint64_t t65 = 172355LLU;
static int8_t x352 = INT8_MIN;
uint32_t t68 = 4062786U;
int8_t x353 = -1;
int64_t x364 = -654LL;
uint64_t x365 = UINT64_MAX;
volatile int16_t x373 = 1333;
uint8_t x387 = 15U;
volatile uint64_t t77 = 756550432714LLU;
volatile uint32_t t78 = 27284U;
static uint32_t x422 = 96U;
int16_t x427 = 2025;
static volatile uint16_t x431 = 6U;
uint64_t t82 = 87535897740902543LLU;
volatile int32_t x441 = 1;
static int16_t x442 = INT16_MIN;
volatile uint32_t t83 = 1U;
static int8_t x449 = INT8_MIN;
int16_t x452 = INT16_MAX;
int32_t x454 = INT32_MIN;
volatile int32_t t86 = -3028437;
static uint8_t x463 = 0U;
uint32_t x473 = UINT32_MAX;
static volatile int64_t x474 = 61713LL;
volatile int64_t t88 = 7522706550LL;
uint32_t x481 = 5533U;
int64_t x484 = 61270LL;
uint64_t x496 = UINT64_MAX;
int8_t x513 = -20;
static int64_t x523 = -1LL;
volatile uint64_t t97 = 14640987400LLU;
static volatile int8_t x526 = INT8_MIN;


void f0(void) {
	static uint64_t x1 = 609978628346LLU;
	int32_t x2 = INT32_MIN;
	volatile uint32_t x4 = 5680022U;
	uint64_t t0 = 39074825106LLU;

	t0 = ((x1-x2)-(x3+x4));

	if (t0 != 9223372648975207780LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1972863077147LL;
	int64_t x6 = -1LL;
	uint32_t x8 = UINT32_MAX;
	int64_t t1 = 22LL;

	t1 = ((x5-x6)-(x7+x8));

	if (t1 != 1972863075429LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 3625392188LL;
	uint64_t x11 = 9611LLU;
	static uint16_t x12 = UINT16_MAX;

	t2 = ((x9-x10)-(x11+x12));

	if (t2 != 3625317082LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint8_t x18 = 108U;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -11646;
	int64_t t3 = -1660082LL;

	t3 = ((x17-x18)-(x19+x20));

	if (t3 != 11665LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 1328438772LLU;
	int16_t x24 = -2;

	t4 = ((x21-x22)-(x23+x24));

	if (t4 != 9223372035526337037LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	uint32_t x26 = 1U;
	uint8_t x27 = 1U;
	int8_t x28 = INT8_MIN;

	t5 = ((x25-x26)-(x27+x28));

	if (t5 != 125U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 14U;
	int64_t t6 = -788953LL;

	t6 = ((x29-x30)-(x31+x32));

	if (t6 != -9223372036759536585LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 2646600;
	uint8_t x38 = 13U;
	static uint32_t x39 = 0U;
	uint16_t x40 = 13U;

	t7 = ((x37-x38)-(x39+x40));

	if (t7 != 2646574U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = UINT16_MAX;
	volatile int16_t x43 = -1;
	static uint16_t x44 = UINT16_MAX;

	t8 = ((x41-x42)-(x43+x44));

	if (t8 != -163837) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x45 = -1;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = 15172LLU;
	int64_t x48 = 128LL;
	uint64_t t9 = 6379LLU;

	t9 = ((x45-x46)-(x47+x48));

	if (t9 != 17467LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 14146595436LLU;
	uint64_t x50 = UINT64_MAX;
	static volatile uint16_t x51 = 37U;
	static volatile int8_t x52 = -1;
	uint64_t t10 = 8690349446529800445LLU;

	t10 = ((x49-x50)-(x51+x52));

	if (t10 != 14146595401LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = -101740073324722LL;
	int8_t x54 = INT8_MAX;
	uint64_t x55 = 825357LLU;
	static uint64_t x56 = 16LLU;

	t11 = ((x53-x54)-(x55+x56));

	if (t11 != 18446642333635401394LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	uint32_t x58 = UINT32_MAX;
	volatile uint32_t x59 = UINT32_MAX;
	uint64_t x60 = 4244655975LLU;
	volatile uint64_t t12 = 360193698873307138LLU;

	t12 = ((x57-x58)-(x59+x60));

	if (t12 != 18446744060874961050LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 3U;
	int16_t x62 = INT16_MIN;
	int32_t x63 = -1;

	t13 = ((x61-x62)-(x63+x64));

	if (t13 != -9223372036854743035LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x65 = 10LLU;
	volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	uint64_t t14 = 43817LLU;

	t14 = ((x65-x66)-(x67+x68));

	if (t14 != 18446744069414617227LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	static int8_t x75 = 19;
	int64_t x76 = INT64_MIN;

	t15 = ((x73-x74)-(x75+x76));

	if (t15 != 9223372034707292142LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x78 = -12;
	volatile int32_t x79 = -1;
	uint32_t x80 = 112U;
	uint32_t t16 = 293255U;

	t16 = ((x77-x78)-(x79+x80));

	if (t16 != 156U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 25878U;
	static int8_t x82 = INT8_MAX;
	int8_t x83 = 1;
	int16_t x84 = INT16_MIN;
	int32_t t17 = -19878;

	t17 = ((x81-x82)-(x83+x84));

	if (t17 != 58518) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = -1;
	int16_t x94 = -11704;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t18 = -390429;

	t18 = ((x93-x94)-(x95+x96));

	if (t18 != -53704) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x101 = 24372065925020918LLU;
	volatile int16_t x102 = INT16_MIN;
	int64_t x103 = -8404531769LL;
	volatile uint64_t x104 = 13295LLU;
	volatile uint64_t t19 = 1441243265982574LLU;

	t19 = ((x101-x102)-(x103+x104));

	if (t19 != 24372074329572160LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x105 = INT16_MIN;
	volatile int16_t x106 = -1;
	static int8_t x107 = INT8_MIN;
	uint8_t x108 = 42U;
	int32_t t20 = 876815742;

	t20 = ((x105-x106)-(x107+x108));

	if (t20 != -32681) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x109 = 418450063635880LLU;
	uint16_t x110 = 25763U;
	int32_t x111 = INT32_MAX;
	uint32_t x112 = 10876U;
	volatile uint64_t t21 = 271302966330147LLU;

	t21 = ((x109-x110)-(x111+x112));

	if (t21 != 418447916115594LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = 1622;
	static int16_t x118 = INT16_MIN;
	static int64_t x119 = -1282515404272644LL;
	int32_t x120 = INT32_MIN;
	int64_t t22 = -135796835361775LL;

	t22 = ((x117-x118)-(x119+x120));

	if (t22 != 1282517551790682LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = -1;
	static int64_t x127 = INT64_MIN;
	uint32_t x128 = 226246U;
	static int64_t t23 = 4231139652687682368LL;

	t23 = ((x125-x126)-(x127+x128));

	if (t23 != 9223372034707065915LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x129 = INT64_MIN;
	uint64_t t24 = 263148LLU;

	t24 = ((x129-x130)-(x131+x132));

	if (t24 != 9223372039002456188LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = 4166020624LL;
	uint8_t x134 = 0U;
	static volatile int64_t x135 = -1777749261266398201LL;
	volatile uint64_t t25 = 122939511864336855LLU;

	t25 = ((x133-x134)-(x135+x136));

	if (t25 != 1777749207910728688LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	int16_t x139 = 138;
	volatile int32_t t26 = -440012548;

	t26 = ((x137-x138)-(x139+x140));

	if (t26 != 2147417847) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = 0U;
	int32_t x143 = -1;
	int64_t x144 = -1914LL;
	static volatile int64_t t27 = -14LL;

	t27 = ((x141-x142)-(x143+x144));

	if (t27 != 1916LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = -6798163;
	int8_t x146 = INT8_MIN;
	int32_t x147 = 25490;
	int8_t x148 = -1;

	t28 = ((x145-x146)-(x147+x148));

	if (t28 != -6823524) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x150 = INT64_MIN;
	static uint32_t x151 = UINT32_MAX;
	static int16_t x152 = 9;
	int64_t t29 = 1139719LL;

	t29 = ((x149-x150)-(x151+x152));

	if (t29 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MIN;
	static int8_t x155 = INT8_MIN;
	uint8_t x156 = UINT8_MAX;

	t30 = ((x153-x154)-(x155+x156));

	if (t30 != 92707928LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = -2;
	uint64_t x159 = 409419522LLU;
	volatile uint16_t x160 = 20U;

	t31 = ((x157-x158)-(x159+x160));

	if (t31 != 18446744073300130409LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = -1;
	int8_t x163 = 7;
	static int64_t t32 = -150812LL;

	t32 = ((x161-x162)-(x163+x164));

	if (t32 != 9223372036827710669LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 0U;
	volatile int64_t x170 = 32804LL;
	uint64_t x171 = UINT64_MAX;
	static int64_t x172 = INT64_MAX;
	uint64_t t33 = 5848473LLU;

	t33 = ((x169-x170)-(x171+x172));

	if (t33 != 9223372036854743006LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -14756;
	volatile int32_t x175 = 6632;
	volatile int64_t t34 = 7787961274390106LL;

	t34 = ((x173-x174)-(x175+x176));

	if (t34 != -9223372034707284036LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x177 = UINT16_MAX;
	uint64_t x178 = UINT64_MAX;
	uint8_t x179 = 1U;
	volatile uint16_t x180 = UINT16_MAX;
	uint64_t t35 = 2LLU;

	t35 = ((x177-x178)-(x179+x180));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x183 = 398137412U;
	int32_t x184 = -2726833;
	uint32_t t36 = 398U;

	t36 = ((x181-x182)-(x183+x184));

	if (t36 != 3899556668U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = 626U;
	uint32_t x186 = 1173561U;
	int64_t x187 = 735925756LL;
	int8_t x188 = -2;
	int64_t t37 = -10878LL;

	t37 = ((x185-x186)-(x187+x188));

	if (t37 != 3557868607LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x189 = -1;
	uint32_t x190 = 64379U;
	uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MIN;

	t38 = ((x189-x190)-(x191+x192));

	if (t38 != 4294903045U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x197 = -9;
	int32_t x198 = 0;
	int32_t x200 = INT32_MAX;
	static int32_t t39 = 860512;

	t39 = ((x197-x198)-(x199+x200));

	if (t39 != -2147483528) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = -4;
	volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = 3235U;
	uint32_t x204 = 468591U;
	uint32_t t40 = 4U;

	t40 = ((x201-x202)-(x203+x204));

	if (t40 != 4294495594U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MAX;
	uint8_t x210 = 89U;
	volatile int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MAX;
	int32_t t41 = 880;

	t41 = ((x209-x210)-(x211+x212));

	if (t41 != 32679) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = -1;
	int64_t x214 = 3828088LL;
	volatile uint8_t x215 = 43U;
	int64_t t42 = -22626266181LL;

	t42 = ((x213-x214)-(x215+x216));

	if (t42 != -3828387LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x218 = INT8_MIN;
	volatile int8_t x219 = 0;
	volatile int8_t x220 = INT8_MAX;
	static volatile int64_t t43 = -3135108308343LL;

	t43 = ((x217-x218)-(x219+x220));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MIN;
	static int8_t x223 = 8;
	static uint32_t x224 = 5644U;
	volatile uint64_t t44 = 29413482422542421LLU;

	t44 = ((x221-x222)-(x223+x224));

	if (t44 != 18446744073709546091LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x225 = 53761847310LLU;
	volatile int8_t x227 = -1;
	volatile uint64_t t45 = 70413971211682973LLU;

	t45 = ((x225-x226)-(x227+x228));

	if (t45 != 53761880075LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = 12993656LLU;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = 65612U;
	int32_t x232 = 83278146;
	static volatile uint64_t t46 = 1LLU;

	t46 = ((x229-x230)-(x231+x232));

	if (t46 != 9223372036784425706LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = 6480;
	uint16_t x234 = 124U;
	static uint64_t x235 = UINT64_MAX;
	int64_t x236 = -14LL;
	volatile uint64_t t47 = 79907139541624273LLU;

	t47 = ((x233-x234)-(x235+x236));

	if (t47 != 6371LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = -1;
	static int8_t x238 = -1;
	int16_t x239 = -1;
	static uint32_t x240 = 452U;
	volatile uint32_t t48 = 5U;

	t48 = ((x237-x238)-(x239+x240));

	if (t48 != 4294966845U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x245 = 357U;
	uint64_t x246 = 120563601LLU;
	int32_t x248 = 7195;

	t49 = ((x245-x246)-(x247+x248));

	if (t49 != 18446744073588979852LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -1;
	static int64_t t50 = 96LL;

	t50 = ((x249-x250)-(x251+x252));

	if (t50 != -8589934590LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x258 = -51394553;
	uint16_t x259 = 5898U;
	static int64_t x260 = INT64_MIN;
	volatile uint64_t t51 = 16544367622987LLU;

	t51 = ((x257-x258)-(x259+x260));

	if (t51 != 9223372036906164462LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x261 = 1403U;
	int64_t x263 = INT64_MAX;
	static int32_t x264 = -1;
	volatile int64_t t52 = 65330584343558LL;

	t52 = ((x261-x262)-(x263+x264));

	if (t52 != -9223372036854774402LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x267 = 11;
	int32_t t53 = 1049795;

	t53 = ((x265-x266)-(x267+x268));

	if (t53 != 6886) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x269 = 385301507774840418LLU;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MAX;
	uint64_t t54 = 264629LLU;

	t54 = ((x269-x270)-(x271+x272));

	if (t54 != 385301507774840420LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x273 = 9U;
	int32_t x274 = -1;
	int32_t t55 = 222005071;

	t55 = ((x273-x274)-(x275+x276));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x281 = -1;
	static uint32_t x282 = 805916560U;
	volatile int8_t x283 = -3;
	uint16_t x284 = UINT16_MAX;
	uint32_t t56 = 141001U;

	t56 = ((x281-x282)-(x283+x284));

	if (t56 != 3488985203U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = 16U;
	static uint32_t x286 = 8U;
	static volatile int64_t x287 = 4451209219966292LL;
	uint8_t x288 = UINT8_MAX;
	int64_t t57 = 320154711LL;

	t57 = ((x285-x286)-(x287+x288));

	if (t57 != -4451209219966539LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x289 = -2521;
	int16_t x290 = -5;
	volatile int64_t x291 = -1LL;

	t58 = ((x289-x290)-(x291+x292));

	if (t58 != 2147481133LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x309 = INT32_MIN;
	uint64_t x311 = UINT64_MAX;
	static volatile int64_t x312 = -1LL;
	volatile uint64_t t59 = 33LLU;

	t59 = ((x309-x310)-(x311+x312));

	if (t59 != 18446744071562100738LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x313 = -1LL;
	uint16_t x314 = 0U;
	uint16_t x315 = 15U;
	static int32_t x316 = 3408;
	volatile int64_t t60 = -27LL;

	t60 = ((x313-x314)-(x315+x316));

	if (t60 != -3424LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x317 = UINT64_MAX;
	volatile int32_t x318 = -843903;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 807LLU;

	t61 = ((x317-x318)-(x319+x320));

	if (t61 != 875863LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x321 = -106;
	static int16_t x322 = INT16_MAX;
	volatile int32_t x323 = 81;
	int16_t x324 = -1;
	int32_t t62 = -833;

	t62 = ((x321-x322)-(x323+x324));

	if (t62 != -32953) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x325 = UINT64_MAX;
	uint32_t x327 = 55383451U;
	uint32_t x328 = 4486442U;
	uint64_t t63 = 2557010640323LLU;

	t63 = ((x325-x326)-(x327+x328));

	if (t63 != 18446743681168427463LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile int32_t x332 = -231265;
	volatile uint64_t t64 = 21801504993912LLU;

	t64 = ((x329-x330)-(x331+x332));

	if (t64 != 9223372036855003228LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x333 = UINT64_MAX;
	static uint64_t x334 = UINT64_MAX;
	uint64_t x335 = 1565190837864LLU;
	uint32_t x336 = 69712U;

	t65 = ((x333-x334)-(x335+x336));

	if (t65 != 18446742508518644040LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = 0;
	volatile int16_t x338 = INT16_MAX;
	uint8_t x339 = 7U;
	static uint64_t x340 = 13391874269995491LLU;
	volatile uint64_t t66 = 1122297139832225LLU;

	t66 = ((x337-x338)-(x339+x340));

	if (t66 != 18433352199439523351LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x341 = 9843U;
	static int32_t x342 = 1814;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t67 = 33;

	t67 = ((x341-x342)-(x343+x344));

	if (t67 != 7902) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x349 = INT8_MAX;
	volatile int8_t x350 = INT8_MIN;
	static uint32_t x351 = 18733U;

	t68 = ((x349-x350)-(x351+x352));

	if (t68 != 4294948946U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x354 = 2U;
	volatile int16_t x355 = INT16_MAX;
	int16_t x356 = 13892;
	int32_t t69 = 69167;

	t69 = ((x353-x354)-(x355+x356));

	if (t69 != -46662) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x361 = 1581120674653LLU;
	static int8_t x362 = 19;
	volatile uint64_t x363 = 75571045512914042LLU;
	uint64_t t70 = 15944855587319215LLU;

	t70 = ((x361-x362)-(x363+x364));

	if (t70 != 18371174609317312862LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x366 = INT16_MIN;
	static volatile uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 43LLU;
	volatile uint64_t t71 = 3180461087LLU;

	t71 = ((x365-x366)-(x367+x368));

	if (t71 != 18446744069414617045LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x369 = 13U;
	volatile int16_t x370 = 1;
	uint16_t x371 = 8U;
	int16_t x372 = -1;
	int32_t t72 = -89;

	t72 = ((x369-x370)-(x371+x372));

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	int32_t t73 = -119335;

	t73 = ((x373-x374)-(x375+x376));

	if (t73 != 33974) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x385 = 55289336U;
	int8_t x386 = 29;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t74 = 2U;

	t74 = ((x385-x386)-(x387+x388));

	if (t74 != 55289293U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x393 = INT8_MIN;
	static int16_t x394 = -20;
	static int16_t x395 = -1;
	uint16_t x396 = 89U;
	int32_t t75 = -1;

	t75 = ((x393-x394)-(x395+x396));

	if (t75 != -196) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x397 = -8LL;
	static int32_t x398 = INT32_MIN;
	volatile uint32_t x399 = 5U;
	int16_t x400 = -1;
	int64_t t76 = -1LL;

	t76 = ((x397-x398)-(x399+x400));

	if (t76 != 2147483636LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x409 = 13215775365606LLU;
	static int16_t x410 = INT16_MIN;
	int64_t x411 = 0LL;
	int16_t x412 = INT16_MIN;

	t77 = ((x409-x410)-(x411+x412));

	if (t77 != 13215775431142LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x413 = INT8_MIN;
	volatile int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = UINT32_MAX;
	static volatile int8_t x416 = -1;

	t78 = ((x413-x414)-(x415+x416));

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x421 = INT64_MAX;
	int64_t x423 = 1146054669634LL;
	int8_t x424 = INT8_MIN;
	int64_t t79 = -105LL;

	t79 = ((x421-x422)-(x423+x424));

	if (t79 != 9223370890800106205LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x425 = 1;
	static uint8_t x426 = 0U;
	static int16_t x428 = -6;
	volatile int32_t t80 = -3294;

	t80 = ((x425-x426)-(x427+x428));

	if (t80 != -2018) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x429 = 0;
	volatile int8_t x430 = INT8_MAX;
	static volatile int8_t x432 = 45;
	volatile int32_t t81 = 505571092;

	t81 = ((x429-x430)-(x431+x432));

	if (t81 != -178) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = 1764539344U;
	static uint64_t x434 = UINT64_MAX;
	static uint8_t x435 = 17U;
	int32_t x436 = 1;

	t82 = ((x433-x434)-(x435+x436));

	if (t82 != 1764539327LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x443 = -1;
	uint32_t x444 = 9U;

	t83 = ((x441-x442)-(x443+x444));

	if (t83 != 32761U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x450 = 11U;
	static int16_t x451 = INT16_MAX;
	volatile int32_t t84 = 425898;

	t84 = ((x449-x450)-(x451+x452));

	if (t84 != -65673) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x453 = -8855706851965LL;
	int32_t x455 = -1454;
	volatile int16_t x456 = INT16_MAX;
	int64_t t85 = 0LL;

	t85 = ((x453-x454)-(x455+x456));

	if (t85 != -8853559399630LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x457 = 63U;
	int8_t x458 = 14;
	int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MAX;

	t86 = ((x457-x458)-(x459+x460));

	if (t86 != 2147450930) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x461 = INT32_MIN;
	volatile uint64_t x462 = 79834LLU;
	int8_t x464 = -1;
	static uint64_t t87 = 10954176LLU;

	t87 = ((x461-x462)-(x463+x464));

	if (t87 != 18446744071561988135LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x475 = -2;
	int64_t x476 = 139812494957405LL;

	t88 = ((x473-x474)-(x475+x476));

	if (t88 != -139808200051821LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x482 = UINT32_MAX;
	int8_t x483 = INT8_MIN;
	volatile int64_t t89 = -87000LL;

	t89 = ((x481-x482)-(x483+x484));

	if (t89 != -55608LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x485 = INT16_MAX;
	int8_t x486 = 4;
	volatile uint64_t x487 = UINT64_MAX;
	int64_t x488 = INT64_MAX;
	volatile uint64_t t90 = 41534010691239LLU;

	t90 = ((x485-x486)-(x487+x488));

	if (t90 != 9223372036854808573LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = UINT8_MAX;
	static volatile int64_t x494 = 7294710822434929LL;
	int16_t x495 = INT16_MIN;
	volatile uint64_t t91 = 30293346490602667LLU;

	t91 = ((x493-x494)-(x495+x496));

	if (t91 != 18439449362887149711LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x497 = -1;
	volatile int8_t x498 = INT8_MAX;
	uint32_t x499 = 11080U;
	static int16_t x500 = -1;
	uint32_t t92 = 119U;

	t92 = ((x497-x498)-(x499+x500));

	if (t92 != 4294956089U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x501 = 4;
	static int8_t x502 = 37;
	volatile int16_t x503 = INT16_MAX;
	int64_t x504 = -1LL;
	int64_t t93 = 2303337846LL;

	t93 = ((x501-x502)-(x503+x504));

	if (t93 != -32799LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x505 = 5U;
	uint8_t x506 = 1U;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = 50;
	uint32_t t94 = 242U;

	t94 = ((x505-x506)-(x507+x508));

	if (t94 != 4294966995U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x514 = UINT16_MAX;
	static int8_t x515 = INT8_MIN;
	uint64_t x516 = UINT64_MAX;
	uint64_t t95 = 2054LLU;

	t95 = ((x513-x514)-(x515+x516));

	if (t95 != 18446744073709486190LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x517 = 2124138584692LL;
	int64_t x518 = -1LL;
	static uint8_t x519 = 13U;
	volatile int16_t x520 = INT16_MAX;
	volatile int64_t t96 = 230574LL;

	t96 = ((x517-x518)-(x519+x520));

	if (t96 != 2124138551913LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x521 = 36122032798778061LLU;
	int8_t x522 = 15;
	int32_t x524 = 64113;

	t97 = ((x521-x522)-(x523+x524));

	if (t97 != 36122032798713934LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x525 = 0;
	static int64_t x527 = INT64_MAX;
	uint64_t x528 = 63138979238129316LLU;
	uint64_t t98 = 5245LLU;

	t98 = ((x525-x526)-(x527+x528));

	if (t98 != 9160233057616646621LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x529 = 4;
	int16_t x530 = -3;
	int16_t x531 = INT16_MAX;
	int16_t x532 = 9713;
	volatile int32_t t99 = 623725862;

	t99 = ((x529-x530)-(x531+x532));

	if (t99 != -42473) { NG(); } else { ; }
	
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

