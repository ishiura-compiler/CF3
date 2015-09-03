#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
int16_t x14 = INT16_MIN;
int32_t x15 = INT32_MIN;
volatile uint64_t t4 = 103129LLU;
uint32_t x21 = 101975383U;
uint64_t x22 = 95LLU;
int8_t x23 = -1;
uint8_t x25 = UINT8_MAX;
static volatile int8_t x26 = INT8_MAX;
volatile int64_t x30 = 14008444037LL;
int32_t x37 = 429018;
static int32_t x38 = -16272481;
volatile uint16_t x41 = UINT16_MAX;
uint32_t x46 = 7U;
volatile int64_t t11 = 16LL;
uint32_t x52 = 28U;
volatile uint8_t x63 = 73U;
volatile uint64_t t15 = 5121632LLU;
volatile int64_t x74 = INT64_MAX;
int64_t x75 = INT64_MIN;
volatile int64_t t18 = -33676297153533LL;
int64_t x78 = -29726LL;
volatile uint8_t x82 = 1U;
int8_t x88 = INT8_MIN;
int64_t x89 = INT64_MAX;
int32_t x97 = INT32_MIN;
int8_t x98 = -1;
int16_t x101 = INT16_MAX;
int16_t x103 = INT16_MAX;
uint32_t t26 = 143U;
int8_t x114 = -1;
static int32_t x116 = -1;
uint64_t t28 = 15927389LLU;
volatile int64_t t30 = -105LL;
static volatile uint32_t x126 = 404526177U;
int64_t x134 = 1LL;
static int8_t x137 = 11;
uint32_t x141 = 3537U;
volatile uint64_t t36 = 43139886LLU;
uint16_t x154 = 3695U;
int8_t x159 = INT8_MAX;
int8_t x163 = 55;
int32_t x174 = 405056;
static uint16_t x189 = 9438U;
volatile uint16_t x210 = UINT16_MAX;
int16_t x211 = -1;
int16_t x213 = INT16_MAX;
static uint8_t x215 = 6U;
uint8_t x220 = UINT8_MAX;
static uint64_t x231 = 5908544839308127538LLU;
static uint64_t t57 = 8989318829217LLU;
uint8_t x235 = 104U;
volatile int32_t t58 = -3;
volatile int8_t x239 = INT8_MAX;
uint32_t x243 = UINT32_MAX;
volatile int16_t x246 = -2;
static int16_t x247 = 56;
static int32_t t61 = 229883;
volatile int32_t x253 = INT32_MIN;
int32_t x258 = -1;
volatile int8_t x260 = -49;
int32_t x262 = -130587;
static uint8_t x265 = UINT8_MAX;
int8_t x266 = -1;
static uint64_t x268 = UINT64_MAX;
volatile uint64_t t66 = 15003LLU;
int16_t x272 = -1;
int16_t x274 = -1;
int32_t x276 = INT32_MIN;
uint64_t x279 = 3LLU;
int32_t x286 = 107467;
static uint64_t x288 = 410323106LLU;
static int32_t x296 = -152345;
static int8_t x298 = INT8_MAX;
uint64_t x302 = 235361903225727338LLU;
int32_t x309 = INT32_MAX;
int16_t x319 = INT16_MIN;
volatile uint64_t t80 = 67263347494833731LLU;
volatile uint8_t x325 = 7U;
volatile int32_t x326 = -1;
int16_t x334 = INT16_MIN;
uint8_t x340 = UINT8_MAX;
int64_t x342 = INT64_MIN;
volatile int64_t t85 = 217LL;
static volatile int16_t x345 = -1;
int32_t t86 = 0;
uint64_t t90 = 105743365661034313LLU;
int32_t x365 = INT32_MIN;
static int64_t x371 = INT64_MAX;
uint32_t x375 = UINT32_MAX;
uint32_t t94 = 26U;
static int32_t x383 = INT32_MIN;
uint64_t t96 = 71756327079267340LLU;
int32_t x391 = INT32_MIN;
uint64_t x392 = 111120499677LLU;
uint32_t x398 = 3330U;


void f0(void) {
	uint8_t x1 = 1U;
	int32_t x2 = INT32_MIN;
	volatile int64_t x3 = -2659LL;
	static volatile int8_t x4 = -1;
	volatile int64_t t0 = -2184479LL;

	t0 = (x1&((x2|x3)^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	static uint32_t x6 = 1996361U;
	int16_t x7 = 1;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 1002787U;

	t1 = (x5&((x6|x7)^x8));

	if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = 6U;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = -5383LL;

	t2 = (x9&((x10|x11)^x12));

	if (t2 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 9U;
	volatile int64_t x16 = 15LL;
	int64_t t3 = 31973654027596LL;

	t3 = (x13&((x14|x15)^x16));

	if (t3 != 9LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	static int16_t x18 = INT16_MIN;
	uint64_t x19 = 2896242953255158810LLU;
	static uint32_t x20 = 18721U;

	t4 = (x17&((x18|x19)^x20));

	if (t4 != 59LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x24 = -65;
	static uint64_t t5 = 1032483272LLU;

	t5 = (x21&((x22|x23)^x24));

	if (t5 != 64LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x27 = 991LLU;
	uint16_t x28 = 2906U;
	static uint64_t t6 = 138LLU;

	t6 = (x25&((x26|x27)^x28));

	if (t6 != 165LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static uint32_t x31 = 1U;
	static int8_t x32 = -1;
	int64_t t7 = -191LL;

	t7 = (x29&((x30|x31)^x32));

	if (t7 != 1023941498LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static volatile int64_t x34 = -1LL;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MIN;
	int64_t t8 = -9LL;

	t8 = (x33&((x34|x35)^x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x39 = 2002U;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 58687LL;

	t9 = (x37&((x38|x39)^x40));

	if (t9 != 426970LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 1LLU;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = UINT16_MAX;
	uint64_t t10 = 273772019912LLU;

	t10 = (x41&((x42|x43)^x44));

	if (t10 != 65534LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x47 = -1;
	int16_t x48 = 1;

	t11 = (x45&((x46|x47)^x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 18;
	int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	uint32_t t12 = 37662607U;

	t12 = (x49&((x50|x51)^x52));

	if (t12 != 2U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -8;
	int32_t x54 = 3461050;
	uint64_t x55 = 59886667792LLU;
	uint8_t x56 = 33U;
	uint64_t t13 = 178886686LLU;

	t13 = (x53&((x54|x55)^x56));

	if (t13 != 59889864600LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 2;
	static int16_t x58 = INT16_MIN;
	int64_t x59 = 59765LL;
	int32_t x60 = -964258;
	volatile int64_t t14 = 62412LL;

	t14 = (x57&((x58|x59)^x60));

	if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -11542175751248029LL;
	volatile uint64_t x62 = UINT64_MAX;
	int32_t x64 = INT32_MAX;

	t15 = (x61&((x62|x63)^x64));

	if (t15 != 18435201896709881856LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 0;
	int32_t x66 = INT32_MAX;
	int64_t x67 = -1684LL;
	static volatile uint32_t x68 = UINT32_MAX;
	static volatile int64_t t16 = -6LL;

	t16 = (x65&((x66|x67)^x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MAX;
	int8_t x70 = 3;
	int32_t x71 = 3;
	static uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 1881889380611294LLU;

	t17 = (x69&((x70|x71)^x72));

	if (t17 != 2147483644LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	volatile uint8_t x76 = 33U;

	t18 = (x73&((x74|x75)^x76));

	if (t18 != -34LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = -10058;
	uint16_t x79 = 240U;
	static volatile uint8_t x80 = 39U;
	int64_t t19 = -8008130357LL;

	t19 = (x77&((x78|x79)^x80));

	if (t19 != -30572LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	int16_t x83 = INT16_MAX;
	volatile int64_t x84 = -1LL;
	volatile int64_t t20 = -508120LL;

	t20 = (x81&((x82|x83)^x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	volatile int8_t x86 = 1;
	int8_t x87 = 0;
	uint64_t t21 = 42751923794006181LLU;

	t21 = (x85&((x86|x87)^x88));

	if (t21 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MAX;
	int8_t x91 = INT8_MAX;
	uint16_t x92 = 56U;
	static int64_t t22 = 21139394167LL;

	t22 = (x89&((x90|x91)^x92));

	if (t22 != 71LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 32187083U;
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = 98612479933212LLU;
	volatile int64_t x96 = 749LL;
	uint64_t t23 = 3864LLU;

	t23 = (x93&((x94|x95)^x96));

	if (t23 != 32186370LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x99 = -100;
	int8_t x100 = INT8_MAX;
	int32_t t24 = INT32_MIN;

	t24 = (x97&((x98|x99)^x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = INT8_MIN;
	static volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 2640350714025392LLU;

	t25 = (x101&((x102|x103)^x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -619;
	int16_t x106 = -1;
	static uint32_t x107 = UINT32_MAX;
	volatile int16_t x108 = INT16_MIN;

	t26 = (x105&((x106|x107)^x108));

	if (t26 != 32149U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	int64_t x111 = -1LL;
	uint32_t x112 = UINT32_MAX;
	int64_t t27 = -3215370033310824241LL;

	t27 = (x109&((x110|x111)^x112));

	if (t27 != -4294967296LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 7922746343160471LLU;
	int64_t x115 = -1LL;

	t28 = (x113&((x114|x115)^x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile int32_t x118 = 0;
	uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t29 = 5048833123960956797LLU;

	t29 = (x117&((x118|x119)^x120));

	if (t29 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -52;
	volatile uint32_t x122 = 6U;
	volatile int16_t x123 = 4836;
	int64_t x124 = INT64_MAX;

	t30 = (x121&((x122|x123)^x124));

	if (t30 != 9223372036854770952LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -105536LL;
	volatile int64_t x127 = -463775LL;
	int16_t x128 = -1;
	int64_t t31 = -3078479746690586053LL;

	t31 = (x125&((x126|x127)^x128));

	if (t31 != 131968LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 37660U;
	int8_t x130 = 1;
	uint16_t x131 = 12U;
	volatile uint16_t x132 = 14U;
	uint32_t t32 = 1395433U;

	t32 = (x129&((x130|x131)^x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x135 = -33;
	int16_t x136 = INT16_MIN;
	volatile int64_t t33 = 3LL;

	t33 = (x133&((x134|x135)^x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = -669;
	volatile int64_t x139 = 13457LL;
	int16_t x140 = INT16_MAX;
	int64_t t34 = 71707286077327692LL;

	t34 = (x137&((x138|x139)^x140));

	if (t34 != 8LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = UINT8_MAX;
	static int64_t x143 = INT64_MIN;
	uint16_t x144 = 3U;
	volatile int64_t t35 = -82430283246LL;

	t35 = (x141&((x142|x143)^x144));

	if (t35 != 208LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	volatile int8_t x146 = 9;
	static uint64_t x147 = UINT64_MAX;
	volatile int16_t x148 = -252;

	t36 = (x145&((x146|x147)^x148));

	if (t36 != 251LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 804897147250LLU;
	volatile uint64_t t37 = 289001310LLU;

	t37 = (x149&((x150|x151)^x152));

	if (t37 != 14066LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -10923007;
	volatile uint16_t x155 = UINT16_MAX;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t38 = 1601091579LL;

	t38 = (x153&((x154|x155)^x156));

	if (t38 != -9223372036854754303LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 2U;
	static volatile uint8_t x158 = 99U;
	int8_t x160 = -1;
	int32_t t39 = -2673;

	t39 = (x157&((x158|x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int8_t x162 = -1;
	static volatile uint8_t x164 = 25U;
	uint64_t t40 = 122782LLU;

	t40 = (x161&((x162|x163)^x164));

	if (t40 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MAX;
	static int8_t x168 = INT8_MIN;
	static uint64_t t41 = 16728308644LLU;

	t41 = (x165&((x166|x167)^x168));

	if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MAX;
	volatile int64_t t42 = 3400LL;

	t42 = (x169&((x170|x171)^x172));

	if (t42 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static uint8_t x175 = 3U;
	int64_t x176 = INT64_MIN;
	static volatile uint64_t t43 = 4005LLU;

	t43 = (x173&((x174|x175)^x176));

	if (t43 != 9223372036855180867LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -6;
	volatile int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	int64_t x180 = 1710147223LL;
	volatile int64_t t44 = -72507LL;

	t44 = (x177&((x178|x179)^x180));

	if (t44 != -1710147224LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -33;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = -6156;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t45 = 37558LLU;

	t45 = (x181&((x182|x183)^x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int32_t x186 = -513694;
	uint64_t x187 = 834LLU;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t46 = 4114419255LLU;

	t46 = (x185&((x186|x187)^x188));

	if (t46 != 9223372036854262626LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x190 = -1;
	int16_t x191 = 15;
	volatile int16_t x192 = -55;
	int32_t t47 = -1970662;

	t47 = (x189&((x190|x191)^x192));

	if (t47 != 22) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static int64_t x194 = -836717683194LL;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = 12U;
	int64_t t48 = -16648671LL;

	t48 = (x193&((x194|x195)^x196));

	if (t48 != 9223371200137092851LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 374LLU;
	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	static uint16_t x200 = UINT16_MAX;
	static volatile uint64_t t49 = 887439831806LLU;

	t49 = (x197&((x198|x199)^x200));

	if (t49 != 374LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 2U;
	int16_t x202 = 0;
	static int16_t x203 = INT16_MIN;
	static uint8_t x204 = UINT8_MAX;
	int32_t t50 = -53244;

	t50 = (x201&((x202|x203)^x204));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -14215;
	uint64_t x206 = 51088482207976348LLU;
	int32_t x207 = 419978;
	uint16_t x208 = 332U;
	volatile uint64_t t51 = 6LLU;

	t51 = (x205&((x206|x207)^x208));

	if (t51 != 51088482207975504LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = 26895;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -586202669;

	t52 = (x209&((x210|x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MAX;
	int64_t x216 = INT64_MIN;
	int64_t t53 = -202188294216044275LL;

	t53 = (x213&((x214|x215)^x216));

	if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 103U;
	int32_t x218 = 1861985;
	uint64_t x219 = UINT64_MAX;
	volatile uint64_t t54 = 5317181855LLU;

	t54 = (x217&((x218|x219)^x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = -1;
	volatile int64_t x222 = INT64_MIN;
	static uint32_t x223 = 58757U;
	int16_t x224 = INT16_MIN;
	volatile int64_t t55 = -744679LL;

	t55 = (x221&((x222|x223)^x224));

	if (t55 != 9223372036854736261LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint16_t x226 = 121U;
	int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = INT32_MIN;

	t56 = (x225&((x226|x227)^x228));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	uint32_t x230 = 59U;
	int8_t x232 = 2;

	t57 = (x229&((x230|x231)^x232));

	if (t57 != 5908544839308127545LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	int32_t x234 = -1;
	int32_t x236 = -65395;

	t58 = (x233&((x234|x235)^x236));

	if (t58 != 65394) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	uint32_t x238 = 65932566U;
	uint8_t x240 = UINT8_MAX;
	uint64_t t59 = 4052902427LLU;

	t59 = (x237&((x238|x239)^x240));

	if (t59 != 65932672LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	static int64_t x242 = -1LL;
	int16_t x244 = INT16_MIN;
	static int64_t t60 = -8146973334015LL;

	t60 = (x241&((x242|x243)^x244));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 1658U;
	volatile int8_t x248 = INT8_MAX;

	t61 = (x245&((x246|x247)^x248));

	if (t61 != 1536) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = 2;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MAX;
	static int32_t t62 = 287959;

	t62 = (x249&((x250|x251)^x252));

	if (t62 != 125) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x254 = -1LL;
	static int32_t x255 = INT32_MIN;
	static volatile uint64_t x256 = 168LLU;
	volatile uint64_t t63 = 136323484950LLU;

	t63 = (x253&((x254|x255)^x256));

	if (t63 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = 3757800017153LLU;
	static int16_t x259 = INT16_MIN;
	uint64_t t64 = 742861920714088945LLU;

	t64 = (x257&((x258|x259)^x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	int64_t x263 = INT64_MIN;
	int8_t x264 = 0;
	int64_t t65 = -34936128071701LL;

	t65 = (x261&((x262|x263)^x264));

	if (t65 != -130587LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x267 = UINT16_MAX;

	t66 = (x265&((x266|x267)^x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1131059552314121371LL;
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	static volatile int64_t t67 = 2692655216087000676LL;

	t67 = (x269&((x270|x271)^x272));

	if (t67 != 1820402432LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x273 = 7198U;
	int16_t x275 = INT16_MAX;
	volatile int32_t t68 = -3;

	t68 = (x273&((x274|x275)^x276));

	if (t68 != 7198) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MAX;
	int64_t x278 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t69 = 114566353716289LLU;

	t69 = (x277&((x278|x279)^x280));

	if (t69 != 2147483523LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -3073;
	volatile uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	static int16_t x284 = INT16_MIN;
	volatile uint32_t t70 = 6208U;

	t70 = (x281&((x282|x283)^x284));

	if (t70 != 29695U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 58359911943302LL;
	static int16_t x287 = INT16_MIN;
	volatile uint64_t t71 = 664066LLU;

	t71 = (x285&((x286|x287)^x288));

	if (t71 != 58359504046080LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 3;
	int64_t x290 = INT64_MIN;
	int16_t x291 = 7;
	int32_t x292 = INT32_MIN;
	int64_t t72 = 133237201646544LL;

	t72 = (x289&((x290|x291)^x292));

	if (t72 != 3LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -8766;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = -3063941021689697906LL;
	volatile int64_t t73 = -5984423511275LL;

	t73 = (x293&((x294|x295)^x296));

	if (t73 != 848135488LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 3;
	uint8_t x299 = 1U;
	int8_t x300 = -1;
	volatile int32_t t74 = 0;

	t74 = (x297&((x298|x299)^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -1082;
	uint8_t x303 = 0U;
	volatile int16_t x304 = INT16_MAX;
	uint64_t t75 = 39952391440812373LLU;

	t75 = (x301&((x302|x303)^x304));

	if (t75 != 235361903225705092LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -1;
	static int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	int64_t x308 = 3432084548LL;
	int64_t t76 = -11312106312LL;

	t76 = (x305&((x306|x307)^x308));

	if (t76 != -3432084540LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	int8_t x311 = -7;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t77 = 11518LL;

	t77 = (x309&((x310|x311)^x312));

	if (t77 != 2147418118LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile uint64_t x314 = 462939LLU;
	int16_t x315 = -1;
	int32_t x316 = INT32_MIN;
	volatile uint64_t t78 = 244669063720317914LLU;

	t78 = (x313&((x314|x315)^x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	volatile int8_t x318 = 1;
	uint64_t x320 = 255152102LLU;
	uint64_t t79 = 29428506LLU;

	t79 = (x317&((x318|x319)^x320));

	if (t79 != 18446744073454407552LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 272272727006765871LLU;
	volatile int32_t x322 = -221;
	int8_t x323 = 4;
	int64_t x324 = INT64_MAX;

	t80 = (x321&((x322|x323)^x324));

	if (t80 != 8LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x327 = 1300497361277LLU;
	int32_t x328 = INT32_MIN;
	uint64_t t81 = 4874037255628456982LLU;

	t81 = (x325&((x326|x327)^x328));

	if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 22;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MAX;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t82 = 0;

	t82 = (x329&((x330|x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -45;
	uint16_t x335 = UINT16_MAX;
	uint16_t x336 = 435U;
	volatile int32_t t83 = -22444540;

	t83 = (x333&((x334|x335)^x336));

	if (t83 != -448) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MAX;
	uint32_t x339 = 2791U;
	volatile uint32_t t84 = 7U;

	t84 = (x337&((x338|x339)^x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 2595670U;
	int64_t x343 = INT64_MIN;
	volatile int64_t x344 = -1LL;

	t85 = (x341&((x342|x343)^x344));

	if (t85 != 2595670LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 31U;
	volatile int8_t x347 = 2;
	int16_t x348 = -1;

	t86 = (x345&((x346|x347)^x348));

	if (t86 != -32) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MAX;
	static uint64_t x351 = UINT64_MAX;
	volatile int16_t x352 = INT16_MIN;
	uint64_t t87 = 45299LLU;

	t87 = (x349&((x350|x351)^x352));

	if (t87 != 32640LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = -1562;
	volatile uint32_t x355 = UINT32_MAX;
	uint8_t x356 = UINT8_MAX;
	uint32_t t88 = 0U;

	t88 = (x353&((x354|x355)^x356));

	if (t88 != 4294967040U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = INT8_MAX;
	int32_t x359 = 3194;
	static uint32_t x360 = 375542150U;
	uint32_t t89 = 55718U;

	t89 = (x357&((x358|x359)^x360));

	if (t89 != 24057U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MAX;
	int8_t x363 = 1;
	uint64_t x364 = 31418215479LLU;

	t90 = (x361&((x362|x363)^x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = 190;
	int8_t x367 = 1;
	uint32_t x368 = UINT32_MAX;
	uint32_t t91 = 48268U;

	t91 = (x365&((x366|x367)^x368));

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x370 = 23;
	uint64_t x372 = 26886992827LLU;
	static uint64_t t92 = 2706141390654759608LLU;

	t92 = (x369&((x370|x371)^x372));

	if (t92 != 9223372009967779840LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MAX;
	volatile int8_t x376 = 5;
	volatile uint32_t t93 = 3U;

	t93 = (x373&((x374|x375)^x376));

	if (t93 != 2147483642U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	volatile int8_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = INT8_MIN;

	t94 = (x377&((x378|x379)^x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = 0;
	uint64_t x384 = 17279LLU;
	volatile uint64_t t95 = 64759LLU;

	t95 = (x381&((x382|x383)^x384));

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 5505706808249020703LLU;
	static int8_t x386 = INT8_MAX;
	int64_t x387 = INT64_MAX;
	static volatile int32_t x388 = -1;

	t96 = (x385&((x386|x387)^x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -20;
	int32_t x390 = INT32_MIN;
	uint64_t t97 = 20492928140372545LLU;

	t97 = (x389&((x390|x391)^x392));

	if (t97 != 18446743963639235532LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -409;
	static volatile uint64_t x394 = 1LLU;
	int8_t x395 = INT8_MAX;
	int8_t x396 = -1;
	volatile uint64_t t98 = 657LLU;

	t98 = (x393&((x394|x395)^x396));

	if (t98 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 4LLU;
	volatile uint16_t x399 = UINT16_MAX;
	static int64_t x400 = INT64_MIN;
	uint64_t t99 = 35523932589LLU;

	t99 = (x397&((x398|x399)^x400));

	if (t99 != 4LLU) { NG(); } else { ; }
	
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

