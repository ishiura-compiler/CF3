#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 0;
static volatile int64_t t0 = -167255300179LL;
volatile int16_t x5 = -1;
int32_t x8 = 6335103;
volatile int16_t x29 = INT16_MAX;
uint32_t x30 = 1U;
volatile int64_t t7 = -276464769536050LL;
static volatile int64_t x49 = -1LL;
static volatile uint32_t x56 = 3U;
static volatile int64_t x59 = -1LL;
int32_t x60 = 37;
int32_t x65 = INT32_MIN;
int64_t x73 = -1LL;
uint16_t x78 = UINT16_MAX;
int32_t x81 = INT32_MIN;
static volatile int64_t x84 = -1LL;
int64_t t16 = 475941471937268381LL;
volatile uint8_t x93 = 3U;
volatile int64_t t21 = -17213406130238436LL;
volatile uint16_t x112 = 345U;
int8_t x123 = -1;
int8_t x128 = INT8_MIN;
volatile uint64_t x132 = UINT64_MAX;
uint64_t t28 = 1719811063519744LLU;
volatile int32_t t29 = -2387;
int32_t x140 = INT32_MAX;
static volatile uint64_t t31 = 7484284484LLU;
int64_t x146 = 0LL;
int8_t x149 = -4;
static int32_t x152 = INT32_MIN;
volatile uint32_t t33 = 724063U;
volatile uint32_t x155 = 0U;
volatile int64_t t35 = -3LL;
static volatile int16_t x172 = INT16_MIN;
int32_t x175 = 846046307;
int64_t x176 = 0LL;
int64_t x177 = -1LL;
volatile int64_t t39 = -8010LL;
int16_t x188 = INT16_MIN;
volatile int32_t t40 = -124792282;
int8_t x194 = INT8_MIN;
int8_t x195 = 14;
int8_t x196 = INT8_MIN;
int8_t x205 = INT8_MIN;
uint16_t x206 = 3427U;
static uint32_t x216 = 1U;
int8_t x218 = 20;
static int16_t x224 = INT16_MIN;
uint32_t t48 = 416U;
volatile int8_t x225 = INT8_MAX;
static int16_t x231 = INT16_MIN;
static int8_t x242 = 1;
volatile int32_t x244 = INT32_MIN;
uint64_t x249 = UINT64_MAX;
int16_t x254 = INT16_MAX;
uint64_t x270 = 995105360117366638LLU;
static uint16_t x285 = UINT16_MAX;
uint64_t t63 = 135237212535302LLU;
int32_t x294 = -107;
volatile uint8_t x316 = UINT8_MAX;
int16_t x321 = -1;
int64_t x325 = 1LL;
int64_t x326 = 1LL;
volatile uint32_t t71 = 14U;
int32_t x338 = -129233;
static volatile uint32_t t73 = 5U;
volatile int32_t x343 = -6;
volatile uint64_t t74 = 11480619266LLU;
static int32_t x348 = INT32_MAX;
static int64_t x351 = -30306431270479LL;
int32_t t77 = -86606;
int16_t x369 = INT16_MIN;
int64_t x382 = 492LL;
int16_t x383 = -3546;
static int16_t x388 = -257;
uint16_t x389 = 1010U;
int32_t x392 = 379;
int16_t x393 = 1;
int16_t x398 = INT16_MIN;
static int16_t x402 = -1;
int16_t x407 = INT16_MAX;
int64_t x408 = INT64_MIN;
static int8_t x416 = INT8_MAX;
uint32_t t91 = 3886753U;
uint32_t x430 = UINT32_MAX;
static volatile int16_t x453 = INT16_MAX;
uint16_t x457 = 471U;
int8_t x458 = -17;
volatile uint32_t x463 = 120U;
uint16_t x471 = 22U;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = 674832334854674577LL;
	static volatile int64_t x4 = INT64_MAX;

	t0 = (x1-((x2+x3)^x4));

	if (t0 != -8548539702000133998LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 31;
	static int8_t x7 = 13;
	volatile int32_t t1 = -1906;

	t1 = (x5-((x6+x7)^x8));

	if (t1 != -6335060) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 908U;
	volatile int64_t x10 = 3805LL;
	int16_t x11 = INT16_MIN;
	static int16_t x12 = INT16_MIN;
	int64_t t2 = -1053697264709645LL;

	t2 = (x9-((x10+x11)^x12));

	if (t2 != -2897LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	uint16_t x14 = 4U;
	static int32_t x15 = -1;
	volatile uint8_t x16 = 6U;
	int32_t t3 = 1;

	t3 = (x13-((x14+x15)^x16));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 6843U;
	int8_t x18 = INT8_MIN;
	volatile int8_t x19 = INT8_MIN;
	int16_t x20 = 9;
	uint32_t t4 = 2432666U;

	t4 = (x17-((x18+x19)^x20));

	if (t4 != 7090U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x31 = 3140557U;
	volatile uint32_t x32 = 46831775U;
	volatile uint32_t t5 = 1517U;

	t5 = (x29-((x30+x31)^x32));

	if (t5 != 4246408366U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MIN;
	static int64_t x35 = 282196459794738719LL;
	uint16_t x36 = UINT16_MAX;
	static volatile int64_t t6 = -4168145LL;

	t6 = (x33-((x34+x35)^x36));

	if (t6 != -282196455499813345LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = -1LL;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = 43945;
	int16_t x48 = INT16_MIN;

	t7 = (x45-((x46+x47)^x48));

	if (t7 != -4294912937LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x50 = 0;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	int64_t t8 = 45LL;

	t8 = (x49-((x50+x51)^x52));

	if (t8 != 32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x53 = 211188U;
	uint8_t x54 = UINT8_MAX;
	uint32_t x55 = 2139U;
	uint32_t t9 = 666810U;

	t9 = (x53-((x54+x55)^x56));

	if (t9 != 208795U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 1;
	uint64_t x58 = 113235520772LLU;
	volatile uint64_t t10 = 5639712940LLU;

	t10 = (x57-((x58+x59)^x60));

	if (t10 != 18446743960474030811LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = -25900LL;
	volatile int16_t x63 = INT16_MIN;
	uint32_t x64 = 66096U;
	int64_t t11 = 399547LL;

	t11 = (x61-((x62+x63)^x64));

	if (t11 != -2147358948LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x66 = 1896293730024545LLU;
	int8_t x67 = -3;
	int64_t x68 = INT64_MAX;
	volatile uint64_t t12 = 1166533879431LLU;

	t12 = (x65-((x66+x67)^x68));

	if (t12 != 9225268328437316703LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -1;
	static int8_t x70 = INT8_MIN;
	uint16_t x71 = UINT16_MAX;
	uint8_t x72 = 1U;
	int32_t t13 = 1;

	t13 = (x69-((x70+x71)^x72));

	if (t13 != -65407) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x74 = INT32_MIN;
	uint8_t x75 = 1U;
	static int8_t x76 = INT8_MIN;
	volatile int64_t t14 = 330LL;

	t14 = (x73-((x74+x75)^x76));

	if (t14 != -2147483522LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = 29;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;
	int64_t t15 = 91960LL;

	t15 = (x77-((x78+x79)^x80));

	if (t15 != -9223372034707357666LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x82 = 77989LL;
	int64_t x83 = -1LL;

	t16 = (x81-((x82+x83)^x84));

	if (t16 != -2147405659LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	volatile int16_t x86 = INT16_MAX;
	static uint32_t x87 = 1372879969U;
	static int32_t x88 = -1;
	uint32_t t17 = 1192151U;

	t17 = (x85-((x86+x87)^x88));

	if (t17 != 3520396385U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x89 = 55538036591512415LLU;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = INT64_MAX;
	volatile uint64_t t18 = 2067895943LLU;

	t18 = (x89-((x90+x91)^x92));

	if (t18 != 9278910073446353631LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x94 = 6LLU;
	uint64_t x95 = UINT64_MAX;
	volatile int8_t x96 = -1;
	volatile uint64_t t19 = 320404783961LLU;

	t19 = (x93-((x94+x95)^x96));

	if (t19 != 9LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = 17324;
	int64_t t20 = -29880549407725876LL;

	t20 = (x97-((x98+x99)^x100));

	if (t20 != -15571LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = 44;
	int64_t x102 = 128755746808527941LL;
	uint32_t x103 = 276621532U;
	int32_t x104 = INT32_MAX;

	t21 = (x101-((x102+x103)^x104));

	if (t21 != -128755745212799666LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -1;
	uint8_t x106 = 64U;
	volatile int16_t x107 = -1;
	int32_t x108 = INT32_MIN;
	int32_t t22 = 531588104;

	t22 = (x105-((x106+x107)^x108));

	if (t22 != 2147483584) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 7241U;
	uint16_t x110 = 3813U;
	volatile int32_t x111 = INT32_MIN;
	volatile uint32_t t23 = 3746U;

	t23 = (x109-((x110+x111)^x112));

	if (t23 != 2147486861U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 5598U;
	volatile int8_t x114 = -1;
	int8_t x115 = 0;
	int64_t x116 = INT64_MIN;
	int64_t t24 = -2407427610LL;

	t24 = (x113-((x114+x115)^x116));

	if (t24 != -9223372036854770209LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = 148473514232LL;
	int8_t x118 = INT8_MAX;
	uint64_t x119 = 147LLU;
	int16_t x120 = -1;
	uint64_t t25 = 1LLU;

	t25 = (x117-((x118+x119)^x120));

	if (t25 != 148473514507LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 111U;
	static int16_t x122 = 3123;
	uint32_t x124 = UINT32_MAX;
	volatile uint32_t t26 = 23131U;

	t26 = (x121-((x122+x123)^x124));

	if (t26 != 3234U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	uint16_t x127 = 15229U;
	uint64_t t27 = 49974609460LLU;

	t27 = (x125-((x126+x127)^x128));

	if (t27 != 9223372036854790916LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x129 = 1U;
	uint32_t x130 = 56070U;
	int64_t x131 = -1LL;

	t28 = (x129-((x130+x131)^x132));

	if (t28 != 56071LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	int32_t x136 = 297893273;

	t29 = (x133-((x134+x135)^x136));

	if (t29 != -297894504) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	volatile int64_t x138 = -527LL;
	int16_t x139 = 206;
	volatile int64_t t30 = -84793328LL;

	t30 = (x137-((x138+x139)^x140));

	if (t30 != -9223372034707292480LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x141 = 90U;
	int16_t x142 = INT16_MAX;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = -1;

	t31 = (x141-((x142+x143)^x144));

	if (t31 != 32857LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MAX;
	int8_t x147 = -1;
	static int16_t x148 = INT16_MIN;
	static volatile int64_t t32 = 1181LL;

	t32 = (x145-((x146+x147)^x148));

	if (t32 != 2147450880LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x150 = UINT16_MAX;
	uint32_t x151 = UINT32_MAX;

	t33 = (x149-((x150+x151)^x152));

	if (t33 != 2147418110U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	static volatile int16_t x154 = -4370;
	static int32_t x156 = -97;
	volatile int64_t t34 = 55951LL;

	t34 = (x153-((x154+x155)^x156));

	if (t34 != -4466LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MAX;
	int16_t x163 = -6023;
	int64_t x164 = INT64_MIN;

	t35 = (x161-((x162+x163)^x164));

	if (t35 != -26744LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x169 = -379;
	volatile int16_t x170 = -1;
	int16_t x171 = INT16_MAX;
	static int32_t t36 = 46;

	t36 = (x169-((x170+x171)^x172));

	if (t36 != -377) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 2167076626854LLU;
	static int8_t x174 = INT8_MAX;
	uint64_t t37 = 62LLU;

	t37 = (x173-((x174+x175)^x176));

	if (t37 != 2166230580420LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x178 = 185305975U;
	uint8_t x179 = UINT8_MAX;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t38 = 741LLU;

	t38 = (x177-((x178+x179)^x180));

	if (t38 != 185306230LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	uint8_t x182 = 2U;
	int64_t x183 = -1LL;
	int32_t x184 = INT32_MAX;

	t39 = (x181-((x182+x183)^x184));

	if (t39 != -2147483519LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x185 = UINT16_MAX;
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;

	t40 = (x185-((x186+x187)^x188));

	if (t40 != 33023) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x189 = 54U;
	int16_t x190 = 37;
	static uint32_t x191 = 134526713U;
	static int8_t x192 = 0;
	volatile uint32_t t41 = 1U;

	t41 = (x189-((x190+x191)^x192));

	if (t41 != 4160440600U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = 22U;
	int32_t t42 = -13088565;

	t42 = (x193-((x194+x195)^x196));

	if (t42 != 8) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x197 = 11061U;
	int8_t x198 = -7;
	static volatile int16_t x199 = -12;
	int64_t x200 = -1LL;
	static volatile int64_t t43 = 100946LL;

	t43 = (x197-((x198+x199)^x200));

	if (t43 != 11043LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = 1;
	static uint32_t x202 = UINT32_MAX;
	int16_t x203 = -1;
	int32_t x204 = INT32_MAX;
	static uint32_t t44 = 7576855U;

	t44 = (x201-((x202+x203)^x204));

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x207 = -3107;
	volatile uint64_t x208 = UINT64_MAX;
	volatile uint64_t t45 = 16620361074LLU;

	t45 = (x205-((x206+x207)^x208));

	if (t45 != 193LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x213 = 6595010644133325388LLU;
	static uint8_t x214 = 16U;
	volatile int64_t x215 = INT64_MIN;
	uint64_t t46 = 500LLU;

	t46 = (x213-((x214+x215)^x216));

	if (t46 != 15818382680988101179LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -1;
	int64_t x219 = INT64_MIN;
	static volatile uint16_t x220 = 1U;
	volatile int64_t t47 = 1LL;

	t47 = (x217-((x218+x219)^x220));

	if (t47 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = UINT32_MAX;
	volatile int8_t x222 = 2;
	int8_t x223 = 0;

	t48 = (x221-((x222+x223)^x224));

	if (t48 != 32765U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x226 = UINT16_MAX;
	static int64_t x227 = 62291LL;
	uint64_t x228 = 208141279167LLU;
	uint64_t t49 = 16726278753LLU;

	t49 = (x225-((x226+x227)^x228));

	if (t49 != 18446743865568383890LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = -6186394071358LL;
	int8_t x232 = INT8_MAX;
	volatile int64_t t50 = 476274612LL;

	t50 = (x229-((x230+x231)^x232));

	if (t50 != -9223365850460671677LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x233 = 0U;
	uint16_t x234 = UINT16_MAX;
	int16_t x235 = -14616;
	int8_t x236 = -7;
	volatile int32_t t51 = 812;

	t51 = (x233-((x234+x235)^x236));

	if (t51 != 50914) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	volatile uint64_t t52 = 1LLU;

	t52 = (x237-((x238+x239)^x240));

	if (t52 != 4294967550LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x241 = 214U;
	uint32_t x243 = 1937258971U;
	volatile uint32_t t53 = 1U;

	t53 = (x241-((x242+x243)^x244));

	if (t53 != 210224890U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = -3;
	int8_t x246 = 1;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = 4664228583LLU;
	volatile uint64_t t54 = 8410101087LLU;

	t54 = (x245-((x246+x247)^x248));

	if (t54 != 6073189655LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x250 = 27U;
	int64_t x251 = INT64_MIN;
	static uint16_t x252 = 4805U;
	volatile uint64_t t55 = 29692557238LLU;

	t55 = (x249-((x250+x251)^x252));

	if (t55 != 9223372036854770977LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x253 = 121U;
	static uint8_t x255 = 4U;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t56 = 80187429U;

	t56 = (x253-((x254+x255)^x256));

	if (t56 != 32893U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = -1;
	int64_t x258 = INT64_MAX;
	static volatile int8_t x259 = -1;
	int8_t x260 = INT8_MIN;
	volatile int64_t t57 = 32671411165042LL;

	t57 = (x257-((x258+x259)^x260));

	if (t57 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x261 = INT8_MIN;
	int16_t x262 = 63;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	static volatile int32_t t58 = -337304;

	t58 = (x261-((x262+x263)^x264));

	if (t58 != -2147451071) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = 0U;
	volatile int64_t x266 = 382528696LL;
	int16_t x267 = -1;
	static int8_t x268 = -1;
	volatile int64_t t59 = -82892818LL;

	t59 = (x265-((x266+x267)^x268));

	if (t59 != 382528696LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	int64_t x272 = -67789301087LL;
	uint64_t t60 = 94635660202LLU;

	t60 = (x269-((x270+x271)^x272));

	if (t60 != 995105313804526900LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static uint8_t x279 = UINT8_MAX;
	volatile uint16_t x280 = 12U;
	int32_t t61 = 262554;

	t61 = (x277-((x278+x279)^x280));

	if (t61 != -116) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x286 = 0U;
	int64_t x287 = -1LL;
	int8_t x288 = 6;
	volatile int64_t t62 = -582LL;

	t62 = (x285-((x286+x287)^x288));

	if (t62 != 65542LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -9;
	volatile int16_t x290 = INT16_MAX;
	static uint64_t x291 = 100LLU;
	int32_t x292 = -1;

	t63 = (x289-((x290+x291)^x292));

	if (t63 != 32859LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MIN;
	uint8_t x295 = 8U;
	static uint64_t x296 = UINT64_MAX;
	uint64_t t64 = 1472610863734LLU;

	t64 = (x293-((x294+x295)^x296));

	if (t64 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = 13338U;
	int8_t x298 = INT8_MAX;
	static uint16_t x299 = 1201U;
	uint16_t x300 = 45U;
	static volatile int32_t t65 = 60997;

	t65 = (x297-((x298+x299)^x300));

	if (t65 != 12029) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = 15824946814995LLU;
	static uint32_t x303 = 0U;
	uint64_t x304 = 434963548075LLU;
	volatile uint64_t t66 = 1932LLU;

	t66 = (x301-((x302+x303)^x304));

	if (t66 != 18446728672803264456LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile uint16_t x311 = 8813U;
	int32_t x312 = INT32_MIN;
	uint32_t t67 = 685U;

	t67 = (x309-((x310+x311)^x312));

	if (t67 != 2147474962U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = 1314U;
	int32_t x314 = -34885891;
	int64_t x315 = INT64_MAX;
	volatile int64_t t68 = -34608045989LL;

	t68 = (x313-((x314+x315)^x316));

	if (t68 != -9223372036819888353LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x322 = INT8_MIN;
	volatile int8_t x323 = INT8_MIN;
	static uint32_t x324 = 632U;
	uint32_t t69 = 1594513U;

	t69 = (x321-((x322+x323)^x324));

	if (t69 != 647U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x327 = INT16_MIN;
	uint64_t x328 = 1859433592687605281LLU;
	static uint64_t t70 = 139510622650517LLU;

	t70 = (x325-((x326+x327)^x328));

	if (t70 != 1859433592687610337LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x329 = 13U;
	int16_t x330 = 1019;
	uint32_t x331 = 30930U;
	int32_t x332 = INT32_MIN;

	t71 = (x329-((x330+x331)^x332));

	if (t71 != 2147451712U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = 28U;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MAX;
	int64_t x336 = 42223LL;
	volatile int64_t t72 = 7876182385LL;

	t72 = (x333-((x334+x335)^x336));

	if (t72 != 42252LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MIN;
	int16_t x339 = 150;
	static uint32_t x340 = 100309U;

	t73 = (x337-((x338+x339)^x340));

	if (t73 != 4294967280U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = 188273483747190LLU;
	int8_t x342 = -1;
	uint8_t x344 = 6U;

	t74 = (x341-((x342+x343)^x344));

	if (t74 != 188273483747191LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = 0;
	uint32_t x347 = 1U;
	static uint32_t t75 = 748031894U;

	t75 = (x345-((x346+x347)^x348));

	if (t75 != 2147483522U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x349 = UINT16_MAX;
	uint32_t x350 = UINT32_MAX;
	int16_t x352 = INT16_MIN;
	int64_t t76 = -62301220LL;

	t76 = (x349-((x350+x351)^x352));

	if (t76 != -30302136205745LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MAX;
	int16_t x358 = 471;
	int8_t x359 = INT8_MAX;
	static int8_t x360 = INT8_MAX;

	t77 = (x357-((x358+x359)^x360));

	if (t77 != 2147483094) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = 165223532U;
	int16_t x362 = -1;
	int64_t x363 = -1LL;
	int16_t x364 = 3401;
	int64_t t78 = 561433529LL;

	t78 = (x361-((x362+x363)^x364));

	if (t78 != 165226933LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x365 = 9;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 59U;
	int32_t x368 = -1;
	volatile int32_t t79 = -8;

	t79 = (x365-((x366+x367)^x368));

	if (t79 != -32699) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = 943LL;
	volatile int16_t x372 = INT16_MIN;
	int64_t t80 = 2109453270752679518LL;

	t80 = (x369-((x370+x371)^x372));

	if (t80 != -815LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x373 = UINT16_MAX;
	volatile uint32_t x374 = 30U;
	static int8_t x375 = INT8_MIN;
	int16_t x376 = -902;
	volatile uint32_t t81 = 0U;

	t81 = (x373-((x374+x375)^x376));

	if (t81 != 64539U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MIN;
	volatile uint16_t x384 = 1397U;
	int64_t t82 = 86884868LL;

	t82 = (x381-((x382+x383)^x384));

	if (t82 != 3609LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x385 = -1;
	uint64_t x386 = 2LLU;
	volatile uint16_t x387 = 3009U;
	volatile uint64_t t83 = 15768450373486354LLU;

	t83 = (x385-((x386+x387)^x388));

	if (t83 != 2755LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x390 = INT8_MIN;
	int64_t x391 = -23388947058LL;
	static int64_t t84 = 2527LL;

	t84 = (x389-((x390+x391)^x392));

	if (t84 != 23388948349LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x394 = 23165U;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	static uint32_t t85 = 225612484U;

	t85 = (x393-((x394+x395)^x396));

	if (t85 != 9732U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = 1;
	int16_t x399 = 4;
	uint32_t x400 = UINT32_MAX;
	static uint32_t t86 = 3U;

	t86 = (x397-((x398+x399)^x400));

	if (t86 != 4294934534U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x401 = 21U;
	int32_t x403 = INT32_MAX;
	static uint64_t x404 = 3969180139925364258LLU;
	uint64_t t87 = 2178LLU;

	t87 = (x401-((x402+x403)^x404));

	if (t87 != 14477563933844135481LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = -760045580;
	static int64_t x406 = -1LL;
	volatile int64_t t88 = -1728726071927LL;

	t88 = (x405-((x406+x407)^x408));

	if (t88 != 9223372036094697462LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = 3;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = INT16_MIN;
	uint32_t t89 = 11450214U;

	t89 = (x413-((x414+x415)^x416));

	if (t89 != 32899U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x417 = INT8_MIN;
	volatile uint8_t x418 = 4U;
	volatile uint32_t x419 = UINT32_MAX;
	static int8_t x420 = -1;
	volatile uint32_t t90 = 86444U;

	t90 = (x417-((x418+x419)^x420));

	if (t90 != 4294967172U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MIN;
	static uint32_t x426 = 267682583U;
	static int32_t x427 = -1;
	int32_t x428 = INT32_MAX;

	t91 = (x425-((x426+x427)^x428));

	if (t91 != 2415133463U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = 22;
	static int8_t x431 = INT8_MIN;
	int16_t x432 = 510;
	volatile uint32_t t92 = 0U;

	t92 = (x429-((x430+x431)^x432));

	if (t92 != 405U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = 87;
	volatile int64_t x434 = -1LL;
	uint32_t x435 = 377U;
	uint16_t x436 = 3626U;
	int64_t t93 = 26621285010989LL;

	t93 = (x433-((x434+x435)^x436));

	if (t93 != -3835LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x441 = -1;
	static volatile uint8_t x442 = UINT8_MAX;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = 0;
	volatile int32_t t94 = -476380;

	t94 = (x441-((x442+x443)^x444));

	if (t94 != -65791) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x449 = INT16_MIN;
	int8_t x450 = 0;
	uint32_t x451 = UINT32_MAX;
	static int32_t x452 = -1;
	uint32_t t95 = 2809U;

	t95 = (x449-((x450+x451)^x452));

	if (t95 != 4294934528U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x454 = INT16_MIN;
	int16_t x455 = INT16_MAX;
	int16_t x456 = 23;
	volatile int32_t t96 = -12;

	t96 = (x453-((x454+x455)^x456));

	if (t96 != 32791) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x459 = 30;
	uint32_t x460 = UINT32_MAX;
	uint32_t t97 = 314U;

	t97 = (x457-((x458+x459)^x460));

	if (t97 != 485U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x461 = -10;
	int16_t x462 = INT16_MAX;
	volatile uint64_t x464 = UINT64_MAX;
	static volatile uint64_t t98 = 578136224686LLU;

	t98 = (x461-((x462+x463)^x464));

	if (t98 != 32878LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = INT32_MAX;
	uint64_t x470 = 315543985747675LLU;
	uint32_t x472 = 49505U;
	uint64_t t99 = 520351340826089LLU;

	t99 = (x469-((x470+x471)^x472));

	if (t99 != 18446428531871271023LLU) { NG(); } else { ; }
	
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

