#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -1;
int64_t t0 = -19233283207197660LL;
int8_t x18 = INT8_MAX;
static uint8_t x23 = UINT8_MAX;
int32_t x24 = -1;
int16_t x32 = -1650;
static int64_t t8 = 446060117LL;
uint64_t x64 = 1963329459LLU;
int32_t x71 = -1;
uint8_t x81 = UINT8_MAX;
static int16_t x87 = -1;
int32_t x90 = -1;
volatile int32_t t18 = 1;
uint64_t x93 = UINT64_MAX;
uint8_t x98 = UINT8_MAX;
int32_t t21 = 828;
static volatile uint64_t x110 = 5707049970868LLU;
int16_t x113 = 38;
volatile uint8_t x117 = UINT8_MAX;
int8_t x118 = INT8_MIN;
int32_t t25 = -57112;
uint8_t x129 = 119U;
uint8_t x133 = UINT8_MAX;
static volatile uint32_t x136 = 10371944U;
uint16_t x137 = UINT16_MAX;
volatile int64_t x139 = INT64_MAX;
uint32_t x143 = 590U;
int32_t t30 = INT32_MIN;
static uint64_t x157 = 982461299293784748LLU;
int32_t x160 = INT32_MAX;
uint16_t x165 = 1416U;
uint64_t t35 = 2373420270846LLU;
uint32_t x170 = 49854330U;
int64_t x173 = INT64_MIN;
int16_t x177 = INT16_MAX;
int64_t x178 = -1LL;
volatile uint64_t t38 = 1790098128LLU;
uint16_t x189 = 6U;
int16_t x190 = -1;
int64_t x204 = INT64_MAX;
volatile uint64_t t43 = 235323253LLU;
int16_t x208 = -42;
static int32_t x209 = INT32_MAX;
int64_t t45 = 49LL;
volatile int8_t x224 = INT8_MAX;
static int64_t t47 = 603LL;
uint64_t x233 = 835224562627LLU;
int8_t x238 = 0;
int64_t x239 = INT64_MAX;
int64_t t51 = 50608LL;
uint64_t x243 = 391LLU;
volatile uint8_t x248 = 5U;
uint16_t x251 = UINT16_MAX;
volatile int64_t x252 = 89418LL;
volatile int64_t x254 = -69317753865651479LL;
uint8_t x255 = 7U;
int8_t x258 = -1;
int32_t t56 = -807945608;
int8_t x276 = INT8_MIN;
uint32_t x278 = 1352851204U;
uint64_t x279 = 344017768033637596LLU;
static int8_t x282 = INT8_MIN;
int8_t x285 = -1;
int16_t x286 = 1149;
int8_t x288 = INT8_MIN;
uint8_t x290 = 0U;
volatile int8_t x292 = -1;
volatile uint8_t x297 = 15U;
int16_t x298 = 369;
volatile uint64_t t65 = 358LLU;
uint8_t x301 = 3U;
int64_t t66 = 776269130982183411LL;
uint32_t x305 = 297587927U;
volatile uint16_t x310 = UINT16_MAX;
static int16_t x319 = INT16_MIN;
int16_t x320 = -1;
int32_t t70 = -13304988;
uint32_t x322 = 41U;
static int8_t x325 = INT8_MIN;
uint64_t x332 = UINT64_MAX;
int16_t x345 = -151;
volatile uint32_t x360 = 484800016U;
int8_t x361 = -1;
uint64_t x363 = UINT64_MAX;
static volatile uint64_t t81 = 32531759309877LLU;
static uint32_t x366 = UINT32_MAX;
uint64_t x376 = 213152279889817LLU;
volatile int32_t x385 = INT32_MAX;
static int32_t x387 = INT32_MIN;
volatile int64_t x391 = INT64_MIN;
int8_t x398 = INT8_MIN;
uint16_t x407 = 0U;
int64_t x409 = -1LL;
int64_t x411 = INT64_MAX;
int16_t x417 = INT16_MIN;
volatile int32_t x418 = INT32_MIN;
int32_t x419 = INT32_MIN;
uint16_t x420 = 367U;
volatile int32_t t94 = -423642;
static volatile uint8_t x425 = 0U;
static int64_t x426 = 33422416005LL;
static int64_t x428 = -1LL;
int8_t x432 = INT8_MAX;
int8_t x438 = INT8_MAX;
static int64_t x439 = 4373096933368708827LL;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MIN;
	int64_t x7 = 102522LL;

	t0 = ((x5-x6)&(x7^x8));

	if (t0 != 2147352576LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -45;
	uint32_t x10 = 103387073U;
	volatile uint8_t x11 = 1U;
	uint16_t x12 = 3580U;
	uint32_t t1 = 1748537968U;

	t1 = ((x9-x10)&(x11^x12));

	if (t1 != 16U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -8;
	int8_t x14 = 1;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t2 = -158075779;

	t2 = ((x13-x14)&(x15^x16));

	if (t2 != 32640) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MAX;
	volatile int8_t x19 = INT8_MIN;
	uint32_t x20 = 1541998930U;
	volatile uint32_t t3 = 1U;

	t3 = ((x17-x18)&(x19^x20));

	if (t3 != 605484672U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint8_t x22 = 3U;
	static volatile int32_t t4 = 11466;

	t4 = ((x21-x22)&(x23^x24));

	if (t4 != -256) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 16462U;
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = UINT8_MAX;
	uint64_t t5 = 91569219LLU;

	t5 = ((x29-x30)&(x31^x32));

	if (t5 != 16449LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	static int16_t x34 = INT16_MAX;
	int16_t x35 = -1;
	static int32_t x36 = -1;
	volatile int32_t t6 = 211;

	t6 = ((x33-x34)&(x35^x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = INT64_MIN;
	int32_t x46 = -1;
	int32_t x47 = -19973036;
	volatile int8_t x48 = -1;
	static int64_t t7 = 494040LL;

	t7 = ((x45-x46)&(x47^x48));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	static int64_t x50 = -1LL;
	static int64_t x51 = -1LL;
	int64_t x52 = -47439668977293355LL;

	t8 = ((x49-x50)&(x51^x52));

	if (t8 != 47439668278460416LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x53 = -1;
	static int8_t x54 = 0;
	uint8_t x55 = 6U;
	volatile int64_t x56 = -57LL;
	volatile int64_t t9 = 170455151880LL;

	t9 = ((x53-x54)&(x55^x56));

	if (t9 != -63LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = -4909367;
	static int16_t x58 = 4449;
	static uint64_t x59 = UINT64_MAX;
	uint64_t x60 = UINT64_MAX;
	static volatile uint64_t t10 = 577LLU;

	t10 = ((x57-x58)&(x59^x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x61 = INT64_MIN;
	int32_t x62 = -1;
	volatile uint16_t x63 = 19U;
	volatile uint64_t t11 = 2047763LLU;

	t11 = ((x61-x62)&(x63^x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 257463609743LLU;
	static uint32_t x66 = 10618374U;
	volatile int64_t x67 = INT64_MAX;
	uint32_t x68 = UINT32_MAX;
	static uint64_t t12 = 141060377620744LLU;

	t12 = ((x65-x66)&(x67^x68));

	if (t12 != 253403070464LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 8U;
	int32_t x70 = 47337;
	uint32_t x72 = UINT32_MAX;
	static uint32_t t13 = 248789U;

	t13 = ((x69-x70)&(x71^x72));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 217U;
	static int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t14 = 1922325637LL;

	t14 = ((x73-x74)&(x75^x76));

	if (t14 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -1;
	uint32_t x78 = UINT32_MAX;
	uint8_t x79 = 104U;
	int64_t x80 = INT64_MAX;
	int64_t t15 = -13LL;

	t15 = ((x77-x78)&(x79^x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x82 = -1;
	int32_t x83 = INT32_MAX;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t16 = -3505;

	t16 = ((x81-x82)&(x83^x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = -1;
	static volatile int32_t x86 = -20037422;
	static int8_t x88 = -12;
	static int32_t t17 = 946;

	t17 = ((x85-x86)&(x87^x88));

	if (t17 != 9) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = 24194507;
	int16_t x91 = -1566;
	int32_t x92 = INT32_MIN;

	t18 = ((x89-x90)&(x91^x92));

	if (t18 != 24193472) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x94 = INT32_MIN;
	int8_t x95 = 6;
	int8_t x96 = INT8_MAX;
	static volatile uint64_t t19 = 186LLU;

	t19 = ((x93-x94)&(x95^x96));

	if (t19 != 121LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x97 = 194LLU;
	uint64_t x99 = UINT64_MAX;
	uint32_t x100 = 29106U;
	uint64_t t20 = 86514270LLU;

	t20 = ((x97-x98)&(x99^x100));

	if (t20 != 18446744073709522497LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 31U;
	int16_t x102 = 1;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MAX;

	t21 = ((x101-x102)&(x103^x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = INT16_MIN;
	uint16_t x106 = 14163U;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MIN;
	volatile int64_t t22 = 0LL;

	t22 = ((x105-x106)&(x107^x108));

	if (t22 != 18605LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 35U;
	int16_t x111 = -6;
	static int16_t x112 = -393;
	volatile uint64_t t23 = 69025444341LLU;

	t23 = ((x109-x110)&(x111^x112));

	if (t23 != 269LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x114 = 48456700608LL;
	volatile int32_t x115 = INT32_MAX;
	static int8_t x116 = -1;
	volatile int64_t t24 = 46798111989960317LL;

	t24 = ((x113-x114)&(x115^x116));

	if (t24 != -49392123904LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x119 = -2;
	int32_t x120 = -4;

	t25 = ((x117-x118)&(x119^x120));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x130 = INT32_MAX;
	static int16_t x131 = INT16_MAX;
	int8_t x132 = 12;
	int32_t t26 = 6883;

	t26 = ((x129-x130)&(x131^x132));

	if (t26 != 112) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x134 = 1262603614634LLU;
	volatile int8_t x135 = -1;
	volatile uint64_t t27 = 6717974177LLU;

	t27 = ((x133-x134)&(x135^x136));

	if (t27 != 107054101LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x138 = -4161;
	volatile int16_t x140 = -11955;
	volatile int64_t t28 = -12595210094LL;

	t28 = ((x137-x138)&(x139^x140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 52U;
	static volatile int8_t x142 = INT8_MIN;
	static volatile uint8_t x144 = 114U;
	uint32_t t29 = 2133246962U;

	t29 = ((x141-x142)&(x143^x144));

	if (t29 != 52U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MIN;
	static volatile int8_t x146 = INT8_MIN;
	volatile int32_t x147 = INT32_MIN;
	static volatile int8_t x148 = 6;

	t30 = ((x145-x146)&(x147^x148));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1989;
	static volatile int64_t x150 = INT64_MIN;
	int8_t x151 = 1;
	int8_t x152 = INT8_MIN;
	volatile int64_t t31 = 1572962LL;

	t31 = ((x149-x150)&(x151^x152));

	if (t31 != 9223372036854773761LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	static int32_t x154 = -2601948;
	int8_t x155 = INT8_MAX;
	int8_t x156 = -43;
	volatile int32_t t32 = -61715397;

	t32 = ((x153-x154)&(x155^x156));

	if (t32 != -2144881784) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x158 = 109083342246LLU;
	uint8_t x159 = 81U;
	uint64_t t33 = 235408931LLU;

	t33 = ((x157-x158)&(x159^x160));

	if (t33 != 1209652486LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x161 = -47;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	static volatile int32_t x164 = -1;
	static volatile int32_t t34 = 6;

	t34 = ((x161-x162)&(x163^x164));

	if (t34 != 81) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x166 = INT8_MAX;
	uint64_t x167 = 6227LLU;
	uint16_t x168 = UINT16_MAX;

	t35 = ((x165-x166)&(x167^x168));

	if (t35 != 1288LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MIN;
	static uint32_t x171 = 773771841U;
	int8_t x172 = INT8_MAX;
	volatile uint32_t t36 = 674014U;

	t36 = ((x169-x170)&(x171^x172));

	if (t36 != 738607110U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x174 = INT8_MIN;
	int16_t x175 = 14102;
	int64_t x176 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = ((x173-x174)&(x175^x176));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x179 = 0;
	static uint64_t x180 = 1843701LLU;

	t38 = ((x177-x178)&(x179^x180));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = 1U;
	int64_t x182 = 3684149263354224LL;
	int8_t x183 = -10;
	volatile uint32_t x184 = 8085639U;
	volatile int64_t t39 = 1107459998609225LL;

	t39 = ((x181-x182)&(x183^x184));

	if (t39 != 662738449LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = INT8_MIN;
	static int32_t t40 = -437070022;

	t40 = ((x189-x190)&(x191^x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x193 = INT8_MIN;
	volatile uint32_t x194 = UINT32_MAX;
	static int64_t x195 = INT64_MAX;
	uint32_t x196 = 64965U;
	volatile int64_t t41 = -1715184132551821LL;

	t41 = ((x193-x194)&(x195^x196));

	if (t41 != 4294902272LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = 0;
	int32_t x198 = -1974;
	static int16_t x199 = INT16_MAX;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t42 = -5;

	t42 = ((x197-x198)&(x199^x200));

	if (t42 != 1792) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x201 = 14U;
	int32_t x202 = -2;
	uint64_t x203 = 67090026LLU;

	t43 = ((x201-x202)&(x203^x204));

	if (t43 != 16LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = -1LL;
	uint32_t x206 = 539436U;
	int16_t x207 = 1;
	volatile int64_t t44 = -24977680LL;

	t44 = ((x205-x206)&(x207^x208));

	if (t44 != -539437LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x210 = -1LL;
	int16_t x211 = INT16_MIN;
	static uint16_t x212 = 439U;

	t45 = ((x209-x210)&(x211^x212));

	if (t45 != 2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = INT64_MIN;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = 0;
	volatile uint64_t x216 = 6LLU;
	static uint64_t t46 = 2082139LLU;

	t46 = ((x213-x214)&(x215^x216));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = INT64_MAX;
	uint32_t x222 = 1042306501U;
	int16_t x223 = -1;

	t47 = ((x221-x222)&(x223^x224));

	if (t47 != 9223372035812469248LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x225 = 15U;
	static uint16_t x226 = UINT16_MAX;
	static volatile int8_t x227 = 1;
	int64_t x228 = INT64_MIN;
	int64_t t48 = INT64_MIN;

	t48 = ((x225-x226)&(x227^x228));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MIN;
	volatile uint8_t x230 = 71U;
	int64_t x231 = -1LL;
	int32_t x232 = 530947024;
	int64_t t49 = 2010603948890755LL;

	t49 = ((x229-x230)&(x231^x232));

	if (t49 != -530947031LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x234 = INT64_MIN;
	static int8_t x235 = -15;
	int16_t x236 = INT16_MIN;
	uint64_t t50 = 211030011LLU;

	t50 = ((x233-x234)&(x235^x236));

	if (t50 != 27585LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = -1;
	static volatile int16_t x240 = INT16_MAX;

	t51 = ((x237-x238)&(x239^x240));

	if (t51 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	static int8_t x242 = 43;
	volatile int64_t x244 = INT64_MAX;
	static uint64_t t52 = 1241398067LLU;

	t52 = ((x241-x242)&(x243^x244));

	if (t52 != 9223372036854775376LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = 315U;
	uint16_t x246 = 1358U;
	int16_t x247 = -1;
	volatile int32_t t53 = -109267;

	t53 = ((x245-x246)&(x247^x248));

	if (t53 != -1048) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = -2172492789689464LL;
	static int8_t x250 = INT8_MIN;
	volatile int64_t t54 = -21807LL;

	t54 = ((x249-x250)&(x251^x252));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	volatile uint16_t x256 = 2U;
	volatile int64_t t55 = 986840648004101164LL;

	t55 = ((x253-x254)&(x255^x256));

	if (t55 != 5LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = 41;
	volatile int16_t x259 = INT16_MIN;
	static int8_t x260 = -1;

	t56 = ((x257-x258)&(x259^x260));

	if (t56 != 42) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x261 = 8U;
	volatile int8_t x262 = INT8_MAX;
	static int8_t x263 = 0;
	int8_t x264 = -1;
	int32_t t57 = -17698958;

	t57 = ((x261-x262)&(x263^x264));

	if (t57 != -119) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = UINT32_MAX;
	static int32_t x266 = INT32_MAX;
	uint64_t x267 = UINT64_MAX;
	uint32_t x268 = UINT32_MAX;
	uint64_t t58 = 569366104205084592LLU;

	t58 = ((x265-x266)&(x267^x268));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = 395LL;
	volatile uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	uint64_t t59 = 115965817LLU;

	t59 = ((x273-x274)&(x275^x276));

	if (t59 != 384LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int8_t x280 = -30;
	uint64_t t60 = 2429747268788842622LLU;

	t60 = ((x277-x278)&(x279^x280));

	if (t60 != 2739675450LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = -104013988LL;
	int8_t x283 = 9;
	uint64_t x284 = 117479262LLU;
	volatile uint64_t t61 = 1011887817LLU;

	t61 = ((x281-x282)&(x283^x284));

	if (t61 != 16815956LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x287 = 4LL;
	int64_t t62 = -55302997573254LL;

	t62 = ((x285-x286)&(x287^x288));

	if (t62 != -1152LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MAX;
	int32_t x291 = -44488;
	int32_t t63 = 116;

	t63 = ((x289-x290)&(x291^x292));

	if (t63 != 71) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x293 = INT16_MIN;
	int8_t x294 = 2;
	static int64_t x295 = INT64_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	int64_t t64 = 3791168048824969LL;

	t64 = ((x293-x294)&(x295^x296));

	if (t64 != 9223372036854742784LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x299 = -3500LL;
	uint64_t x300 = 26548213397LLU;

	t65 = ((x297-x298)&(x299^x300));

	if (t65 != 18446744047161336960LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x302 = -59;
	static int64_t x303 = INT64_MIN;
	static volatile uint16_t x304 = 194U;

	t66 = ((x301-x302)&(x303^x304));

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x306 = INT32_MIN;
	int32_t x307 = -86;
	int8_t x308 = -1;
	uint32_t t67 = 211378683U;

	t67 = ((x305-x306)&(x307^x308));

	if (t67 != 85U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x309 = -349;
	int64_t x311 = 3171207696864904325LL;
	int32_t x312 = INT32_MIN;
	volatile int64_t t68 = 2590074137640771LL;

	t68 = ((x309-x310)&(x311^x312));

	if (t68 != -3171207697112628092LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = -1LL;
	static int8_t x314 = 0;
	int32_t x315 = 0;
	uint64_t x316 = 448491LLU;
	static volatile uint64_t t69 = 865993022429988LLU;

	t69 = ((x313-x314)&(x315^x316));

	if (t69 != 448491LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x317 = 12;
	static int16_t x318 = -1;

	t70 = ((x317-x318)&(x319^x320));

	if (t70 != 13) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = INT32_MIN;
	int16_t x323 = INT16_MAX;
	uint16_t x324 = UINT16_MAX;
	uint32_t t71 = 1U;

	t71 = ((x321-x322)&(x323^x324));

	if (t71 != 32768U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x326 = INT64_MIN;
	int16_t x327 = -14801;
	int32_t x328 = -1;
	int64_t t72 = -28348082082LL;

	t72 = ((x325-x326)&(x327^x328));

	if (t72 != 14720LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 96277487U;
	uint8_t x330 = 1U;
	static volatile uint16_t x331 = 176U;
	volatile uint64_t t73 = 48743252645LLU;

	t73 = ((x329-x330)&(x331^x332));

	if (t73 != 96277326LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	static int64_t x334 = -2867LL;
	uint32_t x335 = UINT32_MAX;
	int64_t x336 = -25315LL;
	int64_t t74 = -20426859LL;

	t74 = ((x333-x334)&(x335^x336));

	if (t74 != -9223372036854775262LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;
	uint32_t t75 = 22125U;

	t75 = ((x337-x338)&(x339^x340));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x341 = 13331020LLU;
	int8_t x342 = 9;
	int16_t x343 = 216;
	static uint16_t x344 = 5969U;
	uint64_t t76 = 1110124161211894LLU;

	t76 = ((x341-x342)&(x343^x344));

	if (t76 != 513LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x346 = 144980LL;
	volatile int16_t x347 = INT16_MIN;
	uint64_t x348 = 13085732137750144LLU;
	static uint64_t t77 = 32134304LLU;

	t77 = ((x345-x346)&(x347^x348));

	if (t77 != 18433658341571807232LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x349 = -1LL;
	static int64_t x350 = INT64_MIN;
	int32_t x351 = -362;
	volatile int8_t x352 = -2;
	int64_t t78 = -215LL;

	t78 = ((x349-x350)&(x351^x352));

	if (t78 != 360LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = INT16_MAX;
	static uint16_t x354 = 90U;
	volatile int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t79 = -27518675;

	t79 = ((x353-x354)&(x355^x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = 0;
	int8_t x358 = -52;
	int32_t x359 = -226571;
	volatile uint32_t t80 = 104997U;

	t80 = ((x357-x358)&(x359^x360));

	if (t80 != 36U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x362 = INT16_MIN;
	uint8_t x364 = 3U;

	t81 = ((x361-x362)&(x363^x364));

	if (t81 != 32764LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x365 = INT8_MIN;
	uint64_t x367 = 5867LLU;
	int8_t x368 = 1;
	volatile uint64_t t82 = 204655930536LLU;

	t82 = ((x365-x366)&(x367^x368));

	if (t82 != 5760LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = -1;
	int8_t x374 = 0;
	static uint32_t x375 = 2U;
	uint64_t t83 = 37LLU;

	t83 = ((x373-x374)&(x375^x376));

	if (t83 != 213152279889819LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = INT64_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	int8_t x379 = -5;
	int32_t x380 = -1;
	volatile int64_t t84 = -1LL;

	t84 = ((x377-x378)&(x379^x380));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MAX;
	uint64_t t85 = 8773357773984LLU;

	t85 = ((x381-x382)&(x383^x384));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x386 = 589770983;
	static int16_t x388 = INT16_MIN;
	int32_t t86 = -940160;

	t86 = ((x385-x386)&(x387^x388));

	if (t86 != 1557692416) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = -1;
	int64_t x392 = INT64_MAX;
	int64_t t87 = 400654414140290LL;

	t87 = ((x389-x390)&(x391^x392));

	if (t87 != 128LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = -1;
	volatile int64_t x394 = -1LL;
	int8_t x395 = INT8_MAX;
	int8_t x396 = 0;
	volatile int64_t t88 = -2414LL;

	t88 = ((x393-x394)&(x395^x396));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x397 = INT16_MAX;
	int64_t x399 = INT64_MIN;
	int64_t x400 = 4026122138678192863LL;
	volatile int64_t t89 = 201929118LL;

	t89 = ((x397-x398)&(x399^x400));

	if (t89 != 32863LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x401 = 16372U;
	static int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = 39U;
	static int32_t t90 = 991489133;

	t90 = ((x401-x402)&(x403^x404));

	if (t90 != 16464) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x405 = 1U;
	int16_t x406 = 15;
	int32_t x408 = 128407;
	static int32_t t91 = 64963429;

	t91 = ((x405-x406)&(x407^x408));

	if (t91 != 128402) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x410 = 63;
	int8_t x412 = INT8_MIN;
	int64_t t92 = 5LL;

	t92 = ((x409-x410)&(x411^x412));

	if (t92 != -9223372036854775744LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x413 = INT8_MIN;
	uint32_t x414 = 1077491879U;
	static int16_t x415 = 25;
	int16_t x416 = INT16_MIN;
	uint32_t t93 = 1459551U;

	t93 = ((x413-x414)&(x415^x416));

	if (t93 != 3217457177U) { NG(); } else { ; }
	
}

void f94(void) {


	t94 = ((x417-x418)&(x419^x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = -1;
	uint32_t x422 = 2520U;
	int64_t x423 = INT64_MIN;
	int32_t x424 = -1;
	volatile int64_t t95 = -2042098877LL;

	t95 = ((x421-x422)&(x423^x424));

	if (t95 != 4294964775LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x427 = -777165;
	int64_t t96 = 1571837825489133546LL;

	t96 = ((x425-x426)&(x427^x428));

	if (t96 != 672584LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = INT16_MIN;
	static int8_t x430 = -1;
	int8_t x431 = 1;
	volatile int32_t t97 = 6264;

	t97 = ((x429-x430)&(x431^x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x433 = INT16_MAX;
	uint64_t x434 = 1122881LLU;
	int8_t x435 = 60;
	static int16_t x436 = INT16_MIN;
	volatile uint64_t t98 = 57LLU;

	t98 = ((x433-x434)&(x435^x436));

	if (t98 != 18446744073708437564LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t99 = 4440778399261089079LLU;

	t99 = ((x437-x438)&(x439^x440));

	if (t99 != 14073647140340842752LLU) { NG(); } else { ; }
	
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

