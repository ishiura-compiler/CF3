#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = UINT8_MAX;
volatile int32_t t1 = -2007852;
static int16_t x28 = -1;
uint16_t x39 = UINT16_MAX;
uint8_t x49 = 108U;
int64_t x54 = -1LL;
int8_t x55 = INT8_MIN;
uint64_t x56 = UINT64_MAX;
volatile int16_t x65 = -1;
int64_t x66 = -1LL;
int8_t x67 = INT8_MIN;
int64_t x74 = INT64_MIN;
uint8_t x76 = 14U;
static int8_t x77 = INT8_MIN;
int16_t x79 = INT16_MIN;
uint32_t x83 = 143680U;
volatile uint64_t x96 = 159347328641709305LLU;
int64_t x104 = 7913094LL;
volatile int16_t x118 = -1;
static uint64_t x123 = 41217452460LLU;
static int64_t x124 = -5397586016065LL;
int32_t x129 = 1;
uint64_t x131 = 86720807LLU;
uint16_t x137 = 1724U;
uint64_t t30 = 60345318059LLU;
int8_t x146 = INT8_MAX;
static uint8_t x147 = 0U;
volatile uint8_t x148 = 3U;
int16_t x153 = -4376;
volatile uint8_t x155 = UINT8_MAX;
int32_t x161 = INT32_MIN;
uint64_t t36 = 60985483130953001LLU;
int16_t x173 = INT16_MAX;
static int8_t x174 = INT8_MAX;
int16_t x176 = INT16_MIN;
int32_t x179 = INT32_MIN;
static int64_t x193 = -1LL;
uint32_t x195 = UINT32_MAX;
uint64_t x202 = 2632156LLU;
int16_t x203 = INT16_MAX;
volatile uint32_t x209 = 156547U;
static volatile int64_t x230 = -1LL;
int64_t t48 = 7292492LL;
int8_t x238 = INT8_MIN;
static uint32_t x243 = 19573U;
static uint16_t x250 = 182U;
int64_t x254 = INT64_MIN;
static int64_t x260 = INT64_MIN;
uint64_t t55 = 13029263790681697LLU;
volatile uint32_t x267 = 942282U;
static int32_t x274 = 116212404;
static int8_t x276 = 5;
volatile uint64_t t57 = 110890201213045LLU;
int64_t x281 = INT64_MIN;
int64_t t59 = 0LL;
uint8_t x286 = 8U;
int64_t x288 = -1LL;
int64_t t60 = -267364026192LL;
int32_t x289 = 1572841;
static int32_t x298 = INT32_MIN;
static int32_t x299 = 8565;
static volatile int64_t t63 = 15860LL;
int8_t x307 = 0;
int64_t x308 = INT64_MAX;
int16_t x325 = INT16_MAX;
static int16_t x328 = -3897;
int8_t x330 = -3;
int64_t x336 = -1LL;
int16_t x338 = INT16_MAX;
int16_t x339 = INT16_MIN;
uint16_t x340 = 19977U;
uint16_t x352 = UINT16_MAX;
int32_t t71 = -154337;
uint16_t x362 = 3088U;
volatile int32_t t74 = 25;
volatile uint8_t x372 = 16U;
int64_t t78 = -71613323880431346LL;
uint32_t x383 = 13U;
int8_t x387 = -1;
int8_t x392 = -1;
uint16_t x393 = 2U;
static uint64_t x398 = 1156316427LLU;
uint32_t t84 = 420U;
uint32_t x405 = 143626U;
int8_t x407 = INT8_MAX;
volatile uint64_t t85 = 31726355582916LLU;
static volatile uint32_t x413 = 378427U;
uint16_t x426 = UINT16_MAX;
volatile int32_t x427 = INT32_MIN;
int64_t x433 = 13161991384570LL;
volatile int64_t x434 = -8178507LL;
volatile int32_t x436 = INT32_MAX;
static volatile int8_t x439 = INT8_MIN;
static uint16_t x441 = UINT16_MAX;
int32_t x447 = -1;
int32_t t96 = -3361;


void f0(void) {
	int16_t x2 = -1;
	int64_t x3 = INT64_MAX;
	volatile int32_t x4 = -1;
	static volatile int64_t t0 = -6549077LL;

	t0 = (x1&((x2+x3)+x4));

	if (t0 != 253LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int32_t x6 = -34711172;
	int8_t x7 = -1;
	int32_t x8 = -25;

	t1 = (x5&((x6+x7)+x8));

	if (t1 != -34711198) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	static uint32_t x10 = 197U;
	uint8_t x11 = UINT8_MAX;
	int64_t x12 = -1LL;
	static int64_t t2 = -11134912889208542LL;

	t2 = (x9&((x10+x11)+x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 1230714U;
	uint16_t x18 = 885U;
	int64_t x19 = 10961394LL;
	int64_t x20 = INT64_MIN;
	int64_t t3 = -1640152289403584176LL;

	t3 = (x17&((x18+x19)+x20));

	if (t3 != 148834LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MIN;
	int16_t x23 = 502;
	int64_t x24 = -1LL;
	volatile int64_t t4 = -758134642586516351LL;

	t4 = (x21&((x22+x23)+x24));

	if (t4 != -2147483147LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static uint16_t x27 = 446U;
	int32_t t5 = 19511531;

	t5 = (x25&((x26+x27)+x28));

	if (t5 != -32323) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 3U;
	volatile int32_t t6 = 22;

	t6 = (x29&((x30+x31)+x32));

	if (t6 != 65664) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = 3U;
	int64_t x38 = -124LL;
	int64_t x40 = -4089986427125LL;
	int64_t t7 = 458LL;

	t7 = (x37&((x38+x39)+x40));

	if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x41 = 107207399816LLU;
	volatile int8_t x42 = INT8_MIN;
	int64_t x43 = -1LL;
	int8_t x44 = 10;
	uint64_t t8 = 911067909LLU;

	t8 = (x41&((x42+x43)+x44));

	if (t8 != 107207399816LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -1;
	int16_t x46 = -1;
	uint32_t x47 = 7U;
	static int64_t x48 = INT64_MIN;
	static int64_t t9 = 94577422713658797LL;

	t9 = (x45&((x46+x47)+x48));

	if (t9 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = UINT16_MAX;
	static uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = -1LL;
	volatile uint64_t t10 = 1078125528582109LLU;

	t10 = (x49&((x50+x51)+x52));

	if (t10 != 108LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -1;
	volatile uint64_t t11 = 2837022LLU;

	t11 = (x53&((x54+x55)+x56));

	if (t11 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = -16118;
	uint32_t x62 = 489U;
	uint8_t x63 = UINT8_MAX;
	static int64_t x64 = -1713LL;
	static volatile int64_t t12 = 285745LL;

	t12 = (x61&((x62+x63)+x64));

	if (t12 != -16382LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x68 = INT32_MIN;
	volatile int64_t t13 = -68663290874100625LL;

	t13 = (x65&((x66+x67)+x68));

	if (t13 != -2147483777LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 3;
	int32_t x70 = 235;
	int16_t x71 = -8945;
	int16_t x72 = 124;
	volatile int32_t t14 = -41880432;

	t14 = (x69&((x70+x71)+x72));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 11U;
	int16_t x75 = 3;
	int64_t t15 = 16421236042375LL;

	t15 = (x73&((x74+x75)+x76));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x78 = 25U;
	static int8_t x80 = -2;
	volatile int32_t t16 = 16088;

	t16 = (x77&((x78+x79)+x80));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = -1;
	uint64_t x82 = 127460472105652LLU;
	volatile int32_t x84 = 10;
	uint64_t t17 = 949540290332856LLU;

	t17 = (x81&((x82+x83)+x84));

	if (t17 != 127460472249342LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	static volatile int16_t x86 = -3999;
	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t18 = 1834969;

	t18 = (x85&((x86+x87)+x88));

	if (t18 != -36895) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = -1;
	int8_t x94 = -10;
	int32_t x95 = INT32_MAX;
	volatile uint64_t t19 = 6142469LLU;

	t19 = (x93&((x94+x95)+x96));

	if (t19 != 159347330789192942LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = 34139083U;
	int16_t x99 = 1;
	int32_t x100 = INT32_MAX;
	volatile uint32_t t20 = 0U;

	t20 = (x97&((x98+x99)+x100));

	if (t20 != 2181622656U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int8_t x103 = -4;
	static volatile int64_t t21 = 188027062054166LL;

	t21 = (x101&((x102+x103)+x104));

	if (t21 != 7912962LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = INT64_MIN;
	volatile uint64_t x106 = UINT64_MAX;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 13U;
	static volatile uint64_t t22 = 2706LLU;

	t22 = (x105&((x106+x107)+x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -1;
	int8_t x110 = 14;
	int64_t x111 = 463467906LL;
	int64_t x112 = INT64_MIN;
	volatile int64_t t23 = -58531201817LL;

	t23 = (x109&((x110+x111)+x112));

	if (t23 != -9223372036391307888LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x117 = -1;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t24 = 805;

	t24 = (x117&((x118+x119)+x120));

	if (t24 != -65537) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -1;
	volatile uint8_t x122 = 76U;
	volatile uint64_t t25 = 40LLU;

	t25 = (x121&((x122+x123)+x124));

	if (t25 != 18446738717340988087LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 438612150U;
	volatile int32_t x127 = INT32_MIN;
	int32_t x128 = -1;
	volatile uint32_t t26 = 9008U;

	t26 = (x125&((x126+x127)+x128));

	if (t26 != 181U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x130 = INT8_MAX;
	volatile int32_t x132 = INT32_MAX;
	uint64_t t27 = 18923095LLU;

	t27 = (x129&((x130+x131)+x132));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = -1;
	int8_t x135 = 48;
	volatile int16_t x136 = INT16_MIN;
	static int32_t t28 = 448042;

	t28 = (x133&((x134+x135)+x136));

	if (t28 != 47) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x138 = INT32_MIN;
	uint16_t x139 = UINT16_MAX;
	uint64_t x140 = 4058897497LLU;
	volatile uint64_t t29 = 118466174104049579LLU;

	t29 = (x137&((x138+x139)+x140));

	if (t29 != 1048LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 3552967514801LLU;
	uint32_t x144 = 125440841U;

	t30 = (x141&((x142+x143)+x144));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x145 = 15U;
	uint32_t t31 = 1791U;

	t31 = (x145&((x146+x147)+x148));

	if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x149 = 940;
	static uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = UINT16_MAX;
	volatile uint64_t t32 = 63407016LLU;

	t32 = (x149&((x150+x151)+x152));

	if (t32 != 940LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = 14537287724149692LL;
	uint8_t x156 = UINT8_MAX;
	int64_t t33 = 13LL;

	t33 = (x153&((x154+x155)+x156));

	if (t33 != 14537287724149928LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x162 = UINT32_MAX;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = -11853;
	volatile uint32_t t34 = 78303853U;

	t34 = (x161&((x162+x163)+x164));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -3;
	static int16_t x166 = -537;
	uint16_t x167 = 5U;
	static int32_t x168 = 7975943;
	int32_t t35 = -2;

	t35 = (x165&((x166+x167)+x168));

	if (t35 != 7975409) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 51761266LLU;
	static uint32_t x170 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MAX;

	t36 = (x169&((x170+x171)+x172));

	if (t36 != 51761264LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x175 = 24;
	volatile int32_t t37 = -209789650;

	t37 = (x173&((x174+x175)+x176));

	if (t37 != 151) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 909573205411916439LLU;
	volatile int32_t x178 = INT32_MAX;
	int64_t x180 = 1890081206584145LL;
	static volatile uint64_t t38 = 100585932847LLU;

	t38 = (x177&((x178+x179)+x180));

	if (t38 != 1746027967824400LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = INT64_MAX;
	uint32_t x186 = UINT32_MAX;
	volatile uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = 0;
	static volatile int64_t t39 = 2653381803LL;

	t39 = (x185&((x186+x187)+x188));

	if (t39 != 254LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MAX;
	uint64_t x190 = 27639273609LLU;
	uint8_t x191 = UINT8_MAX;
	volatile uint16_t x192 = 5U;
	uint64_t t40 = 1LLU;

	t40 = (x189&((x190+x191)+x192));

	if (t40 != 27639273869LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x194 = 158454U;
	int8_t x196 = INT8_MIN;
	volatile int64_t t41 = 578266069LL;

	t41 = (x193&((x194+x195)+x196));

	if (t41 != 158325LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x201 = 14024;
	int64_t x204 = INT64_MIN;
	volatile uint64_t t42 = 58525LLU;

	t42 = (x201&((x202+x203)+x204));

	if (t42 != 8392LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = 29662LLU;
	int8_t x206 = -1;
	uint64_t x207 = 59806395598LLU;
	int32_t x208 = -951237;
	uint64_t t43 = 912000219243LLU;

	t43 = (x205&((x206+x207)+x208));

	if (t43 != 8456LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x210 = INT16_MAX;
	int32_t x211 = INT32_MIN;
	static int64_t x212 = INT64_MAX;
	volatile int64_t t44 = 112509893001LL;

	t44 = (x209&((x210+x211)+x212));

	if (t44 != 25474LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x217 = 500672723612LLU;
	int8_t x218 = INT8_MIN;
	int8_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t45 = 3LLU;

	t45 = (x217&((x218+x219)+x220));

	if (t45 != 500672723484LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = 2U;
	volatile uint8_t x222 = 0U;
	static volatile int8_t x223 = INT8_MIN;
	static int16_t x224 = -1;
	int32_t t46 = -1110952;

	t46 = (x221&((x222+x223)+x224));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x225 = INT8_MAX;
	uint64_t x226 = 3982906440398091102LLU;
	int8_t x227 = -3;
	volatile int64_t x228 = 2939744441LL;
	volatile uint64_t t47 = 3155964325124582915LLU;

	t47 = (x225&((x226+x227)+x228));

	if (t47 != 20LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x229 = 14571156U;
	static int16_t x231 = -1;
	volatile int32_t x232 = -75376859;

	t48 = (x229&((x230+x231)+x232));

	if (t48 != 8410624LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x233 = -21;
	volatile uint64_t x234 = 425086212376055302LLU;
	uint16_t x235 = UINT16_MAX;
	static int16_t x236 = INT16_MIN;
	static volatile uint64_t t49 = 122020270268LLU;

	t49 = (x233&((x234+x235)+x236));

	if (t49 != 425086212376088065LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	static int8_t x240 = 31;
	static int32_t t50 = -425;

	t50 = (x237&((x238+x239)+x240));

	if (t50 != -256) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	volatile uint8_t x242 = 101U;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t51 = 251U;

	t51 = (x241&((x242+x243)+x244));

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x245 = INT64_MIN;
	static int16_t x246 = INT16_MIN;
	int32_t x247 = -1004105;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t52 = -303LL;

	t52 = (x245&((x246+x247)+x248));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MIN;
	volatile int16_t x251 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t53 = 12;

	t53 = (x249&((x250+x251)+x252));

	if (t53 != -32384) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 2LLU;
	static volatile int8_t x255 = 8;
	static int16_t x256 = -1;
	volatile uint64_t t54 = 2731LLU;

	t54 = (x253&((x254+x255)+x256));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 7229556232249276688LLU;
	uint64_t x258 = 10916653973LLU;
	uint16_t x259 = 27471U;

	t55 = (x257&((x258+x259)+x260));

	if (t55 != 10782330880LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x265 = -1LL;
	uint32_t x266 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	int64_t t56 = 48613417333LL;

	t56 = (x265&((x266+x267)+x268));

	if (t56 != 909513LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = -1;
	static uint64_t x275 = UINT64_MAX;

	t57 = (x273&((x274+x275)+x276));

	if (t57 != 116212408LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x278 = 3164U;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 60LLU;
	volatile uint64_t t58 = 309989591017008LLU;

	t58 = (x277&((x278+x279)+x280));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x282 = 0U;
	int32_t x283 = -1;
	uint32_t x284 = UINT32_MAX;

	t59 = (x281&((x282+x283)+x284));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = 188430;
	int16_t x287 = -1;

	t60 = (x285&((x286+x287)+x288));

	if (t60 != 6LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x290 = 5501387220LL;
	int8_t x291 = 61;
	int16_t x292 = INT16_MAX;
	volatile int64_t t61 = 257170LL;

	t61 = (x289&((x290+x291)+x292));

	if (t61 != 66048LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MAX;
	static int8_t x294 = INT8_MAX;
	int64_t x295 = -1LL;
	volatile int32_t x296 = -1;
	int64_t t62 = 6LL;

	t62 = (x293&((x294+x295)+x296));

	if (t62 != 125LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	int64_t x300 = -1LL;

	t63 = (x297&((x298+x299)+x300));

	if (t63 != -2147475200LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x305 = -1;
	int32_t x306 = -1;
	volatile int64_t t64 = -269059731898LL;

	t64 = (x305&((x306+x307)+x308));

	if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = -1;
	int32_t x311 = 293799;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t65 = -14492;

	t65 = (x309&((x310+x311)+x312));

	if (t65 != -2147189850) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x321 = INT16_MAX;
	static uint16_t x322 = 12763U;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t66 = 207;

	t66 = (x321&((x322+x323)+x324));

	if (t66 != 12762) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x326 = -1LL;
	int64_t x327 = -3LL;
	int64_t t67 = -46101209751505LL;

	t67 = (x325&((x326+x327)+x328));

	if (t67 != 28867LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x329 = 517;
	static uint8_t x331 = 34U;
	int16_t x332 = -593;
	static int32_t t68 = 37777;

	t68 = (x329&((x330+x331)+x332));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x333 = -1;
	int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MAX;
	static int64_t t69 = -5279LL;

	t69 = (x333&((x334+x335)+x336));

	if (t69 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	volatile int64_t t70 = 143259LL;

	t70 = (x337&((x338+x339)+x340));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x349 = 0U;
	uint16_t x350 = UINT16_MAX;
	uint16_t x351 = 2U;

	t71 = (x349&((x350+x351)+x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x353 = UINT8_MAX;
	int64_t x354 = -1LL;
	int32_t x355 = -42;
	uint32_t x356 = 7788U;
	static volatile int64_t t72 = 130463777230049LL;

	t72 = (x353&((x354+x355)+x356));

	if (t72 != 65LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x357 = INT16_MIN;
	int16_t x358 = -7659;
	int64_t x359 = 1014909244587646LL;
	volatile uint8_t x360 = 5U;
	volatile int64_t t73 = 136186202669837LL;

	t73 = (x357&((x358+x359)+x360));

	if (t73 != 1014909244571648LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;

	t74 = (x361&((x362+x363)+x364));

	if (t74 != 35983) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x365 = 1U;
	volatile int32_t x366 = 27;
	static uint16_t x367 = 1937U;
	int32_t x368 = -148;
	volatile int32_t t75 = -4453109;

	t75 = (x365&((x366+x367)+x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x369 = 19533LLU;
	int8_t x370 = 12;
	volatile int32_t x371 = -5195;
	uint64_t t76 = 213157LLU;

	t76 = (x369&((x370+x371)+x372));

	if (t76 != 18497LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x373 = 1993U;
	uint16_t x374 = 101U;
	int16_t x375 = -5281;
	int64_t x376 = INT64_MAX;
	volatile int64_t t77 = -58225229207LL;

	t77 = (x373&((x374+x375)+x376));

	if (t77 != 961LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = INT8_MIN;
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = INT64_MIN;
	static int32_t x380 = -1;

	t78 = (x377&((x378+x379)+x380));

	if (t78 != -9223372036854710400LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x381 = 556LLU;
	int64_t x382 = 124LL;
	uint8_t x384 = 1U;
	static volatile uint64_t t79 = 87433998574LLU;

	t79 = (x381&((x382+x383)+x384));

	if (t79 != 8LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = -3LL;
	int32_t x388 = -1;
	volatile int64_t t80 = -404667362956323767LL;

	t80 = (x385&((x386+x387)+x388));

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 70U;
	int32_t x391 = -43489;
	int32_t t81 = -1731450;

	t81 = (x389&((x390+x391)+x392));

	if (t81 != -65536) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x394 = 1;
	int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;
	static int64_t t82 = 1LL;

	t82 = (x393&((x394+x395)+x396));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = INT64_MIN;
	static volatile uint16_t x399 = 1U;
	volatile uint16_t x400 = UINT16_MAX;
	uint64_t t83 = 420901097848896LLU;

	t83 = (x397&((x398+x399)+x400));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = 57896026;
	static uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 2U;
	uint8_t x404 = UINT8_MAX;

	t84 = (x401&((x402+x403)+x404));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x406 = -1LL;
	uint64_t x408 = 462649276720581719LLU;

	t85 = (x405&((x406+x407)+x408));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = -1;
	uint16_t x410 = 774U;
	static int8_t x411 = INT8_MIN;
	int32_t x412 = 0;
	static volatile int32_t t86 = 199516332;

	t86 = (x409&((x410+x411)+x412));

	if (t86 != 646) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x414 = 42679478U;
	uint64_t x415 = UINT64_MAX;
	uint64_t x416 = UINT64_MAX;
	uint64_t t87 = 24348953612LLU;

	t87 = (x413&((x414+x415)+x416));

	if (t87 != 66608LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x417 = UINT16_MAX;
	uint32_t x418 = 45756703U;
	int16_t x419 = -1;
	uint16_t x420 = UINT16_MAX;
	uint32_t t88 = 8612987U;

	t88 = (x417&((x418+x419)+x420));

	if (t88 != 12573U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x421 = INT32_MAX;
	static int16_t x422 = INT16_MIN;
	static uint8_t x423 = 0U;
	int8_t x424 = 0;
	volatile int32_t t89 = -81;

	t89 = (x421&((x422+x423)+x424));

	if (t89 != 2147450880) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x425 = INT16_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t90 = -100928;

	t90 = (x425&((x426+x427)+x428));

	if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = UINT64_MAX;
	volatile uint8_t x430 = 1U;
	static int8_t x431 = 6;
	int8_t x432 = INT8_MAX;
	static volatile uint64_t t91 = 659412013120503LLU;

	t91 = (x429&((x430+x431)+x432));

	if (t91 != 134LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x435 = UINT64_MAX;
	uint64_t t92 = 6246425969LLU;

	t92 = (x433&((x434+x435)+x436));

	if (t92 != 58860722LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x437 = -1;
	uint64_t x438 = 60722275455232LLU;
	volatile int64_t x440 = 10678LL;
	volatile uint64_t t93 = 192942LLU;

	t93 = (x437&((x438+x439)+x440));

	if (t93 != 60722275465782LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x442 = 11664U;
	int64_t x443 = -2380604681462479406LL;
	volatile int32_t x444 = -1;
	static volatile int64_t t94 = 5962997280LL;

	t94 = (x441&((x442+x443)+x444));

	if (t94 != 13153LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x445 = INT16_MIN;
	int16_t x446 = 1734;
	int16_t x448 = -1;
	static volatile int32_t t95 = 6371;

	t95 = (x445&((x446+x447)+x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x453 = 0;
	uint16_t x454 = 5366U;
	volatile int8_t x455 = INT8_MIN;
	uint16_t x456 = UINT16_MAX;

	t96 = (x453&((x454+x455)+x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = INT8_MIN;
	int32_t x458 = INT32_MAX;
	int64_t x459 = 413339231673074763LL;
	uint32_t x460 = 39229U;
	volatile int64_t t97 = 1008231925617731758LL;

	t97 = (x457&((x458+x459)+x460));

	if (t97 != 413339233820597632LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = UINT8_MAX;
	volatile uint8_t x462 = 102U;
	uint32_t x463 = 1808U;
	int32_t x464 = -1;
	uint32_t t98 = 0U;

	t98 = (x461&((x462+x463)+x464));

	if (t98 != 117U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MAX;
	int16_t x466 = -4959;
	static int8_t x467 = 0;
	int8_t x468 = 13;
	volatile int32_t t99 = 7;

	t99 = (x465&((x466+x467)+x468));

	if (t99 != 46) { NG(); } else { ; }
	
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

